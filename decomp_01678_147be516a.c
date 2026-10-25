// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147be516a FUN_147be516a body=80 status=ok
// SIG undefined FUN_147be516a(void)

void FUN_147be516a(longlong param_1,undefined8 param_2,undefined8 param_3,double param_4)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x10d8) + param_4;
  *(double *)(param_1 + 0x10e0) = dVar1;
  FUN_147be4d24(dVar1,param_4);
  if (*(char *)(param_1 + 0x71) != '\0') {
    return;
  }
  FUN_147be4dae(param_1,param_2,param_3);
  return;
}



// FUNCTION 147be51ce FUN_147be51ce body=85 status=ok
// SIG undefined FUN_147be51ce(void)

void FUN_147be51ce(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  lVar1 = FUN_144aff0e0();
  if ((*(byte *)(lVar1 + 0x2b) & 8) != 0) {
    FUN_146efd14e(param_1 + 0x30,lVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be5234 FUN_147be5234 body=123 status=ok
// SIG undefined FUN_147be5234(void)

longlong FUN_147be5234(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  *(longlong *)param_1 = param_1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_147bef79a(param_1 + 8,8);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0x4024000000000000;
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x58) = param_3;
  return param_1;
}



// FUNCTION 147be52b0 FUN_147be52b0 body=73 status=ok
// SIG undefined FUN_147be52b0(void)

void FUN_147be52b0(uint *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if ((ulonglong)(longlong)(int)param_1[6] <= (ulonglong)(uVar3 - param_1[1])) {
    FUN_147bef79a(param_1,(ulonglong)(uVar3 - param_1[1]) + 1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  uVar2 = param_2[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 4) + (ulonglong)(uVar3 & param_1[2]) * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  return;
}



// FUNCTION 147be52fe FUN_147be52fe body=410 status=ok
// SIG undefined FUN_147be52fe(void)

longlong * FUN_147be52fe(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  uint local_78;
  undefined8 *local_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  local_68 = 0;
  uStack_60 = 0;
  if ((longlong)DAT_14cad1080 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    local_70 = DAT_14cad1078 + (longlong)DAT_14cad1080 * 10;
    puVar10 = DAT_14cad1078;
    do {
      bVar11 = (longlong)uStack_60 < 0;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      if (bVar11) {
        FUN_14079e7a6(&local_68,0);
      }
      local_78 = FUN_14482ca40();
      local_78 = local_78 | 0x9c600000;
      FUN_14123d74c(*puVar10,&local_68,1,0x10);
      iVar7 = (int)param_1[1] + (int)uStack_60;
      if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar7);
      }
      if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
        FUN_147befc86(param_1);
      }
      lVar3 = local_68;
      if ((int)uStack_60 != 0) {
        lVar9 = (longlong)(int)uStack_60;
        lVar8 = 0;
        do {
          local_50 = *(undefined8 *)(lVar3 + lVar8);
          pcVar1 = (code *)puVar10[2];
          plVar6 = (longlong *)puVar10[4];
          if ((longlong *)puVar10[4] == (longlong *)0x0) {
            plVar6 = puVar10 + 6;
          }
          uVar5 = (**(code **)(*plVar6 + 8))();
          uVar5 = (*pcVar1)(uVar5);
          lVar2 = param_1[1];
          uVar4 = (int)lVar2 + 1;
          *(uint *)(param_1 + 1) = uVar4;
          if (*(uint *)((longlong)param_1 + 0xc) < uVar4) {
            FUN_147befce6(param_1);
          }
          *(undefined8 *)(*param_1 + (longlong)(int)lVar2 * 8) = uVar5;
          lVar8 = lVar8 + 8;
        } while (lVar9 * 8 != lVar8);
      }
      puVar10 = puVar10 + 10;
    } while (puVar10 != local_70);
    *(undefined4 *)(param_1 + 2) = 0;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147be549a FUN_147be549a body=323 status=ok
// SIG undefined FUN_147be549a(void)

longlong * FUN_147be549a(longlong *param_1,longlong *param_2)

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
    FUN_147befc86(param_2);
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
        FUN_147befce6(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 * 0x10 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147be55e0 FUN_147be55e0 body=70 status=ok
// SIG undefined FUN_147be55e0(void)

undefined8 FUN_147be55e0(void)

{
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  return *(undefined8 *)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xfc0);
}



// FUNCTION 147be563c FUN_147be563c body=369 status=ok
// SIG undefined FUN_147be563c(void)

void FUN_147be563c(longlong param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x58) != param_2) {
    *(char *)(param_1 + 0x58) = param_2;
    if (param_2 == '\0') {
      plVar1 = (longlong *)(param_1 + 0x48);
      if (0 < *(int *)(param_1 + 0x50)) {
        lVar5 = 0;
        lVar4 = 0;
        do {
          lVar3 = FUN_14479d2ce(*plVar1 + lVar5);
          if (lVar3 != 0) {
            local_40 = FUN_14479d2ce(*plVar1 + lVar5);
            if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(local_40);
            }
            FUN_140bddff2(param_1 + 0x38,&local_40);
          }
          lVar4 = lVar4 + 1;
          lVar5 = lVar5 + 8;
        } while (lVar4 < *(int *)(param_1 + 0x50));
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
      if (*(int *)(param_1 + 0x54) != 0) {
        FUN_147bf1112(plVar1,0);
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0x40);
      if (0 < iVar2) {
        lVar4 = 0;
        do {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar4 * 8);
          if (lVar5 != 0) {
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar5);
            }
            local_40 = 0;
            FUN_14485c47a(&local_40,lVar5);
            FUN_1468ca300(param_1 + 0x48,&local_40);
            iVar2 = *(int *)(param_1 + 0x40);
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < iVar2);
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
      if (*(int *)(param_1 + 0x44) != 0) {
        FUN_140c6998c((longlong *)(param_1 + 0x38),0);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147be57ae FUN_147be57ae body=526 status=ok
// SIG undefined FUN_147be57ae(void)

undefined8 FUN_147be57ae(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) goto LAB_147be5949;
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 == 0) {
LAB_147be586e:
    if (*(char *)(param_1 + 0x58) == '\x01') {
      if ((longlong)*(int *)(param_1 + 0x50) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x48);
        lVar6 = (longlong)*(int *)(param_1 + 0x50) << 3;
        do {
          cVar2 = FUN_1409d2f40(lVar3,param_2);
          if (cVar2 != '\0') goto LAB_147be5949;
          lVar3 = lVar3 + 8;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      plVar1 = (longlong *)(param_1 + 0x48);
      local_30 = 0;
      FUN_14485c47a(&local_30,param_2);
      iVar5 = *(int *)(param_1 + 0x50);
      *(uint *)(param_1 + 0x50) = iVar5 + 1U;
      if (iVar5 + 1U <= *(uint *)(param_1 + 0x54)) {
        *(undefined8 *)(*plVar1 + (longlong)iVar5 * 8) = local_30;
        goto joined_r0x000147be5947;
      }
      FUN_1409d3082(plVar1,iVar5);
      *(undefined8 *)(*plVar1 + (longlong)iVar5 * 8) = local_30;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x40);
      if ((longlong)iVar5 != 0) {
        lVar3 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar3) == param_2) goto LAB_147be5949;
          lVar3 = lVar3 + 8;
        } while ((longlong)iVar5 * 8 - lVar3 != 0);
      }
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
        iVar5 = *(int *)(param_1 + 0x40);
      }
      *(uint *)(param_1 + 0x40) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x44) < iVar5 + 1U) {
        FUN_140845902((longlong *)(param_1 + 0x38),iVar5);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar5 * 8) = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
joined_r0x000147be5947:
      if (iVar5 == -1) goto LAB_147be5949;
    }
    FUN_14575d514(param_1 + 0x78,param_2);
    uVar4 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      lVar3 = FUN_144a797b2();
      if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
          (((*(longlong *)
              (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30 &&
            (lVar3 = *(longlong *)(param_1 + 0x28), lVar3 != 0)) &&
           (*(int *)(lVar3 + 0x38) <= *(int *)(param_2 + 0x38))))) &&
         (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) goto LAB_147be586e;
    }
    else {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar3);
      }
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) goto LAB_147be586e;
    }
LAB_147be5949:
    uVar4 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 147be59be FUN_147be59be body=195 status=ok
// SIG undefined FUN_147be59be(void)

bool FUN_147be59be(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x58) == '\0') {
    local_38 = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    local_30 = &local_38;
    iVar1 = FUN_1432619ce(param_1 + 0x38);
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38,param_2);
    local_30 = &local_38;
    iVar1 = FUN_1411dbb96(param_1 + 0x48);
  }
  if (iVar1 != 0) {
    FUN_14575d514(param_1 + 0x90,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar1 != 0;
}



// FUNCTION 147be5a82 FUN_147be5a82 body=400 status=ok
// SIG undefined FUN_147be5a82(void)

int FUN_147be5a82(longlong *param_1,longlong *param_2)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar4 = 0;
  if ((*(char *)((longlong)param_1 + 0x59) == '\0') &&
     (*(undefined1 *)((longlong)param_1 + 0x59) = 1, 0 < (int)param_2[1])) {
    lVar5 = 0;
    iVar4 = 0;
    do {
      local_78 = 0;
      uStack_70 = 0;
      local_88 = (void *)0x0;
      local_80 = *(int *)(*param_2 + 8 + lVar5 * 0x10);
      lVar6 = (longlong)local_80;
      _Src = *(void **)(*param_2 + lVar5 * 0x10);
      if (lVar6 == 0) {
        local_7c = 0;
      }
      else {
        FUN_1446dd670(&local_88,local_80,0);
        memcpy(local_88,_Src,lVar6 * 2);
      }
      cVar3 = FUN_147a90995(&local_88,&local_78);
      if ((cVar3 != '\0') && (0 < (int)uStack_70)) {
        lVar6 = 0;
        do {
          lVar1 = *(longlong *)(local_78 + lVar6 * 8);
          if (lVar1 != 0) {
            lVar2 = param_1[5];
            if (lVar2 != 0) {
              if (DAT_14c950c29 == '\x01') {
                FUN_1456cec3c(lVar2);
              }
              if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30)) goto LAB_147be5bb4;
            }
            (**(code **)(*param_1 + 0x2a8))(param_1,lVar1);
            iVar4 = iVar4 + 1;
          }
LAB_147be5bb4:
          lVar6 = lVar6 + 1;
        } while (lVar6 < (int)uStack_70);
      }
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_2[1]);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 147be5c14 FUN_147be5c14 body=420 status=ok
// SIG undefined FUN_147be5c14(void)

int FUN_147be5c14(longlong *param_1,longlong *param_2)

{
  void *_Src;
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar5 = 0;
  if ((((char)param_1[6] == '\x01') && (*(char *)((longlong)param_1 + 0x59) == '\0')) &&
     (*(undefined1 *)((longlong)param_1 + 0x59) = 1, 0 < (int)param_2[1])) {
    lVar4 = 0;
    iVar5 = 0;
    do {
      local_78 = 0;
      uStack_70 = 0;
      local_88 = (void *)0x0;
      local_80 = *(int *)(*param_2 + 8 + lVar4 * 0x10);
      lVar6 = (longlong)local_80;
      _Src = *(void **)(*param_2 + lVar4 * 0x10);
      if (lVar6 == 0) {
        local_7c = 0;
      }
      else {
        FUN_1446dd670(&local_88,local_80,0);
        memcpy(local_88,_Src,lVar6 * 2);
      }
      cVar2 = FUN_147a90995(&local_88,&local_78);
      if ((cVar2 != '\0') && (0 < (int)uStack_70)) {
        lVar6 = 0;
        do {
          lVar1 = *(longlong *)(local_78 + lVar6 * 8);
          if (lVar1 != 0) {
            lVar3 = FUN_14043ab18();
            if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
               ((lVar3 = param_1[5], lVar3 == 0 ||
                ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
                 (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
                  == lVar3 + 0x30)))))) {
              (**(code **)(*param_1 + 0x2a8))(param_1,lVar1);
              iVar5 = iVar5 + 1;
            }
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < (int)uStack_70);
      }
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < (int)param_2[1]);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 147be5dba FUN_147be5dba body=691 status=ok
// SIG undefined FUN_147be5dba(void)

undefined4 FUN_147be5dba(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_1446f470e(&local_1a0,L"AssetRegistry",1);
  uVar5 = FUN_144a52528();
  plVar6 = (longlong *)FUN_14493e38c(uVar5,local_1a0);
  local_1b8 = (longlong *)(**(code **)(*plVar6 + 0x40))(plVar6);
  local_128 = 0;
  local_120 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_56 = 0;
  local_54 = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1414d7078(*(longlong *)(param_1 + 0x28),&local_1b0);
    uVar3 = uStack_150;
    lVar10 = (longlong)(int)uStack_150;
    uVar4 = (int)uStack_150 + 1;
    uStack_150 = CONCAT44(uStack_150._4_4_,uVar4);
    if (uStack_150._4_4_ < uVar4) {
      FUN_1401d5364(&local_158,uVar3 & 0xffffffff);
    }
    puVar1 = (undefined4 *)(local_158 + lVar10 * 0x10);
    *puVar1 = local_1b0;
    puVar1[1] = uStack_1ac;
    puVar1[2] = uStack_1a8;
    puVar1[3] = uStack_1a4;
    local_58 = CONCAT11(1,(undefined1)local_58);
  }
  if (0 < (int)param_2[1]) {
    lVar9 = 8;
    lVar10 = 0;
    do {
      puVar7 = &DAT_149dfb77a;
      if (*(int *)(*param_2 + lVar9) != 0) {
        puVar7 = *(undefined2 **)(*param_2 + -8 + lVar9);
      }
      FUN_1446f470e(&local_1b0,puVar7,1);
      uVar3 = uStack_180;
      lVar8 = (longlong)(int)uStack_180;
      uVar4 = (int)uStack_180 + 1;
      uStack_180 = CONCAT44(uStack_180._4_4_,uVar4);
      if (uStack_180._4_4_ < uVar4) {
        FUN_1446f84a2(&local_188,uVar3 & 0xffffffff);
      }
      *(ulonglong *)(local_188 + lVar8 * 8) = CONCAT44(uStack_1ac,local_1b0);
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x10;
    } while (lVar10 < (int)param_2[1]);
  }
  local_58 = CONCAT11(local_58._1_1_,*(undefined1 *)(param_1 + 0x71));
  local_56 = *(undefined1 *)(param_1 + 0x70);
  FUN_140195631(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_147000e7a(param_1 + 0x60,0);
  }
  (**(code **)(*local_1b8 + 0x50))(local_1b8,&local_198,param_1 + 0x60,1);
  uVar2 = *(undefined4 *)(param_1 + 0x68);
  FUN_14019571a(&local_198);
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be606e FUN_147be606e body=1559 status=ok
// SIG undefined FUN_147be606e(void)

undefined4 FUN_147be606e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  undefined4 uVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_2d8 [32];
  longlong *local_2b8;
  longlong *local_2b0;
  longlong local_2a8;
  longlong lStack_2a0;
  longlong local_298;
  int local_290;
  longlong local_288;
  int local_280;
  undefined4 *local_278;
  undefined8 uStack_270;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_22c;
  undefined4 local_224;
  longlong local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  int local_1d4;
  undefined1 local_1d0 [8];
  undefined1 *local_1c8;
  int local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined8 local_74;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  FUN_1446f470e(&local_260,L"AssetRegistry",1);
  uVar9 = FUN_144a52528();
  plVar10 = (longlong *)FUN_14493e38c(uVar9,local_260);
  plVar10 = (longlong *)(**(code **)(*plVar10 + 0x40))(plVar10);
  uVar15 = 0;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    local_148 = 0;
    local_140 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_13c = 0xffffffff00000080;
    local_134 = 0;
    local_128 = 0;
    local_120 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_ec = 0xffffffff00000080;
    local_e4 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_9c = 0xffffffff00000080;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_76 = 0;
    local_74 = 0;
    local_2b8 = plVar10;
    uVar9 = FUN_141225fe0();
    FUN_1414d7078(uVar9,&local_208);
    uVar6 = uStack_170;
    lVar20 = (longlong)(int)uStack_170;
    uVar7 = (int)uStack_170 + 1;
    uStack_170 = CONCAT44(uStack_170._4_4_,uVar7);
    if (uStack_170._4_4_ < uVar7) {
      FUN_1401d5364(&local_178,uVar6 & 0xffffffff);
    }
    puVar1 = (undefined4 *)(local_178 + lVar20 * 0x10);
    *puVar1 = (undefined4)local_208;
    puVar1[1] = local_208._4_4_;
    puVar1[2] = (int)uStack_200;
    puVar1[3] = uStack_200._4_4_;
    if (0 < (int)param_2[1]) {
      lVar20 = 8;
      lVar19 = 0;
      do {
        puVar13 = &DAT_149dfb77a;
        if (*(int *)(*param_2 + lVar20) != 0) {
          puVar13 = *(undefined2 **)(*param_2 + -8 + lVar20);
        }
        FUN_1446f470e(&local_208,puVar13,1);
        uVar6 = uStack_1a0;
        lVar18 = (longlong)(int)uStack_1a0;
        uVar7 = (int)uStack_1a0 + 1;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar7);
        if (uStack_1a0._4_4_ < uVar7) {
          FUN_1446f84a2(&local_1a8,uVar6 & 0xffffffff);
        }
        *(longlong *)(local_1a8 + lVar18 * 8) = local_208;
        lVar19 = lVar19 + 1;
        lVar20 = lVar20 + 0x10;
      } while (lVar19 < (int)param_2[1]);
    }
    local_78 = CONCAT11(local_78._1_1_,*(undefined1 *)(param_1 + 0x71));
    local_76 = *(undefined1 *)(param_1 + 0x70);
    plVar10 = (longlong *)(param_1 + 0x60);
    FUN_140195631(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_147000e7a(plVar10,0);
    }
    plVar16 = local_2b8;
    (**(code **)(*local_2b8 + 0x50))(local_2b8,&local_1b8,plVar10,1);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      local_1e8 = 0;
      local_1e0 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_1dc = 0xffffffff00000080;
      local_1d4 = 0;
      local_1c8 = (undefined1 *)0x0;
      local_1c0 = 0;
      local_278 = (undefined4 *)0x0;
      uStack_270 = 0;
      FUN_1414d7078(*(longlong *)(param_1 + 0x28),&local_258);
      uStack_270 = CONCAT44(uStack_270._4_4_,1);
      FUN_1401d5364(&local_278,0);
      *local_278 = (undefined4)local_258;
      local_278[1] = local_258._4_4_;
      local_278[2] = (undefined4)uStack_250;
      local_278[3] = uStack_250._4_4_;
      local_238 = 0;
      local_230 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_22c = 0xffffffff00000080;
      local_224 = 0;
      local_218 = 0;
      local_210 = 0;
      (**(code **)(*plVar16 + 0x168))(plVar16,&local_278,&local_258,&local_208);
      local_210 = 0;
      if (local_218 != 0) {
        FUN_1400020a8();
      }
      FUN_1403950f6(&local_258);
      if (0 < (longlong)*(int *)(param_1 + 0x68)) {
        plVar16 = (longlong *)(longlong)*(int *)(param_1 + 0x68);
        local_2b0 = plVar10;
        do {
          plVar14 = (longlong *)((longlong)plVar16 + -1);
          FUN_146ff8bfc((longlong)plVar14 * 0x70 + *plVar10,&local_288,DAT_14c947d08);
          if (local_280 < 2) {
LAB_147be65e7:
            FUN_147be6686(plVar10,(ulonglong)plVar14 & 0xffffffff);
          }
          else {
            local_2b8 = plVar14;
            FUN_14598538a(&local_298,&local_288);
            local_2a8 = 0;
            lStack_2a0 = 0;
            local_258 = local_298;
            iVar8 = local_290 + -1;
            if (local_290 == 0) {
              iVar8 = 0;
            }
            uStack_250 = CONCAT44(uStack_250._4_4_,iVar8);
            FUN_1468fe3e4(&local_2a8,&local_258);
            plVar14 = local_2b8;
            bVar2 = true;
            if ((int)uStack_200 != local_1d4) {
              uVar7 = (uint)((ulonglong)local_2a8 >> 0x10);
              uVar17 = (uint)local_2a8 & 0xffff;
              uVar5 = (uint)((ulonglong)lStack_2a0 >> 0x10);
              uVar12 = (uint)lStack_2a0 & 0xffff;
              uVar7 = (int)((ulonglong)local_2a8 >> 0x20) + ((uint)local_2a8 << 0x10 | uVar17) +
                      (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar17 >> 4);
              puVar11 = local_1c8;
              if (local_1c8 == (undefined1 *)0x0) {
                puVar11 = local_1d0;
              }
              iVar8 = *(int *)(puVar11 +
                              (ulonglong)
                              (local_1c0 - 1U &
                              ((uVar7 >> 2) +
                               ((uint)lStack_2a0 << 0x10 | uVar12) +
                               (int)((ulonglong)lStack_2a0 >> 0x20) +
                               (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar12 >> 4) + uVar7 * 0x40 +
                               0x9e3779b9 ^ uVar7)) * 4);
              while (plVar10 = local_2b0, iVar8 != -1) {
                lVar20 = (longlong)iVar8;
                bVar3 = *(longlong *)(local_208 + 8 + lVar20 * 0x18) == lStack_2a0;
                bVar4 = *(longlong *)(local_208 + lVar20 * 0x18) == local_2a8;
                bVar2 = !bVar3 || !bVar4;
                if (bVar3 && bVar4) break;
                iVar8 = *(int *)(local_208 + lVar20 * 0x18 + 0x10);
              }
            }
            if (local_298 != 0) {
              FUN_1400020a8();
            }
            if (bVar2) goto LAB_147be65e7;
          }
          if (local_288 != 0) {
            FUN_1400020a8();
          }
          bVar2 = 1 < (longlong)plVar16;
          plVar16 = plVar14;
        } while (bVar2);
      }
      if (local_278 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      local_1c0 = 0;
      if (local_1c8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1403950f6(&local_208);
    }
    uVar15 = *(undefined4 *)(param_1 + 0x68);
    FUN_14019571a(&local_1b8);
  }
  if ((local_60 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be6686 FUN_147be6686 body=79 status=ok
// SIG undefined FUN_147be6686(void)

void FUN_147be6686(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x70 + *param_1);
  FUN_14128b0c2(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x70),(longlong)(int)(~param_2 + iVar1) * 0x70);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_147001ce8(param_1);
  return;
}



