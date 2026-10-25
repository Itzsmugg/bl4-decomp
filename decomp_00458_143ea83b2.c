// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143ea83b2 FUN_143ea83b2 body=57 status=ok
// SIG undefined FUN_143ea83b2(void)

undefined8 * FUN_143ea83b2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4573a0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea83ec FUN_143ea83ec body=344 status=ok
// SIG undefined FUN_143ea83ec(void)

void FUN_143ea83ec(longlong *param_1)

{
  longlong *plVar1;
  size_t sVar2;
  uint uVar3;
  longlong lVar4;
  wchar_t *_Str;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  longlong local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((int)param_1[3] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)param_1[2];
  }
  lVar4 = param_1[4];
  plVar1 = *(longlong **)(*param_1 + 0x160);
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
  }
  else {
    local_e8 = lVar4;
    sVar2 = wcslen(_Str);
    local_50 = FUN_14475aa65(0,_Str,sVar2 & 0xffffffff);
    uVar3 = local_50 + 1;
    local_58 = (undefined1 *)0x0;
    if (0x80 < uVar3) {
      FUN_1446efa72(&local_60,0,uVar3,1);
      local_58 = local_60;
    }
    if (local_58 == (undefined1 *)0x0) {
      local_58 = local_e0;
    }
    FUN_14475a98a(local_58,uVar3,_Str,(int)sVar2 + 1);
    lVar4 = local_e8;
  }
  local_f8 = param_1 + 6;
  (**(code **)(*plVar1 + 0x20))(plVar1,(int)param_1[1],local_58,lVar4);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ea8546 FUN_143ea8546 body=198 status=ok
// SIG undefined FUN_143ea8546(void)

undefined8 * FUN_143ea8546(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  *param_2 = puVar9;
  *puVar9 = &PTR_FUN_14b4573c0;
  *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(param_1 + 0x18);
  puVar9[2] = *(undefined8 *)(param_1 + 0x10);
  puVar9[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar9 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar9 + 4,iVar1,0);
    memcpy((void *)puVar9[4],_Src,(longlong)iVar1 * 2);
  }
  puVar9[6] = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  uVar8 = *(undefined8 *)(param_1 + 0x78);
  puVar9[8] = *(undefined8 *)(param_1 + 0x40);
  puVar9[9] = uVar2;
  puVar9[10] = uVar3;
  puVar9[0xb] = uVar4;
  puVar9[0xc] = uVar5;
  puVar9[0xd] = uVar6;
  puVar9[0xe] = uVar7;
  puVar9[0xf] = uVar8;
  return puVar9 + 2;
}



// FUNCTION 143ea8612 FUN_143ea8612 body=29 status=ok
// SIG undefined FUN_143ea8612(void)

void FUN_143ea8612(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ea8630 FUN_143ea8630 body=57 status=ok
// SIG undefined FUN_143ea8630(void)

undefined8 * FUN_143ea8630(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4573c0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea866a FUN_143ea866a body=328 status=ok
// SIG undefined FUN_143ea866a(void)

void FUN_143ea866a(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  size_t sVar3;
  uint uVar4;
  wchar_t *_Str;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((int)param_1[3] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)param_1[2];
  }
  lVar1 = param_1[4];
  plVar2 = *(longlong **)(*param_1 + 0x160);
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
  }
  else {
    sVar3 = wcslen(_Str);
    local_50 = FUN_14475aa65(0,_Str,sVar3 & 0xffffffff);
    uVar4 = local_50 + 1;
    local_58 = (undefined1 *)0x0;
    if (0x80 < uVar4) {
      FUN_1446efa72(&local_60,0,uVar4,1);
      local_58 = local_60;
    }
    if (local_58 == (undefined1 *)0x0) {
      local_58 = local_e0;
    }
    FUN_14475a98a(local_58,uVar4,_Str,(int)sVar3 + 1);
  }
  (**(code **)(*plVar2 + 0x28))(plVar2,(int)param_1[1],local_58,lVar1);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ea87b4 FUN_143ea87b4 body=166 status=ok
// SIG undefined FUN_143ea87b4(void)

undefined8 * FUN_143ea87b4(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14b4573e0;
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
  }
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  return puVar2 + 1;
}



// FUNCTION 143ea8860 FUN_143ea8860 body=29 status=ok
// SIG undefined FUN_143ea8860(void)

void FUN_143ea8860(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ea887e FUN_143ea887e body=57 status=ok
// SIG undefined FUN_143ea887e(void)

undefined8 * FUN_143ea887e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4573e0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea88b8 FUN_143ea88b8 body=90 status=ok
// SIG undefined FUN_143ea88b8(void)

undefined8
FUN_143ea88b8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  uStack_20 = param_3[1];
  local_38 = *(undefined4 *)(param_2 + 1);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = *(undefined4 *)(param_2 + 2);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  FUN_1489e3ea2(*param_2,param_1,&local_28,*param_4);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ea8946 FUN_143ea8946 body=29 status=ok
// SIG undefined FUN_143ea8946(void)

undefined8 FUN_143ea8946(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea8964 FUN_143ea8964 body=35 status=ok
// SIG undefined FUN_143ea8964(void)

undefined8 FUN_143ea8964(undefined8 param_1,undefined8 *param_2)

{
  FUN_1489e3b52(*param_2,param_1,*(undefined4 *)param_2[1]);
  return param_1;
}



// FUNCTION 143ea89a6 FUN_143ea89a6 body=12 status=ok
// SIG undefined FUN_143ea89a6(void)

void FUN_143ea89a6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ea89af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ea89b2 FUN_143ea89b2 body=29 status=ok
// SIG undefined FUN_143ea89b2(void)

undefined8 FUN_143ea89b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea89d0 FUN_143ea89d0 body=386 status=ok
// SIG undefined FUN_143ea89d0(void)

undefined8 FUN_143ea89d0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [136];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar9 = *param_2;
  local_e8[0] = 1;
  local_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  memset(local_c0,0,0x88);
  local_38 = 0x20702;
  lVar4 = param_2[1];
  local_100 = *(undefined8 *)(lVar4 + 0x40);
  local_f8 = *(undefined8 *)(lVar4 + 0x48);
  local_f0 = *(longlong *)(lVar4 + 0x50);
  if (local_f0 != 0) {
    LOCK();
    *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(lVar9 + 0x10);
  if (plVar5 == (longlong *)0x0) {
LAB_143ea8aa0:
    local_118 = 0;
    plStack_110 = (longlong *)0x0;
    bVar10 = true;
  }
  else {
    iVar8 = (int)plVar5[1];
    do {
      if (iVar8 == 0) goto LAB_143ea8aa0;
      LOCK();
      iVar7 = (int)plVar5[1];
      bVar10 = iVar8 == iVar7;
      if (bVar10) {
        *(int *)(plVar5 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar10);
    uVar6 = *(undefined8 *)(lVar9 + 8);
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
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    bVar10 = false;
    local_118 = uVar6;
    plStack_110 = plVar5;
  }
  plVar5 = plStack_110;
  lVar9 = FUN_1407c9a0c(local_e8,&local_118,&local_100);
  *(byte *)(lVar9 + 0xb4) = *(byte *)(lVar9 + 0xb4) | 0x40;
  FUN_1403d4c6e(param_1,lVar9);
  plVar1 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_110 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
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
  FUN_14493db24(local_e8);
  if ((local_30 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143ea8b72 FUN_143ea8b72 body=12 status=ok
// SIG undefined FUN_143ea8b72(void)

void FUN_143ea8b72(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ea8b7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ea8b7e FUN_143ea8b7e body=29 status=ok
// SIG undefined FUN_143ea8b7e(void)

undefined8 FUN_143ea8b7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea8b9c FUN_143ea8b9c body=40 status=ok
// SIG undefined FUN_143ea8b9c(void)

undefined8
FUN_143ea8b9c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  FUN_1489e40b0(*param_2,param_1,*param_3,param_4,*(undefined4 *)(param_2 + 1),
                *(undefined4 *)(param_2 + 2));
  return param_1;
}



// FUNCTION 143ea8bc4 FUN_143ea8bc4 body=628 status=ok
// SIG undefined FUN_143ea8bc4(void)

char * FUN_143ea8bc4(char *param_1,longlong *param_2,double *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar14 = *param_4;
  lVar5 = param_2[2];
  *(int *)*param_2 = (int)*param_3;
  *(int *)(*param_2 + 4) = (int)param_3[1];
  iVar12 = *(int *)param_2[1];
  if (iVar12 == 1) {
    FUN_1489e3a3e(lVar5,lVar14);
    puVar6 = (undefined4 *)*param_2;
    *(undefined8 *)(lVar5 + 0x380) = *(undefined8 *)(puVar6 + 4);
    uVar9 = puVar6[1];
    uVar10 = puVar6[2];
    uVar11 = puVar6[3];
    *(undefined4 *)(lVar5 + 0x370) = *puVar6;
    *(undefined4 *)(lVar5 + 0x374) = uVar9;
    *(undefined4 *)(lVar5 + 0x378) = uVar10;
    *(undefined4 *)(lVar5 + 0x37c) = uVar11;
    *(undefined1 *)(lVar5 + 0x389) = 1;
    iVar12 = *(int *)param_2[1];
  }
  if (iVar12 == 2) {
    *(undefined1 *)(lVar5 + 0x389) = 0;
  }
  if (lVar14 == 0) {
    *(undefined4 *)(lVar5 + 0x338) = 0;
    iVar12 = 0;
  }
  else {
    uVar4 = *(uint *)(lVar14 + 0xc);
    *(uint *)(lVar5 + 0x338) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar12 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar12 = *(int *)(lVar16 + 0x10);
      bVar17 = iVar12 == 0;
      if (bVar17) {
        *(int *)(lVar16 + 0x10) = iVar15;
        iVar12 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar12 = iVar15;
      }
    }
  }
  *(int *)(lVar5 + 0x33c) = iVar12;
  uVar7 = *(undefined8 *)(*(longlong *)(lVar14 + 0x220) + 8);
  uVar13 = FUN_1489cc492(lVar14);
  FUN_1489d1111(param_1,uVar7,*param_2,uVar13);
  if (*param_1 == '\x01') {
    lVar14 = param_2[3];
    local_50 = *(undefined8 *)(lVar14 + 0x40);
    local_48 = *(undefined8 *)(lVar14 + 0x48);
    local_40 = *(longlong *)(lVar14 + 0x50);
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    plVar8 = *(longlong **)(lVar5 + 0x10);
    if (plVar8 == (longlong *)0x0) {
LAB_143ea8d39:
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      bVar17 = true;
    }
    else {
      iVar12 = (int)plVar8[1];
      do {
        if (iVar12 == 0) goto LAB_143ea8d39;
        LOCK();
        iVar15 = (int)plVar8[1];
        bVar17 = iVar12 == iVar15;
        if (bVar17) {
          *(int *)(plVar8 + 1) = iVar12 + 1;
          iVar15 = iVar12;
        }
        iVar12 = iVar15;
        UNLOCK();
      } while (!bVar17);
      uVar7 = *(undefined8 *)(lVar5 + 8);
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      bVar17 = false;
      local_68 = uVar7;
      plStack_60 = plVar8;
    }
    plVar8 = plStack_60;
    lVar14 = FUN_1407c9a0c(param_1,&local_68,&local_50);
    *(byte *)(lVar14 + 0xb4) = *(byte *)(lVar14 + 0xb4) | 0x40;
    FUN_1402c17c2(param_1,lVar14);
    plVar1 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_60 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (!bVar17) {
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143ea8e3a FUN_143ea8e3a body=70 status=ok
// SIG undefined FUN_143ea8e3a(void)

undefined8 * FUN_143ea8e3a(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b457460;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 143ea8e86 FUN_143ea8e86 body=29 status=ok
// SIG undefined FUN_143ea8e86(void)

void FUN_143ea8e86(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ea8ea4 FUN_143ea8ea4 body=29 status=ok
// SIG undefined FUN_143ea8ea4(void)

undefined8 FUN_143ea8ea4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea8ec2 FUN_143ea8ec2 body=35 status=ok
// SIG undefined FUN_143ea8ec2(void)

undefined8 FUN_143ea8ec2(undefined8 param_1,undefined8 *param_2)

{
  FUN_1489e3ba6(*param_2,param_1,*(undefined4 *)param_2[1]);
  return param_1;
}



// FUNCTION 143ea8f04 FUN_143ea8f04 body=12 status=ok
// SIG undefined FUN_143ea8f04(void)

void FUN_143ea8f04(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ea8f0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ea8f10 FUN_143ea8f10 body=29 status=ok
// SIG undefined FUN_143ea8f10(void)

undefined8 FUN_143ea8f10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea8f2e FUN_143ea8f2e body=386 status=ok
// SIG undefined FUN_143ea8f2e(void)

undefined8 FUN_143ea8f2e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [136];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar9 = *param_2;
  local_e8[0] = 1;
  local_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  memset(local_c0,0,0x88);
  local_38 = 0x20702;
  lVar4 = param_2[1];
  local_100 = *(undefined8 *)(lVar4 + 0x40);
  local_f8 = *(undefined8 *)(lVar4 + 0x48);
  local_f0 = *(longlong *)(lVar4 + 0x50);
  if (local_f0 != 0) {
    LOCK();
    *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(lVar9 + 0x10);
  if (plVar5 == (longlong *)0x0) {
LAB_143ea8ffe:
    local_118 = 0;
    plStack_110 = (longlong *)0x0;
    bVar10 = true;
  }
  else {
    iVar8 = (int)plVar5[1];
    do {
      if (iVar8 == 0) goto LAB_143ea8ffe;
      LOCK();
      iVar7 = (int)plVar5[1];
      bVar10 = iVar8 == iVar7;
      if (bVar10) {
        *(int *)(plVar5 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar10);
    uVar6 = *(undefined8 *)(lVar9 + 8);
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
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    bVar10 = false;
    local_118 = uVar6;
    plStack_110 = plVar5;
  }
  plVar5 = plStack_110;
  lVar9 = FUN_1407c9a0c(local_e8,&local_118,&local_100);
  *(byte *)(lVar9 + 0xb4) = *(byte *)(lVar9 + 0xb4) | 0x40;
  FUN_1403d4c6e(param_1,lVar9);
  plVar1 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_110 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
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
  FUN_14493db24(local_e8);
  if ((local_30 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143ea90d0 FUN_143ea90d0 body=12 status=ok
// SIG undefined FUN_143ea90d0(void)

void FUN_143ea90d0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ea90d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ea90dc FUN_143ea90dc body=29 status=ok
// SIG undefined FUN_143ea90dc(void)

undefined8 FUN_143ea90dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea90fa FUN_143ea90fa body=705 status=ok
// SIG undefined FUN_143ea90fa(void)

char * FUN_143ea90fa(char *param_1,longlong *param_2,longlong *param_3,float *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar15 = *param_3;
  fVar4 = *param_4;
  fVar5 = param_4[1];
  lVar6 = param_2[2];
  plVar7 = *(longlong **)(*(longlong *)(lVar15 + 0x220) + 8);
  uVar12 = (**(code **)(*plVar7 + 0x68))(plVar7);
  *(int *)*param_2 = (int)((float)uVar12 * fVar4);
  uVar12 = (**(code **)(*plVar7 + 0x70))(plVar7);
  *(int *)(*param_2 + 4) = (int)((float)uVar12 * fVar5);
  iVar13 = *(int *)param_2[1];
  if (iVar13 == 1) {
    FUN_1489e3a3e(lVar6,lVar15);
    puVar8 = (undefined4 *)*param_2;
    *(undefined8 *)(lVar6 + 0x380) = *(undefined8 *)(puVar8 + 4);
    uVar9 = puVar8[1];
    uVar10 = puVar8[2];
    uVar11 = puVar8[3];
    *(undefined4 *)(lVar6 + 0x370) = *puVar8;
    *(undefined4 *)(lVar6 + 0x374) = uVar9;
    *(undefined4 *)(lVar6 + 0x378) = uVar10;
    *(undefined4 *)(lVar6 + 0x37c) = uVar11;
    *(undefined1 *)(lVar6 + 0x389) = 1;
    iVar13 = *(int *)param_2[1];
  }
  if (iVar13 == 2) {
    *(undefined1 *)(lVar6 + 0x389) = 0;
  }
  if (lVar15 == 0) {
    *(undefined4 *)(lVar6 + 0x338) = 0;
    iVar13 = 0;
  }
  else {
    uVar12 = *(uint *)(lVar15 + 0xc);
    *(uint *)(lVar6 + 0x338) = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar13 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar16 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar16);
      }
      LOCK();
      iVar13 = *(int *)(lVar17 + 0x10);
      bVar18 = iVar13 == 0;
      if (bVar18) {
        *(int *)(lVar17 + 0x10) = iVar16;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar18) {
        iVar13 = iVar16;
      }
    }
  }
  *(int *)(lVar6 + 0x33c) = iVar13;
  uVar14 = FUN_1489cc492(lVar15);
  FUN_1489d1111(param_1,plVar7,*param_2,uVar14);
  if (*param_1 == '\x01') {
    lVar15 = param_2[3];
    local_78 = *(undefined8 *)(lVar15 + 0x40);
    local_70 = *(undefined8 *)(lVar15 + 0x48);
    local_68 = *(longlong *)(lVar15 + 0x50);
    if (local_68 != 0) {
      LOCK();
      *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      UNLOCK();
    }
    plVar7 = *(longlong **)(lVar6 + 0x10);
    if (plVar7 == (longlong *)0x0) {
LAB_143ea92af:
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      bVar18 = true;
    }
    else {
      iVar13 = (int)plVar7[1];
      do {
        if (iVar13 == 0) goto LAB_143ea92af;
        LOCK();
        iVar16 = (int)plVar7[1];
        bVar18 = iVar13 == iVar16;
        if (bVar18) {
          *(int *)(plVar7 + 1) = iVar13 + 1;
          iVar16 = iVar13;
        }
        iVar13 = iVar16;
        UNLOCK();
      } while (!bVar18);
      uVar14 = *(undefined8 *)(lVar6 + 8);
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
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
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      bVar18 = false;
      local_88 = uVar14;
      plStack_80 = plVar7;
    }
    plVar7 = plStack_80;
    lVar15 = FUN_1407c9a0c(param_1,&local_88,&local_78);
    *(byte *)(lVar15 + 0xb4) = *(byte *)(lVar15 + 0xb4) | 0x40;
    FUN_1402c17c2(param_1,lVar15);
    plVar1 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_80 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (!bVar18) {
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
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143ea93bc FUN_143ea93bc body=70 status=ok
// SIG undefined FUN_143ea93bc(void)

undefined8 * FUN_143ea93bc(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b4574c0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 143ea9408 FUN_143ea9408 body=29 status=ok
// SIG undefined FUN_143ea9408(void)

void FUN_143ea9408(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ea9426 FUN_143ea9426 body=29 status=ok
// SIG undefined FUN_143ea9426(void)

undefined8 FUN_143ea9426(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea9460 FUN_143ea9460 body=1023 status=ok
// SIG undefined FUN_143ea9460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ea9460(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  char *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = "UnixSocketPath";
  local_48 = (code *)CONCAT35(local_48._5_3_,0xe);
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb90db0 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb90db8);
  if (cVar1 == '\0') {
    _DAT_14cb90db8 = 0;
    uRam000000014cb90dc0 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  DAT_14cb90dc8 = 0;
  _DAT_14cb90dd0 = 0;
  _DAT_14cb90dd8 = 2;
  atexit(FUN_143e8fdb0);
  DAT_14cb90de0 = 0;
  _DAT_14cb90de8 = 0;
  _DAT_14cb90df0 = 2;
  atexit(FUN_143e90665);
  local_50 = "AssetRegistry";
  local_48 = (code *)CONCAT35(local_48._5_3_,0xd);
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb90df8 = (ulonglong)uVar2;
  DAT_14cb90e00 = 0;
  DAT_14cb90e08 = 0;
  atexit((_func_5014 *)&LAB_143e9095b);
  DAT_14cb90e10 = 0;
  atexit(FUN_143e90975);
  DAT_14cb90e18 = 0;
  atexit((_func_5014 *)&LAB_143e909ac);
  DAT_14cb90e20 = 0;
  atexit((_func_5014 *)&LAB_143e909c7);
  DAT_14cb90e28 = 0;
  atexit((_func_5014 *)&LAB_143e909e2);
  DAT_14cb90e30 = 0;
  atexit((_func_5014 *)&LAB_143e909fd);
  DAT_14cb90e38 = 0;
  DAT_14cb90e40 = 0;
  atexit(FUN_143e90a19);
  _DAT_14cb90e78 = 0;
  _DAT_14cb90e80 = 0;
  _DAT_14cb90e48 = 0;
  DAT_14cb90e50 = 0;
  _DAT_14cb90e58 = 0;
  uRam000000014cb90e60 = 0;
  _DAT_14cb90e84 = 0xffffffff00000080;
  _DAT_14cb90e8c = 0;
  DAT_14cb90e98 = 0;
  _DAT_14cb90ea0 = 0;
  _DAT_14cb90ec8 = 0;
  _DAT_14cb90ed0 = 0;
  _DAT_14cb90ea8 = 0;
  uRam000000014cb90eb0 = 0;
  _DAT_14cb90ed4 = 0xffffffff00000080;
  _DAT_14cb90edc = 0;
  DAT_14cb90ee8 = 0;
  _DAT_14cb90ef0 = 0;
  atexit((_func_5014 *)&LAB_143e90a54);
  DAT_14cb90ef8 = 0;
  _DAT_14cb90f00 = 0;
  DAT_14cb90f08 = 0;
  _DAT_14cb90f10 = 0;
  DAT_14cb90f18 = 0;
  _DAT_14cb90f20 = 0;
  DAT_14cb90f28 = 1;
  atexit((_func_5014 *)&LAB_143e90a59);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb90f30);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb90f30,4000);
  atexit((_func_5014 *)&LAB_143e90a5e);
  DAT_14cb90f78 = 0;
  _DAT_14cb90f80 = 0;
  DAT_14cb90f58 = 0;
  _DAT_14cb90f60 = 0;
  _DAT_14cb90f84 = 0xffffffff00000080;
  DAT_14cb90f8c = 0;
  DAT_14cb90f98 = 0;
  DAT_14cb90fa0 = 0;
  atexit(FUN_143e91428);
  DAT_14cb90fc8 = 0;
  _DAT_14cb90fd0 = 0;
  DAT_14cb90fa8 = 0;
  _DAT_14cb90fb0 = 0;
  _DAT_14cb90fd4 = 0xffffffff00000080;
  DAT_14cb90fdc = 0;
  DAT_14cb90fe8 = 0;
  DAT_14cb90ff0 = 0;
  atexit(FUN_143e91451);
  _DAT_14cb91018 = 0;
  _DAT_14cb91020 = 0;
  DAT_14cb90ff8 = 0;
  _DAT_14cb91000 = 0;
  _DAT_14cb91024 = 0xffffffff00000080;
  DAT_14cb9102c = 0;
  DAT_14cb91038 = 0;
  DAT_14cb91040 = 0;
  atexit(FUN_143e9147a);
  DAT_14cb91048 = 0;
  DAT_14cb91050 = 0;
  atexit(FUN_143e914a9);
  DAT_14cb91058 = 0;
  DAT_14cb91060 = 0;
  atexit(FUN_143e91504);
  local_58 = 0;
  FUN_14153156c(&DAT_14cb91070,L"gbx.ui.viewwrapper.LazyResources",&DAT_14c763a8c,
                L"Defer resource construction and resize to 1x1 when not needed.");
  atexit(FUN_143e916ee);
  local_58 = 0;
  FUN_14153156c(&DAT_14cb91080,L"gbx.ui.viewwrapper.FreeRenderingResources",&DAT_14cb91068,
                L"Forces rendering resources for hidden views to be immediately freed.");
  atexit(FUN_143e91733);
  local_48 = FUN_146047bf6;
  local_50 = &DAT_142bc70ae;
  FUN_1412df486(&DAT_14cb911a8,&local_50);
  local_48 = FUN_14608e0ca;
  local_50 = &DAT_142bc70ae;
  FUN_1412df486(&DAT_14cb912d0,&local_50);
  FUN_1489e4902();
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ea9865 FUN_143ea9865 body=59 status=ok
// SIG undefined FUN_143ea9865(void)

void FUN_143ea9865(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb91598;
  if (DAT_14cb91598 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb91598 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea9895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143ea98a0 FUN_143ea98a0 body=59 status=ok
// SIG undefined FUN_143ea98a0(void)

void FUN_143ea98a0(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb915b0;
  if (DAT_14cb915b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb915b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea98d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143ea98db FUN_143ea98db body=41 status=ok
// SIG undefined FUN_143ea98db(void)

void FUN_143ea98db(void)

{
  DAT_14cb91608 = 0;
  if (DAT_14cb91600 != 0) {
    FUN_1400020a8();
  }
  FUN_145d4aa4a();
  return;
}



// FUNCTION 143ea9904 FUN_143ea9904 body=675 status=ok
// SIG undefined FUN_143ea9904(void)

double * FUN_143ea9904(longlong param_1,double *param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double _Y;
  double dVar7;
  float fVar8;
  double _X;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_98 [36];
  float local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dVar7 = *param_4;
  dVar1 = param_4[1];
  dVar2 = param_4[2];
  fVar11 = (float)SQRT(dVar2 * dVar2 + dVar7 * dVar7 + dVar1 * dVar1);
  _X = DAT_14c8464e0;
  _Y = DAT_14c8464e8;
  dVar3 = DAT_14c8464f0;
  if (1e-08 < fVar11) {
    dVar3 = (double)(1.0 / fVar11);
    _X = dVar7 * dVar3;
    _Y = dVar1 * dVar3;
    dVar3 = dVar2 * dVar3;
  }
  fVar10 = *(float *)(param_1 + 0x28) * 0.5 * 0.017453292;
  if (1.5707964 <= fVar10) {
    fVar10 = 1.5707964;
  }
  fVar6 = *(float *)(param_1 + 0x2c);
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  if ((((_X != 0.0) || (NAN(_X))) || (_Y != 0.0)) || (NAN(_Y))) {
    dVar7 = atan2(_Y,_X);
    fVar4 = (float)dVar7 + 3.926991;
  }
  else {
    fVar4 = 3.926991;
  }
  local_74 = 0.0;
  fVar4 = modff(fVar4 / 1.5707964,&local_74);
  fVar5 = (fVar4 + -0.5) * 1.5707964;
  fVar8 = ABS(fVar5);
  fVar4 = 0.0;
  if (fVar10 <= fVar8) {
    fVar6 = fVar6 * 0.5 * 0.017453292;
    if (1.5707964 <= fVar6) {
      fVar6 = 1.5707964;
    }
    fVar9 = fVar6;
    if (fVar6 <= fVar10) {
      fVar9 = fVar10;
    }
    fVar4 = fVar5;
    if (fVar8 < fVar9) {
      fVar4 = ((fVar8 - fVar10) *
               (float)(~-(uint)(fVar10 < fVar6) & 0x3f800000 |
                      (uint)(1.0 / (fVar9 - fVar10)) & -(uint)(fVar10 < fVar6)) * fVar8 + 0.0) *
              (float)(-(uint)(0.0 < fVar5) & 0x3f800000 |
                     ~-(uint)(0.0 < fVar5) & -(uint)(fVar5 < 0.0) & 0xbf800000);
    }
  }
  fVar4 = (local_74 + -2.0) * 1.5707964 + fVar4;
  fVar10 = cosf(fVar4);
  fVar6 = sinf(fVar4);
  dVar7 = (double)fVar11;
  *param_2 = (double)fVar10 * dVar7;
  param_2[1] = (double)fVar6 * dVar7;
  param_2[2] = dVar3 * dVar7;
  *(undefined1 *)(param_2 + 3) = 3;
  if ((local_70 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143ea9ba8 FUN_143ea9ba8 body=227 status=ok
// SIG undefined FUN_143ea9ba8(void)

double * FUN_143ea9ba8(longlong param_1,double *param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  float _Y;
  double dVar7;
  
  dVar6 = *param_4;
  dVar1 = param_4[1];
  dVar2 = param_4[2];
  fVar5 = (float)SQRT(dVar2 * dVar2 + dVar6 * dVar6 + dVar1 * dVar1);
  dVar3 = DAT_14c8464f0;
  dVar4 = DAT_14c8464e8;
  dVar7 = DAT_14c8464e0;
  if (1e-08 < fVar5) {
    dVar7 = (double)(1.0 / fVar5);
    dVar3 = dVar2 * dVar7;
    dVar4 = dVar1 * dVar7;
    dVar7 = dVar6 * dVar7;
  }
  _Y = *(float *)(param_1 + 0x28);
  if (_Y <= 0.0) {
    _Y = 0.0;
  }
  fVar5 = powf(fVar5,_Y);
  dVar6 = (double)fVar5;
  *param_2 = dVar7 * dVar6;
  param_2[1] = dVar4 * dVar6;
  param_2[2] = dVar3 * dVar6;
  *(undefined1 *)(param_2 + 3) = 3;
  return param_2;
}



// FUNCTION 143ea9c8c FUN_143ea9c8c body=955 status=ok
// SIG undefined FUN_143ea9c8c(void)

double * FUN_143ea9c8c(longlong param_1,double *param_2,undefined8 param_3,double *param_4,
                      float param_5)

{
  float fVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  dVar7 = *param_4;
  dVar2 = param_4[1];
  dVar6 = param_4[2];
  fVar15 = (float)SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar2 * dVar2);
  dVar3 = DAT_14c8464f0;
  dVar12 = DAT_14c8464e8;
  dVar8 = DAT_14c8464e0;
  if (1e-08 < fVar15) {
    dVar8 = (double)(1.0 / fVar15);
    dVar3 = dVar6 * dVar8;
    dVar12 = dVar2 * dVar8;
    dVar8 = dVar7 * dVar8;
  }
  fVar5 = *(float *)(param_1 + 0x28);
  if (1.0 <= fVar5) {
    fVar5 = 1.0;
  }
  fVar9 = 0.0;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  dVar7 = *(double *)(param_1 + 0x40);
  dVar2 = *(double *)(param_1 + 0x38);
  if (fVar5 < fVar15) {
    fVar5 = *(float *)(param_1 + 0x30);
    fVar1 = *(float *)(param_1 + 0x4c);
    fVar13 = *(float *)(param_1 + 0x2c);
    if (*(float *)(param_1 + 0x2c) <= 0.0) {
      fVar13 = 0.0;
    }
    fVar16 = (float)(*(double *)(param_1 + 0x68) * dVar3 +
                    *(double *)(param_1 + 0x58) * dVar8 + *(double *)(param_1 + 0x60) * dVar12);
    fVar14 = *(float *)(param_1 + 0x50) + param_5;
    *(float *)(param_1 + 0x50) = fVar14;
    if (fVar13 < fVar14) {
      fVar9 = fVar16;
      if (1.0 <= fVar16) {
        fVar9 = 1.0;
      }
      fVar9 = acosf((float)(~-(uint)(fVar16 < -1.0) & (uint)fVar9 |
                           -(uint)(fVar16 < -1.0) & 0xbf800000));
      fVar9 = (float)(-(uint)(0.0 < fVar5) & (uint)(1.0 / fVar5)) -
              fVar9 * (float)((uint)(1.0 / (fVar1 * 0.017453292)) & -(uint)(0.0 < fVar1));
    }
    if (fVar16 < 0.0) {
      *(undefined8 *)(param_1 + 0x50) = 0;
      fVar9 = 0.0;
    }
    *(double *)(param_1 + 0x58) = dVar8;
    *(double *)(param_1 + 0x60) = dVar12;
    *(double *)(param_1 + 0x68) = dVar3;
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 0;
    uVar4 = -(uint)(0.0 < *(float *)(param_1 + 0x48));
    fVar9 = (float)(~uVar4 & 0x80000000 | (uint)(-1.0 / *(float *)(param_1 + 0x48)) & uVar4);
  }
  fVar5 = fVar9 * param_5 + *(float *)(param_1 + 0x54);
  if (1.0 <= fVar5) {
    fVar5 = 1.0;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)(param_1 + 0x54) = fVar5;
  dVar10 = (double)fVar15;
  dVar6 = (double)fVar5;
  dVar11 = ((1.0 - DAT_14c846520) * dVar6 + DAT_14c846520) * dVar3 * dVar10;
  dVar7 = ((dVar7 - DAT_14c846518) * dVar6 + DAT_14c846518) * dVar12 * dVar10;
  dVar2 = ((dVar2 - DAT_14c846510) * dVar6 + DAT_14c846510) * dVar8 * dVar10;
  fVar15 = (float)SQRT(dVar11 * dVar11 + dVar2 * dVar2 + dVar7 * dVar7);
  dVar12 = DAT_14c8464f0;
  dVar6 = DAT_14c8464e8;
  dVar3 = DAT_14c8464e0;
  if (1e-08 < fVar15) {
    dVar3 = (double)(1.0 / fVar15);
    dVar12 = dVar11 * dVar3;
    dVar6 = dVar7 * dVar3;
    dVar3 = dVar2 * dVar3;
  }
  dVar7 = (double)fVar15;
  *param_2 = dVar3 * dVar7;
  param_2[1] = dVar6 * dVar7;
  param_2[2] = dVar12 * dVar7;
  *(undefined1 *)(param_2 + 3) = 3;
  return param_2;
}



// FUNCTION 143eaa048 FUN_143eaa048 body=2074 status=ok
// SIG undefined FUN_143eaa048(void)

void FUN_143eaa048(longlong param_1)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_128;
  longlong local_118;
  ulonglong local_110;
  ulonglong local_108;
  longlong local_100;
  longlong *local_f8;
  uint local_ec;
  longlong *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  longlong local_d0;
  uint *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  void *local_90;
  int local_88;
  undefined4 local_84;
  uint local_80;
  int local_7c;
  longlong *local_78;
  longlong *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_118 = param_1;
  FUN_1409f0fb8(param_1,&local_80);
  iVar15 = local_7c;
  uVar4 = local_80;
  if (((local_7c == 0) || ((int)local_80 < 0)) || (DAT_14c9647dc <= (int)local_80))
  goto LAB_143eaa0d6;
  uVar25 = local_80 >> 0x10;
  uVar3 = local_80 & 0xffff;
  lVar5 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(DAT_14c9647c8 + (ulonglong)uVar25 * 8);
  if (((lVar5 == 0) || (*(int *)(lVar5 + 0x10) != local_7c)) ||
     ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)) goto LAB_143eaa0d6;
  plVar6 = (longlong *)FUN_14142a730();
  uVar23 = plVar6[0x22];
  if (uVar23 == 0) {
    (**(code **)(*plVar6 + 1000))();
    uVar23 = plVar6[0x22];
  }
  if ((((int)uVar4 < DAT_14c9647dc) &&
      (plVar6 = (longlong *)
                ((ulonglong)(uVar3 * 0x18) + *(longlong *)(DAT_14c9647c8 + (ulonglong)uVar25 * 8)),
      plVar6 != (longlong *)0x0)) &&
     (((int)plVar6[2] == iVar15 && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) {
    lVar5 = *plVar6;
  }
  else {
    lVar5 = 0;
  }
  plVar6 = (longlong *)(**(code **)(*(longlong *)(lVar5 + 0x30) + 0x18))(lVar5 + 0x30);
  local_110 = uVar23;
  if ((longlong)*(int *)(uVar23 + 0x40) != 0) {
    plVar19 = *(longlong **)(uVar23 + 0x38);
    local_f8 = plVar19 + (longlong)*(int *)(uVar23 + 0x40) * 3;
    do {
      if ((*(char *)((longlong)plVar19 + 0x14) == '\0') && ((longlong)(int)plVar19[1] != 0)) {
        lVar5 = *plVar19;
        lVar16 = (longlong)(int)plVar19[1] * 0x28;
        do {
          if (((plVar6 != (longlong *)0x0) && (*(char *)((longlong)plVar19 + 0x15) != '\0')) &&
             ((*(uint *)(plVar6 + 1) >> 0x1e & 1) == 0)) {
            uVar7 = FUN_1409f0d56(lVar5);
            (**(code **)(*plVar6 + 0x328))(plVar6,uVar7);
          }
          if ((local_7c == 0) || ((int)local_80 < 0)) {
LAB_143eaa297:
            lVar21 = 0;
          }
          else {
            lVar21 = 0;
            if ((int)local_80 < DAT_14c9647dc) {
              plVar14 = (longlong *)
                        ((ulonglong)((local_80 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_80 >> 0x10) * 8));
              if (((plVar14 == (longlong *)0x0) || ((int)plVar14[2] != local_7c)) ||
                 ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) goto LAB_143eaa297;
              lVar21 = *plVar14;
            }
          }
          local_a8 = CONCAT71(local_a8._1_7_,1);
          lVar2 = plVar19[2];
          uVar7 = FUN_1409f0d56(lVar5);
          (**(code **)(*(longlong *)(lVar21 + 0x30) + 0x98))
                    (lVar21 + 0x30,uVar7,(int)lVar2,&local_a8);
          lVar5 = lVar5 + 0x28;
          lVar16 = lVar16 + -0x28;
        } while (lVar16 != 0);
      }
      plVar19 = plVar19 + 3;
    } while (plVar19 != local_f8);
  }
  if ((longlong)*(int *)(local_110 + 0xa0) != 0) {
    puVar12 = *(undefined8 **)(local_110 + 0x98);
    local_e0 = puVar12 + (longlong)*(int *)(local_110 + 0xa0) * 5;
    local_e8 = (longlong *)(local_118 + 0x848);
    local_d0 = local_118 + 0x880;
    do {
      local_a8 = *puVar12;
      local_a0 = *(undefined4 *)(puVar12 + 1);
      uStack_9c = *(undefined4 *)((longlong)puVar12 + 0xc);
      uStack_98 = *(undefined4 *)(puVar12 + 2);
      uStack_94 = *(undefined4 *)((longlong)puVar12 + 0x14);
      local_90 = (void *)0x0;
      local_88 = *(int *)(puVar12 + 4);
      lVar5 = (longlong)local_88;
      _Src = (void *)puVar12[3];
      local_d8 = puVar12;
      if (lVar5 == 0) {
        local_84 = 0;
      }
      else {
        FUN_1446dd670(&local_90,local_88,0);
        memcpy(local_90,_Src,lVar5 * 2);
      }
      lVar5 = FUN_14656978c(&local_a8);
      if (lVar5 != 0) {
        uVar4 = *(uint *)(lVar5 + 0x58);
        if (uVar4 == 0) {
          uVar20 = 1;
          uVar23 = 0;
          iVar15 = 0;
          uVar3 = 0;
        }
        else {
          puVar8 = *(uint **)(lVar5 + 0x50);
          if (*(uint **)(lVar5 + 0x50) == (uint *)0x0) {
            puVar8 = (uint *)(lVar5 + 0x40);
          }
          uVar3 = *puVar8;
          if (uVar3 == 0) {
            iVar15 = uVar4 + 0x1e;
            if (-1 < (int)(uVar4 - 1)) {
              iVar15 = uVar4 - 1;
            }
            uVar23 = 0;
            uVar13 = (ulonglong)(uint)(iVar15 >> 5);
            if (iVar15 >> 5 < 1) {
              uVar13 = uVar23;
            }
            iVar15 = 0;
            do {
              if (uVar13 == uVar23) goto LAB_143eaa502;
              iVar15 = iVar15 + 0x20;
              uVar3 = puVar8[uVar23 + 1];
              uVar23 = uVar23 + 1;
            } while (uVar3 == 0);
          }
          else {
            uVar23 = 0;
            iVar15 = 0;
          }
          uVar20 = (ulonglong)(-uVar3 & uVar3);
          uVar13 = uVar20 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar3 = (iVar15 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if ((int)uVar4 <= (int)uVar3) {
            uVar3 = uVar4;
          }
        }
        if (uVar3 != uVar4) {
          uVar25 = 0xffffffff;
          local_108 = (ulonglong)uVar4;
          local_100 = lVar5;
          local_c8 = (uint *)(lVar5 + 0x40);
LAB_143eaa548:
          local_f8 = (longlong *)CONCAT44(local_f8._4_4_,iVar15);
          lVar16 = *(longlong *)(lVar5 + 0x30);
          lVar21 = (longlong)(int)uVar3 * 0x30;
          local_b8 = 0;
          uStack_b0 = 0;
          lVar5 = (longlong)*(int *)(lVar16 + 0x20 + lVar21);
          local_110 = uVar23;
          local_ec = uVar25;
          if (lVar5 != 0) {
            lVar2 = *(longlong *)(lVar16 + 0x18 + lVar21);
            lVar17 = 0;
            do {
              lVar9 = *(longlong *)(lVar2 + lVar17);
              if (lVar9 != 0) {
                uVar7 = FUN_1402a60e2();
                uVar7 = FUN_14092e86f(uVar7);
                local_128 = 0xfff00007;
                local_130 = 0;
                local_138 = 0;
                lVar9 = FUN_14092e7b3(lVar9,uVar7,0,0xffffffff);
                if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
                  FUN_1456cec3c(lVar9);
                }
                uVar23 = uStack_b0;
                lVar24 = (longlong)(int)uStack_b0;
                uVar4 = (int)uStack_b0 + 1;
                uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar4);
                if (uStack_b0._4_4_ < uVar4) {
                  FUN_1402a61c0(&local_b8,uVar23 & 0xffffffff);
                }
                *(longlong *)(local_b8 + lVar24 * 8) = lVar9;
                if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
                  FUN_1456cec3c(lVar9);
                }
              }
              lVar17 = lVar17 + 8;
            } while (lVar5 * 8 != lVar17);
          }
          puVar8 = local_c8;
          uVar25 = local_ec;
          lVar5 = local_100;
          uVar23 = local_110;
          iVar15 = (int)local_f8;
          if (*(int *)(local_118 + 0x850) != *(int *)(local_118 + 0x87c)) {
            lVar2 = *(longlong *)(lVar16 + lVar21);
            uVar4 = (uint)((ulonglong)lVar2 >> 0x10);
            uVar3 = (uint)lVar2 & 0xffff;
            lVar17 = *(longlong *)(local_118 + 0x888);
            if (*(longlong *)(local_118 + 0x888) == 0) {
              lVar17 = local_d0;
            }
            iVar22 = *(int *)(lVar17 + (ulonglong)
                                       (*(int *)(local_118 + 0x890) - 1U &
                                       (int)((ulonglong)lVar2 >> 0x20) +
                                       ((uint)lVar2 << 0x10 | uVar3) +
                                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar3 >> 4)) * 4);
            if (iVar22 != -1) {
              lVar17 = *local_e8;
              iVar10 = iVar22;
              do {
                if (*(longlong *)(lVar17 + (longlong)iVar10 * 0x30) == lVar2) {
                  uVar4 = (uint)local_108;
                  goto LAB_143eaa742;
                }
                iVar10 = *(int *)((longlong)iVar10 * 0x30 + lVar17 + 0x28);
              } while (iVar10 != -1);
            }
          }
          local_70 = &local_b8;
          local_78 = (longlong *)(lVar16 + lVar21);
          FUN_145b241ba(local_e8,local_64,&local_78);
          uVar4 = (uint)local_108;
          lVar5 = local_100;
          goto LAB_143eaa772;
        }
      }
LAB_143eaa502:
      if (local_90 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar12 = local_d8 + 5;
    } while (puVar12 != local_e0);
  }
  if (local_7c == 0) {
LAB_143eaa84e:
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if ((-1 < (int)local_80) && ((int)local_80 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((local_80 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_80 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != local_7c || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))))
      goto LAB_143eaa84e;
      lVar5 = *plVar6;
    }
  }
  FUN_1401073f6(lVar5 + 0x180,local_118);
  if (local_7c == 0) {
LAB_143eaa855:
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if ((-1 < (int)local_80) && ((int)local_80 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((local_80 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_80 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != local_7c || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))))
      goto LAB_143eaa855;
      lVar5 = *plVar6;
    }
  }
  FUN_1465698ca(&local_c0);
  FUN_14656984c(lVar5 + 0x180,local_118,local_c0);
LAB_143eaa0d6:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar22 = *(int *)(lVar16 + 0x28), iVar22 != -1) {
LAB_143eaa742:
    lVar16 = lVar17 + (longlong)iVar22 * 0x30;
    if (*(longlong *)(lVar17 + (longlong)iVar22 * 0x30) == lVar2) goto LAB_143eaa761;
  }
  lVar16 = 0;
LAB_143eaa761:
  FUN_14181bcd8(lVar16 + 0x18,&local_b8);
LAB_143eaa772:
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  uVar25 = uVar25 & ~(uint)uVar20;
  puVar18 = *(uint **)(lVar5 + 0x50);
  if (*(uint **)(lVar5 + 0x50) == (uint *)0x0) {
    puVar18 = puVar8;
  }
  uVar1 = *(uint *)(lVar5 + 0x58);
  iVar22 = (int)uVar23;
  lVar16 = (longlong)iVar22;
  uVar3 = puVar18[lVar16] & uVar25;
  if (uVar3 == 0) {
    iVar10 = uVar1 + 0x1e;
    if (-1 < (int)(uVar1 - 1)) {
      iVar10 = uVar1 - 1;
    }
    iVar10 = iVar10 >> 5;
    iVar15 = iVar15 + 0x20;
    iVar11 = iVar10;
    if (iVar10 < iVar22) {
      iVar11 = iVar22;
    }
    if (iVar22 < iVar10) {
      lVar21 = 0;
      do {
        uVar3 = puVar18[lVar16 + lVar21 + 1];
        if (uVar3 != 0) {
          uVar23 = (ulonglong)(iVar22 + (int)lVar21 + 1);
          uVar25 = 0xffffffff;
          goto LAB_143eaa7fc;
        }
        iVar15 = iVar15 + 0x20;
        lVar21 = lVar21 + 1;
      } while (iVar11 - lVar16 != lVar21);
      uVar25 = 0xffffffff;
      iVar22 = iVar11;
    }
    uVar23 = (ulonglong)(iVar22 + 1);
    uVar4 = (uint)local_108;
    lVar5 = local_100;
    uVar3 = uVar1;
  }
  else {
LAB_143eaa7fc:
    uVar20 = (ulonglong)(-uVar3 & uVar3);
    uVar13 = uVar20 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar3 = (iVar15 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if ((int)uVar1 <= (int)uVar3) {
      uVar3 = uVar1;
    }
  }
  if (uVar3 == uVar4) goto LAB_143eaa502;
  goto LAB_143eaa548;
}



// FUNCTION 143eaa863 FUN_143eaa863 body=49 status=ok
// SIG undefined FUN_143eaa863(void)

void FUN_143eaa863(void)

{
  FUN_1403e7ebb(DAT_14cb91630,DAT_14cb91638);
  if (DAT_14cb91630 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143eaa8c0 FUN_143eaa8c0 body=29 status=ok
// SIG undefined FUN_143eaa8c0(void)

undefined8 FUN_143eaa8c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143eaa8f2 FUN_143eaa8f2 body=93 status=ok
// SIG undefined FUN_143eaa8f2(void)

void FUN_143eaa8f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b45bbc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143eaa950 FUN_143eaa950 body=93 status=ok
// SIG undefined FUN_143eaa950(void)

void FUN_143eaa950(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b45bbc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143eaa9ae FUN_143eaa9ae body=126 status=ok
// SIG undefined FUN_143eaa9ae(void)

void FUN_143eaa9ae(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b45bbc0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143eaaa1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143eaaa2c FUN_143eaaa2c body=38 status=ok
// SIG undefined FUN_143eaaa2c(void)

void FUN_143eaaa2c(longlong param_1)

{
  FUN_1400033ba(*(undefined8 *)(param_1 + 0x18),0,0,9,0,0);
  return;
}



// FUNCTION 143eaaa52 FUN_143eaaa52 body=39 status=ok
// SIG undefined FUN_143eaaa52(void)

undefined1 FUN_143eaaa52(longlong param_1)

{
  FUN_1400033ba(*(undefined8 *)(param_1 + 0x18),0,0,9,0,0);
  return 1;
}



// FUNCTION 143eaaa7a FUN_143eaaa7a body=64 status=ok
// SIG undefined FUN_143eaaa7a(void)

void FUN_143eaaa7a(void)

{
  if (DAT_14cb9163c != 0) {
    DAT_14cb9163c = 0;
    FUN_1446f8d3c(&DAT_14cb91630,DAT_14cb91638,0,0x48,8);
  }
  return;
}



// FUNCTION 143eaaaba FUN_143eaaaba body=793 status=ok
// SIG undefined FUN_143eaaaba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eaaaba(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxEnhancedInput",&PTR_FUN_14b457b60,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxEnhancedInput",&PTR_FUN_14b457ee0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxEnhancedInput",&PTR_FUN_14b458570,1,0);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEnhancedInput",&PTR_FUN_14b458b40,1,&PTR_FUN_14b458b10);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxEnhancedInput",&PTR_FUN_14b4597b0,3,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxEnhancedInput",&PTR_FUN_14b459b90,1,0);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEnhancedInput",&PTR_FUN_14b45a370,1,&PTR_FUN_14b45a340);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxEnhancedInput",&PTR_FUN_14b45a8e0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxEnhancedInput",&PTR_FUN_14b45ad00,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxEnhancedInput",&PTR_FUN_14b45b360,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxEnhancedInput",&PTR_FUN_14b45b6c0,1,0);
  DAT_14cb91660 = 0;
  LOCK();
  DAT_14cb91658 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143ea9860);
  local_48 = "Gamepad_Swizzled_LxRy";
  local_40 = 0x15;
  local_3c = 0;
  uVar1 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb91588 = (ulonglong)uVar1;
  _DAT_14cb91590 = 0;
  DAT_14cb91598 = 0;
  atexit(FUN_143ea9865);
  local_48 = "Gamepad_Swizzled_RxLy";
  local_40 = 0x15;
  local_3c = 0;
  uVar1 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb915a0 = (ulonglong)uVar1;
  _DAT_14cb915a8 = 0;
  DAT_14cb915b0 = 0;
  atexit(FUN_143ea98a0);
  DAT_14cb915e0 = 0;
  DAT_14cb915e8 = 0;
  DAT_14cb915c0 = 0;
  _DAT_14cb915c8 = 0;
  _DAT_14cb915ec = 0xffffffff00000080;
  DAT_14cb915f4 = 0;
  DAT_14cb91600 = 0;
  DAT_14cb91608 = 0;
  atexit(FUN_143ea98db);
  local_48 = "AssetRegistry";
  local_40 = 0xd;
  local_3c = 0;
  uVar1 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb91610 = (ulonglong)uVar1;
  local_48 = (char *)0x800000014b45b7f4;
  local_34 = 0x10;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_1465695ea(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eaadd4 FUN_143eaadd4 body=55 status=ok
// SIG undefined FUN_143eaadd4(void)

void FUN_143eaadd4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb91710 == 0) {
    uVar1 = FUN_1410a124d();
    DAT_14cb91710 = FUN_14171c317(FUN_143eaae0b,uVar1,L"EGbxUIPopupResultType");
  }
  return;
}



// FUNCTION 143eaae0b FUN_143eaae0b body=47 status=ok
// SIG undefined FUN_143eaae0b(void)

longlong FUN_143eaae0b(void)

{
  if (DAT_14cb91708 == 0) {
    FUN_1409ce572(&DAT_14cb91708,&PTR_FUN_14b45ccb0);
  }
  return DAT_14cb91708;
}



// FUNCTION 143eaae3a FUN_143eaae3a body=55 status=ok
// SIG undefined FUN_143eaae3a(void)

void FUN_143eaae3a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb91728 == 0) {
    uVar1 = FUN_1410a124d();
    DAT_14cb91728 = FUN_140002ddd(FUN_143eaae71,uVar1,L"GbxUIPopupResult");
  }
  return;
}



// FUNCTION 143eaae71 FUN_143eaae71 body=47 status=ok
// SIG undefined FUN_143eaae71(void)

longlong FUN_143eaae71(void)

{
  if (DAT_14cb91720 == 0) {
    FUN_14086a14e(&DAT_14cb91720,&PTR_FUN_14b45ce58);
  }
  return DAT_14cb91720;
}



// FUNCTION 143eaaea0 FUN_143eaaea0 body=48 status=ok
// SIG undefined FUN_143eaaea0(void)

void FUN_143eaaea0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b465480;
  return;
}



// FUNCTION 143eaaed0 FUN_143eaaed0 body=55 status=ok
// SIG undefined FUN_143eaaed0(void)

void FUN_143eaaed0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb91748 == 0) {
    uVar1 = FUN_1410a124d();
    DAT_14cb91748 = FUN_14171c317(FUN_146569f79,uVar1,L"EGbxUIPopupType");
  }
  return;
}



// FUNCTION 143eaaf07 FUN_143eaaf07 body=55 status=ok
// SIG undefined FUN_143eaaf07(void)

void FUN_143eaaf07(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb91760 == 0) {
    uVar1 = FUN_1410a124d();
    DAT_14cb91760 = FUN_14171c317(FUN_146569fa8,uVar1,L"EGbxUIPopupPriority");
  }
  return;
}



// FUNCTION 143eaaf3e FUN_143eaaf3e body=240 status=ok
// SIG undefined FUN_143eaaf3e(void)

void FUN_143eaaf3e(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0xa0);
  if (*(int *)(param_1 + 0xa8) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143eaaf8f;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143eaaf8f:
  FUN_1489f5beb(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  }
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143eab018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 143eab02e FUN_143eab02e body=59 status=ok
// SIG undefined FUN_143eab02e(void)

void FUN_143eab02e(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb91a80;
  if (DAT_14cb91a80 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb91a80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143eab05e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143eab06a FUN_143eab06a body=704 status=ok
// SIG undefined FUN_143eab06a(void)

void FUN_143eab06a(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_148 [40];
  undefined4 local_120;
  undefined1 local_118 [140];
  uint local_8c;
  int local_88;
  longlong local_84;
  longlong *local_78;
  int local_70;
  char local_68;
  undefined **local_60;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  void *local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_2 == 0) goto LAB_143eab313;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x40));
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_148);
  }
  local_120 = **(undefined4 **)(param_1 + 0x30);
  FUN_143eacec4(local_118,*(undefined4 **)(param_1 + 0x30) + 2);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x40));
  if (local_78 != (longlong *)0x0 && local_70 != 0) {
    (**(code **)(*local_78 + 0x60))(local_78,(undefined ***)(param_2 + 8));
  }
  if ((((local_84 != 0) && (local_88 != 0)) && (-1 < (int)local_8c)) &&
     ((int)local_8c < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((local_8c & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_8c >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == local_88)) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),local_84,1);
      if (lVar2 != 0) {
        local_60 = &PTR_FUN_14b4655e0;
        local_58 = local_58 & 0xffffff00;
        uStack_54 = 0;
        uStack_50 = 0;
        FUN_140056680(&local_48,&DAT_149dfb77a);
        local_58 = (uint)*(undefined8 *)(param_2 + 0x10);
        uStack_54 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
        uStack_50 = *(undefined4 *)(param_2 + 0x18);
        if (&local_60 != (undefined ***)(param_2 + 8)) {
          iVar1 = *(int *)(param_2 + 0x28);
          _Src = *(void **)(param_2 + 0x20);
          local_40 = iVar1;
          if (iVar1 == 0 && local_3c == 0) {
            local_3c = 0;
          }
          else {
            FUN_1446dd670(&local_48,iVar1);
            if (iVar1 != 0) {
              memcpy(local_48,_Src,(longlong)iVar1 * 2);
            }
          }
        }
        if (local_88 == 0) {
LAB_143eab33e:
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = (longlong *)0x0;
          if ((-1 < (int)local_8c) && ((int)local_8c < DAT_14c9647dc)) {
            puVar4 = (undefined8 *)
                     ((ulonglong)((local_8c & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_8c >> 0x10) * 8));
            if ((puVar4 == (undefined8 *)0x0) ||
               ((*(int *)(puVar4 + 2) != local_88 || ((*(uint *)(puVar4 + 1) & 0x10200000) != 0))))
            goto LAB_143eab33e;
            plVar5 = (longlong *)*puVar4;
          }
        }
        uVar3 = FUN_14477b072(plVar5,local_84);
        (**(code **)(*plVar5 + 0x248))(plVar5,uVar3,&local_60);
        local_60 = &PTR_FUN_14b4655e0;
        if (local_48 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (local_68 == '\x01') {
    FUN_143eab4fa(param_1,local_120);
  }
  FUN_143eaaf3e(local_118);
LAB_143eab313:
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eab346 FUN_143eab346 body=436 status=ok
// SIG undefined FUN_143eab346(void)

undefined8 * FUN_143eab346(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  plVar1 = (longlong *)param_2[1];
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != plVar1) {
    param_1[1] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  plVar1 = (longlong *)param_2[3];
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != plVar1) {
    param_1[3] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  plVar1 = (longlong *)param_2[5];
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != plVar1) {
    param_1[5] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  plVar1 = (longlong *)param_2[7];
  plVar2 = (longlong *)param_1[7];
  if (plVar2 != plVar1) {
    param_1[7] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  plVar1 = (longlong *)param_2[9];
  plVar2 = (longlong *)param_1[9];
  if (plVar2 != plVar1) {
    param_1[9] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  plVar1 = (longlong *)param_2[0xb];
  plVar2 = (longlong *)param_1[0xb];
  if (plVar2 != plVar1) {
    param_1[0xb] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  plVar1 = (longlong *)param_2[0xd];
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != plVar1) {
    param_1[0xd] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  FUN_1489f6066(param_1 + 0xf,param_2 + 0xf);
  *(undefined2 *)(param_1 + 0x11) = *(undefined2 *)(param_2 + 0x11);
  uVar3 = *(undefined4 *)(param_2 + 0x12);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar5 = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x12) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar4;
  *(undefined4 *)(param_1 + 0x13) = uVar5;
  FUN_143eacd9c(param_1 + 0x14,param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  return param_1;
}



// FUNCTION 143eab4fa FUN_143eab4fa body=139 status=ok
// SIG undefined FUN_143eab4fa(void)

void FUN_143eab4fa(longlong *param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 8));
  uVar5 = (ulonglong)*(uint *)(param_1 + 7);
  lVar4 = uVar5 * 0xc0 + 8;
  do {
    if ((int)uVar5 < 1) goto LAB_143eab569;
    lVar3 = param_1[6];
    uVar5 = (ulonglong)((int)uVar5 - 1);
    lVar1 = lVar4 + -0xc0;
    piVar2 = (int *)(lVar3 + -200 + lVar4);
    lVar4 = lVar1;
  } while (*piVar2 != param_2);
  (**(code **)(*param_1 + 0x2d0))(param_1,param_2,lVar3 + lVar1);
  FUN_1489f35dc(param_1 + 6,uVar5);
LAB_143eab569:
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 8));
  FUN_1489f34fa(param_1);
  return;
}



// FUNCTION 143eab585 FUN_143eab585 body=41 status=ok
// SIG undefined FUN_143eab585(void)

void FUN_143eab585(void)

{
  DAT_14cb91ad8 = 0;
  if (DAT_14cb91ad0 != 0) {
    FUN_1400020a8();
  }
  FUN_146172168();
  return;
}



// FUNCTION 143eab5ae FUN_143eab5ae body=586 status=ok
// SIG undefined FUN_143eab5ae(void)

void FUN_143eab5ae(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  wchar_t *_Str;
  wchar_t *_Str_00;
  undefined1 auStack_118 [32];
  longlong *local_f8 [2];
  longlong local_e8;
  undefined4 **local_e0 [2];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [64];
  undefined1 local_60;
  char local_5f;
  undefined4 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((param_2 != 0) && (4 < (int)param_1[1])) {
    if (*(int *)(*(longlong *)(param_2 + 0x1f0) + 0x40) < 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = **(undefined8 **)(*(longlong *)(param_2 + 0x1f0) + 0x38);
    }
    lVar2 = FUN_1489f316c(uVar3);
    if (lVar2 != 0) {
      local_30 = (undefined4 *)FUN_14001cc68(0xc,0x10);
      *local_30 = 0xffffffff;
      *(undefined8 *)(local_30 + 1) = 0;
      local_e0[0] = &local_30;
      local_e8 = *param_1;
      FUN_1489f68c6(local_f8);
      FUN_1489f2a8a(&local_e8);
      _Str_00 = L"";
      _Str = L"";
      if (*(int *)(*param_1 + 0x18) != 0) {
        _Str = *(wchar_t **)(*param_1 + 0x10);
      }
      iVar1 = _wtoi(_Str);
      local_60 = 1;
      if (iVar1 - 1U < 9) {
        local_60 = (undefined1)iVar1;
      }
      if (*(int *)(*param_1 + 0x28) != 0) {
        _Str_00 = *(wchar_t **)(*param_1 + 0x20);
      }
      iVar1 = _wtoi(_Str_00);
      local_5f = (iVar1 == 2) * '\x02';
      if (iVar1 == 1) {
        local_5f = '\x01';
      }
      FUN_140009b9a(local_f8,*param_1 + 0x30);
      FUN_140008f88(local_e0,local_f8);
      if (local_f8[0] != (longlong *)0x0) {
        (**(code **)(*local_f8[0] + 0x10))();
      }
      FUN_140009b9a(local_f8,*param_1 + 0x40);
      FUN_140008f88(local_d0,local_f8);
      if (local_f8[0] != (longlong *)0x0) {
        (**(code **)(*local_f8[0] + 0x10))();
      }
      if (5 < (int)param_1[1]) {
        FUN_140009b9a(local_f8,*param_1 + 0x50);
        FUN_140008f88(local_c0,local_f8);
        if (local_f8[0] != (longlong *)0x0) {
          (**(code **)(*local_f8[0] + 0x10))();
        }
        if (6 < (int)param_1[1]) {
          FUN_140009b9a(local_f8,*param_1 + 0x60);
          FUN_140008f88(local_b0,local_f8);
          if (local_f8[0] != (longlong *)0x0) {
            (**(code **)(*local_f8[0] + 0x10))();
          }
          if (7 < (int)param_1[1]) {
            FUN_140009b9a(local_f8,*param_1 + 0x70);
            FUN_140008f88(local_a0,local_f8);
            if (local_f8[0] != (longlong *)0x0) {
              (**(code **)(*local_f8[0] + 0x10))();
            }
          }
        }
      }
      FUN_1489f2b10(lVar2,local_30,&local_e8);
      FUN_143eaaf3e(&local_e8);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eab7f9 FUN_143eab7f9 body=69 status=ok
// SIG undefined FUN_143eab7f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eab7f9(void)

{
  _DAT_14cb91ae0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eab83b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb91ae8,1);
  return;
}



// FUNCTION 143eab83e FUN_143eab83e body=69 status=ok
// SIG undefined FUN_143eab83e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eab83e(void)

{
  _DAT_14cb91af0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eab880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb91af8,1);
  return;
}



// FUNCTION 143eab883 FUN_143eab883 body=69 status=ok
// SIG undefined FUN_143eab883(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eab883(void)

{
  _DAT_14cb91b00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eab8c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb91b08,1);
  return;
}



// FUNCTION 143eab8c8 FUN_143eab8c8 body=69 status=ok
// SIG undefined FUN_143eab8c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eab8c8(void)

{
  _DAT_14cb91b10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eab90a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb91b18,1);
  return;
}



// FUNCTION 143eab90e FUN_143eab90e body=68 status=ok
// SIG undefined FUN_143eab90e(void)

undefined8 FUN_143eab90e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x78) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80) != 0)) {
    lVar1 = FUN_145aa2e42();
    if (lVar1 != 0) {
      uVar2 = FUN_143eab952(lVar1,param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 143eab952 FUN_143eab952 body=282 status=ok
// SIG undefined FUN_143eab952(void)

longlong FUN_143eab952(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  local_20 = param_2;
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  iVar2 = FUN_145aa32fc((longlong *)(param_1 + 0x30),uVar1 >> 0x10 ^ uVar1,&local_20);
  if ((iVar2 == -1) || (lVar3 = (longlong)iVar2 * 0x18 + *(longlong *)(param_1 + 0x30), lVar3 == 0))
  {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 8);
    if ((DAT_14c950c29 == 1) && (lVar3 != 0)) {
      FUN_1456cec3c(lVar3);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eaba6e FUN_143eaba6e body=116 status=ok
// SIG undefined FUN_143eaba6e(void)

undefined4 FUN_143eaba6e(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *_Src;
  
  puVar1 = (undefined8 *)(param_1 + 0x130);
  if (puVar1 != param_2) {
    iVar3 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 0x138) = iVar3;
    if (iVar3 == 0 && *(int *)(param_1 + 0x13c) == 0) {
      *(undefined4 *)(param_1 + 0x13c) = 0;
    }
    else {
      FUN_143ead060(puVar1,iVar3);
      if (iVar3 != 0) {
        memcpy((void *)*puVar1,_Src,(longlong)iVar3 << 3);
      }
    }
  }
  LOCK();
  uVar2 = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = 1;
  UNLOCK();
  return uVar2;
}



// FUNCTION 143eabb1a FUN_143eabb1a body=264 status=ok
// SIG undefined FUN_143eabb1a(void)

void FUN_143eabb1a(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((param_1[0xe] != 0) && ((*(uint *)(param_1[0xe] + 8) >> 0x1e & 1) == 0)) {
    cVar5 = (**(code **)(*param_1 + 0x2c8))();
    if ((cVar5 == '\0') ||
       ((plVar1 = (longlong *)param_1[0xb], plVar1 != (longlong *)0x0 &&
        (cVar5 = (**(code **)(*plVar1 + 0x2c0))(plVar1), cVar5 == (char)plVar1[7])))) {
      if ((char)param_1[0x12] != '\x01') {
        return;
      }
      *(undefined1 *)(param_1 + 0x12) = 0;
      lVar6 = 0x2e8;
    }
    else {
      if ((char)param_1[0x12] == '\0') {
        *(undefined1 *)(param_1 + 0x12) = 1;
        (**(code **)(*param_1 + 0x2e0))(param_1);
      }
      (**(code **)(*param_1 + 0x2f0))(param_1);
      lVar4 = param_1[0xd];
      lVar6 = 0x2f8;
      if ((longlong)(int)lVar4 != 0) {
        lVar2 = param_1[0xc];
        lVar3 = param_1[0xe];
        lVar7 = 0;
        do {
          plVar1 = *(longlong **)(lVar2 + lVar7);
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,lVar3);
          }
          lVar6 = 0x2f8;
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)lVar4 * 8 != lVar7);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000143eabc0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + lVar6))(param_1);
    return;
  }
  return;
}



// FUNCTION 143eabc22 FUN_143eabc22 body=152 status=ok
// SIG undefined FUN_143eabc22(void)

void FUN_143eabc22(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1401c3ca6();
  *(undefined1 *)(param_1 + 0x48) = 5;
  iVar1 = *(int *)(param_1 + 0x2b0);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x2a8);
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + lVar4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2b0))();
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  lVar3 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_1489f47f6();
    if (lVar3 != 0) {
      FUN_1489f423e(lVar3,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 143eabcba FUN_143eabcba body=153 status=ok
// SIG undefined FUN_143eabcba(void)

void FUN_143eabcba(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_1489f47f6();
    if (lVar3 != 0) {
      FUN_1489f42c2(lVar3,param_1);
    }
  }
  iVar1 = *(int *)(param_1 + 0x2b0);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x2a8);
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + lVar4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2b8))(plVar2,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  FUN_1448c4a0e(param_1,param_2);
  return;
}



// FUNCTION 143eabe7a FUN_143eabe7a body=41 status=ok
// SIG undefined FUN_143eabe7a(void)

void FUN_143eabe7a(void)

{
  DAT_14cb91dd0 = 0;
  if (DAT_14cb91dc8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d68986();
  return;
}



// FUNCTION 143eabea8 FUN_143eabea8 body=144 status=ok
// SIG undefined FUN_143eabea8(void)

void FUN_143eabea8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_143ead1ce(param_2,0);
  }
  local_38 = &local_48;
  local_30 = &local_40;
  local_40 = FUN_143ead7ae;
  local_20 = &local_30;
  local_28 = FUN_143ead76a;
  local_48 = param_2;
  FUN_143ead302(param_1,&local_28,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eabf3a FUN_143eabf3a body=1547 status=ok
// SIG undefined FUN_143eabf3a(void)

void FUN_143eabf3a(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  size_t sVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  char *_Str;
  char *pcVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_58 [32];
  char *local_38;
  int local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == (longlong *)0x0) goto LAB_143eac3f3;
  lVar2 = (**(code **)(*param_2 + 8))(param_2);
  if (DAT_14cb91a50 == 0) {
    uVar3 = FUN_1410a124d();
    DAT_14cb91a50 = FUN_140002ddd(FUN_14656ab92,uVar3,L"GbxUIState");
    if (DAT_14cb91a50 == 0) goto LAB_143eac3f3;
  }
  if ((*(int *)(lVar2 + 0x38) < *(int *)(DAT_14cb91a50 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cb91a50 + 0x38) * 8) !=
      DAT_14cb91a50 + 0x30)) goto LAB_143eac3f3;
  pbVar1 = (byte *)*param_3;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar8 = &DAT_14c9a1288;
    }
    else {
      plVar8 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
      plVar11 = plVar8 + 8;
      if ((longlong *)plVar8[9] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar8[9];
      }
      iVar7 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar8[10] - 1U & DAT_14cb91c20) * 4);
      if (iVar7 != -1) {
        do {
          lVar2 = *plVar8 + (longlong)iVar7 * 0x40;
          if (*(uint *)(*plVar8 + (longlong)iVar7 * 0x40) == DAT_14cb91c20) {
            if ((((lVar2 != 0) &&
                 (puVar9 = (undefined8 *)(lVar2 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                ((byte *)*puVar9 != (byte *)0x0)) && ((*(byte *)*puVar9 & 0x40) == 0))
            goto LAB_143eac04f;
            break;
          }
          iVar7 = *(int *)(lVar2 + 0x38);
        } while (iVar7 != -1);
      }
    }
  }
  puVar9 = &DAT_14c9a1308;
LAB_143eac04f:
  pbVar1 = (byte *)*puVar9;
  _Str = "HUD";
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) == 1)) {
    _Str = "HUD";
    if (*(char **)(pbVar1 + 8) != (char *)0x0) {
      _Str = *(char **)(pbVar1 + 8);
    }
  }
  sVar4 = strlen(_Str);
  iVar7 = (int)sVar4;
  if (iVar7 == 0) {
LAB_143eac46e:
    uVar5 = 0;
    uVar13 = 0;
  }
  else {
    lVar2 = (longlong)iVar7;
    pcVar10 = _Str + lVar2 + -1;
    uVar6 = 0;
    if (pcVar10 < _Str) {
      lVar15 = 0;
    }
    else {
      do {
        if (9 < (byte)(*pcVar10 - 0x30U)) break;
        uVar6 = uVar6 + 1;
        pcVar10 = pcVar10 + -1;
      } while (_Str <= pcVar10);
      lVar15 = 0;
      if (((uVar6 != 0) && ((int)uVar6 < iVar7)) &&
         ((lVar15 = 0, uVar6 < 0xb && (lVar12 = -(ulonglong)uVar6, _Str[lVar12 + lVar2 + -1] == '_')
          ))) {
        if ((uVar6 == 1) || (_Str[lVar12 + lVar2] != '0')) {
          lVar14 = 0;
          do {
            lVar15 = (longlong)_Str[lVar12 + lVar2] + lVar14 * 10;
            lVar14 = lVar15 + -0x30;
            lVar12 = lVar12 + 1;
          } while (lVar12 != 0);
          if (lVar14 < 0x7fffffff) {
            iVar7 = ~uVar6 + iVar7;
            lVar15 = lVar15 + -0x2f;
            goto LAB_143eac0c8;
          }
        }
        lVar15 = 0;
      }
LAB_143eac0c8:
      if (iVar7 == 0) goto LAB_143eac46e;
    }
    local_2c = 0;
    local_38 = _Str;
    local_30 = iVar7;
    uVar6 = FUN_14001a6c0(&local_38,1);
    uVar13 = lVar15 << 0x20;
    uVar5 = (ulonglong)uVar6;
  }
  param_2[4] = uVar5 | uVar13;
  *(undefined4 *)(param_2 + 6) = 0;
  if (*(int *)((longlong)param_2 + 0x34) < 0) {
    FUN_1403de8ba(param_2 + 5,0);
  }
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)((longlong)param_2 + 0x44) < 0) {
    FUN_1403de8ba(param_2 + 7,0);
  }
  pbVar1 = (byte *)*param_3;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar8 = &DAT_14c9a1288;
    }
    else {
      plVar8 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
      plVar11 = plVar8 + 8;
      if ((longlong *)plVar8[9] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar8[9];
      }
      iVar7 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar8[10] - 1U & DAT_14cb91c48) * 4);
      if (iVar7 != -1) {
        do {
          lVar2 = *plVar8 + (longlong)iVar7 * 0x40;
          if (*(uint *)(*plVar8 + (longlong)iVar7 * 0x40) == DAT_14cb91c48) {
            if ((((lVar2 != 0) &&
                 (puVar9 = (undefined8 *)(lVar2 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                ((byte *)*puVar9 != (byte *)0x0)) && ((*(byte *)*puVar9 & 0x40) == 0))
            goto LAB_143eac1a8;
            break;
          }
          iVar7 = *(int *)(lVar2 + 0x38);
        } while (iVar7 != -1);
      }
    }
  }
  puVar9 = &DAT_14c9a1308;
LAB_143eac1a8:
  FUN_140f67880(puVar9,param_2 + 5);
  *(undefined4 *)(param_2 + 10) = 0;
  if (*(int *)((longlong)param_2 + 0x54) < 0) {
    FUN_1403de8ba(param_2 + 9,0);
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  if (*(int *)((longlong)param_2 + 100) < 0) {
    FUN_1403de8ba(param_2 + 0xb,0);
  }
  pbVar1 = (byte *)*param_3;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar8 = &DAT_14c9a1288;
    }
    else {
      plVar8 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
      plVar11 = plVar8 + 8;
      if ((longlong *)plVar8[9] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar8[9];
      }
      iVar7 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar8[10] - 1U & DAT_14cb91c70) * 4);
      if (iVar7 != -1) {
        do {
          lVar2 = *plVar8 + (longlong)iVar7 * 0x40;
          if (*(uint *)(*plVar8 + (longlong)iVar7 * 0x40) == DAT_14cb91c70) {
            if (((lVar2 != 0) &&
                (puVar9 = (undefined8 *)(lVar2 + 0x28), puVar9 != (undefined8 *)0x0)) &&
               (((byte *)*puVar9 != (byte *)0x0 && ((*(byte *)*puVar9 & 0x40) == 0))))
            goto LAB_143eac262;
            break;
          }
          iVar7 = *(int *)(lVar2 + 0x38);
        } while (iVar7 != -1);
      }
    }
  }
  puVar9 = &DAT_14c9a1308;
LAB_143eac262:
  FUN_140f67880(puVar9,param_2 + 9);
  *(undefined4 *)(param_2 + 0xe) = 0;
  if (*(int *)((longlong)param_2 + 0x74) < 0) {
    FUN_1403de8ba(param_2 + 0xd,0);
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  if (*(int *)((longlong)param_2 + 0x84) < 0) {
    FUN_1403de8ba(param_2 + 0xf,0);
  }
  pbVar1 = (byte *)*param_3;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar8 = &DAT_14c9a1288;
    }
    else {
      plVar8 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
      plVar11 = plVar8 + 8;
      if ((longlong *)plVar8[9] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar8[9];
      }
      iVar7 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar8[10] - 1U & DAT_14cb91c98) * 4);
      if (iVar7 != -1) {
        do {
          lVar2 = *plVar8 + (longlong)iVar7 * 0x40;
          if (*(uint *)(*plVar8 + (longlong)iVar7 * 0x40) == DAT_14cb91c98) {
            if (((lVar2 != 0) &&
                (puVar9 = (undefined8 *)(lVar2 + 0x28), puVar9 != (undefined8 *)0x0)) &&
               (((byte *)*puVar9 != (byte *)0x0 && ((*(byte *)*puVar9 & 0x40) == 0))))
            goto LAB_143eac322;
            break;
          }
          iVar7 = *(int *)(lVar2 + 0x38);
        } while (iVar7 != -1);
      }
    }
  }
  puVar9 = &DAT_14c9a1308;
LAB_143eac322:
  FUN_140f67880(puVar9,param_2 + 0xd);
  *(undefined4 *)(param_2 + 0x12) = 0;
  if (*(int *)((longlong)param_2 + 0x94) < 0) {
    FUN_1403de8ba(param_2 + 0x11,0);
  }
  *(undefined4 *)(param_2 + 0x14) = 0;
  if (*(int *)((longlong)param_2 + 0xa4) < 0) {
    FUN_1403de8ba(param_2 + 0x13,0);
  }
  pbVar1 = (byte *)*param_3;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar8 = &DAT_14c9a1288;
    }
    else {
      plVar8 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
      plVar11 = plVar8 + 8;
      if ((longlong *)plVar8[9] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar8[9];
      }
      iVar7 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar8[10] - 1U & DAT_14cb91cc0) * 4);
      if (iVar7 != -1) {
        do {
          lVar2 = *plVar8 + (longlong)iVar7 * 0x40;
          if (*(uint *)(*plVar8 + (longlong)iVar7 * 0x40) == DAT_14cb91cc0) {
            if ((((lVar2 != 0) &&
                 (puVar9 = (undefined8 *)(lVar2 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                ((byte *)*puVar9 != (byte *)0x0)) && ((*(byte *)*puVar9 & 0x40) == 0))
            goto LAB_143eac3eb;
            break;
          }
          iVar7 = *(int *)(lVar2 + 0x38);
        } while (iVar7 != -1);
      }
    }
  }
  puVar9 = &DAT_14c9a1308;
LAB_143eac3eb:
  FUN_140f67880(puVar9,param_2 + 0x11);
LAB_143eac3f3:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143eac546 FUN_143eac546 body=970 status=ok
// SIG undefined FUN_143eac546(void)

void FUN_143eac546(longlong param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    uVar14 = 1;
    uVar15 = 0;
    iVar11 = 0;
    iVar8 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0x40);
    }
    uVar12 = *puVar4;
    if (uVar12 == 0) {
      iVar11 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar11 = iVar1 + -1;
      }
      uVar15 = 0;
      uVar9 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar9 = uVar15;
      }
      iVar11 = 0;
      do {
        if (uVar9 == uVar15) goto LAB_143eac5ec;
        iVar11 = iVar11 + 0x20;
        uVar12 = puVar4[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar15 = 0;
      iVar11 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar9 = uVar14 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar8) {
      iVar8 = iVar1;
    }
  }
  if (iVar8 != iVar1) {
    uVar12 = 0xffffffff;
    iVar3 = iVar1;
    do {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8 + (longlong)iVar8 * 0x18);
      if (lVar10 != 0) {
        uVar6 = *(uint *)(lVar10 + 0xc);
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        FUN_14482b126(lVar10,0x40000000);
        iVar3 = *(int *)(param_1 + 0x58);
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar4 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0x40);
      }
      iVar8 = (int)uVar15;
      lVar10 = (longlong)iVar8;
      uVar6 = puVar4[lVar10] & uVar12;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar5 = iVar7;
        if (iVar7 < iVar8) {
          iVar5 = iVar8;
        }
        if (iVar8 < iVar7) {
          lVar13 = 0;
          do {
            uVar6 = puVar4[lVar10 + lVar13 + 1];
            if (uVar6 != 0) {
              uVar15 = (ulonglong)(iVar8 + (int)lVar13 + 1);
              uVar12 = 0xffffffff;
              goto LAB_143eac789;
            }
            iVar11 = iVar11 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar5 - lVar10 != lVar13);
          uVar12 = 0xffffffff;
          lVar10 = (longlong)iVar5;
        }
        uVar15 = lVar10 + 1U & 0xffffffff;
        iVar8 = iVar3;
      }
      else {
LAB_143eac789:
        uVar14 = (ulonglong)(-uVar6 & uVar6);
        uVar9 = uVar14 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar8 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar8) {
          iVar8 = iVar3;
        }
      }
    } while (iVar8 != iVar1);
  }
LAB_143eac5ec:
  iVar1 = *(int *)(param_1 + 0xa8);
  if (iVar1 == 0) {
    uVar14 = 1;
    uVar15 = 0;
    iVar11 = 0;
    iVar8 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0x90);
    }
    uVar12 = *puVar4;
    if (uVar12 == 0) {
      iVar11 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar11 = iVar1 + -1;
      }
      uVar15 = 0;
      uVar9 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar9 = uVar15;
      }
      iVar11 = 0;
      do {
        if (uVar9 == uVar15) goto LAB_143eac690;
        iVar11 = iVar11 + 0x20;
        uVar12 = puVar4[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar15 = 0;
      iVar11 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar9 = uVar14 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar8) {
      iVar8 = iVar1;
    }
  }
  if (iVar8 != iVar1) {
    uVar12 = 0xffffffff;
    iVar3 = iVar1;
    do {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 8 + (longlong)iVar8 * 0x18);
      if (lVar10 != 0) {
        uVar6 = *(uint *)(lVar10 + 0xc);
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        FUN_14482b126(lVar10,0x40000000);
        iVar3 = *(int *)(param_1 + 0xa8);
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar4 = *(uint **)(param_1 + 0xa0);
      if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0x90);
      }
      iVar8 = (int)uVar15;
      lVar10 = (longlong)iVar8;
      uVar6 = puVar4[lVar10] & uVar12;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar5 = iVar7;
        if (iVar7 < iVar8) {
          iVar5 = iVar8;
        }
        if (iVar8 < iVar7) {
          lVar13 = 0;
          do {
            uVar6 = puVar4[lVar10 + lVar13 + 1];
            if (uVar6 != 0) {
              uVar15 = (ulonglong)(iVar8 + (int)lVar13 + 1);
              uVar12 = 0xffffffff;
              goto LAB_143eac88f;
            }
            iVar11 = iVar11 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar5 - lVar10 != lVar13);
          uVar12 = 0xffffffff;
          lVar10 = (longlong)iVar5;
        }
        uVar15 = lVar10 + 1U & 0xffffffff;
        iVar8 = iVar3;
      }
      else {
LAB_143eac88f:
        uVar14 = (ulonglong)(-uVar6 & uVar6);
        uVar9 = uVar14 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar8 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar8) {
          iVar8 = iVar3;
        }
      }
    } while (iVar8 != iVar1);
  }
LAB_143eac690:
  FUN_1489f799e((longlong *)(param_1 + 0x30));
  FUN_14614cdc0((longlong *)(param_1 + 0x80));
  lVar10 = *(longlong *)(param_1 + 0xd0);
  if (lVar10 != 0) {
    do {
      cVar2 = FUN_145a3632a(lVar10 + 0x30);
    } while (cVar2 != '\0');
    FUN_145a363c0(lVar10 + 0x40,0);
    return;
  }
  return;
}



// FUNCTION 143eac964 FUN_143eac964 body=29 status=ok
// SIG undefined FUN_143eac964(void)

undefined8 FUN_143eac964(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143eaca00 FUN_143eaca00 body=144 status=ok
// SIG undefined FUN_143eaca00(void)

undefined8 FUN_143eaca00(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_4 != 0) {
    puVar2 = (undefined8 *)(param_2 + 0x18);
    do {
      *(undefined4 *)(puVar2 + -1) = *(undefined4 *)(param_3 + 2);
      puVar2[-2] = param_3[1];
      if (puVar2 + -3 != param_3) {
        iVar1 = *(int *)(param_3 + 4);
        _Src = (void *)param_3[3];
        *(int *)(puVar2 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar2 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar2,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar2,_Src,(longlong)iVar1 * 2);
          }
        }
      }
      param_3 = param_3 + 5;
      puVar2 = puVar2 + 5;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143eacab8 FUN_143eacab8 body=59 status=ok
// SIG undefined FUN_143eacab8(void)

undefined8 FUN_143eacab8(longlong *param_1)

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



// FUNCTION 143eacafe FUN_143eacafe body=48 status=ok
// SIG undefined FUN_143eacafe(void)

void FUN_143eacafe(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14b4655e0;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 143eacb7c FUN_143eacb7c body=57 status=ok
// SIG undefined FUN_143eacb7c(void)

undefined8 * FUN_143eacb7c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4655e0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143eacbb6 FUN_143eacbb6 body=55 status=ok
// SIG undefined FUN_143eacbb6(void)

void FUN_143eacbb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb91728 == 0) {
    uVar1 = FUN_1410a124d();
    DAT_14cb91728 = FUN_140002ddd(FUN_143eaae71,uVar1,L"GbxUIPopupResult");
  }
  return;
}



// FUNCTION 143eacc62 FUN_143eacc62 body=57 status=ok
// SIG undefined FUN_143eacc62(void)

void FUN_143eacc62(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb91a50 == 0) {
    uVar1 = FUN_1410a124d();
    DAT_14cb91a50 = FUN_140002ddd(FUN_14656ab92,uVar1,L"GbxUIState");
  }
  return;
}



// FUNCTION 143eacc9c FUN_143eacc9c body=118 status=ok
// SIG undefined FUN_143eacc9c(void)

undefined8 FUN_143eacc9c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb91d78 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb91d78,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eacd14 FUN_143eacd14 body=117 status=ok
// SIG undefined FUN_143eacd14(void)

undefined8 * FUN_143eacd14(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 143eacd9c FUN_143eacd9c body=294 status=ok
// SIG undefined FUN_143eacd9c(void)

void FUN_143eacd9c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_143eace65;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_143eace14:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_143eace14;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_143eace65;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143eace65:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eacec4 FUN_143eacec4 body=389 status=ok
// SIG undefined FUN_143eacec4(void)

undefined8 * FUN_143eacec4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  plVar2 = (longlong *)param_2[1];
  param_1[1] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  plVar2 = (longlong *)param_2[3];
  param_1[3] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  plVar2 = (longlong *)param_2[5];
  param_1[5] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  plVar2 = (longlong *)param_2[7];
  param_1[7] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  plVar2 = (longlong *)param_2[9];
  param_1[9] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  plVar2 = (longlong *)param_2[0xb];
  param_1[0xb] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  plVar2 = (longlong *)param_2[0xd];
  param_1[0xd] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar3 = param_2[0xf];
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_1489f60c6(param_1 + 0xf,iVar1,0);
    FUN_1489f6139(param_1[0xf],uVar3,iVar1);
  }
  *(undefined2 *)(param_1 + 0x11) = *(undefined2 *)(param_2 + 0x11);
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = *(undefined8 *)((longlong)param_2 + 0x8c);
  *(undefined8 *)((longlong)param_1 + 0x94) = *(undefined8 *)((longlong)param_2 + 0x94);
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  FUN_143eacd9c(param_1 + 0x14,param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  return param_1;
}



// FUNCTION 143ead04a FUN_143ead04a body=22 status=ok
// SIG undefined FUN_143ead04a(void)

undefined8 FUN_143ead04a(undefined8 param_1)

{
  FUN_141339184();
  return param_1;
}



// FUNCTION 143ead060 FUN_143ead060 body=310 status=ok
// SIG undefined FUN_143ead060(void)

void FUN_143ead060(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143ead0ca;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_143ead0ca:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 143ead196 FUN_143ead196 body=55 status=ok
// SIG undefined FUN_143ead196(void)

void FUN_143ead196(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb91a50 == 0) {
    uVar1 = FUN_1410a124d();
    DAT_14cb91a50 = FUN_140002ddd(FUN_14656ab92,uVar1,L"GbxUIState");
  }
  return;
}



// FUNCTION 143ead1ce FUN_143ead1ce body=308 status=ok
// SIG undefined FUN_143ead1ce(void)

void FUN_143ead1ce(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_143ead234;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_143ead234:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 143ead302 FUN_143ead302 body=1127 status=ok
// SIG undefined FUN_143ead302(void)

void FUN_143ead302(longlong *param_1,undefined8 *param_2,char param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  
  cVar5 = (**(code **)(*param_1 + 0x300))();
  if (cVar5 == '\0') {
    iVar2 = (int)param_1[0x54];
    if (iVar2 == 0) {
      uVar13 = 1;
      uVar17 = 0;
      iVar14 = 0;
      iVar6 = 0;
    }
    else {
      puVar7 = (uint *)param_1[0x53];
      if ((uint *)param_1[0x53] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x51);
      }
      uVar16 = *puVar7;
      if (uVar16 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        uVar17 = 0;
        uVar13 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar13 = uVar17;
        }
        iVar14 = 0;
        do {
          if (uVar13 == uVar17) {
            return;
          }
          iVar14 = iVar14 + 0x20;
          uVar16 = puVar7[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar17 = 0;
        iVar14 = 0;
      }
      uVar13 = (ulonglong)(-uVar16 & uVar16);
      uVar1 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar6 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
    }
    if (iVar6 != iVar2) {
      uVar16 = 0xffffffff;
      do {
        lVar8 = param_1[0x4f];
        lVar15 = *(longlong *)(lVar8 + 0x10 + (longlong)iVar6 * 0x20);
        if (lVar15 != 0) {
          if (param_3 != '\0') {
            FUN_144837e54(lVar15,0);
            lVar15 = *(longlong *)(lVar8 + (longlong)iVar6 * 0x20 + 0x10);
          }
          if (((*(byte **)(lVar15 + 0x48) != (byte *)0x0) &&
              ((**(byte **)(lVar15 + 0x48) & 0x6b) == 3)) &&
             (plVar4 = *(longlong **)(lVar15 + 0x30), plVar4 != (longlong *)0x0)) {
            lVar8 = (**(code **)(*plVar4 + 8))(plVar4);
            if (DAT_14cb91a50 == 0) {
              uVar9 = FUN_1410a124d();
              DAT_14cb91a50 = FUN_140002ddd(FUN_14656ab92,uVar9,L"GbxUIState");
              if (DAT_14cb91a50 == 0) goto LAB_143ead69d;
            }
            if ((*(int *)(DAT_14cb91a50 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cb91a50 + 0x38) * 8) ==
                DAT_14cb91a50 + 0x30)) {
              (*(code *)*param_2)(param_2[1],plVar4);
            }
          }
        }
LAB_143ead69d:
        uVar16 = uVar16 & ~(uint)uVar13;
        puVar7 = (uint *)param_1[0x53];
        if ((uint *)param_1[0x53] == (uint *)0x0) {
          puVar7 = (uint *)(param_1 + 0x51);
        }
        iVar3 = (int)param_1[0x54];
        iVar6 = (int)uVar17;
        lVar8 = (longlong)iVar6;
        uVar12 = puVar7[lVar8] & uVar16;
        if (uVar12 == 0) {
          iVar10 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar10 = iVar3 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar6) {
            iVar11 = iVar6;
          }
          if (iVar6 < iVar10) {
            lVar15 = 0;
            do {
              uVar12 = puVar7[lVar8 + lVar15 + 1];
              if (uVar12 != 0) {
                uVar17 = (ulonglong)(iVar6 + (int)lVar15 + 1);
                uVar16 = 0xffffffff;
                goto LAB_143ead715;
              }
              iVar14 = iVar14 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar11 - lVar8 != lVar15);
            uVar16 = 0xffffffff;
            iVar6 = iVar11;
          }
          uVar17 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar3;
        }
        else {
LAB_143ead715:
          uVar13 = (ulonglong)(-uVar12 & uVar12);
          uVar1 = uVar13 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          iVar6 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar6) {
            iVar6 = iVar3;
          }
        }
      } while (iVar6 != iVar2);
    }
  }
  else {
    iVar2 = (int)param_1[0x3e];
    if (iVar2 == 0) {
      uVar17 = 1;
      uVar13 = 0;
      iVar14 = 0;
      iVar6 = 0;
    }
    else {
      puVar7 = (uint *)param_1[0x3d];
      if ((uint *)param_1[0x3d] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x3b);
      }
      uVar16 = *puVar7;
      if (uVar16 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        uVar13 = 0;
        uVar17 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar17 = uVar13;
        }
        iVar14 = 0;
        do {
          if (uVar17 == uVar13) {
            return;
          }
          iVar14 = iVar14 + 0x20;
          uVar16 = puVar7[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar13 = 0;
        iVar14 = 0;
      }
      uVar17 = (ulonglong)(-uVar16 & uVar16);
      uVar1 = uVar17 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar6 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
    }
    if (iVar6 != iVar2) {
      uVar16 = 0xffffffff;
      do {
        plVar4 = *(longlong **)(param_1[0x39] + 0x10 + (longlong)iVar6 * 0x20);
        if (plVar4 != (longlong *)0x0) {
          lVar8 = (**(code **)(*plVar4 + 8))(plVar4);
          if (DAT_14cb91a50 == 0) {
            uVar9 = FUN_1410a124d();
            DAT_14cb91a50 = FUN_140002ddd(FUN_14656ab92,uVar9,L"GbxUIState");
            if (DAT_14cb91a50 == 0) goto LAB_143ead4ea;
          }
          if ((*(int *)(DAT_14cb91a50 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cb91a50 + 0x38) * 8) ==
              DAT_14cb91a50 + 0x30)) {
            (*(code *)*param_2)(param_2[1],plVar4);
          }
        }
LAB_143ead4ea:
        uVar16 = uVar16 & ~(uint)uVar17;
        puVar7 = (uint *)param_1[0x3d];
        if ((uint *)param_1[0x3d] == (uint *)0x0) {
          puVar7 = (uint *)(param_1 + 0x3b);
        }
        iVar3 = (int)param_1[0x3e];
        iVar6 = (int)uVar13;
        lVar8 = (longlong)iVar6;
        uVar12 = puVar7[lVar8] & uVar16;
        if (uVar12 == 0) {
          iVar10 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar10 = iVar3 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar6) {
            iVar11 = iVar6;
          }
          if (iVar6 < iVar10) {
            lVar15 = 0;
            do {
              uVar12 = puVar7[lVar8 + lVar15 + 1];
              if (uVar12 != 0) {
                uVar13 = (ulonglong)(iVar6 + (int)lVar15 + 1);
                uVar16 = 0xffffffff;
                goto LAB_143ead565;
              }
              iVar14 = iVar14 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar11 - lVar8 != lVar15);
            uVar16 = 0xffffffff;
            iVar6 = iVar11;
          }
          uVar13 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar3;
        }
        else {
LAB_143ead565:
          uVar17 = (ulonglong)(-uVar12 & uVar12);
          uVar1 = uVar17 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          iVar6 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar6) {
            iVar6 = iVar3;
          }
        }
      } while (iVar6 != iVar2);
    }
  }
  return;
}



// FUNCTION 143ead76a FUN_143ead76a body=67 status=ok
// SIG undefined FUN_143ead76a(void)

void FUN_143ead76a(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ead7ae FUN_143ead7ae body=53 status=ok
// SIG undefined FUN_143ead7ae(void)

void FUN_143ead7ae(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_143ead7e4(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 143ead7e4 FUN_143ead7e4 body=346 status=ok
// SIG undefined FUN_143ead7e4(void)

void FUN_143ead7e4(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143ead876;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_143ead876:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 143ead93e FUN_143ead93e body=2908 status=ok
// SIG undefined FUN_143ead93e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ead93e(void)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined4 local_8c;
  char *local_88;
  int local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  local_a8 = 4;
  FUN_14282b410(L"/Script/GbxUICore",0,0,&PTR_FUN_14b45c5c0);
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  local_a8 = 1;
  FUN_14282b410(L"/Script/GbxUICore",&PTR_FUN_14b45cc30,1,&PTR_FUN_14b45cc00);
  ppuStack_a0 = &PTR_FUN_14b45ddc0;
  local_a8 = 4;
  uStack_98 = 3;
  FUN_14282b410(L"/Script/GbxUICore",&PTR_FUN_14b45dec0,1,&PTR_FUN_14b45de20);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICore",&PTR_FUN_14b45e4d0,1,0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICore",&PTR_FUN_14b45e830,1,0);
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  local_a8 = 1;
  FUN_14282b410(L"/Script/GbxUICore",0,0,&PTR_FUN_14b45e8f0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICore",&PTR_FUN_14b45ed20,1,0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICore",&PTR_FUN_14b45f0c0,1,0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICore",&PTR_FUN_14b45f4b0,1,0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICore",&PTR_FUN_14b45ffe0,3,0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICore",&PTR_FUN_14b460410,1,0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICore",&PTR_FUN_14b460f40,3,0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICore",&PTR_FUN_14b461480,1,0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICore",&PTR_FUN_14b461c30,1,0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICore",&PTR_FUN_14b462090,1,0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICore",&PTR_FUN_14b4624a0,1,0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICore",&PTR_FUN_14b4628b0,1,0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICore",&PTR_FUN_14b462ce0,1,0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICore",&PTR_FUN_14b4631c0,1,0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICore",&PTR_FUN_14b4638e0,2,0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICore",&PTR_FUN_14b463c80,1,0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICore",&PTR_FUN_14b464000,1,0);
  local_88 = "AssetRegistry";
  local_80 = 0xd;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb91a40 = (ulonglong)uVar2;
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  local_a8 = 1;
  FUN_14282b410(L"/Script/GbxUICore",&PTR_FUN_14b464780,1,&PTR_FUN_14b464750);
  DAT_14cb91a78 = 0;
  DAT_14cb91a80 = 0;
  atexit(FUN_143eab02e);
  FUN_1446f470e(&DAT_14cb91a88,L"def_globals_ui",1);
  DAT_14cb91ab0 = 0;
  DAT_14cb91ab8 = 0;
  DAT_14cb91a90 = 0;
  _DAT_14cb91a98 = 0;
  _DAT_14cb91abc = 0xffffffff00000080;
  DAT_14cb91ac4 = 0;
  DAT_14cb91ad0 = 0;
  DAT_14cb91ad8 = 0;
  atexit(FUN_143eab585);
  local_88 = (char *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  local_80 = 2;
  *(undefined ***)local_88 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_88 + 0x10) = lVar3;
  *(undefined ***)local_88 = &PTR_FUN_14a380e50;
  *(code **)(local_88 + 0x18) = FUN_143eab5ae;
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_14156bb10(&DAT_14cb91ae0,L"Gbx.UI.Popup.Add",
                L"Push a popup in the popup manager. Arguments: Id, Type(0 for 1 button, 1 for 2 buttons, 2 for 3 buttons, 3 for loading), Priority (0 for normal, 1 for high, 2 for critical), Title Text, Body Text, FirstBtn text override, SecondBtn text override, ThirdBtn text override "
                ,&local_88);
  if (local_80 == 0) {
LAB_143eade06:
    if (local_88 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_143eade06;
  }
  atexit(FUN_143eab7f9);
  local_88 = (char *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  local_80 = 2;
  *(undefined ***)local_88 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_88 + 0x10) = lVar3;
  *(undefined ***)local_88 = &PTR_FUN_14a380e50;
  *(code **)(local_88 + 0x18) = FUN_1489f3642;
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_14156bb10(&DAT_14cb91af0,L"Gbx.UI.Popup.Remove",
                L"Remove a popup from the popup manager. Arguments : Id",&local_88);
  if (local_80 == 0) {
LAB_143eadee4:
    if (local_88 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_143eadee4;
  }
  atexit(FUN_143eab83e);
  local_88 = (char *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  local_80 = 2;
  *(undefined ***)local_88 = &PTR_LAB_14acb7d20;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_88 + 0x10) = lVar3;
  *(undefined ***)local_88 = &PTR_FUN_14acb7cb0;
  *(code **)(local_88 + 0x18) = FUN_1489f36da;
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141819a96(&DAT_14cb91b00,L"gbx.ui.togglevisibility",
                L"Toggles rendering of the given ui view. args [Optional View Handle Index]",
                &local_88);
  if (local_80 == 0) {
LAB_143eadfd0:
    if (local_88 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_143eadfd0;
  }
  atexit(FUN_143eab883);
  local_88 = (char *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  local_80 = 2;
  *(undefined ***)local_88 = &PTR_LAB_14acb7d20;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_88 + 0x10) = lVar3;
  *(undefined ***)local_88 = &PTR_FUN_14acb7cb0;
  *(code **)(local_88 + 0x18) = FUN_14656ac22;
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141819a96(&DAT_14cb91b10,L"gbx.ui.setvisibility",L"Sets rendering of the ui on or off",
                &local_88);
  if (local_80 != 0) {
    if (local_88 == (char *)0x0) goto LAB_143eae0bc;
    (*(code *)**(undefined8 **)local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80 = 0;
  }
  if (local_88 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143eae0bc:
  atexit(FUN_143eab8c8);
  local_88 = (char *)0x800000014b464be2;
  local_8c = 9;
  local_80 = FUN_14577453c();
  local_7c = 1;
  FUN_14656ad60(&local_88);
  local_88 = "nexus";
  local_80 = 5;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb91bc8 = (ulonglong)uVar2;
  _DAT_14cb91bd0 = 0;
  uRam000000014cb91bd8 = 0;
  _DAT_14cb91be0 = 0;
  DAT_14cb91be8 = 0;
  uRam000000014cb91bf0 = 0;
  FUN_1446ddda2(&DAT_14cb91bd0,"parent",0);
  atexit((_func_5014 *)&LAB_143eabd97);
  _DAT_14cb91bf8 = 0;
  uRam000000014cb91c00 = 0;
  _DAT_14cb91c08 = 0;
  DAT_14cb91c10 = 0;
  uRam000000014cb91c18 = 0;
  FUN_1446ddda2(&DAT_14cb91bf8,"apply",0);
  atexit((_func_5014 *)&LAB_143eabda8);
  _DAT_14cb91c20 = 0;
  uRam000000014cb91c28 = 0;
  _DAT_14cb91c30 = 0;
  DAT_14cb91c38 = 0;
  uRam000000014cb91c40 = 0;
  FUN_1446ddda2(&DAT_14cb91c20,"layer",0);
  atexit((_func_5014 *)&LAB_143eabdb9);
  _DAT_14cb91c48 = 0;
  uRam000000014cb91c50 = 0;
  _DAT_14cb91c58 = 0;
  DAT_14cb91c60 = 0;
  uRam000000014cb91c68 = 0;
  FUN_1446ddda2(&DAT_14cb91c48,"apply_tags",0);
  atexit((_func_5014 *)&LAB_143eabdca);
  _DAT_14cb91c70 = 0;
  uRam000000014cb91c78 = 0;
  _DAT_14cb91c80 = 0;
  DAT_14cb91c88 = 0;
  uRam000000014cb91c90 = 0;
  FUN_1446ddda2(&DAT_14cb91c70,"remove_tags",0);
  atexit((_func_5014 *)&LAB_143eabddb);
  _DAT_14cb91c98 = 0;
  uRam000000014cb91ca0 = 0;
  _DAT_14cb91ca8 = 0;
  DAT_14cb91cb0 = 0;
  uRam000000014cb91cb8 = 0;
  FUN_1446ddda2(&DAT_14cb91c98,"exclusive_tags",0);
  atexit((_func_5014 *)&LAB_143eabdec);
  _DAT_14cb91cc0 = 0;
  uRam000000014cb91cc8 = 0;
  _DAT_14cb91cd0 = 0;
  DAT_14cb91cd8 = 0;
  uRam000000014cb91ce0 = 0;
  FUN_1446ddda2(&DAT_14cb91cc0,"StatesToRemove",0);
  atexit((_func_5014 *)&LAB_143eabdfd);
  _DAT_14cb91ce8 = 0;
  uRam000000014cb91cf0 = 0;
  _DAT_14cb91cf8 = 0;
  DAT_14cb91d00 = 0;
  uRam000000014cb91d08 = 0;
  FUN_1446ddda2(&DAT_14cb91ce8,"layers",0);
  atexit((_func_5014 *)&LAB_143eabe0e);
  _DAT_14cb91d10 = 0;
  uRam000000014cb91d18 = 0;
  _DAT_14cb91d20 = 0;
  DAT_14cb91d28 = 0;
  uRam000000014cb91d30 = 0;
  FUN_1446ddda2(&DAT_14cb91d10,&DAT_14acb8ea6,0);
  atexit((_func_5014 *)&LAB_143eabe1f);
  _DAT_14cb91d38 = 0;
  uRam000000014cb91d40 = 0;
  _DAT_14cb91d48 = 0;
  DAT_14cb91d50 = 0;
  uRam000000014cb91d58 = 0;
  FUN_1446ddda2(&DAT_14cb91d38,"behavior",0);
  atexit((_func_5014 *)&LAB_143eabe30);
  FUN_1446f470e(&DAT_14cb91e70,L"Unset",1);
  _DAT_14cb91d68 = &LAB_143eabe41;
  _DAT_14cb91d70 = 0x43980000;
  DAT_14cb91d74 = 1;
  DAT_14cb91d60 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb91d60;
  atexit((_func_5014 *)&LAB_143eabe46);
  DAT_14cb91de0 = 0;
  uRam000000014cb91de8 = 0;
  local_78 = 0;
  local_68 = &PTR_LAB_14a1795c0;
  local_60 = FUN_143ead196;
  local_88 = &DAT_14011fc1e;
  FUN_146101f6e(&local_88);
  atexit((_func_5014 *)&LAB_143eabea3);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eae4c4 FUN_143eae4c4 body=252 status=ok
// SIG undefined FUN_143eae4c4(void)

void FUN_143eae4c4(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b4677f0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14494321d();
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[3] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  return;
}



// FUNCTION 143eae5e6 FUN_143eae5e6 body=493 status=ok
// SIG undefined FUN_143eae5e6(void)

void FUN_143eae5e6(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[6] = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b4677f0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14494321d();
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[3] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  *param_2 = &PTR_FUN_14b4677d0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14494321d();
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[5] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 6) = 0;
  return;
}



// FUNCTION 143eae7ec FUN_143eae7ec body=57 status=ok
// SIG undefined FUN_143eae7ec(void)

void FUN_143eae7ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb91ec8 == 0) {
    uVar1 = FUN_14580b51a();
    DAT_14cb91ec8 = FUN_140002ddd(FUN_14656b583,uVar1,L"GbxUIDisplayDataDef_HeaderBodyText");
  }
  return;
}



// FUNCTION 143eae842 FUN_143eae842 body=262 status=ok
// SIG undefined FUN_143eae842(void)

void FUN_143eae842(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b4677f0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14494321d();
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[3] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  *param_2 = &PTR_FUN_14b467690;
  return;
}



// FUNCTION 143eae95f FUN_143eae95f body=238 status=ok
// SIG undefined FUN_143eae95f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eae95f(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_44;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 5;
  FUN_14282b410(L"/Script/GbxUICoreGame",0,0,&PTR_FUN_14b466a90);
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_14282b410(L"/Script/GbxUICoreGame",&PTR_FUN_14b466f10,1,0);
  local_40 = (char *)0x800000014b466f38;
  local_44 = 0xd;
  local_38 = FUN_14577453c();
  local_34 = 1;
  FUN_14656b732(&local_40);
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb91f28 = (ulonglong)uVar1;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eaea50 FUN_143eaea50 body=55 status=ok
// SIG undefined FUN_143eaea50(void)

void FUN_143eaea50(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb92230 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb92230 = FUN_14171c317(FUN_14656c66a,uVar1,L"EWidgetHideFlags");
  }
  return;
}



// FUNCTION 143eaea87 FUN_143eaea87 body=55 status=ok
// SIG undefined FUN_143eaea87(void)

void FUN_143eaea87(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb92260 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb92260 = FUN_14171c317(FUN_14656c702,uVar1,L"ETagAggregationType");
  }
  return;
}



// FUNCTION 143eaeabe FUN_143eaeabe body=55 status=ok
// SIG undefined FUN_143eaeabe(void)

void FUN_143eaeabe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb92278 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb92278 = FUN_14171c317(FUN_14656c731,uVar1,L"WidgetType");
  }
  return;
}



// FUNCTION 143eaeb8c FUN_143eaeb8c body=57 status=ok
// SIG undefined FUN_143eaeb8c(void)

void FUN_143eaeb8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb91fb0 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb91fb0 = FUN_140002ddd(FUN_14656bc5d,uVar1,L"GbxSkillComponent_UIEx");
  }
  return;
}



// FUNCTION 143eaec04 FUN_143eaec04 body=57 status=ok
// SIG undefined FUN_143eaec04(void)

void FUN_143eaec04(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb91fe0 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb91fe0 = FUN_140002ddd(FUN_14656bd89,uVar1,L"GbxSkillComponentData_UIEx");
  }
  return;
}



// FUNCTION 143eaec84 FUN_143eaec84 body=57 status=ok
// SIG undefined FUN_143eaec84(void)

void FUN_143eaec84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb920a8 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb920a8 = FUN_140002ddd(FUN_14656bfb3,uVar1,L"GbxUIComponent");
  }
  return;
}



// FUNCTION 143eaed10 FUN_143eaed10 body=73 status=ok
// SIG undefined FUN_143eaed10(void)

void FUN_143eaed10(longlong param_1,int param_2)

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



// FUNCTION 143eaed68 FUN_143eaed68 body=183 status=ok
// SIG undefined FUN_143eaed68(void)

void FUN_143eaed68(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x140);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b470d80;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  *(undefined8 *)((longlong)param_2 + 0x51) = 0;
  *(undefined8 *)((longlong)param_2 + 0x59) = 0;
  *(undefined4 *)(param_2 + 0xd) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x74) = 0;
  *(undefined4 *)(param_2 + 0x1b) = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined8 *)((longlong)param_2 + 0xdc) = 0xffffffff00000080;
  param_2[0x1e] = 0;
  param_2[0x24] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  *(undefined8 *)((longlong)param_2 + 300) = 0xffffffff00000080;
  param_2[0x28] = 0;
  return;
}



// FUNCTION 143eaee3a FUN_143eaee3a body=57 status=ok
// SIG undefined FUN_143eaee3a(void)

void FUN_143eaee3a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb921e8 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb921e8 = FUN_140002ddd(FUN_14656c568,uVar1,L"GbxUIViewDef");
  }
  return;
}



// FUNCTION 143eaee9e FUN_143eaee9e body=270 status=ok
// SIG undefined FUN_143eaee9e(void)

void FUN_143eaee9e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x218);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b471330;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined1 *)(param_2 + 8) = 0;
  memset(param_2 + 9,0,0xa1);
  *(undefined4 *)((longlong)param_2 + 0xec) = 3;
  *(undefined4 *)(param_2 + 0x25) = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  *(undefined8 *)((longlong)param_2 + 300) = 0xffffffff00000080;
  param_2[0x28] = 0;
  param_2[0x2e] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  *(undefined8 *)((longlong)param_2 + 0x17c) = 0xffffffff00000080;
  param_2[0x32] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *(undefined2 *)(param_2 + 0x36) = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  *(undefined8 *)((longlong)param_2 + 0x213) = 0;
  *(undefined8 *)((longlong)param_2 + 0x21b) = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  return;
}



// FUNCTION 143eaefc4 FUN_143eaefc4 body=57 status=ok
// SIG undefined FUN_143eaefc4(void)

void FUN_143eaefc4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb92290 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb92290 = FUN_140002ddd(FUN_1418b74c8,uVar1,L"GbxUIWidgetDef");
  }
  return;
}



// FUNCTION 143eaf0c2 FUN_143eaf0c2 body=281 status=ok
// SIG undefined FUN_143eaf0c2(void)

void FUN_143eaf0c2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x218);
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  memset(param_2 + 9,0,0xa1);
  *(undefined4 *)((longlong)param_2 + 0xec) = 3;
  *(undefined4 *)(param_2 + 0x25) = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  *(undefined8 *)((longlong)param_2 + 300) = 0xffffffff00000080;
  param_2[0x28] = 0;
  param_2[0x2e] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  *(undefined8 *)((longlong)param_2 + 0x17c) = 0xffffffff00000080;
  param_2[0x32] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *(undefined2 *)(param_2 + 0x36) = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  *(undefined8 *)((longlong)param_2 + 0x213) = 0;
  *(undefined8 *)((longlong)param_2 + 0x21b) = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  *param_2 = &PTR_FUN_14b471a50;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  *(undefined1 *)(param_2 + 8) = 1;
  return;
}



// FUNCTION 143eaf1dc FUN_143eaf1dc body=57 status=ok
// SIG undefined FUN_143eaf1dc(void)

void FUN_143eaf1dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb92308 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb92308 = FUN_140002ddd(FUN_14656ca53,uVar1,L"GbxUIWidgetDef_List");
  }
  return;
}



// FUNCTION 143eaf286 FUN_143eaf286 body=57 status=ok
// SIG undefined FUN_143eaf286(void)

void FUN_143eaf286(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb92320 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb92320 = FUN_140002ddd(FUN_14656c760,uVar1,L"GbxUIWidgetClassDef");
  }
  return;
}



// FUNCTION 143eaf33e FUN_143eaf33e body=57 status=ok
// SIG undefined FUN_143eaf33e(void)

void FUN_143eaf33e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb92488 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb92488 = FUN_140002ddd(FUN_14656cf9f,uVar1,L"GbxUIData_MenuDebugBase");
  }
  return;
}



// FUNCTION 143eaf378 FUN_143eaf378 body=91 status=ok
// SIG undefined FUN_143eaf378(void)

undefined4 * FUN_143eaf378(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  uVar2 = *(undefined8 *)(param_2 + 2);
  param_1[4] = iVar1;
  if (iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1489feaf6(param_1 + 2,iVar1,0);
    FUN_1489feb6c(*(undefined8 *)(param_1 + 2),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 143eaf41a FUN_143eaf41a body=2060 status=ok
// SIG undefined FUN_143eaf41a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eaf41a(void)

{
  uint uVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 8;
  FUN_14282b410(L"/Script/GbxUICoherent",0,0,&PTR_FUN_14b468420);
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb91ff0 = (ulonglong)uVar1;
  local_70 = "state_remove_primary";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb91ff8 = (ulonglong)uVar1;
  local_70 = "state_add_primary";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92000 = (ulonglong)uVar1;
  local_70 = "state_add";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92008 = (ulonglong)uVar1;
  local_70 = "state_rem";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92010 = (ulonglong)uVar1;
  local_70 = "set_menu_state";
  local_68 = 0xe;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92018 = (ulonglong)uVar1;
  local_70 = "set_active_options";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92020 = (ulonglong)uVar1;
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICoherent",&PTR_FUN_14b468f10,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICoherent",&PTR_FUN_14b469470,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICoherent",&PTR_FUN_14b469880,1,0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxUICoherent",0,0,&PTR_FUN_14b4699a0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxUICoherent",0,0,&PTR_FUN_14b469a50);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/GbxUICoherent",0,0,&PTR_FUN_14b469c40);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICoherent",&PTR_FUN_14b46a270,1,0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxUICoherent",0,0,&PTR_FUN_14b46a320);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxUICoherent",0,0,&PTR_FUN_14b46a460);
  FUN_1446f470e(&DAT_14cb92148,L"Activate",1);
  FUN_1446f470e(&DAT_14cb92158,L"Deactivate",1);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICoherent",&PTR_FUN_14b46a970,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICoherent",&PTR_FUN_14b46aee0,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICoherent",&PTR_FUN_14b46b190,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICoherent",&PTR_FUN_14b46b5e0,1,0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxUICoherent",0,0,&PTR_FUN_14b46be70);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxUICoherent",0,0,&PTR_FUN_14b46bf50);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUICoherent",&PTR_FUN_14b46c1d0,1,0);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14b46c510;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxUICoherent",0,0,&PTR_FUN_14b46c530);
  uStack_78 = 2;
  ppuStack_80 = &PTR_FUN_14b46d8b0;
  local_88 = 7;
  FUN_14282b410(L"/Script/GbxUICoherent",0,0,&PTR_FUN_14b46d8f0);
  local_70 = "state_rem";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92330 = (ulonglong)uVar1;
  local_70 = "state_add";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92338 = (ulonglong)uVar1;
  local_70 = "state_remove_primary";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92340 = (ulonglong)uVar1;
  local_70 = "entry_sets";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92348 = (ulonglong)uVar1;
  local_70 = "entries";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92350 = (ulonglong)uVar1;
  local_70 = "menu_title";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92358 = (ulonglong)uVar1;
  local_70 = "actions";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92360 = (ulonglong)uVar1;
  local_70 = "loc_text";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92368 = (ulonglong)uVar1;
  local_70 = "desc_text";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92370 = (ulonglong)uVar1;
  local_70 = "style";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92378 = (ulonglong)uVar1;
  local_70 = "horizontal";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92380 = (ulonglong)uVar1;
  local_70 = "entry_set_default";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92388 = (ulonglong)uVar1;
  local_70 = "required_nexus_layer";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92390 = (ulonglong)uVar1;
  local_70 = "tooltip_key";
  local_68 = 0xb;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92398 = (ulonglong)uVar1;
  local_70 = "set_push";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb923a0 = (ulonglong)uVar1;
  local_70 = "exit_game";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb923a8 = (ulonglong)uVar1;
  local_70 = "back";
  local_68 = 4;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb923b0 = (ulonglong)uVar1;
  local_70 = "back_actions";
  local_68 = 0xc;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb923b8 = (ulonglong)uVar1;
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/GbxUICoherent",0,0,&PTR_FUN_14b46e100);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/GbxUICoherent",0,0,&PTR_FUN_14b46e820);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/GbxUICoherent",0,0,&PTR_FUN_14b46ef00);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 5;
  FUN_14282b410(L"/Script/GbxUICoherent",0,0,&PTR_FUN_14b46f710);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eafc44 FUN_143eafc44 body=756 status=ok
// SIG undefined FUN_143eafc44(void)

void FUN_143eafc44(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ILocalizationManager *pIVar6;
  undefined4 uVar7;
  ILocalizationManager *this;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  char *local_30;
  int local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  this = (ILocalizationManager *)FUN_14001cc68(8,0x10);
  cohtml::ILocalizationManager::ILocalizationManager(this);
  *(undefined ***)this = &PTR_FUN_14b474930;
  puVar4 = DAT_14cb92698;
  pIVar6 = (ILocalizationManager *)DAT_14cb92698;
  if (((ILocalizationManager *)DAT_14cb92698 != this) &&
     (pIVar6 = this, DAT_14cb92698 != (undefined8 *)0x0)) {
    puVar2 = (undefined8 *)*DAT_14cb92698;
    DAT_14cb92698 = (undefined8 *)this;
    (*(code *)*puVar2)(puVar4,1);
    pIVar6 = (ILocalizationManager *)DAT_14cb92698;
  }
  DAT_14cb92698 = (undefined8 *)pIVar6;
  local_30 = "CohtmlPlugin";
  local_28 = 0xc;
  local_24 = 0;
  uVar7 = FUN_14001a6c0(&local_30,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  FUN_1402c9134(&DAT_14c874628,uVar7,&local_30,1);
  if (DAT_14cb90d88 != 2) {
    FUN_1446efa72(&DAT_14cb90d80,0,2,0x10);
    DAT_14cb90d88 = 2;
  }
  puVar4 = DAT_14cb90d80;
  *DAT_14cb90d80 = &PTR_LAB_14b477a80;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar4[2] = lVar8;
  *puVar4 = &PTR_FUN_14b477a10;
  puVar4[3] = &LAB_145841366;
  FUN_14656dc34(&local_30,param_1);
  *(char **)(param_1 + 0x28) = local_30;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar5 = DAT_14caa8580;
  local_30 = (char *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *(undefined ***)local_30 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_30 + 0x10) = lVar9;
  *(undefined ***)local_30 = &PTR_FUN_14b477b60;
  *(longlong *)(local_30 + 0x18) = param_1;
  FUN_145d0b9a0(lVar5,local_38,&local_30);
  if (local_28 != 0) {
    if (local_30 == (char *)0x0) goto LAB_143eafe9f;
    if ((code *)**(undefined8 **)local_30 == FUN_145715146) {
      *(undefined ***)local_30 = &PTR_FUN_14b478da0;
      plVar3 = *(longlong **)(local_30 + 0x20);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
    }
    else {
      (*(code *)**(undefined8 **)local_30)(local_30,0);
    }
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143eafe9f:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eaff3a FUN_143eaff3a body=2464 status=ok
// SIG undefined FUN_143eaff3a(void)

void FUN_143eaff3a(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ushort uVar5;
  ushort uVar6;
  undefined8 uVar7;
  void *_Src;
  longlong *plVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  uint *puVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  longlong lVar27;
  ulonglong uVar28;
  bool bVar29;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined1 local_150;
  undefined1 local_148;
  undefined8 *local_140;
  int local_12c;
  longlong local_128;
  undefined8 *local_120;
  ulonglong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  int local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 *puStack_d0;
  undefined8 *local_c8;
  int local_c0;
  undefined4 local_bc;
  longlong local_b8;
  longlong *plStack_b0;
  uint local_a8 [4];
  uint *local_98;
  uint local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar12 = (longlong *)FUN_145a861f2();
  lVar13 = plVar12[0x22];
  if (lVar13 == 0) {
    (**(code **)(*plVar12 + 1000))(plVar12);
    lVar13 = plVar12[0x22];
    if (lVar13 == 0) goto LAB_143eb0237;
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  iVar21 = *(int *)(lVar13 + 0x50);
  uVar7 = *(undefined8 *)(lVar13 + 0x48);
  local_110 = param_1;
  local_f0 = iVar21;
  if (iVar21 == 0) {
    local_ec = 0;
  }
  else {
    FUN_1411c9c2e(&local_f8,iVar21,0);
    FUN_1411c9ba9(local_f8,uVar7,iVar21);
  }
  lVar13 = FUN_140c7d608();
  if (lVar13 != 0) {
    uVar28 = 0;
    local_108 = &local_b8;
    local_98 = (uint *)0x0;
    local_90 = 0;
    local_b8 = 0;
    plStack_b0 = (longlong *)0x0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    puStack_d0 = &local_108;
    local_d8 = (longlong *)&LAB_1438bb542;
    FUN_140ca888a(lVar13);
    uVar15 = (ulonglong)local_90;
    if (local_90 == 0) {
      uVar22 = 1;
      iVar21 = 0;
      uVar10 = 0;
    }
    else {
      puVar14 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar14 = local_a8;
      }
      uVar10 = *puVar14;
      if (uVar10 == 0) {
        iVar21 = local_90 + 0x1e;
        if (-1 < (int)(local_90 - 1)) {
          iVar21 = local_90 - 1;
        }
        uVar28 = 0;
        uVar22 = (ulonglong)(uint)(iVar21 >> 5);
        if (iVar21 >> 5 < 1) {
          uVar22 = uVar28;
        }
        iVar21 = 0;
        do {
          if (uVar22 == uVar28) goto LAB_143eb00e9;
          iVar21 = iVar21 + 0x20;
          uVar10 = puVar14[uVar28 + 1];
          uVar28 = uVar28 + 1;
        } while (uVar10 == 0);
      }
      else {
        uVar28 = 0;
        iVar21 = 0;
      }
      uVar22 = (ulonglong)(-uVar10 & uVar10);
      uVar3 = uVar22 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar10 = (iVar21 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if ((int)local_90 <= (int)uVar10) {
        uVar10 = local_90;
      }
    }
    if (uVar10 != local_90) {
      uVar24 = 0xffffffff;
      local_118 = uVar15;
      do {
        lVar13 = *(longlong *)(local_b8 + (longlong)(int)uVar10 * 0x18);
        if ((lVar13 != 0) &&
           (lVar23 = local_b8 + (longlong)(int)uVar10 * 0x18, *(longlong *)(lVar23 + 8) != 0)) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar13);
          }
          FUN_1400bbfc4(&local_d8,lVar13);
          puVar20 = local_c8;
          plVar12 = local_d8;
          local_120 = puStack_d0;
          local_12c = local_c0;
          cVar9 = (*(code *)PTR_FUN_14c758760)();
          uVar10 = *(uint *)(lVar13 + 0xc);
          if (cVar9 == '\0') {
LAB_143eb032c:
            if ((int)uVar10 < DAT_14c9647dc) {
              lVar13 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
            }
            else {
              lVar13 = 0;
            }
            if (*(int *)(lVar13 + 0x10) == 0) {
              LOCK();
              iVar26 = DAT_14c964868 + 1;
              UNLOCK();
              iVar16 = DAT_14c964868 + 1;
              bVar29 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar26;
              if (bVar29) {
                local_128 = CONCAT44(local_128._4_4_,iVar16);
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar16);
                iVar16 = (uint)local_128;
              }
              LOCK();
              if (*(int *)(lVar13 + 0x10) == 0) {
                *(int *)(lVar13 + 0x10) = iVar16;
              }
              UNLOCK();
            }
          }
          else {
            if ((int)uVar10 < DAT_14c9647dc) {
              lVar13 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
            }
            else {
              lVar13 = 0;
            }
            if ((*(uint *)(lVar13 + 8) & 0x8400000) == 0) goto LAB_143eb032c;
          }
          uVar15 = local_118;
          iVar26 = -1;
          if ((longlong)local_f0 != 0) {
            lVar13 = local_f8;
LAB_143eb0384:
            if ((*(longlong **)(lVar13 + 8) == plVar12) &&
               (*(undefined8 **)(lVar13 + 0x10) == local_120)) {
              if (*(int *)(lVar13 + 0x20) == local_12c) {
                if (1 < local_12c) {
                  local_128 = *(longlong *)(lVar13 + 0x18);
                  lVar27 = 0;
                  do {
                    uVar5 = *(ushort *)(local_128 + lVar27);
                    uVar6 = *(ushort *)((longlong)puVar20 + lVar27);
                    if (uVar5 == uVar6) {
                      if (uVar5 == 0) break;
                    }
                    else {
                      if (0x7f < (uVar6 | uVar5)) {
                        iVar16 = (uint)uVar5 - (uint)uVar6;
                        goto LAB_143eb040b;
                      }
                      if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[(uint)uVar6])
                      goto code_r0x000143eb0408;
                    }
                    lVar27 = lVar27 + 2;
                  } while( true );
                }
              }
              else if (*(int *)(lVar13 + 0x20) + local_12c != 1) goto LAB_143eb038a;
              goto LAB_143eb042a;
            }
            goto LAB_143eb038a;
          }
LAB_143eb0438:
          if (puVar20 != (undefined8 *)0x0) {
            FUN_1400020a8(puVar20);
          }
          if (iVar26 != -1) {
            lVar13 = *(longlong *)(lVar23 + 8);
            if ((DAT_14c950c29 == '\x01') && (lVar13 != 0)) {
              FUN_1456cec3c(lVar13);
LAB_143eb047c:
              uStack_100 = (undefined8 *)0x0;
              local_108 = (longlong *)0x0;
              FUN_1400bbfc4(&local_d8,lVar13);
              uVar18 = local_bc;
              local_108 = local_d8;
              uStack_100 = puStack_d0;
              local_120 = local_c8;
              local_12c = local_c0;
              cVar9 = (*(code *)PTR_FUN_14c758760)();
              uVar10 = *(uint *)(lVar13 + 0xc);
              if (cVar9 != '\0') {
                if ((int)uVar10 < DAT_14c9647dc) {
                  lVar13 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
                }
                else {
                  lVar13 = 0;
                }
                uVar15 = 0;
                if ((*(uint *)(lVar13 + 8) & 0x8400000) != 0) {
                  uVar10 = 0;
                  goto LAB_143eb0555;
                }
              }
              if ((int)uVar10 < DAT_14c9647dc) {
                lVar13 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
              }
              else {
                lVar13 = 0;
              }
              uVar15 = (ulonglong)*(uint *)(lVar13 + 0x10);
              if (*(uint *)(lVar13 + 0x10) == 0) {
                LOCK();
                iVar16 = DAT_14c964868 + 1;
                UNLOCK();
                uVar25 = DAT_14c964868 + 1;
                bVar29 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar16;
                if (bVar29) {
                  local_128 = CONCAT44(local_128._4_4_,uVar25);
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar25);
                  uVar25 = (uint)local_128;
                }
                LOCK();
                uVar11 = *(uint *)(lVar13 + 0x10);
                bVar29 = uVar11 == 0;
                if (bVar29) {
                  *(uint *)(lVar13 + 0x10) = uVar25;
                  uVar11 = 0;
                }
                UNLOCK();
                if (bVar29) {
                  uVar11 = uVar25;
                }
                uVar15 = (ulonglong)uVar11;
              }
            }
            else {
              if (lVar13 != 0) goto LAB_143eb047c;
              local_108 = (longlong *)0x0;
              uStack_100 = (undefined8 *)0x0;
              uVar10 = 0;
              uVar15 = 0;
              local_120 = (undefined8 *)0x0;
              local_12c = 0;
              uVar18 = 0;
            }
LAB_143eb0555:
            lVar13 = local_f8;
            lVar23 = (longlong)iVar26;
            *(ulonglong *)(local_f8 + lVar23 * 0x28) = (ulonglong)uVar10 | uVar15 << 0x20;
            puVar4 = (undefined4 *)(local_f8 + 8 + lVar23 * 0x28);
            *puVar4 = (undefined4)local_108;
            puVar4[1] = local_108._4_4_;
            puVar4[2] = (undefined4)uStack_100;
            puVar4[3] = uStack_100._4_4_;
            if (*(longlong *)(local_f8 + 0x18 + lVar23 * 0x28) != 0) {
              FUN_1400020a8();
            }
            lVar13 = lVar23 * 0x28 + lVar13;
            *(undefined8 **)(lVar13 + 0x18) = local_120;
            *(int *)(lVar13 + 0x20) = local_12c;
            *(undefined4 *)(lVar13 + 0x24) = uVar18;
            uVar15 = local_118;
          }
        }
        uVar24 = uVar24 & ~(uint)uVar22;
        puVar14 = local_98;
        if (local_98 == (uint *)0x0) {
          puVar14 = local_a8;
        }
        iVar26 = (int)uVar28;
        lVar13 = (longlong)iVar26;
        uVar10 = puVar14[lVar13] & uVar24;
        if (uVar10 == 0) {
          iVar16 = local_90 + 0x1e;
          if (-1 < (int)(local_90 - 1)) {
            iVar16 = local_90 - 1;
          }
          iVar16 = iVar16 >> 5;
          iVar21 = iVar21 + 0x20;
          iVar17 = iVar16;
          if (iVar16 < iVar26) {
            iVar17 = iVar26;
          }
          if (iVar26 < iVar16) {
            lVar23 = 0;
            do {
              uVar10 = puVar14[lVar13 + lVar23 + 1];
              if (uVar10 != 0) {
                uVar28 = (ulonglong)(iVar26 + (int)lVar23 + 1);
                uVar24 = 0xffffffff;
                goto LAB_143eb063a;
              }
              iVar21 = iVar21 + 0x20;
              lVar23 = lVar23 + 1;
            } while (iVar17 - lVar13 != lVar23);
            uVar24 = 0xffffffff;
            iVar26 = iVar17;
          }
          uVar28 = (ulonglong)(iVar26 + 1);
          uVar15 = local_118;
          uVar10 = local_90;
        }
        else {
LAB_143eb063a:
          uVar22 = (ulonglong)(-uVar10 & uVar10);
          uVar3 = uVar22 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uVar10 = (iVar21 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if ((int)local_90 <= (int)uVar10) {
            uVar10 = local_90;
          }
        }
      } while (uVar10 != (uint)uVar15);
    }
LAB_143eb00e9:
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_140f0c3ca(&local_b8);
  }
  lVar13 = (longlong)local_f0;
  if (lVar13 != 0) {
    lVar23 = local_f8 + 0x20;
    lVar27 = 0;
    do {
      uVar15 = uStack_e0;
      lVar19 = (longlong)(int)uStack_e0;
      uVar10 = (int)uStack_e0 + 1;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar10);
      if (uStack_e0._4_4_ < uVar10) {
        FUN_1406f071e(&local_e8,uVar15 & 0xffffffff);
      }
      piVar1 = (int *)(lVar23 + lVar27);
      lVar19 = lVar19 * 0x20;
      iVar21 = piVar1[-5];
      iVar26 = piVar1[-4];
      iVar16 = piVar1[-3];
      piVar2 = (int *)(local_e8 + lVar19);
      *piVar2 = piVar1[-6];
      piVar2[1] = iVar21;
      piVar2[2] = iVar26;
      piVar2[3] = iVar16;
      *(undefined8 *)(local_e8 + 0x10 + lVar19) = 0;
      iVar21 = *piVar1;
      _Src = *(void **)(piVar1 + -2);
      *(int *)(local_e8 + 0x18 + lVar19) = iVar21;
      if ((longlong)iVar21 == 0) {
        *(undefined4 *)(local_e8 + lVar19 + 0x1c) = 0;
      }
      else {
        puVar20 = (undefined8 *)(lVar19 + local_e8 + 0x10);
        FUN_1446dd670(puVar20,iVar21,0);
        memcpy((void *)*puVar20,_Src,(longlong)iVar21 * 2);
      }
      lVar27 = lVar27 + 0x28;
    } while (lVar13 * 0x28 != lVar27);
  }
  if (0 < (int)uStack_e0) {
    FUN_14050fd64();
    lVar13 = FUN_14050fd64();
    local_d8 = (longlong *)0x0;
    puStack_d0 = (undefined8 *)0x0;
    local_140 = &local_108;
    local_148 = 0;
    local_150 = 0;
    local_158 = 0;
    FUN_1457028c8(lVar13 + 0x1e8,&local_b8,&local_e8);
    plVar12 = plStack_b0;
    if ((longlong *)(local_110 + 0x18) != &local_b8) {
      *(longlong *)(local_110 + 0x18) = local_b8;
      local_b8 = 0;
      plVar8 = *(longlong **)(local_110 + 0x20);
      if (plStack_b0 != plVar8) {
        plStack_b0 = (longlong *)0x0;
        *(longlong **)(local_110 + 0x20) = plVar12;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar8 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
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
      }
    }
    plVar12 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_b0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if ((int)puStack_d0 != 0) {
      if (local_d8 == (longlong *)0x0) goto LAB_143eb01eb;
      if (*(code **)*local_d8 == FUN_145715146) {
        *local_d8 = (longlong)&PTR_FUN_14b478da0;
        plVar12 = (longlong *)local_d8[4];
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))();
          }
        }
      }
      else {
        (**(code **)*local_d8)(local_d8,0);
      }
      FUN_1446efa72(&local_d8,0,0,0x10);
      puStack_d0 = (undefined8 *)((ulonglong)puStack_d0 & 0xffffffff00000000);
    }
    if (local_d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143eb01eb:
  FUN_140cc83f7(local_f8,local_f0);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_140861e20(local_e8,uStack_e0 & 0xffffffff);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
LAB_143eb0237:
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143eb0408:
  iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar6];
LAB_143eb040b:
  if (iVar16 == 0) {
LAB_143eb042a:
    iVar26 = (int)((ulonglong)(lVar13 - local_f8) >> 3) * -0x33333333;
    goto LAB_143eb0438;
  }
LAB_143eb038a:
  lVar13 = lVar13 + 0x28;
  if (lVar13 == local_f8 + (longlong)local_f0 * 0x28) goto LAB_143eb0438;
  goto LAB_143eb0384;
}



// FUNCTION 143eb08dc FUN_143eb08dc body=186 status=ok
// SIG undefined FUN_143eb08dc(void)

void FUN_143eb08dc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  puVar4 = DAT_14cb92698;
  if (DAT_14cb92698 != (undefined8 *)0x0) {
    DAT_14cb92698 = (undefined8 *)0x0;
    (**(code **)*puVar4)(puVar4,1);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14480f766(&DAT_14c872cf8);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
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
  *(undefined8 *)(param_1 + 0x18) = 0;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000143eb098a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143eb0996 FUN_143eb0996 body=169 status=ok
// SIG undefined FUN_143eb0996(void)

void FUN_143eb0996(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2a8))();
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    FUN_14482b126(lVar2,0x40000000);
    lVar2 = *(longlong *)(param_1 + 0x30);
    FUN_144757f48(lVar2,0x40000000);
    uVar1 = *(uint *)(lVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    do {
      uVar1 = *(uint *)(lVar2 + 8);
      if ((uVar1 >> 0x15 & 1) != 0) {
        return;
      }
      LOCK();
      bVar3 = uVar1 == *(uint *)(lVar2 + 8);
      if (bVar3) {
        *(uint *)(lVar2 + 8) = uVar1 | 0x200000;
      }
      UNLOCK();
    } while (!bVar3);
  }
  return;
}



// FUNCTION 143eb0aa0 FUN_143eb0aa0 body=157 status=ok
// SIG undefined FUN_143eb0aa0(void)

void FUN_143eb0aa0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
  }
  else {
    plVar1 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x238) + 8);
  }
  plVar1 = (longlong *)*plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x198))(plVar1,1);
    (**(code **)(*plVar1 + 0x198))(plVar1,2);
    (**(code **)(*plVar1 + 0x198))(plVar1,4);
    (**(code **)(*plVar1 + 0x198))(plVar1,8);
    (**(code **)(*plVar1 + 0x198))(plVar1,0x10);
                    /* WARNING: Could not recover jumptable at 0x000143eb0b33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x198))(plVar1,0x200);
    return;
  }
  return;
}



// FUNCTION 143eb0b3d FUN_143eb0b3d body=613 status=ok
// SIG undefined FUN_143eb0b3d(void)

void FUN_143eb0b3d(int param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  code *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = *(longlong *)(param_2 + 0x1f0);
  if (lVar3 == 0) goto LAB_143eb0d5c;
  lVar1 = FUN_144a77418();
  if ((lVar1 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar1 != 0) goto LAB_143eb0b9f;
LAB_143eb0c76:
    lVar4 = 0;
  }
  else {
    FUN_1456cec3c(lVar1);
LAB_143eb0b9f:
    lVar2 = FUN_144a77418();
    if ((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) goto LAB_143eb0c76;
    lVar4 = 0;
    if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30) {
      lVar4 = lVar1;
    }
  }
  lVar3 = FUN_1448a6f9c(lVar3 + 0x100,lVar4);
  if ((lVar3 == 0) || (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 == 0)) goto LAB_143eb0d5c;
  if ((param_1 == -1) &&
     ((lVar1 = FUN_140636ec6(param_2), param_1 = DAT_14c763ad0, lVar1 != 0 &&
      (lVar2 = *(longlong *)(lVar1 + 0x430), lVar2 != 0)))) {
    if (DAT_14cae9568 == 0) {
      local_60 = &local_40;
      local_40 = FUN_1417de738;
      local_50 = &LAB_145893408;
      local_58 = &LAB_1458cbbd2;
      local_68 = &LAB_147ba21f1;
      local_70 = &LAB_1463e9233;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x1000000c;
      local_90 = 8;
      local_98 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar2 = *(longlong *)(lVar1 + 0x430);
      param_1 = DAT_14c763ad0;
      if (lVar2 == 0) goto LAB_143eb0d2d;
    }
    param_1 = DAT_14c763ad0;
    if ((((DAT_14cae9568 == 0) || (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 == 0)) ||
        (*(int *)(lVar1 + 0x38) < *(int *)(DAT_14cae9568 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) !=
        DAT_14cae9568 + 0x30)) goto LAB_143eb0d2d;
    FUN_1404963c2(lVar3,&local_40);
    *param_3 = local_40._0_4_;
    lVar3 = local_38;
  }
  else {
LAB_143eb0d2d:
    FUN_148a00168(lVar3,&local_40,param_1);
    *param_3 = local_40._0_4_;
    lVar3 = local_38;
  }
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  *(longlong *)(param_3 + 2) = lVar3;
LAB_143eb0d5c:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143eb0da4 FUN_143eb0da4 body=569 status=ok
// SIG undefined FUN_143eb0da4(void)

void FUN_143eb0da4(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  wchar_t *_Str;
  undefined2 *puVar7;
  bool bVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) && (0 < (int)param_1[1])) {
    iVar2 = -1;
    if ((int)param_1[1] != 1) {
      if (*(int *)(*param_1 + 0x18) == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = *(wchar_t **)(*param_1 + 0x10);
      }
      iVar2 = _wtoi(pwVar6);
    }
    lVar5 = *param_1;
    FUN_1400b22c2(&local_58,L".Preview");
    pwVar6 = (wchar_t *)CONCAT44(uStack_54,local_58);
    puVar7 = &DAT_149dfb77a;
    _Str = pwVar6;
    if ((int)local_50 == 0) {
      _Str = L"";
    }
    if (_Str == (wchar_t *)0x0) {
      bVar8 = false;
    }
    else {
      sVar4 = wcslen(_Str);
      local_70 = 0xffffffff;
      local_78 = 0;
      iVar3 = FUN_1447ee042(lVar5,_Str,sVar4 & 0xffffffff,1);
      bVar8 = iVar3 != -1;
      pwVar6 = (wchar_t *)CONCAT44(uStack_54,local_58);
    }
    if (pwVar6 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (bVar8) {
      iVar3 = *(int *)((undefined8 *)*param_1 + 1);
      iVar1 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar1 = 0;
      }
      FUN_1446f82e2(&local_60,iVar1,*(undefined8 *)*param_1,1);
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      FUN_1400702d4(DAT_14caa8580,&local_58,local_60,0);
      local_60 = CONCAT44(uStack_54,local_58);
      local_48 = local_60;
    }
    else {
      if (*(int *)((undefined8 *)*param_1 + 1) != 0) {
        puVar7 = *(undefined2 **)*param_1;
      }
      FUN_140002266(&local_58,L"UI.State.%s",puVar7);
      iVar3 = (int)local_50 + -1;
      if ((int)local_50 == 0) {
        iVar3 = 0;
      }
      FUN_1446f82e2(&local_68,iVar3,CONCAT44(uStack_54,local_58),1);
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      FUN_1400702d4(DAT_14caa8580,&local_60,local_68,0);
      local_48 = local_60;
      if (CONCAT44(uStack_54,local_58) != 0) {
        FUN_1400020a8();
      }
    }
    if (local_60 != 0) {
      local_58 = 0;
      local_50 = 0;
      FUN_143eb0b3d(iVar2,param_2,&local_58);
      if (local_50 != 0) {
        lVar5 = FUN_144a8c772(&local_58);
        if (lVar5 != 0) {
          FUN_14129c610(lVar5,&local_48);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eb0fde FUN_143eb0fde body=69 status=ok
// SIG undefined FUN_143eb0fde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eb0fde(void)

{
  _DAT_14cb926c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eb1020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb926c8,1);
  return;
}



// FUNCTION 143eb1024 FUN_143eb1024 body=569 status=ok
// SIG undefined FUN_143eb1024(void)

void FUN_143eb1024(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  wchar_t *_Str;
  undefined2 *puVar7;
  bool bVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) && (0 < (int)param_1[1])) {
    iVar2 = -1;
    if ((int)param_1[1] != 1) {
      if (*(int *)(*param_1 + 0x18) == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = *(wchar_t **)(*param_1 + 0x10);
      }
      iVar2 = _wtoi(pwVar6);
    }
    lVar5 = *param_1;
    FUN_1400b22c2(&local_58,L".Preview");
    pwVar6 = (wchar_t *)CONCAT44(uStack_54,local_58);
    puVar7 = &DAT_149dfb77a;
    _Str = pwVar6;
    if ((int)local_50 == 0) {
      _Str = L"";
    }
    if (_Str == (wchar_t *)0x0) {
      bVar8 = false;
    }
    else {
      sVar4 = wcslen(_Str);
      local_70 = 0xffffffff;
      local_78 = 0;
      iVar3 = FUN_1447ee042(lVar5,_Str,sVar4 & 0xffffffff,1);
      bVar8 = iVar3 != -1;
      pwVar6 = (wchar_t *)CONCAT44(uStack_54,local_58);
    }
    if (pwVar6 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (bVar8) {
      iVar3 = *(int *)((undefined8 *)*param_1 + 1);
      iVar1 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar1 = 0;
      }
      FUN_1446f82e2(&local_60,iVar1,*(undefined8 *)*param_1,1);
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      FUN_1400702d4(DAT_14caa8580,&local_58,local_60,0);
      local_60 = CONCAT44(uStack_54,local_58);
      local_48 = local_60;
    }
    else {
      if (*(int *)((undefined8 *)*param_1 + 1) != 0) {
        puVar7 = *(undefined2 **)*param_1;
      }
      FUN_140002266(&local_58,L"UI.State.%s",puVar7);
      iVar3 = (int)local_50 + -1;
      if ((int)local_50 == 0) {
        iVar3 = 0;
      }
      FUN_1446f82e2(&local_68,iVar3,CONCAT44(uStack_54,local_58),1);
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      FUN_1400702d4(DAT_14caa8580,&local_60,local_68,0);
      local_48 = local_60;
      if (CONCAT44(uStack_54,local_58) != 0) {
        FUN_1400020a8();
      }
    }
    if (local_60 != 0) {
      local_58 = 0;
      local_50 = 0;
      FUN_143eb0b3d(iVar2,param_2,&local_58);
      if (local_50 != 0) {
        lVar5 = FUN_144a8c772(&local_58);
        if (lVar5 != 0) {
          FUN_14129c566(lVar5,&local_48);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eb125e FUN_143eb125e body=69 status=ok
// SIG undefined FUN_143eb125e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eb125e(void)

{
  _DAT_14cb926d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eb12a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb926d8,1);
  return;
}



// FUNCTION 143eb12a3 FUN_143eb12a3 body=69 status=ok
// SIG undefined FUN_143eb12a3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eb12a3(void)

{
  _DAT_14cb926e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eb12e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb926e8,1);
  return;
}



// FUNCTION 143eb12e8 FUN_143eb12e8 body=209 status=ok
// SIG undefined FUN_143eb12e8(void)

void FUN_143eb12e8(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *_Str;
  longlong lVar5;
  
  if (param_2 == 0) {
    return;
  }
  if ((int)param_1[1] < 1) {
    return;
  }
  if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)*param_1;
  }
  iVar1 = _wtoi(_Str);
  lVar4 = *(longlong *)(param_2 + 0x1f0);
  if (lVar4 == 0) {
    return;
  }
  lVar2 = FUN_144a77418();
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar2 != 0) goto LAB_143eb1350;
  }
  else {
    FUN_1456cec3c(lVar2);
LAB_143eb1350:
    lVar3 = FUN_144a77418();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      lVar5 = 0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        lVar5 = lVar2;
      }
      goto LAB_143eb1375;
    }
  }
  lVar5 = 0;
LAB_143eb1375:
  lVar4 = FUN_1448a6f9c(lVar4 + 0x100,lVar5);
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x30) != 0)) {
    FUN_148a00356(*(longlong *)(lVar4 + 0x30),iVar1 != 0);
    return;
  }
  return;
}



// FUNCTION 143eb13b9 FUN_143eb13b9 body=69 status=ok
// SIG undefined FUN_143eb13b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eb13b9(void)

{
  _DAT_14cb926f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eb13fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb926f8,1);
  return;
}



// FUNCTION 143eb13fe FUN_143eb13fe body=232 status=ok
// SIG undefined FUN_143eb13fe(void)

void FUN_143eb13fe(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  wchar_t *_Str;
  longlong lVar5;
  
  if ((param_2 != 0) && (0 < (int)param_1[1])) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    iVar1 = _wtoi(_Str);
    plVar2 = (longlong *)FUN_140628716();
    lVar5 = plVar2[0x22];
    if (lVar5 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar5 = plVar2[0x22];
    }
    lVar3 = FUN_1458cac9e(DAT_14cb0d2b0,param_2);
    puVar4 = &DAT_14cb0d060;
    if (*(longlong *)(lVar3 + 0x2a8) != 0) {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x2a8) + 0x38);
    }
    if (*(int *)(puVar4 + 1) == 3) {
      if (iVar1 == 0) {
        *(undefined1 *)(lVar5 + 0x5a) = 0;
      }
      else {
        *(undefined1 *)(lVar5 + 0x5a) = 1;
      }
    }
    else {
      if (*(int *)(puVar4 + 1) != 2) {
        return;
      }
      if (iVar1 == 0) {
        *(undefined1 *)(lVar5 + 0x59) = 0;
      }
      else {
        *(undefined1 *)(lVar5 + 0x59) = 1;
      }
    }
    plVar2 = (longlong *)FUN_1449baec6(param_2);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143eb14d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x350))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 143eb14e6 FUN_143eb14e6 body=69 status=ok
// SIG undefined FUN_143eb14e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eb14e6(void)

{
  _DAT_14cb92700 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eb1528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb92708,1);
  return;
}



// FUNCTION 143eb152c FUN_143eb152c body=1489 status=ok
// SIG undefined FUN_143eb152c(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x000143eb1af3 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_143eb152c(longlong param_1)

{
  void *_Src;
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  code *pcVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  int local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  longlong local_a0;
  undefined8 local_98;
  code *local_88;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (((((*(int *)(param_1 + 100) == 0) || (uVar5 = *(uint *)(param_1 + 0x60), (int)uVar5 < 0)) ||
       (DAT_14c9647dc <= (int)uVar5)) ||
      ((lVar10 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar10 == 0 ||
       (*(int *)(lVar10 + 0x10) != *(int *)(param_1 + 100))))) ||
     ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)) goto LAB_143eb1a72;
  local_1d8 = 0;
  uStack_1d0 = 0;
  iVar12 = *(int *)(param_1 + 0x5c);
  iVar4 = *(int *)(param_1 + 0x70);
  if (iVar12 <= *(int *)(param_1 + 0x70)) {
    iVar4 = iVar12;
  }
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iVar4 == 0) {
    uStack_1d0._0_4_ = 0;
  }
  else {
    FUN_1418b896c(&local_1d8);
    iVar12 = *(int *)(param_1 + 0x5c);
  }
  iVar4 = (int)uStack_1d0;
  if (((int)uStack_1d0 < iVar12) && (iVar12 = *(int *)(param_1 + 0x70), iVar12 != 0)) {
    local_1f8 = param_1 + 0x68;
    do {
      lVar10 = *(longlong *)(param_1 + 0x68);
      lVar8 = (longlong)iVar12 * 0x40;
      local_1e0 = *(undefined8 *)(lVar10 + -0x40 + lVar8);
      *(undefined8 *)(lVar10 + -0x40 + lVar8) = 0;
      local_1fc = *(undefined4 *)(lVar10 + -0x38 + lVar8);
      local_200 = *(undefined4 *)(lVar10 + -0x34 + lVar8);
      *(undefined8 *)(lVar10 + -0x38 + lVar8) = 0;
      local_1e8 = *(undefined8 *)(lVar10 + -0x30 + lVar8);
      *(undefined8 *)(lVar10 + -0x30 + lVar8) = 0;
      local_204 = *(undefined4 *)(lVar10 + -0x28 + lVar8);
      local_208 = *(undefined4 *)(lVar10 + -0x24 + lVar8);
      *(undefined8 *)(lVar10 + -0x28 + lVar8) = 0;
      local_1f0 = *(undefined8 *)(lVar10 + -0x20 + lVar8);
      *(undefined8 *)(lVar10 + -0x20 + lVar8) = 0;
      uVar1 = *(undefined4 *)(lVar10 + -0x18 + lVar8);
      uVar2 = *(undefined4 *)(lVar10 + -0x14 + lVar8);
      *(undefined4 *)(lVar10 + -0x18 + lVar8) = 0;
      *(undefined4 *)(lVar10 + -0x14 + lVar8) = 0;
      local_198 = *(undefined4 *)(lVar10 + -8 + lVar8);
      local_1a0 = *(undefined8 *)(lVar10 + -0x10 + lVar8);
      iVar12 = *(int *)(param_1 + 0x70);
      lVar10 = *(longlong *)(param_1 + 0x68);
      lVar8 = (longlong)iVar12 * 0x40;
      FUN_1403e75f6(*(undefined8 *)(lVar10 + -0x20 + lVar8),*(undefined4 *)(lVar10 + -0x18 + lVar8))
      ;
      if (*(longlong *)(lVar10 + -0x20 + lVar8) != 0) {
        FUN_1400020a8();
      }
      _Src = (void *)(lVar10 + lVar8);
      FUN_1403e75f6(*(undefined8 *)((longlong)_Src + -0x30),*(undefined4 *)((longlong)_Src + -0x28))
      ;
      if (*(longlong *)((longlong)_Src + -0x30) != 0) {
        FUN_1400020a8();
      }
      plVar13 = (longlong *)(lVar10 + lVar8 + -0x40);
      if (*plVar13 != 0) {
        FUN_1400020a8();
      }
      iVar4 = *(int *)(param_1 + 0x70) - iVar12;
      if (iVar4 != 0) {
        memmove(plVar13,_Src,(longlong)iVar4 << 6);
        iVar12 = *(int *)(param_1 + 0x70);
      }
      *(int *)(param_1 + 0x70) = iVar12 + -1;
      FUN_1418b8a34(local_1f8);
      uVar3 = uStack_1d0;
      lVar10 = (longlong)(int)uStack_1d0;
      uVar5 = (int)uStack_1d0 + 1;
      uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar5);
      if (uStack_1d0._4_4_ < uVar5) {
        FUN_1418b886c(&local_1d8,uVar3 & 0xffffffff);
      }
      lVar10 = lVar10 * 0x40;
      *(undefined8 *)(local_1d8 + lVar10) = local_1e0;
      *(undefined4 *)(local_1d8 + 8 + lVar10) = local_1fc;
      *(undefined4 *)(local_1d8 + 0xc + lVar10) = local_200;
      *(undefined8 *)(local_1d8 + 0x10 + lVar10) = local_1e8;
      *(undefined4 *)(local_1d8 + 0x18 + lVar10) = local_204;
      *(undefined4 *)(local_1d8 + 0x1c + lVar10) = local_208;
      *(undefined8 *)(local_1d8 + 0x20 + lVar10) = local_1f0;
      *(undefined4 *)(local_1d8 + 0x28 + lVar10) = uVar1;
      *(undefined4 *)(local_1d8 + 0x2c + lVar10) = uVar2;
      *(undefined8 *)(local_1d8 + 0x30 + lVar10) = local_1a0;
      *(undefined4 *)(local_1d8 + 0x38 + lVar10) = local_198;
      FUN_1403e75f6(0,0);
      FUN_1403e75f6(0,0);
      iVar4 = (int)uStack_1d0;
    } while (((int)uStack_1d0 < *(int *)(param_1 + 0x5c)) &&
            (iVar12 = *(int *)(param_1 + 0x70), iVar12 != 0));
  }
  if (0 < iVar4) {
    if (*(int *)(param_1 + 100) == 0) {
LAB_143eb1aa0:
      lVar10 = 0;
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x60);
      lVar10 = 0;
      if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != *(int *)(param_1 + 100) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_143eb1aa0;
        lVar10 = *plVar13;
      }
    }
    local_a0 = 0;
    FUN_1446e6fe8(&local_1a0,"Event_GlyphsUpdated_EnhancedInput",0x21,1);
    FUN_140056680(&local_1c0,local_98);
    uVar3 = uStack_1d0;
    lVar8 = local_1d8;
    local_1b0 = 0;
    local_1a8 = (int)uStack_1d0;
    if ((int)uStack_1d0 == 0) {
      local_1a4 = 0;
    }
    else {
      FUN_1418b8abe(&local_1b0,uStack_1d0 & 0xffffffff);
      FUN_140af8cf5(local_1b0,lVar8,uVar3 & 0xffffffff);
    }
    local_88 = (code *)0x0;
    puVar6 = (undefined8 *)FUN_14001cc68(0x28,8);
    iVar12 = local_1a8;
    lVar8 = local_1b0;
    *puVar6 = &PTR_FUN_14b478240;
    puVar6[1] = local_1c0;
    local_1c0 = 0;
    *(undefined4 *)(puVar6 + 2) = (undefined4)local_1b8;
    *(undefined4 *)((longlong)puVar6 + 0x14) = local_1b8._4_4_;
    local_1b8 = 0;
    puVar6[3] = 0;
    *(int *)(puVar6 + 4) = local_1a8;
    if (local_1a8 == 0) {
      *(undefined4 *)((longlong)puVar6 + 0x24) = 0;
    }
    else {
      FUN_1418b8abe(puVar6 + 3,local_1a8);
      FUN_140af8cf5(puVar6[3],lVar8,iVar12);
    }
    if (puVar6 == (undefined8 *)&DAT_fffffffffffffff8) {
      pcVar11 = (code *)0x0;
    }
    else {
      pcVar11 = FUN_140f085a6;
      local_88 = FUN_140f085a6;
    }
    puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *puVar7 = 0;
    puVar7[2] = pcVar11;
    puVar7[4] = puVar6;
    local_78 = 0;
    *(undefined4 *)(puVar7 + 8) = local_58;
    *(undefined4 *)((longlong)puVar7 + 0x44) = uStack_54;
    *(undefined4 *)(puVar7 + 9) = uStack_50;
    *(undefined4 *)((longlong)puVar7 + 0x4c) = uStack_4c;
    *(undefined4 *)(puVar7 + 6) = local_68;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uStack_64;
    *(undefined4 *)(puVar7 + 7) = uStack_60;
    *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack_5c;
    if (puVar6 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_88 = (code *)0x0;
    }
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      puVar6 = *(undefined8 **)(lVar10 + 0x30);
      *(undefined8 **)(lVar10 + 0x30) = puVar7;
      UNLOCK();
      LOCK();
      *puVar6 = puVar7;
      UNLOCK();
      if (local_88 != (code *)0x0) {
        (**(code **)(CONCAT44(uStack_64,local_68) + 0x10))();
      }
    }
    FUN_140dde381(local_1b0,local_1a8);
    if (local_1b0 != 0) {
      FUN_1400020a8();
    }
    if (local_1c0 != 0) {
      FUN_1400020a8();
    }
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    if (*(int *)(param_1 + 100) == 0) {
LAB_143eb1aa8:
      uVar9 = 0;
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x60);
      uVar9 = 0;
      if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
        puVar6 = (undefined8 *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
        if ((puVar6 == (undefined8 *)0x0) ||
           ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 100) ||
            ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_143eb1aa8;
        uVar9 = *puVar6;
      }
    }
    FUN_1412a486e(uVar9,"Event_GlyphManager_Ready");
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x58);
  }
  FUN_140dde381(local_1d8,uStack_1d0 & 0xffffffff);
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
LAB_143eb1a72:
  if ((local_48 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eb1afe FUN_143eb1afe body=69 status=ok
// SIG undefined FUN_143eb1afe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eb1afe(void)

{
  _DAT_14cb92a38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eb1b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb92a40,1);
  return;
}



// FUNCTION 143eb1b43 FUN_143eb1b43 body=69 status=ok
// SIG undefined FUN_143eb1b43(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eb1b43(void)

{
  _DAT_14cb92a50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eb1b85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb92a58,1);
  return;
}



// FUNCTION 143eb1b88 FUN_143eb1b88 body=69 status=ok
// SIG undefined FUN_143eb1b88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eb1b88(void)

{
  _DAT_14cb92710 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eb1bca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb92718,1);
  return;
}



// FUNCTION 143eb1bcd FUN_143eb1bcd body=69 status=ok
// SIG undefined FUN_143eb1bcd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eb1bcd(void)

{
  _DAT_14cb92728 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eb1c0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb92730,1);
  return;
}



// FUNCTION 143eb1c12 FUN_143eb1c12 body=156 status=ok
// SIG undefined FUN_143eb1c12(void)

void FUN_143eb1c12(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 4;
  *puVar2 = &PTR_FUN_14b477888;
  if (((*(int *)(param_1 + 0x84) != 0) && (uVar1 = *(uint *)(param_1 + 0x80), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x84))) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        uVar3 = *puVar4;
      }
      else {
        uVar3 = 0;
      }
      FUN_1409ee7a4(uVar3,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 143eb1cae FUN_143eb1cae body=169 status=ok
// SIG undefined FUN_143eb1cae(void)

void FUN_143eb1cae(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0x10;
  *puVar2 = &PTR_FUN_14b466570;
  puVar2[2] = *param_2;
  if (((*(int *)(param_1 + 0x84) != 0) && (uVar1 = *(uint *)(param_1 + 0x80), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x84))) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        uVar3 = *puVar4;
      }
      else {
        uVar3 = 0;
      }
      FUN_1409ee7a4(uVar3,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 143eb1d58 FUN_143eb1d58 body=145 status=ok
// SIG undefined FUN_143eb1d58(void)

void FUN_143eb1d58(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 8) != 0) && (lVar1 = FUN_144a8c772(), lVar1 != 0)) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1405b0040(lVar1,&local_38);
    lVar1 = local_38;
    lVar3 = (longlong)(int)uStack_30;
    if (lVar3 != 0) {
      lVar2 = 0;
      do {
        FUN_145d4bb0e(*(undefined8 *)(lVar1 + lVar2));
        lVar2 = lVar2 + 8;
      } while (lVar3 * 8 != lVar2);
    }
    if (local_38 != 0) {
      FUN_1400020a8(local_38);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143eb1dea FUN_143eb1dea body=1231 status=ok
// SIG undefined FUN_143eb1dea(void)

void FUN_143eb1dea(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *_Src;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  size_t sVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  uint uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  int local_100;
  undefined4 local_fc;
  wchar_t *local_f8;
  int local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  wchar_t local_d8 [12];
  longlong local_c0;
  undefined8 uStack_b8;
  wchar_t *local_58;
  wchar_t *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_3 == (undefined8 *)0x0 || param_2 == 0) goto LAB_143eb217d;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  local_e8 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_e0 = 0;
  FUN_1400b22c2(&local_f8,param_2);
  if ((longlong)local_f0 != 0) {
    lVar4 = (longlong)local_f0 * 2;
    lVar9 = 0;
    do {
      if (local_f8[lVar9] == L'.') {
        if ((int)lVar9 != -1) {
          FUN_143e89b24(param_1,&local_f8,param_3);
          goto LAB_143eb215e;
        }
        break;
      }
      lVar9 = lVar9 + 1;
      lVar4 = lVar4 + -2;
    } while (lVar4 != 0);
  }
  local_d8[0] = L'\0';
  local_d8[1] = L'\0';
  local_d8[2] = L'\0';
  local_d8[3] = L'\0';
  local_d8[4] = L'\0';
  local_d8[5] = L'\0';
  local_d8[6] = L'\0';
  local_d8[7] = L'\0';
  local_d8[8] = L'\0';
  local_d8[9] = L'\0';
  local_c0 = 0;
  uStack_b8 = 0;
  FUN_1446ddda2(local_d8,param_2,0);
  cVar3 = FUN_140ac6c96(local_d8,&local_e8);
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  plVar2 = local_e8;
  local_50 = local_d8;
  if (cVar3 == '\0') {
    pwVar7 = local_f8;
    if (local_f0 == 0) {
      pwVar7 = L"";
    }
    local_58 = (wchar_t *)0x0;
    if (pwVar7 == (wchar_t *)0x0) {
      local_50 = (wchar_t *)0x0;
      local_48 = 0;
    }
    else {
      sVar5 = wcslen(pwVar7);
      local_48 = FUN_14475aa65(0,pwVar7,sVar5 & 0xffffffff);
      uVar8 = local_48 + 1;
      pwVar10 = (wchar_t *)0x0;
      if (0x80 < uVar8) {
        FUN_1446efa72(&local_58,0,uVar8,1);
        pwVar10 = local_58;
      }
      if (pwVar10 != (wchar_t *)0x0) {
        local_50 = pwVar10;
      }
      FUN_14475a98a(local_50,uVar8,pwVar7,(int)sVar5 + 1);
    }
    (**(code **)*param_3)(param_3,local_50,local_48);
    pwVar7 = local_58;
  }
  else {
    plVar6 = local_e8;
    if (*(code **)(*local_e8 + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*local_e8 + 0x50))(local_e8);
    }
    FUN_1447a1fc0(plVar6);
    pcVar1 = *(code **)(*plVar2 + 0x28);
    if (pcVar1 == FUN_14482841c) {
      plVar6 = plVar2 + 3;
      if (plVar2[5] != 0) {
        plVar6 = (longlong *)(plVar2[5] + 8);
      }
    }
    else if (pcVar1 == (code *)&LAB_14010c34c) {
      plVar6 = plVar2 + 2;
    }
    else {
      plVar6 = (longlong *)(*pcVar1)(plVar2);
    }
    local_108 = (wchar_t *)0x0;
    local_100 = (int)plVar6[1];
    lVar4 = (longlong)local_100;
    _Src = (void *)*plVar6;
    if (lVar4 == 0) {
      local_fc = 0;
LAB_143eb20ba:
      pwVar7 = L"";
LAB_143eb20d0:
      local_58 = (wchar_t *)0x0;
      sVar5 = wcslen(pwVar7);
      local_48 = FUN_14475aa65(0,pwVar7,sVar5 & 0xffffffff);
      uVar8 = local_48 + 1;
      pwVar10 = (wchar_t *)0x0;
      if (0x80 < uVar8) {
        FUN_1446efa72(&local_58,0,uVar8,1);
        pwVar10 = local_58;
      }
      if (pwVar10 != (wchar_t *)0x0) {
        local_50 = pwVar10;
      }
      FUN_14475a98a(local_50,uVar8,pwVar7,(int)sVar5 + 1);
    }
    else {
      FUN_1446dd670(&local_108,local_100,0);
      memcpy(local_108,_Src,lVar4 * 2);
      if (local_100 == 0) goto LAB_143eb20ba;
      local_58 = (wchar_t *)0x0;
      pwVar7 = local_108;
      if (local_108 != (wchar_t *)0x0) goto LAB_143eb20d0;
      local_50 = (wchar_t *)0x0;
      local_48 = 0;
    }
    (**(code **)*param_3)(param_3,local_50,local_48);
    pwVar7 = local_108;
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
      pwVar7 = local_108;
    }
  }
  if (pwVar7 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_143eb215e:
  if (local_f8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x10))();
  }
LAB_143eb217d:
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143eb22ba FUN_143eb22ba body=3325 status=ok
// SIG undefined FUN_143eb22ba(void)

void FUN_143eb22ba(longlong *param_1,float param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  int iVar27;
  bool bVar28;
  bool bVar29;
  float fVar30;
  undefined4 uVar31;
  undefined1 auStack_2e8 [32];
  undefined1 *local_2c8;
  undefined8 *local_2b8;
  uint *local_2b0;
  undefined8 *local_2a8;
  longlong *local_2a0;
  longlong local_298;
  undefined8 *local_290;
  undefined1 local_288 [8];
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined1 local_228;
  undefined4 local_224;
  undefined **local_220;
  undefined *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined2 local_1ac;
  void *local_1a8;
  int local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  void *local_180;
  int local_178;
  undefined4 local_174;
  undefined8 local_170 [8];
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 local_120 [8];
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 local_d0 [8];
  undefined8 *local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if ((((((char)param_1[4] != '\x01') || (*(int *)((longlong)param_1 + 0x14) == 0)) ||
       (uVar4 = *(uint *)(param_1 + 2), (int)uVar4 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar4 ||
       (lVar17 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar17 == 0)))) ||
     ((*(int *)(lVar17 + 0x10) != *(int *)((longlong)param_1 + 0x14) ||
      ((*(uint *)(lVar17 + 8) & 0x10200000) != 0)))) goto LAB_143eb2f71;
  local_90 = (undefined8 *)0x0;
  local_88 = 0x800000000;
  local_e0 = (undefined8 *)0x0;
  local_d8 = 0x800000000;
  local_130 = (undefined8 *)0x0;
  local_128 = 0x800000000;
  local_2a0 = param_1;
  if ((longlong)(int)param_1[1] != 0) {
    puVar9 = (undefined8 *)*param_1;
    local_290 = puVar9 + (longlong)(int)param_1[1] * 0xf;
    do {
      uVar20 = local_88;
      fVar30 = *(float *)((longlong)puVar9 + 0x74) + param_2;
      *(float *)((longlong)puVar9 + 0x74) = fVar30;
      if ((fVar30 == 0.0) && (!NAN(fVar30))) {
        lVar17 = (longlong)(int)local_88;
        uVar4 = (int)local_88 + 1;
        local_88 = CONCAT44(local_88._4_4_,uVar4);
        if (local_88._4_4_ < uVar4) {
          FUN_146276acc(local_d0,uVar20 & 0xffffffff);
        }
        puVar11 = local_90;
        if (local_90 == (undefined8 *)0x0) {
          puVar11 = local_d0;
        }
        puVar11[lVar17] = *puVar9;
      }
      lVar17 = puVar9[2];
      if (lVar17 == 0) {
        FUN_145d84a5c();
        lVar17 = FUN_14477b664();
        puVar9[2] = lVar17;
      }
      lVar23 = puVar9[3];
      local_2b8 = puVar9;
      if (lVar23 == 0) {
        if (lVar17 == 0) {
          lVar23 = 0;
        }
        else {
          lVar23 = 0;
          if (puVar9[1] != 0) {
            plVar18 = *(longlong **)(lVar17 + 0xb8);
            if ((plVar18 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar18 + 0x108))(), cVar3 == '\0')) {
              lVar23 = 0;
            }
            else {
              uVar6 = (**(code **)(*plVar18 + 0x110))(plVar18);
              lVar23 = FUN_144aff482(uVar6,puVar9 + 1);
            }
            local_2b8[3] = lVar23;
          }
        }
      }
      uVar4 = *(uint *)(lVar23 + 200);
      puVar9 = local_2b8;
      if (uVar4 == 0) {
        uVar25 = 1;
        uVar20 = 0;
        iVar27 = 0;
        uVar5 = 0;
      }
      else {
        puVar7 = *(uint **)(lVar23 + 0xc0);
        if (*(uint **)(lVar23 + 0xc0) == (uint *)0x0) {
          puVar7 = (uint *)(lVar23 + 0xb0);
        }
        uVar5 = *puVar7;
        if (uVar5 == 0) {
          iVar27 = uVar4 + 0x1e;
          if (-1 < (int)(uVar4 - 1)) {
            iVar27 = uVar4 - 1;
          }
          uVar20 = 0;
          uVar25 = (ulonglong)(uint)(iVar27 >> 5);
          if (iVar27 >> 5 < 1) {
            uVar25 = uVar20;
          }
          iVar27 = 0;
          do {
            if (uVar25 == uVar20) goto LAB_143eb2539;
            iVar27 = iVar27 + 0x20;
            uVar5 = puVar7[uVar20 + 1];
            uVar20 = uVar20 + 1;
          } while (uVar5 == 0);
        }
        else {
          uVar20 = 0;
          iVar27 = 0;
        }
        uVar25 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar25 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar5 = (iVar27 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)uVar4 <= (int)uVar5) {
          uVar5 = uVar4;
        }
      }
      if (uVar5 != uVar4) {
        uVar24 = 0xffffffff;
        local_2b0 = (uint *)(lVar23 + 0xb0);
        local_2a8 = (undefined8 *)(ulonglong)uVar4;
        local_298 = lVar23;
        do {
          lVar17 = *(longlong *)(local_298 + 0xa0);
          lVar23 = (longlong)(int)uVar5 * 0xc0;
          local_220 = &PTR_FUN_14b00bdf8;
          local_1f0 = 0;
          local_1e8 = 0;
          local_210 = 0;
          uStack_208 = 0;
          uStack_1e4 = 0x80;
          local_1e0 = 0xffffffff;
          uStack_1dc = 0;
          local_1d0 = 0;
          local_1c8 = 0;
          local_1c0 = 0;
          uStack_1b8 = 0;
          local_1ac = *(undefined2 *)(lVar17 + 0x7c + lVar23);
          local_1b0 = *(undefined4 *)(lVar17 + 0x78 + lVar23);
          local_218 = &DAT_14a176f00;
          local_1a8 = (void *)0x0;
          local_1a0 = *(int *)(lVar17 + 0x88 + lVar23);
          lVar26 = (longlong)local_1a0;
          pvVar2 = *(void **)(lVar17 + 0x80 + lVar23);
          if (lVar26 == 0) {
            local_19c = 0;
          }
          else {
            FUN_140501c24(&local_1a8,local_1a0,0);
            memcpy(local_1a8,pvVar2,lVar26 * 0x1c);
          }
          puVar11 = (undefined8 *)(lVar17 + lVar23);
          local_198 = puVar11[0x12];
          local_190 = *(undefined4 *)(puVar11 + 0x13);
          uStack_18c = *(undefined4 *)((longlong)puVar11 + 0x9c);
          uStack_188 = *(undefined4 *)(puVar11 + 0x14);
          uStack_184 = *(undefined4 *)((longlong)puVar11 + 0xa4);
          local_180 = (void *)0x0;
          local_178 = *(int *)(puVar11 + 0x16);
          lVar17 = (longlong)local_178;
          pvVar2 = (void *)puVar11[0x15];
          if (lVar17 == 0) {
            local_174 = 0;
          }
          else {
            FUN_1446dd670(&local_180,local_178,0);
            memcpy(local_180,pvVar2,lVar17 * 2);
          }
          plVar18 = local_2a0;
          puVar9 = local_2b8;
          lVar17 = FUN_1447e736e(&local_198);
          ppuVar15 = &local_218;
          if (lVar17 != 0) {
            lVar17 = FUN_1447e736e(&local_198);
            ppuVar15 = (undefined **)(lVar17 + 0x30);
          }
          uVar31 = FUN_1448c9f94(ppuVar15,*(undefined4 *)((longlong)puVar9 + 0x74),0);
          puVar7 = local_2b0;
          iVar12 = *(int *)((longlong)plVar18 + 0x14);
          if ((iVar12 == 0) || (uVar4 = *(uint *)(plVar18 + 2), (int)uVar4 < 0)) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            if ((int)uVar4 < DAT_14c9647dc) {
              puVar16 = (undefined8 *)
                        ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
              if (((puVar16 == (undefined8 *)0x0) || (*(int *)(puVar16 + 2) != iVar12)) ||
                 ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)) {
                uVar6 = 0;
              }
              else {
                uVar6 = *puVar16;
              }
            }
          }
          local_230 = *puVar11;
          local_228 = 2;
          local_224 = 0xffffffff;
          local_288[0] = 0;
          local_240 = 0;
          uStack_238 = 0;
          local_250 = 0;
          uStack_248 = 0;
          local_260 = 0;
          uStack_258 = 0;
          local_270 = 0;
          uStack_268 = 0;
          local_280 = 0;
          uStack_278 = 0;
          local_2c8 = local_288;
          FUN_140042bb4(uVar6,&local_230,uVar31,0);
          FUN_14051f4c4(&local_220);
          uVar24 = uVar24 & ~(uint)uVar25;
          puVar8 = *(uint **)(local_298 + 0xc0);
          if (*(uint **)(local_298 + 0xc0) == (uint *)0x0) {
            puVar8 = puVar7;
          }
          uVar4 = *(uint *)(local_298 + 200);
          iVar12 = (int)uVar20;
          lVar17 = (longlong)iVar12;
          uVar5 = puVar8[lVar17] & uVar24;
          if (uVar5 == 0) {
            iVar19 = uVar4 + 0x1e;
            if (-1 < (int)(uVar4 - 1)) {
              iVar19 = uVar4 - 1;
            }
            iVar19 = iVar19 >> 5;
            iVar27 = iVar27 + 0x20;
            iVar13 = iVar19;
            if (iVar19 < iVar12) {
              iVar13 = iVar12;
            }
            if (iVar12 < iVar19) {
              lVar23 = 0;
              do {
                uVar5 = puVar8[lVar17 + lVar23 + 1];
                if (uVar5 != 0) {
                  uVar20 = (ulonglong)(iVar12 + (int)lVar23 + 1);
                  uVar24 = 0xffffffff;
                  goto LAB_143eb28db;
                }
                iVar27 = iVar27 + 0x20;
                lVar23 = lVar23 + 1;
              } while (iVar13 - lVar17 != lVar23);
              uVar24 = 0xffffffff;
              lVar17 = (longlong)iVar13;
            }
            uVar20 = lVar17 + 1U & 0xffffffff;
            puVar9 = local_2b8;
            uVar5 = uVar4;
          }
          else {
LAB_143eb28db:
            uVar25 = (ulonglong)(-uVar5 & uVar5);
            uVar1 = uVar25 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            uVar5 = (iVar27 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if ((int)uVar4 <= (int)uVar5) {
              uVar5 = uVar4;
            }
          }
        } while (uVar5 != (uint)local_2a8);
      }
LAB_143eb2539:
      local_1e0 = 0;
      uStack_1dc = 0;
      local_1d8 = 0x800000000;
      puVar7 = (uint *)(puVar9 + 6);
      iVar27 = *(int *)(puVar9 + 9);
      if (iVar27 == 0) {
        uVar20 = 1;
        uVar25 = 0;
        iVar19 = 0;
        iVar12 = 0;
      }
      else {
        puVar8 = (uint *)puVar9[8];
        if ((uint *)puVar9[8] == (uint *)0x0) {
          puVar8 = puVar7;
        }
        uVar4 = *puVar8;
        if (uVar4 == 0) {
          iVar12 = iVar27 + 0x1e;
          if (-1 < iVar27 + -1) {
            iVar12 = iVar27 + -1;
          }
          uVar25 = 0;
          uVar20 = (ulonglong)(uint)(iVar12 >> 5);
          if (iVar12 >> 5 < 1) {
            uVar20 = uVar25;
          }
          iVar19 = 0;
          do {
            if (uVar20 == uVar25) goto LAB_143eb2b6e;
            iVar19 = iVar19 + 0x20;
            uVar4 = puVar8[uVar25 + 1];
            uVar25 = uVar25 + 1;
          } while (uVar4 == 0);
        }
        else {
          uVar25 = 0;
          iVar19 = 0;
        }
        uVar20 = (ulonglong)(-uVar4 & uVar4);
        uVar1 = uVar20 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar12 = (iVar19 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar27 <= iVar12) {
          iVar12 = iVar27;
        }
      }
      if (iVar12 != iVar27) {
        local_2a8 = puVar9 + 4;
        uVar4 = 0xffffffff;
        iVar13 = iVar27;
        local_2b0 = puVar7;
        do {
          uVar1 = local_128;
          lVar17 = puVar9[4];
          fVar30 = *(float *)(lVar17 + 8 + (longlong)iVar12 * 0x14);
          if (fVar30 < *(float *)((longlong)puVar9 + 0x74) ||
              fVar30 == *(float *)((longlong)puVar9 + 0x74)) {
            lVar23 = (longlong)(int)local_128;
            uVar5 = (int)local_128 + 1;
            local_128 = CONCAT44(local_128._4_4_,uVar5);
            if (local_128._4_4_ < uVar5) {
              FUN_146276acc(local_170,uVar1 & 0xffffffff);
              puVar7 = local_2b0;
            }
            uVar1 = local_1d8;
            puVar9 = local_130;
            if (local_130 == (undefined8 *)0x0) {
              puVar9 = local_170;
            }
            puVar11 = (undefined8 *)(lVar17 + (longlong)iVar12 * 0x14);
            puVar9[lVar23] = *puVar11;
            lVar17 = (longlong)(int)local_1d8;
            uVar5 = (int)local_1d8 + 1;
            local_1d8 = CONCAT44(local_1d8._4_4_,uVar5);
            if (local_1d8._4_4_ < uVar5) {
              FUN_146276acc(&local_220,uVar1 & 0xffffffff);
              puVar7 = local_2b0;
            }
            pppuVar10 = (undefined ***)CONCAT44(uStack_1dc,local_1e0);
            if ((undefined ***)CONCAT44(uStack_1dc,local_1e0) == (undefined ***)0x0) {
              pppuVar10 = &local_220;
            }
            pppuVar10[lVar17] = (undefined **)*puVar11;
            iVar13 = *(int *)(local_2b8 + 9);
            puVar9 = local_2b8;
          }
          puVar11 = local_2a8;
          uVar4 = uVar4 & ~(uint)uVar20;
          puVar8 = (uint *)puVar9[8];
          if ((uint *)puVar9[8] == (uint *)0x0) {
            puVar8 = puVar7;
          }
          iVar12 = (int)uVar25;
          lVar17 = (longlong)iVar12;
          uVar5 = puVar8[lVar17] & uVar4;
          if (uVar5 == 0) {
            iVar14 = iVar13 + 0x1e;
            if (-1 < iVar13 + -1) {
              iVar14 = iVar13 + -1;
            }
            iVar14 = iVar14 >> 5;
            iVar19 = iVar19 + 0x20;
            iVar21 = iVar14;
            if (iVar14 < iVar12) {
              iVar21 = iVar12;
            }
            if (iVar12 < iVar14) {
              lVar23 = 0;
              do {
                uVar5 = puVar8[lVar17 + lVar23 + 1];
                if (uVar5 != 0) {
                  uVar25 = (ulonglong)(iVar12 + (int)lVar23 + 1);
                  uVar4 = 0xffffffff;
                  goto LAB_143eb2ab4;
                }
                iVar19 = iVar19 + 0x20;
                lVar23 = lVar23 + 1;
              } while (iVar21 - lVar17 != lVar23);
              uVar4 = 0xffffffff;
              iVar12 = iVar21;
            }
            uVar25 = (ulonglong)(iVar12 + 1);
            puVar7 = local_2b0;
            puVar9 = local_2b8;
            iVar12 = iVar13;
          }
          else {
LAB_143eb2ab4:
            uVar20 = (ulonglong)(-uVar5 & uVar5);
            uVar1 = uVar20 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar12 = (iVar19 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (iVar13 <= iVar12) {
              iVar12 = iVar13;
            }
          }
        } while (iVar12 != iVar27);
        lVar17 = (longlong)(int)local_1d8;
        pppuVar10 = (undefined ***)CONCAT44(uStack_1dc,local_1e0);
        if ((undefined ***)CONCAT44(uStack_1dc,local_1e0) == (undefined ***)0x0) {
          pppuVar10 = &local_220;
        }
        if (lVar17 != 0) {
          lVar23 = 0;
          do {
            FUN_14064ce80(puVar11,*(undefined8 *)((longlong)pppuVar10 + lVar23));
            lVar23 = lVar23 + 8;
          } while (lVar17 * 8 != lVar23);
        }
      }
LAB_143eb2b6e:
      uVar20 = local_d8;
      param_1 = local_2a0;
      if (*(float *)(puVar9 + 0xe) <= *(float *)((longlong)puVar9 + 0x74) &&
          *(float *)((longlong)puVar9 + 0x74) != *(float *)(puVar9 + 0xe)) {
        lVar17 = (longlong)(int)local_d8;
        uVar4 = (int)local_d8 + 1;
        local_d8 = CONCAT44(local_d8._4_4_,uVar4);
        if (local_d8._4_4_ < uVar4) {
          FUN_146276acc(local_120,uVar20 & 0xffffffff);
        }
        puVar11 = local_e0;
        if (local_e0 == (undefined8 *)0x0) {
          puVar11 = local_120;
        }
        puVar11[lVar17] = *puVar9;
      }
      if (CONCAT44(uStack_1dc,local_1e0) != 0) {
        FUN_1400020a8();
      }
      puVar9 = puVar9 + 0xf;
    } while (puVar9 != local_290);
  }
  if ((((*(int *)((longlong)param_1 + 0x1c) != 0) &&
       (uVar4 = *(uint *)(param_1 + 3), -1 < (int)uVar4)) &&
      (((int)uVar4 < DAT_14c9647dc &&
       ((plVar18 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
        plVar18 != (longlong *)0x0 && ((int)plVar18[2] == *(int *)((longlong)param_1 + 0x1c)))))))
     && (((*(uint *)(plVar18 + 1) & 0x10200000) == 0 && (lVar17 = *plVar18, lVar17 != 0)))) {
    puVar9 = local_90;
    if (local_90 == (undefined8 *)0x0) {
      puVar9 = local_d0;
    }
    if ((longlong)(int)local_88 != 0) {
      lVar23 = (longlong)(int)local_88 << 3;
      do {
        puVar11 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *puVar11 = &PTR_FUN_14b4776c0;
        puVar11[1] = *puVar9;
        FUN_14039144e(lVar17,puVar11);
        FUN_141165eb6(param_1 + 5,puVar9);
        puVar9 = puVar9 + 1;
        lVar23 = lVar23 + -8;
      } while (lVar23 != 0);
    }
    puVar9 = local_130;
    if (local_130 == (undefined8 *)0x0) {
      puVar9 = local_170;
    }
    if ((longlong)(int)local_128 != 0) {
      lVar23 = (longlong)(int)local_128 << 3;
      do {
        puVar11 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *puVar11 = &PTR_FUN_14b4776d0;
        puVar11[1] = *puVar9;
        FUN_14039144e(lVar17,puVar11);
        FUN_141165eb6(param_1 + 0xe,puVar9);
        puVar9 = puVar9 + 1;
        lVar23 = lVar23 + -8;
      } while (lVar23 != 0);
    }
    puVar9 = local_e0;
    if (local_e0 == (undefined8 *)0x0) {
      puVar9 = local_120;
    }
    if ((longlong)(int)local_d8 != 0) {
      lVar23 = (longlong)(int)local_d8 << 3;
      do {
        puVar11 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *puVar11 = &PTR_FUN_14b4776f8;
        puVar11[1] = *puVar9;
        FUN_14039144e(lVar17,puVar11);
        FUN_141165eb6(param_1 + 0xb,puVar9);
        puVar9 = puVar9 + 1;
        lVar23 = lVar23 + -8;
      } while (lVar23 != 0);
    }
    iVar27 = (int)param_1[1];
    lVar17 = (longlong)iVar27;
    if (lVar17 != 0) {
      puVar9 = local_e0;
      if (local_e0 == (undefined8 *)0x0) {
        puVar9 = local_120;
      }
      param_1 = (longlong *)*param_1;
      iVar12 = 0;
      if ((longlong)(int)local_d8 == 0) {
        bVar28 = false;
      }
      else {
        lVar23 = 0;
        do {
          bVar28 = *(longlong *)((longlong)puVar9 + lVar23) == *param_1;
          if (bVar28) break;
          bVar29 = (longlong)(int)local_d8 * 8 + -8 != lVar23;
          lVar23 = lVar23 + 8;
        } while (bVar29);
      }
      iVar19 = 0;
LAB_143eb2e29:
      do {
        puVar9 = local_e0;
        if (local_e0 == (undefined8 *)0x0) {
          puVar9 = local_120;
        }
        lVar23 = (longlong)iVar19;
        iVar13 = iVar19 + 1;
        if (iVar19 + 1 < iVar27) {
          iVar13 = iVar27;
        }
        lVar26 = lVar23 + 1;
        if (lVar26 < lVar17) {
          bVar29 = true;
          do {
            iVar14 = (int)lVar26;
            if ((int)local_d8 != 0) {
              lVar22 = 0;
              do {
                if (*(longlong *)((longlong)puVar9 + lVar22) == param_1[lVar26 * 0xf]) {
                  if (bVar28) goto LAB_143eb2e88;
                  iVar21 = iVar14 - iVar19;
                  goto LAB_143eb2ee8;
                }
                lVar22 = lVar22 + 8;
              } while ((longlong)(int)local_d8 * 8 - lVar22 != 0);
            }
            if (bVar28) {
              FUN_140e91ad4(param_1 + lVar23 * 0xf,iVar14 - iVar19);
              bVar28 = false;
              iVar19 = iVar14;
              if (bVar29) goto LAB_143eb2e29;
              goto LAB_143eb2f19;
            }
LAB_143eb2e88:
            lVar26 = lVar26 + 1;
            bVar29 = lVar26 < lVar17;
          } while (lVar26 != lVar17);
        }
        else {
          bVar29 = false;
        }
        iVar21 = iVar13 - iVar19;
        iVar14 = iVar13;
        if (bVar28) {
          FUN_140e91ad4(param_1 + lVar23 * 0xf,iVar21);
          bVar28 = false;
          iVar19 = iVar13;
        }
        else {
LAB_143eb2ee8:
          if (iVar12 != iVar19) {
            memmove(param_1 + (longlong)iVar12 * 0xf,param_1 + lVar23 * 0xf,(longlong)iVar21 * 0x78)
            ;
          }
          iVar12 = iVar12 + iVar21;
          bVar28 = true;
          iVar19 = iVar14;
        }
      } while (bVar29);
LAB_143eb2f19:
      *(int *)(local_2a0 + 1) = iVar12;
      param_1 = local_2a0;
      if (iVar12 != 0) goto LAB_143eb2f3b;
    }
    *(undefined1 *)(param_1 + 4) = 0;
    FUN_1447f69b6(param_1 + 0x11);
  }
LAB_143eb2f3b:
  if (local_130 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_90 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143eb2f71:
  if ((local_80 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eb2fb8 FUN_143eb2fb8 body=69 status=ok
// SIG undefined FUN_143eb2fb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eb2fb8(void)

{
  _DAT_14cb92740 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eb2ffa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb92748,1);
  return;
}



// FUNCTION 143eb2ffe FUN_143eb2ffe body=211 status=ok
// SIG undefined FUN_143eb2ffe(void)

void FUN_143eb2ffe(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (DAT_14cb90da0 != (longlong *)0x0 && DAT_14cb90da8 != 0) {
    (**(code **)(*DAT_14cb90da0 + 0x60))();
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x38);
    plVar1 = plVar7 + *(int *)(param_1 + 0x40);
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *plVar7;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
LAB_143eb306d:
        AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x50));
        iVar2 = *(int *)(lVar3 + 0x48);
        if ((longlong)iVar2 != 0) {
          lVar4 = *(longlong *)(lVar3 + 0x40);
          lVar6 = 0;
          do {
            *(undefined1 *)(*(longlong *)(lVar4 + lVar6) + 0x3e2) = 1;
            lVar6 = lVar6 + 8;
          } while ((longlong)iVar2 * 8 != lVar6);
        }
        ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x50));
        bVar5 = DAT_14c950c29;
      }
      else if (lVar3 != 0) goto LAB_143eb306d;
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
  }
  return;
}



// FUNCTION 143eb30d2 FUN_143eb30d2 body=675 status=ok
// SIG undefined FUN_143eb30d2(void)

bool FUN_143eb30d2(longlong *param_1,longlong param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar2 = DAT_14c763ad0;
  if (param_2 != 0) {
    if ((*param_3 != 0) && (*(longlong *)(param_3 + 2) != 0)) {
      (**(code **)(*param_1 + 0x2b8))(param_1,param_3);
      *param_3 = 0;
      param_3[2] = 0;
      param_3[3] = 0;
    }
    if ((longlong)(int)param_1[8] != 0) {
      lVar4 = 0;
      do {
        if ((*(longlong *)(param_1[7] + lVar4) != 0) &&
           (iVar2 = DAT_14c763ad0 + 1,
           *(longlong *)(*(longlong *)(param_1[7] + lVar4) + 0xc0) == param_2)) goto LAB_143eb31b8;
        lVar4 = lVar4 + 8;
      } while ((longlong)(int)param_1[8] * 8 != lVar4);
    }
    iVar2 = DAT_14c763ad0 + 1;
    *param_3 = DAT_14c763ad0;
    DAT_14c763ad0 = iVar2;
    param_3[2] = 0;
    param_3[3] = 0;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_3 + 2) = param_2;
    if (DAT_14cae9568 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1417de738;
      local_40 = &LAB_145893408;
      local_48 = &LAB_1458cbbd2;
      local_58 = &LAB_147ba21f1;
      local_60 = &LAB_1463e9233;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x1000000c;
      local_80 = 8;
      local_88 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    }
    if (((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) != DAT_14cae9568 + 0x30)) ||
       (iVar2 = DAT_14c763ad0, *(char *)(param_2 + 0x2b0) == '\0')) {
      lVar4 = FUN_14656dfd6(param_1 + 0x11);
      iVar2 = DAT_14c763ad0;
      if (lVar4 != 0) {
        plVar3 = (longlong *)FUN_14656e06d(param_1,lVar4);
        iVar2 = DAT_14c763ad0;
        if (plVar3 != (longlong *)0x0) {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(param_2);
          }
          bVar1 = DAT_14c950c29;
          plVar3[0x18] = param_2;
          *(int *)(plVar3 + 0x16) = *param_3;
          lVar4 = *(longlong *)(param_3 + 2);
          if ((bVar1 & 1) != 0) {
            if (lVar4 == 0) {
              lVar4 = 0;
            }
            else {
              FUN_1456cec3c();
              lVar4 = *(longlong *)(param_3 + 2);
            }
          }
          plVar3[0x17] = lVar4;
          (**(code **)(*plVar3 + 0x2a0))(plVar3,param_1[5]);
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(plVar3);
          }
          iVar2 = (int)param_1[8];
          *(uint *)(param_1 + 8) = iVar2 + 1U;
          if (*(uint *)((longlong)param_1 + 0x44) < iVar2 + 1U) {
            FUN_14656f252(param_1 + 7,iVar2);
          }
          *(longlong **)(param_1[7] + (longlong)iVar2 * 8) = plVar3;
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(plVar3);
          }
          *(undefined4 *)(param_1 + 0xc) = 0;
          iVar2 = DAT_14c763ad0;
        }
      }
    }
  }
LAB_143eb31b8:
  DAT_14c763ad0 = iVar2;
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eb3376 FUN_143eb3376 body=69 status=ok
// SIG undefined FUN_143eb3376(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eb3376(void)

{
  _DAT_14cb92758 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eb33b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb92760,1);
  return;
}



// FUNCTION 143eb33cc FUN_143eb33cc body=69 status=ok
// SIG undefined FUN_143eb33cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eb33cc(void)

{
  _DAT_14cb927c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eb340e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb927c8,1);
  return;
}



// FUNCTION 143eb3411 FUN_143eb3411 body=69 status=ok
// SIG undefined FUN_143eb3411(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eb3411(void)

{
  _DAT_14cb927d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eb3453. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb927d8,1);
  return;
}



// FUNCTION 143eb3456 FUN_143eb3456 body=69 status=ok
// SIG undefined FUN_143eb3456(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eb3456(void)

{
  _DAT_14cb927e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eb3498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb927f0,1);
  return;
}



// FUNCTION 143eb349b FUN_143eb349b body=69 status=ok
// SIG undefined FUN_143eb349b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eb349b(void)

{
  _DAT_14cb92800 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eb34dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb92808,1);
  return;
}



// FUNCTION 143eb34e0 FUN_143eb34e0 body=69 status=ok
// SIG undefined FUN_143eb34e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eb34e0(void)

{
  _DAT_14cb92818 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eb3522. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb92820,1);
  return;
}



// FUNCTION 143eb3526 FUN_143eb3526 body=4647 status=ok
// SIG undefined FUN_143eb3526(void)

void FUN_143eb3526(longlong *param_1)

{
  int *piVar1;
  byte bVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  DWORD DVar8;
  DWORD DVar9;
  IViewListener *this;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  int iVar16;
  uint uVar17;
  code **ppcVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 auStack_2c8 [32];
  longlong *local_2a8;
  undefined8 *local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  wchar_t *local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  code **local_270;
  undefined1 *local_268;
  undefined1 *local_260;
  undefined8 local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  longlong *local_230;
  undefined8 local_228;
  char *local_220;
  undefined8 local_218;
  undefined8 *local_208;
  int local_200;
  undefined4 uStack_1fc;
  code *local_1f8 [6];
  undefined1 local_1c8;
  undefined1 local_1c7;
  undefined8 local_1c4;
  undefined8 uStack_1bc;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined2 local_1a4;
  undefined1 local_1a2;
  undefined4 local_1a1;
  undefined8 local_198;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if (param_1[8] != 0) goto LAB_143eb3552;
  if ((((((*(int *)((longlong)param_1 + 0x5a4) == 0) ||
         (uVar19 = *(uint *)(param_1 + 0xb4), (int)uVar19 < 0)) || (DAT_14c9647dc <= (int)uVar19))
       || ((plVar14 = (longlong *)
                      ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
           plVar14 == (longlong *)0x0 || ((int)plVar14[2] != *(int *)((longlong)param_1 + 0x5a4)))))
      || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) || (lVar20 = *plVar14, lVar20 == 0)) {
LAB_143eb3679:
    *(undefined4 *)(param_1 + 0x6e) = 0;
    iVar5 = 0;
  }
  else {
    if (DAT_14cae9568 == 0) {
      local_270 = local_1f8;
      local_1f8[0] = FUN_1417de738;
      local_260 = &LAB_145893408;
      local_268 = &LAB_1458cbbd2;
      local_278 = &LAB_147ba21f1;
      local_280 = &LAB_1463e9233;
      local_288 = L"Engine";
      local_290 = 0;
      local_298 = 0x1000000c;
      local_2a0 = (undefined8 *)CONCAT44(local_2a0._4_4_,8);
      local_2a8 = (longlong *)CONCAT44(local_2a8._4_4_,0x2b8);
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    }
    if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) != DAT_14cae9568 + 0x30)) goto LAB_143eb3679;
    uVar19 = *(uint *)(lVar20 + 0xc);
    *(uint *)(param_1 + 0x6e) = uVar19;
    if ((int)uVar19 < DAT_14c9647dc) {
      lVar20 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
    }
    else {
      lVar20 = 0;
    }
    iVar5 = *(int *)(lVar20 + 0x10);
    if (*(int *)(lVar20 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar16 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar16);
      }
      LOCK();
      iVar5 = *(int *)(lVar20 + 0x10);
      bVar22 = iVar5 == 0;
      if (bVar22) {
        *(int *)(lVar20 + 0x10) = iVar16;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar5 = iVar16;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x374) = iVar5;
  FUN_14656e1e2(param_1);
  lVar20 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar20 != 0) {
    FUN_145c2452f(lVar20);
  }
  this = (IViewListener *)FUN_14001cc68(0x18,0x10);
  cohtml::IViewListener::IViewListener(this);
  cohtml::ITextInputHandler::ITextInputHandler((ITextInputHandler *)(this + 8));
  *(undefined ***)this = &PTR_FUN_14b477750;
  *(undefined ***)(this + 8) = &PTR_LAB_14b477820;
  *(undefined4 *)(this + 0x14) = 0;
  if (param_1 == (longlong *)0x0) {
    *(undefined4 *)(this + 0x10) = 0;
    iVar5 = 0;
  }
  else {
    uVar19 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(this + 0x10) = uVar19;
    if ((int)uVar19 < DAT_14c9647dc) {
      lVar20 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
    }
    else {
      lVar20 = 0;
    }
    iVar5 = *(int *)(lVar20 + 0x10);
    if (*(int *)(lVar20 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar16 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar16);
      }
      LOCK();
      iVar5 = *(int *)(lVar20 + 0x10);
      bVar22 = iVar5 == 0;
      if (bVar22) {
        *(int *)(lVar20 + 0x10) = iVar16;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar5 = iVar16;
      }
    }
  }
  *(int *)(this + 0x14) = iVar5;
  plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14b478520;
  plVar10[2] = (longlong)this;
  param_1[10] = (longlong)this;
  plVar14 = (longlong *)param_1[0xb];
  if (plVar10 == plVar14) {
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar10 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
joined_r0x000143eb37ab:
        if (iVar5 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  else {
    param_1[0xb] = (longlong)plVar10;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar14 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
        plVar10 = plVar14;
        goto joined_r0x000143eb37ab;
      }
    }
  }
  FUN_146568968(local_1f8);
  if (param_1 == (longlong *)0x0) {
    uVar19 = 0;
    uVar11 = 0;
  }
  else {
    uVar19 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)uVar19 < DAT_14c9647dc) {
      lVar20 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
    }
    else {
      lVar20 = 0;
    }
    uVar11 = (ulonglong)*(uint *)(lVar20 + 0x10);
    if (*(uint *)(lVar20 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar17 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar17);
      }
      LOCK();
      uVar7 = *(uint *)(lVar20 + 0x10);
      bVar22 = uVar7 == 0;
      if (bVar22) {
        *(uint *)(lVar20 + 0x10) = uVar17;
        uVar7 = 0;
      }
      UNLOCK();
      if (bVar22) {
        uVar7 = uVar17;
      }
      uVar11 = (ulonglong)uVar7;
    }
  }
  local_50 = (ulonglong)uVar19 | uVar11 << 0x20;
  local_228 = &local_230;
  local_230 = param_1;
  FUN_145a31a8a(&local_220,&local_228);
  FUN_145b06100(&local_220,&local_208,local_1f8);
  plVar14 = (longlong *)CONCAT44(uStack_1fc,local_200);
  if (plVar14 == (longlong *)0x0) {
    param_1[8] = (longlong)local_208;
    plVar10 = (longlong *)param_1[9];
    if (plVar10 != (longlong *)0x0) {
      param_1[9] = 0;
LAB_143eb38b2:
      LOCK();
      plVar14 = plVar10 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
joined_r0x000143eb38a5:
        if (iVar5 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    param_1[8] = (longlong)local_208;
    plVar10 = (longlong *)param_1[9];
    if (plVar14 == plVar10) {
      LOCK();
      plVar10 = plVar14 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
        plVar10 = plVar14;
        goto joined_r0x000143eb38a5;
      }
    }
    else {
      param_1[9] = (longlong)plVar14;
      if (plVar10 != (longlong *)0x0) goto LAB_143eb38b2;
    }
  }
  plVar14 = (longlong *)CONCAT44(uStack_1fc,local_200);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar14 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  plVar14 = local_218;
  if (local_218 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_218 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_218)(local_218);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  FUN_140a4ff8c(local_1f8);
  lVar20 = DAT_14cb92828;
  uVar11 = 0;
  local_1f8[1] = (code *)0x0;
  local_1f8[2] = (code *)0x2d000000500;
  local_1f8[3] = (code *)0x0;
  local_1f8[4] = (code *)0x0;
  local_1f8[5] = (code *)0x0;
  local_1c7 = 0;
  local_1c4 = 1;
  uStack_1bc = 0;
  local_1b4 = 200;
  local_1b0 = 0;
  local_1a8 = 0x41000000;
  local_198 = 0;
  local_1a1 = 0;
  local_1f8[0] = (code *)param_1[10];
  bVar22 = true;
  local_1c8 = 1;
  local_1a4 = 1;
  local_1a2 = 1;
  iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (iVar5 != 0x40000002) {
    if ((DAT_14c86a9f8 == '\x01') && (iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        bVar22 = DVar8 == DVar9;
      }
      else {
        bVar22 = false;
      }
    }
    uVar11 = (ulonglong)(bVar22 ^ 1);
  }
  local_1a1 = CONCAT13(*(undefined1 *)(lVar20 + uVar11),(undefined3)local_1a1);
  uVar11 = (ulonglong)local_228 >> 0x20;
  local_228 = (longlong **)CONCAT44((uint)uVar11 & 0xffffff00,0x10001);
  lVar20 = param_1[0x6f];
  if (lVar20 != 0) {
    lVar21 = param_1[8];
    uVar6 = *(undefined4 *)(lVar20 + 0x94);
    uVar3 = *(undefined4 *)(lVar20 + 0x98);
    uVar4 = *(undefined4 *)(lVar20 + 0x9c);
    *(undefined4 *)(lVar21 + 0x1e0) = *(undefined4 *)(lVar20 + 0x90);
    *(undefined4 *)(lVar21 + 0x1e4) = uVar6;
    *(undefined4 *)(lVar21 + 0x1e8) = uVar3;
    *(undefined4 *)(lVar21 + 0x1ec) = uVar4;
    puVar15 = (undefined8 *)(lVar21 + 0x1f0);
    if (puVar15 != (undefined8 *)(lVar20 + 0xa0)) {
      iVar5 = *(int *)(lVar20 + 0xa8);
      _Src = *(void **)(lVar20 + 0xa0);
      *(int *)(lVar21 + 0x1f8) = iVar5;
      if (iVar5 == 0 && *(int *)(lVar21 + 0x1fc) == 0) {
        *(undefined4 *)(lVar21 + 0x1fc) = 0;
      }
      else {
        FUN_1446dd670(puVar15,iVar5);
        if (iVar5 != 0) {
          memcpy((void *)*puVar15,_Src,(longlong)iVar5 * 2);
        }
      }
    }
  }
  lVar20 = param_1[8];
  local_250 = param_1[10];
  local_240 = local_250 + 8;
  if (local_250 == 0) {
    local_240 = 0;
  }
  local_238 = param_1[0xb];
  if (local_238 == 0) {
    local_248 = 0;
  }
  else {
    LOCK();
    *(int *)(local_238 + 8) = *(int *)(local_238 + 8) + 1;
    UNLOCK();
    local_250 = param_1[10];
    local_248 = param_1[0xb];
    if (local_248 != 0) {
      LOCK();
      *(int *)(local_248 + 8) = *(int *)(local_248 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_14656e28c(param_1,&local_220);
  local_2a8 = &local_240;
  local_2a0 = &local_228;
  FUN_145c22798(lVar20,local_1f8,&local_220,&local_250);
  if (local_220 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppcVar18 = local_1f8;
  plVar14 = param_1 + 0xc;
  for (lVar20 = 0xd; lVar20 != 0; lVar20 = lVar20 + -1) {
    *plVar14 = (longlong)*ppcVar18;
    ppcVar18 = ppcVar18 + 1;
    plVar14 = plVar14 + 1;
  }
  bVar2 = *(byte *)((longlong)param_1 + 0x3b9);
  if (bVar2 == 0) {
    if ((int)param_1[0x72] == 0) {
LAB_143eb3bab:
      lVar20 = 0;
    }
    else {
      uVar19 = *(uint *)((longlong)param_1 + 0x38c);
      lVar20 = 0;
      if ((-1 < (int)uVar19) && ((int)uVar19 < DAT_14c9647dc)) {
        plVar14 = (longlong *)
                  ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
        if (((plVar14 == (longlong *)0x0) ||
            ((((int)plVar14[2] != (int)param_1[0x72] || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)
              ) || (*plVar14 == 0)))) ||
           ((lVar20 = FUN_1458485da(), lVar20 == 0 || (*(longlong *)(lVar20 + 0x30) == 0))))
        goto LAB_143eb3bab;
        lVar20 = *(longlong *)(*(longlong *)(lVar20 + 0x30) + 0x48);
      }
    }
    param_1[0xb3] = lVar20;
    bVar2 = *(byte *)((longlong)param_1 + 0x3b9);
  }
  if (((((bVar2 & 1) == 0) && (*(int *)((longlong)param_1 + 0x374) != 0)) &&
      ((uVar19 = *(uint *)(param_1 + 0x6e), -1 < (int)uVar19 &&
       ((((int)uVar19 < DAT_14c9647dc &&
         (puVar15 = (undefined8 *)
                    ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
         puVar15 != (undefined8 *)0x0)) &&
        (*(int *)(puVar15 + 2) == *(int *)((longlong)param_1 + 0x374))))))) &&
     ((*(uint *)(puVar15 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(puVar15 + 1) & 0x10200000) == 0) {
      uVar12 = *puVar15;
    }
    else {
      uVar12 = 0;
    }
    lVar20 = FUN_1400b6e86(uVar12);
    if (lVar20 != 0) {
      FUN_14656e120(&local_258);
      FUN_14656e522(lVar20 + 0x180,param_1,local_258);
    }
  }
  if ((int)param_1[0x71] == 0) {
LAB_143eb4079:
    uVar12 = 0;
  }
  else {
    uVar19 = *(uint *)((longlong)param_1 + 900);
    uVar12 = 0;
    if ((-1 < (int)uVar19) && ((int)uVar19 < DAT_14c9647dc)) {
      puVar15 = (undefined8 *)
                ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
      if ((puVar15 == (undefined8 *)0x0) ||
         ((*(int *)(puVar15 + 2) != (int)param_1[0x71] ||
          ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)))) goto LAB_143eb4079;
      uVar12 = *puVar15;
    }
  }
  FUN_145dfd59a(uVar12,param_1,*(undefined4 *)((longlong)param_1 + 0x3bc));
  lVar20 = FUN_140d5712e();
  FUN_14656e5a0(lVar20 + 8,&local_220,param_1,FUN_1459c30be);
  FUN_1459c30be(param_1);
  lVar20 = 0;
  FUN_1405afce0(param_1,0);
  if (param_1[8] != 0) {
    *(undefined1 *)(param_1[8] + 0x2c0) = 3;
    lVar20 = param_1[8];
  }
  *(undefined1 *)(lVar20 + 0x26c) = 0;
  *(undefined1 *)(param_1[8] + 0x2c0) = 3;
  FUN_145d4bb0e(param_1);
  *(undefined2 *)(param_1 + 0x19) = 1;
  *(undefined1 *)((longlong)param_1 + 0xca) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcd) = 0;
  if ((param_1[8] != 0) && (*(longlong *)(param_1[8] + 0x238) != 0)) {
    local_220 = "CohtmlPlugin";
    local_218 = (longlong *)CONCAT35(local_218._5_3_,0xc);
    uVar6 = FUN_14001a6c0(&local_220,1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    FUN_1402c9134(&DAT_14c874628,uVar6,&local_220,1);
    FUN_145c3f07e(*(undefined8 *)(param_1[8] + 0x238));
  }
  FUN_148a0072c(param_1);
  lVar20 = FUN_140391a3c(param_1);
  if (lVar20 != 0) {
    uVar19 = *(uint *)(lVar20 + 0xc);
    *(uint *)(param_1 + 0x9f) = uVar19;
    if ((int)uVar19 < DAT_14c9647dc) {
      lVar21 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
    }
    else {
      lVar21 = 0;
    }
    iVar5 = *(int *)(lVar21 + 0x10);
    if (*(int *)(lVar21 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar16 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar16);
      }
      LOCK();
      iVar5 = *(int *)(lVar21 + 0x10);
      bVar22 = iVar5 == 0;
      if (bVar22) {
        *(int *)(lVar21 + 0x10) = iVar16;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar5 = iVar16;
      }
    }
    *(int *)((longlong)param_1 + 0x4fc) = iVar5;
    FUN_14656e5a0(param_1 + 0xad,&local_220,param_1,FUN_140647bd8);
    local_208 = (undefined8 *)0x0;
    local_200 = 0;
    FUN_1446efa72(&local_208,0,3,0x10);
    puVar15 = local_208;
    local_200 = 3;
    *local_208 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar21 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar21 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar21;
    local_208[2] = lVar13;
    *local_208 = &PTR_FUN_14b478830;
    local_208[3] = 0;
    iVar5 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar19 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_208 + 3) = uVar19;
      if ((int)uVar19 < DAT_14c9647dc) {
        lVar21 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
      }
      else {
        lVar21 = 0;
      }
      iVar5 = *(int *)(lVar21 + 0x10);
      if (*(int *)(lVar21 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar16 = DAT_14c964868 + 1;
        bVar22 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar22) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar16);
        }
        LOCK();
        iVar5 = *(int *)(lVar21 + 0x10);
        bVar22 = iVar5 == 0;
        if (bVar22) {
          *(int *)(lVar21 + 0x10) = iVar16;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar22) {
          iVar5 = iVar16;
        }
      }
    }
    *(int *)((longlong)puVar15 + 0x1c) = iVar5;
    puVar15[4] = &LAB_140e4d8a6;
    local_220 = "PlayAnimation";
    local_218 = (longlong *)CONCAT35(local_218._5_3_,0xd);
    uVar6 = FUN_14001a6c0(&local_220,1);
    FUN_140391af6(lVar20,&local_220,uVar6,&local_208);
    param_1[0xb0] = (longlong)local_220;
    if (local_200 == 0) {
LAB_143eb40a7:
      if (local_208 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_208 != (undefined8 *)0x0) {
      if (*(code **)*local_208 == FUN_145715146) {
        *local_208 = &PTR_FUN_14b478da0;
        plVar14 = (longlong *)local_208[4];
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))();
          }
        }
      }
      else {
        (**(code **)*local_208)(local_208,0);
      }
      FUN_1446efa72(&local_208,0,0,0x10);
      local_200 = 0;
      goto LAB_143eb40a7;
    }
    local_208 = (undefined8 *)0x0;
    local_200 = 0;
    FUN_1446efa72(&local_208,0,3,0x10);
    puVar15 = local_208;
    local_200 = 3;
    *local_208 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar21 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar21 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar21;
    local_208[2] = lVar13;
    *local_208 = &PTR_FUN_14b478830;
    local_208[3] = 0;
    iVar5 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar19 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_208 + 3) = uVar19;
      if ((int)uVar19 < DAT_14c9647dc) {
        lVar21 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
      }
      else {
        lVar21 = 0;
      }
      iVar5 = *(int *)(lVar21 + 0x10);
      if (*(int *)(lVar21 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar16 = DAT_14c964868 + 1;
        bVar22 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar22) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar16);
        }
        LOCK();
        iVar5 = *(int *)(lVar21 + 0x10);
        bVar22 = iVar5 == 0;
        if (bVar22) {
          *(int *)(lVar21 + 0x10) = iVar16;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar22) {
          iVar5 = iVar16;
        }
      }
    }
    *(int *)((longlong)puVar15 + 0x1c) = iVar5;
    puVar15[4] = &LAB_140e4d8b4;
    local_220 = "StopAnimation";
    local_218 = (longlong *)CONCAT35(local_218._5_3_,0xd);
    uVar6 = FUN_14001a6c0(&local_220,1);
    FUN_140391af6(lVar20,&local_220,uVar6,&local_208);
    param_1[0xb1] = (longlong)local_220;
    if (local_200 == 0) {
LAB_143eb422c:
      if (local_208 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_208 != (undefined8 *)0x0) {
      if (*(code **)*local_208 == FUN_145715146) {
        *local_208 = &PTR_FUN_14b478da0;
        plVar14 = (longlong *)local_208[4];
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))();
          }
        }
      }
      else {
        (**(code **)*local_208)(local_208,0);
      }
      FUN_1446efa72(&local_208,0,0,0x10);
      local_200 = 0;
      goto LAB_143eb422c;
    }
    local_208 = (undefined8 *)0x0;
    local_200 = 0;
    FUN_1446efa72(&local_208,0,3,0x10);
    puVar15 = local_208;
    local_200 = 3;
    *local_208 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar21 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar21 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar21;
    local_208[2] = lVar13;
    *local_208 = &PTR_FUN_14b478830;
    local_208[3] = 0;
    iVar5 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar19 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_208 + 3) = uVar19;
      if ((int)uVar19 < DAT_14c9647dc) {
        lVar21 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
      }
      else {
        lVar21 = 0;
      }
      iVar5 = *(int *)(lVar21 + 0x10);
      if (*(int *)(lVar21 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar16 = DAT_14c964868 + 1;
        bVar22 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar22) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar16);
        }
        LOCK();
        iVar5 = *(int *)(lVar21 + 0x10);
        bVar22 = iVar5 == 0;
        if (bVar22) {
          *(int *)(lVar21 + 0x10) = iVar16;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar22) {
          iVar5 = iVar16;
        }
      }
    }
    *(int *)((longlong)puVar15 + 0x1c) = iVar5;
    puVar15[4] = &LAB_148a00858;
    local_220 = "StopAllAnimations";
    local_218 = (longlong *)CONCAT35(local_218._5_3_,0x11);
    uVar6 = FUN_14001a6c0(&local_220,1);
    FUN_140391af6(lVar20,&local_220,uVar6,&local_208);
    param_1[0xb2] = (longlong)local_220;
    if (local_200 != 0) {
      if (local_208 == (undefined8 *)0x0) goto LAB_143eb3dd9;
      if (*(code **)*local_208 == FUN_145715146) {
        *local_208 = &PTR_FUN_14b478da0;
        plVar14 = (longlong *)local_208[4];
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))();
          }
        }
      }
      else {
        (**(code **)*local_208)(local_208,0);
      }
      FUN_1446efa72(&local_208,0,0,0x10);
      local_200 = 0;
    }
    if (local_208 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143eb3dd9:
  FUN_1400021e4(param_1 + 0x74,&local_208);
  puVar15 = local_208;
  if (local_200 == 0) {
    puVar15 = (undefined8 *)&DAT_149dfb77a;
  }
  FUN_140002266(&local_220,L"GbxUI Tick - View - %s",puVar15);
  if ((char **)(param_1 + 0x75) == &local_220) {
    if (local_220 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x75] != 0) {
      FUN_1400020a8();
    }
    param_1[0x75] = (longlong)local_220;
    local_220 = (char *)0x0;
    *(undefined4 *)(param_1 + 0x76) = (undefined4)local_218;
    *(undefined4 *)((longlong)param_1 + 0x3b4) = local_218._4_4_;
    local_218 = (longlong *)0x0;
  }
  if (local_208 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143eb3552:
  if ((local_48 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eb474e FUN_143eb474e body=30 status=ok
// SIG undefined FUN_143eb474e(void)

undefined8 FUN_143eb474e(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x28);
  }
  else {
    puVar1 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x238) + 8);
  }
  return *puVar1;
}



// FUNCTION 143eb476c FUN_143eb476c body=806 status=ok
// SIG undefined FUN_143eb476c(void)

void FUN_143eb476c(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140457ffc(param_1 + 0x568,param_1);
  if (*(char *)(param_1 + 0xca) == '\x01') {
    if (*(longlong *)(param_1 + 0x40) == 0) {
      plVar4 = (longlong *)(param_1 + 0x28);
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x238) + 8);
    }
    plVar4 = (longlong *)*plVar4;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x1c0))(plVar4,param_1);
    }
  }
  do {
    cVar2 = FUN_14576d504(param_1 + 0x30);
  } while (cVar2 != '\0');
  FUN_1405afce0(param_1,0);
  FUN_141224eb6(param_1,0);
  if ((*(longlong *)(param_1 + 0x40) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x238) == 0)) goto LAB_143eb491d;
  if (*(int *)(param_1 + 0x388) == 0) {
LAB_143eb4a43:
    uVar6 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 900);
    uVar6 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(int *)(puVar7 + 2) != *(int *)(param_1 + 0x388) ||
          ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_143eb4a43;
      uVar6 = *puVar7;
    }
  }
  FUN_145901780(uVar6,param_1);
  if ((*(longlong *)(param_1 + 0x40) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x238) != 0)) {
    local_48 = "CohtmlPlugin";
    local_40 = 0xc;
    local_3c = 0;
    uVar3 = FUN_14001a6c0(&local_48,1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c874a20) {
      FUN_144b3d300(&DAT_14c874a20);
      if (DAT_14c874a20 == -1) {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
    }
    FUN_1402c9134(&DAT_14c874628,uVar3,&local_48,1);
    local_50 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x238);
    local_48 = (char *)&local_50;
    FUN_145a9d54c(&DAT_14cb90bb8,&local_48);
  }
LAB_143eb491d:
  FUN_140d8f56e(param_1 + 1000,param_2);
  *(undefined8 *)(param_1 + 0x3ec) = 0;
  FUN_145adbee0(param_1 + 0x468);
  lVar5 = FUN_140391a3c(param_1);
  if (lVar5 != 0) {
    local_48 = "PlayAnimation";
    local_40 = 0xd;
    local_3c = 0;
    uVar3 = FUN_14001a6c0(&local_48,1);
    FUN_1401cd85c(lVar5,uVar3,param_1 + 0x580);
    local_48 = "StopAnimation";
    local_40 = 0xd;
    local_3c = 0;
    uVar3 = FUN_14001a6c0(&local_48,1);
    FUN_1401cd85c(lVar5,uVar3,param_1 + 0x588);
    local_48 = "StopAllAnimations";
    local_40 = 0x11;
    local_3c = 0;
    uVar3 = FUN_14001a6c0(&local_48,1);
    FUN_1401cd85c(lVar5,uVar3,param_1 + 0x590);
  }
  *(undefined8 *)(param_1 + 0x5a0) = 0;
  *(undefined1 *)(param_1 + 0xcc) = 1;
  *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x10) = 0;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eb4a94 FUN_143eb4a94 body=152 status=ok
// SIG undefined FUN_143eb4a94(void)

void FUN_143eb4a94(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30;
  undefined1 local_2f;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    if (param_2 == '\0') {
      puVar1 = &DAT_14c96b1e1;
    }
    else {
      puVar1 = &DAT_14c96b238;
      if (*(char *)(param_1 + 0x3b9) != '\0') {
        puVar1 = &DAT_14c96b23a;
      }
    }
    local_30 = *puVar1;
    local_2f = 1;
    local_28 = 0;
    uStack_20 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x1c0))();
    if ((param_2 == '\0') && (0 < DAT_14cb927b8)) {
      FUN_143eb0aa0(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143eb4b3e FUN_143eb4b3e body=69 status=ok
// SIG undefined FUN_143eb4b3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eb4b3e(void)

{
  _DAT_14cb92848 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eb4b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb92850,1);
  return;
}



// FUNCTION 143eb4b83 FUN_143eb4b83 body=69 status=ok
// SIG undefined FUN_143eb4b83(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eb4b83(void)

{
  _DAT_14cb92868 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eb4bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb92870,1);
  return;
}



// FUNCTION 143eb4bc8 FUN_143eb4bc8 body=69 status=ok
// SIG undefined FUN_143eb4bc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eb4bc8(void)

{
  _DAT_14cb92878 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eb4c0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb92880,1);
  return;
}



// FUNCTION 143eb4c13 FUN_143eb4c13 body=69 status=ok
// SIG undefined FUN_143eb4c13(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eb4c13(void)

{
  _DAT_14cb92898 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eb4c55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb928a0,1);
  return;
}



// FUNCTION 143eb4c58 FUN_143eb4c58 body=69 status=ok
// SIG undefined FUN_143eb4c58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eb4c58(void)

{
  _DAT_14cb928b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eb4c9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb928b8,1);
  return;
}



// FUNCTION 143eb4cda FUN_143eb4cda body=183 status=ok
// SIG undefined FUN_143eb4cda(void)

void FUN_143eb4cda(longlong *param_1,byte param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x8c);
  if (((-1 < (char)uVar3 & param_2) == 0) && (((uVar3 >> 0xd & 1) == 0) == (bool)param_2)) {
    *(uint *)((longlong)param_1 + 0x8c) = uVar3 & 0xffffdfff | (uint)param_2 << 0xd;
    cVar1 = FUN_144729dda(param_1 + 6);
    if (cVar1 != '\0') {
      lVar2 = FUN_14479d2ce(param_1 + 6);
      if (*(longlong *)(lVar2 + 0x598) != 0) {
        uVar3 = *(uint *)((longlong)param_1 + 0x8c) & 0x2000;
        FUN_148a07bc2(*(longlong *)(lVar2 + 0x598),uVar3 >> 0xd);
        if (uVar3 != 0) {
          FUN_148a00866(lVar2);
        }
      }
    }
    (**(code **)(*param_1 + 0xb0))(param_1,param_3);
  }
  if (*param_3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143eb4db6 FUN_143eb4db6 body=249 status=ok
// SIG undefined FUN_143eb4db6(void)

undefined8 FUN_143eb4db6(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (((*(int *)(param_1 + 0x34) == 0) || (uVar1 = *(uint *)(param_1 + 0x30), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) {
    return 0;
  }
  plVar4 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  if ((int)plVar4[2] != *(int *)(param_1 + 0x34)) {
    return 0;
  }
  if ((*(uint *)(plVar4 + 1) & 0x10200000) != 0) {
    return 0;
  }
  if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
    lVar3 = *plVar4;
  }
  else {
    lVar3 = 0;
  }
  if (*(longlong *)(lVar3 + 0x598) == 0) {
    return 0;
  }
  if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
    lVar3 = *plVar4;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
    lVar6 = *plVar4;
  }
  else {
    lVar6 = 0;
  }
  if (*(int *)(lVar6 + 0x374) != 0) {
    uVar1 = *(uint *)(lVar6 + 0x370);
    uVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143eb4e9a;
    puVar5 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar5 != (undefined8 *)0x0) &&
        ((*(int *)(puVar5 + 2) == *(int *)(lVar6 + 0x374) &&
         ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) &&
       ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)) {
      uVar2 = *puVar5;
      goto LAB_143eb4e9a;
    }
  }
  uVar2 = 0;
LAB_143eb4e9a:
  uVar2 = FUN_143ebbcd4(*(undefined8 *)(lVar3 + 0x598),uVar2,param_2,param_3);
  return uVar2;
}



// FUNCTION 143eb4eb0 FUN_143eb4eb0 body=265 status=ok
// SIG undefined FUN_143eb4eb0(void)

/* WARNING: Removing unreachable block (ram,0x000143ebbf33) */
/* WARNING: Removing unreachable block (ram,0x000143ebbf3f) */
/* WARNING: Removing unreachable block (ram,0x000143ebbf48) */
/* WARNING: Removing unreachable block (ram,0x000143ebbf53) */
/* WARNING: Removing unreachable block (ram,0x000143ebbf6d) */
/* WARNING: Removing unreachable block (ram,0x000143ebbf72) */
/* WARNING: Removing unreachable block (ram,0x000143ebbf7f) */
/* WARNING: Removing unreachable block (ram,0x000143ebbf88) */
/* WARNING: Removing unreachable block (ram,0x000143ebbf95) */
/* WARNING: Removing unreachable block (ram,0x000143ebbfad) */
/* WARNING: Removing unreachable block (ram,0x000143ebbf61) */
/* WARNING: Removing unreachable block (ram,0x000143ebbf6b) */
/* WARNING: Removing unreachable block (ram,0x000143ebbfaf) */

ulonglong FUN_143eb4eb0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 unaff_RSI;
  
  if ((((*(int *)(param_1 + 0x34) != 0) && (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x34))) &&
      ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar4;
    }
    else {
      lVar3 = 0;
    }
    if (*(longlong *)(lVar3 + 0x598) != 0) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar4;
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar6 = *plVar4;
      }
      else {
        lVar6 = 0;
      }
      if (*(int *)(lVar6 + 0x374) != 0) {
        uVar1 = *(uint *)(lVar6 + 0x370);
        if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) {
          return CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1) & 0xffffffff;
        }
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((((puVar5 != (undefined8 *)0x0) && (*(int *)(puVar5 + 2) == *(int *)(lVar6 + 0x374))) &&
            ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)) &&
           ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)) {
          uVar2 = FUN_143ebbf1e(*(undefined8 *)(lVar3 + 0x598),*puVar5);
          return uVar2;
        }
      }
      uVar2 = FUN_143ebbf1e(*(undefined8 *)(lVar3 + 0x598),0);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 143eb4fba FUN_143eb4fba body=244 status=ok
// SIG undefined FUN_143eb4fba(void)

void FUN_143eb4fba(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  lVar2 = *param_1;
  lVar4 = FUN_1409f0d56(param_2);
  if (lVar4 != 0) {
    lVar4 = FUN_1409f0d56(param_2);
    if (lVar4 == 0) {
      uVar7 = 0;
      uVar5 = 0;
    }
    else {
      uVar7 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar5 = (ulonglong)*(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar6;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar6;
        }
        uVar5 = (ulonglong)uVar3;
      }
    }
    iVar1 = *(int *)(lVar2 + 0xd0);
    *(uint *)(lVar2 + 0xd0) = iVar1 + 1U;
    if (*(uint *)(lVar2 + 0xd4) < iVar1 + 1U) {
      FUN_1407cc47e((longlong *)(lVar2 + 200),iVar1);
    }
    *(ulonglong *)(*(longlong *)(lVar2 + 200) + (longlong)iVar1 * 8) =
         (ulonglong)uVar7 | uVar5 << 0x20;
  }
  return;
}



// FUNCTION 143eb50ae FUN_143eb50ae body=77 status=ok
// SIG undefined FUN_143eb50ae(void)

void FUN_143eb50ae(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[1] = 0;
  puVar1 = &DAT_14cb92a30;
  do {
    puVar2 = puVar1;
    puVar1 = (undefined8 *)*puVar2;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
  } while (puVar1 != param_1);
  *puVar2 = *param_1;
  *param_1 = 0;
  return;
}



// FUNCTION 143eb50fc FUN_143eb50fc body=70 status=ok
// SIG undefined FUN_143eb50fc(void)

bool FUN_143eb50fc(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = true;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && ((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0 &&
         (*(uint *)(lVar2 + 0x10) == param_1[1])))) {
    bVar3 = (*(uint *)(lVar2 + 8) & 0x10200000) != 0;
  }
  return bVar3;
}



// FUNCTION 143eb5142 FUN_143eb5142 body=3373 status=ok
// SIG undefined FUN_143eb5142(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x000143eb5e51 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_143eb5142(longlong param_1,char param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ushort *puVar4;
  wchar_t *pwVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
  code *pcVar22;
  bool bVar23;
  undefined1 auStack_228 [39];
  char local_201;
  longlong local_200;
  ulonglong local_1f8;
  uint *local_1f0;
  longlong *local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  wchar_t *local_1a0;
  int local_198;
  longlong local_a0;
  undefined8 local_98;
  code *local_88;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  puVar1 = (uint *)(param_1 + 0xc);
  cVar6 = FUN_14129c520(puVar1,0);
  if (cVar6 != '\0') goto LAB_143eb5dfb;
  if (*(int *)(param_1 + 0x10) == 0) {
LAB_143eb5e29:
    lVar15 = 0;
  }
  else {
    uVar10 = *puVar1;
    lVar15 = 0;
    if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
      plVar11 = (longlong *)
                ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
      if ((plVar11 == (longlong *)0x0) ||
         (((int)plVar11[2] != *(int *)(param_1 + 0x10) ||
          ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_143eb5e29;
      lVar15 = *plVar11;
    }
  }
  cVar6 = FUN_143eb50fc(lVar15 + 0x80);
  if (cVar6 != '\0') goto LAB_143eb5dfb;
  if (*(int *)(param_1 + 0x10) == 0) {
LAB_143eb5e30:
    lVar15 = 0;
  }
  else {
    uVar10 = *puVar1;
    lVar15 = 0;
    if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
      plVar11 = (longlong *)
                ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
      if ((plVar11 == (longlong *)0x0) ||
         (((int)plVar11[2] != *(int *)(param_1 + 0x10) ||
          ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_143eb5e30;
      lVar15 = *plVar11;
    }
  }
  local_1f8 = 0;
  if (*(int *)(lVar15 + 0x84) == 0) {
LAB_143eb5e37:
    lVar16 = 0;
  }
  else {
    uVar10 = *(uint *)(lVar15 + 0x80);
    lVar16 = 0;
    if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
      plVar11 = (longlong *)
                ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
      if ((plVar11 == (longlong *)0x0) ||
         (((int)plVar11[2] != *(int *)(lVar15 + 0x84) ||
          ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_143eb5e37;
      lVar16 = *plVar11;
    }
  }
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = (longlong *)0x0;
  uStack_1e0 = 0;
  local_1f0 = puVar1;
  FUN_1403de7ba(&local_1e8,lVar16 + 0xd0);
  local_200 = param_1;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    plVar11 = *(longlong **)(param_1 + 0x18);
    plVar21 = plVar11 + (longlong)*(int *)(param_1 + 0x20) * 2;
    local_1f8 = 0;
    local_201 = param_2;
    do {
      lVar15 = *plVar11;
      lVar16 = *(longlong *)(lVar15 + 0x1a8);
      iVar7 = *(int *)(lVar16 + 0x1c8);
      iVar3 = *(int *)(lVar16 + 0x208);
      uVar10 = *(uint *)(lVar15 + 0x8c);
      if ((uVar10 & 1) == 0) {
        if ((lVar16 != 0) && (*(char *)(lVar16 + 0x18) == '\x01')) {
          *(uint *)(lVar15 + 0x8c) = uVar10 | 1;
          cVar6 = '\x01';
LAB_143eb534e:
          if ((((*(int *)(param_1 + 8) != 0) && (uVar10 = *(uint *)(param_1 + 4), -1 < (int)uVar10))
              && ((int)uVar10 < DAT_14c9647dc)) &&
             (((plVar19 = (longlong *)
                          ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
               plVar19 != (longlong *)0x0 && ((int)plVar19[2] == *(int *)(param_1 + 8))) &&
              (((*(uint *)(plVar19 + 1) & 0x10200000) == 0 &&
               ((*plVar19 != 0 && (*(char *)(*plVar19 + 0x3e1) == '\x01')))))))) goto LAB_143eb554a;
          lVar15 = *plVar11;
          lVar16 = *(longlong *)(lVar15 + 0x1a8);
          param_1 = local_200;
          param_2 = local_201;
          if (cVar6 == '\0') {
            if ((longlong)(int)uStack_1e0 != 0) {
              plVar19 = local_1e8;
              do {
                if (*(int *)(lVar16 + 0x28) != 0) {
                  lVar20 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar16 + 0x20) + lVar20) == *plVar19)
                    goto LAB_143eb53c2;
                    lVar20 = lVar20 + 8;
                  } while ((longlong)*(int *)(lVar16 + 0x28) << 3 != lVar20);
                }
                if ((longlong)*(int *)(lVar16 + 0x38) != 0) {
                  lVar20 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar16 + 0x30) + lVar20) == *plVar19)
                    goto LAB_143eb53c2;
                    lVar20 = lVar20 + 8;
                  } while ((longlong)*(int *)(lVar16 + 0x38) * 8 != lVar20);
                }
                plVar19 = plVar19 + 1;
              } while (plVar19 != local_1e8 + (int)uStack_1e0);
            }
            if (iVar7 != 0) goto LAB_143eb5a00;
          }
LAB_143eb53c2:
          if ((*(int *)(local_200 + 0x10) == 0) || (uVar10 = *local_1f0, (int)uVar10 < 0)) {
LAB_143eb5a19:
            lVar20 = 0;
          }
          else {
            lVar20 = 0;
            if ((int)uVar10 < DAT_14c9647dc) {
              plVar19 = (longlong *)
                        ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
              if (((plVar19 == (longlong *)0x0) || ((int)plVar19[2] != *(int *)(local_200 + 0x10)))
                 || ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)) goto LAB_143eb5a19;
              lVar20 = *plVar19;
            }
          }
          if ((*(int *)(lVar20 + 0x84) == 0) || (uVar10 = *(uint *)(lVar20 + 0x80), (int)uVar10 < 0)
             ) {
LAB_143eb5a21:
            lVar18 = 0;
          }
          else {
            lVar18 = 0;
            if ((int)uVar10 < DAT_14c9647dc) {
              plVar19 = (longlong *)
                        ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
              if (((plVar19 == (longlong *)0x0) || ((int)plVar19[2] != *(int *)(lVar20 + 0x84))) ||
                 ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)) goto LAB_143eb5a21;
              lVar18 = *plVar19;
            }
          }
          if (iVar7 == 0) {
LAB_143eb5689:
            if (*(char *)(lVar16 + 0x221) != '\x01') {
              if ((*(char *)(lVar16 + 0x221) == '\0') && ((longlong)*(int *)(lVar16 + 0x1e8) != 0))
              {
                plVar12 = *(longlong **)(lVar16 + 0x1e0);
                plVar19 = plVar12 + *(int *)(lVar16 + 0x1e8);
                do {
                  if (*(int *)(lVar18 + 0x48) != 0) {
                    lVar20 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar18 + 0x40) + lVar20) == *plVar12)
                      goto LAB_143eb582f;
                      lVar20 = lVar20 + 8;
                    } while ((longlong)*(int *)(lVar18 + 0x48) << 3 != lVar20);
                  }
                  if ((longlong)*(int *)(lVar18 + 0x58) != 0) {
                    lVar20 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar20) == *plVar12)
                      goto LAB_143eb582f;
                      lVar20 = lVar20 + 8;
                    } while ((longlong)*(int *)(lVar18 + 0x58) * 8 != lVar20);
                  }
                  plVar12 = plVar12 + 1;
                } while (plVar12 != plVar19);
              }
LAB_143eb5712:
              if (*(char *)(lVar16 + 0x222) == '\x01') {
                uVar14 = 1;
                if ((longlong)*(int *)(lVar16 + 0x208) != 0) {
                  plVar12 = *(longlong **)(lVar16 + 0x200);
                  plVar19 = plVar12 + *(int *)(lVar16 + 0x208);
                  do {
                    if (*(int *)(lVar18 + 0x48) != 0) {
                      lVar16 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar18 + 0x40) + lVar16) == *plVar12)
                        goto LAB_143eb58f5;
                        lVar16 = lVar16 + 8;
                      } while ((longlong)*(int *)(lVar18 + 0x48) << 3 != lVar16);
                    }
                    if ((longlong)*(int *)(lVar18 + 0x58) == 0) {
LAB_143eb5900:
                      uVar14 = 0;
                      break;
                    }
                    lVar16 = 0;
                    while (*(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar16) != *plVar12) {
                      lVar16 = lVar16 + 8;
                      if ((longlong)*(int *)(lVar18 + 0x58) * 8 == lVar16) goto LAB_143eb5900;
                    }
LAB_143eb58f5:
                    plVar12 = plVar12 + 1;
                  } while (plVar12 != plVar19);
                }
              }
              else if ((*(char *)(lVar16 + 0x222) == '\0') &&
                      ((longlong)*(int *)(lVar16 + 0x208) != 0)) {
                plVar12 = *(longlong **)(lVar16 + 0x200);
                plVar19 = plVar12 + *(int *)(lVar16 + 0x208);
                do {
                  if (*(int *)(lVar18 + 0x48) != 0) {
                    lVar16 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar18 + 0x40) + lVar16) == *plVar12) {
                        uVar14 = CONCAT71((int7)((ulonglong)*plVar12 >> 8),1);
                        goto LAB_143eb5910;
                      }
                      lVar16 = lVar16 + 8;
                    } while ((longlong)*(int *)(lVar18 + 0x48) << 3 != lVar16);
                  }
                  if ((longlong)*(int *)(lVar18 + 0x58) != 0) {
                    lVar16 = (longlong)*(int *)(lVar18 + 0x58) * 8;
                    lVar20 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar20) == *plVar12) {
                        uVar14 = CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
                        goto LAB_143eb5910;
                      }
                      lVar20 = lVar20 + 8;
                    } while (lVar16 != lVar20);
                  }
                  plVar12 = plVar12 + 1;
                  uVar14 = 0;
                } while (plVar12 != plVar19);
              }
              else {
                uVar14 = 0;
              }
LAB_143eb5910:
              *(byte *)(lVar15 + 0x8c) = *(byte *)(lVar15 + 0x8c) | 0x20;
              puVar4 = *(ushort **)(lVar15 + 0x158);
              if (puVar4 != (ushort *)0x0) {
                *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar15 + 0x150) & 0x3f));
              }
              lVar15 = *plVar11;
              uVar10 = *(uint *)(lVar15 + 0x8c);
              if (((uVar10 >> 8 & 1) == 0) &&
                 (puVar4 = *(ushort **)(lVar15 + 0x158), puVar4 != (ushort *)0x0)) {
                *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar15 + 0x150) & 0x3f));
                uVar10 = *(uint *)(lVar15 + 0x8c);
              }
              *(uint *)(lVar15 + 0x8c) = uVar10 | 0x100;
              if (0 < iVar3) {
                lVar15 = *plVar11;
                uVar10 = *(uint *)(lVar15 + 0x8c);
                if (((uVar10 >> 0x12 & 1) == 0) == SUB81(uVar14,0)) {
                  uVar17 = (uint)uVar14 & 0xff;
                  *(uint *)(lVar15 + 0x8c) = (uVar10 & 0xfff9ffff) + uVar17 * 0x20000 + 0x20000;
                  if (((((((uVar10 >> 0x17 & 1) != 0) && (*(int *)(lVar15 + 0x34) != 0)) &&
                        (uVar10 = *(uint *)(lVar15 + 0x30), -1 < (int)uVar10)) &&
                       (((int)uVar10 < DAT_14c9647dc &&
                        (puVar8 = (undefined8 *)
                                  ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                        puVar8 != (undefined8 *)0x0)))) &&
                      (*(int *)(puVar8 + 2) == *(int *)(lVar15 + 0x34))) &&
                     ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)) {
                    if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
                      uVar13 = *puVar8;
                    }
                    else {
                      uVar13 = 0;
                    }
                    FUN_143eb4a94(uVar13,uVar14 ^ 1);
                  }
                  lVar16 = *(longlong *)(lVar15 + 0x288);
                  if (((lVar16 != 0) &&
                      (*(uint *)(lVar16 + 0x4c) = *(uint *)(lVar16 + 0x4c) & 0xfffffffe | uVar17,
                      (*(byte *)(lVar15 + 0x8c) & 0x80) != 0)) &&
                     (puVar4 = *(ushort **)(lVar16 + 0x80), puVar4 != (ushort *)0x0)) {
                    *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar16 + 0x78) & 0x3f));
                  }
                }
              }
              uVar14 = local_1f8;
              param_1 = local_200;
              if ((longlong)*(int *)(local_200 + 0x30) != 0) {
                lVar15 = (longlong)*(int *)(local_200 + 0x30) * 0x68;
                lVar16 = *(longlong *)(local_200 + 0x28) + 0x18;
                do {
                  FUN_1449ad616(lVar16);
                  lVar16 = lVar16 + 0x68;
                  lVar15 = lVar15 + -0x68;
                } while (lVar15 != 0);
              }
              uVar10 = *(uint *)(*plVar11 + 0x1a0);
              param_2 = local_201;
              if ((int)uVar14 < (int)uVar10) {
                cVar6 = FUN_14002b5e0(*(undefined8 *)
                                       (*(longlong *)(param_1 + 0x28) + 8 + (ulonglong)uVar10 * 0x68
                                       ),&DAT_14a40dd9e,4);
                local_1f8 = uVar14 & 0xffffffff;
                param_2 = local_201;
                if (cVar6 != '\0') {
                  local_1f8 = (ulonglong)uVar10;
                }
              }
              goto LAB_143eb5a00;
            }
            if ((longlong)*(int *)(lVar16 + 0x1e8) != 0) {
              plVar12 = *(longlong **)(lVar16 + 0x1e0);
              plVar19 = plVar12 + *(int *)(lVar16 + 0x1e8);
              do {
                if (*(int *)(lVar18 + 0x48) != 0) {
                  lVar20 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar18 + 0x40) + lVar20) == *plVar12)
                    goto LAB_143eb5826;
                    lVar20 = lVar20 + 8;
                  } while ((longlong)*(int *)(lVar18 + 0x48) << 3 != lVar20);
                }
                if ((longlong)*(int *)(lVar18 + 0x58) == 0) goto LAB_143eb5712;
                lVar20 = 0;
                while (*(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar20) != *plVar12) {
                  lVar20 = lVar20 + 8;
                  if ((longlong)*(int *)(lVar18 + 0x58) * 8 == lVar20) goto LAB_143eb5712;
                }
LAB_143eb5826:
                plVar12 = plVar12 + 1;
              } while (plVar12 != plVar19);
            }
          }
          else {
            if (*(char *)(lVar16 + 0x220) == '\x01') {
              if ((longlong)*(int *)(lVar16 + 0x1c8) != 0) {
                plVar12 = *(longlong **)(lVar16 + 0x1c0);
                plVar19 = plVar12 + *(int *)(lVar16 + 0x1c8);
                do {
                  if (*(int *)(lVar18 + 0x48) != 0) {
                    lVar20 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar18 + 0x40) + lVar20) == *plVar12)
                      goto LAB_143eb5680;
                      lVar20 = lVar20 + 8;
                    } while ((longlong)*(int *)(lVar18 + 0x48) << 3 != lVar20);
                  }
                  if ((longlong)*(int *)(lVar18 + 0x58) == 0) goto LAB_143eb582f;
                  lVar20 = 0;
                  while (*(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar20) != *plVar12) {
                    lVar20 = lVar20 + 8;
                    if ((longlong)*(int *)(lVar18 + 0x58) * 8 == lVar20) goto LAB_143eb582f;
                  }
LAB_143eb5680:
                  plVar12 = plVar12 + 1;
                } while (plVar12 != plVar19);
              }
              goto LAB_143eb5689;
            }
            if (*(char *)(lVar16 + 0x220) != '\0') goto LAB_143eb5689;
            if ((longlong)*(int *)(lVar16 + 0x1c8) != 0) {
              plVar12 = *(longlong **)(lVar16 + 0x1c0);
              plVar19 = plVar12 + *(int *)(lVar16 + 0x1c8);
              do {
                if (*(int *)(lVar18 + 0x48) != 0) {
                  lVar20 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar18 + 0x40) + lVar20) == *plVar12)
                    goto LAB_143eb5689;
                    lVar20 = lVar20 + 8;
                  } while ((longlong)*(int *)(lVar18 + 0x48) << 3 != lVar20);
                }
                if ((longlong)*(int *)(lVar18 + 0x58) != 0) {
                  lVar20 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar20) == *plVar12)
                    goto LAB_143eb5689;
                    lVar20 = lVar20 + 8;
                  } while ((longlong)*(int *)(lVar18 + 0x58) * 8 != lVar20);
                }
                plVar12 = plVar12 + 1;
              } while (plVar12 != plVar19);
            }
          }
LAB_143eb582f:
          uVar10 = *(uint *)(lVar15 + 0x8c);
          if (((uVar10 >> 8 & 1) != 0) &&
             (puVar4 = *(ushort **)(lVar15 + 0x158), puVar4 != (ushort *)0x0)) {
            *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar15 + 0x150) & 0x3f));
            uVar10 = *(uint *)(lVar15 + 0x8c);
          }
          *(uint *)(lVar15 + 0x8c) = uVar10 & 0xfffffeff;
        }
      }
      else {
        if ((lVar16 != 0) && (cVar6 = param_2, *(char *)(lVar16 + 0x18) != '\0'))
        goto LAB_143eb534e;
        *(uint *)(lVar15 + 0x8c) = uVar10 & 0xfffffffe;
LAB_143eb554a:
        lVar15 = *plVar11;
        uVar10 = *(uint *)(lVar15 + 0x8c);
        if (((uVar10 >> 8 & 1) != 0) &&
           (puVar4 = *(ushort **)(lVar15 + 0x158), puVar4 != (ushort *)0x0)) {
          *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar15 + 0x150) & 0x3f));
          uVar10 = *(uint *)(lVar15 + 0x8c);
        }
        *(uint *)(lVar15 + 0x8c) = uVar10 & 0xfffffeff;
      }
LAB_143eb5a00:
      plVar11 = plVar11 + 2;
    } while (plVar11 != plVar21);
  }
  if ((((((int)local_1f8 < *(int *)(param_1 + 0x30)) && (*(int *)(param_1 + 8) != 0)) &&
       (uVar10 = *(uint *)(param_1 + 4), -1 < (int)uVar10)) &&
      (((int)uVar10 < DAT_14c9647dc &&
       (plVar11 = (longlong *)
                  ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
       plVar11 != (longlong *)0x0)))) &&
     (((int)plVar11[2] == *(int *)(param_1 + 8) &&
      ((lVar15 = *(longlong *)(param_1 + 0x28), (*(uint *)(plVar11 + 1) & 0x10200000) == 0 &&
       (lVar16 = *plVar11, lVar16 != 0)))))) {
    lVar20 = (local_1f8 & 0xffffffff) * 0x68;
    pcVar22 = (code *)0x0;
    local_a0 = 0;
    FUN_1446e6fe8(&local_1a0,"Event_HighestLayerUpdated",0x19,1);
    FUN_140056680(&local_1c0,local_98);
    local_1b0 = *(undefined4 *)(lVar15 + 0x10 + lVar20);
    uVar13 = *(undefined8 *)(lVar15 + 8 + lVar20);
    uStack_1ac = (undefined4)uVar13;
    uStack_1a8 = (undefined4)((ulonglong)uVar13 >> 0x20);
    local_88 = (code *)0x0;
    puVar8 = (undefined8 *)FUN_14001cc68(0x28,8);
    *puVar8 = &PTR_FUN_14b478fc0;
    plVar11 = puVar8 + 1;
    *plVar11 = local_1c0;
    local_1c0 = 0;
    *(undefined4 *)(puVar8 + 2) = (undefined4)local_1b8;
    *(undefined4 *)((longlong)puVar8 + 0x14) = local_1b8._4_4_;
    local_1b8 = 0;
    *(undefined4 *)(puVar8 + 4) = uStack_1a8;
    puVar8[3] = CONCAT44(uStack_1ac,local_1b0);
    if (plVar11 != (longlong *)0x0) {
      pcVar22 = FUN_1418b9630;
      local_88 = FUN_1418b9630;
    }
    puVar9 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    param_1 = local_200;
    *puVar9 = 0;
    puVar9[2] = pcVar22;
    puVar9[4] = puVar8;
    local_78 = 0;
    *(undefined4 *)(puVar9 + 8) = local_58;
    *(undefined4 *)((longlong)puVar9 + 0x44) = uStack_54;
    *(undefined4 *)(puVar9 + 9) = uStack_50;
    *(undefined4 *)((longlong)puVar9 + 0x4c) = uStack_4c;
    *(undefined4 *)(puVar9 + 6) = local_68;
    *(undefined4 *)((longlong)puVar9 + 0x34) = uStack_64;
    *(undefined4 *)(puVar9 + 7) = uStack_60;
    *(undefined4 *)((longlong)puVar9 + 0x3c) = uStack_5c;
    if (plVar11 != (longlong *)0x0) {
      local_88 = (code *)0x0;
    }
    if (puVar9 != (undefined8 *)0x0) {
      LOCK();
      puVar8 = (undefined8 *)(lVar16 + 0x30);
      puVar2 = (undefined8 *)*puVar8;
      *puVar8 = puVar9;
      UNLOCK();
      LOCK();
      *puVar2 = puVar9;
      UNLOCK();
      if (local_88 != (code *)0x0) {
        (**(code **)(CONCAT44(uStack_64,local_68) + 0x10))();
      }
    }
    if (local_1c0 != 0) {
      FUN_1400020a8();
    }
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
  }
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    plVar11 = *(longlong **)(local_200 + 0x18);
    plVar21 = plVar11 + (longlong)*(int *)(param_1 + 0x20) * 2;
    do {
      if ((((*(byte *)(*plVar11 + 0x8d) & 1) != 0) && (*(int *)(*plVar11 + 0x17c) != 0)) &&
         ((longlong)*(int *)(local_200 + 0x30) != 0)) {
        lVar15 = *(longlong *)(local_200 + 0x28);
        lVar16 = (longlong)*(int *)(local_200 + 0x30) * 0x68;
        do {
          FUN_1400021e4(lVar15,&local_1a0);
          pwVar5 = local_1a0;
          iVar7 = *(int *)(*plVar11 + 0x198);
          if (local_198 == iVar7) {
            bVar23 = true;
            if (1 < local_198) {
              iVar7 = wcscmp(local_1a0,*(wchar_t **)(*plVar11 + 400));
              bVar23 = iVar7 == 0;
            }
          }
          else {
            bVar23 = iVar7 + local_198 == 1;
          }
          if (pwVar5 != (wchar_t *)0x0) {
            FUN_1400020a8(pwVar5);
          }
          if (bVar23) {
            FUN_144a13f80(lVar15 + 0x18,&local_1a0,*plVar11 + 0x18,0);
          }
          lVar15 = lVar15 + 0x68;
          lVar16 = lVar16 + -0x68;
        } while (lVar16 != 0);
      }
      plVar11 = plVar11 + 2;
    } while (plVar11 != plVar21);
  }
  FUN_140c3cefc(local_200);
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  if (local_1e8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143eb5dfb:
  if ((local_48 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eb5e70 FUN_143eb5e70 body=1699 status=ok
// SIG undefined FUN_143eb5e70(void)

/* WARNING: Removing unreachable block (ram,0x000143eb6418) */
/* WARNING: Removing unreachable block (ram,0x000143eb6425) */
/* WARNING: Removing unreachable block (ram,0x000143eb6429) */

void FUN_143eb5e70(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ushort *puVar6;
  void *_Src;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_d8 [32];
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((((*(int *)(param_1 + 8) == 0) || (uVar2 = *(uint *)(param_1 + 4), (int)uVar2 < 0)) ||
       (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(param_1 + 8))))) ||
     ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_143eb649f;
  if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
    lVar11 = *plVar7;
  }
  else {
    lVar11 = 0;
  }
  if ((*(char *)(lVar11 + 0xca) != '\x01') || (*(char *)(lVar11 + 0xcc) != '\0'))
  goto LAB_143eb649f;
  if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
    lVar11 = *plVar7;
  }
  else {
    lVar11 = 0;
  }
  if ((((*(char *)(lVar11 + 0xca) != '\x01') || (*(char *)(lVar11 + 0xc9) != '\x01')) ||
      (*(char *)(lVar11 + 0xcc) != '\0')) || (*(char *)(lVar11 + 0x45c) != '\x01'))
  goto LAB_143eb649f;
  uVar12 = (ulonglong)*(uint *)(param_1 + 0x44);
  if (uVar12 != 0) {
    uVar8 = 0;
    do {
      if (*(short *)(param_1 + 0x3a + uVar8 * 2) != 0) goto LAB_143eb5fa4;
      uVar8 = uVar8 + 1;
    } while (uVar12 != uVar8);
  }
  if ((ulonglong)*(uint *)(param_1 + 0x58) != 0) {
    uVar8 = 0;
    do {
      if (*(short *)(param_1 + 0x4e + uVar8 * 2) != 0) goto LAB_143eb5fa4;
      uVar8 = uVar8 + 1;
    } while (*(uint *)(param_1 + 0x58) != uVar8);
  }
  goto LAB_143eb612e;
LAB_143eb6169:
  iVar3 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar3 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x18);
    lVar15 = 0;
    do {
      plVar7 = *(longlong **)(*(longlong *)(lVar11 + lVar15) + 0x288);
      if (plVar7 == (longlong *)0x0) goto LAB_143eb649f;
      puVar6 = (ushort *)plVar7[0x12];
      if (puVar6 != (ushort *)0x0) {
        *puVar6 = *puVar6 & ~(ushort)(1L << (*(byte *)(plVar7 + 0x11) & 0x3f));
      }
      if (((ushort *)plVar7[0x10] != (ushort *)0x0) &&
         ((*(ushort *)plVar7[0x10] >> (*(uint *)(plVar7 + 0xf) & 0x1f) & 1) != 0)) {
        (**(code **)(*plVar7 + 8))(plVar7);
        if ((*(int *)(param_1 + 8) == 0) || (uVar2 = *(uint *)(param_1 + 4), (int)uVar2 < 0)) {
LAB_143eb63fd:
          lVar16 = 0;
        }
        else {
          lVar16 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            plVar13 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((plVar13 == (longlong *)0x0) || ((int)plVar13[2] != *(int *)(param_1 + 8))) ||
               ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) goto LAB_143eb63fd;
            lVar16 = *plVar13;
          }
        }
        uVar9 = (**(code **)(*plVar7 + 8))();
        if ((*(char *)(lVar16 + 0xca) == '\x01') && (*(char *)(lVar16 + 0xcc) == '\0')) {
          if (*(longlong *)(lVar16 + 0x40) == 0) {
            plVar13 = (longlong *)(lVar16 + 0x28);
          }
          else {
            plVar13 = (longlong *)(*(longlong *)(*(longlong *)(lVar16 + 0x40) + 0x238) + 8);
          }
          plVar13 = (longlong *)*plVar13;
          if (plVar13 != (longlong *)0x0) {
            uVar9 = FUN_1401e1b6a(plVar13,plVar7,uVar9);
            (**(code **)(*plVar13 + 0x238))(plVar13,plVar7,uVar9);
          }
        }
        puVar6 = (ushort *)plVar7[0x10];
        if (puVar6 != (ushort *)0x0) {
          *puVar6 = *puVar6 & ~(ushort)(1L << (*(byte *)(plVar7 + 0xf) & 0x3f));
        }
        if ((char)plVar7[0x15] == '\x01') {
          if ((*(int *)(param_1 + 8) == 0) || (uVar2 = *(uint *)(param_1 + 4), (int)uVar2 < 0)) {
LAB_143eb6405:
            lVar16 = 0;
          }
          else {
            lVar16 = 0;
            if ((int)uVar2 < DAT_14c9647dc) {
              plVar13 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if (((plVar13 == (longlong *)0x0) || ((int)plVar13[2] != *(int *)(param_1 + 8))) ||
                 ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) goto LAB_143eb6405;
              lVar16 = *plVar13;
            }
          }
          local_b8 = (void *)0x0;
          iVar4 = (int)plVar7[2];
          _Src = (void *)plVar7[1];
          if ((longlong)iVar4 == 0) {
            uStack_74 = 0;
            local_78 = 0;
            uStack_80 = (void *)0x0;
          }
          else {
            uStack_b0._0_4_ = iVar4;
            FUN_1446dd670(&local_b8,iVar4,0);
            memcpy(local_b8,_Src,(longlong)iVar4 * 2);
            uStack_80 = local_b8;
            local_78 = (int)uStack_b0;
            uStack_74 = uStack_b0._4_4_;
          }
          local_88 = &PTR_FUN_14b478fa0;
          local_b8 = (void *)0x0;
          uStack_b0 = 0;
          puVar10 = (undefined8 *)FUN_14001cc68(0x50);
          *puVar10 = 0;
          puVar10[2] = FUN_1418b94e4;
          puVar10[4] = 0;
          local_98 = 0;
          *(int *)(puVar10 + 8) = local_78;
          *(undefined4 *)((longlong)puVar10 + 0x44) = uStack_74;
          *(undefined4 *)(puVar10 + 9) = uStack_70;
          *(undefined4 *)((longlong)puVar10 + 0x4c) = uStack_6c;
          *(undefined4 *)(puVar10 + 6) = (undefined4)local_88;
          *(undefined4 *)((longlong)puVar10 + 0x34) = local_88._4_4_;
          *(undefined4 *)(puVar10 + 7) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)puVar10 + 0x3c) = uStack_80._4_4_;
          local_a8 = 0;
          if (puVar10 != (undefined8 *)0x0) {
            LOCK();
            puVar1 = *(undefined8 **)(lVar16 + 0x30);
            *(undefined8 **)(lVar16 + 0x30) = puVar10;
            UNLOCK();
            LOCK();
            *puVar1 = puVar10;
            UNLOCK();
          }
          if (local_b8 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      lVar15 = lVar15 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar15);
  }
  if (*(int *)(param_1 + 8) == 0) {
LAB_143eb6527:
    lVar11 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 4);
    lVar11 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != *(int *)(param_1 + 8) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))))
      goto LAB_143eb6527;
      lVar11 = *plVar7;
    }
  }
  if ((*(char *)(lVar11 + 0xca) == '\x01') && (*(char *)(lVar11 + 0xcc) == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_d8);
  }
  goto LAB_143eb649f;
LAB_143eb5fa4:
  iVar3 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar3 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x18);
    lVar15 = 0;
    do {
      lVar16 = *(longlong *)(lVar11 + lVar15);
      if ((*(longlong *)(lVar16 + 0x1a8) != 0) &&
         (*(char *)(*(longlong *)(lVar16 + 0x1a8) + 0x1b0) == '\x01')) {
        lVar5 = *(longlong *)(lVar16 + 0x288);
        uVar2 = *(uint *)(lVar16 + 0x8c);
        if (lVar5 != 0 && -1 < (char)uVar2) {
          puVar6 = *(ushort **)(lVar5 + 0x80);
          if ((puVar6 == (ushort *)0x0) ||
             (uVar14 = 1 << (*(byte *)(lVar5 + 0x78) & 0x1f) & (uint)*puVar6, uVar14 == 0)) {
            if ((*(ushort **)(lVar5 + 0x90) == (ushort *)0x0) ||
               ((**(ushort **)(lVar5 + 0x90) >> (*(uint *)(lVar5 + 0x88) & 0x1f) & 1) == 0))
            goto LAB_143eb6111;
            if (puVar6 != (ushort *)0x0) {
              uVar14 = 1 << (*(byte *)(lVar5 + 0x78) & 0x1f) & (uint)*puVar6;
              goto LAB_143eb6059;
            }
            bVar17 = false;
          }
          else {
LAB_143eb6059:
            bVar17 = uVar14 != 0;
          }
          *(uint *)(lVar16 + 0x8c) =
               uVar2 & 0xfeffff7f | (uint)((byte)(uVar2 >> 0x18) & 1 | bVar17) << 0x18;
          puVar6 = *(ushort **)(lVar5 + 0x80);
          if (puVar6 != (ushort *)0x0) {
            *puVar6 = *puVar6 & ~(ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
          }
          if (*(ushort **)(lVar5 + 0x90) == (ushort *)0x0) {
            bVar17 = false;
          }
          else {
            bVar17 = (**(ushort **)(lVar5 + 0x90) >> (*(uint *)(lVar5 + 0x88) & 0x1f) & 1) != 0;
          }
          lVar16 = *(longlong *)(lVar11 + lVar15);
          uVar2 = *(uint *)(lVar16 + 0x8c);
          *(uint *)(lVar16 + 0x8c) =
               uVar2 & 0xfdffffff | (uint)((byte)(uVar2 >> 0x19) & 1 | bVar17) << 0x19;
          puVar6 = *(ushort **)(lVar5 + 0x90);
          if (puVar6 != (ushort *)0x0) {
            *puVar6 = *puVar6 & ~(ushort)(1L << (*(byte *)(lVar5 + 0x88) & 0x3f));
          }
        }
      }
LAB_143eb6111:
      lVar15 = lVar15 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar15);
    uVar12 = (ulonglong)*(uint *)(param_1 + 0x44);
  }
LAB_143eb612e:
  if ((int)uVar12 != 0) {
    uVar8 = 0;
    do {
      if (*(short *)(param_1 + 0x3a + uVar8 * 2) != 0) goto LAB_143eb6169;
      uVar8 = uVar8 + 1;
    } while (uVar12 != uVar8);
  }
  if ((ulonglong)*(uint *)(param_1 + 0x58) != 0) {
    uVar12 = 0;
    do {
      if (*(short *)(param_1 + 0x4e + uVar12 * 2) != 0) goto LAB_143eb6169;
      uVar12 = uVar12 + 1;
    } while (*(uint *)(param_1 + 0x58) != uVar12);
  }
LAB_143eb649f:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143eb653c FUN_143eb653c body=93 status=ok
// SIG undefined FUN_143eb653c(void)

void FUN_143eb653c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (DAT_14cb929d0 != (undefined8 *)0x0) {
    (**(code **)*DAT_14cb929d0)(DAT_14cb929d0,1);
  }
  DAT_14cb929d0 = (undefined8 *)0x0;
  puVar1 = &DAT_14cb92a30;
  do {
    puVar2 = puVar1;
    puVar1 = (undefined8 *)*puVar2;
    if (puVar1 == (undefined8 *)0x0) {
      DAT_14cb929d0 = (undefined8 *)0x0;
      return;
    }
  } while (puVar1 != &DAT_14cb929c8);
  *puVar2 = DAT_14cb929c8;
  DAT_14cb929c8 = 0;
  return;
}



// FUNCTION 143eb659a FUN_143eb659a body=1864 status=ok
// SIG undefined FUN_143eb659a(void)

void FUN_143eb659a(undefined8 param_1,longlong *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  byte *pbVar2;
  longlong *plVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  size_t sVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_d8 [32];
  longlong *local_b8 [2];
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98 [2];
  undefined8 local_88;
  longlong *local_80;
  undefined8 *local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *plStack_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_2 == 0) {
    puVar5 = &DAT_14c9a12e0;
  }
  else {
    puVar5 = (undefined4 *)FUN_140625092(*param_2,&DAT_14c9a12e0);
  }
  if (DAT_14c947fe0 == 0) {
    lVar11 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar11);
    DAT_14c947fe0 = lVar11;
  }
  FUN_140045924(DAT_14c947fe0,&local_58,puVar5,1);
  *param_3 = local_58;
  if (param_4 == '\0') {
    if (*param_2 == 0) {
      puVar6 = &DAT_14c9a1308;
    }
    else {
      puVar6 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb92970);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = &PTR_FUN_149e19310;
      DAT_14c844840[2] = 0xffffffffffffffff;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    FUN_1457466ba(puVar6,local_98,&DAT_14c844840);
  }
  else {
    if (*param_2 == 0) {
      puVar6 = &DAT_14c9a1308;
    }
    else {
      puVar6 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb92970);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = &PTR_FUN_149e19310;
      DAT_14c844840[2] = 0xffffffffffffffff;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    FUN_1457466ba(puVar6,local_b8,&DAT_14c844840);
    FUN_14023409e(&local_a8,local_b8,1);
    local_70 = &local_38;
    local_58 = (longlong *)((ulonglong)local_58._4_4_ << 0x20);
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    local_40 = 0;
    local_78 = &local_58;
    FUN_14010d304(&local_68);
    local_88 = local_a8;
    local_80 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_98,&local_88,&local_68);
    FUN_14007f2db(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (plStack_48 != (longlong *)0x0) {
      (**(code **)(*plStack_48 + 0x10))();
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_a0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_a0 + 0x10))(local_a0);
        }
      }
    }
  }
  FUN_140008f88(param_3 + 2,local_98);
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  if ((param_4 != '\0') && (local_b8[0] != (longlong *)0x0)) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
  if (*param_2 == 0) {
    puVar6 = &DAT_14c9a1308;
  }
  else {
    puVar6 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb92978);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = &PTR_FUN_149e19310;
    DAT_14c844840[2] = 0xffffffffffffffff;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  FUN_1457466ba(puVar6,&local_58,&DAT_14c844840);
  FUN_140008f88(param_3 + 6,&local_58);
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if (*param_2 == 0) {
    puVar6 = &DAT_14c9a1308;
  }
  else {
    puVar6 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb92980);
  }
  pbVar2 = (byte *)*puVar6;
  if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(pbVar2 + 8);
  }
  FUN_1400b22c2(&local_58,uVar10);
  if (param_3 + 8 == &local_58) {
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_3[8] != 0) {
      FUN_1400020a8();
    }
    param_3[8] = local_58;
    local_58 = (longlong *)0x0;
    *(undefined4 *)(param_3 + 9) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_3 + 0x4c) = local_50._4_4_;
  }
  if (*param_2 == 0) {
    puVar6 = &DAT_14c9a1308;
  }
  else {
    puVar6 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb92998);
  }
  pbVar2 = (byte *)*puVar6;
  if (((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) == 1)) &&
     (plVar3 = *(longlong **)(pbVar2 + 8), plVar3 != (longlong *)0x0)) {
    sVar8 = strlen((char *)plVar3);
    uVar4 = (uint)sVar8;
    if (uVar4 != 0) {
      lVar11 = (longlong)(int)uVar4;
      plVar12 = (longlong *)((longlong)plVar3 + lVar11 + -1);
      uVar9 = 0;
      if (plVar12 < plVar3) {
        lVar16 = 0;
      }
      else {
        do {
          if (9 < (byte)((char)*plVar12 - 0x30U)) break;
          uVar9 = uVar9 + 1;
          plVar12 = (longlong *)((longlong)plVar12 + -1);
        } while (plVar3 <= plVar12);
        lVar16 = 0;
        if (((uVar9 != 0) && ((int)uVar9 < (int)uVar4)) &&
           ((lVar16 = 0, uVar9 < 0xb &&
            (lVar13 = -(ulonglong)uVar9, *(char *)((longlong)plVar3 + lVar13 + lVar11 + -1) == '_'))
           )) {
          if ((uVar9 == 1) || (*(char *)((longlong)plVar3 + lVar13 + lVar11) != '0')) {
            lVar15 = 0;
            do {
              lVar16 = (longlong)*(char *)((longlong)plVar3 + lVar13 + lVar11) + lVar15 * 10;
              lVar15 = lVar16 + -0x30;
              lVar13 = lVar13 + 1;
            } while (lVar13 != 0);
            if (lVar15 < 0x7fffffff) {
              uVar4 = ~uVar9 + uVar4;
              lVar16 = lVar16 + -0x2f;
              goto LAB_143eb694e;
            }
          }
          lVar16 = 0;
        }
LAB_143eb694e:
        if (uVar4 == 0) goto LAB_143eb68e7;
      }
      local_50._0_5_ = (uint5)uVar4;
      local_58 = plVar3;
      uVar4 = FUN_14001a6c0(&local_58,1);
      uVar14 = lVar16 << 0x20;
      uVar7 = (ulonglong)uVar4;
      goto LAB_143eb6974;
    }
  }
LAB_143eb68e7:
  uVar7 = 0;
  uVar14 = 0;
LAB_143eb6974:
  param_3[0x13] = uVar7 | uVar14;
  if (*param_2 == 0) {
    puVar6 = &DAT_14c9a1308;
  }
  else {
    puVar6 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb929a0);
  }
  pbVar2 = (byte *)*puVar6;
  if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(pbVar2 + 8);
  }
  FUN_1400b22c2(&local_58,uVar10);
  if (param_3 + 0xc == &local_58) {
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_3[0xc] != 0) {
      FUN_1400020a8();
    }
    param_3[0xc] = local_58;
    local_58 = (longlong *)0x0;
    *(undefined4 *)(param_3 + 0xd) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_3 + 0x6c) = local_50._4_4_;
  }
  if (*param_2 == 0) {
    puVar6 = &DAT_14c9a1308;
  }
  else {
    puVar6 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb92968);
  }
  pbVar2 = (byte *)*puVar6;
  puVar6 = &DAT_14c9a1270;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 2) != 0)) {
    puVar6 = *(undefined8 **)(pbVar2 + 8);
  }
  FUN_148a013e6(puVar6,param_3 + 0x11);
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143eb6ce6 FUN_143eb6ce6 body=7818 status=ok
// SIG undefined FUN_143eb6ce6(void)

void FUN_143eb6ce6(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(local_38,L"GbxUIInputTags");
  FUN_1446f470e(&local_40,L"Input.Action.Modifier.Shift",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Modifier.Ctrl",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x10) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Modifier.Alt",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x18) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.AnyInput",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x20) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Equip.CompareItem",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x28) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Equip.DropItem",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x30) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Equip.UnequipItem",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x38) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Equip.SetItemFlag",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x40) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Equip.SelectSlot1",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x48) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Equip.SelectSlot2",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x50) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Equip.SelectSlot3",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x58) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Equip.SelectSlot4",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x60) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Equip.MarkAllFiltered",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x68) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Equip.OpenPlayerStats",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x70) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Equip.MarkHoveredAsJunk",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x78) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Equip.OpenRewardCenter",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x80) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Equip.OpenAllRewards",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x88) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Equip.SwapWeapons",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x90) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Inventory.Close",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x98) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Inventory.Inspect",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0xa0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Inventory.RemoteBankDeposit",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0xb0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Inventory.FlipItemCard",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0xb8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Firmware.Transfer",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0xc0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Firmware.ClearItem",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 200) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Bank.TransferAllFiltered",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0xd0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Bank.EquipItem",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0xd8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Vending.SellAllFiltered",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0xe0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Vending.SellAllJunk",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0xe8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Vending.Refill",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0xf0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.EchoLogs.ChangePage",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0xf8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Challenges.JumpToRewardCenter",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x100) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.LostLoot.JumpToEchoUpgrades",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x108) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.LostLoot.TrashAllItems",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x110) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.LostLoot.TakeAllItems",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x118) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.LostLoot.TrashItem",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x120) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.Escape",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x128) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.Escape.Hold",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x130) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.TabLeft",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x138) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.TabRight",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x140) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.SubTabLeft",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x148) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.SubTabRight",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x150) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.NavLeft",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x158) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.NavRight",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x160) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.NavUp",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x168) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.NavDown",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x170) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.NavSelect",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x178) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.OpenOptions",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x180) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.LegalSplash",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x188) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.OpenCredits",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 400) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.CloseCredits",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x198) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.FastForwardCredits",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1a0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.TogglePauseCredits",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1a8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.PopUp.Escape",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1b0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Mission.Accept",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1b8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Mission.Track",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1c0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Options.ApplySettings",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1c8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Options.RestoreSettings",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1d0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Options.Special",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1d8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Options.Hide",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1e0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.RadialWheel.Axis",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1e8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.MainMenu.SwitchProfile",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1f0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.LoadCharacter.CreateCharacter",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1f8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.LoadCharacter.DeleteCharacter",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x200) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.LoadCharacter.RenameCharacter",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x208) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.LoadCharacter.ViewRecentFriendProfiles",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x210) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.LoadCharacter.ShiftCharacterInteract",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x218) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Lobby.Toggle",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x220) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Lobby.TabLeft",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x228) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Lobby.TabRight",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x230) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Lobby.Escape",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x238) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Lobby.PrimaryShortcut",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x240) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Lobby.SecondaryShortcut",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x248) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Matchmaking.CancelMatchmaking",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x250) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Matchmaking.StartMatchmaking",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 600) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Matchmaking.OpenSettings",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x260) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Matchmaking.ClearQueue",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x268) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Skills.ResetNode",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x270) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Skills.ResetPoints",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x278) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Skills.ResetTree",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x280) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Skill.InvestMaxPoints",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x288) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Skill.Undo",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x290) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Tutorial.Expand",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x298) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Tutorial.Close",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2a0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.MenuTutorial.Skip",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2a8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.MenuTutorial.ContinueComplete",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2b0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Cinematic.Skip",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2b8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.EULA.Accept",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2c0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.EULA.Reject",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2c8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.EULA.Scroll.Down",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2d8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.EULA.Scroll.Up",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2d0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.EULA.Scroll.Released",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2e0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.EULA.Page.Down",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2e8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Menu.EULA.Page.Up",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2f0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.News.FollowLink",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2f8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.VaultCards.Activate",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x300) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.VaultCards.Purchase",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x308) = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eb8bd0 FUN_143eb8bd0 body=57 status=ok
// SIG undefined FUN_143eb8bd0(void)

void FUN_143eb8bd0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb92598 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb92598 = FUN_140002ddd(FUN_14656dac6,uVar1,L"TooltipDataDef");
  }
  return;
}



// FUNCTION 143eb8c5e FUN_143eb8c5e body=59 status=ok
// SIG undefined FUN_143eb8c5e(void)

void FUN_143eb8c5e(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x40);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar2 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x50);
    }
    uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143eb8c8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1);
    return;
  }
  return;
}



// FUNCTION 143eb8c9a FUN_143eb8c9a body=29 status=ok
// SIG undefined FUN_143eb8c9a(void)

undefined8 FUN_143eb8c9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143eb8ccc FUN_143eb8ccc body=101 status=ok
// SIG undefined FUN_143eb8ccc(void)

void FUN_143eb8ccc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4779a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143eb8d32 FUN_143eb8d32 body=101 status=ok
// SIG undefined FUN_143eb8d32(void)

void FUN_143eb8d32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4779a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143eb8d98 FUN_143eb8d98 body=134 status=ok
// SIG undefined FUN_143eb8d98(void)

void FUN_143eb8d98(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4779a0;
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
                    /* WARNING: Could not recover jumptable at 0x000143eb8e0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143eb8e1e FUN_143eb8e1e body=60 status=ok
// SIG undefined FUN_143eb8e1e(void)

void FUN_143eb8e1e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != param_2) {
    return;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  FUN_1401cd85c(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),plVar1 + 4);
  return;
}



// FUNCTION 143eb8e5a FUN_143eb8e5a body=56 status=ok
// SIG undefined FUN_143eb8e5a(void)

undefined8 FUN_143eb8e5a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 == param_2) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_1401cd85c(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),plVar1 + 4);
  }
  return 1;
}



// FUNCTION 143eb8e92 FUN_143eb8e92 body=29 status=ok
// SIG undefined FUN_143eb8e92(void)

undefined8 FUN_143eb8e92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143eb8ec4 FUN_143eb8ec4 body=93 status=ok
// SIG undefined FUN_143eb8ec4(void)

void FUN_143eb8ec4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b477b60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143eb8f22 FUN_143eb8f22 body=93 status=ok
// SIG undefined FUN_143eb8f22(void)

void FUN_143eb8f22(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b477b60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143eb8f80 FUN_143eb8f80 body=126 status=ok
// SIG undefined FUN_143eb8f80(void)

void FUN_143eb8f80(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b477b60;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143eb8fef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143eb9008 FUN_143eb9008 body=20 status=ok
// SIG undefined FUN_143eb9008(void)

undefined1 FUN_143eb9008(longlong param_1)

{
  FUN_143eaff3a(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143eb901c FUN_143eb901c body=79 status=ok
// SIG undefined FUN_143eb901c(void)

longlong FUN_143eb901c(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 143eb906c FUN_143eb906c body=62 status=ok
// SIG undefined FUN_143eb906c(void)

longlong FUN_143eb906c(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  (**(code **)(*param_2 + 0x128))(param_2,*(undefined4 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 143eb90aa FUN_143eb90aa body=79 status=ok
// SIG undefined FUN_143eb90aa(void)

longlong FUN_143eb90aa(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 143eb90fa FUN_143eb90fa body=79 status=ok
// SIG undefined FUN_143eb90fa(void)

longlong FUN_143eb90fa(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 143eb914a FUN_143eb914a body=62 status=ok
// SIG undefined FUN_143eb914a(void)

longlong FUN_143eb914a(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  (**(code **)(*param_2 + 0x140))(param_2,*(undefined1 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 143eb9188 FUN_143eb9188 body=64 status=ok
// SIG undefined FUN_143eb9188(void)

longlong FUN_143eb9188(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  (**(code **)(*param_2 + 0xe8))(param_2,*(undefined4 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 143eb91c8 FUN_143eb91c8 body=79 status=ok
// SIG undefined FUN_143eb91c8(void)

longlong FUN_143eb91c8(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 143eb9218 FUN_143eb9218 body=62 status=ok
// SIG undefined FUN_143eb9218(void)

longlong FUN_143eb9218(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  (**(code **)(*param_2 + 0x140))(param_2,*(undefined1 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 143eb9256 FUN_143eb9256 body=64 status=ok
// SIG undefined FUN_143eb9256(void)

longlong FUN_143eb9256(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  (**(code **)(*param_2 + 0xe8))(param_2,*(undefined4 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 143eb92fc FUN_143eb92fc body=31 status=ok
// SIG undefined FUN_143eb92fc(void)

undefined8 FUN_143eb92fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143eb936e FUN_143eb936e body=158 status=ok
// SIG undefined FUN_143eb936e(void)

void FUN_143eb936e(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x88);
  uVar1 = *(uint *)(param_1 + 0x8c);
  if ((ulonglong)uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  else {
    iVar3 = uVar1 - uVar4;
    if (((longlong)iVar3 & 0x1ffffffffffff800U) == 0) {
      if (iVar3 < 0x41 || (int)(uVar1 * 2) <= (int)(uVar4 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar4) {
      uVar2 = FUN_144a3809e((ulonglong)uVar4 << 3,0);
      uVar4 = (uint)(uVar2 >> 3);
      uVar1 = *(uint *)(param_1 + 0x8c);
    }
  }
  if (uVar4 == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x8c) = uVar4;
  FUN_1401152ba(param_1,*(undefined4 *)(param_1 + 0x88));
  return;
}



// FUNCTION 143eb941e FUN_143eb941e body=1220 status=ok
// SIG undefined FUN_143eb941e(void)

void FUN_143eb941e(longlong *param_1)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  longlong *plVar4;
  void *pvVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  float fVar19;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong *local_c0;
  code *local_b8 [2];
  undefined8 *local_a8;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar4 = (longlong *)*param_1;
  lVar10 = (**(code **)(*plVar4 + 0xc0))(plVar4);
  if (lVar10 == 0) goto LAB_143eb9875;
  dVar6 = (double)*(float *)((longlong)param_1 + 0x1c);
  dVar7 = (double)*(float *)(param_1 + 3);
  if (1 < *(int *)(lVar10 + 0x40)) {
    if (((((*(int *)((longlong)plVar4 + 0x34) == 0) ||
          (uVar3 = *(uint *)(plVar4 + 6), (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3)) ||
        ((puVar12 = (undefined8 *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         puVar12 == (undefined8 *)0x0 ||
         (*(int *)(puVar12 + 2) != *(int *)((longlong)plVar4 + 0x34))))) ||
       ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_143eb9875;
    if ((*(uint *)(puVar12 + 1) & 0x10200000) == 0) {
      plVar15 = (longlong *)*puVar12;
    }
    else {
      plVar15 = (longlong *)0x0;
    }
    lVar11 = (**(code **)(*plVar15 + 0x180))();
    if ((lVar11 == 0) || (lVar11 = FUN_1449baec6(lVar11), lVar11 == 0)) goto LAB_143eb9875;
    if (0 < (longlong)*(int *)(lVar10 + 0x40)) {
      lVar13 = 0;
      lVar17 = 0;
      do {
        if ((*(int *)((longlong)plVar4 + 0x34) == 0) ||
           (uVar3 = *(uint *)(plVar4 + 6), (int)uVar3 < 0)) {
LAB_143eb96f6:
          lVar14 = 0;
        }
        else {
          lVar14 = 0;
          if ((int)uVar3 < DAT_14c9647dc) {
            plVar15 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if (((plVar15 == (longlong *)0x0) ||
                ((int)plVar15[2] != *(int *)((longlong)plVar4 + 0x34))) ||
               ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)) goto LAB_143eb96f6;
            lVar14 = *plVar15;
          }
        }
        if ((*(int *)(lVar14 + 0x374) == 0) || (uVar3 = *(uint *)(lVar14 + 0x370), (int)uVar3 < 0))
        {
LAB_143eb960e:
          lVar16 = 0;
        }
        else {
          lVar16 = 0;
          if ((int)uVar3 < DAT_14c9647dc) {
            plVar15 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if (((plVar15 == (longlong *)0x0) || ((int)plVar15[2] != *(int *)(lVar14 + 0x374))) ||
               (((*(uint *)(plVar15 + 1) & 0x10200000) != 0 ||
                ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_143eb960e;
            lVar16 = *plVar15;
          }
        }
        if (*(longlong *)(*(longlong *)(lVar10 + 0x38) + lVar17 * 8) == lVar16) {
          if (*(char *)(lVar11 + 0x70) == '\x02') {
            if (lVar17 < *(int *)(*(longlong *)(lVar11 + 0x58) + 0x28)) {
              fVar2 = *(float *)(*(longlong *)(*(longlong *)(lVar11 + 0x58) + 0x20) + 8 + lVar13);
              fVar19 = *(float *)(param_1 + 3);
              if ((fVar2 == 0.0) && (!NAN(fVar2))) {
                dVar7 = ((double)fVar19 + 1.0) * 0.5 + -1.0;
                goto LAB_143eb9628;
              }
            }
            else {
              fVar19 = *(float *)(param_1 + 3);
            }
            dVar7 = ((double)fVar19 + 1.0) * 0.5 + 0.0;
          }
          else if (*(char *)(lVar11 + 0x70) == '\x01') {
            if (lVar17 < *(int *)(*(longlong *)(lVar11 + 0x58) + 0x18)) {
              fVar2 = *(float *)(*(longlong *)(*(longlong *)(lVar11 + 0x58) + 0x10) + 0xc + lVar13);
              fVar19 = *(float *)((longlong)param_1 + 0x1c);
              if ((fVar2 == 0.0) && (!NAN(fVar2))) {
                dVar6 = ((double)fVar19 + 1.0) * 0.5 + -1.0;
                goto LAB_143eb9628;
              }
            }
            else {
              fVar19 = *(float *)((longlong)param_1 + 0x1c);
            }
            dVar6 = ((double)fVar19 + 1.0) * 0.5 + 0.0;
          }
        }
LAB_143eb9628:
        lVar17 = lVar17 + 1;
        lVar13 = lVar13 + 0x10;
      } while ((longlong)*(int *)(lVar10 + 0x40) * 0x10 != lVar13);
    }
  }
  local_e8 = (void *)0x0;
  local_e0 = (int)param_1[2];
  lVar10 = (longlong)local_e0;
  pvVar5 = (void *)param_1[1];
  local_f0 = plVar4;
  if (lVar10 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,pvVar5,lVar10 * 2);
  }
  local_c0 = (longlong *)plVar4[2];
  if (local_c0 == (longlong *)0x0) {
    local_c0 = (longlong *)0x0;
    local_c8 = 0;
  }
  else {
    iVar9 = (int)local_c0[1];
    local_c8 = 0;
    do {
      if (iVar9 == 0) {
        local_c0 = (longlong *)0x0;
        goto LAB_143eb977a;
      }
      LOCK();
      iVar8 = (int)local_c0[1];
      bVar18 = iVar9 == iVar8;
      if (bVar18) {
        *(int *)(local_c0 + 1) = iVar9 + 1;
        iVar8 = iVar9;
      }
      iVar9 = iVar8;
      UNLOCK();
    } while (!bVar18);
    local_c8 = plVar4[1];
  }
LAB_143eb977a:
  local_b8[0] = (code *)0x0;
  local_d8 = dVar7;
  uStack_d0 = dVar6;
  puVar12 = (undefined8 *)FUN_14001cc68(0x40,8);
  pvVar5 = local_e8;
  *puVar12 = &PTR_FUN_14b478d40;
  puVar12[1] = local_f0;
  puVar12[2] = 0;
  lVar10 = (longlong)local_e0;
  *(int *)(puVar12 + 3) = local_e0;
  local_a8 = puVar12;
  if (lVar10 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar12 + 2,local_e0,0);
    memcpy((void *)puVar12[2],pvVar5,lVar10 * 2);
  }
  *(undefined4 *)(puVar12 + 4) = (undefined4)local_d8;
  *(undefined4 *)((longlong)puVar12 + 0x24) = local_d8._4_4_;
  *(undefined4 *)(puVar12 + 5) = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)puVar12 + 0x2c) = uStack_d0._4_4_;
  puVar12[6] = local_c8;
  puVar12[7] = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
    UNLOCK();
  }
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_b8[0] = FUN_143eb9a26;
  }
  FUN_1403911de(plVar4,local_b8);
  plVar4 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_c0 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_e8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143eb9875:
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143eb98e4 FUN_143eb98e4 body=187 status=ok
// SIG undefined FUN_143eb98e4(void)

undefined8 * FUN_143eb98e4(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14b478d20;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(puVar3 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar3 + 2,iVar1,0);
    memcpy((void *)puVar3[2],_Src,(longlong)iVar1 * 2);
  }
  puVar3[4] = *(undefined8 *)(param_1 + 0x20);
  puVar3[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar3[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return puVar3 + 1;
}



// FUNCTION 143eb99a6 FUN_143eb99a6 body=29 status=ok
// SIG undefined FUN_143eb99a6(void)

void FUN_143eb99a6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143eb99c4 FUN_143eb99c4 body=97 status=ok
// SIG undefined FUN_143eb99c4(void)

undefined8 * FUN_143eb99c4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b478d20;
  plVar3 = (longlong *)param_1[6];
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
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143eb9a26 FUN_143eb9a26 body=671 status=ok
// SIG undefined FUN_143eb9a26(void)

void FUN_143eb9a26(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = *param_1;
  if (((((*(int *)(lVar2 + 0x34) != 0) && (uVar1 = *(uint *)(lVar2 + 0x30), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar10 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(lVar2 + 0x34))))) &&
     (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (lVar3 = *plVar10, lVar3 != 0)))) {
    local_78 = 0;
    uStack_70 = 0;
    cVar5 = FUN_140aa46b8(*(undefined8 *)(lVar2 + 0x1a8));
    if ((cVar5 != '\0') && (0 < (int)uStack_70)) {
      local_c0 = param_1 + 3;
      lVar12 = 0;
      do {
        plVar10 = *(longlong **)(local_78 + lVar12 * 8);
        if (plVar10 != (longlong *)0x0) {
          puVar11 = &DAT_149dfb77a;
          if ((int)param_1[2] != 0) {
            puVar11 = (undefined2 *)param_1[1];
          }
          FUN_1446f470e(&local_80,puVar11,1);
          lVar6 = FUN_1400796d0(plVar10[2],local_80,1);
          if (lVar6 != 0) {
            local_a8 = 0;
            uStack_a0 = 0;
            local_b8 = 0;
            lStack_b0 = 0;
            local_b8 = FUN_1407f492e(lVar3);
            if (local_b8 == 0) {
              local_b8 = FUN_14656ecd8(lVar2);
            }
            uVar4 = *(undefined8 *)(lVar2 + 0x1a8);
            if (local_a8 == 0) {
              uVar7 = FUN_140d8fa50();
              local_a8 = FUN_14477b664(uVar7);
            }
            lVar8 = FUN_140d8fa50();
            uVar7 = FUN_140d8fa50();
            FUN_1402d1bfa(&local_68,uVar7,uVar4);
            if (lStack_b0 != local_68) {
              uStack_a0 = 0;
            }
            lStack_b0 = local_68;
            lVar9 = FUN_140d8fa50();
            if (lVar8 == 0) {
LAB_143eb9bf6:
              lVar9 = lVar8;
            }
            else if (lVar9 == 0) {
              lVar9 = 0;
            }
            else if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
                    (*(longlong *)
                      (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                     lVar9 + 0x30)) goto LAB_143eb9bf6;
            if (local_a8 != lVar9) {
              uStack_a0 = 0;
            }
            uVar7 = FUN_14477b664(lVar9);
            local_a8 = FUN_14477b664(uVar7);
            if ((local_a8 != 0) && (lStack_b0 != 0)) {
              uStack_a0 = uVar4;
            }
            local_98 = (undefined4)*local_c0;
            uStack_94 = *(undefined4 *)((longlong)local_c0 + 4);
            uStack_90 = (undefined4)local_c0[1];
            uStack_8c = *(undefined4 *)((longlong)local_c0 + 0xc);
            (**(code **)(*plVar10 + 0x248))(plVar10,lVar6,&local_b8);
          }
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)uStack_70);
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143eb9cc6 FUN_143eb9cc6 body=188 status=ok
// SIG undefined FUN_143eb9cc6(void)

undefined8 * FUN_143eb9cc6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x40,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b478d40;
  puVar4[1] = *(undefined8 *)(param_1 + 8);
  puVar4[2] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(puVar4 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar4 + 2,iVar1,0);
    memcpy((void *)puVar4[2],_Src,(longlong)iVar1 * 2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar4[4] = *(undefined8 *)(param_1 + 0x20);
  puVar4[5] = uVar3;
  puVar4[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar4[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return puVar4 + 1;
}



// FUNCTION 143eb9d88 FUN_143eb9d88 body=29 status=ok
// SIG undefined FUN_143eb9d88(void)

void FUN_143eb9d88(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143eb9da6 FUN_143eb9da6 body=97 status=ok
// SIG undefined FUN_143eb9da6(void)

undefined8 * FUN_143eb9da6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b478d40;
  plVar3 = (longlong *)param_1[7];
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
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143eb9e08 FUN_143eb9e08 body=625 status=ok
// SIG undefined FUN_143eb9e08(void)

void FUN_143eb9e08(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_1;
  if (((((*(int *)(lVar2 + 0x34) != 0) && (uVar1 = *(uint *)(lVar2 + 0x30), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar10 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(lVar2 + 0x34))))) &&
     (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (lVar3 = *plVar10, lVar3 != 0)))) {
    local_78 = 0;
    uStack_70 = 0;
    cVar5 = FUN_140aa46b8(*(undefined8 *)(lVar2 + 0x1a8));
    if ((cVar5 != '\0') && (0 < (int)uStack_70)) {
      lVar12 = 0;
      do {
        plVar10 = *(longlong **)(local_78 + lVar12 * 8);
        if (plVar10 != (longlong *)0x0) {
          puVar11 = &DAT_149dfb77a;
          if ((int)param_1[2] != 0) {
            puVar11 = (undefined2 *)param_1[1];
          }
          FUN_1446f470e(&local_80,puVar11,1);
          lVar6 = FUN_1400796d0(plVar10[2],local_80,1);
          if (lVar6 != 0) {
            local_98 = 0;
            uStack_90 = 0;
            local_a8 = 0;
            lStack_a0 = 0;
            local_a8 = FUN_1407f492e(lVar3);
            if (local_a8 == 0) {
              local_a8 = FUN_14656ecd8(lVar2);
            }
            uVar4 = *(undefined8 *)(lVar2 + 0x1a8);
            if (local_98 == 0) {
              uVar7 = FUN_140d8fa50();
              local_98 = FUN_14477b664(uVar7);
            }
            lVar8 = FUN_140d8fa50();
            uVar7 = FUN_140d8fa50();
            FUN_1402d1bfa(&local_68,uVar7,uVar4);
            if (lStack_a0 != local_68) {
              uStack_90 = 0;
            }
            lStack_a0 = local_68;
            lVar9 = FUN_140d8fa50();
            if (lVar8 == 0) {
LAB_143eb9fc3:
              lVar9 = lVar8;
            }
            else if (lVar9 == 0) {
              lVar9 = 0;
            }
            else if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
                    (*(longlong *)
                      (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                     lVar9 + 0x30)) goto LAB_143eb9fc3;
            if (local_98 != lVar9) {
              uStack_90 = 0;
            }
            uVar7 = FUN_14477b664(lVar9);
            local_98 = FUN_14477b664(uVar7);
            if ((local_98 != 0) && (lStack_a0 != 0)) {
              uStack_90 = uVar4;
            }
            (**(code **)(*plVar10 + 0x248))(plVar10,lVar6,&local_a8);
          }
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)uStack_70);
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143eba07a FUN_143eba07a body=178 status=ok
// SIG undefined FUN_143eba07a(void)

undefined8 * FUN_143eba07a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14b478d60;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(puVar3 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar3 + 2,iVar1,0);
    memcpy((void *)puVar3[2],_Src,(longlong)iVar1 * 2);
  }
  puVar3[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar3[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return puVar3 + 1;
}



// FUNCTION 143eba132 FUN_143eba132 body=29 status=ok
// SIG undefined FUN_143eba132(void)

void FUN_143eba132(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143eba150 FUN_143eba150 body=97 status=ok
// SIG undefined FUN_143eba150(void)

undefined8 * FUN_143eba150(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b478d60;
  plVar3 = (longlong *)param_1[5];
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
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143eba1b2 FUN_143eba1b2 body=30 status=ok
// SIG undefined FUN_143eba1b2(void)

void * FUN_143eba1b2(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143eba1d0 FUN_143eba1d0 body=37 status=ok
// SIG undefined FUN_143eba1d0(void)

void FUN_143eba1d0(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000143eba1f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 143eba1fc FUN_143eba1fc body=30 status=ok
// SIG undefined FUN_143eba1fc(void)

void * FUN_143eba1fc(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143eba220 FUN_143eba220 body=30 status=ok
// SIG undefined FUN_143eba220(void)

void * FUN_143eba220(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143eba244 FUN_143eba244 body=30 status=ok
// SIG undefined FUN_143eba244(void)

void * FUN_143eba244(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143eba268 FUN_143eba268 body=30 status=ok
// SIG undefined FUN_143eba268(void)

void * FUN_143eba268(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143eba28c FUN_143eba28c body=31 status=ok
// SIG undefined FUN_143eba28c(void)

undefined8 FUN_143eba28c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143eba30c FUN_143eba30c body=30 status=ok
// SIG undefined FUN_143eba30c(void)

void * FUN_143eba30c(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143eba330 FUN_143eba330 body=68 status=ok
// SIG undefined FUN_143eba330(void)

undefined8 * FUN_143eba330(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b479020;
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



// FUNCTION 143eba374 FUN_143eba374 body=68 status=ok
// SIG undefined FUN_143eba374(void)

undefined8 * FUN_143eba374(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b479090;
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



// FUNCTION 143eba3be FUN_143eba3be body=115 status=ok
// SIG undefined FUN_143eba3be(void)

void FUN_143eba3be(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,2);
    (**(code **)(*plVar1 + 0xe0))(plVar1,*param_3);
    (**(code **)(*plVar1 + 0xe0))(plVar1,*param_4);
                    /* WARNING: Could not recover jumptable at 0x000143eba422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1);
    return;
  }
  return;
}



// FUNCTION 143eba432 FUN_143eba432 body=30 status=ok
// SIG undefined FUN_143eba432(void)

void * FUN_143eba432(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143eba456 FUN_143eba456 body=30 status=ok
// SIG undefined FUN_143eba456(void)

void * FUN_143eba456(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143eba47a FUN_143eba47a body=30 status=ok
// SIG undefined FUN_143eba47a(void)

void * FUN_143eba47a(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143eba49e FUN_143eba49e body=30 status=ok
// SIG undefined FUN_143eba49e(void)

void * FUN_143eba49e(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143eba4c1 FUN_143eba4c1 body=6162 status=ok
// SIG undefined FUN_143eba4c1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eba4c1(void)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulonglong local_80;
  undefined4 local_74;
  char *local_70;
  int local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = "state_rem";
  local_68 = 9;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  DAT_14cb92510 = (ulonglong)uVar6;
  local_70 = "state_add";
  local_68 = 9;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  DAT_14cb92518 = (ulonglong)uVar6;
  local_70 = "state_remove_primary";
  local_68 = 0x14;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  DAT_14cb92520 = (ulonglong)uVar6;
  uStack_90 = 0;
  uStack_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/GbxUICoherent",0,0,&PTR_FUN_14b473800);
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92540 = (ulonglong)uVar6;
  uStack_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_14282b410(L"/Script/GbxUICoherent",&PTR_FUN_14b4738d0,1,0);
  uStack_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_14282b410(L"/Script/GbxUICoherent",&PTR_FUN_14b473990,1,0);
  uStack_90 = 0;
  uStack_88 = 0;
  local_98 = 2;
  FUN_14282b410(L"/Script/GbxUICoherent",&PTR_FUN_14b473e00,1,&PTR_FUN_14b473db0);
  local_70 = "parent";
  local_68 = 6;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb925c0 = (ulonglong)uVar6;
  local_70 = "abstract";
  local_68 = 8;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb925c8 = (ulonglong)uVar6;
  local_70 = "inactive_behavior";
  local_68 = 0x11;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb925d0 = (ulonglong)uVar6;
  local_70 = "page";
  local_68 = 4;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb925d8 = (ulonglong)uVar6;
  local_70 = "curve";
  local_68 = 5;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb925e0 = (ulonglong)uVar6;
  local_70 = "overlay";
  local_68 = 7;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb925e8 = (ulonglong)uVar6;
  local_70 = "use_viewport";
  local_68 = 0xc;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb925f0 = (ulonglong)uVar6;
  local_70 = "suspend";
  local_68 = 7;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb925f8 = (ulonglong)uVar6;
  local_70 = "suspend";
  local_68 = 7;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92600 = (ulonglong)uVar6;
  local_70 = "display_order";
  local_68 = 0xd;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92608 = (ulonglong)uVar6;
  local_70 = "preload";
  local_68 = 7;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92610 = (ulonglong)uVar6;
  uStack_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_14282b410(L"/Script/GbxUICoherent",&PTR_FUN_14b473ec0,1,0);
  uStack_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_14282b410(L"/Script/GbxUICoherent",&PTR_FUN_14b473f90,1,0);
  uStack_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_14282b410(L"/Script/GbxUICoherent",&PTR_FUN_14b4741a0,1,0);
  local_70 = "state_remove_primary";
  local_68 = 0x14;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92668 = (ulonglong)uVar6;
  local_70 = "state_add_primary";
  local_68 = 0x11;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92670 = (ulonglong)uVar6;
  local_70 = "state_add";
  local_68 = 9;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92678 = (ulonglong)uVar6;
  local_70 = "state_rem";
  local_68 = 9;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92680 = (ulonglong)uVar6;
  local_70 = "set_menu_state";
  local_68 = 0xe;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92688 = (ulonglong)uVar6;
  local_70 = "set_active_options";
  local_68 = 0x12;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92690 = (ulonglong)uVar6;
  DAT_14cb92698 = 0;
  atexit((_func_5014 *)&LAB_143eafc28);
  local_70 = (char *)0x800000014b4741f8;
  local_74 = 0xd;
  local_68 = FUN_14577453c();
  local_64 = 1;
  FUN_14656dd14(&local_70);
  local_70 = "nexus";
  local_68 = 5;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb926a8 = (ulonglong)uVar6;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar5 = FUN_140b10a34(&local_70,&DAT_14cb926b0);
  if (cVar5 == '\0') {
    _DAT_14cb926b0 = 0;
    uRam000000014cb926b8 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  *(longlong *)(local_70 + 0x10) = lVar13;
  *(undefined ***)local_70 = &PTR_FUN_14a380e50;
  *(code **)(local_70 + 0x18) = FUN_143eb0da4;
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14156bb10(&DAT_14cb926c0,L"gbx.ui.view.stateadd",
                L"Adds a ui state. args [State] [Optional View Handle Index]",&local_70);
  if (local_68 == 0) {
LAB_143ebab61:
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (char *)0x0) {
    if ((code *)**(undefined8 **)local_70 == FUN_145715146) {
      *(undefined ***)local_70 = &PTR_FUN_14b478da0;
      plVar2 = *(longlong **)(local_70 + 0x20);
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
    else {
      (*(code *)**(undefined8 **)local_70)(local_70,0);
    }
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_143ebab61;
  }
  atexit(FUN_143eb0fde);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  *(longlong *)(local_70 + 0x10) = lVar13;
  *(undefined ***)local_70 = &PTR_FUN_14a380e50;
  *(code **)(local_70 + 0x18) = FUN_143eb1024;
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14156bb10(&DAT_14cb926d0,L"gbx.ui.view.stateremove",
                L"Removes a ui state. args [state] [Optional View Handle Index]",&local_70);
  if (local_68 == 0) {
LAB_143ebac6f:
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (char *)0x0) {
    if ((code *)**(undefined8 **)local_70 == FUN_145715146) {
      *(undefined ***)local_70 = &PTR_FUN_14b478da0;
      plVar2 = *(longlong **)(local_70 + 0x20);
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
    else {
      (*(code *)**(undefined8 **)local_70)(local_70,0);
    }
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_143ebac6f;
  }
  atexit(FUN_143eb125e);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  *(longlong *)(local_70 + 0x10) = lVar13;
  *(undefined ***)local_70 = &PTR_FUN_14a380e50;
  *(code **)(local_70 + 0x18) = FUN_148a001fc;
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14156bb10(&DAT_14cb926e0,L"gbx.ui.coherent.togglevisibility",
                L"Toggles rendering of the given ui view. args [Optional View Handle Index]",
                &local_70);
  if (local_68 == 0) {
LAB_143ebad7d:
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (char *)0x0) {
    if ((code *)**(undefined8 **)local_70 == FUN_145715146) {
      *(undefined ***)local_70 = &PTR_FUN_14b478da0;
      plVar2 = *(longlong **)(local_70 + 0x20);
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
    else {
      (*(code *)**(undefined8 **)local_70)(local_70,0);
    }
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_143ebad7d;
  }
  atexit(FUN_143eb12a3);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  *(longlong *)(local_70 + 0x10) = lVar13;
  *(undefined ***)local_70 = &PTR_FUN_14a380e50;
  *(code **)(local_70 + 0x18) = FUN_143eb12e8;
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14156bb10(&DAT_14cb926f0,L"gbx.ui.coherent.setvisibility",
                L"Sets rendering of the ui on or off",&local_70);
  if (local_68 == 0) {
LAB_143ebae8b:
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (char *)0x0) {
    if ((code *)**(undefined8 **)local_70 == FUN_145715146) {
      *(undefined ***)local_70 = &PTR_FUN_14b478da0;
      plVar2 = *(longlong **)(local_70 + 0x20);
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
    else {
      (*(code *)**(undefined8 **)local_70)(local_70,0);
    }
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_143ebae8b;
  }
  atexit(FUN_143eb13b9);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  *(longlong *)(local_70 + 0x10) = lVar13;
  *(undefined ***)local_70 = &PTR_FUN_14a380e50;
  *(code **)(local_70 + 0x18) = FUN_143eb13fe;
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14156bb10(&DAT_14cb92700,L"SetSplitscreenLayout",
                L"Changes split screen layout. In 2p(0 Horizontal, 1 Vertical) 3p(0 Favor top 1, Favor Bottom)"
                ,&local_70);
  if (local_68 != 0) {
    if (local_70 == (char *)0x0) goto LAB_143ebafa7;
    if ((code *)**(undefined8 **)local_70 == FUN_145715146) {
      *(undefined ***)local_70 = &PTR_FUN_14b478da0;
      plVar2 = *(longlong **)(local_70 + 0x20);
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
    else {
      (*(code *)**(undefined8 **)local_70)(local_70,0);
    }
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143ebafa7:
  atexit(FUN_143eb14e6);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_98._0_4_ = 1;
  FUN_140bd5914(&DAT_14cb92a38,L"gbx.ui.FillItemCard",&local_70,
                L"Fills empty data on the item card with debug values.");
  atexit(FUN_143eb1afe);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_98._0_4_ = 1;
  FUN_140bd5914(&DAT_14cb92a50,L"gbx.ui.FillMissionAccept",&local_70,
                L"Fills empty data on the Mission Accept menu with debug values.");
  atexit(FUN_143eb1b43);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_98._0_4_ = 0;
  FUN_140bd5914(&DAT_14cb92710,L"gbx.ui.UseBakedInEditor",&local_70,
                L"Use the baked UI content in editor (PIE, -game, etc).");
  atexit(FUN_143eb1b88);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_98._0_4_ = 0;
  FUN_140bd5914(&DAT_14cb92728,L"gbx.ui.UseBakedInGame",&local_70,
                L"Use the baked UI content in Game (cooked).");
  atexit(FUN_143eb1bcd);
  local_98._0_4_ = 0;
  FUN_14153156c(&DAT_14cb92740,L"gbx.ui.splitscreen.roundrobin",&DAT_14cb92750,
                L"When active, only one player\'s UI updates per tick.");
  atexit(FUN_143eb2fb8);
  local_98._0_4_ = 0;
  FUN_1415c789c(&DAT_14cb92758,L"GbxUI.CVars.TimeSliceUpdateTime",&DAT_14c763ad4,
                L"Time spent per frame to update time slice widget events in milliseconds");
  atexit(FUN_143eb3376);
  local_70 = "UI.State.SPLITSCREEN_HORIZONTAL";
  local_68 = 0x1f;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  DAT_14cb92768 = (ulonglong)uVar6;
  local_70 = "UI.State.SPLITSCREEN_VERTICAL";
  local_68 = 0x1d;
  local_64 = 0;
  local_80 = DAT_14cb92768;
  uVar6 = FUN_14001a6c0(&local_70,1);
  local_70 = "UI.State.SPLITSCREEN_GRID";
  local_68 = 0x19;
  local_64 = 0;
  DAT_14cb92770 = (ulonglong)uVar6;
  uVar7 = FUN_14001a6c0(&local_70,1);
  local_70 = "UI.State.SPLITSCREEN_BOTTOM";
  local_68 = 0x1b;
  local_64 = 0;
  _DAT_14cb92778 = (ulonglong)uVar7;
  uVar8 = FUN_14001a6c0(&local_70,1);
  local_70 = "UI.State.SPLITSCREEN_RIGHT";
  local_68 = 0x1a;
  local_64 = 0;
  DAT_14cb92780 = (ulonglong)uVar8;
  uVar9 = FUN_14001a6c0(&local_70,1);
  local_70 = "UI.State.SPLITSCREEN_LEFT";
  local_68 = 0x19;
  local_64 = 0;
  DAT_14cb92788 = (ulonglong)uVar9;
  uVar10 = FUN_14001a6c0(&local_70,1);
  local_70 = "UI.State.SPLITSCREEN_TOP";
  local_68 = 0x18;
  local_64 = 0;
  DAT_14cb92790 = (ulonglong)uVar10;
  uVar11 = FUN_14001a6c0(&local_70,1);
  local_70 = "UI.State.SPLITSCREEN";
  local_68 = 0x14;
  local_64 = 0;
  DAT_14cb92798 = (ulonglong)uVar11;
  uVar12 = FUN_14001a6c0(&local_70,1);
  DAT_14cb927a8 = (ulonglong *)0x0;
  DAT_14cb927b0 = 8;
  DAT_14cb927a0 = (ulonglong)uVar12;
  FUN_1401b309e(&DAT_14cb927a8,8,0);
  puVar3 = DAT_14cb927a8;
  *DAT_14cb927a8 = local_80;
  puVar3[1] = (ulonglong)uVar6;
  puVar3[2] = (ulonglong)uVar7;
  puVar3[3] = (ulonglong)uVar8;
  puVar3[4] = (ulonglong)uVar9;
  puVar3[5] = (ulonglong)uVar10;
  puVar3[6] = (ulonglong)uVar11;
  puVar3[7] = (ulonglong)uVar12;
  atexit((_func_5014 *)&LAB_143eb33bb);
  local_98._0_4_ = 0;
  FUN_141471170(&DAT_14cb927c0,L"gbx.ui.view.ClearCachesWhenHidden",&DAT_14cb927b8,&DAT_149dfb77a);
  atexit(FUN_143eb33cc);
  local_98._0_4_ = 0;
  FUN_141471170(&DAT_14cb927d0,L"gbx.ui.ScratchLayersCacheSizeBias",&DAT_14cb927e0,&DAT_149dfb77a);
  atexit(FUN_143eb3411);
  local_98._0_4_ = 0;
  FUN_141471170(&DAT_14cb927e8,L"gbx.ui.ScratchTexturesCacheSizeBias",&DAT_14cb927f8,&DAT_149dfb77a)
  ;
  atexit(FUN_143eb3456);
  local_98._0_4_ = 0;
  FUN_141471170(&DAT_14cb92800,L"gbx.ui.DepthStencilCacheSizeBias",&DAT_14cb92810,&DAT_149dfb77a);
  atexit(FUN_143eb349b);
  local_70 = (char *)CONCAT71(local_70._1_7_,1);
  local_98._0_4_ = 1;
  FUN_140bd5914(&DAT_14cb92818,L"gbx.ui.GlobalSimpleOpacity",&local_70,
                L"Enable prysms global simple opacity.");
  atexit(FUN_143eb34e0);
  FUN_140056680(&DAT_14cb92830,L"Input.Action.Menu.NavSelect");
  atexit((_func_5014 *)&LAB_143eb4b2d);
  local_70 = "PlayerUIInitialized";
  local_68 = 0x13;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92840 = (ulonglong)uVar6;
  local_70 = (char *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_98._0_4_ = 1;
  FUN_140bd5914(&DAT_14cb92848,L"gbx.ui.disablepreloadandsuspend",&local_70,
                L"Disables preloading and suspending of ui views.");
  atexit(FUN_143eb4b3e);
  local_98._0_4_ = 1;
  FUN_14153156c(&DAT_14cb92868,L"gbx.ui.disablepreload",&DAT_14cb92860,
                L"Disables preloading of ui views.");
  atexit(FUN_143eb4b83);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_98._0_4_ = 1;
  FUN_140bd5914(&DAT_14cb92878,L"gbx.ui.disablesuspend",&local_70,
                L"Disables suspending of ui views.");
  atexit(FUN_143eb4bc8);
  local_98._0_4_ = 0;
  FUN_14153156c(&DAT_14cb92898,L"GbxUI.CVars.LogDirtyUpdates",&DAT_14cb92890,
                L"Whether to log widgets that are dirty after their update");
  atexit(FUN_143eb4c13);
  local_98 = (ulonglong)local_98._4_4_ << 0x20;
  FUN_14153156c(&DAT_14cb928b0,L"GbxUI.CVars.AutoClearViewBinds",&DAT_14cb928a8,
                L"Whether to automatically clear view bind handles");
  atexit(FUN_143eb4c58);
  local_70 = "path";
  local_68 = 4;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb928c0 = (ulonglong)uVar6;
  local_70 = "script_class";
  local_68 = 0xc;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb928c8 = (ulonglong)uVar6;
  local_70 = "use_cursor";
  local_68 = 10;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb928d0 = (ulonglong)uVar6;
  local_70 = "use_device_input";
  local_68 = 0x10;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb928d8 = (ulonglong)uVar6;
  local_70 = "exclusive_input";
  local_68 = 0xf;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb928e0 = (ulonglong)uVar6;
  local_70 = "no_html";
  local_68 = 7;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb928e8 = (ulonglong)uVar6;
  local_70 = "params";
  local_68 = 6;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb928f0 = (ulonglong)uVar6;
  local_70 = "layer";
  local_68 = 5;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb928f8 = (ulonglong)uVar6;
  local_70 = "material_animations_that_hide_widget";
  local_68 = 0x24;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92900 = (ulonglong)uVar6;
  local_70 = "disabling_widget_disables_entire_view";
  local_68 = 0x25;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92908 = (ulonglong)uVar6;
  local_70 = "primary_state";
  local_68 = 0xd;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92910 = (ulonglong)uVar6;
  local_70 = "root_class";
  local_68 = 10;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92918 = (ulonglong)uVar6;
  FUN_140056680(&DAT_14cb92920,L"HoldActionStart");
  atexit((_func_5014 *)&LAB_143eb4c9d);
  FUN_140056680(&DAT_14cb92930,L"HoldActionLoop");
  atexit((_func_5014 *)&LAB_143eb4cae);
  FUN_140056680(&DAT_14cb92940,L"HoldActionStop");
  atexit((_func_5014 *)&LAB_143eb4cbf);
  local_70 = "entry_sets";
  local_68 = 10;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92950 = (ulonglong)uVar6;
  local_70 = "entries";
  local_68 = 7;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92958 = (ulonglong)uVar6;
  local_70 = "menu_title";
  local_68 = 10;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92960 = (ulonglong)uVar6;
  local_70 = "actions";
  local_68 = 7;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92968 = (ulonglong)uVar6;
  local_70 = "loc_text";
  local_68 = 8;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92970 = (ulonglong)uVar6;
  local_70 = "desc_text";
  local_68 = 9;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92978 = (ulonglong)uVar6;
  local_70 = "style";
  local_68 = 5;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92980 = (ulonglong)uVar6;
  local_70 = "horizontal";
  local_68 = 10;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92988 = (ulonglong)uVar6;
  local_70 = "entry_set_default";
  local_68 = 0x11;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92990 = (ulonglong)uVar6;
  local_70 = "required_nexus_layer";
  local_68 = 0x14;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92998 = (ulonglong)uVar6;
  local_70 = "tooltip_key";
  local_68 = 0xb;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb929a0 = (ulonglong)uVar6;
  local_70 = "set_push";
  local_68 = 8;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  DAT_14cb929a8 = (ulonglong)uVar6;
  local_70 = "exit_game";
  local_68 = 9;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  DAT_14cb929b0 = (ulonglong)uVar6;
  local_70 = "back";
  local_68 = 4;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  DAT_14cb929b8 = (ulonglong)uVar6;
  local_70 = "back_actions";
  local_68 = 0xc;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb929c0 = (ulonglong)uVar6;
  DAT_14cb929d0 = 0;
  _DAT_14cb929d8 = FUN_145ccbf4a;
  _DAT_14cb929e0 = "list_menu";
  DAT_14cb929c8 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cb929c8;
  atexit(FUN_143eb653c);
  local_70 = "payload";
  local_68 = 7;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb929e8 = (ulonglong)uVar6;
  local_70 = "can_escape";
  local_68 = 10;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb929f0 = (ulonglong)uVar6;
  local_70 = "left_right_nav_special";
  local_68 = 0x16;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb929f8 = (ulonglong)uVar6;
  local_70 = "up_down_nav_special";
  local_68 = 0x13;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92a00 = (ulonglong)uVar6;
  local_70 = "select_nav_special";
  local_68 = 0x12;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92a08 = (ulonglong)uVar6;
  local_70 = "play_menu_open_material_animation";
  local_68 = 0x21;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb92a10 = (ulonglong)uVar6;
  local_70 = "can_pop_escape";
  local_68 = 0xe;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70);
  _DAT_14cb92a18 = (ulonglong)uVar6;
  FUN_1458e052c(&DAT_14cb92a68);
  _DAT_14cb92a68 = &PTR_FUN_14b477998;
  memset(&DAT_14cb92a70,0,0x308);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ebbcd4 FUN_143ebbcd4 body=179 status=ok
// SIG undefined FUN_143ebbcd4(void)

ulonglong FUN_143ebbcd4(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
    if ((longlong)*(int *)(param_1 + 0x20) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x18);
      lVar5 = (longlong)*(int *)(param_1 + 0x20) * 0x70;
      do {
        lVar2 = FUN_140059518(lVar3 + 8);
        if (lVar2 == param_2) {
          if (lVar3 != 0) {
            lVar3 = FUN_1400b6e86(param_2);
            if ((lVar3 != 0) && (iVar1 = *(int *)(param_3 + 8), (longlong)iVar1 != 0)) {
              lVar3 = 0;
              do {
                FUN_143ebbd88();
                lVar3 = lVar3 + 8;
              } while ((longlong)iVar1 * 8 != lVar3);
            }
            goto LAB_143ebbd75;
          }
          break;
        }
        lVar3 = lVar3 + 0x70;
        lVar5 = lVar5 + -0x70;
      } while (lVar5 != 0);
    }
    uVar4 = 0;
  }
LAB_143ebbd75:
  return uVar4 & 0xffffffff;
}



// FUNCTION 143ebbd88 FUN_143ebbd88 body=405 status=ok
// SIG undefined FUN_143ebbd88(void)

undefined8
FUN_143ebbd88(undefined8 param_1,longlong param_2,ulonglong param_3,undefined4 param_4,
             longlong param_5)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 >> 0x20 != 0 && param_2 != 0) {
    uVar2 = 0;
    uVar6 = (uint)param_3;
    if (((int)uVar6 < 0) || (DAT_14c9647dc <= (int)uVar6)) goto LAB_143ebbeec;
    uVar9 = (ulonglong)((uint)(param_3 >> 0x10) & 0x7fff);
    plVar5 = (longlong *)
             ((ulonglong)((uVar6 & 0xffff) * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar9 * 8));
    if ((plVar5 != (longlong *)0x0) && (iVar10 = (int)(param_3 >> 0x20), (int)plVar5[2] == iVar10))
    {
      uVar2 = 0;
      if ((param_5 != 0) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
          lVar4 = *plVar5;
        }
        else {
          lVar4 = 0;
        }
        local_48 = *(undefined8 *)(lVar4 + 0x18);
        local_4c = 0;
        uVar1 = (uint)((ulonglong)local_48 >> 0x10);
        uVar7 = (uint)local_48 & 0xffff;
        piVar3 = (int *)FUN_1418b9dc8(param_2 + 0x18,
                                      ((uint)local_48 << 0x10 | uVar7) +
                                      (int)((ulonglong)local_48 >> 0x20) +
                                      (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4),&local_48,
                                      &local_4c);
        *piVar3 = *piVar3 + 1;
        local_4c = CONCAT31(local_4c._1_3_,1);
        if (((((int)uVar6 < DAT_14c9647dc) &&
             (puVar8 = (undefined8 *)
                       ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + uVar9 * 8)), puVar8 != (undefined8 *)0x0)) &&
            (*(int *)(puVar8 + 2) == iVar10)) && ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)) {
          uVar2 = *puVar8;
        }
        else {
          uVar2 = 0;
        }
        (**(code **)(*(longlong *)(param_5 + 0x30) + 0x98))
                  ((longlong *)(param_5 + 0x30),uVar2,param_4,&local_4c);
        uVar2 = 1;
      }
      goto LAB_143ebbeec;
    }
  }
  uVar2 = 0;
LAB_143ebbeec:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ebbf1e FUN_143ebbf1e body=163 status=ok
// SIG undefined FUN_143ebbf1e(void)

ulonglong FUN_143ebbf1e(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
    if ((longlong)*(int *)(param_1 + 0x20) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x18);
      lVar5 = (longlong)*(int *)(param_1 + 0x20) * 0x70;
      do {
        lVar2 = FUN_140059518(lVar4 + 8);
        if (lVar2 == param_2) {
          if (lVar4 != 0) {
            lVar4 = FUN_1400b6e86(param_2);
            if ((lVar4 != 0) && (iVar1 = *(int *)(param_3 + 8), (longlong)iVar1 != 0)) {
              lVar4 = 0;
              do {
                FUN_141483c7c();
                lVar4 = lVar4 + 8;
              } while ((longlong)iVar1 * 8 != lVar4);
            }
            goto LAB_143ebbfb1;
          }
          break;
        }
        lVar4 = lVar4 + 0x70;
        lVar5 = lVar5 + -0x70;
      } while (lVar5 != 0);
    }
    uVar3 = 0;
  }
LAB_143ebbfb1:
  return uVar3 & 0xffffffff;
}



// FUNCTION 143ebbfc2 FUN_143ebbfc2 body=130 status=ok
// SIG undefined FUN_143ebbfc2(void)

undefined8 FUN_143ebbfc2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) &&
     ((longlong)*(int *)(param_1 + 0x20) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar4 = (longlong)*(int *)(param_1 + 0x20) * 0x70;
    do {
      lVar1 = FUN_140059518(lVar3 + 8);
      if (lVar1 == param_2) {
        if (lVar3 == 0) {
          return 0;
        }
        lVar3 = FUN_1400b6e86(param_2);
        if (lVar3 == 0) {
          return 0;
        }
        uVar2 = FUN_143ebbd88();
        return uVar2;
      }
      lVar3 = lVar3 + 0x70;
      lVar4 = lVar4 + -0x70;
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 143ebc044 FUN_143ebc044 body=563 status=ok
// SIG undefined FUN_143ebc044(void)

void FUN_143ebc044(longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint *puVar15;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) &&
     ((longlong)*(int *)(param_1 + 0x20) != 0)) {
    puVar15 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x28);
    lVar10 = (longlong)*(int *)(param_1 + 0x20) * 0x70;
    do {
      lVar5 = FUN_140059518(puVar15 + -8);
      if (lVar5 == param_2) {
        if (puVar15 != (uint *)&DAT_00000028) {
          uVar2 = puVar15[6];
          if (uVar2 == 0) {
            uVar14 = 1;
            uVar13 = 0;
            iVar11 = 0;
            uVar4 = 0;
            goto LAB_143ebc141;
          }
          puVar6 = *(uint **)(puVar15 + 4);
          if (*(uint **)(puVar15 + 4) == (uint *)0x0) {
            puVar6 = puVar15;
          }
          uVar4 = *puVar6;
          if (uVar4 != 0) {
            uVar13 = 0;
            iVar11 = 0;
            goto LAB_143ebc10c;
          }
          iVar11 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar11 = uVar2 - 1;
          }
          uVar13 = 0;
          uVar14 = (ulonglong)(uint)(iVar11 >> 5);
          if (iVar11 >> 5 < 1) {
            uVar14 = uVar13;
          }
          iVar11 = 0;
          goto LAB_143ebc0f8;
        }
        break;
      }
      puVar15 = puVar15 + 0x1c;
      lVar10 = lVar10 + -0x70;
    } while (lVar10 != 0);
  }
  goto LAB_143ebc146;
  while( true ) {
    iVar11 = iVar11 + 0x20;
    uVar4 = puVar6[uVar13 + 1];
    uVar13 = uVar13 + 1;
    if (uVar4 != 0) break;
LAB_143ebc0f8:
    if (uVar14 == uVar13) goto LAB_143ebc146;
  }
LAB_143ebc10c:
  uVar14 = (ulonglong)(-uVar4 & uVar4);
  uVar1 = uVar14 * 2 + 1;
  lVar10 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  uVar4 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
  if ((int)uVar2 <= (int)uVar4) {
    uVar4 = uVar2;
  }
LAB_143ebc141:
  if (uVar4 != uVar2) {
    uVar7 = 0xffffffff;
    do {
      local_60 = *(longlong *)(puVar15 + -4) + (longlong)(int)uVar4 * 0x14;
      local_58 = *(longlong *)(puVar15 + -4) + (longlong)(int)uVar4 * 0x14 + 8;
      FUN_140171856(param_3,local_4c,&local_60,0);
      uVar7 = ~(uint)uVar14 & uVar7;
      puVar6 = *(uint **)(puVar15 + 4);
      if (*(uint **)(puVar15 + 4) == (uint *)0x0) {
        puVar6 = puVar15;
      }
      uVar3 = puVar15[6];
      iVar12 = (int)uVar13;
      lVar10 = (longlong)iVar12;
      uVar4 = puVar6[lVar10] & uVar7;
      if (uVar4 == 0) {
        iVar8 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar8 = uVar3 - 1;
        }
        iVar8 = iVar8 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar12 < iVar8) {
          lVar5 = 0;
          do {
            uVar4 = puVar6[lVar10 + lVar5 + 1];
            if (uVar4 != 0) {
              uVar13 = (ulonglong)(iVar12 + (int)lVar5 + 1);
              uVar7 = 0xffffffff;
              goto LAB_143ebc225;
            }
            iVar11 = iVar11 + 0x20;
            lVar5 = lVar5 + 1;
          } while (iVar9 - lVar10 != lVar5);
          uVar7 = 0xffffffff;
          iVar12 = iVar9;
        }
        uVar13 = (ulonglong)(iVar12 + 1);
        uVar4 = uVar3;
      }
      else {
LAB_143ebc225:
        uVar14 = (ulonglong)(-uVar4 & uVar4);
        uVar1 = uVar14 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar4 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar4) {
          uVar4 = uVar3;
        }
      }
    } while (uVar4 != uVar2);
  }
LAB_143ebc146:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ebc280 FUN_143ebc280 body=69 status=ok
// SIG undefined FUN_143ebc280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ebc280(void)

{
  _DAT_14cb92de8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ebc2c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb92df0,1);
  return;
}



// FUNCTION 143ebc2c5 FUN_143ebc2c5 body=69 status=ok
// SIG undefined FUN_143ebc2c5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ebc2c5(void)

{
  _DAT_14cb92df8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ebc307. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb92e00,1);
  return;
}



// FUNCTION 143ebc3b6 FUN_143ebc3b6 body=1174 status=ok
// SIG undefined FUN_143ebc3b6(void)

void FUN_143ebc3b6(longlong *param_1)

{
  void **ppvVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined *puVar4;
  longlong *plVar5;
  longlong lVar6;
  void *_Src;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint *puVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined1 auStack_d8 [36];
  int local_b4;
  longlong *local_b0;
  ulonglong local_a8;
  uint *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *plStack_80;
  void *local_78;
  ulonglong uStack_70;
  undefined2 local_62;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_141499196();
  puVar20 = (uint *)(param_1 + 0x51);
  uVar9 = *(uint *)(param_1 + 0x54);
  uVar22 = (ulonglong)uVar9;
  if (uVar9 == 0) {
    uVar16 = 1;
    uVar18 = 0;
    iVar15 = 0;
    uVar12 = 0;
  }
  else {
    puVar10 = (uint *)param_1[0x53];
    if ((uint *)param_1[0x53] == (uint *)0x0) {
      puVar10 = puVar20;
    }
    uVar12 = *puVar10;
    if (uVar12 == 0) {
      iVar15 = uVar9 + 0x1e;
      if (-1 < (int)(uVar9 - 1)) {
        iVar15 = uVar9 - 1;
      }
      uVar18 = 0;
      uVar16 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar16 = uVar18;
      }
      iVar15 = 0;
      do {
        if (uVar16 == uVar18) goto LAB_143ebc474;
        iVar15 = iVar15 + 0x20;
        uVar12 = puVar10[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar18 = 0;
      iVar15 = 0;
    }
    uVar16 = (ulonglong)(-uVar12 & uVar12);
    uVar3 = uVar16 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar12 = (iVar15 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    if ((int)uVar9 <= (int)uVar12) {
      uVar12 = uVar9;
    }
  }
  if (uVar12 != uVar9) {
    uVar21 = 0xffffffff;
    local_b0 = param_1;
    local_a8 = uVar22;
    local_a0 = puVar20;
    do {
      lVar23 = *(longlong *)(param_1[0x4f] + 0x10 + (longlong)(int)uVar12 * 0x20);
      local_b4 = iVar15;
      if ((lVar23 != 0) && (puVar4 = *(undefined **)(lVar23 + 0x30), puVar4 != (undefined *)0x0)) {
        ppvVar1 = (void **)(puVar4 + 0x28);
        *(undefined4 *)(puVar4 + 0x30) = 0;
        if (*(int *)(puVar4 + 0x34) != 0) {
          FUN_1457d0886(ppvVar1,0);
        }
        local_78 = (void *)0x0;
        uStack_70 = 0;
        (**(code **)(*param_1 + 0x418))(param_1,&local_78,lVar23,lVar23);
        _Src = local_78;
        if (ppvVar1 != &local_78) {
          iVar15 = (int)uStack_70;
          lVar23 = (longlong)(int)uStack_70;
          *(int *)(puVar4 + 0x30) = (int)uStack_70;
          if ((int)uStack_70 == 0 && *(int *)(puVar4 + 0x34) == 0) {
            *(undefined4 *)(puVar4 + 0x34) = 0;
          }
          else {
            FUN_14012afbc(ppvVar1,uStack_70 & 0xffffffff);
            if (iVar15 != 0) {
              memcpy(*ppvVar1,_Src,lVar23 << 3);
            }
          }
        }
        local_88 = 0;
        plStack_80 = (longlong *)0x0;
        FUN_1446e9750(local_b0,&local_88,&local_78,0);
        local_62 = 0x101;
        FUN_14000954c(&local_88,&local_98,&local_62);
        if (puVar4 != &DAT_14c9a12f0) {
          if (local_90 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_90 + 1) = (int)local_90[1] + 1;
            UNLOCK();
          }
          plVar5 = *(longlong **)(puVar4 + 0x20);
          *(undefined8 *)(puVar4 + 0x18) = local_98;
          *(longlong **)(puVar4 + 0x20) = local_90;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar5 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
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
        plVar5 = local_90;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_90 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        puVar4[0x73] = puVar4[0x73] | puVar4[0x6e];
        if (0 < (int)uStack_70) {
          lVar23 = 0;
          do {
            FUN_144837e54(*(undefined8 *)((longlong)local_78 + lVar23 * 8),0);
            lVar19 = *(longlong *)((longlong)local_78 + lVar23 * 8);
            lVar6 = *(longlong *)(lVar19 + 0x48);
            plVar5 = *(longlong **)(lVar19 + 0x50);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
            }
            plVar11 = &DAT_14c9a1308;
            if (lVar6 != 0) {
              plVar11 = (longlong *)FUN_1446e60f4(lVar6);
            }
            if (*plVar11 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = FUN_14000584e();
            }
            puVar4[0x6c] = uVar7;
            plVar11 = &DAT_14c9a1308;
            if (lVar6 != 0) {
              plVar11 = (longlong *)FUN_1446e60f4(lVar6);
            }
            if (*plVar11 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = FUN_14000584e();
            }
            puVar4[0x6e] = uVar7;
            plVar11 = &DAT_14c9a1308;
            if (lVar6 != 0) {
              plVar11 = (longlong *)FUN_1446e60f4(lVar6);
            }
            if (*plVar11 == 0) {
LAB_143ebc6ce:
              uVar7 = puVar4[0x6e];
            }
            else {
              cVar8 = FUN_14000584e();
              uVar7 = 1;
              if (cVar8 == '\0') goto LAB_143ebc6ce;
            }
            puVar4[0x73] = uVar7;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar11 = plVar5 + 1;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)*plVar11 == 0) {
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
            lVar23 = lVar23 + 1;
          } while (lVar23 < (int)uStack_70);
        }
        plVar5 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar11 = plStack_80 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plStack_80)(plStack_80);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        uVar22 = local_a8;
        if (local_78 != (void *)0x0) {
          FUN_1400020a8();
        }
        uVar9 = *(uint *)(local_b0 + 0x54);
        param_1 = local_b0;
        puVar20 = local_a0;
      }
      uVar21 = uVar21 & ~(uint)uVar16;
      puVar10 = (uint *)param_1[0x53];
      if ((uint *)param_1[0x53] == (uint *)0x0) {
        puVar10 = puVar20;
      }
      iVar17 = (int)uVar18;
      lVar23 = (longlong)iVar17;
      uVar12 = puVar10[lVar23] & uVar21;
      iVar15 = local_b4;
      if (uVar12 == 0) {
        iVar13 = uVar9 + 0x1e;
        if (-1 < (int)(uVar9 - 1)) {
          iVar13 = uVar9 - 1;
        }
        iVar13 = iVar13 >> 5;
        iVar15 = local_b4 + 0x20;
        iVar14 = iVar13;
        if (iVar13 < iVar17) {
          iVar14 = iVar17;
        }
        if (iVar17 < iVar13) {
          lVar19 = 0;
          do {
            uVar12 = puVar10[lVar23 + lVar19 + 1];
            if (uVar12 != 0) {
              uVar18 = (ulonglong)(iVar17 + (int)lVar19 + 1);
              uVar21 = 0xffffffff;
              goto LAB_143ebc7d4;
            }
            iVar15 = iVar15 + 0x20;
            lVar19 = lVar19 + 1;
          } while (iVar14 - lVar23 != lVar19);
          uVar21 = 0xffffffff;
          iVar17 = iVar14;
        }
        uVar18 = (ulonglong)(iVar17 + 1);
        uVar12 = uVar9;
      }
      else {
LAB_143ebc7d4:
        uVar16 = (ulonglong)(-uVar12 & uVar12);
        uVar3 = uVar16 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        uVar12 = (iVar15 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        if ((int)uVar9 <= (int)uVar12) {
          uVar12 = uVar9;
        }
      }
    } while (uVar12 != (uint)uVar22);
  }
LAB_143ebc474:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ebc886 FUN_143ebc886 body=1337 status=ok
// SIG undefined FUN_143ebc886(void)

void FUN_143ebc886(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  uint *puVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStack_e8 [32];
  uint local_c8;
  int local_c4;
  ulonglong local_c0;
  longlong *local_b8;
  uint *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined2 local_62;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_141499196();
  puVar20 = (uint *)(param_1 + 0x51);
  uVar7 = *(uint *)(param_1 + 0x54);
  uVar17 = (ulonglong)uVar7;
  if (uVar7 == 0) {
    uVar22 = 1;
    uVar15 = 0;
    iVar16 = 0;
    uVar9 = 0;
  }
  else {
    puVar8 = (uint *)param_1[0x53];
    if ((uint *)param_1[0x53] == (uint *)0x0) {
      puVar8 = puVar20;
    }
    uVar9 = *puVar8;
    if (uVar9 == 0) {
      iVar16 = uVar7 + 0x1e;
      if (-1 < (int)(uVar7 - 1)) {
        iVar16 = uVar7 - 1;
      }
      uVar15 = 0;
      uVar22 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar22 = uVar15;
      }
      iVar16 = 0;
      do {
        if (uVar22 == uVar15) goto LAB_143ebc944;
        iVar16 = iVar16 + 0x20;
        uVar9 = puVar8[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar15 = 0;
      iVar16 = 0;
    }
    uVar22 = (ulonglong)(-uVar9 & uVar9);
    uVar3 = uVar22 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar9 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if ((int)uVar7 <= (int)uVar9) {
      uVar9 = uVar7;
    }
  }
  if (uVar9 != uVar7) {
    local_b8 = param_1 + 0x79;
    uVar21 = 0xffffffff;
    local_c0 = uVar17;
    local_b0 = puVar20;
    do {
      lVar18 = *(longlong *)(param_1[0x4f] + 0x10 + (longlong)(int)uVar9 * 0x20);
      if ((lVar18 != 0) && (puVar4 = *(undefined **)(lVar18 + 0x30), puVar4 != (undefined *)0x0)) {
        *(undefined4 *)(lVar18 + 0x40) = *(undefined4 *)(lVar18 + 0x44);
        *(undefined8 *)(puVar4 + 0x18) = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_c4 = iVar16;
        (**(code **)(*param_1 + 0x418))(param_1,&local_78,lVar18,lVar18);
        local_88 = 0;
        plStack_80 = (longlong *)0x0;
        FUN_1446e9750(param_1,&local_88,&local_78,0);
        local_62 = 0x101;
        FUN_14000954c(&local_88,&local_98,&local_62);
        if (puVar4 != &DAT_14c9a12e8) {
          if (local_90 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_90 + 1) = (int)local_90[1] + 1;
            UNLOCK();
          }
          plVar12 = *(longlong **)(puVar4 + 0x28);
          *(undefined8 *)(puVar4 + 0x20) = local_98;
          *(longlong **)(puVar4 + 0x28) = local_90;
          if (plVar12 != (longlong *)0x0) {
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
        }
        plVar12 = local_90;
        local_c8 = uVar21;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_90 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        if ((puVar4[0x40] != '\x01') || ((int)uStack_70 != 1)) {
          puVar13 = &DAT_149dfb77a;
          if (*(int *)(puVar4 + 0x38) != 0) {
            puVar13 = *(undefined2 **)(puVar4 + 0x30);
          }
          FUN_1446f470e(&local_a0,puVar13,1);
          if ((int)param_1[0x73] != *(int *)((longlong)param_1 + 0x3c4)) {
            uVar7 = (uint)((ulonglong)local_a0 >> 0x10);
            uVar9 = (uint)local_a0 & 0xffff;
            plVar12 = (longlong *)param_1[0x7a];
            if ((longlong *)param_1[0x7a] == (longlong *)0x0) {
              plVar12 = local_b8;
            }
            iVar16 = *(int *)((longlong)plVar12 +
                             (ulonglong)
                             ((int)param_1[0x7b] - 1U &
                             (int)((ulonglong)local_a0 >> 0x20) + ((uint)local_a0 << 0x10 | uVar9) +
                             (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar9 >> 4)) * 4);
            if (iVar16 != -1) {
              do {
                plVar12 = (longlong *)(param_1[0x72] + (longlong)iVar16 * 0x18);
                if (*plVar12 == local_a0) {
                  if (plVar12 + 1 != (longlong *)0x0 && plVar12 != (longlong *)0x0) {
                    *(longlong *)(puVar4 + 0x18) = plVar12[1];
                  }
                  break;
                }
                iVar16 = (int)plVar12[2];
              } while (iVar16 != -1);
            }
          }
          lVar18 = (longlong)(int)uStack_70;
          if (0 < (longlong)(int)uStack_70) {
            do {
              if (*(longlong *)(puVar4 + 0x18) != 0) break;
              uVar5 = *(undefined8 *)(local_78 + (lVar18 + -1) * 8);
              if (DAT_14c947fe0 == 0) {
                lVar19 = FUN_14001cc68(0x140,0x10);
                FUN_1456b2032(lVar19);
                DAT_14c947fe0 = lVar19;
              }
              FUN_140045924(DAT_14c947fe0,&local_a8,uVar5,1);
              if ((int)param_1[0x73] != *(int *)((longlong)param_1 + 0x3c4)) {
                uVar7 = (uint)((ulonglong)local_a8 >> 0x10);
                uVar9 = (uint)local_a8 & 0xffff;
                plVar12 = (longlong *)param_1[0x7a];
                if ((longlong *)param_1[0x7a] == (longlong *)0x0) {
                  plVar12 = local_b8;
                }
                iVar16 = *(int *)((longlong)plVar12 +
                                 (ulonglong)
                                 ((int)param_1[0x7b] - 1U &
                                 (int)((ulonglong)local_a8 >> 0x20) +
                                 ((uint)local_a8 << 0x10 | uVar9) + (uVar7 << 0x13 | uVar7 & 0xffff)
                                 + (uVar9 >> 4)) * 4);
                if (iVar16 != -1) {
                  do {
                    plVar12 = (longlong *)(param_1[0x72] + (longlong)iVar16 * 0x18);
                    if (*plVar12 == local_a8) {
                      if (plVar12 + 1 != (longlong *)0x0 && plVar12 != (longlong *)0x0) {
                        *(longlong *)(puVar4 + 0x18) = plVar12[1];
                      }
                      break;
                    }
                    iVar16 = (int)plVar12[2];
                  } while (iVar16 != -1);
                }
              }
              bVar6 = 1 < lVar18;
              lVar18 = lVar18 + -1;
            } while (bVar6);
          }
        }
        plVar12 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_80 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_80)(plStack_80);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        uVar17 = local_c0;
        uVar21 = local_c8;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        uVar7 = *(uint *)(param_1 + 0x54);
        puVar20 = local_b0;
        iVar16 = local_c4;
      }
      uVar21 = uVar21 & ~(uint)uVar22;
      puVar8 = (uint *)param_1[0x53];
      if ((uint *)param_1[0x53] == (uint *)0x0) {
        puVar8 = puVar20;
      }
      iVar14 = (int)uVar15;
      lVar18 = (longlong)iVar14;
      uVar9 = puVar8[lVar18] & uVar21;
      if (uVar9 == 0) {
        iVar10 = uVar7 + 0x1e;
        if (-1 < (int)(uVar7 - 1)) {
          iVar10 = uVar7 - 1;
        }
        iVar10 = iVar10 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar14) {
          iVar11 = iVar14;
        }
        if (iVar14 < iVar10) {
          lVar19 = 0;
          do {
            uVar9 = puVar8[lVar18 + lVar19 + 1];
            if (uVar9 != 0) {
              uVar15 = (ulonglong)(iVar14 + (int)lVar19 + 1);
              uVar21 = 0xffffffff;
              goto LAB_143ebcd53;
            }
            iVar16 = iVar16 + 0x20;
            lVar19 = lVar19 + 1;
          } while (iVar11 - lVar18 != lVar19);
          uVar21 = 0xffffffff;
          iVar14 = iVar11;
        }
        uVar15 = (ulonglong)(iVar14 + 1);
        uVar17 = local_c0;
        uVar9 = uVar7;
      }
      else {
LAB_143ebcd53:
        uVar22 = (ulonglong)(-uVar9 & uVar9);
        uVar3 = uVar22 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar9 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)uVar7 <= (int)uVar9) {
          uVar9 = uVar7;
        }
      }
    } while (uVar9 != (uint)uVar17);
  }
LAB_143ebc944:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ebcdfa FUN_143ebcdfa body=3744 status=ok
// SIG undefined FUN_143ebcdfa(void)

void FUN_143ebcdfa(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 *****pppppuVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  code *****pppppcVar11;
  code *****pppppcVar12;
  code *****pppppcVar13;
  uint uVar14;
  code ******ppppppcVar15;
  longlong *plVar16;
  int iVar17;
  longlong *plVar18;
  undefined8 ******ppppppuVar19;
  undefined8 **ppuVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  longlong lVar23;
  undefined8 *puVar24;
  undefined1 auStack_108 [32];
  undefined8 *****local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined1 local_cc [4];
  undefined8 *local_c8;
  undefined8 *****local_c0;
  undefined8 *****local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined8 *****local_80;
  code *****local_78;
  longlong *local_70;
  ushort local_60;
  uint local_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar23 = param_1[6];
  lVar6 = *(longlong *)(lVar23 + 0x10);
  if (lVar6 == 0) {
    uVar7 = FUN_14656c012();
    lVar6 = FUN_14477b664(uVar7);
    *(longlong *)(lVar23 + 0x10) = lVar6;
  }
  if (*(longlong *)(lVar23 + 0x18) == 0) {
    if ((lVar6 == 0) || (*(longlong *)(lVar23 + 8) == 0)) goto LAB_143ebceab;
    plVar18 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar18 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar5 == '\0')) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      goto LAB_143ebceab;
    }
    uVar7 = (**(code **)(*plVar18 + 0x110))(plVar18);
    lVar6 = FUN_144aff482(uVar7,(longlong *)(lVar23 + 8));
    *(longlong *)(lVar23 + 0x18) = lVar6;
    if (lVar6 == 0) goto LAB_143ebceab;
  }
  if ((((*(int *)((longlong)param_1 + 0x44) != 0) &&
       (uVar2 = *(uint *)(param_1 + 8), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) &&
     (((plVar18 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar18 != (longlong *)0x0 && ((int)plVar18[2] == *(int *)((longlong)param_1 + 0x44))) &&
      (((*(uint *)(plVar18 + 1) & 0x10200000) == 0 && (lVar23 = *plVar18, lVar23 != 0)))))) {
    plVar18 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1,0);
    if (plVar18 == (longlong *)0x0) {
      lVar6 = (**(code **)(*param_1 + 0x28))(param_1);
      if (lVar6 == 0) goto LAB_143ebceab;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x20));
      *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
      *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + 1;
      plVar18 = (longlong *)FUN_1458e34f0(lVar6);
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x20));
      lVar6 = param_1[6];
      if ((int)plVar18[1] == 0 || *(longlong *)(lVar6 + 8) != *plVar18) {
        *plVar18 = *(longlong *)(lVar6 + 8);
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        lVar6 = param_1[6];
      }
      lVar8 = *(longlong *)(lVar6 + 0x10);
      if (lVar8 == 0) {
        uVar7 = FUN_14656c012();
        lVar8 = FUN_14477b664(uVar7);
        *(longlong *)(lVar6 + 0x10) = lVar8;
      }
      lVar9 = *(longlong *)(lVar6 + 0x18);
      if (((lVar9 == 0) && (lVar9 = 0, lVar8 != 0)) && (*(longlong *)(lVar6 + 8) != 0)) {
        plVar10 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar10 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar5 == '\0')) {
          lVar9 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar10 + 0x110))(plVar10);
          lVar9 = FUN_144aff482(uVar7,(longlong *)(lVar6 + 8));
        }
        *(longlong *)(lVar6 + 0x18) = lVar9;
      }
      if ((lVar9 != plVar18[2]) || ((int)plVar18[3] == 0)) {
        plVar18[2] = lVar9;
        *(int *)(plVar18 + 3) = (int)plVar18[3] + 1;
      }
    }
    lVar6 = param_1[6];
    lVar8 = *(longlong *)(lVar6 + 0x10);
    if (lVar8 == 0) {
      uVar7 = FUN_14656c012();
      lVar8 = FUN_14477b664(uVar7);
      *(longlong *)(lVar6 + 0x10) = lVar8;
    }
    plVar10 = *(longlong **)(lVar6 + 0x18);
    if (((plVar10 == (longlong *)0x0) && (plVar10 = (longlong *)0x0, lVar8 != 0)) &&
       (*(longlong *)(lVar6 + 8) != 0)) {
      plVar10 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar10 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar5 == '\0')) {
        plVar10 = (longlong *)0x0;
      }
      else {
        uVar7 = (**(code **)(*plVar10 + 0x110))(plVar10);
        plVar10 = (longlong *)FUN_144aff482(uVar7,(longlong *)(lVar6 + 8));
      }
      *(longlong **)(lVar6 + 0x18) = plVar10;
    }
    if ((*(longlong *)(lVar23 + 0x88) == 0) || (*(longlong **)(lVar23 + 0x90) == (longlong *)0x0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)(**(longlong **)(lVar23 + 0x90) + 8))();
    }
    local_80 = (undefined8 *****)((ulonglong)local_80 & 0xffffffffffffff00);
    local_58[0] = 0;
    FUN_1456bb102(&local_80,uVar7);
    (**(code **)(*plVar10 + 0x18))(plVar10,plVar18,&local_80);
    FUN_1448173f8(local_58);
    if (((char)local_80 == '\x03') && (local_70 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    lVar6 = param_1[6];
    if ((longlong)*(int *)(lVar6 + 0x28) != 0) {
      puVar24 = *(undefined8 **)(lVar6 + 0x20);
      puVar22 = puVar24 + (longlong)*(int *)(lVar6 + 0x28) * 2;
      local_e0 = param_1 + 0x24;
      do {
        cVar5 = FUN_1418b9bea();
        if ((cVar5 != '\0') && (puVar24[1] != 0)) {
          local_b8 = *(undefined8 ******)(puVar24[1] + 0x18);
          FUN_1400021e4(&local_b8,&local_80);
          ppppppuVar19 = (undefined8 ******)&DAT_149dfb77a;
          if ((int)local_78 != 0) {
            ppppppuVar19 = (undefined8 ******)local_80;
          }
          FUN_1446f470e(&local_c8,ppppppuVar19,1);
          local_e8 = (undefined8 *****)CONCAT71(local_e8._1_7_,1);
          FUN_143ebdc9c(param_1,&local_c0,*puVar24,local_c8);
          if ((undefined8 ******)local_80 != (undefined8 ******)0x0) {
            FUN_1400020a8();
          }
          if ((int)param_1[0x1e] != *(int *)((longlong)param_1 + 0x11c)) {
            uVar2 = (uint)((ulonglong)local_c0 >> 0x10);
            uVar14 = (uint)local_c0 & 0xffff;
            plVar18 = (longlong *)param_1[0x25];
            if ((longlong *)param_1[0x25] == (longlong *)0x0) {
              plVar18 = local_e0;
            }
            iVar17 = *(int *)((longlong)plVar18 +
                             (ulonglong)
                             ((int)param_1[0x26] - 1U &
                             (int)((ulonglong)local_c0 >> 0x20) + ((uint)local_c0 << 0x10 | uVar14)
                             + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar14 >> 4)) * 4);
            if (iVar17 != -1) {
              lVar6 = param_1[0x1d];
              do {
                if (*(undefined8 *******)(lVar6 + (longlong)iVar17 * 0x18) ==
                    (undefined8 ******)local_c0) goto LAB_143ebd320;
                iVar17 = *(int *)(lVar6 + (longlong)iVar17 * 0x18 + 0x10);
              } while (iVar17 != -1);
            }
          }
          local_b8 = (undefined8 *****)FUN_14656f8c4;
          local_b0 = 0;
          FUN_14656f764(&local_80,param_1,&local_b8,&local_c0);
          FUN_1457ef27a(lVar23,&local_b8,puVar24[1],&local_80);
          if ((int)local_78 == 0) {
LAB_143ebd2ec:
            if ((undefined8 ******)local_80 != (undefined8 ******)0x0) {
              FUN_1400020a8();
            }
          }
          else if ((undefined8 ******)local_80 != (undefined8 ******)0x0) {
            (*(code *)**local_80)(local_80,0);
            FUN_1446efa72(&local_80,0,0,0x10);
            local_78 = (code *****)((ulonglong)local_78 & 0xffffffff00000000);
            goto LAB_143ebd2ec;
          }
          local_80 = &local_c0;
          local_78 = (code *****)&local_b8;
          FUN_1413f0b32(param_1 + 0x1d,local_cc,&local_80,0);
LAB_143ebd320:
          FUN_14108b31e(lVar23,&local_80);
          local_b8 = (undefined8 ******)0x0;
          local_98 = 0;
          local_90 = 0;
          local_88 = 0;
          local_e8 = local_c0;
          FUN_14656f8c4(param_1);
          if ((DAT_14c9a85d0 != (code *)0x0) && ((*DAT_14c9a85d0)(&local_b0), 0x18 < local_98)) {
            FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
          }
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_58[0] & 0xff) * 0x120));
          if (pcVar3 != (code *)0x0) {
            ppppppcVar15 = &local_78;
            if (0x18 < local_60) {
              ppppppcVar15 = (code ******)local_78;
            }
            (*pcVar3)(ppppppcVar15);
          }
          if (0x18 < local_60) {
            FUN_1400020a8(local_78);
          }
        }
        puVar24 = puVar24 + 2;
      } while (puVar24 != puVar22);
      lVar6 = param_1[6];
    }
    if ((longlong)*(int *)(lVar6 + 0x38) != 0) {
      puVar22 = *(undefined8 **)(lVar6 + 0x30);
      puVar24 = puVar22 + (longlong)*(int *)(lVar6 + 0x38) * 5;
      plVar18 = param_1 + 0x2e;
      local_e0 = (longlong *)(lVar23 + 0x48);
      local_d8 = plVar18;
      do {
        cVar5 = FUN_1418b9bea();
        if ((cVar5 != '\0') && (lVar6 = FUN_14105478e(puVar22 + 1), lVar6 != 0)) {
          local_e8 = (undefined8 *****)CONCAT71(local_e8._1_7_,1);
          FUN_143ebdc9c(param_1,&local_c0,*puVar22,puVar22[1]);
          if ((int)param_1[0x28] != *(int *)((longlong)param_1 + 0x16c)) {
            uVar2 = (uint)((ulonglong)local_c0 >> 0x10);
            uVar14 = (uint)local_c0 & 0xffff;
            plVar10 = (longlong *)param_1[0x2f];
            if ((longlong *)param_1[0x2f] == (longlong *)0x0) {
              plVar10 = plVar18;
            }
            iVar17 = *(int *)((longlong)plVar10 +
                             (ulonglong)
                             ((int)param_1[0x30] - 1U &
                             (int)((ulonglong)local_c0 >> 0x20) + ((uint)local_c0 << 0x10 | uVar14)
                             + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar14 >> 4)) * 4);
            if (iVar17 != -1) {
              lVar8 = param_1[0x27];
              do {
                lVar9 = (longlong)iVar17;
                ppuVar20 = (undefined8 **)(lVar9 * 3);
                if (*(undefined8 *******)(lVar8 + lVar9 * 0x18) == (undefined8 ******)local_c0)
                goto LAB_143ebd5d0;
                iVar17 = *(int *)(lVar8 + lVar9 * 0x18 + 0x10);
              } while (iVar17 != -1);
            }
          }
          local_b8 = (undefined8 *****)&LAB_140e490d6;
          local_b0 = 0;
          local_e8 = &local_c0;
          local_c8 = puVar22;
          FUN_14656f9da(&local_80,param_1,&local_b8,&local_c8);
          FUN_1413d7f08(local_e0,&local_b8,lVar6,&local_80);
          if ((int)local_78 == 0) {
LAB_143ebd588:
            if ((undefined8 ******)local_80 != (undefined8 ******)0x0) {
              FUN_1400020a8();
            }
          }
          else if ((undefined8 ******)local_80 != (undefined8 ******)0x0) {
            (*(code *)**local_80)(local_80,0);
            FUN_1446efa72(&local_80,0,0,0x10);
            local_78 = (code *****)((ulonglong)local_78 & 0xffffffff00000000);
            goto LAB_143ebd588;
          }
          local_80 = &local_c0;
          local_78 = (code *****)&local_b8;
          ppuVar20 = &local_c8;
          FUN_1413f0b32(param_1 + 0x27,ppuVar20,&local_80,0);
          plVar18 = local_d8;
LAB_143ebd5d0:
          if ((longlong)*(int *)(lVar23 + 0x50) != 0) {
            plVar10 = *(longlong **)(lVar23 + 0x48);
            lVar8 = (longlong)*(int *)(lVar23 + 0x50) * 0x90;
            do {
              if (*plVar10 == lVar6) {
                if (plVar10 != (longlong *)0x0) {
                  uVar21 = CONCAT71((int7)((ulonglong)ppuVar20 >> 8),(char)plVar10[0x11]) &
                           0xffffffffffffff01;
                  goto LAB_143ebd60b;
                }
                break;
              }
              plVar10 = plVar10 + 0x12;
              lVar8 = lVar8 + -0x90;
            } while (lVar8 != 0);
          }
          uVar21 = 0;
LAB_143ebd60b:
          FUN_140d124de(param_1,CONCAT71((int7)(uVar21 >> 8),(byte)uVar21 ^ *(byte *)(puVar22 + 4)),
                        local_c0,0);
        }
        puVar22 = puVar22 + 5;
      } while (puVar22 != puVar24);
      lVar6 = param_1[6];
    }
    if ((longlong)*(int *)(lVar6 + 0x58) != 0) {
      puVar22 = *(undefined8 **)(lVar6 + 0x50);
      puVar24 = puVar22 + (longlong)*(int *)(lVar6 + 0x58) * 5;
      local_e0 = param_1 + 0x3b;
      local_d8 = param_1 + 0x42;
      do {
        cVar5 = FUN_1418b9bea();
        if (cVar5 != '\0') {
          lVar6 = puVar22[2];
          if (lVar6 == 0) {
            uVar7 = FUN_14155b406();
            lVar6 = FUN_14477b664(uVar7);
            puVar22[2] = lVar6;
          }
          plVar18 = puVar22 + 1;
          lVar8 = puVar22[1];
          plVar10 = (longlong *)puVar22[3];
          if (plVar10 == (longlong *)0x0) {
            if (lVar6 != 0 && lVar8 != 0) {
              plVar10 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar10 == (longlong *)0x0) ||
                 (cVar5 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar5 == '\0')) {
                puVar22[3] = 0;
              }
              else {
                uVar7 = (**(code **)(*plVar10 + 0x110))(plVar10);
                plVar10 = (longlong *)FUN_144aff482(uVar7,plVar18);
                puVar22[3] = plVar10;
                if (plVar10 != (longlong *)0x0) {
                  lVar8 = *plVar18;
                  goto LAB_143ebd6b5;
                }
              }
            }
          }
          else {
LAB_143ebd6b5:
            local_e8 = (undefined8 *****)CONCAT71(local_e8._1_7_,1);
            FUN_143ebdc9c(param_1,&local_c0,*puVar22,lVar8);
            if ((int)param_1[0x3c] != *(int *)((longlong)param_1 + 0x20c)) {
              uVar2 = (uint)((ulonglong)local_c0 >> 0x10);
              uVar14 = (uint)local_c0 & 0xffff;
              plVar16 = (longlong *)param_1[0x43];
              if ((longlong *)param_1[0x43] == (longlong *)0x0) {
                plVar16 = local_d8;
              }
              iVar17 = *(int *)((longlong)plVar16 +
                               (ulonglong)
                               ((int)param_1[0x44] - 1U &
                               (int)((ulonglong)local_c0 >> 0x20) +
                               ((uint)local_c0 << 0x10 | uVar14) + (uVar2 << 0x13 | uVar2 & 0xffff)
                               + (uVar14 >> 4)) * 4);
              if (iVar17 != -1) {
                do {
                  if (*(undefined8 *******)(*local_e0 + (longlong)iVar17 * 0x18) ==
                      (undefined8 ******)local_c0) goto LAB_143ebd82c;
                  iVar17 = *(int *)(*local_e0 + (longlong)iVar17 * 0x18 + 0x10);
                } while (iVar17 != -1);
              }
            }
            local_b8 = (undefined8 *****)FUN_140d124aa;
            local_b0 = 0;
            local_e8 = &local_c0;
            local_c8 = puVar22;
            FUN_14656fb50(&local_80,param_1,&local_b8,&local_c8);
            FUN_14580e9f2(lVar23,&local_b8,plVar18,&local_80);
            if ((int)local_78 == 0) {
LAB_143ebd7e7:
              if ((undefined8 ******)local_80 != (undefined8 ******)0x0) {
                FUN_1400020a8();
              }
            }
            else if ((undefined8 ******)local_80 != (undefined8 ******)0x0) {
              (*(code *)**local_80)(local_80,0);
              FUN_1446efa72(&local_80,0,0,0x10);
              local_78 = (code *****)((ulonglong)local_78 & 0xffffffff00000000);
              goto LAB_143ebd7e7;
            }
            local_80 = &local_c0;
            local_78 = (code *****)&local_b8;
            FUN_1413f0b32(local_e0,&local_c8,&local_80,0);
LAB_143ebd82c:
            local_70 = (longlong *)0x0;
            uVar7 = FUN_14155b406();
            pppppcVar11 = (code *****)FUN_14477b664(uVar7);
            local_78 = pppppcVar11;
            pppppcVar12 = (code *****)FUN_14155b406();
            uVar7 = FUN_14155b406();
            FUN_1402d1bfa(&local_b8,uVar7,plVar10);
            pppppuVar4 = local_b8;
            if ((undefined8 ******)local_b8 != (undefined8 ******)0x0) {
              local_70 = (longlong *)0x0;
            }
            local_80 = local_b8;
            pppppcVar13 = (code *****)FUN_14155b406();
            if (pppppcVar12 == (code *****)0x0) {
LAB_143ebd8b9:
              pppppcVar13 = pppppcVar12;
            }
            else if (pppppcVar13 == (code *****)0x0) {
              pppppcVar13 = (code *****)0x0;
            }
            else if ((*(int *)(pppppcVar13 + 7) <= *(int *)(pppppcVar12 + 7)) &&
                    ((code *****)pppppcVar12[6][*(int *)(pppppcVar13 + 7)] == pppppcVar13 + 6))
            goto LAB_143ebd8b9;
            if (pppppcVar11 != pppppcVar13) {
              local_70 = (longlong *)0x0;
            }
            uVar7 = FUN_14477b664(pppppcVar13);
            local_78 = (code *****)FUN_14477b664(uVar7);
            if ((code ******)local_78 != (code ******)0x0 &&
                (undefined8 ******)pppppuVar4 != (undefined8 ******)0x0) {
              local_70 = plVar10;
            }
            uVar7 = FUN_140d137fe(lVar23,&local_80);
            FUN_140d124de(param_1,CONCAT71((int7)((ulonglong)uVar7 >> 8),
                                           (byte)uVar7 ^ *(byte *)(puVar22 + 4)) & 0xffffffff,
                          local_c0,0);
          }
        }
        puVar22 = puVar22 + 5;
      } while (puVar22 != puVar24);
    }
    if (((*(longlong *)(lVar23 + 0x88) != 0) && (*(longlong **)(lVar23 + 0x90) != (longlong *)0x0))
       && (local_e0 = (longlong *)(**(code **)(**(longlong **)(lVar23 + 0x90) + 0x10))(),
          local_e0 != (longlong *)0x0)) {
      lVar23 = (longlong)*(int *)(param_1[6] + 0x48);
      if (lVar23 != 0) {
        puVar24 = *(undefined8 **)(param_1[6] + 0x40);
        puVar22 = puVar24 + lVar23 * 4;
        plVar18 = param_1 + 0x38;
        local_d8 = plVar18;
        do {
          cVar5 = FUN_1418b9bea();
          if (cVar5 != '\0') {
            lVar23 = puVar24[2];
            if (lVar23 == 0) {
              uVar7 = FUN_145c05732();
              lVar23 = FUN_14477b664(uVar7);
              puVar24[2] = lVar23;
            }
            lVar6 = puVar24[1];
            lVar8 = puVar24[3];
            if (lVar8 == 0) {
              if (lVar23 != 0 && lVar6 != 0) {
                plVar10 = *(longlong **)(lVar23 + 0xb8);
                if ((plVar10 == (longlong *)0x0) ||
                   (cVar5 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar5 == '\0')) {
                  puVar24[3] = 0;
                }
                else {
                  uVar7 = (**(code **)(*plVar10 + 0x110))(plVar10);
                  lVar8 = FUN_144aff482(uVar7,puVar24 + 1);
                  puVar24[3] = lVar8;
                  if (lVar8 != 0) {
                    lVar6 = puVar24[1];
                    goto LAB_143ebda3f;
                  }
                }
              }
            }
            else {
LAB_143ebda3f:
              local_e8 = (undefined8 *****)CONCAT71(local_e8._1_7_,1);
              FUN_143ebdc9c(param_1,&local_c0,*puVar24,lVar6);
              if ((int)param_1[0x32] != *(int *)((longlong)param_1 + 0x1bc)) {
                uVar2 = (uint)((ulonglong)local_c0 >> 0x10);
                uVar14 = (uint)local_c0 & 0xffff;
                plVar10 = (longlong *)param_1[0x39];
                if ((longlong *)param_1[0x39] == (longlong *)0x0) {
                  plVar10 = plVar18;
                }
                iVar17 = *(int *)((longlong)plVar10 +
                                 (ulonglong)
                                 ((int)param_1[0x3a] - 1U &
                                 (int)((ulonglong)local_c0 >> 0x20) +
                                 ((uint)local_c0 << 0x10 | uVar14) +
                                 (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar14 >> 4)) * 4);
                if (iVar17 != -1) {
                  lVar23 = param_1[0x31];
                  do {
                    if (*(undefined8 *******)(lVar23 + (longlong)iVar17 * 0x18) ==
                        (undefined8 ******)local_c0) goto LAB_143ebdbb2;
                    iVar17 = *(int *)(lVar23 + (longlong)iVar17 * 0x18 + 0x10);
                  } while (iVar17 != -1);
                }
              }
              local_b8 = (undefined8 *****)&LAB_1458cffb8;
              local_b0 = 0;
              local_e8 = &local_c0;
              local_c8 = puVar24;
              FUN_14656fcc6(&local_80,param_1,&local_b8,&local_c8);
              FUN_1410615d0(local_e0,&local_b8,lVar8,&local_80);
              if ((int)local_78 == 0) {
LAB_143ebdb67:
                if ((undefined8 ******)local_80 != (undefined8 ******)0x0) {
                  FUN_1400020a8();
                }
              }
              else if ((undefined8 ******)local_80 != (undefined8 ******)0x0) {
                (*(code *)**local_80)(local_80,0);
                FUN_1446efa72(&local_80,0,0,0x10);
                local_78 = (code *****)((ulonglong)local_78 & 0xffffffff00000000);
                goto LAB_143ebdb67;
              }
              local_78 = (code *****)&local_b8;
              local_80 = &local_c0;
              FUN_1413f0b32(param_1 + 0x31,&local_c8,&local_80,0);
              plVar18 = local_d8;
LAB_143ebdbb2:
              FUN_140d124de(param_1,0,local_c0,1);
            }
          }
          puVar24 = puVar24 + 4;
        } while (puVar24 != puVar22);
      }
    }
  }
LAB_143ebceab:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ebdc9c FUN_143ebdc9c body=654 status=ok
// SIG undefined FUN_143ebdc9c(void)

longlong *
FUN_143ebdc9c(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,char param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = param_3;
  FUN_1400021e4(&local_58,&local_50);
  cVar4 = FUN_144a38768(&local_50,&DAT_149eca134,1,1);
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (cVar4 != '\0') {
    uVar10 = (uint)param_3;
    iVar13 = (int)((ulonglong)param_3 >> 0x20);
    uVar3 = (uint)((ulonglong)param_3 >> 0x10);
    local_68 = param_3;
    local_60 = param_4;
    if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
      uVar2 = (uint)((ulonglong)param_4 >> 0x10);
      uVar8 = (uint)param_4 & 0xffff;
      uVar14 = iVar13 + (uVar10 << 0x10 | uVar10 & 0xffff) +
               ((uVar10 & 0xffff) >> 4) + (uVar3 << 0x13 | uVar3 & 0xffff);
      lVar7 = param_1 + 0xd0;
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        lVar7 = *(longlong *)(param_1 + 0xd8);
      }
      iVar6 = *(int *)(lVar7 + (ulonglong)
                               (*(int *)(param_1 + 0xe0) - 1U &
                               (((uint)param_4 << 0x10 | uVar8) + (int)((ulonglong)param_4 >> 0x20)
                                + (uVar8 >> 4) + (uVar2 << 0x13 | uVar2 & 0xffff) + uVar14 * 0x40 +
                                (uVar14 >> 2) + 0x9e3779b9 ^ uVar14)) * 4);
      if (iVar6 != -1) {
        lVar7 = *(longlong *)(param_1 + 0x98);
        do {
          lVar9 = (longlong)iVar6 * 0x20;
          lVar1 = lVar7 + lVar9;
          if ((*(longlong *)(lVar7 + lVar9) == param_3) &&
             (*(longlong *)(lVar7 + 8 + lVar9) == param_4)) {
            if ((longlong *)(lVar1 + 0x10) != (longlong *)0x0 && lVar1 != 0) {
              *param_2 = *(longlong *)(lVar1 + 0x10);
              goto LAB_143ebde1c;
            }
            break;
          }
          iVar6 = *(int *)(lVar1 + 0x18);
        } while (iVar6 != -1);
      }
    }
    if (param_5 != '\0') {
      piVar5 = (int *)FUN_140dfb35a(param_1 + 0x48,
                                    (uVar10 << 0x10 | uVar10 & 0xffff) + iVar13 +
                                    (uVar3 << 0x13 | uVar3 & 0xffff) + ((uVar10 & 0xffff) >> 4),
                                    &local_58);
      iVar13 = *piVar5;
      *piVar5 = iVar13 + 1;
      FUN_1400021e4(&local_58,&local_78);
      puVar12 = &DAT_149dfb77a;
      if (local_70 != 0) {
        puVar12 = local_78;
      }
      FUN_140002266(&local_50,L"%s%i",puVar12,iVar13 + 1);
      plVar11 = (longlong *)&DAT_149dfb77a;
      if ((int)local_48 != 0) {
        plVar11 = local_50;
      }
      FUN_1446f470e(param_2,plVar11,1);
      if (local_50 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_50 = &local_68;
      local_48 = param_2;
      FUN_148a08f2a((longlong *)(param_1 + 0x98),&local_78);
      goto LAB_143ebde1c;
    }
  }
  *param_2 = param_3;
LAB_143ebde1c:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143ebe72a FUN_143ebe72a body=41 status=ok
// SIG undefined FUN_143ebe72a(void)

void FUN_143ebe72a(void)

{
  DAT_14cb93078 = 0;
  if (DAT_14cb93070 != 0) {
    FUN_1400020a8();
  }
  FUN_145d68a24();
  return;
}



// FUNCTION 143ebe758 FUN_143ebe758 body=1 status=ok
// SIG undefined FUN_143ebe758(void)

void FUN_143ebe758(void)

{
  return;
}



// FUNCTION 143ebe75a FUN_143ebe75a body=29 status=ok
// SIG undefined FUN_143ebe75a(void)

undefined8 FUN_143ebe75a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ebe778 FUN_143ebe778 body=55 status=ok
// SIG undefined FUN_143ebe778(void)

void FUN_143ebe778(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14656fe80(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 143ebe7b0 FUN_143ebe7b0 body=97 status=ok
// SIG undefined FUN_143ebe7b0(void)

void FUN_143ebe7b0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_2;
  if ((longlong)*(int *)(lVar2 + 0x80) != 0) {
    lVar3 = 0;
    do {
      if (*(char *)(*(longlong *)(lVar2 + 0x78) + lVar3) == *(char *)param_1[1]) {
        param_1 = (longlong *)*param_1;
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_14656ff06(param_1,iVar1);
        }
        *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
        return;
      }
      lVar3 = lVar3 + 1;
    } while (*(int *)(lVar2 + 0x80) != lVar3);
  }
  return;
}



// FUNCTION 143ebe820 FUN_143ebe820 body=1804 status=ok
// SIG undefined FUN_143ebe820(void)

void FUN_143ebe820(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [8];
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_2 + 0x18) != '\x01') goto LAB_143ebeda0;
  puVar13 = *(undefined4 **)(*(longlong *)*param_1 + 8);
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = &DAT_14c9485f0;
  }
  if (DAT_14c947fe0 == 0) {
    lVar7 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar7);
    DAT_14c947fe0 = lVar7;
  }
  FUN_140045924(DAT_14c947fe0,local_78,puVar13,1);
  lVar7 = DAT_14cb92ed0;
  if (DAT_14cb92ed0 == 0) goto LAB_143ebeda0;
  puVar13 = *(undefined4 **)(*(longlong *)*param_1 + 8);
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = &DAT_14c9485f0;
  }
  if (DAT_14c947fe0 == 0) {
    lVar8 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar8);
    DAT_14c947fe0 = lVar8;
  }
  FUN_140045924(DAT_14c947fe0,&local_88,puVar13,1);
  FUN_1446dcdd4(local_70,&local_88);
  FUN_144837462(lVar7,local_70);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  lVar7 = *(longlong *)(param_2 + 0x78);
  if (lVar7 == 0) {
    uVar6 = FUN_14106339a();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_2 + 0x78) = lVar7;
  }
  plVar11 = (longlong *)(param_2 + 0x70);
  lVar8 = *(longlong *)(param_2 + 0x80);
  if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*plVar11 != 0)) {
    plVar10 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar10 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar5 == '\0')) {
      lVar8 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar10 + 0x110))(plVar10);
      lVar8 = FUN_144aff482(uVar6,plVar11);
    }
    *(longlong *)(param_2 + 0x80) = lVar8;
  }
  lVar7 = *(longlong *)*param_1;
  if (lVar8 != lVar7) {
    iVar3 = *(int *)(lVar7 + 0x30);
    if ((longlong)iVar3 != 0) {
      lVar7 = *(longlong *)(lVar7 + 0x28);
      lVar14 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(lVar7 + lVar14) + 0x30);
        lVar9 = *(longlong *)(param_2 + 0x78);
        if (lVar9 == 0) {
          uVar6 = FUN_14106339a();
          lVar9 = FUN_14477b664(uVar6);
          *(longlong *)(param_2 + 0x78) = lVar9;
          lVar8 = *(longlong *)(param_2 + 0x80);
        }
        if (lVar8 == 0) {
          *(undefined8 *)(param_2 + 0x80) = 0;
          if (lVar9 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = 0;
            if (*(longlong *)(param_2 + 0x70) != 0) {
              plVar10 = *(longlong **)(lVar9 + 0xb8);
              if ((plVar10 == (longlong *)0x0) ||
                 (cVar5 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar5 == '\0')) {
                lVar8 = 0;
              }
              else {
                uVar6 = (**(code **)(*plVar10 + 0x110))(plVar10);
                lVar8 = FUN_144aff482(uVar6,plVar11);
              }
              *(longlong *)(param_2 + 0x80) = lVar8;
            }
          }
        }
        if (lVar8 == lVar4) goto LAB_143ebea4e;
        lVar14 = lVar14 + 8;
      } while ((longlong)iVar3 * 8 != lVar14);
    }
    goto LAB_143ebeda0;
  }
LAB_143ebea4e:
  lVar7 = *(longlong *)(param_2 + 0x50);
  if (lVar7 == 0) {
    uVar6 = FUN_1457d08e6();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_2 + 0x50) = lVar7;
  }
  plVar11 = (longlong *)(param_2 + 0x48);
  lVar8 = *(longlong *)(param_2 + 0x58);
  if (lVar8 == 0) {
    if ((lVar7 == 0) || (*plVar11 == 0)) goto LAB_143ebeda0;
    plVar10 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar10 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar5 == '\0')) {
      *(undefined8 *)(param_2 + 0x58) = 0;
      goto LAB_143ebeda0;
    }
    uVar6 = (**(code **)(*plVar10 + 0x110))(plVar10);
    lVar8 = FUN_144aff482(uVar6,plVar11);
    *(longlong *)(param_2 + 0x58) = lVar8;
    if (lVar8 == 0) goto LAB_143ebeda0;
    lVar7 = *(longlong *)(param_2 + 0x50);
  }
  if (lVar7 == 0) {
    uVar6 = FUN_1457d08e6();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_2 + 0x50) = lVar7;
    lVar8 = *(longlong *)(param_2 + 0x58);
    if (lVar8 != 0) goto LAB_143ebea75;
    plVar10 = (longlong *)0x0;
    if ((lVar7 != 0) && (*plVar11 != 0)) {
      plVar10 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar10 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar5 == '\0')) {
        lVar8 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar10 + 0x110))(plVar10);
        lVar8 = FUN_144aff482(uVar6,plVar11);
      }
      *(longlong *)(param_2 + 0x58) = lVar8;
      goto LAB_143ebea75;
    }
  }
  else {
LAB_143ebea75:
    plVar10 = (longlong *)0x0;
    if ((lVar8 != 0) && (DAT_14cb92f38 != 0)) {
      if ((*(longlong **)(lVar8 + 0x18) == (longlong *)0x0) ||
         (plVar10 = (longlong *)(**(code **)(**(longlong **)(lVar8 + 0x18) + 0xf8))(),
         plVar10 == (longlong *)0x0)) {
        plVar10 = (longlong *)0x0;
      }
      else {
        *(byte *)((longlong)plVar10 + 0x8c) = *(byte *)((longlong)plVar10 + 0x8c) | 2;
        puVar13 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar8 + 8) != (undefined4 *)0x0) {
          puVar13 = *(undefined4 **)(lVar8 + 8);
        }
        if (DAT_14c947fe0 == 0) {
          lVar7 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar7);
          DAT_14c947fe0 = lVar7;
        }
        FUN_140045924(DAT_14c947fe0,&local_88,puVar13,1);
        plVar10[3] = local_88;
        (**(code **)(*plVar10 + 8))(plVar10,lVar8 + 0x20);
      }
    }
  }
  plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_14b47b770;
  plVar11[2] = (longlong)plVar10;
  if (plVar10 == (longlong *)0x0) {
    if (plVar11 == (longlong *)0x0) goto LAB_143ebeda0;
  }
  else {
    if (((plVar10[1] == 0) || (plVar10[2] == 0)) || (*(int *)(plVar10[2] + 8) < 1)) {
      if (plVar11 == (longlong *)0x0) {
        plVar10[1] = (longlong)plVar10;
        plVar12 = (longlong *)plVar10[2];
        if (plVar12 != (longlong *)0x0) {
LAB_143ebec17:
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))();
          }
          plVar10[2] = (longlong)plVar11;
          if (plVar11 != (longlong *)0x0) goto LAB_143ebec2b;
        }
      }
      else {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        plVar10[1] = (longlong)plVar10;
        if ((longlong *)plVar10[2] != plVar11) {
          LOCK();
          *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
          UNLOCK();
          plVar12 = (longlong *)plVar10[2];
          if (plVar12 != (longlong *)0x0) goto LAB_143ebec17;
          plVar10[2] = (longlong)plVar11;
        }
LAB_143ebec2b:
        LOCK();
        plVar12 = plVar11 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
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
    plVar10[0x35] = param_2;
    *(uint *)((longlong)plVar10 + 0x8c) =
         *(uint *)((longlong)plVar10 + 0x8c) & 0xfffffffe | (uint)*(byte *)(param_2 + 0x18);
    if (plVar10 != (longlong *)&DAT_14c9a11a8) {
      lVar7 = *(longlong *)(param_2 + 0x228);
      lVar8 = *(longlong *)(param_2 + 0x230);
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      plVar12 = (longlong *)plVar10[0x2d];
      plVar10[0x2c] = lVar7;
      plVar10[0x2d] = lVar8;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar12 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
    }
    cVar5 = *(char *)(param_2 + 0x1b1);
    *(char *)(plVar10 + 0x18) = cVar5;
    *(char *)(param_2 + 0x1b1) = cVar5 + '\x01';
    FUN_1418b7d7a(plVar10,&local_88);
    if (plVar10 + 4 == &local_88) {
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (plVar10[4] != 0) {
        FUN_1400020a8();
      }
      plVar10[4] = local_88;
      local_88 = 0;
      *(undefined4 *)(plVar10 + 5) = local_80;
      *(undefined4 *)((longlong)plVar10 + 0x2c) = local_7c;
    }
    plVar12 = (longlong *)param_1[1];
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    iVar3 = (int)plVar12[1];
    *(uint *)(plVar12 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)plVar12 + 0xc) < iVar3 + 1U) {
      FUN_14656ff8c(plVar12,iVar3);
    }
    lVar7 = *plVar12;
    *(longlong **)(lVar7 + (longlong)iVar3 * 0x10) = plVar10;
    *(longlong **)(lVar7 + 8 + (longlong)iVar3 * 0x10) = plVar11;
    if (plVar11 == (longlong *)0x0) goto LAB_143ebeda0;
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar11 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  LOCK();
  plVar10 = plVar11 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
LAB_143ebeda0:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ebef2e FUN_143ebef2e body=24 status=ok
// SIG undefined FUN_143ebef2e(void)

void FUN_143ebef2e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ebef42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 143ebef4b FUN_143ebef4b body=3504 status=ok
// SIG undefined FUN_143ebef4b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ebef4b(void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined2 *local_98;
  int local_90;
  char *local_88;
  int local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined **local_68;
  undefined1 *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = "AssetRegistry";
  local_80 = 0xd;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92d78 = (ulonglong)uVar2;
  local_88 = "KBM";
  local_80 = 3;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cb92d80 = (ulonglong)uVar2;
  local_88 = "DualShock4";
  local_80 = 10;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cb92d88 = (ulonglong)uVar2;
  local_88 = "DualSense";
  local_80 = 9;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cb92d90 = (ulonglong)uVar2;
  local_88 = "SteamController";
  local_80 = 0xf;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92d98 = (ulonglong)uVar2;
  local_88 = "XInputController";
  local_80 = 0x10;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92da0 = (ulonglong)uVar2;
  local_88 = "Npad_Pro";
  local_80 = 8;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cb92da8 = (ulonglong)uVar2;
  local_88 = "Npad_DualJoyCon";
  local_80 = 0xf;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92db0 = (ulonglong)uVar2;
  local_88 = "Npad_LeftJoyCon";
  local_80 = 0xf;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92db8 = (ulonglong)uVar2;
  local_88 = "Npad_RightJoyCon";
  local_80 = 0x10;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92dc0 = (ulonglong)uVar2;
  local_88 = "Npad_Handheld";
  local_80 = 0xd;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92dc8 = (ulonglong)uVar2;
  local_88 = "Npad_DualJoyConMouse";
  local_80 = 0x14;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92dd0 = (ulonglong)uVar2;
  local_88 = "Npad_LeftJoyConMouse";
  local_80 = 0x14;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92dd8 = (ulonglong)uVar2;
  local_88 = "Npad_RightJoyConMouse";
  local_80 = 0x15;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92de0 = (ulonglong)uVar2;
  local_88 = (char *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  local_80 = 2;
  *(undefined ***)local_88 = &PTR_LAB_14acb7d20;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_88 + 0x10) = lVar5;
  *(undefined ***)local_88 = &PTR_FUN_14acb7cb0;
  *(code **)(local_88 + 0x18) = FUN_148a07c32;
  FUN_1459687d9(&local_98);
  puVar7 = local_98;
  if (local_90 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  local_a8 = 0;
  FUN_141819a96(&DAT_14cb92de8,L"gbx.ui.input.changeinputdevice",puVar7,&local_88);
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_80 == 0) {
LAB_143ebf2fe:
    if (local_88 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_143ebf2fe;
  }
  atexit(FUN_143ebc280);
  local_88 = (char *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  local_80 = 2;
  *(undefined ***)local_88 = &PTR_LAB_14acb7d20;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_88 + 0x10) = lVar5;
  *(undefined ***)local_88 = &PTR_FUN_14acb7cb0;
  *(code **)(local_88 + 0x18) = FUN_148a07e5c;
  local_a8 = 0;
  FUN_141819a96(&DAT_14cb92df8,L"gbx.ui.input.autochangedevice",
                L"Enable/Disable auto device change. Args [Enabled = False]",&local_88);
  if (local_80 != 0) {
    if (local_88 == (char *)0x0) goto LAB_143ebf3ea;
    (*(code *)**(undefined8 **)local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80 = 0;
  }
  if (local_88 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143ebf3ea:
  atexit(FUN_143ebc2c5);
  _DAT_14cb92e10 = &LAB_143ebc30a;
  _DAT_14cb92e18 = 0x43968000;
  DAT_14cb92e1c = 1;
  DAT_14cb92e08 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb92e08;
  atexit((_func_5014 *)&LAB_143ebc30f);
  local_88 = "parent";
  local_80 = 6;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92e28 = (ulonglong)uVar2;
  local_88 = "path";
  local_80 = 4;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92e30 = (ulonglong)uVar2;
  local_88 = "buildcontentpath";
  local_80 = 0x10;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92e38 = (ulonglong)uVar2;
  _DAT_14cb92e48 = &LAB_143ebc343;
  _DAT_14cb92e50 = 0x43988000;
  DAT_14cb92e54 = 1;
  DAT_14cb92e40 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb92e40;
  atexit((_func_5014 *)&LAB_143ebc348);
  local_88 = "parent";
  local_80 = 6;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92e60 = (ulonglong)uVar2;
  local_88 = "abstract";
  local_80 = 8;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92e68 = (ulonglong)uVar2;
  local_88 = "inactive_behavior";
  local_80 = 0x11;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92e70 = (ulonglong)uVar2;
  local_88 = "page";
  local_80 = 4;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92e78 = (ulonglong)uVar2;
  local_88 = "curve";
  local_80 = 5;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92e80 = (ulonglong)uVar2;
  local_88 = "overlay";
  local_80 = 7;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92e88 = (ulonglong)uVar2;
  local_88 = "use_viewport";
  local_80 = 0xc;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92e90 = (ulonglong)uVar2;
  local_88 = "suspend";
  local_80 = 7;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92e98 = (ulonglong)uVar2;
  local_88 = "suspend";
  local_80 = 7;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92ea0 = (ulonglong)uVar2;
  local_88 = "display_order";
  local_80 = 0xd;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92ea8 = (ulonglong)uVar2;
  local_88 = "preload";
  local_80 = 7;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92eb0 = (ulonglong)uVar2;
  _DAT_14cb92ec0 = &LAB_143ebc37c;
  _DAT_14cb92ec8 = 0x43998000;
  DAT_14cb92ecc = 1;
  DAT_14cb92eb8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb92eb8;
  atexit((_func_5014 *)&LAB_143ebc381);
  local_88 = "state_remove_primary";
  local_80 = 0x14;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cb92ed8 = (ulonglong)uVar2;
  local_88 = "state_add_primary";
  local_80 = 0x11;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cb92ee0 = (ulonglong)uVar2;
  local_88 = "state_add";
  local_80 = 9;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cb92ee8 = (ulonglong)uVar2;
  local_88 = "state_rem";
  local_80 = 9;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cb92ef0 = (ulonglong)uVar2;
  local_88 = "set_menu_state";
  local_80 = 0xe;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cb92ef8 = (ulonglong)uVar2;
  local_88 = "set_active_options";
  local_80 = 0x12;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cb92f00 = (ulonglong)uVar2;
  local_88 = "parent";
  local_80 = 6;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92f08 = (ulonglong)uVar2;
  local_88 = "class";
  local_80 = 5;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92f10 = (ulonglong)uVar2;
  local_88 = "abstract";
  local_80 = 8;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92f18 = (ulonglong)uVar2;
  _DAT_14cb92f28 = &LAB_143ebc84d;
  _DAT_14cb92f30 = 0x43978000;
  DAT_14cb92f34 = 1;
  DAT_14cb92f20 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb92f20;
  atexit((_func_5014 *)&LAB_143ebc852);
  local_88 = "parent";
  local_80 = 6;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92f40 = (ulonglong)uVar2;
  local_88 = "require_tags";
  local_80 = 0xc;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92f48 = (ulonglong)uVar2;
  local_88 = "reject_tags";
  local_80 = 0xb;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92f50 = (ulonglong)uVar2;
  local_88 = "hide_tags";
  local_80 = 9;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92f58 = (ulonglong)uVar2;
  local_88 = "tag_aggregation";
  local_80 = 0xf;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92f60 = (ulonglong)uVar2;
  local_88 = "require_gameplaytags";
  local_80 = 0x14;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92f68 = (ulonglong)uVar2;
  local_88 = "reject_gameplaytags";
  local_80 = 0x13;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92f70 = (ulonglong)uVar2;
  local_88 = "hide_gameplaytags";
  local_80 = 0x11;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92f78 = (ulonglong)uVar2;
  local_88 = "params";
  local_80 = 6;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92f80 = (ulonglong)uVar2;
  local_88 = "alts";
  local_80 = 4;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92f88 = (ulonglong)uVar2;
  local_88 = "view";
  local_80 = 4;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92f90 = (ulonglong)uVar2;
  local_88 = "layer";
  local_80 = 5;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb92f98 = (ulonglong)uVar2;
  _DAT_14cb92fa8 = &LAB_143ebcdc0;
  _DAT_14cb92fb0 = 0x43970000;
  DAT_14cb92fb4 = 1;
  DAT_14cb92fa0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb92fa0;
  atexit((_func_5014 *)&LAB_143ebcdc5);
  DAT_14cb92fc0 = (undefined8 *)0x0;
  _DAT_14cb92fc8 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0x4000,0);
  lVar6 = 0x7f;
  puVar1 = puVar3;
  do {
    puVar4 = puVar1 + 0x10;
    *puVar1 = puVar4;
    lVar6 = lVar6 + -1;
    puVar1 = puVar4;
  } while (lVar6 != 0);
  *puVar4 = DAT_14cb92fc0;
  _DAT_14cb92fc8 = _DAT_14cb92fc8 + 0x80;
  _DAT_14cb93010 = &LAB_143ebe6f1;
  _DAT_14cb93018 = 0x439b0ccd;
  DAT_14cb9301c = 1;
  DAT_14cb93008 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb93008;
  DAT_14cb92fc0 = puVar3;
  atexit((_func_5014 *)&LAB_143ebe6f6);
  DAT_14cb93088 = 0;
  _DAT_14cb93090 = 0;
  local_78 = 0;
  local_68 = &PTR_LAB_14a1795c0;
  local_60 = &LAB_143ebef46;
  local_88 = &DAT_14011fc1e;
  FUN_146102704();
  atexit((_func_5014 *)&LAB_143ebe753);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ebfcfc FUN_143ebfcfc body=55 status=ok
// SIG undefined FUN_143ebfcfc(void)

void FUN_143ebfcfc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93218 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93218 = FUN_14171c317(FUN_14657065d,uVar1,L"EHideWeaponNotifyOption");
  }
  return;
}



// FUNCTION 143ebfd33 FUN_143ebfd33 body=55 status=ok
// SIG undefined FUN_143ebfd33(void)

void FUN_143ebfd33(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93308 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93308 = FUN_14171c317(FUN_146570a68,uVar1,L"EWeaponActionChannel");
  }
  return;
}



// FUNCTION 143ebfd6a FUN_143ebfd6a body=47 status=ok
// SIG undefined FUN_143ebfd6a(void)

longlong FUN_143ebfd6a(void)

{
  if (DAT_14cb93320 == 0) {
    FUN_14000fc22(&DAT_14cb93320,&PTR_FUN_14b47ed50);
  }
  return DAT_14cb93320;
}



// FUNCTION 143ebfe16 FUN_143ebfe16 body=322 status=ok
// SIG undefined FUN_143ebfe16(void)

void FUN_143ebfe16(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x16) = 4;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x17) = 3;
  *(char *)(param_1 + 0x18) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1d) = 4;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 3;
  *(char *)(param_1 + 0x1f) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x102) = 0;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  return;
}



// FUNCTION 143ebff82 FUN_143ebff82 body=57 status=ok
// SIG undefined FUN_143ebff82(void)

void FUN_143ebff82(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93278 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93278 = FUN_140002ddd(FUN_1465707f1,uVar1,L"CameraModeBehavior_WeaponLook");
  }
  return;
}



// FUNCTION 143ec0002 FUN_143ec0002 body=162 status=ok
// SIG undefined FUN_143ec0002(void)

void FUN_143ec0002(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,200);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x1a] = 0;
  *param_2 = &PTR_FUN_14b4845c0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}


