// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140653a7a FUN_140653a7a body=168 status=ok
// SIG undefined FUN_140653a7a(void)

ulonglong FUN_140653a7a(void)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  undefined4 extraout_var;
  ulonglong uVar7;
  
  cVar3 = FUN_140653b22();
  if ((((cVar3 != '\0') && (cVar3 = FUN_140102e2b(), lVar2 = DAT_14ca43230, cVar3 == '\0')) &&
      (*(char *)(DAT_14ca43218 + 1) == '\x01')) &&
     ((*(char *)(DAT_14ca43278 + 1) == '\x01' && (*(char *)(DAT_14ca432d8 + 1) == '\x01')))) {
    uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    uVar6 = (ulonglong)uVar1;
    if ((uVar1 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (uVar1 == 2)))) {
      uVar7 = 0;
    }
    else if (uVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar6 = CONCAT44(extraout_var,DVar5);
      uVar7 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar7 = 1;
    }
    return CONCAT71((int7)(uVar6 >> 8),*(undefined1 *)(lVar2 + uVar7)) ^ 1;
  }
  return 0;
}



// FUNCTION 140653b22 FUN_140653b22 body=310 status=ok
// SIG undefined FUN_140653b22(void)

undefined1 FUN_140653b22(void)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca43318) {
    FUN_144b3d300(&DAT_14ca43318);
    if (DAT_14ca43318 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.gbx.ProjectAllowGbxForegroundDepth",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14ca43310 = 0;
      }
      else {
        DAT_14ca43310 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14ca43318);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca43320) {
    FUN_144b3d300(&DAT_14ca43320);
    lVar1 = DAT_14ca43310;
    if (DAT_14ca43320 == -1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar4 = 0;
      }
      else {
        bVar2 = FUN_144a61b4f();
        uVar4 = (ulonglong)(bVar2 ^ 1);
      }
      DAT_14ca4331c = *(int *)(lVar1 + uVar4 * 4) != 0;
      _Init_thread_footer(&DAT_14ca43320);
    }
  }
  return DAT_14ca4331c;
}



// FUNCTION 140653c66 FUN_140653c66 body=222 status=ok
// SIG undefined FUN_140653c66(void)

undefined8 FUN_140653c66(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_58 [36];
  undefined8 local_34;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) != 0) {
      uVar3 = 0;
      goto LAB_140653cec;
    }
  }
  else {
    (**(code **)(*param_1 + 0x20))(param_1,param_1[1]);
    puVar2 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar2 + 1;
    if ((int *)puVar2[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(int *)*puVar2;
      *puVar2 = (ulonglong)piVar1;
    }
    if (0 < local_2c) {
      iVar4 = 0;
      do {
        local_34 = 0;
        (**(code **)(*param_2 + 0x160))(param_2,&local_34);
        (**(code **)*param_1)(param_1,&local_34);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_2c);
    }
  }
  uVar3 = 1;
LAB_140653cec:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 140653d46 FUN_140653d46 body=101 status=ok
// SIG undefined FUN_140653d46(void)

undefined8 FUN_140653d46(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[1] == 0) {
    uVar1 = 0;
  }
  else {
    local_20 = 0;
    FUN_1405593a8(param_1[1],&local_20,param_2);
    uVar1 = (**(code **)(*param_1 + 8))(param_1,&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140653dac FUN_140653dac body=1581 status=ok
// SIG undefined FUN_140653dac(void)

void FUN_140653dac(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
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
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar10 = (longlong *)*param_2;
  if (plVar10 == (longlong *)0x0) {
LAB_14065404e:
    *(undefined8 *)(param_1 + 0x24c0) = 0;
    local_78 = (code *)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    uVar5 = 0;
    FUN_1446ddda2(&local_78,"pingable_lootable",0);
    if (DAT_14cb88fb8 != 0) {
      uVar5 = FUN_144815d88(DAT_14cb88fb8,&local_78);
    }
    *(undefined8 *)(param_1 + 0x16b8) = uVar5;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar3 = (**(code **)(*plVar10 + 8))(plVar10);
    lVar4 = FUN_1406543da();
    if (((lVar4 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)) goto LAB_14065404e;
    *(longlong **)(param_1 + 0x24c0) = plVar10;
    lVar3 = plVar10[0x7a];
    if (lVar3 == 0) {
      uVar5 = FUN_14065883a();
      lVar3 = FUN_14477b664(uVar5);
      plVar10[0x7a] = lVar3;
    }
    lVar4 = plVar10[0x7b];
    if (((lVar4 == 0) && (lVar4 = 0, lVar3 != 0)) && (plVar10[0x79] != 0)) {
      plVar7 = *(longlong **)(lVar3 + 0xb8);
      if ((plVar7 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar7 + 0x110))(plVar7);
        lVar4 = FUN_144aff482(uVar5,plVar10 + 0x79);
      }
      plVar10[0x7b] = lVar4;
    }
    *(longlong *)(param_1 + 0x16b8) = lVar4;
  }
  FUN_140655f5e(param_1,param_2);
  if ((((*(longlong *)(param_1 + 0x24c0) == 0) || (*(longlong *)(param_1 + 0x2288) == 0)) ||
      (lVar3 = FUN_140655cde(*(longlong *)(param_1 + 0x24c0) + 0x630), lVar3 == 0)) ||
     (plVar10 = *(longlong **)(param_1 + 0x2288), plVar10 == (longlong *)0x0)) goto LAB_140654160;
  if (DAT_14cb63950 == 0) {
    local_90 = &local_78;
    local_78 = FUN_144a7958c;
    local_80 = FUN_14081d0ea;
    local_88 = &LAB_1464ec72a;
    local_98 = &LAB_1486f5f75;
    local_a0 = &LAB_140945686;
    local_a8 = L"Engine";
    local_b0 = 0;
    local_b8 = 0x10000004;
    local_c0 = 0x10;
    local_c8 = 0x19d0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
    plVar10 = *(longlong **)(param_1 + 0x2288);
    if (plVar10 == (longlong *)0x0) goto LAB_140654160;
  }
  if (((DAT_14cb63950 == 0) || (lVar4 = plVar10[2], lVar4 == 0)) ||
     ((*(int *)(lVar4 + 0x38) < *(int *)(DAT_14cb63950 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) !=
       DAT_14cb63950 + 0x30)))) goto LAB_140654160;
  FUN_1406547e8(plVar10,lVar3,1);
  puVar9 = &DAT_14cbcccb8;
  if (*(char *)(*(longlong *)(param_1 + 0x24c0) + 0x458) != '\0') {
    puVar9 = &DAT_14cbcccc0;
  }
  (**(code **)(*plVar10 + 0x728))(plVar10,*puVar9,1);
  uVar5 = FUN_1406544dc();
  FUN_14065465c(plVar10,uVar5);
  *(byte *)((longlong)plVar10 + 0x2d4) = *(byte *)((longlong)plVar10 + 0x2d4) & 0xbf;
  FUN_14045627c(plVar10,1,1);
  FUN_1449e3cec(plVar10,0,1);
  lVar3 = 0;
  if (plVar10[0x15d] != 0) {
    lVar6 = FUN_1406544dc();
    lVar4 = plVar10[0x15d];
    if (lVar4 == 0) {
LAB_140653fa3:
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      if ((lVar6 != 0) && (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0)) {
        if ((*(int *)(lVar1 + 0x38) < *(int *)(lVar6 + 0x38)) ||
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
            lVar6 + 0x30)) goto LAB_140653fa3;
        lVar3 = lVar4;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar4);
        }
      }
    }
  }
  *(longlong *)(param_1 + 0x2290) = lVar3;
  lVar3 = FUN_140654c40(*(longlong *)(param_1 + 0x24c0) + 0x658);
  if (lVar3 != 0) {
    (**(code **)(*plVar10 + 0xaa0))(plVar10,lVar3,0,1);
  }
  FUN_1406548f2(plVar10);
  lVar3 = *(longlong *)(param_1 + 0x24c0);
  iVar8 = *(int *)(lVar3 + 0x6f0);
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  plVar7 = plVar10 + 0xc4;
  if (*(int *)((longlong)plVar10 + 0x62c) < iVar8) {
    FUN_1474ba72a(plVar7);
    lVar3 = *(longlong *)(param_1 + 0x24c0);
    iVar8 = *(int *)(lVar3 + 0x6f0);
  }
  if (iVar8 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x6e8);
    lVar4 = (longlong)iVar8 * 0x28;
    do {
      lVar6 = FUN_1402d20ea(lVar3);
      if (lVar6 != 0) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar6);
        }
        iVar8 = (int)plVar10[0xc5];
        *(uint *)(plVar10 + 0xc5) = iVar8 + 1U;
        if (*(uint *)((longlong)plVar10 + 0x62c) < iVar8 + 1U) {
          FUN_140655806(plVar7,iVar8);
        }
        *(longlong *)(*plVar7 + (longlong)iVar8 * 8) = lVar6;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar6);
        }
      }
      lVar3 = lVar3 + 0x28;
      lVar4 = lVar4 + -0x28;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)(**(code **)(*(longlong *)(param_1 + -0x68) + 0x18))(param_1 + -0x68);
  if ((DAT_14cbcd1e0 != 0) && ((longlong)(int)plVar7[1] != 0)) {
    lVar3 = 0;
    do {
      if (*(longlong *)(*plVar7 + 0x68 + lVar3) == DAT_14cbcd1e0) {
        iVar8 = (int)(lVar3 >> 3) * -0xf0f0f0f;
        if ((iVar8 != -1) && (*plVar7 + (longlong)iVar8 * 0x88 != 0)) {
          FUN_1406549c8(param_1 + -0x400);
        }
        break;
      }
      lVar3 = lVar3 + 0x88;
    } while ((longlong)(int)plVar7[1] * 0x88 != lVar3);
  }
  lVar3 = *(longlong *)(param_1 + 0x24c0);
  lVar4 = *(longlong *)(lVar3 + 0x680);
  if (plVar10[0x2b1] != lVar4) {
    plVar10[0x2b3] = 0;
  }
  plVar10[0x2b1] = lVar4;
  if (plVar10[0x2b2] != *(longlong *)(lVar3 + 0x688)) {
    plVar10[0x2b3] = 0;
  }
  uVar5 = FUN_14477b664();
  lVar4 = FUN_14477b664(uVar5);
  plVar10[0x2b2] = lVar4;
  plVar10[0x2b3] = *(longlong *)(lVar3 + 0x690);
  FUN_1406545c2(plVar10 + 0x2b4,*(longlong *)(param_1 + 0x24c0) + 0x698);
LAB_140654160:
  FUN_140654414(param_1 + -0x400);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406543da FUN_1406543da body=57 status=ok
// SIG undefined FUN_1406543da(void)

void FUN_1406543da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba54d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba54d0 = FUN_140002ddd(FUN_1465c2bce,uVar1,L"LootableObjectDef");
  }
  return;
}



// FUNCTION 140654414 FUN_140654414 body=199 status=ok
// SIG undefined FUN_140654414(void)

void FUN_140654414(longlong param_1)

{
  char cVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(longlong *)(param_1 + 0x2688) != 0) && (*(longlong *)(param_1 + 0x28c0) != 0)) &&
      (*(char *)(*(longlong *)(param_1 + 0x28c0) + 0x779) == '\x01')) &&
     ((*(uint *)(param_1 + 8) & 0x30) == 0)) {
    cVar1 = (**(code **)(*(longlong *)(param_1 + 0x3c0) + 0x58))(param_1 + 0x3c0);
    cVar2 = (**(code **)(*(longlong *)(param_1 + 0x3c0) + 0x70))(param_1 + 0x3c0);
    if (cVar1 == '\0') {
      if (cVar2 == '\0') {
        local_48 = 0;
        uStack_44 = 0x3f800000;
      }
      else {
        local_48 = 0x3f800000;
        uStack_44 = 0;
      }
    }
    else {
      local_48 = 0;
      uStack_44 = 0;
    }
    uStack_30 = 0;
    uStack_2c = 0x3f800000;
    uStack_40 = 0;
    uStack_3c = 0x3f800000;
    local_38 = local_48;
    uStack_34 = uStack_44;
    FUN_140654ea0(*(undefined8 *)(param_1 + 0x2688),DAT_14cbcccb0);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406544dc FUN_1406544dc body=228 status=ok
// SIG undefined FUN_1406544dc(void)

longlong FUN_1406544dc(void)

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
  if (DAT_14cba5450 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1433d5220;
    local_20 = FUN_142b32f24;
    local_28 = &LAB_1462ac436;
    local_38 = &LAB_148bda20b;
    local_40 = FUN_140b481d9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x1b10;
    FUN_14081cfa3(L"/Script/OakGame",L"LootableObjectAnimInstance",&DAT_14cba5450,&DAT_148bda20a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba5450;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406545c2 FUN_1406545c2 body=154 status=ok
// SIG undefined FUN_1406545c2(void)

longlong FUN_1406545c2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_1406545ee;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_1406545ee:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140655968(param_1,param_2);
  return param_1;
}



// FUNCTION 14065465c FUN_14065465c body=173 status=ok
// SIG undefined FUN_14065465c(void)

void FUN_14065465c(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)((longlong)param_1 + 0x1179) == '\x01') {
    local_28 = 0;
    FUN_14485c47a(&local_28,param_2);
    param_1[0x230] = local_28;
    *(undefined1 *)(param_1 + 0x231) = 1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  (**(code **)(*param_1 + 0xd50))(param_1,param_2);
  FUN_140654714(param_1,param_2);
  (**(code **)(*param_1 + 0xd58))(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001406546c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xcf0))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140654714 FUN_140654714 body=211 status=ok
// SIG undefined FUN_140654714(void)

void FUN_140654714(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    param_1[0x15c] = 0;
                    /* WARNING: Could not recover jumptable at 0x0001406547d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xcb0))(param_1);
    return;
  }
  cVar1 = *(char *)((longlong)param_1 + 0xc5f);
  *(undefined1 *)((longlong)param_1 + 0xc5f) = 0;
  lVar3 = param_1[0x15c];
  if (lVar3 != 0) {
    lVar2 = FUN_1402e44f4();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar3 = param_1[0x15c];
      goto LAB_14065476e;
    }
  }
  lVar3 = 0;
LAB_14065476e:
  if ((cVar1 == '\0') && (lVar3 == param_2)) {
    return;
  }
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  param_1[0x15c] = param_2;
  (**(code **)(*param_1 + 0xcb0))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001406547b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc68))(param_1,1);
  return;
}



// FUNCTION 1406547e8 FUN_1406547e8 body=189 status=ok
// SIG undefined FUN_1406547e8(void)

void FUN_1406547e8(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)((longlong)param_1 + 0x1179) == '\x01') {
    local_28 = 0;
    FUN_14485c47a(&local_28,param_2);
    *(undefined8 *)((longlong)param_1 + 0x118c) = local_28;
    *(undefined1 *)((longlong)param_1 + 0x1194) = 1;
  }
  else if (*(char *)((longlong)param_1 + 0x117a) == '\0') {
    (**(code **)(*param_1 + 0xd60))(param_1,param_2,1);
    FUN_1406568ce(param_1,param_2,param_3);
    (**(code **)(*param_1 + 0xd68))(param_1,param_2,1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406548ba FUN_1406548ba body=56 status=ok
// SIG undefined FUN_1406548ba(void)

void FUN_1406548ba(longlong param_1)

{
  if (*(int *)(param_1 + 0x1840) == *(int *)(param_1 + 0x186c)) {
    return;
  }
  FUN_1406c91c0(param_1 + 0x1838);
  FUN_14065863e(param_1 + 0x1838);
  return;
}



// FUNCTION 1406548f2 FUN_1406548f2 body=213 status=ok
// SIG undefined FUN_1406548f2(void)

void FUN_1406548f2(longlong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (int)param_1[0xc5];
  if (iVar3 == 0) {
    return;
  }
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(param_1[0xc4] + lVar4 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1);
        iVar3 = (int)param_1[0xc5];
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  *(undefined4 *)(param_1 + 0xc5) = 0;
  if (*(int *)((longlong)param_1 + 0x62c) < 0) {
    FUN_1474ba72a(param_1 + 0xc4,0);
  }
  if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) != 0) goto LAB_1406549a7;
  bVar2 = *(byte *)((longlong)param_1 + 0x9d);
  if ((bVar2 & 1) != 0) {
    if (param_1[0x16] != 0) goto LAB_1406549a7;
    lVar4 = FUN_1448abda6(param_1);
    if (lVar4 != 0) goto LAB_1406549a7;
    bVar2 = *(byte *)((longlong)param_1 + 0x9d);
  }
  *(byte *)((longlong)param_1 + 0x9d) = bVar2 | 1;
  FUN_1401057d4(param_1);
  FUN_14010586c(&DAT_14cad0140,param_1);
LAB_1406549a7:
                    /* WARNING: Could not recover jumptable at 0x0001406549b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1);
  return;
}



// FUNCTION 1406549c8 FUN_1406549c8 body=238 status=ok
// SIG undefined FUN_1406549c8(void)

void FUN_1406549c8(longlong param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  
  if ((((*(longlong *)(param_1 + 0x28c0) == 0) || (*(longlong *)(param_2 + 0x68) != DAT_14cbcd1e0))
      || (*(longlong *)(param_1 + 0x2690) == 0)) ||
     (lVar3 = FUN_140654ab6(*(longlong *)(param_1 + 0x28c0) + 0x6f8), lVar3 == 0)) {
    return;
  }
  iVar2 = *(int *)(param_2 + 0x80);
  fVar8 = (float)FUN_1406400be(param_1 + 0x4d8);
  fVar1 = *(float *)(param_2 + 0x84);
  uVar7 = -(uint)(fVar1 < 0.0);
  if (iVar2 < 1) {
    lVar4 = FUN_140654ab6(*(longlong *)(param_1 + 0x28c0) + 0x720);
    uVar5 = *(undefined8 *)(param_1 + 0x2690);
    if (lVar4 == 0) {
      uVar6 = 1;
      lVar4 = lVar3;
      goto LAB_140654a7f;
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x2690);
    lVar4 = lVar3;
  }
  uVar6 = 0;
LAB_140654a7f:
  FUN_140655b16(uVar5,lVar4,uVar6,uVar7 & 0x7f7fffff | ~uVar7 & (uint)(fVar8 - fVar1));
  return;
}



// FUNCTION 140654ab6 FUN_140654ab6 body=394 status=ok
// SIG undefined FUN_140654ab6(void)

longlong FUN_140654ab6(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      if (lVar4 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar4 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar3 = *(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
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
        uVar3 = *(uint *)(lVar7 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar7 + 0x10) = uVar6;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar6;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar7 = FUN_14063d1f6();
  if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
      lVar7 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 140654c40 FUN_140654c40 body=386 status=ok
// SIG undefined FUN_140654c40(void)

longlong FUN_140654c40(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      if (lVar4 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar4 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar3 = *(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
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
        uVar3 = *(uint *)(lVar7 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar7 + 0x10) = uVar6;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar6;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar7 = FUN_140654dc2();
  if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
      lVar7 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 140654dc2 FUN_140654dc2 body=221 status=ok
// SIG undefined FUN_140654dc2(void)

longlong FUN_140654dc2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caf7c28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147c7d6e5;
    local_40 = FUN_1436352ef;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x150;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsAsset",&DAT_14caf7c28,&DAT_147c7d6e4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf7c28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140654ea0 FUN_140654ea0 body=683 status=ok
// SIG undefined FUN_140654ea0(void)

void FUN_140654ea0(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_e8 [36];
  int local_c4;
  longlong *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8 [2];
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  longlong local_78;
  int iStack_70;
  int iStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = param_3;
  iVar2 = (**(code **)(*param_1 + 0xa08))();
  local_c4 = (**(code **)(*param_1 + 0x7b0))(param_1);
  if (local_c4 < iVar2) {
    local_c4 = iVar2;
  }
  if (0 < local_c4) {
    iVar2 = 0;
    do {
      plVar6 = (longlong *)(**(code **)(*param_1 + 0x610))(param_1,iVar2);
      if (plVar6 != (longlong *)0x0) {
        local_98 = (longlong *)0x0;
        uStack_90 = 0;
        local_a8[0] = 0;
        local_a8[1] = 0;
        (**(code **)(*plVar6 + 0x370))(plVar6,1,&local_98,local_a8);
        if ((longlong)(int)uStack_90 != 0) {
          lVar7 = (longlong)(int)uStack_90 << 4;
          plVar11 = local_98;
LAB_140654f62:
          if (*plVar11 != param_2) goto code_r0x000140654f67;
          local_78 = plVar6[3];
          FUN_1400021e4(&local_78,&local_b8);
          iVar4 = (int)local_b0;
          iVar3 = ((int)local_b0 == 0) + 8;
          local_78 = local_b8;
          local_b8 = 0;
          iStack_70 = (int)local_b0;
          iVar5 = local_b0._4_4_;
          iStack_6c = local_b0._4_4_;
          local_b0 = 0;
          iVar10 = iVar3 + iVar4;
          if (iVar10 < iVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar3);
          }
          if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar10);
          }
          if (iVar5 < iVar10) {
            FUN_1446f8c06(&local_78);
          }
          FUN_1400020e8(&local_78,L"_Dynamic",8);
          iVar4 = iStack_70 + -1;
          if (iStack_70 == 0) {
            iVar4 = 0;
          }
          FUN_1446f82e2(&local_80,iVar4,local_78,1);
          uVar1 = local_80;
          if (local_78 != 0) {
            FUN_1400020a8();
          }
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          plVar8 = (longlong *)(**(code **)(*param_1 + 0x678))(param_1,iVar2,0,uVar1);
          if ((plVar6 != plVar8) && (iVar4 = (**(code **)(*param_1 + 0x7b0))(param_1), 0 < iVar4)) {
            iVar4 = 0;
            do {
              plVar9 = (longlong *)(**(code **)(*param_1 + 0x610))(param_1,iVar4);
              if (plVar9 == plVar6) {
                (**(code **)(*param_1 + 0x638))(param_1,iVar4,plVar8);
              }
              iVar4 = iVar4 + 1;
              iVar5 = (**(code **)(*param_1 + 0x7b0))(param_1);
            } while (iVar4 < iVar5);
          }
          if (plVar8 != (longlong *)0x0) {
            local_78 = *local_c0;
            iStack_70 = (int)local_c0[1];
            iStack_6c = *(int *)((longlong)local_c0 + 0xc);
            FUN_14016d7a8(plVar8,plVar11,&local_78);
          }
        }
LAB_1406550bb:
        if (local_a8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_98 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != local_c4);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000140654f67:
  plVar11 = plVar11 + 2;
  lVar7 = lVar7 + -0x10;
  if (lVar7 == 0) goto LAB_1406550bb;
  goto LAB_140654f62;
}



// FUNCTION 140655154 FUN_140655154 body=358 status=ok
// SIG undefined FUN_140655154(void)

longlong FUN_140655154(longlong *param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 != 0) {
    (**(code **)(*param_1 + 0x638))(param_1,param_2);
  }
  lVar1 = (**(code **)(*param_1 + 0x610))(param_1,param_2);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    if (DAT_14caec470 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1417df956;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1463eaa20;
      local_58 = &LAB_147bbd9ea;
      local_60 = FUN_1401cf6d7;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x330;
      FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e);
    }
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(DAT_14caec470 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) != DAT_14caec470 + 0x30)) {
      lVar1 = FUN_14090ceee(lVar1,param_1,param_4);
      (**(code **)(*param_1 + 0x638))(param_1,param_2,lVar1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406552bc FUN_1406552bc body=768 status=ok
// SIG undefined FUN_1406552bc(void)

void FUN_1406552bc(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((int)param_2 < 0) goto LAB_140655308;
  plVar5 = param_1 + 0xc4;
  iVar1 = (int)param_1[0xc5];
  uVar7 = (ulonglong)param_2;
  if ((int)param_2 < iVar1) {
    if (*(longlong **)(*plVar5 + uVar7 * 8) == param_3) goto LAB_140655308;
  }
  else {
    *(uint *)(param_1 + 0xc5) = param_2 + 1;
    uVar6 = (param_2 + 1) - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0x62c) - iVar1) < uVar6) {
      FUN_140655806(plVar5);
    }
    memset((void *)((longlong)iVar1 * 8 + *plVar5),0,(longlong)(int)uVar6 << 3);
  }
  if (param_3 != (longlong *)0x0) {
    if (DAT_14caec470 == 0) {
      local_60 = &local_40;
      local_40 = FUN_1417df956;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1463eaa20;
      local_68 = &LAB_147bbd9ea;
      local_70 = FUN_1401cf6d7;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x330;
      FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e);
    }
    if ((*(int *)(DAT_14caec470 + 0x38) <= *(int *)(param_3[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) ==
        DAT_14caec470 + 0x30)) {
      lVar4 = *(longlong *)(*plVar5 + uVar7 * 8);
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar4);
      }
      if (param_3[0x22] == lVar4) goto LAB_1406553cf;
    }
    if (*(longlong *)(*plVar5 + uVar7 * 8) != 0) {
      *(byte *)((longlong)param_1 + 0x63c) = *(byte *)((longlong)param_1 + 0x63c) | 2;
    }
  }
LAB_1406553cf:
  lVar4 = *plVar5;
  plVar5 = *(longlong **)(lVar4 + uVar7 * 8);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x2a8))(plVar5,param_1);
    lVar4 = param_1[0xc4];
  }
  if ((param_3 == (longlong *)0x0) || (DAT_14c950c29 == 0)) {
    *(longlong **)(lVar4 + uVar7 * 8) = param_3;
    if (param_3 != (longlong *)0x0) goto LAB_140655409;
  }
  else {
    FUN_1456cec3c(param_3);
    *(longlong **)(lVar4 + uVar7 * 8) = param_3;
LAB_140655409:
    (**(code **)(*param_3 + 0x2a0))(param_3,param_1);
  }
  (**(code **)(*param_1 + 0x310))(param_1);
  if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
    bVar2 = *(byte *)((longlong)param_1 + 0x9d);
    if ((bVar2 & 1) == 0) {
LAB_140655457:
      *(byte *)((longlong)param_1 + 0x9d) = bVar2 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140,param_1);
    }
    else if (param_1[0x16] == 0) {
      lVar4 = FUN_1448abda6(param_1);
      if (lVar4 == 0) {
        bVar2 = *(byte *)((longlong)param_1 + 0x9d);
        goto LAB_140655457;
      }
    }
  }
  if (-1 < *(char *)((longlong)param_1 + 0x2d2)) {
    cVar3 = FUN_1402072af(param_1[0x15]);
    if (cVar3 != '\0') {
      plVar5 = (longlong *)FUN_140083894();
      (**(code **)(*plVar5 + 0x78))(plVar5,param_1);
    }
  }
  if (param_3 != (longlong *)0x0) {
    FUN_1406555d4(param_3,param_1,1);
  }
  lVar4 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x138) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
  }
LAB_140655308:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406555d4 FUN_1406555d4 body=453 status=ok
// SIG undefined FUN_1406555d4(void)

void FUN_1406555d4(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  longlong *local_170;
  longlong local_168;
  uint local_160 [2];
  uint *local_158;
  longlong local_150;
  uint *local_148;
  undefined1 local_140 [8];
  undefined1 local_138 [48];
  undefined8 **local_108;
  undefined4 local_100;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_138;
  puVar4 = (uint *)FUN_14065579a();
  if (puVar4 != (uint *)0x0) {
    if (param_3 == '\0') {
      uVar6 = *puVar4;
      lVar8 = *(longlong *)
               (*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8) +
               (ulonglong)(uVar6 & 0xffff) * 0x18);
LAB_140655717:
      lVar5 = lVar8;
      local_150 = lVar5;
      if (*(longlong *)(lVar5 + 0x20) != 0) goto code_r0x000140655726;
      goto LAB_140655737;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    puVar7 = puVar4 + 10;
    uVar6 = puVar4[0xc];
    if (0 < (int)uVar6) {
      iVar9 = 0;
      lVar8 = 0;
      do {
        lVar5 = *(longlong *)puVar7;
        iVar2 = *(int *)(lVar5 + lVar8 * 4);
        if (iVar1 < iVar2) {
          puVar4[0xc] = uVar6 + 1;
          if (puVar4[0xd] < uVar6 + 1) {
            FUN_1446f48e2(puVar7,uVar6);
            lVar5 = *(longlong *)puVar7;
          }
          memmove((void *)(lVar5 + lVar8 * 4 + 4),(void *)(lVar5 + lVar8 * 4),
                  (ulonglong)(uVar6 + iVar9) << 2);
          *(int *)(*(longlong *)(puVar4 + 10) + lVar8 * 4) = iVar1;
          uVar6 = puVar4[0xc];
          iVar3 = (int)lVar8;
        }
        else {
          iVar3 = -1;
          if (iVar2 == iVar1) {
            iVar3 = (int)lVar8;
          }
        }
        lVar8 = lVar8 + 1;
      } while ((lVar8 < (int)uVar6) && (iVar9 = iVar9 + -1, iVar3 == -1));
      if (iVar3 != -1) goto LAB_140655613;
    }
    puVar4[0xc] = uVar6 + 1;
    if (puVar4[0xd] < uVar6 + 1) {
      FUN_1446f48e2(puVar7,uVar6);
    }
    *(int *)(*(longlong *)puVar7 + (longlong)(int)uVar6 * 4) = iVar1;
  }
  goto LAB_140655613;
code_r0x000140655726:
  lVar8 = *(longlong *)(lVar5 + 0x20);
  if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) goto LAB_140655717;
  local_150 = FUN_142840154(lVar5);
LAB_140655737:
  if (local_150 == 0) {
    lVar8 = *(longlong *)(lVar5 + 0x20);
    goto LAB_140655717;
  }
  local_170 = &local_168;
  local_168 = param_1;
  local_160[0] = uVar6;
  local_158 = puVar4;
  FUN_14002fb26(local_140);
  local_100 = 1;
  local_148 = local_160;
  local_108 = &local_170;
  FUN_14282d85c(&local_148,local_140);
  FUN_140ea1d7a(local_140);
LAB_140655613:
  if ((local_48 ^ (ulonglong)local_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14065579a FUN_14065579a body=107 status=ok
// SIG undefined FUN_14065579a(void)

longlong FUN_14065579a(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_2 + 0xc);
  lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) +
          (ulonglong)(uVar1 & 0xffff) * 0x18;
  if ((*(uint *)(lVar2 + 8) >> 0x18 & 1) == 0) {
    uVar1 = *(uint *)(lVar2 + 0xc);
  }
  if (uVar1 == 0) {
    return 0;
  }
  if (0 < (int)uVar1) {
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
  }
  return ~(longlong)*(int *)(lVar2 + 0xc) * 0x50 + DAT_14c9640e8;
}



// FUNCTION 140655806 FUN_140655806 body=353 status=ok
// SIG undefined FUN_140655806(void)

void FUN_140655806(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14065588b;
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
LAB_14065588b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140655968 FUN_140655968 body=429 status=ok
// SIG undefined FUN_140655968(void)

longlong * FUN_140655968(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar3 = *(uint *)(param_2 + 1);
    FUN_1403c3f0a(param_1,(ulonglong)uVar3);
    lVar6 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar6 + uVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar6) < uVar3) {
      FUN_140044672(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar7 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar7) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar9 = 0x80;
      if (0x80 < (int)uVar7) {
        uVar9 = uVar7;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar9;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar4 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar4;
    if (iVar4 != 0) {
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar8,(ulonglong)(iVar4 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar3) {
      lVar6 = *param_1;
      lVar5 = *param_2;
      lVar11 = 0;
      uVar10 = 0;
      do {
        plVar8 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar8 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar8 + (uVar10 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar10 & 0x1f) &
            1) == 0) {
          *(undefined4 *)(lVar6 + lVar11) = *(undefined4 *)(lVar5 + lVar11);
          *(undefined4 *)(lVar6 + 4 + lVar11) = *(undefined4 *)(lVar5 + 4 + lVar11);
        }
        else {
          puVar1 = (undefined8 *)(lVar6 + 0x28 + lVar11);
          puVar2 = (undefined8 *)(lVar5 + lVar11);
          *(undefined4 *)(puVar1 + -4) = *(undefined4 *)(puVar2 + 1);
          puVar1[-5] = *puVar2;
          FUN_141844de8(lVar6 + 0x10 + lVar11,lVar5 + 0x10 + lVar11);
          *puVar1 = puVar2[5];
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x30;
      } while (uVar3 != uVar10);
    }
  }
  return param_1;
}



// FUNCTION 140655b16 FUN_140655b16 body=454 status=ok
// SIG undefined FUN_140655b16(void)

void FUN_140655b16(longlong param_1,longlong *param_2,int param_3,float param_4)

{
  float fVar1;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  fVar1 = (float)(**(code **)(*param_2 + 0x2b0))(param_2);
  if ((param_3 != 0) || (param_4 <= fVar1 + -0.0001)) {
    if ((param_3 != 1) || (param_4 <= fVar1 + -0.0001)) {
      if (param_4 < 0.5) {
        param_4 = 0.0;
      }
    }
    else {
      param_3 = 2;
    }
  }
  else {
    param_3 = 3;
  }
  local_ac = 0.0;
  local_a4 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_84 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = (undefined4)DAT_14c8464e0;
  uStack_54 = DAT_14c8464e0._4_4_;
  uStack_50 = (undefined4)DAT_14c8464e8;
  uStack_4c = DAT_14c8464e8._4_4_;
  local_48 = DAT_14c8464f0;
  local_c0 = DAT_14cbccd10;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  local_a8 = 0;
  local_88 = 0;
  local_68 = 1;
  local_b8 = param_2;
  if (param_3 == 2) {
    local_b0 = 0;
    param_4 = 0.0;
  }
  else if (param_3 == 0) {
    local_b0 = 0x3f800000;
  }
  else if (param_3 == 3) {
    local_b0 = 0x3f800000;
    param_4 = (float)(**(code **)(*param_2 + 0x2b0))(param_2);
  }
  else {
    local_b0 = 0xbf800000;
    fVar1 = (float)(**(code **)(*param_2 + 0x2b0))(param_2);
    param_4 = fVar1 - param_4;
  }
  local_ac = param_4;
  FUN_140657bfa(param_1);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0xcf0))();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140655cde FUN_140655cde body=639 status=ok
// SIG undefined FUN_140655cde(void)

longlong FUN_140655cde(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
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
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) != 0) {
      lVar4 = FUN_140007850();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar4 == 0) || (cVar2 == '\0')) {
        if (lVar4 == 0) {
          param_1[0] = 0;
          param_1[1] = 0;
          goto LAB_140655e24;
        }
        uVar3 = *(uint *)(lVar4 + 0xc);
        *param_1 = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        uVar3 = *(uint *)(lVar7 + 0x10);
        if (*(uint *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar1 = DAT_14c964868 + 1;
          UNLOCK();
          uVar6 = DAT_14c964868 + 1;
          bVar8 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar1;
          if (bVar8) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar6);
          }
          LOCK();
          uVar3 = *(uint *)(lVar7 + 0x10);
          bVar8 = uVar3 == 0;
          if (bVar8) {
            *(uint *)(lVar7 + 0x10) = uVar6;
            uVar3 = 0;
          }
          UNLOCK();
          if (bVar8) {
            uVar3 = uVar6;
          }
        }
        param_1[1] = uVar3;
      }
      else {
        uVar3 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(param_1,lVar4);
        }
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) goto LAB_140655d51;
    }
  }
  else {
LAB_140655d51:
    if (DAT_14cb06da8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1464003b0;
      local_58 = &LAB_147d17bdf;
      local_60 = &LAB_1417edf22;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) goto LAB_140655d84;
  }
LAB_140655e24:
  lVar4 = 0;
LAB_140655d84:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 140655f5e FUN_140655f5e body=1739 status=ok
// SIG undefined FUN_140655f5e(void)

void FUN_140655f5e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  uint *puVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  uint uVar24;
  bool bVar25;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  code *local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  uint *local_88;
  ulonglong local_80;
  longlong local_78;
  undefined1 *local_70;
  longlong *local_68;
  undefined1 **local_60;
  code *local_58;
  undefined1 ***local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = param_1 + -0x400;
  plVar5 = (longlong *)*param_2;
  if (plVar5 == (longlong *)0x0) {
LAB_1406560ed:
    plVar15 = (longlong *)0x0;
  }
  else {
    lVar9 = (**(code **)(*plVar5 + 8))();
    lVar10 = FUN_1401beaf6();
    if ((lVar10 == 0) || (*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38))) goto LAB_1406560ed;
    plVar15 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
        lVar10 + 0x30) {
      plVar15 = plVar5;
    }
  }
  *(longlong **)(param_1 + 0x19a0) = plVar15;
  lVar9 = FUN_1447210f0(lVar1);
  if ((lVar9 != 0) &&
     ((bVar3 = *(byte *)(lVar9 + 0x152), bVar3 == 1 ||
      ((bVar3 < 7 && ((0x68U >> (bVar3 & 0x1f) & 1) != 0)))))) {
    lVar9 = *(longlong *)(param_1 + 0x19a0);
    if ((lVar9 != 0) &&
       ((*(int *)(lVar9 + 0x43c) < *(int *)(lVar9 + 0x410) && (*(longlong *)(param_1 + 0x2060) == 0)
        ))) {
      uVar12 = FUN_140658604();
      FUN_1406585a8(param_1 + 0x2060,uVar12,0,0);
    }
    if ((*(byte *)(param_1 + -0x39d) & 8) != 0) {
      uVar24 = *(uint *)(param_1 + -0x198);
      uVar18 = (ulonglong)uVar24;
      puVar17 = (uint *)(param_1 + -0x1b0);
      if (uVar24 == 0) {
        uVar20 = 0;
        uVar21 = 1;
        uVar8 = 0;
        iVar16 = 0;
      }
      else {
        puVar11 = *(uint **)(param_1 + -0x1a0);
        if (*(uint **)(param_1 + -0x1a0) == (uint *)0x0) {
          puVar11 = puVar17;
        }
        uVar8 = *puVar11;
        if (uVar8 == 0) {
          iVar16 = uVar24 + 0x1e;
          if (-1 < (int)(uVar24 - 1)) {
            iVar16 = uVar24 - 1;
          }
          uVar20 = 0;
          uVar21 = (ulonglong)(uint)(iVar16 >> 5);
          if (iVar16 >> 5 < 1) {
            uVar21 = uVar20;
          }
          iVar16 = 0;
          do {
            if (uVar21 == uVar20) goto LAB_140656029;
            iVar16 = iVar16 + 0x20;
            uVar8 = puVar11[uVar20 + 1];
            uVar20 = uVar20 + 1;
          } while (uVar8 == 0);
        }
        else {
          uVar20 = 0;
          iVar16 = 0;
        }
        uVar21 = (ulonglong)(-uVar8 & uVar8);
        uVar2 = uVar21 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar8 = (iVar16 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if ((int)uVar24 <= (int)uVar8) {
          uVar8 = uVar24;
        }
      }
      if (uVar8 != uVar24) {
        uVar24 = 0xffffffff;
        do {
          lVar9 = *(longlong *)(*(longlong *)(param_1 + -0x1c0) + (longlong)(int)uVar8 * 0x10);
          if (lVar9 != 0) {
            if (DAT_14cac7648 == 0) {
              local_a0 = &local_58;
              local_58 = FUN_144a7958c;
              local_90 = FUN_14081d0ea;
              local_98 = FUN_143242436;
              local_a8 = &LAB_14789ef1f;
              local_b0 = &LAB_1417b008f;
              local_b8 = L"Engine";
              local_c0 = (code *)0x8000000000;
              local_c8 = CONCAT44(local_c8._4_4_,0x10000004);
              local_d0 = CONCAT44(local_d0._4_4_,0x10);
              local_d8 = CONCAT44(local_d8._4_4_,0x2b0);
              local_88 = puVar17;
              local_80 = uVar18;
              FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
              puVar17 = local_88;
              uVar18 = local_80;
            }
            if (((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                  (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) == DAT_14cac7648 + 0x30)) &&
               (*(char *)(lVar9 + 0x9c) < '\0')) {
              *(undefined1 *)(param_1 + 0x2189) = 1;
              break;
            }
          }
          uVar24 = uVar24 & ~(uint)uVar21;
          puVar11 = *(uint **)(param_1 + -0x1a0);
          if (*(uint **)(param_1 + -0x1a0) == (uint *)0x0) {
            puVar11 = puVar17;
          }
          uVar4 = *(uint *)(param_1 + -0x198);
          iVar19 = (int)uVar20;
          lVar9 = (longlong)iVar19;
          uVar8 = puVar11[lVar9] & uVar24;
          if (uVar8 == 0) {
            iVar13 = uVar4 + 0x1e;
            if (-1 < (int)(uVar4 - 1)) {
              iVar13 = uVar4 - 1;
            }
            iVar13 = iVar13 >> 5;
            iVar16 = iVar16 + 0x20;
            iVar14 = iVar13;
            if (iVar13 < iVar19) {
              iVar14 = iVar19;
            }
            if (iVar19 < iVar13) {
              lVar10 = 0;
              do {
                uVar8 = (puVar11 + lVar9 + 1)[lVar10];
                if (uVar8 != 0) {
                  uVar20 = (ulonglong)(iVar19 + (int)lVar10 + 1);
                  uVar24 = 0xffffffff;
                  goto LAB_1406562a2;
                }
                iVar16 = iVar16 + 0x20;
                lVar10 = lVar10 + 1;
              } while (iVar14 - lVar9 != lVar10);
              uVar24 = 0xffffffff;
              iVar19 = iVar14;
            }
            uVar20 = (ulonglong)(iVar19 + 1);
            uVar8 = uVar4;
          }
          else {
LAB_1406562a2:
            uVar21 = (ulonglong)(-uVar8 & uVar8);
            uVar2 = uVar21 * 2 + 1;
            lVar9 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            uVar8 = (iVar16 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
            if ((int)uVar4 <= (int)uVar8) {
              uVar8 = uVar4;
            }
          }
        } while (uVar8 != (uint)uVar18);
      }
    }
LAB_140656029:
    if ((*(longlong *)(param_1 + 0x19a0) != 0) && ((*(byte *)(param_1 + 0x1939) & 4) == 0)) {
      puVar6 = *(undefined4 **)(*(longlong *)(param_1 + 0x19a0) + 8);
      puVar22 = &DAT_14c9485f0;
      if (puVar6 != (undefined4 *)0x0) {
        puVar22 = puVar6;
      }
      if (DAT_14c947fe0 == 0) {
        lVar9 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar9);
        DAT_14c947fe0 = lVar9;
      }
      FUN_140045924(DAT_14c947fe0,&local_58,puVar22,1);
      if ((local_58 == DAT_14cbc2828) || (local_58 == DAT_14cbc2830)) {
        *(byte *)(param_1 + 0x1939) = *(byte *)(param_1 + 0x1939) | 4;
        *(undefined1 *)(param_1 + 0x860) = 1;
        FUN_14081ae08(lVar1,4);
      }
    }
  }
  FUN_140656b66(param_1,param_2);
  lVar9 = (**(code **)(*(longlong *)(param_1 + -0x58) + 0x38))(param_1 + -0x58);
  if (lVar9 != 0) {
    local_68 = &local_78;
    local_60 = &local_70;
    local_70 = &LAB_1440c4a2a;
    local_50 = &local_60;
    local_58 = FUN_1401b22d0;
    local_78 = lVar1;
    FUN_1447c5ba2(lVar9);
  }
  if ((((*(byte *)(param_1 + 0x1939) & 4) != 0) && (*(longlong *)(param_1 + 0x19a0) != 0)) &&
     ((longlong)*(int *)(param_1 + 0x270) != 0)) {
    lVar9 = 0;
    do {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x268) + lVar9);
      if (((lVar10 != 0) && (lVar7 = *(longlong *)(lVar10 + 0x10), lVar7 != 0)) &&
         (*(longlong *)(lVar7 + 0x18) == DAT_14cbc2838)) {
        lVar9 = *(longlong *)(lVar7 + 0x70);
        goto joined_r0x000140656334;
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)*(int *)(param_1 + 0x270) * 8 != lVar9);
  }
LAB_1406560bf:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
joined_r0x000140656334:
  if (lVar9 == 0) goto LAB_1406560bf;
  if (*(longlong *)(lVar9 + 0x20) == DAT_14cbc2840) {
    puVar23 = *(undefined8 **)(lVar9 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
      local_c8 = FUN_1446ddbd2();
      local_c0 = FUN_14067a048;
      local_d0 = 0;
      local_d8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
    if (DAT_14c951cd8 == 0) {
      bVar25 = puVar23 != (undefined8 *)0x0;
      if (puVar23 != &DAT_14c951cd0 && bVar25) goto LAB_140656609;
      goto LAB_14065661d;
    }
    if ((puVar23[3] & DAT_14c951cd8) != 0) goto LAB_1406563ce;
    goto LAB_1406560bf;
  }
  lVar9 = *(longlong *)(lVar9 + 0x48);
  goto joined_r0x000140656334;
  while (puVar23 != (undefined8 *)0x0) {
LAB_140656609:
    puVar23 = (undefined8 *)puVar23[6];
    bVar25 = puVar23 != (undefined8 *)0x0;
    if (puVar23 == &DAT_14c951cd0) break;
  }
LAB_14065661d:
  if (bVar25) {
LAB_1406563ce:
    if ((*(byte *)((ulonglong)*(byte *)(lVar9 + 0x71) + lVar10 + *(int *)(lVar9 + 0x44)) &
        *(byte *)(lVar9 + 0x73)) != 0) {
      FUN_14081ae08(lVar1,1);
    }
  }
  goto LAB_1406560bf;
}



// FUNCTION 14065662a FUN_14065662a body=41 status=ok
// SIG undefined FUN_14065662a(void)

undefined8 FUN_14065662a(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014065664f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x50) + 0x10))(lVar1 + 0x50);
  return uVar2;
}



// FUNCTION 140656670 FUN_140656670 body=375 status=ok
// SIG undefined FUN_140656670(void)

longlong FUN_140656670(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar5 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar2 == '\0')) {
      if (lVar5 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar3 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1406567e8();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 1406567e8 FUN_1406567e8 body=228 status=ok
// SIG undefined FUN_1406567e8(void)

longlong FUN_1406567e8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb69b28 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_141741c86;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464c802e;
    local_38 = &LAB_148755dfb;
    local_40 = FUN_146522a9c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/GbxGame",L"InteractiveObjectBodyData",&DAT_14cb69b28,&DAT_148755dfa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb69b28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406568ce FUN_1406568ce body=637 status=ok
// SIG undefined FUN_1406568ce(void)

void FUN_1406568ce(longlong *param_1,longlong param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
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
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = param_1[0xcb];
  if (lVar3 == 0) {
    lVar3 = param_1[0xcc];
    if ((DAT_14c950c29 & lVar3 != 0) != 0) goto LAB_140656b58;
    if (lVar3 != 0) goto LAB_140656910;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_140656b58:
      FUN_1456cec3c(lVar3);
    }
LAB_140656910:
    if (DAT_14cb06da8 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1464003b0;
      local_58 = &LAB_147d17bdf;
      local_60 = &LAB_1417edf22;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) goto LAB_140656943;
  }
  lVar3 = 0;
LAB_140656943:
  if (lVar3 != param_2) {
    FUN_140107756(param_1);
    FUN_14036294a(param_1,1,1);
    lVar3 = (**(code **)(*param_1 + 0xb98))(param_1);
    bVar1 = *(byte *)((longlong)param_1 + 0x9c);
    if ((bVar1 & 2) != 0) {
      (**(code **)(*param_1 + 0x340))(param_1);
    }
    FUN_1434905e8(param_1,param_2,0);
    if ((*(byte *)((longlong)param_1 + 0x9c) & 8) != 0) {
      lVar4 = (**(code **)(*param_1 + 0xb98))(param_1);
      if (((lVar3 == 0) || (lVar4 != lVar3)) || ((int)param_1[0x1af] != *(int *)(lVar3 + 0x48))) {
        FUN_1406cc378(param_1);
      }
      else {
        FUN_1417ef626(param_1);
      }
    }
    FUN_1406c97fc(param_1);
    FUN_14087dfa2(param_1 + 0x1da,0);
    *(byte *)((longlong)param_1 + 0xc71) = *(byte *)((longlong)param_1 + 0xc71) & 0xdf;
    (**(code **)(*param_1 + 0xc68))(param_1,param_3);
    FUN_1401ff858(param_1);
    bVar2 = *(byte *)((longlong)param_1 + 0x9c);
    FUN_140932b6e();
    if (((bVar1 & 2) != 0) && ((bVar2 & 1) != 0)) {
      (**(code **)(*param_1 + 800))(param_1,0);
    }
    *(byte *)((longlong)param_1 + 0x63c) = *(byte *)((longlong)param_1 + 0x63c) | 2;
    FUN_140083894();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140656b66 FUN_140656b66 body=4243 status=ok
// SIG undefined FUN_140656b66(void)

void FUN_140656b66(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  code *pcVar20;
  bool bVar21;
  undefined1 auStack_138 [32];
  wchar_t *local_118;
  undefined4 local_110;
  undefined8 local_108;
  wchar_t *local_100;
  wchar_t *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  code *local_d8;
  code *local_d0;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined2 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  code *local_78;
  undefined1 local_70 [8];
  code *local_68;
  undefined8 uStack_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(longlong **)(param_1 + 0x690) != (longlong *)0x0) {
    uVar12 = (**(code **)(**(longlong **)(param_1 + 0x690) + 0xe0))();
    FUN_140358e3e(param_1 + 0x968,uVar12);
  }
  plVar2 = (longlong *)(param_1 + -0x400);
  param_2 = (longlong *)*param_2;
  if (param_2 == (longlong *)0x0) {
LAB_140656bf9:
    *(undefined8 *)(param_1 + 0x690) = 0;
    uVar12 = 0;
  }
  else {
    lVar13 = (**(code **)(*param_2 + 8))(param_2);
    lVar14 = FUN_14185c56c();
    if (((lVar14 == 0) || (*(int *)(lVar13 + 0x38) < *(int *)(lVar14 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
        lVar14 + 0x30)) goto LAB_140656bf9;
    *(longlong **)(param_1 + 0x690) = param_2;
    lVar13 = FUN_1447210f0(plVar2);
    if ((lVar13 != 0) &&
       ((bVar6 = *(byte *)(lVar13 + 0x152), bVar6 == 1 ||
        ((bVar6 < 7 && ((0x68U >> (bVar6 & 0x1f) & 1) != 0)))))) {
      (**(code **)(*plVar2 + 0x640))(plVar2);
    }
    FUN_140c7cbb8(param_1 + 0x498,plVar2);
    FUN_14078a36a(param_1 + 0xd8,param_1 + -0x68);
    uVar12 = (**(code **)(**(longlong **)(param_1 + 0x690) + 0xe0))();
    FUN_14035fd50(param_1 + 0x968,uVar12,1);
    if ((*(byte *)(param_1 + -0x39b) & 0x18) == 0x10) {
      FUN_1409b534c(param_1 + 0x980,param_1 + 0x60);
    }
    lVar13 = *(longlong *)(param_1 + 0x690);
    if ((*(longlong *)(param_1 + 0x2b8) != *(longlong *)(lVar13 + 0x1a8)) ||
       (*(int *)(param_1 + 0x2c0) != *(int *)(lVar13 + 0x1b0))) {
      *(longlong *)(param_1 + 0x2b8) = *(longlong *)(lVar13 + 0x1a8);
      *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(lVar13 + 0x1b0);
      *(undefined8 *)(param_1 + 0x2c8) = 0;
    }
    *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(lVar13 + 0x1c0);
    if (*(char *)(lVar13 + 0x1d8) == '\0') {
      *(undefined1 *)(param_1 + 0x2e8) = 0;
      *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(lVar13 + 0x1d0);
    }
    *(undefined2 *)(param_1 + 0x2f0) = *(undefined2 *)(lVar13 + 0x1e0);
    if (*(char *)(lVar13 + 0x1f8) == '\0') {
      *(undefined1 *)(param_1 + 0x308) = 0;
      *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(lVar13 + 0x1f0);
    }
    FUN_140830282(param_1 + 0x310,lVar13 + 0x200);
    *(undefined8 *)(param_1 + 800) = *(undefined8 *)(lVar13 + 0x210);
    FUN_140830282(param_1 + 0x328,lVar13 + 0x218);
    *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(lVar13 + 0x230);
    *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(lVar13 + 0x228);
    if (*(char *)(lVar13 + 0x248) == '\0') {
      *(undefined1 *)(param_1 + 0x358) = 0;
      *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(lVar13 + 0x240);
    }
    FUN_140830282(param_1 + 0x360,lVar13 + 0x250);
    *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(lVar13 + 0x260);
    FUN_140830282(param_1 + 0x378,lVar13 + 0x268);
    *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(lVar13 + 0x280);
    *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(lVar13 + 0x278);
    if (*(char *)(lVar13 + 0x298) == '\0') {
      *(undefined1 *)(param_1 + 0x3a8) = 0;
      *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(lVar13 + 0x290);
    }
    *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(lVar13 + 0x2a8);
    *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(lVar13 + 0x2a0);
    uVar12 = *(undefined8 *)(param_1 + 0x690);
  }
  FUN_14035c1e0(param_1 + 0x1520,plVar2,uVar12,param_1 + 0x668);
  if (*(longlong *)(param_1 + 0x690) != 0) {
    lVar14 = FUN_1447210f0(plVar2);
    lVar13 = *(longlong *)(param_1 + 0x690);
    if (((lVar14 != 0) && (*(longlong *)(lVar13 + 0x2e0) != 0)) &&
       (*(int *)(lVar13 + 0x2e8) - 1U < 0xfffffffe)) {
      if (*(longlong *)(param_1 + 0x900) != 0) {
        FUN_140521208();
        *(undefined8 *)(param_1 + 0x900) = 0;
        plVar19 = *(longlong **)(param_1 + 0x908);
        if (plVar19 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x908) = 0;
          LOCK();
          plVar16 = plVar19 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)*plVar19)(plVar19);
            LOCK();
            piVar1 = (int *)((longlong)plVar19 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
            }
          }
        }
      }
      local_90 = *(undefined8 *)(*(longlong *)(param_1 + 0x690) + 0x2e0);
      local_88 = *(undefined4 *)(*(longlong *)(param_1 + 0x690) + 0x2e8);
      local_80 = 0;
      local_118 = (wchar_t *)CONCAT71(local_118._1_7_,1);
      FUN_140e7707e(&local_68,&local_90,param_1 + 0x58,lVar14);
      plVar19 = uStack_60;
      if ((code **)(param_1 + 0x900) != &local_68) {
        *(code **)(param_1 + 0x900) = local_68;
        local_68 = (code *)0x0;
        plVar16 = *(longlong **)(param_1 + 0x908);
        if (uStack_60 != plVar16) {
          uStack_60 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x908) = plVar19;
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            plVar19 = plVar16 + 1;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)*plVar19 == 0) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
              }
            }
          }
        }
      }
      plVar19 = uStack_60;
      if (uStack_60 != (longlong *)0x0) {
        LOCK();
        plVar16 = uStack_60 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*uStack_60)(uStack_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
      lVar13 = *(longlong *)(param_1 + 0x690);
    }
    if ((lVar13 != 0) && (*(char *)(lVar13 + 0x318) == '\x01')) {
      FUN_14035925a(param_1 + 0x1350,plVar2,*(undefined1 *)(lVar13 + 0x319),
                    *(undefined1 *)(lVar13 + 0x31a));
    }
  }
  FUN_14078a0a0(param_1 + -0x58,0);
  lVar13 = *(longlong *)(param_1 + 0x690);
  if (lVar13 == 0) {
    FUN_140355e94(param_1 + 0x238);
    FUN_1405213ee(param_1 + 0x1350);
    goto LAB_1406578cf;
  }
  local_68 = (code *)0x0;
  uStack_60 = (longlong *)0x0;
  if ((longlong)*(int *)(lVar13 + 0x158) != 0) {
    plVar19 = (longlong *)(*(longlong *)(lVar13 + 0x150) + 8);
    lVar13 = (longlong)*(int *)(lVar13 + 0x158) * 0x28;
    do {
      if (((*(int *)((longlong)plVar19 + -4) == 0) ||
          (uVar9 = *(uint *)(plVar19 + -1), (int)uVar9 < 0)) ||
         ((DAT_14c9647dc <= (int)uVar9 ||
          ((((plVar16 = (longlong *)
                        ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
             plVar16 == (longlong *)0x0 || ((int)plVar16[2] != *(int *)((longlong)plVar19 + -4))) ||
            ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)) || (lVar14 = *plVar16, lVar14 == 0)))))) {
        if (*plVar19 != 0) {
          lVar14 = FUN_140007850();
          cVar7 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar14 == 0) || (cVar7 == '\0')) {
            if (lVar14 != 0) {
              uVar9 = *(uint *)(lVar14 + 0xc);
              goto LAB_1406570c4;
            }
            plVar19[-1] = 0;
          }
          else {
            uVar9 = *(uint *)(lVar14 + 0xc);
            if ((int)uVar9 < DAT_14c9647dc) {
              lVar15 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
            }
            else {
              lVar15 = 0;
            }
            if ((*(uint *)(lVar15 + 8) & 0x8400000) == 0) {
LAB_1406570c4:
              *(uint *)(plVar19 + -1) = uVar9;
              if ((int)uVar9 < DAT_14c9647dc) {
                lVar15 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
              }
              else {
                lVar15 = 0;
              }
              iVar8 = *(int *)(lVar15 + 0x10);
              if (*(int *)(lVar15 + 0x10) == 0) {
                LOCK();
                iVar8 = DAT_14c964868 + 1;
                UNLOCK();
                iVar10 = DAT_14c964868 + 1;
                bVar21 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar8;
                if (bVar21) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar10);
                }
                LOCK();
                iVar8 = *(int *)(lVar15 + 0x10);
                bVar21 = iVar8 == 0;
                if (bVar21) {
                  *(int *)(lVar15 + 0x10) = iVar10;
                  iVar8 = 0;
                }
                UNLOCK();
                if (bVar21) {
                  iVar8 = iVar10;
                }
              }
              *(int *)((longlong)plVar19 + -4) = iVar8;
            }
            if ((*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0) goto LAB_140657386;
          }
        }
      }
      else {
LAB_140657386:
        if (DAT_14c949118 == 0) {
          local_78 = FUN_140631fbe;
          lVar15 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c949118 = lVar15;
          FUN_1446f470e(local_70,L"Class",1);
          local_e0 = &local_78;
          local_e8 = &LAB_146891e90;
          local_f0 = (code *)&LAB_146273097;
          local_100 = L"Engine";
          local_f8 = (wchar_t *)CONCAT44(local_f8._4_4_,199);
          local_108 = 0x20;
          local_110 = 0x10000000;
          local_118._0_4_ = 8;
          FUN_14574b4b2(lVar15);
          DAT_14c949118 = lVar15;
          if (DAT_14c951858 == 0) {
            local_50 = FUN_1449e2820;
            local_d0 = FUN_14081d0ea;
            local_d8 = FUN_14081d0ea;
            local_e0 = &local_50;
            local_e8 = &LAB_1468c5283;
            local_f0 = FUN_142809da0;
            local_f8 = L"Engine";
            local_100 = (wchar_t *)0x400000000;
            local_108 = CONCAT44(local_108._4_4_,0x10000000);
            local_110 = 8;
            local_118._0_4_ = 0x50;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          }
          lVar18 = DAT_14c951858;
          lVar15 = DAT_14c949118;
          uVar12 = FUN_1449e2fb2();
          local_118 = L"Class";
          FUN_14574b446(uVar12,lVar15,lVar18,L"/Script/CoreUObject");
        }
        if (((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
           ((lVar15 = FUN_140789e1e(), lVar15 != 0 &&
            (*(int *)(lVar15 + 0x38) <= *(int *)(lVar14 + 0x38))))) {
          lVar18 = 0;
          if (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) ==
              lVar15 + 0x30) {
            lVar18 = lVar14;
          }
          if ((lVar18 == 0) || (DAT_14c950c29 == '\0')) {
            if (lVar18 == 0) goto LAB_14065746d;
          }
          else {
            FUN_1456cec3c(lVar18);
          }
          lVar15 = FUN_140789e1e();
          plVar16 = uStack_60;
          if (((lVar15 != 0) && (*(int *)(lVar15 + 0x38) <= *(int *)(lVar14 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) ==
              lVar15 + 0x30)) {
            lVar15 = (longlong)(int)uStack_60;
            uVar9 = (int)uStack_60 + 1;
            uStack_60 = (longlong *)CONCAT44(uStack_60._4_4_,uVar9);
            if (uStack_60._4_4_ < uVar9) {
              FUN_140789f3e(&local_68,(ulonglong)plVar16 & 0xffffffff);
            }
            *(longlong *)(local_68 + lVar15 * 8) = lVar14;
            if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar14);
            }
          }
        }
      }
LAB_14065746d:
      plVar19 = plVar19 + 5;
      lVar13 = lVar13 + -0x28;
    } while (lVar13 != 0);
  }
  FUN_14078b280(param_1 + 0x238,plVar2,&local_68);
  if (local_68 != (code *)0x0) {
    FUN_1400020a8();
  }
  lVar13 = FUN_1447210f0(plVar2);
  if ((lVar13 == 0) ||
     ((bVar6 = *(byte *)(lVar13 + 0x152), bVar6 != 1 &&
      ((6 < bVar6 || ((0x68U >> (bVar6 & 0x1f) & 1) == 0)))))) goto LAB_1406578cf;
  lVar13 = *(longlong *)(param_1 + 0x690);
  bVar6 = *(byte *)(lVar13 + 0x90) >> 2;
  *(byte *)(param_1 + 0x1340) = bVar6 & 1;
  if (*(char *)(param_1 + -0x288) == '\x03') {
    if (((bVar6 & 1) != 0) &&
       (plVar19 = *(longlong **)(param_1 + -0x298), plVar19 != (longlong *)0x0)) {
      if (DAT_14cb223d8 == 0) {
        local_68 = FUN_1449e2820;
        local_d0 = FUN_14081d0ea;
        local_d8 = FUN_1427b09ee;
        local_e8 = &LAB_147f29feb;
        local_f0 = FUN_1464384fe;
        local_f8 = L"Engine";
        local_100 = (wchar_t *)0x0;
        local_108 = CONCAT44(local_108._4_4_,0x10004001);
        local_110 = 8;
        local_118 = (wchar_t *)CONCAT44(local_118._4_4_,0x28);
        local_e0 = &local_68;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar19 = (longlong *)(**(code **)(*plVar19 + 0x288))(plVar19,DAT_14cb223d8);
      if (plVar19 != (longlong *)0x0) {
        if (DAT_14cb223d8 == 0) {
          local_68 = FUN_1449e2820;
          local_d0 = FUN_14081d0ea;
          local_d8 = FUN_1427b09ee;
          local_e8 = &LAB_147f29feb;
          local_f0 = FUN_1464384fe;
          local_f8 = L"Engine";
          local_100 = (wchar_t *)0x0;
          local_108 = CONCAT44(local_108._4_4_,0x10004001);
          local_110 = 8;
          local_118 = (wchar_t *)CONCAT44(local_118._4_4_,0x28);
          local_e0 = &local_68;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
        }
        plVar16 = (longlong *)FUN_144718840(plVar19,DAT_14cb223d8);
        if (((plVar19 != plVar16) && (plVar16 != (longlong *)0x0)) &&
           (plVar19 = (longlong *)(**(code **)(*plVar16 + 0x10))(plVar16),
           plVar19 != (longlong *)0x0)) {
          local_68 = (code *)0x0;
          uStack_60 = (longlong *)((ulonglong)uStack_60 & 0xffffffff00000000);
          FUN_1446efa72(&local_68,0,3,0x10);
          pcVar20 = local_68;
          uStack_60 = (longlong *)CONCAT44(uStack_60._4_4_,3);
          *(undefined ***)local_68 = &PTR_LAB_14ac8da20;
          LOCK();
          UNLOCK();
          lVar14 = DAT_14c758608 + 1;
          lVar13 = DAT_14c758608 + 1;
          if (lVar14 == 0) {
            LOCK();
            UNLOCK();
            lVar14 = DAT_14c758608 + 2;
            lVar13 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar13;
          *(longlong *)(local_68 + 0x10) = lVar14;
          *(undefined ***)local_68 = &PTR_FUN_14b3e9620;
          *(longlong *)(local_68 + 0x18) = 0;
          iVar8 = 0;
          if (plVar2 != (longlong *)0x0) {
            uVar9 = *(uint *)(param_1 + -0x3f4);
            *(uint *)(local_68 + 0x18) = uVar9;
            if ((int)uVar9 < DAT_14c9647dc) {
              lVar13 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
            }
            else {
              lVar13 = 0;
            }
            iVar8 = *(int *)(lVar13 + 0x10);
            if (*(int *)(lVar13 + 0x10) == 0) {
              LOCK();
              iVar8 = DAT_14c964868 + 1;
              UNLOCK();
              iVar10 = DAT_14c964868 + 1;
              bVar21 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar8;
              if (bVar21) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar10);
              }
              LOCK();
              iVar8 = *(int *)(lVar13 + 0x10);
              bVar21 = iVar8 == 0;
              if (bVar21) {
                *(int *)(lVar13 + 0x10) = iVar10;
                iVar8 = 0;
              }
              UNLOCK();
              if (bVar21) {
                iVar8 = iVar10;
              }
            }
          }
          *(int *)(pcVar20 + 0x1c) = iVar8;
          *(code **)(pcVar20 + 0x20) = FUN_1487c5e4c;
          *(undefined4 *)(pcVar20 + 0x28) = 0;
          if (((int)uStack_60 == 0) || (local_68 == (code *)0x0)) {
LAB_140657b88:
            if ((int)uStack_60 == 0) {
              pcVar20 = (code *)0x0;
              goto LAB_140657774;
            }
            if (local_68 != (code *)0x0) {
              pcVar20 = (code *)0x0;
              (*(code *)**(undefined8 **)local_68)(local_68,0);
              FUN_1446efa72(&local_68,0,0,0x10);
              goto LAB_140657761;
            }
            pcVar20 = (code *)0x0;
          }
          else {
            cVar7 = (**(code **)(*(longlong *)local_68 + 0x30))();
            if (cVar7 == '\0') {
              goto LAB_140657b88;
            }
            if (*(int *)((longlong)plVar19 + 0x14) < 1) {
              iVar8 = (int)plVar19[1];
              iVar10 = (int)plVar19[2] + -1;
              *(int *)(plVar19 + 2) = iVar10;
              if (iVar10 <= iVar8) {
                iVar10 = iVar8;
                if (0 < iVar8) {
                  iVar17 = 0;
                  do {
                    if (((*(int *)(*plVar19 + 8 + (longlong)iVar17 * 0x10) == 0) ||
                        (plVar16 = *(longlong **)(*plVar19 + (longlong)iVar17 * 0x10),
                        plVar16 == (longlong *)0x0)) ||
                       (cVar7 = (**(code **)(*plVar16 + 0x28))(), cVar7 != '\0')) {
                      FUN_14005b288(plVar19,iVar17);
                      FUN_14005b248(plVar19);
                    }
                    else {
                      iVar17 = iVar17 + 1;
                    }
                    iVar10 = (int)plVar19[1];
                  } while (iVar17 < iVar10);
                }
                iVar17 = 2;
                if (2 < iVar10 * 2) {
                  iVar17 = iVar10 * 2;
                }
                *(int *)(plVar19 + 2) = iVar17;
                if ((iVar17 < iVar8) && (*(int *)((longlong)plVar19 + 0xc) != iVar10)) {
                  FUN_14045812c();
                }
              }
            }
            pcVar20 = (code *)0x0;
            if (((int)uStack_60 != 0) && (local_68 != (code *)0x0)) {
              (**(code **)(*(longlong *)local_68 + 0x38))(local_68,&local_50);
              pcVar20 = local_50;
            }
            iVar8 = (int)plVar19[1];
            *(uint *)(plVar19 + 1) = iVar8 + 1U;
            if (*(uint *)((longlong)plVar19 + 0xc) < iVar8 + 1U) {
              FUN_1447a71f6(plVar19,iVar8);
            }
            lVar13 = *plVar19;
            lVar14 = (longlong)iVar8 * 0x10;
            *(undefined8 *)(lVar13 + lVar14) = 0;
            *(undefined4 *)(lVar13 + 8 + lVar14) = 0;
            *(code **)(lVar13 + lVar14) = local_68;
            local_68 = (code *)0x0;
            *(int *)(lVar13 + 8 + lVar14) = (int)uStack_60;
LAB_140657761:
            uStack_60 = (longlong *)((ulonglong)uStack_60 & 0xffffffff00000000);
LAB_140657774:
            if (local_68 != (code *)0x0) {
              FUN_1400020a8();
            }
          }
          *(code **)(param_1 + 0x1348) = pcVar20;
          local_a8 = plVar19[4];
          local_a0 = (undefined2)plVar19[5];
          local_98 = plVar19[6];
          FUN_140365ba6(param_1 + 0x12e0,&local_a8,1);
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x1300) == 0) ||
       ((-1 < *(short *)(param_1 + 0x1308) && (*(longlong *)(param_1 + 0x1310) == 0)))) {
      local_c0 = (**(code **)(**(longlong **)(param_1 + 0x690) + 0x78))();
      local_b8 = 0xffff;
      local_b0 = 0;
      FUN_140365ba6(param_1 + 0x12e0,&local_c0,1);
    }
    lVar13 = *(longlong *)(param_1 + 0x690);
  }
  if (((*(byte *)(lVar13 + 0x90) & 1) != 0) &&
     ((bVar6 = *(byte *)(lVar13 + 0x90) >> 1 & 1, *(char *)(param_1 + 0x1330) == '\0' ||
      (*(byte *)(param_1 + 0x1331) != bVar6)))) {
    *(undefined1 *)(param_1 + 0x1330) = 1;
    *(byte *)(param_1 + 0x1331) = bVar6;
    FUN_1403573f6(param_1 + 0x12e0);
    lVar13 = *(longlong *)(param_1 + 0x690);
  }
  *(undefined1 *)(param_1 + 0x1333) = *(undefined1 *)(lVar13 + 0x31b);
  if (*(char *)(lVar13 + 0x318) == '\x01') {
    uVar3 = *(undefined1 *)(lVar13 + 0x342);
    uVar4 = *(undefined1 *)(lVar13 + 0x340);
    uVar5 = *(undefined1 *)(lVar13 + 0x341);
    uVar12 = FUN_1447210f0(plVar2);
    local_108 = CONCAT71(local_108._1_7_,uVar3);
    local_110 = CONCAT31(local_110._1_3_,uVar5);
    local_118 = (wchar_t *)CONCAT71(local_118._1_7_,uVar4);
    FUN_140b50c30(param_1 + 0x1350,uVar12,lVar13 + 800,lVar13 + 0x330);
    lVar13 = *(longlong *)(param_1 + 0x690);
  }
  if (lVar13 != 0) {
    uVar11 = (**(code **)(*(longlong *)(param_1 + -0x400) + 0x648))(plVar2);
    uStack_60 = (longlong *)
                CONCAT44(uStack_60._4_4_,*(undefined4 *)(*(longlong *)(param_1 + 0x690) + 0x1a4));
    local_68 = *(code **)(*(longlong *)(param_1 + 0x690) + 0x19c);
    FUN_1409b5530(param_1 + 0x820,param_1 + 0x588,&local_68,uVar11);
  }
LAB_1406578cf:
  if ((*(byte *)(param_1 + -0x39b) & 0x18) == 0x10) {
    if (*(char *)(param_1 + -0x288) == '\x03') {
      (**(code **)(*(longlong *)(param_1 + 0x50) + 0x68))(param_1 + 0x50,0);
    }
    FUN_1409b52ac(param_1 + -0x40);
  }
  lVar13 = FUN_14061d010(plVar2);
  if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar13);
  }
  *(longlong *)(param_1 + 0x1518) = lVar13;
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140657bfa FUN_140657bfa body=1549 status=ok
// SIG undefined FUN_140657bfa(void)

void FUN_140657bfa(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
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
  code *local_a8;
  undefined4 local_a0;
  undefined8 local_8c;
  undefined1 local_84;
  undefined8 local_78;
  code *local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((param_2[1] == 0) || (lVar7 = param_1[4], lVar7 == 0)) goto LAB_140657ef0;
  plVar13 = *(longlong **)(lVar7 + 0x658);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = *(longlong **)(lVar7 + 0x660);
    if ((DAT_14c950c29 & plVar13 != (longlong *)0x0) != 0) goto LAB_1406581d5;
    if (plVar13 == (longlong *)0x0) goto LAB_140657ef0;
LAB_140657f58:
    plVar13 = *(longlong **)(lVar7 + 0x660);
    if ((DAT_14c950c29 & plVar13 != (longlong *)0x0) != 0) {
LAB_1406581fb:
      FUN_1456cec3c(plVar13);
    }
  }
  else if (DAT_14c950c29 != 0) {
LAB_1406581d5:
    FUN_1456cec3c(plVar13);
    plVar13 = *(longlong **)(lVar7 + 0x658);
    if (plVar13 == (longlong *)0x0) goto LAB_140657f58;
    if ((DAT_14c950c29 & 1) == 0) goto LAB_140657c60;
    goto LAB_1406581fb;
  }
LAB_140657c60:
  lVar7 = (**(code **)(*plVar13 + 0x3f8))(plVar13);
  if (lVar7 != 0) {
    lVar9 = param_1[4];
    if (lVar9 != 0) {
      if (DAT_14cad2858 == 0) {
        local_c0 = &local_a8;
        local_a8 = FUN_144a7958c;
        local_b0 = FUN_14081d0ea;
        local_b8 = &LAB_146395584;
        local_c8 = &LAB_147a0ba80;
        local_d0 = &LAB_14575ccce;
        local_d8 = L"Engine";
        local_e0 = 0x40000000000;
        local_e8 = 0x10000004;
        local_f0 = 0x10;
        local_f8 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      lVar9 = *(longlong *)(lVar9 + 0x10);
      iVar11 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar11 <= *(int *)(lVar9 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar11 * 8) == DAT_14cad2858 + 0x30)
         ) {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar11 >> 8),1),1);
      }
    }
    lVar9 = param_1[0x7c];
    if (lVar9 == 0) {
      lVar9 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar9;
    }
    lVar10 = 0;
    cVar5 = FUN_144a083fe(lVar9,0);
    if (param_1 != (longlong *)0x0) {
      lVar9 = param_1[4];
      if (lVar9 != 0) {
        if (DAT_14cad2858 == 0) {
          local_c0 = &local_a8;
          local_a8 = FUN_144a7958c;
          local_b0 = FUN_14081d0ea;
          local_b8 = &LAB_146395584;
          local_c8 = &LAB_147a0ba80;
          local_d0 = &LAB_14575ccce;
          local_d8 = L"Engine";
          local_e0 = 0x40000000000;
          local_e8 = 0x10000004;
          local_f0 = 0x10;
          local_f8 = 0x1180;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        }
        lVar9 = *(longlong *)(lVar9 + 0x10);
        iVar11 = *(int *)(DAT_14cad2858 + 0x38);
        if ((iVar11 <= *(int *)(lVar9 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar11 * 8) ==
            DAT_14cad2858 + 0x30)) {
          FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar11 >> 8),1),1);
        }
      }
      lVar10 = param_1[0x7c];
      if (lVar10 == 0) {
        lVar10 = (**(code **)(*param_1 + 0x350))();
        param_1[0x7c] = lVar10;
      }
    }
    if (*(int *)(lVar7 + 0x290) != *(int *)(lVar7 + 700)) {
      lVar9 = *param_2;
      uVar1 = (uint)((ulonglong)lVar9 >> 0x10);
      uVar14 = (uint)lVar9 & 0xffff;
      lVar12 = lVar7 + 0x2c0;
      if (*(longlong *)(lVar7 + 0x2c8) != 0) {
        lVar12 = *(longlong *)(lVar7 + 0x2c8);
      }
      iVar11 = *(int *)(lVar12 + (ulonglong)
                                 (*(int *)(lVar7 + 0x2d0) - 1U &
                                 (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar14) +
                                 (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar14 >> 4)) * 4);
      if (iVar11 != -1) {
        do {
          plVar13 = (longlong *)(*(longlong *)(lVar7 + 0x288) + (longlong)iVar11 * 0x18);
          if (*plVar13 == lVar9) goto LAB_140657db9;
          iVar11 = (int)plVar13[2];
        } while (iVar11 != -1);
      }
    }
    plVar13 = (longlong *)0x0;
LAB_140657db9:
    plVar8 = plVar13 + 1;
    if (plVar13 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    plVar13 = &DAT_14cacd708;
    if (plVar8 != (longlong *)0x0) {
      plVar13 = plVar8;
    }
    local_58 = *plVar13;
    FUN_140658388(lVar10,&local_58,param_2);
    local_78 = 0;
    local_60 = 0;
    local_a0 = (undefined4)param_2[3];
    local_a8 = (code *)0x0;
    local_8c = 0x3f80000000000000;
    local_84 = 0;
    FUN_1404163bc(&local_a8);
    pcVar2 = local_a8;
    if (local_a8 != (code *)0x0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_a8);
    }
    uVar4 = local_84;
    uVar3 = local_a0;
    if (((DAT_14c950c29 & 1) != 0) && (pcVar2 != (code *)0x0)) {
      FUN_1456cec3c(pcVar2);
    }
    local_70 = pcVar2;
    local_68 = uVar3;
    local_64 = uVar4;
    FUN_1406582c4(param_1,local_58);
    FUN_140658208(lVar10,param_2,&local_58);
    lVar7 = param_1[4];
    if (lVar7 != 0) {
      if (DAT_14cad2858 == 0) {
        local_a8 = FUN_144a7958c;
        local_b0 = FUN_14081d0ea;
        local_b8 = &LAB_146395584;
        local_c8 = &LAB_147a0ba80;
        local_d0 = &LAB_14575ccce;
        local_d8 = L"Engine";
        local_e0 = 0x40000000000;
        local_e8 = 0x10000004;
        local_f0 = 0x10;
        local_f8 = 0x1180;
        local_c0 = &local_a8;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      lVar7 = *(longlong *)(lVar7 + 0x10);
      iVar11 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar11 <= *(int *)(lVar7 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar11 * 8) == DAT_14cad2858 + 0x30)
         ) {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar11 >> 8),1),1);
      }
    }
    lVar7 = param_1[0x7c];
    if (lVar7 == 0) {
      lVar7 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar7;
    }
    cVar6 = FUN_144a083fe(lVar7,0);
    if ((cVar5 != cVar6) && ((longlong *)param_1[4] != (longlong *)0x0)) {
      (**(code **)(*(longlong *)param_1[4] + 0xcf0))();
    }
  }
LAB_140657ef0:
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140658208 FUN_140658208 body=188 status=ok
// SIG undefined FUN_140658208(void)

void FUN_140658208(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  if ((param_2[1] != 0) && (*(int *)(param_1 + 0x800) != *(int *)(param_1 + 0x82c))) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    lVar5 = param_1 + 0x830;
    if (*(longlong *)(param_1 + 0x838) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x838);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x840) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x7f8) + (longlong)iVar4 * 0x18);
        if (*plVar1 == lVar2) {
          if (plVar1 == (longlong *)0x0) {
            return;
          }
          if ((longlong *)plVar1[1] == (longlong *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0001406582b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(longlong *)plVar1[1] + 0xf8))();
          return;
        }
        iVar4 = (int)plVar1[2];
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 1406582c4 FUN_1406582c4 body=194 status=ok
// SIG undefined FUN_1406582c4(void)

void FUN_1406582c4(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < (int)*(uint *)(param_1 + 0x90)) {
    uVar3 = *(uint *)(param_1 + 0x90);
    do {
      while( true ) {
        uVar1 = uVar3 - 1;
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x88) + (ulonglong)uVar1 * 8);
        if ((((plVar2 == (longlong *)0x0) || (*plVar2 == 0)) ||
            (FUN_147903b66(*plVar2,&local_48), local_48 != param_2)) ||
           (FUN_1433da1c6(plVar2,param_3,1), (*(byte *)(param_1 + 0x33) & 2) == 0)) break;
        if ((uVar3 < 2) || (uVar3 = uVar1, DAT_14c7612c8 != '\0')) goto LAB_1406582ee;
      }
      bVar4 = 1 < uVar3;
      uVar3 = uVar1;
    } while (bVar4);
  }
LAB_1406582ee:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140658388 FUN_140658388 body=543 status=ok
// SIG undefined FUN_140658388(void)

void FUN_140658388(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = *(int *)(param_1 + 0x820);
  local_60 = param_2;
  local_58 = param_3;
  if (iVar2 == 0) {
    uVar15 = 1;
    uVar14 = 0;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x818);
    if (*(uint **)(param_1 + 0x818) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x808);
    }
    uVar11 = *puVar6;
    if (uVar11 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_140658543;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar6[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar11 = 0xffffffff;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x7f8) + (longlong)iVar5 * 0x18) != *local_58) {
        lVar12 = *(longlong *)(param_1 + 0x7f8) + (longlong)iVar5 * 0x18;
        plVar4 = *(longlong **)(lVar12 + 8);
        (**(code **)(*plVar4 + 0x148))(plVar4,&local_50);
        if (local_50 == *local_60) {
          (**(code **)(**(longlong **)(lVar12 + 8) + 0x138))();
        }
      }
      uVar11 = uVar11 & ~(uint)uVar15;
      puVar6 = *(uint **)(param_1 + 0x818);
      if (*(uint **)(param_1 + 0x818) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x808);
      }
      iVar3 = *(int *)(param_1 + 0x820);
      iVar5 = (int)uVar14;
      lVar12 = (longlong)iVar5;
      uVar9 = puVar6[lVar12] & uVar11;
      if (uVar9 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar13 = 0;
          do {
            uVar9 = puVar6[lVar12 + lVar13 + 1];
            if (uVar9 != 0) {
              uVar14 = (ulonglong)(iVar5 + (int)lVar13 + 1);
              uVar11 = 0xffffffff;
              goto LAB_140658500;
            }
            iVar10 = iVar10 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar8 - lVar12 != lVar13);
          uVar11 = 0xffffffff;
          iVar5 = iVar8;
        }
        uVar14 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_140658500:
        uVar15 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
LAB_140658543:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406585a8 FUN_1406585a8 body=91 status=ok
// SIG undefined FUN_1406585a8(void)

void FUN_1406585a8(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_140658604();
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(param_2 + 0x38))) {
      lVar2 = 0;
      if (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
          lVar1 + 0x30) {
        lVar2 = param_2;
      }
      goto LAB_1406585e8;
    }
  }
  lVar2 = 0;
LAB_1406585e8:
  FUN_140005f6c(param_1,lVar2,param_3,param_4);
  return;
}



// FUNCTION 140658604 FUN_140658604 body=57 status=ok
// SIG undefined FUN_140658604(void)

void FUN_140658604(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba50d8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba50d8 = FUN_140002ddd(FUN_1465c16bc,uVar1,L"StructuredInteractableState");
  }
  return;
}



// FUNCTION 14065863e FUN_14065863e body=460 status=ok
// SIG undefined FUN_14065863e(void)

void FUN_14065863e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar15 = 0;
    uVar16 = 1;
    iVar6 = 0;
    iVar12 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar14 = *puVar10;
    if (uVar14 == 0) {
      iVar6 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar6 = iVar4 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar16 == uVar15) goto LAB_1406587c0;
        iVar12 = iVar12 + 0x20;
        uVar14 = puVar10[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar3 = uVar16 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar6) {
      iVar6 = iVar4;
    }
  }
  if (iVar6 < iVar4) {
    uVar14 = 0xffffffff;
    do {
      plVar5 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar6 * 0x20);
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
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar4 = (int)param_1[5];
      iVar6 = (int)uVar15;
      lVar13 = (longlong)iVar6;
      uVar7 = puVar10[lVar13] & uVar14;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar8 <= iVar6) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = puVar10[lVar13 + lVar11 + 1];
          if (uVar7 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar9 - lVar13 == lVar11) goto LAB_1406587c0;
        }
        uVar15 = (ulonglong)(iVar6 + (int)lVar11 + 1);
        uVar14 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_1406587c0:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 14065880a FUN_14065880a body=47 status=ok
// SIG undefined FUN_14065880a(void)

void FUN_14065880a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14065883a FUN_14065883a body=57 status=ok
// SIG undefined FUN_14065883a(void)

void FUN_14065883a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e498 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e498 = FUN_140002ddd(FUN_14653ad76,uVar1,L"PingFeedbackDef");
  }
  return;
}



// FUNCTION 140658874 FUN_140658874 body=107 status=ok
// SIG undefined FUN_140658874(void)

undefined8 * FUN_140658874(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14a77dc10;
  lVar2 = param_1[0xe3];
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_144716208(lVar2);
      FUN_1400020a8(lVar2);
    }
  }
  if ((longlong *)param_1[0xe2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe2] + 0x10))();
  }
  FUN_1406588e0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1406588e0 FUN_1406588e0 body=1693 status=ok
// SIG undefined FUN_1406588e0(void)

void FUN_1406588e0(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = &PTR_FUN_14a77db90;
  lVar8 = 0x6a0;
  do {
    lVar4 = *(longlong *)((longlong)param_1 + lVar8 + 0x50);
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
    FUN_14005bcf4(*(undefined8 *)((longlong)param_1 + lVar8 + 0x18),
                  *(undefined4 *)((longlong)param_1 + lVar8 + 0x20));
    if (*(longlong *)((longlong)param_1 + lVar8 + 0x18) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)((longlong)param_1 + lVar8) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)((longlong)param_1 + lVar8) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar8 = lVar8 + -0x60;
  } while (lVar8 != 0x3a0);
  lVar8 = 0x400;
  do {
    lVar4 = *(longlong *)((longlong)param_1 + lVar8 + -8);
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar9 = lVar8 + -0x60;
    lVar4 = *(longlong *)((longlong)param_1 + lVar8 + -0x10);
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    FUN_140658f7d(*(undefined8 *)((longlong)param_1 + lVar8 + -0x20),
                  *(undefined4 *)((longlong)param_1 + lVar8 + -0x18));
    if (*(longlong *)((longlong)param_1 + lVar8 + -0x20) != 0) {
      FUN_1400020a8();
    }
    lVar4 = *(longlong *)((longlong)param_1 + lVar8 + -0x28);
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar4 = *(longlong *)((longlong)param_1 + lVar8 + -0x30);
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar4 = *(longlong *)((longlong)param_1 + lVar8 + -0x38);
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
    lVar4 = *(longlong *)((longlong)param_1 + lVar8 + -0x40);
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar4 = *(longlong *)((longlong)param_1 + lVar8 + -0x48);
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar4 = *(longlong *)((longlong)param_1 + lVar8 + -0x50);
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar8 = *(longlong *)((longlong)param_1 + lVar8 + -0x58);
    if (lVar8 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar8 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar8 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar8 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar8;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar8 = *(longlong *)((longlong)param_1 + lVar9);
    if (lVar8 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar8 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar8 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar8 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar8;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar8 = lVar9;
  } while (lVar9 != 0x100);
  *param_1 = &PTR_FUN_14a77db50;
  if (param_1[0x18] != 0) {
    plVar7 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[0x1a];
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (param_1[0xe] != 0) {
    plVar7 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  *param_1 = &PTR_LAB_14aabfdc0;
                    /* WARNING: Could not recover jumptable at 0x000140658d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 140658f7d FUN_140658f7d body=44 status=ok
// SIG undefined FUN_140658f7d(void)

void FUN_140658f7d(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      FUN_1478b24e8(param_1);
      param_1 = param_1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140658faa FUN_140658faa body=120 status=ok
// SIG undefined FUN_140658faa(void)

bool FUN_140658faa(void)

{
  DWORD DVar1;
  undefined1 auStack_258 [32];
  LPCWSTR local_238;
  undefined2 *local_230;
  char local_220;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_140659024(&local_238);
  *local_230 = 0;
  DVar1 = GetFileAttributesW(local_238);
  if (local_220 == '\x01') {
    FUN_1400020a8(local_238);
  }
  if ((local_18 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return (DVar1 & 0x10) == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140659024 FUN_140659024 body=149 status=ok
// SIG undefined FUN_140659024(void)

longlong * FUN_140659024(longlong *param_1,wchar_t *param_2)

{
  size_t sVar1;
  longlong *_Dst;
  int iVar2;
  
  _Dst = param_1 + 4;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)_Dst;
  param_1[2] = (longlong)(param_1 + 0x44);
  if (param_2 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_2);
    iVar2 = (int)sVar1;
    if (iVar2 < 0x100) {
      if (iVar2 == 0) goto LAB_14065908f;
    }
    else {
      FUN_140213274(param_1,(longlong)iVar2);
      _Dst = (longlong *)param_1[1];
    }
    memcpy(_Dst,param_2,(longlong)(sVar1 << 0x20) >> 0x1f);
    param_1[1] = (longlong)_Dst + (longlong)iVar2 * 2;
  }
LAB_14065908f:
  FUN_144a08678(param_1,1);
  return param_1;
}



// FUNCTION 1406590ba FUN_1406590ba body=95 status=ok
// SIG undefined FUN_1406590ba(void)

void FUN_1406590ba(undefined8 param_1)

{
  size_t sVar1;
  undefined1 auStack_48 [40];
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (wchar_t *)FUN_1401aee94();
  if (local_20 == (wchar_t *)0x0) {
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(local_20);
    local_18 = (int)sVar1;
  }
  FUN_144a08a54(&local_20,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14065911a FUN_14065911a body=248 status=ok
// SIG undefined FUN_14065911a(void)

void FUN_14065911a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  longlong lVar6;
  short sVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined2 *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = &DAT_149e35204;
  local_18 = 2;
  local_30 = *param_1;
  local_28 = (undefined4)((ulonglong)(param_1[1] - local_30) >> 1);
  iVar3 = FUN_144a08910(&local_30,&local_20,0);
  if (iVar3 != -1) {
    lVar2 = *param_1;
    lVar8 = (longlong)iVar3;
    psVar4 = (short *)(lVar2 + lVar8 * 2 + 2);
    lVar6 = lVar2 + lVar8 * 2 + 4;
    lVar5 = (longlong)(int)((ulonglong)(param_1[1] - lVar2) >> 1);
    lVar1 = lVar2 + lVar5 * 2;
    if (lVar6 != lVar1) {
      lVar8 = lVar8 * 2 + 4;
      sVar7 = 0x2f;
      do {
        if ((sVar7 == 0x2f) && (*(short *)(lVar2 + lVar8) == 0x2f)) {
          sVar7 = 0x2f;
        }
        else {
          *psVar4 = *(short *)(lVar2 + lVar8);
          psVar4 = psVar4 + 1;
          sVar7 = *(short *)(lVar2 + lVar8);
        }
        lVar8 = lVar8 + 2;
        lVar6 = lVar1;
      } while (lVar5 * 2 != lVar8);
    }
    *psVar4 = 0;
    param_1[1] = param_1[1] + (longlong)(int)((ulonglong)(lVar6 - (longlong)psVar4) >> 1) * -2;
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140659213 FUN_140659213 body=1337 status=ok
// SIG undefined FUN_140659213(void)

void FUN_140659213(longlong *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  uint uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  ushort uVar11;
  ulonglong uVar12;
  ushort uVar13;
  ulonglong uVar14;
  undefined2 *puVar15;
  wchar_t *pwVar16;
  undefined2 *puVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStack_98 [40];
  wchar_t *local_70;
  wchar_t *local_68;
  uint local_60;
  undefined2 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  pwVar16 = (wchar_t *)*param_1;
  lVar9 = param_1[1];
  uVar20 = lVar9 - (longlong)pwVar16;
  if ((uVar20 >> 1 & 0xffffffff) != 0) {
    lVar9 = 0;
    do {
      if (*(short *)((longlong)pwVar16 + lVar9) == 0x5c) {
        *(undefined2 *)((longlong)pwVar16 + lVar9) = 0x2f;
      }
      lVar9 = lVar9 + 2;
    } while ((longlong)(int)(uVar20 >> 1) * 2 != lVar9);
    pwVar16 = (wchar_t *)*param_1;
    lVar9 = param_1[1];
    uVar20 = lVar9 - (longlong)pwVar16;
  }
  uVar12 = uVar20 >> 1;
  iVar1 = (int)uVar12;
joined_r0x00014065928f:
  if ((iVar1 != 0) && (uVar5 = (uint)uVar12, 1 < (int)uVar5)) {
    lVar6 = 2;
    lVar18 = 0;
    do {
      uVar11 = *(ushort *)((longlong)&DAT_149e06258 + lVar18);
      uVar21 = (ulonglong)uVar11;
      uVar13 = *(ushort *)((longlong)pwVar16 + lVar18);
      if (uVar11 == uVar13) {
        if (uVar11 == 0) goto LAB_140659671;
      }
      else {
        if (0x7f < (uVar13 | uVar11)) goto LAB_140659300;
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
        uVar14 = (ulonglong)uVar13;
        uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
        if ((&DAT_149e05da0)[uVar21] != (&DAT_149e05da0)[uVar14]) goto LAB_140659300;
      }
      lVar6 = lVar6 + -1;
      if (lVar6 == 0) goto LAB_140659671;
      lVar18 = lVar18 + 2;
    } while( true );
  }
LAB_140659630:
  local_58 = (undefined2 *)&DAT_149e32c52;
  local_60 = (uint)((ulonglong)(lVar9 - (longlong)pwVar16) >> 1);
  if ((int)local_60 < 1) {
    local_60 = 0;
  }
  local_50 = 2;
  local_68 = pwVar16;
  uVar5 = FUN_144aff1e3(&local_68,&local_58,0);
  if (uVar5 != 0xffffffff) {
    do {
      local_68 = (wchar_t *)*param_1;
      pwVar10 = (wchar_t *)(param_1[1] + -4);
      param_1[1] = (longlong)pwVar10;
      pwVar16 = local_68 + (int)uVar5;
      if (pwVar16 != pwVar10) {
        do {
          *pwVar16 = pwVar16[2];
          pwVar16 = pwVar16 + 1;
        } while (pwVar16 != pwVar10);
        local_68 = (wchar_t *)*param_1;
        pwVar10 = (wchar_t *)param_1[1];
      }
      local_58 = (undefined2 *)&DAT_149e32c52;
      local_50 = 2;
      local_60 = (uint)((ulonglong)((longlong)pwVar10 - (longlong)local_68) >> 1);
      if ((int)uVar5 < (int)local_60) {
        local_60 = uVar5;
      }
      if ((int)local_60 < 1) {
        local_60 = 0;
      }
      uVar5 = FUN_144aff1e3(&local_68,&local_58,0);
    } while (uVar5 != 0xffffffff);
  }
LAB_140659671:
  puVar7 = (undefined2 *)param_1[1];
  if (((longlong)puVar7 - *param_1 & 0x1fffffffeU) == 0) {
    if ((undefined2 *)param_1[2] <= puVar7 + 1) {
      FUN_140213274(param_1,1);
      puVar7 = (undefined2 *)param_1[1];
    }
    param_1[1] = (longlong)(puVar7 + 1);
    *puVar7 = 0x2f;
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_140659300:
  if (uVar11 == uVar13) goto LAB_140659671;
  if (uVar5 == 2) goto LAB_140659630;
  iVar1 = FUN_144a54874(&DAT_149e32c4a,pwVar16,3);
  if (iVar1 == 0) goto LAB_140659671;
  local_70 = pwVar16 + ((uVar12 & 0xffffffff) - 3);
  if (local_70 < pwVar16) goto LAB_140659630;
  iVar1 = 0;
  pwVar10 = pwVar16;
  while (iVar2 = wcsncmp(pwVar10,L"/..",3), iVar2 != 0) {
    pwVar10 = pwVar10 + 1;
    iVar1 = iVar1 + -1;
    if (local_70 < pwVar10) goto LAB_140659630;
  }
  if (iVar1 == 1) goto LAB_140659630;
  uVar19 = -iVar1;
  while( true ) {
    uVar21 = (ulonglong)uVar19;
    iVar1 = uVar19 + 3;
    uVar3 = uVar5 - iVar1;
    if ((uVar3 == 0 || (int)uVar5 < iVar1) || (pwVar16[iVar1] == L'/')) break;
    local_58 = &DAT_149e32c4a;
    local_50 = 3;
    if ((int)uVar5 <= (int)uVar3) {
      uVar3 = uVar5;
    }
    local_60 = uVar3;
    if ((int)uVar3 < 1) {
      local_60 = 0;
    }
    local_68 = (wchar_t *)
               ((longlong)pwVar16 + ((longlong)(int)(uVar20 >> 1) * 2 - (ulonglong)(local_60 * 2)));
    iVar2 = FUN_144a08910(&local_68,&local_58);
    if ((iVar2 == -1) || (uVar19 = iVar2 + iVar1, uVar19 == 0xffffffff)) {
      pwVar16 = (wchar_t *)*param_1;
      lVar9 = param_1[1];
      goto LAB_140659630;
    }
  }
  while( true ) {
    uVar3 = (uint)uVar21;
    if ((int)uVar5 <= (int)(uint)uVar21) {
      uVar3 = uVar5;
    }
    uVar8 = 0xffffffff;
    if ((int)uVar3 < 1) break;
    uVar21 = (ulonglong)uVar3 * 2;
    do {
      pwVar10 = (wchar_t *)((longlong)pwVar16 + (uVar21 - 2));
      if (pwVar10 < pwVar16) goto LAB_1406594bd;
      uVar21 = uVar21 - 2;
    } while (*pwVar10 != L'/');
    uVar21 = uVar21 >> 1;
    uVar3 = (uint)uVar21;
    if (uVar3 == 0xffffffff) break;
    uVar4 = uVar3 + 1;
    uVar8 = (int)uVar4 >> 0x1f & uVar4;
    uVar4 = uVar4 - uVar8;
    iVar1 = uVar8 + 2;
    if ((int)uVar5 <= (int)uVar4) {
      uVar4 = uVar5;
    }
    iVar2 = uVar5 - uVar4;
    if (iVar1 < (int)(uVar5 - uVar4)) {
      iVar2 = iVar1;
    }
    uVar8 = uVar3;
    if ((iVar2 != 2) || (iVar1 = FUN_144a54874(pwVar16 + (int)uVar4,&DAT_149e32c52,2), iVar1 != 0))
    break;
  }
LAB_1406594bd:
  uVar20 = (ulonglong)uVar8;
  if ((int)uVar8 < 1) {
    uVar20 = 0;
  }
  iVar1 = (int)uVar20;
  iVar2 = uVar19 - iVar1;
  uVar3 = iVar2 + 3;
  uVar12 = uVar12 & 0xffffffff;
  if (iVar1 < (int)uVar5) {
    uVar12 = uVar20;
  }
  uVar5 = uVar5 - (int)uVar12;
  if ((int)uVar3 < (int)uVar5) {
    uVar5 = uVar3;
  }
  if (0 < (int)uVar5) {
    uVar21 = 0;
    do {
      if (*(short *)((longlong)pwVar16 + uVar21 + uVar12 * 2) == 0x3a) {
        if ((~uVar21 & 0x1fffffffe) != 0) goto LAB_140659671;
        break;
      }
      lVar9 = uVar21 + uVar12 * 2;
      uVar21 = uVar21 + 2;
    } while ((wchar_t *)((longlong)pwVar16 + lVar9 + 2) < pwVar16 + uVar12 + uVar5);
  }
  if (iVar2 < -2) {
    if (uVar3 != 0) {
      lVar9 = param_1[1];
      uVar12 = (ulonglong)(-iVar2 - 3U);
      if ((ulonglong)param_1[2] <= lVar9 + uVar12 * 2) {
        FUN_140213274(param_1,uVar12);
        lVar9 = param_1[1];
      }
      puVar7 = (undefined2 *)(lVar9 + uVar12 * 2);
      param_1[1] = (longlong)puVar7;
      puVar17 = (undefined2 *)(uVar20 * 2 + *param_1);
      if (puVar7 != puVar17) {
        do {
          puVar7 = (undefined2 *)(lVar9 + -2);
          puVar15 = (undefined2 *)(lVar9 + uVar12 * 2 + -2);
          lVar9 = lVar9 + -2;
          *puVar15 = *puVar7;
        } while (puVar15 != puVar17);
      }
    }
  }
  else {
    puVar7 = (undefined2 *)((longlong)(int)(-iVar2 - 3U) * 2 + param_1[1]);
    param_1[1] = (longlong)puVar7;
    puVar17 = (undefined2 *)(uVar20 * 2 + *param_1);
    if (puVar17 != puVar7) {
      do {
        *puVar17 = puVar17[(longlong)(int)uVar19 + (longlong)-iVar1 + 3];
        puVar17 = puVar17 + 1;
      } while (puVar17 != puVar7);
    }
  }
  pwVar16 = (wchar_t *)*param_1;
  lVar9 = param_1[1];
  uVar20 = lVar9 - (longlong)pwVar16;
  uVar12 = uVar20 >> 1;
  iVar1 = (int)uVar12;
  goto joined_r0x00014065928f;
}



// FUNCTION 14065974e FUN_14065974e body=207 status=ok
// SIG undefined FUN_14065974e(void)

void FUN_14065974e(undefined8 *param_1)

{
  short sVar1;
  ushort *puVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar2 = (ushort *)*param_1;
  lVar5 = param_1[1];
  uVar4 = lVar5 - (longlong)puVar2;
  if ((uVar4 >> 1 & 0xffffffff) != 0) {
    lVar5 = 0;
    do {
      if (*(short *)((longlong)puVar2 + lVar5) == 0x5c) {
        *(undefined2 *)((longlong)puVar2 + lVar5) = 0x2f;
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)(int)(uVar4 >> 1) * 2 != lVar5);
    puVar2 = (ushort *)*param_1;
    lVar5 = param_1[1];
    uVar4 = lVar5 - (longlong)puVar2;
  }
  uVar3 = (uint)(uVar4 >> 1);
  if ((int)uVar3 < 3) {
    if (((uVar3 == 2) && ((puVar2[1] == 0x5c || (puVar2[1] == 0x2f)))) &&
       ((0x2d < *puVar2 - 0x2f ||
        ((0x200000000801U >> ((ulonglong)(*puVar2 - 0x2f) & 0x3f) & 1) == 0)))) {
      lVar6 = -1;
      goto LAB_1406597b7;
    }
  }
  else {
    sVar1 = *(short *)((longlong)puVar2 + ((ulonglong)(uVar3 * 2) - 2));
    if ((sVar1 == 0x2f) || (sVar1 == 0x5c)) {
      lVar6 = -(ulonglong)(puVar2[(ulonglong)(uVar3 & 0x7fffffff) - 2] != 0x3a);
      goto LAB_1406597b7;
    }
  }
  lVar6 = 0;
LAB_1406597b7:
  param_1[1] = lVar5 + lVar6 * 2;
  return;
}



// FUNCTION 14065982c FUN_14065982c body=109 status=ok
// SIG undefined FUN_14065982c(void)

undefined8 * FUN_14065982c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4914a0;
  FUN_140659899(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14aff06f0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140659899 FUN_140659899 body=47 status=ok
// SIG undefined FUN_140659899(void)

void FUN_140659899(longlong param_1,int param_2)

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



// FUNCTION 1406598c8 FUN_1406598c8 body=84 status=ok
// SIG undefined FUN_1406598c8(void)

void FUN_1406598c8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_14065991e(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14065991e FUN_14065991e body=252 status=ok
// SIG undefined FUN_14065991e(void)

void FUN_14065991e(undefined8 *param_1,longlong param_2)

{
  FUN_140659bfa(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659c98(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659abc(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x80,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x98,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0xb0,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 200,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0xe0,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0xf8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x110,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x128,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 140659a1a FUN_140659a1a body=161 status=ok
// SIG undefined FUN_140659a1a(void)

void FUN_140659a1a(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((char)param_1[1] == '\x01') {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      plVar3 = *(longlong **)(param_2 + 0x28);
      lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_140659a57;
        plVar3 = plVar3 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    plVar3 = (longlong *)0x0;
LAB_140659a57:
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 == 1) {
      AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
    }
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
    UNLOCK();
    *(undefined8 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
         *(undefined8 *)(param_1 + 4);
    if ((char)param_1[8] == '\x01') {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
      UNLOCK();
      if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140659aaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140659abc FUN_140659abc body=161 status=ok
// SIG undefined FUN_140659abc(void)

void FUN_140659abc(short *param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if ((char)param_1[1] == '\x01') {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      plVar7 = *(longlong **)(param_2 + 0x28);
      lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)plVar7 + 0x1e) == *param_1) goto LAB_140659af9;
        plVar7 = plVar7 + 4;
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != 0);
    }
    plVar7 = (longlong *)0x0;
LAB_140659af9:
    iVar2 = *(int *)(param_2 + 0x14);
    if (iVar2 == 1) {
      AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
    }
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
    UNLOCK();
    uVar3 = *(undefined4 *)(param_1 + 4);
    uVar4 = *(undefined4 *)(param_1 + 6);
    uVar5 = *(undefined4 *)(param_1 + 8);
    puVar1 = (undefined4 *)
             (*plVar7 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar7 + 0x1c));
    *puVar1 = *(undefined4 *)(param_1 + 2);
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    if ((char)param_1[10] == '\x01') {
      *(undefined1 *)(param_1 + 10) = 0;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
      UNLOCK();
      if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140659b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140659b5e FUN_140659b5e body=156 status=ok
// SIG undefined FUN_140659b5e(void)

void FUN_140659b5e(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((char)param_1[1] == '\x01') {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      plVar3 = *(longlong **)(param_2 + 0x28);
      lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_140659ba0;
        plVar3 = plVar3 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    plVar3 = (longlong *)0x0;
LAB_140659ba0:
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 == 1) {
      AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
    }
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
    UNLOCK();
    *(undefined8 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
         *(undefined8 *)(param_1 + 4);
    if ((char)param_1[8] == '\x01') {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
      UNLOCK();
      if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140659bf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140659bfa FUN_140659bfa body=158 status=ok
// SIG undefined FUN_140659bfa(void)

void FUN_140659bfa(short *param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *param_1) goto LAB_140659c2d;
      plVar8 = plVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_140659c2d:
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar6 = *plVar8;
  lVar7 = (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar8 + 0x1c);
  *(undefined4 *)(lVar6 + 0x10 + lVar7) = *(undefined4 *)(param_1 + 10);
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 6);
  uVar5 = *(undefined4 *)(param_1 + 8);
  puVar1 = (undefined4 *)(lVar6 + lVar7);
  *puVar1 = *(undefined4 *)(param_1 + 2);
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  if ((char)param_1[0xc] == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140659c87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 140659c98 FUN_140659c98 body=161 status=ok
// SIG undefined FUN_140659c98(void)

void FUN_140659c98(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((char)param_1[1] == '\x01') {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      plVar3 = *(longlong **)(param_2 + 0x28);
      lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_140659cd5;
        plVar3 = plVar3 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    plVar3 = (longlong *)0x0;
LAB_140659cd5:
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 == 1) {
      AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
    }
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
    UNLOCK();
    *(undefined8 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
         *(undefined8 *)(param_1 + 4);
    if ((char)param_1[8] == '\x01') {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
      UNLOCK();
      if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140659d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140659d3a FUN_140659d3a body=183 status=ok
// SIG undefined FUN_140659d3a(void)

void FUN_140659d3a(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar2 = *piVar1;
  if (iVar2 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar2 = *piVar1;
  }
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = 0x40000002;
  }
  FUN_140659df2(param_1[0x15],*(undefined4 *)(param_1 + 0x16),
                *(undefined4 *)((longlong)param_1 + 0xb4),*(undefined1 *)(param_1 + 0x17),1);
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = iVar2;
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140659dee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 140659df2 FUN_140659df2 body=1465 status=ok
// SIG undefined FUN_140659df2(void)

void FUN_140659df2(longlong param_1,int param_2,int param_3,undefined1 param_4,char param_5)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  longlong local_140;
  undefined8 *local_138;
  uint local_12c;
  longlong *local_128;
  longlong local_120;
  longlong *local_118;
  undefined8 uStack_110;
  undefined1 local_fa;
  char local_f9;
  code *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d8;
  longlong **pplStack_d0;
  undefined1 *local_c8;
  char *local_c0;
  void *local_b8;
  uint local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_f9 = param_5;
  local_fa = param_4;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (*(int *)(param_1 + 0x61c) < 0) {
      *(undefined4 *)(param_1 + 0x618) = 0;
      FUN_14481578e(param_1 + 0x610,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x618) = 0;
    }
  }
  uVar14 = *(uint *)(param_1 + 0xc0);
  lVar12 = (longlong)((param_2 + 1) * *(int *)(param_1 + 0x18));
  uVar7 = lVar12 / (longlong)param_3;
  uVar6 = uVar7 & 0xffffffff;
  local_12c = (uint)uVar7;
  if (DAT_14cb0a4f8 == 0) {
    uVar5 = local_12c;
    if ((int)uVar14 < (int)local_12c) {
      lVar12 = param_1 + 0x330;
      if (param_5 == '\0') {
        lVar12 = 0;
      }
      local_120 = param_1 + 0xc4;
      local_128 = (longlong *)(param_1 + 0x610);
      lVar17 = (longlong)(int)uVar14 * 0xa8;
      do {
        lVar3 = *(longlong *)(param_1 + 0x10);
        if (*(longlong *)(lVar3 + lVar17) != 0) {
          cVar1 = *(char *)(lVar3 + 0x84 + lVar17);
          if (cVar1 == '\x03') {
            lVar8 = *(longlong *)(param_1 + 0x1f8);
            uVar11 = *(undefined4 *)(param_1 + 0x200);
          }
          else if (cVar1 == '\x02') {
            lVar8 = *(longlong *)(param_1 + 0x1e8);
            uVar11 = *(undefined4 *)(param_1 + 0x1f0);
          }
          else if (cVar1 == '\x01') {
            uVar11 = 0x49;
            lVar8 = local_120;
          }
          else {
            uVar11 = 0xffffffff;
            lVar8 = 0;
          }
          local_148 = param_4;
          local_140 = lVar12;
          FUN_1447acc2e(lVar3 + lVar17,lVar8,uVar11,param_1 + 0x208);
          uVar6 = (ulonglong)local_12c;
          if (*(char *)(lVar3 + 0x7b + lVar17) != *(char *)(lVar3 + 0x7a + lVar17)) {
            iVar9 = *(int *)(param_1 + 0x618);
            uVar5 = iVar9 + 1;
            *(uint *)(param_1 + 0x618) = uVar5;
            if (*(uint *)(param_1 + 0x61c) < uVar5) {
              FUN_1446f48e2(local_128);
              uVar6 = (ulonglong)local_12c;
            }
            *(uint *)(*local_128 + (longlong)iVar9 * 4) = uVar14;
          }
        }
        uVar14 = uVar14 + 1;
        lVar17 = lVar17 + 0xa8;
        uVar5 = (uint)uVar6;
      } while ((uint)uVar6 != uVar14);
    }
  }
  else {
    iVar9 = local_12c - uVar14;
    iVar4 = (**(code **)(*DAT_14c82b500 + 0x20))
                      (DAT_14c82b500,lVar12 % (longlong)param_3 & 0xffffffff);
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    iVar10 = iVar4 * DAT_14c761bbc;
    if (iVar9 + -1 <= iVar4 * DAT_14c761bbc) {
      iVar10 = iVar9 + -1;
    }
    if (iVar10 < 2) {
      iVar10 = 1;
    }
    local_118 = (longlong *)0x0;
    uStack_110 = 0;
    FUN_14372349d(0,0);
    uStack_110 = uStack_110 & 0xffffffff00000000;
    FUN_143723798(&local_118,iVar10);
    iVar4 = iVar9 / iVar10 + 1;
    do {
      uVar7 = uStack_110;
      iVar10 = iVar10 + -1;
      iVar15 = iVar4;
      if (iVar9 < iVar4) {
        iVar15 = iVar9;
      }
      lVar12 = (longlong)(int)uStack_110;
      uVar5 = (int)uStack_110 + 1;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar5);
      if (uStack_110._4_4_ < uVar5) {
        FUN_1437234da(&local_118,uVar7 & 0xffffffff);
      }
      *(uint *)(local_118 + lVar12 * 0xe) = uVar14;
      *(uint *)((longlong)local_118 + lVar12 * 0x70 + 4) = iVar15 + uVar14;
      local_118[lVar12 * 0xe + 1] = param_1 + 0x10;
      local_118[lVar12 * 0xe + 2] = 0;
      (local_118 + lVar12 * 0xe + 2)[1] = 0;
      local_118[lVar12 * 0xe + 4] = 0;
      (local_118 + lVar12 * 0xe + 4)[1] = 0;
    } while ((iVar9 - iVar15 != 0 && iVar15 <= iVar9) &&
            (uVar14 = iVar15 + uVar14, iVar9 = iVar9 - iVar15, iVar10 != 0));
    local_f0 = &local_d8;
    pplStack_d0 = &local_118;
    local_c8 = &local_fa;
    local_c0 = &local_f9;
    local_138 = &local_e8;
    local_e8 = 0;
    local_e0 = 0;
    local_f8 = FUN_1437235e0;
    local_140 = CONCAT44(local_140._4_4_,8);
    local_d8 = param_1;
    FUN_1411ca36e(L"RenderAssetStreaming",uStack_110 & 0xffffffff,1);
    if ((longlong)(int)uStack_110 == 0) {
      uVar7 = 0;
    }
    else {
      plVar13 = local_118 + (longlong)(int)uStack_110 * 0xe;
      plVar16 = local_118;
      do {
        local_d8 = *plVar16;
        pplStack_d0 = (longlong **)plVar16[1];
        local_c8 = (undefined1 *)0x0;
        uVar14 = *(uint *)(plVar16 + 3);
        pvVar2 = (void *)plVar16[2];
        local_c0 = (char *)CONCAT44(local_c0._4_4_,uVar14);
        if ((longlong)(int)uVar14 == 0) {
          local_c0 = (char *)(ulonglong)uVar14;
        }
        else {
          FUN_144a06ca8(&local_c8,uVar14,0);
          memcpy(local_c8,pvVar2,(longlong)(int)uVar14 << 2);
        }
        local_b8 = (void *)0x0;
        local_b0 = *(uint *)(plVar16 + 5);
        lVar12 = (longlong)(int)local_b0;
        pvVar2 = (void *)plVar16[4];
        if (lVar12 == 0) {
          local_ac = 0;
        }
        else {
          FUN_14371f55c(&local_b8,local_b0);
          memcpy(local_b8,pvVar2,lVar12 << 3);
        }
        local_a8 = (undefined4)plVar16[6];
        uStack_a4 = *(undefined4 *)((longlong)plVar16 + 0x34);
        uStack_a0 = (undefined4)plVar16[7];
        uStack_9c = *(undefined4 *)((longlong)plVar16 + 0x3c);
        local_98 = (undefined4)plVar16[8];
        uStack_94 = *(undefined4 *)((longlong)plVar16 + 0x44);
        uStack_90 = (undefined4)plVar16[9];
        uStack_8c = *(undefined4 *)((longlong)plVar16 + 0x4c);
        local_88 = (undefined4)plVar16[10];
        uStack_84 = *(undefined4 *)((longlong)plVar16 + 0x54);
        uStack_80 = (undefined4)plVar16[0xb];
        uStack_7c = *(undefined4 *)((longlong)plVar16 + 0x5c);
        local_78 = (undefined4)plVar16[0xc];
        uStack_74 = *(undefined4 *)((longlong)plVar16 + 100);
        uStack_70 = (undefined4)plVar16[0xd];
        uStack_6c = *(undefined4 *)((longlong)plVar16 + 0x6c);
        lVar12 = (longlong)(int)(uint)local_c0;
        if (lVar12 != 0) {
          iVar9 = *(int *)(param_1 + 0x618);
          *(uint *)(param_1 + 0x618) = iVar9 + (uint)local_c0;
          if ((uint)(*(int *)(param_1 + 0x61c) - iVar9) < (uint)local_c0) {
            FUN_1446f48e2((longlong *)(param_1 + 0x610),iVar9);
          }
          memcpy((void *)((longlong)iVar9 * 4 + *(longlong *)(param_1 + 0x610)),local_c8,lVar12 << 2
                );
        }
        lVar12 = (longlong)(int)local_b0;
        if (lVar12 != 0) {
          iVar9 = *(int *)(param_1 + 0x338);
          *(uint *)(param_1 + 0x338) = iVar9 + local_b0;
          if ((uint)(*(int *)(param_1 + 0x33c) - iVar9) < local_b0) {
            FUN_1457372d6((longlong *)(param_1 + 0x330),iVar9);
          }
          memcpy((void *)((longlong)iVar9 * 8 + *(longlong *)(param_1 + 0x330)),local_b8,lVar12 << 3
                );
        }
        uVar7 = (ulonglong)local_c0 >> 0x20;
        local_c0 = (char *)((ulonglong)local_c0 & 0xffffffff00000000);
        if ((int)uVar7 != 0) {
          FUN_14481578e(&local_c8,0);
        }
        local_b0 = 0;
        if (local_ac != 0) {
          FUN_147d64106(&local_b8);
        }
        if (local_b8 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_c8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        plVar16 = plVar16 + 0xe;
      } while (plVar16 != plVar13);
      uVar7 = uStack_110 & 0xffffffff;
    }
    FUN_14372349d(local_118,uVar7);
    uVar7 = uStack_110 >> 0x20;
    uStack_110 = uStack_110 & 0xffffffff00000000;
    uVar11 = 0;
    if ((int)uVar7 != 0) {
      FUN_143723798(&local_118,0);
      uVar11 = (int)uStack_110;
    }
    FUN_14372349d(local_118,uVar11);
    uVar5 = local_12c;
    if (local_118 != (longlong *)0x0) {
      FUN_1400020a8();
      uVar5 = local_12c;
    }
  }
  *(uint *)(param_1 + 0xc0) = uVar5;
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14065a3ac FUN_14065a3ac body=566 status=ok
// SIG undefined FUN_14065a3ac(void)

void FUN_14065a3ac(longlong *param_1,undefined4 param_2,longlong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  int iStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  memset(&local_158,0,0x118);
  local_158 = CONCAT31(local_158._1_3_,1);
  local_60 = param_1;
  bVar3 = FUN_140899648(param_3 + 0x18);
  DAT_14cb7ee10 = (bVar3 ^ 3) + (DAT_14cb7ee10 & 0xfffffffe);
  local_148 = *(undefined4 *)(param_3 + 8);
  uStack_144 = *(undefined4 *)(param_3 + 0xc);
  uStack_140 = *(undefined4 *)(param_3 + 0x10);
  uStack_13c = *(undefined4 *)(param_3 + 0x14);
  local_138 = *(undefined8 *)(param_3 + 0x18);
  iStack_154 = DAT_14cb7ee10;
  uStack_150 = param_2;
  uVar4 = FUN_14477b664(*(undefined8 *)(param_3 + 0x20));
  local_130 = FUN_14477b664(uVar4);
  local_128 = *(undefined8 *)(param_3 + 0x28);
  local_120 = *(undefined4 *)(param_3 + 0x30);
  uStack_11c = *(undefined4 *)(param_3 + 0x34);
  uStack_118 = *(undefined4 *)(param_3 + 0x38);
  uStack_114 = *(undefined4 *)(param_3 + 0x3c);
  local_d8 = 0;
  FUN_14065a710(param_1,&local_158);
  FUN_14065a5e4(&local_158);
  FUN_14065aa60(&local_158);
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_14065bf12(param_1,iVar2);
  }
  puVar1 = (undefined4 *)(*param_1 + (longlong)iVar2 * 0x118);
  puVar1[4] = local_148;
  puVar1[5] = uStack_144;
  puVar1[6] = uStack_140;
  puVar1[7] = uStack_13c;
  *puVar1 = local_158;
  puVar1[1] = iStack_154;
  puVar1[2] = uStack_150;
  puVar1[3] = uStack_14c;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 10) = 0;
  *(undefined8 *)(puVar1 + 0xc) = 0;
  *(undefined8 *)(puVar1 + 8) = local_138;
  uVar4 = FUN_14477b664(local_130);
  uVar4 = FUN_14477b664(uVar4);
  *(undefined8 *)(puVar1 + 10) = uVar4;
  *(undefined8 *)(puVar1 + 0xc) = local_128;
  puVar1[0xe] = local_120;
  puVar1[0xf] = uStack_11c;
  puVar1[0x10] = uStack_118;
  puVar1[0x11] = uStack_114;
  *(undefined8 *)(puVar1 + 0x16) = 0;
  *(undefined8 *)(puVar1 + 0x12) = 0;
  *(undefined8 *)(puVar1 + 0x14) = 0;
  *(undefined8 *)(puVar1 + 0x12) = local_110;
  uVar4 = FUN_14477b664(local_108);
  uVar4 = FUN_14477b664(uVar4);
  *(undefined8 *)(puVar1 + 0x14) = uVar4;
  *(undefined8 *)(puVar1 + 0x16) = local_100;
  *(undefined8 *)(puVar1 + 0x1c) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x1a) = 0;
  *(undefined8 *)(puVar1 + 0x18) = local_f8;
  uVar4 = FUN_14477b664(local_f0);
  uVar4 = FUN_14477b664(uVar4);
  *(undefined8 *)(puVar1 + 0x1a) = uVar4;
  *(undefined8 *)(puVar1 + 0x1c) = local_e8;
  memcpy(puVar1 + 0x1e,local_e0,0x88);
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x42) = 0;
  *(undefined8 *)(puVar1 + 0x44) = 0;
  *(undefined8 *)(puVar1 + 0x40) = local_58;
  uVar4 = FUN_14477b664(local_50);
  uVar4 = FUN_14477b664(uVar4);
  *(undefined8 *)(puVar1 + 0x42) = uVar4;
  *(undefined8 *)(puVar1 + 0x44) = local_48;
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14065a5e4 FUN_14065a5e4 body=298 status=ok
// SIG undefined FUN_14065a5e4(void)

void FUN_14065a5e4(undefined1 *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined1 *local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 3;
  lVar4 = *(longlong *)(param_1 + 0x68);
  if (lVar4 == 0) {
    uVar3 = FUN_1407ad36c();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x68) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x70) == 0) {
    if ((lVar4 == 0) || (*(longlong *)(param_1 + 0x60) == 0)) goto LAB_14065a695;
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      *(undefined8 *)(param_1 + 0x70) = 0;
      goto LAB_14065a695;
    }
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar4 = FUN_144aff482(uVar3,param_1 + 0x60);
    *(longlong *)(param_1 + 0x70) = lVar4;
    if (lVar4 == 0) goto LAB_14065a695;
  }
  local_40 = *(undefined8 *)(param_1 + 0xf8);
  local_58 = 0;
  local_48 = &PTR_LAB_14b40a990;
  local_68 = FUN_143d6ddf0;
  local_38 = param_1;
  FUN_141359eec(local_40,param_1);
  lVar4 = *(longlong *)(param_1 + 0xf8);
  lVar5 = FUN_14494f566(param_1 + 0x20);
  if (*(longlong *)(lVar4 + 0x240) != 0) {
    uVar3 = *(undefined8 *)(lVar5 + 8);
    FUN_14188d7b2();
    FUN_14109516e(*(undefined8 *)(lVar4 + 0x240),uVar3);
  }
LAB_14065a695:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14065a710 FUN_14065a710 body=848 status=ok
// SIG undefined FUN_14065a710(void)

void FUN_14065a710(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar10 = *(longlong *)(param_2 + 0x108);
  if (lVar10 == 0) {
    uVar8 = FUN_14065b502();
    lVar10 = FUN_14477b664(uVar8);
    *(longlong *)(param_2 + 0x108) = lVar10;
  }
  plVar1 = (longlong *)(param_2 + 0x100);
  lVar9 = *(longlong *)(param_2 + 0x110);
  if (lVar9 == 0) {
    if ((*plVar1 != 0) && (lVar10 != 0)) {
      plVar2 = *(longlong **)(lVar10 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(param_2 + 0x110) = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar9 = FUN_144aff482(uVar8,plVar1);
        *(longlong *)(param_2 + 0x110) = lVar9;
        if (lVar9 != 0) goto LAB_14065a74d;
      }
    }
    lVar9 = FUN_140317ef6(param_2 + 0x20);
    if (lVar9 == 0) {
      lVar9 = FUN_14575395a();
    }
  }
LAB_14065a74d:
  iVar4 = (int)param_1[1];
  if (0 < iVar4) {
    lVar12 = 0;
    lVar10 = 0;
    do {
      lVar11 = *param_1;
      if ((*(char *)(lVar11 + lVar12) == '\x03') &&
         (*(longlong *)(lVar11 + 0x18 + lVar12) == *(longlong *)(param_2 + 0x18))) {
        FUN_1411a2fd8(lVar11 + lVar12,0);
        iVar4 = (int)param_1[1];
      }
      lVar10 = lVar10 + 1;
      lVar12 = lVar12 + 0x118;
    } while (lVar10 < iVar4);
  }
  if (lVar9 == 0) {
    return;
  }
  if (*(char *)(lVar9 + 0x1a) == '\x01') {
    return;
  }
  lVar10 = *(longlong *)(param_2 + 0x108);
  if (lVar10 == 0) {
    uVar8 = FUN_14065b502();
    lVar10 = FUN_14477b664(uVar8);
    *(longlong *)(param_2 + 0x108) = lVar10;
  }
  lVar12 = *(longlong *)(param_2 + 0x110);
  if (lVar12 == 0) {
    if ((*plVar1 != 0) && (lVar10 != 0)) {
      plVar2 = *(longlong **)(lVar10 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(param_2 + 0x110) = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar12 = FUN_144aff482(uVar8,plVar1);
        *(longlong *)(param_2 + 0x110) = lVar12;
        if (lVar12 != 0) goto LAB_14065a7c1;
      }
    }
    lVar12 = FUN_140317ef6(param_2 + 0x20);
    if ((lVar12 == 0) && (lVar12 = FUN_14575395a(), lVar12 == 0)) {
      iVar4 = 0;
      goto LAB_14065a7c4;
    }
  }
LAB_14065a7c1:
  iVar4 = *(int *)(lVar12 + 0x1c);
LAB_14065a7c4:
  if (0 < (int)param_1[1]) {
    lVar10 = 0x100;
    lVar12 = 0;
    do {
      lVar11 = *param_1;
      if (*(char *)(lVar11 + -0x100 + lVar10) == '\x03') {
        lVar7 = *(longlong *)(lVar11 + 8 + lVar10);
        if (lVar7 == 0) {
          uVar8 = FUN_14065b502();
          lVar7 = FUN_14477b664(uVar8);
          *(longlong *)(lVar11 + 8 + lVar10) = lVar7;
        }
        lVar6 = *(longlong *)(lVar11 + 0x10 + lVar10);
        if (lVar6 == 0) {
          if ((*(longlong *)(lVar11 + lVar10) != 0) && (lVar7 != 0)) {
            plVar1 = *(longlong **)(lVar7 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar1 + 0x108))(), cVar3 == '\0')) {
              *(undefined8 *)(lVar11 + 0x10 + lVar10) = 0;
            }
            else {
              uVar8 = (**(code **)(*plVar1 + 0x110))();
              lVar6 = FUN_144aff482(uVar8,(longlong *)(lVar11 + lVar10));
              *(longlong *)(lVar11 + 0x10 + lVar10) = lVar6;
              if (lVar6 != 0) goto LAB_14065a7fd;
            }
          }
          lVar6 = FUN_140317ef6(lVar11 + lVar10 + -0xe0);
          if ((lVar6 != 0) || (lVar6 = FUN_14575395a(), lVar6 != 0)) goto LAB_14065a7fd;
          iVar5 = 0;
        }
        else {
LAB_14065a7fd:
          iVar5 = *(int *)(lVar6 + 0x1c);
        }
        if ((iVar5 < iVar4) || ((iVar4 == iVar5 && (*(char *)(lVar9 + 0x19) != '\0')))) {
          lVar11 = lVar11 + lVar10 + -0x100;
          cVar3 = FUN_14031891b(lVar11,param_2);
          if (cVar3 != '\0') {
            FUN_1411a2fd8(lVar11,0);
          }
        }
      }
      lVar12 = lVar12 + 1;
      lVar10 = lVar10 + 0x118;
    } while (lVar12 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 14065aa60 FUN_14065aa60 body=1039 status=ok
// SIG undefined FUN_14065aa60(void)

ulonglong FUN_14065aa60(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong **)(param_1 + 0x18) != (longlong *)0x0) && (*(int *)(param_1 + 0x14) != 0)) {
    uVar2 = *(uint *)(param_1 + 0x10);
    uVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14065ac31;
    lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if (((lVar9 != 0) && (*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x14))) &&
       ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) {
      lVar9 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
      if (lVar9 != 0) {
        lVar9 = FUN_14494f566(param_1 + 0x20);
        if (lVar9 != 0) {
          lVar9 = *(longlong *)(param_1 + 0x108);
          if (lVar9 == 0) {
            uVar5 = FUN_14065b502();
            lVar9 = FUN_14477b664(uVar5);
            *(longlong *)(param_1 + 0x108) = lVar9;
          }
          plVar1 = (longlong *)(param_1 + 0x100);
          if (*(longlong *)(param_1 + 0x110) == 0) {
            if ((*plVar1 != 0) && (lVar9 != 0)) {
              plVar3 = *(longlong **)(lVar9 + 0xb8);
              if (plVar3 != (longlong *)0x0) {
                cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
                if (cVar4 != '\0') {
                  uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
                  lVar9 = FUN_144aff482(uVar5,plVar1);
                  *(longlong *)(param_1 + 0x110) = lVar9;
                  if (lVar9 != 0) {
                    lVar9 = *(longlong *)(param_1 + 0x108);
                    goto LAB_14065abf4;
                  }
                  goto LAB_14065ab3a;
                }
              }
              *(undefined8 *)(param_1 + 0x110) = 0;
            }
LAB_14065ab3a:
            uVar5 = FUN_140317ef6(param_1 + 0x20);
            if (*(longlong *)(param_1 + 0x108) == 0) {
              uVar6 = FUN_14065b502();
              uVar6 = FUN_14477b664(uVar6);
              *(undefined8 *)(param_1 + 0x108) = uVar6;
            }
            lVar9 = FUN_14065b502();
            uVar6 = FUN_14065b502();
            FUN_1402d1bfa(&local_38,uVar6,uVar5);
            if (*plVar1 != local_38) {
              *(undefined8 *)(param_1 + 0x110) = 0;
            }
            *plVar1 = local_38;
            lVar7 = FUN_14065b502();
            if (lVar9 == 0) {
LAB_14065abb7:
              lVar7 = lVar9;
            }
            else if (lVar7 == 0) {
              lVar7 = 0;
            }
            else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar9 + 0x38)) &&
                    (*(longlong *)
                      (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                     lVar7 + 0x30)) goto LAB_14065abb7;
            if (*(longlong *)(param_1 + 0x108) != lVar7) {
              *(undefined8 *)(param_1 + 0x110) = 0;
            }
            uVar6 = FUN_14477b664(lVar7);
            lVar9 = FUN_14477b664(uVar6);
            *(longlong *)(param_1 + 0x108) = lVar9;
            if ((lVar9 != 0) && (*(longlong *)(param_1 + 0x100) != 0)) {
              *(undefined8 *)(param_1 + 0x110) = uVar5;
            }
          }
LAB_14065abf4:
          if (lVar9 == 0) {
            uVar5 = FUN_14065b502();
            lVar9 = FUN_14477b664(uVar5);
            *(longlong *)(param_1 + 0x108) = lVar9;
          }
          if (*(longlong *)(param_1 + 0x110) == 0) {
            if ((lVar9 != 0) && (*plVar1 != 0)) {
              plVar3 = *(longlong **)(lVar9 + 0xb8);
              if (plVar3 != (longlong *)0x0) {
                cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
                if (cVar4 != '\0') {
                  uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
                  lVar9 = FUN_144aff482(uVar5,plVar1);
                  *(longlong *)(param_1 + 0x110) = lVar9;
                  if (lVar9 != 0) goto LAB_14065ac07;
                  goto LAB_14065ace2;
                }
              }
              *(undefined8 *)(param_1 + 0x110) = 0;
            }
LAB_14065ace2:
            uVar5 = FUN_14575395a();
            if (*(longlong *)(param_1 + 0x108) == 0) {
              uVar6 = FUN_14065b502();
              uVar6 = FUN_14477b664(uVar6);
              *(undefined8 *)(param_1 + 0x108) = uVar6;
            }
            lVar9 = FUN_14065b502();
            uVar6 = FUN_14065b502();
            FUN_1402d1bfa(&local_38,uVar6,uVar5);
            if (*plVar1 != local_38) {
              *(undefined8 *)(param_1 + 0x110) = 0;
            }
            *plVar1 = local_38;
            lVar7 = FUN_14065b502();
            if (lVar9 == 0) {
LAB_14065ad6c:
              lVar7 = lVar9;
            }
            else if (lVar7 == 0) {
              lVar7 = 0;
            }
            else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar9 + 0x38)) &&
                    (*(longlong *)
                      (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                     lVar7 + 0x30)) goto LAB_14065ad6c;
            if (*(longlong *)(param_1 + 0x108) != lVar7) {
              *(undefined8 *)(param_1 + 0x110) = 0;
            }
            uVar6 = FUN_14477b664(lVar7);
            lVar9 = FUN_14477b664(uVar6);
            *(longlong *)(param_1 + 0x108) = lVar9;
            if ((lVar9 != 0) && (*(longlong *)(param_1 + 0x100) != 0)) {
              *(undefined8 *)(param_1 + 0x110) = uVar5;
            }
          }
LAB_14065ac07:
          uVar8 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
          if (*(int *)(param_1 + 8) != 0) goto LAB_14065ac31;
          cVar4 = FUN_14065ae70(param_1);
          if (cVar4 != '\0') {
            lVar9 = FUN_140316ff8();
            *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(lVar9 + 0x6f4);
            goto LAB_14065ac31;
          }
        }
      }
    }
  }
  uVar8 = 0;
LAB_14065ac31:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14065ae70 FUN_14065ae70 body=621 status=ok
// SIG undefined FUN_14065ae70(void)

ulonglong FUN_14065ae70(longlong param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *unaff_RDI;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  if ((*(longlong *)(param_1 + 0x80) == 0) &&
     (lVar7 = FUN_14188dbe0(param_1), *(longlong *)(lVar7 + 0x30) == 0)) {
    uVar10 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    goto LAB_14065af84;
  }
  fVar1 = *(float *)(param_1 + 0xb8);
  dVar13 = *(double *)(param_1 + 0xa0);
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    pfVar5 = (float *)(param_1 + 0xb4);
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x108);
    if (lVar7 == 0) {
      uVar8 = FUN_14065b502();
      lVar7 = FUN_14477b664(uVar8);
      *(longlong *)(param_1 + 0x108) = lVar7;
    }
    lVar6 = *(longlong *)(param_1 + 0x110);
    if (lVar6 == 0) {
      unaff_RDI = (longlong *)(param_1 + 0x100);
      if ((*unaff_RDI != 0) && (lVar7 != 0)) {
        plVar9 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar9 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar4 == '\0')) {
          *(undefined8 *)(param_1 + 0x110) = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar9 + 0x110))(plVar9);
          lVar6 = FUN_144aff482(uVar8,unaff_RDI);
          *(longlong *)(param_1 + 0x110) = lVar6;
          if (lVar6 != 0) goto LAB_14065aed4;
        }
      }
      lVar6 = FUN_140317ef6(param_1 + 0x20);
      if (lVar6 == 0) {
        lVar6 = FUN_14575395a();
      }
    }
LAB_14065aed4:
    pfVar5 = (float *)(lVar6 + 0x28);
  }
  dVar13 = (double)fVar1 + dVar13 + (double)*pfVar5;
  dVar11 = (double)FUN_14065b0de(*(undefined8 *)(param_1 + 0xf8),param_1);
  if (dVar11 <= dVar13) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0xf8) + 0x24c);
    dVar12 = 0.0;
    if ((((iVar2 != 0) &&
         (uVar3 = *(uint *)(*(longlong *)(param_1 + 0xf8) + 0x248), -1 < (int)uVar3)) &&
        ((int)uVar3 < DAT_14c9647dc)) &&
       (((plVar9 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar2)) &&
        (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (*plVar9 != 0)))))) {
      dVar12 = *(double *)(*plVar9 + 0x6e8);
    }
    if (dVar12 <= dVar13) {
      dVar13 = *(double *)(param_1 + 0xa0);
      dVar12 = (double)*(float *)(param_1 + 0xb8) + dVar13;
      uVar10 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if (dVar12 < dVar11) {
        if (*(char *)(param_1 + 0xb0) == '\x01') {
          pfVar5 = (float *)(param_1 + 0xb4);
        }
        else {
          lVar7 = FUN_14188dbe0(param_1);
          pfVar5 = (float *)(lVar7 + 0x28);
          dVar13 = *(double *)(param_1 + 0xa0);
          dVar12 = (double)*(float *)(param_1 + 0xb8) + dVar13;
        }
        fVar1 = *pfVar5;
        *(undefined1 *)(param_1 + 0xb0) = 1;
        *(float *)(param_1 + 0xb4) = (float)((double)fVar1 - (dVar11 - dVar12));
        *(float *)(param_1 + 0xb8) = (float)(dVar11 - dVar13);
      }
      goto LAB_14065af84;
    }
  }
  uVar10 = 0;
LAB_14065af84:
  return uVar10 & 0xffffffff;
}



// FUNCTION 14065b0de FUN_14065b0de body=1059 status=ok
// SIG undefined FUN_14065b0de(void)

void FUN_14065b0de(longlong param_1,longlong param_2)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined ***pppuVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0;
  undefined1 local_e1;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  char local_b1;
  double local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  code *local_88;
  undefined ***local_78;
  undefined **local_68;
  double *local_60;
  char *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_b0 = 0.0;
  local_b1 = '\0';
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14b40a970;
  local_60 = &local_b0;
  local_58 = &local_b1;
  local_88 = FUN_143d6dd8a;
  if ((longlong)*(int *)(param_1 + 0x228) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x220);
    local_c0 = param_2 + 0x60;
    local_c8 = param_2 + 0x80;
    lVar14 = (longlong)*(int *)(param_1 + 0x228) << 7;
    local_e0 = param_2 + 0x100;
    local_d8 = param_2 + 0x20;
    local_d0 = param_1;
    do {
      local_e1 = FUN_14065b53c(param_2);
      if (((*(longlong *)(param_2 + 0x18) == 0) || (*(int *)(param_2 + 0x14) == 0)) ||
         (uVar1 = *(uint *)(param_2 + 0x10), (int)uVar1 < 0)) {
LAB_14065b321:
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          if ((lVar12 == 0) || (*(int *)(lVar12 + 0x10) != *(int *)(param_2 + 0x14)))
          goto LAB_14065b321;
          lVar4 = *(longlong *)(param_2 + 0x18);
          if ((*(uint *)(lVar12 + 8) & 0x10200000) != 0) {
            lVar4 = 0;
          }
        }
      }
      lVar12 = *(longlong *)(param_2 + 0x108);
      if (lVar12 == 0) {
        uVar5 = FUN_14065b502();
        lVar12 = FUN_14477b664(uVar5);
        *(longlong *)(param_2 + 0x108) = lVar12;
      }
      lVar9 = *(longlong *)(param_2 + 0x110);
      if (lVar9 == 0) {
        if ((*(longlong *)(param_2 + 0x100) != 0) && (lVar12 != 0)) {
          plVar11 = *(longlong **)(lVar12 + 0xb8);
          if ((plVar11 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar3 == '\0')) {
            *(undefined8 *)(param_2 + 0x110) = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar11 + 0x110))(plVar11);
            lVar9 = FUN_144aff482(uVar5,local_e0);
            *(longlong *)(param_2 + 0x110) = lVar9;
            if (lVar9 != 0) goto LAB_14065b22b;
          }
        }
        lVar9 = FUN_140317ef6(local_d8);
        if (lVar9 == 0) {
          lVar9 = FUN_14575395a();
        }
      }
LAB_14065b22b:
      local_98 = 0;
      uVar5 = FUN_14065b502();
      lVar6 = FUN_14477b664(uVar5);
      lVar7 = FUN_14065b502();
      uVar5 = FUN_14065b502();
      FUN_1402d1bfa(&local_90,uVar5,lVar9);
      lVar12 = local_90;
      if (local_90 != 0) {
        local_98 = 0;
      }
      local_a8 = local_90;
      lVar8 = FUN_14065b502();
      if (lVar7 == 0) {
LAB_14065b2b2:
        lVar8 = lVar7;
      }
      else if (lVar8 == 0) {
        lVar8 = 0;
      }
      else if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
              (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
               lVar8 + 0x30)) goto LAB_14065b2b2;
      if (lVar6 != lVar8) {
        local_98 = 0;
      }
      uVar5 = FUN_14477b664(lVar8);
      local_a0 = FUN_14477b664(uVar5);
      if ((lVar12 != 0) && (local_a0 != 0)) {
        local_98 = lVar9;
      }
      local_f0 = local_e1;
      local_f8 = lVar4;
      cVar3 = FUN_14065b57c(lVar13,local_c8,local_c0,&local_a8);
      pcVar2 = local_88;
      if (cVar3 != '\0') {
        pppuVar10 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar10 = &local_68;
        }
        uVar5 = (*(code *)(*pppuVar10)[1])();
        (*pcVar2)(uVar5,lVar13);
      }
      lVar13 = lVar13 + 0x80;
      lVar14 = lVar14 + -0x80;
    } while (lVar14 != 0);
    param_1 = local_d0;
    if (local_88 == (code *)0x0) goto LAB_14065b356;
  }
  pppuVar10 = &local_68;
  if (local_78 != (undefined ***)0x0) {
    pppuVar10 = local_78;
  }
  (*(code *)(*pppuVar10)[2])();
LAB_14065b356:
  dVar15 = local_b0;
  if (local_b1 != '\0') {
    dVar16 = 0.10000000149011612;
    if (((((*(int *)(param_1 + 0x24c) != 0) && (uVar1 = *(uint *)(param_1 + 0x248), -1 < (int)uVar1)
          ) && ((int)uVar1 < DAT_14c9647dc)) &&
        ((plVar11 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar11 != (longlong *)0x0 && ((int)plVar11[2] == *(int *)(param_1 + 0x24c))))) &&
       (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (*plVar11 != 0)))) {
      dVar16 = *(double *)(*plVar11 + 0x6e8) + 0.10000000149011612;
    }
    if (local_b0 <= dVar16) {
      dVar15 = dVar16;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(dVar15);
  }
  return;
}



// FUNCTION 14065b502 FUN_14065b502 body=57 status=ok
// SIG undefined FUN_14065b502(void)

void FUN_14065b502(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57258 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57258 = FUN_140002ddd(FUN_1464bbc31,uVar1,L"GbxDialogStyleDef");
  }
  return;
}



// FUNCTION 14065b53c FUN_14065b53c body=63 status=ok
// SIG undefined FUN_14065b53c(void)

undefined8 FUN_14065b53c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0xc5) == '\0') {
    lVar1 = FUN_14494f566(param_1 + 0x20);
    if (lVar1 != 0) {
      uVar2 = FUN_14494f566(param_1 + 0x20);
      uVar2 = FUN_141889c9a(uVar2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14065b57c FUN_14065b57c body=2031 status=ok
// SIG undefined FUN_14065b57c(void)

undefined8
FUN_14065b57c(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
             longlong *param_5,char param_6)

{
  float fVar1;
  uint uVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  double *pdVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_5 != (longlong *)0x0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar2 = *(uint *)(param_1 + 8);
      uVar12 = 0;
      if (((int)uVar2 < 0) || (uVar12 = 0, DAT_14c9647dc <= (int)uVar2)) goto LAB_14065b759;
      lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      if ((lVar8 == 0) ||
         ((*(int *)(lVar8 + 0x10) != *(int *)(param_1 + 0xc) ||
          ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)))) goto LAB_14065b757;
    }
    lVar8 = (**(code **)(*param_5 + 0x18))(param_5);
    lVar9 = (**(code **)(*param_5 + 0x10))(param_5);
    uVar12 = 0;
    if ((lVar8 == 0) || (lVar9 == 0)) goto LAB_14065b759;
    if ((((*(int *)(param_1 + 0xc) == 0) || (uVar2 = *(uint *)(param_1 + 8), (int)uVar2 < 0)) ||
        (DAT_14c9647dc <= (int)uVar2)) ||
       (((plVar14 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar14 == (longlong *)0x0 || ((int)plVar14[2] != *(int *)(param_1 + 0xc))) ||
        (((*(uint *)(plVar14 + 1) & 0x10200000) != 0 ||
         ((lVar15 = *plVar14, lVar15 == 0 || (lVar11 = FUN_14065bd6c(lVar9), lVar11 == lVar15)))))))
       ) {
      fVar1 = *(float *)(param_1 + 0x48);
      if (fVar1 <= 0.0) {
LAB_14065b899:
        lVar8 = *(longlong *)(param_1 + 0x20);
        if (lVar8 == 0) {
          uVar12 = FUN_1407ad36c();
          lVar8 = FUN_14477b664(uVar12);
          *(longlong *)(param_1 + 0x20) = lVar8;
        }
        if (*(longlong *)(param_1 + 0x28) == 0) {
          if ((lVar8 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
            plVar14 = (longlong *)(param_1 + 0x28);
            plVar4 = *(longlong **)(lVar8 + 0xb8);
            if ((plVar4 == (longlong *)0x0) ||
               (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
LAB_14065bd4e:
              *plVar14 = 0;
            }
            else {
              uVar12 = (**(code **)(*plVar4 + 0x110))(plVar4);
              lVar8 = FUN_144aff482(uVar12,(longlong *)(param_1 + 0x18));
              *plVar14 = lVar8;
              if (lVar8 != 0) goto LAB_14065b8b1;
            }
          }
        }
        else {
LAB_14065b8b1:
          lVar8 = param_3[1];
          if (lVar8 == 0) {
            uVar12 = FUN_1407ad36c();
            lVar8 = FUN_14477b664(uVar12);
            param_3[1] = lVar8;
          }
          if (param_3[2] == 0) {
            if ((*param_3 != 0) && (lVar8 != 0)) {
              plVar14 = param_3 + 2;
              plVar4 = *(longlong **)(lVar8 + 0xb8);
              if ((plVar4 == (longlong *)0x0) ||
                 (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0'))
              goto LAB_14065bd4e;
              uVar12 = (**(code **)(*plVar4 + 0x110))(plVar4);
              lVar8 = FUN_144aff482(uVar12,param_3);
              param_3[2] = lVar8;
              if (lVar8 != 0) goto LAB_14065b8c9;
            }
          }
          else {
LAB_14065b8c9:
            if (*(longlong *)(param_1 + 0x20) == 0) {
              uVar12 = FUN_1407ad36c();
              uVar12 = FUN_14477b664(uVar12);
              *(undefined8 *)(param_1 + 0x20) = uVar12;
            }
            lVar8 = param_3[1];
            if (lVar8 == 0) {
              lVar8 = FUN_1407ad36c();
            }
            local_70 = *param_3;
            lVar8 = FUN_14477b664(lVar8);
            iVar7 = 0;
            iVar6 = 0;
            if ((lVar8 != 0) && (plVar14 = *(longlong **)(lVar8 + 0xb8), plVar14 != (longlong *)0x0)
               ) {
              lVar9 = *plVar14;
              pcVar3 = *(code **)(lVar9 + 0x108);
              if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
                cVar5 = (*pcVar3)(plVar14);
                iVar6 = 0;
                if (cVar5 == '\0') goto LAB_14065b95f;
                lVar9 = *plVar14;
              }
              pcVar3 = *(code **)(lVar9 + 0x110);
              if (pcVar3 == (code *)&LAB_144783426) {
                ppuVar13 = &PTR_PTR_14c763408;
              }
              else if (pcVar3 == (code *)&LAB_144783432) {
                ppuVar13 = &PTR_PTR_14c75f798;
              }
              else {
                ppuVar13 = (undefined **)(*pcVar3)(plVar14);
              }
              iVar6 = FUN_144aff48c(ppuVar13);
            }
LAB_14065b95f:
            local_68 = *(longlong *)(param_1 + 0x18);
            lVar9 = *(longlong *)(param_1 + 0x20);
            local_78 = lVar8;
            if ((lVar9 != 0) && (plVar14 = *(longlong **)(lVar9 + 0xb8), plVar14 != (longlong *)0x0)
               ) {
              lVar8 = *plVar14;
              pcVar3 = *(code **)(lVar8 + 0x108);
              if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
                cVar5 = (*pcVar3)(plVar14);
                if (cVar5 == '\0') goto LAB_14065b9d2;
                lVar8 = *plVar14;
              }
              pcVar3 = *(code **)(lVar8 + 0x110);
              if (pcVar3 == (code *)&LAB_144783426) {
                ppuVar13 = &PTR_PTR_14c763408;
              }
              else if (pcVar3 == (code *)&LAB_144783432) {
                ppuVar13 = &PTR_PTR_14c75f798;
              }
              else {
                ppuVar13 = (undefined **)(*pcVar3)(plVar14);
              }
              iVar7 = FUN_144aff48c(ppuVar13);
            }
LAB_14065b9d2:
            if ((iVar7 == iVar6) && (local_68 == local_70)) {
              uVar12 = 1;
              if (lVar9 == local_78) goto LAB_14065b759;
              if ((local_78 != 0) && (lVar9 != 0)) {
                iVar6 = *(int *)(local_78 + 0x38);
                iVar7 = *(int *)(lVar9 + 0x38);
                if (((iVar6 <= iVar7) &&
                    (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar6 * 8) ==
                     local_78 + 0x30)) ||
                   ((iVar7 <= iVar6 &&
                    (*(longlong *)(*(longlong *)(local_78 + 0x30) + (longlong)iVar7 * 8) ==
                     lVar9 + 0x30)))) goto LAB_14065b759;
              }
            }
          }
        }
        if (*(longlong *)(param_1 + 0x10) != 0) {
          lVar8 = param_4[1];
          if (lVar8 == 0) {
            uVar12 = FUN_14065b502();
            lVar8 = FUN_14477b664(uVar12);
            param_4[1] = lVar8;
          }
          lVar9 = param_4[2];
          if (lVar9 == 0) {
            if ((lVar8 != 0) && (*param_4 != 0)) {
              plVar14 = *(longlong **)(lVar8 + 0xb8);
              if ((plVar14 == (longlong *)0x0) ||
                 (cVar5 = (**(code **)(*plVar14 + 0x108))(plVar14), cVar5 == '\0')) {
                param_4[2] = 0;
              }
              else {
                uVar12 = (**(code **)(*plVar14 + 0x110))(plVar14);
                lVar9 = FUN_144aff482(uVar12,param_4);
                param_4[2] = lVar9;
                if (lVar9 != 0) {
                  lVar8 = param_4[1];
                  goto LAB_14065ba0c;
                }
              }
            }
          }
          else {
LAB_14065ba0c:
            if (lVar8 == 0) {
              uVar12 = FUN_14065b502();
              lVar8 = FUN_14477b664(uVar12);
              param_4[1] = lVar8;
              lVar9 = param_4[2];
              if (((lVar9 == 0) && (lVar9 = 0, lVar8 != 0)) && (*param_4 != 0)) {
                plVar14 = *(longlong **)(lVar8 + 0xb8);
                if ((plVar14 == (longlong *)0x0) ||
                   (cVar5 = (**(code **)(*plVar14 + 0x108))(plVar14), cVar5 == '\0')) {
                  lVar9 = 0;
                }
                else {
                  uVar12 = (**(code **)(*plVar14 + 0x110))(plVar14);
                  lVar9 = FUN_144aff482(uVar12,param_4);
                }
                param_4[2] = lVar9;
              }
            }
            uVar12 = 1;
            if (*(longlong *)(lVar9 + 0x30) == *(longlong *)(param_1 + 0x10)) goto LAB_14065b759;
          }
        }
      }
      else {
        if ((*(longlong *)(lVar9 + 0x180) == 0) || (*(int *)(lVar9 + 0x17c) == 0)) {
LAB_14065b71f:
          bVar16 = false;
        }
        else {
          uVar2 = *(uint *)(lVar9 + 0x178);
          bVar16 = false;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            lVar15 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            if ((((lVar15 == 0) || (*(int *)(lVar15 + 0x10) != *(int *)(lVar9 + 0x17c))) ||
                ((*(uint *)(lVar15 + 8) & 0x10200000) != 0)) || (*(int *)(lVar9 + 0x18c) != 0))
            goto LAB_14065b71f;
            lVar9 = *(longlong *)(lVar8 + 0x1c8);
            if (lVar9 == 0) {
              pdVar10 = (double *)&DAT_14c8464e0;
              dVar17 = DAT_14c8464f0;
            }
            else {
              pdVar10 = (double *)(lVar9 + 0x260);
              dVar17 = *(double *)(lVar9 + 0x270);
            }
            dVar19 = *(double *)(param_1 + 0x38) - pdVar10[1];
            dVar18 = *(double *)(param_1 + 0x30) - *pdVar10;
            dVar17 = *(double *)(param_1 + 0x40) - dVar17;
            bVar16 = dVar17 * dVar17 + dVar18 * dVar18 + dVar19 * dVar19 < (double)(fVar1 * fVar1);
          }
        }
        lVar8 = FUN_1447210f0(lVar8);
        if (((lVar8 == 0) || (param_6 == '\0')) || (bVar16)) {
          if (bVar16) goto LAB_14065b899;
        }
        else {
          bVar16 = false;
          if (0 < *(int *)(lVar8 + 0x238)) {
            local_70 = CONCAT44(local_70._4_4_,1);
            lVar9 = 0;
            do {
              plVar14 = (longlong *)FUN_14479d2ce(*(longlong *)(lVar8 + 0x230) + lVar9);
              if (plVar14 != (longlong *)0x0) {
                (**(code **)(*plVar14 + 0xe60))(plVar14,&local_60);
                dVar17 = *(double *)(param_1 + 0x40) - local_50;
                dVar19 = *(double *)(param_1 + 0x38) - local_58;
                dVar18 = *(double *)(param_1 + 0x30) - local_60;
                bVar16 = dVar17 * dVar17 + dVar18 * dVar18 + dVar19 * dVar19 <
                         (double)(*(float *)(param_1 + 0x48) * *(float *)(param_1 + 0x48));
              }
              if (*(int *)(lVar8 + 0x238) <= (int)local_70) break;
              lVar9 = lVar9 + 8;
              local_70 = CONCAT44(local_70._4_4_,(int)local_70 + 1);
            } while (!bVar16);
          }
          if (bVar16) goto LAB_14065b899;
        }
      }
      plVar14 = *(longlong **)(param_1 + 0x50);
      if (plVar14 != (longlong *)0x0) {
        uVar12 = (**(code **)(*plVar14 + 0x2a0))(plVar14,param_2,param_4,param_5);
        goto LAB_14065b759;
      }
    }
  }
LAB_14065b757:
  uVar12 = 0;
LAB_14065b759:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14065bd6c FUN_14065bd6c body=420 status=ok
// SIG undefined FUN_14065bd6c(void)

longlong FUN_14065bd6c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong **)(param_1 + 0x180) != (longlong *)0x0) && (*(int *)(param_1 + 0x17c) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x178);
    lVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14065be0b;
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x17c))) &&
        ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) &&
       (lVar3 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x18))(), lVar3 != 0)) {
      lVar2 = *(longlong *)(lVar3 + 0x168);
      if (lVar2 != 0) {
        if (DAT_14caf64b8 == 0) {
          local_40 = &local_20;
          local_20 = FUN_141030f22;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_142b4754c;
          local_48 = &LAB_147c45ce0;
          local_50 = &LAB_1463f1ff4;
          local_58 = &DAT_149e063b2;
          local_60 = 0x4000000000;
          local_68 = 0x10000004;
          local_70 = 8;
          local_78 = 0x428;
          FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
        }
        if (((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) == DAT_14caf64b8 + 0x30)) &&
           (*(longlong *)(lVar2 + 0x3c0) != 0)) {
          lVar3 = *(longlong *)(lVar2 + 0x3c0);
        }
      }
      goto LAB_14065be0b;
    }
  }
  lVar3 = 0;
LAB_14065be0b:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 14065bf12 FUN_14065bf12 body=372 status=ok
// SIG undefined FUN_14065bf12(void)

void FUN_14065bf12(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x118;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14065bf9a;
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
LAB_14065bf9a:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x118)) {
    uVar7 = uVar5 / 0x118 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x118,8);
  return;
}



// FUNCTION 14065c088 FUN_14065c088 body=213 status=ok
// SIG undefined FUN_14065c088(void)

void FUN_14065c088(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_14034205c(param_1 + 8);
  puVar2 = *(undefined8 **)(param_1 + 8);
  FUN_14065c15e(param_1,0x3f800000);
  lVar3 = *(longlong *)(param_1 + 0x10);
  puVar4 = *(undefined8 **)(param_1 + 0x30);
  puVar5 = (undefined8 *)0x0;
  if ((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 1) == 1)) {
    puVar5 = puVar4;
  }
  puVar4 = *(undefined8 **)(lVar3 + 0x28);
  if (puVar4 != puVar2) {
    *(undefined8 **)(lVar3 + 0x28) = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    }
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
  puVar2 = *(undefined8 **)(lVar3 + 0x30);
  if (puVar2 != puVar5) {
    *(undefined8 **)(lVar3 + 0x30) = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  *(undefined4 *)(lVar3 + 0x38) = 1;
  puVar2 = *(undefined8 **)(param_1 + 0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014065c15a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 14065c15e FUN_14065c15e body=118 status=ok
// SIG undefined FUN_14065c15e(void)

void FUN_14065c15e(longlong param_1,float param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  FUN_14034205c(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x38);
  iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x140);
  if (iVar1 < iVar2) {
    iVar4 = iVar1 - ((int)ROUND(-0.5 - ((float)iVar2 * param_2 + (float)iVar2 * param_2)) >> 1);
    if (iVar2 < iVar4) {
      iVar4 = iVar2;
    }
    lVar3 = *(longlong *)(param_1 + 0x18);
    FUN_143726e36(lVar3 + 0x10,*(longlong *)(param_1 + 8),iVar1,iVar4);
    *(undefined4 *)(lVar3 + 0x48) = 1;
  }
  return;
}



// FUNCTION 14065c1d4 FUN_14065c1d4 body=985 status=ok
// SIG undefined FUN_14065c1d4(void)

ulonglong FUN_14065c1d4(undefined8 param_1,undefined8 *param_2,char param_3,char param_4,
                       undefined8 *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  size_t sVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  undefined1 auStack_2c8 [47];
  char local_299;
  undefined8 *local_298;
  undefined *local_290;
  longlong local_288;
  longlong *local_280;
  wchar_t *local_278;
  uint local_270;
  undefined2 *local_268;
  undefined2 *local_260;
  ulonglong *local_258;
  char local_250;
  undefined2 local_248 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_299 = param_4;
  local_280 = (longlong *)FUN_14054d1d4();
  local_268 = local_248;
  local_250 = '\0';
  local_258 = &local_48;
  local_298 = param_2;
  local_260 = local_268;
  FUN_14065c5ae(param_2,&local_278);
  uVar2 = local_270;
  pwVar11 = local_278;
  iVar6 = local_270 - 1;
  if (local_270 == 0) {
    iVar6 = 0;
  }
  lVar10 = (longlong)iVar6;
  if (local_258 <= local_260 + lVar10) {
    FUN_140213274(&local_268,lVar10);
  }
  puVar9 = local_260;
  if (1 < uVar2) {
    memcpy(local_260,pwVar11,lVar10 * 2);
    local_260 = puVar9 + lVar10;
  }
  if (local_278 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uVar7 = (longlong)local_260 - (longlong)local_268;
  if ((int)(uVar7 >> 1) == 0) goto LAB_14065c3cc;
  if (param_3 != '\0') {
    FUN_140002266(&local_278,L".%03hhu",param_3);
    iVar6 = local_270 - 1;
    if (local_270 == 0) {
      iVar6 = 0;
    }
    FUN_1449668a2(&local_268,local_278,iVar6);
    if (local_278 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    uVar7 = (longlong)local_260 - (longlong)local_268;
  }
  local_288 = 2;
  local_290 = &DAT_14c75ec19;
  if (local_299 == '\0') {
    bVar4 = *(byte *)(local_298 + 1);
    if (bVar4 != 0) goto LAB_14065c58d;
  }
  else {
    switch(local_299) {
    case '\x01':
      bVar4 = 7;
      break;
    case '\x02':
      bVar4 = 8;
      break;
    case '\x03':
      bVar4 = 9;
      break;
    case '\x04':
      bVar4 = 10;
      break;
    case '\x05':
      bVar4 = 0xb;
      break;
    default:
      goto switchD_14065c579_default;
    }
LAB_14065c58d:
    local_290 = &DAT_14c75ec18 + bVar4;
    local_288 = 1;
  }
switchD_14065c579_default:
  lVar10 = 0;
  do {
    uVar1 = local_290[lVar10];
    puVar9 = local_260 +
             -(longlong)
              ((int)((ulonglong)((longlong)local_260 - (longlong)local_268) >> 1) -
              (int)(uVar7 >> 1));
    pwVar11 = L"";
    local_260 = puVar9;
    switch(uVar1) {
    case 1:
      pwVar11 = L".uasset";
      break;
    case 2:
      pwVar11 = L".umap";
      break;
    case 3:
      pwVar11 = L".utxt";
      break;
    case 4:
      pwVar11 = L".utxtmap";
      break;
    case 5:
      FUN_1468751e0(local_298,&local_278,0);
      pwVar11 = local_278;
      goto LAB_14065c36d;
    case 7:
      pwVar11 = L".uexp";
      break;
    case 8:
      pwVar11 = L".ubulk";
      break;
    case 9:
      pwVar11 = L".uptnl";
      break;
    case 10:
      pwVar11 = L".m.ubulk";
      break;
    case 0xb:
      pwVar11 = L".upayload";
    }
    local_278 = pwVar11;
    sVar5 = wcslen(pwVar11);
    local_270 = (uint)sVar5;
LAB_14065c36d:
    uVar2 = local_270;
    lVar8 = (longlong)(int)local_270;
    if (local_258 <= puVar9 + lVar8) {
      FUN_140213274(&local_268,lVar8);
      puVar9 = local_260;
    }
    if (uVar2 != 0) {
      memcpy(puVar9,pwVar11,lVar8 * 2);
      puVar9 = puVar9 + lVar8;
      local_260 = puVar9;
    }
    *puVar9 = 0;
    cVar3 = (**(code **)(*local_280 + 0x48))(local_280,local_268);
    if (cVar3 != '\0') {
      uVar7 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
      if (param_5 != (undefined8 *)0x0) {
        *param_5 = *local_298;
        *(undefined1 *)(param_5 + 1) = *(undefined1 *)(local_298 + 1);
        if ((local_299 == '\0') && (cVar3 = FUN_1427b976e(local_298), cVar3 == '\0')) {
          *(undefined1 *)(param_5 + 1) = uVar1;
        }
      }
      goto LAB_14065c3ce;
    }
    lVar10 = lVar10 + 1;
  } while (local_288 != lVar10);
LAB_14065c3cc:
  uVar7 = 0;
LAB_14065c3ce:
  if (local_250 == '\x01') {
    FUN_1400020a8(local_268);
  }
  if ((local_48 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14065c5ae FUN_14065c5ae body=230 status=ok
// SIG undefined FUN_14065c5ae(void)

longlong * FUN_14065c5ae(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  longlong local_50;
  int local_48;
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 != 0) {
    FUN_1400021e4(param_1,&local_50);
    *param_2 = 0;
    param_2[1] = 0;
    FUN_140056680(&local_60);
    local_30 = local_60;
    local_28 = local_58 + -1;
    if (local_58 == 0) {
      local_28 = 0;
    }
    local_40 = local_50;
    local_38 = local_48 + -1;
    if (local_48 == 0) {
      local_38 = 0;
    }
    cVar1 = FUN_1404d3d28(&local_40,param_2);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if ((cVar1 == '\0') && (*param_2 != 0)) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (cVar1 != '\0') goto LAB_14065c673;
  }
  FUN_140056680(param_2,&DAT_149dfb77a);
LAB_14065c673:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14065c6a6 FUN_14065c6a6 body=95 status=ok
// SIG undefined FUN_14065c6a6(void)

undefined8 * FUN_14065c6a6(undefined8 *param_1,int param_2)

{
  *param_1 = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_140115c12(param_1 + 2,0);
  }
  param_1[1] = 0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14065c706 FUN_14065c706 body=158 status=ok
// SIG undefined FUN_14065c706(void)

longlong FUN_14065c706(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_14065c7a4();
  FUN_14065c7a4(param_1 + 0x10,param_2 + 0x10);
  FUN_14065c7f4(param_1 + 0x20,param_2 + 0x20);
  FUN_14065c844(param_1 + 0x30,param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_14065c894(param_1 + 0x50,param_2 + 0x50);
  FUN_14065c9c2(param_1 + 0x90,param_2 + 0x90);
  uVar1 = *(undefined8 *)(param_2 + 0xd8);
  uVar2 = *(undefined8 *)(param_2 + 0xe0);
  uVar3 = *(undefined8 *)(param_2 + 0xe8);
  uVar4 = *(undefined8 *)(param_2 + 0xf0);
  uVar5 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  *(undefined8 *)(param_1 + 0xe8) = uVar3;
  *(undefined8 *)(param_1 + 0xf0) = uVar4;
  *(undefined8 *)(param_1 + 0xf8) = uVar5;
  uVar1 = *(undefined8 *)(param_2 + 0x104);
  *(undefined8 *)(param_1 + 0xfc) = *(undefined8 *)(param_2 + 0xfc);
  *(undefined8 *)(param_1 + 0x104) = uVar1;
  return param_1;
}



// FUNCTION 14065c7a4 FUN_14065c7a4 body=79 status=ok
// SIG undefined FUN_14065c7a4(void)

undefined8 * FUN_14065c7a4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1405bd402(param_1,iVar1);
      FUN_1405bd2e2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14065c7f4 FUN_14065c7f4 body=79 status=ok
// SIG undefined FUN_14065c7f4(void)

undefined8 * FUN_14065c7f4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1405bd694(param_1,iVar1);
      FUN_1405bd624(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14065c844 FUN_14065c844 body=79 status=ok
// SIG undefined FUN_14065c844(void)

undefined8 * FUN_14065c844(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1405bd54c(param_1,iVar1);
      FUN_1405bd383(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14065c894 FUN_14065c894 body=301 status=ok
// SIG undefined FUN_14065c894(void)

longlong * FUN_14065c894(longlong *param_1,longlong *param_2)

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



// FUNCTION 14065c9c2 FUN_14065c9c2 body=301 status=ok
// SIG undefined FUN_14065c9c2(void)

longlong * FUN_14065c9c2(longlong *param_1,longlong *param_2)

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



// FUNCTION 14065caf0 FUN_14065caf0 body=1310 status=ok
// SIG undefined FUN_14065caf0(void)

void FUN_14065caf0(longlong param_1,undefined8 param_2,uint *param_3,longlong param_4,int *param_5,
                  uint param_6,uint param_7,byte param_8,undefined8 param_9)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  ulonglong *puVar11;
  sbyte sVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  int iVar20;
  int iVar21;
  ushort uVar22;
  uint uVar23;
  longlong lVar24;
  undefined1 auStack_4a8 [40];
  ulonglong local_480;
  ulonglong local_478;
  undefined8 local_470;
  ulonglong local_468;
  char local_459;
  uint local_458 [256];
  uint *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  local_58 = (uint *)0x0;
  local_50 = 0x10000000000;
  uVar8 = (*param_3 >> 0x10 ^ *param_3) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = *(uint *)(*(longlong *)(param_1 + 0x80) +
                   (ulonglong)((uVar8 >> 0x10 ^ uVar8) & *(uint *)(param_1 + 0x74)) * 4);
  local_470 = param_2;
  if (uVar8 != 0xffffffff) {
    local_478 = (ulonglong)(param_8 & 1);
    local_480 = local_478 << 0x3f;
    do {
      uVar14 = local_50;
      uVar9 = *(uint *)(*(longlong *)(param_1 + 0x90) + (longlong)(int)uVar8 * 8);
      if (uVar9 == *param_3) {
        uVar4 = *(uint *)(*(longlong *)(param_1 + 0x90) + 4 + (longlong)(int)uVar8 * 8);
        uVar13 = uVar4 >> 0x18 & 0xf;
        if (uVar13 <= param_6) {
          sVar12 = (sbyte)uVar13;
          iVar15 = *(int *)(param_4 + 0x10) << sVar12;
          uVar13 = ((uVar4 & 0x555555) >> 1 | uVar4 & 0x555555) & 0x333333;
          uVar13 = uVar13 >> 2 | uVar13;
          uVar23 = uVar13 & 0xf0f0f;
          iVar21 = ((uVar23 >> 4 | uVar23) & 0xff | uVar13 >> 8 & 0xf00) * iVar15;
          iVar20 = *(int *)(param_4 + 0x14) << sVar12;
          if ((((iVar21 - iVar20 <= param_5[2]) && (*param_5 <= iVar21 + iVar20 + iVar15)) &&
              (uVar13 = uVar4 & 0x222222 | uVar4 >> 1 & 0x444444, uVar23 = uVar13 >> 3 | uVar13 >> 1
              , uVar13 = uVar23 & 0xf0f0f,
              iVar21 = iVar15 * ((uVar13 >> 4 | uVar13) & 0xff | uVar23 >> 8 & 0xf00),
              iVar21 - iVar20 <= param_5[3])) && (param_5[1] <= iVar20 + iVar15 + iVar21)) {
            uVar13 = uVar8 & 0xffff;
            if ((uVar13 < *(uint *)(param_1 + 0x30)) &&
               (*(short *)(*(longlong *)(param_1 + 0x48) + (ulonglong)uVar13 * 2) != -1)) {
              if (*(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar13 * 4) >> 4 < param_7) {
                lVar24 = (longlong)(int)local_50;
                uVar9 = (int)local_50 + 1;
                local_50 = CONCAT44(local_50._4_4_,uVar9);
                if (local_50._4_4_ < uVar9) {
                  FUN_14063e724(local_458,uVar14 & 0xffffffff);
                }
                puVar10 = local_58;
                if (local_58 == (uint *)0x0) {
                  puVar10 = local_458;
                }
                puVar10[lVar24] = uVar8;
              }
              else {
                uVar14 = (ulonglong)(*(byte *)(param_4 + 0xc5) & 7);
                local_468 = uVar14 << 0x3c | (ulonglong)uVar9 |
                            (ulonglong)(uVar4 & 0xfffffff) << 0x20 | local_480;
                local_459 = '\0';
                puVar11 = (ulonglong *)
                          FUN_14065d0da(param_9,(uVar4 & 0xfffffff) * 0x17 + uVar9,&local_468,
                                        &local_459);
                if (local_459 == '\x01') {
                  uVar5 = *puVar11;
                  uVar16 = (ulonglong)((uint)(uVar5 >> 0x3c) & 7);
                  if (uVar14 <= uVar16) {
                    uVar14 = uVar16;
                  }
                  uVar16 = local_478;
                  if (local_478 <= uVar5 >> 0x3f) {
                    uVar16 = uVar5 >> 0x3f;
                  }
                  *puVar11 = uVar16 << 0x3f | uVar5 & 0xfffffffffffffff | uVar14 << 0x3c;
                }
              }
            }
            else {
              local_468 = (ulonglong)(*(byte *)(param_4 + 0xc5) & 7) << 0x3c |
                          CONCAT44(uVar4,uVar9) & 0xfffffffffffffff | local_480;
              FUN_14065d00f(&local_468,param_9);
            }
          }
        }
      }
      uVar7 = local_470;
      uVar8 = *(uint *)(*(longlong *)(param_1 + 0x88) + (ulonglong)uVar8 * 4);
    } while (uVar8 != 0xffffffff);
    puVar10 = local_458;
    if (local_58 != (uint *)0x0) {
      puVar10 = local_58;
    }
    if ((longlong)(int)local_50 != 0) {
      puVar1 = puVar10 + (int)local_50;
      do {
        uVar14 = (ulonglong)*puVar10 & 0xffff;
        FUN_145731d18(param_1,uVar7,(ulonglong)*puVar10,1);
        *(undefined4 *)(*(longlong *)(param_1 + 0x40) + uVar14 * 4) = 0;
        uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x48) + uVar14 * 2);
        uVar14 = (ulonglong)uVar2;
        if (uVar14 == 0) {
          uVar14 = 0;
LAB_14065ce82:
          uVar19 = uVar2 * 2 + 1;
          uVar8 = *(uint *)(param_1 + 0x28);
          if (uVar19 < uVar8) {
            uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x38) + uVar14 * 2);
            local_480 = CONCAT62(local_480._2_6_,uVar3);
            uVar18 = uVar2;
            do {
              uVar22 = uVar18 * 2 + 2;
              lVar24 = *(longlong *)(param_1 + 0x38);
              lVar6 = *(longlong *)(param_1 + 0x40);
              uVar17 = uVar19;
              if ((uVar22 < uVar8) &&
                 (*(uint *)(lVar6 + (ulonglong)*(ushort *)(lVar24 + (ulonglong)(uint)uVar22 * 2) * 4
                           ) <=
                  *(uint *)(lVar6 + (ulonglong)*(ushort *)(lVar24 + (ulonglong)uVar19 * 2) * 4))) {
                uVar17 = uVar22;
              }
              uVar19 = *(ushort *)(lVar24 + (ulonglong)uVar17 * 2);
              if (*(uint *)(lVar6 + (ulonglong)uVar3 * 4) <=
                  *(uint *)(lVar6 + (ulonglong)uVar19 * 4)) break;
              *(ushort *)(lVar24 + (ulonglong)((uint)uVar18 * 2)) = uVar19;
              *(ushort *)
               (*(longlong *)(param_1 + 0x48) +
               (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x38) + (ulonglong)((uint)uVar18 * 2))
               * 2) = uVar18;
              uVar19 = uVar17 * 2 + 1;
              uVar8 = *(uint *)(param_1 + 0x28);
              uVar18 = uVar17;
            } while (uVar19 < uVar8);
            if (uVar18 != uVar2) {
              *(ushort *)(*(longlong *)(param_1 + 0x38) + (ulonglong)((uint)uVar18 * 2)) = uVar3;
              *(ushort *)
               (*(longlong *)(param_1 + 0x48) +
               (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x38) + (ulonglong)((uint)uVar18 * 2))
               * 2) = uVar18;
            }
          }
        }
        else {
          if (*(int *)(*(longlong *)(param_1 + 0x40) +
                      (ulonglong)
                      *(ushort *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(uVar2 - 1 & 0x1fffe))
                      * 4) == 0) goto LAB_14065ce82;
          FUN_1456e6cf4((uint *)(param_1 + 0x28));
        }
        puVar10 = puVar10 + 1;
      } while (puVar10 != puVar1);
    }
    if (local_58 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14065d00f FUN_14065d00f body=201 status=ok
// SIG undefined FUN_14065d00f(void)

void FUN_14065d00f(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = '\0';
  puVar2 = (ulonglong *)
           FUN_14065d0da(param_2,((uint)(*param_1 >> 0x20) & 0xfffffff) * 0x17 + (int)*param_1,
                         param_1,&local_19);
  if (local_19 == '\x01') {
    uVar3 = (ulonglong)((uint)(*param_1 >> 0x3c) & 7);
    uVar1 = *puVar2;
    uVar4 = (ulonglong)((uint)(uVar1 >> 0x3c) & 7);
    if (uVar4 < uVar3) {
      uVar4 = uVar3;
    }
    *puVar2 = uVar1 & 0x8fffffffffffffff | uVar4 << 0x3c;
    uVar3 = uVar1 >> 0x3f;
    if (uVar1 >> 0x3f < *param_1 >> 0x3f) {
      uVar3 = *param_1 >> 0x3f;
    }
    *puVar2 = uVar1 & 0xfffffffffffffff | uVar4 << 0x3c | uVar3 << 0x3f;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14065d0da FUN_14065d0da body=378 status=ok
// SIG undefined FUN_14065d0da(void)

ulonglong * FUN_14065d0da(longlong *param_1,uint param_2,ulonglong *param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  ulonglong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        if (((*(ulonglong *)(*param_1 + (longlong)iVar5 * 0x10) ^ *param_3) & 0xfffffffffffffff) ==
            0) goto LAB_14065d129;
        iVar5 = *(int *)((longlong)iVar5 * 0x10 + *param_1 + 8);
      } while (iVar5 != -1);
    }
  }
  iVar5 = -1;
LAB_14065d129:
  if (param_4 != 0) {
    *(bool *)param_4 = iVar5 != -1;
  }
  if (iVar5 == -1) {
    FUN_14065d256(param_1,local_38);
    *local_30 = *param_3;
    *(undefined4 *)(local_30 + 1) = 0xffffffff;
    uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= (int)param_1[9])) {
      param_2 = (int)param_1[9] - 1U & param_2;
      *(uint *)((longlong)local_30 + 0xc) = param_2;
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      *(undefined4 *)(local_30 + 1) =
           *(undefined4 *)
            ((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      *(undefined4 *)
       ((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
           local_38[0];
    }
    else {
      *(int *)(param_1 + 9) = iVar5;
      FUN_14065d51e(param_1);
    }
  }
  else {
    local_30 = (ulonglong *)((longlong)iVar5 * 0x10 + *param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_30;
}



// FUNCTION 14065d256 FUN_14065d256 body=712 status=ok
// SIG undefined FUN_14065d256(void)

int * FUN_14065d256(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_1446efaca(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_14065d437;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_14065d437:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x10);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x10) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 14065d51e FUN_14065d51e body=570 status=ok
// SIG undefined FUN_14065d51e(void)

void FUN_14065d51e(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x10;
        uVar13 = (longlong)
                 (int)(((uint)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20) & 0xfffffff) *
                       0x17 + (int)*(undefined8 *)(lVar11 + lVar10)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0xc + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 8 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_14065d713;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_14065d713:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14065d75a FUN_14065d75a body=159 status=ok
// SIG undefined FUN_14065d75a(void)

undefined4 FUN_14065d75a(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar3 = FUN_14065d7fa();
  if ((char)uVar3 != '\0') {
    cVar2 = *(char *)(param_1 + 0xb5);
    if ((cVar2 == '\x02') && (*(char *)(*(longlong *)(param_1 + 0x48) + 0x73) != '\0')) {
      cVar2 = '\x01';
    }
    if ((cVar2 != param_3) && (-2 < *(int *)(param_1 + 0x1c0))) {
      uVar6 = *(int *)(param_1 + 0x1c0) + 1;
      iVar4 = *(int *)(param_1 + 0x1b8);
      if ((int)uVar6 < iVar4) {
        do {
          lVar5 = *(longlong *)(param_1 + 0x1b0);
          if (*(longlong *)(param_1 + 0x1b0) == 0) {
            lVar5 = param_1 + 0x130;
          }
          plVar1 = *(longlong **)(lVar5 + (ulonglong)uVar6 * 0x10);
          if (plVar1 != (longlong *)0x0) {
            cVar2 = (**(code **)(*plVar1 + 0x28))();
            if (cVar2 != '\0') {
              *(char *)(param_1 + 0xb5) = param_3;
              return uVar3;
            }
            iVar4 = *(int *)(param_1 + 0x1b8);
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < iVar4);
      }
    }
  }
  return uVar3;
}



// FUNCTION 14065d7fa FUN_14065d7fa body=145 status=ok
// SIG undefined FUN_14065d7fa(void)

undefined8 FUN_14065d7fa(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x1c0);
  if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x1b8))) {
    lVar4 = param_1 + 0x130;
    if (*(longlong *)(param_1 + 0x1b0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1b0);
    }
    lVar4 = *(longlong *)(lVar4 + (longlong)iVar1 * 0x10);
    if (lVar4 != 0) {
      cVar2 = FUN_14065d9ca(lVar4,param_2);
      if (cVar2 == '\0') {
        return 0;
      }
      cVar2 = *(char *)(lVar4 + 0xb5);
      if ((cVar2 == '\x02') && (*(char *)(*(longlong *)(lVar4 + 0x48) + 0x73) != '\0')) {
        cVar2 = '\x01';
      }
      *(char *)(param_1 + 0xb5) = cVar2;
    }
  }
  uVar3 = FUN_14065d88c(param_1,param_2);
  return uVar3;
}



// FUNCTION 14065d88c FUN_14065d88c body=317 status=ok
// SIG undefined FUN_14065d88c(void)

ulonglong FUN_14065d88c(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar6;
  ulonglong uVar5;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  uint local_54;
  
  lVar12 = *(longlong *)(param_1 + 0x118);
  lVar11 = param_1 + 0xd8;
  if (lVar12 != 0) {
    lVar11 = lVar12;
  }
  iVar1 = *(int *)(param_1 + 0x120);
  uVar6 = (undefined7)((ulonglong)lVar12 >> 8);
  if ((longlong)iVar1 == 0) {
    bVar9 = 0;
    uVar5 = CONCAT71(uVar6,1);
    bVar10 = 1;
  }
  else {
    bVar10 = 1;
    lVar12 = 0;
    bVar7 = 0;
    bVar9 = 0;
    bVar8 = 0;
    local_54 = (uint)CONCAT71(uVar6,1);
    do {
      plVar2 = *(longlong **)(lVar11 + lVar12);
      cVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
      if (cVar4 != '\0') {
        cVar4 = FUN_14065d9ca(plVar2,param_2,param_3);
        if (cVar4 == '\0') {
          local_54 = 0;
        }
        else {
          lVar3 = plVar2[9];
          if (*(char *)((longlong)plVar2 + 0xb5) == '\x01') {
LAB_14065d944:
            bVar9 = bVar9 | *(byte *)(lVar3 + 0x79);
            bVar8 = bVar8 | *(byte *)(lVar3 + 0x7a);
          }
          else if (*(char *)((longlong)plVar2 + 0xb5) == '\x02') {
            if (*(char *)(lVar3 + 0x73) == '\x01') goto LAB_14065d944;
            bVar10 = bVar10 & (*(byte *)(lVar3 + 0x7c) ^ 1);
            bVar7 = bVar7 | *(byte *)(lVar3 + 0x7b);
          }
          else {
            bVar10 = bVar10 & (*(byte *)(lVar3 + 0x7c) ^ 1);
          }
        }
      }
      lVar12 = lVar12 + 8;
    } while ((longlong)iVar1 * 8 != lVar12);
    if ((bVar7 & 1) != 0) {
      *(undefined1 *)(param_1 + 0xb5) = 2;
    }
    uVar5 = (ulonglong)local_54;
    if ((bVar8 & 1) != 0) goto LAB_14065d9a4;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x78) != '\0') {
    bVar9 = bVar10 & bVar9;
  }
  if ((bVar9 & 1) == 0) {
    return uVar5;
  }
LAB_14065d9a4:
  *(undefined1 *)(param_1 + 0xb5) = 1;
  return uVar5;
}



// FUNCTION 14065d9ca FUN_14065d9ca body=237 status=ok
// SIG undefined FUN_14065d9ca(void)

ulonglong FUN_14065d9ca(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  *(char *)((longlong)param_1 + 0xb5) = param_3;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(char *)((longlong)param_1 + 0xb4) != '\x03') {
    cVar2 = param_3;
    if ((int)param_1[0x11] != 0) {
      plVar1 = (longlong *)param_1[0x10];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,3);
        cVar2 = *(char *)((longlong)param_1 + 0xb5);
      }
    }
    cVar2 = (**(code **)(*param_1 + 0xb0))(param_1,param_2,cVar2);
    if ((param_3 == '\x04') || (cVar2 != '\0')) {
      if (*(char *)((longlong)param_1 + 0xb5) == '\x01') {
        *(int *)((longlong)param_1 + 0xbc) = *(int *)((longlong)param_1 + 0xbc) + 1;
      }
      *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 8);
      (**(code **)(*param_1 + 0xb8))(param_1,param_2);
      if (((int)param_1[0x11] != 0) &&
         (plVar1 = (longlong *)param_1[0x10], plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,4);
      }
      *(undefined1 *)((longlong)param_1 + 0xb4) = 3;
      param_1[0x15] = 0;
      *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14065dab8 FUN_14065dab8 body=287 status=ok
// SIG undefined FUN_14065dab8(void)

undefined1 FUN_14065dab8(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_3 + 0x20);
  local_40 = *(undefined8 *)(param_3 + 0x28);
  local_38 = *(longlong **)(param_3 + 0x30);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  cVar4 = FUN_140230656(&local_48);
  if ((cVar4 == '\0') && (*(char *)(*(longlong *)(param_1 + 0x20) + 0x100) != '\x01')) {
    bVar7 = 0;
  }
  else {
    cVar4 = FUN_14065dbd8(&local_48);
    bVar7 = cVar4 + 1;
  }
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
  cVar4 = (**(code **)(*param_2 + 8))(param_2);
  if ((cVar4 == '\0') && (*(char *)((longlong)param_2 + 0x4c4) == '\0')) {
    lVar6 = FUN_1409e7438();
    uVar5 = 0;
    if ((bVar7 != 1) || (*(char *)(lVar6 + 0xd8) == '\0')) goto LAB_14065db5c;
  }
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + 0xe0) ==
      *(int *)(param_3 + 0xc)) {
    uVar5 = *(undefined1 *)(param_1 + 0x29 + (ulonglong)bVar7);
  }
  else {
    uVar5 = 0;
  }
LAB_14065db5c:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14065dbd8 FUN_14065dbd8 body=482 status=ok
// SIG undefined FUN_14065dbd8(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14065dbd8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_b8 [40];
  ulonglong **local_90;
  ulonglong *local_88 [3];
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb449a8) {
    FUN_144b3d300(&DAT_14cb449a8);
    if (DAT_14cb449a8 == -1) {
      local_88[1] = (ulonglong *)DAT_14c965d60;
      local_88[2] = (ulonglong *)_DAT_14c965d68;
      local_70 = DAT_14c965d70;
      if (DAT_14c965d70 != 0) {
        LOCK();
        *(int *)(DAT_14c965d70 + 8) = *(int *)(DAT_14c965d70 + 8) + 1;
        UNLOCK();
      }
      local_68 = _DAT_14c965da8;
      uStack_60 = _DAT_14c965db0;
      local_58 = DAT_14c965db8;
      if (DAT_14c965db8 != 0) {
        LOCK();
        *(int *)(DAT_14c965db8 + 8) = *(int *)(DAT_14c965db8 + 8) + 1;
        UNLOCK();
      }
      local_50 = _DAT_14c965d90;
      uStack_48 = _DAT_14c965d98;
      local_40 = DAT_14c965da0;
      if (DAT_14c965da0 != 0) {
        LOCK();
        *(int *)(DAT_14c965da0 + 8) = *(int *)(DAT_14c965da0 + 8) + 1;
        UNLOCK();
      }
      local_38 = _DAT_14c965d78;
      uStack_34 = uRam000000014c965d7c;
      uStack_30 = _DAT_14c965d80;
      uStack_2c = uRam000000014c965d84;
      local_28 = DAT_14c965d88;
      if (DAT_14c965d88 != 0) {
        LOCK();
        *(int *)(DAT_14c965d88 + 8) = *(int *)(DAT_14c965d88 + 8) + 1;
        UNLOCK();
      }
      local_90 = local_88 + 1;
      local_88[0] = &local_20;
      FUN_145731ff4(&DAT_14cb44998);
      lVar4 = 0x60;
      do {
        plVar3 = *(longlong **)((longlong)local_88 + lVar4);
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
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != 0);
      atexit(FUN_143ae541b);
      _Init_thread_footer(&DAT_14cb449a8);
    }
  }
  lVar4 = (longlong)DAT_14cb449a0;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar4 * 3;
    lVar6 = 0;
    do {
      bVar7 = *(longlong *)(DAT_14cb44998 + lVar6) == *param_1;
      lVar5 = CONCAT71((int7)((ulonglong)lVar5 >> 8),bVar7);
      if (bVar7) break;
      bVar7 = lVar4 * 0x18 + -0x18 != lVar6;
      lVar6 = lVar6 + 0x18;
    } while (bVar7);
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14065ddbc FUN_14065ddbc body=503 status=ok
// SIG undefined FUN_14065ddbc(void)

void FUN_14065ddbc(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = (**(code **)(*param_1 + 0xbf0))();
  if (cVar2 != '\0') {
    local_58 = 0;
    uStack_50 = 0;
    FUN_1447a68a4(param_1,&local_58);
    iVar9 = (int)uStack_50;
    uVar10 = uStack_50 & 0xffffffff;
    iVar4 = (int)param_2[1] + (int)uStack_50 + (int)param_1[0x304] + (int)param_1[0x302];
    if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar4);
    }
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      FUN_1448831cc(param_2);
    }
    if (0 < iVar9) {
      lVar6 = 0;
      uVar8 = 0;
      do {
        if ((longlong)uVar8 < (longlong)(int)param_1[0xc5]) {
          lVar5 = *(longlong *)(param_1[0xc4] + uVar8 * 8);
          iVar9 = (int)param_2[1];
          uVar3 = *(uint *)((longlong)param_2 + 0xc);
          if (lVar5 == 0) goto LAB_14065df5d;
        }
        else {
          iVar9 = (int)param_2[1];
          uVar3 = *(uint *)((longlong)param_2 + 0xc);
LAB_14065df5d:
          lVar5 = *(longlong *)(local_58 + lVar6);
        }
        *(uint *)(param_2 + 1) = iVar9 + 1U;
        if (uVar3 < iVar9 + 1U) {
          FUN_144769b64(param_2,iVar9);
        }
        *(longlong *)(*param_2 + (longlong)iVar9 * 8) = lVar5;
        uVar8 = uVar8 + 1;
        lVar6 = lVar6 + 0x28;
      } while (uVar10 != uVar8);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  lVar6 = param_1[0x302];
  if ((longlong)(int)lVar6 != 0) {
    lVar5 = param_1[0x301];
    lVar7 = 0;
    do {
      lVar1 = *(longlong *)(lVar5 + lVar7);
      if (lVar1 != 0) {
        iVar9 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar9 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar9 + 1U) {
          FUN_144769b64(param_2,iVar9);
        }
        *(longlong *)(*param_2 + (longlong)iVar9 * 8) = lVar1;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar7);
  }
  lVar6 = param_1[0x304];
  if ((longlong)(int)lVar6 != 0) {
    lVar5 = param_1[0x303];
    lVar7 = 0;
    do {
      lVar1 = *(longlong *)(lVar5 + lVar7);
      if (lVar1 != 0) {
        iVar9 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar9 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar9 + 1U) {
          FUN_144769b64(param_2,iVar9);
        }
        *(longlong *)(*param_2 + (longlong)iVar9 * 8) = lVar1;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar7);
  }
  FUN_14065dfb4(param_1,param_2,param_3);
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14065dfb4 FUN_14065dfb4 body=459 status=ok
// SIG undefined FUN_14065dfb4(void)

void FUN_14065dfb4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  
  if (param_1[0xcb] == 0) {
    if ((DAT_14c950c29 & param_1[0xcc] != 0) != 0) goto LAB_14065e175;
    if (param_1[0xcc] == 0) goto LAB_14065e08e;
  }
  else if (DAT_14c950c29 == 1) {
LAB_14065e175:
    FUN_1456cec3c();
  }
  cVar2 = (**(code **)(*param_1 + 0xbf0))(param_1);
  if (cVar2 == '\0') {
    lVar5 = param_1[0xc5];
    plVar7 = (longlong *)param_1[0xcb];
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)param_1[0xcc];
      if ((DAT_14c950c29 & plVar7 != (longlong *)0x0) != 0) goto LAB_14065e168;
    }
    else if (DAT_14c950c29 == 1) {
LAB_14065e168:
      FUN_1456cec3c(plVar7);
    }
    lVar3 = (**(code **)(*plVar7 + 0x3b8))(plVar7);
    iVar8 = *(int *)(lVar3 + 8);
    if (*(int *)(lVar3 + 8) < (int)lVar5) {
      iVar8 = (int)lVar5;
    }
    if (0 < iVar8) {
      iVar6 = 0;
      do {
        uVar4 = (**(code **)(*param_1 + 0x610))(param_1,iVar6);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_144769b64(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar4;
        iVar6 = iVar6 + 1;
      } while (iVar8 != iVar6);
    }
  }
  lVar5 = param_1[0xc6];
  if ((lVar5 != 0) ||
     ((*(code **)(*param_1 + 0xa68) != (code *)&LAB_14470a070 &&
      (lVar5 = (**(code **)(*param_1 + 0xa68))(param_1), lVar5 != 0)))) {
    iVar8 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar8 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
      FUN_144769b64(param_2,iVar8);
    }
    *(longlong *)(*param_2 + (longlong)iVar8 * 8) = lVar5;
  }
LAB_14065e08e:
  lVar5 = param_1[0x150];
  if (lVar5 != 0) {
    iVar8 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar8 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
      FUN_144769b64(param_2,iVar8);
    }
    *(longlong *)(*param_2 + (longlong)iVar8 * 8) = lVar5;
  }
  lVar5 = param_1[0x151];
  if (lVar5 != 0) {
    iVar8 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar8 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
      FUN_144769b64(param_2,iVar8);
    }
    *(longlong *)(*param_2 + (longlong)iVar8 * 8) = lVar5;
  }
  return;
}



// FUNCTION 14065e180 FUN_14065e180 body=228 status=ok
// SIG undefined FUN_14065e180(void)

void FUN_14065e180(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  longlong lVar8;
  
  cVar6 = FUN_14065e264((undefined4 *)(param_1 + 0x18));
  if (cVar6 == '\0') {
    lVar8 = 0;
    FUN_14065e6bc(param_1,0);
    FUN_14065e6bc(param_1,1);
    *(undefined1 *)(param_1 + 0x10) = 1;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *(undefined4 *)(param_1 + 0x18) = *param_2;
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    FUN_140dd1076(param_1 + 0x28,param_2 + 4);
    FUN_140dd1076(param_1 + 0x4a8,param_2 + 0x124);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x915);
    *(undefined8 *)(param_1 + 0x928) = *(undefined8 *)(param_2 + 0x244);
    *(undefined8 *)(param_1 + 0x92d) = uVar1;
    bVar5 = true;
    do {
      bVar7 = bVar5;
      if (0.0 <= *(float *)(param_1 + 0x948 + lVar8 * 8)) {
        *(undefined4 *)(param_1 + 0x948 + lVar8 * 8) = 0xbf800000;
        *(undefined1 *)(param_1 + 0x94c + lVar8 * 8) = 0;
        if (*(longlong *)(param_1 + 8) != 0) {
          FUN_141367a8a(*(longlong *)(param_1 + 8) + 0x58,lVar8);
        }
      }
      lVar8 = 1;
      bVar5 = false;
    } while (bVar7);
  }
  return;
}



// FUNCTION 14065e264 FUN_14065e264 body=128 status=ok
// SIG undefined FUN_14065e264(void)

undefined8 FUN_14065e264(longlong param_1,longlong param_2)

{
  byte bVar1;
  char extraout_AL;
  undefined7 uVar3;
  undefined7 extraout_var;
  undefined8 uVar2;
  bool bVar4;
  
  if (*(longlong *)(param_2 + 8) == *(longlong *)(param_1 + 8)) {
    bVar1 = *(byte *)(param_2 + 0x488);
    uVar3 = (undefined7)((ulonglong)*(longlong *)(param_2 + 8) >> 8);
    if ((bVar1 == *(byte *)(param_1 + 0x488) & bVar1) == 1) {
      FUN_14065e2e4(param_2 + 0x10,param_1 + 0x10);
      uVar3 = extraout_var;
      if (extraout_AL == '\0') goto LAB_14065e2c4;
    }
    else if (bVar1 != *(byte *)(param_1 + 0x488)) goto LAB_14065e2c4;
    bVar1 = *(byte *)(param_2 + 0x908);
    bVar4 = bVar1 == *(byte *)(param_1 + 0x908);
    uVar2 = CONCAT71(uVar3,bVar4);
    if ((bVar1 & bVar4) == 1) {
      uVar2 = FUN_14065e2e4(param_2 + 0x490,param_1 + 0x490);
      return uVar2;
    }
  }
  else {
LAB_14065e2c4:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14065e2e4 FUN_14065e2e4 body=137 status=ok
// SIG undefined FUN_14065e2e4(void)

undefined8 FUN_14065e2e4(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_14065e36e(param_2,param_1);
  if (((cVar1 != '\0') && (cVar1 = FUN_14065e36e(param_2 + 0x230,param_1 + 0x230), cVar1 != '\0'))
     && (*(char *)(param_2 + 0x460) == *(char *)(param_1 + 0x460))) {
    if (((*(float *)(param_2 + 0x464) == *(float *)(param_1 + 0x464)) &&
        (!NAN(*(float *)(param_2 + 0x464)) && !NAN(*(float *)(param_1 + 0x464)))) &&
       ((*(longlong *)(param_2 + 0x468) == *(longlong *)(param_1 + 0x468) &&
        (*(char *)(param_2 + 0x470) == *(char *)(param_1 + 0x470))))) {
      return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x468) >> 8),
                      *(char *)(param_2 + 0x471) == *(char *)(param_1 + 0x471));
    }
  }
  return 0;
}



// FUNCTION 14065e36e FUN_14065e36e body=785 status=ok
// SIG undefined FUN_14065e36e(void)

undefined8 FUN_14065e36e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = 0;
  if ((*param_2 == *param_1) && ((int)param_2[1] == (int)param_1[1])) {
    if ((int)param_2[0x45] == (int)param_1[0x45]) {
      uVar5 = 0;
      if ((param_1[4] != param_2[4]) || ((int)param_1[5] != (int)param_2[5])) goto LAB_14065e453;
      if ((int)param_1[0x13] == (int)param_2[0x13]) {
        cVar2 = FUN_14065e680(param_1[0x12],param_2[0x12]);
        if (cVar2 != '\0') {
          cVar2 = FUN_140251310(param_1 + 0x14,param_2 + 0x14);
          if ((cVar2 != '\0') && ((char)param_1[0x16] == (char)param_2[0x16])) {
            cVar2 = FUN_144815c48(param_2 + 0x17);
            if (cVar2 == '\0') {
              cVar2 = FUN_144815c48(param_1 + 0x17);
              uVar5 = 1;
              if (cVar2 == '\0') goto LAB_14065e453;
            }
            if ((char)param_1[0x2f] == (char)param_2[0x2f]) {
              if (param_1[0x3b] == 0) {
                uVar5 = FUN_14016979c();
                lVar6 = FUN_14477b664(uVar5);
                param_1[0x3b] = lVar6;
              }
              lVar6 = param_2[0x3b];
              if (lVar6 == 0) {
                lVar6 = FUN_14016979c();
              }
              lVar1 = param_2[0x3a];
              uVar5 = FUN_14477b664(lVar6);
              local_48 = lVar1;
              uVar3 = FUN_144a7891a(uVar5);
              local_50 = param_1[0x3a];
              lVar6 = param_1[0x3b];
              uVar4 = FUN_144a7891a(lVar6);
              local_68 = uVar5;
              local_60 = &local_48;
              cVar2 = FUN_144a789b8(uVar4,lVar6,&local_50,uVar3);
              if (cVar2 != '\0') {
                cVar2 = FUN_1401b48d6(param_1 + 0x30,param_2 + 0x30);
                if (cVar2 != '\0') {
                  if (param_1[0x3e] == 0) {
                    uVar5 = FUN_140103600();
                    lVar6 = FUN_14477b664(uVar5);
                    param_1[0x3e] = lVar6;
                  }
                  lVar6 = param_2[0x3e];
                  if (lVar6 == 0) {
                    lVar6 = FUN_140103600();
                  }
                  lVar1 = param_2[0x3d];
                  uVar5 = FUN_14477b664(lVar6);
                  local_48 = lVar1;
                  uVar3 = FUN_144a7891a(uVar5);
                  local_50 = param_1[0x3d];
                  lVar6 = param_1[0x3e];
                  uVar4 = FUN_144a7891a(lVar6);
                  local_68 = uVar5;
                  local_60 = &local_48;
                  cVar2 = FUN_144a789b8(uVar4,lVar6,&local_50,uVar3);
                  if (cVar2 != '\0') {
                    if (param_1[0x41] == 0) {
                      uVar5 = FUN_14010363a();
                      lVar6 = FUN_14477b664(uVar5);
                      param_1[0x41] = lVar6;
                    }
                    lVar6 = param_2[0x41];
                    if (lVar6 == 0) {
                      lVar6 = FUN_14010363a();
                    }
                    lVar1 = param_2[0x40];
                    uVar5 = FUN_14477b664(lVar6);
                    local_48 = lVar1;
                    uVar3 = FUN_144a7891a(uVar5);
                    local_50 = param_1[0x40];
                    lVar6 = param_1[0x41];
                    uVar4 = FUN_144a7891a(lVar6);
                    local_68 = uVar5;
                    local_60 = &local_48;
                    uVar5 = FUN_144a789b8(uVar4,lVar6,&local_50,uVar3);
                    goto LAB_14065e453;
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar5 = 0;
  }
LAB_14065e453:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14065e680 FUN_14065e680 body=60 status=ok
// SIG undefined FUN_14065e680(void)

undefined8 FUN_14065e680(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if (((*(longlong *)(param_2 + lVar1) != *(longlong *)(param_1 + lVar1)) ||
          (*(longlong *)(param_2 + 8 + lVar1) != *(longlong *)(param_1 + 8 + lVar1))) ||
         (*(char *)(param_2 + 0x10 + lVar1) != *(char *)(param_1 + 0x10 + lVar1))) {
        return 0;
      }
      lVar1 = lVar1 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 1;
}



// FUNCTION 14065e6bc FUN_14065e6bc body=154 status=ok
// SIG undefined FUN_14065e6bc(void)

void FUN_14065e6bc(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (1 < (byte)param_2) {
    return;
  }
  if (*(float *)(param_1 + 0x948 + (param_2 & 0xff) * 8) < 0.0) {
    return;
  }
  if ((byte)param_2 == 0) {
    if (*(char *)(param_1 + 0x4a0) == '\0') {
      return;
    }
    lVar3 = param_1 + 0x28;
  }
  else {
    if (*(char *)(param_1 + 0x920) != '\x01') {
      return;
    }
    lVar3 = param_1 + 0x4a8;
  }
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x460) != '\x03') {
      return;
    }
    plVar1 = *(longlong **)(param_1 + 8);
    if (plVar1 != (longlong *)0x0) {
      if ((*(longlong *)(param_1 + 0x20) == 0) ||
         (cVar2 = FUN_144729dda(param_1 + 0x18), cVar2 == '\0')) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
      }
                    /* WARNING: Could not recover jumptable at 0x00014065e73d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x38))(plVar1,uVar4,param_2 & 0xffffffff);
      return;
    }
    return;
  }
  return;
}



// FUNCTION 14065e776 FUN_14065e776 body=76 status=ok
// SIG undefined FUN_14065e776(void)

void FUN_14065e776(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0xe0)) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_14065e7c2(*(longlong *)(param_1 + 0xd8) + lVar1,param_2);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x60;
    } while (lVar2 < *(int *)(param_1 + 0xe0));
  }
  return;
}



// FUNCTION 14065e7c2 FUN_14065e7c2 body=81 status=ok
// SIG undefined FUN_14065e7c2(void)

void FUN_14065e7c2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x50);
    lVar2 = (longlong)*(int *)(param_1 + 0x58) * 0x60;
    do {
      FUN_14019c9f2(lVar1,param_2);
      lVar1 = lVar1 + 0x60;
      lVar2 = lVar2 + -0x60;
    } while (lVar2 != 0);
  }
  FUN_14019c9f2(param_1 + 0x40,param_2);
  return;
}



// FUNCTION 14065e814 FUN_14065e814 body=3128 status=ok
// SIG undefined FUN_14065e814(void)

void FUN_14065e814(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  double dVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  float *pfVar7;
  byte bVar8;
  void *_Dst;
  undefined8 *_Dst_00;
  longlong lVar9;
  longlong lVar10;
  void *pvVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined1 local_d9;
  undefined8 local_d8;
  longlong lStack_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined8 local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x28);
  puVar1 = (undefined8 *)(param_1 + 0x18);
  lVar12 = *(longlong *)(param_1 + 0x28);
  if (((lVar12 == 0) ||
      ((*(longlong *)(param_1 + 0x610) != 0 &&
       ((*(uint *)(*(longlong *)(param_1 + 0x610) + 8) >> 0x1e & 1) == 0)))) &&
     ((bVar8 = *(byte *)(param_1 + 0x88), bVar8 != 1 ||
      ((*(longlong *)(param_1 + 0x618) != 0 &&
       ((*(uint *)(*(longlong *)(param_1 + 0x618) + 8) >> 0x1e & 1) == 0)))))) {
LAB_14065e895:
    *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x90) = *puVar1;
    if (DAT_14c950c29 != 0) {
      if (lVar12 == 0) goto LAB_14065e902;
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_1 + 0x28);
      bVar8 = *(byte *)(param_1 + 0x88);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = 0x3f80000000000000;
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(undefined8 *)(param_1 + 0x28) = 0;
    bVar8 = *(byte *)(param_1 + 0x88);
    if (bVar8 == 1) {
      if (*(longlong *)(param_1 + 0x78) == 0) {
        lVar12 = 0;
      }
      else {
        FUN_1400020a8();
        lVar12 = *(longlong *)(param_1 + 0x28);
      }
      *(undefined1 *)(param_1 + 0x88) = 0;
      bVar8 = 0;
      goto LAB_14065e895;
    }
    *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x90) = *puVar1;
LAB_14065e902:
    lVar12 = 0;
  }
  *(longlong *)(param_1 + 0xa0) = lVar12;
  if ((bVar8 & 1) == 0) {
    if (*(char *)(param_1 + 0x100) != '\0') {
      if (*(longlong *)(param_1 + 0xf0) != 0) {
        FUN_1400020a8();
      }
      uVar5 = 0;
      goto LAB_14065ef5f;
    }
  }
  else {
    if ((*(char *)(param_1 + 0x100) != '\0') && (*(longlong *)(param_1 + 0xf0) != 0)) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    iVar6 = *(int *)(param_1 + 0x80);
    *(int *)(param_1 + 0xf8) = iVar6;
    if ((longlong)iVar6 == 0) {
      *(undefined4 *)(param_1 + 0xfc) = 2;
    }
    else {
      pvVar11 = (void *)(param_1 + 0x58);
      if (*(void **)(param_1 + 0x78) != (void *)0x0) {
        pvVar11 = *(void **)(param_1 + 0x78);
      }
      FUN_144891736((void *)(param_1 + 0xd0),iVar6,0);
      _Dst = *(void **)(param_1 + 0xf0);
      if (*(void **)(param_1 + 0xf0) == (void *)0x0) {
        _Dst = (void *)(param_1 + 0xd0);
      }
      memcpy(_Dst,pvVar11,(longlong)iVar6 << 4);
    }
    uVar5 = 1;
LAB_14065ef5f:
    *(undefined1 *)(param_1 + 0x100) = uVar5;
  }
  lVar12 = *(longlong *)(param_1 + 0x108);
  lStack_d0 = CONCAT71(lStack_d0._1_7_,*(undefined1 *)(lVar12 + 0xa10));
  local_d8 = *(undefined8 *)(lVar12 + 0xa08);
  lVar9 = *(longlong *)(lVar12 + 0xa18);
  local_c8 = lVar9;
  if ((lVar9 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar9);
  }
  local_68 = *(byte *)(lVar12 + 0xa78);
  if (local_68 == 1) {
    local_a0 = *(undefined8 *)(lVar12 + 0xa40);
    local_c0 = *(undefined4 *)(lVar12 + 0xa20);
    uStack_bc = *(undefined4 *)(lVar12 + 0xa24);
    uStack_b8 = *(undefined4 *)(lVar12 + 0xa28);
    uStack_b4 = *(undefined4 *)(lVar12 + 0xa2c);
    local_b0 = *(undefined4 *)(lVar12 + 0xa30);
    uStack_ac = *(undefined4 *)(lVar12 + 0xa34);
    uStack_a8 = *(undefined4 *)(lVar12 + 0xa38);
    uStack_a4 = *(undefined4 *)(lVar12 + 0xa3c);
    local_78 = (undefined8 *)0x0;
    iVar6 = *(int *)(lVar12 + 0xa70);
    local_70 = CONCAT44(local_70._4_4_,iVar6);
    if ((longlong)iVar6 == 0) {
      local_70 = CONCAT44(2,iVar6);
    }
    else {
      pvVar11 = (void *)(lVar12 + 0xa48);
      if (*(void **)(lVar12 + 0xa68) != (void *)0x0) {
        pvVar11 = *(void **)(lVar12 + 0xa68);
      }
      FUN_144891736(&local_98,iVar6,0);
      _Dst_00 = local_78;
      if (local_78 == (undefined8 *)0x0) {
        _Dst_00 = &local_98;
      }
      memcpy(_Dst_00,pvVar11,(longlong)iVar6 << 4);
      lVar9 = local_c8;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = (undefined1)lStack_d0;
  *puVar1 = local_d8;
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c(lVar9);
      lVar9 = local_c8;
    }
  }
  *(longlong *)(param_1 + 0x28) = lVar9;
  if (&local_d8 != puVar1) {
    if ((local_68 & 1) == 0) {
      if (*(char *)(param_1 + 0x88) == '\0') goto LAB_14065e9bd;
      if (*(longlong *)(param_1 + 0x78) != 0) {
        FUN_1400020a8();
      }
      uVar5 = 0;
    }
    else {
      if ((*(char *)(param_1 + 0x88) != '\0') && (*(longlong *)(param_1 + 0x78) != 0)) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + 0x50) = local_a0;
      *(undefined4 *)(param_1 + 0x40) = local_b0;
      *(undefined4 *)(param_1 + 0x44) = uStack_ac;
      *(undefined4 *)(param_1 + 0x48) = uStack_a8;
      *(undefined4 *)(param_1 + 0x4c) = uStack_a4;
      *(ulonglong *)(param_1 + 0x30) = CONCAT44(uStack_bc,local_c0);
      *(ulonglong *)(param_1 + 0x38) = CONCAT44(uStack_b4,uStack_b8);
      if (local_78 == (undefined8 *)0x0) {
        *(undefined4 *)(param_1 + 0x68) = local_88;
        *(undefined4 *)(param_1 + 0x6c) = uStack_84;
        *(undefined4 *)(param_1 + 0x70) = uStack_80;
        *(undefined4 *)(param_1 + 0x74) = uStack_7c;
        *(undefined8 *)(param_1 + 0x58) = local_98;
        *(undefined8 *)(param_1 + 0x60) = uStack_90;
      }
      *(undefined8 **)(param_1 + 0x78) = local_78;
      local_78 = (undefined8 *)0x0;
      *(undefined4 *)(param_1 + 0x80) = (undefined4)local_70;
      *(undefined4 *)(param_1 + 0x84) = local_70._4_4_;
      local_70 = 0x200000000;
      uVar5 = 1;
    }
    *(undefined1 *)(param_1 + 0x88) = uVar5;
  }
LAB_14065e9bd:
  if (((local_68 & 1) != 0) && (local_78 != (undefined8 *)0x0)) {
    FUN_1400020a8();
  }
  lVar12 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(*(longlong *)(param_1 + 0x108) + 0x9a0);
  if (DAT_14c950c29 == 1) {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_1 + 0x28);
    }
  }
  *(longlong *)(param_1 + 0x610) = lVar12;
  bVar8 = *(byte *)(param_1 + 0x88);
  if (bVar8 == 1) {
    lVar12 = *(longlong *)(param_1 + 0x38);
    if ((lVar12 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar12);
      bVar8 = *(byte *)(param_1 + 0x88);
    }
  }
  else {
    lVar12 = 0;
  }
  *(longlong *)(param_1 + 0x618) = lVar12;
  if (((*(byte *)(param_1 + 0x100) ^ bVar8) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x100) & bVar8) == 1) {
      if (*(longlong *)(param_1 + 0xb0) != *(longlong *)(param_1 + 0x38)) goto LAB_14065ed55;
    }
    else {
      lVar12 = *(longlong *)(param_1 + 0x28);
      if ((lVar12 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar12);
      }
      if (*(longlong *)(param_1 + 0xa0) != lVar12) goto LAB_14065ed55;
    }
    goto LAB_14065ea80;
  }
LAB_14065ed55:
  if (*(longlong *)(param_1 + 0x110) != 0) {
    pfVar7 = (float *)FUN_14065f4de(*(longlong *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0xa0),
                                    *(undefined8 *)(param_1 + 0x28));
    local_d9 = *(undefined1 *)(pfVar7 + 5);
    lVar12 = *(longlong *)(pfVar7 + 6);
    if ((DAT_14c950c29 == 1) && (lVar12 != 0)) {
      FUN_1456cec3c(lVar12);
    }
    lVar9 = *(longlong *)(pfVar7 + 8);
    if (((DAT_14c950c29 & 1) != 0) && (lVar9 != 0)) {
      FUN_1456cec3c(lVar9);
    }
    uVar5 = *(undefined1 *)(pfVar7 + 10);
    if (pfVar7[3] + -0.0001 <= pfVar7[2]) {
LAB_14065f0c5:
      fVar16 = pfVar7[1];
    }
    else {
      fVar16 = pfVar7[1];
      if (*pfVar7 < fVar16 + -0.0001) {
        if (((*(float *)(param_1 + 0x600) <= 1e-05) ||
            (cVar4 = FUN_1449c239e(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0xa0))
            , cVar4 != '\x02')) ||
           (cVar4 = FUN_1449c239e(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x28)),
           cVar4 == '\x02')) {
          local_e8 = *(undefined8 *)(*(longlong *)(param_1 + 0x108) + 0x6a0);
          local_f8 = *(undefined4 *)(param_1 + 0x18);
          local_f0 = &local_d8;
          cVar4 = FUN_14065f56a(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0xa0),
                                *(undefined4 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x28));
          if (cVar4 != '\0') {
            fVar16 = ((float)local_d8 - pfVar7[2]) / (pfVar7[3] - pfVar7[2]);
            if (1.0 <= fVar16) {
              fVar16 = 1.0;
            }
            if (fVar16 <= 0.0) {
              fVar16 = 0.0;
            }
            fVar16 = (pfVar7[1] - *pfVar7) * fVar16 + *pfVar7;
            goto LAB_14065f0cc;
          }
        }
        goto LAB_14065f0c5;
      }
    }
LAB_14065f0cc:
    if ((*(char *)(*(longlong *)(param_1 + 0x108) + 0x9a8) != '\0') ||
       (*(longlong *)(param_1 + 0xa0) == 0)) {
      fVar16 = 0.0;
    }
    bVar8 = lVar12 != 0 & DAT_14c950c29;
    if (*(char *)(param_1 + 0x88) == '\x01') {
      if (bVar8 != 0) {
        FUN_1456cec3c(lVar12);
      }
      if (((DAT_14c950c29 & 1) != 0) && (lVar9 != 0)) {
        FUN_1456cec3c(lVar9);
      }
      if ((*(longlong *)(param_1 + 0x38) != 0) && (0 < *(int *)(param_1 + 0x80))) {
        iVar6 = *(int *)(param_1 + 0x254) + ((*(int *)(param_1 + 0x254) + 1) / 3) * -3 + 1;
        *(int *)(param_1 + 0x254) = iVar6;
        (**(code **)(*(longlong *)(param_1 + (longlong)iVar6 * 0x98 + 0x438) + 0x1e0))();
        local_d8._0_5_ = CONCAT14(local_d9,fVar16);
        lStack_d0 = lVar12;
        if ((DAT_14c950c29 == 1) && (lVar12 != 0)) {
          FUN_1456cec3c(lVar12);
        }
        local_c8 = lVar9;
        if (((DAT_14c950c29 & 1) != 0) && (lVar9 != 0)) {
          FUN_1456cec3c(lVar9);
        }
        iVar6 = *(int *)(param_1 + 0x254) + 3;
        goto LAB_14065f1cd;
      }
    }
    else {
      if (bVar8 != 0) {
        FUN_1456cec3c(lVar12);
      }
      if (((DAT_14c950c29 & 1) != 0) && (lVar9 != 0)) {
        FUN_1456cec3c(lVar9);
      }
      if (*(longlong *)(param_1 + 0x28) != 0) {
        iVar6 = *(int *)(param_1 + 0x250) + ((*(int *)(param_1 + 0x250) + 1) / 3) * -3 + 1;
        *(int *)(param_1 + 0x250) = iVar6;
        (**(code **)(*(longlong *)(param_1 + (longlong)iVar6 * 0xa0 + 600) + 0x1a8))();
        local_d8._0_5_ = CONCAT14(local_d9,fVar16);
        lStack_d0 = lVar12;
        if ((DAT_14c950c29 == 1) && (lVar12 != 0)) {
          FUN_1456cec3c(lVar12);
        }
        local_c8 = lVar9;
        if (((DAT_14c950c29 & 1) != 0) && (lVar9 != 0)) {
          FUN_1456cec3c(lVar9);
        }
        iVar6 = *(int *)(param_1 + 0x250);
LAB_14065f1cd:
        uStack_b8 = CONCAT31(uStack_b8._1_3_,1);
        local_c0 = CONCAT31(local_c0._1_3_,uVar5);
        FUN_1403201ee(param_1 + 0x120,iVar6);
      }
    }
LAB_14065ea80:
    lVar12 = *(longlong *)(param_1 + 0x110);
    if (lVar12 != 0) {
      lVar9 = 3;
      do {
        if (lVar9 < *(int *)(param_1 + 0x248)) {
          lVar10 = *(longlong *)(param_1 + 0x240);
          if (*(longlong *)(param_1 + 0x240) == 0) {
            lVar10 = param_1 + 0x220;
          }
          if (1e-05 < *(float *)(lVar10 + lVar9 * 4)) {
            fVar16 = *(float *)(lVar12 + 0x128);
            if (0.0 < fVar16) {
              fVar16 = (float)(-(uint)(0.0 < fVar16) &
                              (uint)(float)(*(double *)(*(longlong *)(param_1 + 0x108) + 0x9b8) /
                                           (double)fVar16));
              if (1.0 <= fVar16) {
                fVar16 = 1.0;
              }
              if (fVar16 <= -1.0) {
                fVar16 = -1.0;
              }
              if (*(float *)(lVar12 + 300) <= 0.0) {
                *(float *)(param_1 + 0x600) = fVar16;
                goto LAB_14065eae1;
              }
              fVar15 = fVar16 - *(float *)(param_1 + 0x600);
              uVar14 = -(uint)(0.0 < fVar15);
              fVar17 = ((float)(uVar14 & 0x3f800000 | ~uVar14 & -(uint)(fVar15 < 0.0) & 0xbf800000)
                       * *(float *)(param_1 + 0x118)) / *(float *)(lVar12 + 300);
              fVar15 = *(float *)(param_1 + 0x600) + fVar17;
              *(float *)(param_1 + 0x600) = fVar15;
              if (0.0 < fVar17) {
                if (fVar16 <= fVar15) {
                  fVar15 = fVar16;
                }
              }
              else {
                if (0.0 <= fVar17) goto LAB_14065eae1;
                if (fVar15 <= fVar16) {
                  fVar15 = fVar16;
                }
              }
              *(float *)(param_1 + 0x600) = fVar15;
              goto LAB_14065eae1;
            }
            break;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 6);
      *(undefined4 *)(param_1 + 0x600) = 0;
LAB_14065eae1:
      cVar4 = FUN_1449c239e(lVar12,*(undefined8 *)(param_1 + 0x28));
      if ((cVar4 == '\x02') && (*(char *)(param_1 + 0x88) == '\x01')) {
        local_d8 = *(undefined8 *)(param_1 + 0x48);
        lStack_d0 = *(longlong *)(param_1 + 0x50);
        if (*(longlong *)(param_1 + 0x110) == 0) {
          dVar3 = 0.0;
        }
        else {
          fVar16 = *(float *)(param_1 + 0x600);
          fVar15 = (float)FUN_14002c5a6(ABS(fVar16),
                                        *(undefined1 *)(*(longlong *)(param_1 + 0x110) + 0x124),0);
          dVar3 = (double)(fVar15 * (float)(-(uint)(0.0 < fVar16) & 0x3f800000 |
                                           ~-(uint)(0.0 < fVar16) &
                                           -(uint)(fVar16 < 0.0) & 0xbf800000));
        }
        *(double *)(param_1 + 0x40) = dVar3;
        *(undefined8 *)(param_1 + 0x48) = local_d8;
        *(longlong *)(param_1 + 0x50) = lStack_d0;
      }
      goto LAB_14065eaf2;
    }
  }
  *(undefined4 *)(param_1 + 0x600) = 0;
LAB_14065eaf2:
  uVar2 = *(undefined4 *)(param_1 + 0x118);
  iVar6 = *(int *)(param_1 + 0x154);
  if ((longlong)iVar6 < 3) {
    plVar13 = (longlong *)(param_1 + (longlong)iVar6 * 0xa0 + 600);
    (**(code **)(*plVar13 + 0x1e8))(plVar13,*(undefined4 *)(param_1 + 0x1c));
    (**(code **)(*plVar13 + 0x1b0))(plVar13,*(undefined1 *)(param_1 + 0x20));
  }
  else if (*(char *)(param_1 + 0x88) == '\x01') {
    local_c8 = *(longlong *)(param_1 + 0x50);
    local_d8 = *(undefined8 *)(param_1 + 0x40);
    lStack_d0 = *(longlong *)(param_1 + 0x48);
    (**(code **)(*(longlong *)(param_1 + (ulonglong)(iVar6 - 3) * 0x98 + 0x438) + 0x1e8))();
  }
  param_1 = param_1 + 0x120;
  FUN_14065f44e(param_1,puVar1,uVar2);
  FUN_14491269a(param_1,param_2);
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_14065f44e(param_1,puVar1);
  return;
}



// FUNCTION 14065f44e FUN_14065f44e body=144 status=ok
// SIG undefined FUN_14065f44e(void)

void FUN_14065f44e(longlong param_1,float *param_2,float param_3)

{
  int iVar1;
  longlong *plVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if ((longlong)iVar1 < 3) {
    if (*(longlong *)(param_2 + 4) == 0) {
      fVar3 = 1.0;
    }
    else {
      fVar3 = *(float *)(*(longlong *)(param_2 + 4) + 0xb0);
    }
    plVar2 = (longlong *)(param_1 + (longlong)iVar1 * 0xa0 + 0x138);
    fVar3 = *param_2 - fVar3 * param_3 * param_2[1];
  }
  else {
    if (*(char *)(param_2 + 0x1c) != '\x01') {
      return;
    }
    plVar2 = (longlong *)(param_1 + (ulonglong)(iVar1 - 3) * 0x98 + 0x318);
    fVar3 = param_2[7] - (float)(-(uint)(0.0 < param_2[6]) & (uint)(param_3 / param_2[6]));
  }
                    /* WARNING: Could not recover jumptable at 0x00014065f497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x100))(plVar2,fVar3);
  return;
}



// FUNCTION 14065f4de FUN_14065f4de body=139 status=ok
// SIG undefined FUN_14065f4de(void)

longlong FUN_14065f4de(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar1 = FUN_1449c239e();
  cVar2 = FUN_1449c239e(param_1,param_3);
  if ((longlong)*(int *)(param_1 + 0x1a8) == 0) {
    lVar3 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(param_1 + 0x1a8) * 0x38;
    lVar4 = *(longlong *)(param_1 + 0x1a0);
    do {
      lVar3 = lVar4;
      if ((*(char *)(lVar3 + 0x30) == cVar1 || *(char *)(lVar3 + 0x30) == '\t') &&
         ((*(char *)(lVar3 + 0x31) == cVar2 || (*(char *)(lVar3 + 0x31) == '\t')))) break;
      lVar4 = lVar3 + 0x38;
      lVar5 = lVar5 + -0x38;
      lVar3 = 0;
    } while (lVar5 != 0);
  }
  lVar4 = param_1 + 0x170;
  if (lVar3 != 0) {
    lVar4 = lVar3;
  }
  return lVar4;
}



// FUNCTION 14065f56a FUN_14065f56a body=284 status=ok
// SIG undefined FUN_14065f56a(void)

byte FUN_14065f56a(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4,
                  undefined4 param_5,float *param_6,undefined8 param_7)

{
  float fVar1;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_2;
  if (param_2 == 0 || DAT_14c950c29 != 1) {
    if (param_2 != 0) goto LAB_14065f5b9;
    local_48 = 0;
  }
  else {
    FUN_1456cec3c(param_2);
LAB_14065f5b9:
    local_48 = FUN_14065f688(param_2,param_3);
  }
  local_60 = param_4;
  if ((param_4 == 0) || ((DAT_14c950c29 & 1) == 0)) {
    if (param_4 == 0) {
      local_58 = 0;
      goto LAB_14065f607;
    }
  }
  else {
    FUN_1456cec3c(param_4);
  }
  local_58 = FUN_14065f688(param_4,param_5);
LAB_14065f607:
  fVar1 = (float)FUN_14065f70e(param_1 + 0x1b8,&local_50,&local_60,param_7);
  *param_6 = fVar1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return -(fVar1 != 3.4028235e+38) & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14065f688 FUN_14065f688 body=134 status=ok
// SIG undefined FUN_14065f688(void)

int FUN_14065f688(longlong *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  (**(code **)(*param_1 + 0x310))();
  (**(code **)(*param_1 + 0x2b0))(param_1);
  iVar1 = (**(code **)(*param_1 + 0x310))(param_1);
  iVar2 = 2;
  if (2 < iVar1) {
    iVar2 = iVar1;
  }
  fVar3 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
  param_2 = param_2 / (fVar3 / ((float)iVar2 + -1.0));
  return (int)ROUND(param_2 + param_2 + 0.5) >> 1;
}



// FUNCTION 14065f70e FUN_14065f70e body=898 status=ok
// SIG undefined FUN_14065f70e(void)

undefined8 FUN_14065f70e(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  DWORD dwTlsIndex;
  DWORD DVar4;
  LPVOID lpTlsValue;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8 [2];
  longlong local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined4 local_d8 [2];
  longlong local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  ulonglong uStack_a0;
  undefined8 *local_98;
  undefined8 local_90;
  longlong local_88;
  char local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar9 = 0x7f7fffff;
  if ((((((*param_2 != 0) && (uVar9 = 0x7f7fffff, *param_3 != 0)) &&
        (uVar9 = 0x7f7fffff, *(int *)(param_1 + 0x4c) != 0)) &&
       ((uVar1 = *(uint *)(param_1 + 0x48), uVar9 = 0x7f7fffff, -1 < (int)uVar1 &&
        (uVar9 = 0x7f7fffff, (int)uVar1 < DAT_14c9647dc)))) &&
      ((lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), uVar9 = 0x7f7fffff,
       lVar6 != 0 &&
       ((uVar9 = 0x7f7fffff, *(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x4c) &&
        (uVar9 = 0x7f7fffff, (*(uint *)(lVar6 + 8) & 0x10200000) == 0)))))) &&
     ((uVar9 = 0x7f7fffff, *(longlong *)(param_1 + 0x60) != 0 &&
      (uVar9 = 0x7f7fffff, 0 < *(int *)(param_1 + 0x20))))) {
    dwTlsIndex = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar4 = 0xffffffff;
      LOCK();
      bVar7 = DAT_14c7585d0 != 0xffffffff;
      DVar2 = dwTlsIndex;
      if (bVar7) {
        DVar4 = DAT_14c7585d0;
        DVar2 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar2;
      UNLOCK();
      if (bVar7) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar4;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_140036a08(&local_98);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    local_98 = (undefined8 *)((longlong)lpTlsValue + 0x10);
    local_90 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
    local_88 = *(longlong *)((longlong)lpTlsValue + 0x20);
    local_80 = '\0';
    local_78 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
    *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_98;
    *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_144a08bfc(param_1 + 8,param_2,param_4);
    FUN_144a08bfc(param_1 + 8,param_3,param_4,&local_b8);
    param_2 = (longlong *)*param_2;
    fVar10 = 0.0;
    fVar11 = 0.0;
    if (param_2 != (longlong *)0x0) {
      fVar8 = (float)(**(code **)(*param_2 + 0x2b0))(param_2);
      fVar11 = 0.0;
      if (0.0 < fVar8) {
        iVar3 = (**(code **)(*param_2 + 0x310))(param_2);
        iVar5 = 2;
        if (2 < iVar3) {
          iVar5 = iVar3;
        }
        fVar11 = (float)(**(code **)(*param_2 + 0x2b0))(param_2);
        fVar11 = ((float)iVar5 + -1.0) / fVar11;
      }
    }
    local_d8[0] = (undefined4)uStack_a0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 1;
    local_108 = 0;
    uStack_100 = 0;
    FUN_14065fa92(local_d8,uStack_a0 & 0xffffffff,fVar11,local_a8);
    param_3 = (longlong *)*param_3;
    if (param_3 != (longlong *)0x0) {
      fVar11 = (float)(**(code **)(*param_3 + 0x2b0))(param_3);
      fVar10 = 0.0;
      if (0.0 < fVar11) {
        iVar3 = (**(code **)(*param_3 + 0x310))(param_3);
        iVar5 = 2;
        if (2 < iVar3) {
          iVar5 = iVar3;
        }
        fVar10 = (float)(**(code **)(*param_3 + 0x2b0))(param_3);
        fVar10 = ((float)iVar5 + -1.0) / fVar10;
      }
    }
    local_f8[0] = (undefined4)uStack_b0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 1;
    local_108 = 0;
    uStack_100 = 0;
    FUN_14065fa92(local_f8,uStack_b0 & 0xffffffff,fVar10,local_b8);
    uVar9 = FUN_1404a801e(local_d8,local_f8);
    if (local_f0 != 0) {
      FUN_1400020a8();
    }
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
    if (local_80 == '\0') {
      local_80 = '\x01';
      *(int *)(local_98 + 4) = *(int *)(local_98 + 4) + -1;
      if (local_88 != local_98[2]) {
        FUN_14004673c();
      }
      *local_98 = local_90;
      local_98[3] = local_78;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14065fa92 FUN_14065fa92 body=1608 status=ok
// SIG undefined FUN_14065fa92(void)

void FUN_14065fa92(uint *param_1,uint param_2,float param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  uint *puVar1;
  double *pdVar2;
  double *pdVar3;
  undefined8 uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  byte bVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  undefined8 *puVar22;
  byte bVar23;
  longlong lVar24;
  longlong lVar25;
  byte bVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  
  *param_1 = param_2;
  bVar23 = (byte)param_1[6];
  bVar26 = (bVar23 & 4) >> 2;
  bVar18 = (bVar23 & 8) >> 3;
  param_2 = ((uint)bVar18 + (uint)bVar18 * 2 + (uint)bVar26 + (uint)bVar26 * 2 + (bVar23 & 1) * 3 +
            (bVar23 & 2) * 2) * param_2;
  puVar1 = param_1 + 2;
  uVar28 = param_1[4];
  param_1[4] = param_2 + uVar28;
  if (param_1[5] - uVar28 < param_2) {
    FUN_144941252(puVar1);
  }
  memset((void *)((longlong)(int)uVar28 * 8 + *(longlong *)(param_1 + 2)),0,
         (longlong)(int)param_2 << 3);
  bVar23 = (byte)param_1[6];
  uVar28 = (uint)bVar23;
  if ((((bVar23 & 1) != 0) && (0 < (int)*param_1)) && (0 < (int)param_1[4])) {
    uVar19 = (ulonglong)(*param_1 * ((uint)bVar23 * 2 & 4));
    if (uVar19 * 8 + *(longlong *)puVar1 != 0) {
      lVar25 = *(longlong *)puVar1 + uVar19 * 8;
      lVar21 = 0;
      lVar24 = 0;
      do {
        puVar22 = (undefined8 *)(param_4 + 0x20 + lVar21 * 4);
        uVar16 = puVar22[1];
        uVar4 = *(undefined8 *)(param_4 + 0x30 + lVar21 * 4);
        puVar20 = (undefined8 *)(lVar25 + lVar21);
        *puVar20 = *puVar22;
        puVar20[1] = uVar16;
        *(undefined8 *)(lVar25 + 0x10 + lVar21) = uVar4;
        lVar24 = lVar24 + 1;
        lVar21 = lVar21 + 0x18;
      } while (lVar24 < (int)*param_1);
      uVar28 = (uint)(byte)param_1[6];
    }
  }
  if ((((uVar28 & 2) != 0) && (0 < (int)*param_1)) &&
     ((0 < (int)param_1[4] && (*(longlong *)puVar1 != 0)))) {
    puVar20 = (undefined8 *)(*(longlong *)puVar1 + 0x10);
    puVar22 = (undefined8 *)(param_4 + 0x10);
    lVar25 = 0;
    do {
      uVar4 = puVar22[-1];
      uVar16 = *puVar22;
      uVar17 = puVar22[1];
      puVar20[-2] = puVar22[-2];
      puVar20[-1] = uVar4;
      *puVar20 = uVar16;
      puVar20[1] = uVar17;
      lVar25 = lVar25 + 1;
      puVar20 = puVar20 + 4;
      puVar22 = puVar22 + 0xc;
    } while (lVar25 < (int)*param_1);
    uVar28 = (uint)(byte)param_1[6];
  }
  if ((uVar28 & 4) != 0) {
    uVar5 = *param_1;
    if ((0 < (int)uVar5) && (0 < (int)param_1[4])) {
      uVar29 = (uVar28 & 1) * 3 + (uint)((byte)uVar28 & 2) * 2;
      if ((ulonglong)(uVar5 * uVar29) * 8 + *(longlong *)puVar1 != 0) {
        dVar6 = (double)param_3;
        lVar25 = *(longlong *)puVar1 + (ulonglong)uVar5 * (ulonglong)uVar29 * 8;
        lVar21 = lVar25 + 0x10;
        lVar24 = 0;
        lVar27 = 0;
        do {
          pdVar2 = (double *)(param_4 + 0x20 + lVar24 * 4);
          dVar30 = *pdVar2;
          dVar31 = pdVar2[1];
          dVar33 = *(double *)(param_4 + 0x30 + lVar24 * 4);
          if (param_5 != 0) {
            dVar34 = *(double *)(param_5 + 0x30 + lVar24 * 4);
            pdVar2 = (double *)(param_5 + 0x20 + lVar24 * 4);
            dVar7 = pdVar2[1];
            *(double *)(lVar25 + lVar24) = (dVar30 - *pdVar2) * dVar6 + *(double *)(lVar25 + lVar24)
            ;
            *(double *)(lVar25 + 8 + lVar24) =
                 (dVar31 - dVar7) * dVar6 + *(double *)(lVar25 + 8 + lVar24);
            *(double *)(lVar21 + lVar24) = (dVar33 - dVar34) * dVar6 + *(double *)(lVar21 + lVar24);
          }
          if (param_6 != 0) {
            pdVar2 = (double *)(param_6 + 0x20 + lVar24 * 4);
            dVar7 = pdVar2[1];
            dVar34 = *(double *)(param_6 + 0x30 + lVar24 * 4);
            dVar32 = (*pdVar2 - dVar30) * dVar6 + *(double *)(lVar25 + lVar24);
            *(double *)(lVar25 + lVar24) = dVar32;
            dVar30 = (dVar7 - dVar31) * dVar6 + *(double *)(lVar25 + 8 + lVar24);
            *(double *)(lVar25 + 8 + lVar24) = dVar30;
            dVar31 = (dVar34 - dVar33) * dVar6 + *(double *)(lVar21 + lVar24);
            *(double *)(lVar21 + lVar24) = dVar31;
            if (param_5 != 0) {
              *(double *)(lVar25 + lVar24) = dVar32 * 0.5;
              *(double *)(lVar25 + 8 + lVar24) = dVar30 * 0.5;
              *(double *)(lVar21 + lVar24) = dVar31 * 0.5;
            }
          }
          lVar27 = lVar27 + 1;
          lVar24 = lVar24 + 0x18;
        } while (lVar27 < (int)*param_1);
        uVar28 = (uint)(byte)param_1[6];
      }
    }
  }
  bVar23 = (byte)uVar28;
  if ((uVar28 & 8) != 0) {
    uVar5 = *param_1;
    if ((0 < (int)uVar5) && (0 < (int)param_1[4])) {
      iVar14 = (uVar28 & 1) * 3;
      bVar18 = (bVar23 & 4) >> 2;
      uVar28 = (uint)bVar18 + (uint)bVar18 * 2;
      if ((ulonglong)((uVar28 + iVar14 + (uint)(bVar23 & 2) * 2) * uVar5) * 8 + *(longlong *)puVar1
          != 0) {
        dVar6 = (double)param_3;
        lVar25 = *(longlong *)puVar1 +
                 ((ulonglong)uVar28 + (ulonglong)(iVar14 + (bVar23 >> 1 & 1) * 4)) *
                 (ulonglong)uVar5 * 8;
        lVar21 = lVar25 + 0x10;
        lVar24 = 0;
        lVar27 = 0;
        do {
          pdVar2 = (double *)(param_4 + lVar24 * 4);
          dVar30 = *pdVar2;
          dVar31 = pdVar2[1];
          pdVar2 = (double *)(param_4 + 0x10 + lVar24 * 4);
          dVar33 = *pdVar2;
          dVar34 = pdVar2[1];
          if (param_5 != 0) {
            pdVar2 = (double *)(param_5 + lVar24 * 4);
            dVar15 = *pdVar2;
            dVar13 = pdVar2[1];
            pdVar2 = (double *)(param_5 + 0x10 + lVar24 * 4);
            dVar7 = *pdVar2;
            dVar32 = pdVar2[1];
            dVar10 = dVar30 - dVar15;
            dVar11 = dVar31 - dVar13;
            dVar8 = dVar33 - dVar7;
            dVar9 = dVar34 - dVar32;
            dVar7 = dVar7 * -1.0;
            dVar32 = dVar32 * 1.0;
            dVar12 = (dVar11 * dVar7 + (dVar10 * dVar32 * 1.0 - dVar15 * dVar9)) -
                     dVar8 * dVar13 * -1.0;
            dVar13 = (dVar11 * dVar32 + (dVar10 * dVar7 * -1.0 - dVar13 * dVar9)) -
                     dVar8 * dVar15 * 1.0;
            dVar7 = dVar32 * dVar8 +
                    (dVar9 * dVar7 - dVar10 * *(double *)(param_5 + 8 + lVar24 * 4)) +
                    dVar15 * dVar11;
            *(double *)(lVar25 + lVar24) = (dVar12 + dVar12) * dVar6 + *(double *)(lVar25 + lVar24);
            *(double *)(lVar25 + 8 + lVar24) =
                 (dVar13 + dVar13) * dVar6 + *(double *)(lVar25 + 8 + lVar24);
            *(double *)(lVar21 + lVar24) = (dVar7 + dVar7) * dVar6 + *(double *)(lVar21 + lVar24);
          }
          if (param_6 != 0) {
            pdVar2 = (double *)(param_6 + lVar24 * 4);
            pdVar3 = (double *)(param_6 + 0x10 + lVar24 * 4);
            dVar7 = *pdVar2 - dVar30;
            dVar32 = pdVar2[1] - dVar31;
            dVar8 = *pdVar3 - dVar33;
            dVar10 = pdVar3[1] - dVar34;
            dVar33 = dVar33 * -1.0;
            dVar34 = dVar34 * 1.0;
            dVar9 = (dVar33 * dVar32 + (dVar7 * dVar34 * 1.0 - dVar30 * dVar10)) -
                    dVar8 * dVar31 * -1.0;
            dVar11 = (dVar34 * dVar32 + (dVar7 * dVar33 * -1.0 - dVar31 * dVar10)) -
                     dVar8 * dVar30 * 1.0;
            dVar30 = dVar32 * dVar30 + (dVar10 * dVar33 - dVar31 * dVar7) + dVar34 * dVar8;
            dVar31 = (dVar9 + dVar9) * dVar6 + *(double *)(lVar25 + lVar24);
            *(double *)(lVar25 + lVar24) = dVar31;
            dVar33 = (dVar11 + dVar11) * dVar6 + *(double *)(lVar25 + 8 + lVar24);
            *(double *)(lVar25 + 8 + lVar24) = dVar33;
            dVar30 = (dVar30 + dVar30) * dVar6 + *(double *)(lVar21 + lVar24);
            *(double *)(lVar21 + lVar24) = dVar30;
            if (param_5 != 0) {
              *(double *)(lVar25 + lVar24) = dVar31 * 0.5;
              *(double *)(lVar25 + 8 + lVar24) = dVar33 * 0.5;
              *(double *)(lVar21 + lVar24) = dVar30 * 0.5;
            }
          }
          lVar27 = lVar27 + 1;
          lVar24 = lVar24 + 0x18;
        } while (lVar27 < (int)*param_1);
      }
    }
  }
  return;
}



// FUNCTION 1406600da FUN_1406600da body=411 status=ok
// SIG undefined FUN_1406600da(void)

void FUN_1406600da(undefined8 *param_1,uint param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  void *_Src;
  DWORD DVar3;
  DWORD dwTlsIndex;
  DWORD DVar4;
  LPVOID lpTlsValue;
  void *_Dst;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar2) {
      uVar5 = uVar2;
    }
  }
  else {
    uVar5 = uVar2 + (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + 0x10;
  }
  uVar6 = 0x7fffffff;
  if ((int)uVar2 <= (int)uVar5) {
    uVar6 = uVar5;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar6;
  if (uVar6 != 0) {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(uVar6,0x60);
    }
    _Src = (void *)*param_1;
    dwTlsIndex = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar4 = 0xffffffff;
      LOCK();
      bVar8 = DAT_14c7585d0 != 0xffffffff;
      DVar3 = dwTlsIndex;
      if (bVar8) {
        DVar4 = DAT_14c7585d0;
        DVar3 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar3;
      UNLOCK();
      if (bVar8) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar4;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_140036a08(&local_49);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    puVar1 = (ulonglong *)((longlong)lpTlsValue + 0x10);
    uVar2 = uVar6 * 0x60;
    _Dst = (void *)(*(longlong *)((longlong)lpTlsValue + 0x10) + 0xfU & 0xfffffffffffffff0);
    uVar7 = (longlong)_Dst + (longlong)(int)uVar2;
    if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar7) {
      FUN_140023dd8(puVar1,uVar2 | 0x10);
      _Dst = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      uVar7 = (longlong)(int)uVar2 + (longlong)_Dst;
    }
    *puVar1 = uVar7;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if ((int)uVar6 < (int)param_2) {
        param_2 = uVar6;
      }
      memcpy(_Dst,_Src,(longlong)(int)param_2 * 0x60);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140660284 FUN_140660284 body=635 status=ok
// SIG undefined FUN_140660284(void)

undefined8 * FUN_140660284(int param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  DWORD DVar8;
  DWORD DVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  bool bVar14;
  
  uVar5 = DAT_14c9c0d38;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar10 = (uint *)*puVar1;
  if (puVar10 != (uint *)0x0) goto LAB_1406602d1;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar10 = (uint *)*puVar1;
LAB_1406602d1:
    puVar13 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar11 = puVar10[0x12];
    if (puVar13 + 0x13 <= puVar10 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar2 = *puVar10;
      *puVar10 = *puVar10 + uVar11 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar11) != 0xffffffff) break;
      puVar10 = (uint *)*puVar1;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar1 = puVar10;
      puVar13 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
      uVar11 = 0;
      if (puVar13 + 0x13 <= puVar10 + 0x4000) {
        uVar11 = 1;
        goto LAB_14066034d;
      }
    }
  }
  uVar11 = uVar11 + 1;
LAB_14066034d:
  *(undefined8 **)(puVar10 + 0x10) = puVar13 + 0x14;
  puVar10[0x12] = uVar11;
  *(int *)(puVar13 + -1) = ((int)puVar13 + -8) - (int)puVar10;
  *(undefined4 *)((longlong)puVar13 + -4) = 0x98;
  *(undefined4 *)(puVar13 + 1) = (&DAT_14ca11f54)[(ulonglong)(2 < param_1) * 0x3a];
  *(undefined2 *)(puVar13 + 2) = 0xd0d;
  puVar13[3] = param_2;
  *(int *)(puVar13 + 4) = param_1;
  puVar13[5] = param_3;
  puVar13[6] = param_4;
  *(undefined1 *)(puVar13 + 7) = 0x3a;
  *puVar13 = &PTR_FUN_14a1f0c90;
  puVar13[8] = 0;
  puVar13[9] = uVar5;
  *(undefined4 *)(puVar13 + 10) = 0x11;
  uVar12 = 0;
  *(undefined4 *)(puVar13 + 0x10) = 0;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  *(undefined4 *)(puVar13 + 0xf) = 0;
  *(undefined1 *)((longlong)puVar13 + 0x84) = 1;
  lVar6 = DAT_14ca1c600;
  uVar3 = *(ushort *)(&DAT_14ca85070 + (longlong)param_1 * 2);
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (iVar4 != 0x40000002) {
    if ((DAT_14c86a9f8 == '\x01') && (iVar4 != 2)) {
      if (iVar4 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        uVar12 = (ulonglong)(DVar8 != DVar9);
      }
      else {
        uVar12 = 1;
      }
    }
    else {
      uVar12 = 0;
    }
  }
  uVar7 = 0;
  bVar14 = false;
  if (0 < *(int *)(lVar6 + uVar12 * 4)) {
    if (((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar3 * 0xf) & 2) == 0) || (DAT_14ca84f5c != '\x01')
       ) {
      bVar14 = false;
    }
    else {
      bVar14 = *(int *)(DAT_14ca1c618 + 4) != 0;
    }
  }
  *(bool *)((longlong)puVar13 + 0x85) = bVar14;
  *(undefined1 *)((longlong)puVar13 + 0x86) = 1;
  if (param_2 != 0) {
    uVar7 = *(undefined4 *)(param_2 + 0x35e8);
  }
  *(undefined4 *)(puVar13 + 0x11) = uVar7;
  *(undefined1 *)((longlong)puVar13 + 0x8c) = 0;
  *(undefined4 *)(puVar13 + 0x12) = 0;
  if ((param_3 != 0) && (*(char *)(puVar13[5] + 0x23d9) == '\x01')) {
    *(undefined4 *)(puVar13 + 0x12) = *(undefined4 *)(puVar13[5] + 0x125b4);
  }
  return puVar13;
}



// FUNCTION 140660500 FUN_140660500 body=78 status=ok
// SIG undefined FUN_140660500(void)

float FUN_140660500(longlong *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x108))();
  fVar2 = (float)(**(code **)(*param_1 + 0x1b0))(param_1);
  if (fVar2 < 0.0) {
    fVar1 = fVar1 - *(float *)((longlong)param_1 + 0x2c) * fVar1;
  }
  else {
    fVar1 = fVar1 * *(float *)((longlong)param_1 + 0x2c);
  }
  return fVar1;
}



// FUNCTION 14066054e FUN_14066054e body=125 status=ok
// SIG undefined FUN_14066054e(void)

undefined8 FUN_14066054e(longlong *param_1)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  
  uVar1 = *(uint *)(param_1 + 0xb);
  if ((ulonglong)uVar1 != 0) {
    piVar4 = (int *)param_1[10];
    if (1 < (int)uVar1) {
      lVar3 = (ulonglong)uVar1 - 1;
      piVar5 = piVar4;
      piVar2 = piVar4;
      do {
        piVar4 = piVar2 + 0x18;
        if ((float)piVar2[0x1c] < (float)piVar5[4] || (float)piVar2[0x1c] == (float)piVar5[4]) {
          piVar4 = piVar5;
        }
        lVar3 = lVar3 + -1;
        piVar5 = piVar4;
        piVar2 = piVar2 + 0x18;
      } while (lVar3 != 0);
    }
    if ((piVar4 != (int *)0x0) && (lVar3 = (**(code **)(*param_1 + 0x198))(), lVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001406605b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(**(longlong **)(*(longlong *)(lVar3 + 0x110) + (longlong)*piVar4 * 0x28)
                          + 0x2b0))();
      return uVar6;
    }
  }
  return 0;
}



// FUNCTION 1406605cc FUN_1406605cc body=428 status=ok
// SIG undefined FUN_1406605cc(void)

undefined8 FUN_1406605cc(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14cb907b8 == (longlong *)0x0) {
    local_70 = &local_20;
    local_20 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_14081d0ea;
    local_78 = &LAB_1489c8acb;
    local_80 = &LAB_146027b0e;
    local_88 = L"Engine";
    local_90 = 0;
    local_98 = 0x10000006;
    local_a0 = 8;
    local_a8 = 0x128;
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
  }
  plVar1 = DAT_14cb907b8;
  lVar2 = DAT_14cb907b8[0x22];
  if (lVar2 == 0) {
    (**(code **)(*DAT_14cb907b8 + 1000))(DAT_14cb907b8);
    lVar2 = plVar1[0x22];
  }
  if (*(char *)(lVar2 + 0x45) == '\x01') {
    if (param_2 == 2) {
      uVar3 = FUN_14001cc68(0x18,0x10);
      puVar4 = local_50;
      FUN_1406607e0(puVar4);
    }
    else if (param_2 == 1) {
      uVar3 = FUN_14001cc68(0x18,0x10);
      puVar4 = local_40;
      FUN_140e9f006(puVar4);
    }
    else {
      if (param_2 != 0) goto LAB_140660772;
      uVar3 = FUN_14001cc68(0x18,0x10);
      puVar4 = local_30;
      FUN_140e9ef24(puVar4);
    }
    FUN_14066077a(uVar3,puVar4);
  }
  else {
LAB_140660772:
    uVar3 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14066077a FUN_14066077a body=102 status=ok
// SIG undefined FUN_14066077a(void)

IBreakIterator * FUN_14066077a(IBreakIterator *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  cohtml::i18n::IBreakIterator::IBreakIterator(param_1);
  *(undefined ***)param_1 = &PTR_FUN_14b452ac0;
  *(undefined8 *)(param_1 + 8) = *param_2;
  lVar3 = param_2[1];
  *(longlong *)(param_1 + 0x10) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    plVar4 = (longlong *)param_2[1];
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
  }
  return param_1;
}



// FUNCTION 1406607e0 FUN_1406607e0 body=120 status=ok
// SIG undefined FUN_1406607e0(void)

undefined8 * FUN_1406607e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = &PTR_FUN_149e17a80;
  FUN_140660858(DAT_14c8443b8,puVar1 + 1);
  *(undefined4 *)(puVar1 + 3) = 0;
  *param_1 = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149e18ee0;
  puVar2[2] = puVar1;
  param_1[1] = puVar2;
  return param_1;
}



// FUNCTION 140660858 FUN_140660858 body=596 status=ok
// SIG undefined FUN_140660858(void)

longlong * FUN_140660858(LPCRITICAL_SECTION param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection(param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844be8) {
    FUN_144b3d300(&DAT_14c844be8);
    if (DAT_14c844be8 == -1) {
      FUN_1456bade4(&DAT_14c844b48);
      DAT_14c844be0 = &DAT_14c844b48;
      atexit(FUN_142761918);
      _Init_thread_footer(&DAT_14c844be8);
    }
  }
  puVar3 = *(undefined8 **)(DAT_14c844be0 + 0x58);
  plVar4 = *(longlong **)(DAT_14c844be0 + 0x60);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  FUN_140660fd6(*puVar3,&local_48,2);
  plVar5 = (longlong *)(**(code **)(*local_48 + 0x18))();
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149e189b0;
  plVar6[2] = (longlong)plVar5;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if (plVar4 != (longlong *)0x0) {
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_48 = plVar5;
  local_40 = plVar6;
  FUN_140660aae(param_1 + 1,local_4c,&local_48);
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140660aae FUN_140660aae body=1320 status=ok
// SIG undefined FUN_140660aae(void)

int * FUN_140660aae(longlong *param_1,int *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar21 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar21 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar21) {
      FUN_14482b872(param_1,iVar21);
    }
    iVar19 = (int)param_1[5];
    if (iVar19 == 0) {
      iVar13 = -1;
    }
    else {
      iVar13 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar13 = iVar19 + -1;
      }
      iVar13 = iVar13 >> 5;
    }
    plVar17 = param_1 + 2;
    iVar14 = iVar19 + 1;
    iVar20 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    if (iVar20 >> 5 == iVar13) {
      *(int *)(param_1 + 5) = iVar14;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar19) {
        if (iVar19 + 0x20U < 0xa0) {
          iVar14 = 0x80;
          iVar13 = iVar19;
        }
        else {
          uVar8 = iVar19 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar9 = 4;
            if (4 < uVar8) {
              uVar9 = uVar8;
            }
          }
          else {
            uVar9 = (uVar8 * 3 >> 3) + uVar8 + 0x10;
          }
          uVar16 = FUN_144a3809e(uVar9 << 2,0);
          iVar13 = (int)(uVar16 >> 2);
          iVar14 = -0x20;
          if ((int)uVar8 <= iVar13) {
            iVar14 = iVar13 << 5;
          }
          iVar13 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar14;
        FUN_1446efbd8(plVar17,iVar13);
        iVar14 = (int)param_1[5] + 1;
      }
      iVar13 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar13 = iVar14;
      }
      *(int *)(param_1 + 5) = iVar14;
      if (iVar14 % 0x20 != 0) {
        plVar18 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar18 = plVar17;
        }
        bVar12 = -(char)(iVar14 % 0x20);
        *(uint *)((longlong)plVar18 + (longlong)(iVar13 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar18 + (longlong)(iVar13 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    lVar10 = (longlong)iVar21;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar17 = (longlong *)param_1[4];
    }
    bVar12 = (byte)iVar19 & 0x1f;
    puVar3 = (uint *)((longlong)plVar17 + (longlong)(iVar20 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    iVar21 = (int)param_1[6];
    lVar10 = (longlong)iVar21;
    iVar19 = *(int *)(*param_1 + 4 + lVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar19;
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar19 * 0x18) = 0xffffffff;
    }
  }
  iVar19 = 1;
  plVar17 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar17 = (longlong *)param_1[4];
  }
  iVar13 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar13 = iVar21;
  }
  puVar3 = (uint *)((longlong)plVar17 + (longlong)(iVar13 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar21 & 0x1f);
  lVar5 = *param_1;
  *(undefined8 *)(lVar5 + lVar10 * 0x18) = *param_3;
  *(undefined8 *)(lVar5 + 8 + lVar10 * 0x18) = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined4 *)(lVar5 + 0x10 + lVar10 * 0x18) = 0xffffffff;
  uVar16 = *(ulonglong *)(lVar5 + lVar10 * 0x18);
  plVar17 = *(longlong **)(lVar5 + 8 + lVar10 * 0x18);
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    LOCK();
    plVar18 = plVar17 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar2 = (int *)((longlong)plVar17 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  plVar17 = (longlong *)(lVar5 + lVar10 * 0x18);
  uVar8 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  iVar13 = (int)param_1[1];
  iVar14 = *(int *)((longlong)param_1 + 0x34);
  if (iVar13 - iVar14 == 1) {
    uVar9 = 1;
  }
  else {
    lVar10 = *plVar17;
    plVar18 = (longlong *)plVar17[1];
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
      iVar13 = (int)param_1[1];
      iVar14 = *(int *)((longlong)param_1 + 0x34);
    }
    if (iVar13 != iVar14) {
      plVar11 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar11 = (longlong *)param_1[8];
      }
      iVar13 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
      while (iVar13 != -1) {
        if (plVar18 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
          UNLOCK();
        }
        lVar15 = (longlong)iVar13;
        lVar5 = *(longlong *)(*param_1 + lVar15 * 0x18);
        plVar11 = *(longlong **)(*param_1 + 8 + lVar15 * 0x18);
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
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
        if (plVar18 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar18 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar18)(plVar18);
            LOCK();
            piVar2 = (int *)((longlong)plVar18 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
            }
          }
        }
        if (lVar5 == lVar10) goto LAB_140660c44;
        iVar13 = *(int *)(*param_1 + 0x10 + lVar15 * 0x18);
      }
    }
    iVar13 = -1;
LAB_140660c44:
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar18 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
    if (iVar13 != -1) {
      puVar4 = (undefined4 *)(*param_1 + (longlong)iVar13 * 0x18);
      plVar18 = *(longlong **)(puVar4 + 2);
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar18 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar2 = (int *)((longlong)plVar18 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
      }
      uVar6 = *(undefined4 *)((longlong)plVar17 + 4);
      lVar10 = plVar17[1];
      uVar7 = *(undefined4 *)((longlong)plVar17 + 0xc);
      *puVar4 = (int)*plVar17;
      puVar4[1] = uVar6;
      puVar4[2] = (int)lVar10;
      puVar4[3] = uVar7;
      FUN_140316dc2(param_1,iVar21);
      goto LAB_140660cd8;
    }
    uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar9 < 4) {
      iVar19 = 1;
    }
    else {
      uVar16 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar19 = 1 << ((byte)lVar10 & 0x1f);
    }
  }
  iVar13 = iVar21;
  if (((int)uVar9 < 1) || (iVar19 <= (int)param_1[9])) {
    uVar8 = (int)param_1[9] - 1U & uVar8;
    *(uint *)((longlong)plVar17 + 0x14) = uVar8;
    plVar18 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar18 = param_1 + 7;
    }
    *(undefined4 *)(plVar17 + 2) =
         *(undefined4 *)
          ((longlong)plVar18 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar17 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar17 = param_1 + 7;
    }
    *(int *)((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         iVar21;
  }
  else {
    *(int *)(param_1 + 9) = iVar19;
    FUN_14066163e(param_1);
  }
LAB_140660cd8:
  *param_2 = iVar13;
  return param_2;
}



// FUNCTION 140660fd6 FUN_140660fd6 body=1587 status=ok
// SIG undefined FUN_140660fd6(void)

longlong * FUN_140660fd6(longlong param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == 2) {
    lVar4 = *(longlong *)(param_1 + 0x108);
    if (lVar4 != 0) {
      plVar6 = *(longlong **)(param_1 + 0x110);
      goto LAB_140661018;
    }
    local_4c = 0;
    lVar4 = FUN_140661630(param_1 + 8);
    plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_149e189b0;
    plVar5[2] = lVar4;
    plVar6 = plVar5;
    if (lVar4 == 0) {
      FUN_14275eb3a();
      lVar4 = FUN_140661630(&DAT_14c844a10,&local_4c);
      plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar6[1] = (longlong)&DAT_100000001;
      *plVar6 = (longlong)&PTR_FUN_149e189b0;
      plVar6[2] = lVar4;
      if (plVar6 != plVar5) {
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar5 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
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
        goto LAB_140661283;
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar6 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
        goto LAB_14066128f;
      }
LAB_140661600:
      bVar3 = true;
      plVar5 = (longlong *)0x0;
    }
    else {
LAB_140661283:
      plVar5 = plVar6;
      if (plVar5 == (longlong *)0x0) goto LAB_140661600;
LAB_14066128f:
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      bVar3 = false;
    }
    *(longlong *)(param_1 + 0x108) = lVar4;
    plVar6 = *(longlong **)(param_1 + 0x110);
    plVar7 = plVar5;
    if (plVar5 != plVar6) {
      *(longlong **)(param_1 + 0x110) = plVar5;
      if (plVar6 == (longlong *)0x0) {
LAB_1406612c6:
        plVar7 = (longlong *)0x0;
        plVar6 = plVar5;
      }
      else {
        LOCK();
        plVar7 = plVar6 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
        lVar4 = *(longlong *)(param_1 + 0x108);
        plVar6 = *(longlong **)(param_1 + 0x110);
LAB_140661551:
        plVar7 = (longlong *)0x0;
      }
    }
LAB_1406612cc:
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    if (!bVar3) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    *param_2 = lVar4;
    param_2[1] = (longlong)plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_14066103d;
  }
  else {
    if (param_3 != 0) {
      lVar4 = *(longlong *)(param_1 + 0xf8);
      if (lVar4 != 0) {
        plVar6 = *(longlong **)(param_1 + 0x100);
        goto LAB_140661018;
      }
      local_4c = 0;
      lVar4 = FUN_140661620(param_1 + 8);
      plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar5[1] = (longlong)&DAT_100000001;
      *plVar5 = (longlong)&PTR_FUN_149e189b0;
      plVar5[2] = lVar4;
      plVar6 = plVar5;
      if (lVar4 == 0) {
        FUN_14275eb3a();
        lVar4 = FUN_140661620(&DAT_14c844a10,&local_4c);
        plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar6[1] = (longlong)&DAT_100000001;
        *plVar6 = (longlong)&PTR_FUN_149e189b0;
        plVar6[2] = lVar4;
        if (plVar6 != plVar5) {
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar5 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
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
          goto LAB_1406611b9;
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar6 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
          goto LAB_1406611c5;
        }
LAB_1406615c5:
        bVar3 = true;
        plVar5 = (longlong *)0x0;
      }
      else {
LAB_1406611b9:
        plVar5 = plVar6;
        if (plVar5 == (longlong *)0x0) goto LAB_1406615c5;
LAB_1406611c5:
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
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
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        bVar3 = false;
      }
      *(longlong *)(param_1 + 0xf8) = lVar4;
      plVar6 = *(longlong **)(param_1 + 0x100);
      plVar7 = plVar5;
      if (plVar5 != plVar6) {
        *(longlong **)(param_1 + 0x100) = plVar5;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar6 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
          lVar4 = *(longlong *)(param_1 + 0xf8);
          plVar6 = *(longlong **)(param_1 + 0x100);
          goto LAB_140661551;
        }
        goto LAB_1406612c6;
      }
      goto LAB_1406612cc;
    }
    lVar4 = *(longlong *)(param_1 + 0xe8);
    if (lVar4 == 0) {
      local_4c = 0;
      lVar4 = FUN_140661610(param_1 + 8);
      plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar5[1] = (longlong)&DAT_100000001;
      *plVar5 = (longlong)&PTR_FUN_149e189b0;
      plVar5[2] = lVar4;
      plVar6 = plVar5;
      if (lVar4 == 0) {
        FUN_14275eb3a();
        lVar4 = FUN_140661610(&DAT_14c844a10,&local_4c);
        plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar6[1] = (longlong)&DAT_100000001;
        *plVar6 = (longlong)&PTR_FUN_149e189b0;
        plVar6[2] = lVar4;
        if (plVar6 != plVar5) {
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar5 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
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
          goto LAB_1406610ef;
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar6 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
          goto LAB_1406610fb;
        }
LAB_14066158a:
        bVar3 = true;
        plVar5 = (longlong *)0x0;
      }
      else {
LAB_1406610ef:
        plVar5 = plVar6;
        if (plVar5 == (longlong *)0x0) goto LAB_14066158a;
LAB_1406610fb:
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
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
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        bVar3 = false;
      }
      *(longlong *)(param_1 + 0xe8) = lVar4;
      plVar6 = *(longlong **)(param_1 + 0xf0);
      plVar7 = plVar5;
      if (plVar5 == plVar6) goto LAB_1406612cc;
      *(longlong **)(param_1 + 0xf0) = plVar5;
      if (plVar6 == (longlong *)0x0) goto LAB_1406612c6;
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      lVar4 = *(longlong *)(param_1 + 0xe8);
      plVar6 = *(longlong **)(param_1 + 0xf0);
      goto LAB_140661551;
    }
    plVar6 = *(longlong **)(param_1 + 0xf0);
LAB_140661018:
    if (plVar6 == (longlong *)0x0) {
      *param_2 = lVar4;
      param_2[1] = 0;
      goto LAB_14066103d;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *param_2 = lVar4;
    param_2[1] = (longlong)plVar6;
  }
  LOCK();
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  UNLOCK();
  LOCK();
  plVar5 = plVar6 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_14066103d:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140661610 FUN_140661610 body=10 status=ok
// SIG undefined FUN_140661610(void)

void FUN_140661610(undefined8 param_1,undefined8 param_2)

{
  FUN_1424ba300(param_1,0,param_2);
  return;
}



// FUNCTION 140661620 FUN_140661620 body=13 status=ok
// SIG undefined FUN_140661620(void)

void FUN_140661620(undefined8 param_1,undefined8 param_2)

{
  FUN_1424ba300(param_1,1,param_2);
  return;
}



// FUNCTION 140661630 FUN_140661630 body=13 status=ok
// SIG undefined FUN_140661630(void)

void FUN_140661630(undefined8 param_1,undefined8 param_2)

{
  FUN_1424ba300(param_1,2,param_2);
  return;
}



// FUNCTION 14066163e FUN_14066163e body=699 status=ok
// SIG undefined FUN_14066163e(void)

void FUN_14066163e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_a8 [36];
  int local_84;
  longlong *local_80;
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 != 0) {
    plVar13 = param_1 + 7;
    FUN_144a1cbf0(plVar13,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar5 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar13;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar14 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_80 = plVar13;
    if ((int)param_1[5] == 0) {
      uVar15 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar10 = local_68 & 0xffffffff;
      uVar15 = local_68 >> 0x20;
    }
    plVar13 = local_80;
    uVar14 = (uint)local_58;
    iVar11 = local_58._4_4_;
    iVar16 = local_50;
    plVar7 = local_60;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_78 = plVar7;
        lVar12 = *param_1;
        lVar6 = (longlong)iVar11;
        uVar4 = *(ulonglong *)(lVar12 + lVar6 * 0x18);
        plVar7 = *(longlong **)(lVar12 + 8 + lVar6 * 0x18);
        local_84 = iVar16;
        local_70 = uVar10;
        if (plVar7 != (longlong *)0x0) {
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
            plVar13 = local_80;
            if (*piVar2 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
              plVar13 = local_80;
            }
          }
        }
        lVar12 = lVar12 + lVar6 * 0x18;
        uVar5 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar16 = (int)uVar10;
        *(int *)(lVar12 + 0x14) = iVar16;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar13;
        }
        *(undefined4 *)(lVar12 + 0x10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar13;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar16 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar11;
        uVar14 = uVar14 & ~(uint)uVar15;
        plVar7 = (longlong *)local_78[2];
        if ((longlong *)local_78[2] == (longlong *)0x0) {
          plVar7 = local_78;
        }
        iVar3 = (int)local_78[3];
        iVar11 = (int)local_70;
        lVar12 = (longlong)iVar11;
        uVar5 = *(uint *)((longlong)plVar7 + lVar12 * 4) & uVar14;
        uVar10 = local_70;
        iVar16 = local_84;
        if (uVar5 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar9 = iVar8;
          if (iVar8 < iVar11) {
            iVar9 = iVar11;
          }
          if (iVar8 <= iVar11) break;
          lVar6 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar5 = *(uint *)((longlong)plVar7 + lVar6 * 4 + lVar12 * 4 + 4);
            if (uVar5 != 0) break;
            lVar6 = lVar6 + 1;
            if (iVar9 - lVar12 == lVar6) goto LAB_1406618bc;
          }
          uVar14 = 0xffffffff;
          uVar10 = (ulonglong)(iVar11 + (int)lVar6 + 1);
        }
        uVar15 = (ulonglong)(-uVar5 & uVar5);
        uVar4 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar11 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        plVar7 = local_78;
      } while (iVar11 < iVar3);
    }
  }
LAB_1406618bc:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406618fa FUN_1406618fa body=909 status=ok
// SIG undefined FUN_1406618fa(void)

void FUN_1406618fa(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong lVar5;
  size_t _Size;
  void *_Src;
  undefined1 auStack_118 [32];
  int local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [80];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined1 local_72;
  undefined8 local_71;
  undefined8 uStack_69;
  undefined8 local_61;
  undefined8 uStack_59;
  undefined8 local_51;
  undefined5 uStack_49;
  undefined3 uStack_44;
  undefined5 uStack_41;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = *(int *)(param_1 + 0x208);
  lVar5 = (longlong)local_f8;
  local_e0 = 0;
  local_e8 = 1;
  local_f0 = CONCAT31(local_f0._1_3_,0x1c);
  FUN_140661c88(param_1 + 0x210,param_2,L"SliceTriangleToVertexIdsBuffer",4);
  uVar3 = *(undefined8 *)(param_1 + 0x210);
  cVar1 = *(char *)(param_2 + 0x69);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_f8 = (int)(lVar5 << 2);
  local_f0 = 1;
  pvVar4 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar3,0);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,0);
  }
  _Src = (void *)(param_1 + 0x180);
  if (*(void **)(param_1 + 0x200) != (void *)0x0) {
    _Src = *(void **)(param_1 + 0x200);
  }
  memcpy(pvVar4,_Src,lVar5 << 2);
  uVar3 = *(undefined8 *)(param_1 + 0x210);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar3);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar3);
  }
  iVar2 = *(int *)(param_1 + 0x230);
  local_f8 = iVar2 * 5;
  local_e0 = 0;
  local_e8 = 1;
  local_f0 = CONCAT31(local_f0._1_3_,0xd);
  FUN_140661c88(param_1 + 0x238,param_2,L"NiagaraShapeVertexDataBuffer",4);
  _Size = (longlong)iVar2 * 0x14;
  uVar3 = *(undefined8 *)(param_1 + 0x238);
  cVar1 = *(char *)(param_2 + 0x69);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_f8 = (int)_Size;
  local_f0 = 1;
  pvVar4 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar3,0);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,0);
  }
  memcpy(pvVar4,*(void **)(param_1 + 0x228),_Size);
  uVar3 = *(undefined8 *)(param_1 + 0x238);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar3);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar3);
  }
  if (DAT_14ca96da8 != '\0') {
    local_88 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    local_72 = 1;
    local_71 = 0;
    uStack_69 = 0;
    local_61 = 0;
    uStack_59 = 0;
    local_51 = 0;
    uStack_49 = 0;
    uStack_44 = 0;
    uStack_41 = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb42c58) {
      FUN_144b3d300(&DAT_14cb42c58);
      if (DAT_14cb42c58 == -1) {
        FUN_1446ddc76(&DAT_14cb42c50,"FNiagaraRendererRibbons",1);
        _Init_thread_footer(&DAT_14cb42c58);
      }
    }
    DAT_14cb42c5c = DAT_14cb42c5c + 1;
    FUN_1474121aa((longlong)&local_51 + 1,DAT_14cb42c50);
    uStack_7c = 0;
    uStack_7a = 0;
    uStack_78 = 0;
    uStack_74 = 1;
    FUN_147377468(local_d8,&local_88);
    FUN_141793e86(param_1 + 0x80,local_d8);
    FUN_14005bca4(local_d8);
    FUN_14742848e(param_1 + 0x40,param_2);
    FUN_14005bca4(&local_88);
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140661c88 FUN_140661c88 body=1045 status=ok
// SIG undefined FUN_140661c88(void)

void FUN_140661c88(longlong *param_1,longlong param_2,undefined8 param_3,int param_4,int param_5,
                  byte param_6,uint param_7,undefined8 param_8)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_c8 [32];
  ulonglong *local_a8;
  undefined8 *local_a0;
  longlong local_90;
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar7 = param_4 * param_5;
  *(uint *)(param_1 + 2) = uVar7;
  local_78 = 0;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_4c = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_70 = param_8;
  local_88 = (ulonglong)uVar7;
  uStack_80 = CONCAT44(uStack_80._4_4_,param_7) | 0x4100;
  local_48 = param_3;
  if ((param_7 & 0x100000) == 0 && uVar7 == 0) {
    FUN_14570b4be(param_2,&local_78,param_7 | 0x4100,0);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_a0 = &local_78;
    local_a8 = (ulonglong *)CONCAT44(local_a8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_88);
    *(undefined4 *)(local_90 + 0x18) = 0x70;
    FUN_14002049c(param_2,0);
  }
  else {
    local_a0 = &local_78;
    local_a8 = (ulonglong *)CONCAT44(local_a8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_88);
    *(undefined4 *)(local_90 + 0x18) = 0x70;
  }
  lVar8 = local_90;
  if (&local_90 == param_1) {
LAB_140661e4d:
    lVar8 = local_90;
    if (local_90 != 0) {
      LOCK();
      puVar1 = (uint *)(local_90 + 8);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar7 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_90 + 8);
        LOCK();
        uVar7 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar7 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_90 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar8;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar9) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar9 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar9) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
    lVar8 = *param_1;
  }
  else {
    lVar3 = *param_1;
    *param_1 = local_90;
    local_90 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar7 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar7 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar7 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar3 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar3;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar9) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar9 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar9) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
      goto LAB_140661e4d;
    }
  }
  if ((lVar8 == 0) || ((*(byte *)(lVar8 + 0x28) & 0x10) == 0)) {
    local_a8 = &local_88;
    uStack_80 = 0;
    local_88._0_2_ = (ushort)param_6 << 8;
    local_88 = (ulonglong)CONCAT12(1,(short)local_88);
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_90,param_2);
  }
  else {
    local_a8 = &local_88;
    uStack_80 = 0;
    local_88 = 0x40000;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_90,param_2);
  }
  param_1 = param_1 + 1;
  if (param_1 != &local_90) {
    lVar8 = *param_1;
    *param_1 = local_90;
    local_90 = 0;
    if (lVar8 == 0) goto LAB_140661ffc;
    LOCK();
    puVar1 = (uint *)(lVar8 + 8);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar8 + 8);
      LOCK();
      uVar7 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar7 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar8 + 0xd);
        plVar4 = (longlong *)FUN_14001cc68(0x10,8);
        plVar4[1] = lVar8;
        plVar6 = DAT_14ca843c0;
        plVar5 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar4 = (longlong)plVar6;
            LOCK();
            bVar9 = plVar6 != DAT_14ca843c0;
            plVar5 = plVar4;
            if (bVar9) {
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar5;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar4 = (longlong)plVar5;
            LOCK();
            bVar9 = plVar5 != DAT_14ca843c8;
            plVar6 = plVar4;
            if (bVar9) {
              plVar5 = DAT_14ca843c8;
              plVar6 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar6;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar8 = local_90;
  if (local_90 != 0) {
    LOCK();
    puVar1 = (uint *)(local_90 + 8);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_90 + 8);
      LOCK();
      uVar7 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar7 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_90 + 0xd);
        plVar4 = (longlong *)FUN_14001cc68(0x10,8);
        plVar4[1] = lVar8;
        plVar6 = DAT_14ca843c0;
        plVar5 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar4 = (longlong)plVar6;
            LOCK();
            bVar9 = plVar6 != DAT_14ca843c0;
            plVar5 = plVar4;
            if (bVar9) {
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar5;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar4 = (longlong)plVar5;
            LOCK();
            bVar9 = plVar5 != DAT_14ca843c8;
            plVar6 = plVar4;
            if (bVar9) {
              plVar5 = DAT_14ca843c8;
              plVar6 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar6;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
LAB_140661ffc:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14066209e FUN_14066209e body=112 status=ok
// SIG undefined FUN_14066209e(void)

void FUN_14066209e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  FUN_140662272(param_1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_140662110(param_1 + 0x50,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140662110 FUN_140662110 body=158 status=ok
// SIG undefined FUN_140662110(void)

undefined8 FUN_140662110(longlong *param_1,ulonglong param_2)

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
          FUN_1406621ae(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1406621ae FUN_1406621ae body=195 status=ok
// SIG undefined FUN_1406621ae(void)

void FUN_1406621ae(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int *piVar9;
  
  lVar2 = *param_1;
  lVar5 = (longlong)param_2 * 0x10;
  plVar6 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[8];
  }
  lVar7 = (longlong)*(int *)(lVar2 + 0xc + lVar5);
  iVar8 = *(int *)((longlong)plVar6 + lVar7 * 4);
  if (iVar8 == param_2) {
    piVar9 = (int *)((longlong)plVar6 + lVar7 * 4);
  }
  else {
    do {
      piVar9 = (int *)(lVar2 + (longlong)iVar8 * 0x10 + 8);
      iVar8 = *piVar9;
    } while (iVar8 != param_2);
  }
  *piVar9 = *(int *)(lVar2 + lVar5 + 8);
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + lVar5) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + lVar5 + 4) = uVar4;
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
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 140662272 FUN_140662272 body=411 status=ok
// SIG undefined FUN_140662272(void)

void FUN_140662272(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar7 = *param_2;
    if ((uVar7 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar7);
    }
    uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    uVar7 = (longlong)(int)(uVar4 >> 0x10 ^ uVar4) & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar5 + uVar7 * 4);
    if (iVar6 != -1) {
      puVar11 = (ulonglong *)((longlong)plVar5 + uVar7 * 4);
      bVar3 = DAT_14c950c29;
      do {
        puVar12 = (ulonglong *)((longlong)iVar6 * 0x10 + *param_1);
        uVar7 = *param_2;
        if ((uVar7 != 0 & bVar3) == 1) {
          FUN_1456cec3c(uVar7);
          bVar3 = DAT_14c950c29;
        }
        uVar1 = *puVar12;
        if (((bVar3 & 1) != 0) && (uVar1 != 0)) {
          FUN_1456cec3c(uVar1);
          bVar3 = DAT_14c950c29;
        }
        if ((uVar7 != 0 & bVar3) == 1) {
          FUN_1456cec3c(uVar7);
          bVar3 = DAT_14c950c29;
        }
        if (uVar1 == uVar7) {
          iVar6 = (int)*puVar11;
          lVar2 = *param_1;
          plVar5 = param_1 + 7;
          if ((longlong *)param_1[8] != (longlong *)0x0) {
            plVar5 = (longlong *)param_1[8];
          }
          lVar9 = (longlong)*(int *)(lVar2 + 0xc + (longlong)iVar6 * 0x10);
          iVar8 = *(int *)((longlong)plVar5 + lVar9 * 4);
          if (iVar8 == iVar6) {
            piVar10 = (int *)((longlong)plVar5 + lVar9 * 4);
          }
          else {
            do {
              piVar10 = (int *)(lVar2 + (longlong)iVar8 * 0x10 + 8);
              iVar8 = *piVar10;
            } while (iVar8 != iVar6);
          }
          *piVar10 = *(int *)(lVar2 + (longlong)iVar6 * 0x10 + 8);
          FUN_14066240e(param_1);
          return;
        }
        iVar6 = (int)puVar12[1];
        puVar11 = puVar12 + 1;
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 14066240e FUN_14066240e body=114 status=ok
// SIG undefined FUN_14066240e(void)

void FUN_14066240e(longlong *param_1,int param_2)

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



// FUNCTION 140662480 FUN_140662480 body=63 status=ok
// SIG undefined FUN_140662480(void)

undefined8 * FUN_140662480(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -8;
  param_1[-8] = &PTR_FUN_14ad48320;
  *param_1 = &PTR_FUN_14ad48350;
  FUN_1406624c0(puVar1);
  if (param_2 != 0) {
    FUN_1400020a8(puVar1);
  }
  return puVar1;
}



// FUNCTION 1406624c0 FUN_1406624c0 body=188 status=ok
// SIG undefined FUN_1406624c0(void)

void FUN_1406624c0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_LAB_14a3951f0;
  puVar5 = (undefined8 *)param_1[3];
  lVar3 = param_1[5];
  if (lVar3 != 0) {
    iVar2 = *(int *)(param_1 + 6);
    pcVar4 = *(code **)(param_1[4] + 0x18);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(lVar3,param_1[4],puVar5,iVar2 != 0);
    }
    if (iVar2 == 0) {
      thunk_FUN_1400020a8(lVar3);
    }
    if (*(int *)(param_1 + 6) != 0) {
      FUN_1400020a8(param_1[5]);
    }
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    puVar5 = (undefined8 *)param_1[3];
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  puVar5 = (undefined8 *)param_1[2];
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if (param_1[1] != 0) {
    FUN_140021284();
    return;
  }
  return;
}



// FUNCTION 140662592 FUN_140662592 body=29 status=ok
// SIG undefined FUN_140662592(void)

undefined8 FUN_140662592(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1406625b0 FUN_1406625b0 body=1001 status=ok
// SIG undefined FUN_1406625b0(void)

ulonglong FUN_1406625b0(longlong param_1,int param_2,double *param_3)

{
  double dVar1;
  ushort uVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_1a8 [32];
  double *local_188;
  longlong local_178;
  double *local_170;
  double *local_168;
  double local_160;
  double local_158 [3];
  double local_140 [4];
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar3 = *(longlong **)(param_1 + 0x70);
  uVar2 = *(ushort *)((longlong)plVar3 + 0x72);
  iVar5 = param_2 / (int)(uVar2 - 1) + param_2;
  dVar12 = *(double *)(param_1 + 200);
  local_160 = (dVar12 + 9.99999993922529e-09) * (dVar12 + 9.99999993922529e-09);
  local_168 = &local_160;
  local_d0 = (double)plVar3[0xc];
  lVar7 = *plVar3;
  lVar6 = (longlong)iVar5;
  dVar15 = (double)plVar3[0x10];
  local_118 = (double)*(ushort *)(lVar7 + lVar6 * 2) * dVar15 + local_d0;
  local_100 = (double)*(ushort *)(lVar7 + 2 + lVar6 * 2) * dVar15 + local_d0;
  local_e8 = (double)*(ushort *)(lVar7 + ((ulonglong)uVar2 + lVar6) * 2) * dVar15 + local_d0;
  local_d0 = (double)*(ushort *)(lVar7 + 2 + ((ulonglong)uVar2 + lVar6) * 2) * dVar15 + local_d0;
  dVar10 = (double)(iVar5 % (int)(uint)uVar2);
  dVar13 = (double)(iVar5 / (int)(uint)uVar2);
  dVar15 = local_e8;
  if (local_d0 <= local_e8) {
    dVar15 = local_d0;
  }
  dVar14 = local_100;
  if (dVar15 <= local_100) {
    dVar14 = dVar15;
  }
  dVar15 = local_118;
  if (dVar14 <= local_118) {
    dVar15 = dVar14;
  }
  dVar14 = local_e8;
  if (local_e8 <= local_d0) {
    dVar14 = local_d0;
  }
  dVar1 = local_100;
  if (local_100 <= dVar14) {
    dVar1 = dVar14;
  }
  dVar14 = local_118;
  if (local_118 <= dVar1) {
    dVar14 = dVar1;
  }
  local_140[3] = dVar10 * (double)plVar3[6];
  local_120 = dVar13 * (double)plVar3[7];
  dVar1 = (double)plVar3[8];
  local_118 = local_118 * dVar1;
  local_110 = (dVar10 + 1.0) * (double)plVar3[6];
  local_100 = local_100 * dVar1;
  local_f0 = (dVar13 + 1.0) * (double)plVar3[7];
  local_e8 = local_e8 * dVar1;
  local_d0 = local_d0 * dVar1;
  dVar14 = dVar14 * dVar1;
  dVar15 = dVar15 * dVar1;
  dVar10 = dVar15;
  if (dVar14 <= dVar15) {
    dVar10 = dVar14;
  }
  dVar13 = local_120;
  if (local_f0 <= local_120) {
    dVar13 = local_f0;
  }
  dVar1 = local_140[3];
  if (local_110 <= local_140[3]) {
    dVar1 = local_110;
  }
  if (dVar15 <= dVar14) {
    dVar15 = dVar14;
  }
  dVar14 = local_120;
  if (local_120 <= local_f0) {
    dVar14 = local_f0;
  }
  dVar11 = local_140[3];
  if (local_140[3] <= local_110) {
    dVar11 = local_110;
  }
  local_140[0] = (dVar1 - dVar12) - *(double *)(param_1 + 0x78);
  local_140[1] = (dVar13 - dVar12) - *(double *)(param_1 + 0x80);
  local_140[2] = (dVar10 - dVar12) - *(double *)(param_1 + 0x88);
  local_158[0] = (dVar11 + dVar12) - *(double *)(param_1 + 0x78);
  local_158[1] = (dVar14 + dVar12) - *(double *)(param_1 + 0x80);
  local_158[2] = (dVar15 + dVar12) - *(double *)(param_1 + 0x88);
  dVar15 = 0.0;
  dVar12 = 1.79769313486232e+308;
  lVar7 = -3;
  do {
    local_178 = param_1;
    local_170 = param_3;
    local_108 = local_120;
    local_f8 = local_140[3];
    local_e0 = local_110;
    local_d8 = local_f0;
    if (*(char *)(param_1 + 0xc3 + lVar7) == '\x01') {
      dVar10 = 0.0;
      if ((local_140[lVar7 + 3] <= 0.0) && (0.0 < local_140[lVar7] || local_140[lVar7] == 0.0)) {
        dVar13 = 1.79769313486232e+308;
        goto LAB_140662895;
      }
LAB_140662928:
      uVar8 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
      goto LAB_14066292a;
    }
    dVar13 = *(double *)(param_1 + 0xc0 + lVar7 * 8);
    dVar10 = local_140[lVar7 + 3] * dVar13;
    dVar13 = dVar13 * local_140[lVar7];
LAB_140662895:
    dVar14 = dVar13;
    if (dVar10 <= dVar13) {
      dVar14 = dVar10;
    }
    if (dVar15 <= dVar14) {
      dVar15 = dVar14;
    }
    if (dVar10 <= dVar13) {
      dVar10 = dVar13;
    }
    if (dVar10 <= dVar12) {
      dVar12 = dVar10;
    }
    if (dVar12 < dVar15) goto LAB_140662928;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0);
  uVar8 = 1;
  if ((dVar15 <= *param_3) && (0.0 <= dVar12)) {
    local_188 = &local_e0;
    bVar4 = FUN_140662aa8(&local_178,param_2 * 2,local_140 + 3,local_140 + 6);
    local_188 = &local_f8;
    uVar9 = FUN_140662aa8(&local_178,param_2 * 2 + 1,local_140 + 3,&local_e0);
    uVar8 = CONCAT71((int7)((ulonglong)uVar9 >> 8),(byte)uVar9 | bVar4) ^ 1;
  }
LAB_14066292a:
  if ((local_c0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14066299a FUN_14066299a body=269 status=ok
// SIG undefined FUN_14066299a(void)

void FUN_14066299a(longlong param_1,int param_2)

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



// FUNCTION 140662aa8 FUN_140662aa8 body=2791 status=ok
// SIG undefined FUN_140662aa8(void)

undefined8
FUN_140662aa8(undefined8 *param_1,uint param_2,double *param_3,double *param_4,double *param_5)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  double *pdVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_388 [32];
  double *local_368;
  double *local_360;
  double *local_358;
  double *local_350;
  undefined4 *local_348;
  uint local_334;
  undefined8 *local_330;
  undefined4 local_324;
  double local_320;
  double local_318;
  double dStack_310;
  double local_308;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  undefined **local_2d8;
  undefined8 local_2d0;
  double local_2c8;
  undefined2 local_2c0;
  undefined1 local_2be;
  undefined2 local_2bc;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  undefined8 local_290;
  double local_288;
  undefined **local_280;
  double dStack_278;
  double local_270;
  undefined2 local_268;
  undefined1 local_266;
  undefined2 local_264;
  double local_260;
  double dStack_258;
  double local_250;
  double local_248;
  double local_240;
  undefined8 local_238;
  double local_230;
  undefined **local_228;
  double local_220;
  double local_218;
  undefined2 local_210;
  undefined1 local_20e;
  undefined2 local_20c;
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  undefined8 local_1e0;
  double local_1d8;
  char local_1cb [3];
  undefined **local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined2 local_1b0;
  undefined1 local_1ae;
  undefined2 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  undefined1 local_170 [8];
  double local_168 [2];
  double local_158 [3];
  undefined1 local_140 [24];
  double local_128 [4];
  double local_108 [3];
  undefined1 local_f0 [24];
  double local_d8 [3];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  dVar12 = param_4[2] - param_3[2];
  dVar13 = param_4[1] - param_3[1];
  dVar3 = *param_4 - *param_3;
  dVar16 = param_5[2] - param_3[2];
  dVar18 = param_5[1] - param_3[1];
  dVar17 = *param_5 - *param_3;
  dVar4 = dVar3 * dVar18 - dVar17 * dVar13;
  dVar3 = dVar12 * dVar17 - dVar16 * dVar3;
  dVar17 = dVar13 * dVar16 - dVar18 * dVar12;
  dVar13 = dVar4 * dVar4 + dVar17 * dVar17 + dVar3 * dVar3;
  if ((dVar13 < 9.999999747378752e-05) ||
     (dVar13 = SQRT(dVar13), local_334 = param_2, dVar13 <= 9.99999993922529e-09)) {
    uVar7 = 0;
    goto LAB_1406631be;
  }
  pdVar2 = (double *)*param_1;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0x100;
  local_1ae = 0;
  local_1ac = 0x202;
  local_1c8 = &PTR_FUN_149f48540;
  local_1a8 = *(undefined4 *)param_3;
  uStack_1a4 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_1a0 = *(undefined4 *)(param_3 + 1);
  uStack_19c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_198 = param_3[2];
  local_2e8 = 0.0;
  local_2f8 = 0.0;
  dStack_2f0 = 0.0;
  local_350 = &local_318;
  local_308 = 0.0;
  local_318 = 0.0;
  dStack_310 = 0.0;
  local_360 = &local_320;
  local_320 = 1.79769313486232e+308;
  local_348 = &local_324;
  local_324 = 0xffffffff;
  local_368 = (double *)pdVar2[0x19];
  pdVar1 = pdVar2 + 0x12;
  pdVar8 = pdVar2 + 0xf;
  local_358 = &local_2f8;
  local_190 = dVar17 / dVar13;
  local_188 = dVar3 / dVar13;
  local_180 = dVar4 / dVar13;
  cVar6 = FUN_1406644e2(&local_1a8,pdVar8,pdVar1,*(undefined8 *)param_1[1]);
  if (cVar6 == '\0') {
LAB_140662d5f:
    local_218 = pdVar2[0x19];
    local_220 = 0.0;
    local_210 = 0x101;
    local_20e = 1;
    local_20c = 0x303;
    local_228 = &PTR_FUN_149f487f0;
    local_1f8 = param_3[2];
    local_208 = *param_3;
    dStack_200 = param_3[1];
    dVar17 = param_4[2] - param_3[2];
    dVar16 = param_4[1] - param_3[1];
    dVar18 = *param_4 - *param_3;
    dVar4 = dVar17 * dVar17 + dVar18 * dVar18 + dVar16 * dVar16;
    dVar13 = 0.0;
    dVar12 = 1.0;
    local_1f0 = 1.0;
    local_1e8 = 0.0;
    uVar14 = 0;
    dVar3 = 0.0;
    local_1d8 = 0.0;
    if (9.999999747378752e-05 <= dVar4) {
      local_1d8 = SQRT(dVar4);
      dVar3 = dVar17 / local_1d8;
      uVar14 = SUB84(dVar3,0);
      local_1e8 = dVar16 / local_1d8;
      local_1f0 = dVar18 / local_1d8;
    }
    local_1e0 = CONCAT44((int)((ulonglong)dVar3 >> 0x20),uVar14);
    local_350 = local_158;
    local_358 = local_108;
    local_360 = &local_178;
    local_368 = (double *)0x0;
    local_348 = &local_324;
    local_330 = param_1;
    local_1cb[0] = FUN_140663590(&local_228,pdVar8,pdVar1,*(undefined8 *)param_1[1]);
    param_1 = local_330;
    local_270 = pdVar2[0x19];
    dStack_278 = 0.0;
    local_268 = 0x101;
    local_266 = 1;
    local_264 = 0x303;
    local_280 = &PTR_FUN_149f487f0;
    local_250 = param_4[2];
    local_260 = *param_4;
    dStack_258 = param_4[1];
    dVar17 = param_5[2] - param_4[2];
    dVar16 = param_5[1] - param_4[1];
    dVar18 = *param_5 - *param_4;
    dVar4 = dVar17 * dVar17 + dVar18 * dVar18 + dVar16 * dVar16;
    local_248 = 1.0;
    uVar14 = 0;
    dVar3 = 0.0;
    local_230 = 0.0;
    if (9.999999747378752e-05 <= dVar4) {
      local_230 = SQRT(dVar4);
      dVar3 = dVar17 / local_230;
      uVar14 = SUB84(dVar3,0);
      dVar13 = dVar16 / local_230;
      local_248 = dVar18 / local_230;
    }
    local_238 = CONCAT44((int)((ulonglong)dVar3 >> 0x20),uVar14);
    local_350 = (double *)local_140;
    local_358 = (double *)local_f0;
    local_360 = (double *)local_170;
    local_368 = (double *)0x0;
    local_348 = &local_324;
    local_240 = dVar13;
    local_1cb[1] = FUN_140663590(&local_280,pdVar8,pdVar1,*(undefined8 *)local_330[1]);
    local_2c8 = pdVar2[0x19];
    local_2d0 = 0;
    local_2c0 = 0x101;
    local_2be = 1;
    local_2bc = 0x303;
    local_2d8 = &PTR_FUN_149f487f0;
    local_2a8 = param_3[2];
    local_2b8 = *param_3;
    dStack_2b0 = param_3[1];
    dVar17 = param_5[2] - param_3[2];
    dVar13 = param_5[1] - param_3[1];
    dVar16 = *param_5 - *param_3;
    dVar4 = dVar17 * dVar17 + dVar16 * dVar16 + dVar13 * dVar13;
    uVar19 = 0;
    uVar20 = 0;
    local_298 = 0.0;
    uVar14 = 0;
    dVar3 = 0.0;
    local_288 = 0.0;
    if (9.999999747378752e-05 <= dVar4) {
      local_288 = SQRT(dVar4);
      dVar3 = dVar17 / local_288;
      uVar14 = SUB84(dVar3,0);
      local_298 = dVar13 / local_288;
      dVar12 = dVar16 / local_288;
    }
    local_290 = CONCAT44((int)((ulonglong)dVar3 >> 0x20),uVar14);
    local_350 = local_128;
    local_358 = local_d8;
    local_360 = local_168;
    local_368 = (double *)0x0;
    local_348 = &local_324;
    local_2a0 = dVar12;
    local_1cb[2] = FUN_140663590(&local_2d8,pdVar8,pdVar1,*(undefined8 *)param_1[1]);
    iVar9 = -1;
    lVar10 = 0;
    bVar5 = false;
    do {
      if ((local_1cb[lVar10] == '\x01') &&
         ((dVar17 = *(double *)(local_170 + lVar10 * 8 + -8), !bVar5 ||
          (dVar17 <= (double)CONCAT44(uVar20,uVar19) && (double)CONCAT44(uVar20,uVar19) != dVar17)))
         ) {
        bVar5 = true;
        iVar9 = (int)lVar10;
        uVar19 = SUB84(dVar17,0);
        uVar20 = (undefined4)((ulonglong)dVar17 >> 0x20);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != 3);
    if (iVar9 != -1) {
      lVar10 = (longlong)iVar9;
      local_308 = *(double *)(local_140 + lVar10 * 0x18 + -8);
      local_318 = local_158[lVar10 * 3];
      dStack_310 = local_158[lVar10 * 3 + 1];
      dVar17 = pdVar2[0x19];
      local_2e8 = *(double *)(local_f0 + lVar10 * 0x18 + -8) - local_308 * dVar17;
      local_2f8 = local_108[lVar10 * 3] - dVar17 * local_318;
      dStack_2f0 = local_108[lVar10 * 3 + 1] - dStack_310 * dVar17;
      if ((local_320 == 0.0) && (!NAN(local_320))) {
        uVar15 = (uint)((ulonglong)local_188 >> 0x20);
        dVar17 = (pdVar2[0x11] - local_198) * local_180 +
                 (pdVar2[0xf] - (double)CONCAT44(uStack_1a4,local_1a8)) * local_190 +
                 (pdVar2[0x10] - (double)CONCAT44(uStack_19c,uStack_1a0)) * local_188;
        uVar11 = -(ulonglong)(dVar17 < 0.0);
        local_308 = (double)(~uVar11 & (ulonglong)local_180 | (ulonglong)-local_180 & uVar11);
        local_318 = local_190;
        if (dVar17 < 0.0) {
          uVar15 = uVar15 ^ 0x80000000;
          local_318 = -local_190;
        }
        dStack_310 = (double)CONCAT44(uVar15,SUB84(local_188,0));
        param_1 = local_330;
      }
      local_320 = (double)CONCAT44(uVar20,uVar19);
    }
    local_2d8 = &PTR_FUN_149f553e0;
    local_280 = &PTR_FUN_149f553e0;
    local_228 = &PTR_FUN_149f553e0;
    if (bVar5) {
LAB_140663229:
      if (local_320 < *pdVar2) {
        if (-2 < (int)local_334) {
          if (((int)local_334 / 2 < *(int *)((longlong)pdVar2[0xe] + 0x28)) &&
             (*(char *)(*(longlong *)((longlong)pdVar2[0xe] + 0x20) + (longlong)((int)local_334 / 2)
                       ) == -1)) goto LAB_1406631a6;
        }
        pdVar2[3] = local_2e8;
        pdVar2[1] = local_2f8;
        pdVar2[2] = dStack_2f0;
        pdVar2[4] = local_318;
        pdVar2[5] = dStack_310;
        pdVar2[6] = local_308;
        *pdVar2 = local_320;
        *(uint *)(pdVar2 + 7) = local_334;
        pdVar8 = (double *)param_1[1];
        *pdVar8 = local_320;
        goto LAB_1406632a6;
      }
    }
LAB_1406631a6:
    uVar7 = 0;
  }
  else {
    if ((local_320 != 0.0) || (NAN(local_320))) {
      local_368 = param_5;
      local_360 = &local_2f8;
      FUN_1449056f5(&local_228,&local_2f8,param_3,param_4);
      if (9.99999993922529e-09 <
          (local_2e8 - local_218) * (local_2e8 - local_218) +
          (local_2f8 - (double)local_228) * (local_2f8 - (double)local_228) +
          (dStack_2f0 - local_220) * (dStack_2f0 - local_220)) goto LAB_140662d5f;
      goto LAB_140663229;
    }
    dVar12 = (pdVar2[0x11] - local_198) * local_180 +
             (pdVar2[0xf] - (double)CONCAT44(uStack_1a4,local_1a8)) * local_190 +
             (pdVar2[0x10] - (double)CONCAT44(uStack_19c,uStack_1a0)) * local_188;
    local_218 = pdVar2[0x11] - dVar12 * local_180;
    local_220 = pdVar2[0x10] - local_188 * dVar12;
    local_228 = (undefined **)(pdVar2[0xf] - local_190 * dVar12);
    local_368 = param_5;
    local_360 = pdVar8;
    FUN_1449056f5(&local_280,&local_228,param_3,param_4);
    if (*(double *)param_1[2] <
        (pdVar2[0x11] - local_270) * (pdVar2[0x11] - local_270) +
        (pdVar2[0xf] - (double)local_280) * (pdVar2[0xf] - (double)local_280) +
        (pdVar2[0x10] - dStack_278) * (pdVar2[0x10] - dStack_278)) goto LAB_140662d5f;
    *pdVar2 = 0.0;
    pdVar2[1] = (double)local_280;
    pdVar2[2] = dStack_278;
    pdVar2[3] = local_270;
    pdVar2[4] = dVar17 / dVar13;
    pdVar2[5] = dVar3 / dVar13;
    pdVar2[6] = dVar4 / dVar13;
    pdVar8 = (double *)(ulonglong)local_334;
    *(uint *)(pdVar2 + 7) = local_334;
LAB_1406632a6:
    uVar7 = CONCAT71((int7)((ulonglong)pdVar8 >> 8),1);
  }
  local_1c8 = &PTR_FUN_149f553e0;
LAB_1406631be:
  if ((local_c0 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 140663590 FUN_140663590 body=242 status=ok
// SIG undefined FUN_140663590(void)

void FUN_140663590(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  double dVar1;
  undefined1 auStack_b8 [32];
  double *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar1 = *(double *)(param_1 + 0x50);
  local_38 = *(double *)(param_1 + 0x48) * dVar1 + *(double *)(param_1 + 0x30);
  local_40 = *(double *)(param_1 + 0x40) * dVar1 + *(double *)(param_1 + 0x28);
  local_48 = *(double *)(param_1 + 0x38) * dVar1 + *(double *)(param_1 + 0x20);
  local_98 = &local_48;
  local_60 = param_8;
  uStack_58 = param_9;
  local_70 = param_6;
  uStack_68 = param_7;
  local_78 = param_5;
  local_90 = param_2;
  local_88 = param_3;
  local_80 = param_4;
  FUN_140663684(*(undefined8 *)(param_1 + 0x10),dVar1,param_1 + 0x38,param_1 + 0x20);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140663684 FUN_140663684 body=3163 status=ok
// SIG undefined FUN_140663684(void)

undefined8
FUN_140663684(double param_1,double param_2,double *param_3,double *param_4,double *param_5,
             double *param_6,double *param_7,double param_8,double *param_9,double *param_10,
             double *param_11,double *param_12,undefined4 *param_13)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  undefined8 uVar8;
  double *pdVar9;
  double *pdVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStack_358 [32];
  double *local_338;
  double *local_330;
  double *local_328;
  double *local_320;
  undefined4 *local_318;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  undefined8 uStack_2b0;
  double local_2a8 [3];
  double local_290 [3];
  double local_278 [3];
  double local_260 [3];
  double local_248;
  double local_240;
  double local_238;
  double dStack_230;
  double local_228;
  double adStack_220 [4];
  double dStack_200;
  double local_1f8;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined **local_168;
  double local_160;
  double local_158;
  undefined2 local_150;
  undefined1 local_14e;
  undefined2 local_14c;
  double local_148;
  double dStack_140;
  double local_138;
  undefined **local_130;
  double local_128;
  double local_120;
  undefined2 local_118;
  undefined1 local_116;
  undefined2 local_114;
  double local_110;
  double dStack_108;
  double local_100;
  char acStack_f3 [3];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  dVar19 = param_1 + (double)param_9;
  *param_13 = 0xffffffff;
  local_1a0 = param_7[2] * param_8 + param_6[2];
  local_1a8 = param_7[1] * param_8 + param_6[1];
  local_1b0 = *param_7 * param_8 + *param_6;
  dVar14 = dVar19 * dVar19;
  local_1b8 = param_6[2];
  local_1c8 = *param_6;
  dStack_1c0 = param_6[1];
  local_1e8 = *param_5;
  dStack_1e0 = param_5[1];
  local_1d8 = param_5[2];
  adStack_220[3] = *param_4;
  dStack_200 = param_4[1];
  local_1f8 = param_4[2];
  local_330 = &local_198;
  local_338 = &local_180;
  FUN_144a0d30e();
  if ((local_188 - local_170) * (local_188 - local_170) +
      (local_198 - local_180) * (local_198 - local_180) +
      (local_190 - local_178) * (local_190 - local_178) <= dVar14 + 2.220446049250313e-16) {
    dVar12 = param_4[2];
    uVar22 = 0xffffffff;
    uVar23 = 0x7fefffff;
    if (dVar12 <= 1.79769313486232e+308) {
      uVar22 = SUB84(dVar12,0);
      uVar23 = (undefined4)((ulonglong)dVar12 >> 0x20);
    }
    dVar18 = *param_4;
    dVar17 = param_4[1];
    uVar27 = (undefined4)((ulonglong)dVar18 >> 0x20);
    uVar26 = 0xffffffff;
    uVar28 = 0x7fefffff;
    if (dVar18 <= 1.79769313486232e+308) {
      uVar26 = SUB84(dVar18,0);
      uVar28 = uVar27;
    }
    dVar20 = -1.79769313486232e+308;
    if (-1.79769313486232e+308 <= dVar17) {
      dVar20 = dVar17;
    }
    uVar24 = 0xffffffff;
    uVar25 = 0xffefffff;
    if (-1.79769313486232e+308 <= dVar18) {
      uVar24 = SUB84(dVar18,0);
      uVar25 = uVar27;
    }
    dVar18 = param_5[2];
    if (dVar18 <= (double)CONCAT44(uVar23,uVar22)) {
      uVar22 = SUB84(dVar18,0);
      uVar23 = (undefined4)((ulonglong)dVar18 >> 0x20);
    }
    dVar15 = *param_5;
    dVar1 = param_5[1];
    uVar27 = (undefined4)((ulonglong)dVar15 >> 0x20);
    if (dVar15 <= (double)CONCAT44(uVar28,uVar26)) {
      uVar26 = SUB84(dVar15,0);
      uVar28 = uVar27;
    }
    lVar7 = 0;
    do {
      dVar2 = param_7[lVar7];
      dVar13 = 1.0 / dVar2;
      if ((dVar2 == 0.0) && (!NAN(dVar2))) {
        dVar13 = 0.0;
      }
      acStack_f3[lVar7] = dVar2 == 0.0;
      adStack_220[lVar7] = dVar13;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 3);
    uVar29 = 0xffffffff;
    uVar30 = 0x7fefffff;
    if (dVar17 <= 1.79769313486232e+308) {
      uVar29 = SUB84(dVar17,0);
      uVar30 = (undefined4)((ulonglong)dVar17 >> 0x20);
    }
    dVar17 = -1.79769313486232e+308;
    if (-1.79769313486232e+308 <= dVar12) {
      dVar17 = dVar12;
    }
    if (dVar20 <= dVar1) {
      dVar20 = dVar1;
    }
    if (dVar1 <= (double)CONCAT44(uVar30,uVar29)) {
      uVar29 = SUB84(dVar1,0);
      uVar30 = (undefined4)((ulonglong)dVar1 >> 0x20);
    }
    if (dVar17 <= dVar18) {
      dVar17 = dVar18;
    }
    if ((double)CONCAT44(uVar25,uVar24) <= dVar15) {
      uVar24 = SUB84(dVar15,0);
      uVar25 = uVar27;
    }
    dVar12 = param_6[2];
    dVar18 = *param_6;
    dVar15 = param_6[1];
    local_130 = (undefined **)(((double)CONCAT44(uVar28,uVar26) - dVar19) - dVar18);
    local_128 = ((double)CONCAT44(uVar30,uVar29) - dVar19) - dVar15;
    local_120 = ((double)CONCAT44(uVar23,uVar22) - dVar19) - dVar12;
    local_168 = (undefined **)(((double)CONCAT44(uVar25,uVar24) + dVar19) - dVar18);
    local_160 = (dVar20 + dVar19) - dVar15;
    local_158 = (dVar17 + dVar19) - dVar12;
    lVar7 = 0;
    dVar20 = 1.79769313486232e+308;
    dVar17 = 0.0;
    do {
      local_2d8 = param_2;
      local_2d0 = param_1;
      if (acStack_f3[lVar7] == '\x01') {
        if (0.0 < (double)(&local_130)[lVar7]) goto LAB_140663858;
        dVar1 = 0.0;
        dVar2 = 1.79769313486232e+308;
        if ((double)(&local_168)[lVar7] <= 0.0 && (double)(&local_168)[lVar7] != 0.0)
        goto LAB_140663858;
      }
      else {
        dVar1 = (double)(&local_130)[lVar7] * adStack_220[lVar7];
        dVar2 = adStack_220[lVar7] * (double)(&local_168)[lVar7];
      }
      dVar13 = dVar2;
      if (dVar1 <= dVar2) {
        dVar13 = dVar1;
      }
      if (dVar17 <= dVar13) {
        dVar17 = dVar13;
      }
      if (dVar1 <= dVar2) {
        dVar1 = dVar2;
      }
      if (dVar1 <= dVar20) {
        dVar20 = dVar1;
      }
      if (dVar20 < dVar17) goto LAB_140663858;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 3);
    uVar8 = 0;
    if ((param_8 < dVar17) || (dVar20 < 0.0)) goto LAB_14066385a;
    dVar20 = param_7[1];
    dVar1 = param_7[2];
    *param_11 = dVar18 + *param_7 * dVar17;
    param_11[1] = dVar15 + dVar20 * dVar17;
    param_11[2] = dVar12 + dVar1 * dVar17;
    local_2f8 = *param_7;
    local_300 = param_7[1];
    dVar12 = param_7[2];
    dVar4 = dVar17 * dVar12 + param_6[2];
    local_2e0 = dVar17 * local_300 + param_6[1];
    local_2e8 = dVar17 * local_2f8 + *param_6;
    local_2c0 = param_4[2];
    dVar1 = dVar4 - local_2c0;
    dVar18 = *param_4;
    local_2c8 = param_4[1];
    dVar11 = local_2e0 - local_2c8;
    dVar13 = local_2e8 - dVar18;
    dVar20 = *param_3;
    local_308 = param_3[1];
    dVar15 = param_3[2];
    dVar2 = dVar1 * dVar15 + dVar13 * dVar20 + dVar11 * local_308;
    local_2f0 = dVar18;
    local_238 = local_2e8;
    dStack_230 = local_2e0;
    local_228 = dVar4;
    if ((dVar2 < -dVar19) || (dVar19 + param_2 < dVar2)) {
LAB_140663c97:
      local_2b8 = param_8 - dVar17;
      uStack_2b0 = 0;
      if (ABS(local_2b8) <= 9.999999747378752e-05) goto LAB_140663858;
      dVar14 = ((dVar1 * dVar1 + dVar13 * dVar13 + dVar11 * dVar11) - dVar2 * dVar2) - dVar14;
      if (0.0 < dVar14) {
        dVar21 = dVar15 * dVar12 + dVar20 * local_2f8 + local_300 * local_308;
        dVar16 = 1.0 - dVar21 * dVar21;
        dVar1 = (dVar1 * dVar12 + dVar13 * local_2f8 + dVar11 * local_300) - dVar2 * dVar21;
        dVar14 = dVar1 * dVar1 - dVar14 * dVar16;
        if (0.0 <= dVar14) {
          uVar22 = SUB84(local_2c0,0);
          uVar23 = (undefined4)((ulonglong)local_2c0 >> 0x20);
          uVar26 = SUB84(local_2c8,0);
          uVar28 = (undefined4)((ulonglong)local_2c8 >> 0x20);
          if (dVar14 < 0.0001) {
            dVar2 = (double)(~-(ulonglong)(dVar16 == 0.0) & (ulonglong)(-dVar1 / dVar16));
          }
          else {
            dVar2 = 0.0;
            if ((dVar16 != 0.0) || (NAN(dVar16))) {
              if (dVar14 < 0.0) {
                dVar12 = sqrt(dVar14);
              }
              else {
                dVar12 = SQRT(dVar14);
              }
              dVar2 = (-dVar1 - dVar12) / dVar16;
              if (dVar2 < 0.0) goto LAB_140663858;
              local_2f8 = *param_7;
              local_300 = param_7[1];
              dVar12 = param_7[2];
              uVar22 = SUB84(param_4[2],0);
              uVar23 = (undefined4)((ulonglong)param_4[2] >> 0x20);
              dVar18 = *param_4;
              uVar26 = SUB84(param_4[1],0);
              uVar28 = (undefined4)((ulonglong)param_4[1] >> 0x20);
              dVar20 = *param_3;
              local_308 = param_3[1];
              dVar15 = param_3[2];
            }
          }
          dVar4 = dVar4 + dVar12 * dVar2;
          dVar12 = local_2e0 + local_300 * dVar2;
          dVar1 = local_2e8 + local_2f8 * dVar2;
          dVar13 = dVar4 - (double)CONCAT44(uVar23,uVar22);
          dVar11 = dVar12 - (double)CONCAT44(uVar28,uVar26);
          dVar18 = dVar1 - dVar18;
          dVar20 = dVar15 * dVar13 + dVar20 * dVar18 + local_308 * dVar11;
          if ((0.0 <= dVar20) && (dVar20 < local_2d8)) {
            *param_10 = dVar17 + dVar2;
            dVar14 = (dVar13 - param_3[2] * dVar20) / dVar19;
            dVar17 = (dVar11 - param_3[1] * dVar20) / dVar19;
            dVar19 = (dVar18 - dVar20 * *param_3) / dVar19;
            *param_12 = dVar19;
            param_12[1] = dVar17;
            param_12[2] = dVar14;
            dVar4 = dVar4 - dVar14 * (double)param_9;
            *param_11 = dVar1 - dVar19 * (double)param_9;
            param_11[1] = dVar12 - dVar17 * (double)param_9;
            goto LAB_140663f68;
          }
          if (dVar14 < 0.0001) goto LAB_140663858;
        }
      }
      dVar14 = local_2b8;
      local_128 = 0.0;
      local_118 = 0x101;
      local_116 = 1;
      local_114 = 0;
      local_130 = &PTR_FUN_149f48e60;
      local_110 = *param_4;
      dStack_108 = param_4[1];
      local_100 = param_4[2];
      local_120 = local_2d0;
      local_160 = 0.0;
      local_150 = 0x101;
      local_14e = 1;
      local_14c = 0;
      local_168 = &PTR_FUN_149f48e60;
      local_148 = *param_5;
      dStack_140 = param_5[1];
      local_138 = param_5[2];
      local_158 = local_2d0;
      local_318 = param_13;
      pdVar9 = local_290;
      pdVar10 = local_260;
      local_330 = &local_240;
      local_338 = param_9;
      local_328 = pdVar10;
      local_320 = pdVar9;
      bVar5 = FUN_1406642e0(&local_130,&local_238,param_7,local_2b8);
      local_318 = param_13;
      local_320 = local_2a8;
      local_330 = &local_248;
      local_338 = param_9;
      local_328 = local_278;
      bVar6 = FUN_1406642e0(&local_168,&local_238,param_7,dVar14);
      if ((bVar5 & bVar6) == 1) {
        dVar14 = (double)(~-(ulonglong)(local_248 < local_240) & (ulonglong)local_240 |
                         (ulonglong)local_248 & -(ulonglong)(local_248 < local_240));
        pdVar9 = local_290;
        pdVar10 = local_260;
        if (local_248 < local_240) {
          pdVar9 = local_2a8;
          pdVar10 = local_278;
        }
      }
      else {
        dVar14 = local_240;
        if (bVar5 == 0) {
          if (bVar6 == 0) {
            local_168 = &PTR_FUN_149f553e0;
            local_130 = &PTR_FUN_149f553e0;
            goto LAB_140663858;
          }
          pdVar9 = local_2a8;
          pdVar10 = local_278;
          dVar14 = local_248;
        }
      }
      *param_10 = dVar17 + dVar14;
      param_11[2] = pdVar10[2];
      dVar14 = pdVar10[1];
      *param_11 = *pdVar10;
      param_11[1] = dVar14;
      param_12[2] = pdVar9[2];
      dVar14 = pdVar9[1];
      *param_12 = *pdVar9;
      param_12[1] = dVar14;
      local_168 = &PTR_FUN_149f553e0;
      local_130 = &PTR_FUN_149f553e0;
    }
    else {
      dVar16 = dVar2;
      if (param_2 <= dVar2) {
        dVar16 = param_2;
      }
      if (dVar16 <= 0.0) {
        dVar16 = 0.0;
      }
      dVar21 = dVar1 - dVar15 * dVar16;
      dVar3 = dVar11 - local_308 * dVar16;
      dVar16 = dVar13 - dVar16 * dVar20;
      if (dVar14 < dVar21 * dVar21 + dVar16 * dVar16 + dVar3 * dVar3) goto LAB_140663c97;
      *param_10 = dVar17;
      if (0.0 < dVar17) {
        *param_12 = dVar16 / dVar19;
        param_12[1] = dVar3 / dVar19;
        param_12[2] = dVar21 / dVar19;
        dVar4 = dVar4 - (dVar21 / dVar19) * (double)param_9;
        *param_11 = local_2e8 - (dVar16 / dVar19) * (double)param_9;
        param_11[1] = local_2e0 - (dVar3 / dVar19) * (double)param_9;
LAB_140663f68:
        param_11[2] = dVar4;
      }
      else {
        param_11[2] = dVar4;
        *param_11 = local_2e8;
        param_11[1] = local_2e0;
        dVar14 = param_7[2];
        dVar19 = param_7[1];
        *param_12 = -*param_7;
        param_12[1] = -dVar19;
        param_12[2] = -dVar14;
      }
    }
    uVar8 = 1;
  }
  else {
LAB_140663858:
    uVar8 = 0;
  }
LAB_14066385a:
  if ((local_f0 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406642e0 FUN_1406642e0 body=513 status=ok
// SIG undefined FUN_1406642e0(void)

undefined8
FUN_1406642e0(longlong param_1,double *param_2,double *param_3,double param_4,double param_5,
             double *param_6,double *param_7,double *param_8,undefined4 *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  *param_9 = 0xffffffff;
  dVar7 = *(double *)(param_1 + 0x10) + param_5;
  dVar1 = *(double *)(param_1 + 0x30) - param_2[2];
  dVar3 = *(double *)(param_1 + 0x28) - param_2[1];
  dVar2 = *(double *)(param_1 + 0x20) - *param_2;
  dVar4 = dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3;
  if (dVar4 < dVar7 * dVar7) {
    *param_6 = 0.0;
  }
  else {
    dVar1 = dVar1 * param_3[2] + dVar2 * *param_3 + dVar3 * param_3[1];
    dVar2 = dVar1 * dVar1 - (dVar4 - dVar7 * dVar7);
    if (dVar2 < 0.0) {
      return 0;
    }
    if (9.999999747378752e-05 <= dVar2) {
      if (dVar2 < 0.0) {
        dVar2 = sqrt(dVar2);
      }
      else {
        dVar2 = SQRT(dVar2);
      }
      dVar1 = dVar1 - dVar2;
    }
    if (dVar1 < 0.0) {
      return 0;
    }
    if (param_4 < dVar1) {
      return 0;
    }
    dVar4 = param_3[2] * dVar1 + param_2[2];
    dVar3 = param_3[1] * dVar1 + param_2[1];
    dVar2 = *param_3 * dVar1 + *param_2;
    dVar5 = (dVar4 - *(double *)(param_1 + 0x30)) / dVar7;
    dVar6 = (dVar3 - *(double *)(param_1 + 0x28)) / dVar7;
    dVar7 = (dVar2 - *(double *)(param_1 + 0x20)) / dVar7;
    *param_6 = dVar1;
    *param_7 = dVar2 - param_5 * dVar7;
    param_7[1] = dVar3 - dVar6 * param_5;
    param_7[2] = dVar4 - dVar5 * param_5;
    *param_8 = dVar7;
    param_8[1] = dVar6;
    param_8[2] = dVar5;
  }
  return 1;
}



// FUNCTION 1406644e2 FUN_1406644e2 body=654 status=ok
// SIG undefined FUN_1406644e2(void)

undefined8
FUN_1406644e2(double *param_1,double *param_2,double *param_3,double param_4,double param_5,
             double *param_6,double *param_7,undefined1 (*param_8) [16],undefined4 *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined4 uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  *param_9 = 0xffffffff;
  *param_6 = 0.0;
  param_7[2] = 0.0;
  *param_7 = 0.0;
  param_7[1] = 0.0;
  *(undefined8 *)param_8[1] = 0;
  *(undefined8 *)*param_8 = 0;
  *(undefined8 *)(*param_8 + 8) = 0;
  dVar9 = param_1[3];
  uVar6 = SUB84(dVar9,0);
  uVar7 = (uint)((ulonglong)dVar9 >> 0x20);
  dVar8 = param_1[4];
  dVar10 = param_1[5];
  dVar9 = (param_2[2] - param_1[2]) * dVar10 +
          (*param_2 - *param_1) * dVar9 + (param_2[1] - param_1[1]) * dVar8;
  uVar5 = 1;
  if (param_5 <= ABS(dVar9)) {
    if (0.0 <= dVar9) {
      dVar8 = -dVar8;
      uVar7 = uVar7 ^ 0x80000000;
    }
    dVar10 = (double)(-(ulonglong)(dVar9 < 0.0) & (ulonglong)dVar10 |
                     ~-(ulonglong)(dVar9 < 0.0) & (ulonglong)-dVar10);
    dVar9 = param_3[2] * dVar10 + *param_3 * (double)CONCAT44(uVar7,uVar6) + param_3[1] * dVar8;
    if ((dVar9 < 1.0000000116860974e-07) ||
       (dVar9 = (((param_1[2] - dVar10 * param_5) - param_2[2]) * dVar10 +
                ((*param_1 - (double)CONCAT44(uVar7,uVar6) * param_5) - *param_2) *
                (double)CONCAT44(uVar7,uVar6) +
                ((param_1[1] - dVar8 * param_5) - param_2[1]) * dVar8) / dVar9, param_4 < dVar9)) {
      uVar5 = 0;
    }
    else {
      *param_6 = dVar9;
      param_5 = param_5 + dVar9;
      dVar9 = param_3[1];
      dVar1 = param_3[2];
      dVar2 = param_2[2];
      dVar3 = param_2[1];
      *param_7 = *param_3 * param_5 + *param_2;
      param_7[1] = dVar9 * param_5 + dVar3;
      param_7[2] = param_5 * dVar1 + dVar2;
      auVar4._8_4_ = SUB84(dVar8,0);
      auVar4._0_8_ = CONCAT44(uVar7,uVar6) ^ 0x8000000000000000;
      auVar4._12_4_ = (uint)((ulonglong)dVar8 >> 0x20) ^ 0x80000000;
      *param_8 = auVar4;
      *(double *)param_8[1] = -dVar10;
    }
  }
  return uVar5;
}



// FUNCTION 140664770 FUN_140664770 body=12 status=ok
// SIG undefined FUN_140664770(void)

void FUN_140664770(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140664779. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14066477c FUN_14066477c body=59 status=ok
// SIG undefined FUN_14066477c(void)

undefined8 * FUN_14066477c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b47b0c0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1406647b8 FUN_1406647b8 body=813 status=ok
// SIG undefined FUN_1406647b8(void)

void FUN_1406647b8(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  longlong local_190 [13];
  float local_128;
  undefined2 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  float local_108;
  float local_100 [2];
  longlong *local_f8;
  float local_e8;
  char local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_b8;
  float local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar1 = param_1 + -0x30;
  lVar8 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(lVar1);
  if (lVar8 != 0) {
    fVar13 = (float)*(double *)(lVar8 + 0x6e0);
    fVar5 = *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x20) = fVar13;
    if (0 < (longlong)*(int *)(param_1 + 0x40)) {
      plVar2 = (longlong *)(param_1 + 0x38);
      local_198 = param_1 + 0x28;
      uVar9 = (longlong)*(int *)(param_1 + 0x40);
      do {
        uVar3 = uVar9 - 1;
        pfVar4 = (float *)(*plVar2 + uVar3 * 0x78);
        local_108 = *pfVar4;
        FUN_1457320fc(local_100,pfVar4 + 2);
        local_98 = pfVar4[0x1c];
        cVar7 = FUN_144a0db96(&local_d0);
        if ((cVar7 == '\0') || (cVar7 = FUN_144904448(&local_d0), cVar7 != '\0')) {
          fVar12 = local_e8;
          if (local_108 < fVar13) {
LAB_1406649c0:
            local_e8 = fVar12;
            fVar12 = local_98;
            iVar10 = 0;
            if ((longlong)*(int *)(param_1 + 0x30) != 0) {
              iVar10 = 0;
              lVar8 = 0;
              do {
                fVar6 = *(float *)(*(longlong *)(param_1 + 0x28) + lVar8);
                iVar10 = iVar10 + (uint)(local_100[0] < fVar6);
                if (fVar6 <= local_100[0]) break;
                bVar11 = (longlong)*(int *)(param_1 + 0x30) * 0x88 + -0x88 != lVar8;
                lVar8 = lVar8 + 0x88;
              } while (bVar11);
            }
            FUN_1457320fc(local_190,local_100);
            local_128 = fVar12;
            local_124 = 1;
            local_120 = 0;
            uStack_118 = 0;
            local_110 = 0;
            FUN_145732176(local_190);
            FUN_145732362(local_198,local_190,iVar10);
            FUN_140665564(local_190);
            goto LAB_140664a34;
          }
          FUN_140665294(&local_d0,local_190);
          lVar8 = local_190[0];
          if ((local_190[0] != 0) && ((DAT_14cb26569 & 1) != 0)) {
            FUN_1400848c0(*(undefined8 *)(local_190[0] + 0x50),local_190[0]);
          }
          if (lVar8 == 0) {
            lVar8 = local_b8;
          }
          if (lVar8 == 0) goto LAB_140664a34;
          if ((*(char *)(lVar8 + 0x5c) == '\x01') &&
             (fVar12 = *(float *)(lVar8 + 0x58), 0.1 < *(float *)(lVar8 + 0x58)))
          goto LAB_1406649c0;
        }
        else {
LAB_140664a34:
          FUN_1457322ec(plVar2,uVar3 & 0xffffffff);
          FUN_145732246(plVar2);
        }
        local_d0 = 0;
        local_c8 = 0xffffffffffffffff;
        if (local_d4 == '\x01') {
          local_d4 = '\0';
        }
        if (local_f8 != (longlong *)0x0) {
          (**(code **)(*local_f8 + 0x10))();
        }
        bVar11 = 1 < (longlong)uVar9;
        uVar9 = uVar3;
      } while (bVar11);
    }
    fVar12 = (fVar13 - fVar5) + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x24) = fVar12;
    fVar13 = (float)(**(code **)(*(longlong *)(param_1 + -0x30) + 0x2a0))(lVar1);
    fVar5 = *(float *)(param_1 + 0x24);
    if ((fVar13 <= fVar12) || (fVar5 < 0.0)) {
      fVar13 = 0.0;
      if (0.0 <= fVar5) {
        fVar13 = fVar5;
      }
      FUN_140664ae6(lVar1,fVar13);
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  if ((local_90 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140664ae6 FUN_140664ae6 body=1788 status=ok
// SIG undefined FUN_140664ae6(void)

void FUN_140664ae6(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  uint *puVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  longlong *plVar25;
  int iVar26;
  byte bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_c8 [32];
  uint local_a8;
  uint local_a4;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  undefined7 uVar14;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar6 = -1;
  if ((longlong)(int)param_1[0xc] != 0) {
    lVar7 = 0;
    do {
      if (*(char *)(param_1[0xb] + 0x6c + lVar7) == '\0') {
        iVar6 = *(int *)(param_1[0xb] + 0x68 + lVar7);
        break;
      }
      lVar7 = lVar7 + 0x88;
    } while ((longlong)(int)param_1[0xc] * 0x88 != lVar7);
  }
  lVar7 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar7 == 0) {
LAB_14066504c:
    uVar12 = *(uint *)(param_1 + 0xc);
    if (uVar12 != 0) {
      uVar17 = 0;
      lVar7 = param_1[0xb];
      goto LAB_140664c7d;
    }
  }
  else {
    if (((((*(longlong *)(lVar7 + 0x30) != 0) &&
          (lVar24 = *(longlong *)(*(longlong *)(lVar7 + 0x30) + 0x2b0), lVar24 != 0)) &&
         (*(longlong *)(lVar24 + 0x588) != 0)) &&
        (*(double *)(lVar7 + 0x708) <= *(double *)(lVar7 + 0x6d0))) ||
       (((*(byte *)(lVar7 + 0x154) & 0x40) != 0 && (iVar26 = FUN_14490d72a(lVar7), iVar26 == 3)))) {
      bVar27 = 1;
    }
    else {
      if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
        lVar24 = 0;
        do {
          param_3 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar24);
          if (*(longlong *)(param_3 + 0x360) == lVar7) {
            if ((param_3 != 0) && (bVar27 = 1, (*(byte *)(param_3 + 0x278) & 1) != 0))
            goto LAB_140664bcd;
            break;
          }
          lVar24 = lVar24 + 8;
        } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar24);
      }
      cVar4 = FUN_144a80e00(lVar7);
      if (cVar4 == '\0') goto LAB_14066504c;
      bVar27 = *(byte *)(lVar7 + 0x155) >> 7;
    }
LAB_140664bcd:
    uVar12 = *(uint *)(param_1 + 0xc);
    if (uVar12 != 0) {
      lVar7 = param_1[0xb];
      if (bVar27 == 0) {
        uVar17 = 0;
LAB_140664c7d:
        fVar28 = 0.0;
        if (*(int *)(lVar7 + 0x80) != 0) {
          fVar28 = *(float *)(*(longlong *)(lVar7 + 0x78) + 0x10 +
                             (longlong)(*(int *)(lVar7 + 0x80) + -1) * 0x18);
        }
        fVar29 = 0.0;
        if (*(char *)(lVar7 + 0x6d) == '\0') {
          fVar29 = (float)param_2;
        }
        fVar30 = *(float *)(lVar7 + 0x18);
        if (*(float *)(lVar7 + 0x18) <= fVar28) {
          fVar30 = fVar28;
        }
        bVar3 = fVar30 <= *(float *)(lVar7 + 0x70) + fVar29;
      }
      else {
        uVar17 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
        if (*(char *)(lVar7 + 0x56) == '\x01') goto LAB_140664c7d;
        bVar3 = false;
      }
      lVar24 = lVar7 + 0x108;
      iVar26 = 0;
      uVar22 = 0;
      local_a8 = (uint)uVar17;
      lVar8 = (longlong)(int)uVar12;
      lVar9 = -(longlong)(int)uVar12;
LAB_140664ce7:
      do {
        iVar2 = (int)uVar22;
        uVar23 = iVar2 + 1;
        if ((int)uVar23 < (int)uVar12) {
          lVar10 = (longlong)iVar2;
          lVar18 = lVar10 + 2;
          puVar20 = (uint *)(lVar24 + lVar10 * 0x88);
          uVar21 = CONCAT71((int7)((ulonglong)lVar24 >> 8),1);
          local_a4 = (uint)uVar21;
          lVar16 = -1;
          do {
            local_90 = lVar24;
            if (((char)local_a8 == '\0') || (*(char *)((longlong)puVar20 + -0x2a) != '\0')) {
              uVar23 = *puVar20;
              uVar17 = (ulonglong)uVar23;
              fVar28 = 0.0;
              if (uVar23 != 0) {
                uVar17 = (longlong)(int)(uVar23 - 1) * 3;
                fVar28 = *(float *)(*(longlong *)(puVar20 + -2) + 0x10 +
                                   (longlong)(int)(uVar23 - 1) * 0x18);
              }
              fVar29 = 0.0;
              if (*(char *)((longlong)puVar20 + -0x13) == '\0') {
                fVar29 = (float)param_2;
              }
              fVar30 = (float)puVar20[-0x1a];
              if ((float)puVar20[-0x1a] <= fVar28) {
                fVar30 = fVar28;
              }
              bVar27 = fVar30 <= fVar29 + (float)puVar20[-4] ^ bVar3;
              uVar21 = CONCAT71((int7)(uVar17 >> 8),bVar27);
              if (bVar27 != 0) {
                uVar23 = iVar2 - (int)lVar16;
                break;
              }
            }
            else if (bVar3 != false) {
              local_a0 = lVar8;
              local_98 = lVar9;
              FUN_145a1f903(lVar10 * 0x88 + lVar7,-(int)lVar16);
              if ((local_a4 & 1) != 0) {
                uVar22 = (uVar22 & 0xffffffff) - lVar16;
                bVar3 = false;
                uVar17 = (ulonglong)local_a8;
                lVar8 = local_a0;
                lVar9 = local_98;
                lVar24 = local_90;
                goto LAB_140664ce7;
              }
              uVar17 = (ulonglong)local_a8;
              goto LAB_140664d1a;
            }
            uVar21 = CONCAT71((int7)((ulonglong)uVar21 >> 8),lVar18 < lVar8);
            local_a4 = (uint)uVar21;
            lVar16 = lVar16 + -1;
            lVar18 = lVar18 + 1;
            puVar20 = puVar20 + 0x22;
            uVar23 = uVar12;
          } while (lVar9 + lVar10 != lVar16);
          uVar17 = (ulonglong)local_a8;
          local_a0 = lVar8;
          local_98 = lVar9;
          uVar19 = local_a4;
        }
        else {
          uVar19 = 0;
        }
        uVar22 = (ulonglong)uVar23;
        iVar15 = uVar23 - iVar2;
        if (!bVar3) {
          if (iVar26 != iVar2) {
            local_a4 = uVar19;
            local_a0 = lVar8;
            local_98 = lVar9;
            memmove((void *)((longlong)iVar26 * 0x88 + lVar7),
                    (void *)((longlong)iVar2 * 0x88 + lVar7),(longlong)iVar15 * 0x88);
            uVar17 = (ulonglong)local_a8;
            lVar8 = local_a0;
            lVar9 = local_98;
            uVar19 = local_a4;
          }
          iVar26 = iVar26 + iVar15;
          bVar3 = true;
          if ((uVar19 & 1) == 0) break;
          goto LAB_140664ce7;
        }
        local_a4 = uVar19;
        local_a0 = lVar8;
        local_98 = lVar9;
        FUN_145a1f903((longlong)iVar2 * 0x88 + lVar7,iVar15);
        uVar17 = uVar17 & 0xffffffff;
        bVar3 = false;
        lVar8 = local_a0;
        lVar9 = local_98;
      } while ((local_a4 & 1) != 0);
LAB_140664d1a:
      *(int *)(param_1 + 0xc) = iVar26;
      if (iVar26 != 0) {
        lVar7 = param_1[0xb];
        lVar24 = (longlong)iVar26 * 0x88;
        lVar8 = 0;
        iVar26 = -1;
        do {
          if (*(char *)(lVar7 + 0x6c + lVar8) == '\0') {
            iVar26 = *(int *)(lVar7 + 0x68 + lVar8);
            break;
          }
          lVar8 = lVar8 + 0x88;
        } while (lVar24 != lVar8);
        bVar27 = iVar6 != iVar26;
        do {
          if (((char)uVar17 == '\0') || (*(char *)(lVar7 + 0x56) == '\x01')) {
            plVar1 = (longlong *)(lVar7 + 0x30);
            cVar4 = FUN_144904448(plVar1);
            if (cVar4 == '\0') {
              bVar5 = FUN_140665212(lVar7,param_2,1);
LAB_140664e8f:
              uVar17 = (ulonglong)local_a8;
              if (*(char *)(lVar7 + 0x6c) == '\x01') {
                *(undefined1 *)(lVar7 + 0x6c) = 0;
LAB_140664f93:
                bVar5 = 1;
              }
            }
            else {
              plVar25 = (longlong *)*plVar1;
              if (((plVar25 == (longlong *)0x0) || (*(longlong *)(lVar7 + 0x38) == -1)) ||
                 (*plVar25 != *(longlong *)(lVar7 + 0x38))) {
                plVar25 = (longlong *)0x0;
              }
              else {
                *(int *)(plVar25 + 0x21) = (int)plVar25[0x21] + 1;
              }
              plVar11 = &local_88;
              FUN_140665294(plVar1,&local_88);
              lVar8 = local_88;
              if (((local_88 == 0) || ((DAT_14cb26569 & 1) == 0)) ||
                 ((iVar6 = _finite((double)*(float *)(local_88 + 0x4c)), iVar6 == 0 ||
                  (fVar28 = *(float *)(lVar8 + 0x4c), fVar28 <= 0.0001)))) {
                lVar9 = FUN_140316ff8();
                fVar28 = *(float *)(lVar9 + 0x664);
              }
              fVar28 = (float)FUN_1406653e8((int)plVar25[0x42],fVar28);
              uVar14 = (undefined7)((ulonglong)&local_88 >> 8);
              uVar13 = (undefined4)CONCAT71(uVar14,1);
              if (*(char *)(lVar7 + 0x55) == '\0') {
                fVar29 = (float)(**(code **)(*param_1 + 0x2a8))
                                          (param_1,CONCAT71((int7)((ulonglong)plVar11 >> 8),
                                                            *(undefined1 *)(lVar7 + 0x6c)) ^ 1);
                uVar13 = (undefined4)CONCAT71(uVar14,fVar29 < fVar28);
              }
              if ((lVar8 != 0) && ((DAT_14cb26569 & 1) != 0)) {
                FUN_1400848c0(*(undefined8 *)(lVar8 + 0x50),lVar8);
              }
              if (((plVar25 != (longlong *)0x0) &&
                  (*(int *)(plVar25 + 0x21) = (int)plVar25[0x21] + -1, (int)plVar25[0x26] < 1)) &&
                 (FUN_1400847bc(plVar25 + 0x17,0), (int)plVar25[0x21] == 0)) {
                FUN_140087e46(plVar25);
                if (*plVar25 != -1) {
                  if (DAT_14cb259f8 == 0) goto LAB_140664e70;
                  FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar25);
                }
                if (DAT_14cb259f8 != 0) {
                  FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar25);
                }
              }
LAB_140664e70:
              bVar5 = FUN_140665212(lVar7,param_2,uVar13);
              if ((char)uVar13 != '\0') goto LAB_140664e8f;
              uVar17 = (ulonglong)local_a8;
              if (*(char *)(lVar7 + 0x6c) == '\0') {
                fVar28 = *(float *)(lVar7 + 0x74);
                fVar29 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
                uVar17 = (ulonglong)local_a8;
                if (fVar28 <= fVar29) goto LAB_140664e99;
                *(undefined1 *)(lVar7 + 0x6c) = 1;
                goto LAB_140664f93;
              }
            }
LAB_140664e99:
            bVar27 = bVar27 | bVar5;
          }
          lVar7 = lVar7 + 0x88;
          lVar24 = lVar24 + -0x88;
        } while (lVar24 != 0);
        if ((bVar27 & 1) != 0) goto LAB_140664f10;
        goto LAB_140664be1;
      }
    }
  }
  if (iVar6 != -1) {
LAB_140664f10:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_c8);
  }
LAB_140664be1:
  if ((local_80 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140665212 FUN_140665212 body=130 status=ok
// SIG undefined FUN_140665212(void)

undefined8 FUN_140665212(longlong param_1,float param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  
  fVar4 = 0.0;
  if (param_3 == '\0') {
    fVar4 = *(float *)(param_1 + 0x74) + param_2;
  }
  *(float *)(param_1 + 0x74) = fVar4;
  if (*(char *)(param_1 + 0x6d) == '\0') {
    lVar3 = (longlong)*(int *)(param_1 + 0x80);
    fVar4 = *(float *)(param_1 + 0x70);
    if (lVar3 == 0) {
      *(float *)(param_1 + 0x70) = fVar4 + param_2;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x78);
      lVar1 = lVar2 + lVar3 * 0x18;
      lVar3 = lVar3 * 0x18;
      do {
        if (fVar4 < *(float *)(lVar2 + 0x10)) goto LAB_14066526e;
        lVar2 = lVar2 + 0x18;
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != 0);
      lVar2 = lVar1 + -0x18;
LAB_14066526e:
      *(float *)(param_1 + 0x70) = fVar4 + param_2;
      if ((lVar2 != 0) && (*(float *)(lVar2 + 0x10) <= fVar4 + param_2)) {
        return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      }
    }
  }
  return 0;
}



// FUNCTION 140665294 FUN_140665294 body=199 status=ok
// SIG undefined FUN_140665294(void)

undefined8 * FUN_140665294(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if ((((param_1[2] == 0) || (plVar1 = (longlong *)*param_1, plVar1 == (longlong *)0x0)) ||
      (param_1[1] == -1)) || (*plVar1 != param_1[1])) {
    *param_2 = 0;
  }
  else {
    *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + 1;
    FUN_14066535c(plVar1,param_2,param_1[2]);
    *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
    if (((int)plVar1[0x26] < 1) && (FUN_1400847bc(plVar1 + 0x17,0), (int)plVar1[0x21] == 0)) {
      FUN_140087e46(plVar1);
      if (*plVar1 != -1) {
        if (DAT_14cb259f8 == 0) {
          return param_2;
        }
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14066535c FUN_14066535c body=140 status=ok
// SIG undefined FUN_14066535c(void)

longlong * FUN_14066535c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  
  if (param_3 != 0) {
    plVar4 = (longlong *)(param_1 + 0x120);
    do {
      lVar1 = *plVar4;
      plVar4 = (longlong *)(lVar1 + 0x30);
    } while (lVar1 != 0 && lVar1 != param_3);
    if (lVar1 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0x18);
      *param_2 = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      if ((DAT_14cb26569 & 1) == 0) {
        return param_2;
      }
      piVar2 = *(int **)(lVar1 + 0x50);
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      if (DAT_14cb259f8 == 0) {
        iVar3 = 5;
      }
      else {
        if ((char)piVar2[1] != '\x01') {
          FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
          return param_2;
        }
        iVar3 = 2;
      }
      LOCK();
      piVar2[2] = iVar3;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1406653e8 FUN_1406653e8 body=345 status=ok
// SIG undefined FUN_1406653e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1406653e8(float param_1,float param_2)

{
  float fVar1;
  
  if (param_2 < 0.0001) {
    fVar1 = 0.0;
  }
  else {
    param_1 = param_1 / param_2;
    if (1.0 <= param_1) {
      param_1 = 1.0;
    }
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    param_1 = 1.0 - param_1;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb25aa4) {
      FUN_144b3d300(&DAT_14cb25aa4);
      if (DAT_14cb25aa4 == -1) {
        DAT_14cb25aa0 = 1e-10;
        _Init_thread_footer(&DAT_14cb25aa4);
      }
    }
    fVar1 = param_1 * param_1 * param_1;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb25aac) {
      FUN_144b3d300(&DAT_14cb25aac);
      if (DAT_14cb25aac == -1) {
        _DAT_14cb25aa8 = 0.43429446;
        _Init_thread_footer(&DAT_14cb25aac);
      }
    }
    if (fVar1 < DAT_14cb25aa0) {
      fVar1 = -200.0;
    }
    else {
      fVar1 = logf(fVar1);
      fVar1 = fVar1 * 20.0 * _DAT_14cb25aa8;
    }
    fVar1 = param_1 * (fVar1 * 0.5 - fVar1) + fVar1;
  }
  return fVar1;
}



// FUNCTION 140665542 FUN_140665542 body=33 status=ok
// SIG undefined FUN_140665542(void)

void FUN_140665542(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0xffffffffffffffff;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}



// FUNCTION 140665564 FUN_140665564 body=92 status=ok
// SIG undefined FUN_140665564(void)

void FUN_140665564(longlong param_1)

{
  FUN_1406655c0(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001406655b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1406655c0 FUN_1406655c0 body=44 status=ok
// SIG undefined FUN_1406655c0(void)

void FUN_1406655c0(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1406655ec FUN_1406655ec body=22 status=ok
// SIG undefined FUN_1406655ec(void)

bool FUN_1406655ec(undefined2 param_1)

{
  char cVar1;
  
  cVar1 = FUN_140665610(param_1);
  return cVar1 != '\0';
}



// FUNCTION 140665610 FUN_140665610 body=185 status=ok
// SIG undefined FUN_140665610(void)

ulonglong FUN_140665610(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 < 0xd800) {
    uVar1 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar1 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar1 = param_1 >> 5;
    }
  }
  else {
    lVar2 = 0x11f4;
    if (0x10ffff < param_1) goto LAB_140665680;
    uVar1 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_14994e420 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar2 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_14994d3e0 + (ulonglong)uVar1 * 2) * 4;
LAB_140665680:
  uVar1 = 1 << ((&DAT_14994d3e0)[lVar2 * 2] & 0x1f);
  if ((uVar1 & 0x7000) == 0) {
    if (param_1 - 9 < 0x17) {
      return (ulonglong)CONCAT31((int3)(param_1 - 9 >> 8),param_1 - 0x1c < 0xfffffff2);
    }
  }
  else if (((param_1 != 0xa0) && (param_1 != 0x202f)) && (param_1 != 0x2007)) {
    return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  return 0;
}



// FUNCTION 1406656ca FUN_1406656ca body=634 status=ok
// SIG undefined FUN_1406656ca(void)

int FUN_1406656ca(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  bool bVar9;
  double dVar10;
  float fVar11;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  ulonglong uStack_80;
  undefined2 *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar4 = (undefined8 *)FUN_1447a1f4a(param_1 + 8);
  local_78 = (undefined2 *)0x0;
  uStack_70 = 0;
  local_88 = (wchar_t *)0x0;
  uStack_80 = 0;
  if (*(int *)(puVar4 + 1) == 0) {
    psVar8 = &DAT_149dfb77a;
  }
  else {
    psVar8 = (short *)*puVar4;
    if (psVar8 == (short *)0x0) {
      iVar7 = 0;
      goto LAB_1406657ba;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x78);
  bVar9 = false;
  iVar7 = 0;
  do {
    sVar5 = *psVar8;
    if (sVar5 == 0) break;
    if (sVar5 == 0x3c) {
      bVar9 = (longlong)uStack_80 < 0;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      if (bVar9) {
        FUN_1446f8c06(&local_88,0);
      }
      bVar9 = true;
      if (local_88 != (wchar_t *)0x0) {
        *local_88 = L'\0';
      }
    }
    else {
      if (sVar5 == 0x3e) {
        iVar6 = (int)uStack_70 + -1;
        if ((int)uStack_70 == 0) {
          iVar6 = 0;
        }
        fVar11 = 0.0;
        if (1 < (int)uStack_80) {
          dVar10 = _wtof(local_88);
          fVar11 = (float)dVar10;
        }
        iVar3 = *(int *)(param_1 + 0x80);
        *(uint *)(param_1 + 0x80) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x84) < iVar3 + 1U) {
          FUN_140edeb3e(plVar1,iVar3);
        }
        lVar2 = *plVar1 + (longlong)iVar3 * 0x18;
        FUN_140009b9a(lVar2,&local_78);
        *(float *)(lVar2 + 0x10) = fVar11;
        bVar9 = (longlong)uStack_70 < 0;
        uStack_70 = uStack_70 & 0xffffffff00000000;
        if (bVar9) {
          FUN_1446f8c06(&local_78,0);
        }
        if (local_78 != (undefined2 *)0x0) {
          *local_78 = 0;
        }
        bVar9 = (longlong)uStack_80 < 0;
        uStack_80 = uStack_80 & 0xffffffff00000000;
        if (bVar9) {
          FUN_1446f8c06(&local_88,0);
        }
        iVar7 = iVar7 + iVar6;
        if (local_88 != (wchar_t *)0x0) {
          *local_88 = L'\0';
        }
      }
      else {
        if (bVar9) {
          FUN_140002184(&local_88);
          bVar9 = true;
          goto LAB_140665761;
        }
        if (sVar5 == 0x5c) {
          sVar5 = psVar8[1];
          psVar8 = psVar8 + 1;
        }
        FUN_140002184(&local_78,sVar5);
      }
      bVar9 = false;
    }
LAB_140665761:
    psVar8 = psVar8 + 1;
  } while (psVar8 != (short *)0x0);
  iVar6 = (int)uStack_70;
  if (1 < (int)uStack_70) {
    iVar3 = *(int *)(param_1 + 0x80);
    *(uint *)(param_1 + 0x80) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x84) < iVar3 + 1U) {
      FUN_140edeb3e(plVar1,iVar3);
    }
    iVar7 = iVar7 + iVar6 + -1;
    lVar2 = *plVar1 + (longlong)iVar3 * 0x18;
    FUN_140009b9a(lVar2,&local_78);
    *(undefined4 *)(lVar2 + 0x10) = 0;
  }
LAB_1406657ba:
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140665946 FUN_140665946 body=461 status=ok
// SIG undefined FUN_140665946(void)

void FUN_140665946(longlong param_1,longlong param_2,void *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_128 [32];
  void *local_108;
  longlong local_100;
  void *local_f8;
  ulonglong local_f0;
  undefined1 local_e8 [48];
  longlong local_b8;
  undefined8 local_b0;
  undefined2 local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (*(int *)(param_1 + 0x30) != 0)) {
    FUN_140665b14(param_1,param_2 + 0x20,param_4,param_5);
    if ((*(longlong *)(param_1 + 0x58) != 0) &&
       (local_f0 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x58) + 8), local_f0 != 0)) {
      local_100 = *(longlong *)((longlong)param_3 + 0x58);
      lVar7 = 0;
      uVar4 = 0;
      local_f8 = param_3;
      do {
        lVar1 = *(longlong *)(param_1 + 0x28);
        uVar6 = (ulonglong)((uint)*(ushort *)(**(longlong **)(param_1 + 0x58) + lVar7) * 0x30);
        lVar2 = *(longlong *)(lVar1 + uVar6);
        plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x70) + 0xb8);
        memcpy(local_e8,param_3,0x82);
        local_60 = (void *)0x0;
        local_58 = *(int *)((longlong)param_3 + 0x90);
        lVar5 = (longlong)local_58;
        if (lVar5 == 0) {
          local_54 = 0;
        }
        else {
          local_108 = *(void **)((longlong)param_3 + 0x88);
          FUN_1446dd670(&local_60,local_58,0);
          memcpy(local_60,local_108,lVar5 * 2);
        }
        param_3 = local_f8;
        local_50 = *(undefined4 *)((longlong)local_f8 + 0x98);
        local_b0 = *(undefined8 *)(lVar2 + 0x70);
        local_68 = (undefined2)uVar4;
        local_b8 = *(int *)(lVar1 + uVar6 + 0x14) + local_100;
        (**(code **)(*plVar3 + 0x48))(plVar3,local_e8);
        if (local_60 != (void *)0x0) {
          FUN_1400020a8();
        }
        uVar4 = uVar4 + 1;
        lVar7 = lVar7 + 0x18;
      } while (local_f0 != uVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140665b14 FUN_140665b14 body=527 status=ok
// SIG undefined FUN_140665b14(void)

void FUN_140665b14(undefined8 param_1,longlong *param_2,undefined8 param_3,int *param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  iVar2 = (int)param_2[5];
  if (iVar2 == 0) {
    uVar10 = 1;
    uVar13 = 0;
    iVar4 = 0;
    iVar9 = 0;
  }
  else {
    puVar5 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar5 = (uint *)(param_2 + 2);
    }
    uVar12 = *puVar5;
    if (uVar12 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar10 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar10 = uVar13;
      }
      iVar9 = 0;
      do {
        if (uVar10 == uVar13) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar12 = puVar5[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar10 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar10 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar12 = 0xffffffff;
    do {
      lVar14 = *(longlong *)(*param_2 + 200 + (longlong)iVar4 * 0xe0);
      if (lVar14 == 0) {
        lVar14 = *param_2 + (longlong)iVar4 * 0xe0;
        *param_4 = *param_4 + *(int *)(lVar14 + 0xc0);
        FUN_1403257c8(param_3,lVar14 + 0x18);
        FUN_1403257c8(param_3,lVar14 + 0x68);
      }
      else {
        FUN_140665b14(param_1,lVar14,param_3,param_4);
      }
      uVar12 = uVar12 & ~(uint)uVar10;
      puVar5 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar5 = (uint *)(param_2 + 2);
      }
      iVar3 = (int)param_2[5];
      iVar4 = (int)uVar13;
      lVar14 = (longlong)iVar4;
      uVar8 = puVar5[lVar14] & uVar12;
      if (uVar8 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar4 < iVar6) {
          lVar11 = 0;
          do {
            uVar8 = puVar5[lVar14 + lVar11 + 1];
            if (uVar8 != 0) {
              uVar13 = (ulonglong)(iVar4 + (int)lVar11 + 1);
              uVar12 = 0xffffffff;
              goto LAB_140665c86;
            }
            iVar9 = iVar9 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar7 - lVar14 != lVar11);
          uVar12 = 0xffffffff;
          iVar4 = iVar7;
        }
        uVar13 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_140665c86:
        uVar10 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar10 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
  return;
}



// FUNCTION 140665d24 FUN_140665d24 body=327 status=ok
// SIG undefined FUN_140665d24(void)

void FUN_140665d24(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *lpTlsValue;
  
  lpTlsValue = TlsGetValue(*(DWORD *)(param_1 + 0x10f0));
  if (lpTlsValue == (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1080));
    lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
    *lpTlsValue = 0;
    lpTlsValue[1] = 0;
    lpTlsValue[2] = 0;
    iVar2 = *(int *)(param_1 + 0x10d8);
    *(uint *)(param_1 + 0x10d8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x10dc) < iVar2 + 1U) {
      FUN_145732a9c(param_1 + 0x10d0,iVar2);
    }
    *(longlong **)(*(longlong *)(param_1 + 0x10d0) + (longlong)iVar2 * 8) = lpTlsValue;
    TlsSetValue(*(DWORD *)(param_1 + 0x10f0),lpTlsValue);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1080));
  }
  iVar2 = (int)lpTlsValue[1];
  *(uint *)(lpTlsValue + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)lpTlsValue + 0xc) < iVar2 + 1U) {
    FUN_140665e6c(lpTlsValue,iVar2);
  }
  lVar3 = *lpTlsValue;
  *(undefined ***)(lVar3 + (longlong)iVar2 * 0x10) = &PTR_LAB_149e01c00;
  uVar4 = param_2[1];
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  if ((int)param_3 < 1) {
    param_3 = (uint)(*(int *)(param_1 + 0x10f4) * 5) >> 2;
  }
  if ((DAT_14c866fe0 - (double)lpTlsValue[2] <= 1.0) && ((int)lpTlsValue[1] < (int)param_3)) {
    return;
  }
  lpTlsValue[2] = (longlong)DAT_14c866fe0;
  FUN_144a0dd48(param_1,lpTlsValue);
  return;
}



// FUNCTION 140665e6c FUN_140665e6c body=269 status=ok
// SIG undefined FUN_140665e6c(void)

void FUN_140665e6c(longlong param_1,int param_2)

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



// FUNCTION 140665f7a FUN_140665f7a body=61 status=ok
// SIG undefined FUN_140665f7a(void)

undefined8 * FUN_140665f7a(char *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    *param_2 = 0;
  }
  else if (*param_1 == '\x02') {
    FUN_140665fb8(lVar1,param_2);
  }
  else {
    FUN_14066620e(lVar1,param_2);
  }
  return param_2;
}



// FUNCTION 140665fb8 FUN_140665fb8 body=201 status=ok
// SIG undefined FUN_140665fb8(void)

undefined8 * FUN_140665fb8(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  longlong local_48;
  byte local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x40) == 0) {
    *param_2 = 0;
  }
  else {
    local_58 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x40) = local_58;
    bVar1 = *(byte *)(param_1 + 0x38);
    local_40 = 1;
    if ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 6) & 0x10) == 0) {
      local_40 = FUN_147430c75();
      local_58 = *(undefined4 *)(param_1 + 0x30);
    }
    local_40 = local_40 | bVar1;
    local_38 = 0;
    local_50 = 2;
    local_48 = param_1 + 0x20;
    FUN_140666082(param_2,param_3,L"FRawStaticIndexBuffer16");
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140666082 FUN_140666082 body=394 status=ok
// SIG undefined FUN_140666082(void)

longlong *
FUN_140666082(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,int param_5,
             int param_6,undefined8 param_7,byte param_8)

{
  ulonglong uVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  int local_8c;
  int local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  uint local_5c;
  undefined1 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = 0;
  local_70 = 1;
  local_6c = 0;
  uStack_64 = 0;
  local_5c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_58 = 0;
  local_54 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_78 = param_7;
  local_50 = param_3;
  FUN_1446f470e(&local_48,param_3,1);
  uStack_40 = *param_4;
  local_8c = param_5 * param_6;
  local_58 = local_8c == 0;
  if ((bool)local_58) {
    param_6 = 0;
  }
  uVar1 = 0x100000;
  if (!(bool)local_58) {
    uVar1 = (ulonglong)((uint)param_8 << 8 | 0x8001);
  }
  local_84 = (undefined4)uVar1;
  local_88 = param_6;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,CONCAT71((int7)(uVar1 >> 8),1));
    local_a0 = &local_80;
    local_a8 = 0x78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,param_1,param_2,&local_8c);
    *(undefined4 *)(*param_1 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_a0 = &local_80;
    local_a8 = 0x78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,param_1,param_2,&local_8c);
    *(undefined4 *)(*param_1 + 0x18) = 0x78;
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14066620e FUN_14066620e body=201 status=ok
// SIG undefined FUN_14066620e(void)

undefined8 * FUN_14066620e(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  longlong local_48;
  byte local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x40) == 0) {
    *param_2 = 0;
  }
  else {
    local_58 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x40) = local_58;
    bVar1 = *(byte *)(param_1 + 0x38);
    local_40 = 1;
    if ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 6) & 0x10) == 0) {
      local_40 = FUN_147430c75();
      local_58 = *(undefined4 *)(param_1 + 0x30);
    }
    local_40 = local_40 | bVar1;
    local_38 = 0;
    local_50 = 4;
    local_48 = param_1 + 0x20;
    FUN_140666082(param_2,param_3,L"FRawStaticIndexBuffer32");
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406662d8 FUN_1406662d8 body=114 status=ok
// SIG undefined FUN_1406662d8(void)

void FUN_1406662d8(longlong *param_1,int param_2)

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



// FUNCTION 14066634a FUN_14066634a body=411 status=ok
// SIG undefined FUN_14066634a(void)

undefined4 * FUN_14066634a(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [24];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1 + 0x8a) == '\x01') {
    *(double *)(param_2 + 4) = DAT_14c8464f0;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar1 = DAT_14c8464e0._4_4_;
    *param_2 = (undefined4)DAT_14c8464e0;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_e8);
  }
  FUN_14066734e(param_1,&local_a8);
  local_48 = (undefined4)local_a8;
  uStack_44 = local_a8._4_4_;
  uStack_40 = (undefined4)uStack_a0;
  uStack_3c = uStack_a0._4_4_;
  local_38 = (undefined4)local_98;
  uStack_34 = local_98._4_4_;
  uStack_30 = uStack_90;
  uStack_2c = uStack_8c;
  FUN_1448052ee(&local_48,local_c0);
  bVar4 = *(char *)(param_1 + 0x89) - 1;
  if (bVar4 < 3) {
    pdVar5 = (double *)(&PTR_DAT_14b974e38)[bVar4];
    pdVar6 = (double *)(&PTR_DAT_14b974e50)[bVar4];
    pdVar7 = (double *)(&PTR_DAT_14b974e68)[bVar4];
  }
  else {
    pdVar7 = (double *)&DAT_14c8464e0;
    pdVar6 = (double *)&DAT_14c8464e8;
    pdVar5 = &DAT_14c8464f0;
  }
  local_a8 = *pdVar7;
  uStack_a0 = *pdVar6;
  local_98 = *pdVar5;
  dVar8 = local_98 * local_98 + local_a8 * local_a8 + uStack_a0 * uStack_a0;
  if ((dVar8 != 1.0) || (NAN(dVar8))) {
    if (dVar8 < 9.99999993922529e-09) {
      local_98 = DAT_14c8464f0;
      local_a8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_a0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      dVar8 = 1.0 / SQRT(dVar8);
      local_98 = local_98 * dVar8;
      uStack_a0 = uStack_a0 * dVar8;
      local_a8 = local_a8 * dVar8;
    }
  }
  FUN_1401c9a0e(local_c0,param_2,&local_a8);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406664e6 FUN_1406664e6 body=48 status=ok
// SIG undefined FUN_1406664e6(void)

void FUN_1406664e6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 140666516 FUN_140666516 body=402 status=ok
// SIG undefined FUN_140666516(void)

bool FUN_140666516(longlong *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((*param_2 != 0) && (plVar3 = (longlong *)param_2[1], plVar3 != (longlong *)0x0)) {
    if (*(code **)(*plVar3 + 0x20) == (code *)&LAB_144a7e90a) {
      plVar3 = plVar3 + 0x143;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3);
    }
    if ((int)plVar3[6] != *(int *)((longlong)plVar3 + 0x5c)) {
      plVar4 = plVar3 + 0xc;
      if ((longlong *)plVar3[0xd] != (longlong *)0x0) {
        plVar4 = (longlong *)plVar3[0xd];
      }
      iVar1 = *(int *)((longlong)plVar4 +
                      (ulonglong)((int)plVar3[0xe] - 1U & *(uint *)(param_2 + 2)) * 4);
      if (iVar1 != -1) {
        while (*(uint *)(plVar3[5] + (longlong)iVar1 * 0xe0) != *(uint *)(param_2 + 2)) {
          iVar1 = *(int *)((longlong)iVar1 * 0xe0 + plVar3[5] + 0xd0);
          if (iVar1 == -1) {
            return false;
          }
        }
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
        }
        plVar3 = (longlong *)param_2[1];
        if (plVar3 != (longlong *)0x0 && lVar5 != 0) {
          lVar5 = *param_2;
          if ((lVar5 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar5);
            plVar3 = (longlong *)param_2[1];
          }
          if (lVar5 == 0) {
            plVar3 = (longlong *)0x0;
          }
          cVar2 = (**(code **)(*plVar3 + 0x30))();
          if ((cVar2 != '\0') &&
             (((*param_1 == 0 || (*(longlong *)(&DAT_00006850 + *param_1) == 0)) ||
              (cVar2 = FUN_140fb2b02(), cVar2 != '\0')))) {
            if (*(byte *)(param_1 + 0x37) < 2) {
              return true;
            }
            if (param_1[0x23] == 0) {
              lVar5 = 0;
            }
            else {
              lVar5 = param_1[0x24];
            }
            lVar6 = 0;
            if (*param_2 != 0) {
              lVar6 = param_2[1];
            }
            if (param_1[0x23] != *param_2) {
              return true;
            }
            if (lVar5 != lVar6) {
              return true;
            }
            return (int)param_1[0x25] != (int)param_2[2];
          }
        }
      }
    }
  }
  return false;
}



// FUNCTION 1406666a8 FUN_1406666a8 body=2448 status=ok
// SIG undefined FUN_1406666a8(void)

void FUN_1406666a8(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_98 [44];
  int local_6c;
  longlong *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar17 = *(longlong *)(param_1 + 0x58);
  if ((lVar17 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar17);
  }
  plVar5 = *(longlong **)(param_1 + 0x60);
  uVar7 = *(uint *)(param_1 + 0x68);
  lVar13 = *(longlong *)(param_1 + 0x90);
  if ((lVar13 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar13);
  }
  lVar14 = *(longlong *)(param_1 + 0x98);
  iVar15 = *(int *)(param_1 + 0xa0);
  lVar8 = *param_2;
  if ((DAT_14c950c29 & 1) != 0) {
    local_6c = iVar15;
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *param_2;
      iVar15 = local_6c;
    }
  }
  bVar2 = DAT_14c950c29;
  plVar11 = (longlong *)(param_1 + 0x58);
  *(longlong *)(param_1 + 0x58) = lVar8;
  *(longlong *)(param_1 + 0x60) = param_2[1];
  *(int *)(param_1 + 0x68) = (int)param_2[2];
  lVar6 = *param_3;
  if ((bVar2 & 1) != 0) {
    local_6c = iVar15;
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c(lVar6);
      lVar6 = *param_3;
      lVar8 = *plVar11;
      iVar15 = local_6c;
    }
  }
  *(longlong *)(param_1 + 0x90) = lVar6;
  *(longlong *)(param_1 + 0x98) = param_3[1];
  *(int *)(param_1 + 0xa0) = (int)param_3[2];
  *(undefined2 *)(param_1 + 0xa8) = 0;
  if (lVar8 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x60);
  }
  plVar16 = plVar5;
  if (lVar17 == 0) {
    plVar16 = (longlong *)0x0;
  }
  if (((lVar8 == lVar17) && (plVar4 == plVar16)) && (*(uint *)(param_1 + 0x68) == uVar7)) {
    if ((lVar8 != 0) && (plVar4 = *(longlong **)(param_1 + 0x60), plVar4 != (longlong *)0x0)) {
      if (*(code **)(*plVar4 + 0x20) == (code *)&LAB_144a7e90a) {
        plVar4 = plVar4 + 0x143;
        uVar1 = uVar7;
      }
      else {
        local_6c = iVar15;
        local_68 = plVar11;
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);
        uVar1 = *(uint *)(param_1 + 0x68);
        plVar11 = local_68;
        iVar15 = local_6c;
      }
      if ((int)plVar4[6] != *(int *)((longlong)plVar4 + 0x5c)) {
        plVar10 = plVar4 + 0xc;
        if ((longlong *)plVar4[0xd] != (longlong *)0x0) {
          plVar10 = (longlong *)plVar4[0xd];
        }
        iVar9 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar4[0xe] - 1U & uVar1) * 4);
        if (iVar9 != -1) {
          do {
            if (*(uint *)(plVar4[5] + (longlong)iVar9 * 0xe0) == uVar1) goto LAB_14066681f;
            iVar9 = *(int *)((longlong)iVar9 * 0xe0 + plVar4[5] + 0xd0);
          } while (iVar9 != -1);
        }
      }
    }
    if (plVar5 != (longlong *)0x0 && lVar17 != 0) {
      if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_144a7e90a) {
        plVar5 = plVar5 + 0x143;
      }
      else {
        local_68 = plVar11;
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))();
        plVar11 = local_68;
      }
      if ((int)plVar5[6] != *(int *)((longlong)plVar5 + 0x5c)) {
        plVar4 = plVar5 + 0xc;
        if ((longlong *)plVar5[0xd] != (longlong *)0x0) {
          plVar4 = (longlong *)plVar5[0xd];
        }
        iVar9 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar5[0xe] - 1U & uVar7) * 4);
        if (iVar9 != -1) {
          do {
            if (*(uint *)(plVar5[5] + (longlong)iVar9 * 0xe0) == uVar7) goto LAB_14066681f;
            iVar9 = *(int *)((longlong)iVar9 * 0xe0 + plVar5[5] + 0xd0);
          } while (iVar9 != -1);
        }
      }
    }
    if (*(longlong *)(param_1 + 0x90) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x98);
    }
    if (lVar13 == 0) {
      lVar14 = 0;
    }
    if (((lVar8 == lVar14) && (*(longlong *)(param_1 + 0x90) == lVar13)) &&
       (*(int *)(param_1 + 0xa0) == iVar15)) {
LAB_14066681f:
      if ((*plVar11 != 0) && (plVar5 = *(longlong **)(param_1 + 0x60), plVar5 != (longlong *)0x0)) {
        if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_144a7e90a) {
          plVar5 = plVar5 + 0x143;
        }
        else {
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
        }
        if ((int)plVar5[6] != *(int *)((longlong)plVar5 + 0x5c)) {
          uVar7 = *(uint *)(param_1 + 0x68);
          plVar4 = plVar5 + 0xc;
          if ((longlong *)plVar5[0xd] != (longlong *)0x0) {
            plVar4 = (longlong *)plVar5[0xd];
          }
          iVar15 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar5[0xe] - 1U & uVar7) * 4);
          if (iVar15 != -1) {
            do {
              if (*(uint *)(plVar5[5] + (longlong)iVar15 * 0xe0) == uVar7) {
                if (*(char *)(param_1 + 0x88) == '\x01') {
                  puVar12 = &DAT_14cbcb1e0;
                  if ((*plVar11 == 0) ||
                     (plVar5 = *(longlong **)(param_1 + 0x60), plVar5 == (longlong *)0x0))
                  goto LAB_14066694b;
                  if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_144a7e90a) {
                    plVar5 = plVar5 + 0x143;
                  }
                  else {
                    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
                    uVar7 = *(uint *)(param_1 + 0x68);
                  }
                  if ((int)plVar5[6] == *(int *)((longlong)plVar5 + 0x5c)) goto LAB_14066694b;
                  plVar4 = plVar5 + 0xc;
                  if ((longlong *)plVar5[0xd] != (longlong *)0x0) {
                    plVar4 = (longlong *)plVar5[0xd];
                  }
                  iVar15 = *(int *)((longlong)plVar4 +
                                   (ulonglong)((int)plVar5[0xe] - 1U & uVar7) * 4);
                  if (iVar15 == -1) goto LAB_14066694b;
                  lVar17 = plVar5[5];
                  iVar9 = iVar15;
                  goto LAB_140666919;
                }
                break;
              }
              iVar15 = *(int *)((longlong)iVar15 * 0xe0 + plVar5[5] + 0xd0);
            } while (iVar15 != -1);
          }
        }
      }
      goto LAB_1406669ac;
    }
  }
  *(undefined1 *)(param_1 + 0xa8) = 1;
  if (*(longlong *)(param_1 + 0x58) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  if (((*(longlong *)(param_1 + 0x58) != lVar17) || (plVar5 != plVar16)) ||
     (*(uint *)(param_1 + 0x68) != uVar7)) {
    *(undefined1 *)(param_1 + 0xa9) = 1;
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))();
    FUN_14120e202(uVar3,plVar11);
    lVar17 = *(longlong *)(param_1 + 0x58);
  }
  if ((lVar17 != 0) && (plVar5 = *(longlong **)(param_1 + 0x60), plVar5 != (longlong *)0x0)) {
    if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_144a7e90a) {
      plVar5 = plVar5 + 0x143;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
    }
    if ((int)plVar5[6] != *(int *)((longlong)plVar5 + 0x5c)) {
      uVar7 = *(uint *)(param_1 + 0x68);
      plVar4 = plVar5 + 0xc;
      if ((longlong *)plVar5[0xd] != (longlong *)0x0) {
        plVar4 = (longlong *)plVar5[0xd];
      }
      iVar15 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar5[0xe] - 1U & uVar7) * 4);
      if (iVar15 != -1) {
        do {
          if (*(uint *)(plVar5[5] + (longlong)iVar15 * 0xe0) == uVar7) {
            puVar12 = &DAT_14cbcb1e0;
            if ((*plVar11 == 0) ||
               (plVar5 = *(longlong **)(param_1 + 0x60), plVar5 == (longlong *)0x0))
            goto LAB_140666cc1;
            if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_144a7e90a) {
              plVar5 = plVar5 + 0x143;
            }
            else {
              plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
              uVar7 = *(uint *)(param_1 + 0x68);
            }
            if ((int)plVar5[6] == *(int *)((longlong)plVar5 + 0x5c)) goto LAB_140666cc1;
            plVar4 = plVar5 + 0xc;
            if ((longlong *)plVar5[0xd] != (longlong *)0x0) {
              plVar4 = (longlong *)plVar5[0xd];
            }
            iVar15 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar5[0xe] - 1U & uVar7) * 4);
            if (iVar15 == -1) goto LAB_140666cc1;
            lVar17 = plVar5[5];
            iVar9 = iVar15;
            goto LAB_140666c8f;
          }
          iVar15 = *(int *)((longlong)iVar15 * 0xe0 + plVar5[5] + 0xd0);
        } while (iVar15 != -1);
      }
    }
  }
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  goto LAB_140666cee;
  while (iVar9 = *(int *)((longlong)iVar9 * 0xe0 + lVar17 + 0xd0), iVar9 != -1) {
LAB_140666919:
    if (*(uint *)(lVar17 + (longlong)iVar9 * 0xe0) == uVar7) goto LAB_14066692d;
  }
  goto LAB_14066694b;
  while (iVar9 = *(int *)((longlong)iVar9 * 0xe0 + lVar17 + 0xd0), iVar9 != -1) {
LAB_140666c8f:
    if (*(uint *)(lVar17 + (longlong)iVar9 * 0xe0) == uVar7) goto LAB_140666ca3;
  }
  goto LAB_140666cc1;
  while (iVar15 = *(int *)(lVar13 + 0xd0), iVar15 != -1) {
LAB_14066692d:
    lVar13 = lVar17 + (longlong)iVar15 * 0xe0;
    if (*(uint *)(lVar17 + (longlong)iVar15 * 0xe0) == uVar7) goto LAB_140666944;
  }
  lVar13 = 0;
LAB_140666944:
  puVar12 = (undefined8 *)(lVar13 + 0x10);
LAB_14066694b:
  FUN_1449a52e6(puVar12,&local_60);
  if (((ABS((double)CONCAT44(uStack_5c,local_60) - *(double *)(param_1 + 0x70)) <=
        9.999999747378752e-05) &&
      (ABS((double)CONCAT44(uStack_54,uStack_58) - *(double *)(param_1 + 0x78)) <=
       9.999999747378752e-05)) &&
     (ABS(local_50 - *(double *)(param_1 + 0x80)) <= 9.999999747378752e-05)) goto LAB_1406669ac;
  *(double *)(param_1 + 0x80) = local_50;
  *(undefined4 *)(param_1 + 0x70) = local_60;
  *(undefined4 *)(param_1 + 0x74) = uStack_5c;
  *(undefined4 *)(param_1 + 0x78) = uStack_58;
  *(undefined4 *)(param_1 + 0x7c) = uStack_54;
  *(undefined1 *)(param_1 + 0x88) = 1;
  if (*(longlong *)(param_1 + 0x58) == 0) {
    uVar3 = 0;
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x60);
    if (plVar5 != (longlong *)0x0) {
      if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_144a7e90a) {
        plVar5 = plVar5 + 0x143;
      }
      else {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,plVar11);
      }
      if ((int)plVar5[6] != *(int *)((longlong)plVar5 + 0x5c)) {
        uVar7 = *(uint *)(param_1 + 0x68);
        plVar4 = plVar5 + 0xc;
        if ((longlong *)plVar5[0xd] != (longlong *)0x0) {
          plVar4 = (longlong *)plVar5[0xd];
        }
        iVar15 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar5[0xe] - 1U & uVar7) * 4);
        if (iVar15 != -1) {
          do {
            bVar18 = *(uint *)(plVar5[5] + (longlong)iVar15 * 0xe0) == uVar7;
            uVar3 = CONCAT71((int7)(int3)((uint)iVar15 >> 8),bVar18);
            if (bVar18) break;
            iVar15 = *(int *)((longlong)iVar15 * 0xe0 + plVar5[5] + 0xd0);
          } while (iVar15 != -1);
          goto LAB_140666a79;
        }
      }
    }
    uVar3 = 0;
  }
LAB_140666a79:
  FUN_140667058(param_1 + 0x28,plVar11,uVar3);
LAB_1406669ac:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar15 = *(int *)(lVar13 + 0xd0), iVar15 != -1) {
LAB_140666ca3:
    lVar13 = lVar17 + (longlong)iVar15 * 0xe0;
    if (*(uint *)(lVar17 + (longlong)iVar15 * 0xe0) == uVar7) goto LAB_140666cba;
  }
  lVar13 = 0;
LAB_140666cba:
  puVar12 = (undefined8 *)(lVar13 + 0x10);
LAB_140666cc1:
  FUN_1449a52e6(puVar12,&local_60);
  *(double *)(param_1 + 0x80) = local_50;
  *(undefined4 *)(param_1 + 0x70) = local_60;
  *(undefined4 *)(param_1 + 0x74) = uStack_5c;
  *(undefined4 *)(param_1 + 0x78) = uStack_58;
  *(undefined4 *)(param_1 + 0x7c) = uStack_54;
  *(undefined1 *)(param_1 + 0x88) = 1;
LAB_140666cee:
  if ((*(longlong *)(param_1 + 0x58) != 0) &&
     (plVar5 = *(longlong **)(param_1 + 0x60), plVar5 != (longlong *)0x0)) {
    if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_144a7e90a) {
      plVar5 = plVar5 + 0x143;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
    }
    if ((int)plVar5[6] != *(int *)((longlong)plVar5 + 0x5c)) {
      plVar4 = plVar5 + 0xc;
      if ((longlong *)plVar5[0xd] != (longlong *)0x0) {
        plVar4 = (longlong *)plVar5[0xd];
      }
      iVar15 = *(int *)((longlong)plVar4 +
                       (ulonglong)((int)plVar5[0xe] - 1U & *(uint *)(param_1 + 0x68)) * 4);
      if (iVar15 != -1) {
        do {
          if (*(uint *)(plVar5[5] + (longlong)iVar15 * 0xe0) == *(uint *)(param_1 + 0x68)) break;
          iVar15 = *(int *)((longlong)iVar15 * 0xe0 + plVar5[5] + 0xd0);
        } while (iVar15 != -1);
      }
    }
    if ((*plVar11 != 0) && (plVar5 = *(longlong **)(param_1 + 0x60), plVar5 != (longlong *)0x0)) {
      if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_144a7e90a) {
        plVar5 = plVar5 + 0x143;
      }
      else {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
      }
      if ((int)plVar5[6] != *(int *)((longlong)plVar5 + 0x5c)) {
        plVar11 = plVar5 + 0xc;
        if ((longlong *)plVar5[0xd] != (longlong *)0x0) {
          plVar11 = (longlong *)plVar5[0xd];
        }
        iVar15 = *(int *)((longlong)plVar11 +
                         (ulonglong)((int)plVar5[0xe] - 1U & *(uint *)(param_1 + 0x68)) * 4);
        if (iVar15 != -1) {
          do {
            if (*(uint *)(plVar5[5] + (longlong)iVar15 * 0xe0) == *(uint *)(param_1 + 0x68)) break;
            iVar15 = *(int *)((longlong)iVar15 * 0xe0 + plVar5[5] + 0xd0);
          } while (iVar15 != -1);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 140667058 FUN_140667058 body=173 status=ok
// SIG undefined FUN_140667058(void)

void FUN_140667058(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_1406670ef;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1406670ef:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140667105 FUN_140667105 body=585 status=ok
// SIG undefined FUN_140667105(void)

float FUN_140667105(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  float fVar9;
  
  if ((*param_2 != 0) && (plVar2 = (longlong *)param_2[1], plVar2 != (longlong *)0x0)) {
    if (*(code **)(*plVar2 + 0x20) == (code *)&LAB_144a7e90a) {
      plVar2 = plVar2 + 0x143;
    }
    else {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    }
    if ((int)plVar2[6] != *(int *)((longlong)plVar2 + 0x5c)) {
      uVar3 = *(uint *)(param_2 + 2);
      plVar5 = plVar2 + 0xc;
      if ((longlong *)plVar2[0xd] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar2[0xd];
      }
      iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar2[0xe] - 1U & uVar3) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(plVar2[5] + (longlong)iVar4 * 0xe0) == uVar3) {
            puVar7 = &DAT_14cbcb1e0;
            if ((*param_2 == 0) || (plVar2 = (longlong *)param_2[1], plVar2 == (longlong *)0x0))
            goto LAB_140667250;
            if (*(code **)(*plVar2 + 0x20) == (code *)&LAB_144a7e90a) {
              plVar2 = plVar2 + 0x143;
            }
            else {
              plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
              uVar3 = *(uint *)(param_2 + 2);
            }
            if ((int)plVar2[6] == *(int *)((longlong)plVar2 + 0x5c)) goto LAB_140667250;
            plVar5 = plVar2 + 0xc;
            if ((longlong *)plVar2[0xd] != (longlong *)0x0) {
              plVar5 = (longlong *)plVar2[0xd];
            }
            iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar2[0xe] - 1U & uVar3) * 4);
            if (iVar4 == -1) goto LAB_140667250;
            lVar1 = plVar2[5];
            iVar6 = iVar4;
            goto LAB_140667208;
          }
          iVar4 = *(int *)((longlong)iVar4 * 0xe0 + plVar2[5] + 0xd0);
        } while (iVar4 != -1);
      }
    }
  }
  goto LAB_1406672e5;
  while (iVar6 = *(int *)((longlong)iVar6 * 0xe0 + lVar1 + 0xd0), iVar6 != -1) {
LAB_140667208:
    if (*(uint *)(lVar1 + (longlong)iVar6 * 0xe0) == uVar3) goto LAB_14066722a;
  }
  goto LAB_140667250;
  while (iVar4 = *(int *)(lVar8 + 0xd0), iVar4 != -1) {
LAB_1406672ec:
    lVar8 = lVar1 + (longlong)iVar4 * 0xe0;
    if (*(uint *)(lVar1 + (longlong)iVar4 * 0xe0) == uVar3) goto LAB_14066730e;
  }
  lVar8 = 0;
LAB_14066730e:
  puVar7 = (undefined8 *)(lVar8 + 0x10);
  goto LAB_140667312;
  while (iVar4 = *(int *)(lVar8 + 0xd0), iVar4 != -1) {
LAB_14066722a:
    lVar8 = lVar1 + (longlong)iVar4 * 0xe0;
    if (*(uint *)(lVar1 + (longlong)iVar4 * 0xe0) == uVar3) goto LAB_14066724c;
  }
  lVar8 = 0;
LAB_14066724c:
  puVar7 = (undefined8 *)(lVar8 + 0x10);
LAB_140667250:
  if (*(char *)((longlong)puVar7 + 0x94) == '\x01') {
    puVar7 = &DAT_14cbcb1e0;
    if ((*param_2 != 0) && (plVar2 = (longlong *)param_2[1], plVar2 != (longlong *)0x0)) {
      if (*(code **)(*plVar2 + 0x20) == (code *)&LAB_144a7e90a) {
        plVar2 = plVar2 + 0x143;
      }
      else {
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
        uVar3 = *(uint *)(param_2 + 2);
      }
      if ((int)plVar2[6] != *(int *)((longlong)plVar2 + 0x5c)) {
        plVar5 = plVar2 + 0xc;
        if ((longlong *)plVar2[0xd] != (longlong *)0x0) {
          plVar5 = (longlong *)plVar2[0xd];
        }
        iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar2[0xe] - 1U & uVar3) * 4);
        if (iVar4 != -1) {
          lVar1 = plVar2[5];
          iVar6 = iVar4;
          do {
            if (*(uint *)(lVar1 + (longlong)iVar6 * 0xe0) == uVar3) goto LAB_1406672ec;
            iVar6 = *(int *)((longlong)iVar6 * 0xe0 + lVar1 + 0xd0);
          } while (iVar6 != -1);
        }
      }
    }
LAB_140667312:
    fVar9 = *(float *)(param_1 + 0x1c);
    if (*(float *)(param_1 + 0x1c) <= *(float *)(puVar7 + 0x13)) {
      fVar9 = *(float *)(puVar7 + 0x13);
    }
  }
  else {
LAB_1406672e5:
    fVar9 = *(float *)(param_1 + 0x1c);
  }
  return fVar9;
}



// FUNCTION 14066734e FUN_14066734e body=1893 status=ok
// SIG undefined FUN_14066734e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14066734e(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 uVar21;
  longlong lVar22;
  double *pdVar24;
  double *pdVar25;
  ulonglong uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auStack_298 [32];
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
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
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
  longlong *plVar23;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  uVar19 = 0x4c846480;
  pdVar24 = (double *)&DAT_14c846480;
  pdVar25 = param_2;
  for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
    *pdVar25 = *pdVar24;
    pdVar24 = pdVar24 + 1;
    pdVar25 = pdVar25 + 1;
  }
  plVar23 = (longlong *)param_1[1];
  if (plVar23 == (longlong *)0x0) {
    uVar21 = 0;
    if (*param_1 == 0) goto LAB_14066740d;
    lVar22 = *(longlong *)(*param_1 + 0x1c8);
    pdVar24 = (double *)(lVar22 + 0x240);
    if (lVar22 == 0) {
      pdVar24 = (double *)&DAT_14c846480;
    }
  }
  else {
    if (param_1[2] != 0) {
      uVar19 = (**(code **)(*plVar23 + 0x4a8))(plVar23,param_2,param_1[2],0);
      uVar21 = SUB84(plVar23,0);
      goto LAB_14066740d;
    }
    pdVar24 = (double *)(plVar23 + 0x48);
  }
  pdVar25 = param_2;
  for (lVar22 = 0xc; uVar21 = 0, lVar22 != 0; lVar22 = lVar22 + -1) {
    *pdVar25 = *pdVar24;
    pdVar24 = pdVar24 + 1;
    pdVar25 = pdVar25 + 1;
  }
LAB_14066740d:
  auVar40 = _DAT_149934d80;
  auVar30 = *(undefined1 (*) [16])(param_2 + 8);
  dVar5 = auVar30._0_8_;
  dVar9 = auVar30._8_8_;
  auVar3 = *(undefined1 (*) [16])(param_2 + 10);
  dVar6 = auVar3._0_8_;
  auVar31 = *(undefined1 (*) [16])(param_1 + 0xc);
  dVar7 = auVar31._0_8_;
  dVar10 = auVar31._8_8_;
  auVar4 = *(undefined1 (*) [16])(param_1 + 0xe);
  dVar8 = auVar4._0_8_;
  auVar30 = minpd(auVar31,auVar30);
  auVar34 = minpd(auVar4,auVar3);
  auVar31._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
  auVar31._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
  iVar18 = movmskpd(uVar19,auVar31);
  auVar30._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
  auVar30._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
  uVar20 = movmskpd(uVar21,auVar30);
  if ((uVar20 & 0x3fffffff) == 0 && iVar18 == 0) {
    dVar37 = (double)param_1[4];
    dVar39 = (double)param_1[5];
    dVar12 = (double)param_1[6];
    dVar13 = (double)param_1[7];
    dVar14 = *param_2;
    dVar15 = param_2[1];
    dVar16 = param_2[2];
    dVar17 = param_2[3];
    dVar1 = param_2[3];
    dVar38 = param_2[3];
    dVar2 = param_2[1];
    dVar35 = param_2[1];
    dVar33 = param_2[2];
    dVar36 = param_2[2];
    dVar29 = dVar39 * dVar33 * -1.0 + dVar12 * dVar2 + dVar13 * *param_2 * 1.0 + dVar37 * dVar1;
    dVar32 = dVar37 * dVar36 * 1.0 + dVar13 * dVar35 + dVar12 * *param_2 * -1.0 + dVar39 * dVar38;
    auVar40._0_8_ =
         dVar13 * dVar33 * 1.0 + ((*param_2 * dVar39 * 1.0 + dVar12 * dVar1) - dVar37 * dVar2);
    auVar40._8_8_ =
         dVar12 * dVar36 * -1.0 + ((*param_2 * dVar37 * -1.0 + dVar13 * dVar38) - dVar39 * dVar35);
    dVar36 = (double)param_1[8] * dVar5;
    dVar37 = (double)param_1[9] * dVar9;
    dVar39 = (double)param_1[10] * dVar6;
    dVar12 = (double)param_1[0xb] * auVar3._8_8_;
    dVar2 = dVar37 * dVar14 - dVar15 * dVar36;
    dVar35 = dVar39 * dVar15 - dVar16 * dVar37;
    dVar33 = dVar36 * dVar16 - dVar14 * dVar39;
    dVar13 = dVar12 * dVar17 - dVar17 * dVar12;
    dVar35 = dVar35 + dVar35;
    dVar33 = dVar33 + dVar33;
    dVar2 = dVar2 + dVar2;
    dVar13 = dVar13 + dVar13;
    local_f8 = (dVar2 * dVar15 - dVar16 * dVar33) + dVar1 * dVar35 + dVar36 + param_2[4];
    dStack_f0 = (dVar35 * dVar16 - dVar2 * dVar14) + dVar38 * dVar33 + dVar37 + param_2[5];
    local_e8 = (dVar33 * dVar14 - dVar15 * dVar35) + dVar1 * dVar2 + dVar39 + param_2[6];
    dVar38 = (dVar13 * dVar17 - dVar13 * dVar17) + dVar38 * dVar13 + dVar12 + param_2[7];
  }
  else {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar35 = param_2[2];
    dVar33 = dVar2 + dVar2;
    dVar36 = dVar35 + dVar35;
    dVar32 = dVar1 * (dVar1 + dVar1);
    local_188 = (1.0 - (dVar32 + dVar2 * dVar33)) * dVar6;
    dVar29 = param_2[3];
    dVar37 = dVar36 * dVar29;
    dVar39 = (dVar1 + dVar1) * param_2[3];
    dVar29 = dVar33 * dVar29;
    local_198 = (dVar29 + *param_2 * dVar36) * dVar6;
    dVar32 = (DAT_149934d80._8_8_ - (dVar35 * dVar36 + dVar32)) * dVar9;
    dVar38 = (dVar33 * dVar1 + dVar37) * dVar5;
    local_1a8 = (dVar36 * dVar2 + dVar39) * dVar9;
    dStack_190 = (dVar36 * dVar2 - dVar39) * dVar6;
    local_1c8 = (*param_2 * dVar36 - dVar29) * dVar5;
    local_1d8._8_4_ = SUB84(dVar38,0);
    local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar35 * dVar36 + dVar2 * dVar33)) * dVar5;
    local_1d8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar32,0);
    local_1b8._0_8_ = (dVar33 * dVar1 - dVar37) * dVar9;
    local_1b8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = param_2[4];
    dStack_170 = param_2[5];
    local_168 = param_2[6];
    uStack_160 = 0x3ff0000000000000;
    dVar38 = (double)param_1[4];
    dVar1 = (double)param_1[5];
    dVar2 = (double)param_1[6];
    dVar35 = dVar1 + dVar1;
    dVar33 = dVar2 + dVar2;
    dVar32 = dVar38 * (dVar38 + dVar38);
    local_208 = (1.0 - (dVar32 + dVar1 * dVar35)) * dVar8;
    dVar29 = (double)param_1[7];
    dVar36 = dVar33 * dVar29;
    dVar37 = (dVar38 + dVar38) * (double)param_1[7];
    dVar29 = dVar35 * dVar29;
    local_218 = (dVar29 + (double)param_1[4] * dVar33) * dVar8;
    dStack_210 = (dVar33 * dVar1 - dVar37) * dVar8;
    local_258 = ((double)DAT_149934d80 - (dVar2 * dVar33 + dVar1 * dVar35)) * dVar7;
    dVar32 = (DAT_149934d80._8_8_ - (dVar2 * dVar33 + dVar32)) * dVar10;
    dStack_250 = (dVar35 * dVar38 + dVar36) * dVar7;
    local_228 = (dVar33 * dVar1 + dVar37) * dVar10;
    local_248 = ((double)param_1[4] * dVar33 - dVar29) * dVar7;
    uStack_240 = 0;
    local_238._8_4_ = SUB84(dVar32,0);
    local_238._0_8_ = (dVar35 * dVar38 - dVar36) * dVar10;
    local_238._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = param_1[8];
    lStack_1f0 = param_1[9];
    local_1e8 = param_1[10];
    uStack_1e0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar34._8_8_ = -(ulonglong)(0.0 <= dVar9 * dVar10);
    auVar34._0_8_ = -(ulonglong)(0.0 <= dVar5 * dVar7);
    auVar30 = blendvpd(_DAT_149936790,auVar40,auVar34);
    uVar26 = -(ulonglong)(0.0 <= dVar6 * dVar8);
    dVar29 = (double)(~uVar26 & 0xbff0000000000000 | uVar26 & 0x3ff0000000000000);
    dVar32 = auVar30._0_8_;
    local_148 = local_148 * dVar32;
    local_150 = local_150 * dVar32;
    local_158 = local_158 * dVar32;
    dVar32 = auVar30._8_8_;
    local_128 = local_128 * dVar32;
    local_130 = local_130 * dVar32;
    local_138 = dVar32 * local_138;
    local_108 = local_108 * dVar29;
    local_110 = local_110 * dVar29;
    local_118 = dVar29 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    dVar29 = local_268 * local_268 + local_278 * local_278;
    dVar32 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar28._0_8_ = dVar29 + dVar32;
    auVar28._8_8_ = dVar29 + dVar32;
    auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
    auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
    auVar30 = sqrtpd(auVar28,auVar28);
    auVar30 = divpd(auVar40,auVar30);
    auVar41._0_8_ = auVar30._0_8_ * local_268;
    auVar41._8_8_ = auVar30._8_8_ * dStack_260;
    dVar29 = (double)((ulonglong)(local_278 * auVar30._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_));
    dVar32 = (double)((ulonglong)(dStack_270 * auVar30._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_));
    auVar40 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar27);
    dVar38 = 0.0;
  }
  dVar1 = auVar4._8_8_ * auVar3._8_8_;
  *param_2 = dVar29;
  param_2[1] = dVar32;
  *(undefined1 (*) [16])(param_2 + 2) = auVar40;
  auVar4._8_4_ = SUB84(dStack_f0,0);
  auVar4._0_8_ = local_f8;
  auVar4._12_4_ = (int)((ulonglong)dStack_f0 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 4) = auVar4;
  param_2[6] = local_e8;
  param_2[7] = dVar38;
  auVar11._8_4_ = SUB84(dVar10 * dVar9,0);
  auVar11._0_8_ = dVar7 * dVar5;
  auVar11._12_4_ = (int)((ulonglong)(dVar10 * dVar9) >> 0x20);
  *(undefined1 (*) [16])(param_2 + 8) = auVar11;
  auVar3._8_4_ = SUB84(dVar1,0);
  auVar3._0_8_ = dVar8 * dVar6;
  auVar3._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 10) = auVar3;
  if ((local_d0 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140667ab4 FUN_140667ab4 body=1758 status=ok
// SIG undefined FUN_140667ab4(void)

void FUN_140667ab4(longlong param_1,longlong *param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  longlong *plVar21;
  float fVar22;
  double dVar23;
  undefined1 auStack_268 [32];
  undefined4 local_248;
  undefined8 *local_240;
  undefined1 *local_238;
  double local_230;
  double local_228;
  double local_220;
  undefined1 local_218 [4];
  undefined4 local_214;
  float local_210;
  undefined4 local_174;
  byte local_16b;
  undefined4 local_148;
  double local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined2 local_ef;
  undefined1 local_ed;
  undefined4 local_ec;
  undefined1 local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined2 local_d8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0 [4];
  longlong local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if ((((*(longlong *)(param_1 + 0x40) == 0) || (*(longlong *)(param_1 + 0x48) == 0)) ||
      (*(longlong *)(param_1 + 0x50) == 0)) ||
     (((*param_2 == 0 || (param_2[1] == 0)) || (*(char *)((longlong)param_3 + 0x19) == '\0'))))
  goto LAB_140667f27;
  puVar19 = &DAT_14cbcb1e0;
  if ((*param_3 != 0) && (plVar21 = (longlong *)param_3[1], plVar21 != (longlong *)0x0)) {
    if (*(code **)(*plVar21 + 0x20) == (code *)&LAB_144a7e90a) {
      plVar21 = plVar21 + 0x143;
    }
    else {
      plVar21 = (longlong *)(**(code **)(*plVar21 + 0x20))(plVar21);
    }
    if ((int)plVar21[6] != *(int *)((longlong)plVar21 + 0x5c)) {
      uVar18 = *(uint *)(param_3 + 2);
      plVar5 = plVar21 + 0xc;
      if ((longlong *)plVar21[0xd] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar21[0xd];
      }
      iVar7 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar21[0xe] - 1U & uVar18) * 4);
      if (iVar7 != -1) {
        lVar10 = plVar21[5];
        iVar11 = iVar7;
        do {
          if (*(uint *)(lVar10 + (longlong)iVar11 * 0xe0) == uVar18) goto LAB_140667bc8;
          iVar11 = *(int *)((longlong)iVar11 * 0xe0 + lVar10 + 0xd0);
        } while (iVar11 != -1);
      }
    }
  }
  goto LAB_140667be3;
  while (iVar7 = *(int *)(lVar20 + 0xd0), iVar7 != -1) {
LAB_140667db4:
    lVar20 = lVar10 + (longlong)iVar7 * 0xe0;
    if (*(uint *)(lVar10 + (longlong)iVar7 * 0xe0) == uVar8) goto LAB_140667dcb;
  }
  lVar20 = 0;
LAB_140667dcb:
  plVar21 = (longlong *)(lVar20 + 0x10);
  goto LAB_140667dcf;
  while (iVar7 = *(int *)(lVar10 + 0x20 + lVar15 * 0x28), iVar7 != -1) {
LAB_140667fc5:
    lVar15 = (longlong)iVar7;
    lVar17 = *(longlong *)(lVar10 + lVar15 * 0x28);
    uVar16 = 0;
    if (lVar17 != 0) {
      uVar16 = *(ulonglong *)(lVar10 + 8 + lVar15 * 0x28);
    }
    if (((lVar17 == lVar20) && (uVar16 == uVar6)) &&
       (lVar17 = lVar10 + lVar15 * 0x28, *(uint *)(lVar17 + 0x10) == uVar18)) goto LAB_140667ff5;
  }
  lVar17 = 0;
LAB_140667ff5:
  if (*(char *)(lVar17 + 0x18) == '\x01') goto LAB_140667f01;
  goto LAB_140667f05;
  while (iVar7 = *(int *)(lVar20 + 0xd0), iVar7 != -1) {
LAB_140667bc8:
    lVar20 = lVar10 + (longlong)iVar7 * 0xe0;
    if (*(uint *)(lVar10 + (longlong)iVar7 * 0xe0) == uVar18) goto LAB_140667bdf;
  }
  lVar20 = 0;
LAB_140667bdf:
  puVar19 = (undefined8 *)(lVar20 + 0x10);
LAB_140667be3:
  FUN_1449a52e6(puVar19);
  local_108 = local_108 - (double)param_2[4];
  local_110 = local_110 - (double)param_2[3];
  local_118 = local_118 - (double)param_2[2];
  dVar2 = local_108 * local_108 + local_118 * local_118 + local_110 * local_110;
  if (((dVar2 != 1.0) || (dVar3 = local_108, dVar4 = local_110, dVar23 = local_118, NAN(dVar2))) &&
     (dVar3 = DAT_14c8464f0, dVar4 = DAT_14c8464e8, dVar23 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar2)) {
    dVar23 = 1.0 / SQRT(dVar2);
    dVar3 = local_108 * dVar23;
    dVar4 = local_110 * dVar23;
    dVar23 = local_118 * dVar23;
  }
  local_dc = 0;
  local_d8 = 0x101;
  local_b0 = 0;
  local_a8 = 0x800000000;
  local_90 = 0;
  local_88 = 0x400000000;
  local_f0 = 0;
  local_e4 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_ef = 1;
  local_ed = 0;
  local_e0 = 0;
  local_ec = 0x1000000;
  local_e8 = 1;
  lVar10 = *param_2;
  if (lVar10 != 0) {
    local_a0[0] = *(undefined4 *)(lVar10 + 0xc);
    local_88 = 0x400000001;
  }
  uVar18 = (uint)(lVar10 != 0);
  plVar21 = &DAT_14cbcb1e0;
  if ((*param_3 != 0) && (plVar5 = (longlong *)param_3[1], plVar5 != (longlong *)0x0)) {
    if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_144a7e90a) {
      plVar5 = plVar5 + 0x143;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
    }
    if ((int)plVar5[6] != *(int *)((longlong)plVar5 + 0x5c)) {
      uVar8 = *(uint *)(param_3 + 2);
      plVar9 = plVar5 + 0xc;
      if ((longlong *)plVar5[0xd] != (longlong *)0x0) {
        plVar9 = (longlong *)plVar5[0xd];
      }
      iVar7 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar5[0xe] - 1U & uVar8) * 4);
      if (iVar7 != -1) {
        lVar10 = plVar5[5];
        iVar11 = iVar7;
        do {
          if (*(uint *)(lVar10 + (longlong)iVar11 * 0xe0) == uVar8) goto LAB_140667db4;
          iVar11 = *(int *)((longlong)iVar11 * 0xe0 + lVar10 + 0xd0);
        } while (iVar11 != -1);
      }
    }
  }
LAB_140667dcf:
  if (*plVar21 != 0) {
    local_88 = CONCAT44(local_88._4_4_,uVar18 + 1);
    local_a0[uVar18] = *(undefined4 *)(*plVar21 + 0xc);
  }
  if ((char)param_3[3] == '\0') {
    if (*(int *)(param_1 + 0x118) != *(int *)(param_1 + 0x144)) {
      uVar18 = *(uint *)(param_3 + 2);
      uVar6 = param_3[1];
      uVar8 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      uVar8 = uVar18 >> 0xd ^ (uVar8 >> 0x10 ^ uVar8) - uVar18;
      uVar12 = uVar8 << 8 ^ (-0x61c88647 - uVar18) - uVar8;
      uVar13 = uVar12 >> 0xd ^ (uVar18 - uVar8) - uVar12;
      uVar14 = uVar13 >> 0xc ^ (uVar8 - uVar12) - uVar13;
      uVar8 = uVar14 << 0x10 ^ (uVar12 - uVar13) - uVar14;
      uVar12 = uVar8 >> 5 ^ (uVar13 - uVar14) - uVar8;
      uVar13 = uVar12 >> 3 ^ (uVar14 - uVar8) - uVar12;
      uVar8 = uVar13 << 10 ^ (uVar8 - uVar12) - uVar13;
      lVar10 = param_1 + 0x148;
      if (*(longlong *)(param_1 + 0x150) != 0) {
        lVar10 = *(longlong *)(param_1 + 0x150);
      }
      iVar7 = *(int *)(lVar10 + (ulonglong)
                                (*(int *)(param_1 + 0x158) - 1U &
                                (uVar8 >> 0xf ^ uVar12 - (uVar13 + uVar8))) * 4);
      if (iVar7 != -1) {
        lVar10 = *(longlong *)(param_1 + 0x110);
        lVar20 = *param_3;
        iVar11 = iVar7;
        if (lVar20 == 0) {
          uVar6 = 0;
        }
        do {
          lVar15 = (longlong)iVar11;
          lVar17 = *(longlong *)(lVar10 + lVar15 * 0x28);
          uVar16 = 0;
          if (lVar17 != 0) {
            uVar16 = *(ulonglong *)(lVar10 + 8 + lVar15 * 0x28);
          }
          if (((lVar17 == lVar20) && (uVar16 == uVar6)) &&
             (*(uint *)(lVar10 + lVar15 * 0x28 + 0x10) == uVar18)) goto LAB_140667fc5;
          iVar11 = *(int *)(lVar10 + 0x20 + lVar15 * 0x28);
        } while (iVar11 != -1);
      }
    }
LAB_140667f01:
    *(undefined1 *)((longlong)param_3 + 0x19) = 0;
  }
  else {
    memset(local_218,0,0x100);
    local_148 = 0xffffffff;
    local_214 = 0x3f800000;
    local_174 = 0xffffffff;
    lVar10 = param_2[1];
    fVar22 = (float)FUN_140667105(*(undefined8 *)(param_1 + 0x50),param_3);
    dVar1 = (double)fVar22;
    local_220 = dVar3 * dVar1 + (double)param_2[4];
    local_228 = dVar4 * dVar1 + (double)param_2[3];
    local_230 = dVar23 * dVar1 + (double)param_2[2];
    local_238 = &DAT_14cad0f10;
    local_240 = &local_100;
    local_248 = 0x18;
    FUN_1400b50cc(lVar10,local_218,param_2 + 2);
    if (((local_16b & 1) != 0) && (local_210 * local_210 < (float)dVar2)) goto LAB_140667f01;
  }
LAB_140667f05:
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
LAB_140667f27:
  if ((local_80 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140668194 FUN_140668194 body=370 status=ok
// SIG undefined FUN_140668194(void)

void FUN_140668194(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14066821d;
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
LAB_14066821d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140668306 FUN_140668306 body=889 status=ok
// SIG undefined FUN_140668306(void)

undefined8 FUN_140668306(ulonglong *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  float *pfVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  
  uVar3 = *param_1;
  if (*(int *)(uVar3 + 0x118) != *(int *)(uVar3 + 0x144)) {
    uVar1 = *(uint *)(param_2 + 2);
    uVar6 = param_2[1];
    uVar9 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    uVar9 = uVar1 >> 0xd ^ (uVar9 >> 0x10 ^ uVar9) - uVar1;
    uVar10 = uVar9 << 8 ^ (-0x61c88647 - uVar1) - uVar9;
    uVar14 = uVar10 >> 0xd ^ (uVar1 - uVar9) - uVar10;
    uVar9 = uVar14 >> 0xc ^ (uVar9 - uVar10) - uVar14;
    uVar13 = uVar9 << 0x10 ^ (uVar10 - uVar14) - uVar9;
    uVar10 = uVar13 >> 5 ^ (uVar14 - uVar9) - uVar13;
    uVar14 = uVar10 >> 3 ^ (uVar9 - uVar13) - uVar10;
    uVar9 = uVar14 << 10 ^ (uVar13 - uVar10) - uVar14;
    lVar7 = uVar3 + 0x148;
    if (*(longlong *)(uVar3 + 0x150) != 0) {
      lVar7 = *(longlong *)(uVar3 + 0x150);
    }
    uVar13 = *(int *)(uVar3 + 0x158) - 1;
    iVar8 = *(int *)(lVar7 + (ulonglong)((uVar9 >> 0xf ^ uVar10 - (uVar14 + uVar9)) & uVar13) * 4);
    bVar21 = true;
    if (iVar8 != -1) {
      lVar2 = *(longlong *)(uVar3 + 0x110);
      uVar15 = uVar6;
      iVar18 = iVar8;
      if (*param_2 == 0) {
        uVar15 = 0;
      }
      do {
        lVar11 = (longlong)iVar18;
        lVar5 = *(longlong *)(lVar2 + lVar11 * 0x28);
        uVar12 = 0;
        if (lVar5 != 0) {
          uVar12 = *(ulonglong *)(lVar2 + 8 + lVar11 * 0x28);
        }
        if (((lVar5 == *param_2) && (uVar12 == uVar15)) &&
           (iVar17 = iVar18, *(uint *)(lVar2 + lVar11 * 0x28 + 0x10) == uVar1)) break;
        iVar18 = *(int *)(lVar2 + 0x20 + lVar11 * 0x28);
        iVar17 = -1;
      } while (iVar18 != -1);
      bVar21 = iVar17 == -1;
    }
    uVar9 = *(uint *)(param_3 + 2);
    uVar15 = param_3[1];
    uVar10 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    uVar14 = uVar9 >> 0xd ^ (uVar10 >> 0x10 ^ uVar10) - uVar9;
    uVar19 = uVar14 << 8 ^ (-0x61c88647 - uVar9) - uVar14;
    uVar10 = uVar19 >> 0xd ^ (uVar9 - uVar14) - uVar19;
    uVar16 = uVar10 >> 0xc ^ (uVar14 - uVar19) - uVar10;
    uVar14 = uVar16 << 0x10 ^ (uVar19 - uVar10) - uVar16;
    uVar19 = uVar14 >> 5 ^ (uVar10 - uVar16) - uVar14;
    uVar10 = uVar19 >> 3 ^ (uVar16 - uVar14) - uVar19;
    uVar14 = uVar10 << 10 ^ (uVar14 - uVar19) - uVar10;
    uVar10 = *(uint *)(lVar7 + (ulonglong)((uVar14 >> 0xf ^ uVar19 - (uVar10 + uVar14)) & uVar13) *
                               4);
    if (uVar10 != 0xffffffff) {
      lVar7 = *(longlong *)(uVar3 + 0x110);
      lVar2 = *param_3;
      if (lVar2 == 0) {
        uVar15 = 0;
      }
      uVar3 = (ulonglong)uVar10;
      do {
        lVar11 = (longlong)(int)uVar3;
        lVar5 = *(longlong *)(lVar7 + lVar11 * 0x28);
        uVar3 = 0;
        if (lVar5 != 0) {
          uVar3 = *(ulonglong *)(lVar7 + 8 + lVar11 * 0x28);
        }
        if (((lVar5 == lVar2) && (uVar3 == uVar15)) &&
           (*(uint *)(lVar7 + lVar11 * 0x28 + 0x10) == uVar9)) {
          if (bVar21) {
            return CONCAT71((int7)((ulonglong)(lVar11 * 5) >> 8),1);
          }
          pfVar4 = (float *)&DAT_0000001c;
          if (iVar8 == -1) goto LAB_140668637;
          if (*param_2 == 0) {
            uVar6 = 0;
          }
          goto LAB_1406685f8;
        }
        uVar13 = *(uint *)(lVar7 + 0x20 + lVar11 * 0x28);
        uVar3 = (ulonglong)uVar13;
      } while (uVar13 != 0xffffffff);
    }
    if (!bVar21) {
      return 0;
    }
  }
  bVar21 = *(float *)((longlong)param_2 + 0x1c) == *(float *)((longlong)param_3 + 0x1c);
  bVar20 = *(float *)((longlong)param_2 + 0x1c) < *(float *)((longlong)param_3 + 0x1c);
  goto LAB_140668579;
  while (iVar8 = *(int *)(lVar7 + 0x20 + lVar11 * 0x28), iVar8 != -1) {
LAB_1406685f8:
    lVar11 = (longlong)iVar8;
    lVar5 = *(longlong *)(lVar7 + lVar11 * 0x28);
    uVar3 = 0;
    if (lVar5 != 0) {
      uVar3 = *(ulonglong *)(lVar7 + 8 + lVar11 * 0x28);
    }
    if (((lVar5 == *param_2) && (uVar3 == uVar6)) &&
       (lVar5 = lVar7 + lVar11 * 0x28, *(uint *)(lVar5 + 0x10) == uVar1)) goto LAB_140668633;
  }
  lVar5 = 0;
LAB_140668633:
  pfVar4 = (float *)(lVar5 + 0x1c);
LAB_140668637:
  do {
    lVar11 = (longlong)(int)uVar10;
    uVar3 = lVar11 * 5;
    lVar5 = *(longlong *)(lVar7 + lVar11 * 0x28);
    uVar6 = 0;
    if (lVar5 != 0) {
      uVar6 = *(ulonglong *)(lVar7 + 8 + lVar11 * 0x28);
    }
    if (((lVar5 == lVar2) && (uVar6 == uVar15)) &&
       (lVar5 = lVar7 + lVar11 * 0x28, *(uint *)(lVar5 + 0x10) == uVar9)) goto LAB_140668676;
    uVar10 = *(uint *)(lVar7 + 0x20 + lVar11 * 0x28);
  } while (uVar10 != 0xffffffff);
  lVar5 = 0;
LAB_140668676:
  bVar21 = *pfVar4 == *(float *)(lVar5 + 0x1c);
  bVar20 = *pfVar4 < *(float *)(lVar5 + 0x1c);
LAB_140668579:
  return CONCAT71((int7)(uVar3 >> 8),!bVar20 && !bVar21);
}



// FUNCTION 14066868c FUN_14066868c body=6679 status=ok
// SIG undefined FUN_14066868c(void)

uint * FUN_14066868c(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  uint *puVar19;
  ulonglong *puVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint *puVar27;
  longlong lVar28;
  longlong lVar29;
  int iVar30;
  ulonglong uVar31;
  ulonglong *puVar32;
  longlong *plVar33;
  ulonglong uVar34;
  longlong lVar35;
  undefined1 auStack_268 [32];
  undefined1 *local_248;
  uint *local_238;
  longlong *local_230;
  uint *local_228;
  longlong *local_220;
  uint *local_218;
  longlong *local_210;
  uint *local_208;
  ulonglong local_200;
  longlong local_1f8;
  longlong *local_1f0;
  uint local_1e4;
  longlong *local_1e0;
  longlong local_1d8;
  uint local_1cc;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if ((*(byte *)((longlong)param_3 + 0x10c) & 4) != 0) {
LAB_140668c3a:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_268);
  }
  if (DAT_14cb55028 == 0) {
    uVar6 = FUN_140325e72();
    DAT_14cb55028 = FUN_140002ddd(FUN_1464b0633,uVar6,L"AvatarAppearanceNetChannel");
  }
  lVar28 = DAT_14cb55028;
  local_1b0 = DAT_14cb55028;
  local_1a8 = param_1;
  local_1a0 = param_3;
  local_198 = param_2;
  FUN_143c33fa8();
  local_230 = param_2;
  local_210 = param_3;
  if (param_2[0xd] == 0) {
    local_1d8 = lVar28;
    if ((longlong *)param_2[0xf] != (longlong *)0x0) {
      local_108 = *(undefined ***)param_2[0xf];
      puVar8 = (uint *)(param_3 + 0xd);
      iVar21 = (int)param_3[0x10];
      if (iVar21 == 0) {
        uVar31 = 1;
        uVar34 = 0;
        iVar30 = 0;
        iVar25 = 0;
      }
      else {
        puVar27 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar27 = puVar8;
        }
        uVar23 = *puVar27;
        if (uVar23 == 0) {
          iVar30 = iVar21 + 0x1e;
          if (-1 < iVar21 + -1) {
            iVar30 = iVar21 + -1;
          }
          uVar34 = 0;
          uVar31 = (ulonglong)(uint)(iVar30 >> 5);
          if (iVar30 >> 5 < 1) {
            uVar31 = uVar34;
          }
          iVar30 = 0;
          do {
            if (uVar31 == uVar34) goto LAB_140668a5d;
            iVar30 = iVar30 + 0x20;
            uVar23 = puVar27[uVar34 + 1];
            uVar34 = uVar34 + 1;
          } while (uVar23 == 0);
        }
        else {
          uVar34 = 0;
          iVar30 = 0;
        }
        uVar31 = (ulonglong)(-uVar23 & uVar23);
        uVar1 = uVar31 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        iVar25 = (iVar30 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if (iVar21 <= iVar25) {
          iVar25 = iVar21;
        }
      }
      if (iVar25 == iVar21) {
LAB_140668a5d:
        local_238 = (uint *)0x0;
        puVar27 = local_238;
      }
      else {
        uVar23 = 0xffffffff;
        local_238 = (uint *)0x0;
        iVar14 = iVar21;
        do {
          lVar28 = param_3[0xb];
          lVar22 = (longlong)iVar25 * 200;
          if (*(int *)(lVar28 + 0x60 + lVar22) != *(int *)(lVar28 + 0x8c + lVar22)) {
            lVar35 = lVar28 + lVar22;
            lVar29 = lVar35 + 0x90;
            if (*(longlong *)(lVar35 + 0x98) != 0) {
              lVar29 = *(longlong *)(lVar35 + 0x98);
            }
            iVar25 = *(int *)(lVar29 + (ulonglong)
                                       (*(int *)(lVar35 + 0xa0) - 1U &
                                       (int)local_108 + (int)((ulonglong)local_108 >> 0x20) * 0x17)
                                       * 4);
            if (iVar25 != -1) {
              local_230 = (longlong *)CONCAT44(local_230._4_4_,iVar30);
              plVar16 = (longlong *)(lVar22 + lVar28 + 0x58);
              lVar28 = *plVar16;
              do {
                if (*(undefined ***)(lVar28 + (longlong)iVar25 * 0x10) == local_108) {
                  lVar35 = lVar35 + 8;
                  FUN_140326250(plVar16,&local_108);
                  FUN_140325a06(lVar35,&local_148,&local_108,0);
                  iVar14 = (int)param_3[0x10];
                  local_238 = (uint *)CONCAT71((int7)((ulonglong)lVar35 >> 8),1);
                  break;
                }
                iVar25 = *(int *)((longlong)iVar25 * 0x10 + lVar28 + 8);
              } while (iVar25 != -1);
              iVar30 = (int)local_230;
            }
          }
          uVar23 = uVar23 & ~(uint)uVar31;
          puVar27 = (uint *)param_3[0xf];
          if ((uint *)param_3[0xf] == (uint *)0x0) {
            puVar27 = puVar8;
          }
          iVar25 = (int)uVar34;
          lVar28 = (longlong)iVar25;
          uVar18 = puVar27[lVar28] & uVar23;
          if (uVar18 == 0) {
            iVar12 = iVar14 + 0x1e;
            if (-1 < iVar14 + -1) {
              iVar12 = iVar14 + -1;
            }
            iVar12 = iVar12 >> 5;
            iVar30 = iVar30 + 0x20;
            iVar13 = iVar12;
            if (iVar12 < iVar25) {
              iVar13 = iVar25;
            }
            if (iVar25 < iVar12) {
              lVar22 = 0;
              do {
                uVar18 = puVar27[lVar28 + lVar22 + 1];
                if (uVar18 != 0) {
                  uVar34 = (ulonglong)(iVar25 + (int)lVar22 + 1);
                  uVar23 = 0xffffffff;
                  goto LAB_140668bd1;
                }
                iVar30 = iVar30 + 0x20;
                lVar22 = lVar22 + 1;
              } while (iVar13 - lVar28 != lVar22);
              uVar23 = 0xffffffff;
              iVar25 = iVar13;
            }
            uVar34 = (ulonglong)(iVar25 + 1);
            param_3 = local_210;
            iVar25 = iVar14;
          }
          else {
LAB_140668bd1:
            uVar31 = (ulonglong)(-uVar18 & uVar18);
            uVar1 = uVar31 * 2 + 1;
            lVar28 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
              }
            }
            iVar25 = (iVar30 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
            if (iVar14 <= iVar25) {
              iVar25 = iVar14;
            }
          }
          puVar27 = local_238;
        } while (iVar25 != iVar21);
      }
      goto LAB_14066a095;
    }
    local_1e0 = param_1;
    if ((char)param_2[9] == '\x01') {
      local_128 = (undefined4 *)0x0;
      local_120 = 0x800000000;
      puVar8 = (uint *)(param_3 + 0xd);
      iVar21 = (int)param_3[0x10];
      if (iVar21 == 0) {
        uVar31 = 1;
        puVar27 = (uint *)0x0;
        iVar30 = 0;
        iVar25 = 0;
      }
      else {
        puVar15 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar15 = puVar8;
        }
        uVar23 = *puVar15;
        if (uVar23 == 0) {
          iVar30 = iVar21 + 0x1e;
          if (-1 < iVar21 + -1) {
            iVar30 = iVar21 + -1;
          }
          puVar27 = (uint *)0x0;
          puVar19 = (uint *)(ulonglong)(uint)(iVar30 >> 5);
          if (iVar30 >> 5 < 1) {
            puVar19 = puVar27;
          }
          iVar30 = 0;
          do {
            if (puVar19 == puVar27) goto LAB_140669278;
            iVar30 = iVar30 + 0x20;
            uVar23 = puVar15[(longlong)puVar27 + 1];
            puVar27 = (uint *)((longlong)puVar27 + 1);
          } while (uVar23 == 0);
        }
        else {
          puVar27 = (uint *)0x0;
          iVar30 = 0;
        }
        uVar31 = (ulonglong)(-uVar23 & uVar23);
        uVar34 = uVar31 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        iVar25 = (iVar30 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if (iVar21 <= iVar25) {
          iVar25 = iVar21;
        }
      }
      if (iVar25 < iVar21) {
        local_220 = param_3 + 0xb;
        local_1c0 = param_3 + 7;
        uVar23 = 0xffffffff;
        local_1c8 = puVar8;
LAB_140668cf0:
        local_208 = (uint *)CONCAT44(local_208._4_4_,iVar25);
        puVar15 = (uint *)(*local_220 + (longlong)iVar25 * 200);
        puVar19 = puVar15 + 2;
        uVar18 = *puVar15;
        if (((puVar15[4] != puVar15[0xf]) || (puVar15[0x18] != puVar15[0x23])) &&
           ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34))) {
          plVar16 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar16 = local_1c0;
          }
          iVar21 = *(int *)((longlong)plVar16 + (ulonglong)((int)param_3[9] - 1U & uVar18) * 4);
          if (iVar21 != -1) {
            do {
              lVar28 = *param_3 + (longlong)iVar21 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar21 * 0x10) == uVar18) {
                if ((lVar28 != 0) && (lVar28 != -4)) {
                  uVar24 = puVar15[0xc];
                  local_1f8 = CONCAT44(local_1f8._4_4_,iVar30);
                  local_228 = puVar27;
                  local_200 = uVar31;
                  local_1cc = uVar18;
                  if (uVar24 == 0) {
                    uVar31 = 1;
                    uVar34 = 0;
                    iVar21 = 0;
                    uVar18 = 0;
                    goto LAB_140668e33;
                  }
                  puVar27 = *(uint **)(puVar15 + 10);
                  if (*(uint **)(puVar15 + 10) == (uint *)0x0) {
                    puVar27 = puVar15 + 6;
                  }
                  uVar18 = *puVar27;
                  if (uVar18 != 0) {
                    uVar34 = 0;
                    iVar21 = 0;
                    goto LAB_140668dfd;
                  }
                  iVar21 = uVar24 + 0x1e;
                  if (-1 < (int)(uVar24 - 1)) {
                    iVar21 = uVar24 - 1;
                  }
                  uVar34 = 0;
                  uVar31 = (ulonglong)(uint)(iVar21 >> 5);
                  if (iVar21 >> 5 < 1) {
                    uVar31 = uVar34;
                  }
                  iVar21 = 0;
                  goto LAB_140668de4;
                }
                break;
              }
              iVar21 = *(int *)(lVar28 + 8);
            } while (iVar21 != -1);
          }
        }
        goto LAB_140669168;
      }
LAB_140669278:
      puVar7 = local_128;
      if (*(int *)((longlong)param_3 + 0x8c) < (int)param_3[0xc]) {
        *(undefined1 *)((longlong)local_230 + 0x4b) = 1;
      }
    }
    else {
      bVar2 = *(byte *)((longlong)param_3 + 0x10c);
      if ((((bVar2 & 1) == 0) &&
          (*(byte *)((longlong)param_3 + 0x10c) = bVar2 | 1, (bVar2 & 2) != 0)) &&
         (*(char *)((longlong)param_2 + 0x4f) != '\0')) {
        *(byte *)((longlong)param_3 + 0x10c) = bVar2 | 5;
        goto LAB_140668c3a;
      }
      plVar16 = (longlong *)*param_2;
      if (plVar16 == (longlong *)0x0) {
        plVar16 = (longlong *)param_2[1];
        local_d8 = (undefined4 *)0x0;
        local_d0 = 0x800000000;
        cVar5 = FUN_143c34a74(&local_1b0);
        if (cVar5 == '\0') {
LAB_140669e67:
          if (local_d8 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
LAB_140669e79:
          puVar27 = (uint *)0x0;
          goto LAB_14066a095;
        }
        iVar21 = 0;
        local_128 = (undefined4 *)0x0;
        local_120 = 0x800000000;
        local_158 = (undefined4 *)0x0;
        local_150 = 0x800000000;
        plVar10 = local_230;
        if (0 < local_100) {
          plVar33 = param_3 + 7;
          local_1f0 = param_3 + 0xb;
          do {
            plVar10 = local_1e0;
            local_1b4 = 0;
            puVar32 = (ulonglong *)plVar16[1];
            puVar8 = (uint *)*puVar32 + 1;
            if ((uint *)puVar32[1] < puVar8) {
              if ((*(byte *)((longlong)plVar16 + 0x2a) & 2) == 0) {
                (**(code **)(*plVar16 + 0x170))(plVar16,&local_1b4,4);
              }
              else {
                FUN_14572512c(plVar16,&local_1b4);
              }
            }
            else {
              local_1b4 = *(uint *)*puVar32;
              *puVar32 = (ulonglong)puVar8;
            }
            uVar31 = local_120;
            if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
              plVar17 = (longlong *)param_3[8];
              if ((longlong *)param_3[8] == (longlong *)0x0) {
                plVar17 = plVar33;
              }
              iVar30 = *(int *)((longlong)plVar17 +
                               (ulonglong)((int)param_3[9] - 1U & local_1b4) * 4);
              if (iVar30 != -1) {
                do {
                  lVar28 = *param_3 + (longlong)iVar30 * 0x10;
                  if (*(uint *)(*param_3 + (longlong)iVar30 * 0x10) == local_1b4) {
                    if ((lVar28 != 0) && ((int *)(lVar28 + 4) != (int *)0x0)) {
                      local_1b8 = *(int *)(lVar28 + 4);
                      puVar8 = (uint *)((longlong)local_1b8 * 0x58 + *plVar10);
                      lVar28 = (longlong)(int)local_120;
                      uVar23 = (int)local_120 + 1;
                      local_120 = CONCAT44(local_120._4_4_,uVar23);
                      if (local_120._4_4_ < uVar23) {
                        FUN_1400cc390(&local_148,uVar31 & 0xffffffff);
                      }
                      puVar7 = local_128;
                      if (local_128 == (undefined4 *)0x0) {
                        puVar7 = &local_148;
                      }
                      puVar7[lVar28] = local_1b8;
                      goto LAB_1406694f1;
                    }
                    break;
                  }
                  iVar30 = *(int *)(lVar28 + 8);
                } while (iVar30 != -1);
              }
            }
            local_1b8 = 0;
            puVar8 = (uint *)FUN_145ab920e(plVar10);
            *puVar8 = local_1b4;
            local_1b8 = (int)plVar10[1] + -1;
            local_190 = &local_1b4;
            local_188 = &local_1b8;
            FUN_140263e2a(param_3,local_17c,&local_190);
            uVar31 = local_150;
            lVar28 = (longlong)(int)local_150;
            uVar23 = (int)local_150 + 1;
            local_150 = CONCAT44(local_150._4_4_,uVar23);
            if (local_150._4_4_ < uVar23) {
              FUN_1400cc390(local_178,uVar31 & 0xffffffff);
            }
            puVar7 = local_158;
            if (local_158 == (undefined4 *)0x0) {
              puVar7 = local_178;
            }
            puVar7[lVar28] = local_1b8;
LAB_1406694f1:
            plVar10 = local_230;
            puVar8[2] = (uint)local_108;
            puVar8[1] = puVar8[1] + 1;
            lVar28 = local_230[4];
            FUN_144958770(lVar28 + 0x30,0);
            FUN_144958770(lVar28 + 0x80,0);
            *(undefined1 *)(lVar28 + 0x28) = 1;
            puVar27 = (uint *)plVar16[0x15];
            plVar10[7] = local_1d8;
            plVar10[6] = (longlong)puVar8;
            local_190 = puVar27;
            (**(code **)(*(longlong *)plVar10[8] + 8))((longlong *)plVar10[8],plVar10);
            if ((*(byte *)((longlong)plVar16 + 0x29) & 2) == 0) {
              lVar28 = plVar10[4];
              if ((*(int *)(lVar28 + 0x38) == *(int *)(lVar28 + 100)) &&
                 (*(int *)(lVar28 + 0x88) == *(int *)(lVar28 + 0xb4))) {
                FUN_1456fd588(local_1f0,local_1b4);
                plVar10 = local_230;
              }
              else {
                local_218 = (uint *)(lVar28 + 0x30);
                puVar8 = (uint *)FUN_1456fd5f6(local_1f0,local_1b4);
                local_238 = puVar8;
                if (puVar8[2] - puVar8[0xd] == *(int *)(lVar28 + 0x38) - *(int *)(lVar28 + 100)) {
                  local_228 = puVar8 + 4;
                  uVar23 = puVar8[10];
                  if (uVar23 == 0) {
                    uVar34 = 1;
                    uVar31 = 0;
                    iVar30 = 0;
                    uVar18 = 0;
                  }
                  else {
                    puVar15 = *(uint **)(puVar8 + 8);
                    if (*(uint **)(puVar8 + 8) == (uint *)0x0) {
                      puVar15 = local_228;
                    }
                    uVar18 = *puVar15;
                    if (uVar18 == 0) {
                      iVar30 = uVar23 + 0x1e;
                      if (-1 < (int)(uVar23 - 1)) {
                        iVar30 = uVar23 - 1;
                      }
                      uVar31 = 0;
                      uVar34 = (ulonglong)(uint)(iVar30 >> 5);
                      if (iVar30 >> 5 < 1) {
                        uVar34 = uVar31;
                      }
                      iVar30 = 0;
                      do {
                        if (uVar34 == uVar31) goto LAB_140669716;
                        iVar30 = iVar30 + 0x20;
                        uVar18 = puVar15[uVar31 + 1];
                        uVar31 = uVar31 + 1;
                      } while (uVar18 == 0);
                    }
                    else {
                      uVar31 = 0;
                      iVar30 = 0;
                    }
                    uVar34 = (ulonglong)(-uVar18 & uVar18);
                    uVar1 = uVar34 * 2 + 1;
                    lVar22 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                      }
                    }
                    uVar18 = (iVar30 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
                    if ((int)uVar23 <= (int)uVar18) {
                      uVar18 = uVar23;
                    }
                  }
                  if (uVar18 != uVar23) {
                    if (*(uint **)(puVar8 + 8) != (uint *)0x0) {
                      local_228 = *(uint **)(puVar8 + 8);
                    }
                    iVar25 = uVar23 + 0x1e;
                    if (-1 < (int)(uVar23 - 1)) {
                      iVar25 = uVar23 - 1;
                    }
                    if (*(int *)(lVar28 + 0x38) == *(int *)(lVar28 + 100)) goto LAB_1406696fe;
                    local_1f8 = *(longlong *)puVar8;
                    iVar25 = iVar25 >> 5;
                    local_200 = lVar28 + 0x68;
                    if (*(ulonglong *)(lVar28 + 0x70) != 0) {
                      local_200 = *(ulonglong *)(lVar28 + 0x70);
                    }
                    uVar24 = *(int *)(lVar28 + 0x78) - 1;
                    local_220 = (longlong *)CONCAT44(local_220._4_4_,uVar24);
                    local_208 = local_228 + 1;
                    uVar26 = 0xffffffff;
                    do {
                      lVar22 = *(longlong *)(local_1f8 + (longlong)(int)uVar18 * 0x10);
                      iVar14 = *(int *)(local_200 +
                                       (ulonglong)
                                       ((int)lVar22 + (int)((ulonglong)lVar22 >> 0x20) * 0x17 &
                                       uVar24) * 4);
                      if (iVar14 == -1) goto LAB_1406696fe;
                      while (*(longlong *)(*(longlong *)local_218 + (longlong)iVar14 * 0x10) !=
                             lVar22) {
                        iVar14 = *(int *)((longlong)iVar14 * 0x10 + *(longlong *)local_218 + 8);
                        if (iVar14 == -1) goto LAB_1406696fe;
                      }
                      uVar26 = uVar26 & ~(uint)uVar34;
                      iVar14 = (int)uVar31;
                      lVar22 = (longlong)iVar14;
                      uVar18 = local_228[lVar22] & uVar26;
                      if (uVar18 == 0) {
                        iVar12 = iVar25;
                        if (iVar25 < iVar14) {
                          iVar12 = iVar14;
                        }
                        if (iVar25 <= iVar14) break;
                        lVar35 = 0;
                        while( true ) {
                          iVar30 = iVar30 + 0x20;
                          uVar18 = local_208[lVar22 + lVar35];
                          if (uVar18 != 0) break;
                          lVar35 = lVar35 + 1;
                          if (iVar12 - lVar22 == lVar35) goto LAB_140669716;
                        }
                        uVar31 = (ulonglong)(iVar14 + (int)lVar35 + 1);
                        uVar26 = 0xffffffff;
                      }
                      uVar34 = (ulonglong)(-uVar18 & uVar18);
                      uVar1 = uVar34 * 2 + 1;
                      lVar22 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                        }
                      }
                      uVar18 = (iVar30 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
                    } while ((int)uVar18 < (int)uVar23);
                  }
                }
                else {
LAB_1406696fe:
                  FUN_140492002(puVar8,local_218);
                  *(undefined1 *)((longlong)local_230 + 0x4c) = 1;
                }
LAB_140669716:
                local_218 = (uint *)(lVar28 + 0x80);
                if (local_238[0x16] - local_238[0x21] ==
                    *(int *)(lVar28 + 0x88) - *(int *)(lVar28 + 0xb4)) {
                  local_228 = puVar8 + 0x18;
                  uVar23 = local_238[0x1e];
                  if (uVar23 == 0) {
                    uVar34 = 1;
                    uVar31 = 0;
                    iVar30 = 0;
                    uVar18 = 0;
                  }
                  else {
                    puVar15 = *(uint **)(local_238 + 0x1c);
                    if (*(uint **)(local_238 + 0x1c) == (uint *)0x0) {
                      puVar15 = local_228;
                    }
                    uVar18 = *puVar15;
                    if (uVar18 == 0) {
                      iVar30 = uVar23 + 0x1e;
                      if (-1 < (int)(uVar23 - 1)) {
                        iVar30 = uVar23 - 1;
                      }
                      uVar31 = 0;
                      uVar34 = (ulonglong)(uint)(iVar30 >> 5);
                      if (iVar30 >> 5 < 1) {
                        uVar34 = uVar31;
                      }
                      iVar30 = 0;
                      do {
                        if (uVar34 == uVar31) goto LAB_14066982e;
                        iVar30 = iVar30 + 0x20;
                        uVar18 = puVar15[uVar31 + 1];
                        uVar31 = uVar31 + 1;
                      } while (uVar18 == 0);
                    }
                    else {
                      uVar31 = 0;
                      iVar30 = 0;
                    }
                    uVar34 = (ulonglong)(-uVar18 & uVar18);
                    uVar1 = uVar34 * 2 + 1;
                    lVar22 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                      }
                    }
                    uVar18 = (iVar30 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
                    if ((int)uVar23 <= (int)uVar18) {
                      uVar18 = uVar23;
                    }
                  }
                  if (uVar18 != uVar23) {
                    if (*(uint **)(local_238 + 0x1c) != (uint *)0x0) {
                      local_228 = *(uint **)(local_238 + 0x1c);
                    }
                    iVar25 = uVar23 + 0x1e;
                    if (-1 < (int)(uVar23 - 1)) {
                      iVar25 = uVar23 - 1;
                    }
                    if (*(int *)(lVar28 + 0x88) == *(int *)(lVar28 + 0xb4)) goto LAB_140669817;
                    iVar25 = iVar25 >> 5;
                    local_1f8 = lVar28 + 0xb8;
                    if (*(longlong *)(lVar28 + 0xc0) != 0) {
                      local_1f8 = *(longlong *)(lVar28 + 0xc0);
                    }
                    uVar24 = *(int *)(lVar28 + 200) - 1;
                    local_200 = CONCAT44(local_200._4_4_,uVar24);
                    local_208 = local_228 + 1;
                    local_220 = (longlong *)CONCAT44(local_220._4_4_,0xffffffff);
                    do {
                      lVar22 = *(longlong *)
                                (*(longlong *)(local_238 + 0x14) + (longlong)(int)uVar18 * 0x10);
                      iVar14 = *(int *)(local_1f8 +
                                       (ulonglong)
                                       ((int)lVar22 + (int)((ulonglong)lVar22 >> 0x20) * 0x17 &
                                       uVar24) * 4);
                      if (iVar14 == -1) goto LAB_140669817;
                      while (*(longlong *)(*(longlong *)local_218 + (longlong)iVar14 * 0x10) !=
                             lVar22) {
                        iVar14 = *(int *)((longlong)iVar14 * 0x10 + *(longlong *)local_218 + 8);
                        if (iVar14 == -1) goto LAB_140669817;
                      }
                      uVar26 = (uint)local_220 & ~(uint)uVar34;
                      iVar14 = (int)uVar31;
                      lVar22 = (longlong)iVar14;
                      uVar18 = local_228[lVar22] & uVar26;
                      if (uVar18 == 0) {
                        iVar12 = iVar25;
                        if (iVar25 < iVar14) {
                          iVar12 = iVar14;
                        }
                        if (iVar25 <= iVar14) break;
                        lVar35 = 0;
                        while( true ) {
                          iVar30 = iVar30 + 0x20;
                          uVar18 = local_208[lVar22 + lVar35];
                          if (uVar18 != 0) break;
                          lVar35 = lVar35 + 1;
                          if (iVar12 - lVar22 == lVar35) goto LAB_14066982e;
                        }
                        uVar31 = (ulonglong)(iVar14 + (int)lVar35 + 1);
                        local_220 = (longlong *)CONCAT44(local_220._4_4_,0xffffffff);
                      }
                      else {
                        local_220 = (longlong *)CONCAT44(local_220._4_4_,uVar26);
                      }
                      uVar34 = (ulonglong)(-uVar18 & uVar18);
                      uVar1 = uVar34 * 2 + 1;
                      lVar22 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                        }
                      }
                      uVar18 = (iVar30 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
                    } while ((int)uVar18 < (int)uVar23);
                  }
                }
                else {
LAB_140669817:
                  FUN_140492002(puVar8 + 0x14,local_218);
                  *(undefined1 *)((longlong)local_230 + 0x4c) = 1;
                }
LAB_14066982e:
                puVar15 = local_238;
                local_238[0x2a] = 0;
                if (local_238[0x2b] != 0) {
                  FUN_144893a1c(puVar8 + 0x28,0);
                }
                puVar15[0x2c] = (int)plVar16[0x15] - (int)puVar27;
                FUN_14049209c(&local_190,plVar16,puVar8 + 0x28);
                plVar10 = local_230;
                if (*(int *)(lVar28 + 0x38) != *(int *)(lVar28 + 100)) {
                  *(undefined1 *)((longlong)local_230 + 0x4b) = 1;
                }
              }
            }
            lVar28 = plVar10[4];
            FUN_144958770(lVar28 + 0x30,0);
            FUN_144958770(lVar28 + 0x80,0);
            *(undefined1 *)(lVar28 + 0x28) = 0;
            if ((*(byte *)((longlong)plVar16 + 0x29) & 2) != 0) {
              if (local_158 != (undefined4 *)0x0) {
                FUN_1400020a8();
              }
              if (local_128 != (undefined4 *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_140669e67;
            }
            iVar21 = iVar21 + 1;
            param_3 = local_210;
            plVar10 = local_198;
          } while (iVar21 < local_100);
        }
        plVar16 = local_1a8;
        if (((char)plVar10[10] == '\0') && (iVar21 = (int)local_1a8[1], 0 < iVar21)) {
          uVar31 = 0;
          do {
            uVar34 = local_d0;
            iVar30 = *(int *)(*plVar16 + 8 + uVar31 * 0x58);
            if ((iVar30 < (int)(uint)local_108) && (local_108._4_4_ < iVar30)) {
              puVar7 = local_d8;
              if (local_d8 == (undefined4 *)0x0) {
                puVar7 = local_f8;
              }
              lVar28 = (longlong)(int)local_d0;
              if (lVar28 != 0) {
                lVar22 = 0;
                do {
                  if (uVar31 == *(uint *)((longlong)puVar7 + lVar22)) goto LAB_140669f3e;
                  lVar22 = lVar22 + 4;
                } while (lVar28 * 4 - lVar22 != 0);
              }
              uVar23 = (int)local_d0 + 1;
              local_d0 = CONCAT44(local_d0._4_4_,uVar23);
              if (local_d0._4_4_ < uVar23) {
                FUN_1400cc390(local_f8,uVar34 & 0xffffffff);
              }
              puVar7 = local_d8;
              if (local_d8 == (undefined4 *)0x0) {
                puVar7 = local_f8;
              }
              puVar7[lVar28] = (int)uVar31;
              iVar21 = (int)plVar16[1];
            }
LAB_140669f3e:
            uVar31 = uVar31 + 1;
            param_3 = local_210;
          } while ((longlong)uVar31 < (longlong)iVar21);
        }
        if ((0 < (int)local_d0) || (0 < local_100)) {
          FUN_140705914(local_1a0);
        }
        plVar16 = local_1a8;
        puVar7 = local_d8;
        if (local_d8 == (undefined4 *)0x0) {
          puVar7 = local_f8;
        }
        if ((int)local_d0 != 0) {
          lVar28 = (longlong)(int)local_d0;
          lVar22 = 0;
          do {
            iVar21 = *(int *)((longlong)puVar7 + lVar22);
            if (((-1 < (longlong)iVar21) && (iVar21 < (int)plVar16[1])) &&
               (iVar21 = FUN_1456fd588(param_3 + 0xb,
                                       *(undefined4 *)(*plVar16 + (longlong)iVar21 * 0x58)),
               0 < iVar21)) {
              *(undefined1 *)((longlong)plVar10 + 0x4c) = 1;
            }
            lVar22 = lVar22 + 4;
          } while (lVar28 * 4 != lVar22);
          if (0 < (int)local_d0) {
            puVar7 = local_d8;
            if (local_d8 == (undefined4 *)0x0) {
              puVar7 = local_f8;
            }
            FUN_144958a06(puVar7);
            if (0 < (longlong)(int)local_d0) {
              uVar31 = (longlong)(int)local_d0 + 1;
              do {
                puVar7 = local_d8;
                if (local_d8 == (undefined4 *)0x0) {
                  puVar7 = local_f8;
                }
                if ((-1 < (int)puVar7[uVar31 - 2]) && ((int)puVar7[uVar31 - 2] < (int)plVar16[1])) {
                  FUN_14862022c(plVar16);
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
        puVar7 = local_d8;
        if (local_128 != (undefined4 *)0x0) {
          FUN_1400020a8();
          puVar7 = local_d8;
        }
        goto LAB_14066a089;
      }
      lVar28 = param_2[3];
      if (lVar28 == 0) {
        local_238 = (uint *)CONCAT44(local_238._4_4_,0xffffffff);
        lVar28 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(lVar28 + 0x70);
        cVar5 = FUN_143c3408a(&local_1b0,uVar3);
        if (cVar5 == '\0') goto LAB_140669e79;
        local_238 = (uint *)CONCAT44(local_238._4_4_,uVar3);
        lVar28 = lVar28 + 0x20;
      }
      puVar9 = (undefined8 *)FUN_14001cc68(0x78,0x10);
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      *puVar9 = &PTR_FUN_14ab190a0;
      puVar9[8] = 0;
      *(undefined4 *)(puVar9 + 9) = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      *(undefined8 *)((longlong)puVar9 + 0x4c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar9 + 0x54) = 0;
      puVar9[0xc] = 0;
      *(undefined4 *)(puVar9 + 0xd) = 0;
      *(undefined4 *)(puVar9 + 0xe) = 0xffffffff;
      puVar11 = (undefined8 *)param_2[2];
      plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar10[1] = (longlong)&DAT_100000001;
      *plVar10 = (longlong)&PTR_FUN_14ab190c0;
      plVar10[2] = (longlong)puVar9;
      if (puVar9 == (undefined8 *)0x0) {
LAB_140669c1e:
        *puVar11 = puVar9;
        plVar33 = (longlong *)puVar11[1];
        if (plVar10 == plVar33) {
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar33 = plVar10 + 1;
            *(int *)plVar33 = (int)*plVar33 + -1;
            UNLOCK();
            if ((int)*plVar33 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar4 = (int *)((longlong)plVar10 + 0xc);
              *piVar4 = *piVar4 + -1;
              iVar21 = *piVar4;
              UNLOCK();
              plVar33 = plVar10;
              goto joined_r0x000140669c59;
            }
          }
        }
        else {
          puVar11[1] = plVar10;
          if (plVar33 != (longlong *)0x0) goto LAB_140669c75;
        }
      }
      else {
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          puVar9[1] = puVar9;
          if ((longlong *)puVar9[2] != plVar10) {
            LOCK();
            *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
            UNLOCK();
            plVar33 = (longlong *)puVar9[2];
            if (plVar33 != (longlong *)0x0) {
              LOCK();
              piVar4 = (int *)((longlong)plVar33 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar33 + 0x10))();
              }
            }
            puVar9[2] = plVar10;
          }
          LOCK();
          plVar33 = plVar10 + 1;
          *(int *)plVar33 = (int)*plVar33 + -1;
          UNLOCK();
          if ((int)*plVar33 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar4 = (int *)((longlong)plVar10 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
          goto LAB_140669c1e;
        }
        puVar9[1] = puVar9;
        *puVar11 = puVar9;
        plVar33 = (longlong *)puVar11[1];
        if (plVar33 != (longlong *)0x0) {
          puVar11[1] = 0;
LAB_140669c75:
          LOCK();
          plVar10 = plVar33 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar33)(plVar33);
            LOCK();
            piVar4 = (int *)((longlong)plVar33 + 0xc);
            *piVar4 = *piVar4 + -1;
            iVar21 = *piVar4;
            UNLOCK();
joined_r0x000140669c59:
            if (iVar21 == 0) {
              (**(code **)(*plVar33 + 0x10))(plVar33);
            }
          }
        }
      }
      plVar10 = local_230;
      local_148 = *(undefined4 *)((longlong)param_3 + 0x54);
      *(undefined4 *)(puVar9 + 0xe) = local_148;
      local_144 = local_238._0_4_;
      local_140 = 0;
      local_118 = (undefined4 *)0x0;
      local_110 = 0x800000000;
      local_c8 = (undefined8 *)0x0;
      local_c0 = 0x800000000;
      if (*(char *)((longlong)local_230 + 0x4e) == '\x01') {
        FUN_143c34374(&local_1b0,puVar9 + 4,&local_108);
      }
      else {
        local_248 = local_138;
        FUN_143c3445c(&local_1b0,puVar9 + 4,lVar28,&local_108);
        *(undefined4 *)(puVar9 + 0xe) = *(undefined4 *)((longlong)param_3 + 0x54);
      }
      local_140 = (int)local_c0;
      FUN_143c34882(&local_1b0);
      if (0 < (int)local_c0) {
        lVar28 = 0;
        do {
          puVar11 = local_c8;
          if (local_c8 == (undefined8 *)0x0) {
            puVar11 = &local_108;
          }
          iVar21 = *(int *)(puVar11 + lVar28);
          lVar22 = *local_1e0;
          local_178[0] = *(undefined4 *)((longlong)puVar11 + lVar28 * 8 + 4);
          puVar32 = (ulonglong *)plVar16[1];
          puVar7 = (undefined4 *)*puVar32 + 1;
          if ((undefined4 *)puVar32[1] < puVar7) {
            if ((*(byte *)((longlong)plVar16 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar16 + 0x170))(plVar16,local_178,4);
            }
            else {
              FUN_14572512c(plVar16,local_178);
            }
          }
          else {
            local_178[0] = *(undefined4 *)*puVar32;
            *puVar32 = (ulonglong)puVar7;
          }
          plVar10[7] = local_1d8;
          plVar10[6] = (longlong)iVar21 * 0x58 + lVar22;
          (**(code **)(*(longlong *)plVar10[8] + 8))((longlong *)plVar10[8],plVar10);
          lVar28 = lVar28 + 1;
        } while ((int)lVar28 < (int)local_c0);
      }
      puVar7 = local_118;
      if (local_c8 != (undefined8 *)0x0) {
        FUN_1400020a8();
        puVar7 = local_118;
      }
    }
LAB_14066a089:
    if (puVar7 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar21 = (int)param_3[0x10];
    if (iVar21 == 0) {
      uVar31 = 1;
      iVar25 = 0;
      uVar34 = 0;
      iVar30 = 0;
    }
    else {
      puVar8 = (uint *)param_3[0xf];
      if ((uint *)param_3[0xf] == (uint *)0x0) {
        puVar8 = (uint *)(param_3 + 0xd);
      }
      uVar23 = *puVar8;
      if (uVar23 == 0) {
        iVar30 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar30 = iVar21 + -1;
        }
        uVar34 = 0;
        uVar31 = (ulonglong)(uint)(iVar30 >> 5);
        if (iVar30 >> 5 < 1) {
          uVar31 = uVar34;
        }
        iVar25 = 0;
        do {
          if (uVar31 == uVar34) goto LAB_14066a093;
          iVar25 = iVar25 + 0x20;
          uVar23 = puVar8[uVar34 + 1];
          uVar34 = uVar34 + 1;
        } while (uVar23 == 0);
      }
      else {
        iVar25 = 0;
        uVar34 = 0;
      }
      uVar31 = (ulonglong)(-uVar23 & uVar23);
      uVar1 = uVar31 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      iVar30 = (iVar25 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
      if (iVar21 <= iVar30) {
        iVar30 = iVar21;
      }
    }
    puVar27 = (uint *)0x1;
    if (iVar30 == iVar21) goto LAB_14066a095;
    uVar23 = 0xffffffff;
    local_238 = (uint *)(param_3 + 0xd);
    do {
      lVar28 = local_210[0xb];
      lVar22 = (longlong)iVar30 * 200;
      FUN_1403257c8(param_2[0xd],lVar22 + lVar28 + 8);
      FUN_1403257c8(param_2[0xd],lVar22 + lVar28 + 0x58);
      piVar4 = (int *)param_2[0xe];
      if (piVar4 != (int *)0x0) {
        *piVar4 = *piVar4 + *(int *)(lVar28 + lVar22 + 0xb0);
      }
      uVar23 = uVar23 & ~(uint)uVar31;
      puVar8 = (uint *)local_210[0xf];
      if ((uint *)local_210[0xf] == (uint *)0x0) {
        puVar8 = local_238;
      }
      iVar14 = (int)local_210[0x10];
      iVar30 = (int)uVar34;
      lVar28 = (longlong)iVar30;
      uVar18 = puVar8[lVar28] & uVar23;
      if (uVar18 == 0) {
        iVar12 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar12 = iVar14 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar25 = iVar25 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar30) {
          iVar13 = iVar30;
        }
        if (iVar30 < iVar12) {
          lVar22 = 0;
          do {
            uVar18 = puVar8[lVar28 + lVar22 + 1];
            if (uVar18 != 0) {
              uVar34 = (ulonglong)(iVar30 + (int)lVar22 + 1);
              uVar23 = 0xffffffff;
              goto LAB_140668949;
            }
            iVar25 = iVar25 + 0x20;
            lVar22 = lVar22 + 1;
          } while (iVar13 - lVar28 != lVar22);
          uVar23 = 0xffffffff;
          iVar30 = iVar13;
        }
        uVar34 = (ulonglong)(iVar30 + 1);
        iVar30 = iVar14;
      }
      else {
LAB_140668949:
        uVar31 = (ulonglong)(-uVar18 & uVar18);
        uVar1 = uVar31 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        iVar30 = (iVar25 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if (iVar14 <= iVar30) {
          iVar30 = iVar14;
        }
      }
    } while (iVar30 != iVar21);
  }
LAB_14066a093:
  puVar27 = (uint *)0x1;
LAB_14066a095:
  if ((local_48 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar27;
  while( true ) {
    iVar21 = iVar21 + 0x20;
    uVar18 = puVar27[uVar34 + 1];
    uVar34 = uVar34 + 1;
    if (uVar18 != 0) break;
LAB_140668de4:
    if (uVar31 == uVar34) goto LAB_14066913e;
  }
LAB_140668dfd:
  uVar31 = (ulonglong)(-uVar18 & uVar18);
  uVar1 = uVar31 * 2 + 1;
  lVar28 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
    }
  }
  uVar18 = (iVar21 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
  if ((int)uVar24 <= (int)uVar18) {
    uVar18 = uVar24;
  }
LAB_140668e33:
  if ((int)uVar18 < (int)uVar24) {
    local_218 = puVar15 + 0x16;
    uVar24 = 0xffffffff;
    local_1f0 = (longlong *)((ulonglong)local_1f0 & 0xffffffff00000000);
    local_238 = puVar19;
    local_1e4 = uVar23;
    do {
      plVar16 = local_230;
      puVar32 = (ulonglong *)((longlong)(int)uVar18 * 0x10 + *(longlong *)puVar19);
      cVar5 = (**(code **)(*(longlong *)local_230[4] + 0x330))((longlong *)local_230[4],puVar32,0);
      if (cVar5 == '\0') {
        puVar20 = puVar32;
        lVar28 = (**(code **)(*(longlong *)plVar16[4] + 800))((longlong *)plVar16[4],puVar32);
        puVar19 = local_238;
        if (lVar28 != 0) {
          local_1f0 = (longlong *)
                      CONCAT44(local_1f0._4_4_,(int)CONCAT71((int7)((ulonglong)puVar20 >> 8),1));
          if ((*puVar32 & 1) == 0 && *puVar32 != 0) {
            FUN_140325a06(local_218,&local_108,puVar32,0);
          }
          goto LAB_140668eda;
        }
      }
      else {
LAB_140668eda:
        puVar19 = local_238;
        FUN_140646052(local_238,uVar18);
      }
      plVar16 = local_230;
      uVar24 = uVar24 & ~(uint)uVar31;
      puVar8 = *(uint **)(puVar19 + 8);
      if (*(uint **)(puVar19 + 8) == (uint *)0x0) {
        puVar8 = puVar15 + 6;
      }
      uVar23 = puVar19[10];
      iVar30 = (int)uVar34;
      lVar28 = (longlong)iVar30;
      uVar18 = puVar8[lVar28] & uVar24;
      if (uVar18 == 0) {
        iVar25 = uVar23 + 0x1e;
        if (-1 < (int)(uVar23 - 1)) {
          iVar25 = uVar23 - 1;
        }
        iVar25 = iVar25 >> 5;
        iVar14 = iVar25;
        if (iVar25 < iVar30) {
          iVar14 = iVar30;
        }
        if (iVar25 <= iVar30) break;
        lVar22 = 0;
        while( true ) {
          iVar21 = iVar21 + 0x20;
          uVar18 = puVar8[lVar28 + lVar22 + 1];
          if (uVar18 != 0) break;
          lVar22 = lVar22 + 1;
          if (iVar14 - lVar28 == lVar22) goto LAB_140668f82;
        }
        uVar34 = (ulonglong)(iVar30 + (int)lVar22 + 1);
        uVar24 = 0xffffffff;
      }
      uVar31 = (ulonglong)(-uVar18 & uVar18);
      uVar1 = uVar31 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      uVar18 = (iVar21 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
    } while ((int)uVar18 < (int)uVar23);
LAB_140668f82:
    puVar8 = local_1c8;
    uVar23 = local_1e4;
    if (((ulonglong)local_1f0 & 1) != 0) {
      *(undefined1 *)((longlong)local_230 + 0x49) = 1;
      if (*(char *)((longlong)local_230 + 0x4a) == '\0') {
        (**(code **)(*(longlong *)local_230[0xb] + 0x210))();
        *(undefined1 *)((longlong)plVar16 + 0x4a) = 1;
        puVar19 = local_238;
      }
      uVar31 = local_120;
      if ((int)local_210[1] != *(int *)((longlong)local_210 + 0x34)) {
        plVar10 = (longlong *)local_210[8];
        if ((longlong *)local_210[8] == (longlong *)0x0) {
          plVar10 = local_1c0;
        }
        iVar21 = *(int *)((longlong)plVar10 + (ulonglong)((int)local_210[9] - 1U & local_1cc) * 4);
        if (iVar21 != -1) {
          do {
            lVar28 = *local_210 + (longlong)iVar21 * 0x10;
            if (*(uint *)(*local_210 + (longlong)iVar21 * 0x10) == local_1cc) goto LAB_140669015;
            iVar21 = *(int *)(lVar28 + 8);
          } while (iVar21 != -1);
        }
      }
      lVar28 = 0;
LAB_140669015:
      iVar21 = *(int *)(lVar28 + 4);
      lVar28 = *local_1e0;
      lVar22 = (longlong)(int)local_120;
      uVar23 = (int)local_120 + 1;
      local_120 = CONCAT44(local_120._4_4_,uVar23);
      if (local_120._4_4_ < uVar23) {
        FUN_1400cc390(&local_148,uVar31 & 0xffffffff);
        puVar19 = local_238;
      }
      puVar7 = local_128;
      if (local_128 == (undefined4 *)0x0) {
        puVar7 = &local_148;
      }
      puVar7[lVar22] = iVar21;
      FUN_1448fcc30(&local_108,plVar16[4],*(undefined8 *)(puVar19 + 0x28),
                    (longlong)(int)puVar19[0x2c]);
      plVar16[7] = local_1d8;
      plVar16[6] = (longlong)iVar21 * 0x58 + lVar28;
      plVar16[1] = (longlong)&local_108;
      (**(code **)(*(longlong *)plVar16[8] + 8))((longlong *)plVar16[8],plVar16);
      local_108 = &PTR_FUN_149e73df0;
      if (local_50 != 0) {
        (**(code **)(local_50 + -0x10))(local_50 + -0x10);
      }
      puVar8 = local_1c8;
      local_108 = &PTR_FUN_149e37220;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      plVar16 = local_b0;
      local_108 = &PTR__purecall_149e35f70;
      if (local_b0 != (longlong *)0x0) {
        if (*local_b0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar16);
      }
      lVar28 = local_90;
      puVar19 = local_238;
      uVar23 = local_1e4;
      if (local_90 != 0) {
        if (*(longlong *)(local_90 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar28);
        puVar19 = local_238;
        uVar23 = local_1e4;
      }
    }
  }
LAB_14066913e:
  uVar18 = (uint)local_200;
  param_3 = local_210;
  puVar27 = local_228;
  iVar30 = (int)local_1f8;
  if ((puVar19[2] == puVar19[0xd]) && (uVar31 = local_200, puVar19[0x16] == puVar19[0x21])) {
LAB_140669168:
    uVar18 = (uint)uVar31;
    FUN_1456fd4bc(local_220,(ulonglong)local_208 & 0xffffffff);
  }
  uVar23 = uVar23 & ~uVar18;
  puVar15 = (uint *)param_3[0xf];
  if ((uint *)param_3[0xf] == (uint *)0x0) {
    puVar15 = puVar8;
  }
  iVar21 = (int)param_3[0x10];
  iVar25 = (int)puVar27;
  lVar28 = (longlong)iVar25;
  uVar18 = puVar15[lVar28] & uVar23;
  if (uVar18 == 0) {
    iVar14 = iVar21 + 0x1e;
    if (-1 < iVar21 + -1) {
      iVar14 = iVar21 + -1;
    }
    iVar14 = iVar14 >> 5;
    iVar12 = iVar14;
    if (iVar14 < iVar25) {
      iVar12 = iVar25;
    }
    if (iVar14 <= iVar25) goto LAB_140669278;
    lVar22 = 0;
    while( true ) {
      iVar30 = iVar30 + 0x20;
      uVar18 = puVar15[lVar28 + lVar22 + 1];
      if (uVar18 != 0) break;
      lVar22 = lVar22 + 1;
      if (iVar12 - lVar28 == lVar22) goto LAB_140669278;
    }
    puVar27 = (uint *)(ulonglong)(iVar25 + (int)lVar22 + 1);
    uVar23 = 0xffffffff;
  }
  uVar31 = (ulonglong)(-uVar18 & uVar18);
  uVar34 = uVar31 * 2 + 1;
  lVar28 = 0x3f;
  if (uVar34 != 0) {
    for (; uVar34 >> lVar28 == 0; lVar28 = lVar28 + -1) {
    }
  }
  iVar25 = (iVar30 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
  if (iVar21 <= iVar25) goto LAB_140669278;
  goto LAB_140668cf0;
}



// FUNCTION 14066a0d2 FUN_14066a0d2 body=645 status=ok
// SIG undefined FUN_14066a0d2(void)

undefined8 * FUN_14066a0d2(int param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  DWORD DVar8;
  DWORD DVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  bool bVar14;
  
  uVar5 = DAT_14c9c0d38;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar10 = (uint *)*puVar1;
  if (puVar10 != (uint *)0x0) goto LAB_14066a11f;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar10 = (uint *)*puVar1;
LAB_14066a11f:
    puVar13 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar11 = puVar10[0x12];
    if (puVar13 + 0x13 <= puVar10 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar2 = *puVar10;
      *puVar10 = *puVar10 + uVar11 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar11) != 0xffffffff) break;
      puVar10 = (uint *)*puVar1;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar1 = puVar10;
      puVar13 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
      uVar11 = 0;
      if (puVar13 + 0x13 <= puVar10 + 0x4000) {
        uVar11 = 1;
        goto LAB_14066a19b;
      }
    }
  }
  uVar11 = uVar11 + 1;
LAB_14066a19b:
  *(undefined8 **)(puVar10 + 0x10) = puVar13 + 0x14;
  puVar10[0x12] = uVar11;
  *(int *)(puVar13 + -1) = ((int)puVar13 + -8) - (int)puVar10;
  *(undefined4 *)((longlong)puVar13 + -4) = 0x98;
  *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(&DAT_14ca11f60 + (ulonglong)(2 < param_1) * 0xe8);
  *(undefined2 *)(puVar13 + 2) = 0x1010;
  puVar13[3] = param_2;
  *(int *)(puVar13 + 4) = param_1;
  puVar13[5] = param_3;
  puVar13[6] = param_4;
  *(undefined1 *)(puVar13 + 7) = 0x3a;
  *puVar13 = &PTR_FUN_14a1f0c90;
  puVar13[8] = 0;
  puVar13[9] = uVar5;
  *(undefined4 *)(puVar13 + 10) = 0x11;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  *(undefined4 *)(puVar13 + 0xf) = 0;
  *(undefined4 *)(puVar13 + 0x10) = 3;
  *(undefined1 *)((longlong)puVar13 + 0x84) = 1;
  lVar6 = DAT_14ca1c600;
  uVar3 = *(ushort *)(&DAT_14ca85070 + (longlong)param_1 * 2);
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar12 = 0;
  }
  else if (iVar4 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar12 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar12 = 1;
  }
  uVar7 = 0;
  bVar14 = false;
  if (0 < *(int *)(lVar6 + uVar12 * 4)) {
    if (((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar3 * 0xf) & 2) == 0) || (DAT_14ca84f5c != '\x01')
       ) {
      bVar14 = false;
    }
    else {
      bVar14 = *(int *)(DAT_14ca1c618 + 4) != 0;
    }
  }
  *(bool *)((longlong)puVar13 + 0x85) = bVar14;
  *(undefined1 *)((longlong)puVar13 + 0x86) = 1;
  if (param_2 != 0) {
    uVar7 = *(undefined4 *)(param_2 + 0x35e8);
  }
  *(undefined4 *)(puVar13 + 0x11) = uVar7;
  *(undefined1 *)((longlong)puVar13 + 0x8c) = 0;
  *(undefined4 *)(puVar13 + 0x12) = 0;
  if ((param_3 != 0) && (*(char *)(puVar13[5] + 0x23d9) == '\x01')) {
    *(undefined4 *)(puVar13 + 0x12) = *(undefined4 *)(puVar13[5] + 0x125b4);
  }
  return puVar13;
}



// FUNCTION 14066a364 FUN_14066a364 body=645 status=ok
// SIG undefined FUN_14066a364(void)

undefined8 * FUN_14066a364(int param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  DWORD DVar8;
  DWORD DVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  bool bVar14;
  
  uVar5 = DAT_14c9c0d38;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar10 = (uint *)*puVar1;
  if (puVar10 != (uint *)0x0) goto LAB_14066a3b1;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar10 = (uint *)*puVar1;
LAB_14066a3b1:
    puVar13 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar11 = puVar10[0x12];
    if (puVar13 + 0x13 <= puVar10 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar2 = *puVar10;
      *puVar10 = *puVar10 + uVar11 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar11) != 0xffffffff) break;
      puVar10 = (uint *)*puVar1;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar1 = puVar10;
      puVar13 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
      uVar11 = 0;
      if (puVar13 + 0x13 <= puVar10 + 0x4000) {
        uVar11 = 1;
        goto LAB_14066a42d;
      }
    }
  }
  uVar11 = uVar11 + 1;
LAB_14066a42d:
  *(undefined8 **)(puVar10 + 0x10) = puVar13 + 0x14;
  puVar10[0x12] = uVar11;
  *(int *)(puVar13 + -1) = ((int)puVar13 + -8) - (int)puVar10;
  *(undefined4 *)((longlong)puVar13 + -4) = 0x98;
  *(undefined4 *)(puVar13 + 1) = (&DAT_14ca11f5c)[(ulonglong)(2 < param_1) * 0x3a];
  *(undefined2 *)(puVar13 + 2) = 0xf0f;
  puVar13[3] = param_2;
  *(int *)(puVar13 + 4) = param_1;
  puVar13[5] = param_3;
  puVar13[6] = param_4;
  *(undefined1 *)(puVar13 + 7) = 0x3a;
  *puVar13 = &PTR_FUN_14a1f0c90;
  puVar13[8] = 0;
  puVar13[9] = uVar5;
  *(undefined4 *)(puVar13 + 10) = 0x11;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  *(undefined4 *)(puVar13 + 0xf) = 0;
  *(undefined4 *)(puVar13 + 0x10) = 2;
  *(undefined1 *)((longlong)puVar13 + 0x84) = 1;
  lVar6 = DAT_14ca1c600;
  uVar3 = *(ushort *)(&DAT_14ca85070 + (longlong)param_1 * 2);
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar12 = 0;
  }
  else if (iVar4 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar12 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar12 = 1;
  }
  uVar7 = 0;
  bVar14 = false;
  if (0 < *(int *)(lVar6 + uVar12 * 4)) {
    if (((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar3 * 0xf) & 2) == 0) || (DAT_14ca84f5c != '\x01')
       ) {
      bVar14 = false;
    }
    else {
      bVar14 = *(int *)(DAT_14ca1c618 + 4) != 0;
    }
  }
  *(bool *)((longlong)puVar13 + 0x85) = bVar14;
  *(undefined1 *)((longlong)puVar13 + 0x86) = 1;
  if (param_2 != 0) {
    uVar7 = *(undefined4 *)(param_2 + 0x35e8);
  }
  *(undefined4 *)(puVar13 + 0x11) = uVar7;
  *(undefined1 *)((longlong)puVar13 + 0x8c) = 0;
  *(undefined4 *)(puVar13 + 0x12) = 0;
  if ((param_3 != 0) && (*(char *)(puVar13[5] + 0x23d9) == '\x01')) {
    *(undefined4 *)(puVar13 + 0x12) = *(undefined4 *)(puVar13[5] + 0x125b4);
  }
  return puVar13;
}



// FUNCTION 14066a5ea FUN_14066a5ea body=817 status=ok
// SIG undefined FUN_14066a5ea(void)

void FUN_14066a5ea(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_1c = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  uStack_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_24 = (undefined4)uVar2;
      local_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_24);
    }
  }
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_28 = (undefined4)uVar2;
      uStack_24 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_14066a91c(param_1,uStack_24,local_28);
  *param_3 = uVar4;
  if ((CONCAT44(uStack_1c,local_20) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14066a91c FUN_14066a91c body=439 status=ok
// SIG undefined FUN_14066a91c(void)

void FUN_14066a91c(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
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
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    if (DAT_14cad2858 == 0) {
      local_50 = &local_38;
      local_38 = FUN_144a7958c;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_146395584;
      local_58 = &LAB_147a0ba80;
      local_60 = &LAB_14575ccce;
      local_68 = L"Engine";
      local_70 = 0x40000000000;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
        DAT_14cad2858 + 0x30)) {
      if (DAT_14c86a9f8 == '\x01') {
        iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (iVar1 != 2) {
          if (iVar1 != 1) goto LAB_14066a9ac;
          DVar2 = FUN_140ad26c0();
          DVar3 = GetCurrentThreadId();
          if (DVar2 != DVar3) goto LAB_14066a9ac;
        }
      }
      FUN_14036294a(param_1[4],1,1);
    }
  }
LAB_14066a9ac:
  lVar4 = param_1[0x7c];
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar4;
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    FUN_14066aad4(lVar4,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14066aad4 FUN_14066aad4 body=105 status=ok
// SIG undefined FUN_14066aad4(void)

undefined8 FUN_14066aad4(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))();
    if (((-1 < (int)param_2) && ((int)param_2 < (int)plVar1[1])) &&
       (lVar2 = (longlong)
                *(int *)(*(longlong *)(*plVar1 + (longlong)(int)((int)plVar1[1] + ~param_2) * 8) +
                        0x44) + *(longlong *)(param_1 + 0x130), lVar2 != 0)) {
      uVar3 = FUN_14066ab3e(lVar2,param_1,param_3);
      return uVar3;
    }
  }
  return 0x7f7fffff;
}



// FUNCTION 14066ab3e FUN_14066ab3e body=108 status=ok
// SIG undefined FUN_14066ab3e(void)

undefined8 FUN_14066ab3e(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  
  plVar1 = (longlong *)
           FUN_14018358c((longlong)param_3,param_2,
                         (longlong)param_3 * 0x78 +
                         *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10));
  fVar4 = 3.4028235e+38;
  uVar5 = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0xf0))(plVar1);
    if (lVar2 != 0) {
      uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
      uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
      fVar4 = (float)(**(code **)(*plVar1 + 0x118))(plVar1);
      fVar4 = (float)uVar3 - fVar4;
    }
  }
  return CONCAT44(uVar5,fVar4);
}



// FUNCTION 14066abaa FUN_14066abaa body=43 status=ok
// SIG undefined FUN_14066abaa(void)

undefined8 FUN_14066abaa(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x198))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014066abc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x2b0))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14066abd6 FUN_14066abd6 body=111 status=ok
// SIG undefined FUN_14066abd6(void)

void FUN_14066abd6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((longlong)(int)param_1[5] != 0) {
    lVar4 = param_1[4];
    lVar3 = (longlong)(int)param_1[5] * 0x70 + lVar4;
    do {
      iVar1 = *(int *)(lVar4 + 0x30);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(lVar4 + 0x28);
        lVar5 = 0;
        do {
          (**(code **)(**(longlong **)(lVar2 + lVar5) + 0x58))();
          lVar5 = lVar5 + 0x30;
        } while ((longlong)iVar1 * 0x30 != lVar5);
      }
      lVar4 = lVar4 + 0x70;
    } while (lVar4 != lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00014066ac41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1);
  return;
}



// FUNCTION 14066ac48 FUN_14066ac48 body=734 status=ok
// SIG undefined FUN_14066ac48(void)

void FUN_14066ac48(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar5 = (longlong *)(param_1 + 0x458);
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x460);
  if (0 < (int)*(uint *)(param_1 + 0x460)) {
    lVar10 = 8;
    lVar11 = 0;
    do {
      lVar9 = *(longlong *)(*plVar5 + -8 + lVar10);
      plVar3 = *(longlong **)(*plVar5 + lVar10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (lVar9 != DAT_14c98dec8) {
        FUN_14066af28(lVar9,*(undefined8 *)(param_1 + 0x448));
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
      lVar11 = lVar11 + 1;
      uVar7 = (ulonglong)*(int *)(param_1 + 0x460);
      lVar10 = lVar10 + 0x10;
    } while (lVar11 < (longlong)uVar7);
  }
  lVar10 = *(longlong *)(param_1 + 0x458);
  *(undefined8 *)(param_1 + 0x458) = 0;
  iVar4 = *(int *)(param_1 + 0x464);
  local_50 = CONCAT44(iVar4,(undefined4)local_50);
  *(undefined8 *)(param_1 + 0x460) = 0;
  local_58 = lVar10;
  FUN_1404578a2(0,0);
  *(undefined4 *)(param_1 + 0x460) = 0;
  if (*(int *)(param_1 + 0x464) != 0) {
    FUN_140457c28(plVar5,0);
  }
  FUN_1404578a2(lVar10,uVar7 & 0xffffffff);
  local_50 = local_50 & 0xffffffff00000000;
  if (iVar4 != 0) {
    FUN_140457c28(&local_58,0);
  }
  if (plVar5 == &local_58) {
    uVar7 = local_50 & 0xffffffff;
  }
  else {
    FUN_1404578a2(*(undefined8 *)(param_1 + 0x458),*(undefined4 *)(param_1 + 0x460));
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x458) = local_58;
    local_58 = 0;
    *(undefined4 *)(param_1 + 0x460) = (undefined4)local_50;
    *(undefined4 *)(param_1 + 0x464) = local_50._4_4_;
    local_50 = 0;
    uVar7 = 0;
  }
  FUN_1404578a2(local_58,uVar7);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  iVar4 = *(int *)(param_1 + 0x28);
  if (0 < iVar4) {
    lVar10 = 0;
    do {
      if (0 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x30 + lVar10 * 0x70)) {
        lVar11 = *(longlong *)(param_1 + 0x20) + lVar10 * 0x70;
        lVar9 = 0;
        do {
          lVar6 = *(longlong *)(lVar11 + 0x28);
          plVar5 = *(longlong **)(lVar6 + lVar9 * 0x30);
          plVar3 = *(longlong **)(lVar6 + 8 + lVar9 * 0x30);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
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
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x98))();
          if (0 < (int)plVar5[1]) {
            lVar6 = 0;
            lVar8 = 0;
            do {
              local_60 = lVar6;
              FUN_1428fe7e4(param_1 + 0x440,*plVar5 + lVar6);
              lVar8 = lVar8 + 1;
              lVar6 = local_60 + 0x10;
            } while (lVar8 < (int)plVar5[1]);
          }
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar3 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
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
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)(lVar11 + 0x30));
        iVar4 = *(int *)(param_1 + 0x28);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14066af28 FUN_14066af28 body=299 status=ok
// SIG undefined FUN_14066af28(void)

bool FUN_14066af28(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar9 = *(longlong **)(param_1 + 0x1c8);
  bVar4 = true;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    iVar6 = (int)plVar9[1];
    lVar8 = 0;
    do {
      if (iVar6 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_14066af6f;
      }
      LOCK();
      iVar5 = (int)plVar9[1];
      bVar10 = iVar6 == iVar5;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar10);
    lVar8 = *(longlong *)(param_1 + 0x1c0);
    bVar4 = false;
  }
LAB_14066af6f:
  if (lVar8 == param_2) {
    plVar3 = *(longlong **)(param_1 + 0x1c8);
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    if (DAT_14c968098 != 0) {
      lVar7 = *(longlong *)(DAT_14c968098 + 200);
      plVar3 = *(longlong **)(DAT_14c968098 + 0xd0);
      if (plVar3 == (longlong *)0x0) {
        *(undefined1 *)(lVar7 + 0x88) = 1;
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        *(undefined1 *)(lVar7 + 0x88) = 1;
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar3)(plVar3);
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
    if (param_2 != 0) {
      FUN_140163244(lVar8,8);
    }
    lVar7 = FUN_14007026e(&DAT_14c967f20,*(undefined4 *)(param_1 + 0x20));
    if (lVar7 != 0) {
      FUN_14287b3a8(param_1,*(undefined8 *)(lVar7 + 0x58));
    }
  }
  if (!bVar4) {
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  return lVar8 == param_2;
}



// FUNCTION 14066b054 FUN_14066b054 body=106 status=ok
// SIG undefined FUN_14066b054(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14066b054(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98ee58) {
    FUN_144b3d300(&DAT_14c98ee58);
    if (DAT_14c98ee58 == -1) {
      DAT_14c98ee48 = 0;
      _DAT_14c98ee50 = 0;
      atexit(FUN_1428fe90a);
      _Init_thread_footer(&DAT_14c98ee58);
    }
  }
  return &DAT_14c98ee48;
}



// FUNCTION 14066b0be FUN_14066b0be body=480 status=ok
// SIG undefined FUN_14066b0be(void)

ulonglong FUN_14066b0be(longlong param_1)

{
  size_t _Size;
  byte bVar1;
  uint *puVar2;
  char *_Dst;
  uint *puVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 unaff_RBX;
  undefined1 auStack_88 [32];
  uint local_68 [8];
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  bVar5 = *(byte *)(param_1 + 0x60);
  if (bVar5 == 1) {
    *(undefined1 *)(param_1 + 0x60) = 0;
    lVar4 = *(longlong *)(param_1 + 0x50);
    if (lVar4 == 0) {
      _Size = *(size_t *)(param_1 + 0x18);
      if (_Size != 0) {
        _Dst = (char *)(param_1 + 8);
        if (0xf < *(ulonglong *)(param_1 + 0x20)) {
          _Dst = *(char **)_Dst;
        }
        if (*_Dst == '.') {
          memmove(_Dst,_Dst + 1,_Size);
          *(size_t *)(param_1 + 0x18) = _Size - 1;
        }
      }
    }
    else {
      if (*(int *)(lVar4 + 0x30) != 0) {
        FUN_14066b2a0(param_1 + 0x28,lVar4 + 0x28);
        lVar4 = *(longlong *)(param_1 + 0x50);
      }
      if (*(longlong *)(lVar4 + 0x18) != 0) {
        puVar3 = (uint *)(param_1 + 8);
        if (*(longlong *)(param_1 + 0x18) == 0) {
          FUN_1401d7e14(puVar3);
        }
        else {
          puVar2 = puVar3;
          if (0xf < *(ulonglong *)(param_1 + 0x20)) {
            puVar2 = *(uint **)puVar3;
          }
          if ((char)*puVar2 == '.') {
            FUN_1456dba66(&local_48,lVar4 + 8,puVar3);
            if (puVar3 != &local_48) {
              FUN_1401d9a90(puVar3);
              *(undefined8 *)(param_1 + 0x18) = local_38;
              *(undefined8 *)(param_1 + 0x20) = uStack_30;
              *puVar3 = local_48;
              *(uint *)(param_1 + 0xc) = uStack_44;
              *(uint *)(param_1 + 0x10) = uStack_40;
              *(uint *)(param_1 + 0x14) = uStack_3c;
              local_38 = 0;
              uStack_30 = 0xf;
              local_48 = local_48 & 0xffffff00;
            }
            puVar3 = &local_48;
          }
          else {
            FUN_14895e1c3(local_68,lVar4 + 8,L".Preview");
            puVar2 = puVar3;
            if (0xf < *(ulonglong *)(param_1 + 0x20)) {
              puVar2 = *(uint **)(param_1 + 8);
            }
            puVar2 = (uint *)FUN_144a6594a(local_68,puVar2,*(undefined8 *)(param_1 + 0x18));
            local_48 = *puVar2;
            uStack_44 = puVar2[1];
            uStack_40 = puVar2[2];
            uStack_3c = puVar2[3];
            local_38 = *(undefined8 *)(puVar2 + 4);
            uStack_30 = *(undefined8 *)(puVar2 + 6);
            puVar2[4] = 0;
            puVar2[5] = 0;
            puVar2[6] = 0xf;
            puVar2[7] = 0;
            *(undefined1 *)puVar2 = 0;
            if (puVar3 != &local_48) {
              FUN_1401d9a90(puVar3);
              *(undefined4 *)(param_1 + 0x18) = (undefined4)local_38;
              *(undefined4 *)(param_1 + 0x1c) = local_38._4_4_;
              *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_30;
              *(undefined4 *)(param_1 + 0x24) = uStack_30._4_4_;
              *puVar3 = local_48;
              *(uint *)(param_1 + 0xc) = uStack_44;
              *(uint *)(param_1 + 0x10) = uStack_40;
              *(uint *)(param_1 + 0x14) = uStack_3c;
              local_38 = 0;
              uStack_30 = 0xf;
              local_48 = local_48 & 0xffffff00;
            }
            FUN_1401d9a90(&local_48);
            puVar3 = local_68;
          }
          FUN_1401d9a90(puVar3);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    bVar1 = FUN_14066b0be();
    bVar5 = bVar5 | bVar1;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    bVar1 = FUN_14066b0be();
    bVar5 = bVar5 | bVar1;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar5) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14066b2a0 FUN_14066b2a0 body=101 status=ok
// SIG undefined FUN_14066b2a0(void)

void FUN_14066b2a0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar2 + uVar1;
  if (*(int *)((longlong)param_1 + 0xc) - uVar2 < uVar1) {
    FUN_14067abd0(param_1,uVar2);
  }
  memmove((void *)((longlong)(int)uVar1 * 0x20 + (longlong)*param_1),(void *)*param_1,
          (ulonglong)uVar2 << 5);
  FUN_14066b305(*param_1,*param_2,uVar1);
  return;
}



// FUNCTION 14066b305 FUN_14066b305 body=153 status=ok
// SIG undefined FUN_14066b305(void)

void FUN_14066b305(void *param_1,void *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  void *_Dst;
  void *_Src;
  int iVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
    *(undefined8 *)((longlong)param_1 + 0x18) = 0;
    iVar3 = *(int *)((longlong)param_2 + 0x18);
    uVar1 = iVar3 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar1) {
      uVar2 = 0x80;
      if (0x80 < uVar1) {
        uVar2 = uVar1;
      }
      *(uint *)((longlong)param_1 + 0x1c) = uVar2;
      FUN_1446efbd8(param_1,0);
      iVar3 = *(int *)((longlong)param_2 + 0x18);
    }
    *(int *)((longlong)param_1 + 0x18) = iVar3;
    if (iVar3 != 0) {
      _Src = *(void **)((longlong)param_2 + 0x10);
      if (*(void **)((longlong)param_2 + 0x10) == (void *)0x0) {
        _Src = param_2;
      }
      _Dst = *(void **)((longlong)param_1 + 0x10);
      if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
        _Dst = param_1;
      }
      memcpy(_Dst,_Src,(ulonglong)(iVar3 + 0x1fU >> 3 & 0xfffffffc));
    }
    param_1 = (void *)((longlong)param_1 + 0x20);
    param_2 = (void *)((longlong)param_2 + 0x20);
  }
  return;
}



// FUNCTION 14066b5d8 FUN_14066b5d8 body=1116 status=ok
// SIG undefined FUN_14066b5d8(void)

void FUN_14066b5d8(longlong param_1,longlong param_2,int param_3,int *param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_4[1] = param_3;
  piVar1 = (int *)(param_1 + 0x70);
  iVar8 = *(int *)(param_1 + 0x7c);
  lVar4 = (longlong)iVar8;
  if (iVar8 < *(int *)(param_1 + 0xd8)) {
    lVar5 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xd0);
    }
    iVar8 = *(int *)(param_1 + 0xd8) - iVar8;
    do {
      if (param_3 <= *(int *)(lVar5 + 4 + lVar4 * 8)) {
        if (lVar4 != -1) {
          *piVar1 = *piVar1 + param_3;
          goto LAB_14066b672;
        }
        break;
      }
      lVar4 = lVar4 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    FUN_144883418(piVar1);
    iVar8 = *(int *)(param_1 + 0x7c);
    lVar4 = (longlong)iVar8;
    if (iVar8 < *(int *)(param_1 + 0xd8)) {
      lVar5 = param_1 + 0x80;
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        lVar5 = *(longlong *)(param_1 + 0xd0);
      }
      iVar8 = *(int *)(param_1 + 0xd8) - iVar8;
      while (*(int *)(lVar5 + 4 + lVar4 * 8) < param_3) {
        lVar4 = lVar4 + 1;
        iVar8 = iVar8 + -1;
        if (iVar8 == 0) goto LAB_14066b64b;
      }
      *piVar1 = *piVar1 + param_3;
      if (lVar4 == -1) goto LAB_14066b64e;
LAB_14066b672:
      iVar7 = (int)lVar4;
      lVar4 = (longlong)iVar7;
      iVar8 = *(int *)(lVar5 + lVar4 * 8);
      *(int *)(lVar5 + lVar4 * 8) = iVar8 + param_3;
      piVar1 = (int *)(lVar5 + 4 + lVar4 * 8);
      *piVar1 = *piVar1 - param_3;
      if ((*piVar1 == 0) && (*(int *)(param_1 + 0x7c) == iVar7)) {
        *(int *)(param_1 + 0x7c) = iVar7 + 1;
      }
      goto LAB_14066b693;
    }
  }
LAB_14066b64b:
  *piVar1 = *piVar1 + param_3;
LAB_14066b64e:
  iVar8 = *(int *)(param_1 + 0x74);
  iVar6 = iVar8 + param_3;
  *(int *)(param_1 + 0x74) = iVar6;
  iVar7 = *(int *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x78) < iVar6) {
    iVar7 = iVar6;
  }
  *(int *)(param_1 + 0x78) = iVar7;
LAB_14066b693:
  *param_4 = iVar8;
  plVar2 = (longlong *)(param_1 + 0x60);
  uVar10 = *(uint *)(param_1 + 0x68);
  iVar7 = *(int *)(param_1 + 0x74 + (ulonglong)*(byte *)(param_1 + 0x140) * 4);
  if ((int)uVar10 < iVar7) {
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if (*(int *)(param_1 + 0x6c) < iVar7) {
      FUN_14480809c();
      uVar10 = *(uint *)(param_1 + 0x68);
      iVar8 = *param_4;
    }
    if (uVar10 < (uint)(iVar8 + param_3)) {
      do {
        iVar8 = *(int *)(param_1 + 0x68);
        *(uint *)(param_1 + 0x68) = iVar8 + 1U;
        if (*(uint *)(param_1 + 0x6c) < iVar8 + 1U) {
          FUN_1447808da(plVar2,iVar8);
        }
        *(undefined4 *)(*plVar2 + (longlong)iVar8 * 4) = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar10 < (uint)(*param_4 + param_3));
    }
  }
  if (param_3 != 0) {
    iVar8 = *(int *)(param_2 + 0x204);
    iVar7 = 0;
    do {
      *(int *)(*plVar2 + (longlong)(*param_4 + iVar7) * 4) = iVar8 + iVar7;
      iVar7 = iVar7 + 1;
    } while (param_3 != iVar7);
  }
  *(undefined1 *)(param_1 + 0x160) = 1;
  lVar4 = *(longlong *)(param_2 + 8);
  if ((*(byte *)(lVar4 + 0x74) & 8) == 0) {
    if (param_4[1] != 0) {
      uVar10 = 0;
      do {
        uVar3 = *param_4 + uVar10;
        uVar11 = uVar3 >> 6 & 0x2222222 | uVar3 >> 7 & 0x444444;
        uVar11 = (uVar11 >> 3 | uVar11 >> 1) & 0x10f0f0f;
        uVar11 = uVar11 >> 4 | uVar11;
        uVar9 = uVar3 >> 6 & 0x1555555;
        uVar9 = (uVar9 >> 1 | uVar9) & 0x1333333;
        uVar9 = (uVar9 >> 2 | uVar9) & 0x10f0f0f;
        uVar9 = uVar9 >> 4 | uVar9;
        *(ulonglong *)(lVar4 + 0x95c) =
             CONCAT44(uVar3 & 0x3f | (uVar11 & 0xff | uVar11 >> 8 & 0x1f00) << 6,
                      (uVar9 & 0xff | uVar9 >> 8 & 0x1f00) << 6);
        lVar5 = (**(code **)(*(longlong *)(lVar4 + 0x8b8) + 8))(lVar4 + 0x8b8);
        if (*(int *)(lVar4 + 0xa38) != 0) {
          local_58 = *(undefined8 *)(lVar4 + 0xa30);
          local_50 = *(int *)(lVar4 + 0xa38);
          FUN_14066ba35(lVar4 + 0x8c0,&local_58);
          (**(code **)(**(longlong **)(lVar5 + 0x210) + 0x4b8))
                    (*(longlong **)(lVar5 + 0x210),*(undefined8 *)(lVar5 + 0x218),8);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < (uint)param_4[1]);
    }
  }
  else if (param_4[1] != 0) {
    uVar10 = 0;
    do {
      uVar3 = *param_4 + uVar10;
      uVar11 = uVar3 >> 6 & 0x2222222 | uVar3 >> 7 & 0x444444;
      uVar11 = (uVar11 >> 3 | uVar11 >> 1) & 0x10f0f0f;
      uVar11 = uVar11 >> 4 | uVar11;
      uVar9 = uVar3 >> 6 & 0x1555555;
      uVar9 = (uVar9 >> 1 | uVar9) & 0x1333333;
      uVar9 = (uVar9 >> 2 | uVar9) & 0x10f0f0f;
      uVar9 = uVar9 >> 4 | uVar9;
      *(ulonglong *)(lVar4 + 0x9c4) =
           CONCAT44(uVar3 & 0x3f | (uVar11 & 0xff | uVar11 >> 8 & 0x1f00) << 6,
                    (uVar9 & 0xff | uVar9 >> 8 & 0x1f00) << 6);
      lVar5 = (**(code **)(*(longlong *)(lVar4 + 0x920) + 8))(lVar4 + 0x920);
      if (*(int *)(lVar4 + 0xaa0) != 0) {
        local_58 = *(undefined8 *)(lVar4 + 0xa98);
        local_50 = *(int *)(lVar4 + 0xaa0);
        FUN_14066ba35(lVar4 + 0x928,&local_58);
        (**(code **)(**(longlong **)(lVar5 + 0x210) + 0x4b8))
                  (*(longlong **)(lVar5 + 0x210),*(undefined8 *)(lVar5 + 0x218),8);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)param_4[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14066ba35 FUN_14066ba35 body=2165 status=ok
// SIG undefined FUN_14066ba35(void)

void FUN_14066ba35(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_d8 [32];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 1);
  puVar3 = (undefined8 *)*param_2;
  *puVar3 = *param_1;
  *(undefined4 *)(puVar3 + 1) = uVar2;
  *(undefined4 *)((longlong)puVar3 + 0xc) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 5);
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x14);
  lVar4 = *param_2;
  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)((longlong)param_1 + 0xc);
  *(undefined4 *)(lVar4 + 0x18) = uVar2;
  *(undefined4 *)(lVar4 + 0x1c) = uVar1;
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  uVar2 = *(undefined4 *)(param_1 + 4);
  lVar4 = *param_2;
  *(undefined8 *)(lVar4 + 0x20) = param_1[3];
  *(undefined4 *)(lVar4 + 0x28) = uVar2;
  *(undefined4 *)(lVar4 + 0x2c) = uVar1;
  uVar5 = param_1[6];
  uVar6 = param_1[7];
  lVar4 = *param_2;
  *(int *)(lVar4 + 0x30) = (int)uVar5;
  *(int *)(lVar4 + 0x34) = (int)((ulonglong)uVar5 >> 0x20);
  *(int *)(lVar4 + 0x38) = (int)uVar6;
  *(int *)(lVar4 + 0x3c) = (int)((ulonglong)uVar6 >> 0x20);
  fVar7 = ABS(*(float *)(param_1 + 8));
  if ((uint)fVar7 < 0x47800000) {
    if ((uint)fVar7 < 0x38800000) {
      fVar11 = fVar7 + 0.5;
    }
    else {
      fVar7 = (float)((int)fVar7 + 0x8000fff + (uint)(((uint)fVar7 >> 0xd & 1) != 0) >> 0xd);
      fVar11 = fVar7;
    }
  }
  else {
    fVar11 = (float)((0x7f800000 < (uint)fVar7 | 0x3e) << 9);
  }
  uVar8 = movmskps(fVar7,ZEXT416((uint)*(float *)(param_1 + 8)));
  fVar7 = ABS(*(float *)((longlong)param_1 + 0x44));
  if ((uint)fVar7 < 0x47800000) {
    if ((uint)fVar7 < 0x38800000) {
      fVar9 = fVar7 + 0.5;
    }
    else {
      fVar7 = (float)((int)fVar7 + 0x8000fff + (uint)(((uint)fVar7 >> 0xd & 1) != 0) >> 0xd);
      fVar9 = fVar7;
    }
  }
  else {
    fVar9 = (float)((0x7f800000 < (uint)fVar7 | 0x3e) << 9);
  }
  iVar10 = movmskps(fVar7,ZEXT416((uint)*(float *)((longlong)param_1 + 0x44)));
  *(uint *)(*param_2 + 0x40) =
       (uint)fVar11 & 0xffff | (uVar8 & 1) << 0xf | iVar10 << 0x1f | (int)fVar9 << 0x10;
  fVar7 = ABS(*(float *)(param_1 + 9));
  if ((uint)fVar7 < 0x47800000) {
    if ((uint)fVar7 < 0x38800000) {
      fVar11 = fVar7 + 0.5;
    }
    else {
      fVar7 = (float)((int)fVar7 + 0x8000fff + (uint)(((uint)fVar7 >> 0xd & 1) != 0) >> 0xd);
      fVar11 = fVar7;
    }
  }
  else {
    fVar11 = (float)((0x7f800000 < (uint)fVar7 | 0x3e) << 9);
  }
  uVar8 = movmskps(fVar7,ZEXT416((uint)*(float *)(param_1 + 9)));
  fVar7 = ABS(*(float *)((longlong)param_1 + 0x4c));
  if ((uint)fVar7 < 0x47800000) {
    if ((uint)fVar7 < 0x38800000) {
      fVar9 = fVar7 + 0.5;
    }
    else {
      fVar7 = (float)((int)fVar7 + 0x8000fff + (uint)(((uint)fVar7 >> 0xd & 1) != 0) >> 0xd);
      fVar9 = fVar7;
    }
  }
  else {
    fVar9 = (float)((0x7f800000 < (uint)fVar7 | 0x3e) << 9);
  }
  iVar10 = movmskps(fVar7,ZEXT416((uint)*(float *)((longlong)param_1 + 0x4c)));
  *(uint *)(*param_2 + 0x44) =
       (uint)fVar11 & 0xffff | (uVar8 & 1) << 0xf | iVar10 << 0x1f | (int)fVar9 << 0x10;
  fVar7 = ABS(*(float *)(param_1 + 10));
  if ((uint)fVar7 < 0x47800000) {
    if ((uint)fVar7 < 0x38800000) {
      fVar11 = fVar7 + 0.5;
    }
    else {
      fVar7 = (float)((int)fVar7 + 0x8000fff + (uint)(((uint)fVar7 >> 0xd & 1) != 0) >> 0xd);
      fVar11 = fVar7;
    }
  }
  else {
    fVar11 = (float)((0x7f800000 < (uint)fVar7 | 0x3e) << 9);
  }
  uVar8 = movmskps(fVar7,ZEXT416((uint)*(float *)(param_1 + 10)));
  fVar7 = ABS(*(float *)((longlong)param_1 + 0x54));
  if ((uint)fVar7 < 0x47800000) {
    if ((uint)fVar7 < 0x38800000) {
      fVar9 = fVar7 + 0.5;
    }
    else {
      fVar7 = (float)((int)fVar7 + 0x8000fff + (uint)(((uint)fVar7 >> 0xd & 1) != 0) >> 0xd);
      fVar9 = fVar7;
    }
  }
  else {
    fVar9 = (float)((0x7f800000 < (uint)fVar7 | 0x3e) << 9);
  }
  iVar10 = movmskps(fVar7,ZEXT416((uint)*(float *)((longlong)param_1 + 0x54)));
  *(uint *)(*param_2 + 0x48) =
       (uint)fVar11 & 0xffff | (uVar8 & 1) << 0xf | iVar10 << 0x1f | (int)fVar9 << 0x10;
  *(uint *)(*param_2 + 0x4c) =
       *(int *)(param_1 + 0x14) << 0x10 | (uint)*(ushort *)((longlong)param_1 + 0x9c);
  *(undefined4 *)(*param_2 + 0x50) = *(undefined4 *)(param_1 + 0xb);
  *(undefined4 *)(*param_2 + 0x54) = *(undefined4 *)((longlong)param_1 + 0x5c);
  fVar7 = ABS(*(float *)(param_1 + 0xc));
  if ((uint)fVar7 < 0x47800000) {
    if ((uint)fVar7 < 0x38800000) {
      fVar11 = fVar7 + 0.5;
    }
    else {
      fVar7 = (float)((int)fVar7 + 0x8000fff + (uint)(((uint)fVar7 >> 0xd & 1) != 0) >> 0xd);
      fVar11 = fVar7;
    }
  }
  else {
    fVar11 = (float)((0x7f800000 < (uint)fVar7 | 0x3e) << 9);
  }
  uVar8 = movmskps(fVar7,ZEXT416((uint)*(float *)(param_1 + 0xc)));
  fVar7 = ABS(*(float *)((longlong)param_1 + 100));
  if ((uint)fVar7 < 0x47800000) {
    if ((uint)fVar7 < 0x38800000) {
      fVar9 = fVar7 + 0.5;
    }
    else {
      fVar7 = (float)((int)fVar7 + 0x8000fff + (uint)(((uint)fVar7 >> 0xd & 1) != 0) >> 0xd);
      fVar9 = fVar7;
    }
  }
  else {
    fVar9 = (float)((0x7f800000 < (uint)fVar7 | 0x3e) << 9);
  }
  iVar10 = movmskps(fVar7,ZEXT416((uint)*(float *)((longlong)param_1 + 100)));
  *(uint *)(*param_2 + 0x58) =
       (uint)fVar11 & 0xffff | (uVar8 & 1) << 0xf | iVar10 << 0x1f | (int)fVar9 << 0x10;
  fVar7 = ABS(*(float *)((longlong)param_1 + 0xa4));
  if ((uint)fVar7 < 0x47800000) {
    if ((uint)fVar7 < 0x38800000) {
      fVar11 = fVar7 + 0.5;
    }
    else {
      fVar7 = (float)((int)fVar7 + 0x8000fff + (uint)(((uint)fVar7 >> 0xd & 1) != 0) >> 0xd);
      fVar11 = fVar7;
    }
  }
  else {
    fVar11 = (float)((0x7f800000 < (uint)fVar7 | 0x3e) << 9);
  }
  uVar8 = movmskps(fVar7,ZEXT416((uint)*(float *)((longlong)param_1 + 0xa4)));
  fVar7 = ABS(*(float *)(param_1 + 0x15));
  if ((uint)fVar7 < 0x47800000) {
    if ((uint)fVar7 < 0x38800000) {
      fVar9 = fVar7 + 0.5;
    }
    else {
      fVar7 = (float)((int)fVar7 + 0x8000fff + (uint)(((uint)fVar7 >> 0xd & 1) != 0) >> 0xd);
      fVar9 = fVar7;
    }
  }
  else {
    fVar9 = (float)((0x7f800000 < (uint)fVar7 | 0x3e) << 9);
  }
  iVar10 = movmskps(fVar7,ZEXT416((uint)*(float *)(param_1 + 0x15)));
  *(uint *)(*param_2 + 0x5c) =
       (uint)fVar11 & 0xffff | (uVar8 & 1) << 0xf | iVar10 << 0x1f | (int)fVar9 << 0x10;
  fVar7 = *(float *)((longlong)param_1 + 0x6c);
  fVar11 = *(float *)(param_1 + 0xe);
  if (1.0 <= fVar7) {
    fVar7 = 1.0;
  }
  if (fVar7 <= -1.0) {
    fVar7 = -1.0;
  }
  if (1.0 <= fVar11) {
    fVar11 = 1.0;
  }
  if (fVar11 <= -1.0) {
    fVar11 = -1.0;
  }
  *(uint *)(*param_2 + 0x60) =
       (int)(longlong)((fVar11 * 0.5 + 0.5) * 65535.0) << 0x10 |
       (uint)(longlong)((fVar7 * 0.5 + 0.5) * 65535.0);
  fVar7 = *(float *)((longlong)param_1 + 0x74);
  fVar11 = *(float *)((longlong)param_1 + 0xac);
  fVar12 = (float)(~-(uint)(fVar11 < 0.0) & (uint)ABS(fVar11));
  if ((uint)fVar12 < 0x47800000) {
    if ((uint)fVar12 < 0x38800000) {
      fVar12 = fVar12 + 0.5;
    }
    else {
      fVar12 = (float)((int)fVar12 + 0x8000fff + (uint)(((uint)fVar12 >> 0xd & 1) != 0) >> 0xd);
    }
  }
  else {
    fVar12 = (float)((0x7f800000 < (uint)fVar12 | 0x3e) << 9);
  }
  fVar13 = 0.0;
  if (0.0 <= fVar11) {
    fVar13 = fVar11;
  }
  if (1.0 <= fVar7) {
    fVar7 = 1.0;
  }
  if (fVar7 <= -1.0) {
    fVar7 = -1.0;
  }
  iVar10 = movmskps((int)fVar9 << 0x10,ZEXT416((uint)fVar13));
  *(uint *)(*param_2 + 100) =
       *(int *)(param_1 + 0xd) << 0x1f | (int)fVar12 << 0x10 | iVar10 << 0x1f |
       (uint)(longlong)((fVar7 * 0.5 + 0.5) * 65535.0);
  local_a8 = *(undefined4 *)(param_1 + 0xf);
  local_a4 = *(undefined4 *)((longlong)param_1 + 0x7c);
  local_a0 = *(undefined4 *)(param_1 + 0x10);
  local_9c = 0;
  local_98 = *(undefined4 *)((longlong)param_1 + 0x84);
  local_94 = *(undefined4 *)(param_1 + 0x11);
  local_90 = *(undefined4 *)((longlong)param_1 + 0x8c);
  local_8c = 0;
  local_88 = *(undefined4 *)(param_1 + 0x12);
  local_84 = *(undefined4 *)((longlong)param_1 + 0x94);
  local_80 = *(undefined4 *)(param_1 + 0x13);
  local_7c = 0;
  local_78 = (undefined4)DAT_14c846330;
  local_74 = DAT_14c846330._4_4_;
  local_70 = DAT_14c846338;
  local_6c = 0x3f800000;
  FUN_14066c2ac(&local_b8);
  if (1.0 <= local_b8) {
    local_b8 = 1.0;
  }
  if (local_b8 <= -1.0) {
    local_b8 = -1.0;
  }
  if (1.0 <= local_b4) {
    local_b4 = 1.0;
  }
  if (local_b4 <= -1.0) {
    local_b4 = -1.0;
  }
  *(uint *)(*param_2 + 0x68) =
       (int)(longlong)((local_b4 * 0.5 + 0.5) * 65535.0) << 0x10 |
       (uint)(longlong)((local_b8 * 0.5 + 0.5) * 65535.0);
  if (1.0 <= local_b0) {
    local_b0 = 1.0;
  }
  if (local_b0 <= -1.0) {
    local_b0 = -1.0;
  }
  if (1.0 <= local_ac) {
    local_ac = 1.0;
  }
  if (local_ac <= -1.0) {
    local_ac = -1.0;
  }
  *(uint *)(*param_2 + 0x6c) =
       (int)(longlong)((local_ac * 0.5 + 0.5) * 65535.0) << 0x10 |
       (uint)(longlong)((local_b0 * 0.5 + 0.5) * 65535.0);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14066c2ac FUN_14066c2ac body=611 status=ok
// SIG undefined FUN_14066c2ac(void)

float * FUN_14066c2ac(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_48 [32];
  float local_28 [6];
  ulonglong local_10;
  
  fVar4 = DAT_14c84634c;
  fVar3 = DAT_14c846348;
  fVar10 = DAT_14c846344;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  fVar11 = *param_2;
  if (((((ABS(fVar11) <= 0.0001) && (ABS(param_2[1]) <= 0.0001)) && (ABS(param_2[2]) <= 0.0001)) ||
      (((fVar1 = param_2[5], ABS(param_2[4]) <= 0.0001 && (ABS(fVar1) <= 0.0001)) &&
       (ABS(param_2[6]) <= 0.0001)))) ||
     (((fVar2 = param_2[10], ABS(param_2[8]) <= 0.0001 && (ABS(param_2[9]) <= 0.0001)) &&
      (ABS(fVar2) <= 0.0001)))) {
    *param_1 = DAT_14c84633c._4_4_;
    param_1[1] = fVar10;
    param_1[2] = fVar3;
    param_1[3] = fVar4;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  fVar10 = fVar11 + fVar1 + fVar2;
  if (fVar10 <= 0.0) {
    uVar7 = (ulonglong)(fVar11 < fVar1);
    uVar6 = 2;
    if (fVar2 < param_2[(ulonglong)(fVar11 < fVar1) * 4 + uVar7] ||
        fVar2 == param_2[(ulonglong)(fVar11 < fVar1) * 4 + uVar7]) {
      uVar6 = uVar7;
    }
    uVar7 = (ulonglong)(uint)((int)uVar6 * 4);
    lVar8 = (longlong)*(int *)(&DAT_149e25df0 + uVar7);
    uVar5 = (int)uVar6 << 4;
    lVar9 = (longlong)*(int *)(&DAT_149e25df0 + lVar8 * 4);
    fVar11 = 1.0 / SQRT(((*(float *)((longlong)param_2 + uVar7 + uVar5) - param_2[lVar8 * 5]) -
                        param_2[lVar9 * 5]) + 1.0);
    *(float *)((longlong)local_28 + uVar7) = (1.0 / fVar11) * 0.5;
    fVar11 = fVar11 * 0.5;
    local_28[3] = (param_2[lVar8 * 4 + lVar9] - param_2[lVar9 * 4 + lVar8]) * fVar11;
    local_28[lVar8] =
         (*(float *)((longlong)param_2 + lVar8 * 4 + (ulonglong)uVar5) +
         *(float *)((longlong)param_2 + uVar7 + lVar8 * 0x10)) * fVar11;
    local_28[lVar9] =
         (*(float *)((longlong)param_2 + lVar9 * 4 + (ulonglong)uVar5) +
         *(float *)((longlong)param_2 + uVar7 + lVar9 * 0x10)) * fVar11;
    *param_1 = local_28[0];
    param_1[1] = local_28[1];
    param_1[2] = local_28[2];
    param_1[3] = local_28[3];
  }
  else {
    fVar11 = 1.0 / SQRT(fVar10 + 1.0);
    param_1[3] = (1.0 / fVar11) * 0.5;
    fVar11 = fVar11 * 0.5;
    *param_1 = (param_2[6] - param_2[9]) * fVar11;
    param_1[1] = (param_2[8] - param_2[2]) * fVar11;
    param_1[2] = (param_2[1] - param_2[4]) * fVar11;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14066c516 FUN_14066c516 body=587 status=ok
// SIG undefined FUN_14066c516(void)

void FUN_14066c516(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6;
        uVar13 = *(ulonglong *)(lVar11 + lVar10 * 0x18);
        uVar3 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x14 + lVar10 * 0x18) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_14066c71c;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_14066c71c:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14066c762 FUN_14066c762 body=2403 status=ok
// SIG undefined FUN_14066c762(void)

undefined8 * FUN_14066c762(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar14 = puVar18 + 0x14;
  if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
    FUN_140023dd8(puVar1,0xb0);
    puVar18 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar14 = puVar18 + 0x14;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar14;
  *puVar18 = &PTR_FUN_14a22a398;
  puVar18[6] = 0;
  puVar18[7] = 0x3f80000000000000;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[10] = 0;
  puVar18[0xb] = 0;
  puVar18[0xc] = 0;
  puVar18[0xd] = 0;
  puVar18[0xe] = 0;
  puVar18[0xf] = 0;
  puVar18[0x10] = 0;
  puVar18[0x11] = 0;
  puVar18[0x12] = 0;
  iVar5 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar5);
  }
  puVar14 = puVar18 + 6;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = puVar18;
  *(undefined4 *)((longlong)puVar18 + 0x1c) = DAT_14c9d6e20;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) == 0)) {
    uVar19 = 0;
    lVar10 = FUN_14489a2c5(param_1,&DAT_14ca63c48,&DAT_14ca63c78,4,0,0);
    lVar11 = FUN_144735828(&DAT_14ca63b10,param_1,0x14);
    uVar9 = FUN_14476842e(param_1,&DAT_14ca63b28,L"BlackDummy",2);
    uVar19 = uVar19 & 0xffffffff00000000;
    uVar12 = FUN_14060c6ec(param_1,&DAT_14ca63c38,&DAT_14ca63c58,0,0x1c,uVar19);
    FUN_14060c6ec(param_1,&DAT_14ca63c38,&DAT_14ca63c58,0,0x31,uVar19 & 0xffffffff00000000);
    uVar13 = FUN_14476842e(param_1,&DAT_14ca63ba8,L"DepthDummy",2);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x50);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 9;
    }
    lVar3 = param_1 + 0x198;
    *(undefined8 **)(param_1 + 0x70) = puVar15;
    puVar16[1] = *(undefined8 *)(lVar10 + 8);
    puVar16[2] = 0;
    *(undefined1 *)(puVar16 + 3) = 3;
    *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
    *puVar16 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar16 + 5) = 0x1c;
    *(undefined8 *)((longlong)puVar16 + 0x2c) = 0xffffffff00000000;
    puVar16[7] = 0;
    puVar16[8] = lVar10;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(lVar3,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar16;
    *(int *)((longlong)puVar16 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar17 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x50);
      puVar17 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar17 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar15;
    puVar17[1] = *(undefined8 *)(lVar10 + 8);
    puVar17[2] = 0;
    *(undefined1 *)(puVar17 + 3) = 3;
    *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
    *puVar17 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar17 + 5) = 0x31;
    *(undefined8 *)((longlong)puVar17 + 0x2c) = 0xffffffff00000000;
    puVar17[7] = 0;
    puVar17[8] = lVar10;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(lVar3,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar17;
    *(int *)((longlong)puVar17 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar18[9] = uVar13;
    *puVar14 = 0;
    puVar18[7] = 0;
    puVar18[0xb] = uVar9;
    puVar18[10] = uVar9;
    puVar18[0xc] = DAT_14c9c0d80;
    puVar18[8] = uVar9;
    puVar18[0xe] = puVar16;
    puVar18[0xd] = uVar12;
    puVar18[0x10] = puVar17;
    cVar4 = *(char *)(lVar11 + 0x68);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar15 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
      FUN_140023dd8(puVar1,0x50);
      puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar15 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar14;
    puVar15[1] = *(undefined8 *)(lVar11 + 8);
    puVar15[2] = 0;
    *(undefined1 *)(puVar15 + 3) = 3;
    *(undefined8 *)((longlong)puVar15 + 0x1c) = 0xffffffffffffffff;
    *puVar15 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar15 + 5) = cVar4 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar15 + 0x2c) = 0xffffffff00000000;
    puVar15[7] = 0;
    puVar15[8] = lVar11;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(lVar3,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar15;
    *(int *)((longlong)puVar15 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar18[0xf] = puVar15;
    puVar18[4] = 0;
    *(undefined4 *)(puVar18 + 3) = 0;
    puVar18[0x11] = puVar16;
    puVar18[0x12] = puVar17;
    puVar18[2] = 0;
  }
  else {
    puVar18[8] = *(longlong *)(param_2 + 0x10);
    puVar18[9] = *(undefined8 *)(param_2 + 0x28);
    uVar6 = *(undefined4 *)(param_2 + 0x94);
    uVar7 = *(undefined4 *)(param_2 + 0x98);
    uVar8 = *(undefined4 *)(param_2 + 0x9c);
    *(undefined4 *)puVar14 = *(undefined4 *)(param_2 + 0x90);
    *(undefined4 *)((longlong)puVar18 + 0x34) = uVar6;
    *(undefined4 *)(puVar18 + 7) = uVar7;
    *(undefined4 *)((longlong)puVar18 + 0x3c) = uVar8;
    puVar18[10] = *(undefined8 *)(param_2 + 0x30);
    puVar18[0xb] = *(undefined8 *)(param_2 + 0x38);
    puVar18[0xc] = DAT_14c9c0d80;
    puVar18[0xd] = *(undefined8 *)(param_2 + 0x58);
    lVar10 = *(longlong *)(param_2 + 0x60);
    cVar4 = *(char *)(lVar10 + 0x68);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x50);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 9;
    }
    lVar11 = param_1 + 0x198;
    *(undefined8 **)(param_1 + 0x70) = puVar15;
    puVar16[1] = *(undefined8 *)(lVar10 + 8);
    puVar16[2] = 0;
    *(undefined1 *)(puVar16 + 3) = 3;
    *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
    *puVar16 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar16 + 5) = cVar4 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar16 + 0x2c) = 0xffffffff00000000;
    puVar16[7] = 0;
    puVar16[8] = lVar10;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(lVar11,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar16;
    *(int *)((longlong)puVar16 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar18[0xf] = puVar16;
    lVar10 = *(longlong *)(param_2 + 0x70);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x50);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar15;
    puVar16[1] = *(undefined8 *)(lVar10 + 8);
    puVar16[2] = 0;
    *(undefined1 *)(puVar16 + 3) = 3;
    *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
    *puVar16 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar16 + 5) = 0x31;
    *(undefined8 *)((longlong)puVar16 + 0x2c) = 0xffffffff00000000;
    puVar16[7] = 0;
    puVar16[8] = lVar10;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(lVar11,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar16;
    *(int *)((longlong)puVar16 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar18[0x10] = puVar16;
    lVar10 = *(longlong *)(param_2 + 0x50);
    cVar4 = *(char *)(lVar10 + 0x68);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x50);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar15;
    puVar16[1] = *(undefined8 *)(lVar10 + 8);
    puVar16[2] = 0;
    *(undefined1 *)(puVar16 + 3) = 3;
    *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
    *puVar16 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar16 + 5) = cVar4 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar16 + 0x2c) = 0xffffffff00000000;
    puVar16[7] = 0;
    puVar16[8] = lVar10;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(lVar11,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar16;
    *(int *)((longlong)puVar16 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar18[0xe] = puVar16;
    puVar18[4] = *(undefined8 *)(param_2 + 0x148);
    *(undefined4 *)(puVar18 + 3) = *(undefined4 *)(param_2 + 0x48);
    puVar18[0x11] = *(undefined8 *)(param_2 + 0xd8);
    puVar18[0x12] = *(undefined8 *)(param_2 + 0x118);
    puVar18[2] = *(undefined8 *)(param_2 + 0xcc);
    *(undefined4 *)(puVar18 + 5) = 1;
    if (puVar18[0xb] == 0) {
      uVar9 = FUN_14476842e(param_1,&DAT_14ca63b28,L"BlackDummy",2);
      *puVar14 = 0;
      puVar18[7] = 0;
      puVar18[0xb] = uVar9;
      puVar18[10] = uVar9;
    }
  }
  FUN_144a81af4();
  uVar9 = DAT_14c9d5f50;
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar14 = puVar15 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
    FUN_140023dd8(puVar1,0x50);
    puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar15 + 9;
  }
  *puVar1 = (ulonglong)puVar14;
  puVar15[1] = uVar9;
  puVar15[2] = 0;
  *puVar15 = &PTR_FUN_14a1fb9b8;
  FUN_144a81af4();
  puVar15[3] = puVar18 + 2;
  lVar10 = DAT_14c9d5f80;
  puVar15[4] = DAT_14c9d5f80;
  if (lVar10 != 0) {
    LOCK();
    piVar2 = (int *)(lVar10 + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puVar15[5] = &DAT_14c9d5f38;
  puVar15[6] = 0;
  *(undefined4 *)(puVar15 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar15 + 0x3c) = 0;
  *puVar15 = &PTR_FUN_14a22a3a0;
  puVar15[8] = puVar18 + 2;
  iVar5 = *(int *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1b0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1b4) < iVar5 + 1U) {
    FUN_1402aa76e(param_1 + 0x1a8,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar5 * 8) = puVar15;
  *(int *)(puVar15 + 7) = *(int *)(param_1 + 0x1b0) + -1;
  return puVar15;
}



// FUNCTION 14066d0c6 FUN_14066d0c6 body=330 status=ok
// SIG undefined FUN_14066d0c6(void)

undefined4 * FUN_14066d0c6(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14066d2a8(param_1,local_48);
  uVar3 = *param_3;
  *local_40 = uVar3;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_58 = 0;
  cVar1 = FUN_14066d212(param_1,uVar2,local_40);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
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
      *(uint *)((longlong)local_40 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14066d476(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14066d212 FUN_14066d212 body=149 status=ok
// SIG undefined FUN_14066d212(void)

void FUN_14066d212(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_140441dae(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = (int)plVar2[1];
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_14066d27c;
    }
  }
  uVar1 = 0;
LAB_14066d27c:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 14066d2a8 FUN_14066d2a8 body=461 status=ok
// SIG undefined FUN_14066d2a8(void)

int * FUN_14066d2a8(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1446efaca(param_1,iVar11);
    }
    iVar5 = (int)param_1[5];
    if (iVar5 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar8 = iVar5 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar7 = iVar5 + 1;
    iVar12 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar12 = iVar5;
    }
    if (iVar12 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar5) {
        if (iVar5 + 0x20U < 0xa0) {
          iVar7 = 0x80;
          iVar8 = iVar5;
        }
        else {
          uVar13 = iVar5 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar13) {
              uVar6 = uVar13;
            }
          }
          else {
            uVar6 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar6 << 2,0);
          iVar8 = (int)(uVar3 >> 2);
          iVar7 = -0x20;
          if ((int)uVar13 <= iVar8) {
            iVar7 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar7;
        FUN_1446efbd8(plVar9,iVar8);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar8 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar8 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar5 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar5 = *(int *)(*param_1 + 4 + lVar2 * 0x10);
    *(int *)(param_1 + 6) = iVar5;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x10) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar5 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar5 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 14066d476 FUN_14066d476 body=679 status=ok
// SIG undefined FUN_14066d476(void)

void FUN_14066d476(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_14066d4da;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_14066d4da:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x10;
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0xc + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 8 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 14066d71e FUN_14066d71e body=517 status=ok
// SIG undefined FUN_14066d71e(void)

undefined8 * FUN_14066d71e(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 *local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  FUN_14066da9c(param_1,param_2,param_2[0x29],param_3);
  *param_1 = &PTR_FUN_14aa6b300;
  param_1[0x13] = param_2[0x2a];
  puVar5 = (undefined8 *)0x0;
  param_1[0x14] = 0;
  puVar6 = param_1 + 0x15;
  param_1[0x24] = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0xf;
  param_1[0x35] = 0;
  param_1[0x36] = 0xf00000000;
  bVar2 = *(byte *)((longlong)param_1 + 0x5b);
  *(uint *)(param_1 + 0x25) = (uint)bVar2;
  if (0xf < bVar2) {
    FUN_147ce758c(puVar6);
    puVar5 = (undefined8 *)param_1[0x24];
  }
  puVar1 = param_1 + 0x26;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = puVar6;
  }
  memset(puVar5,0,(ulonglong)((uint)bVar2 * 8));
  bVar2 = *(byte *)((longlong)param_1 + 0x5b);
  iVar4 = *(int *)(param_1 + 0x36);
  *(uint *)(param_1 + 0x36) = iVar4 + (uint)bVar2;
  if ((uint)(*(int *)((longlong)param_1 + 0x1b4) - iVar4) < (uint)bVar2) {
    FUN_147ce7690(puVar1);
  }
  puVar5 = (undefined8 *)param_1[0x35];
  if ((undefined8 *)param_1[0x35] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  memset(puVar5 + iVar4,0,(ulonglong)((uint)bVar2 * 8));
  iVar4 = (uint)*(byte *)((longlong)param_1 + 0x5b) - (uint)*(byte *)((longlong)param_1 + 0x5e);
  local_50 = (undefined8 *)param_1[0x35];
  if ((undefined8 *)param_1[0x35] == (undefined8 *)0x0) {
    local_50 = puVar1;
  }
  uVar3 = *(uint *)(param_1 + 0x36);
  local_48 = uVar3 - iVar4;
  if ((int)uVar3 <= (int)local_48) {
    local_48 = uVar3;
  }
  if ((int)local_48 < 1) {
    local_48 = 0;
  }
  local_50 = local_50 + ((longlong)(int)uVar3 - (ulonglong)local_48);
  if ((undefined8 *)param_1[0x24] != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[0x24];
  }
  uVar3 = *(uint *)(param_1 + 0x25);
  uVar7 = uVar3 - iVar4;
  if ((int)uVar3 <= (int)uVar7) {
    uVar7 = uVar3;
  }
  uVar8 = (ulonglong)uVar7;
  if ((int)uVar7 < 1) {
    uVar8 = 0;
  }
  local_60 = puVar6 + ((longlong)(int)uVar3 - uVar8);
  local_58 = (undefined4)uVar8;
  (**(code **)(*param_2 + 0x3a0))
            (param_2,((uint)*(byte *)((longlong)param_1 + 0x5c) -
                     (uint)*(byte *)((longlong)param_1 + 0x5e)) +
                     (uint)*(byte *)((longlong)param_1 + 0x5b));
  FUN_14066d924(param_1,param_2);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14066d924 FUN_14066d924 body=375 status=ok
// SIG undefined FUN_14066d924(void)

void FUN_14066d924(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  
  lVar2 = DAT_14cb019c8;
  fVar8 = 0.0;
  if ((*(longlong *)(param_1 + 0x50) != 0) && (*(int *)(param_1 + 0x80) == 0x10)) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if ((iVar1 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar1 == 2)))) {
      uVar6 = 0;
    }
    else if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar6 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar6 = 1;
    }
    if (0 < *(int *)(lVar2 + uVar6 * 4)) {
      fVar8 = (float)-*(int *)(*(longlong *)(param_1 + 0x50) + 0x20);
    }
  }
  uVar6 = 0;
  cVar3 = '\x02' - (*(char *)(param_2 + 0x13d) == '\x01');
  if (*(char *)(param_2 + 0x13d) == '\0') {
    cVar3 = '\0';
  }
  *(char *)(param_1 + 0x61) = cVar3;
  cVar3 = '\x02' - (*(char *)(param_2 + 0x13e) == '\x01');
  if (*(char *)(param_2 + 0x13e) == '\0') {
    cVar3 = '\0';
  }
  *(char *)(param_1 + 0x62) = cVar3;
  lVar2 = DAT_14cb0b518;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (iVar1 != 0x40000002) {
    if ((DAT_14c86a9f8 == '\x01') && (iVar1 != 2)) {
      if (iVar1 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        uVar6 = (ulonglong)(DVar4 != DVar5);
      }
      else {
        uVar6 = 1;
      }
    }
    else {
      uVar6 = 0;
    }
  }
  fVar7 = *(float *)(lVar2 + uVar6 * 4);
  if (15.0 <= fVar7) {
    fVar7 = 15.0;
  }
  if (fVar7 <= -15.0) {
    fVar7 = -15.0;
  }
  *(float *)(param_1 + 100) = fVar8 + fVar7;
  return;
}



// FUNCTION 14066da9c FUN_14066da9c body=706 status=ok
// SIG undefined FUN_14066da9c(void)

undefined8 *
FUN_14066da9c(undefined8 *param_1,longlong *param_2,longlong param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xc7efffffe0000000;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f) = 0;
  param_1[9] = 0;
  *param_1 = &PTR_LAB_14aa69fd0;
  param_1[10] = param_3;
  param_1[0xb] = *param_4;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(longlong *)((longlong)param_1 + 0x74) = param_2[3];
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(uint *)(param_1 + 0x10) = (uint)*(byte *)((longlong)param_2 + 0xf6);
  *(undefined1 *)((longlong)param_1 + 0x84) = *(undefined1 *)(param_3 + 0xc);
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(byte *)((longlong)param_1 + 0x46) = *(byte *)((longlong)param_2 + 0xfe) & 1;
  bVar5 = (char)param_2[0x1e] - 3;
  uVar6 = (char)(0x1010000000101 >> (bVar5 * '\b' & 0x3f));
  if (6 < bVar5) {
    uVar6 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x44) = uVar6;
  lVar3 = FUN_140032b16(0);
  lVar3 = *(longlong *)(lVar3 + 0x78);
  bVar5 = *(byte *)((longlong)param_2 + 0xf1);
  if (2 < bVar5) {
    bVar5 = *(byte *)(*(longlong *)(lVar3 + 0x28) + 1 +
                     (ulonglong)*(byte *)((longlong)param_2 + 0xf6) * 0x5c);
  }
  *(byte *)(param_1 + 0xc) = bVar5;
  iVar2 = (**(code **)(*param_2 + 0x370))(param_2);
  if (iVar2 == 0) {
    cVar1 = '\0';
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x370))(param_2);
    cVar1 = '\x02' - (iVar2 == 1);
  }
  *(char *)((longlong)param_1 + 0x61) = cVar1;
  iVar2 = (**(code **)(*param_2 + 0x378))(param_2);
  if (iVar2 == 0) {
    cVar1 = '\0';
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x378))(param_2);
    cVar1 = '\x02' - (iVar2 == 1);
  }
  *(char *)((longlong)param_1 + 0x62) = cVar1;
  iVar2 = (**(code **)(*param_2 + 0x380))(param_2);
  if (iVar2 == 0) {
    cVar1 = '\0';
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x380))(param_2);
    cVar1 = '\x02' - (iVar2 == 1);
  }
  *(char *)((longlong)param_1 + 99) = cVar1;
  *(undefined1 *)((longlong)param_1 + 0x91) =
       *(undefined1 *)
        (*(longlong *)(lVar3 + 0x28) + 0x58 + (ulonglong)*(byte *)((longlong)param_2 + 0xf6) * 0x5c)
  ;
  lVar3 = *(longlong *)
           (*(longlong *)(param_1[10] + 0x18) + (ulonglong)*(byte *)((longlong)param_1 + 0x5c) * 8);
  *(uint *)(param_1 + 0xd) = (uint)*(ushort *)(lVar3 + 0x48);
  *(uint *)((longlong)param_1 + 0x6c) = (uint)*(ushort *)(lVar3 + 0x4a);
  *(uint *)(param_1 + 0xe) = (uint)*(ushort *)(lVar3 + 0x4c);
  *(uint *)((longlong)param_1 + 0x7c) =
       (uint)(*(int *)(param_1 + 0x10) == 0x16 || *(int *)(param_1 + 0x10) == 0x11);
  uVar4 = (ulonglong)
          ((*(byte *)((longlong)param_2 + 0xfe) & 1) << 4 |
           (*(byte *)((longlong)param_2 + 0x104) & 2) << 0x13 |
          (*(byte *)((longlong)param_2 + 0xfe) & 2) << 5) ^ 0x100008;
  param_1[0x11] = uVar4;
  if (1 < *(byte *)((longlong)param_4 + 3)) {
    param_1[0x11] = uVar4 | 0x10000000;
  }
  local_38 = FUN_14066dd60();
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_38);
  }
  lVar3 = (**(code **)(param_2[0x19] + 0x18))(param_2 + 0x19,&local_38);
  if (lVar3 != 0) {
    FUN_14066dd60();
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14066dd60 FUN_14066dd60 body=228 status=ok
// SIG undefined FUN_14066dd60(void)

longlong FUN_14066dd60(void)

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
  if (DAT_14cb0a9c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b34458;
    local_38 = &LAB_147d65fb9;
    local_40 = FUN_146406810;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"TextureMipDataProviderFactory",&DAT_14cb0a9c8,&DAT_147d65fb8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0a9c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14066de46 FUN_14066de46 body=519 status=ok
// SIG undefined FUN_14066de46(void)

void FUN_14066de46(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  char param_5)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_8b8 [40];
  longlong local_890;
  undefined4 local_888;
  undefined8 local_880;
  undefined1 *local_878;
  undefined1 *local_870;
  undefined1 *local_868;
  char local_860;
  undefined1 local_858 [2070];
  undefined1 local_42 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_8b8;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  uVar3 = DAT_14cb3aff0;
  lVar4 = DAT_14cb3afe8;
  if (param_5 == '\0') goto LAB_14066df37;
  uVar11 = (ulonglong)(DAT_14cb3aff0 - 1);
  if (DAT_14cb3aff0 == 0) {
    uVar11 = 0;
  }
  local_880 = *param_3;
  local_878 = local_858;
  local_860 = '\0';
  local_868 = local_42;
  local_870 = local_878;
  FUN_14005eb5c(&local_880,&local_878);
  puVar5 = local_878;
  iVar10 = (int)uVar11;
  iVar9 = (int)((ulonglong)((longlong)local_870 - (longlong)local_878) >> 1);
  if ((iVar10 < 2) || (*(short *)(lVar4 + -2 + uVar11 * 2) != 0x2e)) {
    if ((iVar10 + 1 < iVar9) &&
       ((-1 < iVar10 && (lVar7 = (longlong)iVar10, *(short *)(local_878 + lVar7 * 2) == 0x2e)))) {
      if (1 < uVar3) {
        lVar8 = 0;
        do {
          uVar1 = *(ushort *)(lVar4 + lVar8);
          uVar2 = *(ushort *)(local_878 + lVar8);
          if (uVar1 == uVar2) {
            iVar9 = 0;
            if ((uVar1 == 0) || (lVar7 == 1)) goto LAB_14066dfd1;
          }
          else {
            if (0x7f < (uVar2 | uVar1)) {
              iVar9 = (uint)uVar1 - (uint)uVar2;
              goto LAB_14066dfd1;
            }
            if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
              iVar9 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                      (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
              goto LAB_14066dfd1;
            }
            if (lVar7 == 1) {
              iVar9 = 0;
              goto LAB_14066dfd1;
            }
          }
          lVar7 = lVar7 + -1;
          lVar8 = lVar8 + 2;
        } while( true );
      }
      if (local_860 == '\x01') {
        FUN_1400020a8(local_878);
      }
      goto LAB_14066df37;
    }
LAB_14066df0f:
    if (local_860 == '\x01') {
      FUN_1400020a8(local_878);
    }
  }
  else {
    if (iVar9 <= iVar10) goto LAB_14066df0f;
    iVar9 = FUN_144a54874(lVar4,local_878);
LAB_14066dfd1:
    if (local_860 == '\x01') {
      FUN_1400020a8(puVar5);
    }
    if (iVar9 == 0) goto LAB_14066df37;
  }
  local_890 = param_1[7];
  local_888 = (undefined4)param_1[8];
  uVar6 = FUN_144a1241a(param_2);
  *(undefined4 *)(param_1 + 0xb) = uVar6;
LAB_14066df37:
  uVar3 = *(uint *)(param_1 + 6);
  *(uint *)(param_1 + 6) = uVar3 | 1;
  if ((~uVar3 & 4) == 0) {
    (**(code **)(*param_1 + 0x428))(param_1);
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  }
  if ((local_40 ^ (ulonglong)auStack_8b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14066e04e FUN_14066e04e body=385 status=ok
// SIG undefined FUN_14066e04e(void)

void FUN_14066e04e(ulonglong *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = (uint)param_1[1];
  if ((int)uVar2 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar2) {
      uVar5 = uVar2;
    }
    lVar3 = (longlong)(int)uVar5;
  }
  else {
    lVar3 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar4 = lVar3 * 4;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar4 + 0xf;
      if (0x7ff0 < uVar4) {
        uVar6 = uVar7 & 0xfffffffffffffff0;
        if (uVar6 < 0x7ff1) goto LAB_14066e16b;
        goto LAB_14066e13b;
      }
      uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
    }
  }
LAB_14066e0d5:
  do {
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 >> 2)) {
      uVar6 = uVar4 >> 2 & 0xffffffff;
    }
    uVar5 = (uint)uVar6;
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
    uVar4 = *param_1;
    if ((uVar4 & 1) == 0) {
      if ((uVar4 == 0) && ((int)uVar5 < 1)) {
        return;
      }
      if (-1 < (int)uVar5) {
        uVar4 = FUN_14001fdce(uVar4,uVar6 << 2,4);
        *param_1 = uVar4;
        return;
      }
    }
    else if (uVar5 <= param_2) {
      return;
    }
    uVar7 = 0;
    FUN_1467ac767();
LAB_14066e16b:
    bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
    uVar7 = 0x32;
    if (0x32 < bVar1) {
      uVar7 = (ulonglong)bVar1;
    }
    uVar8 = 0x32 - (ulonglong)bVar1;
    do {
      uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
      if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14066e0d5;
      lVar3 = uVar7 + 1 + uVar8;
      uVar8 = uVar8 - 1;
    } while (lVar3 != 0x33);
LAB_14066e13b:
    uVar4 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar4 = (ulonglong)DAT_14c841df8;
    }
    uVar4 = -uVar4 & (uVar6 + uVar4) - 1;
  } while( true );
}



// FUNCTION 14066e1d0 FUN_14066e1d0 body=1484 status=ok
// SIG undefined FUN_14066e1d0(void)

void FUN_14066e1d0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong *plVar16;
  uint *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined1 auStack_c8 [32];
  undefined1 **local_a8;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  void *local_78;
  undefined8 uStack_70;
  undefined1 *local_68 [2];
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = *(undefined8 *)(param_1 + 0x28);
  uStack_90 = *(undefined4 *)(param_1 + 0x48);
  uStack_8c = *(undefined4 *)(param_1 + 0x4c);
  local_88 = *(undefined4 *)(param_1 + 0x50);
  local_84 = *(undefined4 *)(param_1 + 0x54);
  local_80 = *(int *)(param_1 + 0x58);
  if (local_80 == -1) {
    local_78 = (void *)0x0;
    uVar15 = *(uint *)(param_1 + 0x40);
    pvVar4 = *(void **)(param_1 + 0x38);
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar15);
    if ((longlong)(int)uVar15 == 0) {
      uStack_70 = (ulonglong)uVar15;
    }
    else {
      FUN_1447c510a(&local_78,uVar15,0);
      memcpy(local_78,pvVar4,(longlong)(int)uVar15 << 2);
    }
  }
  else {
    local_78 = (void *)0x0;
    uStack_70 = 0;
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar9 != 2) {
      if (iVar9 != 1) goto LAB_14066e29b;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_14066e2a0;
      goto LAB_14066e2d1;
    }
  }
  else {
LAB_14066e29b:
    if (iVar9 != 0x10) {
LAB_14066e2d1:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar9 = *(int *)(lVar5 + 0xc60), iVar9 == 2))
        goto LAB_14066e2a0;
        if (iVar9 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          if (DVar10 == DVar11) goto LAB_14066e2a0;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar2;
        if (puVar13 != (uint *)0x0) goto LAB_14066e48d;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_143a3b683);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar2 = puVar12;
          FUN_140217a48(puVar2);
          puVar13 = (uint *)*puVar2;
LAB_14066e48d:
          puVar19 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar19 + 0x1b);
          uVar15 = puVar13[0x12];
          if (puVar17 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar3 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar2;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar2 = puVar13;
            puVar19 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar17 = (uint *)(puVar19 + 0x1b);
            uVar15 = 0;
            if (puVar17 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_14066e50d;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_14066e50d:
        *(uint **)(puVar13 + 0x10) = puVar17;
        puVar13[0x12] = uVar15;
        iVar9 = 0;
        FUN_1447247dc(puVar19,0);
        *puVar19 = &PTR_FUN_14adcc6b0;
        *(undefined4 *)(puVar19 + 0x15) = (undefined4)local_98;
        *(undefined4 *)((longlong)puVar19 + 0xac) = local_98._4_4_;
        *(undefined4 *)(puVar19 + 0x16) = uStack_90;
        *(undefined4 *)((longlong)puVar19 + 0xb4) = uStack_8c;
        *(undefined4 *)((longlong)puVar19 + 0xb4) = uStack_8c;
        *(undefined4 *)(puVar19 + 0x17) = local_88;
        *(undefined4 *)((longlong)puVar19 + 0xbc) = local_84;
        *(int *)(puVar19 + 0x18) = local_80;
        puVar19[0x19] = local_78;
        local_78 = (void *)0x0;
        *(undefined4 *)(puVar19 + 0x1a) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)puVar19 + 0xd4) = uStack_70._4_4_;
        uStack_70 = 0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
          }
          else {
            uVar18 = 2;
          }
        }
        else {
          iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar18 = 5;
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
        lVar5 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar5 == 0) {
          uVar8 = 1;
          if ((char)uVar18 != '\x06') {
            uVar8 = uVar18;
          }
          uVar18 = uVar8;
          uVar14 = 0;
        }
        else {
          if ((char)uVar18 == '\x06') {
            uVar18 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar5 + 0x30);
        }
        puVar19[0xf] = uVar14;
        puVar19[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar19 + 0x1c) = iVar9;
        if (puVar19 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar19);
          LOCK();
          piVar1 = (int *)(puVar19 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar19)(puVar19,1);
          }
        }
      }
      else {
        local_68[0] = (undefined1 *)0x0;
        local_58 = (longlong *)FUN_14001cc68(0x38,8);
        pvVar4 = local_78;
        *local_58 = (longlong)&PTR_LAB_14adcc670;
        *(undefined4 *)((longlong)local_58 + 0x14) = uStack_8c;
        *(undefined4 *)(local_58 + 3) = local_88;
        *(undefined4 *)((longlong)local_58 + 0x1c) = local_84;
        *(int *)(local_58 + 4) = local_80;
        local_78 = (void *)0x0;
        uVar6 = (undefined4)uStack_70;
        uVar7 = uStack_70._4_4_;
        uStack_70 = 0;
        *(undefined4 *)(local_58 + 1) = (undefined4)local_98;
        *(undefined4 *)((longlong)local_58 + 0xc) = local_98._4_4_;
        *(undefined4 *)(local_58 + 2) = uStack_90;
        *(undefined4 *)((longlong)local_58 + 0x14) = uStack_8c;
        local_58[5] = (longlong)pvVar4;
        *(undefined4 *)(local_58 + 6) = uVar6;
        *(undefined4 *)((longlong)local_58 + 0x34) = uVar7;
        if (local_58 + 1 != (longlong *)0x0) {
          local_68[0] = &LAB_143a3daec;
        }
        local_a8 = local_68;
        FUN_14005a792(&DAT_14ca9a440,L"FUpdateDICurve",&DAT_14cb3be3c);
        if (local_68[0] != (undefined1 *)0x0) {
          plVar16 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar16 = local_48;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      goto LAB_14066e3b9;
    }
  }
LAB_14066e2a0:
  FUN_143a3d97c(&local_98,&DAT_14ca85100);
LAB_14066e3b9:
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14066e79e FUN_14066e79e body=66 status=ok
// SIG undefined FUN_14066e79e(void)

void FUN_14066e79e(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  (**(code **)(*param_1 + 0x150))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14066e7e2 FUN_14066e7e2 body=31 status=ok
// SIG undefined FUN_14066e7e2(void)

void FUN_14066e7e2(longlong *param_1)

{
  FUN_14066e964();
                    /* WARNING: Could not recover jumptable at 0x00014066e7fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))(param_1);
  return;
}



// FUNCTION 14066e802 FUN_14066e802 body=296 status=ok
// SIG undefined FUN_14066e802(void)

void FUN_14066e802(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar3 = *(longlong *)(param_1 + 0x40);
  lVar4 = *(longlong *)(param_1 + 0x48);
  lVar1 = param_1 + 0xd8;
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 0x124) < 0) {
    FUN_147f5b794(lVar1,0);
  }
  lVar10 = (longlong)*(int *)(lVar4 + 0x30);
  if (lVar10 != 0) {
    lVar4 = *(longlong *)(lVar4 + 0x28);
    lVar9 = 0;
    do {
      if ((*(char *)(lVar4 + 8 + lVar9) == '\x01') &&
         (*(longlong **)(lVar4 + lVar9) != (longlong *)0x0)) {
        cVar6 = (**(code **)(**(longlong **)(lVar4 + lVar9) + 0x18))();
        if (cVar6 != '\0') {
          iVar2 = *(int *)(*(longlong *)(lVar4 + lVar9) + 0x18);
          if (((-1 < (longlong)iVar2) && (iVar2 < *(int *)(lVar3 + 0x78))) &&
             (plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0x70) + (longlong)iVar2 * 8),
             plVar5 != (longlong *)0x0)) {
            lVar7 = (**(code **)(*plVar5 + 8))(plVar5);
            lVar8 = FUN_14066e92a();
            if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                lVar8 + 0x30)) {
              iVar2 = *(int *)(param_1 + 0x120);
              *(uint *)(param_1 + 0x120) = iVar2 + 1U;
              if (*(uint *)(param_1 + 0x124) < iVar2 + 1U) {
                FUN_145732cf0(lVar1,iVar2);
              }
              lVar7 = *(longlong *)(param_1 + 0x118);
              if (*(longlong *)(param_1 + 0x118) == 0) {
                lVar7 = lVar1;
              }
              *(longlong **)(lVar7 + (longlong)iVar2 * 8) = plVar5;
            }
          }
        }
      }
      lVar9 = lVar9 + 0x20;
    } while (lVar10 * 0x20 != lVar9);
  }
  return;
}



// FUNCTION 14066e92a FUN_14066e92a body=57 status=ok
// SIG undefined FUN_14066e92a(void)

void FUN_14066e92a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21138 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21138 = FUN_140002ddd(FUN_14180b57d,uVar1,L"GbxBrainAspect");
  }
  return;
}



// FUNCTION 14066e964 FUN_14066e964 body=1522 status=ok
// SIG undefined FUN_14066e964(void)

void FUN_14066e964(longlong param_1)

{
  char *pcVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  bool bVar7;
  undefined8 *puVar8;
  char cVar9;
  int iVar10;
  ulonglong uVar11;
  char *pcVar12;
  char *pcVar13;
  undefined *puVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  longlong *local_80;
  char local_78 [8];
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *(longlong *)(param_1 + 0x48);
  pcVar1 = (char *)(lVar5 + 0x40);
  pcVar13 = pcVar1;
  if (0x18 < *(ushort *)(lVar5 + 0x58)) {
    pcVar13 = *(char **)pcVar1;
  }
  uVar11 = (ulonglong)((uint)*(byte *)(lVar5 + 0x60) * 0x120);
  if (*(code **)(&DAT_14c9a8620 + uVar11) == (code *)0x0) {
    pcVar12 = pcVar13 + *(int *)((longlong)&DAT_14c9a8510 + uVar11);
    do {
      if (pcVar12 <= pcVar13) goto LAB_14066e9c3;
      cVar9 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar9 == '\0');
  }
  else {
    cVar9 = (**(code **)(&DAT_14c9a8620 + uVar11))();
    if (cVar9 != '\0') goto LAB_14066e9c3;
  }
  lVar18 = *(longlong *)(param_1 + 0x40);
  if (lVar18 == 0) {
    lVar16 = 0;
    local_70 = 0;
LAB_14066edd5:
    local_68 = (longlong *)0x0;
    bVar7 = true;
  }
  else {
    if (*(int *)(lVar18 + 0x4c) == 0) {
LAB_14066ecba:
      lVar16 = 0;
    }
    else {
      uVar4 = *(uint *)(lVar18 + 0x48);
      lVar16 = 0;
      if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
        plVar17 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if ((plVar17 == (longlong *)0x0) ||
           (((int)plVar17[2] != *(int *)(lVar18 + 0x4c) ||
            ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)))) goto LAB_14066ecba;
        lVar16 = *plVar17;
      }
    }
    plVar17 = *(longlong **)(lVar18 + 0x118);
    local_70 = param_1;
    if (plVar17 == (longlong *)0x0) goto LAB_14066edd5;
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar17 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar3 = (int *)((longlong)plVar17 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
    LOCK();
    *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
    UNLOCK();
    bVar7 = false;
    local_68 = plVar17;
  }
  plVar17 = local_68;
  local_50 = 0;
  local_78[0] = '\x03';
  local_60._0_4_ = 0;
  if (lVar16 == 0) {
    iVar10 = 0;
    uVar4 = (uint)local_60;
  }
  else {
    uVar4 = *(uint *)(lVar16 + 0xc);
    local_60 = (ulonglong)uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar18 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar18 = 0;
    }
    iVar10 = *(int *)(lVar18 + 0x10);
    if (*(int *)(lVar18 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar10 = *(int *)(lVar18 + 0x10);
      bVar19 = iVar10 == 0;
      if (bVar19) {
        *(int *)(lVar18 + 0x10) = iVar15;
        iVar10 = 0;
      }
      UNLOCK();
      uVar4 = (uint)local_60;
      if (bVar19) {
        iVar10 = iVar15;
      }
    }
  }
  local_60._0_4_ = uVar4;
  local_60 = CONCAT44(iVar10,(uint)local_60);
  local_58 = 2;
  if (local_50 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_50 + -1,1);
    local_50 = 0;
  }
  if (!bVar7) {
    LOCK();
    piVar3 = (int *)((longlong)plVar17 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
  if ((*(code **)(&DAT_14c9a85f0 + (uint)*(byte *)(lVar5 + 0x60) * 0x120) != (code *)0x0) &&
     (cVar9 = (**(code **)(&DAT_14c9a85f0 + (uint)*(byte *)(lVar5 + 0x60) * 0x120))(pcVar1,local_78)
     , cVar9 != '\0')) {
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    FUN_1446efa72(&local_98,0,3,0x10);
    puVar8 = local_98;
    local_90 = 3;
    FUN_14045cb56(param_1,&local_88);
    plVar17 = local_80;
    if (local_80 == (longlong *)0x0) {
      *puVar8 = &PTR_LAB_14a1c85c0;
      LOCK();
      UNLOCK();
      lVar16 = DAT_14c758608 + 1;
      lVar18 = DAT_14c758608 + 1;
      if (lVar16 == 0) {
        LOCK();
        UNLOCK();
        lVar16 = DAT_14c758608 + 2;
        lVar18 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar18;
      puVar8[2] = lVar16;
      *puVar8 = &PTR_FUN_14ac8c680;
      puVar8[3] = local_88;
      puVar8[4] = 0;
      puVar8[5] = &LAB_145882ed4;
    }
    else {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
      *puVar8 = &PTR_LAB_14a1c85c0;
      LOCK();
      UNLOCK();
      lVar16 = DAT_14c758608 + 1;
      lVar18 = DAT_14c758608 + 1;
      if (lVar16 == 0) {
        LOCK();
        UNLOCK();
        lVar16 = DAT_14c758608 + 2;
        lVar18 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar18;
      puVar8[2] = lVar16;
      *puVar8 = &PTR_FUN_14ac8c680;
      puVar8[3] = local_88;
      puVar8[4] = local_80;
      LOCK();
      *(int *)((longlong)local_80 + 0xc) = *(int *)((longlong)local_80 + 0xc) + 1;
      UNLOCK();
      puVar8[5] = &LAB_145882ed4;
      LOCK();
      plVar2 = local_80 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar3 = (int *)((longlong)plVar17 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
      LOCK();
      plVar2 = plVar17 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar3 = (int *)((longlong)plVar17 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_80 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar3 = (int *)((longlong)local_80 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
    if (*(code **)(&DAT_14c9a85f8 + (uint)*(byte *)(lVar5 + 0x60) * 0x120) == (code *)0x0) {
      local_88 = 0;
    }
    else {
      (**(code **)(&DAT_14c9a85f8 + (uint)*(byte *)(lVar5 + 0x60) * 0x120))
                (&local_88,pcVar1,local_78,&local_98);
    }
    *(undefined8 *)(param_1 + 0xd0) = local_88;
    if (local_90 != 0) {
      if (local_98 == (undefined8 *)0x0) goto LAB_14066eb32;
      (**(code **)*local_98)(local_98,0);
      FUN_1446efa72(&local_98,0,0,0x10);
      local_90 = 0;
    }
    if (local_98 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14066eb32:
  lVar5 = DAT_14c9a3da0;
  if ((longlong)local_50 != 0) {
    lVar18 = (longlong)local_50 + -1;
    lVar16 = lVar18 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar16),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar16));
    if (*(longlong *)(lVar5 + lVar16) != 0) {
      FUN_1400020a8();
    }
    lVar5 = DAT_14c9a3da0;
    iVar10 = (int)lVar18;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar10;
    }
    *(undefined4 *)(lVar5 + lVar16) = 0xffffffff;
    iVar15 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar15 = DAT_14c9a3dd0;
    }
    *(int *)(lVar5 + 4 + lVar16) = iVar15;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar14 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar14 = DAT_14c9a3dc0;
    }
    iVar15 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar15 = iVar10;
    }
    bVar6 = (byte)lVar18 & 0x1f;
    DAT_14c9a3dd0 = iVar10;
    *(uint *)(puVar14 + (longlong)(iVar15 >> 5) * 4) =
         *(uint *)(puVar14 + (longlong)(iVar15 >> 5) * 4) &
         (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
    local_50 = 0;
  }
  if ((local_78[0] == '\x03') && (local_68 != (longlong *)0x0)) {
    LOCK();
    piVar3 = (int *)((longlong)local_68 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
LAB_14066e9c3:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14066ef58 FUN_14066ef58 body=592 status=ok
// SIG undefined FUN_14066ef58(void)

longlong FUN_14066ef58(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cae8b20 == 0) {
    local_40 = &local_28;
    local_28 = (code *)&LAB_14355090c;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_147b8e16d;
    local_50 = (code *)&LAB_140810a38;
    local_58 = L"Engine";
    local_60 = 0x800000000;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x3f0;
    FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
  }
  lVar2 = DAT_14cae8b20;
  if (DAT_14c951858 == 0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_1468c5283;
    local_50 = FUN_142809da0;
    local_58 = L"Engine";
    local_60 = 0x400000000;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar2 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
         (lVar4 = lVar3,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
         lVar2 + 0x30)) {
        lVar4 = 0;
      }
    } while ((lVar4 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
    if ((lVar4 != 0) && (lVar2 = *(longlong *)(lVar4 + 0xc0), lVar2 != 0)) {
      lVar3 = *(longlong *)(lVar2 + 0x30);
      if (((((lVar3 == 0) || (*(longlong *)(lVar3 + 0x2b0) == 0)) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x2b0) + 0x3f0) == 0)) ||
          ((*(longlong *)(lVar3 + 0x220) == 0 ||
           (lVar3 = FUN_147ba61f0(*(longlong *)(lVar3 + 0x220),param_1), lVar3 == 0)))) &&
         ((lVar2 = FUN_1403358e4(lVar2), lVar2 == 0 ||
          (lVar3 = *(longlong *)(lVar2 + 0x220), lVar3 == 0)))) {
        lVar3 = *(longlong *)(lVar4 + 0x220);
      }
      goto LAB_14066f025;
    }
  }
  lVar3 = 0;
LAB_14066f025:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 14066f1a9 FUN_14066f1a9 body=425 status=ok
// SIG undefined FUN_14066f1a9(void)

undefined8
FUN_14066f1a9(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x260) == 0)) {
    uVar2 = 0;
  }
  else {
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x38) + 0x1e9) == '\x01') {
      cVar1 = FUN_144a61b4f();
      if ((cVar1 != '\0') ||
         (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002)) {
        local_98 = param_5[2];
        local_f8 = &local_a8;
        local_a8 = *param_5;
        uStack_a0 = param_5[1];
        local_c8 = *param_4;
        uStack_c4 = param_4[1];
        uStack_c0 = param_4[2];
        uStack_bc = param_4[3];
        local_b8 = *(undefined8 *)(param_4 + 4);
        local_d0 = param_10;
        local_d8 = param_9;
        local_e0 = param_8;
        local_e8 = param_7;
        local_f0 = param_6;
        uVar2 = FUN_1434434e4(param_1,param_2,param_3);
        goto LAB_14066f28d;
      }
    }
    local_58 = param_5[2];
    local_f8 = &local_68;
    local_68 = *param_5;
    uStack_60 = param_5[1];
    local_88 = *param_4;
    uStack_84 = param_4[1];
    uStack_80 = param_4[2];
    uStack_7c = param_4[3];
    local_78 = *(undefined8 *)(param_4 + 4);
    local_d0 = param_10;
    local_d8 = param_9;
    local_e0 = param_8;
    local_e8 = param_7;
    local_f0 = param_6;
    uVar2 = FUN_14066f353(param_1,param_2,param_3);
  }
LAB_14066f28d:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14066f353 FUN_14066f353 body=589 status=ok
// SIG undefined FUN_14066f353(void)

undefined8
FUN_14066f353(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 param_9)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined8 local_160;
  char *local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  char local_c9;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  bVar5 = true;
  local_158 = &local_c9;
  local_c9 = '\x01';
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
  local_d8 = param_5[2];
  local_e8 = *param_5;
  uStack_e0 = param_5[1];
  local_f8 = *(undefined8 *)(param_4 + 4);
  local_108 = *param_4;
  uStack_104 = param_4[1];
  uStack_100 = param_4[2];
  uStack_fc = param_4[3];
  local_160 = param_9;
  local_168 = param_8;
  local_170 = param_7;
  local_178 = param_6;
  uVar2 = FUN_143443732(param_1,param_2);
  if (local_c9 == '\x01') {
    uVar2 = 10;
    do {
      local_118 = param_5[2];
      local_128 = *param_5;
      uStack_120 = param_5[1];
      local_148 = *param_4;
      uStack_144 = param_4[1];
      uStack_140 = param_4[2];
      uStack_13c = param_4[3];
      local_138 = *(undefined8 *)(param_4 + 4);
      local_158 = &local_c9;
      local_160 = param_9;
      local_168 = param_8;
      local_170 = &local_c8;
      local_178 = param_6;
      uVar3 = FUN_143443732(param_1,param_2,&local_148,&local_128);
      uVar4 = (ulonglong)uVar3;
      bVar5 = 1 < uVar2;
      if (local_c9 != '\x01') break;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar4 = (ulonglong)uVar2;
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 & bVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14066f5a2 FUN_14066f5a2 body=137 status=ok
// SIG undefined FUN_14066f5a2(void)

void FUN_14066f5a2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  FUN_140320438(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  lVar1 = *param_2;
  if (((*(short *)(param_1 + 0x48) == -1) || (*(longlong *)(param_1 + 0x40) == -1)) ||
     (*(short *)(param_1 + 0x48) != *(short *)(lVar1 + 0x608))) {
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(lVar1 + 0x608);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar1 + 0x600);
    *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(lVar1 + 0x60a);
    FUN_14066f7ea(*param_2,param_1 + 0x28);
  }
  FUN_14066f62c(param_1 + 0x50,param_2);
  return;
}



// FUNCTION 14066f62c FUN_14066f62c body=78 status=ok
// SIG undefined FUN_14066f62c(void)

void FUN_14066f62c(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  *(undefined8 *)(param_1 + 0x58) = *param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x30) = 1;
  FUN_14066f67a(param_1 + 0x48,*(undefined4 *)(param_1 + 0x28));
  FUN_14066f6a6(param_1 + 0x48,*(undefined4 *)(param_1 + 0x28));
  FUN_1403202c8(param_1,uVar1);
  return;
}



// FUNCTION 14066f67a FUN_14066f67a body=42 status=ok
// SIG undefined FUN_14066f67a(void)

void FUN_14066f67a(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_14066f708();
    return;
  }
  return;
}



// FUNCTION 14066f6a6 FUN_14066f6a6 body=70 status=ok
// SIG undefined FUN_14066f6a6(void)

int FUN_14066f6a6(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147920622(param_1,iVar1);
  }
  FUN_14066f6ec((longlong)iVar1 * 0x10 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 14066f6ec FUN_14066f6ec body=27 status=ok
// SIG undefined FUN_14066f6ec(void)

void FUN_14066f6ec(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 1) = 0xffff;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14066f708 FUN_14066f708 body=226 status=ok
// SIG undefined FUN_14066f708(void)

void FUN_14066f708(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14066f7ea FUN_14066f7ea body=1275 status=ok
// SIG undefined FUN_14066f7ea(void)

void FUN_14066f7ea(longlong param_1,wchar_t *param_2)

{
  longlong *plVar1;
  int *piVar2;
  DWORD DVar3;
  DWORD DVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_198 [40];
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  longlong *local_168 [2];
  undefined8 local_158;
  longlong *local_150;
  longlong local_148 [2];
  longlong *local_138 [2];
  longlong *local_128 [2];
  longlong *local_118 [2];
  ulonglong local_108;
  undefined1 local_100 [48];
  undefined1 local_d0 [8];
  longlong *local_c8;
  longlong local_c0 [2];
  undefined8 local_b0;
  longlong *local_a8;
  wchar_t **local_a0;
  ulonglong *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  wchar_t *local_80;
  undefined4 *local_78;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (*(int *)(param_1 + 0x408) != *(int *)(param_1 + 0x434)) {
    lVar6 = *(longlong *)param_2;
    uVar5 = (uint)((ulonglong)lVar6 >> 0x10);
    uVar8 = (uint)lVar6 & 0xffff;
    lVar7 = param_1 + 0x438;
    if (*(longlong *)(param_1 + 0x440) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x440);
    }
    iVar9 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x448) - 1U &
                             (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar8) +
                             (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      lVar7 = *(longlong *)(param_1 + 0x400);
      do {
        if (*(longlong *)(lVar7 + (longlong)iVar9 * 0x14) == lVar6) {
          lVar6 = FUN_1408b8ca0(*(undefined8 *)(param_1 + 0x138));
          if (lVar6 == 0) {
            FUN_1400b22c2(local_c0,"Unavailable");
          }
          else {
            local_80 = *(wchar_t **)(lVar6 + 0x18);
            FUN_1400021e4(&local_80,local_c0);
          }
          if (DAT_14c86a9f8 == '\x01') {
            iVar9 = *(int *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0xc60);
            if (iVar9 != 2) {
              if (iVar9 != 1) goto LAB_14066f9f5;
              DVar3 = FUN_140ad26c0();
              DVar4 = GetCurrentThreadId();
              if (DVar3 != DVar4) goto LAB_14066f9f5;
            }
          }
          local_80 = L"AnimBlueprintLog";
          local_78 = (undefined4 *)CONCAT35(local_78._5_3_,0x10);
          uVar5 = FUN_14001a6c0(&local_80,1);
          local_108 = (ulonglong)uVar5;
          FUN_14276766e(local_100);
          FUN_140009b9a(local_128,local_c0);
          FUN_1400021e4(param_2,local_148);
          FUN_140233b1a(local_138,local_148);
          local_80 = L"AnimInstance_SlotNode";
          local_78._0_4_ = 0x15;
          FUN_1446e940c(local_16c,&local_80);
          local_80 = L"AnimInstance";
          local_78._0_4_ = 0xc;
          FUN_1446e940c(local_170,&local_80);
          local_80 = 
          L"SLOTNODE: \'{0}\' in animation instance class {1} already exists. Remove duplicates from the animation graph for this class."
          ;
          local_78 = (undefined4 *)CONCAT44(local_78._4_4_,0x7a);
          FUN_140208c1e(local_168,local_170,local_16c,&local_80);
          FUN_14023409e(&local_158,local_168,1);
          local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
          FUN_14023423e(local_70,local_138);
          local_60 = 4;
          FUN_14023423e(local_50,local_128);
          local_98 = &local_40;
          local_a0 = &local_80;
          FUN_14010d304(&local_90);
          local_b0 = local_158;
          local_a8 = local_150;
          if (local_150 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_150 + 1) = (int)local_150[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_118,&local_b0,&local_90);
          FUN_14007f2db(CONCAT44(uStack_8c,local_90),local_88);
          if (CONCAT44(uStack_8c,local_90) != 0) {
            FUN_1400020a8();
          }
          lVar6 = 0x30;
          do {
            if (*(longlong **)((longlong)&local_80 + lVar6) != (longlong *)0x0) {
              (**(code **)(**(longlong **)((longlong)&local_80 + lVar6) + 0x10))();
              *(undefined8 *)((longlong)&local_80 + lVar6) = 0;
              *(undefined4 *)(local_70 + lVar6 + -8) = 0;
            }
            lVar6 = lVar6 + -0x20;
          } while (lVar6 != -0x10);
          if (local_150 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_150 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_150)(local_150);
              LOCK();
              piVar2 = (int *)((longlong)local_150 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_150 + 0x10))(local_150);
              }
            }
          }
          if (local_138[0] != (longlong *)0x0) {
            (**(code **)(*local_138[0] + 0x10))();
          }
          if (local_128[0] != (longlong *)0x0) {
            (**(code **)(*local_128[0] + 0x10))();
          }
          FUN_1427679d4(local_100,local_d0,local_118);
          if (local_c8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_c8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_c8)(local_c8);
              LOCK();
              piVar2 = (int *)((longlong)local_c8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_c8 + 0x10))(local_c8);
              }
            }
          }
          if (local_118[0] != (longlong *)0x0) {
            (**(code **)(*local_118[0] + 0x10))();
          }
          if (local_168[0] != (longlong *)0x0) {
            (**(code **)(*local_168[0] + 0x10))();
          }
          if (local_148[0] != 0) {
            FUN_1400020a8();
          }
          FUN_1427678c0(local_100);
LAB_14066f9f5:
          if (local_c0[0] != 0) {
            FUN_1400020a8();
          }
          goto LAB_14066f95a;
        }
        iVar9 = *(int *)(lVar7 + (longlong)iVar9 * 0x14 + 0xc);
      } while (iVar9 != -1);
    }
  }
  local_90 = *(undefined4 *)(param_1 + 0x458);
  local_78 = &local_90;
  local_80 = param_2;
  FUN_140171856((longlong *)(param_1 + 0x400),local_100,&local_80,0);
  iVar9 = *(int *)(param_1 + 0x458);
  *(uint *)(param_1 + 0x458) = iVar9 + 1U;
  if (*(uint *)(param_1 + 0x45c) < iVar9 + 1U) {
    FUN_1417b5bd8(param_1 + 0x450,iVar9);
  }
  lVar6 = *(longlong *)(param_1 + 0x450);
  *(undefined2 *)(lVar6 + 8 + (longlong)iVar9 * 0xc) = 0;
  *(undefined8 *)(lVar6 + (longlong)iVar9 * 0xc) = 0;
  iVar9 = *(int *)(param_1 + 0x468);
  *(uint *)(param_1 + 0x468) = iVar9 + 1U;
  if (*(uint *)(param_1 + 0x46c) < iVar9 + 1U) {
    FUN_1417b5bd8((longlong *)(param_1 + 0x460),iVar9);
  }
  lVar6 = *(longlong *)(param_1 + 0x460);
  *(undefined2 *)(lVar6 + 8 + (longlong)iVar9 * 0xc) = 0;
  *(undefined8 *)(lVar6 + (longlong)iVar9 * 0xc) = 0;
LAB_14066f95a:
  if ((local_40 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14066fce6 FUN_14066fce6 body=797 status=ok
// SIG undefined FUN_14066fce6(void)

void FUN_14066fce6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  plVar11 = *(longlong **)(param_1 + 0x198);
  if (plVar11 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x198) = 0;
    LOCK();
    plVar10 = plVar11 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((((*(longlong **)(param_1 + 0x1a8) != (longlong *)0x0) && (*(int *)(param_1 + 0x1a4) != 0)) &&
      (uVar3 = *(uint *)(param_1 + 0x1a0), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)) {
    lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    if (((lVar12 != 0) && (*(int *)(lVar12 + 0x10) == *(int *)(param_1 + 0x1a4))) &&
       ((*(uint *)(lVar12 + 8) & 0x10200000) == 0)) {
      lVar12 = (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x10))();
      if (lVar12 != 0) {
        uVar7 = 0xffffffff;
        if ((param_2 != 0) && (*(longlong *)(param_2 + 0x20) != 0)) {
          uVar7 = *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x854);
        }
        *(undefined4 *)(param_1 + 0x164) = uVar7;
        lVar9 = *(longlong *)(lVar12 + 0x40);
        if (lVar9 != 0) {
          *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(lVar9 + 0x90);
          uVar6 = FUN_140670004(*(undefined1 *)(lVar9 + 0x94));
          *(undefined1 *)(param_1 + 0x144) = uVar6;
          lVar9 = FUN_1447e736e(lVar9 + 0x98);
          if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar9);
          }
          *(longlong *)(param_1 + 0x148) = lVar9;
        }
        *(bool *)(param_1 + 0x160) = (*(byte *)(lVar12 + 0x58) & 0xfd) == 1;
        if (*(char *)(lVar12 + 0x58) == '\x02') {
          uVar7 = *(undefined4 *)(lVar12 + 0x90);
          uVar8 = *(undefined8 *)(lVar12 + 0x98);
          plVar11 = *(longlong **)(lVar12 + 0xa0);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          uVar13 = *(undefined8 *)(lVar12 + 0xa8);
          plVar10 = *(longlong **)(lVar12 + 0xb0);
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          *(undefined4 *)(param_1 + 0x168) = uVar7;
          if (plVar11 == (longlong *)0x0) {
            plVar11 = (longlong *)0x0;
            bVar5 = true;
          }
          else {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            bVar5 = false;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x168) = 0;
          bVar5 = true;
          plVar10 = (longlong *)0x0;
          uVar13 = 0;
          plVar11 = (longlong *)0x0;
          uVar8 = 0;
        }
        plVar4 = *(longlong **)(param_1 + 0x178);
        *(undefined8 *)(param_1 + 0x170) = uVar8;
        *(longlong **)(param_1 + 0x178) = plVar11;
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
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        plVar4 = *(longlong **)(param_1 + 0x188);
        *(undefined8 *)(param_1 + 0x180) = uVar13;
        *(longlong **)(param_1 + 0x188) = plVar10;
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
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar10 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
        if (!bVar5) {
          LOCK();
          plVar10 = plVar11 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014066ff65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar11 + 0x10))(plVar11);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140670004 FUN_140670004 body=14 status=ok
// SIG undefined FUN_140670004(void)

char FUN_140670004(char param_1)

{
  if (0xd < (byte)(param_1 - 1U)) {
    param_1 = '\0';
  }
  return param_1;
}



// FUNCTION 140670012 FUN_140670012 body=140 status=ok
// SIG undefined FUN_140670012(void)

void FUN_140670012(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_14067009e(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14067009e FUN_14067009e body=51 status=ok
// SIG undefined FUN_14067009e(void)

void FUN_14067009e(longlong param_1,int param_2)

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



// FUNCTION 1406701d4 FUN_1406701d4 body=273 status=ok
// SIG undefined FUN_1406701d4(void)

void FUN_1406701d4(longlong *param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 auStack_128 [40];
  undefined1 local_100 [192];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(byte *)((longlong)param_1 + 0x62) & 0x20) != 0) {
    local_40 = (undefined1 *)0x0;
    local_38 = 0x1800000000;
    FUN_1406702e6(param_1,local_100,0);
    puVar3 = local_40;
    if (local_40 == (undefined1 *)0x0) {
      puVar3 = local_100;
    }
    bVar2 = true;
    if ((longlong)(int)local_38 != 0) {
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(puVar3 + lVar4);
        if ((*(byte *)((longlong)plVar1 + 0x9e) & 0x10) != 0) {
          (**(code **)(*plVar1 + 0x5f8))(plVar1,param_2,param_3);
          bVar2 = false;
          break;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)(int)local_38 * 8 != lVar4);
    }
    if (local_40 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (!bVar2) goto LAB_140670292;
  }
  (**(code **)(*param_1 + 0x588))(param_1,param_3,param_3 + 0x18);
LAB_140670292:
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406702e6 FUN_1406702e6 body=336 status=ok
// SIG undefined FUN_1406702e6(void)

void FUN_1406702e6(undefined8 param_1,longlong param_2,undefined4 param_3)

{
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
  longlong local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_2 + 200) = 0;
  if (*(int *)(param_2 + 0xcc) < 0) {
    FUN_1478c68bc(param_2,0);
  }
  if (DAT_14cacf098 == 0) {
    local_50 = &local_28;
    local_28 = FUN_144a7958c;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_142b47bc4;
    local_58 = &LAB_14798da73;
    local_60 = &LAB_1463b047a;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = 0xc30;
    FUN_14081cfa3(L"/Script/Engine",L"CameraComponent",&DAT_14cacf098,FUN_1463b0458);
  }
  local_30 = DAT_14cacf098;
  if ((DAT_14cacf098 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_140670438(param_1,&local_30,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140670438 FUN_140670438 body=1659 status=ok
// SIG undefined FUN_140670438(void)

void FUN_140670438(longlong param_1,longlong *param_2,char param_3,longlong param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  bool local_79;
  longlong local_78;
  longlong local_70;
  uint *local_68;
  longlong local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar12 = *param_2;
  if (lVar12 == 0) {
    if (DAT_14cad00c8 == 0) {
LAB_1406708cb:
      local_a0 = &local_50;
      local_50 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1479b7a0c;
      local_b0 = &LAB_1463b464e;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10000005;
      local_d0 = 8;
      local_d8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
    }
LAB_1406704a7:
    lVar15 = *param_2;
    local_79 = lVar15 != 0;
    if (lVar12 == DAT_14cad00c8) {
      if (param_3 == '\0') {
        if ((lVar15 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar15);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
      }
      local_58 = lVar15;
      if ((lVar15 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar15);
      }
      FUN_1478c69b2(param_1,&local_58,param_4);
      goto LAB_1406709ee;
    }
  }
  else {
    if (DAT_14cad00c8 == 0) {
      local_a0 = &local_50;
      local_50 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1479b7a0c;
      local_b0 = &LAB_1463b464e;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10000005;
      local_d0 = 8;
      local_d8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_1406708cb;
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
        == DAT_14cad00c8 + 0x30)) {
      lVar12 = *param_2;
      goto LAB_1406704a7;
    }
    lVar15 = *param_2;
    local_79 = lVar15 != 0;
  }
  if (param_3 == '\0') {
    if ((DAT_14c950c29 & local_79) == 1) {
      FUN_1456cec3c(lVar15);
    }
    puVar13 = (uint *)(param_1 + 0x250);
    iVar2 = *(int *)(param_1 + 0x268);
    if (iVar2 == 0) {
      uVar16 = 1;
      uVar10 = 0;
      iVar4 = 0;
      iVar9 = 0;
    }
    else {
      puVar5 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar5 = puVar13;
      }
      uVar14 = *puVar5;
      if (uVar14 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        uVar10 = 0;
        uVar16 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar16 = uVar10;
        }
        iVar9 = 0;
        do {
          if (uVar16 == uVar10) goto LAB_1406709ee;
          iVar9 = iVar9 + 0x20;
          uVar14 = puVar5[uVar10 + 1];
          uVar10 = uVar10 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar10 = 0;
        iVar9 = 0;
      }
      uVar16 = (ulonglong)(-uVar14 & uVar14);
      uVar1 = uVar16 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar4 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
    }
    if (iVar4 != iVar2) {
      uVar14 = 0xffffffff;
      do {
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar4 * 0x10);
        if (lVar12 != 0) {
          if ((DAT_14c950c29 & local_79) == 1) {
            local_78 = param_1;
            local_70 = param_4;
            FUN_1456cec3c(lVar15);
            param_1 = local_78;
            param_4 = local_70;
LAB_140670595:
            if (DAT_14cad00c8 == 0) {
              local_a0 = &local_50;
              local_50 = FUN_144a7958c;
              local_90 = FUN_14081d0ea;
              local_98 = FUN_14081d0ea;
              local_a8 = &LAB_1479b7a0c;
              local_b0 = &LAB_1463b464e;
              local_b8 = L"Engine";
              local_c0 = 0;
              local_c8 = 0x10000005;
              local_d0 = 8;
              local_d8 = 0x110;
              local_78 = param_1;
              local_70 = param_4;
              FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
              param_1 = local_78;
              param_4 = local_70;
              if (DAT_14cad00c8 == 0) goto LAB_140670799;
            }
            if (*(int *)(lVar15 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_140670799;
            lVar11 = 0;
            if (*(longlong *)
                 (*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
                DAT_14cad00c8 + 0x30) {
              lVar11 = lVar15;
            }
          }
          else {
            if (lVar15 != 0) goto LAB_140670595;
LAB_140670799:
            lVar11 = 0;
          }
          if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
            iVar4 = *(int *)(param_4 + 200);
            *(uint *)(param_4 + 200) = iVar4 + 1U;
            if (*(uint *)(param_4 + 0xcc) < iVar4 + 1U) {
              local_78 = param_1;
              local_70 = param_4;
              local_68 = puVar13;
              FUN_1478c708e(param_4,iVar4);
              param_1 = local_78;
              puVar13 = local_68;
              param_4 = local_70;
            }
            lVar11 = *(longlong *)(param_4 + 0xc0);
            if (*(longlong *)(param_4 + 0xc0) == 0) {
              lVar11 = param_4;
            }
            *(longlong *)(lVar11 + (longlong)iVar4 * 8) = lVar12;
          }
        }
        uVar14 = uVar14 & ~(uint)uVar16;
        puVar5 = *(uint **)(param_1 + 0x260);
        if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
          puVar5 = puVar13;
        }
        iVar3 = *(int *)(param_1 + 0x268);
        iVar4 = (int)uVar10;
        lVar12 = (longlong)iVar4;
        uVar8 = puVar5[lVar12] & uVar14;
        if (uVar8 == 0) {
          iVar6 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar6 = iVar3 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar9 = iVar9 + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar4) {
            iVar7 = iVar4;
          }
          if (iVar4 < iVar6) {
            lVar11 = 0;
            do {
              uVar8 = puVar5[lVar12 + lVar11 + 1];
              if (uVar8 != 0) {
                uVar10 = (ulonglong)(iVar4 + (int)lVar11 + 1);
                uVar14 = 0xffffffff;
                goto LAB_140670661;
              }
              iVar9 = iVar9 + 0x20;
              lVar11 = lVar11 + 1;
            } while (iVar7 - lVar12 != lVar11);
            uVar14 = 0xffffffff;
            iVar4 = iVar7;
          }
          uVar10 = (ulonglong)(iVar4 + 1);
          iVar4 = iVar3;
        }
        else {
LAB_140670661:
          uVar16 = (ulonglong)(-uVar8 & uVar8);
          uVar1 = uVar16 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar4 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar4) {
            iVar4 = iVar3;
          }
        }
      } while (iVar4 != iVar2);
    }
  }
  else {
    local_60 = lVar15;
    if ((local_79 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar15);
    }
    FUN_1478c6d88(param_1,&local_60,param_4);
  }
LAB_1406709ee:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140670ae0 FUN_140670ae0 body=91 status=ok
// SIG undefined FUN_140670ae0(void)

void FUN_140670ae0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    return;
  }
  if (((*(byte *)((longlong)param_2 + 0x29) & 1) != 0) &&
     ((**(code **)(*param_1 + 0x10))(param_1), (*(byte *)(param_2 + 5) & 1) == 0)) {
    return;
  }
  param_1[0x1f] = param_2[8];
  uVar1 = (**(code **)(*param_2 + 0x58))(param_2);
  FUN_140670b3c(param_1 + 0x20,uVar1);
  return;
}



// FUNCTION 140670b3c FUN_140670b3c body=89 status=ok
// SIG undefined FUN_140670b3c(void)

undefined8 * FUN_140670b3c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1401254a2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x28);
      }
    }
  }
  return param_1;
}



// FUNCTION 140670b96 FUN_140670b96 body=527 status=ok
// SIG undefined FUN_140670b96(void)

void FUN_140670b96(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  iVar1 = *(int *)(param_1 + 0xc0);
  if (iVar1 == 0) {
    uVar16 = 1;
    uVar15 = 0;
    iVar11 = 0;
    iVar7 = 0;
  }
  else {
    puVar3 = *(uint **)(param_1 + 0xb8);
    if (*(uint **)(param_1 + 0xb8) == (uint *)0x0) {
      puVar3 = (uint *)(param_1 + 0xa8);
    }
    uVar14 = *puVar3;
    if (uVar14 == 0) {
      iVar11 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar11 = iVar1 + -1;
      }
      uVar15 = 0;
      uVar8 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar8 = uVar15;
      }
      iVar11 = 0;
      do {
        if (uVar8 == uVar15) {
          return;
        }
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar3[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar11 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar8 = uVar16 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar7) {
      iVar7 = iVar1;
    }
  }
  if (iVar7 != iVar1) {
    uVar14 = 0xffffffff;
    iVar2 = iVar1;
    do {
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar7 * 0x10);
      if ((-1 < (longlong)iVar5) && (iVar5 < *(int *)(param_1 + 0x40))) {
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar7 * 0x10 + 4);
        if ((-1 < (longlong)iVar7) && (iVar7 < *(int *)(param_1 + 0x30))) {
          lVar10 = (longlong)iVar7 * 0x10;
          lVar12 = *(longlong *)(param_1 + 0x28);
          lVar13 = *(longlong *)(param_1 + 0x38);
          lVar9 = *(longlong *)(lVar12 + lVar10);
          if (DAT_14c950c29 == '\x01') {
            if (lVar9 == 0) {
              lVar9 = 0;
            }
            else {
              FUN_1456cec3c();
              lVar9 = *(longlong *)(lVar12 + lVar10);
            }
          }
          *(longlong *)(lVar13 + (longlong)iVar5 * 8) = lVar9;
          iVar2 = *(int *)(param_1 + 0xc0);
        }
      }
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar3 = *(uint **)(param_1 + 0xb8);
      if (*(uint **)(param_1 + 0xb8) == (uint *)0x0) {
        puVar3 = (uint *)(param_1 + 0xa8);
      }
      iVar7 = (int)uVar15;
      lVar12 = (longlong)iVar7;
      uVar4 = puVar3[lVar12] & uVar14;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar7) {
          iVar6 = iVar7;
        }
        if (iVar7 < iVar5) {
          lVar13 = 0;
          do {
            uVar4 = puVar3[lVar12 + lVar13 + 1];
            if (uVar4 != 0) {
              uVar15 = (ulonglong)(iVar7 + (int)lVar13 + 1);
              uVar14 = 0xffffffff;
              goto LAB_140670caa;
            }
            iVar11 = iVar11 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar6 - lVar12 != lVar13);
          uVar14 = 0xffffffff;
          iVar7 = iVar6;
        }
        uVar15 = (ulonglong)(iVar7 + 1);
        iVar7 = iVar2;
      }
      else {
LAB_140670caa:
        uVar16 = (ulonglong)(-uVar4 & uVar4);
        uVar8 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar7) {
          iVar7 = iVar2;
        }
      }
    } while (iVar7 != iVar1);
  }
  return;
}



// FUNCTION 140670da6 FUN_140670da6 body=112 status=ok
// SIG undefined FUN_140670da6(void)

void FUN_140670da6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_140670e16();
  FUN_140b21f74(param_1);
  if ((*(uint *)(param_1 + 0x128) < 2) && (lVar1 = *(longlong *)(param_1 + 0x38), lVar1 != 0)) {
    lVar2 = FUN_14070cc62();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30 && (lVar1 = *(longlong *)(lVar1 + 0x858), lVar1 != 0)))) {
      iVar3 = 2;
      if (2 < *(int *)(lVar1 + 0x153c)) {
        iVar3 = *(int *)(lVar1 + 0x153c);
      }
      *(int *)(lVar1 + 0x153c) = iVar3;
    }
  }
  return;
}



// FUNCTION 140670e16 FUN_140670e16 body=44 status=ok
// SIG undefined FUN_140670e16(void)

void FUN_140670e16(undefined8 param_1,undefined4 param_2)

{
  if ((char)param_2 == '\x01') {
    FUN_140671132();
  }
  else {
    FUN_14067124c();
  }
  FUN_140670e42(param_1,param_2);
  return;
}



// FUNCTION 140670e42 FUN_140670e42 body=279 status=ok
// SIG undefined FUN_140670e42(void)

void FUN_140670e42(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0xa0) = 1;
  FUN_140670ffc();
  plVar2 = *(longlong **)(param_1 + 0xb0);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0xa8);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = *(uint *)((longlong)plVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
      local_38 = *(undefined8 *)(param_1 + 0x38);
      local_30 = (char)param_2;
      uVar3 = FUN_14477b072(plVar2,DAT_14cb680e8);
      (**(code **)(*plVar2 + 0x248))(plVar2,uVar3,&local_38);
      local_38 = *(undefined8 *)(param_1 + 0x38);
      plVar2 = *(longlong **)(param_1 + 0xa8);
      local_30 = (char)param_2;
      uVar3 = FUN_14477b072(plVar2,DAT_14cb680f8);
      (**(code **)(*plVar2 + 0x248))(plVar2,uVar3,&local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_140670f5a(param_1 + 0x18,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140670f5a FUN_140670f5a body=162 status=ok
// SIG undefined FUN_140670f5a(void)

void FUN_140670f5a(longlong *param_1,undefined4 param_2)

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
        goto LAB_140670fe7;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140670fe7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140670ffc FUN_140670ffc body=309 status=ok
// SIG undefined FUN_140670ffc(void)

void FUN_140670ffc(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined1 local_88 [8];
  undefined8 *local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 *local_68;
  longlong local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x42) != '\x01') {
    local_50 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x38));
    FUN_140880df0(local_88,&DAT_14cb8cca8);
    lVar2 = local_60;
    lVar1 = local_78;
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
    UNLOCK();
    local_90 = local_70;
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
    if (local_80 != local_68) {
      puVar5 = local_80;
      do {
        local_50 = 0;
        FUN_140881600(puVar5[2],param_1,2 - (uint)(param_2 == '\0'),&local_50);
        puVar3 = (undefined8 *)FUN_140880eba(*puVar5);
        if (puVar3 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)0x0;
        }
        else {
          do {
            puVar5 = puVar3;
            lVar4 = (**(code **)(*(longlong *)puVar5[2] + 0x180))();
            if (lVar4 == *local_90) break;
            puVar3 = (undefined8 *)FUN_140880eba(*puVar5);
            puVar5 = (undefined8 *)0x0;
          } while (puVar3 != (undefined8 *)0x0);
        }
      } while (puVar5 != local_68);
    }
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + -1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140671132 FUN_140671132 body=282 status=ok
// SIG undefined FUN_140671132(void)

void FUN_140671132(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xd8);
    lVar3 = (longlong)*(int *)(param_1 + 0xe0) * 0x50;
    do {
      if ((((*(int *)(lVar4 + 0x18) == 0) || (uVar1 = *(uint *)(lVar4 + 0x14), (int)uVar1 < 0)) ||
          (DAT_14c9647dc <= (int)uVar1)) ||
         (((plVar6 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(lVar4 + 0x18))) ||
          (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (*plVar6 == 0)))))) {
        if (*(char *)(lVar4 + 0x40) == '\x01') {
          if (*(char *)(lVar4 + 8) == '\x01') {
            *(undefined1 *)(lVar4 + 0x40) = 0;
          }
          else {
            *(undefined4 *)(lVar4 + 0x3c) = *(undefined4 *)(lVar4 + 0x34);
            *(undefined1 *)(lVar4 + 0x40) = 1;
          }
        }
      }
      else {
        if ((*(int *)(lVar4 + 0x10) == 0) || (uVar1 = *(uint *)(lVar4 + 0xc), (int)uVar1 < 0)) {
LAB_140671241:
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          if ((int)uVar1 < DAT_14c9647dc) {
            puVar2 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((puVar2 == (undefined8 *)0x0) || (*(int *)(puVar2 + 2) != *(int *)(lVar4 + 0x10)))
               || ((*(uint *)(puVar2 + 1) & 0x10200000) != 0)) goto LAB_140671241;
            uVar5 = *puVar2;
          }
        }
        FUN_1406712fc(*plVar6,lVar4,uVar5);
      }
      lVar4 = lVar4 + 0x50;
      lVar3 = lVar3 + -0x50;
    } while (lVar3 != 0);
  }
  FUN_14067124c(param_1);
  return;
}



// FUNCTION 14067124c FUN_14067124c body=175 status=ok
// SIG undefined FUN_14067124c(void)

void FUN_14067124c(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xe8);
    lVar3 = (longlong)*(int *)(param_1 + 0xf0) << 4;
    do {
      if ((((*(int *)(lVar4 + 0xc) != 0) && (uVar1 = *(uint *)(lVar4 + 8), -1 < (int)uVar1)) &&
          ((int)uVar1 < DAT_14c9647dc)) &&
         (((plVar2 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar2 != (longlong *)0x0 && ((int)plVar2[2] == *(int *)(lVar4 + 0xc))) &&
          (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))))) {
        FUN_140671584(*plVar2,lVar4);
      }
      lVar4 = lVar4 + 0x10;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(int *)(param_1 + 0xf4) != 0) {
    FUN_140671524(param_1 + 0xe8,0);
    return;
  }
  return;
}



// FUNCTION 1406712fc FUN_1406712fc body=550 status=ok
// SIG undefined FUN_1406712fc(void)

void FUN_1406712fc(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
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
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1[4];
    if (lVar4 != 0) {
      if (DAT_14cad2858 == 0) {
        local_50 = &local_30;
        local_30 = FUN_144a7958c;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_146395584;
        local_58 = &LAB_147a0ba80;
        local_60 = &LAB_14575ccce;
        local_68 = L"Engine";
        local_70 = 0x40000000000;
        local_78 = 0x10000004;
        local_80 = 0x10;
        local_88 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      lVar4 = *(longlong *)(lVar4 + 0x10);
      iVar5 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar5 <= *(int *)(lVar4 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar5 * 8) == DAT_14cad2858 + 0x30))
      {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar5 >> 8),1),1);
      }
    }
    lVar4 = param_1[0x7c];
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar4;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
  if (*(int *)(lVar4 + 0x800) != *(int *)(lVar4 + 0x82c)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar7 = (uint)lVar2 & 0xffff;
    lVar6 = lVar4 + 0x830;
    if (*(longlong *)(lVar4 + 0x838) != 0) {
      lVar6 = *(longlong *)(lVar4 + 0x838);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar4 + 0x840) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar7) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar4 + 0x7f8) + (longlong)iVar5 * 0x18);
        if (*plVar1 == lVar2) {
          if (plVar1 == (longlong *)0x0) {
            return;
          }
          plVar1 = (longlong *)plVar1[1];
          if (plVar1 == (longlong *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x00014067151f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar1 + 0x140))(plVar1,param_3);
          return;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 140671524 FUN_140671524 body=96 status=ok
// SIG undefined FUN_140671524(void)

void FUN_140671524(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 140671584 FUN_140671584 body=369 status=ok
// SIG undefined FUN_140671584(void)

void FUN_140671584(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1[4];
    if (lVar2 != 0) {
      if (DAT_14cad2858 == 0) {
        local_40 = &local_28;
        local_28 = FUN_144a7958c;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_146395584;
        local_48 = &LAB_147a0ba80;
        local_50 = &LAB_14575ccce;
        local_58 = L"Engine";
        local_60 = 0x40000000000;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar1 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30))
      {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
      }
    }
    lVar2 = param_1[0x7c];
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar2;
    }
  }
  local_28 = (code *)0x0;
  FUN_140658388(lVar2,param_2);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406716f6 thunk_FUN_140633cb6 body=7 status=ok
// SIG undefined thunk_FUN_140633cb6(void)

void thunk_FUN_140633cb6(undefined8 param_1)

{
  FUN_140633cb6(param_1,1);
  return;
}



// FUNCTION 1406716fe FUN_1406716fe body=30 status=ok
// SIG undefined FUN_1406716fe(void)

void FUN_1406716fe(undefined8 *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  FUN_14067171c();
  *param_1 = 0;
  return;
}



// FUNCTION 14067171c FUN_14067171c body=218 status=ok
// SIG undefined FUN_14067171c(void)

void FUN_14067171c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined ***pppuVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined1 *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14b432bf0;
  local_40 = &LAB_143e53f2e;
  local_68[0] = &LAB_1489ac6ce;
  FUN_140671824(param_1,local_68,1);
  if (local_68[0] != (undefined1 *)0x0) {
    pppuVar3 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar3 = &local_48;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar2 + 8 + lVar4) != 0) {
        FUN_140b4f29a();
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) < 0) {
    FUN_1489ac6f6(param_1 + 0x28,0);
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406717f8 FUN_1406717f8 body=12 status=ok
// SIG undefined FUN_1406717f8(void)

void FUN_1406717f8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140671801. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140671804 FUN_140671804 body=31 status=ok
// SIG undefined FUN_140671804(void)

undefined8 FUN_140671804(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140671824 FUN_140671824 body=982 status=ok
// SIG undefined FUN_140671824(void)

void FUN_140671824(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar19;
  void *_Dst;
  undefined8 *puVar20;
  undefined1 auStack_128 [40];
  longlong *local_100;
  code *local_f8;
  longlong *local_e8 [2];
  longlong local_d8 [5];
  undefined1 local_b0 [64];
  undefined1 *local_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 *puVar18;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar16 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar16 == 0) goto LAB_140671b73;
  plVar11 = (longlong *)(param_1 + 0x40);
  if (*(char *)(param_1 + 0x39) == '\x01') {
    lVar15 = *plVar11;
    lVar13 = 0;
    do {
      (**(code **)(**(longlong **)(lVar15 + lVar13) + 0x70))();
      lVar13 = lVar13 + 0x10;
    } while ((longlong)iVar16 * 0x10 != lVar13);
    goto LAB_140671b73;
  }
  local_f8 = (code *)*param_2;
  local_e8[0] = (longlong *)0x0;
  if (local_f8 == (code *)0x0) {
LAB_1406718d2:
    puVar18 = (undefined8 *)*plVar11;
    puVar19 = (undefined8 *)*plVar11 + (longlong)iVar16 * 2;
    do {
      while( true ) {
        puVar20 = puVar18;
        pcVar5 = local_f8;
        plVar9 = local_e8[0];
        if (local_e8[0] == (longlong *)0x0) {
          plVar9 = local_d8;
        }
        uVar8 = (**(code **)(*plVar9 + 8))();
        cVar6 = (*pcVar5)(uVar8,puVar20);
        if (cVar6 != '\0') break;
        puVar18 = puVar20 + 2;
        if (puVar20 + 2 == puVar19) goto LAB_140671a12;
      }
      do {
        puVar18 = puVar19;
        pcVar5 = local_f8;
        puVar17 = puVar18 + -2;
        puVar19 = puVar20;
        if (puVar17 == puVar20) goto LAB_140671a12;
        plVar9 = local_e8[0];
        if (local_e8[0] == (longlong *)0x0) {
          plVar9 = local_d8;
        }
        uVar8 = (**(code **)(*plVar9 + 8))();
        cVar6 = (*pcVar5)(uVar8,puVar17);
        puVar19 = puVar17;
      } while (cVar6 != '\0');
      uVar8 = *puVar20;
      plVar9 = (longlong *)puVar20[1];
      *puVar20 = 0;
      puVar20[1] = 0;
      *puVar20 = *puVar17;
      *puVar17 = 0;
      plVar14 = (longlong *)puVar18[-1];
      plVar2 = (longlong *)puVar20[1];
      if (plVar14 != plVar2) {
        puVar18[-1] = 0;
        puVar20[1] = plVar14;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar2 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            local_100 = plVar9;
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar9 = local_100;
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
              plVar9 = local_100;
            }
          }
        }
        plVar14 = (longlong *)puVar18[-1];
      }
      *puVar17 = uVar8;
      if (plVar9 != plVar14) {
        puVar18[-1] = plVar9;
        plVar9 = plVar14;
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar9 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
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
      puVar18 = puVar20 + 2;
    } while (puVar17 != puVar20 + 2);
    puVar19 = puVar20 + 2;
LAB_140671a12:
    iVar16 = *(int *)(param_1 + 0x48);
    iVar7 = (int)((ulonglong)((longlong)puVar19 - *(longlong *)(param_1 + 0x40)) >> 4);
    uVar12 = iVar16 - iVar7;
    local_70 = (undefined1 *)0x0;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar12);
    }
    local_68 = CONCAT44(local_68._4_4_,uVar12);
    if (uVar12 == 0) {
      local_68 = 0x400000000;
    }
    else {
      FUN_1418b2768(local_b0,uVar12);
      puVar10 = local_70;
      if (local_70 == (undefined1 *)0x0) {
        puVar10 = local_b0;
      }
      FUN_1448d5e0f(puVar10,puVar19,uVar12);
      _Dst = (void *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x40));
      FUN_144a07593(_Dst,uVar12);
      iVar7 = *(int *)(param_1 + 0x48) - iVar16;
      if (iVar7 != 0) {
        memmove(_Dst,(void *)((ulonglong)uVar12 * 0x10 + (longlong)_Dst),(longlong)iVar7 << 4);
        iVar16 = *(int *)(param_1 + 0x48);
      }
      *(uint *)(param_1 + 0x48) = iVar16 - uVar12;
      FUN_14068a814(plVar11);
    }
  }
  else {
    plVar9 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_2[2];
    }
    (**(code **)*plVar9)(plVar9,local_e8);
    iVar16 = *(int *)(param_1 + 0x48);
    if (iVar16 != 0) goto LAB_1406718d2;
    local_70 = (undefined1 *)0x0;
    local_68 = 0x400000000;
  }
  if (local_f8 != (code *)0x0) {
    plVar11 = local_e8[0];
    if (local_e8[0] == (longlong *)0x0) {
      plVar11 = local_d8;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  puVar10 = local_70;
  if (local_70 == (undefined1 *)0x0) {
    puVar10 = local_b0;
  }
  lVar15 = (longlong)(int)local_68;
  if (lVar15 != 0) {
    lVar13 = 0;
    do {
      plVar11 = *(longlong **)(puVar10 + lVar13);
      if ((char)plVar11[0x14] == '\0') {
        (**(code **)(*plVar11 + 0x58))(plVar11,param_3);
        iVar16 = *(int *)(param_1 + 0x58);
        *(uint *)(param_1 + 0x58) = iVar16 + 1U;
        if (*(uint *)(param_1 + 0x5c) < iVar16 + 1U) {
          FUN_1418b24f8((longlong *)(param_1 + 0x50),iVar16);
        }
        lVar3 = *(longlong *)(param_1 + 0x50);
        *(undefined8 *)(lVar3 + (longlong)iVar16 * 0x10) = *(undefined8 *)(puVar10 + lVar13);
        lVar4 = *(longlong *)(puVar10 + lVar13 + 8);
        *(longlong *)(lVar3 + 8 + (longlong)iVar16 * 0x10) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
      }
      lVar13 = lVar13 + 0x10;
    } while (lVar15 * 0x10 != lVar13);
  }
  FUN_140cbd738(param_1);
  puVar10 = local_b0;
  if (local_70 != (undefined1 *)0x0) {
    puVar10 = local_70;
  }
  FUN_144a07593(puVar10,local_68 & 0xffffffff);
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_140671b73:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140671c3c FUN_140671c3c body=142 status=ok
// SIG undefined FUN_140671c3c(void)

void FUN_140671c3c(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x9e8);
  if (iVar1 == 0) {
    FUN_14085fdc0(param_1);
    iVar1 = *(int *)(param_1 + 0x9e8);
  }
  if (iVar1 == 2) {
    local_38 = *(undefined8 *)(param_2 + 8);
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_48 = param_2[4];
    uStack_44 = param_2[5];
    uStack_40 = param_2[6];
    uStack_3c = param_2[7];
    FUN_140671ccc(param_1,&local_58,param_3,param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140671ccc FUN_140671ccc body=891 status=ok
// SIG undefined FUN_140671ccc(void)

void FUN_140671ccc(longlong param_1,undefined4 *param_2)

{
  void **ppvVar1;
  void *pvVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  void *local_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  void *local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  void *local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  void *pvStack_80;
  ulonglong local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = param_2[4];
  uStack_44 = param_2[5];
  uStack_40 = param_2[6];
  uStack_3c = param_2[7];
  local_38 = *(undefined8 *)(param_2 + 8);
  FUN_1432de082(param_1,&local_58);
  local_f8 = 0;
  local_108 = (void *)0x0;
  uStack_100 = 0;
  uStack_f0 = &DAT_100000018;
  uStack_e8 = 0;
  uStack_e0 = &DAT_100000018;
  local_d8 = (void *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = &DAT_100000018;
  uStack_b8 = 0;
  uStack_b0 = &DAT_100000018;
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  pvStack_80 = (void *)0x0;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0xffffffff;
  FUN_14029770c(param_1,&local_108);
  ppvVar1 = (void **)(param_1 + 0x4e0);
  if (&local_108 != ppvVar1) {
    if (*(char *)(param_1 + 0x588) == '\x01') {
      if (*(longlong *)(param_1 + 0x568) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + 0x540) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + 0x510) != 0) {
        FUN_1400020a8();
      }
      if (*ppvVar1 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    pvVar2 = local_108;
    *(undefined8 *)(param_1 + 0x4e0) = 0;
    lVar3 = (longlong)(int)uStack_100;
    *(int *)(param_1 + 0x4e8) = (int)uStack_100;
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 0x4ec) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_100 & 0xffffffff,0);
      memcpy(*ppvVar1,pvVar2,lVar3 * 2);
    }
    pvVar2 = local_d8;
    *(undefined4 *)(param_1 + 0x500) = (undefined4)uStack_e8;
    *(undefined4 *)(param_1 + 0x504) = uStack_e8._4_4_;
    *(undefined4 *)(param_1 + 0x508) = (undefined4)uStack_e0;
    *(undefined4 *)(param_1 + 0x50c) = uStack_e0._4_4_;
    *(undefined4 *)(param_1 + 0x4f0) = (undefined4)local_f8;
    *(undefined4 *)(param_1 + 0x4f4) = local_f8._4_4_;
    *(undefined4 *)(param_1 + 0x4f8) = (undefined4)uStack_f0;
    *(undefined4 *)(param_1 + 0x4fc) = uStack_f0._4_4_;
    *(undefined8 *)(param_1 + 0x510) = 0;
    lVar3 = (longlong)(int)uStack_d0;
    *(int *)(param_1 + 0x518) = (int)uStack_d0;
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 0x51c) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x510),uStack_d0 & 0xffffffff,0);
      memcpy(*(void **)(param_1 + 0x510),pvVar2,lVar3 * 2);
    }
    pvVar2 = local_a8;
    *(undefined4 *)(param_1 + 0x530) = (undefined4)uStack_b8;
    *(undefined4 *)(param_1 + 0x534) = uStack_b8._4_4_;
    *(undefined4 *)(param_1 + 0x538) = (undefined4)uStack_b0;
    *(undefined4 *)(param_1 + 0x53c) = uStack_b0._4_4_;
    *(undefined4 *)(param_1 + 0x520) = (undefined4)local_c8;
    *(undefined4 *)(param_1 + 0x524) = local_c8._4_4_;
    *(undefined4 *)(param_1 + 0x528) = (undefined4)uStack_c0;
    *(undefined4 *)(param_1 + 0x52c) = uStack_c0._4_4_;
    *(undefined8 *)(param_1 + 0x540) = 0;
    lVar3 = (longlong)(int)uStack_a0;
    *(int *)(param_1 + 0x548) = (int)uStack_a0;
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 0x54c) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x540),uStack_a0 & 0xffffffff,0);
      memcpy(*(void **)(param_1 + 0x540),pvVar2,lVar3 * 2);
    }
    pvVar2 = pvStack_80;
    *(undefined8 *)(param_1 + 0x550) = local_98;
    *(undefined4 *)(param_1 + 0x558) = (undefined4)uStack_90;
    *(undefined4 *)(param_1 + 0x55c) = uStack_90._4_4_;
    *(undefined4 *)(param_1 + 0x560) = (undefined4)local_88;
    *(undefined4 *)(param_1 + 0x564) = local_88._4_4_;
    *(undefined8 *)(param_1 + 0x568) = 0;
    lVar3 = (longlong)(int)local_78;
    *(int *)(param_1 + 0x570) = (int)local_78;
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 0x574) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x568),local_78 & 0xffffffff,0);
      memcpy(*(void **)(param_1 + 0x568),pvVar2,lVar3 * 2);
    }
    *(longlong *)(param_1 + 0x578) = lStack_70;
    if ((lStack_70 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    *(undefined4 *)(param_1 + 0x580) = local_68;
    *(undefined1 *)(param_1 + 0x588) = 1;
  }
  if (pvStack_80 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_108 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