// FUNCTION 147be66d6 FUN_147be66d6 body=215 status=ok
// SIG undefined FUN_147be66d6(void)

longlong FUN_147be66d6(longlong *param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_1400021e4(param_1,&local_28);
    puVar2 = local_28;
    if (local_20 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    lVar1 = FUN_140277851(0,puVar2);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (lVar1 == 0) {
      FUN_1400021e4(param_1,&local_28);
      puVar2 = local_28;
      if (local_20 == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      local_38 = 0;
      lVar1 = FUN_1402791b4(0,puVar2,0,0);
      if (local_28 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_1468c51e8(lVar1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147be67ae FUN_147be67ae body=112 status=ok
// SIG undefined FUN_147be67ae(void)

void FUN_147be67ae(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x59) = 0;
  FUN_140195631(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_147000e7a(param_1 + 0x60,0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_140c6998c(param_1 + 0x38,0);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) == 0) {
    return;
  }
  FUN_147bf1112(param_1 + 0x48,0);
  return;
}



// FUNCTION 147be682e FUN_147be682e body=93 status=ok
// SIG undefined FUN_147be682e(void)

undefined8 * FUN_147be682e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140195631(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147bf1172(param_1,iVar1);
      FUN_147bf11e1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147be6894 FUN_147be6894 body=7 status=ok
// SIG undefined FUN_147be6894(void)

void FUN_147be6894(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 147be6a70 FUN_147be6a70 body=185 status=ok
// SIG undefined FUN_147be6a70(void)

void FUN_147be6a70(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  longlong local_38 [2];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined1 *)*puVar2 + 1;
  if ((undefined1 *)puVar2[1] < puVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_21,1);
  }
  else {
    local_21 = *(undefined1 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_140077068(param_2,local_38);
  uVar3 = thunk_FUN_146fdfba8();
  FUN_146fe02fc(uVar3,local_3c,local_21,local_38);
  (**(code **)(*param_1 + 0x10))(param_1,local_3c);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be6b2a FUN_147be6b2a body=180 status=ok
// SIG undefined FUN_147be6b2a(void)

undefined8 FUN_147be6b2a(undefined8 *param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ushort *puVar4;
  ulonglong uVar5;
  
  if (*(int *)(param_1 + 1) < 2) {
    uVar3 = 0;
  }
  else {
    puVar4 = (ushort *)*param_1;
    uVar1 = *puVar4;
    uVar5 = 1L << ((byte)uVar1 & 0x3f);
    uVar2 = uVar5 & 0x3ff000000000000;
    if (0x3f < uVar1) {
      uVar2 = 0;
    }
    uVar5 = uVar5 & 0x7fffffe07fffffe;
    if ((uVar1 & 0xffc0) != 0x40) {
      uVar5 = 0;
    }
    if ((0xff < uVar1) || (uVar3 = CONCAT71((int7)((uVar2 | uVar5) >> 8),1), (uVar2 | uVar5) != 0))
    {
      do {
        uVar1 = *puVar4;
        uVar5 = 1L << ((byte)uVar1 & 0x3f);
        uVar2 = uVar5 & 0x3ff280000000000;
        if (0x3f < uVar1) {
          uVar2 = 0;
        }
        uVar5 = uVar5 & 0x7fffffe87fffffe;
        if ((uVar1 & 0xffc0) != 0x40) {
          uVar5 = 0;
        }
        puVar4 = puVar4 + 1;
      } while (uVar5 != 0 || uVar2 != 0);
      uVar3 = CONCAT71(0x3ff2800000000,uVar1 != 0);
    }
  }
  return uVar3;
}



// FUNCTION 147be6bde FUN_147be6bde body=593 status=ok
// SIG undefined FUN_147be6bde(void)

void FUN_147be6bde(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  longlong local_48;
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  bVar3 = (&DAT_149fc1b6e)[*(byte *)(param_1 + 0x18)];
  if (bVar3 == 1) {
    if ((*(longlong **)(param_1 + 8) == (longlong *)0x0) ||
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(), cVar2 == '\0')) {
LAB_147be6c88:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
    }
    bVar3 = (&DAT_149fc1b6e)[*(byte *)(param_1 + 0x18)];
  }
  else if ((*(uint *)(param_1 + 8) & 0xffffff) == 0) goto LAB_147be6c88;
  if ((bVar3 & 1) == 0) {
    FUN_145da5dd4(param_1,&local_40);
    iVar1 = local_38 + -1;
    if (local_38 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_2,local_40,iVar1);
  }
  else {
    FUN_140b6e8c2(param_1,&local_30);
    FUN_1405e6804(param_1,&local_40);
    plVar4 = (longlong *)FUN_140489acc();
    (**(code **)(*plVar4 + 0x2c8))(plVar4,&local_48);
    cVar2 = FUN_147be6b2a(&local_40);
    if (local_30 == local_48) {
      if (cVar2 == '\0') {
        iVar1 = local_38 + -1;
        if (local_38 == 0) {
          iVar1 = 0;
        }
        FUN_1400020e8(param_2,local_40,iVar1);
        goto LAB_147be6c63;
      }
      puVar7 = local_40;
      if (local_38 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_58,L"\"%s\"",puVar7);
      iVar1 = local_50 + -1;
      if (local_50 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(param_2,local_58,iVar1);
    }
    else {
      if (cVar2 == '\0') {
        puVar7 = &DAT_149dfb77a;
        if (local_38 != 0) {
          puVar7 = local_40;
        }
        FUN_1400021e4(&local_30,&local_68);
        puVar6 = &DAT_149dfb77a;
        if (local_60 != 0) {
          puVar6 = local_68;
        }
        pwVar5 = L"%s:%s";
      }
      else {
        puVar7 = &DAT_149dfb77a;
        if (local_38 != 0) {
          puVar7 = local_40;
        }
        FUN_1400021e4(&local_30,&local_68);
        puVar6 = &DAT_149dfb77a;
        if (local_60 != 0) {
          puVar6 = local_68;
        }
        pwVar5 = L"%s:\"%s\"";
      }
      FUN_140002266(&local_58,pwVar5,puVar6,puVar7);
      iVar1 = local_50 + -1;
      if (local_50 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(param_2,local_58,iVar1);
      bVar8 = local_58 != (undefined2 *)0x0;
      local_58 = local_68;
      if (bVar8) {
        FUN_1400020a8();
        local_58 = local_68;
      }
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_147be6c63:
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147be6e44 FUN_147be6e44 body=539 status=ok
// SIG undefined FUN_147be6e44(void)

undefined8 * FUN_147be6e44(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((&DAT_149fc1b6e)[*(byte *)(param_1 + 0x18)] == '\x01') {
    if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
      if (cVar1 != '\0') goto LAB_147be6f10;
    }
  }
  else if ((*(uint *)(param_1 + 8) & 0xffffff) != 0) {
LAB_147be6f10:
    FUN_1405e6804(param_1,&local_50);
    puVar5 = &DAT_149dfb77a;
    if (local_48 != 0) {
      puVar5 = local_50;
    }
    FUN_140b6e8c2(param_1,local_68);
    FUN_1400021e4(local_68,&local_60);
    puVar6 = &DAT_149dfb77a;
    if (local_58 != 0) {
      puVar6 = local_60;
    }
    FUN_140002266(&local_40,L"%s:%s",puVar6,puVar5);
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    _Src = local_40;
    *(undefined4 *)(puVar3 + 1) = 0;
    *puVar3 = &PTR_FUN_149e43e80;
    puVar3[2] = 0;
    *(int *)(puVar3 + 3) = local_38;
    if ((longlong)local_38 == 0) {
      *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
    }
    else {
      FUN_1446dd670(puVar3 + 2,local_38,0);
      memcpy((void *)puVar3[2],_Src,(longlong)local_38 * 2);
    }
    *(undefined4 *)(puVar3 + 1) = 2;
    *param_2 = puVar3;
    puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    puVar4[1] = &DAT_100000001;
    *puVar4 = &PTR_LAB_149e490e0;
    puVar4[2] = puVar3;
    param_2[1] = puVar4;
    if (local_40 != (void *)0x0) {
      FUN_1400020a8(local_40);
    }
    goto LAB_147be6ee3;
  }
  uVar2 = FUN_14001cc68(0x20,0x10);
  FUN_14047c0ce(uVar2,&DAT_14caf2ae0);
  *param_2 = uVar2;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_149e490e0;
  puVar3[2] = uVar2;
  param_2[1] = puVar3;
LAB_147be6ee3:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be7060 FUN_147be7060 body=266 status=ok
// SIG undefined FUN_147be7060(void)

void FUN_147be7060(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined8 *)0x0;
  plStack_30 = (longlong *)0x0;
  (**(code **)(*param_1 + 8))(0,&local_38);
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (*(int *)(param_2 + 8) < 2) goto LAB_147be70bc;
  local_38 = (undefined8 *)0x0;
  plStack_30 = (longlong *)0x0;
  iVar4 = FUN_1403de9f2(param_2,&local_38,&DAT_149e31048,1);
  if (iVar4 == 1) {
    local_40 = 0;
    puVar6 = local_38;
LAB_147be7164:
    FUN_1463edf88(param_1,local_40,puVar6);
  }
  else if (iVar4 == 2) {
    puVar6 = local_38 + 2;
    if (*(int *)(local_38 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*local_38;
    }
    FUN_1446f470e(&local_40,puVar5,1);
    goto LAB_147be7164;
  }
  FUN_1447a1747(local_38,(ulonglong)plStack_30 & 0xffffffff);
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_147be70bc:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be7180 FUN_147be7180 body=75 status=ok
// SIG undefined FUN_147be7180(void)

void FUN_147be7180(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_147be71cc(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be71cc FUN_147be71cc body=722 status=ok
// SIG undefined FUN_147be71cc(void)

void FUN_147be71cc(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1468996ee();
  if ((*(byte *)((longlong)param_2 + 0x2b) & 8) == 0) {
    return;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0xe8) * 0x18,
             (longlong)*(int *)(param_1 + 0xec) * 0x18);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x108) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x10c) + 0x1fU >> 3 & 0xfffffffc);
  lVar3 = (longlong)*(int *)(param_1 + 0x128) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar3,lVar3);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x140) << 4,
             (longlong)*(int *)(param_1 + 0x144) << 4);
  iVar1 = *(int *)(param_1 + 0x140);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x138);
    lVar4 = 0;
    do {
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(lVar3 + 8 + lVar4),
                 (longlong)*(int *)(lVar3 + 0xc + lVar4));
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x150) << 4,
             (longlong)*(int *)(param_1 + 0x154) << 4);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x170) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x174) + 0x1fU >> 3 & 0xfffffffc);
  lVar3 = (longlong)*(int *)(param_1 + 400) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar3,lVar3);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x1a0) * 0x18,
             (longlong)*(int *)(param_1 + 0x1a4) * 0x18);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x1c0) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x1c4) + 0x1fU >> 3 & 0xfffffffc);
  lVar3 = (longlong)*(int *)(param_1 + 0x1e0) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar3,lVar3);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x1f0) << 3,(longlong)*(int *)(param_1 + 500) << 3
            );
  FUN_147be8ad8(param_1 + 0x1f8,param_2);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x2f8) << 3,
             (longlong)*(int *)(param_1 + 0x2fc) << 3);
  iVar1 = *(int *)(param_1 + 0x2f8);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x2f0);
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + lVar4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x268))(plVar2,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x328) << 3,
             (longlong)*(int *)(param_1 + 0x32c) << 3);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x338) << 4,
             (longlong)*(int *)(param_1 + 0x33c) << 4);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x358) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x35c) + 0x1fU >> 3 & 0xfffffffc);
  lVar3 = (longlong)*(int *)(param_1 + 0x378) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar3,lVar3);
  FUN_147bdac80(param_1 + 0x388,param_2);
  return;
}



// FUNCTION 147be749e FUN_147be749e body=573 status=ok
// SIG undefined FUN_147be749e(void)

void FUN_147be749e(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar4 = *(longlong *)(param_1 + 0x1a8);
  local_a0 = 0;
  FUN_14485c47a(&local_a0,lVar4);
  local_a8 = 0;
  FUN_14485c47a(&local_a8,param_1);
  local_d0 = local_a0;
  uStack_c8 = local_a8;
  local_b8 = (void *)0x0;
  local_b0 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_b0;
  pvVar1 = (void *)*param_3;
  local_c0 = param_2;
  if (lVar3 == 0) {
    local_ac = 0;
  }
  else {
    FUN_1446dd670(&local_b8,local_b0,0);
    memcpy(local_b8,pvVar1,lVar3 * 2);
  }
  if (lVar4 == 0) {
    FUN_1435abb0a(&local_d0);
  }
  else {
    uVar2 = FUN_144a88394(lVar4);
    local_e0 = (undefined8 *)0x0;
    local_d8 = 0;
    FUN_1446efa72(&local_e0,0,4,0x10);
    pvVar1 = local_b8;
    local_d8 = 4;
    *local_e0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_e0[2] = lVar3;
    *local_e0 = &PTR_FUN_14a9fcbd0;
    *(undefined4 *)(local_e0 + 3) = (undefined4)local_d0;
    *(undefined4 *)((longlong)local_e0 + 0x1c) = local_d0._4_4_;
    *(undefined4 *)(local_e0 + 4) = (undefined4)uStack_c8;
    *(undefined4 *)((longlong)local_e0 + 0x24) = uStack_c8._4_4_;
    *(undefined4 *)(local_e0 + 5) = local_c0;
    local_e0[6] = 0;
    lVar4 = (longlong)local_b0;
    *(int *)(local_e0 + 7) = local_b0;
    if (lVar4 == 0) {
      *(undefined4 *)((longlong)local_e0 + 0x3c) = 0;
    }
    else {
      puVar5 = local_e0 + 6;
      FUN_1446dd670(puVar5,local_b0,0);
      memcpy((void *)*puVar5,pvVar1,lVar4 * 2);
    }
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_e0);
    local_58 = 1;
    FUN_14016fdb0(uVar2,local_e8,&local_98);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    FUN_1449db362(&local_e0);
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be76e0 FUN_147be76e0 body=918 status=ok
// SIG undefined FUN_147be76e0(void)

void FUN_147be76e0(longlong param_1,undefined **param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined *puVar5;
  longlong lVar6;
  void *_Src;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_148 [32];
  void **local_128;
  undefined8 local_120;
  undefined1 local_111;
  undefined8 local_110;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  undefined **local_f8;
  undefined *local_f0;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar4 = *(longlong **)(param_1 + 0x2e8);
  if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
    puVar5 = *param_2;
    plVar11 = plVar4 + 7;
    if ((longlong *)plVar4[8] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[8];
    }
    iVar10 = *(int *)((longlong)plVar11 +
                     (ulonglong)
                     ((int)plVar4[9] - 1U & (int)puVar5 + (int)((ulonglong)puVar5 >> 0x20) * 0x17) *
                     4);
    if (iVar10 != -1) {
      do {
        plVar11 = (longlong *)(*plVar4 + (longlong)iVar10 * 0x18);
        if ((undefined *)*plVar11 == puVar5) {
          if (plVar11 != (longlong *)0x0) goto LAB_147be77b8;
          break;
        }
        iVar10 = (int)plVar11[2];
      } while (iVar10 != -1);
    }
  }
  local_f0 = &DAT_14a9f7568;
  local_f8 = param_2;
  FUN_147bf12ce(plVar4);
  plVar11 = (longlong *)(*plVar4 + (longlong)local_4c * 0x18);
LAB_147be77b8:
  if ((int)plVar11[1] != -1) {
    lVar6 = *(longlong *)(param_1 + 0x310);
    local_111 = *(undefined1 *)(lVar6 + 0x152);
    *(undefined1 *)(lVar6 + 0x152) = 1;
    lVar13 = DAT_14caf2ba0;
    local_110 = param_3;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar9 = 0;
    }
    else {
      bVar7 = FUN_144a61b4f();
      uVar9 = (ulonglong)(bVar7 ^ 1);
    }
    iVar10 = *(int *)(lVar13 + uVar9 * 4);
    iVar3 = *(int *)(param_1 + 0x140);
    uVar8 = iVar3 + 1;
    *(uint *)(param_1 + 0x140) = uVar8;
    if (*(uint *)(param_1 + 0x144) < uVar8) {
      FUN_146b28064((longlong *)(param_1 + 0x138));
    }
    lVar13 = *(longlong *)(param_1 + 0x138);
    lVar12 = (longlong)iVar3 * 0x10;
    puVar1 = (undefined8 *)(lVar13 + lVar12);
    *puVar1 = 0;
    puVar1[1] = 0;
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar10);
    }
    lVar13 = lVar13 + lVar12;
    if (iVar10 != 0) {
      FUN_144893a1c(lVar13);
    }
    uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0x310) + 0x150);
    *(undefined1 *)(*(longlong *)(param_1 + 0x310) + 0x150) = 0;
    memset(&local_f8,0,0x90);
    FUN_144869430(&local_f8);
    local_68 = 0;
    local_f8 = &PTR_FUN_149e1e590;
    local_58 = 0;
    local_60 = lVar13;
    FUN_144a69558(&local_f8,1);
    (*(code *)local_f8[0x1e])(&local_f8,0);
    local_f8 = &PTR_FUN_149e1e330;
    local_108 = (void *)0x0;
    local_100 = *(int *)(param_4 + 1);
    lVar12 = (longlong)local_100;
    _Src = (void *)*param_4;
    if (lVar12 == 0) {
      local_fc = 0;
    }
    else {
      FUN_1446dd670(&local_108,local_100,0);
      memcpy(local_108,_Src,lVar12 * 2);
    }
    local_120 = param_5;
    local_128 = &local_108;
    FUN_140574330(param_1,&local_f8,*param_2,local_110);
    *(undefined1 *)(*(longlong *)(param_1 + 0x310) + 0x150) = uVar2;
    if (*(int *)(lVar13 + 0xc) != *(int *)(lVar13 + 8)) {
      FUN_144893a1c(lVar13);
    }
    plVar4 = *(longlong **)(param_1 + 0x2e8);
    if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
      puVar5 = *param_2;
      plVar11 = plVar4 + 7;
      if ((longlong *)plVar4[8] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar4[8];
      }
      iVar10 = *(int *)((longlong)plVar11 +
                       (ulonglong)
                       ((int)plVar4[9] - 1U & (int)puVar5 + (int)((ulonglong)puVar5 >> 0x20) * 0x17)
                       * 4);
      if (iVar10 != -1) {
        do {
          plVar11 = (longlong *)(*plVar4 + (longlong)iVar10 * 0x18);
          if ((undefined *)*plVar11 == puVar5) {
            if (plVar11 + 1 != (longlong *)0x0 && plVar11 != (longlong *)0x0) {
              *(undefined4 *)(plVar11 + 1) = 0xffffffff;
            }
            break;
          }
          iVar10 = (int)plVar11[2];
        } while (iVar10 != -1);
      }
    }
    FUN_144a7fc42(&local_f8);
    *(undefined1 *)(lVar6 + 0x152) = local_111;
  }
  FUN_144958770(param_1 + 0x148,0);
  *(undefined4 *)(param_1 + 0x308) = 0;
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147be7a78 FUN_147be7a78 body=7 status=ok
// SIG undefined FUN_147be7a78(void)

void FUN_147be7a78(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x150) = param_2;
  return;
}



// FUNCTION 147be7a80 FUN_147be7a80 body=134 status=ok
// SIG undefined FUN_147be7a80(void)

