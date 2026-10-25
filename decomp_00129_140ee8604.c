// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140ee8604 FUN_140ee8604 body=57 status=ok
// SIG undefined FUN_140ee8604(void)

void FUN_140ee8604(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0198 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0198 = FUN_140002ddd(FUN_1465a8925,uVar1,L"CommandRingBodySettings");
  }
  return;
}



// FUNCTION 140ee863e FUN_140ee863e body=2421 status=ok
// SIG undefined FUN_140ee863e(void)

void FUN_140ee863e(longlong *param_1,longlong *param_2,code *param_3)

{
  int *piVar1;
  code cVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  code *local_88;
  longlong *plStack_80;
  wchar_t awStack_78 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar5 = param_1 + -0x746;
  if (param_2 != (longlong *)0x0) {
    FUN_1401073f6(param_2 + 0x13b,plVar5);
    if ((char)param_1[-0x717] == '\x03') {
      (**(code **)(*param_2 + 0x330))(param_2,0);
      FUN_1401073f6(param_2 + 0x142,plVar5);
    }
    if (DAT_14cbbd498 == 0) {
      local_c0 = &local_88;
      local_88 = FUN_140940982;
      local_b0 = FUN_14081d0ea;
      local_b8 = &LAB_146572ba2;
      local_c8 = &LAB_148ca13ba;
      local_d0 = &LAB_140e51436;
      local_d8 = L"Engine";
      local_e0 = 0;
      local_e8 = 0x10000004;
      local_f0 = 8;
      local_f8 = 0x1068;
      FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
    }
    if (((*(int *)(DAT_14cbbd498 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) ==
         DAT_14cbbd498 + 0x30)) && (*(char *)((longlong)param_2 + 0xf69) != '\0')) {
      *(undefined1 *)((longlong)param_2 + 0xf69) = 0;
      FUN_146075b90(param_2);
    }
  }
  FUN_140ee8fd0(param_1 + 0x4b4,param_3,param_2);
  cVar7 = (**(code **)(*param_1 + 0x70))(param_1);
  local_a0 = param_1 + 0x4d7;
  uVar4 = *(uint *)(param_1 + 0x4ec);
  if (param_3 != (code *)0x0) {
    if (0 < (int)uVar4) {
      plVar12 = (longlong *)(param_1[0x4eb] + 0x28);
      uVar15 = 0;
      do {
        if (((code *)plVar12[-1] == param_3) || ((code *)*plVar12 == param_3)) {
          if ((int)uVar15 != 0x7fffffff) goto LAB_140ee8781;
          break;
        }
        uVar15 = uVar15 + 1;
        plVar12 = plVar12 + 0x2e;
      } while (uVar4 != uVar15);
    }
    uVar15 = 0;
LAB_140ee8781:
    FUN_140ee91e4(&local_90);
    FUN_140ee9348(param_3 + 0x9d8,plVar5,local_90);
    cVar2 = param_3[0xd35];
    if (cVar7 != '\0') {
      if ((param_2 != (longlong *)0x0) && (*(char *)((longlong)param_2 + 0xd46) != '\x01')) {
        FUN_140fb6342(param_2,1);
      }
      FUN_140ee959c(local_a0,uVar15 & 0xffffffff);
      cVar2 = (code)0x1;
    }
    if (((char)param_1[-0x717] == '\x03') && (lVar9 = FUN_1447210f0(plVar5), lVar9 != 0)) {
      FUN_140ee97ae(lVar9);
    }
    FUN_140eeb26e(param_3,plVar5,uVar15 & 0xffffffff,cVar2);
    plVar12 = (longlong *)param_1[-0x6ce];
    if (plVar12 == (longlong *)0x0) {
LAB_140ee87ff:
      cVar7 = '\0';
    }
    else {
      if (DAT_14caf9cd0 == 0) {
        local_c0 = &local_88;
        local_88 = FUN_141030f22;
        local_b0 = FUN_14081d0ea;
        local_b8 = &LAB_1463c0cc2;
        local_c8 = &LAB_147c9db5b;
        local_d0 = &LAB_1463f9c44;
        local_d8 = L"Game";
        local_e0 = 0x2000000000;
        local_e8 = 0x10000004;
        local_f0 = 8;
        local_f8 = 0x958;
        FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
      }
      if ((*(int *)(plVar12[2] + 0x38) < *(int *)(DAT_14caf9cd0 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) !=
          DAT_14caf9cd0 + 0x30)) goto LAB_140ee87ff;
      cVar7 = (**(code **)(*plVar12 + 0x6c8))(plVar12);
      cVar7 = cVar7 * '\x02';
    }
    FUN_140ee9156(param_3,cVar7);
    FUN_140e17250(param_3,(char)param_1[0x509]);
    if (*(char *)((longlong)param_1 + 0x28cb) != '\0') {
      FUN_146075b2a(plVar5);
    }
    if ((char)param_1[-0x717] == '\x03') {
      (**(code **)(*(longlong *)param_3 + 0x330))(param_3,(char)param_1[0x504]);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cbc1ff0) && (FUN_144b3d300(&DAT_14cbc1ff0), DAT_14cbc1ff0 == -1))
      {
        builtin_wcsncpy(awStack_78 + 0x10,L"fects",6);
        builtin_wcsncpy(awStack_78,L"eaponAttributeEf",0x10);
        local_88 = (code *)0x72006600650052;
        plStack_80 = (longlong *)0x57006800730065;
        FUN_1446f470e(&DAT_14cbc1fe8,&local_88,1);
        _Init_thread_footer(&DAT_14cbc1ff0);
      }
      local_88 = FUN_14115e5f6;
      plStack_80 = (longlong *)((ulonglong)plStack_80 & 0xffffffff00000000);
      FUN_140f24416(param_3 + 0xa10,plVar5,&local_88,DAT_14cbc1fe8);
      FUN_14115e5f6(plVar5);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cbc2000) && (FUN_144b3d300(&DAT_14cbc2000), DAT_14cbc2000 == -1))
      {
        builtin_wcsncpy(awStack_78,L"SwitchedMode",0xd);
        local_88 = (code *)0x6f004e006e004f;
        plStack_80 = (longlong *)0x79006600690074;
        FUN_1446f470e(&DAT_14cbc1ff8,&local_88,1);
        _Init_thread_footer(&DAT_14cbc2000);
      }
      local_88 = FUN_148ccd82c;
      plStack_80 = (longlong *)((ulonglong)plStack_80 & 0xffffffff00000000);
      FUN_140f24416(param_3 + 0xa10,plVar5,&local_88,DAT_14cbc1ff8);
    }
    FUN_140ee9296(&local_98);
    FUN_140ee9348(param_3 + 0x9a8,plVar5,local_98);
    FUN_140ee98f6(param_2,0);
    FUN_140ee98f6(param_3,1);
    goto LAB_140ee886b;
  }
  if (param_2 == (longlong *)0x0) {
LAB_140ee86f6:
    uVar13 = 0;
LAB_140ee86f8:
    if ((int)uVar4 <= (int)uVar13) goto LAB_140ee8732;
    lVar9 = *(longlong *)(param_1[0x4eb] + 0x28 + (uVar13 & 0xffffffff) * 0x170);
    if ((DAT_14c950c29 != '\x01') || (lVar9 == 0)) {
      uVar15 = 0x7fffffff;
      if (lVar9 != 0) goto LAB_140ee886b;
      goto LAB_140ee8732;
    }
    FUN_1456cec3c();
  }
  else {
    if (0 < (int)uVar4) {
      plVar12 = (longlong *)(param_1[0x4eb] + 0x28);
      uVar13 = 0;
      do {
        if (((longlong *)plVar12[-1] == param_2) || ((longlong *)*plVar12 == param_2)) {
          if ((int)uVar13 != 0x7fffffff) {
            if ((int)uVar13 < 0) goto LAB_140ee8732;
            goto LAB_140ee86f8;
          }
          break;
        }
        uVar13 = uVar13 + 1;
        plVar12 = plVar12 + 0x2e;
      } while (uVar4 != uVar13);
      goto LAB_140ee86f6;
    }
    uVar13 = 0;
LAB_140ee8732:
    FUN_140ee959c(local_a0,uVar13);
  }
  uVar15 = 0x7fffffff;
LAB_140ee886b:
  lVar9 = param_1[-0x6ce];
  if (lVar9 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_c0 = &local_88;
      local_88 = FUN_141030f22;
      local_b0 = FUN_14081d0ea;
      local_b8 = &LAB_1459f2e4c;
      local_c8 = &LAB_148c39de3;
      local_d0 = &LAB_1457a9eb2;
      local_d8 = L"Game";
      local_e0 = 0;
      local_e8 = 0x10000004;
      local_f0 = 0x10;
      local_f8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      FUN_140eeb04a(lVar9,param_3);
      if (param_3 == (code *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = (**(code **)(*(longlong *)param_3 + 0x860))(param_3);
      }
      FUN_140ee9c88(lVar9,uVar11);
    }
  }
  if (0 < (int)param_1[0x77a]) {
    plVar12 = param_1 + 0x777;
    FUN_1406c5554(plVar12,plVar5,param_3);
    FUN_1406c6e60(plVar12);
    if ((char)param_1[0x78c] == '\x01') {
      FUN_1405ea3a2(plVar12,param_1 + 0x791,0);
      *(undefined2 *)(param_1 + 0x78c) = 0x100;
    }
  }
  local_88 = param_3;
  plStack_80 = param_2;
  FUN_1447cd2ec(param_1 + 0x4b2);
  FUN_140ee8fd0(param_1 + 0x4e8,param_3,param_2);
  iVar14 = (int)uVar15;
  FUN_140ee9f0e(param_1 + 0x46a,param_3,param_2,uVar15 & 0xffffffff);
  FUN_140ee907e(param_1 + 0x6d4,param_3,param_2);
  if ((char)param_1[-0x717] == '\x03') {
    FUN_1447f69b6(param_1 + 0x3be);
  }
  if (param_3 != (code *)0x0) {
    plVar12 = param_1 + 0x26;
    cVar7 = (**(code **)(param_1[0x26] + 0x48))(plVar12,1);
    cVar8 = (**(code **)(param_1[-0x746] + 0x700))(plVar5);
    if (cVar8 != '\0') {
      if (((-1 < iVar14) && (iVar14 < (int)param_1[0x4ec])) &&
         ((*(byte *)(param_1[0x4eb] + 0x60 + (uVar15 & 0xffffffff) * 0x170) & 1) != 0)) {
        FUN_140dc8f42(local_a0,uVar15 & 0xffffffff);
      }
      cVar8 = (**(code **)(*plVar12 + 0x58))(plVar12);
      if (cVar8 != '\0') {
        (**(code **)(*plVar12 + 0x68))(plVar12);
      }
    }
    if (cVar7 == '\x01' && iVar14 == 0) {
      lVar9 = (**(code **)(*plVar12 + 0x20))(plVar12);
      uVar3 = *(undefined1 *)(lVar9 + 1);
      puVar10 = (undefined1 *)(**(code **)(*plVar12 + 0x20))(plVar12);
      (**(code **)(*(longlong *)param_3 + 0x8b0))
                (param_3,*puVar10,CONCAT71((int7)((ulonglong)plVar5 >> 8),uVar3) & 0xffffffff);
    }
  }
  plVar5 = (longlong *)param_1[0x776];
  if (plVar5 != (longlong *)0x0) {
    iVar14 = (int)plVar5[1];
    do {
      if (iVar14 == 0) goto LAB_140ee8906;
      LOCK();
      iVar6 = (int)plVar5[1];
      bVar16 = iVar14 == iVar6;
      if (bVar16) {
        *(int *)(plVar5 + 1) = iVar14 + 1;
        iVar6 = iVar14;
      }
      iVar14 = iVar6;
      UNLOCK();
    } while (!bVar16);
    if (param_1[0x775] != 0) {
      FUN_140eeb9a0(param_1[0x775],param_3);
    }
    LOCK();
    plVar12 = plVar5 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_140ee8906:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ee8fd0 FUN_140ee8fd0 body=173 status=ok
// SIG undefined FUN_140ee8fd0(void)

void FUN_140ee8fd0(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_140ee9067;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140ee9067:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140ee907e FUN_140ee907e body=216 status=ok
// SIG undefined FUN_140ee907e(void)

void FUN_140ee907e(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  *(bool *)(param_1 + 0x81) = param_2 != 0;
  if (0 < *(int *)(param_1 + 0x84)) {
    if (param_3 != 0) {
      FUN_1457c4a36(param_1,param_3);
    }
    if (param_2 != 0) {
      FUN_1457c494e(param_1,param_2);
    }
  }
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar2 = (longlong)*(int *)(param_1 + 0x10) * 0x160;
    do {
      if (((param_3 != 0) && (*(char *)(lVar1 + 0x157) == '\x01')) &&
         (*(char *)(lVar1 + 0x13) == 'E')) {
        FUN_140898514(lVar1 + 0xc0,0);
        *(undefined1 *)(lVar1 + 0x157) = 0;
      }
      if (((param_2 != 0) && (*(char *)(lVar1 + 0x157) == '\0')) && (*(char *)(lVar1 + 0x12) == 'E')
         ) {
        FUN_140eebb3c(param_1);
      }
      lVar1 = lVar1 + 0x160;
      lVar2 = lVar2 + -0x160;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 140ee9156 FUN_140ee9156 body=142 status=ok
// SIG undefined FUN_140ee9156(void)

void FUN_140ee9156(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0xd10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd08);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (*(char *)(lVar3 + 100) != param_2) {
        *(char *)(lVar3 + 100) = param_2;
        FUN_140d90e68(lVar3,0);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0xd20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd18);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (*(char *)(lVar3 + 100) != param_2) {
        *(char *)(lVar3 + 100) = param_2;
        FUN_140d90e68(lVar3,0);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 140ee91e4 FUN_140ee91e4 body=176 status=ok
// SIG undefined FUN_140ee91e4(void)

undefined8 * FUN_140ee91e4(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc2030) {
    FUN_144b3d300(&DAT_14cbc2030);
    if (DAT_14cbc2030 == -1) {
      builtin_wcsncpy(local_38 + 10,L"own",4);
      builtin_wcsncpy(local_38,L"WeaponPutD",10);
      FUN_1446f470e(&DAT_14cbc2028,local_38,1);
      _Init_thread_footer(&DAT_14cbc2030);
    }
  }
  *param_1 = DAT_14cbc2028;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ee9296 FUN_140ee9296 body=176 status=ok
// SIG undefined FUN_140ee9296(void)

undefined8 * FUN_140ee9296(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc203c) {
    FUN_144b3d300(&DAT_14cbc203c);
    if (DAT_14cbc203c == -1) {
      builtin_wcsncpy(local_38,L"WeaponEquipped",0xf);
      FUN_1446f470e(&DAT_14cbc2034,local_38,1);
      _Init_thread_footer(&DAT_14cbc203c);
    }
  }
  *param_1 = DAT_14cbc2034;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ee9348 FUN_140ee9348 body=595 status=ok
// SIG undefined FUN_140ee9348(void)

void FUN_140ee9348(longlong *param_1,longlong param_2,longlong param_3)

{
  uint *_Dst;
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    uVar5 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar3 = *(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar9 + 0x10);
      bVar10 = uVar3 == 0;
      if (bVar10) {
        *(uint *)(lVar9 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar10) {
        uVar3 = uVar6;
      }
    }
    uVar5 = (ulonglong)uVar3;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else if (uVar3 == 0) {
      uVar5 = 0;
    }
    else if ((((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) &&
             (plVar4 = (longlong *)
                       ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
             plVar4 != (longlong *)0x0)) &&
            (((*(uint *)(plVar4 + 2) == uVar3 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
             (*plVar4 != 0)))) {
      FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),param_3);
    }
  }
  local_48 = (ulonglong)uVar8 | uVar5 << 0x20;
  local_40 = param_3;
  FUN_1403350f6(param_1);
  iVar2 = (int)param_1[1];
  if (0 < iVar2) {
    lVar9 = 0;
    bVar10 = false;
    do {
      while( true ) {
        lVar1 = *param_1;
        _Dst = (uint *)(lVar1 + lVar9 * 0x10);
        if (((*(longlong *)(lVar1 + 8 + lVar9 * 0x10) != 0) && (_Dst[1] != 0)) &&
           ((uVar8 = *_Dst, -1 < (int)uVar8 &&
            (((((int)uVar8 < DAT_14c9647dc &&
               (plVar4 = (longlong *)
                         ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
               plVar4 != (longlong *)0x0)) && (*(uint *)(plVar4 + 2) == _Dst[1])) &&
             (((*(uint *)(plVar4 + 1) >> 0x1c & 1) == 0 && (*plVar4 != 0)))))))) break;
        iVar7 = ~(uint)lVar9 + iVar2;
        if (iVar7 != 0) {
          if (0 < iVar7) {
            iVar7 = 1;
          }
          memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar7) * 0x10),(longlong)iVar7 << 4);
          iVar2 = (int)param_1[1];
        }
        iVar2 = iVar2 + -1;
        *(int *)(param_1 + 1) = iVar2;
        bVar10 = true;
        if (iVar2 <= lVar9) goto LAB_140ee953d;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar2);
    if (bVar10) {
LAB_140ee953d:
      FUN_1400bbcfc(param_1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ee959c FUN_140ee959c body=529 status=ok
// SIG undefined FUN_140ee959c(void)

void FUN_140ee959c(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
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
  code **local_40;
  code *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0xa8) <= (int)param_2)) goto LAB_140ee9632;
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  if (DAT_14cb94538 == 0) {
    local_60 = &local_38;
    local_38 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_1427b09ee;
    local_68 = &LAB_148a18249;
    local_70 = FUN_14657713c;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10004001;
    local_90 = 8;
    local_98 = 0x28;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
  }
  plVar2 = (longlong *)FUN_144718840(uVar1,DAT_14cb94538);
  if ((plVar2 == (longlong *)0x0) || (*(int *)(param_1 + 0xa8) <= (int)param_2)) goto LAB_140ee9632;
  lVar3 = *(longlong *)(param_1 + 0xa0) + (ulonglong)param_2 * 0x170;
  local_38 = *(code **)(lVar3 + 0x88);
  if (*(code **)(lVar3 + 0x88) == (code *)0x0) {
    local_38 = (code *)(lVar3 + 0x78);
  }
  local_30 = *(int *)(lVar3 + 0x90);
  if (local_30 == 0) goto LAB_140ee9632;
  local_40 = &local_38;
  lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,0);
  if (lVar3 == 0) {
LAB_140ee97a6:
    lVar3 = 0;
  }
  else {
    lVar4 = FUN_144a74fb4();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_140ee97a6;
  }
  FUN_140ee9d4a(&local_40,lVar3);
  lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,1);
  if (lVar3 == 0) {
LAB_140ee96c2:
    lVar3 = 0;
  }
  else {
    lVar4 = FUN_144a74fb4();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_140ee96c2;
  }
  FUN_140ee9d4a(&local_40,lVar3);
  FUN_140ee9d92(param_1,param_2);
LAB_140ee9632:
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ee97ae FUN_140ee97ae body=186 status=ok
// SIG undefined FUN_140ee97ae(void)

void FUN_140ee97ae(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x180))();
  }
  FUN_14053daec(&local_20,uVar5);
  if (local_18 != (longlong *)0x0) {
    iVar4 = (int)local_18[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_18[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_18 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_18;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_18 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_18 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_20 != 0) {
        FUN_140ee986a(local_20 + 0x20);
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
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ee986a FUN_140ee986a body=140 status=ok
// SIG undefined FUN_140ee986a(void)

void FUN_140ee986a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar8 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar8 = param_1;
  }
  if ((longlong)*(int *)(param_1 + 0xc08) != 0) {
    lVar3 = lVar8 + (longlong)*(int *)(param_1 + 0xc08) * 0x18;
    do {
      plVar4 = *(longlong **)(lVar8 + 0x10);
      if (plVar4 != (longlong *)0x0) {
        iVar7 = (int)plVar4[1];
        do {
          if (iVar7 == 0) goto LAB_140ee98e5;
          LOCK();
          iVar6 = (int)plVar4[1];
          bVar9 = iVar7 == iVar6;
          if (bVar9) {
            *(int *)(plVar4 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar9);
        lVar5 = *(longlong *)(lVar8 + 8);
        if (lVar5 != 0) {
          FUN_14030896c(lVar5,lVar5 + 0x78,*(undefined1 *)(lVar5 + 0x24),
                        *(undefined4 *)(lVar5 + 0x28));
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
LAB_140ee98e5:
      lVar8 = lVar8 + 0x18;
    } while (lVar8 != lVar3);
  }
  return;
}



// FUNCTION 140ee98f6 FUN_140ee98f6 body=877 status=ok
// SIG undefined FUN_140ee98f6(void)

void FUN_140ee98f6(longlong param_1,uint param_2)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
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
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 == 0) goto LAB_140ee9b16;
  if (((*(int *)(param_1 + 0xd20) < 1) || (**(longlong **)(param_1 + 0xd18) == 0)) ||
     (plVar7 = *(longlong **)(**(longlong **)(param_1 + 0xd18) + 0x48), plVar7 == (longlong *)0x0))
  {
LAB_140ee9971:
    plVar7 = (longlong *)0x0;
  }
  else {
    if (DAT_14cac7cb8 == 0) {
      local_50 = &local_38;
      local_38 = FUN_144a7958c;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1417963e0;
      local_58 = &LAB_1478a2d90;
      local_60 = &LAB_146395589;
      local_68 = L"Engine";
      local_70 = 0x20000000000;
      local_78 = 0x10000005;
      local_80 = 0x10;
      local_88 = 0xad0;
      FUN_14081cfa3(L"/Script/Engine",L"SkinnedMeshComponent",&DAT_14cac7cb8,FUN_146395562);
    }
    if ((*(int *)(plVar7[2] + 0x38) < *(int *)(DAT_14cac7cb8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cac7cb8 + 0x38) * 8) !=
        DAT_14cac7cb8 + 0x30)) goto LAB_140ee9971;
  }
  if (((*(int *)(param_1 + 0xd20) < 1) || (**(longlong **)(param_1 + 0xd18) == 0)) ||
     (plVar1 = *(longlong **)(**(longlong **)(param_1 + 0xd18) + 0x48), plVar1 == (longlong *)0x0))
  {
LAB_140ee99c3:
    if (plVar7 == (longlong *)0x0) goto LAB_140ee9b16;
LAB_140ee99cf:
    iVar6 = (param_2 & 0xff) - 1;
    (**(code **)(plVar7[0xca] + 0x28))(plVar7 + 0xca,iVar6);
    (**(code **)(plVar7[0xca] + 0x30))(plVar7 + 0xca,iVar6);
    uVar4 = FUN_140083894();
    cVar2 = FUN_1406bafe2(uVar4,3);
    if (cVar2 != '\0') {
      (**(code **)(*plVar7 + 0xa28))(plVar7,0x3f800000);
    }
    lVar5 = FUN_140083894();
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  else {
    if (DAT_14cad3688 == 0) {
      local_50 = &local_38;
      local_38 = FUN_144b223ce;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1417963e0;
      local_58 = &LAB_147a2f4c9;
      local_60 = &LAB_1400ea6f8;
      local_68 = L"Engine";
      local_70 = 0x200000000000;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x720;
      FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
    }
    if ((*(int *)(plVar1[2] + 0x38) < *(int *)(DAT_14cad3688 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) !=
        DAT_14cad3688 + 0x30)) goto LAB_140ee99c3;
    if (plVar7 != (longlong *)0x0) goto LAB_140ee99cf;
    if ((*(uint *)(plVar1 + 0xca) != (param_2 & 0xff)) &&
       (*(uint *)(plVar1 + 0xca) = param_2 & 0xff, (~*(byte *)((longlong)plVar1 + 0x9c) & 3) == 0))
    {
      bVar3 = *(byte *)((longlong)plVar1 + 0x9d);
      if ((bVar3 & 1) != 0) {
        if ((plVar1[0x16] != 0) || (lVar5 = FUN_1448abda6(plVar1), lVar5 != 0)) goto LAB_140ee9adc;
        bVar3 = *(byte *)((longlong)plVar1 + 0x9d);
      }
      *(byte *)((longlong)plVar1 + 0x9d) = bVar3 | 1;
      FUN_1401057d4(plVar1);
      FUN_14010586c(&DAT_14cad0140,plVar1);
    }
LAB_140ee9adc:
    uVar4 = FUN_140083894();
    cVar2 = FUN_1406bafe2(uVar4,2);
    if (cVar2 != '\0') {
      (**(code **)(*plVar1 + 0xa28))(plVar1,0x3f800000);
    }
    lVar5 = FUN_140083894();
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
LAB_140ee9b16:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ee9c88 FUN_140ee9c88 body=194 status=ok
// SIG undefined FUN_140ee9c88(void)

void FUN_140ee9c88(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  puVar1 = (uint *)(param_1 + 0x659);
  cVar3 = FUN_140ee9dd2(puVar1);
  if (cVar3 != '\0') {
    return;
  }
  if (param_2 == 0) {
    *puVar1 = 0;
    iVar4 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *puVar1 = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar4 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar4 = *(int *)(lVar5 + 0x10);
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(lVar5 + 0x10) = iVar6;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar4 = iVar6;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x32cc) = iVar4;
                    /* WARNING: Could not recover jumptable at 0x000140ee9cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x14b8))(param_1);
  return;
}



// FUNCTION 140ee9d4a FUN_140ee9d4a body=72 status=ok
// SIG undefined FUN_140ee9d4a(void)

void FUN_140ee9d4a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0xae8), lVar1 != 0)) {
    lVar2 = (longlong)(int)((longlong *)*param_1)[1];
    if (lVar2 != 0) {
      lVar3 = *(longlong *)*param_1;
      lVar2 = lVar2 << 3;
      do {
        FUN_140671584(lVar1,lVar3);
        lVar3 = lVar3 + 8;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
  }
  return;
}



// FUNCTION 140ee9d92 FUN_140ee9d92 body=64 status=ok
// SIG undefined FUN_140ee9d92(void)

void FUN_140ee9d92(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xa8))) {
    lVar1 = *(longlong *)(param_1 + 0xa0);
    lVar2 = (ulonglong)param_2 * 0x170;
    *(undefined4 *)(lVar1 + 0x90 + lVar2) = 0;
    if (*(int *)(lVar1 + 0x94 + lVar2) < 0) {
      FUN_140254dde(lVar2 + lVar1 + 0x78,0);
      return;
    }
  }
  return;
}



// FUNCTION 140ee9dd2 FUN_140ee9dd2 body=316 status=ok
// SIG undefined FUN_140ee9dd2(void)

bool FUN_140ee9dd2(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar5;
      }
    }
  }
  uVar5 = *param_1;
  uVar1 = param_1[1];
  bVar7 = true;
  if ((uVar5 != uVar4) || (uVar1 != uVar3)) {
    if ((uVar1 == 0) ||
       (((((int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
         (lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar6 == 0)) ||
        ((*(uint *)(lVar6 + 0x10) != uVar1 || ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))))) {
      if ((uVar3 != 0) &&
         (((-1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc)) &&
          ((lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar6 != 0 &&
           (*(uint *)(lVar6 + 0x10) == uVar3)))))) {
        bVar7 = (*(uint *)(lVar6 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar7 = false;
    }
  }
  return bVar7;
}



// FUNCTION 140ee9f0e FUN_140ee9f0e body=4410 status=ok
// SIG undefined FUN_140ee9f0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ee9f0e(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 uVar15;
  byte bVar16;
  int iVar17;
  uint *puVar18;
  longlong lVar19;
  longlong *plVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  longlong *plVar31;
  longlong *plVar32;
  bool bVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStack_108 [32];
  longlong local_e8;
  uint local_d4;
  longlong local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(longlong *)(param_1 + 0x40) == 0) || (param_4 == 0x7fffffff || param_2 == param_3))
  goto LAB_140eea961;
  plVar31 = (longlong *)(param_1 + 0x150);
  if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
    lVar12 = param_1 + 0x188;
    if (*(longlong *)(param_1 + 400) != 0) {
      lVar12 = *(longlong *)(param_1 + 400);
    }
    iVar8 = *(int *)(lVar12 + ((longlong)(int)param_4 & (longlong)*(int *)(param_1 + 0x198) - 1U) *
                              4);
    if (iVar8 != -1) {
      lVar30 = *plVar31;
LAB_140ee9fb8:
      lVar23 = (longlong)iVar8 * 0x20;
      lVar29 = lVar30 + lVar23;
      if (*(uint *)(lVar30 + lVar23) != param_4) goto code_r0x000140ee9fc8;
      iVar26 = *(int *)(lVar12 + (longlong)*(int *)(lVar29 + 0x1c) * 4);
      if (iVar26 == iVar8) {
        puVar11 = (undefined4 *)(lVar12 + (longlong)*(int *)(lVar29 + 0x1c) * 4);
      }
      else {
        do {
          lVar12 = (longlong)iVar26;
          iVar26 = *(int *)(lVar30 + 0x18 + lVar12 * 0x20);
        } while (iVar26 != iVar8);
        puVar11 = (undefined4 *)(lVar12 * 0x20 + lVar30 + 0x18);
      }
      *puVar11 = *(undefined4 *)(lVar29 + 0x18);
      plVar14 = *(longlong **)(*plVar31 + 0x10 + lVar23);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar32 = plVar14 + 1;
        *(int *)plVar32 = (int)*plVar32 + -1;
        UNLOCK();
        if ((int)*plVar32 == 0) {
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
      FUN_143ec71e4(plVar31,iVar8);
    }
  }
LAB_140eea033:
  if (param_2 == 0) goto LAB_140eea961;
  local_d4 = param_4;
  local_d0 = param_2;
  local_c8 = param_1;
  if (*(int *)(param_1 + 0x184) == 0) {
    iVar8 = *(int *)(param_1 + 0x158);
    *(int *)(param_1 + 0x158) = iVar8 + 1;
    if (*(int *)(param_1 + 0x15c) == iVar8) {
      FUN_1447711aa(plVar31,iVar8);
    }
    iVar26 = *(int *)(param_1 + 0x178);
    if (iVar26 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = iVar26 + 0x1e;
      if (-1 < iVar26 + -1) {
        iVar6 = iVar26 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    lVar30 = param_1 + 0x160;
    iVar17 = iVar26 + 1;
    iVar22 = iVar26 + 0x1f;
    if (-1 < iVar26) {
      iVar22 = iVar26;
    }
    if (iVar22 >> 5 == iVar6) {
      *(int *)(param_1 + 0x178) = iVar17;
    }
    else {
      if (*(int *)(param_1 + 0x17c) <= iVar26) {
        iVar6 = iVar26;
        if (iVar26 + 0x20U < 0xa0) {
          iVar17 = 0x80;
        }
        else {
          uVar21 = iVar26 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x17c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar21) {
              uVar7 = uVar21;
            }
          }
          else {
            uVar7 = uVar21 + (uVar21 * 3 >> 3) + 0x10;
          }
          uVar13 = (ulonglong)(uVar7 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar9 = (uint)(uVar13 + 0xf);
              if (uVar7 < 0x1ffd) {
                uVar13 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar13 + 0xf >> 4]];
              }
              else {
                uVar24 = (ulonglong)(uVar9 & 0xfffffff0);
                if (uVar24 < 0x7ff1) {
                  bVar16 = (&DAT_14c841e00)[uVar9 >> 4];
                  uVar25 = 0x32;
                  if (0x32 < bVar16) {
                    uVar25 = (ulonglong)bVar16;
                  }
                  uVar28 = 0x32 - (ulonglong)bVar16;
                  do {
                    uVar13 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar28 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar28 & 0xffffffff] & 0xf) == 0) goto LAB_140eeac31;
                    lVar12 = uVar25 + 1 + uVar28;
                    uVar28 = uVar28 - 1;
                  } while (lVar12 != 0x33);
                }
                uVar13 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar13 = (ulonglong)DAT_14c841df8;
                }
                uVar13 = -uVar13 & (uVar24 + uVar13) - 1;
              }
            }
            else {
              uVar13 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar13,0);
              iVar6 = *(int *)(local_c8 + 0x178);
            }
          }
LAB_140eeac31:
          iVar10 = (int)(uVar13 >> 2);
          param_1 = local_c8;
          param_4 = local_d4;
          iVar17 = -0x20;
          if ((int)uVar21 <= iVar10) {
            iVar17 = iVar10 << 5;
          }
        }
        *(int *)(param_1 + 0x17c) = iVar17;
        FUN_1446efbd8(lVar30,iVar6);
        iVar17 = *(int *)(param_1 + 0x178) + 1;
      }
      iVar6 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar6 = iVar17;
      }
      *(int *)(param_1 + 0x178) = iVar17;
      if (iVar17 % 0x20 != 0) {
        lVar12 = *(longlong *)(param_1 + 0x170);
        if (*(longlong *)(param_1 + 0x170) == 0) {
          lVar12 = lVar30;
        }
        bVar16 = -(char)(iVar17 % 0x20);
        *(uint *)(lVar12 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(lVar12 + (longlong)(iVar6 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
      }
    }
    lVar12 = (longlong)iVar8;
    if (*(longlong *)(param_1 + 0x170) != 0) {
      lVar30 = *(longlong *)(param_1 + 0x170);
    }
    bVar16 = (byte)iVar26 & 0x1f;
    puVar3 = (uint *)(lVar30 + (longlong)(iVar22 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar8 = *(int *)(param_1 + 0x180);
    lVar12 = (longlong)iVar8;
    iVar26 = *(int *)(*(longlong *)(param_1 + 0x150) + 4 + lVar12 * 0x20);
    *(int *)(param_1 + 0x180) = iVar26;
    iVar6 = *(int *)(param_1 + 0x184) + -1;
    *(int *)(param_1 + 0x184) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar26 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = (uint *)(param_1 + 0x160);
  puVar18 = *(uint **)(param_1 + 0x170);
  if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
    puVar18 = puVar3;
  }
  iVar26 = iVar8 + 0x1f;
  if (-1 < iVar8) {
    iVar26 = iVar8;
  }
  puVar18[iVar26 >> 5] = puVar18[iVar26 >> 5] | 1 << ((byte)iVar8 & 0x1f);
  uVar21 = 1;
  lVar30 = *(longlong *)(param_1 + 0x150);
  lVar12 = lVar12 * 0x20;
  puVar11 = (undefined4 *)(lVar30 + lVar12);
  *(uint *)(lVar30 + lVar12) = param_4;
  puVar27 = (undefined8 *)(lVar30 + 8 + lVar12);
  *puVar27 = 0;
  puVar27[1] = 0;
  *(undefined4 *)(lVar30 + 0x18 + lVar12) = 0xffffffff;
  uVar7 = *(int *)(param_1 + 0x158) - *(int *)(param_1 + 0x184);
  if (1 < uVar7) {
    lVar12 = param_1 + 0x188;
    if (*(longlong *)(param_1 + 400) != 0) {
      lVar12 = *(longlong *)(param_1 + 400);
    }
    iVar26 = *(int *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x198) - 1U & local_d4) * 4);
    if (iVar26 != -1) {
      do {
        puVar2 = (undefined4 *)(*plVar31 + (longlong)iVar26 * 0x20);
        if (*(uint *)(*plVar31 + (longlong)iVar26 * 0x20) == local_d4) {
          plVar14 = *(longlong **)(puVar2 + 4);
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar32 = plVar14 + 1;
            *(int *)plVar32 = (int)*plVar32 + -1;
            UNLOCK();
            if ((int)*plVar32 == 0) {
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
          uVar34 = *puVar11;
          uVar35 = puVar11[1];
          uVar4 = puVar11[2];
          uVar5 = puVar11[3];
          *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar11 + 4);
          *puVar2 = uVar34;
          puVar2[1] = uVar35;
          puVar2[2] = uVar4;
          puVar2[3] = uVar5;
          FUN_143ec71e4(plVar31,iVar8);
          param_1 = local_c8;
          iVar8 = iVar26;
          goto LAB_140eea499;
        }
        iVar26 = puVar2[6];
      } while (iVar26 != -1);
    }
  }
  if (3 < uVar7) {
    uVar13 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar21 = 1 << ((byte)lVar12 & 0x1f);
  }
  if (((int)uVar7 < 1) || ((int)uVar21 <= *(int *)(param_1 + 0x198))) {
    uVar21 = *(int *)(param_1 + 0x198) - 1U & local_d4;
    puVar11[7] = uVar21;
    lVar12 = *(longlong *)(param_1 + 400);
    if (*(longlong *)(param_1 + 400) == 0) {
      lVar12 = param_1 + 0x188;
    }
    puVar11[6] = *(undefined4 *)
                  (lVar12 + ((longlong)*(int *)(param_1 + 0x198) - 1U & (longlong)(int)uVar21) * 4);
    lVar12 = *(longlong *)(param_1 + 400);
    if (*(longlong *)(param_1 + 400) == 0) {
      lVar12 = param_1 + 0x188;
    }
    *(int *)(lVar12 + ((longlong)*(int *)(param_1 + 0x198) - 1U & (longlong)(int)uVar21) * 4) =
         iVar8;
  }
  else {
    *(uint *)(param_1 + 0x198) = uVar21;
    plVar31 = (longlong *)(param_1 + 400);
    if (*(longlong *)(param_1 + 400) != 0) {
      FUN_1446efa72(plVar31,0,0,4);
      uVar21 = *(uint *)(param_1 + 0x198);
    }
    lVar12 = param_1 + 0x188;
    if (uVar21 == 1) {
      if (*plVar31 != 0) {
        FUN_1446efa72(plVar31,0,0,4);
      }
LAB_140eea2bc:
      uVar7 = 0;
      do {
        lVar30 = *(longlong *)(param_1 + 400);
        if (*(longlong *)(param_1 + 400) == 0) {
          lVar30 = lVar12;
        }
        *(undefined4 *)(lVar30 + (ulonglong)(*(int *)(param_1 + 0x198) + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar21 != uVar7);
    }
    else {
      if (uVar21 == 0) goto LAB_140eea499;
      FUN_1446efa72(plVar31,0,uVar21,4);
      if (0 < (int)uVar21) goto LAB_140eea2bc;
    }
    iVar26 = *(int *)(param_1 + 0x178);
    if (iVar26 == 0) {
      uVar13 = 0;
      uVar24 = 1;
      iVar6 = 0;
      iVar17 = 0;
    }
    else {
      puVar18 = *(uint **)(param_1 + 0x170);
      if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
        puVar18 = puVar3;
      }
      uVar21 = *puVar18;
      if (uVar21 == 0) {
        iVar6 = iVar26 + 0x1e;
        if (-1 < iVar26 + -1) {
          iVar6 = iVar26 + -1;
        }
        uVar13 = 0;
        uVar24 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar24 = uVar13;
        }
        iVar17 = 0;
        do {
          if (uVar24 == uVar13) goto LAB_140eea499;
          iVar17 = iVar17 + 0x20;
          uVar21 = puVar18[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar21 == 0);
      }
      else {
        uVar13 = 0;
        iVar17 = 0;
      }
      uVar24 = (ulonglong)(-uVar21 & uVar21);
      uVar25 = uVar24 * 2 + 1;
      lVar30 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      iVar6 = (iVar17 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
      if (iVar26 <= iVar6) {
        iVar6 = iVar26;
      }
    }
    if (iVar6 < iVar26) {
      uVar21 = 0xffffffff;
      do {
        lVar30 = *(longlong *)(param_1 + 0x150);
        lVar23 = (longlong)iVar6 * 0x20;
        uVar25 = (longlong)*(int *)(param_1 + 0x198) - 1U & (longlong)*(int *)(lVar30 + lVar23);
        iVar26 = (int)uVar25;
        *(int *)(lVar30 + 0x1c + lVar23) = iVar26;
        lVar29 = *(longlong *)(param_1 + 400);
        if (*(longlong *)(param_1 + 400) == 0) {
          lVar29 = lVar12;
        }
        *(undefined4 *)(lVar30 + 0x18 + lVar23) =
             *(undefined4 *)(lVar29 + ((longlong)*(int *)(param_1 + 0x198) - 1U & uVar25) * 4);
        lVar30 = *(longlong *)(param_1 + 400);
        if (*(longlong *)(param_1 + 400) == 0) {
          lVar30 = lVar12;
        }
        *(int *)(lVar30 + ((longlong)iVar26 & (longlong)*(int *)(param_1 + 0x198) - 1U) * 4) = iVar6
        ;
        uVar21 = ~(uint)uVar24 & uVar21;
        puVar18 = *(uint **)(param_1 + 0x170);
        if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
          puVar18 = puVar3;
        }
        iVar26 = *(int *)(param_1 + 0x178);
        iVar6 = (int)uVar13;
        lVar30 = (longlong)iVar6;
        uVar7 = puVar18[lVar30] & uVar21;
        if (uVar7 == 0) {
          iVar22 = iVar26 + 0x1e;
          if (-1 < iVar26 + -1) {
            iVar22 = iVar26 + -1;
          }
          iVar22 = iVar22 >> 5;
          iVar10 = iVar22;
          if (iVar22 < iVar6) {
            iVar10 = iVar6;
          }
          if (iVar22 <= iVar6) break;
          lVar29 = 0;
          while( true ) {
            iVar17 = iVar17 + 0x20;
            uVar7 = puVar18[lVar30 + lVar29 + 1];
            if (uVar7 != 0) break;
            lVar29 = lVar29 + 1;
            if (iVar10 - lVar30 == lVar29) goto LAB_140eea499;
          }
          uVar13 = (ulonglong)(iVar6 + (int)lVar29 + 1);
          uVar21 = 0xffffffff;
        }
        uVar24 = (ulonglong)(-uVar7 & uVar7);
        uVar25 = uVar24 * 2 + 1;
        lVar30 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar30 == 0; lVar30 = lVar30 + -1) {
          }
        }
        iVar6 = (iVar17 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar26);
    }
  }
LAB_140eea499:
  lVar12 = *(longlong *)(param_1 + 0x150);
  plVar14 = (longlong *)FUN_14001cc68(0x638,0x10);
  plVar14[1] = (longlong)&DAT_100000001;
  *plVar14 = (longlong)&PTR_FUN_14b4aa040;
  uVar34 = 0;
  plVar14[3] = 0;
  plVar14[4] = 0;
  plVar14[2] = (longlong)&PTR_FUN_14b4a88c0;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  FUN_140bbae66(plVar14 + 10);
  plVar14[0xa2] = param_1;
  *(undefined1 *)(plVar14 + 0xa3) = 0;
  plVar14[0xac] = 0;
  plVar14[0xad] = 0x200000000;
  *(undefined8 *)((longlong)plVar14 + 0x51c) = 0;
  *(undefined8 *)((longlong)plVar14 + 0x522) = 0;
  plVar14[0xa6] = 0;
  plVar14[0xa7] = 0;
  *(undefined8 *)((longlong)plVar14 + 0x539) = 0;
  *(undefined8 *)((longlong)plVar14 + 0x541) = 0;
  *(undefined1 *)(plVar14 + 0xae) = 0;
  plVar14[0xb1] = 0;
  plVar14[0xb2] = 0x200000000;
  *(undefined1 *)(plVar14 + 0xb3) = 0;
  plVar14[0xb6] = 0;
  plVar14[0xb7] = 0x200000000;
  *(undefined1 *)(plVar14 + 0xb8) = 0;
  plVar14[0xbb] = 0;
  plVar14[0xbc] = 0x200000000;
  *(undefined1 *)(plVar14 + 0xbd) = 0;
  plVar14[0xc0] = 0;
  plVar14[0xc1] = 0x200000000;
  plVar14[0xc6] = 0;
  plVar14[0xc4] = 0;
  plVar14[0xc5] = 0;
  plVar14[0xc2] = 0;
  plVar14[0xc3] = 0;
  FUN_140c17aa4(plVar14 + 2);
  plVar31 = (longlong *)(lVar12 + (longlong)iVar8 * 0x20 + 8);
  plVar32 = plVar14 + 2;
  local_c0 = plVar31;
  if ((plVar32 == (longlong *)0x0) ||
     (((plVar14[3] != 0 && (plVar14[4] != 0)) && (0 < *(int *)(plVar14[4] + 8))))) {
    if (plVar14 == (longlong *)0x0) goto LAB_140eeacfe;
LAB_140eea617:
    lVar12 = local_d0;
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    *plVar31 = (longlong)plVar32;
    plVar32 = (longlong *)plVar31[1];
    if (plVar14 == plVar32) {
      LOCK();
      plVar32 = plVar14 + 1;
      *(int *)plVar32 = (int)*plVar32 + -1;
      UNLOCK();
      if ((int)*plVar32 == 0) {
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
    else {
      plVar31[1] = (longlong)plVar14;
      if (plVar32 != (longlong *)0x0) {
        bVar33 = false;
        goto LAB_140eea63b;
      }
    }
LAB_140eea68a:
    LOCK();
    plVar32 = plVar14 + 1;
    *(int *)plVar32 = (int)*plVar32 + -1;
    UNLOCK();
    if ((int)*plVar32 == 0) {
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
  else {
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      plVar14[3] = (longlong)plVar32;
      if ((longlong *)plVar14[4] != plVar14) {
        LOCK();
        *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar14[4] != (longlong *)0x0) {
          plVar31 = plVar14 + 4;
          plVar20 = (longlong *)plVar14[4];
          goto LAB_140eead51;
        }
        plVar14[4] = (longlong)plVar14;
      }
LAB_140eea60c:
      plVar31 = local_c0;
      LOCK();
      plVar20 = plVar14 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      goto LAB_140eea617;
    }
    _DAT_00000018 = 0x10;
    plVar31 = (longlong *)&DAT_00000020;
    plVar20 = _DAT_00000020;
    if (_DAT_00000020 != (longlong *)0x0) {
LAB_140eead51:
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))();
      }
      *plVar31 = (longlong)plVar14;
      if (plVar14 != (longlong *)0x0) goto LAB_140eea60c;
    }
LAB_140eeacfe:
    *local_c0 = (longlong)plVar32;
    plVar32 = (longlong *)local_c0[1];
    lVar12 = local_d0;
    plVar31 = local_c0;
    if (plVar32 != (longlong *)0x0) {
      local_c0[1] = (longlong)plVar14;
      bVar33 = true;
LAB_140eea63b:
      LOCK();
      plVar20 = plVar32 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*plVar32)(plVar32);
        LOCK();
        piVar1 = (int *)((longlong)plVar32 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar32 + 0x10))(plVar32);
        }
      }
      lVar12 = local_d0;
      if (!bVar33) goto LAB_140eea68a;
    }
  }
  lVar30 = *plVar31;
  FUN_141083db4(lVar30);
  uVar21 = *(uint *)(lVar12 + 0xc);
  *(uint *)(lVar30 + 0x18) = uVar21;
  if ((int)uVar21 < DAT_14c9647dc) {
    lVar12 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
  }
  else {
    lVar12 = 0;
  }
  iVar8 = *(int *)(lVar12 + 0x10);
  if (*(int *)(lVar12 + 0x10) == 0) {
    LOCK();
    iVar8 = DAT_14c964868 + 1;
    UNLOCK();
    iVar26 = DAT_14c964868 + 1;
    bVar33 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar8;
    if (bVar33) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar26);
    }
    LOCK();
    iVar8 = *(int *)(lVar12 + 0x10);
    bVar33 = iVar8 == 0;
    if (bVar33) {
      *(int *)(lVar12 + 0x10) = iVar26;
      iVar8 = 0;
    }
    UNLOCK();
    if (bVar33) {
      iVar8 = iVar26;
    }
  }
  *(int *)(lVar30 + 0x1c) = iVar8;
  uVar21 = *(uint *)(local_d0 + 0xbf0);
  if ((char)uVar21 != '\0') {
    local_b8 = lVar30 + 0x30;
    lVar12 = 8;
    uVar13 = 0;
    do {
      lVar29 = local_d0;
      if (((int)uVar21 <= (int)uVar13) ||
         (plVar31 = *(longlong **)(*(longlong *)(local_d0 + 0xbe8) + lVar12),
         plVar31 == (longlong *)0x0)) break;
      local_b0 = (undefined8 *)0x0;
      uStack_a8 = uStack_a8 & 0xffffffff00000000;
      FUN_1446efa72(&local_b0,0,3,0x10);
      uStack_a8 = CONCAT44(uStack_a8._4_4_,3);
      *local_b0 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar19 = DAT_14c758608 + 1;
      lVar23 = DAT_14c758608 + 1;
      if (lVar19 == 0) {
        LOCK();
        UNLOCK();
        lVar19 = DAT_14c758608 + 2;
        lVar23 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar23;
      local_b0[2] = lVar19;
      *local_b0 = &PTR_FUN_14b4a9e10;
      local_b0[3] = lVar30;
      local_b0[4] = FUN_1409d9ff6;
      *(undefined4 *)(local_b0 + 5) = 0;
      local_e8 = local_b8;
      FUN_14107bdda(lVar29,&local_b0,2,plVar31);
      if ((int)uStack_a8 == 0) {
LAB_140eea7ff:
        if (local_b0 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_b0 != (undefined8 *)0x0) {
        (**(code **)*local_b0)();
        FUN_1446efa72(&local_b0,0,0,0x10);
        uStack_a8 = uStack_a8 & 0xffffffff00000000;
        goto LAB_140eea7ff;
      }
      iVar8 = (**(code **)(*plVar31 + 0x3c8))(plVar31);
      lVar29 = (**(code **)(*plVar31 + 0x3d0))(plVar31);
      if (lVar29 == 0) {
        lVar29 = (**(code **)(*plVar31 + 0x3d8))(plVar31);
        uVar35 = 0;
        if (lVar29 != 0) {
          uVar35 = *(undefined4 *)(lVar29 + 0xe0);
          uVar34 = FUN_140b536be(lVar29);
        }
      }
      else {
        uVar34 = *(undefined4 *)(lVar29 + 0x2d4);
        uVar35 = *(undefined4 *)(lVar29 + 0x2fc);
      }
      lVar29 = (longlong)*(int *)(lVar30 + 0x28);
      uVar21 = *(int *)(lVar30 + 0x28) + 1;
      *(uint *)(lVar30 + 0x28) = uVar21;
      if (*(uint *)(lVar30 + 0x2c) < uVar21) {
        FUN_1418bd3d6((longlong *)(lVar30 + 0x20));
      }
      lVar23 = *(longlong *)(lVar30 + 0x20);
      *(longlong **)(lVar23 + lVar29 * 0x18) = plVar31;
      *(bool *)(lVar23 + 8 + lVar29 * 0x18) = iVar8 == 0;
      *(undefined4 *)(lVar23 + 0xc + lVar29 * 0x18) = uVar34;
      *(undefined4 *)(lVar23 + 0x10 + lVar29 * 0x18) = uVar35;
      uVar13 = uVar13 + 1;
      uVar21 = *(uint *)(local_d0 + 0xbf0);
      lVar12 = lVar12 + 0x88;
    } while (uVar13 < (uVar21 & 0xff));
  }
  if (*(int *)(lVar30 + 0x28) == 0) {
    FUN_141083db4(lVar30);
  }
  plVar31 = local_c0;
  lVar12 = local_c8;
  puVar27 = DAT_14cb72620;
  if (((*(longlong *)(local_c8 + 0x80) != 0) && (*(int *)(local_c8 + 0x7c) != 0)) &&
     ((uVar21 = *(uint *)(local_c8 + 0x78), -1 < (int)uVar21 &&
      (((((int)uVar21 < DAT_14c9647dc &&
         (lVar30 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8), lVar30 != 0)) &&
        (*(int *)(lVar30 + 0x10) == *(int *)(local_c8 + 0x7c))) &&
       ((*(uint *)(lVar30 + 8) & 0x10200000) == 0)))))) {
    lVar30 = FUN_140de53c6(local_c8,local_d4);
    if ((lVar30 != 0) &&
       (puVar27 = *(undefined8 **)(lVar30 + 0x428),
       *(undefined8 **)(lVar30 + 0x428) == (undefined8 *)0x0)) {
      puVar27 = DAT_14cb72620;
    }
    lVar30 = *plVar31;
    plVar31 = *(longlong **)(lVar12 + 0x80);
    if (*(code **)(*plVar31 + 0x10) == (code *)&LAB_144944cea) {
      plVar31 = plVar31 + 0xe1;
    }
    else {
      plVar31 = (longlong *)(**(code **)(*plVar31 + 0x10))(plVar31);
    }
    uStack_a8 = plVar31[0x2c];
    lStack_a0 = plVar31[0x2d];
    local_98 = 0;
    plStack_90 = (longlong *)0x0;
    puVar11 = (undefined4 *)(lVar30 + 0x600);
    local_b0 = puVar27;
    lVar29 = FUN_1408a35a2(puVar11);
    if (lVar29 == 0) {
      *(longlong *)(lVar30 + 0x610) = lStack_a0;
      *puVar11 = (undefined4)local_b0;
      *(undefined4 *)(lVar30 + 0x604) = local_b0._4_4_;
      *(int *)(lVar30 + 0x608) = (int)uStack_a8;
      *(undefined4 *)(lVar30 + 0x60c) = uStack_a8._4_4_;
      uVar15 = 0;
      plVar31 = (longlong *)0x0;
    }
    else {
      plVar31 = *(longlong **)(lVar30 + 0x10);
      if (plVar31 == (longlong *)0x0) {
LAB_140eeaf21:
        local_88 = 0;
        plStack_80 = (longlong *)0x0;
        bVar33 = true;
      }
      else {
        iVar8 = (int)plVar31[1];
        do {
          if (iVar8 == 0) goto LAB_140eeaf21;
          LOCK();
          iVar26 = (int)plVar31[1];
          bVar33 = iVar8 == iVar26;
          if (bVar33) {
            *(int *)(plVar31 + 1) = iVar8 + 1;
            iVar26 = iVar8;
          }
          iVar8 = iVar26;
          UNLOCK();
        } while (!bVar33);
        uVar15 = *(undefined8 *)(lVar30 + 8);
        LOCK();
        *(int *)(plVar31 + 1) = (int)plVar31[1] + 1;
        UNLOCK();
        LOCK();
        plVar14 = plVar31 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar31)(plVar31);
          LOCK();
          piVar1 = (int *)((longlong)plVar31 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar31 + 0x10))(plVar31);
          }
        }
        LOCK();
        *(int *)(plVar31 + 1) = (int)plVar31[1] + 1;
        UNLOCK();
        bVar33 = false;
        local_88 = uVar15;
        plStack_80 = plVar31;
      }
      plVar31 = plStack_80;
      FUN_1487d62b6(lVar29,&local_88);
      plVar14 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar32 = plStack_80 + 1;
        *(int *)plVar32 = (int)*plVar32 + -1;
        UNLOCK();
        if ((int)*plVar32 == 0) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      if (!bVar33) {
        LOCK();
        plVar14 = plVar31 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar31)(plVar31);
          LOCK();
          piVar1 = (int *)((longlong)plVar31 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar31 + 0x10))(plVar31);
          }
        }
      }
      *(longlong *)(lVar30 + 0x610) = lStack_a0;
      *puVar11 = (undefined4)local_b0;
      *(undefined4 *)(lVar30 + 0x604) = local_b0._4_4_;
      *(int *)(lVar30 + 0x608) = (int)uStack_a8;
      *(undefined4 *)(lVar30 + 0x60c) = uStack_a8._4_4_;
      lVar12 = local_c8;
      uVar15 = local_98;
      if (plStack_90 == (longlong *)0x0) {
        plVar31 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)plStack_90 + 0xc) = *(int *)((longlong)plStack_90 + 0xc) + 1;
        UNLOCK();
        plVar31 = plStack_90;
      }
    }
    plVar14 = *(longlong **)(lVar30 + 0x620);
    *(undefined8 *)(lVar30 + 0x618) = uVar15;
    *(longlong **)(lVar30 + 0x620) = plVar31;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))();
      }
    }
    lVar29 = FUN_1408a35a2(&local_b0);
    if (lVar29 != 0) {
      plVar31 = *(longlong **)(lVar30 + 0x10);
      if (plVar31 == (longlong *)0x0) {
LAB_140eeae30:
        local_88 = 0;
        plStack_80 = (longlong *)0x0;
        bVar33 = true;
      }
      else {
        iVar8 = (int)plVar31[1];
        do {
          if (iVar8 == 0) goto LAB_140eeae30;
          LOCK();
          iVar26 = (int)plVar31[1];
          bVar33 = iVar8 == iVar26;
          if (bVar33) {
            *(int *)(plVar31 + 1) = iVar8 + 1;
            iVar26 = iVar8;
          }
          iVar8 = iVar26;
          UNLOCK();
        } while (!bVar33);
        uVar15 = *(undefined8 *)(lVar30 + 8);
        LOCK();
        *(int *)(plVar31 + 1) = (int)plVar31[1] + 1;
        UNLOCK();
        LOCK();
        plVar14 = plVar31 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar31)(plVar31);
          LOCK();
          piVar1 = (int *)((longlong)plVar31 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar31 + 0x10))(plVar31);
          }
        }
        LOCK();
        *(int *)(plVar31 + 1) = (int)plVar31[1] + 1;
        UNLOCK();
        bVar33 = false;
        local_88 = uVar15;
        plStack_80 = plVar31;
      }
      plVar31 = plStack_80;
      FUN_140ee01be(lVar29,&local_88);
      plVar14 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar32 = plStack_80 + 1;
        *(int *)plVar32 = (int)*plVar32 + -1;
        UNLOCK();
        if ((int)*plVar32 == 0) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      if (!bVar33) {
        LOCK();
        plVar14 = plVar31 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar31)(plVar31);
          LOCK();
          piVar1 = (int *)((longlong)plVar31 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar31 + 0x10))(plVar31);
          }
        }
      }
    }
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plStack_90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_90 + 0x10))();
      }
    }
  }
  FUN_1447f69b6(lVar12 + 0x28);
LAB_140eea961:
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000140ee9fc8:
  iVar8 = *(int *)(lVar29 + 0x18);
  if (iVar8 == -1) goto LAB_140eea033;
  goto LAB_140ee9fb8;
}



// FUNCTION 140eeb04a FUN_140eeb04a body=303 status=ok
// SIG undefined FUN_140eeb04a(void)

void FUN_140eeb04a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_140eeb17a();
  *(undefined8 *)(param_1 + 0x3258) = uVar1;
  if (param_2 != 0) {
    if (DAT_14cbbd498 == 0) {
      local_40 = &local_20;
      local_20 = FUN_140940982;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146572ba2;
      local_48 = &LAB_148ca13ba;
      local_50 = &LAB_140e51436;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x1068;
      FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
    }
    if (((*(int *)(DAT_14cbbd498 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) == DAT_14cbbd498 + 0x30)) &&
       (*(longlong *)(param_2 + 0xf70) != 0)) {
      *(longlong *)(param_1 + 0x3258) = *(longlong *)(param_2 + 0xf70);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eeb17a FUN_140eeb17a body=243 status=ok
// SIG undefined FUN_140eeb17a(void)

longlong FUN_140eeb17a(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0xf40) != 0) &&
     (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xf40) + 0x3f70), lVar5 != 0)) {
    lVar1 = *(longlong *)(lVar5 + 0xe60);
    local_30 = lVar1;
    uVar4 = FUN_14477b664(*(undefined8 *)(lVar5 + 0xe68));
    local_28 = FUN_14477b664(uVar4);
    lVar5 = *(longlong *)(lVar5 + 0xe70);
    if (local_28 == 0) {
      uVar4 = FUN_1465c8b0e();
      local_28 = FUN_14477b664(uVar4);
    }
    if (lVar5 != 0) goto LAB_140eeb232;
    local_20 = 0;
    lVar5 = 0;
    if ((lVar1 == 0) || (local_28 == 0)) goto LAB_140eeb232;
    plVar2 = *(longlong **)(local_28 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,&local_30);
        goto LAB_140eeb232;
      }
    }
  }
  lVar5 = 0;
LAB_140eeb232:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eeb26e FUN_140eeb26e body=1553 status=ok
// SIG undefined FUN_140eeb26e(void)

void FUN_140eeb26e(longlong *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_d8 [32];
  uint local_b8;
  uint local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  ulonglong uStack_60;
  longlong local_58;
  code *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((char)param_1[0x2f] == '\x03') && (*(char *)((longlong)param_1 + 0xd34) == -1)) {
    local_b8 = (int)param_1[0x1a6] + 1;
    FUN_141145e58(param_1,param_2,param_3,param_4);
  }
  if (param_2 == (longlong *)0x0) {
    param_2 = (longlong *)param_1[0x2d];
    if (param_2 != (longlong *)0x0) {
      lVar6 = FUN_144a7cbb2();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) goto LAB_140eeb2c0;
    }
    *(int *)(param_1 + 0x1a8) = (int)param_1[0x1a6];
    param_2 = (longlong *)0x0;
  }
  else {
LAB_140eeb2c0:
    *(int *)(param_1 + 0x1a8) = (int)param_1[0x1a6];
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  param_1[0x1a9] = (longlong)param_2;
  *(char *)((longlong)param_1 + 0xd44) = (char)param_3;
  *(char *)((longlong)param_1 + 0xd45) = (char)param_4;
  if ((param_1[0x1ac] != DAT_14cb95120) && (param_1[0x1ac] != DAT_14cb94e38)) goto LAB_140eeb487;
  FUN_140eeb8c0(param_1,param_2);
  if ((param_2 != (longlong *)0x0) &&
     ((((char)param_2[0x2f] != '\x01' ||
       (cVar2 = (**(code **)(*param_2 + 0x700))(param_2), cVar2 != '\0')) ||
      ((param_2[0x2d] != 0 && (*(char *)(param_2[0x2d] + 0x178) != '\x01')))))) {
    lVar6 = param_1[0x1a9];
    if (lVar6 != 0) {
      if (DAT_14cb94538 == 0) {
        local_80 = &local_50;
        local_50 = FUN_1449e2820;
        local_70 = FUN_14081d0ea;
        local_78 = FUN_1427b09ee;
        local_88 = &LAB_148a18249;
        local_90 = FUN_14657713c;
        local_98 = L"Engine";
        local_a0 = 0;
        local_a8 = 0x10004001;
        local_b0 = 8;
        local_b8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
      }
      plVar3 = (longlong *)FUN_144718840(lVar6,DAT_14cb94538);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
  }
  if (param_1[0x174] != 0) {
    plVar3 = param_1 + 0x174;
    uVar4 = FUN_1401b4c98(param_1);
    lVar6 = FUN_144a61814(uVar4,plVar3);
    if (lVar6 != 0) {
      FUN_1405a424c(uVar4,*plVar3);
    }
    *plVar3 = 0;
  }
  (**(code **)(*param_1 + 0x850))(param_1,1);
  if (*(char *)((longlong)param_1 + 0xd45) != '\x01') {
    if ((((param_1[0x163] == 0) || ((longlong *)param_1[0x164] == (longlong *)0x0)) ||
        (cVar2 = (**(code **)(*(longlong *)param_1[0x164] + 0x68))(), cVar2 == '\0')) &&
       (-1 < (char)param_1[0xc])) {
      if (*(char *)((longlong)param_1 + 0xd45) == '\x02') {
        fVar11 = 0.0;
        uVar4 = DAT_14cb94e20;
      }
      else {
        if (*(char *)((longlong)param_1 + 0xd45) == '\x01') goto LAB_140eeb370;
        fVar11 = *(float *)((longlong)param_1 + 0xb6c);
        uVar4 = DAT_14cb94e00;
        if ((param_1[0x163] != 0) && ((longlong *)param_1[0x164] != (longlong *)0x0)) {
          fVar10 = (float)(**(code **)(*(longlong *)param_1[0x164] + 0x40))();
          fVar11 = fVar11 * fVar10;
          puVar7 = &DAT_14cb94e00;
          if (*(char *)((longlong)param_1 + 0xd45) == '\x02') {
            puVar7 = &DAT_14cb94e20;
          }
          uVar4 = *puVar7;
        }
      }
      local_b0 = local_b0 & 0xffffff00;
      local_b8 = local_b8 & 0xffffff00;
      cVar2 = FUN_140dd024a(param_1,uVar4,0x3f800000,fVar11);
      *(char *)((longlong)param_1 + 0xb91) = cVar2;
      if (((cVar2 != '\0') &&
          (*(byte *)(param_1 + 0x172) = *(byte *)(param_1 + 0x172) | 0x10, param_1[0x167] != 0)) &&
         (((longlong *)param_1[0x168] != (longlong *)0x0 &&
          (plVar3 = (longlong *)(**(code **)(*(longlong *)param_1[0x168] + 8))(),
          plVar3 != (longlong *)0x0)))) {
        uVar4 = FUN_1407ca880();
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
        if (plVar3 != (longlong *)0x0) {
          uVar4 = FUN_1407ca880();
          plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
          if (((plVar3 != plVar5) && (plVar5 != (longlong *)0x0)) &&
             (lVar6 = (**(code **)(*plVar5 + 0x50))(plVar5), lVar6 != 0)) {
            FUN_140dc01da(lVar6,&local_50,*(undefined1 *)((longlong)param_1 + 0xb91));
            if (local_50 != (code *)0x0) {
              local_68 = FUN_140f93b48;
              uStack_60 = uStack_60 & 0xffffffff00000000;
              FUN_14126b498(local_50 + 0x18,&local_58);
              param_1[0x171] = local_58;
              if ((param_1[0x163] != 0) && ((longlong *)param_1[0x164] != (longlong *)0x0)) {
                lVar6 = (**(code **)(*(longlong *)param_1[0x164] + 0x18))();
                if ((int)(uint)*(byte *)((longlong)param_1 + 0xd44) < *(int *)(lVar6 + 0xa8)) {
                  lVar8 = (ulonglong)*(byte *)((longlong)param_1 + 0xd44) * 0x170;
                  lVar9 = (longlong)*(int *)(*(longlong *)(lVar6 + 0xa0) + 0x90 + lVar8);
                  if (lVar9 != 0) {
                    lVar8 = *(longlong *)(lVar6 + 0xa0) + lVar8;
                    plVar3 = *(longlong **)(lVar8 + 0x88);
                    if (plVar3 == (longlong *)0x0) {
                      plVar3 = (longlong *)(lVar8 + 0x78);
                    }
                    local_68 = (code *)0x0;
                    uStack_60 = 0;
                    (**(code **)(*(longlong *)local_50 + 0x38))(local_50);
                    plVar5 = plVar3 + lVar9;
                    do {
                      if ((longlong)(int)uStack_60 != 0) {
                        lVar6 = 0;
                        do {
                          if (*(longlong *)(local_68 + lVar6) == *plVar3) goto LAB_140eeb725;
                          lVar6 = lVar6 + 8;
                        } while ((longlong)(int)uStack_60 * 8 != lVar6);
                      }
                      FUN_140dd0426(param_1,plVar3);
LAB_140eeb725:
                      plVar3 = plVar3 + 1;
                    } while (plVar3 != plVar5);
                    if (param_1[0x163] == 0) {
                      plVar3 = (longlong *)0x0;
                    }
                    else {
                      plVar3 = (longlong *)param_1[0x164];
                    }
                    uVar4 = (**(code **)(*plVar3 + 0x18))();
                    FUN_140ee9d92(uVar4,*(undefined1 *)((longlong)param_1 + 0xd44));
                    if (local_68 != (code *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                }
              }
            }
            if (local_48 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_48 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_48)(local_48);
                LOCK();
                piVar1 = (int *)((longlong)local_48 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_48 + 0x10))(local_48);
                }
              }
            }
          }
        }
      }
      goto LAB_140eeb487;
    }
    *(undefined1 *)((longlong)param_1 + 0xd45) = 1;
  }
LAB_140eeb370:
  if ((param_1[0x163] != 0) && ((longlong *)param_1[0x164] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)param_1[0x164] + 0x18))();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
  }
LAB_140eeb487:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eeb8c0 FUN_140eeb8c0 body=224 status=ok
// SIG undefined FUN_140eeb8c0(void)

void FUN_140eeb8c0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  *(longlong *)(param_1 + 0x1b0) = param_2;
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  if (uVar1 < 0xffffffff00000000) {
    plVar5 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar5 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x000140eeb99d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,10);
    return;
  }
  uVar6 = (uint)uVar1;
  if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
    puVar3 = &DAT_14c998070;
    if (DAT_14c998080 != (undefined *)0x0) {
      puVar3 = DAT_14c998080;
    }
    if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
      lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
      puVar4 = *(uint **)(lVar2 + 0x18);
      if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
        puVar4 = (uint *)(lVar2 + 8);
      }
      *puVar4 = *puVar4 | 0x400;
      *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
    }
  }
  return;
}



// FUNCTION 140eeb9a0 FUN_140eeb9a0 body=352 status=ok
// SIG undefined FUN_140eeb9a0(void)

void FUN_140eeb9a0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined1 local_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x208) != 0)) {
    plVar2 = (longlong *)FUN_140eebb02(param_2,1,0);
    if (plVar2 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar2 + 0x4c8))
                        (plVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x1b8));
      if (cVar1 != '\0') {
        (**(code **)(*plVar2 + 0x4a8))
                  (plVar2,local_88,*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x1b8),2);
        *(undefined4 *)(param_1 + 0x538) = local_68;
        *(undefined4 *)(param_1 + 0x53c) = uStack_64;
        *(undefined4 *)(param_1 + 0x540) = uStack_60;
        *(undefined4 *)(param_1 + 0x544) = uStack_5c;
        *(undefined8 *)(param_1 + 0x548) = local_58;
      }
      lVar3 = FUN_14479d2ce(param_1 + 0x1f8);
      if (lVar3 != 0) {
        local_90 = plVar2[0x25];
        lVar3 = FUN_1404dcd0c(lVar3 + 0x1288,*(longlong *)(param_1 + 0x208) + 0x140);
        if (lVar3 != 0) {
          lVar4 = FUN_1402576f0();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
            FUN_140eebf8e(local_88,lVar3,&local_90,0);
            *(undefined4 *)(param_1 + 0x550) = local_68;
            *(undefined4 *)(param_1 + 0x554) = uStack_64;
            *(undefined4 *)(param_1 + 0x558) = uStack_60;
            *(undefined4 *)(param_1 + 0x55c) = uStack_5c;
            *(undefined8 *)(param_1 + 0x560) = local_58;
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eebb02 FUN_140eebb02 body=57 status=ok
// SIG undefined FUN_140eebb02(void)

undefined8 FUN_140eebb02(longlong param_1,char param_2,byte param_3)

{
  longlong lVar1;
  
  if (param_2 == '\0') {
    lVar1 = 0xd08;
    if (*(int *)(param_1 + 0xd10) <= (int)(uint)param_3) {
      return 0;
    }
  }
  else {
    lVar1 = 0xd18;
    if (*(int *)(param_1 + 0xd20) <= (int)(uint)param_3) {
      return 0;
    }
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + lVar1) + (ulonglong)param_3 * 8);
  if (lVar1 == 0) {
    return 0;
  }
  return *(undefined8 *)(lVar1 + 0x48);
}



// FUNCTION 140eebb3c FUN_140eebb3c body=1105 status=ok
// SIG undefined FUN_140eebb3c(void)

/* WARNING: Removing unreachable block (ram,0x000140eebf06) */

void FUN_140eebb3c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_128 [40];
  char local_100 [8];
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined4 local_d8 [2];
  char local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined4 local_a8 [2];
  int local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  int local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  int *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100[0] = *(char *)(param_1 + 0x18);
  if (local_100[0] == '\x01') {
    local_100[0] = '\x02';
    if (*(longlong *)(param_1 + 0x20) == 0) {
      local_f8._0_4_ = 0;
      iVar4 = 0;
      uVar5 = (uint)local_f8;
    }
    else {
      uVar5 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0xc);
      local_f8 = (ulonglong)uVar5;
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar4 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar4 = *(int *)(lVar11 + 0x10);
        bVar12 = iVar4 == 0;
        if (bVar12) {
          *(int *)(lVar11 + 0x10) = iVar10;
          iVar4 = 0;
        }
        UNLOCK();
        uVar5 = (uint)local_f8;
        if (bVar12) {
          iVar4 = iVar10;
        }
      }
    }
    local_f8._0_4_ = uVar5;
    local_f8 = CONCAT44(iVar4,(uint)local_f8);
  }
  else if (local_100[0] == '\x02') {
    local_f8 = *(undefined8 *)(param_1 + 0x20);
  }
  else if (local_100[0] == '\x03') {
    local_f8 = *(undefined8 *)(param_1 + 0x20);
    local_f0 = *(longlong **)(param_1 + 0x28);
    if (local_f0 == (longlong *)0x0) {
      local_e8 = *(undefined8 *)(param_1 + 0x30);
      local_e0 = *(undefined1 *)(param_1 + 0x38);
    }
    else {
      LOCK();
      *(int *)((longlong)local_f0 + 0xc) = *(int *)((longlong)local_f0 + 0xc) + 1;
      UNLOCK();
      local_e8 = *(undefined8 *)(param_1 + 0x30);
      local_e0 = *(undefined1 *)(param_1 + 0x38);
    }
  }
  local_d8[0] = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar6 = FUN_1448174c4(local_d8);
    FUN_1400e08b0(uVar6,DAT_14c9a3da0 + (longlong)*(int *)(param_1 + 0x40) * 0x10 + -0x10);
  }
  local_d0 = '\0';
  local_a8[0] = 0;
  lVar11 = *(longlong *)(param_2 + 0x50);
  if (lVar11 == 0) {
    uVar6 = FUN_14016979c();
    lVar11 = FUN_14477b664(uVar6);
    *(longlong *)(param_2 + 0x50) = lVar11;
  }
  lVar7 = *(longlong *)(param_2 + 0x58);
  if (((lVar7 == 0) && (lVar7 = 0, lVar11 != 0)) && (*(longlong *)(param_2 + 0x48) != 0)) {
    plVar1 = *(longlong **)(lVar11 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
      lVar7 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar7 = FUN_144aff482(uVar6,(longlong *)(param_2 + 0x48));
    }
    *(longlong *)(param_2 + 0x58) = lVar7;
  }
  FUN_1400606f6(&local_78,lVar7,local_100);
  piVar8 = local_48;
  if (local_48 == (int *)0x0) {
    piVar8 = &local_78;
  }
  piVar9 = (int *)&DAT_14c9a40e0;
  if (0 < local_40) {
    piVar9 = piVar8;
  }
  piVar8 = &local_a0;
  FUN_1400603ec(piVar8,lVar7,piVar9);
  piVar9 = local_48;
  if (local_48 == (int *)0x0) {
    piVar9 = &local_78;
  }
  FUN_1446fdf58(piVar9,local_40);
  if (local_48 != (int *)0x0) {
    FUN_1400020a8();
  }
  if (local_80 == 1) {
    bVar12 = local_a0 != 0;
    uVar5 = 1;
  }
  else {
    piVar9 = &local_78;
    FUN_1400b56fe(piVar9,&local_a0,1);
    bVar12 = local_78 != 0;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_60) {
        piVar9 = (int *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar2)(piVar9);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
    bVar12 = local_58 != 0 && bVar12;
    uVar5 = (uint)local_80;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_88) {
      piVar8 = (int *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar2)(piVar8);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  FUN_1448173f8(local_a8);
  if (local_d0 != '\0') {
    if (local_d0 == '\x01') {
      local_c8 = 0;
    }
    else if ((local_d0 == '\x03') && (local_c0 != (longlong *)0x0)) {
      LOCK();
      piVar8 = (int *)((longlong)local_c0 + 0xc);
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    local_d0 = '\0';
  }
  FUN_1448173f8(local_d8);
  if ((local_100[0] == '\x03') && (local_f0 != (longlong *)0x0)) {
    LOCK();
    piVar8 = (int *)((longlong)local_f0 + 0xc);
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (*piVar8 == 0) {
      (**(code **)(*local_f0 + 0x10))();
    }
  }
  if (bVar12) {
    FUN_140898514(param_2 + 0xc0,1);
    *(undefined1 *)(param_2 + 0x157) = 1;
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eebf8e FUN_140eebf8e body=2283 status=ok
// SIG undefined FUN_140eebf8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_140eebf8e(undefined1 (*param_1) [16],longlong param_2,undefined8 param_3,float param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  undefined1 (*pauVar23) [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar35 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar44;
  undefined1 auVar43 [16];
  undefined1 auStack_3a8 [32];
  undefined1 local_388;
  undefined1 *local_380;
  double local_370;
  undefined1 local_368 [16];
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [8];
  int local_2c0;
  longlong local_2b8;
  uint local_2b0;
  undefined4 local_2ac;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  undefined1 local_27a;
  undefined1 local_279;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if ((param_2 == 0) || (lVar20 = *(longlong *)(param_2 + 0x40), lVar20 == 0)) {
    puVar21 = &DAT_14c846480;
    for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
      *(undefined8 *)*param_1 = *puVar21;
      puVar21 = puVar21 + 1;
      param_1 = (undefined1 (*) [16])(*param_1 + 8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_3a8);
  }
  local_2b8 = lVar20 + 0x50;
  puVar21 = &DAT_14c846480;
  pauVar23 = param_1;
  for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
    *(undefined8 *)*pauVar23 = *puVar21;
    puVar21 = puVar21 + 1;
    pauVar23 = (undefined1 (*) [16])(*pauVar23 + 8);
  }
  local_2b0 = FUN_144a750a0(local_2b8,param_3);
  local_2ac = 0xffffffff;
  uVar22 = 0xffffffff;
  if ((int)local_2b0 < *(int *)(lVar20 + 0x78)) {
    uVar22 = (ulonglong)local_2b0;
  }
  if ((int)local_2b0 < 0) {
    uVar22 = 0xffffffff;
  }
  FUN_140efcab2(&local_2b8,local_2c8);
  dVar31 = *(double *)*param_1;
  dVar37 = *(double *)(*param_1 + 8);
  if ((int)uVar22 != local_2c0) {
    local_370 = (double)param_4;
    auVar43 = param_1[1];
    dVar14 = *(double *)param_1[2];
    dVar15 = *(double *)(param_1[2] + 8);
    dVar12 = *(double *)param_1[3];
    dVar38 = *(double *)(param_1[3] + 8);
    dVar36 = *(double *)param_1[4];
    dVar41 = *(double *)(param_1[4] + 8);
    dVar5 = *(double *)param_1[5];
    dVar30 = *(double *)(param_1[5] + 8);
    local_338 = 0.0;
    dStack_330 = 1.0;
    do {
      local_368._8_4_ = SUB84(dVar41,0);
      local_368._0_8_ = dVar36;
      local_368._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
      local_328 = 0.0;
      dStack_320 = 0.0;
      local_318 = local_338;
      dStack_310 = dStack_330;
      local_2f8 = 0.0;
      dStack_2f0 = 0.0;
      local_308 = 0.0;
      dStack_300 = 0.0;
      local_2e8 = 1.0;
      dStack_2e0 = 1.0;
      local_2d8 = 1.0;
      dStack_2d0 = 0.0;
      local_279 = 0;
      local_380 = &local_27a;
      local_388 = 0;
      lVar19 = param_2;
      uVar16 = FUN_140efcb26(param_2,&local_328,uVar22,local_370);
      auVar27._8_8_ = dStack_2e0;
      auVar27._0_8_ = local_2e8;
      auVar33._8_8_ = dStack_2d0;
      auVar33._0_8_ = local_2d8;
      auVar26._8_8_ = dVar41;
      auVar26._0_8_ = dVar36;
      auVar27 = minpd(auVar26,auVar27);
      auVar32._8_8_ = dVar30;
      auVar32._0_8_ = dVar5;
      auVar33 = minpd(auVar32,auVar33);
      auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
      auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
      iVar17 = movmskpd(uVar16,auVar28);
      auVar34._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
      auVar34._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
      uVar18 = movmskpd((int)lVar19,auVar34);
      dVar42 = auVar43._0_8_;
      dVar44 = auVar43._8_8_;
      if ((uVar18 & 0x3fffffff) == 0 && iVar17 == 0) {
        dVar1 = local_328 * dVar37;
        dVar2 = local_328 * dVar31;
        dVar7 = dVar31 * dStack_320;
        dVar9 = dVar37 * dStack_320;
        dVar36 = dVar31 * local_318;
        dVar31 = dVar37 * local_318 * -1.0 +
                 dVar42 * dStack_320 + dVar44 * local_328 * 1.0 + dVar31 * dStack_310;
        dVar37 = dVar36 * 1.0 +
                 dVar44 * dStack_320 + dVar42 * local_328 * -1.0 + dVar37 * dStack_310;
        dVar14 = dVar14 * local_2e8;
        dVar15 = dVar15 * dStack_2e0;
        dVar12 = dVar12 * local_2d8;
        dVar38 = dVar38 * dStack_2d0;
        dVar8 = dVar15 * local_328 - dVar14 * dStack_320;
        dVar10 = dVar12 * dStack_320 - dVar15 * local_318;
        dVar39 = dVar14 * local_318 - dVar12 * local_328;
        dVar40 = dVar38 * dStack_310 - dVar38 * dStack_310;
        dVar10 = dVar10 + dVar10;
        dVar39 = dVar39 + dVar39;
        dVar8 = dVar8 + dVar8;
        dVar40 = dVar40 + dVar40;
        dVar36 = (double)local_368._0_8_ * local_2e8;
        dVar41 = (double)local_368._8_8_ * dStack_2e0;
        dVar38 = (dVar40 * dStack_310 - dVar40 * dStack_310) + dStack_310 * dVar40 + dVar38 +
                 dStack_2f0;
        dVar5 = dVar5 * local_2d8;
        dVar30 = dVar30 * dStack_2d0;
        auVar43._8_8_ = dVar42 * local_318 * -1.0 + ((dVar2 * -1.0 + dVar44 * dStack_310) - dVar9);
        auVar43._0_8_ = dVar44 * local_318 * 1.0 + ((dVar1 * 1.0 + dVar42 * dStack_310) - dVar7);
        dVar12 = (dVar39 * local_328 - dStack_320 * dVar10) + dStack_310 * dVar8 + dVar12 +
                 local_2f8;
        dVar14 = (dVar8 * dStack_320 - local_318 * dVar39) + dStack_310 * dVar10 + dVar14 +
                 local_308;
        dVar15 = (dVar10 * local_318 - dVar8 * local_328) + dStack_310 * dVar39 + dVar15 +
                 dStack_300;
      }
      else {
        local_348 = dVar5 * local_2d8;
        dStack_340 = dVar30 * dStack_2d0;
        dVar38 = dStack_320 + dStack_320;
        dVar36 = local_318 + local_318;
        dVar30 = local_328 * (local_328 + local_328);
        local_1a8 = (1.0 - (dVar30 + dStack_320 * dVar38)) * local_2d8;
        dVar41 = (local_328 + local_328) * dStack_310;
        local_1b8 = (dVar38 * dStack_310 + local_328 * dVar36) * local_2d8;
        dStack_1b0 = (dVar36 * dStack_320 - dVar41) * local_2d8;
        local_358 = (double)local_368._0_8_ * local_2e8;
        dStack_350 = (double)local_368._8_8_ * dStack_2e0;
        local_1f8 = (1.0 - (local_318 * dVar36 + dStack_320 * dVar38)) * local_2e8;
        dVar30 = (1.0 - (local_318 * dVar36 + dVar30)) * dStack_2e0;
        dStack_1f0 = (dVar38 * local_328 + dVar36 * dStack_310) * local_2e8;
        local_1c8 = (dVar36 * dStack_320 + dVar41) * dStack_2e0;
        local_1e8 = (local_328 * dVar36 - dVar38 * dStack_310) * local_2e8;
        uStack_1e0 = 0;
        local_1d8._8_4_ = SUB84(dVar30,0);
        local_1d8._0_8_ = (dVar38 * local_328 - dVar36 * dStack_310) * dStack_2e0;
        local_1d8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = local_308;
        dStack_190 = dStack_300;
        local_188 = local_2f8;
        uStack_180 = 0x3ff0000000000000;
        dVar30 = dVar37 + dVar37;
        dVar36 = dVar42 + dVar42;
        dVar38 = dVar31 * (dVar31 + dVar31);
        local_228 = (1.0 - (dVar38 + dVar37 * dVar30)) * dVar5;
        dVar41 = (dVar31 + dVar31) * dVar44;
        local_238 = (dVar30 * dVar44 + dVar31 * dVar36) * dVar5;
        local_258 = (dVar30 * dVar31 - dVar36 * dVar44) * (double)local_368._8_8_;
        dStack_230 = (dVar36 * dVar37 - dVar41) * dVar5;
        local_278 = (1.0 - (dVar42 * dVar36 + dVar37 * dVar30)) * (double)local_368._0_8_;
        dStack_250 = (1.0 - (dVar42 * dVar36 + dVar38)) * (double)local_368._8_8_;
        dStack_270 = (dVar30 * dVar31 + dVar36 * dVar44) * (double)local_368._0_8_;
        local_248 = (dVar36 * dVar37 + dVar41) * (double)local_368._8_8_;
        local_268 = (dVar31 * dVar36 - dVar30 * dVar44) * (double)local_368._0_8_;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218._8_4_ = SUB84(dVar15,0);
        local_218._0_8_ = dVar14;
        local_218._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
        local_208._8_4_ = 0;
        local_208._0_8_ = dVar12;
        local_208._12_4_ = 0x3ff00000;
        FUN_1447fea8d(&local_178);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        dVar30 = dStack_340;
        dVar5 = local_348;
        dVar41 = dStack_350;
        dVar36 = local_358;
        auVar43 = _DAT_149934d80;
        auVar24._8_8_ = -(ulonglong)(0.0 <= dStack_350);
        auVar24._0_8_ = -(ulonglong)(0.0 <= local_358);
        auVar27 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar24);
        dVar31 = (double)(~-(ulonglong)(0.0 <= local_348) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= local_348) & 0x3ff0000000000000);
        dVar37 = auVar27._0_8_;
        local_168 = local_168 * dVar37;
        local_170 = local_170 * dVar37;
        local_178 = local_178 * dVar37;
        dVar37 = auVar27._8_8_;
        local_148 = local_148 * dVar37;
        local_150 = local_150 * dVar37;
        local_158 = dVar37 * local_158;
        local_128 = local_128 * dVar31;
        local_130 = local_130 * dVar31;
        local_138 = dVar31 * local_138;
        FUN_14481fd10(&local_2a8);
        dVar31 = local_298 * local_298 + local_2a8 * local_2a8;
        dVar37 = dStack_290 * dStack_290 + dStack_2a0 * dStack_2a0;
        auVar29._0_8_ = dVar31 + dVar37;
        auVar29._8_8_ = dVar31 + dVar37;
        auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
        auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
        auVar27 = sqrtpd(auVar29,auVar29);
        auVar27 = divpd(auVar43,auVar27);
        auVar35._0_8_ = auVar27._0_8_ * local_298;
        auVar35._8_8_ = auVar27._8_8_ * dStack_290;
        auVar43 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar35,auVar25);
        dVar31 = (double)((ulonglong)(local_2a8 * auVar27._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_));
        dVar37 = (double)((ulonglong)(dStack_2a0 * auVar27._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_));
        dVar38 = 0.0;
        dVar12 = local_108;
        dVar14 = local_118;
        dVar15 = dStack_110;
      }
      if (((int)uVar22 < 0) || (*(int *)(lVar20 + 0x78) <= (int)uVar22)) {
LAB_140eec395:
        uVar22 = 0xffffffff;
      }
      else {
        uVar18 = *(uint *)(*(longlong *)(lVar20 + 0x70) + 8 + uVar22 * 0xc);
        uVar22 = (ulonglong)uVar18;
        if (((int)uVar18 < 0) || (*(int *)(lVar20 + 0x78) <= (int)uVar18)) goto LAB_140eec395;
      }
    } while ((int)uVar22 != local_2c0);
    auVar3._8_4_ = SUB84(dVar41,0);
    auVar3._0_8_ = dVar36;
    auVar3._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    param_1[4] = auVar3;
    auVar4._8_4_ = SUB84(dVar30,0);
    auVar4._0_8_ = dVar5;
    auVar4._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
    param_1[5] = auVar4;
    param_1[1] = auVar43;
    auVar13._8_4_ = SUB84(dVar15,0);
    auVar13._0_8_ = dVar14;
    auVar13._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    param_1[2] = auVar13;
    auVar11._8_4_ = SUB84(dVar38,0);
    auVar11._0_8_ = dVar12;
    auVar11._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    param_1[3] = auVar11;
  }
  auVar6._8_4_ = SUB84(dVar37,0);
  auVar6._0_8_ = dVar31;
  auVar6._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
  *param_1 = auVar6;
  if ((local_f0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eec880 FUN_140eec880 body=2208 status=ok
// SIG undefined FUN_140eec880(void)

void FUN_140eec880(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  byte bVar1;
  void *_Src;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  undefined8 uStack_60;
  code *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*param_4 < 0) || (lVar3 = FUN_140d71416(param_3,param_4), lVar3 == 0)) goto LAB_140eece30;
  if (DAT_14cbae3d8 == 0) {
    local_90 = &local_58;
    local_58 = FUN_141030f22;
    local_80 = FUN_14081d0ea;
    local_88 = &LAB_1464f5fc4;
    local_98 = &LAB_148c3dd26;
    local_a0 = &LAB_1459673ba;
    local_a8 = L"Engine";
    local_b0 = 0;
    local_b8 = 0x10000004;
    local_c0 = 0x10;
    local_c8 = 0x1360;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
  }
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cbae3d8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) != DAT_14cbae3d8 + 0x30)) goto LAB_140eece30;
  lVar13 = *(longlong *)(lVar3 + 0x408);
  if (lVar13 != 0) {
    lVar4 = FUN_1402095ca();
    lVar9 = *(longlong *)(lVar13 + 0x10);
    iVar11 = *(int *)(lVar9 + 0x38);
    if ((iVar11 < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)) {
      if (DAT_14cba8288 == 0) {
        local_90 = &local_58;
        local_58 = FUN_141864c34;
        local_80 = FUN_14081d0ea;
        local_88 = &LAB_1464cee30;
        local_98 = &LAB_148bfac22;
        local_a0 = &LAB_140f21842;
        local_a8 = L"Game";
        local_b0 = 0;
        local_b8 = 0x10000004;
        local_c0 = 0x10;
        local_c8 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        lVar9 = *(longlong *)(lVar13 + 0x10);
        iVar11 = *(int *)(lVar9 + 0x38);
      }
      if ((iVar11 < *(int *)(DAT_14cba8288 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8)
          != DAT_14cba8288 + 0x30)) goto LAB_140eeca6c;
      local_68 = DAT_14cbc32f8;
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        uVar2 = (uint)((ulonglong)DAT_14cbc32f8 >> 0x10);
        uVar12 = (uint)DAT_14cbc32f8 & 0xffff;
        plVar7 = param_2 + 7;
        if ((longlong *)param_2[8] != (longlong *)0x0) {
          plVar7 = (longlong *)param_2[8];
        }
        iVar11 = *(int *)((longlong)plVar7 +
                         (ulonglong)
                         ((int)param_2[9] - 1U &
                         (int)((ulonglong)DAT_14cbc32f8 >> 0x20) +
                         ((uint)DAT_14cbc32f8 << 0x10 | uVar12) + (uVar2 << 0x13 | uVar2 & 0xffff) +
                         (uVar12 >> 4)) * 4);
        if (iVar11 != -1) {
          do {
            if (*(longlong *)(*param_2 + (longlong)iVar11 * 0x10) == DAT_14cbc32f8)
            goto LAB_140eeca3d;
            iVar11 = *(int *)((longlong)iVar11 * 0x10 + *param_2 + 8);
          } while (iVar11 != -1);
        }
      }
      FUN_144a13f80(param_2,&local_58,&local_68,0);
      lVar9 = param_2[10];
      plVar7 = (longlong *)(lVar9 + 0x30);
      uVar2 = *(uint *)(lVar9 + 0x3c);
      if ((int)uVar2 < 1) {
        FUN_140d7698c(plVar7,1);
        uVar2 = *(uint *)(lVar9 + 0x3c);
      }
      iVar11 = *(int *)(lVar9 + 0x38);
      *(uint *)(lVar9 + 0x38) = iVar11 + 1U;
      if (uVar2 < iVar11 + 1U) {
        FUN_140eed74c(plVar7,iVar11);
      }
      lVar9 = *plVar7;
      lVar4 = (longlong)iVar11 * 0x30;
      *(undefined1 *)(lVar9 + 0x20 + lVar4) = 0;
      FUN_140056680(&local_58,&DAT_149dfb77a);
      (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(lVar9 + 0x20 + lVar4)])(lVar9 + lVar4);
      *(code **)(lVar9 + lVar4) = local_58;
      *(int *)(lVar9 + 8 + lVar4) = local_50;
      *(undefined4 *)(lVar9 + 0xc + lVar4) = local_4c;
      *(undefined1 *)(lVar9 + 0x20 + lVar4) = 4;
      *(longlong *)(lVar9 + 0x28 + lVar4) = local_68;
LAB_140eeca3d:
      uVar5 = *(undefined8 *)(lVar13 + 0x3f70);
    }
    else {
      pwVar10 = L"passenger";
      if (*(char *)(lVar3 + 0xe0a) != '\0') {
        pwVar10 = L"driving";
      }
      local_58 = (code *)pwVar10;
      FUN_1457c4bb0(param_2);
      uVar5 = *(undefined8 *)(lVar13 + 0x1a00);
    }
    FUN_1410a642a(&local_58,uVar5);
    FUN_140eed5b6(param_2,&local_58);
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140eeca6c:
  uVar14 = FUN_140ebe5be(lVar3);
  local_58._0_4_ = uVar14;
  FUN_140eed314(param_2,&DAT_14cbc3308,&local_58);
  uVar5 = FUN_1401e6c61();
  puVar6 = (undefined4 *)FUN_1409e484c(lVar3,uVar5);
  local_58 = (code *)CONCAT44(local_58._4_4_,*puVar6);
  FUN_140eed466(param_2,&DAT_14cbc3318,&local_58);
  bVar1 = *(byte *)(lVar3 + 0x710);
  local_58 = DAT_14cbc3328;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar2 = (uint)((ulonglong)DAT_14cbc3328 >> 0x10);
    uVar12 = (uint)DAT_14cbc3328 & 0xffff;
    plVar7 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[8];
    }
    iVar11 = *(int *)((longlong)plVar7 +
                     (ulonglong)
                     ((int)param_2[9] - 1U &
                     (int)((ulonglong)DAT_14cbc3328 >> 0x20) +
                     ((uint)DAT_14cbc3328 << 0x10 | uVar12) + (uVar2 << 0x13 | uVar2 & 0xffff) +
                     (uVar12 >> 4)) * 4);
    if (iVar11 != -1) {
      do {
        if (*(code **)(*param_2 + (longlong)iVar11 * 0x10) == DAT_14cbc3328) goto LAB_140eecb91;
        iVar11 = *(int *)((longlong)iVar11 * 0x10 + *param_2 + 8);
      } while (iVar11 != -1);
    }
  }
  FUN_144a13f80(param_2,&local_68,&local_58,0);
  lVar13 = param_2[10];
  plVar7 = (longlong *)(lVar13 + 0x30);
  uVar2 = *(uint *)(lVar13 + 0x3c);
  if ((int)uVar2 < 1) {
    FUN_140d7698c(plVar7,1);
    uVar2 = *(uint *)(lVar13 + 0x3c);
  }
  iVar11 = *(int *)(lVar13 + 0x38);
  *(uint *)(lVar13 + 0x38) = iVar11 + 1U;
  if (uVar2 < iVar11 + 1U) {
    FUN_140eed74c(plVar7,iVar11);
  }
  lVar13 = *plVar7;
  lVar9 = (longlong)iVar11 * 0x30;
  *(ulonglong *)(lVar13 + lVar9) = (ulonglong)bVar1;
  *(undefined1 *)(lVar13 + 0x20 + lVar9) = 2;
  *(code **)(lVar13 + 0x28 + lVar9) = local_58;
LAB_140eecb91:
  plVar7 = *(longlong **)(lVar3 + 0x550);
  if (plVar7 == (longlong *)0x0) {
    FUN_140056680(&local_58,&DAT_149dfb77a);
  }
  else {
    (**(code **)(*plVar7 + 0x28))(plVar7,&local_58);
  }
  FUN_140eed122(param_2,&DAT_14cbc3338,&local_58);
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar7 = *(longlong **)(lVar3 + 0x550);
  if (plVar7 == (longlong *)0x0) {
    FUN_140056680(&local_58,&DAT_149dfb77a);
  }
  else {
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
  }
  FUN_140eed122(param_2,&DAT_14cbc3348,&local_58);
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar7 = (longlong *)FUN_14042ada0(lVar3);
  if ((((plVar7 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar7 + 0x2b8))(plVar7), lVar3 != 0))
      && (lVar3 = (**(code **)(*plVar7 + 0x2b0))(plVar7), lVar3 != 0)) &&
     (plVar7 = (longlong *)FUN_14039ffc6(lVar3), plVar7 != (longlong *)0x0)) {
    puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0xd0))(plVar7);
    local_58 = (code *)0x0;
    local_50 = *(int *)(puVar8 + 1);
    lVar3 = (longlong)local_50;
    _Src = (void *)*puVar8;
    if (lVar3 == 0) {
      local_4c = 0;
      local_68 = 0;
      uStack_60 = 0;
    }
    else {
      FUN_1446dd7be(&local_58,local_50,0);
      memcpy(local_58,_Src,lVar3 * 0xc);
      local_68 = 0;
      uStack_60 = 0;
      if (0 < local_50) {
        lVar13 = 0;
        lVar3 = 0;
        iVar11 = local_50;
        do {
          if (*(int *)(local_58 + lVar13) != 0) {
            if ((int)uStack_60 - 2U < 0x7fffffff) {
              FUN_1400020e8(&local_68,&DAT_149e06196,1);
            }
            FUN_1408226d0(local_58 + lVar13,&local_78,1);
            iVar11 = local_70 + -1;
            if (local_70 == 0) {
              iVar11 = 0;
            }
            FUN_1400020e8(&local_68,local_78,iVar11);
            iVar11 = local_50;
            if (local_78 != 0) {
              FUN_1400020a8();
              iVar11 = local_50;
            }
          }
          lVar3 = lVar3 + 1;
          lVar13 = lVar13 + 0xc;
        } while (lVar3 < iVar11);
      }
    }
    local_78 = DAT_14cbc3368;
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      uVar2 = (uint)((ulonglong)DAT_14cbc3368 >> 0x10);
      uVar12 = (uint)DAT_14cbc3368 & 0xffff;
      plVar7 = param_2 + 7;
      if ((longlong *)param_2[8] != (longlong *)0x0) {
        plVar7 = (longlong *)param_2[8];
      }
      iVar11 = *(int *)((longlong)plVar7 +
                       (ulonglong)
                       ((int)param_2[9] - 1U &
                       (int)((ulonglong)DAT_14cbc3368 >> 0x20) +
                       ((uint)DAT_14cbc3368 << 0x10 | uVar12) + (uVar2 << 0x13 | uVar2 & 0xffff) +
                       (uVar12 >> 4)) * 4);
      if (iVar11 != -1) {
        do {
          if (*(longlong *)(*param_2 + (longlong)iVar11 * 0x10) == DAT_14cbc3368)
          goto LAB_140eece0c;
          iVar11 = *(int *)((longlong)iVar11 * 0x10 + *param_2 + 8);
        } while (iVar11 != -1);
      }
    }
    FUN_144a13f80(param_2,local_44,&local_78,0);
    FUN_140eed200(param_2[10] + 0x30,&local_78,&local_68);
LAB_140eece0c:
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140eece30:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eed122 FUN_140eed122 body=221 status=ok
// SIG undefined FUN_140eed122(void)

void FUN_140eed122(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)local_28 >> 0x10);
    uVar3 = (uint)local_28 & 0xffff;
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)local_28 >> 0x20) + ((uint)local_28 << 0x10 | uVar3) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x10) == local_28) goto LAB_140eed1c4;
        iVar4 = *(int *)((longlong)iVar4 * 0x10 + *param_1 + 8);
      } while (iVar4 != -1);
    }
  }
  FUN_144a13f80(param_1,local_2c,&local_28,0);
  FUN_140eed200(param_1[10] + 0x30,&local_28,param_3);
LAB_140eed1c4:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eed200 FUN_140eed200 body=274 status=ok
// SIG undefined FUN_140eed200(void)

longlong * FUN_140eed200(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *_Src;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar2 < 1) {
    FUN_140d7698c(param_1);
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
  }
  lVar5 = param_1[1];
  uVar3 = (int)lVar5 + 1;
  *(uint *)(param_1 + 1) = uVar3;
  if (uVar2 < uVar3) {
    FUN_140eed74c();
  }
  lVar1 = *param_1;
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_3 + 1);
  lVar6 = (longlong)local_48;
  _Src = (void *)*param_3;
  if (lVar6 == 0) {
    local_44 = 0;
    iVar4 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar6 * 2);
    iVar4 = local_48;
  }
  lVar5 = (longlong)(int)lVar5 * 0x30;
  *(void **)(lVar1 + lVar5) = local_50;
  *(int *)(lVar1 + 8 + lVar5) = iVar4;
  *(undefined4 *)(lVar1 + 0xc + lVar5) = local_44;
  *(undefined1 *)(lVar1 + 0x20 + lVar5) = 4;
  *(undefined8 *)(lVar1 + 0x28 + lVar5) = *param_2;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eed314 FUN_140eed314 body=219 status=ok
// SIG undefined FUN_140eed314(void)

void FUN_140eed314(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)local_28 >> 0x10);
    uVar3 = (uint)local_28 & 0xffff;
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)local_28 >> 0x20) + ((uint)local_28 << 0x10 | uVar3) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x10) == local_28) goto LAB_140eed3d1;
        iVar4 = *(int *)((longlong)iVar4 * 0x10 + *param_1 + 8);
      } while (iVar4 != -1);
    }
  }
  FUN_144a13f80(param_1,local_2c,&local_28,0);
  FUN_140eed3f0(param_1[10] + 0x30,&local_28,param_3);
LAB_140eed3d1:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eed3f0 FUN_140eed3f0 body=117 status=ok
// SIG undefined FUN_140eed3f0(void)

longlong * FUN_140eed3f0(longlong *param_1,undefined8 *param_2,float *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar3 < 1) {
    FUN_140d7698c(param_1,1);
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (uVar3 < iVar1 + 1U) {
    FUN_140eed74c(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  *(double *)(lVar2 + lVar4) = (double)*param_3;
  *(undefined1 *)(lVar2 + 0x20 + lVar4) = 3;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = *param_2;
  return param_1;
}



// FUNCTION 140eed466 FUN_140eed466 body=219 status=ok
// SIG undefined FUN_140eed466(void)

void FUN_140eed466(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)local_28 >> 0x10);
    uVar3 = (uint)local_28 & 0xffff;
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)local_28 >> 0x20) + ((uint)local_28 << 0x10 | uVar3) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x10) == local_28) goto LAB_140eed523;
        iVar4 = *(int *)((longlong)iVar4 * 0x10 + *param_1 + 8);
      } while (iVar4 != -1);
    }
  }
  FUN_144a13f80(param_1,local_2c,&local_28,0);
  FUN_140eed542(param_1[10] + 0x30,&local_28,param_3);
LAB_140eed523:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eed542 FUN_140eed542 body=115 status=ok
// SIG undefined FUN_140eed542(void)

longlong * FUN_140eed542(longlong *param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar3 < 1) {
    FUN_140d7698c(param_1,1);
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (uVar3 < iVar1 + 1U) {
    FUN_140eed74c(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  *(longlong *)(lVar2 + lVar4) = (longlong)*param_3;
  *(undefined1 *)(lVar2 + 0x20 + lVar4) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = *param_2;
  return param_1;
}



// FUNCTION 140eed5b6 FUN_140eed5b6 body=404 status=ok
// SIG undefined FUN_140eed5b6(void)

void FUN_140eed5b6(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  void *_Src;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = DAT_14cbc32e8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)DAT_14cbc32e8 >> 0x10);
    uVar3 = (uint)DAT_14cbc32e8 & 0xffff;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)DAT_14cbc32e8 >> 0x20) + ((uint)DAT_14cbc32e8 << 0x10 | uVar3)
                    + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x10) == DAT_14cbc32e8) goto LAB_140eed70a;
        iVar6 = *(int *)((longlong)iVar6 * 0x10 + *param_1 + 8);
      } while (iVar6 != -1);
    }
  }
  FUN_144a13f80(param_1,&local_40,&local_48,0);
  lVar1 = param_1[10];
  uVar2 = *(uint *)(lVar1 + 0x3c);
  if ((int)uVar2 < 1) {
    FUN_140d7698c((longlong *)(lVar1 + 0x30));
    uVar2 = *(uint *)(lVar1 + 0x3c);
  }
  iVar6 = *(int *)(lVar1 + 0x38);
  uVar3 = iVar6 + 1;
  *(uint *)(lVar1 + 0x38) = uVar3;
  if (uVar2 < uVar3) {
    FUN_140eed74c();
  }
  lVar1 = *(longlong *)(lVar1 + 0x30);
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_2 + 1);
  lVar7 = (longlong)local_38;
  _Src = (void *)*param_2;
  if (lVar7 == 0) {
    local_34 = 0;
    iVar4 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar7 * 2);
    iVar4 = local_38;
  }
  lVar7 = (longlong)iVar6 * 0x30;
  *(void **)(lVar1 + lVar7) = local_40;
  *(int *)(lVar1 + 8 + lVar7) = iVar4;
  *(undefined4 *)(lVar1 + 0xc + lVar7) = local_34;
  *(undefined1 *)(lVar1 + 0x20 + lVar7) = 4;
  *(longlong *)(lVar1 + 0x28 + lVar7) = local_48;
LAB_140eed70a:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eed74c FUN_140eed74c body=275 status=ok
// SIG undefined FUN_140eed74c(void)

void FUN_140eed74c(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140eed860 FUN_140eed860 body=286 status=ok
// SIG undefined FUN_140eed860(void)

undefined8 FUN_140eed860(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140eed978;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140eed978;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140eed978:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140eed925;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_140eed925;
    }
  }
  uVar6 = 0;
LAB_140eed925:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eed98e FUN_140eed98e body=172 status=ok
// SIG undefined FUN_140eed98e(void)

void FUN_140eed98e(longlong *param_1)

{
  undefined1 auStack_168 [32];
  undefined1 local_148 [104];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  (**(code **)(*param_1 + 0x7a8))(param_1,local_a8);
  FUN_1448ac920(local_148,local_a8);
  (**(code **)(*param_1 + 0x528))(param_1,&local_e0,local_148);
  param_1[0x32] = local_b0;
  *(undefined4 *)(param_1 + 0x30) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0x184) = uStack_bc;
  *(undefined4 *)(param_1 + 0x31) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x18c) = uStack_b4;
  *(undefined4 *)(param_1 + 0x2e) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0x174) = uStack_cc;
  *(undefined4 *)(param_1 + 0x2f) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x17c) = uStack_c4;
  *(undefined4 *)(param_1 + 0x2c) = local_e0;
  *(undefined4 *)((longlong)param_1 + 0x164) = uStack_dc;
  *(undefined4 *)(param_1 + 0x2d) = uStack_d8;
  *(undefined4 *)((longlong)param_1 + 0x16c) = uStack_d4;
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eeda3c FUN_140eeda3c body=1415 status=ok
// SIG undefined FUN_140eeda3c(void)

undefined8 FUN_140eeda3c(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  short sVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  double *pdVar17;
  double *pdVar18;
  short *psVar19;
  short *psVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_208 [32];
  float local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  short *local_1c8;
  short *local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138 [12];
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  plVar14 = *(longlong **)(param_1 + 0x620);
  if (*(code **)(*plVar14 + 0x50) != FUN_144828418) {
    plVar14 = (longlong *)(**(code **)(*plVar14 + 0x50))();
  }
  FUN_1447a1fc0(plVar14);
  plVar14 = *(longlong **)(param_1 + 0x620);
  pcVar7 = *(code **)(*plVar14 + 0x28);
  if (pcVar7 == FUN_14482841c) {
    plVar15 = plVar14 + 3;
    if (plVar14[5] != 0) {
      plVar15 = (longlong *)(plVar14[5] + 8);
    }
  }
  else if (pcVar7 == (code *)&LAB_14010c34c) {
    plVar15 = plVar14 + 2;
  }
  else {
    plVar15 = (longlong *)(*pcVar7)(plVar14);
  }
  if (((int)plVar15[1] < 2) || (*(longlong *)(param_1 + 0x638) == 0)) {
    FUN_1448ac0c6(param_1,param_2);
    if ((local_b0 ^ (ulonglong)auStack_208) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  fVar1 = *(float *)(param_1 + 0x650);
  fVar2 = *(float *)(param_1 + 0x648);
  fVar3 = *(float *)(param_1 + 0x654);
  fVar4 = *(float *)(param_1 + 0x64c);
  plVar14 = *(longlong **)(param_1 + 0x620);
  if (*(code **)(*plVar14 + 0x50) != FUN_144828418) {
    plVar14 = (longlong *)(**(code **)(*plVar14 + 0x50))();
  }
  FUN_1447a1fc0(plVar14);
  plVar14 = *(longlong **)(param_1 + 0x620);
  pcVar7 = *(code **)(*plVar14 + 0x28);
  if (pcVar7 == FUN_14482841c) {
    plVar15 = plVar14 + 3;
    if (plVar14[5] != 0) {
      plVar15 = (longlong *)(plVar14[5] + 8);
    }
  }
  else if (pcVar7 == (code *)&LAB_14010c34c) {
    plVar15 = plVar14 + 2;
  }
  else {
    plVar15 = (longlong *)(*pcVar7)(plVar14);
  }
  if ((int)plVar15[1] == 0) {
    psVar20 = &DAT_149dfb77a;
  }
  else {
    psVar20 = (short *)*plVar15;
  }
  if (*psVar20 == 0) {
    fVar27 = 0.0;
    fVar26 = -1.0;
  }
  else {
    fVar26 = -1.0;
    fVar27 = 0.0;
    psVar19 = psVar20;
    do {
      local_1d8 = *(undefined4 *)(param_1 + 0x65c);
      local_1e0 = *(undefined4 *)(param_1 + 0x658);
      local_1e8 = fVar1 * fVar4 * fVar3;
      local_1c8 = psVar20;
      local_1c0 = psVar19;
      FUN_140eee6ba(local_138,&local_1c8,*(undefined8 *)(param_1 + 0x638),fVar2 * fVar1 * fVar3);
      dVar9 = local_138[1];
      dVar22 = local_138[1];
      if (local_138[1] <= 0.0) {
        fVar21 = (float)FUN_140324d4e(*(undefined8 *)(param_1 + 0x638));
        dVar22 = (double)fVar21;
      }
      fVar27 = (float)((double)fVar27 + dVar22);
      fVar26 = (float)(~-(uint)(fVar26 < 0.0) & (uint)fVar26 |
                      (uint)(float)dVar9 & -(uint)(fVar26 < 0.0));
      for (; sVar6 = *psVar19, sVar6 != 0; psVar19 = psVar19 + 1) {
        if (sVar6 == 10) {
          psVar19 = psVar19 + 1;
          break;
        }
        if ((((sVar6 == 0x3c) && (psVar19[1] == 0x62)) && (psVar19[2] == 0x72)) &&
           (psVar19[3] == 0x3e)) {
          psVar19 = psVar19 + 4;
          break;
        }
      }
    } while (*psVar19 != 0);
  }
  pdVar17 = (double *)&DAT_14c846400;
  pdVar18 = local_138;
  for (lVar16 = 0x10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *pdVar18 = *pdVar17;
    pdVar17 = pdVar17 + 1;
    pdVar18 = pdVar18 + 1;
  }
  cVar5 = *(char *)(param_1 + 0x641);
  if (cVar5 == '\x02') {
    fVar26 = -fVar27;
    goto LAB_140eedcbf;
  }
  if (cVar5 != '\0') {
    if (cVar5 == '\x01') {
      fVar26 = fVar27 * -0.5;
      goto LAB_140eedcbf;
    }
    if (cVar5 == '\x03') goto LAB_140eedcbf;
  }
  fVar26 = 0.0;
LAB_140eedcbf:
  local_d8 = local_d8 + 0.0;
  local_d0 = local_d0 + 0.0;
  local_c8 = local_c8 - (double)fVar26;
  dVar11 = *(double *)(param_1 + 0x240);
  dVar12 = *(double *)(param_1 + 0x248);
  dVar8 = *(double *)(param_1 + 0x250);
  local_1a8 = *(double *)(param_1 + 0x280);
  dVar13 = *(double *)(param_1 + 0x288);
  dStack_170 = *(double *)(param_1 + 0x290);
  dVar22 = dVar12 + dVar12;
  dVar23 = dVar8 + dVar8;
  dVar9 = dVar11 * (dVar11 + dVar11);
  local_1b8 = (1.0 - (dVar8 * dVar23 + dVar12 * dVar22)) * local_1a8;
  dVar8 = (1.0 - (dVar8 * dVar23 + dVar9)) * dVar13;
  local_168 = (1.0 - (dVar9 + dVar12 * dVar22)) * dStack_170;
  dVar10 = *(double *)(param_1 + 0x240) * dVar23;
  dVar9 = *(double *)(param_1 + 600);
  dVar24 = dVar23 * dVar9;
  dVar25 = (dVar11 + dVar11) * *(double *)(param_1 + 600);
  dVar9 = dVar22 * dVar9;
  dStack_1b0 = (dVar22 * dVar11 + dVar24) * local_1a8;
  local_188 = (dVar23 * dVar12 + dVar25) * dVar13;
  local_178 = (dVar9 + dVar10) * dStack_170;
  local_1a8 = (dVar10 - dVar9) * local_1a8;
  dStack_170 = (dVar23 * dVar12 - dVar25) * dStack_170;
  uStack_1a0 = 0;
  local_198._8_4_ = SUB84(dVar8,0);
  local_198._0_8_ = (dVar22 * dVar11 - dVar24) * dVar13;
  local_198._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  uStack_180 = 0;
  uStack_160 = 0;
  local_158 = *(undefined8 *)(param_1 + 0x260);
  uStack_150 = *(undefined8 *)(param_1 + 0x268);
  local_148 = *(undefined8 *)(param_1 + 0x270);
  uStack_140 = 0x3ff0000000000000;
  FUN_1447fea8d(param_2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_208);
}



// FUNCTION 140eedfc4 FUN_140eedfc4 body=1781 status=ok
// SIG undefined FUN_140eedfc4(void)

/* WARNING: Removing unreachable block (ram,0x000140eee271) */

double * FUN_140eedfc4(longlong param_1,double *param_2,double *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  short *psVar15;
  short *psVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float fVar38;
  undefined1 auStack_168 [32];
  float local_148;
  undefined4 local_140;
  undefined4 local_138;
  double local_128;
  double dStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  short *local_f0;
  short *local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar13 = *(longlong **)(param_1 + 0x620);
  if (*(code **)(*plVar13 + 0x50) != FUN_144828418) {
    plVar13 = (longlong *)(**(code **)(*plVar13 + 0x50))();
  }
  FUN_1447a1fc0(plVar13);
  plVar13 = *(longlong **)(param_1 + 0x620);
  pcVar6 = *(code **)(*plVar13 + 0x28);
  if (pcVar6 == FUN_14482841c) {
    plVar14 = plVar13 + 3;
    if (plVar13[5] != 0) {
      plVar14 = (longlong *)(plVar13[5] + 8);
    }
  }
  else if (pcVar6 == (code *)&LAB_14010c34c) {
    plVar14 = plVar13 + 2;
  }
  else {
    plVar14 = (longlong *)(*pcVar6)(plVar13);
  }
  if (((int)plVar14[1] < 2) || (*(longlong *)(param_1 + 0x638) == 0)) {
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0.0;
    dStack_120 = 0.0;
    local_f8 = 0;
    FUN_144a80a4c(&local_128,param_2,param_3);
  }
  else {
    plVar13 = *(longlong **)(param_1 + 0x620);
    if (*(code **)(*plVar13 + 0x50) != FUN_144828418) {
      plVar13 = (longlong *)(**(code **)(*plVar13 + 0x50))();
    }
    FUN_1447a1fc0(plVar13);
    plVar13 = *(longlong **)(param_1 + 0x620);
    pcVar6 = *(code **)(*plVar13 + 0x28);
    if (pcVar6 == FUN_14482841c) {
      plVar14 = plVar13 + 3;
      if (plVar13[5] != 0) {
        plVar14 = (longlong *)(plVar13[5] + 8);
      }
    }
    else if (pcVar6 == (code *)&LAB_14010c34c) {
      plVar14 = plVar13 + 2;
    }
    else {
      plVar14 = (longlong *)(*pcVar6)(plVar13);
    }
    if ((int)plVar14[1] == 0) {
      psVar15 = &DAT_149dfb77a;
    }
    else {
      psVar15 = (short *)*plVar14;
    }
    if (*psVar15 == 0) {
      uVar35 = 0;
      uVar37 = 0x38100000;
      dVar19 = 3.4028234663852886e+38;
      dVar7 = 0.0;
    }
    else {
      fVar1 = *(float *)(param_1 + 0x650);
      fVar2 = *(float *)(param_1 + 0x654);
      fVar3 = *(float *)(param_1 + 0x648);
      fVar4 = *(float *)(param_1 + 0x64c);
      dVar19 = 3.4028234663852886e+38;
      dVar7 = 0.0;
      psVar16 = psVar15;
      uVar34 = 0;
      uVar36 = 0x38100000;
      do {
        local_138 = *(undefined4 *)(param_1 + 0x65c);
        local_140 = *(undefined4 *)(param_1 + 0x658);
        local_148 = fVar1 * fVar4 * fVar2;
        local_f0 = psVar15;
        local_e8 = psVar16;
        FUN_140eee6ba(&local_128,&local_f0,*(undefined8 *)(param_1 + 0x638),fVar3 * fVar1 * fVar2);
        dVar22 = local_128;
        uVar35 = SUB84(local_128,0);
        uVar12 = (ulonglong)local_128 >> 0x20;
        if (*(char *)(param_1 + 0x640) == '\x01') {
          fVar38 = (float)(local_128 * -0.5);
        }
        else {
          fVar38 = 0.0;
          if (*(char *)(param_1 + 0x640) == '\x02') {
            fVar38 = -(float)local_128;
          }
        }
        dVar20 = dStack_120;
        if (dStack_120 <= 0.0) {
          fVar17 = (float)FUN_140324d4e(*(undefined8 *)(param_1 + 0x638));
          dVar20 = (double)fVar17;
        }
        dVar7 = dVar7 + dVar20;
        uVar37 = (int)uVar12;
        if (dVar22 <= (double)CONCAT44(uVar36,uVar34)) {
          uVar35 = uVar34;
          uVar37 = uVar36;
        }
        if ((double)fVar38 <= dVar19) {
          dVar19 = (double)fVar38;
        }
        for (; sVar5 = *psVar16, sVar5 != 0; psVar16 = psVar16 + 1) {
          if (sVar5 == 10) {
            psVar16 = psVar16 + 1;
            break;
          }
          if ((((sVar5 == 0x3c) && (psVar16[1] == 0x62)) && (psVar16[2] == 0x72)) &&
             (psVar16[3] == 0x3e)) {
            psVar16 = psVar16 + 4;
            break;
          }
        }
        uVar34 = uVar35;
        uVar36 = uVar37;
      } while (*psVar16 != 0);
    }
    dVar27 = -(double)CONCAT44(uVar37,uVar35) - dVar19;
    dVar31 = *param_3;
    dVar10 = param_3[1];
    dVar29 = param_3[2];
    dVar18 = param_3[8];
    dVar11 = param_3[9];
    dVar8 = param_3[10];
    dVar28 = dVar29 + dVar29;
    dVar24 = dVar31 + dVar31;
    dVar25 = dVar10 + dVar10;
    dVar20 = param_3[3];
    dVar22 = param_3[3];
    dVar30 = dVar25 * dVar20;
    auVar26._0_8_ = (dVar30 + *param_3 * dVar28) * dVar8;
    auVar26._8_8_ = (dVar24 * dVar22 + *param_3 * dVar24) * param_3[0xb];
    dVar20 = dVar28 * dVar20;
    dVar22 = dVar24 * dVar22;
    dVar9 = (1.0 - (dVar28 * dVar29 + dVar25 * dVar10)) * dVar18;
    dVar29 = (1.0 - (dVar28 * dVar29 + dVar24 * dVar31)) * dVar11;
    dVar21 = (dVar20 + dVar25 * dVar31) * dVar18;
    dVar23 = (dVar22 + dVar28 * dVar10) * dVar11;
    dVar18 = (*param_3 * dVar28 - dVar30) * dVar18;
    auVar32._0_8_ = dVar11 * (dVar25 * dVar31 - dVar20);
    auVar32._8_8_ = dVar8 * (dVar28 * dVar10 - dVar22);
    auVar26 = blendpd(auVar26,auVar32,2);
    auVar33._8_4_ = SUB84(dVar29,0);
    auVar33._0_8_ = dVar9;
    auVar33._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    auVar33 = blendpd(auVar32,auVar33,2);
    dVar8 = (1.0 - (dVar24 * dVar31 + dVar25 * dVar10)) * dVar8;
    dVar31 = (-dVar19 + dVar27) * 0.5;
    dVar24 = (0.0 - dVar7) * 0.5;
    dVar19 = (-dVar19 - dVar27) * 0.5;
    dVar7 = (dVar7 + 0.0) * 0.5;
    dVar28 = ABS(dVar7 * auVar26._0_8_) + ABS(auVar33._0_8_ * dVar19) + ABS(dVar9 * 0.0);
    dVar29 = ABS(dVar7 * auVar26._8_8_) + ABS(auVar33._8_8_ * dVar19) + ABS(dVar21 * 0.0);
    dVar22 = dVar24 * auVar26._0_8_ + dVar31 * auVar33._0_8_ + dVar9 * 0.0 + param_3[4];
    dVar20 = dVar24 * auVar26._8_8_ + dVar31 * auVar33._8_8_ + dVar21 * 0.0 + param_3[5];
    dVar25 = dVar22 - dVar28;
    dVar27 = dVar20 - dVar29;
    dVar7 = ABS(dVar19 * dVar23) + ABS(dVar18 * 0.0) + ABS(dVar7 * dVar8);
    dVar24 = dVar24 * dVar8 + dVar31 * dVar23 + dVar18 * 0.0 + param_3[6];
    dVar19 = dVar24 - dVar7;
    dVar24 = ((dVar24 + dVar7) - dVar19) * 0.5;
    dVar7 = ((dVar29 + dVar20) - dVar27) * 0.5;
    dVar22 = ((dVar28 + dVar22) - dVar25) * 0.5;
    *param_2 = dVar25 + dVar22;
    param_2[1] = dVar27 + dVar7;
    param_2[2] = dVar19 + dVar24;
    dVar19 = (double)*(float *)(param_1 + 0x3ac);
    param_2[3] = dVar22 * dVar19;
    param_2[4] = dVar7 * dVar19;
    param_2[5] = dVar24 * dVar19;
    param_2[6] = SQRT(dVar24 * dVar24 + dVar22 * dVar22 + dVar7 * dVar7) * dVar19;
  }
  if ((local_e0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140eee6ba FUN_140eee6ba body=539 status=ok
// SIG undefined FUN_140eee6ba(void)

double * FUN_140eee6ba(double *param_1,longlong param_2,longlong param_3,float param_4,float param_5
                      ,float param_6,float param_7)

{
  byte bVar1;
  short sVar2;
  wint_t _C;
  int iVar3;
  short *psVar4;
  wint_t *pwVar5;
  double dVar6;
  double dVar7;
  ushort uVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  
  *param_1 = 0.0;
  param_1[1] = 0.0;
  if (param_3 != 0) {
    iVar3 = *(int *)(param_3 + 0x6c);
    dVar7 = 0.0;
    dVar6 = 0.0;
    fVar12 = 0.0;
    while( true ) {
      fVar11 = fVar12;
      psVar4 = *(short **)(param_2 + 8);
      sVar2 = *psVar4;
      if (sVar2 == 0) break;
      if (sVar2 == 10) {
        lVar10 = 2;
LAB_140eee881:
        *(longlong *)(param_2 + 8) = (longlong)psVar4 + lVar10;
        break;
      }
      if ((((sVar2 == 0x3c) && (psVar4[1] == 0x62)) && (psVar4[2] == 0x72)) && (psVar4[3] == 0x3e))
      {
        lVar10 = 8;
        goto LAB_140eee881;
      }
      *(short **)(param_2 + 8) = psVar4 + 1;
      uVar8 = FUN_140eee8d6(param_3);
      fVar12 = fVar11;
      if ((int)(uint)uVar8 < *(int *)(param_3 + 0x40)) {
        bVar1 = *(byte *)(*(longlong *)(param_3 + 0x38) + 0x10 + (ulonglong)uVar8 * 0x18);
        if (((int)(uint)bVar1 < *(int *)(param_3 + 0x50)) &&
           (*(longlong *)(*(longlong *)(param_3 + 0x48) + (ulonglong)bVar1 * 8) != 0)) {
          lVar10 = *(longlong *)(param_3 + 0x38) + (ulonglong)uVar8 * 0x18;
          fVar14 = (float)*(int *)(lVar10 + 8) * param_4;
          fVar12 = fVar11 + fVar14;
          if (dVar6 <= (double)fVar12) {
            dVar6 = (double)fVar12;
          }
          dVar13 = (double)(((float)*(int *)(lVar10 + 0xc) + param_7) * param_5 +
                           (float)*(int *)(lVar10 + 0x14) * param_5);
          if (dVar7 <= dVar13) {
            dVar7 = dVar13;
          }
          pwVar5 = *(wint_t **)(param_2 + 8);
          _C = *pwVar5;
          if (((_C != 0) && (_C != 10)) &&
             ((_C != 0x3c || (((pwVar5[1] != 0x62 || (pwVar5[2] != 0x72)) || (pwVar5[3] != 0x3e)))))
             ) {
            iVar9 = iswspace(_C);
            if (iVar9 == 0) {
              fVar14 = fVar14 + ((float)iVar3 + param_6) * param_4;
            }
            fVar12 = fVar11 + fVar14;
          }
        }
      }
    }
    *param_1 = dVar6;
    param_1[1] = dVar7;
  }
  return param_1;
}



// FUNCTION 140eee8d6 FUN_140eee8d6 body=185 status=ok
// SIG undefined FUN_140eee8d6(void)

ushort FUN_140eee8d6(longlong param_1,ushort param_2)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    uVar3 = (uint)param_2;
    uVar2 = 0x7f;
    if (((int)uVar3 < *(int *)(param_1 + 0x120)) && ((int)uVar3 < *(int *)(param_1 + 0x40))) {
      uVar2 = 0x7f;
      if (*(int *)(*(longlong *)(param_1 + 0x38) + 0xc + (ulonglong)uVar3 * 0x18) != 0) {
        uVar2 = param_2;
      }
      if (param_2 < 0x20) {
        uVar2 = param_2;
      }
    }
  }
  else {
    uVar2 = 0x7f;
    if (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x1bc)) {
      lVar5 = param_1 + 0x1c0;
      if (*(longlong *)(param_1 + 0x1c8) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x1c8);
      }
      iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x1d0) - 1U & (uint)param_2) * 4);
      if (iVar4 != -1) {
        do {
          puVar1 = (ushort *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar4 * 0xc);
          if (*puVar1 == param_2) {
            if (puVar1 + 1 == (ushort *)0x0 || puVar1 == (ushort *)0x0) {
              return 0x7f;
            }
            return puVar1[1];
          }
          iVar4 = *(int *)(puVar1 + 2);
        } while (iVar4 != -1);
      }
    }
  }
  return uVar2;
}



// FUNCTION 140eee990 FUN_140eee990 body=14 status=ok
// SIG undefined FUN_140eee990(void)

void FUN_140eee990(undefined8 param_1,undefined8 param_2)

{
  FUN_140eee99e(param_2,param_1);
  return;
}



// FUNCTION 140eee99e FUN_140eee99e body=637 status=ok
// SIG undefined FUN_140eee99e(void)

void FUN_140eee99e(longlong param_1,longlong param_2,char param_3,longlong *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if (((*(byte *)(param_1 + 0x31) & 1) == 0) ||
     (lVar5 = **(longlong **)(param_1 + 0x1b0), lVar5 == 0)) {
    plVar6 = (longlong *)FUN_14001cc68(0xb0);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_149eefff0;
    plVar8 = plVar6 + 2;
    memset(plVar6 + 3,0,0x98);
    plVar6[2] = (longlong)&PTR_FUN_149ef0008;
    *(undefined4 *)((longlong)plVar6 + 0xa4) = 4;
    if (param_3 == '\0') {
      FUN_140eeed2a(plVar8,param_1,param_2,param_4);
    }
    else {
      FUN_1457c4d14(plVar8,param_2,param_4);
    }
    if ((int)plVar6[0x14] != 0) {
      *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) | 1;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      puVar2 = (undefined8 *)(param_1 + 0x1b0);
      uVar3 = *(uint *)(param_1 + 0x1b8);
      *(uint *)(param_1 + 0x1b8) = uVar3 + 1;
      if (*(uint *)(param_1 + 0x1bc) < uVar3 + 1) {
        FUN_140eeec1c(puVar2,(ulonglong)uVar3);
      }
      memmove((void *)((longlong)*puVar2 + 0x10),(void *)*puVar2,(ulonglong)uVar3 << 4);
      plVar4 = (longlong *)*puVar2;
      *plVar4 = (longlong)plVar8;
      plVar4[1] = (longlong)plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        plVar8 = plVar6 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if ((~*(byte *)(param_1 + 0x31) & 6) == 0) {
        FUN_140163244(param_1,0x40);
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          return;
        }
      }
    }
    return;
  }
  lVar7 = lVar5 + 8;
  if (*(longlong *)(lVar5 + 0x88) != 0) {
    lVar7 = *(longlong *)(lVar5 + 0x88);
  }
  if ((longlong)*(int *)(lVar5 + 0x90) != 0) {
    uVar10 = 0;
    lVar9 = 0;
    do {
      if (*(longlong *)(lVar7 + uVar10) == param_2) {
        if ((int)(~uVar10 >> 5) != 0) {
          plVar8 = (longlong *)(lVar7 + (lVar9 >> 0x20) * 0x20 + 8);
          if (plVar8 == param_4) {
            return;
          }
          plVar6 = (longlong *)*plVar8;
          *plVar8 = *param_4;
          *param_4 = 0;
          if (plVar6 == (longlong *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000140eeec18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x20))(plVar6,1);
          return;
        }
        break;
      }
      lVar9 = lVar9 + 0x100000000;
      uVar10 = uVar10 + 0x20;
    } while ((longlong)*(int *)(lVar5 + 0x90) * 0x20 != uVar10);
  }
  if (param_3 != '\0') {
    FUN_1457c4d14(lVar5,param_2,param_4);
    return;
  }
  FUN_140eeed2a(lVar5,param_1,param_2,param_4);
  return;
}



// FUNCTION 140eeec1c FUN_140eeec1c body=269 status=ok
// SIG undefined FUN_140eeec1c(void)

void FUN_140eeec1c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140eeed2a FUN_140eeed2a body=561 status=ok
// SIG undefined FUN_140eeed2a(void)

void FUN_140eeed2a(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar7 = (int)param_3 - (int)param_2;
  local_70 = param_3;
  plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
  if ((longlong)(int)plVar3[1] != 0) {
    lVar13 = *plVar3;
    lVar4 = (longlong)(int)plVar3[1] * 0x58;
    do {
      if ((*(int *)(lVar13 + 8) == iVar7) && (*(char *)(lVar13 + 0x50) == '\0')) {
        if (lVar13 != 0) {
          uVar10 = *(uint *)(lVar13 + 0x1c);
          lVar4 = param_1 + 8;
          uVar12 = *(uint *)(param_1 + 0x90);
          lVar5 = *(longlong *)(param_1 + 0x88);
          if (*(longlong *)(param_1 + 0x88) == 0) {
            lVar5 = lVar4;
          }
          uVar11 = 0;
          if (0 < (int)uVar12) {
            uVar11 = 0;
            uVar6 = (ulonglong)uVar12;
            do {
              uVar6 = uVar6 >> 1;
              uVar9 = (uint)uVar6 + (int)uVar11;
              if (*(uint *)(lVar5 + 0x18 + (ulonglong)uVar9 * 0x20) < uVar10) {
                uVar11 = (ulonglong)(uVar9 + (uVar12 & 1));
              }
              bVar2 = 1 < uVar12;
              uVar12 = (uint)uVar6;
            } while (bVar2);
          }
          uVar1 = *param_4;
          *param_4 = 0;
          iVar7 = *(int *)(param_1 + 0x90);
          *(uint *)(param_1 + 0x90) = iVar7 + 1U;
          if (*(uint *)(param_1 + 0x94) < iVar7 + 1U) {
            FUN_146979934(lVar4,iVar7);
          }
          lVar5 = *(longlong *)(param_1 + 0x88);
          if (*(longlong *)(param_1 + 0x88) == 0) {
            lVar5 = lVar4;
          }
          lVar8 = uVar11 * 0x20;
          memmove((void *)(lVar5 + lVar8 + 0x20),(void *)(lVar5 + lVar8),
                  (ulonglong)(uint)(iVar7 - (int)uVar11) << 5);
          lVar5 = *(longlong *)(param_1 + 0x88);
          if (*(longlong *)(param_1 + 0x88) == 0) {
            lVar5 = lVar4;
          }
          *(undefined8 *)(lVar5 + lVar8) = local_70;
          *(undefined8 *)(lVar5 + 8 + lVar8) = uVar1;
          *(longlong *)(lVar5 + 0x10 + lVar8) = lVar13;
          *(uint *)(lVar5 + 0x18 + lVar8) = uVar10;
          *(undefined4 *)(lVar5 + 0x1c + lVar8) = 0;
          if (*(char *)(lVar13 + 0x51) == '\x01') {
            *(char *)(param_1 + 0x99) = *(char *)(param_1 + 0x99) + '\x01';
          }
          goto LAB_140eeee4a;
        }
        break;
      }
      lVar13 = lVar13 + 0x58;
      lVar4 = lVar4 + -0x58;
    } while (lVar4 != 0);
  }
  local_50 = iVar7 * 100;
  lVar13 = *(longlong *)(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x88) == 0) {
    lVar13 = param_1 + 8;
  }
  if (0 < (int)*(uint *)(param_1 + 0x90)) {
    iVar7 = 0;
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x90);
    do {
      uVar12 = (int)(uVar11 >> 1) + iVar7;
      uVar10 = (uint)uVar11;
      if (*(uint *)(lVar13 + 0x18 + (ulonglong)uVar12 * 0x20) < local_50) {
        iVar7 = uVar12 + (uVar10 & 1);
      }
      uVar11 = uVar11 >> 1;
    } while (1 < uVar10);
  }
  local_68 = local_70;
  local_60 = (longlong *)*param_4;
  *param_4 = 0;
  local_58 = 0;
  local_4c = 0;
  FUN_146973ea6(param_1 + 8,&local_68);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x20))(local_60,1);
  }
LAB_140eeee4a:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eeef5c FUN_140eeef5c body=69 status=ok
// SIG undefined FUN_140eeef5c(void)

void FUN_140eeef5c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x78) == 0) {
    lVar1 = param_1;
  }
  FUN_140eeefa1(lVar1,*(undefined4 *)(param_1 + 0x80));
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_140eeefcc(param_1);
    return;
  }
  return;
}



// FUNCTION 140eeefa1 FUN_140eeefa1 body=42 status=ok
// SIG undefined FUN_140eeefa1(void)

void FUN_140eeefa1(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      FUN_1400020a8(*(undefined8 *)(param_1 + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 140eeefcc FUN_140eeefcc body=83 status=ok
// SIG undefined FUN_140eeefcc(void)

void FUN_140eeefcc(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
    if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x78),
              (longlong)*(int *)((longlong)param_1 + 0x80) << 3);
      FUN_1446efa72((longlong)param_1 + 0x78,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 140eef020 FUN_140eef020 body=25 status=ok
// SIG undefined FUN_140eef020(void)

void FUN_140eef020(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140eef035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 140eef03a FUN_140eef03a body=80 status=ok
// SIG undefined FUN_140eef03a(void)

undefined8 * FUN_140eef03a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ce010;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 140eef098 FUN_140eef098 body=85 status=ok
// SIG undefined FUN_140eef098(void)

undefined8 * FUN_140eef098(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b02bc70;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 140eef0ee FUN_140eef0ee body=1444 status=ok
// SIG undefined FUN_140eef0ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_140eef0ee(longlong param_1,float *param_2,double *param_3,int param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_138 [32];
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined1 local_d8 [16];
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *(undefined1 *)(param_2 + 1) = 0;
  lVar4 = (**(code **)(*(longlong *)(param_1 + 0x390) + 0x18))(param_1 + 0x390);
  if ((lVar4 != 0) &&
     ((**(code **)(*(longlong *)(param_1 + 0x390) + 0x20))(param_1 + 0x390,&local_118),
     *(int *)(lVar4 + 0xa8) != *(int *)(lVar4 + 0xd4))) {
    local_f8 = *param_3 - local_f8;
    dStack_f0 = param_3[1] - dStack_f0;
    local_e8 = param_3[2] - local_e8;
    local_108 = local_108 * -1.0;
    dVar12 = -dStack_110;
    dVar21 = local_f8 * local_108 - -local_118 * local_e8;
    dVar19 = dStack_f0 * -local_118 - local_f8 * dVar12;
    dVar13 = local_e8 * dVar12 - dStack_f0 * local_108;
    dVar13 = dVar13 + dVar13;
    dVar21 = dVar21 + dVar21;
    dVar19 = dVar19 + dVar19;
    auVar17 = divpd(_DAT_149934d80,local_d8);
    dVar15 = ((double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_d8._8_8_)) & auVar17._8_8_) *
             (dVar19 * local_118 + local_108 * dVar13 + dStack_100 * 1.0 * dVar21 + dStack_f0)) /
             (double)*(int *)(param_1 + 0x83c);
    uVar5 = (int)ROUND(dVar15 + dVar15 + -0.5) >> 1;
    dVar12 = ((double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_d8._0_8_)) & auVar17._0_8_) *
             ((dVar19 * dVar12 - dVar21 * local_108) + dStack_100 * 1.0 * dVar13 + local_f8)) /
             (double)*(int *)(param_1 + 0x83c);
    iVar3 = (int)ROUND(dVar12 + dVar12 + -0.5) >> 1;
    uVar7 = uVar5 >> 0xd ^ iVar3 - uVar5;
    uVar9 = uVar7 << 8 ^ (-0x61c88647 - uVar5) - uVar7;
    uVar10 = uVar9 >> 0xd ^ (uVar5 - uVar7) - uVar9;
    uVar11 = uVar10 >> 0xc ^ (uVar7 - uVar9) - uVar10;
    uVar7 = uVar11 << 0x10 ^ (uVar9 - uVar10) - uVar11;
    uVar9 = uVar7 >> 5 ^ (uVar10 - uVar11) - uVar7;
    uVar10 = uVar9 >> 3 ^ (uVar11 - uVar7) - uVar9;
    uVar7 = uVar10 << 10 ^ (uVar7 - uVar9) - uVar10;
    lVar6 = lVar4 + 0xd8;
    if (*(longlong *)(lVar4 + 0xe0) != 0) {
      lVar6 = *(longlong *)(lVar4 + 0xe0);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar4 + 0xe8) - 1U &
                             (uVar7 >> 0xf ^ uVar9 - (uVar10 + uVar7))) * 4);
    if (iVar8 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar4 + 0xa0) + (longlong)iVar8 * 0x18);
        if (*plVar1 == CONCAT44(uVar5,iVar3)) {
          if (((plVar1 == (longlong *)0x0) || (lVar4 = plVar1[1], lVar4 == 0)) ||
             (*(longlong *)(lVar4 + 0x6c8) == 0)) break;
          dVar12 = *param_3 - *(double *)(lVar4 + 0x260);
          dVar19 = param_3[1] - *(double *)(lVar4 + 0x268);
          dVar13 = param_3[2] - *(double *)(lVar4 + 0x270);
          auVar17 = *(undefined1 (*) [16])(lVar4 + 0x280);
          if (param_4 == 2) {
            lVar6 = 0x30;
          }
          else {
            lVar6 = 0x38;
            if (param_4 != 1) break;
          }
          lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x6c8) + lVar6);
          if (lVar6 != 0) {
            dVar21 = -*(double *)(lVar4 + 0x240);
            dVar15 = -*(double *)(lVar4 + 0x248);
            dVar16 = *(double *)(lVar4 + 0x250) * -1.0;
            dVar18 = *(double *)(lVar4 + 600) * 1.0;
            dVar20 = dVar12 * dVar16 - dVar21 * dVar13;
            dVar21 = dVar19 * dVar21 - dVar12 * dVar15;
            dVar13 = dVar13 * dVar15 - dVar19 * dVar16;
            dVar13 = dVar13 + dVar13;
            dVar20 = dVar20 + dVar20;
            dVar21 = dVar21 + dVar21;
            auVar14 = divpd(_DAT_149934d80,auVar17);
            dVar12 = (double)(float)((double)(-(ulonglong)
                                               (9.99999993922529e-09 < ABS(auVar17._0_8_)) &
                                             auVar14._0_8_) *
                                    ((dVar21 * dVar15 - dVar20 * dVar16) + dVar18 * dVar13 + dVar12)
                                    );
            dVar19 = (double)(float)((double)(-(ulonglong)
                                               (9.99999993922529e-09 < ABS(auVar17._8_8_)) &
                                             auVar14._8_8_) *
                                    (dVar21 * *(double *)(lVar4 + 0x240) + dVar16 * dVar13 +
                                    dVar18 * dVar20 + dVar19));
            local_118 = dVar12;
            dStack_110 = dVar19;
            cVar2 = FUN_140eef694(lVar6);
            if (cVar2 == '\0') {
              local_b0 = dVar12;
              local_a8 = dVar19;
              FUN_140eef925(&local_118,&local_b0,lVar6 + 0x20,lVar6 + 0xb0);
              dVar19 = *(double *)(lVar4 + 0x240);
              dVar12 = (double)(float)local_118;
              dVar13 = dVar19 * 0.0 - *(double *)(lVar4 + 0x248) * 0.0;
              dVar21 = dVar12 * *(double *)(lVar4 + 0x248) - *(double *)(lVar4 + 0x250) * 0.0;
              dVar15 = *(double *)(lVar4 + 0x250) * 0.0 - dVar12 * dVar19;
              *param_2 = (float)(((dVar15 + dVar15) * dVar19 -
                                 *(double *)(lVar4 + 0x248) * (dVar21 + dVar21)) +
                                 (dVar13 + dVar13) * *(double *)(lVar4 + 600) + dVar12 +
                                *(double *)(lVar4 + 0x270));
              *(undefined1 *)(param_2 + 1) = 1;
            }
          }
          break;
        }
        iVar8 = (int)plVar1[2];
      } while (iVar8 != -1);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140eef694 FUN_140eef694 body=294 status=ok
// SIG undefined FUN_140eef694(void)

ulonglong FUN_140eef694(longlong param_1,double param_2)

{
  double dVar1;
  uint3 uVar2;
  bool bVar3;
  uint uVar4;
  undefined8 in_RAX;
  ulonglong uVar5;
  int iVar6;
  longlong in_RDX;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  int *piVar11;
  double dVar12;
  undefined8 local_10;
  
  bVar3 = true;
  do {
    bVar9 = bVar3;
    dVar12 = param_2;
    lVar8 = (ulonglong)(byte)~bVar9 * 8;
    dVar1 = *(double *)(in_RDX + lVar8);
    param_2 = *(double *)(param_1 + 0xc0 + lVar8);
    if ((dVar1 <= param_2) && (param_2 = *(double *)(param_1 + 0xb0 + lVar8), param_2 <= dVar1)) {
      param_2 = dVar1;
    }
    bVar3 = false;
  } while (bVar9);
  iVar6 = (int)((dVar12 - *(double *)(param_1 + 0xb0)) / *(double *)(param_1 + 0xd8));
  iVar10 = (int)((param_2 - *(double *)(param_1 + 0xb8)) / *(double *)(param_1 + 0xe0));
  iVar7 = 0;
  if (0 < iVar6) {
    iVar7 = iVar6;
  }
  if (*(int *)(param_1 + 0xd0) <= iVar6) {
    iVar7 = *(int *)(param_1 + 0xd0) + -1;
  }
  iVar6 = 0;
  if (0 < iVar10) {
    iVar6 = iVar10;
  }
  if (*(int *)(param_1 + 0xd4) <= iVar10) {
    iVar6 = *(int *)(param_1 + 0xd4) + -1;
  }
  lVar8 = 0;
  piVar11 = (int *)((longlong)&local_10 + 4);
  bVar3 = true;
  local_10 = in_RAX;
  do {
    bVar9 = bVar3;
    iVar10 = *(int *)(param_1 + 0xd0 + lVar8 * 4);
    if (iVar7 < iVar10) {
      if (iVar7 < 1) {
        iVar7 = 0;
      }
    }
    else {
      iVar7 = iVar10 + -1;
    }
    *piVar11 = iVar7;
    lVar8 = 1;
    piVar11 = (int *)&local_10;
    iVar7 = iVar6;
    bVar3 = false;
  } while (bVar9);
  if ((int)*(uint *)(param_1 + 0x48) < 1) {
    uVar5 = 0;
  }
  else {
    uVar4 = (*(ushort *)(param_1 + 0x92) - 1) * (int)local_10 + local_10._4_4_;
    uVar2 = (uint3)(uVar4 >> 8);
    if (uVar4 < *(uint *)(param_1 + 0x48)) {
      uVar5 = (ulonglong)
              CONCAT31(uVar2,*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar4) == -1);
    }
    else {
      uVar5 = CONCAT71((uint7)uVar2,1);
    }
  }
  return uVar5;
}



// FUNCTION 140eef7ba FUN_140eef7ba body=363 status=ok
// SIG undefined FUN_140eef7ba(void)

void FUN_140eef7ba(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double *pdVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  pdVar7 = (double *)&DAT_14c846480;
  if (*(longlong *)(param_1 + -0x1c8) != 0) {
    pdVar7 = (double *)(*(longlong *)(param_1 + -0x1c8) + 0x240);
  }
  pdVar8 = param_2;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *pdVar8 = *pdVar7;
    pdVar7 = pdVar7 + 1;
    pdVar8 = pdVar8 + 1;
  }
  dVar9 = -(double)(int)*(undefined8 *)(param_1 + 0x4c) * param_2[8];
  dVar10 = -(double)(int)((ulonglong)*(undefined8 *)(param_1 + 0x4c) >> 0x20) * param_2[9];
  dVar2 = param_2[10] * -0.0;
  dVar3 = *param_2;
  dVar4 = param_2[1];
  dVar5 = param_2[2];
  dVar1 = param_2[3];
  dVar11 = dVar10 * dVar3 - dVar4 * dVar9;
  dVar12 = dVar2 * dVar4 - dVar5 * dVar10;
  dVar13 = dVar9 * dVar5 - dVar3 * dVar2;
  dVar12 = dVar12 + dVar12;
  dVar13 = dVar13 + dVar13;
  dVar11 = dVar11 + dVar11;
  param_2[4] = (dVar11 * dVar4 - dVar13 * dVar5) + dVar1 * dVar12 + dVar9 + param_2[4];
  param_2[5] = (dVar5 * dVar12 - dVar11 * dVar3) + dVar1 * dVar13 + dVar10 + param_2[5];
  param_2[6] = dVar1 * dVar11 + dVar2 + (dVar13 * dVar3 - dVar12 * dVar4) + param_2[6];
  param_2[7] = param_2[7] + 0.0;
  return;
}



// FUNCTION 140eef925 FUN_140eef925 body=1058 status=ok
// SIG undefined FUN_140eef925(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_140eef925(double *param_1,longlong param_2,longlong *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ushort uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  bool bVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  int *piVar19;
  undefined4 *puVar20;
  bool bVar21;
  int iVar22;
  double *pdVar23;
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined4 unaff_XMM7_Da;
  undefined4 uVar27;
  undefined4 unaff_XMM7_Db;
  undefined4 uVar28;
  undefined4 unaff_XMM7_Dc;
  undefined4 uVar29;
  undefined4 unaff_XMM7_Dd;
  undefined4 uVar30;
  int local_b0;
  int local_ac [35];
  
  *param_1 = 1.79769313486232e+308;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  bVar13 = true;
  do {
    bVar21 = bVar13;
    uVar30 = unaff_XMM7_Dd;
    uVar29 = unaff_XMM7_Dc;
    uVar28 = unaff_XMM7_Db;
    uVar27 = unaff_XMM7_Da;
    uVar12 = (ulonglong)(byte)~bVar21;
    dVar1 = *(double *)(param_2 + uVar12 * 8);
    dVar2 = param_4[uVar12 + 2];
    unaff_XMM7_Da = SUB84(dVar2,0);
    unaff_XMM7_Db = (undefined4)((ulonglong)dVar2 >> 0x20);
    if (dVar1 <= dVar2) {
      dVar2 = param_4[uVar12];
      unaff_XMM7_Da = SUB84(dVar2,0);
      unaff_XMM7_Db = (undefined4)((ulonglong)dVar2 >> 0x20);
      if (dVar2 <= dVar1) {
        unaff_XMM7_Da = SUB84(dVar1,0);
        unaff_XMM7_Db = (undefined4)((ulonglong)dVar1 >> 0x20);
      }
    }
    unaff_XMM7_Dc = 0;
    unaff_XMM7_Dd = 0;
    bVar13 = false;
  } while (bVar21);
  iVar15 = (int)(((double)CONCAT44(uVar28,uVar27) - *param_4) / param_4[5]);
  iVar22 = (int)(((double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) - param_4[1]) / param_4[6]);
  iVar17 = 0;
  if (0 < iVar15) {
    iVar17 = iVar15;
  }
  if (*(int *)(param_4 + 4) <= iVar15) {
    iVar17 = *(int *)(param_4 + 4) + -1;
  }
  iVar15 = 0;
  if (0 < iVar22) {
    iVar15 = iVar22;
  }
  if (*(int *)((longlong)param_4 + 0x24) <= iVar22) {
    iVar15 = *(int *)((longlong)param_4 + 0x24) + -1;
  }
  lVar18 = 0;
  piVar19 = local_ac;
  bVar13 = true;
  do {
    bVar21 = bVar13;
    iVar22 = *(int *)((longlong)param_4 + lVar18 * 4 + 0x20);
    if (iVar17 < iVar22) {
      if (iVar17 < 1) {
        iVar17 = 0;
      }
    }
    else {
      iVar17 = iVar22 + -1;
    }
    *piVar19 = iVar17;
    lVar18 = 1;
    piVar19 = &local_b0;
    bVar13 = false;
    iVar17 = iVar15;
  } while (bVar21);
  lVar14 = (longlong)local_b0 * (ulonglong)*(ushort *)((longlong)param_3 + 0x72) +
           (longlong)local_ac[0];
  dVar1 = (double)param_3[0xc];
  lVar18 = *param_3;
  uVar5 = *(ushort *)(lVar18 + lVar14 * 2);
  dVar2 = (double)param_3[0x10];
  lVar16 = (longlong)(int)lVar14 + (ulonglong)*(ushort *)((longlong)param_3 + 0x72);
  dVar3 = (double)param_3[8];
  dVar9 = ((double)*(ushort *)(lVar18 + 2 + lVar16 * 2) * dVar2 + dVar1) * dVar3;
  auVar24._4_4_ = uVar28;
  auVar24._0_4_ = uVar27;
  auVar24._8_4_ = uVar29;
  auVar24._12_4_ = uVar30;
  auVar24 = roundsd(ZEXT816(0),auVar24,9);
  dVar6 = (double)CONCAT44(uVar28,uVar27) - auVar24._0_8_;
  auVar7._4_4_ = unaff_XMM7_Db;
  auVar7._0_4_ = unaff_XMM7_Da;
  auVar7._8_8_ = 0;
  auVar24 = roundsd(ZEXT816(0),auVar7,9);
  dVar8 = (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) - auVar24._0_8_;
  iVar17 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110);
  if (dVar8 < dVar6) {
    dVar11 = ((double)*(ushort *)(lVar18 + lVar16 * 2) * dVar2 + dVar1) * dVar3;
    pdVar23 = (double *)&DAT_14c993710;
    dVar10 = dVar9;
    if (DAT_14c993758 <= iVar17) goto LAB_140eefbba;
    puVar20 = &DAT_14c993758;
    FUN_144b3d300(&DAT_14c993758);
    if (DAT_14c993758 != -1) goto LAB_140eefbba;
    DAT_14c993710 = 0;
    uRam000000014c993718 = 0;
    _DAT_14c993720 = 0;
    pdVar23 = (double *)&DAT_14c993710;
    DAT_14c993728 = 0x3ff0000000000000;
    DAT_14c993730 = 0x3ff0000000000000;
    _DAT_14c993738 = 0;
    DAT_14c993740 = 0;
    DAT_14c993748 = 0x3ff0000000000000;
    _DAT_14c993750 = 0;
  }
  else {
    dVar10 = ((double)*(ushort *)(lVar18 + 2 + lVar14 * 2) * dVar2 + dVar1) * dVar3;
    pdVar23 = (double *)&DAT_14c993760;
    dVar11 = dVar9;
    if (DAT_14c9937a8 <= iVar17) goto LAB_140eefbba;
    puVar20 = &DAT_14c9937a8;
    FUN_144b3d300(&DAT_14c9937a8);
    if (DAT_14c9937a8 != -1) goto LAB_140eefbba;
    DAT_14c993760 = 0;
    DAT_14c993768 = 0;
    _DAT_14c993770 = 0;
    pdVar23 = (double *)&DAT_14c993760;
    DAT_14c993778 = 0x3ff0000000000000;
    DAT_14c993780 = 0;
    uRam000000014c993788 = 0;
    DAT_14c993790 = 0x3ff0000000000000;
    DAT_14c993798 = 0x3ff0000000000000;
    _DAT_14c9937a0 = 0;
    dVar9 = dVar10;
  }
  _Init_thread_footer(puVar20);
  dVar10 = dVar9;
LAB_140eefbba:
  dVar9 = pdVar23[7];
  dVar4 = pdVar23[6];
  dVar6 = dVar6 - dVar4;
  dVar8 = dVar8 - dVar9;
  dVar25 = (pdVar23[4] - dVar9) * (*pdVar23 - dVar4) + (pdVar23[1] - dVar9) * (dVar4 - pdVar23[3]);
  dVar26 = ((pdVar23[4] - dVar9) * dVar6 + dVar8 * (dVar4 - pdVar23[3])) / dVar25;
  dVar25 = ((dVar9 - pdVar23[1]) * dVar6 + (*pdVar23 - dVar4) * dVar8) / dVar25;
  *param_1 = dVar26 * ((double)uVar5 * dVar2 + dVar1) * dVar3 + dVar25 * dVar10 +
             ((1.0 - dVar26) - dVar25) * dVar11;
  return param_1;
}



// FUNCTION 140eefd48 FUN_140eefd48 body=97 status=ok
// SIG undefined FUN_140eefd48(void)

longlong FUN_140eefd48(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_140eefdaa();
  if (*(longlong *)(lVar2 + 0x110) != 0) {
    lVar3 = FUN_140eefdaa();
    lVar2 = *(longlong *)(lVar2 + 0x110);
    if (lVar2 != 0) {
      if (lVar3 == 0) {
        return 0;
      }
      lVar1 = *(longlong *)(lVar2 + 0x10);
      if (lVar1 == 0) {
        return 0;
      }
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) {
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30) {
          return 0;
        }
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 140eefdaa FUN_140eefdaa body=228 status=ok
// SIG undefined FUN_140eefdaa(void)

longlong FUN_140eefdaa(void)

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
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb96c58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_148a68595;
    local_40 = FUN_14657eb50;
    local_48 = L"GbxProcedural";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxPatch",L"GbxPatchSettings",&DAT_14cb96c58,&DAT_148a68594);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb96c58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eefe96 FUN_140eefe96 body=57 status=ok
// SIG undefined FUN_140eefe96(void)

void FUN_140eefe96(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55a50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55a50 = FUN_140002ddd(FUN_1464b4414,uVar1,L"CameraModeBehavior_ViewModelOffset");
  }
  return;
}



// FUNCTION 140eefee6 FUN_140eefee6 body=41 status=ok
// SIG undefined FUN_140eefee6(void)

void FUN_140eefee6(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14047210e();
  if (lVar1 != 0) {
    FUN_140fbb8dc(param_1,lVar1);
    return;
  }
  return;
}



// FUNCTION 140eeff10 FUN_140eeff10 body=129 status=ok
// SIG undefined FUN_140eeff10(void)

longlong * FUN_140eeff10(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140eeff92(param_2,&local_28);
  *param_1 = local_28;
  local_28 = 0;
  *(undefined4 *)(param_1 + 1) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_20._4_4_;
  uStack_20 = 0;
  FUN_14087acb9(0,0);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eeff92 FUN_140eeff92 body=2329 status=ok
// SIG undefined FUN_140eeff92(void)

bool FUN_140eeff92(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *_Src;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  byte bVar9;
  bool bVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 ****ppppuVar15;
  longlong lVar16;
  byte bVar17;
  longlong *plVar18;
  undefined *puVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined *puVar22;
  undefined1 auStack_1d8 [40];
  longlong *local_1b0;
  longlong local_1a8;
  undefined *local_1a0;
  undefined **local_198;
  longlong *local_190;
  undefined1 local_188 [48];
  longlong local_158;
  longlong local_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  void *local_128;
  int local_120;
  int local_11c;
  longlong *local_100;
  longlong *local_f0;
  longlong *local_e0;
  undefined4 local_d8;
  longlong *local_d0 [2];
  undefined4 local_c0;
  char local_b8;
  undefined7 uStack_b7;
  longlong *local_a8;
  longlong local_a0;
  undefined4 local_90 [2];
  undefined8 ***local_88;
  longlong *plStack_80;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1a8 = param_3;
  if (param_1 == (longlong *)0x0) {
    bVar10 = false;
  }
  else {
    if (param_1[2] != 0) {
      local_1b0 = param_2;
      FUN_1409e2dfc(param_1 + 2,&local_198);
      bVar6 = true;
      if ((local_198 != (undefined **)0x0) && (0 < *(int *)(local_198 + 2))) {
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
        }
        FUN_1400702d4(DAT_14caa8580,&local_b8,DAT_14cbd1258,1);
        if ((longlong)*(int *)(local_198 + 2) != 0) {
          puVar22 = local_198[1];
          puVar19 = puVar22 + (longlong)*(int *)(local_198 + 2) * 0xe0;
          plVar18 = local_1b0;
          local_1a0 = puVar19;
          do {
            cVar8 = FUN_14021d296(puVar22 + 8,&local_b8);
            if ((local_1a8 == 0) || (cVar8 == '\0')) {
LAB_140ef0116:
              iVar2 = (int)plVar18[1];
              *(uint *)(plVar18 + 1) = iVar2 + 1U;
              if (*(uint *)((longlong)plVar18 + 0xc) < iVar2 + 1U) {
                FUN_1418f0868(plVar18,iVar2);
              }
              FUN_140e48b7c((longlong)iVar2 * 0xe0 + *plVar18,puVar22);
            }
            else {
              lVar7 = param_1[1];
              if ((longlong)(int)lVar7 != 0) {
                lVar13 = *param_1;
                lVar20 = 0;
                bVar17 = 0;
                do {
                  lVar12 = *(longlong *)(lVar13 + lVar20);
                  if (lVar12 != 0) {
                    uVar11 = FUN_1409e3b02();
                    cVar8 = FUN_1448093f4(lVar12,uVar11);
                    if (((cVar8 != '\0') && (lVar12 = FUN_140aa5740(lVar12), lVar12 != 0)) &&
                       (cVar8 = FUN_14021d296(lVar12 + 0x40,puVar22 + 8), cVar8 != '\0')) {
                      bVar9 = FUN_1409500c0(lVar12,local_1a8);
                      bVar17 = bVar17 | bVar9 ^ 1;
                    }
                  }
                  lVar20 = lVar20 + 0x18;
                } while ((longlong)(int)lVar7 * 0x18 != lVar20);
                plVar18 = local_1b0;
                puVar19 = local_1a0;
                if ((bVar17 & 1) != 0) goto LAB_140ef0116;
              }
            }
            puVar22 = puVar22 + 0xe0;
          } while (puVar22 != puVar19);
        }
        bVar6 = false;
      }
      plVar18 = local_190;
      if (local_190 != (longlong *)0x0) {
        LOCK();
        plVar21 = local_190 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*local_190)(local_190);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
      }
      bVar10 = true;
      param_2 = local_1b0;
      if (!bVar6) goto LAB_140ef0865;
    }
    if ((longlong)(int)param_1[1] != 0) {
      lVar7 = *param_1;
      plVar18 = (longlong *)((longlong)(int)param_1[1] * 0x18);
      plVar21 = (longlong *)0x0;
      local_1b0 = plVar18;
      do {
        if (*(longlong *)(lVar7 + (longlong)plVar21) != 0) {
          FUN_140cf4802(&local_198);
          lVar13 = *(longlong *)(lVar7 + (longlong)plVar21);
          uVar11 = FUN_14185600a();
          cVar8 = FUN_1448093f4(lVar13,uVar11);
          if ((lVar13 == 0) || (cVar8 == '\0')) {
            lVar13 = *(longlong *)(lVar7 + (longlong)plVar21);
            if (lVar13 != 0) {
              uVar11 = FUN_141855bda();
              cVar8 = FUN_1448093f4(lVar13,uVar11);
              if (cVar8 == '\0') {
                lVar13 = *(longlong *)(lVar7 + (longlong)plVar21);
                uVar11 = FUN_1418c4710();
                cVar8 = FUN_1448093f4(lVar13,uVar11);
                if ((lVar13 == 0) || (cVar8 == '\0')) {
                  lVar13 = *(longlong *)(lVar7 + (longlong)plVar21);
                  uVar11 = FUN_141856044();
                  cVar8 = FUN_1448093f4(lVar13,uVar11);
                  lVar20 = DAT_14cb8d358;
                  if ((lVar13 == 0) || (cVar8 == '\0')) {
                    lVar13 = *(longlong *)(lVar7 + (longlong)plVar21);
                    uVar11 = FUN_1464f8f46();
                    cVar8 = FUN_1448093f4(lVar13,uVar11);
                    if ((lVar13 == 0) || (cVar8 == '\0')) {
                      lVar13 = *(longlong *)(lVar7 + (longlong)plVar21);
                      uVar11 = FUN_1464f8fd8();
                      cVar8 = FUN_1448093f4(lVar13,uVar11);
                      plVar18 = local_1b0;
                      if ((lVar13 != 0) && (cVar8 != '\0')) {
                        FUN_148dc76ec(&local_198,lVar13);
                      }
                    }
                    else {
                      FUN_14576087c(&local_198,lVar13);
                      plVar18 = local_1b0;
                    }
                  }
                  else {
                    if (DAT_14cb8d358 != 0) {
                      local_88 = *(undefined8 ****)(lVar13 + 0x20);
                      FUN_1446dcdd4(&local_b8,&local_88);
                      lVar20 = FUN_144837462(lVar20,&local_b8);
                      if (local_a0 != 0) {
                        FUN_1400020a8();
                      }
                      plVar18 = local_e0;
                      if ((lVar20 != 0) &&
                         (plVar3 = *(longlong **)(lVar20 + 0x18), plVar3 != (longlong *)0x0)) {
                        plVar4 = *(longlong **)(lVar20 + 0x20);
                        local_190 = plVar3;
                        if (local_e0 != plVar4) {
                          local_e0 = plVar4;
                          if (plVar4 != (longlong *)0x0) {
                            (**(code **)(*plVar4 + 8))();
                          }
                          if (plVar18 != (longlong *)0x0) {
                            (**(code **)(*plVar18 + 0x10))(plVar18);
                          }
                        }
                        local_d8 = *(undefined4 *)(lVar20 + 0x28);
                        lVar12 = *(longlong *)(lVar20 + 0x60);
                        if (lVar12 == 0) {
                          uVar11 = FUN_145c20674();
                          lVar12 = FUN_14477b664(uVar11);
                          *(longlong *)(lVar20 + 0x60) = lVar12;
                        }
                        lVar16 = *(longlong *)(lVar20 + 0x68);
                        if (lVar16 == 0) {
                          if (lVar12 == 0) {
                            lVar16 = 0;
                          }
                          else {
                            lVar16 = 0;
                            if (*(longlong *)(lVar20 + 0x58) != 0) {
                              plVar18 = *(longlong **)(lVar12 + 0xb8);
                              if ((plVar18 == (longlong *)0x0) ||
                                 (cVar8 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar8 == '\0'))
                              {
                                lVar16 = 0;
                              }
                              else {
                                uVar11 = (**(code **)(*plVar18 + 0x110))(plVar18);
                                lVar16 = FUN_144aff482(uVar11,(longlong *)(lVar20 + 0x58));
                              }
                              *(longlong *)(lVar20 + 0x68) = lVar16;
                            }
                          }
                        }
                        uVar11 = FUN_140c54336();
                        cVar8 = FUN_1448093f4(lVar16,uVar11);
                        if (cVar8 == '\0') {
                          lVar16 = 0;
                        }
                        if (local_150 == 0) {
                          uVar11 = FUN_140c54336();
                          local_150 = FUN_14477b664(uVar11);
                        }
                        lVar12 = FUN_140c54336();
                        uVar11 = FUN_140c54336();
                        FUN_1402d1bfa(&local_b8,uVar11,lVar16);
                        if (local_158 != CONCAT71(uStack_b7,local_b8)) {
                          local_148 = 0;
                        }
                        local_158 = CONCAT71(uStack_b7,local_b8);
                        lVar14 = FUN_140c54336();
                        if (lVar12 == 0) {
LAB_140ef03ec:
                          lVar14 = lVar12;
                        }
                        else if (lVar14 == 0) {
                          lVar14 = 0;
                        }
                        else if ((*(int *)(lVar14 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
                                (*(longlong *)
                                  (*(longlong *)(lVar12 + 0x30) +
                                  (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30))
                        goto LAB_140ef03ec;
                        if (local_150 != lVar14) {
                          local_148 = 0;
                        }
                        uVar11 = FUN_14477b664(lVar14);
                        local_150 = FUN_14477b664(uVar11);
                        if ((local_150 != 0) && (local_158 != 0)) {
                          local_148 = lVar16;
                        }
                        lVar12 = FUN_14090ae24(&local_140);
                        if (lVar12 == 0) {
                          local_140 = *(undefined8 *)(lVar20 + 0x30);
                          local_138 = *(undefined4 *)(lVar20 + 0x38);
                          uStack_134 = *(undefined4 *)(lVar20 + 0x3c);
                          uStack_130 = *(undefined4 *)(lVar20 + 0x40);
                          uStack_12c = *(undefined4 *)(lVar20 + 0x44);
                          if (&local_128 != (void **)(lVar20 + 0x48)) {
                            iVar2 = *(int *)(lVar20 + 0x50);
                            _Src = *(void **)(lVar20 + 0x48);
                            local_120 = iVar2;
                            if (iVar2 == 0 && local_11c == 0) {
                              local_11c = 0;
                            }
                            else {
                              FUN_1446dd670(&local_128,iVar2);
                              if (iVar2 != 0) {
                                memcpy(local_128,_Src,(longlong)iVar2 * 2);
                              }
                            }
                          }
                        }
                      }
                    }
                    FUN_1414288e4(lVar13 + 0x38,local_188);
                    local_b8 = '\0';
                    local_90[0] = 0;
                    FUN_14575a19a(&local_b8,0);
                    FUN_1448729ea(lVar13 + 0x38,&local_88,&local_b8);
                    local_c0 = FUN_14005fbd2(&local_88,0);
                    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                                       (ulonglong)((uint)local_68 * 0x120));
                    if (pcVar5 != (code *)0x0) {
                      ppppuVar15 = &local_88;
                      if (0x18 < local_70) {
                        ppppuVar15 = (undefined8 ****)local_88;
                      }
                      (*pcVar5)(ppppuVar15);
                    }
                    if (0x18 < local_70) {
                      FUN_1400020a8(local_88);
                    }
                    FUN_1448173f8(local_90);
                    plVar18 = local_1b0;
                    if ((local_b8 == '\x03') && (local_a8 != (longlong *)0x0)) {
                      LOCK();
                      piVar1 = (int *)((longlong)local_a8 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*local_a8 + 0x10))();
                      }
                    }
                    local_88 = (undefined8 ****)0x0;
                    plStack_80 = (longlong *)0x0;
                    FUN_1413a454c(&local_b8,local_c0,0,&local_88);
                    FUN_140008f88(local_d0,&local_b8);
                    if ((longlong *)CONCAT71(uStack_b7,local_b8) != (longlong *)0x0) {
                      (**(code **)(*(longlong *)CONCAT71(uStack_b7,local_b8) + 0x10))();
                    }
                    plVar3 = plStack_80;
                    if (plStack_80 != (longlong *)0x0) {
                      LOCK();
                      plVar4 = plStack_80 + 1;
                      *(int *)plVar4 = (int)*plVar4 + -1;
                      UNLOCK();
                      if ((int)*plVar4 == 0) {
                        (**(code **)*plStack_80)(plStack_80);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar3 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar3 + 0x10))(plVar3);
                        }
                      }
                    }
                  }
                }
                else {
                  FUN_148dc7322(&local_198,lVar13);
                }
              }
              else {
                FUN_148dc6f70(&local_198,lVar13);
              }
              if (local_190 != (longlong *)0x0) {
                iVar2 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar2 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
                  FUN_1418f0868(param_2,iVar2);
                }
                FUN_140e48b7c((longlong)iVar2 * 0xe0 + *param_2,&local_198);
              }
            }
          }
          else {
            lVar13 = FUN_144208ef0(lVar13);
            if (lVar13 != 0) {
              FUN_140eeff92(lVar13 + 0x18,param_2,local_1a8);
            }
          }
          local_198 = &PTR_FUN_14b7f2890;
          if (local_d0[0] != (longlong *)0x0) {
            (**(code **)(*local_d0[0] + 0x10))();
          }
          if (local_e0 != (longlong *)0x0) {
            (**(code **)(*local_e0 + 0x10))();
          }
          if (local_f0 != (longlong *)0x0) {
            (**(code **)(*local_f0 + 0x10))();
          }
          if (local_100 != (longlong *)0x0) {
            (**(code **)(*local_100 + 0x10))();
          }
          if (local_128 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
        plVar21 = plVar21 + 3;
      } while (plVar18 != plVar21);
    }
    bVar10 = 0 < (int)param_2[1];
  }
LAB_140ef0865:
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar10;
}



// FUNCTION 140ef08c4 FUN_140ef08c4 body=85 status=ok
// SIG undefined FUN_140ef08c4(void)

undefined8 * FUN_140ef08c4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ec5bf0;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ef0928 FUN_140ef0928 body=45 status=ok
// SIG undefined FUN_140ef0928(void)

undefined8 FUN_140ef0928(undefined8 param_1,int param_2)

{
  FUN_140ef0956();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140ef0956 FUN_140ef0956 body=178 status=ok
// SIG undefined FUN_140ef0956(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ef0956(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b600050;
  FUN_140ef0a08(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140ef09fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140ef0a08 FUN_140ef0a08 body=54 status=ok
// SIG undefined FUN_140ef0a08(void)

void FUN_140ef0a08(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140d587e5(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 140ef0a3e FUN_140ef0a3e body=124 status=ok
// SIG undefined FUN_140ef0a3e(void)

void FUN_140ef0a3e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3f5210;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (param_1[0xa7] != 0) {
    FUN_1400020a8();
  }
  FUN_140ef0aba(param_1 + 0x9f);
  if (*(char *)(param_1 + 0x9a) == '\x01') {
    FUN_1449db362(param_1 + 0x98);
    *(undefined1 *)(param_1 + 0x9a) = 0;
  }
  *param_1 = &PTR_FUN_14a8379d0;
  FUN_140d7a9b4(param_1 + 0x7e);
  return;
}



// FUNCTION 140ef0aba FUN_140ef0aba body=55 status=ok
// SIG undefined FUN_140ef0aba(void)

void FUN_140ef0aba(longlong *param_1)

{
  FUN_1404f230c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140ef0af2 FUN_140ef0af2 body=72 status=ok
// SIG undefined FUN_140ef0af2(void)

void FUN_140ef0af2(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0xaa0))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140ef0b22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xaa8))(param_1);
    return;
  }
  FUN_1468998ea(L"ServerStartUsingGadget_Validate");
  return;
}



// FUNCTION 140ef0b4c FUN_140ef0b4c body=86 status=ok
// SIG undefined FUN_140ef0b4c(void)

longlong FUN_140ef0b4c(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_140ef0ba2(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ef0ba2 FUN_140ef0ba2 body=55 status=ok
// SIG undefined FUN_140ef0ba2(void)

void FUN_140ef0ba2(longlong *param_1)

{
  FUN_140ef0bda(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140ef0bda FUN_140ef0bda body=121 status=ok
// SIG undefined FUN_140ef0bda(void)

void FUN_140ef0bda(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
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



// FUNCTION 140ef0c54 FUN_140ef0c54 body=328 status=ok
// SIG undefined FUN_140ef0c54(void)

void FUN_140ef0c54(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + -0x4a0);
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      lVar1 = *(longlong *)(param_1 + -0x4a0);
      if (lVar1 == 0) goto LAB_140ef0d90;
    }
    if ((((DAT_14cbadd90 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
        DAT_14cbadd90 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
LAB_140ef0d90:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ef0db2 FUN_140ef0db2 body=172 status=ok
// SIG undefined FUN_140ef0db2(void)

void FUN_140ef0db2(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar3 = *(longlong **)(param_2 + 8);
  if (plVar3 != (longlong *)0x0) {
    uVar2 = FUN_14069ce7c();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_14069ce7c();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if (((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) &&
         (*(longlong *)(param_2 + 8) == param_1[0x7a])) {
        lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
        iVar1 = *(int *)(lVar5 + 0x70);
        *(bool *)(param_1 + 0x64c) = 0 < iVar1;
        if ((*(byte *)(param_1 + 0x84) & 2) != 0) {
          (**(code **)(*param_1 + 0x6c8))(param_1);
        }
        FUN_140898514(param_1 + 0x64d,0 < iVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140ef0e5e FUN_140ef0e5e body=369 status=ok
// SIG undefined FUN_140ef0e5e(void)

void FUN_140ef0e5e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar3 = *(uint *)(param_1 + 0x1c08);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0x81) {
    iVar9 = 0x80;
  }
  else {
    lVar5 = (longlong)(int)uVar3;
    if (0x80 < *(uint *)(param_1 + 0x1c0c)) {
      lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
    }
    uVar6 = lVar5 * 0x38;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar6 + 0xf;
        if (uVar6 < 0x7ff1) {
          uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar8 = 0x32;
            if (0x32 < bVar2) {
              uVar8 = (ulonglong)bVar2;
            }
            uVar10 = 0x32 - (ulonglong)bVar2;
            do {
              uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar10 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar10 & 0xffffffff] & 0xf) == 0) goto LAB_140ef0ef6;
              lVar5 = uVar8 + 1 + uVar10;
              uVar10 = uVar10 - 1;
            } while (lVar5 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = (ulonglong)DAT_14c841df8;
          }
          uVar6 = -uVar6 & ((uVar1 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
      }
    }
LAB_140ef0ef6:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar6 >> 3;
    iVar7 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
    iVar9 = 0x7fffffff;
    if ((int)uVar3 <= iVar7) {
      iVar9 = iVar7;
    }
  }
  *(int *)(param_1 + 0x1c0c) = iVar9;
  FUN_140ef0fd0(param_1,param_2,iVar9,0x38);
  return;
}



// FUNCTION 140ef0fd0 FUN_140ef0fd0 body=148 status=ok
// SIG undefined FUN_140ef0fd0(void)

void FUN_140ef0fd0(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x1c00);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x38);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x1c00,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x1c00),param_1,(longlong)param_2 * 0x38);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x1c00,param_2,param_3,param_4);
  return;
}



// FUNCTION 140ef1064 FUN_140ef1064 body=278 status=ok
// SIG undefined FUN_140ef1064(void)

void FUN_140ef1064(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_140af78b2(param_1 + 0x1258);
  iVar1 = *param_3;
  if (((*param_2 != -1) != (iVar1 != -1)) &&
     (lVar2 = *(longlong *)(&DAT_00001ce8 + param_1), lVar2 != 0)) {
    lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x1118) + 0x20))(lVar2 + 0x1118);
    if (lVar2 != 0) {
      if (iVar1 == -1) {
        FUN_140ba2af2(lVar2,&DAT_14cb76108);
      }
      else {
        plVar4 = *(longlong **)(&DAT_00001ce8 + param_1);
        if (plVar4 != (longlong *)0x0) {
          uVar3 = FUN_1407ca880();
          plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar3);
          if (plVar4 != (longlong *)0x0) {
            uVar3 = FUN_1407ca880();
            plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
            if ((plVar4 != plVar5) && (plVar5 != (longlong *)0x0)) {
              uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
              FUN_140ef117a(uVar3);
            }
          }
        }
        FUN_140ba2cd0(lVar2,&DAT_14cb76108,0);
      }
    }
    if (*(longlong *)(*(longlong *)(&DAT_00001ce8 + param_1) + 0x32b8) != 0) {
      FUN_140d52e40(*(longlong *)(*(longlong *)(&DAT_00001ce8 + param_1) + 0x32b8),&DAT_14cb76108,
                    iVar1 != -1,1);
      return;
    }
  }
  return;
}



// FUNCTION 140ef117a FUN_140ef117a body=132 status=ok
// SIG undefined FUN_140ef117a(void)

void FUN_140ef117a(undefined8 param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  code *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14b432bf0;
  local_30 = FUN_143e53e94;
  local_58[0] = &LAB_1489ac6ce;
  FUN_140671824(param_1,local_58,1);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ef120e FUN_140ef120e body=132 status=ok
// SIG undefined FUN_140ef120e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140ef120e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ef1292 FUN_140ef1292 body=40 status=ok
// SIG undefined FUN_140ef1292(void)

undefined8 FUN_140ef1292(undefined8 param_1,int param_2)

{
  FUN_140ef12ba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ef12ba FUN_140ef12ba body=504 status=ok
// SIG undefined FUN_140ef12ba(void)

void FUN_140ef12ba(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b2c1580;
  param_1[0x73] = &PTR_FUN_14b2c1bc0;
  param_1[0x74] = &PTR_FUN_14b2c1be0;
  param_1[0x75] = &PTR_FUN_14b2c1c80;
  param_1[0x76] = &PTR_FUN_14b2c1cd0;
  FUN_1404d595a(param_1 + 0xb9,1);
  param_1[0xb3] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  if (*(int *)((longlong)param_1 + 0x5b4) != 0) {
    FUN_140115c12(param_1 + 0xb5,0);
  }
  param_1[0xb4] = 0;
  if (param_1[0xb5] != 0) {
    FUN_1400020a8();
  }
  param_1[0xb2] = 0;
  if (param_1[0xb0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xae] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xac] != 0) {
    FUN_1400020a8();
  }
  FUN_14028f4a8(param_1 + 0x91);
  if (param_1[0x8e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x83],*(undefined4 *)(param_1 + 0x84));
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x80],*(undefined4 *)(param_1 + 0x81));
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  param_1[0x76] = &PTR_FUN_14b2c6a40;
  plVar2 = (longlong *)param_1[0x78];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 140ef14b2 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 140ef1516 FUN_140ef1516 body=220 status=ok
// SIG undefined FUN_140ef1516(void)

void FUN_140ef1516(longlong param_1)

{
  undefined4 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1447f69b6(param_1 + 0xbb0);
  puVar1 = (undefined4 *)(param_1 + 0xb50);
  cVar2 = FUN_1403ae288(puVar1);
  if ((cVar2 == '\0') && (lVar3 = *(longlong *)(param_1 + 0xb70), lVar3 != 0)) {
    uVar4 = (**(code **)(*(longlong *)(lVar3 + 0x3a20) + 0x10))(lVar3 + 0x3a20);
    FUN_145d23f66(extraout_XMM0_Da,&local_40,uVar4);
    *(undefined8 *)(param_1 + 0xb60) = local_30;
    *(undefined8 *)(param_1 + 0xb68) = uStack_28;
    *puVar1 = local_40;
    *(undefined4 *)(param_1 + 0xb54) = uStack_3c;
    *(undefined4 *)(param_1 + 0xb58) = uStack_38;
    *(undefined4 *)(param_1 + 0xb5c) = uStack_34;
  }
  if ((*(char *)(param_1 + 0x178) != '\x03') &&
     (*(int *)(param_1 + 0xb48) < *(int *)(param_1 + 0xb44))) {
    cVar2 = FUN_1403ae288(puVar1);
    if (cVar2 != '\0') {
      lVar3 = FUN_14008e0ae(puVar1);
      FUN_1405e45ca(lVar3 + 0x168,puVar1);
    }
  }
  *(undefined4 *)(param_1 + 0xb48) = *(undefined4 *)(param_1 + 0xb44);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ef15f4 FUN_140ef15f4 body=70 status=ok
// SIG undefined FUN_140ef15f4(void)

void FUN_140ef15f4(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_14011fc22(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140ef1609. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  puVar2 = (undefined8 *)FUN_140ef166c(&DAT_14cb7e968);
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  *puVar2 = &PTR_FUN_14b04c4c0;
  *(undefined2 *)(puVar2 + 3) = 1;
  return;
}



// FUNCTION 140ef163a FUN_140ef163a body=49 status=ok
// SIG undefined FUN_140ef163a(void)

void FUN_140ef163a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140ef166c(&DAT_14cb7e968);
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14b04c4c0;
  *(undefined2 *)(puVar1 + 3) = 1;
  return;
}



// FUNCTION 140ef166c FUN_140ef166c body=84 status=ok
// SIG undefined FUN_140ef166c(void)

void FUN_140ef166c(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x200,0);
    lVar4 = 0xf;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 4;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x10;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 140ef16ce FUN_140ef16ce body=181 status=ok
// SIG undefined FUN_140ef16ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140ef16ce(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b744cb0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b4677f0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ef178a FUN_140ef178a body=57 status=ok
// SIG undefined FUN_140ef178a(void)

void FUN_140ef178a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62ed0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62ed0 =
         FUN_140002ddd(FUN_1464fb69c,uVar1,L"GbxRotationTargetModifier_DistanceBasedBlend");
  }
  return;
}



// FUNCTION 140ef17c4 FUN_140ef17c4 body=3186 status=ok
// SIG undefined FUN_140ef17c4(void)

void FUN_140ef17c4(longlong param_1,float param_2)

{
  longlong *plVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  double *pdVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  double *pdVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  longlong *plVar22;
  bool bVar23;
  bool bVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  ulonglong local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  double local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined8 local_128;
  double dStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined2 local_c0;
  undefined8 local_bc;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((*(byte *)(param_1 + 0x968) & 4) != 0) goto LAB_140ef1a87;
  if ((0.0 < *(float *)(param_1 + 0x97c)) &&
     (fVar27 = *(float *)(param_1 + 0x97c) - param_2, *(float *)(param_1 + 0x97c) = fVar27,
     fVar27 <= 0.0)) {
    FUN_14051c90a(param_1);
    *(undefined4 *)(param_1 + 0x97c) = 0;
  }
  lVar12 = DAT_14cb83170;
  if (*(int *)(param_1 + 0x970) == 0) {
LAB_140ef1ae5:
    bVar23 = false;
  }
  else {
    uVar20 = *(uint *)(param_1 + 0x96c);
    bVar23 = false;
    if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
      lVar21 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
      if ((lVar21 == 0) || (*(int *)(lVar21 + 0x10) != *(int *)(param_1 + 0x970)))
      goto LAB_140ef1ae5;
      bVar23 = (*(uint *)(lVar21 + 8) & 0x10200000) == 0;
    }
  }
  if (((!bVar23) && ((*(byte *)(param_1 + 0x968) & 8) == 0)) &&
     (*(longlong *)(param_1 + 0x788) != 0)) {
    lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar8 = *(int *)(lVar21 + 0xc60);
    if (iVar8 == 0x40000002) {
      uVar11 = 0;
    }
    else {
      bVar24 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar8 != 2)) {
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          bVar24 = DVar9 == DVar10;
        }
        else {
          bVar24 = false;
        }
      }
      uVar11 = (ulonglong)(bVar24 ^ 1);
    }
    fVar27 = *(float *)(lVar12 + uVar11 * 4);
    lVar12 = FUN_1447210f0(param_1);
    if (lVar12 == 0) {
      dVar33 = -1.0;
    }
    else {
      dVar33 = *(double *)(lVar12 + 0x6d0);
    }
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x788) + 0x120);
    if ((lVar12 == 0) || (lVar12 = *(longlong *)(lVar12 + 0xa8), lVar12 == 0)) {
LAB_140ef1941:
      cVar7 = (**(code **)(**(longlong **)(param_1 + 0x788) + 0x930))();
      if (cVar7 == '\0') {
        bVar2 = *(byte *)(param_1 + 0x968);
        *(byte *)(param_1 + 0x968) = bVar2 | 8;
        FUN_14022e476(param_1);
        if ((bVar2 & 8) == 0) {
          FUN_14051c90a(param_1);
        }
      }
      else {
        fVar34 = *(float *)(param_1 + 0x93c);
        if (fVar34 < 0.0) {
          (**(code **)(**(longlong **)(param_1 + 0x788) + 0x4e0))
                    (*(longlong **)(param_1 + 0x788),&local_128);
          if (local_118 * local_118 + local_128 * local_128 + dStack_120 * dStack_120 <
              (double)(fVar27 * fVar27)) {
            *(float *)(param_1 + 0x93c) = (float)dVar33;
            (**(code **)(*(longlong *)(param_1 + 0x520) + 0x18))(param_1 + 0x520,&local_128);
            if (local_128._4_1_ == '\x01') {
              uVar16 = FUN_1447210f0(param_1);
              plVar22 = (longlong *)FUN_14007a5e6(uVar16);
              if (plVar22 != (longlong *)0x0) {
                (**(code **)(*plVar22 + 0x18))(plVar22,(ulonglong)local_128 & 0xffffffff);
              }
            }
            goto LAB_140ef19ca;
          }
          fVar34 = *(float *)(param_1 + 0x93c);
        }
        if ((0.0 <= fVar34) &&
           ((**(code **)(**(longlong **)(param_1 + 0x788) + 0x4e0))
                      (*(longlong **)(param_1 + 0x788),&local_128),
           (double)(fVar27 * fVar27) <
           local_118 * local_118 + local_128 * local_128 + dStack_120 * dStack_120)) {
          *(undefined4 *)(param_1 + 0x93c) = 0xbf800000;
        }
      }
    }
    else {
      uVar16 = FUN_140ef2452();
      plVar22 = (longlong *)FUN_144718840(lVar12,uVar16);
      if ((plVar22 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar22 + 0x28))(plVar22), cVar7 != '\0')) goto LAB_140ef1941;
    }
LAB_140ef19ca:
    lVar12 = DAT_14cb83130;
    if (0.0 <= *(float *)(param_1 + 0x93c)) {
      iVar8 = *(int *)(lVar21 + 0xc60);
      if (iVar8 == 0x40000002) {
        uVar11 = 0;
      }
      else {
        bVar24 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar8 != 2)) {
          if (iVar8 == 1) {
            DVar9 = FUN_140ad26c0();
            DVar10 = GetCurrentThreadId();
            bVar24 = DVar9 == DVar10;
          }
          else {
            bVar24 = false;
          }
        }
        uVar11 = (ulonglong)(bVar24 ^ 1);
      }
      fVar27 = *(float *)(lVar12 + uVar11 * 4);
      if ((0.0 <= fVar27) && (fVar27 < (float)dVar33 - *(float *)(param_1 + 0x93c))) {
        bVar2 = *(byte *)(param_1 + 0x968);
        *(byte *)(param_1 + 0x968) = bVar2 | 8;
        FUN_14022e476(param_1);
        if ((bVar2 & 8) == 0) {
          FUN_14051c90a(param_1);
        }
        *(undefined4 *)(param_1 + 0x93c) = 0xbf800000;
      }
    }
  }
  dVar5 = (double)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
  dVar33 = (double)CONCAT44(local_170._4_4_,(uint)local_170);
  local_170 = dVar33;
  uStack_168 = dVar5;
  if ((bVar23) && (lVar12 = *(longlong *)(param_1 + 0x1c8), lVar12 != 0)) {
    local_170 = (double)CONCAT44(local_170._4_4_,(uint)local_170);
    uStack_168 = (double)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
    if ((*(int *)(param_1 + 0x970) != 0) &&
       ((uVar20 = *(uint *)(param_1 + 0x96c),
        local_170 = (double)CONCAT44(local_170._4_4_,(uint)local_170),
        uStack_168 = (double)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168), -1 < (int)uVar20 &&
        (local_170 = (double)CONCAT44(local_170._4_4_,(uint)local_170),
        uStack_168 = (double)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168),
        (int)uVar20 < DAT_14c9647dc)))) {
      uVar19 = uVar20 >> 0x10;
      plVar22 = (longlong *)
                ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)uVar19 * 8));
      local_170 = (double)CONCAT44(local_170._4_4_,(uint)local_170);
      uStack_168 = (double)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
      if ((plVar22 != (longlong *)0x0) &&
         (((local_170 = (double)CONCAT44(local_170._4_4_,(uint)local_170),
           uStack_168 = (double)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168),
           (int)plVar22[2] == *(int *)(param_1 + 0x970) &&
           (dVar25 = (double)(ulonglong)*(uint *)(plVar22 + 1),
           local_170 = (double)CONCAT44(local_170._4_4_,(uint)local_170),
           uStack_168 = (double)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168),
           (*(uint *)(plVar22 + 1) & 0x10200000) == 0)) &&
          (lVar21 = *plVar22, local_170 = dVar33, uStack_168 = dVar5, lVar21 != 0)))) {
        dVar5 = *(double *)(lVar12 + 0x260);
        dVar6 = *(double *)(lVar12 + 0x268);
        dVar33 = *(double *)(lVar12 + 0x270);
        dVar28 = *(double *)(lVar12 + 0x240);
        dVar30 = *(double *)(lVar12 + 0x248);
        dVar32 = *(double *)(lVar12 + 0x250);
        dVar29 = *(double *)(lVar12 + 600);
        pdVar18 = *(double **)(lVar12 + 0x228);
        local_128 = dVar28;
        dStack_120 = dVar30;
        local_118 = dVar32;
        uStack_110 = dVar29;
        if (pdVar18 == (double *)0x0) {
          uVar19 = 0x40;
          pdVar18 = (double *)FUN_14001cc68(0x40,0x10);
          dVar25 = DAT_14c8463d8;
          *pdVar18 = DAT_14c8463d0;
          pdVar18[1] = dVar25;
          dVar25 = DAT_14c8463e8;
          pdVar18[2] = DAT_14c8463e0;
          pdVar18[3] = dVar25;
          dVar25 = DAT_14c846500;
          pdVar18[4] = DAT_14c8464f8;
          pdVar18[5] = dVar25;
          dVar25 = DAT_14c846508;
          pdVar18[6] = DAT_14c846508;
          *(double **)(lVar12 + 0x228) = pdVar18;
        }
        auVar3._8_4_ = (int)-(ulonglong)(dVar30 != pdVar18[1]);
        auVar3._0_8_ = -(ulonglong)(dVar28 != *pdVar18);
        auVar3._12_4_ = (int)(-(ulonglong)(dVar30 != pdVar18[1]) >> 0x20);
        iVar8 = movmskpd(SUB84(dVar25,0),auVar3);
        auVar4._8_4_ = (int)-(ulonglong)(dVar29 != pdVar18[3]);
        auVar4._0_8_ = -(ulonglong)(dVar32 != pdVar18[2]);
        auVar4._12_4_ = (int)(-(ulonglong)(dVar29 != pdVar18[3]) >> 0x20);
        uVar20 = movmskpd(uVar19,auVar4);
        if ((uVar20 & 0x3fffffff) != 0 || iVar8 != 0) {
          *(undefined4 *)(pdVar18 + 2) = (undefined4)local_118;
          *(undefined4 *)((longlong)pdVar18 + 0x14) = local_118._4_4_;
          *(undefined4 *)(pdVar18 + 3) = (undefined4)uStack_110;
          *(undefined4 *)((longlong)pdVar18 + 0x1c) = uStack_110._4_4_;
          *pdVar18 = local_128;
          pdVar18[1] = dStack_120;
          FUN_1448052ee(&local_128,&local_170);
          pdVar18[6] = local_160;
          pdVar18[4] = (double)CONCAT44(local_170._4_4_,(uint)local_170);
          pdVar18[5] = (double)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
        }
        lVar12 = *(longlong *)(lVar21 + 0x1c8);
        if (lVar12 == 0) {
          pdVar15 = &DAT_14c8464e0;
          dVar25 = DAT_14c8464f0;
        }
        else {
          pdVar15 = (double *)(lVar12 + 0x260);
          dVar25 = *(double *)(lVar12 + 0x270);
        }
        dVar25 = dVar25 - dVar33;
        dVar28 = *pdVar15 - dVar5;
        dVar30 = pdVar15[1] - dVar6;
        dVar32 = dVar25 * dVar25 + dVar28 * dVar28 + dVar30 * dVar30;
        fVar34 = (float)SQRT(dVar32);
        fVar27 = *(float *)(param_1 + 0x938) * param_2;
        if (fVar34 <= fVar27) {
          fVar27 = fVar34;
        }
        if (((dVar32 != 1.0) || (dVar29 = dVar28, dVar31 = dVar30, dVar26 = dVar25, NAN(dVar32))) &&
           (dVar29 = DAT_14c8464e0, dVar31 = DAT_14c8464e8, dVar26 = DAT_14c8464f0,
           9.99999993922529e-09 <= dVar32)) {
          dVar32 = 1.0 / SQRT(dVar32);
          dVar29 = dVar28 * dVar32;
          dVar31 = dVar30 * dVar32;
          dVar26 = dVar25 * dVar32;
        }
        dVar25 = (double)fVar27;
        local_160 = dVar33 + dVar26 * dVar25;
        uStack_168 = dVar6 + dVar31 * dVar25;
        local_170 = dVar5 + dVar29 * dVar25;
        local_118 = pdVar18[6];
        local_128 = pdVar18[4];
        dStack_120 = pdVar18[5];
        local_190 = local_190 & 0xffffffffffffff00;
        local_198 = 0;
        FUN_14084af84(*(undefined8 *)(param_1 + 0x1c8),&local_170,&local_128,0);
        if (DAT_14cb83104 < fVar34 - fVar27) goto LAB_140ef1a3d;
      }
    }
    FUN_140ef2538(param_1);
  }
LAB_140ef1a3d:
  if (((*(byte *)(param_1 + 0x968) & 4) == 0) &&
     (fVar27 = *(float *)(param_1 + 0x960), !bVar23 && 0.0 < fVar27)) {
    plVar22 = *(longlong **)(param_1 + 0x1c8);
    if (plVar22 != (longlong *)0x0) {
      fVar27 = *(float *)(param_1 + 0x964) / fVar27;
      if (1.0 <= fVar27) {
        fVar27 = 1.0;
      }
      local_130 = (double)(1.0 - fVar27);
      local_140 = (double)plVar22[0x39] * local_130;
      local_138 = (double)plVar22[0x3a] * local_130;
      local_130 = local_130 * (double)plVar22[0x3b];
      (**(code **)(*plVar22 + 0x478))();
      fVar27 = *(float *)(param_1 + 0x960);
    }
    param_2 = param_2 + *(float *)(param_1 + 0x964);
    *(float *)(param_1 + 0x964) = param_2;
    if (fVar27 <= param_2) {
      *(undefined4 *)(param_1 + 0x960) = 0;
    }
  }
  lVar12 = *(longlong *)(param_1 + 0x4e8);
  if (lVar12 == 0) goto LAB_140ef1a87;
  if ((*(char *)(param_1 + 0x9a1) == '\x01') && (*(char *)(param_1 + 0x9a0) == '\0')) {
    *(undefined2 *)(param_1 + 0x9a0) = 1;
    dVar33 = *(double *)(lVar12 + 0x180);
    uVar16 = FUN_14477b664(*(undefined8 *)(lVar12 + 0x188));
    uVar16 = FUN_14477b664(uVar16);
    lVar21 = *(longlong *)(lVar12 + 400);
    local_170._0_4_ = (uint)local_170 & 0xffffff00;
    local_170._4_4_ = 0;
    uStack_168._0_4_ = 0;
    local_160 = dVar33;
    uVar16 = FUN_14477b664(uVar16);
    local_158 = FUN_14477b664(uVar16);
    local_148 = 0;
    local_150 = lVar21;
    if (local_158 == 0) {
      uVar16 = FUN_140067708();
      local_158 = FUN_14477b664(uVar16);
    }
    if (local_150 == 0) {
      if ((local_158 != 0) && (local_160 != 0.0)) {
        plVar22 = *(longlong **)(local_158 + 0xb8);
        if ((plVar22 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar22 + 0x108))(plVar22), cVar7 == '\0')) {
          local_150 = 0;
        }
        else {
          uVar16 = (**(code **)(*plVar22 + 0x110))(plVar22);
          local_150 = FUN_144aff482(uVar16,&local_160);
          if (local_150 != 0) goto LAB_140ef2030;
        }
      }
      if (((char)local_170 == '\x01') && (CONCAT44((undefined4)uStack_168,local_170._4_4_) != 0))
      goto LAB_140ef2030;
    }
    else {
LAB_140ef2030:
      lVar21 = *(longlong *)(param_1 + 0x1c8);
      if (lVar21 == 0) {
        puVar17 = &DAT_14c8464e0;
        local_f8 = DAT_14c8464f0;
      }
      else {
        puVar17 = (undefined8 *)(lVar21 + 0x260);
        local_f8 = *(double *)(lVar21 + 0x270);
      }
      local_108 = *(undefined4 *)puVar17;
      uStack_104 = *(undefined4 *)((longlong)puVar17 + 4);
      uStack_100 = *(undefined4 *)(puVar17 + 1);
      uStack_fc = *(undefined4 *)((longlong)puVar17 + 0xc);
      local_128 = 0.0;
      dStack_120 = 0.0;
      local_118 = 0.0;
      uStack_110 = 1.0;
      uStack_f0 = 0;
      local_e8 = 0x3ff0000000000000;
      uStack_e0 = 0x3ff0000000000000;
      local_d8 = 0x3ff0000000000000;
      uStack_d0 = 0;
      local_c8 = 0x3f800000;
      local_c0 = 0;
      local_bc = 0;
      uVar16 = FUN_1447210f0(param_1);
      local_190 = 0;
      local_198 = param_1;
      FUN_140cb5d65(&local_188,uVar16,&local_170,&local_128);
      *(undefined8 *)(param_1 + 0x9a8) = local_188;
      *(undefined8 *)(param_1 + 0x9b0) = local_180;
      *(undefined8 *)(param_1 + 0x9b8) = local_178;
    }
    local_170 = (double)CONCAT44(local_170._4_4_,(uint)local_170);
    uStack_168 = (double)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
    if ((local_148 != 0) &&
       (local_170 = (double)CONCAT44(local_170._4_4_,(uint)local_170),
       uStack_168 = (double)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168),
       (DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(local_148 + 0x50));
    }
  }
  if (*(char *)(lVar12 + 0x198) == '\x01') {
    cVar7 = FUN_144904448((longlong *)(param_1 + 0x9a8));
    if ((((cVar7 != '\0') && (plVar22 = *(longlong **)(param_1 + 0x9a8), plVar22 != (longlong *)0x0)
         ) && (*(longlong *)(param_1 + 0x9b0) != -1)) &&
       (*plVar22 == *(longlong *)(param_1 + 0x9b0))) {
      *(int *)(plVar22 + 0x21) = (int)plVar22[0x21] + 1;
      lVar12 = *(longlong *)(param_1 + 0x1c8);
      if (lVar12 == 0) {
        plVar13 = (longlong *)&DAT_14c8464e0;
        dVar33 = DAT_14c8464f0;
      }
      else {
        plVar13 = (longlong *)(lVar12 + 0x260);
        dVar33 = *(double *)(lVar12 + 0x270);
      }
      lVar12 = *plVar13;
      lVar21 = plVar13[1];
      plVar13 = plVar22 + 0x28;
      uVar20 = *(uint *)((longlong)plVar22 + 0x1d4);
      iVar8 = 0;
      *(undefined4 *)(plVar22 + 0x3a) = 0;
      if ((int)uVar20 < 0) {
        FUN_147f80112(plVar13,0);
        iVar8 = (int)plVar22[0x3a];
        uVar20 = *(uint *)((longlong)plVar22 + 0x1d4);
      }
      *(undefined1 *)((longlong)plVar22 + 0x26c) = 0;
      *(uint *)(plVar22 + 0x3a) = iVar8 + 1U;
      if (uVar20 < iVar8 + 1U) {
        FUN_140089f7a(plVar13,iVar8);
      }
      if ((longlong *)plVar22[0x38] != (longlong *)0x0) {
        plVar13 = (longlong *)plVar22[0x38];
      }
      lVar14 = (longlong)iVar8;
      plVar13[lVar14 * 0x10] = 0;
      (plVar13 + lVar14 * 0x10)[1] = 0;
      plVar13[lVar14 * 0x10 + 2] = 0;
      (plVar13 + lVar14 * 0x10 + 2)[1] = 0x3ff0000000000000;
      plVar13[lVar14 * 0x10 + 4] = lVar12;
      (plVar13 + lVar14 * 0x10 + 4)[1] = lVar21;
      plVar13[lVar14 * 0x10 + 6] = (longlong)dVar33;
      (plVar13 + lVar14 * 0x10 + 6)[1] = 0;
      plVar1 = plVar13 + lVar14 * 0x10 + 8;
      *(undefined4 *)plVar1 = 0;
      *(undefined4 *)((longlong)plVar1 + 4) = 0x3ff00000;
      *(undefined4 *)(plVar1 + 1) = 0;
      *(undefined4 *)((longlong)plVar1 + 0xc) = 0x3ff00000;
      plVar13[lVar14 * 0x10 + 10] = 0x3ff0000000000000;
      (plVar13 + lVar14 * 0x10 + 10)[1] = 0;
      plVar13[lVar14 * 0x10 + 0xc] = 0x3f800000;
      *(undefined2 *)(plVar13 + lVar14 * 0x10 + 0xd) = 0;
      *(undefined8 *)((longlong)plVar13 + lVar14 * 0x80 + 0x6c) = 0;
      FUN_1447906c0(plVar22,0);
      *(int *)(plVar22 + 0x21) = (int)plVar22[0x21] + -1;
      if ((int)plVar22[0x26] < 1) {
        FUN_1400847bc(plVar22 + 0x17,0);
        if ((int)plVar22[0x21] == 0) {
          FUN_140087e46(plVar22);
          if (*plVar22 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_140ef1a87;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar22);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar22);
          }
        }
      }
    }
  }
LAB_140ef1a87:
  if ((local_a0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ef2452 FUN_140ef2452 body=228 status=ok
// SIG undefined FUN_140ef2452(void)

longlong FUN_140ef2452(void)

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
  if (DAT_14cb69848 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148755b85;
    local_40 = FUN_146521d31;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"JunkAttachParent",&DAT_14cb69848,&DAT_148755b84);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb69848;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ef2538 FUN_140ef2538 body=60 status=ok
// SIG undefined FUN_140ef2538(void)

void FUN_140ef2538(longlong param_1)

{
  *(byte *)(param_1 + 0x968) = *(byte *)(param_1 + 0x968) | 4;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1449e3cec(*(longlong *)(param_1 + 0x1c8),1,1);
  }
  FUN_1405bab3a(param_1,1);
  FUN_140d4f9a8(param_1);
  return;
}



// FUNCTION 140ef2574 FUN_140ef2574 body=175 status=ok
// SIG undefined FUN_140ef2574(void)

undefined8 FUN_140ef2574(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  
  *param_2 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[1] = *(undefined8 *)(param_1 + 0x10);
  param_2[2] = uVar3;
  param_2[3] = *(undefined8 *)(param_1 + 0x20);
  uVar6 = DAT_14c846500._4_4_;
  uVar5 = (undefined4)DAT_14c846500;
  uVar4 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar4;
  *(undefined4 *)(param_2 + 5) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar6;
  param_2[6] = DAT_14c846508;
  *(undefined2 *)(param_2 + 7) = 1;
  *(undefined1 *)((longlong)param_2 + 0x3a) = 0x40;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 0xff00ffff;
  lVar8 = (longlong)*(int *)(param_2 + 0x22);
  uVar7 = *(int *)(param_2 + 0x22) + 1;
  *(uint *)(param_2 + 0x22) = uVar7;
  if (*(uint *)((longlong)param_2 + 0x114) < uVar7) {
    FUN_140ef2624(param_2 + 0x21);
  }
  lVar2 = param_2[0x21];
  *(undefined1 *)(lVar2 + lVar8 * 0x48) = 0;
  *(undefined8 *)(lVar2 + 4 + lVar8 * 0x48) = 0x42c800003f800000;
  *(undefined1 *)(lVar2 + 0xc + lVar8 * 0x48) = 0;
  *(undefined4 *)(lVar2 + 0x10 + lVar8 * 0x48) = 0x43b40000;
  puVar1 = (undefined8 *)(lVar2 + 0x18 + lVar8 * 0x48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + 0x28 + lVar8 * 0x48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + 0x38 + lVar8 * 0x48);
  *puVar1 = 0;
  puVar1[1] = 0;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 140ef2624 FUN_140ef2624 body=370 status=ok
// SIG undefined FUN_140ef2624(void)

void FUN_140ef2624(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 0x48;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140ef26ad;
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
LAB_140ef26ad:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 140ef2796 FUN_140ef2796 body=40 status=ok
// SIG undefined FUN_140ef2796(void)

undefined8
FUN_140ef2796(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 140ef27be FUN_140ef27be body=1501 status=ok
// SIG undefined FUN_140ef27be(void)

longlong * FUN_140ef27be(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined1 local_f4 [4];
  longlong *local_f0;
  undefined4 local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  longlong *local_98;
  longlong local_90;
  wchar_t *local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar9 = (longlong *)*param_2;
  if (*(code **)(*plVar9 + 0x50) != FUN_144828418) {
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x50))();
  }
  FUN_1447a1fc0(plVar9);
  plVar9 = (longlong *)*param_2;
  pcVar3 = *(code **)(*plVar9 + 0x28);
  if (pcVar3 == FUN_14482841c) {
    plVar10 = plVar9 + 3;
    if (plVar9[5] != 0) {
      plVar10 = (longlong *)(plVar9[5] + 8);
    }
  }
  else if (pcVar3 == (code *)&LAB_14010c34c) {
    plVar10 = plVar9 + 2;
  }
  else {
    plVar10 = (longlong *)(*pcVar3)(plVar9);
  }
  if ((1 < (int)plVar10[1]) &&
     (*(int *)(DAT_14cb863c0 + 0x34 + (ulonglong)((uint)*(ushort *)(param_2 + 2) * 0x50)) <
      *(int *)(DAT_14cb863c0 + 8 + (ulonglong)((uint)*(ushort *)(param_2 + 2) * 0x50)))) {
    FUN_14023409e(&local_a0,param_2,1);
    local_b8 = (undefined8 *)0x0;
    uStack_b0 = 0;
    FUN_1467cf814(&local_a0,&local_b8);
    local_118 = (longlong)(int)uStack_b0;
    if (0 < local_118) {
      local_c8 = 0;
      uStack_c0 = 0;
      local_110 = local_118 << 4;
      puVar12 = local_b8;
      do {
        lVar14 = DAT_14cb863c0;
        iVar7 = *(int *)(puVar12 + 1);
        puVar11 = &DAT_149dfb77a;
        if (iVar7 != 0) {
          puVar11 = (undefined2 *)*puVar12;
        }
        uVar2 = *(ushort *)(param_2 + 2);
        lVar13 = DAT_14cb863c0 + (ulonglong)((uint)uVar2 * 0x50);
        iVar4 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar4 = 0;
        }
        uVar6 = FUN_144a49b4a(iVar4,puVar11);
        iVar7 = FUN_14087d6b6(lVar13,uVar6,puVar12);
        lVar14 = (longlong)iVar7 * 0x48 + *(longlong *)(lVar14 + (ulonglong)((uint)uVar2 * 0x50));
        if (lVar14 != 0 && iVar7 != -1) {
          uVar8 = FUN_1406f625c(param_4);
          FUN_140f4ea62(lVar14 + 0x10,&local_e0,uVar8,param_3);
          FUN_144a5dc74(&local_f0);
          if (local_d0 == 0) {
            if ((local_e0 != 0) && (local_d8 != 0)) {
              plVar9 = *(longlong **)(local_d8 + 0xb8);
              if ((plVar9 == (longlong *)0x0) ||
                 (cVar5 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar5 == '\0')) {
                local_d0 = 0;
              }
              else {
                uVar8 = (**(code **)(*plVar9 + 0x110))(plVar9);
                local_d0 = FUN_144aff482(uVar8,&local_e0);
                if (local_d0 != 0) goto LAB_140ef2a44;
              }
            }
          }
          else {
LAB_140ef2a44:
            iVar7 = FUN_144a7891a(local_d8);
            if (iVar7 == 0x101028) {
              local_90 = local_e0;
              FUN_1446dcdd4(&local_88,&local_90);
              FUN_140ac6c96(&local_88,&local_f0);
              if (CONCAT44(uStack_6c,local_70) != 0) {
                FUN_1400020a8();
              }
            }
            else {
              iVar7 = FUN_144a7891a(local_d8);
              if (iVar7 == 0x3860a972) {
                local_90 = local_e0;
                FUN_1446dcdd4(&local_88,&local_90);
                plVar9 = (longlong *)FUN_1412e518a(&local_88);
                if (CONCAT44(uStack_6c,local_70) != 0) {
                  FUN_1400020a8();
                }
                if (plVar9 != (longlong *)0x0) {
                  (**(code **)(*plVar9 + 0x18))(plVar9,&local_88);
                  FUN_140008f88(&local_f0,&local_88);
                  if (local_88 != (wchar_t *)0x0) {
                    (**(code **)(*(longlong *)local_88 + 0x10))();
                  }
                }
              }
              else {
                iVar7 = FUN_144a7891a(local_d8);
                if ((iVar7 == 0x6000) &&
                   (lVar14 = FUN_140e045c8(local_e0), plVar9 = local_f0, lVar14 != 0)) {
                  plVar10 = *(longlong **)(lVar14 + 0x28);
                  if (local_f0 != plVar10) {
                    local_f0 = plVar10;
                    if (plVar10 != (longlong *)0x0) {
                      (**(code **)(*plVar10 + 8))();
                    }
                    if (plVar9 != (longlong *)0x0) {
                      (**(code **)(*plVar9 + 0x10))(plVar9);
                    }
                  }
                  local_e8 = *(undefined4 *)(lVar14 + 0x30);
                }
              }
            }
          }
          cVar5 = FUN_144a7c5f6(&local_f0);
          if (cVar5 != '\0') {
            local_88 = L"MissingArg";
            local_80 = 10;
            FUN_1446e940c(&local_90,&local_88);
            local_88 = L"MissionDisplayHelper";
            local_80 = 0x14;
            FUN_1446e940c(local_f4,&local_88);
            FUN_140208bae(&local_88,local_f4,&local_90,L"MISSING");
            FUN_140008f88(&local_f0,&local_88);
            if (local_88 != (wchar_t *)0x0) {
              (**(code **)(*(longlong *)local_88 + 0x10))();
            }
          }
          local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
          local_78 = local_f0;
          if (local_f0 != (longlong *)0x0) {
            (**(code **)(*local_f0 + 8))();
          }
          local_70 = local_e8;
          FUN_1467e355c(&local_c8,puVar12,&local_88);
          if (local_78 != (longlong *)0x0) {
            (**(code **)(*local_78 + 0x10))();
          }
          if (local_f0 != (longlong *)0x0) {
            (**(code **)(*local_f0 + 0x10))();
          }
        }
        puVar12 = puVar12 + 2;
        local_110 = local_110 + -0x10;
      } while (local_110 != 0);
      local_108 = local_a0;
      local_100 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_98 + 1) = (int)local_98[1] + 1;
        UNLOCK();
      }
      FUN_140233c04(param_1,&local_108,&local_c8);
      FUN_14010f8af(local_c8,uStack_c0 & 0xffffffff);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_1447a1747(local_b8,(int)uStack_b0);
    if (local_b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_98 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_98 + 0x10))(local_98);
        }
      }
    }
    if (0 < (int)local_118) goto LAB_140ef287c;
  }
  plVar9 = (longlong *)*param_2;
  *param_1 = (longlong)plVar9;
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
LAB_140ef287c:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140ef2d9c FUN_140ef2d9c body=2658 status=ok
// SIG undefined FUN_140ef2d9c(void)

void FUN_140ef2d9c(undefined **param_1)

{
  undefined **ppuVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined *puVar5;
  char cVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined **ppuVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  undefined ***pppuVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined *puVar18;
  undefined *puVar19;
  uint uVar20;
  undefined *puVar21;
  longlong lVar22;
  undefined **ppuVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_138 [39];
  char local_111;
  undefined *local_110;
  undefined **local_108;
  char local_fd;
  float local_fc;
  code *local_f8 [2];
  undefined ***local_e8;
  undefined **local_d8;
  undefined **local_d0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)((longlong)param_1 + 0x514) == 0) goto LAB_140ef2f4e;
  lVar7 = FUN_140ccfc10();
  iVar14 = *(int *)((longlong)param_1 + 0x514);
  iVar13 = -iVar14;
  if (-iVar14 < 0) {
    iVar13 = iVar14;
  }
  uVar16 = (ulonglong)((*(byte *)(param_1 + 0xa3) ^ 1) << 4);
  iVar2 = *(int *)(lVar7 + 0x160 + uVar16);
  if (iVar2 <= iVar13) {
    iVar13 = iVar2;
  }
  uVar26 = 0x3f800000;
  if (0 < iVar13) {
    lVar17 = uVar16 + 0x158;
    if (iVar14 < 1) {
      if (-1 < iVar14) goto LAB_140ef2e6a;
      puVar8 = (undefined4 *)(*(longlong *)(lVar7 + lVar17) + (ulonglong)(iVar13 - 1U) * 0xc + 8);
    }
    else {
      puVar8 = (undefined4 *)(*(longlong *)(lVar7 + lVar17) + (ulonglong)(iVar13 - 1U) * 0xc + 4);
    }
    uVar26 = *puVar8;
  }
LAB_140ef2e6a:
  if (*(char *)(param_1 + 0x6b) == '\x01') {
    fVar27 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c))) *
             *(float *)(param_1 + 0x69) *
             (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
             *(float *)((longlong)param_1 + 0x344);
    *(float *)((longlong)param_1 + 0x354) = fVar27;
    *(undefined1 *)(param_1 + 0x6b) = 0;
  }
  else {
    fVar27 = *(float *)((longlong)param_1 + 0x354);
  }
  FUN_140ef3800(param_1 + 0x67,uVar26);
  if (*(char *)(param_1 + 0x6b) == '\x01') {
    fVar24 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c))) *
             *(float *)(param_1 + 0x69) *
             (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
             *(float *)((longlong)param_1 + 0x344);
    *(float *)((longlong)param_1 + 0x354) = fVar24;
    *(undefined1 *)(param_1 + 0x6b) = 0;
  }
  else {
    fVar24 = *(float *)((longlong)param_1 + 0x354);
  }
  *(float *)((longlong)param_1 + 0x374) = fVar27 - fVar24;
LAB_140ef2f4e:
  uVar28 = 0x3f800000;
  uVar26 = 0x3f800000;
  if (param_1[0x8b] != (undefined *)0x0) {
    plVar12 = (longlong *)param_1[0x8c];
    uVar26 = 0x3f800000;
    if (plVar12 != (longlong *)0x0) {
      lVar7 = (**(code **)(*plVar12 + 0x10))(plVar12,0x3f800000);
      uVar26 = *(undefined4 *)(lVar7 + 300);
    }
  }
  if (param_1[0x91] != (undefined *)0x0) {
    uVar28 = *(undefined4 *)(param_1[0x91] + 0x74);
  }
  ppuVar23 = param_1 + 0x67;
  FUN_140ef3800(ppuVar23,uVar26);
  FUN_140ef3800(ppuVar23,uVar28);
  if (param_1[10] != (undefined *)0x0) {
    puVar21 = param_1[10] + 0x70;
    puVar18 = param_1[0x8d];
    if ((puVar18 == (undefined *)0x0) || (param_1[0x8e] == (undefined *)0x0)) {
      puVar18 = param_1[5];
    }
    uVar26 = FUN_140ef3872(puVar21,puVar18);
    fVar24 = (float)FUN_140ce165c(puVar21,param_1[0x8f]);
    fVar27 = 1.0;
    if (*(char *)((longlong)param_1 + 0x53d) == '\0') {
      fVar27 = fVar24;
    }
    if (*(char *)(param_1 + 0x6b) == '\x01') {
      fVar30 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c)))
               * *(float *)(param_1 + 0x69) *
               (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
               *(float *)((longlong)param_1 + 0x344);
      *(float *)((longlong)param_1 + 0x354) = fVar30;
      *(undefined1 *)(param_1 + 0x6b) = 0;
    }
    else {
      fVar30 = *(float *)((longlong)param_1 + 0x354);
    }
    FUN_140ef3800(ppuVar23,uVar26);
    FUN_140ef3800(ppuVar23,~-(uint)(fVar24 < 1.0) & (uint)fVar24 |
                           -(uint)(fVar24 < 1.0) & (uint)fVar27);
    if (*(char *)(param_1 + 0x6b) == '\x01') {
      fVar27 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c)))
               * *(float *)(param_1 + 0x69) *
               (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
               *(float *)((longlong)param_1 + 0x344);
      *(float *)((longlong)param_1 + 0x354) = fVar27;
      *(undefined1 *)(param_1 + 0x6b) = 0;
    }
    else {
      fVar27 = *(float *)((longlong)param_1 + 0x354);
    }
    *(float *)(param_1 + 0x6f) = fVar30 - fVar27;
  }
  ppuVar1 = param_1 + 0xb;
  if (0 < *(int *)(param_1 + 0x12)) {
    ppuVar9 = (undefined **)param_1[0x11];
    if ((undefined **)param_1[0x11] == (undefined **)0x0) {
      ppuVar9 = ppuVar1;
    }
    if ((*ppuVar9 != (undefined *)0x0) && (*(int *)(ppuVar9 + 1) - 1U < 0xfffffffe)) {
      if (*(char *)(param_1 + 0x6b) == '\x01') {
        fVar27 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c))
                 ) * *(float *)(param_1 + 0x69) *
                 (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
                 *(float *)((longlong)param_1 + 0x344);
        *(float *)((longlong)param_1 + 0x354) = fVar27;
        *(undefined1 *)(param_1 + 0x6b) = 0;
      }
      else {
        fVar27 = *(float *)((longlong)param_1 + 0x354);
      }
      local_e8 = (undefined ***)0x0;
      local_d8 = &PTR_LAB_14b3f7060;
      local_f8[0] = FUN_143d0a99a;
      local_d0 = param_1;
      FUN_140cf3304(ppuVar1,local_f8);
      if (local_f8[0] != (code *)0x0) {
        pppuVar15 = local_e8;
        if (local_e8 == (undefined ***)0x0) {
          pppuVar15 = &local_d8;
        }
        (*(code *)(*pppuVar15)[2])();
      }
      if (*(char *)(param_1 + 0x6b) == '\x01') {
        fVar24 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c))
                 ) * *(float *)(param_1 + 0x69) *
                 (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
                 *(float *)((longlong)param_1 + 0x344);
        *(float *)((longlong)param_1 + 0x354) = fVar24;
        *(undefined1 *)(param_1 + 0x6b) = 0;
      }
      else {
        fVar24 = *(float *)((longlong)param_1 + 0x354);
      }
      *(float *)((longlong)param_1 + 0x37c) = fVar27 - fVar24;
    }
  }
  local_108 = ppuVar1;
  if ((param_1[0x91] != (undefined *)0x0) && (lVar7 = FUN_1402179b4(param_1 + 0x95), lVar7 != 0)) {
    if (*(char *)(param_1 + 0x6b) == '\0') {
      fVar27 = *(float *)((longlong)param_1 + 0x354);
    }
    else {
      fVar27 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c)))
               * *(float *)(param_1 + 0x69) *
               (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
               *(float *)((longlong)param_1 + 0x344);
      *(float *)((longlong)param_1 + 0x354) = fVar27;
      *(undefined1 *)(param_1 + 0x6b) = 0;
    }
    puVar18 = param_1[0x91];
    puVar21 = param_1[0x95];
    uVar26 = *(undefined4 *)(param_1 + 0x96);
    puVar5 = param_1[0x98];
    fVar24 = fVar27;
    if (*(int *)(puVar18 + 0x280) != *(int *)(puVar18 + 0x2ac)) {
      uVar20 = (uint)puVar5;
      uVar3 = (uint)((ulonglong)puVar5 >> 0x10);
      puVar19 = puVar18 + 0x2b0;
      if (*(undefined **)(puVar18 + 0x2b8) != (undefined *)0x0) {
        puVar19 = *(undefined **)(puVar18 + 0x2b8);
      }
      iVar14 = *(int *)(puVar19 +
                       (ulonglong)
                       (*(int *)(puVar18 + 0x2c0) - 1U &
                       (uVar20 << 0x10 | uVar20 & 0xffff) + ((uVar20 & 0xffff) >> 4) +
                       (uVar3 << 0x13 | uVar3 & 0xffff)) * 4);
      if (iVar14 != -1) {
        do {
          lVar7 = *(longlong *)(puVar18 + 0x278) + (longlong)iVar14 * 0x80;
          if (*(uint *)(*(longlong *)(puVar18 + 0x278) + 0x18 + (longlong)iVar14 * 0x80) == uVar20)
          {
            if ((lVar7 == 0) ||
               (lVar17 = FUN_1402179b4(lVar7), (*(byte *)(lVar17 + 0x19) & 0x10) == 0))
            goto LAB_140ef36a1;
            lVar7 = FUN_1402179b4(lVar7);
            fVar24 = 0.0;
            if (*(char *)(lVar7 + 0x260) == '\0') goto LAB_140ef36a1;
            break;
          }
          iVar14 = *(int *)(lVar7 + 0x78);
        } while (iVar14 != -1);
        fVar24 = fVar27;
      }
    }
LAB_140ef36a1:
    iVar14 = *(int *)(param_1 + 0x7d);
    lVar7 = (longlong)iVar14;
    *(uint *)(param_1 + 0x7d) = iVar14 + 1U;
    if (*(uint *)((longlong)param_1 + 0x3ec) < iVar14 + 1U) {
      FUN_1457c4dd2(param_1 + 0x7c,iVar14);
    }
    puVar18 = param_1[0x7c];
    *(undefined **)(puVar18 + lVar7 * 0x28) = puVar21;
    *(undefined4 *)(puVar18 + lVar7 * 0x28 + 8) = uVar26;
    *(undefined8 *)(puVar18 + lVar7 * 0x28 + 0x10) = 0;
    *(undefined **)(puVar18 + lVar7 * 0x28 + 0x18) = puVar5;
    *(float *)(puVar18 + lVar7 * 0x28 + 0x20) = fVar27;
    *(float *)(puVar18 + lVar7 * 0x28 + 0x24) = fVar24;
    *(float *)((longlong)param_1 + 0x38c) = fVar27 - fVar24;
    *ppuVar23 = (undefined *)0x0;
    param_1[0x68] = (undefined *)0x0;
    *(undefined4 *)(param_1 + 0x69) = 0x3f800000;
    *(float *)((longlong)param_1 + 0x34c) = fVar24;
    *(float *)((longlong)param_1 + 0x354) = fVar24;
    *(undefined1 *)(param_1 + 0x6a) = 1;
    *(undefined1 *)(param_1 + 0x6b) = 0;
  }
  puVar18 = param_1[0x90];
  if (puVar18 != (undefined *)0x0) {
    if (*(char *)(param_1 + 0x6b) == '\x01') {
      fVar27 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c)))
               * *(float *)(param_1 + 0x69) *
               (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
               *(float *)((longlong)param_1 + 0x344);
      *(float *)((longlong)param_1 + 0x354) = fVar27;
      *(undefined1 *)(param_1 + 0x6b) = 0;
    }
    else {
      fVar27 = *(float *)((longlong)param_1 + 0x354);
    }
    if ((0.0 < fVar27) && (iVar14 = *(int *)(puVar18 + 0x40), 0 < (longlong)iVar14)) {
      local_110 = param_1[10];
      local_111 = *(char *)((longlong)param_1 + 0x51c);
      lVar7 = 0x30;
      lVar17 = 0;
      fVar24 = fVar27;
      do {
        lVar4 = *(longlong *)(puVar18 + 0x38);
        lVar22 = lVar7 + lVar4 + -0x18;
        lVar10 = FUN_1409d448e(lVar22);
        if (lVar10 != 0) {
          ppuVar23 = (undefined **)(lVar7 + lVar4 + -0x30);
          if (*(char *)ppuVar23 == '\x01') {
            plVar12 = *(longlong **)(lVar4 + 8 + lVar7);
            if ((plVar12 != (longlong *)0x0) && (iVar13 = *(int *)(lVar4 + 4 + lVar7), iVar13 != 0))
            {
              uVar3 = *(uint *)(lVar4 + lVar7);
              if (((-1 < (int)uVar3) &&
                  ((((int)uVar3 < DAT_14c9647dc &&
                    (lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8),
                    lVar10 != 0)) && (*(int *)(lVar10 + 0x10) == iVar13)))) &&
                 ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)) {
                if (*(code **)(*plVar12 + 0x10) == (code *)&LAB_1447a1f2e) {
                  plVar12 = plVar12 + 0xd9;
                }
                else {
                  plVar12 = (longlong *)(**(code **)(*plVar12 + 0x10))();
                }
                cVar6 = FUN_14486eb0e(plVar12,(uint *)(lVar4 + lVar7));
                if (cVar6 != '\0') goto LAB_140ef343d;
              }
            }
          }
          else if (0.0 < *(float *)(lVar4 + 0x24 + lVar7)) {
LAB_140ef343d:
            fVar30 = (float)FUN_1405583ce(ppuVar23);
            fVar25 = (float)FUN_14055830e(ppuVar23);
            fVar30 = fVar30 - fVar25;
            if (0.0 < fVar30) {
              uVar11 = FUN_1409d448e(lVar22);
              fVar25 = (float)(**(code **)(*param_1 + 0x158))(param_1,local_110,uVar11);
              if (0.0 < fVar25) {
                if (local_111 == '\x03') {
                  local_fc = 1.0;
                  local_fd = '\0';
                  local_f8[0] = (code *)0x0;
                  local_e8 = (undefined ***)0x0;
                  local_e8 = (undefined ***)FUN_14001cc68(0x28,8);
                  *local_e8 = &PTR_FUN_14b3f7080;
                  local_e8[1] = (undefined **)&local_fd;
                  local_e8[2] = (undefined **)&local_fc;
                  local_e8[3] = param_1;
                  local_e8[4] = ppuVar23;
                  if (local_e8 + 1 != (undefined ***)0x0) {
                    local_f8[0] = FUN_143d0aa64;
                  }
                  FUN_140cf3304(local_108,local_f8);
                  if (local_f8[0] != (code *)0x0) {
                    pppuVar15 = local_e8;
                    if (local_e8 == (undefined ***)0x0) {
                      pppuVar15 = &local_d8;
                    }
                    (*(code *)(*pppuVar15)[2])();
                  }
                  fVar29 = local_fc;
                  if (local_fd == '\0') {
                    fVar29 = 0.0;
                  }
                  fVar29 = fVar25 * fVar27 * fVar29;
                }
                else {
                  fVar29 = fVar25 * fVar24;
                  if (fVar29 <= fVar30) {
                    fVar24 = 0.0;
                  }
                  else {
                    fVar24 = fVar24 - fVar30;
                  }
                }
                if (lVar17 < *(int *)(param_1 + 0x6d)) {
                  if (fVar30 <= fVar29) {
                    fVar29 = fVar30;
                  }
                  if (fVar29 <= 0.0) {
                    fVar29 = 0.0;
                  }
                  *(float *)(param_1[0x6c] + lVar17 * 4) = fVar29;
                }
                if (fVar24 < 0.0001) break;
              }
            }
          }
        }
        lVar17 = lVar17 + 1;
        lVar7 = lVar7 + 0x88;
      } while (iVar14 != lVar17);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ef3800 FUN_140ef3800 body=114 status=ok
// SIG undefined FUN_140ef3800(void)

void FUN_140ef3800(float *param_1,float param_2)

{
  if (((param_2 != 1.0) || (NAN(param_2))) && (0.0001 < param_2)) {
    *(undefined1 *)(param_1 + 8) = 1;
    if (1.0 < param_2) {
      *param_1 = param_2 + -1.0 + *param_1;
      return;
    }
    param_1[1] = (1.0 - 1.0 / param_2) + param_1[1];
    return;
  }
  if (ABS(param_2) <= 1e-08) {
    *(undefined1 *)(param_1 + 8) = 1;
    param_1[4] = 0.0;
  }
  return;
}



// FUNCTION 140ef3872 FUN_140ef3872 body=890 status=ok
// SIG undefined FUN_140ef3872(void)

undefined4 FUN_140ef3872(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  undefined8 ****ppppuVar5;
  longlong lVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined8 ****ppppuVar13;
  undefined4 uVar14;
  undefined1 auStack_128 [32];
  char local_108 [16];
  longlong *local_f8;
  longlong local_f0;
  undefined4 local_e0 [2];
  char local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  int local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  ushort local_90;
  byte local_88;
  undefined8 ***local_80 [3];
  ushort local_68;
  byte local_60;
  undefined8 ***local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar6 = param_1[2];
  if (lVar6 == 0) {
    local_80[0] = (undefined8 ***)*param_1;
    FUN_1446dcdd4(local_108);
    lVar6 = FUN_1448fdc6e(local_108);
    if (local_f0 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar6;
    if (lVar6 == 0) {
      uVar14 = 0x3f800000;
      goto LAB_140ef3a1d;
    }
  }
  local_108[0] = '\0';
  local_e0[0] = 0;
  FUN_1456bb102(local_108,param_2);
  local_d8 = '\0';
  local_b0 = 0;
  FUN_1400606f6(local_80,lVar6,local_108);
  ppppuVar5 = (undefined8 ****)local_50;
  if ((undefined8 ****)local_50 == (undefined8 ****)0x0) {
    ppppuVar5 = local_80;
  }
  ppppuVar13 = (undefined8 ****)&DAT_14c9a40e0;
  if (0 < local_48) {
    ppppuVar13 = ppppuVar5;
  }
  puVar11 = &local_a8;
  FUN_1400603ec(puVar11,lVar6,ppppuVar13);
  ppppuVar5 = (undefined8 ****)local_50;
  if ((undefined8 ****)local_50 == (undefined8 ****)0x0) {
    ppppuVar5 = local_80;
  }
  FUN_1446fdf58(ppppuVar5,local_48);
  if ((undefined8 ****)local_50 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
  if (local_88 == 3) {
    uVar4 = 3;
    uVar14 = local_a8;
  }
  else {
    FUN_1400b56fe(local_80,&local_a8,3);
    if (local_60 == 0) {
      uVar14 = 0x3f800000;
    }
    else {
      uVar14 = local_80[0]._0_4_;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_60 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar5 = local_80;
      if (0x18 < local_68) {
        ppppuVar5 = (undefined8 ****)local_80[0];
      }
      (*pcVar2)(ppppuVar5);
    }
    if (0x18 < local_68) {
      FUN_1400020a8(local_80[0]);
    }
    uVar4 = (uint)local_88;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_90) {
      puVar11 = (undefined4 *)CONCAT44(uStack_a4,local_a8);
    }
    (*pcVar2)(puVar11);
  }
  if (0x18 < local_90) {
    FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
  }
  lVar6 = DAT_14c9a3da0;
  if ((longlong)local_b0 != 0) {
    lVar10 = (longlong)local_b0 + -1;
    lVar12 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar6 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar6 = DAT_14c9a3da0;
    iVar9 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar6 + lVar12) = 0xffffffff;
    iVar7 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar7 = DAT_14c9a3dd0;
    }
    *(int *)(lVar6 + 4 + lVar12) = iVar7;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar8 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar8 = DAT_14c9a3dc0;
    }
    iVar7 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar7 = iVar9;
    }
    bVar3 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) =
         *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_b0 = 0;
  }
  if (local_d8 != '\0') {
    if (local_d8 == '\x01') {
      local_d0 = 0;
    }
    else if ((local_d8 == '\x03') && (local_c8 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c8 + 0x10))();
      }
    }
    local_d8 = '\0';
  }
  FUN_1448173f8(local_e0);
  if ((local_108[0] == '\x03') && (local_f8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_f8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_f8 + 0x10))();
    }
  }
LAB_140ef3a1d:
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ef3bee FUN_140ef3bee body=35 status=ok
// SIG undefined FUN_140ef3bee(void)

void FUN_140ef3bee(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140ef3c44(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140ef3c03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  FUN_140ef3c12();
  return;
}



// FUNCTION 140ef3c12 FUN_140ef3c12 body=49 status=ok
// SIG undefined FUN_140ef3c12(void)

void FUN_140ef3c12(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_140ef3d98(&DAT_14cbc2938);
  memset(_Dst,0,0x640);
  FUN_14123fca6(_Dst);
  return;
}



// FUNCTION 140ef3c44 FUN_140ef3c44 body=181 status=ok
// SIG undefined FUN_140ef3c44(void)

longlong FUN_140ef3c44(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  
  plVar3 = (longlong *)FUN_140ef3cfa();
  lVar1 = *param_1;
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar7 = (uint)lVar1 & 0xffff;
    plVar6 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar3[8];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)plVar3[9] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar7) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar6 = (longlong *)(*plVar3 + (longlong)iVar5 * 0x18);
        if (*plVar6 == lVar1) {
          if (plVar6 + 1 != (longlong *)0x0 && plVar6 != (longlong *)0x0) {
            return plVar6[1];
          }
          break;
        }
        iVar5 = (int)plVar6[2];
      } while (iVar5 != -1);
    }
  }
  lVar4 = DAT_14cbc28d8;
  if (lVar1 != 0) {
    lVar4 = 0;
  }
  return lVar4;
}



// FUNCTION 140ef3cfa FUN_140ef3cfa body=157 status=ok
// SIG undefined FUN_140ef3cfa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140ef3cfa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc2930) {
    FUN_144b3d300(&DAT_14cbc2930);
    if (DAT_14cbc2930 == -1) {
      DAT_14cbc2900 = 0;
      DAT_14cbc2908 = 0;
      DAT_14cbc28e0 = 0;
      _DAT_14cbc28e8 = 0;
      _DAT_14cbc290c = 0xffffffff00000080;
      DAT_14cbc2914 = 0;
      DAT_14cbc2920 = 0;
      DAT_14cbc2928 = 0;
      atexit(FUN_1440ba8c0);
      _Init_thread_footer(&DAT_14cbc2930);
    }
  }
  return &DAT_14cbc28e0;
}



// FUNCTION 140ef3d98 FUN_140ef3d98 body=96 status=ok
// SIG undefined FUN_140ef3d98(void)

void FUN_140ef3d98(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x6400,0);
    lVar4 = 0xf;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 200;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x10;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 140ef3df8 FUN_140ef3df8 body=259 status=ok
// SIG undefined FUN_140ef3df8(void)

void FUN_140ef3df8(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined2 *puVar7;
  
  plVar1 = (longlong *)param_2[3];
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = *(undefined2 **)*param_2;
  }
  *(uint *)(plVar1 + 2) = (int)plVar1[2] + 0xfU & 0xfffffff0;
  FUN_140ef40a6();
  iVar6 = (int)plVar1[1];
  *(uint *)(plVar1 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)plVar1 + 0xc) < iVar6 + 1U) {
    FUN_140870184(plVar1,iVar6);
  }
  lVar2 = *plVar1;
  lVar5 = (longlong)iVar6 * 0x30;
  lVar3 = plVar1[2];
  *(undefined2 **)(lVar2 + lVar5) = puVar7;
  *(undefined2 **)(lVar2 + 8 + lVar5) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar5) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar5) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar5) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar5) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar5) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar5) = &DAT_14cb3cca8;
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 0x50;
  iVar6 = *(int *)(*param_2 + 0x30) + 3;
  iVar4 = *(int *)(*param_2 + 0x30) + 6;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  iVar6 = 1;
  if (1 < iVar4 >> 2) {
    iVar6 = iVar4 >> 2;
  }
  FUN_140ef3efc(param_2,L"AttributeIndices",iVar6);
  FUN_140ef3efc(param_2,L"AttributeCompressed",iVar6);
  return;
}



// FUNCTION 140ef3efc FUN_140ef3efc body=264 status=ok
// SIG undefined FUN_140ef3efc(void)

/* WARNING: Removing unreachable block (ram,0x000140ef3ff5) */

void FUN_140ef3efc(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)param_1[2];
  if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)*param_1;
  }
  FUN_140002266(&local_38,L"%s_%s",puVar4,param_2);
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar2,iVar1);
  }
  lVar3 = *plVar2;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar3 + lVar5) = 0;
  *(undefined8 *)(lVar3 + lVar5) = local_38;
  *(undefined4 *)(lVar3 + 8 + lVar5) = (undefined4)local_30;
  *(undefined4 *)(lVar3 + 0xc + lVar5) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  lVar3 = *(longlong *)param_1[2];
  lVar5 = (longlong)((int)((longlong *)param_1[2])[1] + -1) * 0x10;
  if (*(int *)(lVar3 + 8 + lVar5) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(lVar3 + lVar5);
  }
  FUN_140ef4006(param_1[3],puVar4,param_3,0);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ef4006 FUN_140ef4006 body=159 status=ok
// SIG undefined FUN_140ef4006(void)

void FUN_140ef4006(longlong *param_1,undefined8 param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = (int)param_1[2] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 2) = uVar3;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
    uVar3 = *(uint *)(param_1 + 2);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x44;
  *(uint *)(lVar2 + 0x14 + lVar4) = uVar3;
  *(undefined1 *)(lVar2 + 0x18 + lVar4) = 2;
  *(undefined1 *)(lVar2 + 0x19 + lVar4) = param_4;
  *(undefined8 *)(lVar2 + 0x1c + lVar4) = 0x400000001;
  *(int *)(lVar2 + 0x24 + lVar4) = param_3;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + param_3 * 0x10;
  return;
}



// FUNCTION 140ef40a6 FUN_140ef40a6 body=258 status=ok
// SIG undefined FUN_140ef40a6(void)

void FUN_140ef40a6(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3cd28) {
    FUN_144b3d300(&DAT_14cb3cd28);
    if (DAT_14cb3cd28 == -1) {
      FUN_1457c4e66(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x10;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb3cca8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a57191);
      _Init_thread_footer(&DAT_14cb3cd28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ef41aa FUN_140ef41aa body=58 status=ok
// SIG undefined FUN_140ef41aa(void)

undefined8 FUN_140ef41aa(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_3 + 8))(param_3);
  FUN_1402057ac(param_2,param_3,uVar1,0);
  FUN_140ef41e4(param_3,param_2);
  return 1;
}



// FUNCTION 140ef41e4 FUN_140ef41e4 body=294 status=ok
// SIG undefined FUN_140ef41e4(void)

void FUN_140ef41e4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pbVar3 = (byte *)*param_2;
  puVar4 = &DAT_14c9a1308;
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 3) != 0)) {
    puVar4 = (undefined8 *)FUN_1408db3b0(pbVar3,PTR_s_primaryuseinfo_14c763a80);
  }
  local_28 = *puVar4;
  local_20 = (undefined8 *)puVar4[1];
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = *(int *)(local_20 + 1) + 1;
    UNLOCK();
  }
  pbVar3 = (byte *)*param_2;
  puVar4 = &DAT_14c9a1308;
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 3) != 0)) {
    puVar4 = (undefined8 *)FUN_1408db3b0(pbVar3,"secondaryuseinfo");
  }
  local_38 = *puVar4;
  local_30 = (longlong *)puVar4[1];
  if (local_30 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    plVar5 = local_30;
  }
  FUN_140ef431c(param_1 + 0x20,&local_28);
  FUN_140ef431c(param_1 + 0x70,&local_38);
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
  puVar4 = local_20;
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_20 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)puVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ef431c FUN_140ef431c body=1872 status=ok
// SIG undefined FUN_140ef431c(void)

void FUN_140ef431c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  byte *pbVar5;
  longlong *plVar6;
  byte *pbVar7;
  longlong *plVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  longlong lVar11;
  char cVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0 [3];
  byte *local_88;
  longlong *local_80;
  byte *local_78;
  longlong *local_70;
  byte *local_68;
  longlong *local_60;
  byte *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  pbVar5 = (byte *)*param_2;
  puVar10 = &DAT_14c9a1308;
  if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 3) != 0)) {
    puVar10 = (undefined8 *)FUN_1408db3b0(pbVar5,"useresponses");
  }
  pbVar5 = (byte *)*puVar10;
  plVar6 = (longlong *)puVar10[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (*param_2 == 0) {
    puVar10 = &DAT_14c9a1308;
  }
  else {
    puVar10 = (undefined8 *)FUN_1408db3b0(*param_2,"conditionamount");
  }
  local_58 = (byte *)*puVar10;
  local_50 = (longlong *)puVar10[1];
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  if (*param_2 == 0) {
    puVar10 = &DAT_14c9a1308;
  }
  else {
    puVar10 = (undefined8 *)FUN_1408db3b0(*param_2,"conditionattribute");
  }
  local_68 = (byte *)*puVar10;
  local_60 = (longlong *)puVar10[1];
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar15 = *(longlong *)(param_1 + 0x18);
    lVar14 = (longlong)*(int *)(param_1 + 0x20) * 0x2e8 + lVar15;
    cVar12 = '\0';
    do {
      puVar10 = &DAT_14c9a1308;
      if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 3) != 0)) {
        puVar10 = (undefined8 *)FUN_14071eafe(pbVar5,cVar12);
        cVar12 = cVar12 + '\x01';
      }
      pbVar7 = (byte *)*puVar10;
      plVar8 = (longlong *)puVar10[1];
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      if ((pbVar7 != (byte *)0x0) && ((*pbVar7 & 3) != 0)) {
        puVar10 = (undefined8 *)FUN_1408db3b0(pbVar7,"costrequirements");
        if (((byte *)*puVar10 == (byte *)0x0) || ((*(byte *)*puVar10 & 3) == 0)) {
          puVar10 = (undefined8 *)FUN_1408db3b0(pbVar7,"conditionstoselectthisresponse");
          if (((byte *)*puVar10 == (byte *)0x0) || ((*(byte *)*puVar10 & 3) == 0)) {
            puVar10 = (undefined8 *)FUN_1408db3b0(pbVar7,"conditionstoallowuse");
            if (((byte *)*puVar10 == (byte *)0x0) || ((*(byte *)*puVar10 & 3) == 0)) {
              puVar10 = (undefined8 *)FUN_1408db3b0(pbVar7,"condition");
              local_78 = (byte *)*puVar10;
              local_70 = (longlong *)puVar10[1];
              if (local_70 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_70 + 1) = (int)local_70[1] + 1;
                UNLOCK();
              }
              puVar10 = (undefined8 *)FUN_1408db3b0(pbVar7,"stateconditions");
              pbVar9 = (byte *)*puVar10;
              local_b0 = (longlong *)puVar10[1];
              if (local_b0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
                UNLOCK();
              }
              puVar10 = (undefined8 *)FUN_1408db3b0(pbVar7,"factcondition");
              local_88 = (byte *)*puVar10;
              local_80 = (longlong *)puVar10[1];
              if (local_80 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_80 + 1) = (int)local_80[1] + 1;
                UNLOCK();
              }
              if (*(char *)(lVar15 + 0x18) == '\0') {
                if (local_78 == (byte *)0x0) {
                  bVar16 = false;
                }
                else {
                  bVar16 = (*local_78 & 3) != 0;
                }
                if (pbVar9 == (byte *)0x0) {
                  bVar17 = false;
                }
                else {
                  bVar17 = (*pbVar9 & 3) != 0;
                }
                if (local_88 == (byte *)0x0) {
                  bVar18 = false;
                }
                else {
                  bVar18 = (*local_88 & 3) != 0;
                }
                if ((bVar16 || bVar17) || (bVar18)) {
                  *(undefined1 *)(lVar15 + 0x18) = 2;
                  local_a0[1] = 0;
                  FUN_1400bc2c2(&local_78,local_a0 + 2);
                  if (*(longlong *)(lVar15 + 0x40) != local_a0[2]) {
                    *(undefined8 *)(lVar15 + 0x50) = 0;
                  }
                  *(longlong *)(lVar15 + 0x40) = local_a0[2];
                  local_d0 = &DAT_14c9a1270;
                  if ((pbVar9 != (byte *)0x0) && ((*pbVar9 & 2) != 0)) {
                    local_d0 = *(longlong **)(pbVar9 + 8);
                  }
                  iVar4 = (int)local_d0[2];
                  if (0 < (longlong)iVar4) {
                    local_c8 = (longlong *)(lVar15 + 0xb0);
                    if (*(int *)(lVar15 + 0xbc) < iVar4) {
                      FUN_1489b250a(local_c8);
                      if ((longlong)(int)local_d0[2] == 0) goto LAB_140ef49a4;
                      local_c0 = *local_d0;
                      local_b8 = (longlong)(int)local_d0[2] * 0x10 + local_c0;
                    }
                    else {
                      local_c0 = *local_d0;
                      local_b8 = (longlong)iVar4 * 0x10 + local_c0;
                    }
                    lVar13 = 0;
                    do {
                      local_a8 = *local_d0 + lVar13;
                      iVar4 = *(int *)(lVar15 + 0xb8);
                      *(uint *)(lVar15 + 0xb8) = iVar4 + 1U;
                      if (*(uint *)(lVar15 + 0xbc) < iVar4 + 1U) {
                        FUN_1489b2572(local_c8,iVar4);
                      }
                      lVar11 = *local_c8 + (longlong)iVar4 * 0x14;
                      FUN_1489ae180(lVar11,local_a8);
                      *(undefined1 *)(lVar11 + 0x10) = 0;
                      lVar11 = local_c0 + lVar13;
                      lVar13 = lVar13 + 0x10;
                    } while (lVar11 + 0x10 != local_b8);
                  }
LAB_140ef49a4:
                  FUN_14068d78e(lVar15 + 0xc0,&local_88);
                }
                if ((local_58 == (byte *)0x0) || ((*local_58 & 3) == 0)) {
                  if ((local_68 == (byte *)0x0) || ((*local_68 & 3) == 0)) goto LAB_140ef4548;
                  if ((local_58 != (byte *)0x0) && ((*local_58 & 3) != 0)) goto LAB_140ef4682;
                }
                else {
LAB_140ef4682:
                  puVar10 = (undefined8 *)FUN_1408db3b0(local_58,"constant");
                  if (((byte *)*puVar10 == (byte *)0x0) || ((*(byte *)*puVar10 & 3) == 0)) {
                    if (local_58 == (byte *)0x0) {
                      puVar10 = &DAT_14c9a1308;
                    }
                    else {
                      puVar10 = (undefined8 *)FUN_1408db3b0(local_58,"attribute");
                    }
                    if (((byte *)*puVar10 != (byte *)0x0) && ((*(byte *)*puVar10 & 3) != 0))
                    goto LAB_140ef46a3;
                    if (local_58 == (byte *)0x0) {
                      puVar10 = &DAT_14c9a1308;
                    }
                    else {
                      puVar10 = (undefined8 *)FUN_1408db3b0(local_58,"datatablevalue");
                    }
                    if (((byte *)*puVar10 != (byte *)0x0) && ((*(byte *)*puVar10 & 3) != 0))
                    goto LAB_140ef46a3;
                  }
                  else {
LAB_140ef46a3:
                    *(undefined1 *)(lVar15 + 0x238) = 1;
                  }
                  FUN_140d72bcc(lVar15 + 0x240,&local_58,0);
                }
                if ((local_68 != (byte *)0x0) && ((*local_68 & 3) != 0)) {
                  local_a0[1] = 0;
                  FUN_1400bc2c2(&local_68,local_a0);
                  if (*(longlong *)(lVar15 + 0x290) != local_a0[0]) {
                    *(undefined8 *)(lVar15 + 0x2a0) = 0;
                  }
                  *(longlong *)(lVar15 + 0x290) = local_a0[0];
                }
              }
LAB_140ef4548:
              plVar3 = local_80;
              if (local_80 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_80 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_80)(local_80);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar3 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar3 + 0x10))(plVar3);
                  }
                }
              }
              plVar3 = local_b0;
              if (local_b0 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_b0 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_b0)(local_b0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar3 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar3 + 0x10))(plVar3);
                  }
                }
              }
              plVar3 = local_70;
              if (local_70 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_70 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_70)(local_70);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar3 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar3 + 0x10))(plVar3);
                  }
                }
              }
            }
          }
        }
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar8 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      lVar15 = lVar15 + 0x2e8;
    } while (lVar15 != lVar14);
  }
  plVar8 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar8 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ef4a6d FUN_140ef4a6d body=49 status=ok
// SIG undefined FUN_140ef4a6d(void)

longlong FUN_140ef4a6d(void)

{
  if (DAT_14caa9040 == 0) {
    FUN_140f50038(&DAT_14caa9040,&PTR_s__Script_GeometryCollectionEngine_14a3fe9d7_1_14a3fe9b8);
  }
  return DAT_14caa9040;
}



// FUNCTION 140ef4a9e FUN_140ef4a9e body=49 status=ok
// SIG undefined FUN_140ef4a9e(void)

longlong FUN_140ef4a9e(void)

{
  if (DAT_14cb53cd8 == 0) {
    FUN_140f50038(&DAT_14cb53cd8,&PTR_s__Script_GbxTimeOfDay_14afd31f0);
  }
  return DAT_14cb53cd8;
}



// FUNCTION 140ef4acf FUN_140ef4acf body=49 status=ok
// SIG undefined FUN_140ef4acf(void)

longlong FUN_140ef4acf(void)

{
  if (DAT_14cb96248 == 0) {
    FUN_140f50038(&DAT_14cb96248,&PTR_s__Script_Shift_14b4d08b8);
  }
  return DAT_14cb96248;
}



// FUNCTION 140ef4b00 FUN_140ef4b00 body=49 status=ok
// SIG undefined FUN_140ef4b00(void)

longlong FUN_140ef4b00(void)

{
  if (DAT_14cb99200 == 0) {
    FUN_140f50038(&DAT_14cb99200,&PTR_s__Script_ChaosVehicles_14b5148a7_1_14b514888);
  }
  return DAT_14cb99200;
}



// FUNCTION 140ef4b32 FUN_140ef4b32 body=220 status=ok
// SIG undefined FUN_140ef4b32(void)

void FUN_140ef4b32(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  int *piVar7;
  longlong *plVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = FUN_1411bcf8a(param_2);
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    uVar5 = (ulonglong)
            *(int *)((longlong)plVar8 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4);
    if (uVar5 != 0xffffffffffffffff) {
      lVar2 = *param_1;
      do {
        cVar3 = FUN_140c3e654(lVar2 + uVar5 * 0x48,param_2);
        if (cVar3 != '\0') {
          lVar1 = lVar2 + uVar5 * 0x48;
          lVar6 = (longlong)*(int *)(lVar1 + 0x44);
          iVar4 = *(int *)((longlong)plVar8 + lVar6 * 4);
          if (iVar4 == (int)uVar5) {
            piVar7 = (int *)((longlong)plVar8 + lVar6 * 4);
          }
          else {
            do {
              piVar7 = (int *)(lVar2 + (longlong)iVar4 * 0x48 + 0x40);
              iVar4 = *piVar7;
            } while (iVar4 != (int)uVar5);
          }
          *piVar7 = *(int *)(lVar1 + 0x40);
          if (*(longlong *)(*param_1 + uVar5 * 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_140ef4c0e(param_1,uVar5 & 0xffffffff);
          return;
        }
        uVar5 = (ulonglong)*(int *)(lVar2 + 0x40 + uVar5 * 0x48);
      } while (uVar5 != 0xffffffffffffffff);
    }
  }
  return;
}



// FUNCTION 140ef4c0e FUN_140ef4c0e body=112 status=ok
// SIG undefined FUN_140ef4c0e(void)

void FUN_140ef4c0e(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
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



// FUNCTION 140ef4c8c FUN_140ef4c8c body=31 status=ok
// SIG undefined FUN_140ef4c8c(void)

undefined8 FUN_140ef4c8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ef4cac FUN_140ef4cac body=424 status=ok
// SIG undefined FUN_140ef4cac(void)

void FUN_140ef4cac(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  memset(param_2 + 1,0,0x1c8);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[8] = 0;
  param_2[7] = &PTR_FUN_14a1a0a00;
  *(undefined1 *)(param_2 + 10) = 1;
  *(undefined1 *)(param_2 + 0xb) = 0;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 0x3f800000;
  *param_2 = &PTR_FUN_14ac719c0;
  *(undefined2 *)(param_2 + 0xc) = 0x102;
  FUN_140ef4e54(param_2 + 0xd);
  *(undefined1 *)(param_2 + 0x15) = 1;
  uVar1 = DAT_14c9ab028;
  param_2[0x17] = DAT_14c9ab028;
  *(undefined1 *)(param_2 + 0x18) = 2;
  param_2[0x16] = &PTR_FUN_14a1a0a20;
  param_2[0x1b] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  *(undefined2 *)(param_2 + 0x1c) = 1;
  *(undefined1 *)((longlong)param_2 + 0xe2) = 0;
  *(undefined1 *)(param_2 + 0x1d) = 1;
  param_2[0x1f] = uVar1;
  *(undefined1 *)(param_2 + 0x20) = 2;
  param_2[0x1e] = &PTR_FUN_14a1a0a20;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  *(undefined2 *)(param_2 + 0x23) = 0;
  *(undefined4 *)((longlong)param_2 + 0x11c) = 0x42c80000;
  param_2[0x25] = 0;
  *(undefined1 *)(param_2 + 0x26) = 0;
  param_2[0x24] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_2 + 0x27) = 0x42c80000;
  param_2[0x29] = 0;
  *(undefined1 *)(param_2 + 0x2a) = 0;
  param_2[0x28] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_2 + 0x2b) = 0x447a0000;
  param_2[0x2d] = 0;
  *(undefined1 *)(param_2 + 0x2e) = 0;
  param_2[0x2c] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_2 + 0x2f) = 0;
  *(undefined1 *)(param_2 + 0x30) = 0;
  param_2[0x32] = 0;
  *(undefined1 *)(param_2 + 0x33) = 0;
  param_2[0x31] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_2 + 0x34) = 0x428c0000;
  param_2[0x36] = 0;
  *(undefined1 *)(param_2 + 0x37) = 0;
  param_2[0x35] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_2 + 0x38) = 0x42b40000;
  *(undefined1 *)(param_2 + 0x39) = 0;
  return;
}



// FUNCTION 140ef4e54 FUN_140ef4e54 body=151 status=ok
// SIG undefined FUN_140ef4e54(void)

undefined1 * FUN_140ef4e54(undefined1 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0x4059000000000000;
  *(undefined8 *)(param_1 + 0x10) = 0x4059000000000000;
  *(undefined8 *)(param_1 + 0x18) = 0x4059000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0x42c8000042c80000;
  *(undefined4 *)(param_1 + 0x28) = 0x42c80000;
  *(undefined2 *)(param_1 + 0x2c) = 0x200;
  param_1[0x2e] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x38) = 1;
  FUN_140ef4eec(param_1 + 0x30,0);
  **(undefined2 **)(param_1 + 0x30) = 0x200;
  iVar1 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
    FUN_140ef4eec(param_1 + 0x30,iVar1);
  }
  *(undefined2 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 2) = 0x201;
  return param_1;
}



// FUNCTION 140ef4eec FUN_140ef4eec body=351 status=ok
// SIG undefined FUN_140ef4eec(void)

void FUN_140ef4eec(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 2;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140ef4f70;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,1);
    }
  }
LAB_140ef4f70:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 1)) {
    uVar7 = uVar5 >> 1 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,2,1);
  return;
}



// FUNCTION 140ef504c FUN_140ef504c body=310 status=ok
// SIG undefined FUN_140ef504c(void)

longlong FUN_140ef504c(void)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_140ef5198();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1478c0a72;
      local_50 = &LAB_1417b2375;
      local_58 = L"Engine";
      local_60 = 0x1000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) {
      FUN_144a6c4d8();
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ef5198 FUN_140ef5198 body=163 status=ok
// SIG undefined FUN_140ef5198(void)

undefined8 FUN_140ef5198(undefined8 *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [40];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 1) == 0) {
LAB_140ef5238:
    uVar1 = 0;
  }
  else {
    piVar2 = (int *)*param_1;
    lVar3 = (longlong)*(int *)(param_1 + 1) * 0x48;
    uVar1 = 0;
    do {
      if ((*piVar2 == *param_2) && (piVar2[2] == param_2[2])) {
        if (piVar2 == (int *)0x0) goto LAB_140ef5238;
        FUN_14096c63a(piVar2 + 4,local_58);
        uVar1 = (**(code **)(*param_3 + 0x68))(param_3,local_58);
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        break;
      }
      piVar2 = piVar2 + 0x12;
      lVar3 = lVar3 + -0x48;
    } while (lVar3 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 140ef523c FUN_140ef523c body=297 status=ok
// SIG undefined FUN_140ef523c(void)

undefined8 FUN_140ef523c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140ef535e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140ef535e;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_140ef535e:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140ef5309;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_140ef5309;
    }
  }
  uVar6 = 0;
LAB_140ef5309:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ef5366 FUN_140ef5366 body=272 status=ok
// SIG undefined FUN_140ef5366(void)

void FUN_140ef5366(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  double dVar4;
  float fVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_2 + 0x68) == param_1[0x114]) && (lVar1 = param_1[0x53], lVar1 != 0)) {
    lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar2 != 0) {
      FUN_140a2348a(param_1,lVar1,lVar1 + 200,param_1[0x111]);
      if (*(longlong **)(lVar2 + 0x178) == (longlong *)0x0) {
        dVar4 = *(double *)(lVar2 + 0x6d0);
      }
      else {
        dVar4 = (double)(**(code **)(**(longlong **)(lVar2 + 0x178) + 0x640))();
      }
      uVar3 = -(uint)(*(float *)(param_2 + 0x84) < 0.0);
      fVar5 = (float)(uVar3 & 0x7f7fffff |
                     ~uVar3 & (uint)((float)dVar4 - *(float *)(param_2 + 0x84)));
      local_50 = *(undefined8 *)(param_2 + 0x78);
      local_48 = 0xffffffff;
      local_44 = 0;
      uStack_3c = 0;
      local_34 = 0;
      local_2c = 0xffffffff;
      FUN_140ef5478(param_1,&local_50,-(uint)(0.5 <= fVar5) & (uint)fVar5);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ef5478 FUN_140ef5478 body=1892 status=ok
// SIG undefined FUN_140ef5478(void)

void FUN_140ef5478(longlong *param_1,longlong *param_2,float param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  float fVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  bool bVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  double dVar29;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar33 [12];
  undefined1 auVar32 [16];
  undefined1 auStack_228 [32];
  int local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1d0;
  int local_1c8;
  float local_1c4;
  undefined4 local_1c0;
  undefined4 local_190;
  ulonglong local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined5 uStack_160;
  undefined3 uStack_15b;
  undefined5 uStack_158;
  undefined1 local_150;
  undefined2 local_14f;
  undefined1 local_14d;
  ulonglong local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined5 uStack_120;
  undefined3 uStack_11b;
  undefined5 uStack_118;
  undefined1 local_110;
  undefined2 local_10f;
  undefined1 local_10d;
  ulonglong local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined5 uStack_e0;
  undefined3 uStack_db;
  undefined5 uStack_d8;
  undefined1 local_d0;
  undefined2 local_cf;
  undefined1 local_cd;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [24];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (param_1[0x115] != *param_2) {
    param_1[0x115] = *param_2;
    *(int *)(param_1 + 0x116) = (int)param_2[1];
  }
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x14);
  *(undefined8 *)((longlong)param_1 + 0x8b4) = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined8 *)((longlong)param_1 + 0x8bc) = uVar5;
  if (*(longlong *)((longlong)param_1 + 0x8c4) != *(longlong *)((longlong)param_2 + 0x1c)) {
    *(longlong *)((longlong)param_1 + 0x8c4) = *(longlong *)((longlong)param_2 + 0x1c);
    *(undefined4 *)((longlong)param_1 + 0x8cc) = *(undefined4 *)((longlong)param_2 + 0x24);
  }
  lVar2 = param_1[0x61];
  uVar23 = *(ulonglong *)((longlong)param_1 + 0x31c);
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_b0);
  FUN_140ef5d56(param_1,&local_b8);
  local_c0 = 0;
  lVar3 = param_1[0x53];
  uVar20 = (uint)uVar23;
  uVar16 = uVar23;
  uVar12 = uVar23;
  if (lVar3 == 0) {
    lVar19 = *param_2;
LAB_140ef5aa0:
    local_c0 = local_b8;
    if ((lVar19 == DAT_14c9a63f8) || (local_c0 = local_b0, lVar19 == DAT_14c9a6400)) {
      bVar24 = false;
    }
    else {
      if (((int)(uint)local_b0 <= (int)uVar20) &&
         ((float)(local_b0 >> 0x20) <= (float)(uVar23 >> 0x20) || uVar20 != (uint)local_b0)) {
        local_c0 = local_b8;
      }
      bVar24 = true;
    }
    if (lVar3 != 0) goto LAB_140ef55ad;
LAB_140ef55f1:
    local_c8 = uVar12;
    uVar14 = (uint)uVar16;
    fVar25 = (float)(uVar16 >> 0x20);
    uVar12 = local_c0;
    uVar22 = local_c0;
    if ((bVar24) &&
       (uVar10 = (uint)local_b0, uVar12 = local_b0, uVar22 = local_b0, (int)uVar10 <= (int)uVar14))
    {
      if (uVar14 == uVar10 && fVar25 < (float)(local_b0 >> 0x20)) {
        uVar23 = local_b0;
        uVar20 = uVar10;
      }
      uVar12 = (ulonglong)uVar20;
      uVar22 = uVar23;
    }
    bVar24 = (char)param_1[0x52] == '\x01';
    iVar8 = (int)uVar12;
    uVar18 = uVar16;
    if ((int)uVar14 <= iVar8) goto LAB_140ef561a;
    fVar27 = (float)(uVar22 >> 0x20);
    bVar6 = true;
LAB_140ef5906:
    iVar15 = (int)uVar16;
    fVar25 = fVar25 - fVar27;
    auVar26 = roundps(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25),1);
    iVar17 = (int)uVar18 - (int)uVar22;
    fVar28 = auVar26._0_4_;
    fVar27 = fVar25 - fVar28;
  }
  else {
    cVar7 = FUN_140ef5bde(lVar3,(longlong)param_2 + 0x14,&local_c0);
    if (cVar7 == '\0') {
      lVar19 = *param_2;
      local_a8._0_8_ = lVar19;
      cVar7 = FUN_140ef5bde(lVar3,local_a8,&local_c0);
      if (cVar7 == '\0') goto LAB_140ef5aa0;
    }
    bVar24 = false;
LAB_140ef55ad:
    uVar18 = local_c0;
    local_c8 = 0;
    if (*(char *)(lVar3 + 300) != '\x01') {
      cVar7 = FUN_140ef5bde(lVar3,(longlong)param_2 + 0xc,&local_c8);
      uVar18 = local_c8;
      if (cVar7 != '\0') {
        local_148 = local_c8;
        local_140 = 0;
        local_110 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_128 = 0;
        uStack_120 = 0;
        uStack_11b = 0;
        uStack_118 = 0;
        local_10f = 1;
        local_10d = 1;
        FUN_1405244c0(param_1);
        uVar16 = uVar18;
        uVar12 = local_c8;
      }
      goto LAB_140ef55f1;
    }
    local_108 = local_c0;
    local_100 = 0;
    local_d0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    uStack_db = 0;
    uStack_d8 = 0;
    local_cf = 1;
    local_cd = 1;
    FUN_1405244c0(param_1);
    bVar24 = (char)param_1[0x52] == '\x01';
    uVar12 = uVar18 & 0xffffffff;
    uVar16 = uVar18 & 0xffffffff;
    uVar22 = uVar18;
LAB_140ef561a:
    fVar27 = (float)(uVar22 >> 0x20);
    fVar25 = (float)(uVar18 >> 0x20);
    iVar15 = (int)uVar16;
    iVar8 = (int)uVar12;
    if ((iVar15 == iVar8) && (fVar27 < fVar25)) {
      bVar6 = false;
      uVar16 = uVar12 & 0xffffffff;
      goto LAB_140ef5906;
    }
    fVar27 = fVar27 - fVar25;
    auVar26 = roundps(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27),1);
    fVar28 = auVar26._0_4_;
    iVar17 = (int)uVar22 - (int)uVar18;
    fVar27 = fVar27 - fVar28;
    bVar6 = false;
  }
  fVar25 = fVar27 + 0.5 + -0.5;
  if (0.99999994 <= fVar25) {
    fVar25 = 0.99999994;
  }
  iVar17 = iVar17 + (int)fVar28;
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  auVar33 = (undefined1  [12])0x0;
  if ((param_3 != 3.4028235e+38) || (iVar13 = iVar17, fVar27 = fVar25, NAN(param_3))) {
    dVar29 = ((double)(int)lVar2 * (double)param_3) / (double)(int)((ulonglong)lVar2 >> 0x20);
    auVar26._8_8_ = 0;
    auVar26._0_8_ = dVar29;
    auVar26 = roundpd(auVar26,auVar26,1);
    dVar30 = auVar26._0_8_;
    dVar29 = dVar29 - dVar30;
    if (2147483647.0 <= dVar30) {
      dVar30 = 2147483647.0;
    }
    if (dVar30 <= -2147483648.0) {
      dVar30 = -2147483648.0;
    }
    iVar13 = (int)dVar30 + (int)dVar29;
    if (iVar13 <= iVar17) {
      fVar28 = (float)dVar29 - (float)(int)dVar29;
      fVar27 = fVar28;
      if (0.99999994 <= fVar28) {
        fVar27 = 0.99999994;
      }
      auVar31._0_4_ = ~-(uint)(0.0 < fVar28) & (uint)fVar28;
      auVar31._4_4_ = (int)((ulonglong)dVar29 >> 0x20);
      auVar31._8_4_ = in_XMM2_Dc;
      auVar31._12_4_ = in_XMM2_Dd;
      auVar31 = auVar31 | ZEXT416((uint)fVar27 & -(uint)(0.0 < fVar28));
      auVar33 = auVar31._4_12_;
      fVar27 = auVar31._0_4_ + 0.5 + -0.5;
      if (0.99999994 <= fVar27) {
        fVar27 = 0.99999994;
      }
      if (fVar27 <= 0.0) {
        fVar27 = 0.0;
      }
      goto LAB_140ef572f;
    }
  }
  else {
LAB_140ef572f:
    if ((iVar13 != iVar17) || (fVar27 < fVar25)) {
      fVar28 = (float)(uVar18 >> 0x20);
      if ((iVar15 < iVar8) ||
         ((fVar21 = (float)(uVar22 >> 0x20), iVar15 == iVar8 && (fVar28 < fVar21)))) {
        FUN_140ef61d2(param_1,iVar15,iVar17 + (uint)(fVar25 != 0.0));
        FUN_140ef5ee2(param_1);
        if ((bool)(param_3 <= 0.0 | bVar24)) goto LAB_140ef589e;
        auVar32._0_4_ = fVar27 + fVar28;
        auVar32._4_12_ = auVar33;
        auVar26 = roundss(ZEXT416(0),auVar32,9);
        local_1c8 = iVar13 + iVar15 + ((int)ROUND(auVar32._0_4_ + auVar32._0_4_ + -0.5) >> 1);
        local_1c4 = (auVar32._0_4_ - auVar26._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= local_1c4) {
          local_1c4 = 0.99999994;
        }
        if (local_1c4 <= 0.0) {
          local_1c4 = 0.0;
        }
        piVar11 = &local_1c8;
        local_1c0 = 0;
        local_190 = 0x1000000;
      }
      else {
        if ((!bVar6) && ((iVar15 != iVar8 || (fVar28 <= fVar21)))) {
          if (bVar24) {
            FUN_140c7df0a(param_1);
          }
          goto LAB_140ef589e;
        }
        FUN_140ef61d2(param_1,fVar21,iVar17 + (uint)(fVar25 != 0.0));
        FUN_140ef637e(param_1);
        if (param_3 <= 0.0 || bVar24) goto LAB_140ef589e;
        fVar28 = fVar28 - fVar27;
        auVar26 = roundps(ZEXT416((uint)fVar28),ZEXT416((uint)fVar28),1);
        fVar25 = (fVar28 - auVar26._0_4_) + 0.5 + -0.5;
        auVar31 = ZEXT416((uint)fVar25);
        local_208 = (iVar15 - iVar13) + (int)auVar26._0_4_;
        if (0.99999994 <= fVar25) {
          auVar31 = ZEXT416(0x3f7fffff);
        }
        if (auVar31._0_4_ <= 0.0) {
          auVar4._12_4_ = 0;
          auVar4._0_12_ = auVar31._4_12_;
          auVar31 = auVar4 << 0x20;
        }
        piVar11 = &local_208;
        local_204 = auVar31._0_4_;
        local_200 = 0;
        local_1d0 = 0x1000000;
      }
      piVar11[4] = 0;
      piVar11[5] = 0;
      piVar11[6] = 0;
      piVar11[7] = 0;
      piVar11[8] = 0;
      piVar11[9] = 0;
      piVar11[10] = 0;
      piVar11[0xb] = 0;
      *(undefined8 *)((longlong)piVar11 + 0x2d) = 0;
      FUN_1405244c0(param_1);
      goto LAB_140ef589e;
    }
  }
  if (param_1[0x5d] == 0) {
    local_a8._0_12_ = ZEXT812(0);
    local_a8._12_4_ = 0;
  }
  else {
    FUN_140232b8e(param_1[0x5d],local_a8);
    if (local_a8._0_8_ != 0) {
      if (param_1[0x5d] == 0) {
        uVar9 = 0xffff;
      }
      else {
        uVar9 = *(undefined4 *)(param_1[0x5d] + 0x30);
      }
      FUN_140ef5ff0(local_a8._0_8_,uVar9);
    }
  }
  uVar5 = local_a8._8_8_;
  if ((longlong *)local_a8._8_8_ != (longlong *)0x0) {
    LOCK();
    plVar1 = (longlong *)(local_a8._8_8_ + 8);
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (*(code *)**(undefined8 **)local_a8._8_8_)(local_a8._8_8_);
      LOCK();
      piVar11 = (int *)(uVar5 + 0xc);
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 == 0) {
        (**(code **)(*(longlong *)uVar5 + 0x10))(uVar5);
      }
    }
  }
  local_180 = 0;
  local_150 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  uStack_15b = 0;
  uStack_158 = 0;
  local_14f = 1;
  local_14d = 1;
  local_188 = uVar22;
  FUN_1405244c0(param_1);
  if (bVar24) {
    FUN_145750376(param_1);
  }
LAB_140ef589e:
  if ((local_90 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ef5bde FUN_140ef5bde body=376 status=ok
// SIG undefined FUN_140ef5bde(void)

undefined8 FUN_140ef5bde(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  
  if (((*param_2 != 0) && (lVar3 = *(longlong *)(param_1 + 0x70), lVar3 != 0)) &&
     ((longlong)*(int *)(param_1 + 0x150) != 0)) {
    plVar4 = *(longlong **)(param_1 + 0x148);
    lVar6 = (longlong)*(int *)(param_1 + 0x150) << 4;
    do {
      if (*plVar4 == *param_2) {
        if (plVar4 == (longlong *)0x0) {
          return 0;
        }
        lVar6 = *(longlong *)(lVar3 + 0x118);
        lVar3 = *(longlong *)(lVar3 + 0x120);
        uVar1 = *(uint *)((longlong)plVar4 + 0xc);
        uVar2 = (ulonglong)uVar1;
        if (lVar6 == lVar3) {
          fVar11 = 0.0;
        }
        else {
          lVar7 = (lVar6 >> 0x20) * (longlong)(int)lVar3;
          lVar6 = (longlong)(int)lVar6 * (lVar3 >> 0x20);
          lVar3 = (lVar7 * (int)uVar1) / lVar6;
          dVar8 = (double)((ulonglong)(double)lVar7 & 0x8000000000000000) / (double)lVar6 +
                  (((double)lVar7 * (double)(int)uVar1) / (double)lVar6 - (double)lVar3);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = dVar8;
          auVar10 = roundpd(auVar10,auVar10,1);
          fVar9 = (float)(dVar8 - auVar10._0_8_);
          uVar5 = (longlong)auVar10._0_8_ + lVar3;
          fVar11 = fVar9;
          if (0.99999994 <= fVar9) {
            fVar11 = 0.99999994;
          }
          if (0x7ffffffe < (longlong)uVar5) {
            uVar5 = 0x7fffffff;
          }
          uVar2 = 0xffffffff80000000;
          if (-0x80000000 < (longlong)uVar5) {
            uVar2 = uVar5;
          }
          fVar11 = (float)(~-(uint)(0.0 < fVar9) & (uint)fVar9 | (uint)fVar11 & -(uint)(0.0 < fVar9)
                          ) + 0.5 + -0.5;
          if (0.99999994 <= fVar11) {
            fVar11 = 0.99999994;
          }
          if (fVar11 <= 0.0) {
            fVar11 = 0.0;
          }
        }
        *param_3 = (int)uVar2;
        param_3[1] = fVar11;
        return CONCAT71((int7)(uVar2 >> 8),1);
      }
      plVar4 = plVar4 + 2;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  return 0;
}



// FUNCTION 140ef5d56 FUN_140ef5d56 body=396 status=ok
// SIG undefined FUN_140ef5d56(void)

int * FUN_140ef5d56(longlong param_1,int *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  
  if (*(longlong **)(param_1 + 0x298) == (longlong *)0x0) {
LAB_140ef5ed0:
    iVar3 = *(int *)(param_1 + 0x2a0);
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x298) + 0x2e8))();
    if ((lVar2 == 0) || (uVar1 = *(ulonglong *)(lVar2 + 0x108), (char)uVar1 == '\x02'))
    goto LAB_140ef5ed0;
    iVar3 = (int)(uVar1 >> 0x20);
    if ((uVar1 & 0xff) == 0) {
      iVar3 = iVar3 + 1;
    }
    lVar4 = *(longlong *)(lVar2 + 0x118);
    lVar2 = *(longlong *)(lVar2 + 0x120);
    if (lVar4 != lVar2) {
      lVar5 = (lVar4 >> 0x20) * (longlong)(int)lVar2;
      lVar4 = (longlong)(int)lVar4 * (lVar2 >> 0x20);
      lVar2 = (lVar5 * iVar3) / lVar4;
      dVar6 = (double)((ulonglong)(double)lVar5 & 0x8000000000000000) / (double)lVar4 +
              (((double)lVar5 * (double)iVar3) / (double)lVar4 - (double)lVar2);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = dVar6;
      auVar8 = roundpd(auVar8,auVar8,1);
      fVar7 = (float)(dVar6 - auVar8._0_8_);
      lVar2 = (longlong)auVar8._0_8_ + lVar2;
      fVar9 = fVar7;
      if (0.99999994 <= fVar7) {
        fVar9 = 0.99999994;
      }
      if (0x7ffffffe < lVar2) {
        lVar2 = 0x7fffffff;
      }
      lVar4 = -0x80000000;
      if (-0x80000000 < lVar2) {
        lVar4 = lVar2;
      }
      iVar3 = (int)lVar4;
      fVar9 = (float)(~-(uint)(0.0 < fVar7) & (uint)fVar7 | (uint)fVar9 & -(uint)(0.0 < fVar7)) +
              0.5 + -0.5;
      if (0.99999994 <= fVar9) {
        fVar9 = 0.99999994;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      goto LAB_140ef5ebf;
    }
  }
  fVar9 = 0.0;
LAB_140ef5ebf:
  *param_2 = iVar3;
  param_2[1] = (int)fVar9;
  return param_2;
}



// FUNCTION 140ef5ee2 FUN_140ef5ee2 body=261 status=ok
// SIG undefined FUN_140ef5ee2(void)

void FUN_140ef5ee2(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar3 = FUN_1405246fa();
  if (cVar3 != '\0') {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,3,0x10);
    puVar1 = local_28;
    local_20 = 3;
    *local_28 = &PTR_LAB_14a1c8830;
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
    local_28[2] = lVar4;
    *local_28 = &PTR_FUN_14a491670;
    local_28[3] = 0;
    FUN_14485c47a(local_28 + 3,param_1);
    puVar1[4] = FUN_140ef5ee2;
    *(undefined4 *)(puVar1 + 5) = 0;
    FUN_14621550a(param_1,&local_28);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  *(byte *)((longlong)param_1 + 0x294) = *(byte *)((longlong)param_1 + 0x294) & 0xfe;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000140ef5f27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2b8))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ef5ff0 FUN_140ef5ff0 body=252 status=ok
// SIG undefined FUN_140ef5ff0(void)

void FUN_140ef5ff0(longlong param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = (ulonglong)*(int *)(param_1 + 0x20);
  if (0 < (longlong)uVar4) {
    lVar5 = uVar4 * 0x98 + -8;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x18) + lVar5) == param_2) {
        FUN_140ef60ec((longlong *)(param_1 + 0x18),(int)uVar4 + -1);
      }
      lVar5 = lVar5 + -0x98;
      bVar1 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar1);
  }
  uVar4 = (ulonglong)*(int *)(param_1 + 0x40);
  if (0 < (longlong)uVar4) {
    lVar5 = uVar4 * 0xa0 + -0x10;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x38) + lVar5) == param_2) {
        FUN_14755003e((longlong *)(param_1 + 0x38),(int)uVar4 + -1);
      }
      lVar5 = lVar5 + -0xa0;
      bVar1 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar1);
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  if (0 < (longlong)(int)uVar2) {
    iVar3 = -uVar2;
    uVar4 = (longlong)(int)uVar2;
    do {
      lVar5 = *(longlong *)(param_1 + 0x28);
      if (*(int *)(lVar5 + -8 + uVar4 * 8) == param_2) {
        if (uVar4 != uVar2) {
          memmove((void *)(lVar5 + uVar4 * 8 + -8),(void *)(lVar5 + uVar4 * 8),
                  (longlong)(int)(uVar2 + iVar3) << 3);
          uVar2 = *(uint *)(param_1 + 0x30);
        }
        uVar2 = uVar2 - 1;
        *(uint *)(param_1 + 0x30) = uVar2;
      }
      iVar3 = iVar3 + 1;
      bVar1 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 140ef60ec FUN_140ef60ec body=230 status=ok
// SIG undefined FUN_140ef60ec(void)

void FUN_140ef60ec(longlong *param_1,uint param_2)

{
  longlong *_Dst;
  undefined8 *puVar1;
  int iVar2;
  
  _Dst = (longlong *)(*param_1 + (longlong)(int)param_2 * 0x98);
  if (*(longlong *)(*param_1 + 0x70 + (longlong)(int)param_2 * 0x98) != 0) {
    FUN_1400020a8();
  }
  if (_Dst[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1447bda9c(_Dst[9],(int)_Dst[10]);
  if (_Dst[9] != 0) {
    FUN_1400020a8();
  }
  if ((int)_Dst[1] != 0) {
    puVar1 = (undefined8 *)*_Dst;
    if (puVar1 == (undefined8 *)0x0) goto LAB_140ef614b;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(_Dst,0,0,0x10);
    *(undefined4 *)(_Dst + 1) = 0;
  }
  if (*_Dst != 0) {
    FUN_1400020a8();
  }
LAB_140ef614b:
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    memmove(_Dst,_Dst + 0x13,(longlong)(int)(~param_2 + iVar2) * 0x98);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 140ef61d2 FUN_140ef61d2 body=322 status=ok
// SIG undefined FUN_140ef61d2(void)

void FUN_140ef61d2(longlong *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  float fVar6;
  uint uVar7;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar4 = 0;
  if (0 < param_3) {
    iVar4 = param_3;
  }
  *(undefined4 *)(param_1 + 0x54) = param_2;
  *(int *)((longlong)param_1 + 0x2a4) = iVar4;
  *(undefined4 *)(param_1 + 0x55) = param_4;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x31c);
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_28);
  uVar1 = *(uint *)(param_1 + 0x54);
  uVar7 = (uint)uVar2;
  uVar5 = (ulonglong)uVar1;
  if ((int)uVar1 <= (int)uVar7) {
    fVar6 = (float)((ulonglong)uVar2 >> 0x20);
    if ((uVar1 != uVar7) || (0.0 <= fVar6)) {
      uVar5 = local_28;
      if (((int)uVar7 <= (int)(uint)local_28) &&
         ((uVar7 != (uint)local_28 || (fVar6 <= (float)(local_28 >> 0x20))))) goto LAB_140ef6264;
    }
  }
  *(ulonglong *)((longlong)param_1 + 0x31c) = uVar5;
  if (*(char *)((longlong)param_1 + 0x32c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x32c) = 0;
  }
  if ((char)param_1[0x6b] == '\x01') {
    *(undefined1 *)(param_1 + 0x6b) = 0;
  }
LAB_140ef6264:
  if (param_1[0x7a] != 0) {
    local_20 = param_1[0x61];
    local_28 = *(ulonglong *)((longlong)param_1 + 0x31c);
    FUN_1405246a4();
  }
  cVar3 = FUN_1402d76c0(param_1);
  if (cVar3 != '\0') {
    *(undefined8 *)((longlong)param_1 + 0x38c) = *(undefined8 *)((longlong)param_1 + 0x31c);
    *(char *)((longlong)param_1 + 0x394) = (char)param_1[0x52];
    param_1[0x73] = *(longlong *)((longlong)param_1 + 0x2ac);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ef637e FUN_140ef637e body=261 status=ok
// SIG undefined FUN_140ef637e(void)

void FUN_140ef637e(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar3 = FUN_1405246fa();
  if (cVar3 != '\0') {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,3,0x10);
    puVar1 = local_28;
    local_20 = 3;
    *local_28 = &PTR_LAB_14a1c8830;
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
    local_28[2] = lVar4;
    *local_28 = &PTR_FUN_14a491670;
    local_28[3] = 0;
    FUN_14485c47a(local_28 + 3,param_1);
    puVar1[4] = FUN_140ef637e;
    *(undefined4 *)(puVar1 + 5) = 0;
    FUN_14621550a(param_1,&local_28);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  *(byte *)((longlong)param_1 + 0x294) = *(byte *)((longlong)param_1 + 0x294) | 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000140ef63c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2b8))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ef648c FUN_140ef648c body=40 status=ok
// SIG undefined FUN_140ef648c(void)

undefined8 FUN_140ef648c(undefined8 param_1,int param_2)

{
  FUN_140ef64b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ef64b4 FUN_140ef64b4 body=1478 status=ok
// SIG undefined FUN_140ef64b4(void)

void FUN_140ef64b4(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  *param_1 = &PTR_FUN_14b8f04e0;
  param_1[0x72] = &PTR_FUN_14b8f0e70;
  param_1[0x73] = &PTR_FUN_14b8f0ef0;
  param_1[0x74] = &PTR_FUN_14b8f0f60;
  param_1[0x75] = &PTR_FUN_14b8f0f88;
  param_1[0x76] = &PTR_FUN_14b8f0fa0;
  param_1[0xa4] = &PTR_FUN_14b8f0fd0;
  param_1[0xa5] = &PTR_FUN_14b8f1020;
  param_1[0xa6] = &PTR_FUN_14b8f1050;
  param_1[0xa7] = &PTR_FUN_14b8f1080;
  param_1[0xa8] = &PTR_FUN_14b8f1098;
  param_1[0x118] = &PTR_FUN_14b8f10b0;
  param_1[0x119] = &PTR_FUN_14b8f11a0;
  param_1[0x11a] = &PTR_FUN_14b8f11d0;
  param_1[0x11b] = &PTR_FUN_14b8f11f0;
  param_1[0x11c] = &PTR_FUN_14b8f1210;
  param_1[0x11d] = &PTR_FUN_14b8f1280;
  param_1[0x1bb] = &PTR_FUN_14b8f12a0;
  param_1[0x1bc] = &PTR_FUN_14b8f12d0;
  param_1[0x1bd] = &PTR_FUN_14b8f1300;
  param_1[0x1be] = &PTR_FUN_14b8f1320;
  param_1[0x1bf] = &PTR_FUN_14b8f1390;
  param_1[0x1c0] = &PTR_FUN_14b8f13d0;
  FUN_14063ab46(param_1 + 0x1ef);
  param_1[0x1db] = &PTR_FUN_14b695510;
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0xf0c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0xf0c) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0xf0c) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x1e0) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x1e0) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0xef4) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0xef4) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0xef4) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x1dd) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x1dd) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x1dd) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0xeb4) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0xeb4) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0xeb4) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x1d5) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x1d5) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x1d5) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0xe9c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0xe9c) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0xe9c) = 0;
  }
  FUN_140ef6a7a(param_1[0x1c3],*(undefined4 *)(param_1 + 0x1c4));
  if (param_1[0x1c3] != 0) {
    FUN_1400020a8();
  }
  FUN_140ef6ab0(param_1);
  return;
}



// FUNCTION 140ef6a7a FUN_140ef6a7a body=54 status=ok
// SIG undefined FUN_140ef6a7a(void)

void FUN_140ef6a7a(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 140ef6ab0 FUN_140ef6ab0 body=2053 status=ok
// SIG undefined FUN_140ef6ab0(void)

void FUN_140ef6ab0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  *param_1 = &PTR_FUN_14b492ba0;
  param_1[0x72] = &PTR_FUN_14b493510;
  param_1[0x73] = &PTR_FUN_14b493590;
  param_1[0x74] = &PTR_FUN_14b493600;
  param_1[0x75] = &PTR_FUN_14b493628;
  param_1[0x76] = &PTR_FUN_14b493640;
  param_1[0xa4] = &PTR_FUN_14b493670;
  param_1[0xa5] = &PTR_FUN_14b4936c0;
  param_1[0xa6] = &PTR_FUN_14b4936f0;
  param_1[0xa7] = &PTR_FUN_14b493720;
  param_1[0xa8] = &PTR_FUN_14b493738;
  param_1[0x118] = &PTR_FUN_14b493750;
  param_1[0x119] = &PTR_FUN_14b493840;
  param_1[0x11a] = &PTR_FUN_14b493870;
  param_1[0x11b] = &PTR_FUN_14b493890;
  param_1[0x11c] = &PTR_FUN_14b4938b0;
  param_1[0x11d] = &PTR_FUN_14b493920;
  *(undefined4 *)(param_1 + 0x1ba) = 0;
  if (param_1[0x1b9] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1b2) = 0;
  if (*(int *)((longlong)param_1 + 0xd94) != 0) {
    FUN_14474875a(param_1 + 0x1b1,0);
  }
  param_1[0x1b7] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1b6) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xdb4)) {
    *(undefined4 *)((longlong)param_1 + 0xdb4) = 0x80;
    FUN_1446efbd8(param_1 + 0x1b3,0);
  }
  if (param_1[0x1b5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1af] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1ad] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a1] != 0) {
    FUN_1400020a8();
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x19c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x19c) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x19c) = 0;
  }
  FUN_140a3299c(param_1 + 0x18b);
  if (param_1[0x180] != 0) {
    FUN_1400020a8();
  }
  FUN_140ef72b5(param_1[0x17d],*(undefined4 *)(param_1 + 0x17e));
  if (param_1[0x17d] != 0) {
    FUN_1400020a8();
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0xbac) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0xbac) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0xbac) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0xb94) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0xb94) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0xb94) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x16d) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x16d) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x16d) = 0;
  }
  FUN_144760e21(param_1[0x160],*(undefined4 *)(param_1 + 0x161));
  if (param_1[0x160] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x158] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x156] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x154] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x152] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x150] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x148] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x146] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x144] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x142] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x140] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x13d],*(undefined4 *)(param_1 + 0x13e));
  if (param_1[0x13d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x139] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x137] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x135] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x133] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x131] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x12e],*(undefined4 *)(param_1 + 0x12f));
  if (param_1[0x12e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[300] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x127],*(undefined4 *)(param_1 + 0x128));
  if (param_1[0x127] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x125] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x121];
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
  FUN_140ef7316(param_1);
  return;
}



// FUNCTION 140ef72b5 FUN_140ef72b5 body=96 status=ok
// SIG undefined FUN_140ef72b5(void)

void FUN_140ef72b5(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x78);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-6] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140ef7316 FUN_140ef7316 body=352 status=ok
// SIG undefined FUN_140ef7316(void)

void FUN_140ef7316(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2f61c0;
  param_1[0x72] = &PTR_FUN_14b2f6890;
  param_1[0x73] = &PTR_FUN_14b2f6910;
  param_1[0x74] = &PTR_FUN_14b2f6980;
  param_1[0x75] = &PTR_FUN_14b2f69a8;
  param_1[0x76] = &PTR_FUN_14b2f69c0;
  param_1[0xa4] = &PTR_FUN_14b2f69f0;
  param_1[0xa5] = &PTR_FUN_14b2f6a40;
  param_1[0xa6] = &PTR_FUN_14b2f6a70;
  param_1[0xa7] = &PTR_FUN_14b2f6aa0;
  param_1[0xa8] = &PTR_FUN_14b2f6ab8;
  if (param_1[0x116] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d7b38(param_1 + 0x108);
  FUN_1407c83f0(param_1[0x106],*(undefined4 *)(param_1 + 0x107));
  if (param_1[0x106] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x105];
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
  FUN_140368c45(param_1[0x101],*(undefined4 *)(param_1 + 0x102));
  if (param_1[0x101] != 0) {
    FUN_1400020a8();
  }
  FUN_140c2206c(param_1 + 0xbf);
  FUN_1403d7bbc(param_1 + 0xaf);
  FUN_14063997c(param_1 + 0xa8);
  FUN_140c2f40c(param_1);
  return;
}



// FUNCTION 140ef7476 FUN_140ef7476 body=297 status=ok
// SIG undefined FUN_140ef7476(void)

undefined8 FUN_140ef7476(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140ef7598;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140ef7598;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_140ef7598:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140ef7543;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_140ef7543;
    }
  }
  uVar6 = 0;
LAB_140ef7543:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ef75a0 FUN_140ef75a0 body=7660 status=ok
// SIG undefined FUN_140ef75a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ef75a0(longlong *param_1,double param_2,double param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  longlong *plVar17;
  longlong lVar18;
  double *pdVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  uint uVar23;
  code **ppcVar24;
  double dVar25;
  longlong *plVar26;
  longlong lVar27;
  ulonglong uVar28;
  bool bVar29;
  bool bVar30;
  float fVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar41;
  undefined1 auVar40 [16];
  double dVar42;
  double dVar44;
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  code *pcVar46;
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar55;
  undefined1 auVar54 [16];
  double dVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar64;
  double dVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  double dVar70;
  double dVar71;
  undefined1 auStack_568 [32];
  ulonglong local_548;
  longlong *local_540;
  undefined4 local_538;
  undefined8 local_530;
  wchar_t *local_528;
  code *local_520;
  undefined1 *local_518;
  code **local_510;
  code *local_508;
  code *local_500;
  double local_4f8;
  double dStack_4f0;
  longlong *local_4e0;
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [16];
  double local_4b8;
  double dStack_4b0;
  longlong local_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  double local_468;
  undefined8 uStack_460;
  undefined1 local_458 [16];
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  undefined1 local_3f8 [16];
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  longlong local_3b8;
  undefined8 local_3b0;
  code *local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  undefined8 uStack_370;
  double local_368;
  double dStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  undefined2 local_300;
  undefined1 local_2d8 [224];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_568;
  if (((((int)param_1[0x2bd] == 0) ||
       (uVar16 = *(uint *)((longlong)param_1 + 0x15e4), (int)uVar16 < 0)) ||
      (DAT_14c9647dc <= (int)uVar16)) ||
     (((lVar27 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8), lVar27 == 0 ||
       (*(int *)(lVar27 + 0x10) != (int)param_1[0x2bd])) ||
      ((*(uint *)(lVar27 + 8) & 0x10200000) != 0)))) {
    puVar22 = (undefined1 *)param_1[0xed];
  }
  else {
    puVar22 = (undefined1 *)FUN_14479d2ce();
  }
  if ((puVar22 == (undefined1 *)0x0) || (param_1[0x2ae] == 0)) goto LAB_140ef78af;
  if (DAT_14cb94538 == 0) {
    local_510 = &local_3a8;
    local_3a8 = FUN_1449e2820;
    local_500 = FUN_14081d0ea;
    local_508 = FUN_1427b09ee;
    local_518 = &LAB_148a18249;
    local_520 = FUN_14657713c;
    local_528 = L"Engine";
    local_530 = 0;
    local_538 = 0x10004001;
    local_540 = (longlong *)CONCAT44(local_540._4_4_,8);
    local_548 = CONCAT44(local_548._4_4_,0x28);
    FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
  }
  plVar17 = (longlong *)FUN_144718840(puVar22,DAT_14cb94538);
  if (plVar17 == (longlong *)0x0) goto LAB_140ef78af;
  if (param_1 == (longlong *)0x0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1[4];
    if (lVar27 != 0) {
      if (DAT_14cad2858 == 0) {
        local_510 = &local_3a8;
        local_3a8 = FUN_144a7958c;
        local_500 = FUN_14081d0ea;
        local_508 = (code *)&LAB_146395584;
        local_518 = &LAB_147a0ba80;
        local_520 = (code *)&LAB_14575ccce;
        local_528 = L"Engine";
        local_530 = 0x40000000000;
        local_538 = 0x10000004;
        local_540 = (longlong *)CONCAT44(local_540._4_4_,0x10);
        local_548 = CONCAT44(local_548._4_4_,0x1180);
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      lVar27 = *(longlong *)(lVar27 + 0x10);
      iVar13 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar13 <= *(int *)(lVar27 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar27 + 0x30) + (longlong)iVar13 * 8) == DAT_14cad2858 + 0x30
         )) {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar13 >> 8),1),1);
      }
    }
    lVar27 = param_1[0x7c];
    if (lVar27 == 0) {
      lVar27 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar27;
    }
  }
  lVar18 = (**(code **)(*plVar17 + 0x18))(plVar17);
  if (param_2 == 0.0) {
LAB_140ef7761:
    uVar28 = 0x7fffffff;
LAB_140ef7767:
    if (param_2 != 0.0 || (int)uVar28 != 0x7fffffff) goto LAB_140ef8554;
    dVar56 = (double)param_1[0x2c0];
    iVar13 = 0x7fffffff;
    bVar29 = param_3 == 0.0;
    dVar25 = dVar56;
    if ((!bVar29) && (iVar13 = 0, dVar25 = param_3, dVar56 != param_3)) {
      uVar28 = 0;
      uVar21 = (ulonglong)*(uint *)(param_1 + 0x2fb);
      if ((int)*(uint *)(param_1 + 0x2fb) < 1) {
        uVar21 = uVar28;
      }
      lVar18 = 0x70;
      do {
        if (uVar21 == uVar28) {
          uVar28 = 0x7fffffff;
          dVar25 = dVar56;
          break;
        }
        uVar28 = uVar28 + 1;
        pdVar19 = (double *)(param_1[0x2fa] + lVar18);
        lVar18 = lVar18 + 0x78;
        dVar25 = dVar56;
      } while (*pdVar19 != param_3);
      goto LAB_140ef855b;
    }
    bVar30 = param_3 != 0.0;
  }
  else {
    if (0 < (int)*(uint *)(lVar18 + 0xa8)) {
      pdVar19 = (double *)(*(longlong *)(lVar18 + 0xa0) + 0x28);
      uVar28 = 0;
      do {
        if ((pdVar19[-1] == param_2) || (*pdVar19 == param_2)) goto LAB_140ef7767;
        uVar28 = uVar28 + 1;
        pdVar19 = pdVar19 + 0x2e;
      } while (*(uint *)(lVar18 + 0xa8) != uVar28);
      goto LAB_140ef7761;
    }
    uVar28 = 0x7fffffff;
LAB_140ef8554:
    dVar25 = (double)param_1[0x2c0];
LAB_140ef855b:
    iVar13 = (int)uVar28;
    bVar29 = iVar13 == 0x7fffffff;
    bVar30 = param_3 != 0.0;
    if ((bVar30) && (iVar13 == 0x7fffffff)) {
      if (((*(byte *)((longlong)param_3 + 0x65) & 2) != 0) ||
         ((*(uint *)((longlong)param_3 + 8) >> 0x1e & 1) != 0)) goto LAB_140ef78af;
      iVar13 = 0x7fffffff;
      bVar30 = true;
      bVar29 = true;
    }
  }
  if ((bVar29) && ((bool)(param_2 != 0.0 | bVar30))) {
    if (*(longlong *)(param_1[4] + 0xa8) == 0) {
      FUN_140056680(&local_3a8,&DAT_149e01fe8);
    }
    else {
      local_178 = *(double *)(*(longlong *)(param_1[4] + 0xa8) + 0x18);
      FUN_1400021e4(&local_178,&local_3a8);
    }
    if (param_1[2] == 0) {
      FUN_140056680(&local_178,&DAT_149e01fe8);
    }
    else {
      local_1f8 = *(double *)(param_1[2] + 0x18);
      FUN_1400021e4(&local_1f8,&local_178);
    }
    if (local_178 != 0.0) {
      FUN_1400020a8();
    }
    if (local_3a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((iVar13 != 0x7fffffff) && (iVar13 != 0)) {
    plVar17 = param_1 + 0x2fa;
    if ((iVar13 < 1) || ((int)param_1[0x2fb] < iVar13)) {
      FUN_1457c5116(plVar17,iVar13 - (int)param_1[0x2fb]);
    }
    if (param_2 == 0.0) {
      lVar27 = (longlong)(iVar13 + -1) * 0x78;
      if (*(double *)(*plVar17 + 0x70 + lVar27) == param_3) {
        local_348 = 0.0;
        dStack_340 = 0.0;
        local_358 = 0.0;
        uStack_350 = 0;
        local_368 = 0.0;
        dStack_360 = 0.0;
        local_378 = 0.0;
        uStack_370 = 0;
        local_388 = 0.0;
        dStack_380 = 0.0;
        local_398 = 0.0;
        dStack_390 = 0.0;
        local_3a8 = (code *)0x0;
        dStack_3a0 = 0.0;
        FUN_140ef9542(*plVar17 + lVar27);
        *(undefined8 *)(*plVar17 + 0x70 + lVar27) = 0;
      }
    }
    else {
      if (DAT_14cbbd498 == 0) {
        local_510 = &local_3a8;
        local_3a8 = FUN_140940982;
        local_500 = FUN_14081d0ea;
        local_508 = (code *)&LAB_146572ba2;
        local_518 = &LAB_148ca13ba;
        local_520 = (code *)&LAB_140e51436;
        local_528 = L"Engine";
        local_530 = 0;
        local_538 = 0x10000004;
        local_540 = (longlong *)CONCAT44(local_540._4_4_,8);
        local_548 = CONCAT44(local_548._4_4_,0x1068);
        FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
      }
      if ((*(int *)(DAT_14cbbd498 + 0x38) <=
           *(int *)(*(longlong *)((longlong)param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)((longlong)param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) == DAT_14cbbd498 + 0x30)) {
        lVar27 = *plVar17;
        lVar18 = (longlong)(iVar13 + -1) * 0x78;
        if (*(double *)(lVar27 + 0x70 + lVar18) != param_2) {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(param_2);
          }
          *(double *)(lVar27 + lVar18 + 0x70) = param_2;
          FUN_140efa14c(&local_3a8,param_1[0x2ae] + 0x1288);
          FUN_1406c5554(&local_3a8,puVar22,param_2);
          FUN_1406c6e60(&local_3a8);
          if ((char)local_300 == '\x01') {
            puVar22 = local_2d8;
            FUN_1405ea3a2(&local_3a8,puVar22,0);
            local_300 = 0x100;
          }
          lVar27 = param_1[0x2fa];
          uVar3 = *(undefined1 *)((longlong)param_1 + 0x172a);
          local_4a0 = param_1[0x2ae];
          if ((local_4a0 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          local_548 = lVar18 + lVar27;
          FUN_140ef9896(param_2,&local_3a8,&local_4a0,
                        CONCAT71((int7)((ulonglong)puVar22 >> 8),uVar3) & 0xffffffff);
          FUN_1403c44e6(&local_3a8);
        }
      }
    }
    goto LAB_140ef78af;
  }
  if ((param_2 != 0.0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_2);
  }
  param_1[0x2c0] = (longlong)param_2;
  FUN_140226d16(param_1,param_2);
  if ((dVar25 != param_2) || ((char)param_1[700] != '\0')) {
    lVar18 = param_1[0x2ae];
    FUN_1406c5554(lVar18 + 0x1288,puVar22,param_2);
    FUN_1406c6e60(lVar18 + 0x1288);
    FUN_140a87c14(param_1[0x2ae] + 0x1288,lVar27,0);
  }
  FUN_140ef938e(param_1,param_1[0x2c0]);
  lVar27 = param_1[0x2c0];
  if (((lVar27 == 0) ||
      (lVar27 = (**(code **)(*(longlong *)(lVar27 + 0x398) + 0x10))(lVar27 + 0x398), lVar27 == 0))
     || (lVar27 = FUN_140849bbe(lVar27), lVar27 == 0)) {
LAB_140ef7854:
    *(undefined4 *)(param_1 + 0x2d3) = 0;
  }
  else {
    lVar27 = (**(code **)(*(longlong *)(param_1[0x2c0] + 0x398) + 0x10))(param_1[0x2c0] + 0x398);
    if (lVar27 == 0) {
      lVar27 = 0;
    }
    else {
      lVar27 = FUN_140849bbe(lVar27);
    }
    lVar18 = *(longlong *)(lVar27 + 0x658);
    if (lVar18 == 0) {
      lVar18 = *(longlong *)(lVar27 + 0x660);
      if ((DAT_14c950c29 == 1) && (lVar18 != 0)) goto LAB_140ef8acc;
      if (lVar18 != 0) goto LAB_140ef79a6;
      goto LAB_140ef7854;
    }
    if (DAT_14c950c29 == 1) {
LAB_140ef8acc:
      FUN_1456cec3c(lVar18);
    }
LAB_140ef79a6:
    if (DAT_14cb06da8 == 0) {
      local_510 = &local_3a8;
      local_3a8 = FUN_1449e2820;
      local_500 = FUN_14081d0ea;
      local_508 = (code *)&LAB_1464003b0;
      local_518 = &LAB_147d17bdf;
      local_520 = (code *)&LAB_1417edf22;
      local_528 = L"Engine";
      local_530 = 0;
      local_538 = 0x10000000;
      local_540 = (longlong *)CONCAT44(local_540._4_4_,8);
      local_548 = CONCAT44(local_548._4_4_,0x588);
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) goto LAB_140ef7854;
    lVar27 = param_1[0x2d5];
    if ((lVar27 == 0) &&
       (lVar27 = FUN_1404dcd0c(param_1[0x2ae] + 0x1288,param_1 + 0x2d4), lVar27 == 0)) {
LAB_140ef852d:
      lVar27 = 0;
    }
    else {
      lVar18 = FUN_1402576f0();
      if ((*(int *)(*(longlong *)(lVar27 + 0x10) + 0x38) < *(int *)(lVar18 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar27 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar18 + 0x38) * 8) != lVar18 + 0x30)) goto LAB_140ef852d;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(lVar27);
      }
    }
    lVar18 = FUN_140ceb76e();
    if ((lVar27 == 0) || (lVar18 == 0)) goto LAB_140ef7854;
    local_3d8 = *(double *)(lVar18 + 0x38);
    local_3b0 = *(undefined8 *)(lVar18 + 0x40);
    local_548 = local_548 & 0xffffffff00000000;
    FUN_140efbf65(&local_438,lVar27);
    lVar27 = param_1[0x2c0];
    if (lVar27 == 0) {
LAB_140ef8751:
      lVar18 = 0;
    }
    else {
      if (DAT_14cbbd498 == 0) {
        local_510 = &local_3a8;
        local_3a8 = FUN_140940982;
        local_500 = FUN_14081d0ea;
        local_508 = (code *)&LAB_146572ba2;
        local_518 = &LAB_148ca13ba;
        local_520 = (code *)&LAB_140e51436;
        local_528 = L"Engine";
        local_530 = 0;
        local_538 = 0x10000004;
        local_540 = (longlong *)CONCAT44(local_540._4_4_,8);
        local_548 = CONCAT44(local_548._4_4_,0x1068);
        FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
        lVar27 = param_1[0x2c0];
        if (lVar27 == 0) goto LAB_140ef8751;
      }
      lVar18 = 0;
      if ((DAT_14cbbd498 != 0) && (lVar4 = *(longlong *)(lVar27 + 0x10), lVar4 != 0)) {
        if (*(int *)(lVar4 + 0x38) < *(int *)(DAT_14cbbd498 + 0x38)) goto LAB_140ef8751;
        lVar18 = 0;
        if (*(longlong *)
             (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) ==
            DAT_14cbbd498 + 0x30) {
          lVar18 = lVar27;
        }
      }
    }
    lVar27 = param_1[0x2c5];
    if ((lVar27 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    uVar15 = (undefined4)lVar27;
    local_3b8 = param_1[0x2d1];
    if (local_3b8 == 0) {
      dVar44 = 0.0;
      dVar56 = 1.0;
      dVar39 = 0.0;
      uVar57 = 0;
      uVar58 = 0x3ff00000;
      uVar59 = 0;
      uVar60 = 0;
      dVar32 = 0.0;
      dVar42 = 0.0;
      pcVar46 = (code *)0x0;
      dVar41 = 0.0;
      uVar12 = 0;
      auVar61 = _DAT_149934d80;
    }
    else {
      lVar27 = (**(code **)(*(longlong *)(lVar18 + 0x398) + 0x10))(lVar18 + 0x398);
      if (lVar27 == 0) {
        lVar27 = 0;
      }
      else {
        lVar27 = FUN_140849bbe(lVar27);
      }
      plVar17 = *(longlong **)(lVar27 + 0x658);
      if (plVar17 == (longlong *)0x0) {
        plVar17 = *(longlong **)(lVar27 + 0x660);
        if ((DAT_14c950c29 == 1) && (plVar17 != (longlong *)0x0)) goto LAB_140ef8eef;
        if (plVar17 != (longlong *)0x0) goto LAB_140ef7b4d;
LAB_140ef85fc:
        plVar17 = (longlong *)0x0;
      }
      else {
        if (DAT_14c950c29 == 1) {
LAB_140ef8eef:
          FUN_1456cec3c(plVar17);
        }
LAB_140ef7b4d:
        if (DAT_14cb06da8 == 0) {
          local_510 = &local_3a8;
          local_3a8 = FUN_1449e2820;
          local_500 = FUN_14081d0ea;
          local_508 = (code *)&LAB_1464003b0;
          local_518 = &LAB_147d17bdf;
          local_520 = (code *)&LAB_1417edf22;
          local_528 = L"Engine";
          local_530 = 0;
          local_538 = 0x10000000;
          local_540 = (longlong *)CONCAT44(local_540._4_4_,8);
          local_548 = CONCAT44(local_548._4_4_,0x588);
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        }
        if ((*(int *)(plVar17[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(plVar17[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
            DAT_14cb06da8 + 0x30)) goto LAB_140ef85fc;
      }
      uVar20 = (**(code **)(*plVar17 + 0x310))(plVar17);
      ppcVar24 = &local_3a8;
      uVar12 = FUN_140ef97cd(ppcVar24,uVar20,&local_3b8);
      uVar15 = SUB84(ppcVar24,0);
      auVar61._8_8_ = dStack_360;
      auVar61._0_8_ = local_368;
      uVar57 = (undefined4)local_358;
      uVar58 = local_358._4_4_;
      uVar59 = (undefined4)uStack_350;
      uVar60 = uStack_350._4_4_;
      dVar44 = local_378;
      dVar32 = local_388;
      dVar42 = dStack_380;
      dVar39 = local_398;
      dVar56 = dStack_390;
      pcVar46 = local_3a8;
      dVar41 = dStack_3a0;
    }
    dVar48 = local_3e8;
    if (lVar18 == 0) {
      fVar31 = 0.0;
    }
    else {
      dVar37 = local_3f8._0_8_;
      dVar47 = local_3f8._8_8_;
      auVar45._8_8_ = dStack_3e0;
      auVar45._0_8_ = local_3e8;
      dVar38 = auVar61._0_8_;
      dVar50 = auVar61._8_8_;
      auVar61 = minpd(auVar61,local_3f8);
      auVar67._4_4_ = uVar58;
      auVar67._0_4_ = uVar57;
      auVar67._12_4_ = uVar60;
      auVar67._8_4_ = uVar59;
      auVar45 = minpd(auVar67,auVar45);
      auVar49._8_8_ = -(ulonglong)(auVar61._8_8_ < 0.0);
      auVar49._0_8_ = -(ulonglong)(auVar61._0_8_ < 0.0);
      iVar13 = movmskpd(uVar12,auVar49);
      auVar66._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
      auVar66._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
      uVar16 = movmskpd(uVar15,auVar66);
      if ((uVar16 & 0x3fffffff) == 0 && iVar13 == 0) {
        dVar37 = dVar32 * (double)param_1[0x2b9] * dVar37;
        dVar47 = dVar42 * (double)param_1[0x2ba] * dVar47;
        dVar32 = dVar44 * (double)param_1[699] * local_3e8;
        dVar42 = dVar47 * local_438 - dVar37 * dStack_430;
        dVar39 = dVar32 * dStack_430 - dVar47 * local_428;
        dVar41 = dVar37 * local_428 - dVar32 * local_438;
        dVar39 = dVar39 + dVar39;
        dVar41 = dVar41 + dVar41;
        dVar42 = dVar42 + dVar42;
        dVar56 = (dVar42 * dStack_430 - local_428 * dVar41) + dStack_420 * dVar39 + dVar37 +
                 local_418;
        dVar44 = (dVar39 * local_428 - dVar42 * local_438) + dStack_420 * dVar41 + dVar47 +
                 dStack_410;
        dVar32 = (dVar41 * local_438 - dStack_430 * dVar39) + dStack_420 * dVar42 + dVar32 +
                 local_408;
      }
      else {
        dVar64 = dStack_430 + dStack_430;
        dVar65 = local_428 + local_428;
        dVar55 = local_438 * (local_438 + local_438);
        dVar69 = (local_438 + local_438) * dStack_420;
        dStack_130 = (dVar65 * dStack_430 - dVar69) * local_3e8;
        local_178 = (1.0 - (local_428 * dVar65 + dStack_430 * dVar64)) * dVar37;
        dVar51 = (1.0 - (local_428 * dVar65 + dVar55)) * dVar47;
        dStack_170 = (dVar64 * local_438 + dVar65 * dStack_420) * dVar37;
        local_148 = (dVar65 * dStack_430 + dVar69) * dVar47;
        local_138 = (dVar64 * dStack_420 + local_438 * dVar65) * local_3e8;
        local_168 = (local_438 * dVar65 - dVar64 * dStack_420) * dVar37;
        uStack_160 = 0;
        local_158._8_4_ = SUB84(dVar51,0);
        local_158._0_8_ = (dVar64 * local_438 - dVar65 * dStack_420) * dVar47;
        local_158._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
        local_128 = (1.0 - (dVar55 + dStack_430 * dVar64)) * local_3e8;
        uStack_140 = 0;
        uStack_120 = 0;
        local_118 = local_418;
        dStack_110 = dStack_410;
        local_108 = local_408;
        uStack_100 = 0x3ff0000000000000;
        dVar64 = dVar41 + dVar41;
        dVar51 = dVar39 + dVar39;
        dVar65 = (double)pcVar46 * ((double)pcVar46 + (double)pcVar46);
        dVar55 = ((double)pcVar46 + (double)pcVar46) * dVar56;
        local_1d8 = (dVar64 * (double)pcVar46 - dVar51 * dVar56) * dVar50;
        dStack_1b0 = (dVar51 * dVar41 - dVar55) * (double)CONCAT44(uVar58,uVar57);
        local_1f8 = (1.0 - (dVar39 * dVar51 + dVar41 * dVar64)) * dVar38;
        dStack_1d0 = (1.0 - (dVar39 * dVar51 + dVar65)) * dVar50;
        dStack_1f0 = (dVar64 * (double)pcVar46 + dVar51 * dVar56) * dVar38;
        local_1c8 = (dVar51 * dVar41 + dVar55) * dVar50;
        local_1b8 = ((double)pcVar46 * dVar51 + dVar64 * dVar56) * (double)CONCAT44(uVar58,uVar57);
        local_1e8 = ((double)pcVar46 * dVar51 - dVar64 * dVar56) * dVar38;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        local_1a8 = (1.0 - (dVar65 + dVar41 * dVar64)) * (double)CONCAT44(uVar58,uVar57);
        uStack_1a0 = 0;
        uStack_180 = 0x3ff0000000000000;
        local_198 = dVar32 * (double)param_1[0x2b9];
        dStack_190 = dVar42 * (double)param_1[0x2ba];
        local_188 = dVar44 * (double)param_1[699];
        FUN_1447fea8d(&local_3a8);
        FUN_144a1c686(&local_3a8,0x3e45798ee0000000);
        auVar34._8_8_ = -(ulonglong)(0.0 <= dVar50 * dVar47);
        auVar34._0_8_ = -(ulonglong)(0.0 <= dVar38 * dVar37);
        auVar61 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar34);
        uVar28 = -(ulonglong)(0.0 <= (double)CONCAT44(uVar58,uVar57) * dVar48);
        dVar56 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
        dVar44 = auVar61._0_8_;
        local_398 = local_398 * dVar44;
        dStack_3a0 = dStack_3a0 * dVar44;
        local_3a8 = (code *)((double)local_3a8 * dVar44);
        dVar44 = auVar61._8_8_;
        local_378 = local_378 * dVar44;
        dStack_380 = dStack_380 * dVar44;
        local_388 = dVar44 * local_388;
        local_358 = local_358 * dVar56;
        dStack_360 = dStack_360 * dVar56;
        local_368 = dVar56 * local_368;
        FUN_14481fd10(&local_498,&local_3a8);
        dVar56 = local_348;
        dVar44 = dStack_340;
        dVar32 = local_338;
      }
      fVar31 = (float)SQRT(dVar32 * dVar32 + dVar56 * dVar56 + dVar44 * dVar44);
    }
    *(float *)(param_1 + 0x2d3) = fVar31;
  }
  if (*(char *)((longlong)param_1 + 0x172a) == '\x01') {
    if ((dVar25 != param_2) || ((char)param_1[700] != '\0')) {
      plVar17 = &DAT_14c846480;
      plVar26 = param_1 + 0x2e6;
      for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
        *plVar26 = *plVar17;
        plVar17 = plVar17 + 1;
        plVar26 = plVar26 + 1;
      }
      *(undefined1 *)((longlong)param_1 + 0x172b) = 0;
      plVar17 = (longlong *)param_1[0x2c9];
      if (((plVar17 != (longlong *)0x0) && (plVar17[8] != 0)) &&
         (cVar11 = (**(code **)(*plVar17 + 0x2c0))(plVar17), cVar11 == '\0')) {
        lVar27 = param_1[0xed];
        plVar26 = *(longlong **)(lVar27 + 0x75e0);
        if (plVar26 != (longlong *)0x0) {
          iVar13 = (int)plVar26[1];
          do {
            if (iVar13 == 0) goto LAB_140ef8519;
            LOCK();
            iVar14 = (int)plVar26[1];
            bVar29 = iVar13 == iVar14;
            if (bVar29) {
              *(int *)(plVar26 + 1) = iVar13 + 1;
              iVar14 = iVar13;
            }
            iVar13 = iVar14;
            UNLOCK();
          } while (!bVar29);
          lVar27 = *(longlong *)(lVar27 + 0x75d8);
          LOCK();
          *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar26 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar26)(plVar26);
            LOCK();
            piVar2 = (int *)((longlong)plVar26 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar26 + 0x10))(plVar26);
            }
          }
          if (lVar27 != 0) {
            lVar18 = plVar17[8];
            uVar20 = FUN_1457c51c8(lVar27);
            iVar13 = FUN_144a750a0(lVar18 + 0x50,uVar20);
            if (*(int *)(param_1[0xed] + 0x6190) < 1) {
              local_3a8 = (code *)0x0;
            }
            else {
              local_3a8 = (code *)**(double **)(param_1[0xed] + 0x6188);
            }
            iVar14 = FUN_144a750a0(lVar18 + 0x50);
            auVar61 = _DAT_149934d80;
            if ((iVar13 != -1) && (iVar14 != -1)) {
              local_438 = 0.0;
              dStack_430 = 0.0;
              local_428 = 0.0;
              dStack_420 = 1.0;
              local_418 = 0.0;
              dStack_410 = 0.0;
              local_408 = 0.0;
              dStack_400 = 0.0;
              dVar56 = (double)DAT_149934d80;
              dVar44 = DAT_149934d80._8_8_;
              local_3f8 = _DAT_149934d80;
              local_3e8 = 1.0;
              dStack_3e0 = 0.0;
              local_498 = 0.0;
              dStack_490 = 0.0;
              local_488 = 0.0;
              dStack_480 = 1.0;
              local_478 = 0.0;
              dStack_470 = 0.0;
              local_468 = 0.0;
              uStack_460 = 0;
              local_458 = _DAT_149934d80;
              local_448 = 1.0;
              dStack_440 = 0.0;
              local_540 = &local_3b0;
              local_3b0._0_2_ = (ushort)(byte)local_3b0;
              local_548 = local_548 & 0xffffffffffffff00;
              local_4e0 = plVar26;
              FUN_140efcb26(plVar17,&local_438,iVar13,0);
              local_540 = &local_3b8;
              local_3b8._0_2_ = (ushort)(byte)local_3b8;
              local_548 = local_548 & 0xffffffffffffff00;
              uVar15 = FUN_140efcb26(plVar17,&local_498,iVar14,0);
              dVar42 = dStack_3e0;
              dVar32 = local_3e8;
              plVar26 = local_4e0;
              *(undefined1 *)((longlong)param_1 + 0x172b) = 1;
              auVar6._8_8_ = dStack_440;
              auVar6._0_8_ = local_448;
              auVar52._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_458._8_8_));
              auVar52._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_458._0_8_));
              uVar16 = movmskpd(uVar15,auVar52);
              auVar53._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_440));
              auVar53._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_448));
              iVar13 = movmskpd((int)plVar17,auVar53);
              uVar23 = iVar13 << 2 | uVar16;
              if (uVar23 == 0) {
                dStack_4f0 = DAT_14c8464b8;
                local_4f8 = DAT_14c8464b0;
                auVar33 = _DAT_14c8464c0;
                uVar15 = (undefined4)DAT_14c846480;
                uVar12 = DAT_14c846480._4_4_;
                uVar57 = (undefined4)DAT_14c846488;
                uVar58 = DAT_14c846488._4_4_;
                local_4c8 = _DAT_14c8464d0;
                dVar39 = DAT_14c846490;
                dVar41 = DAT_14c846498;
                dVar48 = DAT_14c8464a0;
                dVar37 = DAT_14c8464a8;
              }
              else {
                auVar49 = divpd(auVar61,local_458);
                auVar45 = divpd(ZEXT816(0x3ff0000000000000),auVar6);
                auVar33._0_8_ =
                     (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_458._0_8_)) &
                             auVar49._0_8_);
                auVar33._8_8_ =
                     (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_458._8_8_)) &
                             auVar49._8_8_);
                dVar38 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_448)) &
                                 auVar45._0_8_);
                local_4c8._8_8_ = 0;
                local_4c8._0_8_ = dVar38;
                dVar39 = local_488 * -1.0;
                dVar41 = dStack_480 * 1.0;
                dVar48 = -local_498;
                dVar37 = -dStack_490;
                dVar51 = local_478 * auVar33._0_8_;
                dVar55 = dStack_470 * auVar33._8_8_;
                dVar38 = local_468 * dVar38;
                dVar47 = dVar55 * dVar48 - dVar37 * dVar51;
                dVar50 = dVar38 * dVar37 - dVar39 * dVar55;
                dVar64 = dVar51 * dVar39 - dVar48 * dVar38;
                dVar50 = dVar50 + dVar50;
                dVar64 = dVar64 + dVar64;
                dVar47 = dVar47 + dVar47;
                local_4f8 = 0.0 - (dVar41 * dVar47 + dVar38 + (dVar64 * dVar48 - dVar50 * dVar37));
                dStack_4f0 = 0.0;
                uVar15 = SUB84(local_498,0);
                uVar12 = (int)((ulonglong)dVar48 >> 0x20);
                uVar57 = SUB84(dStack_490,0);
                uVar58 = (int)((ulonglong)dVar37 >> 0x20);
                dVar48 = 0.0 - ((dVar47 * dVar37 - dVar64 * dVar39) + dVar41 * dVar50 + dVar51);
                dVar37 = 0.0 - (dVar47 * local_498 + dVar39 * dVar50 + dVar41 * dVar64 + dVar55);
              }
              auVar7._8_8_ = dStack_3e0;
              auVar7._0_8_ = local_3e8;
              local_4d8 = local_3f8;
              auVar45 = local_4d8;
              auVar49 = minpd(local_3f8,auVar33);
              auVar67 = minpd(auVar7,local_4c8);
              auVar54._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
              auVar54._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
              iVar13 = movmskpd(uVar16,auVar54);
              auVar68._8_8_ = -(ulonglong)(auVar67._8_8_ < 0.0);
              auVar68._0_8_ = -(ulonglong)(auVar67._0_8_ < 0.0);
              uVar16 = movmskpd(uVar23,auVar68);
              dVar47 = auVar33._0_8_;
              dVar38 = auVar33._8_8_;
              uVar9 = local_4c8._0_8_;
              uVar10 = local_4c8._8_8_;
              local_4d8._0_8_ = local_3f8._0_8_;
              uVar20 = local_4d8._0_8_;
              local_4d8._8_8_ = local_3f8._8_8_;
              uVar8 = local_4d8._8_8_;
              local_4d8 = auVar45;
              if ((uVar16 & 0x3fffffff) == 0 && iVar13 == 0) {
                dVar64 = dStack_430 * dVar39 * -1.0 +
                         local_428 * (double)CONCAT44(uVar58,uVar57) +
                         (double)CONCAT44(uVar12,uVar15) * dStack_420 * 1.0 + dVar41 * local_438;
                dVar51 = local_438 * dVar39 * 1.0 +
                         dStack_420 * (double)CONCAT44(uVar58,uVar57) +
                         (double)CONCAT44(uVar12,uVar15) * local_428 * -1.0 + dVar41 * dStack_430;
                auVar63._0_8_ =
                     dStack_420 * dVar39 * 1.0 +
                     (((double)CONCAT44(uVar12,uVar15) * dStack_430 * 1.0 + dVar41 * local_428) -
                     (double)CONCAT44(uVar58,uVar57) * local_438);
                auVar63._8_8_ =
                     local_428 * dVar39 * -1.0 +
                     (((double)CONCAT44(uVar12,uVar15) * local_438 * -1.0 + dVar41 * dStack_420) -
                     (double)CONCAT44(uVar58,uVar57) * dStack_430);
                dVar70 = local_418 * dVar47;
                dVar71 = dStack_410 * dVar38;
                dVar50 = local_408 * (double)local_4c8._0_8_;
                dVar69 = dStack_400 * (double)local_4c8._8_8_;
                dVar55 = dVar71 * (double)CONCAT44(uVar12,uVar15) -
                         (double)CONCAT44(uVar58,uVar57) * dVar70;
                dVar65 = dVar50 * (double)CONCAT44(uVar58,uVar57) - dVar39 * dVar71;
                dVar44 = dVar70 * dVar39 - (double)CONCAT44(uVar12,uVar15) * dVar50;
                dVar56 = dVar69 * dVar41 - dVar41 * dVar69;
                dVar65 = dVar65 + dVar65;
                dVar44 = dVar44 + dVar44;
                dVar55 = dVar55 + dVar55;
                dVar56 = dVar56 + dVar56;
                local_338 = local_4f8 +
                            (dVar44 * (double)CONCAT44(uVar12,uVar15) -
                            (double)CONCAT44(uVar58,uVar57) * dVar65) + dVar41 * dVar55 + dVar50;
                dVar50 = dStack_4f0 + (dVar56 * dVar41 - dVar56 * dVar41) + dVar41 * dVar56 + dVar69
                ;
                dVar56 = dVar48 + (dVar55 * (double)CONCAT44(uVar58,uVar57) - dVar39 * dVar44) +
                                  dVar41 * dVar65 + dVar70;
                dVar44 = dVar37 + (dVar65 * dVar39 - dVar55 * (double)CONCAT44(uVar12,uVar15)) +
                                  dVar41 * dVar44 + dVar71;
              }
              else {
                dVar55 = (double)CONCAT44(uVar12,uVar15) + (double)CONCAT44(uVar12,uVar15);
                dVar71 = (double)CONCAT44(uVar58,uVar57) + (double)CONCAT44(uVar58,uVar57);
                dVar51 = dVar39 + dVar39;
                dVar64 = (double)CONCAT44(uVar12,uVar15) * dVar55;
                dVar50 = (double)CONCAT44(uVar58,uVar57) * dVar71;
                local_4b8 = 1.0 - (dVar64 + dVar50);
                dStack_4b0 = 0.0 - (dVar64 + dVar50);
                local_178 = (dVar56 - (dVar39 * dVar51 + dVar50)) * dVar47;
                dVar69 = dVar71 * (double)CONCAT44(uVar12,uVar15);
                dVar70 = dVar51 * (double)CONCAT44(uVar58,uVar57);
                dVar50 = (double)CONCAT44(uVar12,uVar15) * dVar51;
                dVar55 = dVar55 * dVar41;
                dStack_130 = (dVar70 - dVar55) * (double)local_4c8._0_8_;
                local_138 = (dVar50 + dVar71 * dVar41) * (double)local_4c8._0_8_;
                local_128 = local_4b8 * (double)local_4c8._0_8_;
                dVar65 = (double)local_4c8._0_8_ * local_3e8;
                dStack_170 = (dVar69 + dVar51 * dVar41) * dVar47;
                local_148 = (dVar70 + dVar55) * dVar38;
                local_168 = (dVar50 - dVar71 * dVar41) * dVar47;
                uStack_160 = 0;
                local_158._8_8_ = (dVar44 - (dVar39 * dVar51 + dVar64)) * dVar38;
                local_158._0_8_ = (dVar69 - dVar51 * dVar41) * dVar38;
                uStack_140 = 0;
                uStack_120 = 0;
                local_108 = local_4f8;
                uStack_100 = 0x3ff0000000000000;
                dVar64 = dStack_430 + dStack_430;
                dVar51 = local_428 + local_428;
                dVar50 = local_438 * (local_438 + local_438);
                local_1a8 = (1.0 - (dVar50 + dStack_430 * dVar64)) * local_3e8;
                dVar55 = (local_438 + local_438) * dStack_420;
                local_1b8 = (dVar64 * dStack_420 + local_438 * dVar51) * local_3e8;
                local_1d8 = (dVar64 * local_438 - dVar51 * dStack_420) * (double)local_4d8._8_8_;
                dStack_1b0 = (dVar51 * dStack_430 - dVar55) * local_3e8;
                dVar39 = dVar47 * (double)local_4d8._0_8_;
                dVar41 = dVar38 * (double)local_4d8._8_8_;
                local_1f8 = (dVar56 - (local_428 * dVar51 + dStack_430 * dVar64)) *
                            (double)local_4d8._0_8_;
                dStack_1d0 = (dVar44 - (local_428 * dVar51 + dVar50)) * (double)local_4d8._8_8_;
                dStack_1f0 = (dVar64 * local_438 + dVar51 * dStack_420) * (double)local_4d8._0_8_;
                local_1c8 = (dVar51 * dStack_430 + dVar55) * (double)local_4d8._8_8_;
                local_1e8 = (local_438 * dVar51 - dVar64 * dStack_420) * (double)local_4d8._0_8_;
                uStack_1e0 = 0;
                uStack_1c0 = 0;
                uStack_1a0 = 0;
                local_198 = local_418;
                dStack_190 = dStack_410;
                local_188 = local_408;
                uStack_180 = 0x3ff0000000000000;
                local_118 = dVar48;
                dStack_110 = dVar37;
                FUN_1447fea8d(&local_3a8);
                FUN_144a1c686(&local_3a8,0x3e45798ee0000000);
                auVar35._8_8_ = -(ulonglong)(0.0 <= dVar41);
                auVar35._0_8_ = -(ulonglong)(0.0 <= dVar39);
                auVar45 = blendvpd(_DAT_149936790,auVar61,auVar35);
                uVar28 = -(ulonglong)(0.0 <= dVar65);
                dVar56 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
                dVar44 = auVar45._0_8_;
                local_398 = local_398 * dVar44;
                dStack_3a0 = dStack_3a0 * dVar44;
                local_3a8 = (code *)((double)local_3a8 * dVar44);
                dVar44 = auVar45._8_8_;
                local_378 = local_378 * dVar44;
                dStack_380 = dStack_380 * dVar44;
                local_388 = dVar44 * local_388;
                local_358 = local_358 * dVar56;
                dStack_360 = dStack_360 * dVar56;
                local_368 = dVar56 * local_368;
                FUN_14481fd10(&local_3d8,&local_3a8);
                auVar40._0_8_ = local_3d8 * local_3d8;
                auVar40._8_8_ = dStack_3d0 * dStack_3d0;
                dVar56 = local_3c8 * local_3c8 + auVar40._0_8_;
                dVar44 = dStack_3c0 * dStack_3c0 + auVar40._8_8_;
                auVar43._0_8_ = dVar56 + dVar44;
                auVar43._8_8_ = dVar56 + dVar44;
                auVar45 = sqrtpd(auVar40,auVar43);
                auVar61 = divpd(auVar61,auVar45);
                auVar62._0_8_ = auVar61._0_8_ * local_3c8;
                auVar62._8_8_ = auVar61._8_8_ * dStack_3c0;
                dVar64 = (double)((ulonglong)(local_3d8 * auVar61._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_));
                dVar51 = (double)((ulonglong)(dStack_3d0 * auVar61._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_));
                auVar36._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
                auVar36._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
                auVar63 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar62,auVar36);
                dVar50 = 0.0;
                dVar56 = local_348;
                dVar44 = dStack_340;
              }
              param_1[0x2e6] = (longlong)dVar64;
              param_1[0x2e7] = (longlong)dVar51;
              *(undefined1 (*) [16])(param_1 + 0x2e8) = auVar63;
              param_1[0x2ea] = (longlong)dVar56;
              param_1[0x2eb] = (longlong)dVar44;
              param_1[0x2ec] = (longlong)local_338;
              param_1[0x2ed] = (longlong)dVar50;
              auVar5._8_4_ = SUB84((double)uVar8 * dVar38,0);
              auVar5._0_8_ = (double)uVar20 * dVar47;
              auVar5._12_4_ = (int)((ulonglong)((double)uVar8 * dVar38) >> 0x20);
              *(undefined1 (*) [16])(param_1 + 0x2ee) = auVar5;
              param_1[0x2f0] = (longlong)(dVar32 * (double)uVar9);
              param_1[0x2f1] = (longlong)(dVar42 * (double)uVar10);
            }
          }
          LOCK();
          plVar17 = plVar26 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
            (**(code **)*plVar26)(plVar26);
            LOCK();
            piVar2 = (int *)((longlong)plVar26 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar26 + 0x10))(plVar26);
            }
          }
        }
      }
    }
LAB_140ef8519:
    FUN_140227966(param_1,param_1[0x2c0]);
  }
  if (dVar25 != param_2) {
    local_3a8 = (code *)param_1[0x2c0];
    dStack_3a0 = param_3;
    uVar20 = FUN_14477b072(param_1,DAT_14cba85c0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar20,&local_3a8);
  }
  *(undefined1 *)(param_1 + 700) = 0;
LAB_140ef78af:
  if ((local_f0 ^ (ulonglong)auStack_568) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ef938e FUN_140ef938e body=434 status=ok
// SIG undefined FUN_140ef938e(void)

void FUN_140ef938e(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  code *local_a8;
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
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 != 0) {
    if (DAT_14cbbd498 == 0) {
      local_c0 = &local_a8;
      local_a8 = FUN_140940982;
      local_b0 = FUN_14081d0ea;
      local_b8 = &LAB_146572ba2;
      local_c8 = &LAB_148ca13ba;
      local_d0 = &LAB_140e51436;
      local_d8 = L"Engine";
      local_e0 = 0;
      local_e8 = 0x10000004;
      local_f0 = 8;
      local_f8 = CONCAT44(local_f8._4_4_,0x1068);
      FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
    }
    if ((*(int *)(DAT_14cbbd498 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) == DAT_14cbbd498 + 0x30)) {
      uVar1 = *(undefined1 *)(param_1 + 0x172a);
      lVar2 = *(longlong *)(param_1 + 0x1570);
      local_30 = lVar2;
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar2);
        lVar2 = *(longlong *)(param_1 + 0x1570);
      }
      local_f8 = param_1 + 0x1620;
      FUN_140ef9896(param_2,lVar2 + 0x1288,&local_30,
                    CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
      goto LAB_140ef93e6;
    }
  }
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
  local_a8 = (code *)0x0;
  uStack_a0 = 0;
  FUN_140ef9542(param_1 + 0x1620);
LAB_140ef93e6:
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ef9542 FUN_140ef9542 body=651 status=ok
// SIG undefined FUN_140ef9542(void)

longlong * FUN_140ef9542(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar2;
  lVar2 = param_2[2];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[2] = lVar2;
  lVar2 = param_2[3];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[3];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[3] = lVar2;
  lVar2 = param_2[4];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[4];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[4] = lVar2;
  lVar2 = param_2[5];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[5];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[5] = lVar2;
  lVar2 = param_2[6];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[6];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[6] = lVar2;
  lVar2 = param_2[7];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[7];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[7] = lVar2;
  lVar2 = param_2[8];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[8];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[8] = lVar2;
  lVar2 = param_2[9];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[9];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[9] = lVar2;
  lVar2 = param_2[10];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[10];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[10] = lVar2;
  lVar2 = param_2[0xb];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0xb];
    }
  }
  param_1[0xb] = lVar2;
  lVar2 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = lVar2;
  return param_1;
}



// FUNCTION 140ef97cd FUN_140ef97cd body=201 status=ok
// SIG undefined FUN_140ef97cd(void)

undefined8 FUN_140ef97cd(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  lVar2 = *param_3;
  uVar5 = 0xffffffff;
  if ((lVar2 != 0) && (*(int *)(param_2 + 0x98) != *(int *)(param_2 + 0xc4))) {
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    lVar4 = param_2 + 200;
    if (*(longlong *)(param_2 + 0xd0) != 0) {
      lVar4 = *(longlong *)(param_2 + 0xd0);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_2 + 0xd8) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x90) + (longlong)iVar7 * 0x14);
        if (*plVar1 == lVar2) {
          if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
            uVar5 = (undefined4)plVar1[1];
          }
          break;
        }
        iVar7 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140efb764(param_1,param_2,uVar5);
  return param_1;
}



// FUNCTION 140ef9896 FUN_140ef9896 body=936 status=ok
// SIG undefined FUN_140ef9896(void)

void FUN_140ef9896(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_148 [40];
  longlong *local_120;
  longlong local_118;
  longlong local_110;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_140ef9542(param_5);
  local_118 = param_1;
  if (((*(longlong *)(param_1 + 0xb38) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0xb40), plVar3 != (longlong *)0x0)) &&
     (lVar7 = (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(param_1 + 0xcfc)), lVar7 != 0)) {
    lVar11 = *(longlong *)(lVar7 + 0x28);
    if (*(longlong *)(lVar7 + 0x28) == 0) {
      lVar11 = lVar7;
    }
    if ((longlong)*(int *)(lVar7 + 0x30) != 0) {
      lVar7 = (longlong)*(int *)(lVar7 + 0x30) * 0x28;
      do {
        lVar8 = FUN_14096f566(lVar11);
        if ((lVar8 != 0) && (lVar8 = FUN_14096f566(lVar11), lVar8 != 0)) {
          lVar9 = FUN_140ef9cc4();
          if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
             ((*(longlong *)
                (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30 &&
              (lVar8 = *(longlong *)(lVar8 + 0x90), lVar8 != 0)))) break;
        }
        lVar11 = lVar11 + 0x28;
        lVar8 = 0;
        lVar7 = lVar7 + -0x28;
      } while (lVar7 != 0);
      goto LAB_140ef99b5;
    }
  }
  lVar8 = 0;
LAB_140ef99b5:
  local_e8 = 0;
  uStack_e0 = 0;
  iVar12 = *(int *)(param_2 + 0x28);
  local_110 = param_2;
  if ((longlong)iVar12 == 0) {
    uVar14 = 0;
  }
  else {
    lVar7 = *(longlong *)(param_2 + 0x20);
    lVar11 = 0;
    local_120 = param_3;
    do {
      uVar4 = *(undefined8 *)(lVar7 + lVar11);
      uVar10 = FUN_140ef9c8a();
      cVar5 = FUN_1448093f4(uVar4,uVar10);
      uVar14 = uStack_e0;
      if (cVar5 != '\0') {
        uVar4 = *(undefined8 *)(lVar7 + lVar11);
        lVar9 = *(longlong *)(lVar7 + 8 + lVar11);
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
          UNLOCK();
        }
        lVar13 = (longlong)(int)uStack_e0;
        uVar6 = (int)uStack_e0 + 1;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar6);
        if (uStack_e0._4_4_ < uVar6) {
          FUN_140efa03e(&local_e8,uVar14 & 0xffffffff);
        }
        *(undefined8 *)(local_e8 + lVar13 * 0x10) = uVar4;
        *(longlong *)(local_e8 + 8 + lVar13 * 0x10) = lVar9;
      }
      lVar11 = lVar11 + 0x10;
    } while ((longlong)iVar12 * 0x10 != lVar11);
    uVar14 = uStack_e0 & 0xffffffff;
    param_3 = local_120;
  }
  iVar12 = (int)uVar14 + 1;
  lVar7 = uVar14 * 0x10 + -8;
  do {
    iVar12 = iVar12 + -1;
    if (iVar12 < 1) break;
    lVar11 = *(longlong *)(local_e8 + -8 + lVar7);
    plVar3 = *(longlong **)(local_e8 + lVar7);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (lVar11 == 0) {
      bVar15 = true;
    }
    else {
      lVar11 = *(longlong *)(lVar11 + 8);
      bVar15 = lVar11 == 0;
      if (!bVar15) {
        lVar8 = lVar11;
      }
    }
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
    lVar7 = lVar7 + -0x10;
  } while (bVar15);
  if (lVar8 != 0) {
    local_f8 = (longlong *)0x0;
    uStack_f0._0_4_ = 1;
    uStack_f0._4_4_ = 0;
    FUN_140ef9edc(&local_f8,0);
    iVar12 = (int)uStack_f0;
    *local_f8 = local_118;
    lVar7 = *param_3;
    lVar11 = (longlong)(int)uStack_f0;
    uVar6 = (int)uStack_f0 + 1;
    uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar6);
    if (uStack_f0._4_4_ < uVar6) {
      FUN_140ef9edc(&local_f8,iVar12);
    }
    plVar3 = local_f8;
    lVar9 = local_110;
    local_f8[lVar11] = lVar7;
    local_108 = (void *)0x0;
    lVar7 = (longlong)(int)uStack_f0;
    local_100 = (int)uStack_f0;
    if (lVar7 == 0) {
      local_fc = 0;
    }
    else {
      FUN_140ef9daa(&local_108,uStack_f0 & 0xffffffff);
      memcpy(local_108,plVar3,lVar7 << 3);
    }
    FUN_140efac82(lVar8,&local_d8,&local_108,lVar9);
    FUN_140ef9542(param_5,&local_d8);
    if (local_f8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140ef9c3f(local_e8,uStack_e0 & 0xffffffff);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ef9c3f FUN_140ef9c3f body=75 status=ok
// SIG undefined FUN_140ef9c3f(void)

void FUN_140ef9c3f(longlong param_1,int param_2)

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



// FUNCTION 140ef9c8a FUN_140ef9c8a body=57 status=ok
// SIG undefined FUN_140ef9c8a(void)

void FUN_140ef9c8a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6da8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6da8 = FUN_140002ddd(FUN_1465c9c0e,uVar1,L"OakAnimSetPickerEx");
  }
  return;
}



// FUNCTION 140ef9cc4 FUN_140ef9cc4 body=228 status=ok
// SIG undefined FUN_140ef9cc4(void)

longlong FUN_140ef9cc4(void)

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
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba7318 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464b2540;
    local_38 = &LAB_148bf1e1d;
    local_40 = FUN_1418c71df;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x98;
    FUN_14081cfa3(L"/Script/OakGame",L"OakBodyActionAnimData",&DAT_14cba7318,&DAT_148bf1e1c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba7318;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ef9daa FUN_140ef9daa body=306 status=ok
// SIG undefined FUN_140ef9daa(void)

void FUN_140ef9daa(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (longlong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (uVar3 < 0x7ff1) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
      }
      else {
        if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
          uVar4 = 0x32;
          if (0x32 < bVar2) {
            uVar4 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140ef9e0c;
            lVar1 = uVar4 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar6 & 0xfffffffffffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_140ef9e0c:
  uVar6 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 3)) {
    uVar6 = uVar3 >> 3 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}



// FUNCTION 140ef9edc FUN_140ef9edc body=353 status=ok
// SIG undefined FUN_140ef9edc(void)

void FUN_140ef9edc(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140ef9f61;
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
LAB_140ef9f61:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140efa03e FUN_140efa03e body=269 status=ok
// SIG undefined FUN_140efa03e(void)

void FUN_140efa03e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140efa14c FUN_140efa14c body=228 status=ok
// SIG undefined FUN_140efa14c(void)

void FUN_140efa14c(undefined8 *param_1)

{
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 2;
  *(undefined2 *)(param_1 + 0x15) = 1;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x28) = 2;
  *(undefined8 *)((longlong)param_1 + 0x14b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  FUN_140efa230();
  return;
}



// FUNCTION 140efa230 FUN_140efa230 body=216 status=ok
// SIG undefined FUN_140efa230(void)

longlong FUN_140efa230(longlong param_1,longlong param_2)

{
  FUN_140efa3a8();
  FUN_140efa358(param_1 + 0x10,param_2 + 0x10);
  FUN_140efa4a0(param_1 + 0x20,param_2 + 0x20);
  FUN_140535930(param_1 + 0x30,param_2 + 0x30);
  if (param_2 != param_1) {
    FUN_140efaaf6(param_1 + 0x90,param_2 + 0x90);
  }
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0xa8);
  *(undefined1 *)(param_1 + 0xa9) = *(undefined1 *)(param_2 + 0xa9);
  FUN_140efa308(param_1 + 0xb0,param_2 + 0xb0);
  FUN_140efa308(param_1 + 0xc0,param_2 + 0xc0);
  FUN_1405ea0f6(param_1 + 0xd0,param_2 + 0xd0);
  FUN_140efa448(param_1 + 0x120,param_2 + 0x120);
  FUN_140efa5a0(param_1 + 0x130);
  FUN_1448a8284(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x148) = 0;
  return param_1;
}



// FUNCTION 140efa308 FUN_140efa308 body=79 status=ok
// SIG undefined FUN_140efa308(void)

undefined8 * FUN_140efa308(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140efa9bc(param_1,iVar1);
      FUN_140efa4fd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140efa358 FUN_140efa358 body=79 status=ok
// SIG undefined FUN_140efa358(void)

undefined8 * FUN_140efa358(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140efa882(param_1,iVar1);
      FUN_140efa3f7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140efa3a8 FUN_140efa3a8 body=79 status=ok
// SIG undefined FUN_140efa3a8(void)

undefined8 * FUN_140efa3a8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140efa6ba(param_1,iVar1);
      FUN_140efa54d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140efa3f7 FUN_140efa3f7 body=80 status=ok
// SIG undefined FUN_140efa3f7(void)

void FUN_140efa3f7(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 140efa448 FUN_140efa448 body=88 status=ok
// SIG undefined FUN_140efa448(void)

undefined8 * FUN_140efa448(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140efa79e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 140efa4a0 FUN_140efa4a0 body=93 status=ok
// SIG undefined FUN_140efa4a0(void)

undefined8 * FUN_140efa4a0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1403c4669(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1457c5166(param_1,iVar1);
      FUN_1457c50e8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140efa4fd FUN_140efa4fd body=80 status=ok
// SIG undefined FUN_140efa4fd(void)

void FUN_140efa4fd(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 140efa54d FUN_140efa54d body=83 status=ok
// SIG undefined FUN_140efa54d(void)

void FUN_140efa54d(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined1 *)(param_1 + lVar2) = *(undefined1 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
        FUN_1456cec3c();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140efa5a0 FUN_140efa5a0 body=282 status=ok
// SIG undefined FUN_140efa5a0(void)

void FUN_140efa5a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_140886972();
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    plVar3 = *(longlong **)(param_1 + 0x58);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x58) = 0;
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
    *(undefined1 *)(param_1 + 0x22) = 0;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x68);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72((longlong *)(param_1 + 0x68),0,0,0x10);
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_14480f766(*(longlong *)(param_1 + 0x28) + 0x88);
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    plVar3 = *(longlong **)(param_1 + 0x30);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
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
    *(undefined1 *)(param_1 + 0x21) = 0;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72((longlong *)(param_1 + 0x40),0,0,0x10);
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  return;
}



// FUNCTION 140efa6ba FUN_140efa6ba body=228 status=ok
// SIG undefined FUN_140efa6ba(void)

void FUN_140efa6ba(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140efa79e FUN_140efa79e body=228 status=ok
// SIG undefined FUN_140efa79e(void)

void FUN_140efa79e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140efa882 FUN_140efa882 body=314 status=ok
// SIG undefined FUN_140efa882(void)

void FUN_140efa882(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140efa8f0;
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
LAB_140efa8f0:
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



// FUNCTION 140efa9bc FUN_140efa9bc body=314 status=ok
// SIG undefined FUN_140efa9bc(void)

void FUN_140efa9bc(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140efaa2a;
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
LAB_140efaa2a:
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



// FUNCTION 140efaaf6 FUN_140efaaf6 body=395 status=ok
// SIG undefined FUN_140efaaf6(void)

void FUN_140efaaf6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar5 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1447a71f6(&local_58,uVar5 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  if (&local_58 == param_1) {
    uVar5 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_144760e21(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_58;
    local_58 = 0;
    *(int *)(param_1 + 1) = (int)uStack_50;
    *(uint *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    uStack_50 = 0;
    uVar5 = 0;
  }
  FUN_144760e21(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140efac82 FUN_140efac82 body=2704 status=ok
// SIG undefined FUN_140efac82(void)

longlong * FUN_140efac82(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  int *piVar9;
  undefined1 *puVar10;
  uint *puVar11;
  undefined8 ****ppppuVar12;
  longlong lVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  byte local_179;
  undefined8 local_178;
  longlong *local_170;
  uint *local_168;
  longlong local_160;
  longlong local_158;
  int local_150;
  undefined4 uStack_14c;
  ushort local_138;
  byte local_130;
  uint local_128;
  undefined4 uStack_124;
  longlong *local_118;
  ushort local_110;
  undefined6 uStack_10e;
  byte local_108;
  undefined4 local_100 [2];
  char local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined4 local_d0 [2];
  undefined1 local_c8 [48];
  undefined1 *local_98;
  int local_90;
  undefined8 ***local_88 [3];
  ushort local_70;
  byte local_68;
  undefined8 ***local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  local_188 = param_2;
  local_178 = param_4;
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    puVar11 = *(uint **)(param_1 + 0x30);
    local_168 = puVar11 + (longlong)*(int *)(param_1 + 0x38) * 0x58;
    local_170 = param_3;
    do {
      if (*(undefined8 *****)(puVar11 + 2) == (undefined8 ****)0x0) {
LAB_140efaf2d:
        uVar14 = local_178;
        uVar6 = *puVar11;
        if ((uVar6 & 1) != 0) {
          lVar7 = FUN_140efb713(puVar11 + 8,local_178);
          if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar7);
          }
          *local_188 = lVar7;
          uVar6 = *puVar11;
        }
        if ((uVar6 & 2) != 0) {
          lVar7 = FUN_140efb713(puVar11 + 0xe,uVar14);
          if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar7);
          }
          local_188[1] = lVar7;
          uVar6 = *puVar11;
        }
        if ((uVar6 & 4) != 0) {
          lVar7 = FUN_140efb713(puVar11 + 0x14,uVar14);
          if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar7);
          }
          local_188[2] = lVar7;
          uVar6 = *puVar11;
          uVar14 = local_178;
        }
        if ((uVar6 & 8) != 0) {
          lVar7 = FUN_140efb713(puVar11 + 0x1a,uVar14);
          if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar7);
          }
          local_188[3] = lVar7;
          uVar6 = *puVar11;
        }
        if ((uVar6 & 0x10) != 0) {
          lVar7 = FUN_140efb713(puVar11 + 0x20,uVar14);
          if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar7);
          }
          local_188[4] = lVar7;
          uVar6 = *puVar11;
        }
        if ((uVar6 & 0x20) != 0) {
          lVar7 = FUN_140efb713(puVar11 + 0x26,uVar14);
          if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar7);
          }
          local_188[5] = lVar7;
          uVar6 = *puVar11;
        }
        if ((uVar6 & 0x40) != 0) {
          lVar7 = FUN_140efb713(puVar11 + 0x2c,uVar14);
          if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar7);
          }
          local_188[6] = lVar7;
          uVar6 = *puVar11;
        }
        if ((char)uVar6 < '\0') {
          lVar7 = FUN_140efb713(puVar11 + 0x32,uVar14);
          if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar7);
          }
          local_188[7] = lVar7;
          uVar6 = *puVar11;
        }
        if ((uVar6 >> 8 & 1) != 0) {
          lVar7 = FUN_140efb713(puVar11 + 0x38,uVar14);
          if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar7);
          }
          local_188[8] = lVar7;
          uVar6 = *puVar11;
        }
        if ((uVar6 >> 9 & 1) != 0) {
          lVar7 = FUN_140efb713(puVar11 + 0x3e,uVar14);
          if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar7);
          }
          local_188[9] = lVar7;
          uVar6 = *puVar11;
        }
        if ((uVar6 >> 10 & 1) != 0) {
          lVar7 = FUN_140efb713(puVar11 + 0x44,uVar14);
          if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar7);
          }
          local_188[10] = lVar7;
          uVar6 = *puVar11;
          uVar14 = local_178;
        }
        if ((uVar6 >> 0xb & 1) != 0) {
          lVar7 = FUN_140efb713(puVar11 + 0x4a,uVar14);
          if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar7);
          }
          local_188[0xb] = lVar7;
          uVar6 = *puVar11;
        }
        if ((uVar6 >> 0xc & 1) != 0) {
          local_188[0xc] = *(longlong *)(puVar11 + 0x50);
        }
        if ((uVar6 >> 0xd & 1) != 0) {
          local_188[0xd] = *(longlong *)(puVar11 + 0x52);
        }
      }
      else {
        lVar7 = *(longlong *)(puVar11 + 6);
        if (lVar7 == 0) {
          local_88[0] = *(undefined8 *****)(puVar11 + 2);
          FUN_1446dcdd4(&local_128,local_88);
          lVar7 = FUN_1448fdc6e(&local_128);
          if (CONCAT62(uStack_10e,local_110) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(puVar11 + 6) = lVar7;
        }
        lVar3 = param_3[1];
        if ((longlong)(int)lVar3 != 0) {
          local_160 = *param_3;
          lVar13 = 0;
          bVar15 = false;
          do {
            lVar1 = *(longlong *)(local_160 + lVar13);
            if (lVar1 != 0) {
              local_128 = local_128 & 0xffffff00;
              local_100[0] = 0;
              FUN_1456bb102(&local_128,lVar1);
              local_f8 = '\0';
              local_d0[0] = 0;
              FUN_1400606f6(local_c8,lVar7,&local_128);
              FUN_1448173f8(local_d0);
              if (local_f8 != '\0') {
                if (local_f8 == '\x01') {
                  local_f0 = 0;
                }
                else if ((local_f8 == '\x03') && (local_e8 != (longlong *)0x0)) {
                  LOCK();
                  piVar9 = (int *)((longlong)local_e8 + 0xc);
                  *piVar9 = *piVar9 + -1;
                  UNLOCK();
                  if (*piVar9 == 0) {
                    (**(code **)(*local_e8 + 0x10))();
                  }
                }
                local_f8 = '\0';
              }
              local_158 = lVar13;
              FUN_1448173f8(local_100);
              if (((char)local_128 == '\x03') && (local_118 != (longlong *)0x0)) {
                LOCK();
                piVar9 = (int *)((longlong)local_118 + 0xc);
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if (*piVar9 == 0) {
                  (**(code **)(*local_118 + 0x10))();
                }
              }
              puVar10 = local_98;
              if (local_98 == (undefined1 *)0x0) {
                puVar10 = local_c8;
              }
              if (local_90 < 1) {
                puVar10 = &DAT_14c9a40e0;
              }
              local_128 = local_128 & 0xffffff00;
              local_100[0] = 0;
              FUN_1456bb102(&local_128,lVar1);
              cVar4 = FUN_140308e2a(puVar10,&local_128);
              FUN_1448173f8(local_100);
              if (((char)local_128 == '\x03') && (local_118 != (longlong *)0x0)) {
                LOCK();
                piVar9 = (int *)((longlong)local_118 + 0xc);
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if (*piVar9 == 0) {
                  (**(code **)(*local_118 + 0x10))();
                }
              }
              if (cVar4 == '\0') {
                local_128 = local_128 & 0xffffff00;
                local_100[0] = 0;
                FUN_1456bb102(&local_128,lVar1);
                local_f8 = '\0';
                local_d0[0] = 0;
                FUN_1400606f6(local_88,lVar7,&local_128);
                ppppuVar12 = (undefined8 ****)local_58;
                if ((undefined8 ****)local_58 == (undefined8 ****)0x0) {
                  ppppuVar12 = local_88;
                }
                if (local_50 < 1) {
                  ppppuVar12 = (undefined8 ****)&DAT_14c9a40e0;
                }
                FUN_1400603ec(&local_150,lVar7,ppppuVar12);
                ppppuVar12 = (undefined8 ****)local_58;
                if ((undefined8 ****)local_58 == (undefined8 ****)0x0) {
                  ppppuVar12 = local_88;
                }
                FUN_1446fdf58(ppppuVar12,local_50);
                if ((undefined8 ****)local_58 != (undefined8 ****)0x0) {
                  FUN_1400020a8();
                }
                if (local_130 == 1) {
                  bVar16 = local_150 != 0;
                  bVar5 = 1;
                }
                else {
                  FUN_1400b56fe(local_88,&local_150,1);
                  bVar16 = local_68 != 0;
                  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120)
                                     );
                  bVar5 = (int)local_88[0] != 0;
                  if (pcVar2 != (code *)0x0) {
                    ppppuVar12 = local_88;
                    if (0x18 < local_70) {
                      ppppuVar12 = (undefined8 ****)local_88[0];
                    }
                    local_179 = (int)local_88[0] != 0;
                    (*pcVar2)(ppppuVar12);
                    bVar5 = local_179;
                  }
                  if (0x18 < local_70) {
                    FUN_1400020a8(local_88[0]);
                  }
                  bVar16 = (bool)(bVar16 & bVar5);
                  bVar5 = local_130;
                }
                pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar5 * 0x120));
                if (pcVar2 != (code *)0x0) {
                  piVar9 = &local_150;
                  if (0x18 < local_138) {
                    piVar9 = (int *)CONCAT44(uStack_14c,local_150);
                  }
                  (*pcVar2)(piVar9);
                }
                if (0x18 < local_138) {
                  FUN_1400020a8(CONCAT44(uStack_14c,local_150));
                }
                FUN_1448173f8(local_d0);
                if (local_f8 != '\0') {
                  if (local_f8 == '\x01') {
                    local_f0 = 0;
                  }
                  else if ((local_f8 == '\x03') && (local_e8 != (longlong *)0x0)) {
                    LOCK();
                    piVar9 = (int *)((longlong)local_e8 + 0xc);
                    *piVar9 = *piVar9 + -1;
                    UNLOCK();
                    if (*piVar9 == 0) {
                      (**(code **)(*local_e8 + 0x10))();
                    }
                  }
                  local_f8 = '\0';
                }
                FUN_1448173f8(local_100);
                if (((char)local_128 == '\x03') && (local_118 != (longlong *)0x0)) {
                  LOCK();
                  piVar9 = (int *)((longlong)local_118 + 0xc);
                  *piVar9 = *piVar9 + -1;
                  UNLOCK();
                  if (*piVar9 == 0) {
                    (**(code **)(*local_118 + 0x10))();
                  }
                }
                bVar15 = (bool)(bVar16 | bVar15);
              }
              else {
                FUN_1400603ec(local_88,lVar7,puVar10);
                if (local_68 == 1) {
                  bVar15 = (int)local_88[0] != 0;
                  bVar5 = 1;
                }
                else {
                  FUN_1400b56fe(&local_128,local_88,1);
                  bVar15 = local_108 != 0;
                  bVar16 = local_128 != 0;
                  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                                     (ulonglong)((uint)local_108 * 0x120));
                  if (pcVar2 != (code *)0x0) {
                    puVar8 = &local_128;
                    if (0x18 < local_110) {
                      puVar8 = (uint *)CONCAT44(uStack_124,local_128);
                    }
                    (*pcVar2)(puVar8);
                  }
                  if (0x18 < local_110) {
                    FUN_1400020a8(CONCAT44(uStack_124,local_128));
                  }
                  bVar15 = bVar15 && bVar16;
                  bVar5 = local_68;
                }
                pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar5 * 0x120));
                if (pcVar2 != (code *)0x0) {
                  ppppuVar12 = local_88;
                  if (0x18 < local_70) {
                    ppppuVar12 = (undefined8 ****)local_88[0];
                  }
                  (*pcVar2)(ppppuVar12);
                }
                if (0x18 < local_70) {
                  FUN_1400020a8(local_88[0]);
                }
              }
              puVar10 = local_98;
              if (local_98 == (undefined1 *)0x0) {
                puVar10 = local_c8;
              }
              FUN_1446fdf58(puVar10,local_90);
              if (local_98 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
              lVar13 = local_158;
              if (cVar4 != '\0') break;
            }
            lVar13 = lVar13 + 8;
          } while ((longlong)(int)lVar3 * 8 != lVar13);
          param_3 = local_170;
          if (bVar15 != false) goto LAB_140efaf2d;
        }
      }
      puVar11 = puVar11 + 0x58;
    } while (puVar11 != local_168);
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_188;
}



// FUNCTION 140efb713 FUN_140efb713 body=81 status=ok
// SIG undefined FUN_140efb713(void)

longlong FUN_140efb713(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) || (lVar1 = FUN_1404dcd0c(param_2,param_1), lVar1 != 0)) {
    lVar2 = FUN_1402576f0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140efb764 FUN_140efb764 body=2043 status=ok
// SIG undefined FUN_140efb764(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_140efb764(double *param_1,longlong param_2,uint param_3)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  double *pdVar17;
  double *pdVar18;
  double dVar19;
  double dVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar23;
  double dVar25;
  undefined1 auVar24 [16];
  double dVar26;
  double dVar27;
  double dVar29;
  double dVar30;
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auStack_2f8 [32];
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined1 local_298 [8];
  uint local_290;
  longlong local_288;
  uint local_280;
  undefined4 local_27c;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  double dVar2;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  if (((int)param_3 < 0) || (uVar16 = (ulonglong)param_3, *(int *)(param_2 + 0x28) <= (int)param_3))
  {
    pdVar17 = (double *)&DAT_14c846480;
    for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
      *param_1 = *pdVar17;
      pdVar17 = pdVar17 + 1;
      param_1 = param_1 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_2f8);
  }
  pdVar17 = (double *)&DAT_14c846480;
  pdVar18 = param_1;
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *pdVar18 = *pdVar17;
    pdVar17 = pdVar17 + 1;
    pdVar18 = pdVar18 + 1;
  }
  local_27c = 0xffffffff;
  local_288 = param_2;
  local_280 = param_3;
  FUN_1410670e6(&local_288,local_298);
  dVar27 = *param_1;
  dVar30 = param_1[1];
  if (local_290 != param_3) {
    auVar24 = *(undefined1 (*) [16])(param_1 + 2);
    dVar26 = param_1[4];
    dVar29 = param_1[5];
    dVar19 = param_1[6];
    dVar22 = param_1[7];
    auVar31 = *(undefined1 (*) [16])(param_1 + 8);
    dVar23 = param_1[10];
    dVar25 = param_1[0xb];
    do {
      auVar32 = _DAT_149934d80;
      lVar12 = *(longlong *)(param_2 + 0x30);
      iVar15 = (int)uVar16;
      lVar14 = (longlong)iVar15 * 0x60;
      pdVar17 = (double *)(lVar12 + lVar14);
      auVar38 = *(undefined1 (*) [16])(lVar12 + 0x40 + lVar14);
      dVar6 = auVar38._0_8_;
      dVar45 = auVar38._8_8_;
      auVar39 = *(undefined1 (*) [16])(lVar12 + 0x50 + lVar14);
      dVar43 = auVar39._0_8_;
      dVar4 = auVar39._8_8_;
      auVar38 = minpd(auVar31,auVar38);
      auVar41._8_8_ = dVar25;
      auVar41._0_8_ = dVar23;
      auVar41 = minpd(auVar41,auVar39);
      auVar39._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
      auVar39._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
      iVar11 = movmskpd((int)lVar12,auVar39);
      auVar38._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
      auVar38._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
      uVar13 = movmskpd((int)lVar14,auVar38);
      dVar46 = auVar24._0_8_;
      dVar47 = auVar24._8_8_;
      local_2c8._0_8_ = auVar31._0_8_;
      local_2c8._8_8_ = auVar31._8_8_;
      local_2d8 = dVar23;
      dStack_2d0 = dVar25;
      local_2c8 = auVar31;
      if ((uVar13 & 0x3fffffff) == 0 && iVar11 == 0) {
        dVar7 = *pdVar17;
        dVar8 = pdVar17[1];
        dVar9 = pdVar17[2];
        dVar10 = pdVar17[3];
        dVar1 = pdVar17[3];
        dVar2 = pdVar17[3];
        dVar44 = *pdVar17 * dVar30;
        dVar5 = *pdVar17 * dVar27;
        dVar37 = pdVar17[1];
        dVar40 = pdVar17[1];
        dVar33 = dVar27 * dVar37;
        dVar35 = dVar30 * dVar40;
        dVar3 = pdVar17[2];
        dVar42 = pdVar17[2];
        dVar34 = dVar27 * dVar42;
        dVar27 = dVar30 * dVar3 * -1.0 + dVar46 * dVar37 + dVar47 * *pdVar17 * 1.0 + dVar27 * dVar1;
        dVar30 = dVar34 * 1.0 + dVar47 * dVar40 + dVar46 * *pdVar17 * -1.0 + dVar30 * dVar2;
        dVar26 = dVar26 * dVar6;
        dVar29 = dVar29 * dVar45;
        dVar19 = dVar19 * dVar43;
        dVar22 = dVar22 * dVar4;
        dVar34 = dVar29 * dVar7 - dVar26 * dVar8;
        dVar36 = dVar19 * dVar8 - dVar29 * dVar9;
        dVar37 = dVar26 * dVar9 - dVar19 * dVar7;
        dVar40 = dVar22 * dVar10 - dVar22 * dVar10;
        dVar36 = dVar36 + dVar36;
        dVar37 = dVar37 + dVar37;
        dVar34 = dVar34 + dVar34;
        dVar40 = dVar40 + dVar40;
        auVar31._0_8_ = (double)local_2c8._0_8_ * dVar6;
        auVar31._8_8_ = (double)local_2c8._8_8_ * dVar45;
        dVar22 = (dVar40 * dVar10 - dVar40 * dVar10) + dVar2 * dVar40 + dVar22 + pdVar17[7];
        dVar23 = dVar23 * dVar43;
        dVar25 = dVar25 * dVar4;
        auVar24._8_8_ = dVar46 * dVar42 * -1.0 + ((dVar5 * -1.0 + dVar47 * dVar2) - dVar35);
        auVar24._0_8_ = dVar47 * dVar3 * 1.0 + ((dVar44 * 1.0 + dVar46 * dVar1) - dVar33);
        dVar19 = (dVar37 * dVar7 - dVar8 * dVar36) + dVar1 * dVar34 + dVar19 + pdVar17[6];
        dVar26 = (dVar34 * dVar8 - dVar9 * dVar37) + dVar1 * dVar36 + dVar26 + pdVar17[4];
        dVar29 = (dVar36 * dVar9 - dVar34 * dVar7) + dVar2 * dVar37 + dVar29 + pdVar17[5];
      }
      else {
        dVar37 = *pdVar17;
        dVar40 = pdVar17[1];
        dVar3 = pdVar17[2];
        dVar1 = dVar40 + dVar40;
        dVar42 = dVar3 + dVar3;
        dVar2 = dVar37 * (dVar37 + dVar37);
        dVar22 = pdVar17[3];
        dVar34 = dVar42 * dVar22;
        dVar44 = (dVar37 + dVar37) * pdVar17[3];
        dVar22 = dVar1 * dVar22;
        local_2a8 = dVar23 * dVar43;
        dStack_2a0 = dVar25 * dVar4;
        local_188 = (1.0 - (dVar2 + dVar40 * dVar1)) * dVar43;
        dVar4 = (dVar42 * dVar40 - dVar44) * dVar43;
        local_2b8 = (double)local_2c8._0_8_ * dVar6;
        dStack_2b0 = (double)local_2c8._8_8_ * dVar45;
        local_1d8 = (1.0 - (dVar3 * dVar42 + dVar40 * dVar1)) * dVar6;
        dVar25 = (1.0 - (dVar3 * dVar42 + dVar2)) * dVar45;
        dStack_1d0 = (dVar1 * dVar37 + dVar34) * dVar6;
        local_1a8 = (dVar42 * dVar40 + dVar44) * dVar45;
        local_1c8 = (*pdVar17 * dVar42 - dVar22) * dVar6;
        uStack_1c0 = 0;
        local_1b8._8_4_ = SUB84(dVar25,0);
        local_1b8._0_8_ = (dVar1 * dVar37 - dVar34) * dVar45;
        local_1b8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
        uStack_1a0 = 0;
        local_198._8_4_ = SUB84(dVar4,0);
        local_198._0_8_ = (dVar22 + *pdVar17 * dVar42) * dVar43;
        local_198._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        uStack_180 = 0;
        local_178 = pdVar17[4];
        dStack_170 = pdVar17[5];
        local_168 = pdVar17[6];
        uStack_160 = 0x3ff0000000000000;
        dVar22 = dVar30 + dVar30;
        dVar43 = dVar46 + dVar46;
        dVar25 = dVar27 * (dVar27 + dVar27);
        local_208 = (1.0 - (dVar25 + dVar30 * dVar22)) * dVar23;
        dVar45 = (dVar27 + dVar27) * dVar47;
        dVar6 = (dVar43 * dVar30 - dVar45) * dVar23;
        local_258 = ((double)DAT_149934d80 - (dVar46 * dVar43 + dVar30 * dVar22)) *
                    (double)local_2c8._0_8_;
        dVar25 = (DAT_149934d80._8_8_ - (dVar46 * dVar43 + dVar25)) * (double)local_2c8._8_8_;
        dStack_250 = (dVar22 * dVar27 + dVar43 * dVar47) * (double)local_2c8._0_8_;
        local_228 = (dVar43 * dVar30 + dVar45) * (double)local_2c8._8_8_;
        local_248 = (dVar27 * dVar43 - dVar22 * dVar47) * (double)local_2c8._0_8_;
        uStack_240 = 0;
        local_238._8_4_ = SUB84(dVar25,0);
        local_238._0_8_ = (dVar22 * dVar27 - dVar43 * dVar47) * (double)local_2c8._8_8_;
        local_238._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
        uStack_220 = 0;
        local_218._8_4_ = SUB84(dVar6,0);
        local_218._0_8_ = (dVar22 * dVar47 + dVar27 * dVar43) * dVar23;
        local_218._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        uStack_200 = 0;
        uStack_1e0 = 0x3ff0000000000000;
        local_1f8 = dVar26;
        dStack_1f0 = dVar29;
        local_1e8 = dVar19;
        FUN_1447fea8d(&local_158);
        FUN_144a1c686(&local_158,0x3e45798ee0000000);
        dVar25 = dStack_2a0;
        dVar23 = local_2a8;
        auVar31._8_8_ = dStack_2b0;
        auVar31._0_8_ = local_2b8;
        auVar20._8_8_ = -(ulonglong)(0.0 <= dStack_2b0);
        auVar20._0_8_ = -(ulonglong)(0.0 <= local_2b8);
        auVar24 = blendvpd(_DAT_149936790,auVar32,auVar20);
        dVar27 = (double)(~-(ulonglong)(0.0 <= local_2a8) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= local_2a8) & 0x3ff0000000000000);
        dVar30 = auVar24._0_8_;
        local_148 = local_148 * dVar30;
        local_150 = local_150 * dVar30;
        local_158 = local_158 * dVar30;
        dVar30 = auVar24._8_8_;
        local_128 = local_128 * dVar30;
        local_130 = local_130 * dVar30;
        local_138 = dVar30 * local_138;
        local_108 = local_108 * dVar27;
        local_110 = local_110 * dVar27;
        local_118 = dVar27 * local_118;
        FUN_14481fd10(&local_278,&local_158);
        dVar27 = local_268 * local_268 + local_278 * local_278;
        dVar30 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
        auVar28._0_8_ = dVar27 + dVar30;
        auVar28._8_8_ = dVar27 + dVar30;
        auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
        auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
        auVar24 = sqrtpd(auVar28,auVar28);
        auVar38 = divpd(auVar32,auVar24);
        auVar32._0_8_ = auVar38._0_8_ * local_268;
        auVar32._8_8_ = auVar38._8_8_ * dStack_260;
        auVar24 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar32,auVar21);
        dVar27 = (double)((ulonglong)(local_278 * auVar38._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_));
        dVar30 = (double)((ulonglong)(dStack_270 * auVar38._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_));
        dVar22 = 0.0;
        dVar19 = local_e8;
        dVar26 = local_f8;
        dVar29 = dStack_f0;
      }
      if ((iVar15 < 0) || (*(int *)(param_2 + 0x28) <= iVar15)) {
LAB_140efba79:
        uVar16 = 0xffffffff;
      }
      else {
        uVar13 = *(uint *)(*(longlong *)(param_2 + 0x20) + 8 + uVar16 * 0xc);
        uVar16 = (ulonglong)uVar13;
        if ((int)uVar13 < 0 || *(int *)(param_2 + 0x28) <= (int)uVar13) goto LAB_140efba79;
      }
    } while ((uint)uVar16 != local_290);
    *(undefined1 (*) [16])(param_1 + 8) = auVar31;
    param_1[10] = dVar23;
    param_1[0xb] = dVar25;
    *(undefined1 (*) [16])(param_1 + 2) = auVar24;
    param_1[4] = dVar26;
    param_1[5] = dVar29;
    param_1[6] = dVar19;
    param_1[7] = dVar22;
  }
  *param_1 = dVar27;
  param_1[1] = dVar30;
  if ((local_d0 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140efbf65 FUN_140efbf65 body=2887 status=ok
// SIG undefined FUN_140efbf65(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_140efbf65(undefined1 (*param_1) [16],longlong param_2,longlong *param_3,longlong *param_4,
             float param_5)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  int iVar17;
  undefined4 uVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  undefined1 (*pauVar26) [16];
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  int iVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar37;
  undefined1 auVar36 [16];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar42 [16];
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar51;
  undefined1 auVar50 [16];
  undefined1 auStack_3a8 [32];
  undefined1 local_388;
  undefined1 *local_380;
  double local_370;
  undefined1 local_368 [16];
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [8];
  int local_2c0;
  longlong local_2b8;
  int local_2b0;
  int local_2ac;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  undefined1 local_27a;
  undefined1 local_279;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if ((param_2 == 0) || (lVar23 = *(longlong *)(param_2 + 0x40), lVar23 == 0)) {
    puVar24 = &DAT_14c846480;
    for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
      *(undefined8 *)*param_1 = *puVar24;
      puVar24 = puVar24 + 1;
      param_1 = (undefined1 (*) [16])(*param_1 + 8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_3a8);
  }
  puVar24 = &DAT_14c846480;
  pauVar26 = param_1;
  for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined8 *)*pauVar26 = *puVar24;
    puVar24 = puVar24 + 1;
    pauVar26 = (undefined1 (*) [16])(*pauVar26 + 8);
  }
  lVar22 = *param_3;
  iVar17 = -1;
  iVar19 = -1;
  if ((lVar22 != 0) && (*(int *)(lVar23 + 0xe8) != *(int *)(lVar23 + 0x114))) {
    uVar21 = (uint)((ulonglong)lVar22 >> 0x10);
    uVar27 = (uint)lVar22 & 0xffff;
    lVar20 = lVar23 + 0x118;
    if (*(longlong *)(lVar23 + 0x120) != 0) {
      lVar20 = *(longlong *)(lVar23 + 0x120);
    }
    iVar28 = *(int *)(lVar20 + (ulonglong)
                               (*(int *)(lVar23 + 0x128) - 1U &
                               (int)((ulonglong)lVar22 >> 0x20) + ((uint)lVar22 << 0x10 | uVar27) +
                               (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar27 >> 4)) * 4);
    iVar19 = -1;
    if (iVar28 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar23 + 0xe0) + (longlong)iVar28 * 0x14);
        if (*plVar1 == lVar22) {
          iVar19 = -1;
          if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
            iVar19 = (int)plVar1[1];
          }
          goto LAB_140efc0df;
        }
        iVar28 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar28 != -1);
      iVar19 = -1;
    }
  }
LAB_140efc0df:
  lVar22 = *param_4;
  uVar27 = (uint)lVar22;
  iVar28 = (int)((ulonglong)lVar22 >> 0x20);
  uVar21 = (uint)((ulonglong)lVar22 >> 0x10);
  if ((lVar22 != 0) && (*(int *)(lVar23 + 0xe8) != *(int *)(lVar23 + 0x114))) {
    lVar20 = lVar23 + 0x118;
    if (*(longlong *)(lVar23 + 0x120) != 0) {
      lVar20 = *(longlong *)(lVar23 + 0x120);
    }
    iVar30 = *(int *)(lVar20 + (ulonglong)
                               (*(int *)(lVar23 + 0x128) - 1U &
                               iVar28 + (uVar27 << 0x10 | uVar27 & 0xffff) +
                               (uVar21 << 0x13 | uVar21 & 0xffff) + ((uVar27 & 0xffff) >> 4)) * 4);
    if (iVar30 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar23 + 0xe0) + (longlong)iVar30 * 0x14);
        if (*plVar1 == lVar22) {
          if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
            iVar17 = (int)plVar1[1];
          }
          break;
        }
        iVar30 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar30 != -1);
    }
  }
  local_2b8 = lVar23 + 0x50;
  uVar29 = 0xffffffff;
  local_2ac = -1;
  if (iVar19 <= iVar17) {
    local_2ac = 0;
    do {
      if (iVar17 == iVar19) goto LAB_140efc1c7;
      iVar17 = *(int *)(*(longlong *)(lVar23 + 0x70) + 8 + (longlong)iVar17 * 0xc);
      local_2ac = local_2ac + 1;
    } while (iVar17 != -1);
    local_2ac = -1;
  }
LAB_140efc1c7:
  if ((lVar22 != 0) && (*(int *)(lVar23 + 0xe8) != *(int *)(lVar23 + 0x114))) {
    lVar20 = lVar23 + 0x118;
    if (*(longlong *)(lVar23 + 0x120) != 0) {
      lVar20 = *(longlong *)(lVar23 + 0x120);
    }
    iVar19 = *(int *)(lVar20 + (ulonglong)
                               (*(int *)(lVar23 + 0x128) - 1U &
                               iVar28 + (uVar27 << 0x10 | uVar27 & 0xffff) +
                               (uVar21 << 0x13 | uVar21 & 0xffff) + ((uVar27 & 0xffff) >> 4)) * 4);
    if (iVar19 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar23 + 0xe0) + (longlong)iVar19 * 0x14);
        if (*plVar1 == lVar22) {
          if ((plVar1 != (longlong *)0x0) && ((uint *)(plVar1 + 1) != (uint *)0x0)) {
            uVar29 = (ulonglong)*(uint *)(plVar1 + 1);
          }
          break;
        }
        iVar19 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar19 != -1);
    }
  }
  local_2b0 = (int)uVar29;
  uVar25 = 0xffffffff;
  if (local_2b0 < *(int *)(lVar23 + 0x78)) {
    uVar25 = uVar29;
  }
  if (local_2b0 < 0) {
    uVar25 = 0xffffffff;
  }
  FUN_140efcab2(&local_2b8,local_2c8);
  dVar38 = *(double *)*param_1;
  dVar44 = *(double *)(*param_1 + 8);
  if ((int)uVar25 != local_2c0) {
    local_370 = (double)param_5;
    auVar50 = param_1[1];
    dVar15 = *(double *)param_1[2];
    dVar16 = *(double *)(param_1[2] + 8);
    dVar13 = *(double *)param_1[3];
    dVar45 = *(double *)(param_1[3] + 8);
    dVar43 = *(double *)param_1[4];
    dVar48 = *(double *)(param_1[4] + 8);
    dVar6 = *(double *)param_1[5];
    dVar37 = *(double *)(param_1[5] + 8);
    local_338 = 0.0;
    dStack_330 = 1.0;
    do {
      local_368._8_4_ = SUB84(dVar48,0);
      local_368._0_8_ = dVar43;
      local_368._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
      local_328 = 0.0;
      dStack_320 = 0.0;
      local_318 = local_338;
      dStack_310 = dStack_330;
      local_2f8 = 0.0;
      dStack_2f0 = 0.0;
      local_308 = 0.0;
      dStack_300 = 0.0;
      local_2e8 = 1.0;
      dStack_2e0 = 1.0;
      local_2d8 = 1.0;
      dStack_2d0 = 0.0;
      local_279 = 0;
      local_380 = &local_27a;
      local_388 = 0;
      lVar22 = param_2;
      uVar18 = FUN_140efcb26(param_2,&local_328,uVar25,local_370);
      auVar34._8_8_ = dStack_2e0;
      auVar34._0_8_ = local_2e8;
      auVar40._8_8_ = dStack_2d0;
      auVar40._0_8_ = local_2d8;
      auVar33._8_8_ = dVar48;
      auVar33._0_8_ = dVar43;
      auVar34 = minpd(auVar33,auVar34);
      auVar39._8_8_ = dVar37;
      auVar39._0_8_ = dVar6;
      auVar40 = minpd(auVar39,auVar40);
      auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
      auVar35._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
      iVar19 = movmskpd(uVar18,auVar35);
      auVar41._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
      auVar41._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
      uVar21 = movmskpd((int)lVar22,auVar41);
      dVar49 = auVar50._0_8_;
      dVar51 = auVar50._8_8_;
      if ((uVar21 & 0x3fffffff) == 0 && iVar19 == 0) {
        dVar2 = local_328 * dVar44;
        dVar3 = local_328 * dVar38;
        dVar8 = dVar38 * dStack_320;
        dVar10 = dVar44 * dStack_320;
        dVar43 = dVar38 * local_318;
        dVar38 = dVar44 * local_318 * -1.0 +
                 dVar49 * dStack_320 + dVar51 * local_328 * 1.0 + dVar38 * dStack_310;
        dVar44 = dVar43 * 1.0 +
                 dVar51 * dStack_320 + dVar49 * local_328 * -1.0 + dVar44 * dStack_310;
        dVar15 = dVar15 * local_2e8;
        dVar16 = dVar16 * dStack_2e0;
        dVar13 = dVar13 * local_2d8;
        dVar45 = dVar45 * dStack_2d0;
        dVar9 = dVar16 * local_328 - dVar15 * dStack_320;
        dVar11 = dVar13 * dStack_320 - dVar16 * local_318;
        dVar46 = dVar15 * local_318 - dVar13 * local_328;
        dVar47 = dVar45 * dStack_310 - dVar45 * dStack_310;
        dVar11 = dVar11 + dVar11;
        dVar46 = dVar46 + dVar46;
        dVar9 = dVar9 + dVar9;
        dVar47 = dVar47 + dVar47;
        dVar43 = (double)local_368._0_8_ * local_2e8;
        dVar48 = (double)local_368._8_8_ * dStack_2e0;
        dVar45 = (dVar47 * dStack_310 - dVar47 * dStack_310) + dStack_310 * dVar47 + dVar45 +
                 dStack_2f0;
        dVar6 = dVar6 * local_2d8;
        dVar37 = dVar37 * dStack_2d0;
        auVar50._8_8_ = dVar49 * local_318 * -1.0 + ((dVar3 * -1.0 + dVar51 * dStack_310) - dVar10);
        auVar50._0_8_ = dVar51 * local_318 * 1.0 + ((dVar2 * 1.0 + dVar49 * dStack_310) - dVar8);
        dVar13 = (dVar46 * local_328 - dStack_320 * dVar11) + dStack_310 * dVar9 + dVar13 +
                 local_2f8;
        dVar15 = (dVar9 * dStack_320 - local_318 * dVar46) + dStack_310 * dVar11 + dVar15 +
                 local_308;
        dVar16 = (dVar11 * local_318 - dVar9 * local_328) + dStack_310 * dVar46 + dVar16 +
                 dStack_300;
      }
      else {
        local_348 = dVar6 * local_2d8;
        dStack_340 = dVar37 * dStack_2d0;
        dVar45 = dStack_320 + dStack_320;
        dVar43 = local_318 + local_318;
        dVar37 = local_328 * (local_328 + local_328);
        local_1a8 = (1.0 - (dVar37 + dStack_320 * dVar45)) * local_2d8;
        dVar48 = (local_328 + local_328) * dStack_310;
        local_1b8 = (dVar45 * dStack_310 + local_328 * dVar43) * local_2d8;
        dStack_1b0 = (dVar43 * dStack_320 - dVar48) * local_2d8;
        local_358 = (double)local_368._0_8_ * local_2e8;
        dStack_350 = (double)local_368._8_8_ * dStack_2e0;
        local_1f8 = (1.0 - (local_318 * dVar43 + dStack_320 * dVar45)) * local_2e8;
        dVar37 = (1.0 - (local_318 * dVar43 + dVar37)) * dStack_2e0;
        dStack_1f0 = (dVar45 * local_328 + dVar43 * dStack_310) * local_2e8;
        local_1c8 = (dVar43 * dStack_320 + dVar48) * dStack_2e0;
        local_1e8 = (local_328 * dVar43 - dVar45 * dStack_310) * local_2e8;
        uStack_1e0 = 0;
        local_1d8._8_4_ = SUB84(dVar37,0);
        local_1d8._0_8_ = (dVar45 * local_328 - dVar43 * dStack_310) * dStack_2e0;
        local_1d8._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = local_308;
        dStack_190 = dStack_300;
        local_188 = local_2f8;
        uStack_180 = 0x3ff0000000000000;
        dVar37 = dVar44 + dVar44;
        dVar43 = dVar49 + dVar49;
        dVar45 = dVar38 * (dVar38 + dVar38);
        local_228 = (1.0 - (dVar45 + dVar44 * dVar37)) * dVar6;
        dVar48 = (dVar38 + dVar38) * dVar51;
        local_238 = (dVar37 * dVar51 + dVar38 * dVar43) * dVar6;
        local_258 = (dVar37 * dVar38 - dVar43 * dVar51) * (double)local_368._8_8_;
        dStack_230 = (dVar43 * dVar44 - dVar48) * dVar6;
        local_278 = (1.0 - (dVar49 * dVar43 + dVar44 * dVar37)) * (double)local_368._0_8_;
        dStack_250 = (1.0 - (dVar49 * dVar43 + dVar45)) * (double)local_368._8_8_;
        dStack_270 = (dVar37 * dVar38 + dVar43 * dVar51) * (double)local_368._0_8_;
        local_248 = (dVar43 * dVar44 + dVar48) * (double)local_368._8_8_;
        local_268 = (dVar38 * dVar43 - dVar37 * dVar51) * (double)local_368._0_8_;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218._8_4_ = SUB84(dVar16,0);
        local_218._0_8_ = dVar15;
        local_218._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        local_208._8_4_ = 0;
        local_208._0_8_ = dVar13;
        local_208._12_4_ = 0x3ff00000;
        FUN_1447fea8d(&local_178);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        dVar37 = dStack_340;
        dVar6 = local_348;
        dVar48 = dStack_350;
        dVar43 = local_358;
        auVar50 = _DAT_149934d80;
        auVar31._8_8_ = -(ulonglong)(0.0 <= dStack_350);
        auVar31._0_8_ = -(ulonglong)(0.0 <= local_358);
        auVar34 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar31);
        dVar38 = (double)(~-(ulonglong)(0.0 <= local_348) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= local_348) & 0x3ff0000000000000);
        dVar44 = auVar34._0_8_;
        local_168 = local_168 * dVar44;
        local_170 = local_170 * dVar44;
        local_178 = local_178 * dVar44;
        dVar44 = auVar34._8_8_;
        local_148 = local_148 * dVar44;
        local_150 = local_150 * dVar44;
        local_158 = dVar44 * local_158;
        local_128 = local_128 * dVar38;
        local_130 = local_130 * dVar38;
        local_138 = dVar38 * local_138;
        FUN_14481fd10(&local_2a8);
        dVar38 = local_298 * local_298 + local_2a8 * local_2a8;
        dVar44 = dStack_290 * dStack_290 + dStack_2a0 * dStack_2a0;
        auVar36._0_8_ = dVar38 + dVar44;
        auVar36._8_8_ = dVar38 + dVar44;
        auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
        auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
        auVar34 = sqrtpd(auVar36,auVar36);
        auVar34 = divpd(auVar50,auVar34);
        auVar42._0_8_ = auVar34._0_8_ * local_298;
        auVar42._8_8_ = auVar34._8_8_ * dStack_290;
        auVar50 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar42,auVar32);
        dVar38 = (double)((ulonglong)(local_2a8 * auVar34._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
        dVar44 = (double)((ulonglong)(dStack_2a0 * auVar34._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
        dVar45 = 0.0;
        dVar13 = local_108;
        dVar15 = local_118;
        dVar16 = dStack_110;
      }
      if (((int)uVar25 < 0) || (*(int *)(lVar23 + 0x78) <= (int)uVar25)) {
LAB_140efc671:
        uVar25 = 0xffffffff;
      }
      else {
        uVar21 = *(uint *)(*(longlong *)(lVar23 + 0x70) + 8 + uVar25 * 0xc);
        uVar25 = (ulonglong)uVar21;
        if (((int)uVar21 < 0) || (*(int *)(lVar23 + 0x78) <= (int)uVar21)) goto LAB_140efc671;
      }
    } while ((int)uVar25 != local_2c0);
    auVar4._8_4_ = SUB84(dVar48,0);
    auVar4._0_8_ = dVar43;
    auVar4._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
    param_1[4] = auVar4;
    auVar5._8_4_ = SUB84(dVar37,0);
    auVar5._0_8_ = dVar6;
    auVar5._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
    param_1[5] = auVar5;
    param_1[1] = auVar50;
    auVar14._8_4_ = SUB84(dVar16,0);
    auVar14._0_8_ = dVar15;
    auVar14._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    param_1[2] = auVar14;
    auVar12._8_4_ = SUB84(dVar45,0);
    auVar12._0_8_ = dVar13;
    auVar12._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
    param_1[3] = auVar12;
  }
  auVar7._8_4_ = SUB84(dVar44,0);
  auVar7._0_8_ = dVar38;
  auVar7._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
  *param_1 = auVar7;
  if ((local_f0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140efcab2 FUN_140efcab2 body=116 status=ok
// SIG undefined FUN_140efcab2(void)

void FUN_140efcab2(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  
  iVar7 = *(int *)((longlong)param_1 + 0xc);
  if (iVar7 == -1) {
    *param_2 = *param_1;
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    return;
  }
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = *param_1;
  *param_2 = lVar3;
  uVar2 = *(uint *)(lVar3 + 0x28);
  uVar4 = 0xffffffff;
  if ((int)uVar1 < (int)uVar2) {
    uVar4 = uVar1;
  }
  uVar6 = (ulonglong)uVar4;
  if ((int)uVar1 < 0) {
    uVar6 = 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (0 < iVar7) {
    do {
      iVar5 = (int)uVar6;
      if ((iVar5 < 0) || ((int)uVar2 <= iVar5)) break;
      uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x20) + 8 + uVar6 * 0xc);
      uVar6 = (ulonglong)uVar1;
      if (((int)uVar1 < 0) || (uVar2 <= uVar1)) {
        uVar6 = 0xffffffff;
      }
      iVar5 = (int)uVar6;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  *(int *)(param_2 + 1) = iVar5;
  return;
}



// FUNCTION 140efcb26 FUN_140efcb26 body=1224 status=ok
// SIG undefined FUN_140efcb26(void)

void FUN_140efcb26(longlong *param_1,undefined8 param_2,int param_3,double param_4,char param_5,
                  longlong *param_6)

{
  undefined1 uVar1;
  byte bVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  undefined1 uVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  char *local_100;
  float local_f8;
  undefined1 local_f4;
  longlong local_f0;
  longlong local_e8;
  float local_e0;
  uint local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  int local_c0;
  longlong local_b8;
  int local_b0;
  float local_ac;
  int local_a8;
  longlong local_a0;
  uint local_98;
  undefined1 local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((param_5 == '\0') || (*(code **)(*param_1 + 1000) == (code *)&LAB_144b202e0)) {
    plVar7 = param_1 + 0x2f;
    if (*(char *)((longlong)param_6 + 1) != '\0') {
      plVar7 = param_6;
    }
LAB_140efcbb9:
    uVar1 = (undefined1)*plVar7;
    lVar5 = param_1[0x25];
    if ((lVar5 != 0) || ((int)param_1[0x1a] == 0)) {
      bVar2 = *(byte *)(param_1 + 0x2a);
      if (*(code **)(*param_1 + 0x2c0) == (code *)&LAB_144716646) {
        if (bVar2 == 0) {
LAB_140efcbf7:
          uVar11 = 0;
        }
        else {
          cVar4 = *(char *)((longlong)param_1 + 0x151);
          if (cVar4 == '\x03') {
            if ((DAT_14cacc760 == 0) && (param_1[0x2b] == 0)) goto LAB_140efcbf7;
LAB_140efcee2:
            uVar11 = -1 < *(int *)((longlong)param_1 + 0x154);
          }
          else {
            uVar11 = 1;
            if (cVar4 != '\x01') {
              if (cVar4 == '\x04') goto LAB_140efcee2;
              if (cVar4 != '\x02') goto LAB_140efcbf7;
              if (DAT_14cacc760 == 0) {
                uVar11 = param_1[0x2b] != 0;
              }
            }
          }
        }
      }
      else {
        uVar11 = (**(code **)(*param_1 + 0x2c0))(param_1);
        lVar5 = param_1[0x25];
      }
      lVar9 = param_1[8];
      local_f0 = param_1[0x2c];
      if (local_f0 == 0) {
        if ((int)param_1[0x2e] < 1) {
          local_f0 = 0;
        }
        else {
          local_108 = param_2;
          lVar6 = FUN_144a79778(param_1);
          local_f0 = *(longlong *)(lVar6 + 0x18);
          param_2 = local_108;
        }
      }
      if (*(code **)(*param_1 + 0x2b0) == (code *)&LAB_1448725b0) {
        fVar18 = *(float *)(param_1 + 0x13);
        pcVar10 = (char *)((longlong)param_6 + 1);
      }
      else {
        local_108 = param_2;
        local_100 = (char *)((longlong)param_6 + 1);
        fVar18 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
        param_2 = local_108;
        pcVar10 = local_100;
      }
      dVar3 = (double)*(int *)((longlong)param_1 + 0x1a4);
      dVar13 = ((double)fVar18 * (double)(int)param_1[0x34]) / dVar3;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = dVar13;
      auVar15 = roundpd(auVar15,auVar15,1);
      dVar14 = auVar15._0_8_;
      dVar13 = dVar13 - dVar14;
      if (2147483647.0 <= dVar14) {
        dVar14 = 2147483647.0;
      }
      iVar8 = (int)dVar13;
      if (dVar14 <= -2147483648.0) {
        dVar14 = -2147483648.0;
      }
      fVar16 = (float)dVar13 - (float)iVar8;
      fVar12 = 0.99999994;
      fVar18 = fVar16;
      if (0.99999994 <= fVar16) {
        fVar18 = fVar12;
      }
      fVar18 = (float)(~-(uint)(0.0 < fVar16) & (uint)fVar16 | (uint)fVar18 & -(uint)(0.0 < fVar16))
               + 0.5 + -0.5;
      if (0.99999994 <= fVar18) {
        fVar18 = fVar12;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      local_a8 = (uint)(0.5 <= fVar18) + (int)dVar14 + iVar8;
      local_f8 = (float)(((double)((longlong)*(int *)((longlong)param_1 + 0x1a4) *
                                  (longlong)local_a8) +
                         (double)((ulonglong)dVar3 & 0x8000000000000000)) /
                        (double)(int)param_1[0x34]);
      local_d0 = *(undefined4 *)(lVar9 + 0x88);
      local_d8 = *(undefined8 *)(lVar9 + 0x80);
      local_c0 = (int)param_1[0x1a];
      local_c8 = param_1[0x19];
      local_b8 = param_1[0x34];
      local_98 = (uint)bVar2;
      local_e0 = (float)param_4;
      local_dc = -(uint)(local_f8 != 0.0) & (uint)(local_e0 / local_f8);
      dVar3 = ((double)(int)local_b8 * param_4) / (double)(int)((ulonglong)local_b8 >> 0x20);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = dVar3;
      auVar15 = roundpd(auVar17,auVar17,1);
      dVar13 = auVar15._0_8_;
      dVar3 = dVar3 - dVar13;
      if (2147483647.0 <= dVar13) {
        dVar13 = 2147483647.0;
      }
      if (dVar13 <= -2147483648.0) {
        dVar13 = -2147483648.0;
      }
      local_b0 = (int)dVar3;
      fVar16 = (float)dVar3 - (float)local_b0;
      local_b0 = (int)dVar13 + local_b0;
      fVar18 = fVar16;
      if (0.99999994 <= fVar16) {
        fVar18 = 0.99999994;
      }
      local_ac = (float)(~-(uint)(0.0 < fVar16) & (uint)fVar16 |
                        (uint)fVar18 & -(uint)(0.0 < fVar16)) + 0.5 + -0.5;
      if (0.99999994 <= local_ac) {
        local_ac = fVar12;
      }
      if (local_ac <= 0.0) {
        local_ac = 0.0;
      }
      plVar7 = (longlong *)param_1[0x26];
      local_f4 = uVar1;
      local_e8 = lVar5;
      local_a0 = lVar9;
      local_94 = uVar11;
      if ((plVar7 != (longlong *)0x0) && (local_c0 != 0)) {
        lVar5 = (longlong)local_c0 << 2;
        lVar9 = 0;
        do {
          if (*(int *)(local_c8 + lVar9 * 4) == param_3) {
            if ((int)lVar9 != -1) {
              (**(code **)(*plVar7 + 0x2d8))(plVar7,&local_f8,CONCAT44(0x41dfffff,fVar16),param_2);
            }
            break;
          }
          lVar9 = lVar9 + 1;
          lVar5 = lVar5 + -4;
        } while (lVar5 != 0);
      }
      goto LAB_140efce65;
    }
  }
  else {
    cVar4 = (**(code **)(*param_1 + 1000))(param_1);
    plVar7 = param_1 + 0x2f;
    if (*(char *)((longlong)param_6 + 1) != '\0') {
      plVar7 = param_6;
    }
    if (cVar4 == '\0') goto LAB_140efcbb9;
  }
  pcVar10 = (char *)((longlong)param_6 + 1);
  (**(code **)(*param_1 + 1000))(param_1);
LAB_140efce65:
  if (*pcVar10 == '\x01') {
    *pcVar10 = '\0';
  }
  if ((local_90 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140efcff0 FUN_140efcff0 body=2420 status=ok
// SIG undefined FUN_140efcff0(void)

void FUN_140efcff0(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  longlong lVar14;
  longlong *plVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined4 *puVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  int iVar23;
  byte *pbVar24;
  ulonglong uVar25;
  int iVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_3d8 [32];
  longlong local_3b8;
  int local_3ac;
  longlong local_3a8;
  longlong local_3a0;
  undefined4 local_398 [189];
  undefined4 local_a4 [23];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  plVar1 = (longlong *)(param_1 + 0x28);
  iVar26 = *(int *)(param_1 + 0x30);
  local_3b8 = param_1;
  if (1 < (longlong)iVar26) {
    lVar10 = *plVar1;
    memset(local_398,0,0x2f0);
    local_3a0 = (longlong)iVar26 * 0x5c + lVar10 + -0x5c;
    local_3a8 = lVar10;
    fVar28 = logf((float)iVar26);
    local_398[0] = (int)(longlong)(fVar28 + fVar28);
    plVar15 = &local_3a8;
    do {
      pbVar6 = (byte *)*plVar15;
      pbVar24 = (byte *)plVar15[1];
      iVar8 = (int)((ulonglong)((longlong)pbVar24 - (longlong)pbVar6) >> 2) * -0x1642c859;
      uVar25 = (ulonglong)(iVar8 + 1);
      pbVar22 = pbVar6;
      pbVar13 = pbVar6;
      pbVar21 = pbVar24;
      iVar26 = (int)plVar15[2];
      if ((int)plVar15[2] != 0) {
LAB_140efd57c:
        iVar8 = iVar26;
        if (8 < (int)(uint)uVar25) {
          pbVar13 = pbVar22 + (ulonglong)((uint)uVar25 >> 1) * 0x5c;
          puVar19 = local_a4;
          for (lVar10 = 0x17; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar19 = *(undefined4 *)pbVar13;
            pbVar13 = pbVar13 + 4;
            puVar19 = puVar19 + 1;
          }
          pbVar13 = pbVar22;
          pbVar12 = pbVar22 + (ulonglong)((uint)uVar25 >> 1) * 0x5c;
          for (lVar10 = 0x17; lVar10 != 0; lVar10 = lVar10 + -1) {
            *(undefined4 *)pbVar12 = *(undefined4 *)pbVar13;
            pbVar13 = pbVar13 + 4;
            pbVar12 = pbVar12 + 4;
          }
          puVar19 = local_a4;
          pbVar13 = pbVar22;
          for (lVar10 = 0x17; lVar10 != 0; lVar10 = lVar10 + -1) {
            *(undefined4 *)pbVar13 = *puVar19;
            puVar19 = puVar19 + 1;
            pbVar13 = pbVar13 + 4;
          }
          pbVar12 = pbVar21 + 0x5c;
          pbVar13 = pbVar22;
          do {
            pbVar18 = pbVar13 + 0x5c;
            pbVar20 = pbVar13 + 0x5c;
            do {
              pbVar13 = pbVar20;
              pbVar11 = pbVar18;
              if (pbVar21 < pbVar13) break;
              pbVar18 = pbVar11 + 0x5c;
              pbVar20 = pbVar13 + 0x5c;
            } while (*pbVar13 <= *pbVar22);
            pbVar18 = pbVar12 + -0xb8;
            do {
              pbVar20 = pbVar12;
              pbVar16 = pbVar18;
              pbVar12 = pbVar20 + -0x5c;
              if (pbVar12 <= pbVar22) break;
              pbVar18 = pbVar16 + -0x5c;
            } while (*pbVar22 <= *pbVar12);
            lVar10 = 0x17;
            pbVar18 = pbVar22;
            pbVar17 = pbVar13;
            puVar19 = local_a4;
            if (pbVar12 < pbVar13) goto code_r0x000140efd649;
            for (; lVar10 != 0; lVar10 = lVar10 + -1) {
              *puVar19 = *(undefined4 *)pbVar17;
              pbVar17 = pbVar17 + 4;
              puVar19 = puVar19 + 1;
            }
            pbVar18 = pbVar12;
            pbVar20 = pbVar13;
            for (lVar10 = 0x17; lVar10 != 0; lVar10 = lVar10 + -1) {
              *(undefined4 *)pbVar20 = *(undefined4 *)pbVar18;
              pbVar18 = pbVar18 + 4;
              pbVar20 = pbVar20 + 4;
            }
            puVar19 = local_a4;
            pbVar18 = pbVar12;
            for (lVar10 = 0x17; lVar10 != 0; lVar10 = lVar10 + -1) {
              *(undefined4 *)pbVar18 = *puVar19;
              puVar19 = puVar19 + 1;
              pbVar18 = pbVar18 + 4;
            }
          } while( true );
        }
        if (pbVar22 < pbVar21) {
          do {
            pbVar6 = pbVar22;
            if (pbVar22 + 0x5c <= pbVar21) {
              bVar7 = *pbVar22;
              pbVar24 = pbVar22 + 0x5c;
              do {
                bVar2 = *pbVar24;
                bVar27 = bVar7 < bVar2;
                if (bVar7 <= bVar2) {
                  bVar7 = bVar2;
                }
                if (bVar27) {
                  pbVar6 = pbVar24;
                }
                pbVar24 = pbVar24 + 0x5c;
              } while (pbVar24 <= pbVar21);
            }
            pbVar24 = pbVar21 + -0x5c;
            pbVar13 = pbVar6;
            puVar19 = local_a4;
            for (lVar10 = 0x17; lVar10 != 0; lVar10 = lVar10 + -1) {
              *puVar19 = *(undefined4 *)pbVar13;
              pbVar13 = pbVar13 + 4;
              puVar19 = puVar19 + 1;
            }
            pbVar13 = pbVar21;
            for (lVar10 = 0x17; lVar10 != 0; lVar10 = lVar10 + -1) {
              *(undefined4 *)pbVar6 = *(undefined4 *)pbVar13;
              pbVar13 = pbVar13 + 4;
              pbVar6 = pbVar6 + 4;
            }
            puVar19 = local_a4;
            for (lVar10 = 0x17; lVar10 != 0; lVar10 = lVar10 + -1) {
              *(undefined4 *)pbVar21 = *puVar19;
              puVar19 = puVar19 + 1;
              pbVar21 = pbVar21 + 4;
            }
            pbVar21 = pbVar24;
          } while (pbVar22 < pbVar24);
        }
        goto LAB_140efd73f;
      }
LAB_140efd75e:
      iVar26 = (int)uVar25;
      if (iVar26 != 0) {
        iVar4 = (iVar8 - (iVar8 + -1 >> 0x1f)) + -1 >> 1;
        iVar8 = iVar4;
joined_r0x000140efd782:
        do {
          iVar9 = iVar8 * 2 + 1;
          if (iVar9 < iVar26) {
            iVar23 = iVar8 * 2 + 2;
            if ((iVar23 < iVar26) &&
               (pbVar13[(longlong)iVar9 * 0x5c] <= pbVar13[(longlong)iVar23 * 0x5c])) {
              iVar9 = iVar23;
            }
            if (pbVar13[(longlong)iVar8 * 0x5c] < pbVar13[(longlong)iVar9 * 0x5c]) {
              pbVar6 = pbVar13 + (longlong)iVar8 * 0x5c;
              puVar19 = local_a4;
              for (lVar10 = 0x17; lVar10 != 0; lVar10 = lVar10 + -1) {
                *puVar19 = *(undefined4 *)pbVar6;
                pbVar6 = pbVar6 + 4;
                puVar19 = puVar19 + 1;
              }
              pbVar6 = pbVar13 + (longlong)iVar9 * 0x5c;
              pbVar24 = pbVar13 + (longlong)iVar8 * 0x5c;
              for (lVar10 = 0x17; lVar10 != 0; lVar10 = lVar10 + -1) {
                *(undefined4 *)pbVar24 = *(undefined4 *)pbVar6;
                pbVar6 = pbVar6 + 4;
                pbVar24 = pbVar24 + 4;
              }
              puVar19 = local_a4;
              pbVar6 = pbVar13 + (longlong)iVar9 * 0x5c;
              for (lVar10 = 0x17; iVar8 = iVar9, lVar10 != 0; lVar10 = lVar10 + -1) {
                *(undefined4 *)pbVar6 = *puVar19;
                puVar19 = puVar19 + 1;
                pbVar6 = pbVar6 + 4;
              }
              goto joined_r0x000140efd782;
            }
          }
          bVar27 = iVar4 != 0;
          iVar4 = iVar4 + -1;
          iVar8 = iVar4;
        } while (bVar27);
        if (1 < iVar26) {
          pbVar6 = pbVar13;
          puVar19 = local_a4;
          for (lVar10 = 0x17; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar19 = *(undefined4 *)pbVar6;
            pbVar6 = pbVar6 + 4;
            puVar19 = puVar19 + 1;
          }
          pbVar6 = pbVar13 + (uVar25 - 1) * 0x5c;
          pbVar24 = pbVar13;
          for (lVar10 = 0x17; lVar10 != 0; lVar10 = lVar10 + -1) {
            *(undefined4 *)pbVar24 = *(undefined4 *)pbVar6;
            pbVar6 = pbVar6 + 4;
            pbVar24 = pbVar24 + 4;
          }
          puVar19 = local_a4;
          pbVar6 = pbVar13 + (uVar25 - 1) * 0x5c;
          for (lVar10 = 0x17; lVar10 != 0; lVar10 = lVar10 + -1) {
            *(undefined4 *)pbVar6 = *puVar19;
            puVar19 = puVar19 + 1;
            pbVar6 = pbVar6 + 4;
          }
          uVar25 = uVar25 - 1;
          if (iVar26 != 2) {
            do {
              iVar26 = 0;
              iVar4 = 1;
              iVar8 = 0;
              do {
                iVar26 = iVar26 + 2;
                iVar9 = iVar4;
                if (((longlong)iVar26 < (longlong)uVar25) &&
                   (pbVar13[(longlong)iVar4 * 0x5c] <= pbVar13[(longlong)iVar26 * 0x5c])) {
                  iVar9 = iVar26;
                }
                if (pbVar13[(longlong)iVar9 * 0x5c] <= pbVar13[(longlong)iVar8 * 0x5c]) break;
                pbVar6 = pbVar13 + (longlong)iVar8 * 0x5c;
                puVar19 = local_a4;
                for (lVar10 = 0x17; lVar10 != 0; lVar10 = lVar10 + -1) {
                  *puVar19 = *(undefined4 *)pbVar6;
                  pbVar6 = pbVar6 + 4;
                  puVar19 = puVar19 + 1;
                }
                pbVar6 = pbVar13 + (longlong)iVar9 * 0x5c;
                pbVar24 = pbVar13 + (longlong)iVar8 * 0x5c;
                for (lVar10 = 0x17; lVar10 != 0; lVar10 = lVar10 + -1) {
                  *(undefined4 *)pbVar24 = *(undefined4 *)pbVar6;
                  pbVar6 = pbVar6 + 4;
                  pbVar24 = pbVar24 + 4;
                }
                puVar19 = local_a4;
                pbVar6 = pbVar13 + (longlong)iVar9 * 0x5c;
                for (lVar10 = 0x17; lVar10 != 0; lVar10 = lVar10 + -1) {
                  *(undefined4 *)pbVar6 = *puVar19;
                  puVar19 = puVar19 + 1;
                  pbVar6 = pbVar6 + 4;
                }
                iVar26 = iVar9 * 2;
                iVar4 = iVar9 * 2 + 1;
                iVar8 = iVar9;
              } while ((longlong)iVar4 < (longlong)uVar25);
              pbVar6 = pbVar13;
              puVar19 = local_a4;
              for (lVar10 = 0x17; lVar10 != 0; lVar10 = lVar10 + -1) {
                *puVar19 = *(undefined4 *)pbVar6;
                pbVar6 = pbVar6 + 4;
                puVar19 = puVar19 + 1;
              }
              pbVar6 = pbVar13 + (uVar25 - 1) * 0x5c;
              pbVar24 = pbVar13;
              for (lVar10 = 0x17; lVar10 != 0; lVar10 = lVar10 + -1) {
                *(undefined4 *)pbVar24 = *(undefined4 *)pbVar6;
                pbVar6 = pbVar6 + 4;
                pbVar24 = pbVar24 + 4;
              }
              puVar19 = local_a4;
              pbVar6 = pbVar13 + (uVar25 - 1) * 0x5c;
              for (lVar10 = 0x17; lVar10 != 0; lVar10 = lVar10 + -1) {
                *(undefined4 *)pbVar6 = *puVar19;
                puVar19 = puVar19 + 1;
                pbVar6 = pbVar6 + 4;
              }
              bVar27 = 2 < uVar25;
              uVar25 = uVar25 - 1;
            } while (bVar27);
          }
        }
      }
LAB_140efd73f:
      plVar15 = plVar15 + -3;
    } while (&local_3a8 <= plVar15);
  }
  lVar5 = FUN_1457c52ce(local_3b8);
  iVar26 = 0;
  lVar14 = 0;
  uVar25 = 0;
  lVar10 = local_3b8;
  do {
    iVar8 = *(int *)(lVar10 + 0x30);
    if (((longlong)iVar8 <= (longlong)uVar25) || (uVar25 < *(byte *)(*plVar1 + lVar14))) {
      if ((lVar5 == 0) || ((longlong)*(int *)(lVar5 + 0x30) <= (longlong)uVar25)) {
        FUN_140da02c4(&local_3a8);
        iVar8 = *(int *)(lVar10 + 0x30);
        *(uint *)(lVar10 + 0x30) = iVar8 + 1U;
        if (*(uint *)(lVar10 + 0x34) < iVar8 + 1U) {
          FUN_140efdca2(plVar1,iVar8);
        }
        memmove((void *)(*plVar1 + lVar14 + 0x5c),(void *)(*plVar1 + lVar14),
                (ulonglong)(uint)(iVar8 + iVar26) * 0x5c);
        puVar19 = (undefined4 *)(*plVar1 + lVar14);
        lVar10 = 0x17;
        plVar15 = &local_3a8;
      }
      else {
        lVar3 = *(longlong *)(lVar5 + 0x28);
        *(uint *)(lVar10 + 0x30) = iVar8 + 1U;
        if (*(uint *)(lVar10 + 0x34) < iVar8 + 1U) {
          FUN_140efdca2(plVar1,iVar8);
        }
        memmove((void *)(*plVar1 + lVar14 + 0x5c),(void *)(*plVar1 + lVar14),
                (ulonglong)(uint)(iVar8 + iVar26) * 0x5c);
        lVar10 = 0x17;
        plVar15 = (longlong *)(lVar3 + lVar14);
        puVar19 = (undefined4 *)(*plVar1 + lVar14);
      }
      for (; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar19 = (int)*plVar15;
        plVar15 = (longlong *)((longlong)plVar15 + 4);
        puVar19 = puVar19 + 1;
      }
      *(char *)(*plVar1 + lVar14) = (char)uVar25;
      lVar10 = local_3b8;
    }
    lVar14 = lVar14 + 0x5c;
    iVar26 = iVar26 + -1;
    uVar25 = uVar25 + 1;
  } while (lVar14 != 0x1a3c);
  FUN_140efd966(lVar10,0);
  FUN_140efd966(lVar10,1);
  FUN_140efd966(lVar10,2);
  FUN_140efd966(lVar10,3);
  FUN_140efd966(lVar10,4);
  FUN_140efd966(lVar10,5);
  FUN_140efd966(lVar10,6);
  FUN_140efd966(lVar10,7);
  FUN_140efd966(lVar10,8);
  FUN_140efd966(lVar10,9);
  FUN_140efd966(lVar10,10);
  FUN_140efd966(lVar10,0xb);
  FUN_140efd966(lVar10,0xc);
  FUN_140efd966(lVar10,0xd);
  FUN_140efd966(lVar10,0xe);
  FUN_140efd966(lVar10,0xf);
  FUN_140efd966(lVar10,0x10);
  FUN_140efd966(lVar10,0x11);
  FUN_140efd966(lVar10,0x12);
  FUN_140efd966(lVar10,0x13);
  FUN_140efd966(lVar10,0x14);
  FUN_140efd966(lVar10,0x15);
  FUN_140efd966(lVar10,0x16);
  FUN_140efd966(lVar10,0x17);
  FUN_140efd966(lVar10,0x18);
  FUN_140efd966(lVar10,0x19);
  FUN_140efd966(lVar10,0x1a);
  FUN_140efd966(lVar10,0x1b);
  FUN_140efd966(lVar10,0x1c);
  FUN_140efd966(lVar10,0x1d);
  FUN_140efd966(lVar10,0x1e);
  FUN_140efd966(lVar10,0x1f);
  FUN_140efd966(lVar10,0x20);
  FUN_140efd966(lVar10,0x21);
  FUN_140efd966(lVar10,0x22);
  FUN_140efd966(lVar10,0x23);
  FUN_140efd966(lVar10,0x24);
  FUN_140efd966(lVar10,0x25);
  FUN_140efd966(lVar10,0x26);
  FUN_140efd966(lVar10,0x27);
  FUN_140efd966(lVar10,0x28);
  FUN_140efd966(lVar10,0x29);
  FUN_140efd966(lVar10,0x2a);
  FUN_140efd966(lVar10,0x2b);
  FUN_140efd966(lVar10,0x2c);
  FUN_140efd966(lVar10,0x2d);
  FUN_140efd966(lVar10,0x2e);
  FUN_140efd966(lVar10,0x2f);
  FUN_140efd966(lVar10,0x30);
  FUN_140efd966(lVar10,0x31);
  FUN_140efd966(lVar10,0x32);
  FUN_140efd966(lVar10,0x33);
  FUN_140efd966(lVar10,0x34);
  FUN_140efd966(lVar10,0x35);
  FUN_140efd966(lVar10,0x36);
  FUN_140efd966(lVar10,0x37);
  FUN_140efd966(lVar10,0x38);
  FUN_140efd966(lVar10,0x39);
  FUN_140efd966(lVar10,0x3a);
  FUN_140efd966(lVar10,0x3b);
  FUN_140efd966(lVar10,0x3c);
  FUN_140efd966(lVar10,0x3d);
  FUN_140efd966(lVar10,0x3e);
  FUN_140efd966(lVar10,0x3f);
  FUN_140efd966(lVar10,0x40);
  FUN_140efd966(lVar10,0x41);
  FUN_140efd966(lVar10,0x42);
  FUN_140efd966(lVar10,0x43);
  FUN_140efd966(lVar10,0x44);
  FUN_140efd966(lVar10,0x45);
  FUN_140efd966(lVar10,0x46);
  FUN_140efd966(lVar10,0x47);
  FUN_140efd966(lVar10,0x48);
  if ((local_48 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000140efd649:
  for (; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar19 = *(undefined4 *)pbVar18;
    pbVar18 = pbVar18 + 4;
    puVar19 = puVar19 + 1;
  }
  pbVar18 = pbVar12;
  pbVar17 = pbVar22;
  for (lVar10 = 0x17; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined4 *)pbVar17 = *(undefined4 *)pbVar18;
    pbVar18 = pbVar18 + 4;
    pbVar17 = pbVar17 + 4;
  }
  puVar19 = local_a4;
  pbVar18 = pbVar12;
  for (lVar10 = 0x17; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined4 *)pbVar18 = *puVar19;
    puVar19 = puVar19 + 1;
    pbVar18 = pbVar18 + 4;
  }
  iVar26 = iVar8 + -1;
  pbVar20 = pbVar20 + -0xb8;
  local_3ac = iVar8;
  if ((longlong)pbVar16 - (longlong)pbVar6 < (longlong)pbVar24 - (longlong)pbVar11) {
    if (pbVar13 < pbVar21) {
      *plVar15 = (longlong)pbVar13;
      plVar15[1] = (longlong)pbVar21;
      *(int *)(plVar15 + 2) = iVar26;
      plVar15 = plVar15 + 3;
    }
    pbVar13 = pbVar22;
    pbVar24 = pbVar16;
    pbVar21 = pbVar20;
    pbVar6 = pbVar22;
    if (pbVar12 <= pbVar22 + 0x5c) goto LAB_140efd73f;
  }
  else {
    if (pbVar22 + 0x5c < pbVar12) {
      *plVar15 = (longlong)pbVar22;
      plVar15[1] = (longlong)pbVar20;
      *(int *)(plVar15 + 2) = iVar26;
      plVar15 = plVar15 + 3;
    }
    pbVar24 = pbVar21;
    pbVar6 = pbVar11;
    if (pbVar21 <= pbVar13) goto LAB_140efd73f;
  }
  iVar8 = (int)((ulonglong)((longlong)pbVar24 - (longlong)pbVar6) >> 2) * -0x1642c859;
  uVar25 = (ulonglong)(iVar8 + 1);
  pbVar22 = pbVar13;
  if (iVar26 == 0) goto LAB_140efd75e;
  goto LAB_140efd57c;
}



// FUNCTION 140efd966 FUN_140efd966 body=19 status=ok
// SIG undefined FUN_140efd966(void)

void FUN_140efd966(longlong param_1,int param_2)

{
  FUN_140efd97a((longlong)param_2 * 0x5c + *(longlong *)(param_1 + 0x28));
  return;
}



// FUNCTION 140efd97a FUN_140efd97a body=220 status=ok
// SIG undefined FUN_140efd97a(void)

void FUN_140efd97a(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = FUN_140efda56();
  if (iVar3 == 3) {
    if (0 < *(int *)(param_1 + 0xc)) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 0xc);
    }
LAB_140efda22:
    iVar3 = *(int *)(param_1 + 0x20);
    if (iVar3 < 1) goto LAB_140efd99a;
  }
  else {
    if (iVar3 != 4) goto LAB_140efd99a;
    iVar3 = *(int *)(param_1 + 0x10);
    if ((0 < iVar3) || (iVar3 = *(int *)(param_1 + 0xc), 0 < iVar3)) {
      *(int *)(param_1 + 8) = iVar3;
    }
    iVar3 = *(int *)(param_1 + 0x24);
    if (iVar3 < 1) goto LAB_140efda22;
  }
  *(int *)(param_1 + 0x1c) = iVar3;
LAB_140efd99a:
  uVar1 = (ulonglong)(*(int *)(param_1 + 0x1c) + -1 + (uint)(*(int *)(param_1 + 0x1c) == 0)) * 2 + 1
  ;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  *(int *)(param_1 + 4) = (int)lVar2;
  uVar1 = *(ulonglong *)(param_1 + 0x34);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar1 == DAT_14c892ff0) {
    if (*(ulonglong *)(param_1 + 0x3c) == (ulonglong)DAT_14c892ff4) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 1) = 2;
    }
  }
  else if (*(ulonglong *)(param_1 + 0x34) == (ulonglong)DAT_14c892ff4) {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else if (*(ulonglong *)(param_1 + 0x3c) == (ulonglong)DAT_14c892ff4) {
    *(undefined1 *)(param_1 + 1) = 3;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 4;
  }
  return;
}



// FUNCTION 140efda56 FUN_140efda56 body=587 status=ok
// SIG undefined FUN_140efda56(void)

uint FUN_140efda56(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  uint local_dc;
  longlong local_d8 [7];
  longlong local_a0;
  undefined1 local_50 [4];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (DAT_14c83e6b4 == '\0') {
    DAT_14c83e6b4 = '\x01';
    local_3c = 0;
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    local_4c = 0;
    local_e8 = &DAT_14c872ce8;
    FUN_1414d73b6(DAT_14c872ce0,L"PlatformMemoryBuckets",L"LargestMemoryBucket_MinGB");
    local_e8 = &DAT_14c872ce8;
    FUN_1414d73b6(DAT_14c872ce0,L"PlatformMemoryBuckets",L"LargerMemoryBucket_MinGB",&local_40);
    local_e8 = &DAT_14c872ce8;
    FUN_1414d73b6(DAT_14c872ce0,L"PlatformMemoryBuckets",L"DefaultMemoryBucket_MinGB",&local_44);
    local_e8 = &DAT_14c872ce8;
    FUN_1414d73b6(DAT_14c872ce0,L"PlatformMemoryBuckets",L"SmallerMemoryBucket_MinGB",&local_48);
    local_e8 = &DAT_14c872ce8;
    FUN_1414d73b6(DAT_14c872ce0,L"PlatformMemoryBuckets",L"SmallestMemoryBucket_MinGB",&local_4c);
    local_e8 = &DAT_14c872ce8;
    FUN_1414d73b6(DAT_14c872ce0,L"PlatformMemoryBuckets",L"TiniestMemoryBucket_MinGB",local_50);
    FUN_1405d5a96(local_d8);
    uVar3 = (uint)(local_d8[0] + 0x3fffffffU >> 0x1e);
    uVar2 = (uint)(local_a0 + 0x3fffffffU >> 0x1e);
    if (uVar3 < uVar2) {
      uVar2 = uVar3;
    }
    if (0 < local_48) {
      DAT_14c758620 = 3;
      if ((int)uVar2 < local_48) {
        DAT_14c758620 = (int)uVar2 < local_4c | 4;
      }
    }
    if ((0 < local_44) && (local_44 <= (int)uVar2)) {
      DAT_14c758620 = 2;
    }
    if ((0 < local_40) && (local_40 <= (int)uVar2)) {
      DAT_14c758620 = 1;
    }
    if ((0 < local_3c) && (local_3c <= (int)uVar2)) {
      DAT_14c758620 = 0;
    }
    local_dc = 0xffffffff;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar1 = FUN_141369f9a(&DAT_14c846b20,L"MemBucket=",&local_dc);
    if (cVar1 != '\0') {
      DAT_14c758620 = local_dc;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14c758620;
}



// FUNCTION 140efdca2 FUN_140efdca2 body=373 status=ok
// SIG undefined FUN_140efdca2(void)

void FUN_140efdca2(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x5c;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140efdd29;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_140efdd29:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x5c)) {
    uVar7 = uVar5 / 0x5c & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x5c,4);
  return;
}



// FUNCTION 140efde18 FUN_140efde18 body=33 status=ok
// SIG undefined FUN_140efde18(void)

void FUN_140efde18(longlong param_1)

{
  FUN_1405f1eac();
  FUN_140efde3a(param_1 + 0x3a0,param_1);
  return;
}



// FUNCTION 140efde3a FUN_140efde3a body=162 status=ok
// SIG undefined FUN_140efde3a(void)

void FUN_140efde3a(longlong *param_1,undefined8 param_2)

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
        goto LAB_140efdec7;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140efdec7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140efdedc FUN_140efdedc body=170 status=ok
// SIG undefined FUN_140efdedc(void)

void FUN_140efdedc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1c25d0;
  if (param_1[0x6e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x6d) = 0;
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  FUN_140efdf86(param_1 + 100,0);
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_140bd4e94(param_1);
  return;
}



// FUNCTION 140efdf86 FUN_140efdf86 body=515 status=ok
// SIG undefined FUN_140efdf86(void)

void FUN_140efdf86(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_140efe06b;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar6 * 0x28) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar12;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_140efe06b;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140efe06b:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar3 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140efe18a FUN_140efe18a body=765 status=ok
// SIG undefined FUN_140efe18a(void)

undefined8 * FUN_140efe18a(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar2 = local_58;
  local_50 = 3;
  *local_58 = (longlong)&PTR_LAB_14b538b00;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_58[2] = lVar6;
  *local_58 = (longlong)&PTR_FUN_14b538850;
  local_58[3] = 0;
  iVar8 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_58 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar8 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar8 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar4;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar8 = iVar4;
      }
    }
  }
  *(int *)((longlong)plVar2 + 0x1c) = iVar8;
  plVar2[4] = param_4;
  *param_2 = 0;
  if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*local_58 + 0x30))(), cVar3 == '\0')) {
    if (local_50 != 0) {
      if (local_58 == (longlong *)0x0) goto LAB_140efe336;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_140efe320;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar8 = (int)param_1[1];
      iVar4 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar4;
      if (iVar4 <= iVar8) {
        iVar4 = iVar8;
        if (0 < iVar8) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar4 = (int)param_1[1];
          } while (iVar7 < iVar4);
        }
        iVar7 = 2;
        if (2 < iVar4 * 2) {
          iVar7 = iVar4 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar8) && (*(int *)((longlong)param_1 + 0xc) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    uVar5 = 0;
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,&local_48);
      uVar5 = local_48;
    }
    *param_2 = uVar5;
    iVar8 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar8 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
      FUN_1447a71f6(param_1,iVar8);
    }
    lVar9 = *param_1;
    lVar6 = (longlong)iVar8 * 0x10;
    *(undefined8 *)(lVar9 + lVar6) = 0;
    *(undefined4 *)(lVar9 + 8 + lVar6) = 0;
    *(longlong **)(lVar9 + lVar6) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar9 + 8 + lVar6) = local_50;
LAB_140efe320:
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140efe336:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140efe504 FUN_140efe504 body=1006 status=ok
// SIG undefined FUN_140efe504(void)

void FUN_140efe504(longlong *param_1,ulonglong param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  longlong *plVar7;
  char cVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  code *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  uVar9 = param_2 & 0xffffffff;
  cVar1 = (char)param_3;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong *)param_1[0x36] == (longlong *)0x0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(*(longlong *)param_1[0x36] + 0x700))();
  }
  (**(code **)(param_1[0x76c] + 0x30))();
  cVar8 = (char)uVar9;
  if (((cVar2 != '\0') && ((char)param_1[0x2f] != '\x03')) &&
     (((char)param_1[0x112b] != cVar8 || (*(char *)((longlong)param_1 + 0x8959) != cVar1)))) {
    lVar3 = FUN_1447210f0(param_1);
    local_38._0_2_ = CONCAT11(cVar1,cVar8);
    local_38 = (code *)CONCAT44((float)(*(double *)(lVar3 + 0x6d0) -
                                       (double)*(float *)((longlong)param_1 + 0x8964)),
                                (undefined4)local_38);
    uVar4 = FUN_14477b072(param_1,DAT_14cba8080);
    (**(code **)(*param_1 + 0x248))(param_1,uVar4,&local_38);
  }
  if ((cVar8 == '\0') || (cVar8 == '\x03' && cVar1 == '\0')) {
    *(undefined1 *)(param_1 + 0x112d) = 0;
  }
  if (((char)param_1[0x112b] != cVar8) || (*(char *)((longlong)param_1 + 0x8959) != cVar1)) {
    *(char *)((longlong)param_1 + 0x895c) = cVar2;
    *(char *)(param_1 + 0x112b) = cVar8;
    *(char *)((longlong)param_1 + 0x8959) = cVar1;
    FUN_140efe908(param_1 + 0x1131,param_2 & 0xffffffff);
    if ((char)param_1[0x112b] != cVar8) goto LAB_140efe62a;
    if (cVar8 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x895c) = 0;
    }
    if (0 < (int)param_1[0xc32]) {
      plVar7 = *(longlong **)(param_1[0xc31] + 0x20);
      if ((plVar7 != (longlong *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(plVar7);
        uVar9 = CONCAT71((int7)(uVar9 >> 8),(char)param_1[0x112b]);
      }
      else if (plVar7 == (longlong *)0x0) goto LAB_140efe601;
      (**(code **)(*plVar7 + 0x8b0))(plVar7,uVar9,param_3);
    }
LAB_140efe601:
    FUN_1447f69b6();
  }
  if ((char)param_1[0x2f] == '\x03') {
    if (*(char *)((longlong)param_1 + 0x179) == '\x02') {
      (**(code **)(*(longlong *)param_1[0x2d] + 0x578))();
    }
    *(short *)(param_1 + 0x1134) = (short)param_1[0x112b];
    uVar9 = param_1[5];
    if (uVar9 < 0xffffffff00000000) {
      plVar7 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar7 = (longlong *)0x0;
      }
      (**(code **)(*plVar7 + 0x58))(plVar7,param_1,uVar9,0x50);
    }
    else {
      uVar10 = (uint)uVar9;
      if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c998088)) {
        puVar6 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar6 = DAT_14c998080;
        }
        if ((*(uint *)(puVar6 + ((uint)(uVar9 >> 3) & 0xffffffc)) >> (uVar10 & 0x1f) & 1) != 0) {
          lVar5 = DAT_14c998060 + (ulonglong)(uVar10 & 0x7fffffff) * 0x68;
          lVar3 = *(longlong *)(lVar5 + 0x18);
          if (*(longlong *)(lVar5 + 0x18) == 0) {
            lVar3 = lVar5 + 8;
          }
          *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | 0x10000;
          *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
        }
      }
    }
    lVar3 = param_1[0x78];
    if (lVar3 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_50 = &local_38;
        local_38 = FUN_141030f22;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_1459f2e4c;
        local_58 = &LAB_148c39de3;
        local_60 = &LAB_1457a9eb2;
        local_68 = &DAT_149e063b2;
        local_70 = 0;
        local_78 = 0x10000004;
        local_80 = 0x10;
        local_88 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        lVar3 = param_1[0x78];
        if (lVar3 == 0) goto LAB_140efe62a;
      }
      if ((((DAT_14cbadd90 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x10), lVar3 != 0)) &&
          (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8)
          == DAT_14cbadd90 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
      }
    }
  }
LAB_140efe62a:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140efe908 FUN_140efe908 body=162 status=ok
// SIG undefined FUN_140efe908(void)

void FUN_140efe908(longlong *param_1,undefined4 param_2)

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
        goto LAB_140efe995;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140efe995:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140efe9b8 FUN_140efe9b8 body=118 status=ok
// SIG undefined FUN_140efe9b8(void)

undefined8 * FUN_140efe9b8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5dfa60;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_14075386c(param_1 + 0x81);
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_1407538a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140efea2e FUN_140efea2e body=32 status=ok
// SIG undefined FUN_140efea2e(void)

undefined8 * FUN_140efea2e(undefined8 *param_1)

{
  FUN_140efea4e();
  *param_1 = &PTR_FUN_14bd0efb0;
  return param_1;
}



// FUNCTION 140efea4e FUN_140efea4e body=94 status=ok
// SIG undefined FUN_140efea4e(void)

undefined8 * FUN_140efea4e(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14bcd6490;
  return param_1;
}



// FUNCTION 140efeab8 FUN_140efeab8 body=262 status=ok
// SIG undefined FUN_140efeab8(void)

undefined8 * FUN_140efeab8(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"LightComponent0",1);
  uVar2 = FUN_140efebc0();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar2,0);
  FUN_140c80f9c(param_1,param_2);
  *param_1 = &PTR_FUN_14aa5af40;
  param_1[0x74] = 0;
  lVar3 = param_1[0x72];
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x74] = lVar3;
  *(undefined1 *)(lVar3 + 0x1fb) = 1;
  lVar3 = param_1[0x74];
  if ((bVar1 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = param_1[0x74];
    }
  }
  param_1[0x39] = lVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140efebc0 FUN_140efebc0 body=228 status=ok
// SIG undefined FUN_140efebc0(void)

longlong FUN_140efebc0(void)

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
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad2080 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b8aae;
    local_38 = &LAB_1479ff91f;
    local_40 = FUN_1417beea1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x450;
    FUN_14081cfa3(L"/Script/Engine",L"RectLightComponent",&DAT_14cad2080,FUN_1463bab32);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad2080;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140efecac FUN_140efecac body=57 status=ok
// SIG undefined FUN_140efecac(void)

void FUN_140efecac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9238 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9238 = FUN_140002ddd(FUN_1465d3353,uVar1,L"OakCoordinatedEffectFilterDef");
  }
  return;
}



// FUNCTION 140efece6 FUN_140efece6 body=1508 status=ok
// SIG undefined FUN_140efece6(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140efece6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined2 uVar1;
  byte *pbVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  ulonglong *puVar12;
  size_t _Size;
  undefined8 *_Dst;
  undefined *puVar13;
  bool bVar14;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  *(undefined8 *)(param_2 + 0x30) = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
    FUN_1446ddbd2();
    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0,0x208001,0,&DAT_14c951a38,
                  FUN_140b31576);
    atexit(FUN_14280cbf7);
    _Init_thread_footer(&DAT_14c951ae0);
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar9,param_2,0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar9,param_2,0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      _DAT_00000000 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar3)(uVar9,param_2,0);
    }
  }
  puVar12 = &local_48;
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 == 0) {
LAB_140eff22e:
    *(undefined1 *)(param_2 + 0xa0) = 1;
    goto LAB_140efef7c;
  }
  lVar5 = *(longlong *)(param_2 + 0x38);
  puVar13 = *(undefined **)(lVar4 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
    FUN_1446ddbd2();
    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0,0x208001,0,&DAT_14c951a38,
                  FUN_140b31576);
    atexit(FUN_14280cbf7);
    _Init_thread_footer(&DAT_14c951ae0);
  }
  if (DAT_14c951a98 == 0) {
    bVar14 = puVar13 != (undefined *)0x0;
    if (puVar13 != &DAT_14c951a90 && bVar14) {
      do {
        puVar13 = *(undefined **)(puVar13 + 0x30);
        bVar14 = puVar13 != (undefined *)0x0;
        if (puVar13 == &DAT_14c951a90) break;
      } while (puVar13 != (undefined *)0x0);
    }
    if (!bVar14) goto LAB_140eff22e;
  }
  else if ((*(ulonglong *)(puVar13 + 0x18) & DAT_14c951a98) == 0) goto LAB_140eff22e;
  plVar6 = *(longlong **)(lVar4 + 0x78);
  _Size = (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34);
  if ((int)_Size == 0) {
    _Dst = (undefined8 *)0x0;
    puVar12 = &local_48;
  }
  else {
    lVar7 = -(_Size + 0x1e & 0xfffffffffffffff0);
    _Dst = (undefined8 *)((longlong)&local_48 + lVar7);
    puVar12 = (ulonglong *)((longlong)&local_48 + lVar7);
  }
  if ((*(byte *)((longlong)plVar6 + 0x39) & 2) == 0) {
    pcVar3 = *(code **)(*plVar6 + 0x160);
    *(undefined8 *)((longlong)puVar12 + -0x28) = 0x140eff255;
    (*pcVar3)(plVar6,_Dst);
  }
  else {
    *(undefined8 *)((longlong)puVar12 + -0x28) = 0x140efee49;
    memset(_Dst,0,_Size);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951a88) {
    *(undefined8 *)((longlong)puVar12 + -0x28) = 0x140eff14f;
    FUN_144b3d300(&DAT_14c951a88);
    if (DAT_14c951a88 == -1) {
      *(undefined8 *)((longlong)puVar12 + -0x28) = 0x140eff169;
      uVar9 = FUN_140342cba();
      *(code **)((longlong)puVar12 + -8) = FUN_1468c7f1e;
      *(undefined8 *)((longlong)puVar12 + -0x10) = uVar9;
      *(undefined8 *)((longlong)puVar12 + -0x18) = 0;
      *(undefined8 *)((longlong)puVar12 + -0x20) = 0x8001;
      *(undefined8 *)((longlong)puVar12 + -0x48) = 0x140eff1ac;
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
      *(undefined8 *)((longlong)puVar12 + -0x28) = 0x140eff1bc;
      atexit(FUN_14280c819);
      *(undefined8 *)((longlong)puVar12 + -0x28) = 0x140eff1c8;
      _Init_thread_footer(&DAT_14c951a88);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    *(undefined8 *)((longlong)puVar12 + -0x28) = 0x140eff27b;
    FUN_144a5ded6(param_2,_Dst);
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar3 == FUN_14002ddda) {
      *(undefined8 *)((longlong)puVar12 + -0x28) = 0x140efeeeb;
      FUN_14002ddda(uVar9,param_2,_Dst);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      *(undefined8 *)((longlong)puVar12 + -0x28) = 0x140efefce;
      FUN_14002dfbe(uVar9,param_2,_Dst);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar9 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      *_Dst = uVar9;
    }
    else {
      *(undefined8 *)((longlong)puVar12 + -0x28) = 0x140efeeda;
      (*pcVar3)(uVar9,param_2,_Dst);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)((longlong)puVar12 + -0x28) = 0x140efef0e;
  FUN_140cf7806(plVar6,_Dst);
  if ((*(byte *)(lVar4 + 0x38) & 0x20) != 0) {
    pcVar3 = *(code **)(**(longlong **)(param_2 + 0x18) + 0x280);
    *(undefined8 *)((longlong)puVar12 + -0x28) = 0x140eff291;
    uVar10 = (*pcVar3)();
    uVar1 = *(undefined2 *)(lVar4 + 0x40);
    uVar9 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)((longlong)puVar12 + -0x28) = 0x140eff2aa;
    FUN_144a62f0c(uVar9,uVar10,uVar1);
  }
  if (lVar5 == 0) {
LAB_140eff006:
    uVar11 = 0;
  }
  else {
    *(undefined8 *)((longlong)puVar12 + -0x28) = 0x140efef37;
    iVar8 = FUN_140cf774c(lVar5,lVar4,_Dst);
    if (iVar8 == -1) goto LAB_140eff006;
    do {
      *(undefined8 *)((longlong)puVar12 + -0x28) = 0x140efef56;
      FUN_140eff2d0(lVar5,lVar4,iVar8);
      *(undefined8 *)((longlong)puVar12 + -0x28) = 0x140efef64;
      iVar8 = FUN_140cf774c(lVar5,lVar4,_Dst);
      uVar11 = 1;
    } while (iVar8 != -1);
  }
  *param_3 = uVar11;
  if ((*(byte *)((longlong)plVar6 + 0x3c) & 0x10) == 0) {
    pcVar3 = *(code **)(*plVar6 + 0x148);
    *(undefined8 *)((longlong)puVar12 + -0x28) = 0x140eff2c6;
    (*pcVar3)(plVar6,_Dst);
  }
LAB_140efef7c:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar12 + -0x28) = &UNK_140efefa6;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eff2d0 FUN_140eff2d0 body=380 status=ok
// SIG undefined FUN_140eff2d0(void)

void FUN_140eff2d0(ulonglong *param_1,longlong param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong **pplVar4;
  int iVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  undefined1 auStack_98 [32];
  int local_78;
  undefined2 *local_70;
  int local_68;
  longlong *local_60;
  ulonglong *local_58;
  int local_50;
  undefined4 local_4c;
  byte local_48;
  longlong **local_40;
  uint local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != (ulonglong *)0x0) {
    bVar1 = *(byte *)(param_2 + 0x70);
    local_4c = (**(code **)(**(longlong **)(param_2 + 0x78) + 0x178))();
    uVar3 = DAT_14cae5340;
    local_60 = *(longlong **)(param_2 + 0x78);
    local_50 = *(int *)((longlong)local_60 + 0x34);
    iVar2 = (int)param_1[1];
    local_58 = param_1;
    local_48 = bVar1;
    if (((int)param_3 < 0) || (iVar2 <= (int)param_3)) {
      iVar5 = 0;
      if (0 < iVar2) {
        iVar5 = iVar2 + -1;
      }
      FUN_1400021e4(param_2 + 0x20,&local_70);
      puVar7 = &DAT_149dfb77a;
      if (local_68 != 0) {
        puVar7 = local_70;
      }
      local_78 = iVar5;
      FUN_140002266(&local_40,
                    L"Attempted to remove an item from an invalid index from array %s [%d/%d]!",
                    puVar7,(ulonglong)param_3);
      pplVar4 = (longlong **)&DAT_149dfb77a;
      if (local_38 != 0) {
        pplVar4 = local_40;
      }
      FUN_1415b7ec4(pplVar4,3,uVar3);
      if (local_40 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      if (local_70 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if ((*(ushort *)((longlong)local_60 + 0x3b) & 0x1040) == 0) {
        if ((bVar1 & 1) == 0) {
          uVar6 = *param_1;
        }
        else {
          uVar6 = *param_1;
          if ((uVar6 & 1) != 0) {
            uVar6 = (longlong)param_1 + ((longlong)uVar6 >> 0x18);
          }
        }
        (**(code **)(*local_60 + 0x148))(local_60,(longlong)local_50 * (ulonglong)param_3 + uVar6);
      }
      local_40 = &local_60;
      local_34 = 1;
      local_38 = param_3;
      FUN_140eff44e();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eff44e FUN_140eff44e body=67 status=ok
// SIG undefined FUN_140eff44e(void)

void FUN_140eff44e(longlong param_1,longlong *param_2)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_140eff492();
  }
  else {
    FUN_1468cb346(*(undefined8 *)(param_1 + 8),(int)param_2[1],
                  *(undefined4 *)((longlong)param_2 + 0xc),*(undefined4 *)(*param_2 + 0x10),
                  *(undefined4 *)(*param_2 + 0x14),1);
  }
  return;
}



// FUNCTION 140eff492 FUN_140eff492 body=138 status=ok
// SIG undefined FUN_140eff492(void)

void FUN_140eff492(longlong *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  char param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    iVar1 = (int)param_1[1];
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      lVar3 = (longlong)param_4;
      memmove((void *)(lVar3 * param_2 + *param_1),
              (void *)(((longlong)param_3 + (longlong)param_2) * lVar3 + *param_1),iVar2 * lVar3);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 - param_3;
    if (param_6 == '\x01') {
      FUN_140eff51c(param_1,param_4,param_5);
      return;
    }
  }
  return;
}



// FUNCTION 140eff51c FUN_140eff51c body=141 status=ok
// SIG undefined FUN_140eff51c(void)

void FUN_140eff51c(longlong param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_2;
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (longlong)(int)(iVar2 - uVar1) * uVar4) || ((int)(uVar1 * 3) < iVar2 * 2)) &&
     (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * uVar4);
      uVar3 = uVar3 / uVar4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,uVar4,param_3);
    }
  }
  return;
}



// FUNCTION 140eff5ba FUN_140eff5ba body=44 status=ok
// SIG undefined FUN_140eff5ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140eff5ba(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb5426c = _DAT_14cb5426c + -1;
  *param_1 = DAT_14cb54260;
  DAT_14cb54260 = param_1;
  return;
}



// FUNCTION 140eff5e6 FUN_140eff5e6 body=106 status=ok
// SIG undefined FUN_140eff5e6(void)

void FUN_140eff5e6(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_140eff651();
  if ((cVar2 != '\0') && (plVar1 = *(longlong **)(param_1 + 0x448), plVar1 != (longlong *)0x0)) {
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    (**(code **)(*plVar1 + 0x780))(plVar1,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eff651 FUN_140eff651 body=129 status=ok
// SIG undefined FUN_140eff651(void)

ulonglong FUN_140eff651(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_1 != 0) {
    lVar1 = FUN_1403ca102();
    if (lVar1 != 0) {
      lVar1 = FUN_140d27a2a(lVar1);
      if (7 < (byte)(*(char *)(lVar1 + 0xb0) - 1U)) goto LAB_140eff680;
    }
    if (param_2 != 0) {
      lVar1 = FUN_144a5dd5e();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) {
        lVar1 = FUN_144a2f878();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) goto LAB_140eff680;
      }
    }
    uVar2 = 0;
  }
LAB_140eff680:
  return uVar2 & 0xffffffff;
}



// FUNCTION 140eff6d2 FUN_140eff6d2 body=40 status=ok
// SIG undefined FUN_140eff6d2(void)

undefined8 FUN_140eff6d2(undefined8 param_1,int param_2)

{
  FUN_140eff6fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140eff6fa FUN_140eff6fa body=99 status=ok
// SIG undefined FUN_140eff6fa(void)

void FUN_140eff6fa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a79e7a0;
  param_1[5] = &PTR_FUN_14a79eba0;
  param_1[6] = &PTR_FUN_14a79ebe0;
  param_1[7] = &PTR_FUN_14a79ec10;
  FUN_140eff75d(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_14040f240(param_1);
  return;
}



// FUNCTION 140eff75d FUN_140eff75d body=65 status=ok
// SIG undefined FUN_140eff75d(void)

void FUN_140eff75d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140eff7ac FUN_140eff7ac body=73 status=ok
// SIG undefined FUN_140eff7ac(void)

undefined8 * FUN_140eff7ac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b345010;
  FUN_1400fd473(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140eff7f6 FUN_140eff7f6 body=12 status=ok
// SIG undefined FUN_140eff7f6(void)

void FUN_140eff7f6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140eff7ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140eff802 FUN_140eff802 body=31 status=ok
// SIG undefined FUN_140eff802(void)

undefined8 FUN_140eff802(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140eff822 FUN_140eff822 body=12 status=ok
// SIG undefined FUN_140eff822(void)

void FUN_140eff822(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140eff82b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140eff82e FUN_140eff82e body=31 status=ok
// SIG undefined FUN_140eff82e(void)

undefined8 FUN_140eff82e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140eff84e FUN_140eff84e body=137 status=ok
// SIG undefined FUN_140eff84e(void)

ulonglong FUN_140eff84e(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 unaff_RBX;
  undefined7 uVar2;
  ulonglong uVar1;
  bool bVar3;
  
  bVar3 = *(longlong *)(param_1 + 0x18) != 0;
  if (*(char *)(param_3 + 9) != '\0') {
    bVar3 = *(int *)(param_1 + 0x30) < 1 && bVar3;
  }
  uVar2 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (bVar3) {
    FUN_1401d7e14(param_2,param_1 + 8);
    uVar1 = CONCAT71(uVar2,1);
  }
  else if (*(int *)(param_1 + 0x30) < 1) {
    uVar1 = 0;
  }
  else {
    FUN_140eff8d8(param_1,param_2);
    if (*(char *)(param_1 + 0x60) == '\x01') {
      FUN_14895de56(param_2);
    }
    uVar1 = CONCAT71(uVar2,1);
    if (*(char *)(param_1 + 0x61) == '\x01') {
      FUN_14014a7b6(param_2,1,0x2e);
    }
  }
  return uVar1 & 0xffffffff;
}



// FUNCTION 140eff8d8 FUN_140eff8d8 body=875 status=ok
// SIG undefined FUN_140eff8d8(void)

void FUN_140eff8d8(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  char *_Src;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  size_t _Size;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  longlong lVar12;
  code *pcVar13;
  undefined1 auStack_138 [32];
  size_t local_118;
  longlong local_110;
  longlong local_108;
  int local_100;
  longlong local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [128];
  longlong local_60;
  char *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(param_1 + 0x30) == 1) {
    lVar9 = *(longlong *)(param_1 + 0x28);
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (0x40 < (int)uVar1) {
      uVar3 = (uVar1 >> 5) * 5;
      switch(uVar1 >> 3 & 3) {
      case 1:
        uVar3 = uVar3 + 2;
        break;
      case 2:
        uVar3 = uVar3 + 3;
        break;
      case 3:
        uVar3 = uVar3 + 4;
      }
      uVar5 = (ulonglong)uVar3 + 2;
      lVar12 = uVar5 - param_2[2];
      if (uVar5 < (ulonglong)param_2[2] || lVar12 == 0) {
        puVar6 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar6 = (undefined8 *)*param_2;
        }
        param_2[2] = uVar5;
        *(undefined1 *)((longlong)puVar6 + uVar5) = 0;
      }
      else {
        FUN_14014a7b6(param_2,lVar12,0);
      }
      puVar6 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar6 = (undefined8 *)*param_2;
      }
      *(undefined1 *)puVar6 = 0x40;
      puVar6 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar6 = (undefined8 *)*param_2;
      }
      *(undefined1 *)((longlong)puVar6 + 1) = 0x55;
      puVar6 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar6 = (undefined8 *)*param_2;
      }
      iVar4 = *(int *)(lVar9 + 0x18);
      iVar8 = iVar4 + 7;
      if (-1 < iVar4) {
        iVar8 = iVar4;
      }
      lVar12 = *(longlong *)(lVar9 + 0x10);
      if (*(longlong *)(lVar9 + 0x10) == 0) {
        lVar12 = lVar9;
      }
      iVar4 = FUN_142b30a96(lVar12,iVar8 >> 3,(longlong)puVar6 + 2);
      uVar5 = (ulonglong)(iVar4 + 2);
      if ((ulonglong)param_2[2] <= uVar5 && uVar5 != param_2[2]) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_138);
      }
      puVar6 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar6 = (undefined8 *)*param_2;
      }
      param_2[2] = uVar5;
      *(undefined1 *)((longlong)puVar6 + uVar5) = 0;
      goto LAB_140effa98;
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) goto LAB_140effa98;
  puVar6 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar6 = (undefined8 *)*param_2;
  }
  param_2[2] = 0;
  *(undefined1 *)puVar6 = 0;
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x28);
    lVar12 = (longlong)*(int *)(param_1 + 0x30) << 5;
    pcVar13 = wcslen_exref;
    do {
      plVar10 = &local_108;
      if (0x40 < *(int *)(lVar9 + 0x18)) break;
      local_e8 = 0;
      lVar7 = *(longlong *)(lVar9 + 0x10);
      if (*(longlong *)(lVar9 + 0x10) == 0) {
        lVar7 = lVar9;
      }
      local_118 = CONCAT44(local_118._4_4_,*(int *)(lVar9 + 0x18));
      FUN_14493566c(&local_e8,0,lVar7,0);
      local_110 = param_2[2];
      if (local_110 == 0) {
        FUN_140002266(plVar10,L"%llu",local_e8);
        if (local_100 == 0) goto LAB_140effb4e;
LAB_140eff9c2:
        puVar11 = (undefined2 *)*plVar10;
        local_60 = 0;
        if (puVar11 != (undefined2 *)0x0) goto LAB_140eff9db;
        local_58 = (char *)0x0;
        local_50 = 0;
      }
      else {
        plVar10 = &local_f8;
        FUN_140002266(plVar10,L".%llu",local_e8);
        if (local_f0 != 0) goto LAB_140eff9c2;
LAB_140effb4e:
        puVar11 = &DAT_149dfb77a;
LAB_140eff9db:
        local_60 = 0;
        uVar2 = (*pcVar13)(puVar11);
        FUN_1449b853c(local_e0,puVar11,uVar2);
      }
      _Src = local_58;
      _Size = strlen(local_58);
      lVar7 = param_2[2];
      if ((ulonglong)(param_2[3] - lVar7) < _Size) {
        local_118 = _Size;
        FUN_140c91e84(param_2);
      }
      else {
        param_2[2] = _Size + lVar7;
        puVar6 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar6 = (undefined8 *)*param_2;
        }
        memmove((undefined1 *)(lVar7 + (longlong)puVar6),_Src,_Size);
        *(undefined1 *)((longlong)puVar6 + _Size + lVar7) = 0;
        pcVar13 = wcslen_exref;
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      lVar7 = local_f8;
      if (local_110 == 0) {
        lVar7 = local_108;
      }
      if (lVar7 != 0) {
        FUN_1400020a8();
      }
      lVar9 = lVar9 + 0x20;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
LAB_140effa98:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140effc66 FUN_140effc66 body=318 status=ok
// SIG undefined FUN_140effc66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140effc66(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar2 = (longlong *)FUN_14001cc68(0x180,0x10);
  plVar2[1] = (longlong)&DAT_100000001;
  *plVar2 = (longlong)&PTR_FUN_14b432cf0;
  FUN_140effda4(plVar2 + 2,param_1,param_3);
  plVar4 = plVar2 + 2;
  if ((plVar4 == (longlong *)0x0) ||
     (((plVar2[3] != 0 && (plVar2[4] != 0)) && (0 < *(int *)(plVar2[4] + 8))))) {
    *param_2 = plVar4;
    param_2[1] = plVar2;
    if (plVar2 == (longlong *)0x0) {
      return param_2;
    }
    goto LAB_140effcf6;
  }
  if (plVar2 == (longlong *)0x0) {
    _DAT_00000018 = 0x10;
    plVar5 = (longlong *)&DAT_00000020;
    plVar3 = _DAT_00000020;
    if (_DAT_00000020 == (longlong *)0x0) goto LAB_140effd78;
LAB_140effd60:
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    *plVar5 = (longlong)plVar2;
    if (plVar2 == (longlong *)0x0) {
LAB_140effd78:
      *param_2 = plVar4;
      param_2[1] = plVar2;
      return param_2;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    plVar2[3] = (longlong)plVar4;
    if ((longlong *)plVar2[4] != plVar2) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar2[4] != (longlong *)0x0) {
        plVar5 = plVar2 + 4;
        plVar3 = (longlong *)plVar2[4];
        goto LAB_140effd60;
      }
      plVar2[4] = (longlong)plVar2;
    }
  }
  LOCK();
  plVar5 = plVar2 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *param_2 = plVar4;
  param_2[1] = plVar2;
LAB_140effcf6:
  LOCK();
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  UNLOCK();
  LOCK();
  plVar4 = plVar2 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  return param_2;
}



// FUNCTION 140effda4 FUN_140effda4 body=561 status=ok
// SIG undefined FUN_140effda4(void)

undefined8 * FUN_140effda4(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140724c88();
  param_1[0x1a] = param_2;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *param_1 = &PTR_FUN_14b431660;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = &DAT_3f800000ffffffff;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2a] = 0;
  param_1[0x2c] = param_2;
  lVar6 = param_1[0x15];
  if (lVar6 != 0) {
    lVar4 = FUN_140efffd6();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      param_1[0x2d] = 0;
      uVar1 = *(uint *)(lVar6 + 0xc);
      *(uint *)(param_1 + 0x2d) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar3 = *(int *)(lVar6 + 0x10);
      if (iVar3 == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar3 = *(int *)(lVar6 + 0x10);
        bVar8 = iVar3 == 0;
        if (bVar8) {
          *(int *)(lVar6 + 0x10) = iVar7;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar3 = iVar7;
        }
        *(int *)((longlong)param_1 + 0x16c) = iVar3;
        if (iVar3 == 0) goto LAB_140effe6f;
      }
      else {
        *(int *)((longlong)param_1 + 0x16c) = iVar3;
      }
      uVar1 = *(uint *)(param_1 + 0x2d);
      if (((((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
           (plVar5 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar5 != (longlong *)0x0)) &&
          (((int)plVar5[2] == iVar3 && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) &&
         (lVar6 = *plVar5, lVar6 != 0)) {
        FUN_1446f470e(&local_28,L"OnLoop_Mut",1);
        lVar6 = FUN_1400796d0(*(undefined8 *)(lVar6 + 0x10),local_28,1);
        if ((lVar6 != 0) && (cVar2 = FUN_1403d2392(lVar6), cVar2 != '\0')) {
          *(undefined1 *)((longlong)param_1 + 0x15b) = 1;
        }
      }
      goto LAB_140effe6f;
    }
  }
  param_1[0x2d] = 0;
LAB_140effe6f:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140efffd6 FUN_140efffd6 body=228 status=ok
// SIG undefined FUN_140efffd6(void)

longlong FUN_140efffd6(void)

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
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb68490 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464b60d2;
    local_38 = &LAB_148744985;
    local_40 = FUN_14185ada6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxTrickScript_Loop",&DAT_14cb68490,&DAT_148744984);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb68490;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f000bc FUN_140f000bc body=40 status=ok
// SIG undefined FUN_140f000bc(void)

undefined8 FUN_140f000bc(undefined8 param_1,int param_2)

{
  FUN_140f000e4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f000e4 FUN_140f000e4 body=837 status=ok
// SIG undefined FUN_140f000e4(void)

void FUN_140f000e4(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2bf350;
  param_1[6] = &PTR_FUN_14b2bf640;
  plVar1 = param_1 + 0x81;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x85) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x84)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x84)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x7a;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x7e) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x7d)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x7d)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x73;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x77) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x76)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x76)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x61;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x65) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 100)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 100)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x59;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x5d) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x5c)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x5c)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_14079c534(param_1[0x47],*(undefined4 *)(param_1 + 0x48));
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  FUN_140f00429(param_1[0x45],*(undefined4 *)(param_1 + 0x46));
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x35;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x39) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x38)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x38)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x2d;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x31) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x30)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x30)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_14079c534(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1408ee338(param_1);
  return;
}



// FUNCTION 140f00429 FUN_140f00429 body=321 status=ok
// SIG undefined FUN_140f00429(void)

void FUN_140f00429(longlong param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  if (param_2 != 0) {
    puVar5 = (undefined8 *)(param_1 + 200);
    do {
      plVar1 = puVar5 + 8;
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar5 + 0xc) * 0x120));
      if (pcVar2 != (code *)0x0) {
        plVar4 = plVar1;
        if (0x18 < *(ushort *)(puVar5 + 0xb)) {
          plVar4 = (longlong *)*plVar1;
        }
        (*pcVar2)(plVar4);
      }
      if (0x18 < *(ushort *)(puVar5 + 0xb)) {
        FUN_1400020a8(*plVar1);
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar5 + 4) * 0x120));
      if (pcVar2 != (code *)0x0) {
        puVar3 = puVar5;
        if (0x18 < *(ushort *)(puVar5 + 3)) {
          puVar3 = (undefined8 *)*puVar5;
        }
        (*pcVar2)(puVar3);
      }
      if (0x18 < *(ushort *)(puVar5 + 3)) {
        FUN_1400020a8(*puVar5);
      }
      FUN_14079c534(puVar5[-0x12],*(undefined4 *)(puVar5 + -0x11));
      if (puVar5[-0x12] != 0) {
        FUN_1400020a8();
      }
      plVar1 = puVar5 + -0x18;
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar5 + -0x14) * 0x120));
      if (pcVar2 != (code *)0x0) {
        plVar4 = plVar1;
        if (0x18 < *(ushort *)(puVar5 + -0x15)) {
          plVar4 = (longlong *)*plVar1;
        }
        (*pcVar2)(plVar4);
      }
      if (0x18 < *(ushort *)(puVar5 + -0x15)) {
        FUN_1400020a8(*plVar1);
      }
      puVar5 = puVar5 + 0x31;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f0056a FUN_140f0056a body=138 status=ok
// SIG undefined FUN_140f0056a(void)

undefined8 * FUN_140f0056a(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x3a0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ac73ef0;
  plVar1 = plVar3 + 2;
  memset(plVar1,0,0x390);
  FUN_140f005f4(plVar1);
  *param_2 = plVar1;
  param_2[1] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 140f005f4 FUN_140f005f4 body=755 status=ok
// SIG undefined FUN_140f005f4(void)

undefined8 * FUN_140f005f4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14a1b6c40;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_38 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_38[1] = (longlong)&DAT_100000001;
  *local_38 = (longlong)&PTR_FUN_14a1b6cc0;
  local_40 = local_38 + 2;
  local_38[2] = (longlong)&PTR_FUN_14a18e458;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  local_38[0xc] = 0;
  local_38[0xd] = 0;
  local_38[0xe] = 0;
  local_38[0xf] = 0;
  local_38[0x10] = 0;
  local_38[0x11] = 0;
  local_38[0x12] = 0;
  FUN_1404e24cc(&local_40);
  FUN_1404e256a(param_1 + 0xd,&local_40);
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_14ac72de0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x3e80000000000000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3f800000;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0xffffffff00000000;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0x200000000;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0x20;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0x200000000;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0x20;
  *(undefined4 *)(param_1 + 0x55) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0x200000000;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0x20;
  *(undefined4 *)(param_1 + 0x62) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  *(undefined2 *)(param_1 + 0x66) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0x4120000041200000;
  *(undefined1 *)((longlong)param_1 + 0x33c) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f008f6 FUN_140f008f6 body=40 status=ok
// SIG undefined FUN_140f008f6(void)

undefined8 FUN_140f008f6(undefined8 param_1,int param_2)

{
  FUN_140af8b9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f0091e FUN_140f0091e body=552 status=ok
// SIG undefined FUN_140f0091e(void)

int * FUN_140f0091e(longlong *param_1,int *param_2,longlong *param_3,char *param_4)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  char cVar11;
  undefined4 uVar12;
  undefined1 auStack_68 [32];
  int local_48 [2];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a75156(param_1,local_48);
  lVar2 = *param_3;
  *local_40 = lVar2;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  uVar7 = (uint)((ulonglong)lVar2 >> 0x10);
  uVar9 = (uint)lVar2 & 0xffff;
  uVar7 = ((uint)lVar2 << 0x10 | uVar9) + (int)((ulonglong)lVar2 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar9 >> 4);
  iVar10 = *(int *)((longlong)param_1 + 0x34);
  if (((int)param_1[1] != iVar10) && ((int)param_1[1] - iVar10 != 1)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar7) * 4);
    if (iVar8 != -1) {
      lVar3 = *param_1;
      do {
        if (*(longlong *)(lVar3 + (longlong)iVar8 * 0x10) == lVar2) {
          if (iVar10 != 0) {
            *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x10) = local_48[0];
          }
          *(undefined4 *)(lVar3 + (longlong)local_48[0] * 0x10) = 0xffffffff;
          uVar12 = 0xffffffff;
          if (0 < *(int *)((longlong)param_1 + 0x34)) {
            uVar12 = (undefined4)param_1[6];
          }
          *(undefined4 *)(lVar3 + (longlong)local_48[0] * 0x10 + 4) = uVar12;
          *(int *)(param_1 + 6) = local_48[0];
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          plVar5 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar5 = (longlong *)param_1[4];
          }
          iVar10 = local_48[0] + 0x1f;
          if (-1 < local_48[0]) {
            iVar10 = local_48[0];
          }
          bVar4 = (byte)local_48[0] & 0x1f;
          puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar10 >> 5) * 4);
          *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
          cVar11 = '\x01';
          goto LAB_140f00a58;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x10 + lVar3 + 8);
      } while (iVar8 != -1);
    }
  }
  cVar11 = '\0';
  iVar8 = local_48[0];
LAB_140f00a58:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar11;
  }
  if (cVar11 == '\0') {
    uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar9 < 4) {
      iVar10 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar10 <= (int)param_1[9])) {
      uVar7 = (int)param_1[9] - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0xc) = uVar7;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
           iVar8;
    }
    else {
      *(int *)(param_1 + 9) = iVar10;
      FUN_144869b4a(param_1);
    }
  }
  *param_2 = iVar8;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140f00b48 FUN_140f00b48 body=271 status=ok
// SIG undefined FUN_140f00b48(void)

void FUN_140f00b48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4ab330;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (*(int *)((longlong)param_1 + 0xb4) != 0) {
    FUN_14472eb64(param_1 + 0x15,0);
  }
  param_1[0x1b] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xd4)) {
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80;
    FUN_1446efbd8(param_1 + 0x17,0);
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dba90(param_1 + 0xe);
  FUN_140f00c57(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dbac8(param_1);
  return;
}



// FUNCTION 140f00c57 FUN_140f00c57 body=47 status=ok
// SIG undefined FUN_140f00c57(void)

void FUN_140f00c57(longlong param_1,int param_2)

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



// FUNCTION 140f00c86 FUN_140f00c86 body=125 status=ok
// SIG undefined FUN_140f00c86(void)

void FUN_140f00c86(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  
  FUN_140f00e4c();
  if (*(char *)(param_1 + 0x170) == '\x01') {
    *(undefined1 *)(param_1 + 0x170) = 0;
  }
  cVar1 = FUN_140f00d04(param_1);
  if (param_3 == '\x02') {
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x17b) == '\0')) {
      *(undefined1 *)(param_1 + 0x17b) = 1;
    }
  }
  else if (param_3 == '\x01') {
    *(undefined1 *)(param_1 + 0x17b) = 0;
  }
  FUN_140f00d84(param_1,0);
  *(undefined2 *)(param_1 + 0x178) = 0;
  *(undefined1 *)(param_1 + 0x17a) = 0;
  *(undefined1 *)(param_1 + 0x13c) = 1;
  return;
}



// FUNCTION 140f00d04 FUN_140f00d04 body=127 status=ok
// SIG undefined FUN_140f00d04(void)

ulonglong FUN_140f00d04(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar4 = *(longlong **)(param_1 + 0xf0);
  if (plVar4 == (longlong *)0x0) {
LAB_140f00d66:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_140f00d66;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    if ((*(longlong *)(param_1 + 0xe8) == 0) ||
       (uVar3 = *(uint *)(*(longlong *)(param_1 + 0xe8) + 0x250), uVar3 < 0x15)) {
      uVar7 = 0;
    }
    else {
      uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),uVar3 == 0x200 || uVar3 - 0x15 < 10);
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 140f00d84 FUN_140f00d84 body=177 status=ok
// SIG undefined FUN_140f00d84(void)

void FUN_140f00d84(longlong param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x17c) != 0) {
    uVar1 = FUN_140343d7a();
    lVar2 = FUN_14152bd28(uVar1);
    if (lVar2 != 0) {
      if (param_2 != '\0') {
        FUN_14058d91e(*(longlong *)(param_1 + 0x48) + 0x420);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
      if (0 < *(int *)(lVar2 + 0x230)) {
        local_30 = param_1 + 0x17c;
        FUN_140b042ce(lVar2 + 0x1a8);
      }
      FUN_14483674a(lVar2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f00e4c FUN_140f00e4c body=192 status=ok
// SIG undefined FUN_140f00e4c(void)

void FUN_140f00e4c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  
  if (((((*(uint *)(*(longlong *)(param_1 + 0x48) + 0x19c) & 0xfffffffe) != 2) &&
       (*(int *)(param_1 + 0x100) != 0)) && (uVar3 = *(uint *)(param_1 + 0xfc), -1 < (int)uVar3)) &&
     ((int)uVar3 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x100))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
        (plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0)))) {
      (**(code **)(*plVar4 + 0xc38))(plVar4,0);
    }
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  plVar4 = *(longlong **)(param_1 + 0xe0);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140f00f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140f00f0c FUN_140f00f0c body=6842 status=ok
// SIG undefined FUN_140f00f0c(void)

uint * FUN_140f00f0c(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  uint uVar19;
  int iVar20;
  ulonglong *puVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  longlong *plVar26;
  uint *puVar27;
  longlong lVar28;
  longlong lVar29;
  int iVar30;
  ulonglong uVar31;
  ulonglong *puVar32;
  ulonglong uVar33;
  longlong lVar34;
  undefined1 auStack_258 [32];
  undefined1 *local_238;
  uint *local_230;
  longlong *local_228;
  uint *local_220;
  uint local_214;
  ulonglong local_210;
  uint *local_208;
  longlong *local_200;
  uint *local_1f8;
  ulonglong local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  uint local_1d0;
  int local_1cc;
  uint *local_1c8;
  longlong *local_1c0;
  int local_1b8;
  uint local_1b4;
  longlong local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  uint *local_190;
  int *local_188;
  undefined1 local_17c [4];
  undefined4 local_178 [8];
  undefined4 *local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_138 [16];
  undefined4 *local_128;
  undefined8 local_120;
  undefined4 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  int local_100;
  undefined4 local_f8 [8];
  undefined4 *local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  longlong *local_b0;
  longlong local_90;
  longlong local_78;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  plVar17 = param_3 + 0x22;
  if ((*(byte *)((longlong)param_3 + 0x10c) & 4) != 0) {
LAB_140f01a37:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_258);
  }
  if (DAT_14cb601d8 == 0) {
    uVar6 = FUN_140325e72();
    DAT_14cb601d8 = FUN_140002ddd(FUN_1464eb018,uVar6,L"GbxLevelSequencePlaybackRequest");
  }
  lVar28 = DAT_14cb601d8;
  local_1b0 = DAT_14cb601d8;
  local_1a8 = plVar17;
  local_1a0 = param_3;
  local_198 = param_2;
  FUN_140f029e8();
  local_228 = param_2;
  local_200 = param_3;
  if (param_2[0xd] == 0) {
    local_1d8 = lVar28;
    if ((undefined8 *)param_2[0xf] != (undefined8 *)0x0) {
      local_108 = *(undefined ***)param_2[0xf];
      puVar9 = (uint *)(param_3 + 0xd);
      iVar22 = (int)param_3[0x10];
      if (iVar22 == 0) {
        uVar31 = 1;
        uVar33 = 0;
        iVar25 = 0;
        iVar30 = 0;
      }
      else {
        puVar7 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar7 = puVar9;
        }
        uVar24 = *puVar7;
        if (uVar24 == 0) {
          iVar30 = iVar22 + 0x1e;
          if (-1 < iVar22 + -1) {
            iVar30 = iVar22 + -1;
          }
          uVar33 = 0;
          uVar31 = (ulonglong)(uint)(iVar30 >> 5);
          if (iVar30 >> 5 < 1) {
            uVar31 = uVar33;
          }
          iVar30 = 0;
          do {
            if (uVar31 == uVar33) goto LAB_140f01217;
            iVar30 = iVar30 + 0x20;
            uVar24 = puVar7[uVar33 + 1];
            uVar33 = uVar33 + 1;
          } while (uVar24 == 0);
        }
        else {
          uVar33 = 0;
          iVar30 = 0;
        }
        uVar31 = (ulonglong)(-uVar24 & uVar24);
        uVar1 = uVar31 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        iVar25 = (iVar30 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if (iVar22 <= iVar25) {
          iVar25 = iVar22;
        }
      }
      if (iVar25 == iVar22) {
LAB_140f01217:
        local_230 = (uint *)0x0;
        puVar7 = local_230;
      }
      else {
        uVar24 = 0xffffffff;
        local_230 = (uint *)0x0;
        iVar20 = iVar22;
        do {
          lVar28 = param_3[0xb];
          lVar23 = (longlong)iVar25 * 200;
          if (*(int *)(lVar28 + 0x60 + lVar23) != *(int *)(lVar28 + 0x8c + lVar23)) {
            lVar34 = lVar28 + lVar23;
            lVar29 = lVar34 + 0x90;
            if (*(longlong *)(lVar34 + 0x98) != 0) {
              lVar29 = *(longlong *)(lVar34 + 0x98);
            }
            iVar25 = *(int *)(lVar29 + (ulonglong)
                                       (*(int *)(lVar34 + 0xa0) - 1U &
                                       (int)local_108 + (int)((ulonglong)local_108 >> 0x20) * 0x17)
                                       * 4);
            if (iVar25 != -1) {
              local_228 = (longlong *)CONCAT44(local_228._4_4_,iVar30);
              plVar17 = (longlong *)(lVar23 + lVar28 + 0x58);
              lVar28 = *plVar17;
              do {
                if (*(undefined ***)(lVar28 + (longlong)iVar25 * 0x10) == local_108) {
                  lVar34 = lVar34 + 8;
                  FUN_140326250(plVar17,&local_108);
                  FUN_140325a06(lVar34,&local_148,&local_108,0);
                  iVar20 = (int)param_3[0x10];
                  local_230 = (uint *)CONCAT71((int7)((ulonglong)lVar34 >> 8),1);
                  break;
                }
                iVar25 = *(int *)((longlong)iVar25 * 0x10 + lVar28 + 8);
              } while (iVar25 != -1);
              iVar30 = (int)local_228;
            }
          }
          uVar24 = uVar24 & ~(uint)uVar31;
          puVar7 = (uint *)param_3[0xf];
          if ((uint *)param_3[0xf] == (uint *)0x0) {
            puVar7 = puVar9;
          }
          iVar25 = (int)uVar33;
          lVar28 = (longlong)iVar25;
          uVar19 = puVar7[lVar28] & uVar24;
          if (uVar19 == 0) {
            iVar13 = iVar20 + 0x1e;
            if (-1 < iVar20 + -1) {
              iVar13 = iVar20 + -1;
            }
            iVar13 = iVar13 >> 5;
            iVar30 = iVar30 + 0x20;
            iVar14 = iVar13;
            if (iVar13 < iVar25) {
              iVar14 = iVar25;
            }
            if (iVar25 < iVar13) {
              lVar23 = 0;
              do {
                uVar19 = puVar7[lVar28 + lVar23 + 1];
                if (uVar19 != 0) {
                  uVar33 = (ulonglong)(iVar25 + (int)lVar23 + 1);
                  uVar24 = 0xffffffff;
                  goto LAB_140f019d0;
                }
                iVar30 = iVar30 + 0x20;
                lVar23 = lVar23 + 1;
              } while (iVar14 - lVar28 != lVar23);
              uVar24 = 0xffffffff;
              iVar25 = iVar14;
            }
            uVar33 = (ulonglong)(iVar25 + 1);
            param_3 = local_200;
            iVar25 = iVar20;
          }
          else {
LAB_140f019d0:
            uVar31 = (ulonglong)(-uVar19 & uVar19);
            uVar1 = uVar31 * 2 + 1;
            lVar28 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
              }
            }
            iVar25 = (iVar30 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
            if (iVar20 <= iVar25) {
              iVar25 = iVar20;
            }
          }
          puVar7 = local_230;
        } while (iVar25 != iVar22);
      }
      goto LAB_140f01143;
    }
    local_1e0 = plVar17;
    if ((char)param_2[9] == '\x01') {
      local_128 = (undefined4 *)0x0;
      local_120 = 0x800000000;
      puVar9 = (uint *)(param_3 + 0xd);
      iVar22 = (int)param_3[0x10];
      if (iVar22 == 0) {
        uVar33 = 1;
        uVar31 = 0;
        iVar30 = 0;
        uVar24 = 0;
      }
      else {
        puVar7 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar7 = puVar9;
        }
        uVar19 = *puVar7;
        if (uVar19 == 0) {
          iVar30 = iVar22 + 0x1e;
          if (-1 < iVar22 + -1) {
            iVar30 = iVar22 + -1;
          }
          uVar31 = 0;
          uVar33 = (ulonglong)(uint)(iVar30 >> 5);
          if (iVar30 >> 5 < 1) {
            uVar33 = uVar31;
          }
          uVar24 = 0;
          do {
            if (uVar33 == uVar31) goto LAB_140f0298a;
            uVar24 = uVar24 + 0x20;
            uVar19 = puVar7[uVar31 + 1];
            uVar31 = uVar31 + 1;
          } while (uVar19 == 0);
        }
        else {
          uVar31 = 0;
          uVar24 = 0;
        }
        uVar33 = (ulonglong)(-uVar19 & uVar19);
        uVar1 = uVar33 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        iVar30 = (uVar24 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if (iVar22 <= iVar30) {
          iVar30 = iVar22;
        }
      }
      if (iVar30 < iVar22) {
        local_1f8 = (uint *)(param_3 + 0xb);
        local_1c0 = param_3 + 7;
        uVar19 = 0xffffffff;
        local_1c8 = puVar9;
LAB_140f01318:
        local_1cc = iVar30;
        local_220 = (uint *)CONCAT44(local_220._4_4_,uVar19);
        puVar7 = (uint *)(*(longlong *)local_1f8 + (longlong)local_1cc * 200);
        puVar27 = puVar7 + 2;
        uVar19 = *puVar7;
        if (((puVar7[4] != puVar7[0xf]) || (puVar7[0x18] != puVar7[0x23])) &&
           ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34))) {
          plVar17 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar17 = local_1c0;
          }
          iVar22 = *(int *)((longlong)plVar17 + (ulonglong)((int)param_3[9] - 1U & uVar19) * 4);
          if (iVar22 != -1) {
            do {
              lVar28 = *param_3 + (longlong)iVar22 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar22 * 0x10) == uVar19) {
                if ((lVar28 != 0) && (lVar28 != -4)) {
                  uVar15 = puVar7[0xc];
                  local_1f0 = uVar31;
                  local_214 = uVar24;
                  local_210 = uVar33;
                  local_1d0 = uVar19;
                  if (uVar15 == 0) {
                    uVar31 = 1;
                    uVar33 = 0;
                    uVar24 = 0;
                    iVar22 = 0;
                    goto LAB_140f01457;
                  }
                  puVar16 = *(uint **)(puVar7 + 10);
                  if (*(uint **)(puVar7 + 10) == (uint *)0x0) {
                    puVar16 = puVar7 + 6;
                  }
                  uVar24 = *puVar16;
                  if (uVar24 != 0) {
                    uVar33 = 0;
                    iVar22 = 0;
                    goto LAB_140f0142f;
                  }
                  iVar22 = uVar15 + 0x1e;
                  if (-1 < (int)(uVar15 - 1)) {
                    iVar22 = uVar15 - 1;
                  }
                  uVar33 = 0;
                  uVar31 = (ulonglong)(uint)(iVar22 >> 5);
                  if (iVar22 >> 5 < 1) {
                    uVar31 = uVar33;
                  }
                  iVar22 = 0;
                  goto LAB_140f01416;
                }
                break;
              }
              iVar22 = *(int *)(lVar28 + 8);
            } while (iVar22 != -1);
          }
        }
        goto LAB_140f0139d;
      }
LAB_140f0298a:
      puVar8 = local_128;
      if (*(int *)((longlong)param_3 + 0x8c) < (int)param_3[0xc]) {
        *(undefined1 *)((longlong)local_228 + 0x4b) = 1;
      }
    }
    else {
      bVar2 = *(byte *)((longlong)param_3 + 0x10c);
      if ((((bVar2 & 1) == 0) &&
          (*(byte *)((longlong)param_3 + 0x10c) = bVar2 | 1, (bVar2 & 2) != 0)) &&
         (*(char *)((longlong)param_2 + 0x4f) != '\0')) {
        *(byte *)((longlong)param_3 + 0x10c) = bVar2 | 5;
        goto LAB_140f01a37;
      }
      plVar17 = (longlong *)*param_2;
      if (plVar17 == (longlong *)0x0) {
        plVar17 = (longlong *)param_2[1];
        local_d8 = (undefined4 *)0x0;
        local_d0 = 0x800000000;
        cVar5 = FUN_140f0382c(&local_1b0);
        if (cVar5 == '\0') {
LAB_140f025db:
          if (local_d8 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
LAB_140f025ed:
          puVar7 = (uint *)0x0;
          goto LAB_140f01143;
        }
        iVar22 = 0;
        local_128 = (undefined4 *)0x0;
        local_120 = 0x800000000;
        local_158 = (undefined4 *)0x0;
        local_150 = 0x800000000;
        if (0 < local_100) {
          plVar11 = param_3 + 7;
          local_1e8 = param_3 + 0xb;
          do {
            plVar26 = local_1e0;
            local_1b4 = 0;
            puVar32 = (ulonglong *)plVar17[1];
            puVar9 = (uint *)*puVar32 + 1;
            if ((uint *)puVar32[1] < puVar9) {
              if ((*(byte *)((longlong)plVar17 + 0x2a) & 2) == 0) {
                (**(code **)(*plVar17 + 0x170))(plVar17,&local_1b4,4);
              }
              else {
                FUN_14572512c(plVar17,&local_1b4);
              }
            }
            else {
              local_1b4 = *(uint *)*puVar32;
              *puVar32 = (ulonglong)puVar9;
            }
            uVar31 = local_120;
            if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
              plVar18 = (longlong *)param_3[8];
              if ((longlong *)param_3[8] == (longlong *)0x0) {
                plVar18 = plVar11;
              }
              iVar30 = *(int *)((longlong)plVar18 +
                               (ulonglong)((int)param_3[9] - 1U & local_1b4) * 4);
              if (iVar30 != -1) {
                do {
                  lVar28 = *param_3 + (longlong)iVar30 * 0x10;
                  if (*(uint *)(*param_3 + (longlong)iVar30 * 0x10) == local_1b4) {
                    if ((lVar28 != 0) && ((int *)(lVar28 + 4) != (int *)0x0)) {
                      local_1b8 = *(int *)(lVar28 + 4);
                      puVar9 = (uint *)((longlong)local_1b8 * 0x90 + *plVar26);
                      lVar28 = (longlong)(int)local_120;
                      uVar24 = (int)local_120 + 1;
                      local_120 = CONCAT44(local_120._4_4_,uVar24);
                      if (local_120._4_4_ < uVar24) {
                        FUN_1400cc390(&local_148,uVar31 & 0xffffffff);
                      }
                      puVar8 = local_128;
                      if (local_128 == (undefined4 *)0x0) {
                        puVar8 = &local_148;
                      }
                      puVar8[lVar28] = local_1b8;
                      goto LAB_140f01d26;
                    }
                    break;
                  }
                  iVar30 = *(int *)(lVar28 + 8);
                } while (iVar30 != -1);
              }
            }
            local_1b8 = 0;
            puVar9 = (uint *)FUN_1457c5436(plVar26);
            *puVar9 = local_1b4;
            local_1b8 = (int)param_3[0x23] + -1;
            local_190 = &local_1b4;
            local_188 = &local_1b8;
            FUN_140263e2a(param_3,local_17c,&local_190);
            uVar31 = local_150;
            lVar28 = (longlong)(int)local_150;
            uVar24 = (int)local_150 + 1;
            local_150 = CONCAT44(local_150._4_4_,uVar24);
            if (local_150._4_4_ < uVar24) {
              FUN_1400cc390(local_178,uVar31 & 0xffffffff);
            }
            puVar8 = local_158;
            if (local_158 == (undefined4 *)0x0) {
              puVar8 = local_178;
            }
            puVar8[lVar28] = local_1b8;
LAB_140f01d26:
            plVar26 = local_228;
            puVar9[2] = (uint)local_108;
            puVar9[1] = puVar9[1] + 1;
            lVar28 = local_228[4];
            FUN_144958770(lVar28 + 0x30,0);
            FUN_144958770(lVar28 + 0x80,0);
            *(undefined1 *)(lVar28 + 0x28) = 1;
            puVar7 = (uint *)plVar17[0x15];
            plVar26[7] = local_1d8;
            plVar26[6] = (longlong)puVar9;
            local_190 = puVar7;
            (**(code **)(*(longlong *)plVar26[8] + 8))((longlong *)plVar26[8],plVar26);
            if ((*(byte *)((longlong)plVar17 + 0x29) & 2) == 0) {
              lVar28 = plVar26[4];
              if ((*(int *)(lVar28 + 0x38) == *(int *)(lVar28 + 100)) &&
                 (*(int *)(lVar28 + 0x88) == *(int *)(lVar28 + 0xb4))) {
                FUN_1456fd588(local_1e8,local_1b4);
                plVar26 = local_228;
              }
              else {
                local_208 = (uint *)(lVar28 + 0x30);
                puVar9 = (uint *)FUN_1456fd5f6(local_1e8,local_1b4);
                local_230 = puVar9;
                if (puVar9[2] - puVar9[0xd] == *(int *)(lVar28 + 0x38) - *(int *)(lVar28 + 100)) {
                  local_220 = puVar9 + 4;
                  uVar24 = puVar9[10];
                  if (uVar24 == 0) {
                    uVar33 = 1;
                    uVar31 = 0;
                    uVar19 = 0;
                    iVar30 = 0;
                  }
                  else {
                    puVar27 = *(uint **)(puVar9 + 8);
                    if (*(uint **)(puVar9 + 8) == (uint *)0x0) {
                      puVar27 = local_220;
                    }
                    uVar19 = *puVar27;
                    if (uVar19 == 0) {
                      iVar30 = uVar24 + 0x1e;
                      if (-1 < (int)(uVar24 - 1)) {
                        iVar30 = uVar24 - 1;
                      }
                      uVar31 = 0;
                      uVar33 = (ulonglong)(uint)(iVar30 >> 5);
                      if (iVar30 >> 5 < 1) {
                        uVar33 = uVar31;
                      }
                      iVar30 = 0;
                      do {
                        if (uVar33 == uVar31) goto LAB_140f01f36;
                        iVar30 = iVar30 + 0x20;
                        uVar19 = puVar27[uVar31 + 1];
                        uVar31 = uVar31 + 1;
                      } while (uVar19 == 0);
                    }
                    else {
                      uVar31 = 0;
                      iVar30 = 0;
                    }
                    uVar33 = (ulonglong)(-uVar19 & uVar19);
                    uVar1 = uVar33 * 2 + 1;
                    lVar23 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                      }
                    }
                    uVar19 = (iVar30 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                    if ((int)uVar24 <= (int)uVar19) {
                      uVar19 = uVar24;
                    }
                  }
                  if (uVar19 != uVar24) {
                    if (*(uint **)(puVar9 + 8) != (uint *)0x0) {
                      local_220 = *(uint **)(puVar9 + 8);
                    }
                    iVar25 = uVar24 + 0x1e;
                    if (-1 < (int)(uVar24 - 1)) {
                      iVar25 = uVar24 - 1;
                    }
                    if (*(int *)(lVar28 + 0x38) == *(int *)(lVar28 + 100)) goto LAB_140f01f1e;
                    iVar25 = iVar25 >> 5;
                    local_1f0 = lVar28 + 0x68;
                    if (*(ulonglong *)(lVar28 + 0x70) != 0) {
                      local_1f0 = *(ulonglong *)(lVar28 + 0x70);
                    }
                    local_214 = *(int *)(lVar28 + 0x78) - 1;
                    local_1f8 = local_220 + 1;
                    local_210 = CONCAT44(local_210._4_4_,0xffffffff);
                    do {
                      lVar23 = *(longlong *)(*(longlong *)puVar9 + (longlong)(int)uVar19 * 0x10);
                      iVar20 = *(int *)(local_1f0 +
                                       (ulonglong)
                                       ((int)lVar23 + (int)((ulonglong)lVar23 >> 0x20) * 0x17 &
                                       local_214) * 4);
                      if (iVar20 == -1) goto LAB_140f01f1e;
                      while (*(longlong *)(*(longlong *)local_208 + (longlong)iVar20 * 0x10) !=
                             lVar23) {
                        iVar20 = *(int *)((longlong)iVar20 * 0x10 + *(longlong *)local_208 + 8);
                        if (iVar20 == -1) goto LAB_140f01f1e;
                      }
                      uVar15 = (uint)local_210 & ~(uint)uVar33;
                      iVar20 = (int)uVar31;
                      lVar23 = (longlong)iVar20;
                      uVar19 = local_220[lVar23] & uVar15;
                      if (uVar19 == 0) {
                        iVar13 = iVar25;
                        if (iVar25 < iVar20) {
                          iVar13 = iVar20;
                        }
                        if (iVar25 <= iVar20) break;
                        lVar34 = 0;
                        while( true ) {
                          iVar30 = iVar30 + 0x20;
                          uVar19 = local_1f8[lVar23 + lVar34];
                          if (uVar19 != 0) break;
                          lVar34 = lVar34 + 1;
                          if (iVar13 - lVar23 == lVar34) goto LAB_140f01f36;
                        }
                        uVar31 = (ulonglong)(iVar20 + (int)lVar34 + 1);
                        local_210 = CONCAT44(local_210._4_4_,0xffffffff);
                      }
                      else {
                        local_210 = CONCAT44(local_210._4_4_,uVar15);
                      }
                      uVar33 = (ulonglong)(-uVar19 & uVar19);
                      uVar1 = uVar33 * 2 + 1;
                      lVar23 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                        }
                      }
                      uVar19 = (iVar30 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                    } while ((int)uVar19 < (int)uVar24);
                  }
                }
                else {
LAB_140f01f1e:
                  FUN_140492002(puVar9,local_208);
                  *(undefined1 *)((longlong)local_228 + 0x4c) = 1;
                }
LAB_140f01f36:
                local_208 = (uint *)(lVar28 + 0x80);
                if (local_230[0x16] - local_230[0x21] ==
                    *(int *)(lVar28 + 0x88) - *(int *)(lVar28 + 0xb4)) {
                  local_220 = puVar9 + 0x18;
                  uVar24 = local_230[0x1e];
                  if (uVar24 == 0) {
                    uVar33 = 1;
                    uVar31 = 0;
                    uVar19 = 0;
                    iVar30 = 0;
                  }
                  else {
                    puVar27 = *(uint **)(local_230 + 0x1c);
                    if (*(uint **)(local_230 + 0x1c) == (uint *)0x0) {
                      puVar27 = local_220;
                    }
                    uVar19 = *puVar27;
                    if (uVar19 == 0) {
                      iVar30 = uVar24 + 0x1e;
                      if (-1 < (int)(uVar24 - 1)) {
                        iVar30 = uVar24 - 1;
                      }
                      uVar31 = 0;
                      uVar33 = (ulonglong)(uint)(iVar30 >> 5);
                      if (iVar30 >> 5 < 1) {
                        uVar33 = uVar31;
                      }
                      iVar30 = 0;
                      do {
                        if (uVar33 == uVar31) goto LAB_140f02045;
                        iVar30 = iVar30 + 0x20;
                        uVar19 = puVar27[uVar31 + 1];
                        uVar31 = uVar31 + 1;
                      } while (uVar19 == 0);
                    }
                    else {
                      uVar31 = 0;
                      iVar30 = 0;
                    }
                    uVar33 = (ulonglong)(-uVar19 & uVar19);
                    uVar1 = uVar33 * 2 + 1;
                    lVar23 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                      }
                    }
                    uVar19 = (iVar30 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                    if ((int)uVar24 <= (int)uVar19) {
                      uVar19 = uVar24;
                    }
                  }
                  if (uVar19 != uVar24) {
                    if (*(uint **)(local_230 + 0x1c) != (uint *)0x0) {
                      local_220 = *(uint **)(local_230 + 0x1c);
                    }
                    iVar25 = uVar24 + 0x1e;
                    if (-1 < (int)(uVar24 - 1)) {
                      iVar25 = uVar24 - 1;
                    }
                    if (*(int *)(lVar28 + 0x88) == *(int *)(lVar28 + 0xb4)) goto LAB_140f0202e;
                    iVar25 = iVar25 >> 5;
                    local_1f0 = lVar28 + 0xb8;
                    if (*(ulonglong *)(lVar28 + 0xc0) != 0) {
                      local_1f0 = *(ulonglong *)(lVar28 + 0xc0);
                    }
                    local_214 = *(int *)(lVar28 + 200) - 1;
                    local_1f8 = local_220 + 1;
                    local_210 = CONCAT44(local_210._4_4_,0xffffffff);
                    do {
                      lVar23 = *(longlong *)
                                (*(longlong *)(local_230 + 0x14) + (longlong)(int)uVar19 * 0x10);
                      iVar20 = *(int *)(local_1f0 +
                                       (ulonglong)
                                       ((int)lVar23 + (int)((ulonglong)lVar23 >> 0x20) * 0x17 &
                                       local_214) * 4);
                      if (iVar20 == -1) goto LAB_140f0202e;
                      while (*(longlong *)(*(longlong *)local_208 + (longlong)iVar20 * 0x10) !=
                             lVar23) {
                        iVar20 = *(int *)((longlong)iVar20 * 0x10 + *(longlong *)local_208 + 8);
                        if (iVar20 == -1) goto LAB_140f0202e;
                      }
                      uVar15 = (uint)local_210 & ~(uint)uVar33;
                      iVar20 = (int)uVar31;
                      lVar23 = (longlong)iVar20;
                      uVar19 = local_220[lVar23] & uVar15;
                      if (uVar19 == 0) {
                        iVar13 = iVar25;
                        if (iVar25 < iVar20) {
                          iVar13 = iVar20;
                        }
                        if (iVar25 <= iVar20) break;
                        lVar34 = 0;
                        while( true ) {
                          iVar30 = iVar30 + 0x20;
                          uVar19 = local_1f8[lVar23 + lVar34];
                          if (uVar19 != 0) break;
                          lVar34 = lVar34 + 1;
                          if (iVar13 - lVar23 == lVar34) goto LAB_140f02045;
                        }
                        uVar31 = (ulonglong)(iVar20 + (int)lVar34 + 1);
                        local_210 = CONCAT44(local_210._4_4_,0xffffffff);
                      }
                      else {
                        local_210 = CONCAT44(local_210._4_4_,uVar15);
                      }
                      uVar33 = (ulonglong)(-uVar19 & uVar19);
                      uVar1 = uVar33 * 2 + 1;
                      lVar23 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                        }
                      }
                      uVar19 = (iVar30 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                    } while ((int)uVar19 < (int)uVar24);
                  }
                }
                else {
LAB_140f0202e:
                  FUN_140492002(puVar9 + 0x14,local_208);
                  *(undefined1 *)((longlong)local_228 + 0x4c) = 1;
                }
LAB_140f02045:
                puVar27 = local_230;
                local_230[0x2a] = 0;
                if (local_230[0x2b] != 0) {
                  FUN_144893a1c(puVar9 + 0x28,0);
                }
                puVar27[0x2c] = (int)plVar17[0x15] - (int)puVar7;
                FUN_14049209c(&local_190,plVar17,puVar9 + 0x28);
                plVar26 = local_228;
                if (*(int *)(lVar28 + 0x38) != *(int *)(lVar28 + 100)) {
                  *(undefined1 *)((longlong)local_228 + 0x4b) = 1;
                }
              }
            }
            lVar28 = plVar26[4];
            FUN_144958770(lVar28 + 0x30,0);
            FUN_144958770(lVar28 + 0x80,0);
            *(undefined1 *)(lVar28 + 0x28) = 0;
            if ((*(byte *)((longlong)plVar17 + 0x29) & 2) != 0) {
              if (local_158 != (undefined4 *)0x0) {
                FUN_1400020a8();
              }
              if (local_128 != (undefined4 *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_140f025db;
            }
            iVar22 = iVar22 + 1;
            param_3 = local_200;
            param_2 = local_198;
          } while (iVar22 < local_100);
        }
        plVar17 = local_1a8;
        if (((char)param_2[10] == '\0') && (iVar22 = (int)local_1a8[1], 0 < iVar22)) {
          uVar31 = 0;
          do {
            uVar33 = local_d0;
            iVar30 = *(int *)(*plVar17 + 8 + uVar31 * 0x90);
            if ((iVar30 < (int)(uint)local_108) && (local_108._4_4_ < iVar30)) {
              puVar8 = local_d8;
              if (local_d8 == (undefined4 *)0x0) {
                puVar8 = local_f8;
              }
              lVar28 = (longlong)(int)local_d0;
              if (lVar28 != 0) {
                lVar23 = 0;
                do {
                  if (uVar31 == *(uint *)((longlong)puVar8 + lVar23)) goto LAB_140f026b5;
                  lVar23 = lVar23 + 4;
                } while (lVar28 * 4 - lVar23 != 0);
              }
              uVar24 = (int)local_d0 + 1;
              local_d0 = CONCAT44(local_d0._4_4_,uVar24);
              if (local_d0._4_4_ < uVar24) {
                FUN_1400cc390(local_f8,uVar33 & 0xffffffff);
              }
              puVar8 = local_d8;
              if (local_d8 == (undefined4 *)0x0) {
                puVar8 = local_f8;
              }
              puVar8[lVar28] = (int)uVar31;
              iVar22 = (int)plVar17[1];
            }
LAB_140f026b5:
            uVar31 = uVar31 + 1;
            param_3 = local_200;
          } while ((longlong)uVar31 < (longlong)iVar22);
        }
        if ((0 < (int)local_d0) || (0 < local_100)) {
          FUN_140705914(local_1a0);
        }
        plVar17 = local_1a8;
        puVar8 = local_d8;
        if (local_d8 == (undefined4 *)0x0) {
          puVar8 = local_f8;
        }
        if ((int)local_d0 != 0) {
          lVar28 = (longlong)(int)local_d0;
          lVar23 = 0;
          do {
            iVar22 = *(int *)((longlong)puVar8 + lVar23);
            if (((-1 < (longlong)iVar22) && (iVar22 < (int)plVar17[1])) &&
               (iVar22 = FUN_1456fd588(param_3 + 0xb,
                                       *(undefined4 *)(*plVar17 + (longlong)iVar22 * 0x90)),
               0 < iVar22)) {
              *(undefined1 *)((longlong)param_2 + 0x4c) = 1;
            }
            lVar23 = lVar23 + 4;
          } while (lVar28 * 4 != lVar23);
          if (0 < (int)local_d0) {
            puVar8 = local_d8;
            if (local_d8 == (undefined4 *)0x0) {
              puVar8 = local_f8;
            }
            FUN_144958a06(puVar8);
            if (0 < (longlong)(int)local_d0) {
              uVar31 = (longlong)(int)local_d0 + 1;
              do {
                puVar8 = local_d8;
                if (local_d8 == (undefined4 *)0x0) {
                  puVar8 = local_f8;
                }
                if ((-1 < (int)puVar8[uVar31 - 2]) && ((int)puVar8[uVar31 - 2] < (int)plVar17[1])) {
                  FUN_1457c5476(plVar17);
                }
                uVar31 = uVar31 - 1;
              } while (1 < uVar31);
            }
            FUN_14010afec(local_1a0,0);
          }
        }
        if (local_158 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        puVar8 = local_d8;
        if (local_128 != (undefined4 *)0x0) {
          FUN_1400020a8();
          puVar8 = local_d8;
        }
        goto LAB_140f029a1;
      }
      lVar28 = param_2[3];
      if (lVar28 == 0) {
        local_230 = (uint *)CONCAT44(local_230._4_4_,0xffffffff);
        lVar28 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(lVar28 + 0x70);
        cVar5 = FUN_140f0353c(&local_1b0,uVar3);
        if (cVar5 == '\0') goto LAB_140f025ed;
        local_230 = (uint *)CONCAT44(local_230._4_4_,uVar3);
        lVar28 = lVar28 + 0x20;
      }
      puVar10 = (undefined8 *)FUN_14001cc68(0x78,0x10);
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = &PTR_FUN_14ab190a0;
      puVar10[8] = 0;
      *(undefined4 *)(puVar10 + 9) = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      *(undefined8 *)((longlong)puVar10 + 0x4c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar10 + 0x54) = 0;
      puVar10[0xc] = 0;
      *(undefined4 *)(puVar10 + 0xd) = 0;
      *(undefined4 *)(puVar10 + 0xe) = 0xffffffff;
      puVar12 = (undefined8 *)param_2[2];
      plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar11[1] = (longlong)&DAT_100000001;
      *plVar11 = (longlong)&PTR_FUN_14ab190c0;
      plVar11[2] = (longlong)puVar10;
      if (puVar10 == (undefined8 *)0x0) {
LAB_140f02397:
        *puVar12 = puVar10;
        plVar26 = (longlong *)puVar12[1];
        if (plVar11 == plVar26) {
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar26 = plVar11 + 1;
            *(int *)plVar26 = (int)*plVar26 + -1;
            UNLOCK();
            if ((int)*plVar26 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar4 = (int *)((longlong)plVar11 + 0xc);
              *piVar4 = *piVar4 + -1;
              iVar22 = *piVar4;
              UNLOCK();
              plVar26 = plVar11;
              goto joined_r0x000140f023d3;
            }
          }
        }
        else {
          puVar12[1] = plVar11;
          if (plVar26 != (longlong *)0x0) goto LAB_140f023ef;
        }
      }
      else {
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          puVar10[1] = puVar10;
          if ((longlong *)puVar10[2] != plVar11) {
            LOCK();
            *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
            UNLOCK();
            plVar26 = (longlong *)puVar10[2];
            if (plVar26 != (longlong *)0x0) {
              LOCK();
              piVar4 = (int *)((longlong)plVar26 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar26 + 0x10))();
              }
            }
            puVar10[2] = plVar11;
          }
          LOCK();
          plVar26 = plVar11 + 1;
          *(int *)plVar26 = (int)*plVar26 + -1;
          UNLOCK();
          if ((int)*plVar26 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar4 = (int *)((longlong)plVar11 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
          goto LAB_140f02397;
        }
        puVar10[1] = puVar10;
        *puVar12 = puVar10;
        plVar26 = (longlong *)puVar12[1];
        if (plVar26 != (longlong *)0x0) {
          puVar12[1] = 0;
LAB_140f023ef:
          LOCK();
          plVar11 = plVar26 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar26)(plVar26);
            LOCK();
            piVar4 = (int *)((longlong)plVar26 + 0xc);
            *piVar4 = *piVar4 + -1;
            iVar22 = *piVar4;
            UNLOCK();
joined_r0x000140f023d3:
            if (iVar22 == 0) {
              (**(code **)(*plVar26 + 0x10))(plVar26);
            }
          }
        }
      }
      plVar11 = local_228;
      local_148 = *(undefined4 *)((longlong)param_3 + 0x54);
      *(undefined4 *)(puVar10 + 0xe) = local_148;
      local_144 = local_230._0_4_;
      local_140 = 0;
      local_118 = (undefined4 *)0x0;
      local_110 = 0x800000000;
      local_c8 = (undefined8 *)0x0;
      local_c0 = 0x800000000;
      if (*(char *)((longlong)local_228 + 0x4e) == '\x01') {
        FUN_140f0325e(&local_1b0,puVar10 + 4,&local_108);
      }
      else {
        local_238 = local_138;
        FUN_140f03b00(&local_1b0,puVar10 + 4,lVar28,&local_108);
        *(undefined4 *)(puVar10 + 0xe) = *(undefined4 *)((longlong)param_3 + 0x54);
      }
      local_140 = (int)local_c0;
      FUN_140f0334a(&local_1b0);
      if (0 < (int)local_c0) {
        lVar28 = 0;
        do {
          puVar12 = local_c8;
          if (local_c8 == (undefined8 *)0x0) {
            puVar12 = &local_108;
          }
          iVar22 = *(int *)(puVar12 + lVar28);
          lVar23 = *local_1e0;
          local_178[0] = *(undefined4 *)((longlong)puVar12 + lVar28 * 8 + 4);
          puVar32 = (ulonglong *)plVar17[1];
          puVar8 = (undefined4 *)*puVar32 + 1;
          if ((undefined4 *)puVar32[1] < puVar8) {
            if ((*(byte *)((longlong)plVar17 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar17 + 0x170))(plVar17,local_178,4);
            }
            else {
              FUN_14572512c(plVar17,local_178);
            }
          }
          else {
            local_178[0] = *(undefined4 *)*puVar32;
            *puVar32 = (ulonglong)puVar8;
          }
          plVar11[7] = local_1d8;
          plVar11[6] = (longlong)iVar22 * 0x90 + lVar23;
          (**(code **)(*(longlong *)plVar11[8] + 8))((longlong *)plVar11[8],plVar11);
          lVar28 = lVar28 + 1;
        } while ((int)lVar28 < (int)local_c0);
      }
      puVar8 = local_118;
      if (local_c8 != (undefined8 *)0x0) {
        FUN_1400020a8();
        puVar8 = local_118;
      }
    }
LAB_140f029a1:
    if (puVar8 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar22 = (int)param_3[0x10];
    if (iVar22 == 0) {
      uVar31 = 1;
      iVar25 = 0;
      iVar30 = 0;
      uVar33 = 0;
    }
    else {
      puVar9 = (uint *)param_3[0xf];
      if ((uint *)param_3[0xf] == (uint *)0x0) {
        puVar9 = (uint *)(param_3 + 0xd);
      }
      uVar24 = *puVar9;
      if (uVar24 == 0) {
        iVar30 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar30 = iVar22 + -1;
        }
        uVar33 = 0;
        uVar31 = (ulonglong)(uint)(iVar30 >> 5);
        if (iVar30 >> 5 < 1) {
          uVar31 = uVar33;
        }
        iVar25 = 0;
        do {
          if (uVar31 == uVar33) goto LAB_140f01141;
          iVar25 = iVar25 + 0x20;
          uVar24 = puVar9[uVar33 + 1];
          uVar33 = uVar33 + 1;
        } while (uVar24 == 0);
      }
      else {
        iVar25 = 0;
        uVar33 = 0;
      }
      uVar31 = (ulonglong)(-uVar24 & uVar24);
      uVar1 = uVar31 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      iVar30 = (iVar25 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
      if (iVar22 <= iVar30) {
        iVar30 = iVar22;
      }
    }
    puVar7 = (uint *)0x1;
    if (iVar30 == iVar22) goto LAB_140f01143;
    uVar24 = 0xffffffff;
    local_230 = (uint *)(param_3 + 0xd);
    do {
      lVar28 = local_200[0xb];
      lVar23 = (longlong)iVar30 * 200;
      FUN_1403257c8(param_2[0xd],lVar23 + lVar28 + 8);
      FUN_1403257c8(param_2[0xd],lVar23 + lVar28 + 0x58);
      piVar4 = (int *)param_2[0xe];
      if (piVar4 != (int *)0x0) {
        *piVar4 = *piVar4 + *(int *)(lVar28 + lVar23 + 0xb0);
      }
      uVar24 = uVar24 & ~(uint)uVar31;
      puVar9 = (uint *)local_200[0xf];
      if ((uint *)local_200[0xf] == (uint *)0x0) {
        puVar9 = local_230;
      }
      iVar20 = (int)local_200[0x10];
      iVar30 = (int)uVar33;
      lVar28 = (longlong)iVar30;
      uVar19 = puVar9[lVar28] & uVar24;
      if (uVar19 == 0) {
        iVar13 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar13 = iVar20 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar25 = iVar25 + 0x20;
        iVar14 = iVar13;
        if (iVar13 < iVar30) {
          iVar14 = iVar30;
        }
        if (iVar30 < iVar13) {
          lVar23 = 0;
          do {
            uVar19 = puVar9[lVar28 + lVar23 + 1];
            if (uVar19 != 0) {
              uVar33 = (ulonglong)(iVar30 + (int)lVar23 + 1);
              uVar24 = 0xffffffff;
              goto LAB_140f0110c;
            }
            iVar25 = iVar25 + 0x20;
            lVar23 = lVar23 + 1;
          } while (iVar14 - lVar28 != lVar23);
          uVar24 = 0xffffffff;
          iVar30 = iVar14;
        }
        uVar33 = (ulonglong)(iVar30 + 1);
        iVar30 = iVar20;
      }
      else {
LAB_140f0110c:
        uVar31 = (ulonglong)(-uVar19 & uVar19);
        uVar1 = uVar31 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        iVar30 = (iVar25 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if (iVar20 <= iVar30) {
          iVar30 = iVar20;
        }
      }
    } while (iVar30 != iVar22);
  }
LAB_140f01141:
  puVar7 = (uint *)0x1;
LAB_140f01143:
  if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar7;
  while( true ) {
    iVar22 = iVar22 + 0x20;
    uVar24 = puVar16[uVar33 + 1];
    uVar33 = uVar33 + 1;
    if (uVar24 != 0) break;
LAB_140f01416:
    if (uVar31 == uVar33) goto LAB_140f01717;
  }
LAB_140f0142f:
  uVar31 = (ulonglong)(-uVar24 & uVar24);
  uVar1 = uVar31 * 2 + 1;
  lVar28 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
    }
  }
  uVar24 = (iVar22 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
  if ((int)uVar15 <= (int)uVar24) {
    uVar24 = uVar15;
  }
LAB_140f01457:
  if ((int)uVar24 < (int)uVar15) {
    local_208 = puVar7 + 0x16;
    uVar19 = 0xffffffff;
    local_1e8 = (longlong *)((ulonglong)local_1e8 & 0xffffffff00000000);
    local_230 = puVar27;
    do {
      plVar17 = local_228;
      puVar32 = (ulonglong *)((longlong)(int)uVar24 * 0x10 + *(longlong *)puVar27);
      cVar5 = (**(code **)(*(longlong *)local_228[4] + 0x330))((longlong *)local_228[4],puVar32,0);
      if (cVar5 == '\0') {
        puVar21 = puVar32;
        lVar28 = (**(code **)(*(longlong *)plVar17[4] + 800))((longlong *)plVar17[4],puVar32);
        puVar27 = local_230;
        if (lVar28 != 0) {
          local_1e8 = (longlong *)
                      CONCAT44(local_1e8._4_4_,(int)CONCAT71((int7)((ulonglong)puVar21 >> 8),1));
          if ((*puVar32 & 1) == 0 && *puVar32 != 0) {
            FUN_140325a06(local_208,&local_108,puVar32,0);
          }
          goto LAB_140f014ab;
        }
      }
      else {
LAB_140f014ab:
        puVar27 = local_230;
        FUN_140646052(local_230,uVar24);
      }
      plVar17 = local_228;
      uVar19 = uVar19 & ~(uint)uVar31;
      puVar9 = *(uint **)(puVar27 + 8);
      if (*(uint **)(puVar27 + 8) == (uint *)0x0) {
        puVar9 = puVar7 + 6;
      }
      uVar15 = puVar27[10];
      iVar30 = (int)uVar33;
      lVar28 = (longlong)iVar30;
      uVar24 = puVar9[lVar28] & uVar19;
      if (uVar24 == 0) {
        iVar25 = uVar15 + 0x1e;
        if (-1 < (int)(uVar15 - 1)) {
          iVar25 = uVar15 - 1;
        }
        iVar25 = iVar25 >> 5;
        iVar20 = iVar25;
        if (iVar25 < iVar30) {
          iVar20 = iVar30;
        }
        if (iVar25 <= iVar30) break;
        lVar23 = 0;
        while( true ) {
          iVar22 = iVar22 + 0x20;
          uVar24 = puVar9[lVar28 + lVar23 + 1];
          if (uVar24 != 0) break;
          lVar23 = lVar23 + 1;
          if (iVar20 - lVar28 == lVar23) goto LAB_140f015aa;
        }
        uVar33 = (ulonglong)(iVar30 + (int)lVar23 + 1);
        uVar19 = 0xffffffff;
      }
      uVar31 = (ulonglong)(-uVar24 & uVar24);
      uVar1 = uVar31 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      uVar24 = (iVar22 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
    } while ((int)uVar24 < (int)uVar15);
LAB_140f015aa:
    puVar9 = local_1c8;
    if (((ulonglong)local_1e8 & 1) != 0) {
      *(undefined1 *)((longlong)local_228 + 0x49) = 1;
      if (*(char *)((longlong)local_228 + 0x4a) == '\0') {
        (**(code **)(*(longlong *)local_228[0xb] + 0x210))();
        *(undefined1 *)((longlong)plVar17 + 0x4a) = 1;
        puVar27 = local_230;
      }
      uVar31 = local_120;
      if ((int)local_200[1] != *(int *)((longlong)local_200 + 0x34)) {
        plVar11 = (longlong *)local_200[8];
        if ((longlong *)local_200[8] == (longlong *)0x0) {
          plVar11 = local_1c0;
        }
        iVar22 = *(int *)((longlong)plVar11 + (ulonglong)((int)local_200[9] - 1U & local_1d0) * 4);
        if (iVar22 != -1) {
          do {
            lVar28 = *local_200 + (longlong)iVar22 * 0x10;
            if (*(uint *)(*local_200 + (longlong)iVar22 * 0x10) == local_1d0) goto LAB_140f015f5;
            iVar22 = *(int *)(lVar28 + 8);
          } while (iVar22 != -1);
        }
      }
      lVar28 = 0;
LAB_140f015f5:
      iVar22 = *(int *)(lVar28 + 4);
      lVar28 = *local_1e0;
      lVar23 = (longlong)(int)local_120;
      uVar24 = (int)local_120 + 1;
      local_120 = CONCAT44(local_120._4_4_,uVar24);
      if (local_120._4_4_ < uVar24) {
        FUN_1400cc390(&local_148,uVar31 & 0xffffffff);
        puVar27 = local_230;
      }
      puVar8 = local_128;
      if (local_128 == (undefined4 *)0x0) {
        puVar8 = &local_148;
      }
      puVar8[lVar23] = iVar22;
      FUN_1448fcc30(&local_108,plVar17[4],*(undefined8 *)(puVar27 + 0x28),
                    (longlong)(int)puVar27[0x2c]);
      plVar17[7] = local_1d8;
      plVar17[6] = (longlong)iVar22 * 0x90 + lVar28;
      plVar17[1] = (longlong)&local_108;
      (**(code **)(*(longlong *)plVar17[8] + 8))((longlong *)plVar17[8],plVar17);
      local_108 = &PTR_FUN_149e73df0;
      if (local_50 != 0) {
        (**(code **)(local_50 + -0x10))(local_50 + -0x10);
      }
      puVar9 = local_1c8;
      local_108 = &PTR_FUN_149e37220;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      plVar17 = local_b0;
      local_108 = &PTR__purecall_149e35f70;
      if (local_b0 != (longlong *)0x0) {
        if (*local_b0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar17);
      }
      lVar28 = local_90;
      puVar27 = local_230;
      if (local_90 != 0) {
        if (*(longlong *)(local_90 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar28);
        puVar27 = local_230;
      }
    }
  }
LAB_140f01717:
  uVar19 = (uint)local_210;
  param_3 = local_200;
  uVar31 = local_1f0;
  uVar24 = local_214;
  if ((puVar27[2] == puVar27[0xd]) && (uVar33 = local_210, puVar27[0x16] == puVar27[0x21])) {
LAB_140f0139d:
    uVar19 = (uint)uVar33;
    FUN_1456fd4bc(local_1f8,local_1cc);
  }
  uVar19 = (uint)local_220 & ~uVar19;
  puVar7 = (uint *)param_3[0xf];
  if ((uint *)param_3[0xf] == (uint *)0x0) {
    puVar7 = puVar9;
  }
  iVar22 = (int)param_3[0x10];
  iVar30 = (int)uVar31;
  lVar28 = (longlong)iVar30;
  uVar15 = puVar7[lVar28] & uVar19;
  if (uVar15 == 0) {
    iVar25 = iVar22 + 0x1e;
    if (-1 < iVar22 + -1) {
      iVar25 = iVar22 + -1;
    }
    iVar25 = iVar25 >> 5;
    iVar20 = iVar25;
    if (iVar25 < iVar30) {
      iVar20 = iVar30;
    }
    if (iVar25 <= iVar30) goto LAB_140f0298a;
    lVar23 = 0;
    while( true ) {
      uVar24 = uVar24 + 0x20;
      uVar15 = puVar7[lVar28 + lVar23 + 1];
      if (uVar15 != 0) break;
      lVar23 = lVar23 + 1;
      if (iVar20 - lVar28 == lVar23) goto LAB_140f0298a;
    }
    uVar31 = (ulonglong)(iVar30 + (int)lVar23 + 1);
    uVar19 = 0xffffffff;
  }
  uVar33 = (ulonglong)(-uVar15 & uVar15);
  uVar1 = uVar33 * 2 + 1;
  lVar28 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
    }
  }
  iVar30 = (uVar24 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
  if (iVar22 <= iVar30) goto LAB_140f0298a;
  goto LAB_140f01318;
}



// FUNCTION 140f029e8 FUN_140f029e8 body=229 status=ok
// SIG undefined FUN_140f029e8(void)

void FUN_140f029e8(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48;
  int *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((char)(*(longlong **)(param_1 + 0x18))[9] != '\0') || (**(longlong **)(param_1 + 0x18) == 0)
      ) && (lVar1 = *(longlong *)(param_1 + 0x10),
           *(int *)(lVar1 + 8) - *(int *)(lVar1 + 0x34) != *(int *)(*(longlong *)(param_1 + 8) + 8))
     ) {
    FUN_14010afec(lVar1,0);
    local_4c = 0;
    plVar2 = *(longlong **)(param_1 + 8);
    if (0 < (int)plVar2[1]) {
      do {
        if ((*(int *)(*plVar2 + (longlong)local_4c * 0x90) != -1) ||
           (**(longlong **)(param_1 + 0x18) != 0)) {
          local_48 = *plVar2 + (longlong)local_4c * 0x90;
          local_40 = &local_4c;
          FUN_140263e2a(*(undefined8 *)(param_1 + 0x10),local_34,&local_48,0);
          plVar2 = *(longlong **)(param_1 + 8);
        }
        local_4c = local_4c + 1;
      } while (local_4c < (int)plVar2[1]);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0325e FUN_140f0325e body=234 status=ok
// SIG undefined FUN_140f0325e(void)

void FUN_140f0325e(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = *(longlong **)(param_1 + 8);
  if (0 < (int)plVar4[1]) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar3 = *plVar4;
      if (*(int *)(lVar3 + lVar6) != -1) {
        local_58 = (uint *)(lVar3 + lVar6) + 1;
        local_60 = lVar3 + lVar6;
        FUN_140263e2a(param_2,local_4c,&local_60,0);
        uVar1 = *(uint *)(lVar3 + lVar6);
        iVar2 = *(int *)(param_3 + 0x48);
        *(uint *)(param_3 + 0x48) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0x4c) < iVar2 + 1U) {
          FUN_14593fc44(param_3,iVar2);
        }
        lVar3 = *(longlong *)(param_3 + 0x40);
        if (*(longlong *)(param_3 + 0x40) == 0) {
          lVar3 = param_3;
        }
        *(ulonglong *)(lVar3 + (longlong)iVar2 * 8) = ((ulonglong)uVar1 << 0x20) + lVar5;
        plVar4 = *(longlong **)(param_1 + 8);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x90;
    } while (lVar5 < (int)plVar4[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f0334a FUN_140f0334a body=496 status=ok
// SIG undefined FUN_140f0334a(void)

void FUN_140f0334a(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x18);
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2,4);
    }
    else {
      FUN_14572512c(plVar1,param_2);
    }
  }
  else {
    *param_2 = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[1] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  local_34 = param_2[0xe];
  puVar2 = (ulonglong *)plVar1[1];
  puVar3 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar3) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_34,4);
    }
    else {
      FUN_14572512c(plVar1,&local_34);
    }
  }
  else {
    local_34 = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar3;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[2] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  if (0 < (int)param_2[0xe]) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined4 **)(param_2 + 0xc);
      if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
        puVar3 = param_2 + 4;
      }
      local_38 = puVar3[lVar4];
      puVar2 = (ulonglong *)plVar1[1];
      if (puVar2[1] < *puVar2 + 4) {
        if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar1 + 0x170))(plVar1,&local_38,4);
        }
        else {
          FUN_14572512c(plVar1,&local_38);
        }
      }
      else {
        *puVar2 = *puVar2 + 4;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < (int)param_2[0xe]);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f0353c FUN_140f0353c body=752 status=ok
// SIG undefined FUN_140f0353c(void)

bool FUN_140f0353c(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  
  lVar11 = *(longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(lVar11 + 0x54);
  if (iVar3 != param_2) goto LAB_140f03818;
  iVar10 = *(int *)(lVar11 + 0x104);
  iVar9 = *(int *)(*(longlong *)(param_1 + 8) + 8);
  if ((iVar10 != iVar9 || iVar10 == -1) || (iVar9 = iVar10, *(int *)(lVar11 + 0x108) == -1)) {
    *(int *)(lVar11 + 0x104) = iVar9;
    lVar11 = (longlong)(int)(*(longlong **)(param_1 + 8))[1];
    if (lVar11 == 0) {
      iVar10 = 0;
    }
    else {
      lVar12 = 0;
      iVar10 = 0;
      do {
        iVar10 = iVar10 + (uint)(byte)(*(int *)(**(longlong **)(param_1 + 8) + lVar12) != -1 |
                                      *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
        lVar12 = lVar12 + 0x90;
      } while (lVar11 * 0x90 != lVar12);
    }
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x108) = iVar10;
  }
  lVar11 = *(longlong *)(param_1 + 0x18);
  lVar12 = *(longlong *)(lVar11 + 0x18);
  if (lVar12 != 0) {
    plVar7 = *(longlong **)(lVar12 + 0x10);
    bVar5 = true;
    if (plVar7 == (longlong *)0x0) {
LAB_140f03732:
      uVar8 = 0;
      plVar7 = (longlong *)0x0;
    }
    else {
      iVar10 = (int)plVar7[1];
      do {
        if (iVar10 == 0) goto LAB_140f03732;
        LOCK();
        iVar9 = (int)plVar7[1];
        bVar14 = iVar10 == iVar9;
        if (bVar14) {
          *(int *)(plVar7 + 1) = iVar10 + 1;
          iVar9 = iVar10;
        }
        iVar10 = iVar9;
        UNLOCK();
      } while (!bVar14);
      uVar8 = *(undefined8 *)(lVar12 + 8);
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      bVar5 = false;
    }
    puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x10);
    *puVar4 = uVar8;
    plVar13 = (longlong *)puVar4[1];
    if (plVar7 == plVar13) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar7 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
          plVar13 = plVar7;
          goto joined_r0x000140f03781;
        }
      }
    }
    else {
      puVar4[1] = plVar7;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
joined_r0x000140f03781:
          if (iVar10 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    if (!bVar5) {
      LOCK();
      plVar13 = plVar7 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    goto LAB_140f03818;
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = &PTR_FUN_14ab190a0;
  puVar6[8] = 0;
  *(undefined4 *)(puVar6 + 9) = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar6 + 0x54) = 0;
  puVar6[0xc] = 0;
  *(undefined4 *)(puVar6 + 0xd) = 0;
  *(undefined4 *)(puVar6 + 0xe) = 0xffffffff;
  puVar4 = *(undefined8 **)(lVar11 + 0x10);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14ab190c0;
  plVar7[2] = (longlong)puVar6;
  if (puVar6 == (undefined8 *)0x0) {
LAB_140f0370b:
    *puVar4 = puVar6;
    plVar13 = (longlong *)puVar4[1];
    if (plVar7 == plVar13) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar7 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
          plVar13 = plVar7;
          goto joined_r0x000140f037d0;
        }
      }
    }
    else {
      puVar4[1] = plVar7;
      if (plVar13 != (longlong *)0x0) goto LAB_140f037ef;
    }
  }
  else {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      puVar6[1] = puVar6;
      if ((longlong *)puVar6[2] != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar13 = (longlong *)puVar6[2];
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))();
          }
        }
        puVar6[2] = plVar7;
      }
      LOCK();
      plVar13 = plVar7 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      goto LAB_140f0370b;
    }
    puVar6[1] = puVar6;
    *puVar4 = puVar6;
    plVar13 = (longlong *)puVar4[1];
    if (plVar13 != (longlong *)0x0) {
      puVar4[1] = 0;
LAB_140f037ef:
      LOCK();
      plVar7 = plVar13 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar10 = *piVar2;
        UNLOCK();
joined_r0x000140f037d0:
        if (iVar10 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  *(undefined4 *)(puVar6 + 0xe) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x54);
LAB_140f03818:
  return iVar3 != param_2;
}



// FUNCTION 140f0382c FUN_140f0382c body=723 status=ok
// SIG undefined FUN_140f0382c(void)

undefined8 FUN_140f0382c(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  int *piVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_78 [40];
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2,4);
    }
    else {
      FUN_14572512c(plVar5,param_2);
    }
  }
  else {
    *param_2 = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar5);
    }
  }
  else {
    param_2[1] = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  local_4c = 0;
  puVar6 = (ulonglong *)plVar5[1];
  piVar1 = (int *)*puVar6 + 1;
  if ((int *)puVar6[1] < piVar1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,&local_4c,4);
    }
    else {
      FUN_14572512c(plVar5,&local_4c);
    }
  }
  else {
    local_4c = *(int *)*puVar6;
    *puVar6 = (ulonglong)piVar1;
  }
  if (local_4c <= DAT_14c75f430) {
    piVar1 = param_2 + 2;
    piVar7 = *(int **)plVar5[1];
    if ((int *)((undefined8 *)plVar5[1])[1] < piVar7 + 1) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,piVar1,4);
      }
      else {
        FUN_14572512c(plVar5,piVar1);
      }
    }
    else {
      *piVar1 = *piVar7;
      *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
    }
    if (*piVar1 <= DAT_14c75f42c) {
      uVar9 = CONCAT71((uint7)(uint3)((uint)*piVar1 >> 8),1);
      if (0 < local_4c) {
        iVar13 = 0;
        do {
          local_50 = 0;
          puVar6 = (ulonglong *)plVar5[1];
          puVar2 = (uint *)*puVar6 + 1;
          if ((uint *)puVar6[1] < puVar2) {
            if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar5 + 0x170))(plVar5,&local_50,4);
            }
            else {
              FUN_14572512c(plVar5,&local_50);
            }
          }
          else {
            local_50 = *(uint *)*puVar6;
            *puVar6 = (ulonglong)puVar2;
          }
          plVar8 = *(longlong **)(param_1 + 0x10);
          puVar10 = (undefined4 *)(ulonglong)*(uint *)(plVar8 + 1);
          if (*(uint *)(plVar8 + 1) != *(uint *)((longlong)plVar8 + 0x34)) {
            puVar10 = (undefined4 *)(ulonglong)local_50;
            plVar12 = plVar8 + 7;
            if ((longlong *)plVar8[8] != (longlong *)0x0) {
              plVar12 = (longlong *)plVar8[8];
            }
            iVar11 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar8[9] - 1U & local_50) * 4);
            if (iVar11 != -1) {
              do {
                lVar3 = *plVar8 + (longlong)iVar11 * 0x10;
                if (*(uint *)(*plVar8 + (longlong)iVar11 * 0x10) == local_50) {
                  puVar10 = (undefined4 *)(ulonglong)CONCAT31((int3)(local_50 >> 8),lVar3 == 0);
                  if ((undefined4 *)(lVar3 + 4) != (undefined4 *)0x0 && lVar3 != 0) {
                    uVar4 = *(undefined4 *)(lVar3 + 4);
                    iVar11 = param_2[0xe];
                    param_2[0xe] = iVar11 + 1U;
                    if ((uint)param_2[0xf] < iVar11 + 1U) {
                      FUN_1400cc390(param_2 + 4,iVar11);
                    }
                    puVar10 = *(undefined4 **)(param_2 + 0xc);
                    if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
                      puVar10 = param_2 + 4;
                    }
                    puVar10[iVar11] = uVar4;
                  }
                  break;
                }
                iVar11 = *(int *)(lVar3 + 8);
              } while (iVar11 != -1);
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < local_4c);
        uVar9 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
      }
      goto LAB_140f03a8d;
    }
  }
  FUN_14572541c(plVar5);
  uVar9 = 0;
LAB_140f03a8d:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 140f03b00 FUN_140f03b00 body=1074 status=ok
// SIG undefined FUN_140f03b00(void)

void FUN_140f03b00(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  uint *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = *(longlong **)(param_1 + 8);
  iVar3 = (int)plVar2[1];
  iVar11 = 0;
  iVar9 = 0;
  if ((longlong)iVar3 != 0) {
    lVar13 = 0;
    iVar9 = 0;
    do {
      iVar9 = iVar9 + (uint)(byte)(*(int *)(*plVar2 + lVar13) != -1 |
                                  *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
      lVar13 = lVar13 + 0x90;
    } while ((longlong)iVar3 * 0x90 != lVar13);
  }
  if (param_3 != (longlong *)0x0) {
    iVar11 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  }
  iVar11 = iVar11 - iVar9;
  local_80 = param_2;
  if (0 < iVar3) {
    local_78 = param_3 + 7;
    lVar13 = 0;
    do {
      iVar3 = *(int *)(*plVar2 + lVar13 * 0x90);
      if ((*(char *)(*(longlong *)(param_1 + 0x18) + 0x4d) != '\x01') || (iVar3 != -1)) {
        puVar15 = (uint *)(*plVar2 + lVar13 * 0x90);
        if (iVar3 == -1) {
          FUN_140705884(*(undefined8 *)(param_1 + 0x10),puVar15);
        }
        local_60 = puVar15;
        local_58 = puVar15 + 1;
        FUN_140263e2a(local_80,local_4c,&local_60,0);
        uVar12 = *puVar15;
        if ((param_3 != (longlong *)0x0) && ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)))
        {
          plVar2 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar2 = local_78;
          }
          iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_3[9] - 1U & uVar12) * 4);
          if (iVar3 != -1) {
            do {
              lVar10 = *param_3 + (longlong)iVar3 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar3 * 0x10) == uVar12) {
                if ((uint *)(lVar10 + 4) != (uint *)0x0 && lVar10 != 0) {
                  if (*(uint *)(lVar10 + 4) != puVar15[1]) {
                    iVar3 = *(int *)(param_4 + 0x48);
                    *(uint *)(param_4 + 0x48) = iVar3 + 1U;
                    if (*(uint *)(param_4 + 0x4c) < iVar3 + 1U) {
                      FUN_14593fc44(param_4,iVar3);
                    }
                    lVar10 = *(longlong *)(param_4 + 0x40);
                    if (*(longlong *)(param_4 + 0x40) == 0) {
                      lVar10 = param_4;
                    }
                    *(ulonglong *)(lVar10 + (longlong)iVar3 * 8) =
                         ((ulonglong)uVar12 << 0x20) + lVar13;
                  }
                  goto LAB_140f03c7e;
                }
                break;
              }
              iVar3 = *(int *)(lVar10 + 8);
            } while (iVar3 != -1);
          }
        }
        iVar3 = *(int *)(param_4 + 0x48);
        *(uint *)(param_4 + 0x48) = iVar3 + 1U;
        if (*(uint *)(param_4 + 0x4c) < iVar3 + 1U) {
          FUN_14593fc44(param_4,iVar3);
        }
        lVar10 = *(longlong *)(param_4 + 0x40);
        if (*(longlong *)(param_4 + 0x40) == 0) {
          lVar10 = param_4;
        }
        *(ulonglong *)(lVar10 + (longlong)iVar3 * 8) = ((ulonglong)uVar12 << 0x20) + lVar13;
        iVar11 = iVar11 + 1;
      }
LAB_140f03c7e:
      lVar13 = lVar13 + 1;
      plVar2 = *(longlong **)(param_1 + 8);
    } while (lVar13 < (int)plVar2[1]);
  }
  if ((param_3 != (longlong *)0x0) && (0 < iVar11)) {
    puVar15 = (uint *)(param_3 + 2);
    iVar3 = (int)param_3[5];
    if (iVar3 == 0) {
      uVar16 = 1;
      uVar14 = 0;
      iVar9 = 0;
      iVar4 = 0;
    }
    else {
      puVar8 = (uint *)param_3[4];
      if ((uint *)param_3[4] == (uint *)0x0) {
        puVar8 = puVar15;
      }
      uVar12 = *puVar8;
      if (uVar12 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        uVar14 = 0;
        uVar16 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar16 = uVar14;
        }
        iVar9 = 0;
        do {
          if (uVar16 == uVar14) goto LAB_140f03f01;
          iVar9 = iVar9 + 0x20;
          uVar12 = puVar8[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar14 = 0;
        iVar9 = 0;
      }
      uVar16 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar4 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
    }
    if (iVar4 < iVar3) {
      local_68 = local_80 + 7;
      uVar12 = 0xffffffff;
      local_70 = param_3;
      do {
        lVar13 = *param_3;
        if ((int)local_80[1] != *(int *)((longlong)local_80 + 0x34)) {
          uVar5 = *(uint *)(lVar13 + (longlong)iVar4 * 0x10);
          plVar2 = (longlong *)local_80[8];
          if ((longlong *)local_80[8] == (longlong *)0x0) {
            plVar2 = local_68;
          }
          iVar6 = *(int *)((longlong)plVar2 + (ulonglong)((int)local_80[9] - 1U & uVar5) * 4);
          if (iVar6 != -1) {
            do {
              if (*(uint *)(*local_80 + (longlong)iVar6 * 0x10) == uVar5) goto LAB_140f03e6c;
              iVar6 = *(int *)((longlong)iVar6 * 0x10 + *local_80 + 8);
            } while (iVar6 != -1);
          }
        }
        iVar3 = *(int *)(param_5 + 0x28);
        *(uint *)(param_5 + 0x28) = iVar3 + 1U;
        if (*(uint *)(param_5 + 0x2c) < iVar3 + 1U) {
          local_78 = (longlong *)CONCAT44(local_78._4_4_,iVar9);
          FUN_1400cc390(param_5,iVar3);
          param_3 = local_70;
          iVar9 = (int)local_78;
        }
        lVar10 = *(longlong *)(param_5 + 0x20);
        if (*(longlong *)(param_5 + 0x20) == 0) {
          lVar10 = param_5;
        }
        *(undefined4 *)(lVar10 + (longlong)iVar3 * 4) =
             *(undefined4 *)(lVar13 + (longlong)iVar4 * 0x10);
        if (iVar11 < 2) break;
        iVar11 = iVar11 + -1;
        iVar3 = (int)param_3[5];
LAB_140f03e6c:
        uVar12 = uVar12 & ~(uint)uVar16;
        puVar8 = (uint *)param_3[4];
        if ((uint *)param_3[4] == (uint *)0x0) {
          puVar8 = puVar15;
        }
        iVar4 = (int)uVar14;
        lVar13 = (longlong)iVar4;
        uVar5 = puVar8[lVar13] & uVar12;
        if (uVar5 == 0) {
          iVar6 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar6 = iVar3 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar4) {
            iVar7 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar5 = puVar8[lVar13 + lVar10 + 1];
            if (uVar5 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar7 - lVar13 == lVar10) goto LAB_140f03f01;
          }
          uVar14 = (ulonglong)(iVar4 + (int)lVar10 + 1);
          uVar12 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar16 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar4 < iVar3);
    }
  }
LAB_140f03f01:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f03f34 FUN_140f03f34 body=1891 status=ok
// SIG undefined FUN_140f03f34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f03f34(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  double *pdVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  uint *puVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong *puVar20;
  uint uVar21;
  int iVar22;
  undefined8 *puVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  ulonglong uVar27;
  ulonglong *puVar28;
  ulonglong uVar29;
  int iVar30;
  int iVar31;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  uint *local_90;
  uint local_84;
  longlong *local_80;
  longlong local_78;
  ulonglong *local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar15 = param_1[5];
  if (lVar15 != 0) {
    lVar19 = param_1[3];
    if ((lVar19 != 0) && ((longlong)*(int *)(lVar15 + 0x18) != 0)) {
      puVar28 = *(ulonglong **)(lVar15 + 0x10);
      puVar20 = puVar28 + *(int *)(lVar15 + 0x18);
      plVar12 = param_1 + 0x15;
      do {
        uVar27 = *puVar28;
        uVar21 = ((uint)(uVar27 >> 0x14) & 0xffff ^ (uint)(uVar27 >> 4)) * -0x7a143595;
        uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
        uVar21 = uVar21 >> 0x10 ^ uVar21;
        if ((int)param_1[0x16] != *(int *)((longlong)param_1 + 0xdc)) {
          plVar16 = (longlong *)param_1[0x1d];
          if ((longlong *)param_1[0x1d] == (longlong *)0x0) {
            plVar16 = param_1 + 0x1c;
          }
          iVar31 = *(int *)((longlong)plVar16 + (ulonglong)((int)param_1[0x1e] - 1U & uVar21) * 4);
          if (iVar31 != -1) {
            do {
              lVar17 = *plVar12 + (longlong)iVar31 * 0xb0;
              if (*(ulonglong *)(*plVar12 + (longlong)iVar31 * 0xb0) == uVar27) {
                if (lVar17 != 0) goto LAB_140f04474;
                break;
              }
              iVar31 = *(int *)(lVar17 + 0xa0);
            } while (iVar31 != -1);
          }
        }
        local_70 = puVar28;
        FUN_1457c556c(plVar12,&local_64,uVar21,&local_70);
        lVar17 = *plVar12 + (longlong)local_64 * 0xb0;
LAB_140f04474:
        *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar19 + 0x1f8);
        puVar28 = puVar28 + 1;
      } while (puVar28 != puVar20);
    }
    iVar31 = *(int *)(lVar15 + 0x28);
    if ((longlong)iVar31 != 0) {
      lVar15 = 0;
      do {
        FUN_1403d27fe(param_1 + 0x15);
        *(undefined1 *)(param_1 + 0x1f) = 1;
        lVar15 = lVar15 + 8;
      } while ((longlong)iVar31 * 8 != lVar15);
    }
  }
  if ((((int)param_1[0x16] != *(int *)((longlong)param_1 + 0xdc)) || ((char)param_1[0x1f] == '\x01')
      ) && (lVar15 = param_1[3], lVar15 != 0)) {
    plVar12 = (longlong *)param_1[4];
    if (plVar12 == (longlong *)0x0) {
      lVar19 = param_1[6];
      lVar17 = *(longlong *)param_1[0xf];
      if (lVar17 == 0) {
        puVar13 = (undefined8 *)FUN_14001cc68(0x30);
        *puVar13 = 0;
        puVar13[1] = 0;
        *puVar13 = 0xbff0000000000000;
        puVar13[2] = 0;
        puVar13[3] = 0;
        puVar13[4] = 0;
        puVar13[5] = 0;
        lVar17 = param_1[0x11];
        uVar21 = (int)lVar17 + 1;
        *(uint *)(param_1 + 0x11) = uVar21;
        if (*(uint *)((longlong)param_1 + 0x8c) < uVar21) {
          FUN_1457c54e6(param_1 + 0x10);
        }
        *(undefined8 **)(param_1[0x10] + (longlong)(int)lVar17 * 8) = puVar13;
        plVar12 = *(longlong **)(param_1[0x10] + (longlong)((int)param_1[0x11] + -1) * 8);
      }
      else {
        plVar12 = *(longlong **)(lVar17 + 8);
        lVar8 = param_1[0xf];
        param_1[0xf] = lVar17;
        *(undefined8 *)(lVar17 + 8) = 0;
        if (lVar8 != 0) {
          FUN_1400020a8();
        }
      }
      *plVar12 = lVar19;
      param_1[4] = (longlong)plVar12;
    }
    *(undefined4 *)(plVar12 + 1) = *(undefined4 *)(lVar15 + 0x268);
    plVar16 = plVar12 + 2;
    iVar22 = (int)param_1[0x16] - *(int *)((longlong)param_1 + 0xdc);
    iVar31 = (int)plVar12[3];
    if (iVar31 < iVar22) {
      *(int *)(plVar12 + 3) = iVar22;
      if ((uint)(*(int *)((longlong)plVar12 + 0x1c) - iVar31) < (uint)(iVar22 - iVar31)) {
        FUN_140f0493c(plVar16);
      }
      memset((void *)((longlong)iVar31 * 8 + *plVar16),0,(longlong)(iVar22 - iVar31) << 3);
    }
    else {
      if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar22);
      }
      if (iVar22 < iVar31) {
        *(int *)(plVar12 + 3) = iVar22;
        FUN_140f04720(plVar16);
      }
    }
    plVar1 = plVar12 + 4;
    iVar22 = (int)param_1[0x16] - *(int *)((longlong)param_1 + 0xdc);
    iVar31 = (int)plVar12[5];
    if (iVar31 < iVar22) {
      *(int *)(plVar12 + 5) = iVar22;
      if ((uint)(*(int *)((longlong)plVar12 + 0x2c) - iVar31) < (uint)(iVar22 - iVar31)) {
        FUN_140f0483c(plVar1,iVar31);
      }
      FUN_140f046de((longlong)iVar31 * 0x80 + *plVar1);
    }
    else {
      if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar22);
      }
      if (iVar22 < iVar31) {
        *(int *)(plVar12 + 5) = iVar22;
        FUN_140f047ae(plVar1);
      }
    }
    iVar31 = (int)param_1[0x1a];
    local_80 = plVar16;
    if (iVar31 == 0) {
      uVar29 = 1;
      uVar27 = 0;
      iVar22 = 0;
      iVar30 = 0;
    }
    else {
      puVar14 = (uint *)param_1[0x19];
      if ((uint *)param_1[0x19] == (uint *)0x0) {
        puVar14 = (uint *)(param_1 + 0x17);
      }
      uVar21 = *puVar14;
      if (uVar21 == 0) {
        iVar22 = iVar31 + 0x1e;
        if (-1 < iVar31 + -1) {
          iVar22 = iVar31 + -1;
        }
        uVar27 = 0;
        uVar29 = (ulonglong)(uint)(iVar22 >> 5);
        if (iVar22 >> 5 < 1) {
          uVar29 = uVar27;
        }
        iVar30 = 0;
        do {
          if (uVar29 == uVar27) goto LAB_140f04361;
          iVar30 = iVar30 + 0x20;
          uVar21 = puVar14[uVar27 + 1];
          uVar27 = uVar27 + 1;
        } while (uVar21 == 0);
      }
      else {
        uVar27 = 0;
        iVar30 = 0;
      }
      uVar29 = (ulonglong)(-uVar21 & uVar21);
      uVar2 = uVar29 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar22 = (iVar30 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if (iVar31 <= iVar22) {
        iVar22 = iVar31;
      }
    }
    if (iVar22 < iVar31) {
      local_98 = param_1 + 0x15;
      uVar21 = 0xffffffff;
      iVar31 = 0;
      local_90 = (uint *)(param_1 + 0x17);
      local_78 = lVar15;
      do {
        lVar15 = *local_98;
        lVar19 = (longlong)iVar22 * 0xb0;
        dVar9 = *(double *)(local_78 + 0x1f8) - (double)_DAT_14c7618a4;
        pdVar3 = (double *)(lVar15 + 0x10 + lVar19);
        local_84 = uVar21;
        if (*pdVar3 <= dVar9 && dVar9 != *pdVar3) {
          FUN_145708b78();
          *(undefined8 *)(*local_80 + (longlong)iVar31 * 8) = 0;
          iVar31 = iVar31 + 1;
        }
        else if (((*(longlong *)(lVar15 + lVar19) != 0) &&
                 (plVar12 = (longlong *)FUN_14005b71c(), plVar12 != (longlong *)0x0)) &&
                (1 < *(byte *)((longlong)plVar12 + 0xc))) {
          lVar17 = lVar15 + lVar19;
          puVar13 = (undefined8 *)
                    (*(longlong *)(*plVar12 + 0x530) + (longlong)(int)plVar12[1] * 0x18);
          uVar10 = *puVar13;
          uVar11 = puVar13[1];
          *(undefined8 *)(lVar17 + 0x30) =
               *(undefined8 *)
                (*(longlong *)(*plVar12 + 0x530) + 0x10 + (longlong)(int)plVar12[1] * 0x18);
          *(undefined8 *)(lVar17 + 0x20) = uVar10;
          *(undefined8 *)(lVar17 + 0x28) = uVar11;
          lVar8 = *(longlong *)(*plVar12 + 0x548);
          lVar18 = (longlong)(int)plVar12[1] * 0x10;
          fVar4 = *(float *)(lVar8 + 0xc + lVar18);
          fVar5 = *(float *)(lVar8 + 8 + lVar18);
          fVar6 = *(float *)(lVar8 + 4 + lVar18);
          *(double *)(lVar17 + 0x40) = (double)*(float *)(lVar8 + lVar18);
          *(double *)(lVar17 + 0x48) = (double)fVar6;
          *(double *)(lVar17 + 0x50) = (double)fVar5;
          *(double *)(lVar17 + 0x58) = (double)fVar4;
          lVar18 = (longlong)(int)plVar12[1];
          lVar8 = *(longlong *)(*plVar12 + 0x278);
          fVar4 = *(float *)(lVar8 + 8 + lVar18 * 0xc);
          fVar5 = *(float *)(lVar8 + 4 + lVar18 * 0xc);
          *(double *)(lVar17 + 0x60) = (double)*(float *)(lVar8 + lVar18 * 0xc);
          *(double *)(lVar17 + 0x68) = (double)fVar5;
          *(double *)(lVar17 + 0x70) = (double)fVar4;
          lVar18 = (longlong)(int)plVar12[1];
          lVar8 = *(longlong *)(*plVar12 + 0x290);
          fVar4 = *(float *)(lVar8 + 8 + lVar18 * 0xc);
          fVar5 = *(float *)(lVar8 + 4 + lVar18 * 0xc);
          *(double *)(lVar17 + 0x78) = (double)*(float *)(lVar8 + lVar18 * 0xc) * 57.2957763671875;
          *(double *)(lVar17 + 0x80) = (double)fVar5 * 57.2957763671875;
          *(double *)(lVar17 + 0x88) = (double)fVar4 * 57.2957763671875;
          *(bool *)(lVar17 + 0x90) =
               *(char *)(*(longlong *)(*plVar12 + 0x2c0) + 0xb + (longlong)(int)plVar12[1] * 0x10)
               == '\x01';
          *(undefined8 *)(*local_80 + (longlong)iVar31 * 8) = *(undefined8 *)(lVar15 + lVar19);
          puVar13 = (undefined8 *)(lVar17 + 0x20);
          puVar23 = (undefined8 *)((longlong)iVar31 * 0x80 + *plVar1);
          for (lVar15 = 0xf; lVar15 != 0; lVar15 = lVar15 + -1) {
            *puVar23 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar23 = puVar23 + 1;
          }
          iVar31 = iVar31 + 1;
        }
        uVar21 = local_84 & ~(uint)uVar29;
        puVar14 = (uint *)param_1[0x19];
        if ((uint *)param_1[0x19] == (uint *)0x0) {
          puVar14 = local_90;
        }
        iVar7 = (int)param_1[0x1a];
        iVar22 = (int)uVar27;
        lVar15 = (longlong)iVar22;
        uVar24 = puVar14[lVar15] & uVar21;
        if (uVar24 == 0) {
          iVar25 = iVar7 + 0x1e;
          if (-1 < iVar7 + -1) {
            iVar25 = iVar7 + -1;
          }
          iVar25 = iVar25 >> 5;
          iVar26 = iVar25;
          if (iVar25 < iVar22) {
            iVar26 = iVar22;
          }
          if (iVar25 <= iVar22) break;
          lVar19 = 0;
          while( true ) {
            iVar30 = iVar30 + 0x20;
            uVar24 = puVar14[lVar15 + lVar19 + 1];
            if (uVar24 != 0) break;
            lVar19 = lVar19 + 1;
            if (iVar26 - lVar15 == lVar19) goto LAB_140f04361;
          }
          uVar27 = (ulonglong)(iVar22 + (int)lVar19 + 1);
          uVar21 = 0xffffffff;
        }
        uVar29 = (ulonglong)(-uVar24 & uVar24);
        uVar2 = uVar29 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar22 = (iVar30 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      } while (iVar22 < iVar7);
    }
LAB_140f04361:
    *(undefined1 *)(param_1 + 0x1f) = 0;
    if (param_1[4] != 0) {
      (**(code **)(*param_1 + 200))(param_1);
      param_1[4] = 0;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f04698 FUN_140f04698 body=70 status=ok
// SIG undefined FUN_140f04698(void)

void FUN_140f04698(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x90);
    *(undefined8 **)(param_1 + 0x90) = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 140f046de FUN_140f046de body=66 status=ok
// SIG undefined FUN_140f046de(void)

void FUN_140f046de(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0x3ff0000000000000;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 140f04720 FUN_140f04720 body=142 status=ok
// SIG undefined FUN_140f04720(void)

void FUN_140f04720(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 140f047ae FUN_140f047ae body=142 status=ok
// SIG undefined FUN_140f047ae(void)

void FUN_140f047ae(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff80U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 7,0x10);
      uVar3 = uVar3 >> 7;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x80,0x10);
    }
  }
  return;
}



// FUNCTION 140f0483c FUN_140f0483c body=255 status=ok
// SIG undefined FUN_140f0483c(void)

void FUN_140f0483c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x80;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x1ffffffffffffff) * 8]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 7)) {
      uVar3 = uVar4 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x80,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140f0493c FUN_140f0493c body=353 status=ok
// SIG undefined FUN_140f0493c(void)

void FUN_140f0493c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f049c1;
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
LAB_140f049c1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140f04a9e FUN_140f04a9e body=21 status=ok
// SIG undefined FUN_140f04a9e(void)

undefined8 FUN_140f04a9e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140f04ab4 FUN_140f04ab4 body=1591 status=ok
// SIG undefined FUN_140f04ab4(void)

void FUN_140f04ab4(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined ***pppuVar17;
  uint *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_c8 [32];
  char **local_a8;
  char *local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined ***local_88;
  undefined **local_78;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_50;
  
  lVar7 = DAT_14cb913f0;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14cb913f0 == 0) goto LAB_140f04cd1;
  local_98 = "CohtmlPlugin";
  local_90 = 0xc;
  local_8c = 0;
  uVar9 = FUN_14001a6c0(&local_98,1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  FUN_1402c9134(&DAT_14c874628,uVar9,&local_98,1);
  lVar5 = *(longlong *)(lVar7 + 0x3a0);
  plVar6 = *(longlong **)(lVar7 + 0x3a8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  puVar13 = DAT_14cb90bb0;
  if ((lVar5 != 0) && (lVar7 = *(longlong *)(lVar5 + 8), lVar7 != 0)) {
    piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    iVar10 = *piVar2;
    if (iVar10 == 0x40000002) {
      uVar9 = *DAT_14cb90bb0;
LAB_140f04c16:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (*piVar2 == 2)) goto LAB_140f04be6;
        if (*piVar2 == 1) {
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          if (DVar11 == DVar12) goto LAB_140f04be6;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar3 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar14 = (uint *)*puVar3;
        if (puVar14 != (uint *)0x0) goto LAB_140f04da0;
        while( true ) {
          uVar16 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar16 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar16 | 1;
            __tlregdtor(&LAB_143e8d541);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar13 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar13 = 0xffffffff;
          *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar3 = puVar13;
          FUN_140217a48(puVar3);
          puVar14 = (uint *)*puVar3;
LAB_140f04da0:
          puVar19 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar19 + 0x17);
          uVar16 = puVar14[0x12];
          if (puVar18 <= puVar14 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
            LOCK();
            uVar4 = *puVar14;
            *puVar14 = *puVar14 + uVar16 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar16) != 0xffffffff) break;
            puVar14 = (uint *)*puVar3;
            *puVar14 = 0xffffffff;
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar3 = puVar14;
            puVar19 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar19 + 0x17);
            uVar16 = 0;
            if (puVar18 <= puVar14 + 0x4000) {
              uVar16 = 1;
              goto LAB_140f04e20;
            }
          }
        }
        uVar16 = uVar16 + 1;
LAB_140f04e20:
        *(uint **)(puVar14 + 0x10) = puVar18;
        puVar14[0x12] = uVar16;
        iVar10 = 0;
        FUN_1447247dc(puVar19,0);
        *puVar19 = &PTR_FUN_14b4531f0;
        puVar19[0x15] = lVar7;
        *(undefined4 *)(puVar19 + 0x16) = uVar9;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar16 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
            uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
            iVar10 = 0;
          }
          else {
            uVar20 = 2;
          }
        }
        else {
          iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar20 = 5;
        }
        if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
        }
        puVar19[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar19[9] = puVar19;
        puVar19[10] = puVar19;
        lVar7 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar7 == 0) {
          uVar8 = 1;
          if ((char)uVar20 != '\x06') {
            uVar8 = uVar20;
          }
          uVar20 = uVar8;
          uVar15 = 0;
        }
        else {
          if ((char)uVar20 == '\x06') {
            uVar20 = *(ulonglong *)(lVar7 + 0x38) >> 0x3b;
          }
          uVar15 = *(undefined8 *)(lVar7 + 0x30);
        }
        puVar19[0xf] = uVar15;
        puVar19[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar19 + 0x1c) = iVar10;
        if (puVar19 == (undefined8 *)0x0) {
          local_98 = (char *)CONCAT71(local_98._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          local_98 = (char *)CONCAT71(local_98._1_7_,1);
          FUN_1447439e4(puVar19);
          LOCK();
          piVar2 = (int *)(puVar19 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar19)(puVar19,1);
          }
        }
      }
      else {
        local_88 = (undefined ***)0x0;
        local_78 = &PTR_LAB_14b453180;
        local_98 = &LAB_143e8e166;
        local_a8 = &local_98;
        local_70 = lVar7;
        local_68 = uVar9;
        FUN_14005a792(&DAT_14ca9a440,L"CohtmlRenderingCommandUpdateSamplers",&DAT_14cb90ca8);
        if (local_98 != (char *)0x0) {
          pppuVar17 = local_88;
          if (local_88 == (undefined ***)0x0) {
            pppuVar17 = &local_78;
          }
          (*(code *)(*pppuVar17)[2])();
        }
      }
    }
    else {
      bVar21 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar10 != 2)) {
        if (iVar10 == 1) {
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          bVar21 = DVar11 == DVar12;
          iVar10 = *piVar2;
        }
        else {
          bVar21 = false;
        }
      }
      uVar9 = puVar13[bVar21 ^ 1];
      if (DAT_14c86a9fc == 0) {
        if ((iVar10 != 2) && (iVar10 != 0x10)) {
          if (iVar10 == 1) {
            DVar11 = FUN_140ad26c0();
            DVar12 = GetCurrentThreadId();
            if (DVar11 == DVar12) goto LAB_140f04be6;
          }
          goto LAB_140f04c16;
        }
      }
      else if (iVar10 != 0x10) goto LAB_140f04c16;
LAB_140f04be6:
      FUN_140e423cc(lVar7,uVar9);
    }
  }
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
LAB_140f04cd1:
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f05128 FUN_140f05128 body=191 status=ok
// SIG undefined FUN_140f05128(void)

undefined8 FUN_140f05128(undefined2 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  
  iVar1 = *(int *)(param_1 + 2);
  uVar4 = iVar1 / 2 & 0x80000001;
  iVar6 = iVar1 + 0x1f;
  iVar2 = iVar1 + 0xf;
  if (-1 < iVar1) {
    iVar6 = iVar1;
    iVar2 = iVar1;
  }
  bVar9 = (iVar2 >> 4 & 0x80000001U) == 1;
  uVar7 = iVar6 >> 5 & 0x80000001;
  lVar8 = (ulonglong)bVar9 << 0x28;
  if (uVar4 != 1) {
    lVar8 = (ulonglong)(uVar7 == 1) << 0x30;
  }
  if ((((SUB81((ulonglong)lVar8 >> 0x28,0) == bVar9) && (param_2 != 1 || uVar4 != 1)) &&
      ((ushort)((ulonglong)lVar8 >> 0x30) == (ushort)(uVar7 == 1))) &&
     (cVar3 = FUN_144880847(*param_1,0), cVar3 != '\0')) {
    uVar5 = FUN_140bb8ec0(param_1,param_2);
    return uVar5;
  }
  return 0;
}



// FUNCTION 140f051e7 FUN_140f051e7 body=59 status=ok
// SIG undefined FUN_140f051e7(void)

void FUN_140f051e7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140f05222(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a5005f0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[7] = 0x4000000040800000;
  puVar1[8] = 0x4000000040800000;
  *(undefined2 *)(puVar1 + 9) = 0x202;
  return;
}



// FUNCTION 140f05222 FUN_140f05222 body=101 status=ok
// SIG undefined FUN_140f05222(void)

undefined8 * FUN_140f05222(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a51f890;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 140f05296 FUN_140f05296 body=21 status=ok
// SIG undefined FUN_140f05296(void)

void FUN_140f05296(undefined8 param_1)

{
  FUN_14002cacc(param_1,0);
  FUN_140f052ac();
  return;
}



// FUNCTION 140f052ac FUN_140f052ac body=96 status=ok
// SIG undefined FUN_140f052ac(void)

void FUN_140f052ac(void)

{
  char cVar1;
  char *lpAddress;
  
  lpAddress = TlsGetValue(DAT_14c758740);
  if (lpAddress != (char *)0x0) {
    FUN_140f0530c();
    lpAddress[0x670] = '\0';
    LOCK();
    cVar1 = *lpAddress;
    if (cVar1 == '\x01') {
      *lpAddress = '\0';
    }
    UNLOCK();
    if (cVar1 != '\x01') {
      FUN_14008cdb0(lpAddress);
    }
    VirtualFree(lpAddress,0,0x8000);
  }
                    /* WARNING: Could not recover jumptable at 0x000140f052fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(DAT_14c758740,(LPVOID)0x0);
  return;
}



// FUNCTION 140f0530c FUN_140f0530c body=110 status=ok
// SIG undefined FUN_140f0530c(void)

void FUN_140f0530c(undefined8 param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_140f155cc();
  EnterCriticalSection(lpCriticalSection);
  uVar1 = FUN_140f15562();
  local_20 = &local_28;
  FUN_140f0537c(uVar1);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0537c FUN_140f0537c body=211 status=ok
// SIG undefined FUN_140f0537c(void)

int FUN_140f0537c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar4 = (int)param_1[1];
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar3 = 0;
    bVar10 = *plVar1 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar2 = iVar7 + 1;
      if (iVar7 + 1 < iVar4) {
        iVar2 = iVar4;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar2;
        if (lVar5 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar1[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar3 != iVar7) {
          memmove(plVar1 + iVar3,plVar1 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar3 = iVar3 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar5);
    *(int *)(param_1 + 1) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 140f05450 FUN_140f05450 body=230 status=ok
// SIG undefined FUN_140f05450(void)

void FUN_140f05450(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    uVar1 = *param_2;
    uVar8 = (**(code **)(*(longlong *)(param_1 + -0x398) + 0x390))(param_1 + -0x398);
    lVar2 = *(longlong *)(param_1 + 0x1d0);
    lVar5 = *(longlong *)(lVar2 + 0x350);
    if (lVar5 == 0) {
      uVar6 = FUN_1407f787c();
      lVar5 = FUN_14477b664(uVar6);
      *(longlong *)(lVar2 + 0x350) = lVar5;
    }
    lVar7 = *(longlong *)(lVar2 + 0x358);
    if (((lVar7 == 0) && (lVar7 = 0, lVar5 != 0)) && (*(longlong *)(lVar2 + 0x348) != 0)) {
      plVar3 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
        lVar7 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar2 + 0x348));
      }
      *(longlong *)(lVar2 + 0x358) = lVar7;
    }
    FUN_1447997cc(uVar1,lVar7,uVar8,0,0);
    return;
  }
  return;
}



// FUNCTION 140f05536 FUN_140f05536 body=806 status=ok
// SIG undefined FUN_140f05536(void)

uint FUN_140f05536(longlong param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  uint uVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar11 = 0;
  if ((((*(uint *)(param_1 + 8) & 0x10) == 0) && (lVar6 = *(longlong *)(param_1 + 0x20), lVar6 != 0)
      ) && (-1 < (short)*(undefined4 *)(lVar6 + 8))) {
    uVar2 = *(uint *)(lVar6 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1c & 1) == 0) {
      if (DAT_14cae8b20 == 0) {
        local_50 = &local_38;
        local_38 = (code *)&LAB_14355090c;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_147b8e16d;
        local_60 = (code *)&LAB_140810a38;
        local_68 = L"Engine";
        local_70 = 0x800000000;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar6 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_50 = &local_38;
        local_38 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_1468c5283;
        local_60 = FUN_142809da0;
        local_68 = L"Engine";
        local_70 = 0x400000000;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar4 = *(longlong *)(param_1 + 0x20);
      if (lVar4 != 0) {
        iVar3 = *(int *)(lVar6 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar3) ||
             (lVar7 = lVar4,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8)
             != lVar6 + 0x30)) {
            lVar7 = 0;
          }
        } while ((lVar7 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
        if ((lVar7 != 0) && (lVar6 = *(longlong *)(lVar7 + 0xc0), lVar6 != 0)) {
          if (*(longlong *)(lVar6 + 0x1f0) == 0) {
            plVar5 = (longlong *)(lVar6 + 0x458);
          }
          else {
            plVar5 = (longlong *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
          }
          lVar6 = *(longlong *)(param_1 + 0x1d0);
          fVar10 = -1.0;
          if (lVar6 != 0) {
            lVar4 = *plVar5;
            uVar11 = (uint)lVar6;
            if ((int)(uVar11 & 0xffffff) < *(int *)(lVar4 + 0x10)) {
              lVar7 = lVar4 + 0x18;
              if (*(longlong *)(lVar4 + 0x28) != 0) {
                lVar7 = *(longlong *)(lVar4 + 0x28);
              }
              if ((*(uint *)(lVar7 + (ulonglong)((uVar11 & 0xffffff) >> 5) * 4) >> (uVar11 & 0x1f) &
                  1) != 0) {
                lVar7 = *(longlong *)(lVar4 + 8);
                lVar9 = (ulonglong)(uVar11 & 0xffffff) * 0x70;
                lVar8 = lVar7 + lVar9;
                if (((lVar8 != 0) && (*(longlong *)(lVar7 + 0x60 + lVar9) == lVar6)) &&
                   (cVar1 = *(char *)(lVar7 + 1 + lVar9), cVar1 != '\x04')) {
                  if (cVar1 == '\x01') {
                    fVar10 = (float)(*(double *)(lVar8 + 8) - *(double *)(lVar4 + 0x140));
                  }
                  else if (cVar1 == '\x03') {
                    fVar10 = 0.0;
                  }
                  else {
                    fVar10 = (float)*(double *)(lVar8 + 8);
                  }
                }
              }
            }
          }
          uVar11 = -(uint)(fVar10 != -1.0) & (uint)fVar10;
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0585e FUN_140f0585e body=86 status=ok
// SIG undefined FUN_140f0585e(void)

void FUN_140f0585e(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1403966e6();
  if (cVar1 != '\0') {
    AcquireSRWLockShared((PSRWLOCK)&DAT_14ca80410);
    lVar2 = FUN_140f058b4(param_1);
    if (lVar2 != 0) {
      FUN_140f05a26(lVar2,param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x000140f058a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca80410);
    return;
  }
  return;
}



// FUNCTION 140f058b4 FUN_140f058b4 body=175 status=ok
// SIG undefined FUN_140f058b4(void)

undefined8 FUN_140f058b4(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 8) + -1;
  if (*(int *)(param_1 + 8) == 0) {
    iVar2 = 0;
  }
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
    } while (iVar2 != iVar4);
  }
  iVar2 = FUN_140f05964(&DAT_14ca80418);
  uVar1 = 0;
  if ((iVar2 != -1) && (lVar3 = (longlong)iVar2 * 0x20 + DAT_14ca80418, lVar3 != 0)) {
    uVar1 = *(undefined8 *)(lVar3 + 0x10);
  }
  return uVar1;
}



// FUNCTION 140f05964 FUN_140f05964 body=193 status=ok
// SIG undefined FUN_140f05964(void)

int FUN_140f05964(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_140f059a6:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_140f059fe;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_140f059fe;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_140f05a04;
    }
  }
  return -1;
LAB_140f059fe:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_140f05a04:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_140f059a6;
}