undefined8 * FUN_147be7a80(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)(*(longlong *)(param_1 + 0x310) + 0x1b8);
  iVar3 = *(int *)(param_3 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_147bf13f8(plVar6,uVar2,param_3);
  if ((iVar3 == -1) || (lVar4 = (longlong)iVar3 * 0x28 + *plVar6, lVar4 == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = *(undefined8 *)(lVar4 + 0x10);
    lVar4 = *(longlong *)(lVar4 + 0x18);
    param_2[1] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 147be7b06 FUN_147be7b06 body=267 status=ok
// SIG undefined FUN_147be7b06(void)

void FUN_147be7b06(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_3c [4];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x310) + 0x2a8) + 1;
  *(int *)(*(longlong *)(param_1 + 0x310) + 0x2a8) = iVar4;
  *(int *)(*param_3 + 0x10) = iVar4;
  local_38 = *param_3;
  local_30 = (longlong *)(local_38 + 0x10);
  FUN_147bf14c4(*(longlong *)(param_1 + 0x310) + 0x208,&local_48,&local_38,0);
  local_48 = *param_3;
  local_38 = local_48 + 0x10;
  local_30 = &local_48;
  FUN_147bf1672(*(longlong *)(param_1 + 0x310) + 600,local_3c,&local_38,0);
  local_38 = *param_3;
  local_30 = param_3;
  FUN_147bf1b2a(*(longlong *)(param_1 + 0x310) + 0x1b8,&local_48,&local_38,0);
  plVar3 = (longlong *)param_3[1];
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be7c12 FUN_147be7c12 body=229 status=ok
// SIG undefined FUN_147be7c12(void)

void FUN_147be7c12(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(undefined1 *)(*(longlong *)(param_2 + 0x18) + 0x10 + (longlong)param_3 * 0x14) = 1;
  local_10 = (ulonglong)*(uint *)(param_2 + 0x10) << 0x20 | (longlong)param_3;
  lVar1 = *(longlong *)(param_1 + 0x2e8);
  if (*(int *)(lVar1 + 0xa8) != *(int *)(lVar1 + 0xd4)) {
    lVar3 = lVar1 + 0xd8;
    if (*(longlong *)(lVar1 + 0xe0) != 0) {
      lVar3 = *(longlong *)(lVar1 + 0xe0);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar1 + 0xe8) - 1U & (int)(local_10 >> 0x20) * 0x17 + param_3
                             ) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)(lVar1 + 0xa0) + (longlong)iVar2 * 0x10) == local_10)
        goto LAB_147be7c75;
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 0xa0) + 8);
      } while (iVar2 != -1);
    }
  }
  FUN_1403458a2(param_1 + 0x330,local_14,&local_10,0);
LAB_147be7c75:
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147be7cf8 FUN_147be7cf8 body=110 status=ok
// SIG undefined FUN_147be7cf8(void)

void FUN_147be7cf8(longlong param_1,uint param_2)

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
    FUN_140346272(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_14034644e(param_1);
    return;
  }
  FUN_147bee858(param_1);
  FUN_140346272(param_1,param_2);
  return;
}



// FUNCTION 147be7d66 FUN_147be7d66 body=59 status=ok
// SIG undefined FUN_147be7d66(void)

void FUN_147be7d66(longlong param_1,undefined8 param_2)

{
  FUN_147be815c(param_1,param_2,param_1 + 0x330,0);
  FUN_147be7cf8(param_1 + 0x330,0);
  FUN_147be7da2(param_1,param_2);
  return;
}



// FUNCTION 147be7da2 FUN_147be7da2 body=192 status=ok
// SIG undefined FUN_147be7da2(void)

void FUN_147be7da2(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = *(undefined4 *)(param_1 + 0x140);
  (**(code **)(*param_2 + 0x188))(param_2);
  lVar2 = *(longlong *)(param_1 + 0x138);
  uVar1 = 0;
  if ((longlong)*(int *)(param_1 + 0x140) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x140) << 4;
    do {
      FUN_140077068(param_2,lVar2);
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
    uVar1 = *(undefined4 *)(param_1 + 0x140);
    lVar2 = *(longlong *)(param_1 + 0x138);
  }
  FUN_1459ab2e7(lVar2,uVar1);
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(int *)(param_1 + 0x144) != 0) {
    FUN_146b27f1e(param_1 + 0x138,0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be7e64 FUN_147be7e64 body=737 status=ok
// SIG undefined FUN_147be7e64(void)

void FUN_147be7e64(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_138 [40];
  longlong local_110;
  longlong local_108;
  undefined1 local_fc [4];
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  uint local_e0;
  int iStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined2 local_c0;
  longlong local_b8;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(byte *)(param_2 + 0x28) & 4) != 0) {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    lVar4 = *(longlong *)(param_1 + 0x310);
    plVar3 = (longlong *)(lVar4 + 0x1b8);
    local_b0 = lVar4 + 0x1c8;
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    iStack_a4 = 0;
    local_a0 = 0;
    if (*(int *)(lVar4 + 0x1e0) != 0) {
      FUN_1449c0562(&local_b8);
    }
    local_e0 = local_a8;
    iStack_dc = iStack_a4;
    local_d8 = local_a0;
    local_d4 = local_9c;
    local_f0 = local_b8;
    local_e8 = local_b0;
    local_c0 = 0;
    local_f8 = plVar3;
    local_d0 = plVar3;
    local_c8 = plVar3;
    if (iStack_a4 < *(int *)(local_b0 + 0x18)) {
      local_110 = param_2;
      local_108 = param_1;
      do {
        lVar4 = *(longlong *)(*local_f8 + 0x10 + (longlong)iStack_dc * 0x28);
        plVar3 = *(longlong **)(*local_f8 + 0x18 + (longlong)iStack_dc * 0x28);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        if (lVar4 != 0) {
          iVar5 = *(int *)(lVar4 + 0x20);
          if (0 < iVar5) {
            lVar6 = 0x11;
            lVar7 = 0;
            do {
              if ((*(char *)(*(longlong *)(lVar4 + 0x18) + -1 + lVar6) == '\x01') &&
                 (*(char *)(*(longlong *)(lVar4 + 0x18) + lVar6) == '\x01')) {
                local_b8 = ((ulonglong)*(uint *)(lVar4 + 0x10) << 0x20) + lVar7;
                FUN_1403458a2(&local_98,local_fc,&local_b8,0);
                *(undefined1 *)(*(longlong *)(lVar4 + 0x18) + lVar6) = 0;
                iVar5 = *(int *)(lVar4 + 0x20);
              }
              lVar7 = lVar7 + 1;
              lVar6 = lVar6 + 0x14;
            } while (lVar7 < iVar5);
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
        local_e0 = local_e0 & ~local_f0._4_4_;
        FUN_1449c0562(&local_f0);
        param_1 = local_108;
        param_2 = local_110;
      } while (iStack_dc < *(int *)(local_e8 + 0x18));
      if (((local_c0 & 1) != 0) && (local_c0._1_1_ == '\x01')) {
        FUN_147bf1ec4(local_c8,(int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34));
      }
    }
    FUN_147be815c(param_1,param_2,&local_98,1);
    FUN_147be7cf8(param_1 + 0x330,0);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140345f8a(&local_98);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_138);
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    FUN_1435b0440(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be815c FUN_147be815c body=1075 status=ok
// SIG undefined FUN_147be815c(void)

void FUN_147be815c(longlong param_1,longlong *param_2,longlong *param_3,ulonglong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong *local_1c0;
  undefined4 local_1b4;
  int local_1b0;
  uint local_1ac;
  longlong *local_1a8;
  undefined4 local_1a0;
  uint uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
  undefined8 uStack_188;
  uint local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_17c = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  (**(code **)(*param_2 + 0x188))(param_2,&local_17c);
  if (local_17c != 0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0x4000000000;
    if ((int)local_17c < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(local_17c);
    }
    if (0x40 < local_17c) {
      FUN_147bf2518(local_158);
    }
    plVar1 = param_3 + 2;
    local_178 = 0x100000000;
    local_168 = 0xffffffff;
    uStack_160 = 0;
    uStack_170 = plVar1;
    if ((int)param_3[5] == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_178);
      iVar12 = (int)param_3[5];
    }
    uStack_188 = CONCAT44(uStack_15c,uStack_160);
    local_190 = local_168;
    uVar2 = local_190;
    local_1a0 = (undefined4)local_178;
    uStack_19c = local_178._4_4_;
    uStack_198 = (undefined4)uStack_170;
    uStack_194 = uStack_170._4_4_;
    local_190._4_4_ = (int)((ulonglong)local_168 >> 0x20);
    iVar7 = local_190._4_4_;
    local_1c8 = param_1;
    local_1c0 = plVar1;
    local_1a8 = param_3;
    if ((local_190._4_4_ != iVar12) || (local_190 = uVar2, uStack_170 != plVar1)) {
LAB_147be8386:
      local_190 = uVar2;
      uVar2 = *(undefined8 *)(*local_1a8 + (longlong)iVar7 * 0x10);
      local_1ac = (uint)((ulonglong)uVar2 >> 0x20);
      lVar3 = *(longlong *)(param_1 + 0x310);
      if (*(int *)(lVar3 + 0x260) != *(int *)(lVar3 + 0x28c)) {
        lVar11 = lVar3 + 0x290;
        if (*(longlong *)(lVar3 + 0x298) != 0) {
          lVar11 = *(longlong *)(lVar3 + 0x298);
        }
        uVar6 = *(uint *)(lVar11 + (ulonglong)(*(int *)(lVar3 + 0x2a0) - 1U & local_1ac) * 4);
        if (uVar6 != 0xffffffff) {
          do {
            puVar9 = (uint *)(*(longlong *)(lVar3 + 600) + (longlong)(int)uVar6 * 0x18);
            if (*puVar9 == local_1ac) goto LAB_147be83eb;
            uVar6 = puVar9[4];
          } while (uVar6 != 0xffffffff);
        }
      }
      puVar9 = (uint *)0x0;
LAB_147be83eb:
      lVar3 = *(longlong *)(puVar9 + 2);
      if ((param_4 & 1) == 0) {
        bVar4 = true;
        if (*(char *)(lVar3 + 0x28) == '\0') {
          lVar11 = *(longlong *)(local_1c8 + 0x2e8);
          if (*(int *)(lVar11 + 0x58) != *(int *)(lVar11 + 0x84)) {
            lVar10 = lVar11 + 0x88;
            if (*(longlong *)(lVar11 + 0x90) != 0) {
              lVar10 = *(longlong *)(lVar11 + 0x90);
            }
            iVar7 = *(int *)(lVar10 + (ulonglong)(*(int *)(lVar11 + 0x98) - 1U & local_1ac) * 4);
            if (iVar7 != -1) {
              do {
                if (*(uint *)(*(longlong *)(lVar11 + 0x50) + (longlong)iVar7 * 0xc) == local_1ac) {
                  bVar4 = false;
                  goto LAB_147be8331;
                }
                iVar7 = *(int *)(*(longlong *)(lVar11 + 0x50) + (longlong)iVar7 * 0xc + 4);
              } while (iVar7 != -1);
            }
          }
          bVar4 = false;
        }
      }
      else {
        bVar4 = true;
      }
      puVar8 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar8 = local_158;
      }
      local_1b0 = 1;
      if ((longlong)(int)local_50 != 0) {
        lVar11 = 0;
        do {
          if (*(uint *)(puVar8 + lVar11) == local_1ac) goto LAB_147be8331;
          lVar11 = lVar11 + 4;
        } while ((longlong)(int)local_50 * 4 != lVar11);
      }
      goto LAB_147be8478;
    }
LAB_147be8549:
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147be8331:
  local_1b0 = 0;
LAB_147be8478:
  local_178 = uVar2;
  (**(code **)(*param_2 + 0x188))(param_2,&local_1ac);
  (**(code **)(*param_2 + 0x188))(param_2,&local_1b0);
  if (local_1b0 != 0) {
    local_1b4 = *(undefined4 *)(lVar3 + 0x20);
    FUN_14021219d(param_2,lVar3);
    (**(code **)(*param_2 + 0x188))(param_2,&local_1b4);
    uVar5 = local_50;
    lVar11 = (longlong)(int)local_50;
    uVar6 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,uVar6);
    if (local_50._4_4_ < uVar6) {
      FUN_147bf25fa(local_158,uVar5 & 0xffffffff);
    }
    puVar8 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar8 = local_158;
    }
    *(uint *)(puVar8 + lVar11 * 4) = local_1ac;
    if (bVar4) {
      *(undefined1 *)(lVar3 + 0x28) = 0;
    }
  }
  FUN_147be8590(param_2,(longlong)(int)uVar2 * 0x14 + *(longlong *)(lVar3 + 0x18));
  param_1 = local_1c8;
  FUN_144980568(*(longlong *)(local_1c8 + 0x2e8) + 0x50,&local_1b4,&local_1ac);
  FUN_1403458a2(*(longlong *)(param_1 + 0x2e8) + 0xa0,&local_1b4,&local_178);
  local_190 = CONCAT44(local_190._4_4_,(uint)local_190 & ~uStack_19c);
  FUN_1449c0562(&local_1a0);
  iVar7 = local_190._4_4_;
  uVar2 = local_190;
  if (local_1a8 == param_3 &&
      ((longlong *)CONCAT44(uStack_194,uStack_198) == local_1c0 && local_190._4_4_ == iVar12))
  goto LAB_147be8549;
  goto LAB_147be8386;
}



// FUNCTION 147be8590 FUN_147be8590 body=398 status=ok
// SIG undefined FUN_147be8590(void)

longlong * FUN_147be8590(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_29 = *(char *)(param_2 + 0x10);
  puVar2 = (ulonglong *)param_1[1];
  pcVar1 = (char *)*puVar2 + 1;
  if ((char *)puVar2[1] < pcVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_29,1);
  }
  else {
    local_29 = *(char *)*puVar2;
    *puVar2 = (ulonglong)pcVar1;
  }
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 0x10) & 1) == 0) goto LAB_147be8664;
  }
  else {
    *(bool *)(param_2 + 0x10) = local_29 == '\x01';
    if (local_29 != '\x01') goto LAB_147be8664;
  }
  (**(code **)(*param_1 + 0x188))(param_1,param_2);
  puVar3 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 4),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 4) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
    if (uVar4 < 9) {
      local_48[2] = 0;
      local_48[0] = 0;
      local_48[1] = 0;
      (**(code **)(*param_1 + 0x160))(param_1,local_48 + 2);
      FUN_14021219d(param_1,local_48);
      *(longlong *)(param_2 + 8) = local_48[2];
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_147be8664;
    }
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (uVar4 = (**(code **)(*param_1 + 0x48))(param_1), uVar4 < 10)) {
      (**(code **)(*param_1 + 0x160))(param_1,param_2 + 8);
      goto LAB_147be8664;
    }
  }
  FUN_14031d286(param_1,param_2 + 8);
LAB_147be8664:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147be8720 FUN_147be8720 body=109 status=ok
// SIG undefined FUN_147be8720(void)

void FUN_147be8720(longlong *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x48);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1401b0d4a(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 0x40);
    if (*(void **)((longlong)param_2 + 0x40) == (void *)0x0) {
      _Src = param_2;
    }
    memcpy((void *)((longlong)iVar2 * 8 + *param_1),_Src,(longlong)(int)uVar1 << 3);
    return;
  }
  return;
}



// FUNCTION 147be878e FUN_147be878e body=74 status=ok
// SIG undefined FUN_147be878e(void)

void FUN_147be878e(longlong param_1,longlong param_2)

{
  FUN_147bedece(param_2,param_1 + 0x1f8);
  FUN_146b7a2e2(param_2 + 0x50,param_1 + 0x248);
  FUN_147371fc4(param_2 + 0xa0,param_1 + 0x298);
  return;
}



// FUNCTION 147be87d8 FUN_147be87d8 body=96 status=ok
// SIG undefined FUN_147be87d8(void)

void FUN_147be87d8(longlong param_1)

{
  FUN_147bedfc2(param_1 + 0x1f8);
  FUN_1403d43ee(param_1 + 0x248,0);
  FUN_147be7cf8(param_1 + 0x298,0);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(int *)(param_1 + 500) != 0) {
    FUN_1417c3e4a(param_1 + 0x1e8,0);
    return;
  }
  return;
}



// FUNCTION 147be8838 FUN_147be8838 body=338 status=ok
// SIG undefined FUN_147be8838(void)

void FUN_147be8838(longlong param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_60;
  longlong *local_58;
  undefined2 local_50;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_4 = 0;
  *param_3 = 0;
  *param_2 = 0;
  plVar2 = *(longlong **)(param_1 + 0x2e8);
  local_40 = plVar2 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)plVar2[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_70 = local_38;
  iStack_6c = iStack_34;
  local_68 = local_30;
  local_64 = local_2c;
  local_80 = local_48;
  local_78 = local_40;
  local_50 = 0;
  local_88 = plVar2;
  local_60 = plVar2;
  local_58 = plVar2;
  if (iStack_34 < (int)local_40[3]) {
    do {
      iVar1 = *(int *)(*local_88 + 8 + (longlong)iStack_6c * 0x18);
      piVar3 = param_3;
      if ((iVar1 != -2) && (piVar3 = param_2, iVar1 != -1)) {
        piVar3 = param_4;
      }
      *piVar3 = *piVar3 + 1;
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < (int)local_78[3]);
    if (((local_50 & 1) != 0) && (local_50._1_1_ == '\x01')) {
      FUN_147bf1288(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be898c FUN_147be898c body=29 status=ok
// SIG undefined FUN_147be898c(void)

undefined8 FUN_147be898c(longlong param_1,undefined8 param_2)

{
  FUN_14105d7d6(*(undefined8 *)(param_1 + 0x310));
  return param_2;
}



// FUNCTION 147be89aa FUN_147be89aa body=301 status=ok
// SIG undefined FUN_147be89aa(void)

undefined8 FUN_147be89aa(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  lVar5 = *param_2;
  if (lVar5 != 0) {
    while( true ) {
      iVar6 = (int)((ulonglong)lVar5 >> 0x20);
      if (*(int *)(param_1 + 0x1a0) != *(int *)(param_1 + 0x1cc)) {
        lVar3 = *(longlong *)(param_1 + 0x1d8);
        if (*(longlong *)(param_1 + 0x1d8) == 0) {
          lVar3 = param_1 + 0x1d0;
        }
        iVar7 = *(int *)(lVar3 + (ulonglong)
                                 (*(int *)(param_1 + 0x1e0) - 1U & (int)lVar5 + iVar6 * 0x17) * 4);
        if (iVar7 != -1) {
          lVar3 = *(longlong *)(param_1 + 0x198);
          do {
            if (*(longlong *)(lVar3 + (longlong)iVar7 * 0x18) == lVar5) goto LAB_147be8ad3;
            iVar7 = *(int *)(lVar3 + (longlong)iVar7 * 0x18 + 0x10);
          } while (iVar7 != -1);
        }
      }
      plVar2 = *(longlong **)(param_1 + 0x310);
      if ((int)plVar2[1] == *(int *)((longlong)plVar2 + 0x34)) break;
      plVar4 = plVar2 + 7;
      if ((longlong *)plVar2[8] != (longlong *)0x0) {
        plVar4 = (longlong *)plVar2[8];
      }
      iVar6 = *(int *)((longlong)plVar4 +
                      (ulonglong)((int)plVar2[9] - 1U & (int)lVar5 + iVar6 * 0x17) * 4);
      if (iVar6 == -1) {
        return 0;
      }
      while (lVar1 = *plVar2 + (longlong)iVar6 * 0x40,
            *(longlong *)(*plVar2 + (longlong)iVar6 * 0x40) != lVar5) {
        iVar6 = *(int *)(lVar1 + 0x38);
        if (iVar6 == -1) {
          return 0;
        }
      }
      lVar3 = 0;
      if (lVar1 == 0) {
        return 0;
      }
      if (lVar1 == -8) {
        return 0;
      }
      if ((*(byte *)(lVar1 + 0x30) & 4) != 0) {
LAB_147be8ad3:
        return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
      }
      lVar5 = *(longlong *)(lVar1 + 0x10);
      if (lVar5 == 0) {
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 147be8ad8 FUN_147be8ad8 body=302 status=ok
// SIG undefined FUN_147be8ad8(void)

void FUN_147be8ad8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 8) * 0x18,(longlong)*(int *)(param_1 + 0xc) * 0x18
            );
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x28) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  lVar1 = (longlong)*(int *)(param_1 + 0x48) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x58) * 0xc,
             (longlong)*(int *)(param_1 + 0x5c) * 0xc);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x78) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x7c) + 0x1fU >> 3 & 0xfffffffc);
  lVar1 = (longlong)*(int *)(param_1 + 0x98) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0xa8) << 4,(longlong)*(int *)(param_1 + 0xac) << 4
            );
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 200) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0xcc) + 0x1fU >> 3 & 0xfffffffc);
  lVar1 = (longlong)*(int *)(param_1 + 0xe8) << 2;
                    /* WARNING: Could not recover jumptable at 0x000147be8c03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
  return;
}



// FUNCTION 147be8c06 FUN_147be8c06 body=232 status=ok
// SIG undefined FUN_147be8c06(void)

longlong *
FUN_147be8c06(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong **)(param_1 + 0x148) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x148) + 0x3c0))();
    if (cVar1 == '\0') {
      *param_2 = 1;
      goto LAB_147be8cbe;
    }
  }
  FUN_140574f3e(param_1,local_40,param_4,0);
  lVar2 = *(longlong *)(param_1 + 0x160);
  *(longlong *)(param_1 + 0x160) = lVar2 + 1;
  *param_2 = lVar2 * 2 + 3;
  lVar2 = FUN_140575224(*(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x1c8),param_5);
  local_58 = *(undefined4 *)(lVar2 + 0x18);
  local_48 = 1;
  local_50 = 1;
  FUN_1435b20b6(param_1,param_2,param_3,local_40);
LAB_147be8cbe:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be8cf0 FUN_147be8cf0 body=34 status=ok
// SIG undefined FUN_147be8cf0(void)

undefined8 * FUN_147be8cf0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1435b2c3e(0,param_3,param_2);
  return param_2;
}



// FUNCTION 147be8d12 FUN_147be8d12 body=122 status=ok
// SIG undefined FUN_147be8d12(void)

void FUN_147be8d12(longlong param_1)

{
  FUN_147bf41b8();
  FUN_147bf4340(param_1 + 0x50);
  if (*(int *)(param_1 + 0x1c0) != *(int *)(param_1 + 0x1ec)) {
    FUN_147bf20e6(param_1 + 0x1b8);
    FUN_147bf222a(param_1 + 0x1b8);
  }
  FUN_147bf2342(param_1 + 600);
  if (*(int *)(param_1 + 0x210) == *(int *)(param_1 + 0x23c)) {
    return;
  }
  FUN_146b184c0(param_1 + 0x208);
  FUN_146b18604(param_1 + 0x208);
  return;
}



// FUNCTION 147be8d8c FUN_147be8d8c body=2006 status=ok
// SIG undefined FUN_147be8d8c(void)

void FUN_147be8d8c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
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
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 8) << 6,(longlong)*(int *)(param_1 + 0xc) << 6);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x28) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  lVar2 = (longlong)*(int *)(param_1 + 0x48) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x58) * 0x18,
             (longlong)*(int *)(param_1 + 0x5c) * 0x18);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x78) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x7c) + 0x1fU >> 3 & 0xfffffffc);
  lVar2 = (longlong)*(int *)(param_1 + 0x98) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0xb0) << 4,(longlong)*(int *)(param_1 + 0xb4) << 4
            );
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0xd0) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0xd4) + 0x1fU >> 3 & 0xfffffffc);
  lVar2 = (longlong)*(int *)(param_1 + 0xf0) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
  plVar1 = (longlong *)(param_1 + 0xf8);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x100) * 0x60,
             (longlong)*(int *)(param_1 + 0x104) * 0x60);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x120) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x124) + 0x1fU >> 3 & 0xfffffffc);
  lVar2 = (longlong)*(int *)(param_1 + 0x140) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
  lVar2 = param_1 + 0x108;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x120) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar4 = *(int *)(param_1 + 0x120);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar4) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *local_90;
      lVar5 = (longlong)iStack_74 * 0x60;
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(lVar3 + 0x10 + lVar5) << 4,
                 (longlong)*(int *)(lVar3 + 0x14 + lVar5) << 4);
      (**(code **)(*param_2 + 0x10))
                (param_2,*(int *)(lVar3 + 0x30 + lVar5) + 0x1fU >> 3 & 0xfffffffc,
                 *(int *)(lVar3 + 0x34 + lVar5) + 0x1fU >> 3 & 0xfffffffc);
      lVar3 = (longlong)*(int *)(lVar3 + 0x50 + lVar5) << 2;
      (**(code **)(*param_2 + 0x10))(param_2,lVar3,lVar3);
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar4));
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x170) * 0x18,
             (longlong)*(int *)(param_1 + 0x174) * 0x18);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 400) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x194) + 0x1fU >> 3 & 0xfffffffc);
  lVar2 = (longlong)*(int *)(param_1 + 0x1b0) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
  plVar1 = (longlong *)(param_1 + 0x1b8);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x1c0) * 0x28,
             (longlong)*(int *)(param_1 + 0x1c4) * 0x28);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x1e0) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x1e4) + 0x1fU >> 3 & 0xfffffffc);
  lVar2 = (longlong)*(int *)(param_1 + 0x200) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
  lVar2 = param_1 + 0x1c8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x1e0) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar4 = *(int *)(param_1 + 0x1e0);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar4) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *local_90;
      lVar5 = (longlong)iStack_74;
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(lVar3 + 8 + lVar5 * 0x28) * 2,
                 (longlong)*(int *)(lVar3 + 0xc + lVar5 * 0x28) * 2);
      lVar3 = *(longlong *)(lVar3 + 0x10 + lVar5 * 0x28);
      if (lVar3 != 0) {
        (**(code **)(*param_2 + 0x10))(param_2,0x30,0x30);
        FUN_147be9564(lVar3,param_2);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar4));
  }
  plVar1 = (longlong *)(param_1 + 0x208);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x210) << 5,
             (longlong)*(int *)(param_1 + 0x214) << 5);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x230) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x234) + 0x1fU >> 3 & 0xfffffffc);
  lVar2 = (longlong)*(int *)(param_1 + 0x250) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
  lVar2 = param_1 + 0x218;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x230) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar4 = *(int *)(param_1 + 0x230);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar4) || (uStack_60 != lVar2)) {
    do {
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(*local_90 + 8 + (longlong)iStack_74 * 0x20) * 2,
                 (longlong)*(int *)(*local_90 + 0xc + (longlong)iStack_74 * 0x20) * 2);
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar4));
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x260) * 0x18,
             (longlong)*(int *)(param_1 + 0x264) * 0x18);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x280) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x284) + 0x1fU >> 3 & 0xfffffffc);
  lVar2 = (longlong)*(int *)(param_1 + 0x2a0) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
  FUN_147bdac80(param_1 + 0x310,param_2);
  plVar1 = (longlong *)(param_1 + 0x380);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x388) << 5,
             (longlong)*(int *)(param_1 + 0x38c) << 5);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x3a8) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x3ac) + 0x1fU >> 3 & 0xfffffffc);
  lVar2 = (longlong)*(int *)(param_1 + 0x3c8) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
  lVar2 = param_1 + 0x390;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x3a8) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar4 = *(int *)(param_1 + 0x3a8);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar4) || (uStack_60 != lVar2)) {
    do {
      if ((*(longlong *)(*local_90 + 8 + (longlong)iStack_74 * 0x20) != 0) &&
         ((lVar3 = *(longlong *)((longlong)iStack_74 * 0x20 + *local_90 + 0x10), lVar3 != 0 &&
          (0 < *(int *)(lVar3 + 8))))) {
        (**(code **)(*param_2 + 0x10))(param_2,0x10,0x10);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar4));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147be9564 FUN_147be9564 body=78 status=ok
// SIG undefined FUN_147be9564(void)

void FUN_147be9564(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 8) * 2,(longlong)*(int *)(param_1 + 0xc) * 2);
                    /* WARNING: Could not recover jumptable at 0x000147be95af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x20) * 0x14,
             (longlong)*(int *)(param_1 + 0x24) * 0x14);
  return;
}



// FUNCTION 147be95b2 FUN_147be95b2 body=66 status=ok
// SIG undefined FUN_147be95b2(void)

void FUN_147be95b2(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_14747c382(param_1,iVar1);
  }
  FUN_14747c364((longlong)iVar1 * 0x14 + *param_1,param_2);
  return;
}



// FUNCTION 147be95f4 FUN_147be95f4 body=534 status=ok
// SIG undefined FUN_147be95f4(void)

longlong * FUN_147be95f4(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_3;
  if (*(int *)(param_1 + 0x388) != *(int *)(param_1 + 0x3b4)) {
    lVar7 = param_1 + 0x3b8;
    if (*(longlong *)(param_1 + 0x3c0) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x3c0);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x3c8) - 1U &
                             (int)param_3 + (int)((ulonglong)param_3 >> 0x20) * 0x17) * 4);
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(param_1 + 0x380);
      do {
        lVar3 = lVar7 + (longlong)iVar6 * 0x20;
        if (*(longlong *)(lVar7 + (longlong)iVar6 * 0x20) == param_3) {
          if (((lVar3 != 0) && ((longlong *)(lVar3 + 8) != (longlong *)0x0)) &&
             (plVar5 = *(longlong **)(lVar3 + 0x10), plVar5 != (longlong *)0x0)) {
            iVar6 = (int)plVar5[1];
            goto LAB_147be9768;
          }
          break;
        }
        iVar6 = *(int *)(lVar3 + 0x18);
      } while (iVar6 != -1);
    }
  }
  goto LAB_147be9686;
  while( true ) {
    LOCK();
    iVar4 = (int)plVar5[1];
    bVar8 = iVar6 == iVar4;
    if (bVar8) {
      *(int *)(plVar5 + 1) = iVar6 + 1;
      iVar4 = iVar6;
    }
    iVar6 = iVar4;
    UNLOCK();
    if (bVar8) break;
LAB_147be9768:
    if (iVar6 == 0) goto LAB_147be9686;
  }
  lVar7 = *(longlong *)(lVar3 + 8);
  if (lVar7 != 0) {
    *param_2 = lVar7;
    param_2[1] = (longlong)plVar5;
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
      }
    }
    goto LAB_147be97bd;
  }
  LOCK();
  plVar2 = plVar5 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_147be9686:
  plVar5 = (longlong *)FUN_14001cc68(0x10,0x10);
  *plVar5 = local_48;
  plVar5[1] = param_4;
  if ((param_4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_4);
  }
  *param_2 = (longlong)plVar5;
  local_50 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_50[1] = (longlong)&DAT_100000001;
  *local_50 = (longlong)&PTR_LAB_14a9fccd0;
  local_50[2] = (longlong)plVar5;
  param_2[1] = (longlong)local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_50 + 0xc) = *(int *)((longlong)local_50 + 0xc) + 1;
    UNLOCK();
  }
  local_40 = &local_48;
  local_38 = &local_58;
  local_58 = plVar5;
  FUN_147bf47c0((longlong *)(param_1 + 0x380),local_2c);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
LAB_147be97bd:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147be980e FUN_147be980e body=1719 status=ok
// SIG undefined FUN_147be980e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147be980e(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  byte *pbVar3;
  longlong lVar4;
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
  ulonglong uVar21;
  longlong lVar22;
  undefined1 *puVar23;
  undefined4 uVar24;
  undefined4 uVar26;
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  longlong lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 in_XMM4 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar40 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar41 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar42 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar43 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar44 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar45 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 auVar46 [16];
  undefined1 unaff_XMM13 [16];
  undefined1 auVar47 [16];
  undefined1 auStack_148 [40];
  longlong *local_120;
  undefined8 local_118;
  longlong *local_110;
  uint local_108;
  int iStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  longlong *local_f8;
  longlong *local_f0;
  undefined2 local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  uint local_d0;
  int iStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_d8 = param_1 + 2;
  local_e0 = 0x100000000;
  local_d0 = 0xffffffff;
  iStack_cc = 0;
  local_c8 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_e0);
  }
  local_108 = local_d0;
  iStack_104 = iStack_cc;
  local_100 = local_c8;
  local_fc = local_c4;
  local_118 = local_e0;
  local_110 = local_d8;
  local_e8 = 0;
  local_120 = param_1;
  local_f8 = param_1;
  local_f0 = param_1;
  if (iStack_cc < (int)local_d8[3]) {
    do {
      pbVar3 = (byte *)(*local_120 + 0x30 + (longlong)iStack_104 * 0x40);
      *pbVar3 = *pbVar3 | 0x10;
      local_108 = local_108 & ~local_118._4_4_;
      FUN_1449c0562(&local_118);
    } while (iStack_104 < (int)local_110[3]);
    if (((local_e8 & 1) != 0) && (local_e8._1_1_ == '\x01')) {
      FUN_147bf32bc(local_f0,(int)local_f0[1] - *(int *)((longlong)local_f0 + 0x34));
    }
  }
  plVar1 = param_1 + 0x37;
  local_d8 = param_1 + 0x39;
  local_e0 = 0x100000000;
  local_d0 = 0xffffffff;
  iStack_cc = 0;
  local_c8 = 0;
  if ((int)param_1[0x3c] != 0) {
    FUN_1449c0562(&local_e0);
  }
  auVar20 = _DAT_149931e80;
  local_108 = local_d0;
  iStack_104 = iStack_cc;
  local_100 = local_c8;
  local_fc = local_c4;
  local_118 = local_e0;
  local_110 = local_d8;
  local_e8 = 0;
  local_120 = plVar1;
  local_f8 = plVar1;
  local_f0 = plVar1;
  if (iStack_cc < (int)local_d8[3]) {
    auVar40 = pmovsxbq(unaff_XMM6,0xf0e);
    auVar41 = pmovsxbq(unaff_XMM7,0xd0c);
    auVar42 = pmovsxbq(unaff_XMM8,0xb0a);
    auVar43 = pmovsxbq(unaff_XMM9,0x908);
    auVar44 = pmovsxbq(unaff_XMM10,0x706);
    auVar45 = pmovsxbq(unaff_XMM11,0x504);
    auVar46 = pmovsxbq(unaff_XMM12,0x302);
    auVar47 = pmovsxbq(unaff_XMM13,0x100);
    do {
      lVar4 = *local_120;
      lVar22 = *(longlong *)(lVar4 + 0x10 + (longlong)iStack_104 * 0x28);
      if (lVar22 != 0) {
        if ((longlong)*(int *)(lVar22 + 0x20) != 0) {
          uVar2 = (longlong)*(int *)(lVar22 + 0x20) * 0x14 - 0x14;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar2;
          uVar24 = SUB164(auVar29 * ZEXT816(0xcccccccccccccccd),8);
          uVar26 = (undefined4)(uVar2 / 0x140000000);
          auVar31._0_8_ = CONCAT44(uVar26,uVar24);
          auVar31._8_4_ = uVar24;
          auVar31._12_4_ = uVar26;
          auVar25._0_8_ = auVar31._0_8_ >> 4;
          auVar25._8_8_ = auVar31._8_8_ >> 4;
          puVar23 = (undefined1 *)(*(longlong *)(lVar22 + 0x18) + 0x13d);
          uVar21 = 0;
          do {
            auVar27._8_4_ = (int)uVar21;
            auVar27._0_8_ = uVar21;
            auVar27._12_4_ = (int)(uVar21 >> 0x20);
            auVar29 = auVar25 | auVar20;
            auVar31 = (auVar27 | auVar47) ^ auVar20;
            lVar22 = auVar29._0_8_;
            auVar32._0_8_ = -(ulonglong)(lVar22 < auVar31._0_8_);
            lVar30 = auVar29._8_8_;
            auVar32._8_8_ = -(ulonglong)(lVar30 < auVar31._8_8_);
            auVar31 = pshuflw(in_XMM4,auVar32,0xe8);
            auVar33._8_4_ = 0xffffffff;
            auVar33._0_8_ = 0xffffffffffffffff;
            auVar33._12_4_ = 0xffffffff;
            auVar31 = packssdw(auVar31 ^ auVar33,auVar31 ^ auVar33);
            if ((auVar31._0_4_ & 1) != 0) {
              puVar23[-300] = 1;
            }
            auVar33 = packssdw(auVar32,auVar32);
            auVar5._8_4_ = 0xffffffff;
            auVar5._0_8_ = 0xffffffffffffffff;
            auVar5._12_4_ = 0xffffffff;
            auVar33 = packssdw(auVar33 ^ auVar5,auVar33 ^ auVar5);
            auVar33 = packsswb(auVar33,auVar33);
            if ((auVar33[1] & 1) != 0) {
              puVar23[-0x118] = 1;
            }
            auVar33 = (auVar27 | auVar46) ^ auVar20;
            auVar34._0_8_ = -(ulonglong)(lVar22 < auVar33._0_8_);
            auVar34._8_8_ = -(ulonglong)(lVar30 < auVar33._8_8_);
            auVar31 = packssdw(auVar31,auVar34);
            auVar6._8_4_ = 0xffffffff;
            auVar6._0_8_ = 0xffffffffffffffff;
            auVar6._12_4_ = 0xffffffff;
            auVar31 = packssdw(auVar31 ^ auVar6,auVar31 ^ auVar6);
            auVar31 = packsswb(auVar31,auVar31);
            if ((auVar31[2] & 1) != 0) {
              puVar23[-0x104] = 1;
            }
            auVar33 = pshufhw(auVar34,auVar34,0x84);
            auVar7._8_4_ = 0xffffffff;
            auVar7._0_8_ = 0xffffffffffffffff;
            auVar7._12_4_ = 0xffffffff;
            auVar33 = packssdw(auVar33 ^ auVar7,auVar33 ^ auVar7);
            auVar33 = packsswb(auVar33,auVar33);
            if ((auVar33[3] & 1) != 0) {
              puVar23[-0xf0] = 1;
            }
            auVar33 = (auVar27 | auVar45) ^ auVar20;
            auVar35._0_8_ = -(ulonglong)(lVar22 < auVar33._0_8_);
            auVar35._8_8_ = -(ulonglong)(lVar30 < auVar33._8_8_);
            auVar31 = pshuflw(auVar31,auVar35,0xe8);
            auVar8._8_4_ = 0xffffffff;
            auVar8._0_8_ = 0xffffffffffffffff;
            auVar8._12_4_ = 0xffffffff;
            auVar31 = packssdw(auVar31 ^ auVar8,auVar31 ^ auVar8);
            auVar31 = packsswb(auVar31,auVar31);
            if ((auVar31[4] & 1) != 0) {
              puVar23[-0xdc] = 1;
            }
            auVar33 = packssdw(auVar35,auVar35);
            auVar9._8_4_ = 0xffffffff;
            auVar9._0_8_ = 0xffffffffffffffff;
            auVar9._12_4_ = 0xffffffff;
            auVar33 = packssdw(auVar33 ^ auVar9,auVar33 ^ auVar9);
            auVar33 = packsswb(auVar33,auVar33);
            if ((auVar33[5] & 1) != 0) {
              puVar23[-200] = 1;
            }
            auVar33 = (auVar27 | auVar44) ^ auVar20;
            auVar36._0_8_ = -(ulonglong)(lVar22 < auVar33._0_8_);
            auVar36._8_8_ = -(ulonglong)(lVar30 < auVar33._8_8_);
            auVar31 = packssdw(auVar31,auVar36);
            auVar10._8_4_ = 0xffffffff;
            auVar10._0_8_ = 0xffffffffffffffff;
            auVar10._12_4_ = 0xffffffff;
            auVar31 = packssdw(auVar31 ^ auVar10,auVar31 ^ auVar10);
            auVar31 = packsswb(auVar31,auVar31);
            if ((auVar31[6] & 1) != 0) {
              puVar23[-0xb4] = 1;
            }
            auVar33 = pshufhw(auVar36,auVar36,0x84);
            auVar11._8_4_ = 0xffffffff;
            auVar11._0_8_ = 0xffffffffffffffff;
            auVar11._12_4_ = 0xffffffff;
            auVar33 = packssdw(auVar33 ^ auVar11,auVar33 ^ auVar11);
            auVar33 = packsswb(auVar33,auVar33);
            if ((auVar33[7] & 1) != 0) {
              puVar23[-0xa0] = 1;
            }
            auVar33 = (auVar27 | auVar43) ^ auVar20;
            auVar37._0_8_ = -(ulonglong)(lVar22 < auVar33._0_8_);
            auVar37._8_8_ = -(ulonglong)(lVar30 < auVar33._8_8_);
            auVar31 = pshuflw(auVar31,auVar37,0xe8);
            auVar12._8_4_ = 0xffffffff;
            auVar12._0_8_ = 0xffffffffffffffff;
            auVar12._12_4_ = 0xffffffff;
            auVar31 = packssdw(auVar31 ^ auVar12,auVar31 ^ auVar12);
            auVar31 = packsswb(auVar31,auVar31);
            if ((auVar31[8] & 1) != 0) {
              puVar23[-0x8c] = 1;
            }
            auVar33 = packssdw(auVar37,auVar37);
            auVar13._8_4_ = 0xffffffff;
            auVar13._0_8_ = 0xffffffffffffffff;
            auVar13._12_4_ = 0xffffffff;
            auVar33 = packssdw(auVar33 ^ auVar13,auVar33 ^ auVar13);
            auVar33 = packsswb(auVar33,auVar33);
            if ((auVar33[9] & 1) != 0) {
              puVar23[-0x78] = 1;
            }
            auVar33 = (auVar27 | auVar42) ^ auVar20;
            auVar38._0_8_ = -(ulonglong)(lVar22 < auVar33._0_8_);
            auVar38._8_8_ = -(ulonglong)(lVar30 < auVar33._8_8_);
            auVar31 = packssdw(auVar31,auVar38);
            auVar14._8_4_ = 0xffffffff;
            auVar14._0_8_ = 0xffffffffffffffff;
            auVar14._12_4_ = 0xffffffff;
            auVar31 = packssdw(auVar31 ^ auVar14,auVar31 ^ auVar14);
            auVar31 = packsswb(auVar31,auVar31);
            if ((auVar31[10] & 1) != 0) {
              puVar23[-100] = 1;
            }
            auVar33 = pshufhw(auVar38,auVar38,0x84);
            auVar15._8_4_ = 0xffffffff;
            auVar15._0_8_ = 0xffffffffffffffff;
            auVar15._12_4_ = 0xffffffff;
            auVar33 = packssdw(auVar33 ^ auVar15,auVar33 ^ auVar15);
            auVar33 = packsswb(auVar33,auVar33);
            if ((auVar33[0xb] & 1) != 0) {
              puVar23[-0x50] = 1;
            }
            auVar33 = (auVar27 | auVar41) ^ auVar20;
            auVar39._0_8_ = -(ulonglong)(lVar22 < auVar33._0_8_);
            auVar39._8_8_ = -(ulonglong)(lVar30 < auVar33._8_8_);
            auVar31 = pshuflw(auVar31,auVar39,0xe8);
            auVar16._8_4_ = 0xffffffff;
            auVar16._0_8_ = 0xffffffffffffffff;
            auVar16._12_4_ = 0xffffffff;
            auVar31 = packssdw(auVar31 ^ auVar16,auVar31 ^ auVar16);
            in_XMM4 = packsswb(auVar31,auVar31);
            if ((in_XMM4[0xc] & 1) != 0) {
              puVar23[-0x3c] = 1;
            }
            auVar31 = packssdw(auVar39,auVar39);
            auVar17._8_4_ = 0xffffffff;
            auVar17._0_8_ = 0xffffffffffffffff;
            auVar17._12_4_ = 0xffffffff;
            auVar31 = packssdw(auVar31 ^ auVar17,auVar31 ^ auVar17);
            auVar31 = packsswb(auVar31,auVar31);
            if ((auVar31[0xd] & 1) != 0) {
              puVar23[-0x28] = 1;
            }
            auVar31 = (auVar27 | auVar40) ^ auVar20;
            auVar28._0_8_ = -(ulonglong)(lVar22 < auVar31._0_8_);
            auVar28._8_8_ = -(ulonglong)(lVar30 < auVar31._8_8_);
            auVar29 = packssdw(auVar29,auVar28);
            auVar18._8_4_ = 0xffffffff;
            auVar18._0_8_ = 0xffffffffffffffff;
            auVar18._12_4_ = 0xffffffff;
            auVar29 = packssdw(auVar29 ^ auVar18,auVar29 ^ auVar18);
            auVar29 = packsswb(auVar29,auVar29);
            if ((auVar29[0xe] & 1) != 0) {
              puVar23[-0x14] = 1;
            }
            auVar29 = pshufhw(auVar28,auVar28,0x84);
            auVar19._8_4_ = 0xffffffff;
            auVar19._0_8_ = 0xffffffffffffffff;
            auVar19._12_4_ = 0xffffffff;
            auVar29 = packssdw(auVar29 ^ auVar19,auVar29 ^ auVar19);
            auVar29 = packsswb(auVar29,auVar29);
            if ((auVar29[0xf] & 1) != 0) {
              *puVar23 = 1;
            }
            uVar21 = uVar21 + 0x10;
            puVar23 = puVar23 + 0x140;
          } while ((uVar2 / 0x14 + 0x10 & 0xfffffffffffffff0) != uVar21);
          lVar22 = *(longlong *)(lVar4 + (longlong)iStack_104 * 0x28 + 0x10);
        }
        *(undefined1 *)(lVar22 + 0x28) = 1;
      }
      local_108 = local_108 & ~local_118._4_4_;
      FUN_1449c0562(&local_118);
    } while (iStack_104 < (int)local_110[3]);
    if (((local_e8 & 1) != 0) && (local_e8._1_1_ == '\x01')) {
      FUN_147bf1ec4(local_f0,(int)local_f0[1] - *(int *)((longlong)local_f0 + 0x34));
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be9eca FUN_147be9eca body=117 status=ok
// SIG undefined FUN_147be9eca(void)

void FUN_147be9eca(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cc08);
  FUN_1402d084a(param_1,plVar1);
  FUN_140528391(plVar1,param_1 + 0x3d8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be9f44 FUN_147be9f44 body=72 status=ok
// SIG undefined FUN_147be9f44(void)

void FUN_147be9f44(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  bool bVar3;
  
  FUN_147079b30();
  lVar2 = 0;
  bVar1 = true;
  do {
    bVar3 = bVar1;
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x38 + lVar2 * 0x10),
               (longlong)*(int *)(param_1 + 0x3c + lVar2 * 0x10));
    lVar2 = 1;
    bVar1 = false;
  } while (bVar3);
  return;
}



// FUNCTION 147be9f8c FUN_147be9f8c body=196 status=ok
// SIG undefined FUN_147be9f8c(void)

void FUN_147be9f8c(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_100;
  undefined1 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [184];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1447400e4(local_d8,(longlong)
                           (int)(*(int *)(param_1 + 0x150) + (uint)(2 < *(byte *)(param_2 + 2)) * 5
                                + 0xd3),0);
    local_100 = param_2[3];
    local_108 = *(undefined1 *)(param_1 + 0x15c);
    local_f8 = 0;
    FUN_14607d73a(param_1,local_d8,6,*(undefined1 *)(param_2 + 2));
    local_e8 = *param_2;
    uStack_e4 = param_2[1];
    uStack_e0 = param_2[2];
    uStack_dc = param_2[3];
    FUN_1463ee42c(param_1,&local_e8,local_d8);
    FUN_144a8b786(local_d8);
  }
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bea052 FUN_147bea052 body=163 status=ok
// SIG undefined FUN_147bea052(void)

void FUN_147bea052(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  lVar4 = *(longlong *)(param_2 + 0x70);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  *(longlong *)(param_1 + 0x70) = lVar4;
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
  *(undefined1 *)(param_1 + 0x15d) = *(undefined1 *)(param_2 + 0x15d);
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164);
  uVar3 = *(undefined8 *)(param_2 + 0x125);
  *(undefined8 *)(param_1 + 0x11d) = *(undefined8 *)(param_2 + 0x11d);
  *(undefined8 *)(param_1 + 0x125) = uVar3;
  *(undefined4 *)(param_1 + 0x12d) = *(undefined4 *)(param_2 + 0x12d);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x300);
    uVar6 = (undefined4)uVar3;
    uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  *(ulonglong *)(param_1 + 0x60) = CONCAT44(uVar7,uVar6);
  return;
}



// FUNCTION 147bea0f6 FUN_147bea0f6 body=1114 status=ok
// SIG undefined FUN_147bea0f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147bea0f6(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_68 [37];
  undefined1 local_43;
  byte local_42;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = param_2[0x15];
  iVar10 = (int)param_2[0x14] - (uint)uVar4;
  if ((_DAT_14c761650 == 0) && (((iVar10 == 1 || (iVar10 == 0x182)) || (iVar10 == 0xe2)))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
  }
  if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
    if (param_2[0x14] <= (longlong)uVar4) {
      FUN_1405d09b8(param_2,1);
      goto LAB_147bea4b2;
    }
    bVar11 = (*(byte *)(param_2[0x12] + (longlong)(int)(uVar4 >> 3)) >> ((uint)uVar4 & 7) & 1) != 0;
    param_2[0x15] = uVar4 + 1;
  }
  else {
LAB_147bea4b2:
    bVar11 = false;
  }
  param_3[0xc] = bVar11;
  local_41 = 0;
  local_42 = 0;
  local_43 = 0;
  puVar5 = (ulonglong *)param_2[1];
  puVar1 = (undefined1 *)*puVar5 + 1;
  if ((undefined1 *)puVar5[1] < puVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_41,1);
  }
  else {
    local_41 = *(undefined1 *)*puVar5;
    *puVar5 = (ulonglong)puVar1;
  }
  puVar5 = (ulonglong *)param_2[1];
  pbVar2 = (byte *)*puVar5 + 1;
  if ((byte *)puVar5[1] < pbVar2) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_42,1);
  }
  else {
    local_42 = *(byte *)*puVar5;
    *puVar5 = (ulonglong)pbVar2;
  }
  puVar5 = (ulonglong *)param_2[1];
  puVar1 = (undefined1 *)*puVar5 + 1;
  if ((undefined1 *)puVar5[1] < puVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_43,1);
  }
  else {
    local_43 = *(undefined1 *)*puVar5;
    *puVar5 = (ulonglong)puVar1;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_3 + 0xb,1);
  }
  else {
    param_3[0xb] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  *param_3 = local_41;
  param_3[1] = local_42;
  param_3[10] = local_43;
  if (1 < local_42) {
    puVar6 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar6 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_3 + 4,4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_3 + 4) = *puVar6;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar7 = *(undefined2 **)param_2[1];
    if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar7 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_3 + 8,2);
      }
      else {
        thunk_FUN_1457251a8(param_2);
      }
    }
    else {
      *(undefined2 *)(param_3 + 8) = *puVar7;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
    }
  }
  bVar11 = iVar10 - 0x1e2U < 0x71;
  bVar3 = param_3[10];
  if (bVar3 < 4 && iVar10 - 0x142U < 0x71 || bVar3 == 5 && bVar11) {
    if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
      uVar4 = param_2[0x15];
      if (param_2[0x14] <= (longlong)uVar4) {
        FUN_1405d09b8(param_2,1);
        goto LAB_147bea504;
      }
      bVar12 = (*(byte *)(param_2[0x12] + (longlong)(int)(uVar4 >> 3)) >> ((uint)uVar4 & 7) & 1) !=
               0;
      param_2[0x15] = uVar4 + 1;
    }
    else {
LAB_147bea504:
      bVar12 = false;
    }
    param_3[0xd] = bVar12;
    puVar8 = *(undefined8 **)param_2[1];
    if ((undefined8 *)((longlong *)param_2[1])[1] < puVar8 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_3 + 0x10,8);
      }
      else {
        FUN_146821949(param_2);
      }
    }
    else {
      *(undefined8 *)(param_3 + 0x10) = *puVar8;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
    }
    (**(code **)(*param_2 + 0x170))(param_2,param_3 + 0x18,0x14);
    if (bVar3 == 5 && bVar11) {
      (**(code **)(*param_2 + 0x170))(param_2,param_3 + 0x2c,0x14);
    }
    if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
LAB_147bea3b9:
      param_2[0x15] = param_2[0x14];
      uVar9 = CONCAT71((int7)((ulonglong)param_2[0x14] >> 8),1);
      goto LAB_147bea3c9;
    }
  }
  else if (bVar3 == 4 && iVar10 - 0x61U < 0x71) {
    if (((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) && (param_3[0xc] == '\x01')) {
LAB_147bea559:
      if (**(char **)(param_1 + 8) != '\0') goto LAB_147bea566;
      goto LAB_147bea3b9;
    }
  }
  else if (((iVar10 - 0x91U < 0x41 && bVar3 == 6) &&
           ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0)) && (param_3[0xc] == '\0'))
  goto LAB_147bea559;
LAB_147bea566:
  uVar9 = 0;
LAB_147bea3c9:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 147bea7d2 FUN_147bea7d2 body=46 status=ok
// SIG undefined FUN_147bea7d2(void)

void FUN_147bea7d2(longlong param_1)

{
  FUN_140e20e42();
  *(uint *)(param_1 + 0x3ec) =
       (*(uint *)(param_1 + 0x3ec) & 0xfffffffd) + (*(uint *)(param_1 + 0x3d8) & 1) * 2;
  return;
}



// FUNCTION 147bea800 FUN_147bea800 body=73 status=ok
// SIG undefined FUN_147bea800(void)

void FUN_147bea800(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  FUN_140691c10();
  uVar1 = FUN_1401b4c98(param_1);
  puVar3 = (undefined8 *)(param_1 + 0x3f8);
  lVar2 = FUN_144a61814(uVar1,puVar3);
  if (lVar2 != 0) {
    FUN_1405a424c(uVar1,*puVar3);
  }
  *puVar3 = 0;
  return;
}



// FUNCTION 147bea870 FUN_147bea870 body=455 status=ok
// SIG undefined FUN_147bea870(void)

void FUN_147bea870(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140aeef6a();
  if ((((*(byte *)(param_1 + 0x7b) & 1) != 0) && ((*(byte *)((longlong)param_1 + 0x3ec) & 1) != 0))
     && ((*(byte *)(param_2 + 0x62) & 4) != 0)) {
    (**(code **)(*param_1 + 0x690))(param_1,param_2);
  }
  uVar3 = FUN_1401b4c98(param_1);
  local_98 = param_1[0x7f];
  lVar4 = FUN_144a61814(uVar3);
  if ((lVar4 == 0) || (*(char *)(lVar4 + 1) == '\x02')) {
    uVar3 = FUN_1401b4c98(param_1);
    lVar4 = param_1[0x7d];
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    FUN_1446efa72(&local_a8,0,3,0x10);
    puVar1 = local_a8;
    local_a0 = 3;
    *local_a8 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_a8[2] = lVar5;
    *local_a8 = &PTR_FUN_14a9fcd10;
    local_a8[3] = 0;
    FUN_14485c47a(local_a8 + 3,param_1);
    puVar1[4] = &LAB_147beaa38;
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_a8);
    local_58 = 1;
    local_b8 = 1;
    local_b0 = 0xbf800000;
    FUN_1406f3fee(uVar3,param_1 + 0x7f,&local_98,(int)lVar4);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    FUN_1449db362(&local_a8);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147beaa46 FUN_147beaa46 body=530 status=ok
// SIG undefined FUN_147beaa46(void)

void FUN_147beaa46(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  int local_60;
  undefined8 local_5c;
  int local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(byte *)(param_1 + 0x7b) & 1) != 0) {
    local_68 = 0;
    local_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    local_b0 = 0;
    FUN_140d0a8da(0,&local_88);
    local_a8 = 0x100000000;
    local_98 = 0xffffffff;
    local_90 = 0;
    iVar6 = 0;
    local_a0 = local_78;
    if (local_60 != 0) {
      FUN_1449c0562(&local_a8);
      iVar6 = local_60;
    }
    local_c0 = local_98;
    uVar4 = local_c0;
    local_b8 = local_90;
    local_b4 = local_8c;
    local_d0 = local_a8;
    local_c8 = local_a0;
    local_c0._4_4_ = (int)((ulonglong)local_98 >> 0x20);
    local_d8 = &local_88;
    if ((local_c0._4_4_ != iVar6) || (local_a0 != local_78)) {
      iVar2 = local_c0._4_4_;
      local_c0 = uVar4;
      do {
        plVar1 = *(longlong **)(*local_d8 + (longlong)iVar2 * 0x10);
        if (((plVar1 != (longlong *)0x0) && ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)) &&
           ((*(byte *)((longlong)plVar1 + 0x62) & 4) != 0)) {
          plVar3 = (longlong *)(**(code **)(*plVar1 + 0x450))(plVar1);
          if (plVar3 == param_1) {
            (**(code **)(*param_1 + 0x690))(param_1,plVar1);
          }
        }
        local_c0 = CONCAT44(local_c0._4_4_,(uint)local_c0 & ~local_d0._4_4_);
        FUN_1449c0562(&local_d0);
        iVar2 = local_c0._4_4_;
        uVar4 = local_c0;
      } while (local_d8 != &local_88 || (local_c8 != local_78 || local_c0._4_4_ != iVar6));
    }
    local_c0 = uVar4;
    if ((int)uStack_80 == local_54) {
      uVar4 = FUN_1401b4c98(param_1);
      param_1 = param_1 + 0x7f;
      lVar5 = FUN_144a61814(uVar4,param_1);
      if (lVar5 != 0) {
        FUN_1405a424c(uVar4,*param_1);
      }
      *param_1 = 0;
    }
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140d0a7fc(&local_88);
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147beac5a FUN_147beac5a body=408 status=ok
// SIG undefined FUN_147beac5a(void)

void FUN_147beac5a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(float *)(param_1 + 0x3dc) <= 0.0) goto LAB_147bead41;
  lVar2 = *(longlong *)(param_1 + 0x3e0);
  if (lVar2 == 0) {
LAB_147beacbd:
    lVar2 = FUN_1411311bc();
LAB_147beacc5:
    if (lVar2 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x3f0);
    if ((~DAT_14c950c29 & 1) == 0 && lVar2 != 0) {
      FUN_1456cec3c(lVar2);
    }
    local_38 = &PTR_FUN_14a819ae0;
    local_30 = lVar2;
    if ((lVar2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar2);
    }
  }
  else {
    lVar1 = FUN_1411311bc();
    if ((((lVar1 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
         lVar1 + 0x30)) || (lVar2 = *(longlong *)(param_1 + 0x3e0), lVar2 == 0)) goto LAB_147beacbd;
    lVar1 = FUN_1411311bc();
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
          lVar1 + 0x30) goto LAB_147bead93;
      lVar2 = *(longlong *)(param_1 + 0x3e0);
      goto LAB_147beacc5;
    }
LAB_147bead93:
    uVar3 = *(undefined8 *)(param_1 + 0x3f0);
    local_38 = &PTR_FUN_14a819ae0;
    local_30 = 0;
  }
  local_48 = param_1;
  (**(code **)(*param_2 + 0x540))
            (param_2,*(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 1000),&local_38,uVar3);
LAB_147bead41:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147beadf3 FUN_147beadf3 body=107 status=ok
// SIG undefined FUN_147beadf3(void)

void FUN_147beadf3(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  local_28 = param_4[2];
  local_20 = *param_5;
  uStack_1c = param_5[1];
  uStack_18 = param_5[2];
  uStack_14 = param_5[3];
  local_10 = *(undefined8 *)(param_5 + 4);
  local_48 = param_2;
  local_40 = param_3;
  FUN_1447cd2ec(local_20,&local_48);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147beae5f FUN_147beae5f body=71 status=ok
// SIG undefined FUN_147beae5f(void)

void FUN_147beae5f(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  local_c = param_4;
  FUN_1447cd2ec(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147beaea7 FUN_147beaea7 body=155 status=ok
// SIG undefined FUN_147beaea7(void)

void FUN_147beaea7(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined4 *param_7)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_5[2];
  local_50 = *param_5;
  uStack_48 = param_5[1];
  local_38 = *param_6;
  uStack_30 = param_6[1];
  local_28 = param_6[2];
  local_20 = *param_7;
  uStack_1c = param_7[1];
  uStack_18 = param_7[2];
  uStack_14 = param_7[3];
  local_10 = *(undefined8 *)(param_7 + 4);
  local_60 = param_2;
  local_58 = param_3;
  local_54 = param_4;
  FUN_1447cd2ec(local_20,&local_60);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147beaf43 FUN_147beaf43 body=192 status=ok
// SIG undefined FUN_147beaf43(void)

void FUN_147beaf43(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined4 *param_8,
                  undefined4 param_9,undefined4 param_10)

{
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = param_5[2];
  local_80 = *param_5;
  uStack_78 = param_5[1];
  local_58 = param_6[2];
  local_68 = *param_6;
  uStack_60 = param_6[1];
  local_50 = *param_7;
  uStack_48 = param_7[1];
  local_40 = param_7[2];
  local_38 = *param_8;
  uStack_34 = param_8[1];
  uStack_30 = param_8[2];
  uStack_2c = param_8[3];
  local_28 = *(undefined8 *)(param_8 + 4);
  local_20 = param_9;
  uStack_18 = param_10;
  local_90 = param_2;
  local_88 = param_3;
  local_84 = param_4;
  FUN_1447cd2ec(param_9,&local_90);
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147beb004 FUN_147beb004 body=60 status=ok
// SIG undefined FUN_147beb004(void)

void FUN_147beb004(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_1 + 0x390);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xa60))(plVar1,0);
  }
  *(byte *)(param_1 + 0x398) = *(byte *)(param_1 + 0x398) | 4;
  return;
}



// FUNCTION 147beb040 FUN_147beb040 body=54 status=ok
// SIG undefined FUN_147beb040(void)

void FUN_147beb040(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FUN_1435c33e2();
  }
  *(byte *)(param_1 + 0x398) = *(byte *)(param_1 + 0x398) & 0xfb;
  return;
}



// FUNCTION 147beb0aa FUN_147beb0aa body=160 status=ok
// SIG undefined FUN_147beb0aa(void)

void FUN_147beb0aa(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x638))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147beb166 FUN_147beb166 body=259 status=ok
// SIG undefined FUN_147beb166(void)

void FUN_147beb166(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  plVar1 = *(longlong **)(param_1 + 0x390);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xa20))(plVar1,local_20,local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147beb26a FUN_147beb26a body=259 status=ok
// SIG undefined FUN_147beb26a(void)

void FUN_147beb26a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_1 + 0x390);
  if (plVar1 != (longlong *)0x0) {
    local_28 = local_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    uStack_1c = uStack_34;
    (**(code **)(*plVar1 + 0xa18))(plVar1,local_30);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147beb36e FUN_147beb36e body=259 status=ok
// SIG undefined FUN_147beb36e(void)

void FUN_147beb36e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  plVar1 = *(longlong **)(param_1 + 0x390);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xa08))(plVar1,local_20,local_24);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147beb472 FUN_147beb472 body=251 status=ok
// SIG undefined FUN_147beb472(void)

void FUN_147beb472(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FUN_1435c5b7e(*(longlong *)(param_1 + 0x390),local_20,local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147beb56e FUN_147beb56e body=160 status=ok
// SIG undefined FUN_147beb56e(void)

void FUN_147beb56e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x648))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147beb610 FUN_147beb610 body=268 status=ok
// SIG undefined FUN_147beb610(void)

void FUN_147beb610(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_1 + 0x390);
  if (plVar1 != (longlong *)0x0) {
    local_28 = local_48;
    local_38 = local_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    (**(code **)(*plVar1 + 0xa10))(plVar1,local_40);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147beb71e FUN_147beb71e body=88 status=ok
// SIG undefined FUN_147beb71e(void)

void FUN_147beb71e(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong **)(param_1 + 0x390) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x390) + 0x2c0))();
    *(uint *)(param_1 + 0x398) =
         *(uint *)(param_1 + 0x398) & 0xfffffffb |
         *(byte *)(*(longlong *)(param_1 + 0x390) + 0x9e) >> 2 & 4;
  }
  return;
}



// FUNCTION 147beb792 FUN_147beb792 body=104 status=ok
// SIG undefined FUN_147beb792(void)

void FUN_147beb792(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf2e50) {
    FUN_144b3d300(&DAT_14caf2e50);
    if (DAT_14caf2e50 == -1) {
      FUN_1446f470e(&DAT_14caf2e48,L"bCurrentlyActive",1);
      _Init_thread_footer(&DAT_14caf2e50);
      return;
    }
  }
  return;
}



// FUNCTION 147beb7fa FUN_147beb7fa body=55 status=ok
// SIG undefined FUN_147beb7fa(void)

void FUN_147beb7fa(longlong param_1)

{
  thunk_FUN_1401b21c4();
  if ((*(longlong *)(param_1 + 0x390) != 0) && ((*(byte *)(param_1 + 0x398) & 2) != 0)) {
    FUN_141297316(*(longlong *)(param_1 + 0x390),5);
    return;
  }
  return;
}



// FUNCTION 147beb832 FUN_147beb832 body=140 status=ok
// SIG undefined FUN_147beb832(void)

void FUN_147beb832(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_38,L"bCurrentlyActive",1);
  uVar1 = FUN_14143eef4();
  FUN_14143eef4();
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



// FUNCTION 147beb8c0 FUN_147beb8c0 body=62 status=ok
// SIG undefined FUN_147beb8c0(void)

void FUN_147beb8c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FUN_1435c4c78();
    if ((*(byte *)(param_1 + 0x398) & 2) != 0) {
      FUN_141297316(*(undefined8 *)(param_1 + 0x390),5);
      return;
    }
  }
  return;
}



// FUNCTION 147beb8fe FUN_147beb8fe body=173 status=ok
// SIG undefined FUN_147beb8fe(void)

longlong * FUN_147beb8fe(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  plVar1 = *(longlong **)(param_1 + 0x390);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,&local_28);
    if (&local_28 == param_2) {
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_28;
      *(undefined4 *)(param_2 + 1) = local_20;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  FUN_14020fad6(param_2,L"No_ParticleSystemComponent");
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147beb9ac FUN_147beb9ac body=190 status=ok
// SIG undefined FUN_147beb9ac(void)

void FUN_147beb9ac(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141348dd0();
  lVar2 = *(longlong *)(param_1 + 0x390);
  if (lVar2 != 0) {
    FUN_147bebaea(&local_28);
    FUN_147beba6c(lVar2 + 0x838,param_1,&LAB_147bebbb0,local_28);
    lVar2 = *(longlong *)(param_1 + 0x390);
    uVar1 = *(uint *)(param_1 + 0x398);
    *(uint *)(param_1 + 0x398) = uVar1 & 0xfffffffb | *(byte *)(lVar2 + 0x9e) >> 1 & 4;
    if ((uVar1 & 2) != 0 && lVar2 != 0) {
      FUN_141297316(lVar2,5);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147beba6c FUN_147beba6c body=125 status=ok
// SIG undefined FUN_147beba6c(void)

void FUN_147beba6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_4;
  FUN_14113f0c0(&local_48);
  local_38 = (undefined4)local_48;
  uStack_34 = local_48._4_4_;
  uStack_30 = (undefined4)uStack_40;
  uStack_2c = uStack_40._4_4_;
  FUN_1403350f6(param_1);
  FUN_144a7b126(param_1,&local_21,1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bebaea FUN_147bebaea body=196 status=ok
// SIG undefined FUN_147bebaea(void)

undefined8 * FUN_147bebaea(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf2f30) {
    FUN_144b3d300(&DAT_14caf2f30);
    if (DAT_14caf2f30 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"Finished",9);
      builtin_wcsncpy(local_48 + 8,L"leSystem",8);
      builtin_wcsncpy(local_48,L"OnPartic",8);
      FUN_1446f470e(&DAT_14caf2f28,local_48,1);
      _Init_thread_footer(&DAT_14caf2f30);
    }
  }
  *param_1 = DAT_14caf2f28;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bebbe4 FUN_147bebbe4 body=59 status=ok
// SIG undefined FUN_147bebbe4(void)

void FUN_147bebbe4(longlong *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x73);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0x388))(param_1,0x38d1b717);
    uVar1 = *(uint *)(param_1 + 0x73);
  }
  *(uint *)(param_1 + 0x73) = uVar1 & 0xfffffffb;
  return;
}



// FUNCTION 147bebc26 FUN_147bebc26 body=387 status=ok
// SIG undefined FUN_147bebc26(void)

void FUN_147bebc26(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14caf2f00 == (longlong *)0x0) goto LAB_147bebc47;
  local_28 = DAT_14caf2f00;
  local_20 = DAT_14caf2f08;
  if (DAT_14caf2f08 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14caf2f08 + 1) = (int)DAT_14caf2f08[1] + 1;
    UNLOCK();
  }
  FUN_1435e7b7a(&local_28);
  plVar4 = (longlong *)FUN_14001cc68(0xd8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a9fcdc0;
  plVar1 = plVar4 + 2;
  FUN_147bf4d06(plVar1);
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_147bf5172(&local_38,plVar1);
  plVar5 = DAT_14caf2f08;
  DAT_14caf2f00 = plVar1;
  if (plVar4 == (longlong *)0x0) {
    if (DAT_14caf2f08 != (longlong *)0x0) {
      DAT_14caf2f08 = (longlong *)0x0;
LAB_147bebd1b:
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000147bebd46:
        if (iVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 == DAT_14caf2f08) {
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar5 = plVar4;
        goto joined_r0x000147bebd46;
      }
    }
    else {
      bVar6 = DAT_14caf2f08 != (longlong *)0x0;
      plVar5 = DAT_14caf2f08;
      DAT_14caf2f08 = plVar4;
      if (bVar6) goto LAB_147bebd1b;
    }
  }
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_48 = DAT_14caf2f00;
  local_40 = DAT_14caf2f08;
  if (DAT_14caf2f08 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14caf2f08 + 1) = (int)DAT_14caf2f08[1] + 1;
    UNLOCK();
  }
  FUN_147c2ec06(&local_48,1);
LAB_147bebc47:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bebdaa FUN_147bebdaa body=473 status=ok
// SIG undefined FUN_147bebdaa(void)

void FUN_147bebdaa(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14caf2ef8 != '\x01') {
    if (DAT_14caf2f00 != (longlong *)0x0) {
      local_48 = DAT_14caf2f00;
      local_40 = DAT_14caf2f08;
      if (DAT_14caf2f08 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14caf2f08 + 1) = (int)DAT_14caf2f08[1] + 1;
        UNLOCK();
      }
      FUN_1435e7b7a(&local_48);
      plVar1 = DAT_14caf2f08;
      DAT_14caf2f00 = (longlong *)0x0;
      if (DAT_14caf2f08 != (longlong *)0x0) {
        DAT_14caf2f08 = (longlong *)0x0;
        LOCK();
        plVar5 = plVar1 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar1)(plVar1);
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
    goto LAB_147bebdd8;
  }
  if (DAT_14caf2f00 != (longlong *)0x0) goto LAB_147bebdd8;
  plVar4 = (longlong *)FUN_14001cc68(0xd8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a9fcdc0;
  plVar1 = plVar4 + 2;
  FUN_147bf4d06(plVar1);
  local_28 = plVar1;
  local_20 = plVar4;
  FUN_147bf5172(&local_28,plVar1);
  plVar5 = DAT_14caf2f08;
  DAT_14caf2f00 = plVar1;
  if (plVar4 == (longlong *)0x0) {
    if (DAT_14caf2f08 != (longlong *)0x0) {
      DAT_14caf2f08 = (longlong *)0x0;
LAB_147bebef5:
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000147bebf20:
        if (iVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 == DAT_14caf2f08) {
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar5 = plVar4;
        goto joined_r0x000147bebf20;
      }
    }
    else {
      bVar6 = DAT_14caf2f08 != (longlong *)0x0;
      plVar5 = DAT_14caf2f08;
      DAT_14caf2f08 = plVar4;
      if (bVar6) goto LAB_147bebef5;
    }
  }
  plVar1 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_20 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_38 = DAT_14caf2f00;
  local_30 = DAT_14caf2f08;
  if (DAT_14caf2f08 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14caf2f08 + 1) = (int)DAT_14caf2f08[1] + 1;
    UNLOCK();
  }
  FUN_147c2ec06(&local_38,1);
LAB_147bebdd8:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bebf8a FUN_147bebf8a body=202 status=ok
// SIG undefined FUN_147bebf8a(void)

undefined4 FUN_147bebf8a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  uStack_30 = 1;
  FUN_1447a1bd6(&local_38,0);
  puVar2 = local_38;
  *local_38 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(local_38 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)local_38 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(local_38,iVar1,0);
    memcpy((void *)*puVar2,_Src,(longlong)iVar1 * 2);
  }
  uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1,&local_38);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bec056 FUN_147bec056 body=202 status=ok
// SIG undefined FUN_147bec056(void)

undefined4 FUN_147bec056(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  uStack_30 = 1;
  FUN_1447a1bd6(&local_38,0);
  puVar2 = local_38;
  *local_38 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(local_38 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)local_38 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(local_38,iVar1,0);
    memcpy((void *)*puVar2,_Src,(longlong)iVar1 * 2);
  }
  uVar3 = (**(code **)(*param_1 + 0x2d8))(param_1,&local_38);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bec122 FUN_147bec122 body=205 status=ok
// SIG undefined FUN_147bec122(void)

undefined4 FUN_147bec122(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  uStack_30 = 1;
  FUN_1447a1bd6(&local_38,0);
  puVar2 = local_38;
  *local_38 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(local_38 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)local_38 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(local_38,iVar1,0);
    memcpy((void *)*puVar2,_Src,(longlong)iVar1 * 2);
  }
  uVar3 = (**(code **)(*param_1 + 0x2e8))(param_1,&local_38,1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bec1f0 FUN_147bec1f0 body=205 status=ok
// SIG undefined FUN_147bec1f0(void)

undefined4 FUN_147bec1f0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  uStack_30 = 1;
  FUN_1447a1bd6(&local_38,0);
  puVar2 = local_38;
  *local_38 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(local_38 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)local_38 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(local_38,iVar1,0);
    memcpy((void *)*puVar2,_Src,(longlong)iVar1 * 2);
  }
  uVar3 = (**(code **)(*param_1 + 0x2f8))(param_1,&local_38,1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bec2e2 FUN_147bec2e2 body=121 status=ok
// SIG undefined FUN_147bec2e2(void)

bool FUN_147bec2e2(longlong *param_1,longlong param_2)

{
  bool bVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((&DAT_149fc1b6e)[*(byte *)(param_2 + 0x18)] == '\x01') {
    FUN_140b6e8c2(param_2,&local_28);
    (**(code **)(*param_1 + 0x2c8))(param_1,&local_30);
    bVar1 = local_28 == local_30;
  }
  else {
    bVar1 = false;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bec3b0 FUN_147bec3b0 body=32 status=ok
// SIG undefined FUN_147bec3b0(void)

undefined8 FUN_147bec3b0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"INVALID");
  return param_2;
}



// FUNCTION 147bec482 FUN_147bec482 body=126 status=ok
// SIG undefined FUN_147bec482(void)

void FUN_147bec482(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_28,L"Not implemented");
  plVar1 = (longlong *)*param_5;
  if (plVar1 != (longlong *)0x0 && (int)param_5[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_3,0,local_28);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bec516 FUN_147bec516 body=56 status=ok
// SIG undefined FUN_147bec516(void)

void FUN_147bec516(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_R9;
  
  plVar3 = *(longlong **)(in_R9 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147bec543. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147bec596 FUN_147bec596 body=112 status=ok
// SIG undefined FUN_147bec596(void)

undefined8 FUN_147bec596(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x20 + lVar6;
      *(undefined8 *)(lVar2 + -0x20) = *puVar1;
      *(undefined8 *)(lVar2 + -0x18) = puVar1[1];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x14);
      uVar4 = *(undefined4 *)(puVar1 + 3);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x1c);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 2);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 4);
      *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(puVar1 + 6);
      lVar6 = lVar6 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147bec62e FUN_147bec62e body=59 status=ok
// SIG undefined FUN_147bec62e(void)

undefined8 FUN_147bec62e(longlong *param_1)

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



// FUNCTION 147bec674 FUN_147bec674 body=38 status=ok
// SIG undefined FUN_147bec674(void)

void FUN_147bec674(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147bec7ee FUN_147bec7ee body=59 status=ok
// SIG undefined FUN_147bec7ee(void)

undefined8 FUN_147bec7ee(longlong *param_1)

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



// FUNCTION 147bec88e FUN_147bec88e body=29 status=ok
// SIG undefined FUN_147bec88e(void)

undefined8 FUN_147bec88e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bec972 FUN_147bec972 body=119 status=ok
// SIG undefined FUN_147bec972(void)

undefined8 FUN_147bec972(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
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
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x40);
      uVar2 = *(undefined4 *)(param_3 + -0x3c);
      uVar3 = *(undefined4 *)(param_3 + -0x38);
      uVar4 = *(undefined4 *)(param_3 + -0x34);
      uVar5 = *(undefined4 *)(param_3 + -0x30);
      uVar6 = *(undefined4 *)(param_3 + -0x2c);
      uVar7 = *(undefined4 *)(param_3 + -0x28);
      uVar8 = *(undefined4 *)(param_3 + -0x24);
      uVar9 = *(undefined4 *)(param_3 + -0x20);
      uVar10 = *(undefined4 *)(param_3 + -0x1c);
      uVar11 = *(undefined4 *)(param_3 + -0x18);
      uVar12 = *(undefined4 *)(param_3 + -0x14);
      uVar13 = *(undefined4 *)(param_3 + -0xc);
      uVar14 = *(undefined4 *)(param_3 + -8);
      uVar15 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar13;
      *(undefined4 *)(param_2 + -8) = uVar14;
      *(undefined4 *)(param_2 + -4) = uVar15;
      *(undefined4 *)(param_2 + -0x20) = uVar9;
      *(undefined4 *)(param_2 + -0x1c) = uVar10;
      *(undefined4 *)(param_2 + -0x18) = uVar11;
      *(undefined4 *)(param_2 + -0x14) = uVar12;
      *(undefined4 *)(param_2 + -0x30) = uVar5;
      *(undefined4 *)(param_2 + -0x2c) = uVar6;
      *(undefined4 *)(param_2 + -0x28) = uVar7;
      *(undefined4 *)(param_2 + -0x24) = uVar8;
      *(undefined4 *)(param_2 + -0x40) = uVar1;
      *(undefined4 *)(param_2 + -0x3c) = uVar2;
      *(undefined4 *)(param_2 + -0x38) = uVar3;
      *(undefined4 *)(param_2 + -0x34) = uVar4;
      FUN_144a787a6(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      FUN_140bec736(param_2 + 0x18,param_3 + 0x18);
      *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
      param_3 = param_3 + 0x78;
      param_2 = param_2 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147beca12 FUN_147beca12 body=59 status=ok
// SIG undefined FUN_147beca12(void)

undefined8 FUN_147beca12(longlong *param_1)

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



// FUNCTION 147becab0 FUN_147becab0 body=62 status=ok
// SIG undefined FUN_147becab0(void)

void FUN_147becab0(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0xf) == '\x01') {
    *param_1 = &PTR_FUN_14a9e5108;
    if (param_1[0xc] != 0) {
      FUN_1400020a8();
    }
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return;
}



// FUNCTION 147becaee FUN_147becaee body=38 status=ok
// SIG undefined FUN_147becaee(void)

undefined8 FUN_147becaee(undefined8 param_1,int param_2)

{
  FUN_147becb14();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147becb14 FUN_147becb14 body=77 status=ok
// SIG undefined FUN_147becb14(void)

void FUN_147becb14(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a9fc720;
  if (param_1[0x14] != 0) {
    plVar1 = param_1 + 0x18;
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x16];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_146124e5e(param_1 + 4);
  FUN_146efa5e4(param_1);
  return;
}



// FUNCTION 147becb62 FUN_147becb62 body=113 status=ok
// SIG undefined FUN_147becb62(void)

void FUN_147becb62(longlong param_1,double param_2)

{
  double dVar1;
  
  if (*(double *)(param_1 + 0x1350) <= param_2 && param_2 != *(double *)(param_1 + 0x1350)) {
    *(double *)(param_1 + 0x1350) = param_2 + 0.005;
    if (*(short *)(param_1 + 0xe) < 1) {
      if (*(short *)(param_1 + 0x12) < 1) {
        return;
      }
      dVar1 = *(double *)(param_1 + 0x58);
    }
    else {
      dVar1 = *(double *)(param_1 + 0x58);
      if ((*(short *)(param_1 + 0x12) < 1) || (*(double *)(param_1 + 0x28) <= dVar1)) {
        if (dVar1 < *(double *)(param_1 + 0x28)) {
          return;
        }
        goto LAB_147becbcc;
      }
    }
    dVar1 = dVar1 + *(double *)((longlong)*(char *)(param_1 + 0x14) * 0x10 + param_1 + 0x1228);
    if (*(double *)(param_1 + 0x30) <= dVar1) {
LAB_147becbcc:
      FUN_1435a915a(dVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 147becbd4 FUN_147becbd4 body=411 status=ok
// SIG undefined FUN_147becbd4(void)

longlong FUN_147becbd4(longlong param_1,ulonglong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  local_48 = param_2;
  plVar6 = (longlong *)FUN_147becd70(param_1 + 0x1360,uVar5 >> 0x10 ^ uVar5);
  lVar7 = *plVar6;
  if (lVar7 != 0) goto LAB_147becc42;
  plVar8 = (longlong *)FUN_147bed332();
  if (plVar8 == (longlong *)0x0) {
    *plVar6 = 0x10;
    plVar9 = (longlong *)plVar6[1];
    if (plVar9 != (longlong *)0x0) {
      plVar6[1] = 0;
LAB_147becc9c:
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
      if (plVar8 != (longlong *)0x0) goto LAB_147beccc4;
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *plVar6 = (longlong)(plVar8 + 2);
    plVar9 = (longlong *)plVar6[1];
    if (plVar8 == plVar9) {
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    else {
      plVar6[1] = (longlong)plVar8;
      if (plVar9 != (longlong *)0x0) goto LAB_147becc9c;
    }
LAB_147beccc4:
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  lVar7 = *plVar6;
  iVar3 = *(int *)(param_1 + 0x13b8);
  *(uint *)(param_1 + 0x13b8) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x13bc) < iVar3 + 1U) {
    FUN_147bed410((longlong *)(param_1 + 0x13b0),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x13b0);
  *(ulonglong *)(lVar4 + (longlong)iVar3 * 0x10) = param_2;
  *(longlong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = lVar7;
  *param_3 = 1;
  lVar7 = *plVar6;
LAB_147becc42:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147becd70 FUN_147becd70 body=181 status=ok
// SIG undefined FUN_147becd70(void)

longlong FUN_147becd70(longlong *param_1,uint param_2,longlong *param_3)

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
          if (lVar3 != 0) goto LAB_147bece08;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147bece26(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_147bece08:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147bece26 FUN_147bece26 body=277 status=ok
// SIG undefined FUN_147bece26(void)

undefined4 * FUN_147bece26(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_147becf3c(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_147bed022(param_1,param_3,local_40,local_48);
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
      FUN_147bed154(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147becf3c FUN_147becf3c body=229 status=ok
// SIG undefined FUN_147becf3c(void)

int * FUN_147becf3c(longlong *param_1,int *param_2)

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



// FUNCTION 147bed022 FUN_147bed022 body=191 status=ok
// SIG undefined FUN_147bed022(void)

undefined8 FUN_147bed022(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(puVar3 + 4);
          if (plVar8 != (longlong *)0x0) {
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_147bed0e2(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 147bed0e2 FUN_147bed0e2 body=114 status=ok
// SIG undefined FUN_147bed0e2(void)

void FUN_147bed0e2(longlong *param_1,int param_2)

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



// FUNCTION 147bed154 FUN_147bed154 body=477 status=ok
// SIG undefined FUN_147bed154(void)

void FUN_147bed154(longlong *param_1)

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



// FUNCTION 147bed332 FUN_147bed332 body=132 status=ok
// SIG undefined FUN_147bed332(void)

undefined8 * FUN_147bed332(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x128);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14a9fc740;
  memset(puVar1 + 2,0,0x108);
  lVar2 = 0x18;
  do {
    *(undefined4 *)((longlong)puVar1 + lVar2 + -8) = 0;
    *(undefined8 *)((longlong)puVar1 + lVar2) = 0;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x118);
  *(undefined2 *)(puVar1 + 0x22) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x112) = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  return puVar1;
}



// FUNCTION 147bed3b6 FUN_147bed3b6 body=59 status=ok
// SIG undefined FUN_147bed3b6(void)

void FUN_147bed3b6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x120);
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
                    /* WARNING: Could not recover jumptable at 0x000147bed3e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147bed3f2 FUN_147bed3f2 body=29 status=ok
// SIG undefined FUN_147bed3f2(void)

undefined8 FUN_147bed3f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bed410 FUN_147bed410 body=132 status=ok
// SIG undefined FUN_147bed410(void)

void FUN_147bed410(longlong param_1,int param_2)

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



// FUNCTION 147bed524 FUN_147bed524 body=59 status=ok
// SIG undefined FUN_147bed524(void)

undefined8 FUN_147bed524(longlong *param_1)

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



// FUNCTION 147bed5c6 FUN_147bed5c6 body=52 status=ok
// SIG undefined FUN_147bed5c6(void)

void FUN_147bed5c6(longlong *param_1)

{
  FUN_147bed5fa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bed5fa FUN_147bed5fa body=349 status=ok
// SIG undefined FUN_147bed5fa(void)

void FUN_147bed5fa(longlong *param_1)

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
      FUN_147bf0dd6(lVar2 + lVar3 + 8);
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



// FUNCTION 147bed758 FUN_147bed758 body=52 status=ok
// SIG undefined FUN_147bed758(void)

void FUN_147bed758(longlong *param_1)

{
  FUN_147bed78c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bed78c FUN_147bed78c body=349 status=ok
// SIG undefined FUN_147bed78c(void)

void FUN_147bed78c(longlong *param_1)

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
      FUN_1404dc9c0(lVar2 + lVar3 + 8);
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



// FUNCTION 147bed8ea FUN_147bed8ea body=52 status=ok
// SIG undefined FUN_147bed8ea(void)

void FUN_147bed8ea(longlong *param_1)

{
  FUN_147bed91e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bed91e FUN_147bed91e body=349 status=ok
// SIG undefined FUN_147bed91e(void)

void FUN_147bed91e(longlong *param_1)

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
      FUN_1404dc9c0(lVar2 + lVar3 + 8);
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



// FUNCTION 147beda7c FUN_147beda7c body=52 status=ok
// SIG undefined FUN_147beda7c(void)

void FUN_147beda7c(longlong *param_1)

{
  FUN_147bedab0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bedab0 FUN_147bedab0 body=349 status=ok
// SIG undefined FUN_147bedab0(void)

void FUN_147bedab0(longlong *param_1)

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
      FUN_147bf0e64(lVar2 + lVar3 + 8);
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



// FUNCTION 147bedc54 FUN_147bedc54 body=22 status=ok
// SIG undefined FUN_147bedc54(void)

undefined1 FUN_147bedc54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_146214c9d(param_2,param_3);
  return 1;
}



// FUNCTION 147bedc74 FUN_147bedc74 body=31 status=ok
// SIG undefined FUN_147bedc74(void)

undefined1
FUN_147bedc74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_140ba41f1(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 147bedc94 FUN_147bedc94 body=216 status=ok
// SIG undefined FUN_147bedc94(void)

undefined8 FUN_147bedc94(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined **ppuVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [12];
  byte local_7c;
  undefined **local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_4 == 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = (undefined **)0x0;
    uStack_70 = 0;
    (**(code **)(*param_1 + 8))(param_1,local_88);
    if ((local_7c & 2) == 0) {
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = uStack_60 & 0xffffffffffffff00;
      ppuVar1 = &PTR_FUN_14a5af930;
      local_78 = &PTR_FUN_14a5af930;
      local_58 = 0;
      uStack_50 = 0;
    }
    else {
      ppuVar1 = (undefined **)0x0;
    }
    FUN_147be6bde(param_3,param_2);
    (**(code **)(*param_1 + 8))(param_1,local_88);
    if ((local_7c & 4) != 0) {
      (*(code *)*ppuVar1)(&local_78,0);
    }
  }
  else {
    FUN_147be6bde(param_3,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bedd8a FUN_147bedd8a body=70 status=ok
// SIG undefined FUN_147bedd8a(void)

void FUN_147bedd8a(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_147bede77(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bedddc FUN_147bedddc body=76 status=ok
// SIG undefined FUN_147bedddc(void)

void FUN_147bedddc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14a5af930;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_2 + 3)])(param_2 + 1);
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 147bede77 FUN_147bede77 body=87 status=ok
// SIG undefined FUN_147bede77(void)

undefined8 FUN_147bede77(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if ((&DAT_149fc1b6e)[*(byte *)(param_1 + 0x18)] == '\x01') {
    if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
      if (cVar1 != '\0') goto LAB_147bedeb7;
    }
  }
  else if ((*(uint *)(param_1 + 8) & 0xffffff) != 0) {
LAB_147bedeb7:
    plVar2 = (longlong *)FUN_14127b0d4(param_1);
                    /* WARNING: Could not recover jumptable at 0x000147bedeca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar2 + 0x40))(plVar2);
    return uVar3;
  }
  return 0xffffffff;
}



// FUNCTION 147bedece FUN_147bedece body=122 status=ok
// SIG undefined FUN_147bedece(void)

longlong FUN_147bedece(longlong param_1,longlong param_2)

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
    FUN_147bedf48(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147bedf48 FUN_147bedf48 body=121 status=ok
// SIG undefined FUN_147bedf48(void)

undefined8 * FUN_147bedf48(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1459ab53a(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
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



// FUNCTION 147bedfc2 FUN_147bedfc2 body=67 status=ok
// SIG undefined FUN_147bedfc2(void)

void FUN_147bedfc2(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1459ab53a(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_140576b56(param_1);
    return;
  }
  FUN_147bee006(param_1);
  FUN_1459ab53a(param_1,0);
  return;
}



// FUNCTION 147bee006 FUN_147bee006 body=322 status=ok
// SIG undefined FUN_147bee006(void)

void FUN_147bee006(longlong *param_1)

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



// FUNCTION 147bee14a FUN_147bee14a body=201 status=ok
// SIG undefined FUN_147bee14a(void)

void FUN_147bee14a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar5 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar3 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar3;
        if (lVar4 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar2[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar5 != iVar7) {
          memmove(plVar2 + iVar5,plVar2 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar5 = iVar5 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar4);
    *(int *)(param_1 + 1) = iVar5;
  }
  return;
}



// FUNCTION 147bee214 FUN_147bee214 body=126 status=ok
// SIG undefined FUN_147bee214(void)

void FUN_147bee214(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 8;
    } while (lVar5 * 8 - uVar4 != 0);
  }
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147bee292(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(longlong *)(param_1 + lVar5 * 8) = *param_2;
  return;
}



// FUNCTION 147bee292 FUN_147bee292 body=124 status=ok
// SIG undefined FUN_147bee292(void)

void FUN_147bee292(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_147bee310(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bee310 FUN_147bee310 body=132 status=ok
// SIG undefined FUN_147bee310(void)

void FUN_147bee310(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,8);
  return;
}



// FUNCTION 147bee394 FUN_147bee394 body=107 status=ok
// SIG undefined FUN_147bee394(void)

longlong * FUN_147bee394(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_1413dbcfa();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 147bee400 FUN_147bee400 body=352 status=ok
// SIG undefined FUN_147bee400(void)

void FUN_147bee400(longlong *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  void *_Dst;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong *plVar17;
  int iVar18;
  
  iVar3 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar3 != 0) {
    uVar4 = *(uint *)(param_1 + 1);
    iVar11 = uVar4 - iVar3;
    iVar10 = iVar11;
    if ((int)param_1[6] != -1) {
      lVar6 = *param_1;
      iVar12 = (int)param_1[6];
      uVar14 = uVar4;
      do {
        iVar5 = *(int *)(lVar6 + 4 + (longlong)iVar12 * 0x18);
        if (iVar12 < iVar11) {
          puVar1 = (undefined8 *)(lVar6 + (longlong)iVar12 * 0x18);
          plVar17 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar17 = param_1 + 2;
          }
          puVar9 = (undefined8 *)(lVar6 + 0x18 + (longlong)(int)(uVar14 - 1) * 0x18);
          uVar13 = uVar14;
          do {
            puVar15 = puVar9;
            uVar14 = uVar13 - 1;
            uVar16 = uVar13 + 0x1e;
            if (-1 < (int)uVar14) {
              uVar16 = uVar14;
            }
            puVar9 = puVar15 + -3;
            uVar13 = uVar14;
          } while ((*(uint *)((longlong)plVar17 + (longlong)((int)uVar16 >> 5) * 4) >>
                    (uVar14 & 0x1f) & 1) == 0);
          uVar7 = puVar15[-3];
          uVar8 = puVar15[-2];
          puVar1[2] = puVar15[-1];
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          plVar17 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar17 = param_1 + 2;
          }
          iVar18 = iVar12 + 0x1f;
          if (-1 < iVar12) {
            iVar18 = iVar12;
          }
          puVar2 = (uint *)((longlong)plVar17 + (longlong)(iVar18 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)iVar12 & 0x1f);
        }
        iVar12 = iVar5;
      } while (iVar5 != -1);
      iVar12 = (int)param_1[1] - uVar4;
      if (iVar12 != 0) {
        _Dst = (void *)((longlong)iVar11 * 0x18 + *param_1);
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 0x18),(longlong)iVar12 * 0x18);
        iVar10 = (int)param_1[1] - iVar3;
      }
    }
    *(int *)(param_1 + 1) = iVar10;
    FUN_144a6134a(param_1 + 2,iVar11,iVar3);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_144727cd0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147bee560 FUN_147bee560 body=128 status=ok
// SIG undefined FUN_147bee560(void)

void FUN_147bee560(longlong *param_1,int param_2)

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



// FUNCTION 147bee5e0 FUN_147bee5e0 body=114 status=ok
// SIG undefined FUN_147bee5e0(void)

void FUN_147bee5e0(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 147bee652 FUN_147bee652 body=114 status=ok
// SIG undefined FUN_147bee652(void)

void FUN_147bee652(longlong *param_1,int param_2)

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



// FUNCTION 147bee6c4 FUN_147bee6c4 body=132 status=ok
// SIG undefined FUN_147bee6c4(void)

void FUN_147bee6c4(longlong param_1,int param_2)

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



// FUNCTION 147bee74a FUN_147bee74a body=147 status=ok
// SIG undefined FUN_147bee74a(void)

void FUN_147bee74a(longlong param_1,int param_2)

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



// FUNCTION 147bee7de FUN_147bee7de body=122 status=ok
// SIG undefined FUN_147bee7de(void)

void FUN_147bee7de(longlong *param_1,int param_2)

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



// FUNCTION 147bee858 FUN_147bee858 body=322 status=ok
// SIG undefined FUN_147bee858(void)

void FUN_147bee858(longlong *param_1)

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



// FUNCTION 147bee99c FUN_147bee99c body=130 status=ok
// SIG undefined FUN_147bee99c(void)

void FUN_147bee99c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147beea20 FUN_147beea20 body=243 status=ok
// SIG undefined FUN_147beea20(void)

undefined8 * FUN_147beea20(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_2 != (longlong *)0x0 && (int)param_2[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14cb0d3a0,CONCAT71(uVar5,1));
      plVar1 = (longlong *)*param_2;
      if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
        local_28 = 0;
      }
      else {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
      }
      *param_1 = local_28;
      uVar3 = DAT_14cb0d3a8;
      lVar6 = (longlong)(int)DAT_14cb0d3a8;
      DAT_14cb0d3a8 = DAT_14cb0d3a8 + 1;
      if (DAT_14cb0d3ac < DAT_14cb0d3a8) {
        FUN_1447a71f6(&DAT_14cb0d3a0,uVar3);
      }
      lVar2 = DAT_14cb0d3a0;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb0d3a0 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147beeb14 FUN_147beeb14 body=302 status=ok
// SIG undefined FUN_147beeb14(void)

longlong * FUN_147beeb14(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14a9fcab0;
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
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14a9fca40;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a9fcab0;
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
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14a9fca40;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 147beec42 FUN_147beec42 body=64 status=ok
// SIG undefined FUN_147beec42(void)

undefined8 * FUN_147beec42(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a9fca40;
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



// FUNCTION 147beec86 FUN_147beec86 body=81 status=ok
// SIG undefined FUN_147beec86(void)

undefined8 FUN_147beec86(longlong param_1)

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



// FUNCTION 147beecde FUN_147beecde body=89 status=ok
// SIG undefined FUN_147beecde(void)

bool FUN_147beecde(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_147beed29;
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
LAB_147beed29:
  return lVar6 == param_2;
}



// FUNCTION 147beed60 FUN_147beed60 body=118 status=ok
// SIG undefined FUN_147beed60(void)

void FUN_147beed60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a9fcab0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9fca40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147beedd6 FUN_147beedd6 body=118 status=ok
// SIG undefined FUN_147beedd6(void)

void FUN_147beedd6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a9fcab0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9fca40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147beee4c FUN_147beee4c body=156 status=ok
// SIG undefined FUN_147beee4c(void)

void FUN_147beee4c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a9fcab0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9fca40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147beeed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147beeee8 FUN_147beeee8 body=104 status=ok
// SIG undefined FUN_147beeee8(void)

void FUN_147beeee8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000147beef35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147beef46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 147beef50 FUN_147beef50 body=101 status=ok
// SIG undefined FUN_147beef50(void)

ulonglong FUN_147beef50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_147beefaa:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_147beefaa;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 147beefb8 FUN_147beefb8 body=302 status=ok
// SIG undefined FUN_147beefb8(void)

longlong * FUN_147beefb8(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14a1e1a40;
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
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14a9fcb20;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a1e1a40;
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
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14a9fcb20;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 147bef0e6 FUN_147bef0e6 body=64 status=ok
// SIG undefined FUN_147bef0e6(void)

undefined8 * FUN_147bef0e6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a9fcb20;
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



// FUNCTION 147bef12a FUN_147bef12a body=81 status=ok
// SIG undefined FUN_147bef12a(void)

undefined8 FUN_147bef12a(longlong param_1)

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



// FUNCTION 147bef182 FUN_147bef182 body=89 status=ok
// SIG undefined FUN_147bef182(void)

bool FUN_147bef182(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_147bef1cd;
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
LAB_147bef1cd:
  return lVar6 == param_2;
}



// FUNCTION 147bef1f8 FUN_147bef1f8 body=118 status=ok
// SIG undefined FUN_147bef1f8(void)

void FUN_147bef1f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9fcb20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147bef26e FUN_147bef26e body=118 status=ok
// SIG undefined FUN_147bef26e(void)

void FUN_147bef26e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9fcb20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147bef2e4 FUN_147bef2e4 body=156 status=ok
// SIG undefined FUN_147bef2e4(void)

void FUN_147bef2e4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9fcb20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147bef370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147bef380 FUN_147bef380 body=104 status=ok
// SIG undefined FUN_147bef380(void)

void FUN_147bef380(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000147bef3cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147bef3de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 147bef3e8 FUN_147bef3e8 body=101 status=ok
// SIG undefined FUN_147bef3e8(void)

ulonglong FUN_147bef3e8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_147bef442:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_147bef442;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 147bef44e FUN_147bef44e body=59 status=ok
// SIG undefined FUN_147bef44e(void)

void FUN_147bef44e(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1[3] != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147bef47f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*plVar1)(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 147bef48a FUN_147bef48a body=29 status=ok
// SIG undefined FUN_147bef48a(void)

undefined8 FUN_147bef48a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bef4a8 FUN_147bef4a8 body=48 status=ok
// SIG undefined FUN_147bef4a8(void)

void FUN_147bef4a8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x78,8);
  }
  return;
}



// FUNCTION 147bef4d8 FUN_147bef4d8 body=79 status=ok
// SIG undefined FUN_147bef4d8(void)

void FUN_147bef4d8(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0xffffffffffffffff;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0x1ff;
  *(undefined4 *)((longlong)param_1 + 0x1e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x19) = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_14a9e5108;
  *(undefined2 *)((longlong)param_1 + 0x72) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return;
}



// FUNCTION 147bef528 FUN_147bef528 body=143 status=ok
// SIG undefined FUN_147bef528(void)

void FUN_147bef528(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bef5b8 FUN_147bef5b8 body=27 status=ok
// SIG undefined FUN_147bef5b8(void)

void FUN_147bef5b8(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 147bef5d4 FUN_147bef5d4 body=132 status=ok
// SIG undefined FUN_147bef5d4(void)

void FUN_147bef5d4(longlong param_1,int param_2)

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



// FUNCTION 147bef65a FUN_147bef65a body=62 status=ok
// SIG undefined FUN_147bef65a(void)

void FUN_147bef65a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147bef698(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147bef698 FUN_147bef698 body=93 status=ok
// SIG undefined FUN_147bef698(void)

ulonglong FUN_147bef698(uint param_1,uint param_2)

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



// FUNCTION 147bef6f6 FUN_147bef6f6 body=86 status=ok
// SIG undefined FUN_147bef6f6(void)

void FUN_147bef6f6(longlong param_1,uint param_2)

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



// FUNCTION 147bef74c FUN_147bef74c body=48 status=ok
// SIG undefined FUN_147bef74c(void)

void FUN_147bef74c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bef77c FUN_147bef77c body=29 status=ok
// SIG undefined FUN_147bef77c(void)

undefined8 FUN_147bef77c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bef79a FUN_147bef79a body=717 status=ok
// SIG undefined FUN_147bef79a(void)

void FUN_147bef79a(uint *param_1,longlong param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  void *_Src;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  void *local_68;
  uint *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = param_2 + -1 + (ulonglong)(param_2 == 0);
  if (uVar4 == 0) {
    bVar2 = 0;
  }
  else {
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    bVar2 = (byte)lVar13 ^ 0x3f;
  }
  uVar8 = 1L << (-bVar2 & 0x3f);
  uVar10 = param_1[6];
  if (uVar8 == (longlong)(int)uVar10) goto LAB_147bef7f1;
  uVar6 = *param_1;
  uVar5 = param_1[1];
  uVar9 = uVar6 - uVar5;
  if (uVar8 < uVar9) goto LAB_147bef7f1;
  puVar1 = param_1 + 4;
  uVar7 = (uint)uVar8;
  if ((int)uVar10 < 1) {
    param_1[2] = uVar7 - 1;
    param_1[6] = uVar10 + uVar7;
    if (param_1[7] - uVar10 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
    goto LAB_147bef7f1;
  }
  local_58 = 0;
  uStack_50 = 0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar8 & 0xffffffff);
  }
  if (uVar4 < 0x80000000) {
    FUN_147befa84(&local_58,uVar8 & 0xffffffff);
    uVar6 = *param_1;
    uVar5 = param_1[1];
    uVar9 = uVar6 - uVar5;
  }
  uVar4 = uStack_50;
  uVar11 = param_1[2] & uVar5;
  uVar10 = param_1[2] & uVar6;
  _Src = *(void **)(param_1 + 4);
  iVar12 = (uint)uStack_50;
  local_60 = puVar1;
  if (uVar11 < uVar10 || uVar6 == uVar5) {
    iVar3 = (uint)uStack_50 + uVar9;
    if (uStack_50._4_4_ - (uint)uStack_50 < uVar9) {
      uVar4 = uStack_50 & 0xffffffff;
      uStack_50._0_4_ = (uint)uStack_50 + uVar9;
      FUN_147befae4(&local_58,uVar4);
      iVar3 = (uint)uStack_50;
    }
    uStack_50._0_4_ = iVar3;
    if (uVar6 != uVar5) {
      _Src = (void *)((longlong)_Src + (ulonglong)uVar11 * 0x10);
      uVar10 = uVar9;
      goto LAB_147bef95c;
    }
  }
  else {
    uVar6 = param_1[6];
    uVar5 = uVar6 - uVar11;
    lVar13 = (longlong)(int)(uint)uStack_50;
    uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 + uVar5);
    if (uStack_50._4_4_ - iVar12 < uVar5) {
      local_68 = _Src;
      FUN_147befae4(&local_58,uVar4 & 0xffffffff);
      _Src = local_68;
    }
    if (uVar6 != uVar11) {
      memcpy((void *)(lVar13 * 0x10 + local_58),(void *)((ulonglong)uVar11 * 0x10 + (longlong)_Src),
             (longlong)(int)uVar5 << 4);
    }
    iVar12 = (uint)uStack_50;
    iVar3 = (uint)uStack_50 + uVar10;
    if (uStack_50._4_4_ - (uint)uStack_50 < uVar10) {
      uVar4 = uStack_50 & 0xffffffff;
      uStack_50._0_4_ = iVar3;
      FUN_147befae4(&local_58,uVar4);
    }
    else {
      uStack_50._0_4_ = iVar3;
      if (uVar10 == 0) goto LAB_147bef977;
    }
LAB_147bef95c:
    memcpy((void *)((longlong)iVar12 * 0x10 + local_58),_Src,(longlong)(int)uVar10 << 4);
  }
LAB_147bef977:
  iVar12 = (uint)uStack_50;
  uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 + (uVar7 - uVar9));
  if (uStack_50._4_4_ - iVar12 < uVar7 - uVar9) {
    FUN_147befae4(&local_58);
  }
  if (local_60 == (uint *)&local_58) {
    param_1[2] = uVar7 - 1;
    param_1[1] = 0;
    *param_1 = uVar9;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 4) = local_58;
    param_1[6] = (uint)uStack_50;
    param_1[7] = uStack_50._4_4_;
    param_1[2] = uVar7 - 1;
    param_1[1] = 0;
    *param_1 = uVar9;
  }
LAB_147bef7f1:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147befa84 FUN_147befa84 body=95 status=ok
// SIG undefined FUN_147befa84(void)

void FUN_147befa84(longlong param_1,uint param_2)

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



// FUNCTION 147befae4 FUN_147befae4 body=132 status=ok
// SIG undefined FUN_147befae4(void)

void FUN_147befae4(longlong param_1,int param_2)

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



// FUNCTION 147befb6a FUN_147befb6a body=52 status=ok
// SIG undefined FUN_147befb6a(void)

void FUN_147befb6a(longlong *param_1)

{
  FUN_147befb9e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147befb9e FUN_147befb9e body=89 status=ok
// SIG undefined FUN_147befb9e(void)

void FUN_147befb9e(longlong param_1)

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



// FUNCTION 147befbf8 FUN_147befbf8 body=52 status=ok
// SIG undefined FUN_147befbf8(void)

void FUN_147befbf8(longlong *param_1)

{
  FUN_147befc2c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147befc2c FUN_147befc2c body=89 status=ok
// SIG undefined FUN_147befc2c(void)

void FUN_147befc2c(longlong param_1)

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



// FUNCTION 147befc86 FUN_147befc86 body=95 status=ok
// SIG undefined FUN_147befc86(void)

void FUN_147befc86(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147befce6 FUN_147befce6 body=132 status=ok
// SIG undefined FUN_147befce6(void)

void FUN_147befce6(longlong param_1,int param_2)

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



// FUNCTION 147befd6c FUN_147befd6c body=123 status=ok
// SIG undefined FUN_147befd6c(void)

undefined8 * FUN_147befd6c(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_147befde8();
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



// FUNCTION 147befde8 FUN_147befde8 body=146 status=ok
// SIG undefined FUN_147befde8(void)

longlong * FUN_147befde8(longlong *param_1,longlong *param_2)

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



// FUNCTION 147befe7a FUN_147befe7a body=386 status=ok
// SIG undefined FUN_147befe7a(void)

void FUN_147befe7a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < 0x2000) {
    uVar8 = 0x2000 - iVar1;
    iVar11 = *(int *)((longlong)param_1 + 0xc);
    iVar6 = iVar1;
    if (iVar11 < 0x2000) {
      FUN_1448fc38a(param_1);
      iVar6 = (int)param_1[1];
      iVar11 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar6 + uVar8;
    if ((uint)(iVar11 - iVar6) < uVar8) {
      FUN_14488f93c(param_1);
    }
    if (iVar6 < 0x2000) {
      lVar2 = *param_1;
      iVar11 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + 0xbffa4);
      lVar10 = 0x2000;
      do {
        iVar9 = (int)lVar10;
        if (iVar11 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        lVar10 = lVar10 + -1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar11 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar11;
        puVar5 = puVar5 + -0x18;
      } while (iVar6 < lVar10);
    }
    if (iVar1 == 0) {
      plVar7 = param_1 + 2;
      *(undefined4 *)(param_1 + 5) = 0x2000;
      if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0x2000) {
        FUN_14499171c(plVar7,0,0x100,4);
        *(undefined4 *)((longlong)param_1 + 0x2c) = 0x2000;
      }
      _Dst = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        _Dst = plVar7;
      }
      memset(_Dst,0,0x400);
      iVar1 = (int)param_1[5];
      iVar11 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar11 = iVar1;
      }
      if (iVar1 % 0x20 != 0) {
        if ((longlong *)param_1[4] != (longlong *)0x0) {
          plVar7 = (longlong *)param_1[4];
        }
        bVar4 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)plVar7 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar11 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 147befffc FUN_147befffc body=450 status=ok
// SIG undefined FUN_147befffc(void)

void FUN_147befffc(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x60;
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar10),*(undefined4 *)(lVar3 + 4 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x5c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar10) =
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



// FUNCTION 147bf01c0 FUN_147bf01c0 body=124 status=ok
// SIG undefined FUN_147bf01c0(void)

longlong FUN_147bf01c0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_147bf023e();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_147bf029c(param_1,&local_24,param_2);
    lVar1 = (longlong)local_24 * 0x60 + *param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 147bf023e FUN_147bf023e body=93 status=ok
// SIG undefined FUN_147bf023e(void)

longlong FUN_147bf023e(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x60;
        if ((*(int *)(lVar1 + lVar4) == *param_3) && (*(int *)(lVar1 + 4 + lVar4) == param_3[1])) {
          return lVar1 + lVar4;
        }
        iVar2 = *(int *)(lVar1 + lVar4 + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147bf029c FUN_147bf029c body=272 status=ok
// SIG undefined FUN_147bf029c(void)

undefined4 * FUN_147bf029c(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_147bf03ae(param_1,local_48);
  FUN_147bf055c(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_147bf049c(param_1,param_3,local_40,local_48);
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
      FUN_147befffc(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf03ae FUN_147bf03ae body=238 status=ok
// SIG undefined FUN_147bf03ae(void)

int * FUN_147bf03ae(longlong *param_1,int *param_2)

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



// FUNCTION 147bf049c FUN_147bf049c body=192 status=ok
// SIG undefined FUN_147bf049c(void)

undefined8 FUN_147bf049c(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar3 * 0x60;
        _Dst = (void *)(lVar1 + lVar4);
        if ((*(int *)(lVar1 + lVar4) == *param_3) && (*(int *)(lVar1 + 4 + lVar4) == param_3[1])) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_147bf0dd6((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_147bf0708(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 147bf055c FUN_147bf055c body=156 status=ok
// SIG undefined FUN_147bf055c(void)

undefined8 * FUN_147bf055c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_147bf05fa(param_2 + 1,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_147bf0dd6(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf05fa FUN_147bf05fa body=123 status=ok
// SIG undefined FUN_147bf05fa(void)

undefined8 * FUN_147bf05fa(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_147bf0676();
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



// FUNCTION 147bf0676 FUN_147bf0676 body=146 status=ok
// SIG undefined FUN_147bf0676(void)

longlong * FUN_147bf0676(longlong *param_1,longlong *param_2)

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



// FUNCTION 147bf0708 FUN_147bf0708 body=122 status=ok
// SIG undefined FUN_147bf0708(void)

void FUN_147bf0708(longlong *param_1,int param_2)

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



// FUNCTION 147bf0782 FUN_147bf0782 body=303 status=ok
// SIG undefined FUN_147bf0782(void)

void FUN_147bf0782(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  longlong *local_30;
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
        if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x10) == *param_3) goto LAB_147bf0883;
        iVar5 = *(int *)((longlong)iVar5 * 0x10 + *param_1 + 8);
      } while (iVar5 != -1);
    }
  }
  FUN_147bf08b2(param_1,local_38);
  *local_30 = *param_3;
  *(undefined4 *)(local_30 + 1) = 0xffffffff;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  iVar5 = 1;
  if (3 < uVar4) {
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
    FUN_147bf0998(param_1);
  }
LAB_147bf0883:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf08b2 FUN_147bf08b2 body=229 status=ok
// SIG undefined FUN_147bf08b2(void)

int * FUN_147bf08b2(longlong *param_1,int *param_2)

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



// FUNCTION 147bf0998 FUN_147bf0998 body=477 status=ok
// SIG undefined FUN_147bf0998(void)

void FUN_147bf0998(longlong *param_1)

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



// FUNCTION 147bf0b76 FUN_147bf0b76 body=58 status=ok
// SIG undefined FUN_147bf0b76(void)

void FUN_147bf0b76(longlong param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_147bed5c6(param_1);
  FUN_147bf0bb0(param_1,param_2);
  return;
}



// FUNCTION 147bf0bb0 FUN_147bf0bb0 body=123 status=ok
// SIG undefined FUN_147bf0bb0(void)

undefined8 * FUN_147bf0bb0(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_147bf0c2c();
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



// FUNCTION 147bf0c2c FUN_147bf0c2c body=425 status=ok
// SIG undefined FUN_147bf0c2c(void)

longlong * FUN_147bf0c2c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
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
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[5];
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
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar5, uStack_58 != plVar1)) {
      do {
        local_70 = uVar5;
        lVar2 = *local_88;
        lVar8 = (longlong)iVar6 * 0x60;
        *(undefined4 *)(lVar2 + 0x50 + lVar8) = 0;
        if (*(longlong *)(lVar2 + 0x48 + lVar8) != 0) {
          FUN_1400020a8();
        }
        FUN_147bf0dd6(lVar2 + lVar8 + 8);
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_88 != param_1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || local_70._4_4_ != iVar7));
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



// FUNCTION 147bf0dd6 FUN_147bf0dd6 body=52 status=ok
// SIG undefined FUN_147bf0dd6(void)

void FUN_147bf0dd6(longlong *param_1)

{
  FUN_147bf0e0a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bf0e0a FUN_147bf0e0a body=89 status=ok
// SIG undefined FUN_147bf0e0a(void)

void FUN_147bf0e0a(longlong param_1)

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



// FUNCTION 147bf0e64 FUN_147bf0e64 body=52 status=ok
// SIG undefined FUN_147bf0e64(void)

void FUN_147bf0e64(longlong *param_1)

{
  FUN_147bf0e98();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bf0e98 FUN_147bf0e98 body=89 status=ok
// SIG undefined FUN_147bf0e98(void)

void FUN_147bf0e98(longlong param_1)

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



// FUNCTION 147bf0ef2 FUN_147bf0ef2 body=52 status=ok
// SIG undefined FUN_147bf0ef2(void)

void FUN_147bf0ef2(longlong *param_1)

{
  FUN_147bf0f26();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bf0f26 FUN_147bf0f26 body=89 status=ok
// SIG undefined FUN_147bf0f26(void)

void FUN_147bf0f26(longlong param_1)

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



// FUNCTION 147bf0f80 FUN_147bf0f80 body=52 status=ok
// SIG undefined FUN_147bf0f80(void)

void FUN_147bf0f80(longlong *param_1)

{
  FUN_147bf0fb4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bf0fb4 FUN_147bf0fb4 body=349 status=ok
// SIG undefined FUN_147bf0fb4(void)

void FUN_147bf0fb4(longlong *param_1)

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
      FUN_147bf0ef2(lVar2 + lVar3 + 8);
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



// FUNCTION 147bf1112 FUN_147bf1112 body=96 status=ok
// SIG undefined FUN_147bf1112(void)

void FUN_147bf1112(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 147bf1172 FUN_147bf1172 body=111 status=ok
// SIG undefined FUN_147bf1172(void)

void FUN_147bf1172(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147bf11e1 FUN_147bf11e1 body=52 status=ok
// SIG undefined FUN_147bf11e1(void)

void FUN_147bf11e1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1400e7d28(param_1,param_2);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return;
}



// FUNCTION 147bf1216 FUN_147bf1216 body=114 status=ok
// SIG undefined FUN_147bf1216(void)

void FUN_147bf1216(longlong *param_1,int param_2)

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



// FUNCTION 147bf1288 FUN_147bf1288 body=69 status=ok
// SIG undefined FUN_147bf1288(void)

void FUN_147bf1288(longlong param_1,uint param_2)

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
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_140576b56(param_1);
    return;
  }
  return;
}



// FUNCTION 147bf12ce FUN_147bf12ce body=297 status=ok
// SIG undefined FUN_147bf12ce(void)

undefined4 * FUN_147bf12ce(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
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
  FUN_14085c0b4(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar4 = FUN_14085c03a(param_1,uVar9,local_40,&local_4c);
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
      FUN_140576b56(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf13f8 FUN_147bf13f8 body=203 status=ok
// SIG undefined FUN_147bf13f8(void)

int FUN_147bf13f8(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_147bf1442:
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_147bf14b8;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_147bf14b8;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_147bf14a9;
    }
  }
  return -1;
LAB_147bf14b8:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_147bf14a9:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_147bf1442;
}



// FUNCTION 147bf14c4 FUN_147bf14c4 body=328 status=ok
// SIG undefined FUN_147bf14c4(void)

undefined4 *
FUN_147bf14c4(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14588ec7e(param_1,local_50);
  FUN_147bf160e(param_3,local_48);
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_54 = local_50[0];
  iVar7 = *(int *)(local_48 + 1);
  if (iVar7 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*local_48;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar6);
  local_68 = param_4;
  cVar2 = FUN_14588ebf0(param_1,uVar3,local_48,&local_54);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x1c) = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1412a63d0(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf160e FUN_147bf160e body=99 status=ok
// SIG undefined FUN_147bf160e(void)

undefined8 * FUN_147bf160e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
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
  *(undefined4 *)(param_2 + 2) = *puVar3;
  return param_2;
}



// FUNCTION 147bf1672 FUN_147bf1672 body=301 status=ok
// SIG undefined FUN_147bf1672(void)

undefined4 *
FUN_147bf1672(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
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
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147bf17a0(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_48 = uVar5;
  *(undefined8 *)(local_48 + 2) = *puVar1;
  local_48[4] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar3 = FUN_147bf1886(param_1,uVar5,local_48,&local_54);
  uVar2 = local_54;
  if (cVar3 == '\0') {
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
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_48[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_48[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147bf1986(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf17a0 FUN_147bf17a0 body=230 status=ok
// SIG undefined FUN_147bf17a0(void)

int * FUN_147bf17a0(longlong *param_1,int *param_2)

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



// FUNCTION 147bf1886 FUN_147bf1886 body=142 status=ok
// SIG undefined FUN_147bf1886(void)

void FUN_147bf1886(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147bf1914(iVar2,*param_4);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_147bf18f0;
        }
        iVar8 = piVar1[4];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_147bf18f0:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 147bf1914 FUN_147bf1914 body=114 status=ok
// SIG undefined FUN_147bf1914(void)

void FUN_147bf1914(longlong *param_1,int param_2)

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



// FUNCTION 147bf1986 FUN_147bf1986 body=419 status=ok
// SIG undefined FUN_147bf1986(void)

void FUN_147bf1986(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
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



// FUNCTION 147bf1b2a FUN_147bf1b2a body=333 status=ok
// SIG undefined FUN_147bf1b2a(void)

undefined4 *
FUN_147bf1b2a(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

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
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147bf1c78(param_1,local_50);
  FUN_147bf1de0(local_48,*param_3,param_3[1]);
  *(undefined4 *)(local_48 + 4) = 0xffffffff;
  local_54 = local_50[0];
  iVar7 = *(int *)(local_48 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_48;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  local_68 = param_4;
  cVar3 = FUN_147bf1d5e(param_1,uVar4,local_48,&local_54);
  uVar2 = local_54;
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
      *(uint *)((longlong)local_48 + 0x24) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 4) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147bf1f08(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf1c78 FUN_147bf1c78 body=230 status=ok
// SIG undefined FUN_147bf1c78(void)

int * FUN_147bf1c78(longlong *param_1,int *param_2)

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



// FUNCTION 147bf1d5e FUN_147bf1d5e body=129 status=ok
// SIG undefined FUN_147bf1d5e(void)

void FUN_147bf1d5e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
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
  undefined1 uVar9;
  int iVar10;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar10 = FUN_147bf13f8();
    if (iVar10 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x28);
      FUN_147bde9f2(puVar1);
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      uVar6 = param_3[5];
      uVar7 = param_3[6];
      uVar8 = param_3[7];
      puVar1[4] = param_3[4];
      puVar1[5] = uVar6;
      puVar1[6] = uVar7;
      puVar1[7] = uVar8;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_147bf1e52(param_1,*param_4);
      *param_4 = iVar10;
      uVar9 = 1;
      goto LAB_147bf1d7f;
    }
  }
  uVar9 = 0;
LAB_147bf1d7f:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar9;
  }
  return;
}



// FUNCTION 147bf1de0 FUN_147bf1de0 body=113 status=ok
// SIG undefined FUN_147bf1de0(void)

undefined8 * FUN_147bf1de0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = *param_3;
  lVar2 = param_3[1];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 147bf1e52 FUN_147bf1e52 body=114 status=ok
// SIG undefined FUN_147bf1e52(void)

void FUN_147bf1e52(longlong *param_1,int param_2)

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



// FUNCTION 147bf1ec4 FUN_147bf1ec4 body=68 status=ok
// SIG undefined FUN_147bf1ec4(void)

void FUN_147bf1ec4(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_147bf1f08(param_1);
  return;
}



// FUNCTION 147bf1f08 FUN_147bf1f08 body=476 status=ok
// SIG undefined FUN_147bf1f08(void)

void FUN_147bf1f08(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
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
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
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
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf20e6 FUN_147bf20e6 body=322 status=ok
// SIG undefined FUN_147bf20e6(void)

void FUN_147bf20e6(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 147bf222a FUN_147bf222a body=279 status=ok
// SIG undefined FUN_147bf222a(void)

void FUN_147bf222a(longlong *param_1)

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
      FUN_147bde9f2((longlong)iStack_44 * 0x28 + *local_60);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf2342 FUN_147bf2342 body=68 status=ok
// SIG undefined FUN_147bf2342(void)

void FUN_147bf2342(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147bf2386();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147bf2386 FUN_147bf2386 body=322 status=ok
// SIG undefined FUN_147bf2386(void)

void FUN_147bf2386(longlong *param_1)

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



// FUNCTION 147bf24ca FUN_147bf24ca body=48 status=ok
// SIG undefined FUN_147bf24ca(void)

void FUN_147bf24ca(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bf24fa FUN_147bf24fa body=29 status=ok
// SIG undefined FUN_147bf24fa(void)

undefined8 FUN_147bf24fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bf2518 FUN_147bf2518 body=83 status=ok
// SIG undefined FUN_147bf2518(void)

void FUN_147bf2518(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 << 2,0);
  iVar1 = (int)(uVar2 >> 2);
  iVar3 = 0x7fffffff;
  if ((int)param_2 <= iVar1) {
    iVar3 = iVar1;
  }
  if (iVar3 == *(int *)(param_1 + 0x10c)) {
    return;
  }
  *(int *)(param_1 + 0x10c) = iVar3;
  FUN_147bf256c(param_1,*(undefined4 *)(param_1 + 0x108));
  return;
}



// FUNCTION 147bf256c FUN_147bf256c body=141 status=ok
// SIG undefined FUN_147bf256c(void)

void FUN_147bf256c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,4);
  return;
}



// FUNCTION 147bf25fa FUN_147bf25fa body=119 status=ok
// SIG undefined FUN_147bf25fa(void)

void FUN_147bf25fa(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x40;
    if (0x40 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x40 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_147bf256c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147bf2672 FUN_147bf2672 body=296 status=ok
// SIG undefined FUN_147bf2672(void)

undefined4 * FUN_147bf2672(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147bf17a0(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar3 = FUN_147bf1886(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147bf1986(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf279c FUN_147bf279c body=110 status=ok
// SIG undefined FUN_147bf279c(void)

void FUN_147bf279c(longlong param_1,int param_2)

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
    FUN_147bf280c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}


