// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1459ccb3a FUN_1459ccb3a body=99 status=ok
// SIG undefined FUN_1459ccb3a(void)

void FUN_1459ccb3a(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_1459ccb9e(param_1 + 0x4780,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 1459ccb9e FUN_1459ccb9e body=175 status=ok
// SIG undefined FUN_1459ccb9e(void)

void FUN_1459ccb9e(longlong param_1,char param_2,float param_3)

{
  longlong lVar1;
  float *pfVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  
  if ((longlong)*(int *)(param_1 + 0x1d0) == 0) {
    return;
  }
  pfVar2 = *(float **)(param_1 + 0x1c8);
  lVar1 = (longlong)*(int *)(param_1 + 0x1d0) << 5;
  do {
    uVar3 = 0x14;
    if (param_2 == '\x01') {
LAB_1459ccbd2:
      fVar4 = *(float *)((longlong)pfVar2 + uVar3) * param_3;
    }
    else {
      fVar4 = param_3;
      if (param_2 == '\x02') {
        uVar3 = (ulonglong)((*(byte *)(pfVar2 + 7) ^ 1) << 4);
        goto LAB_1459ccbd2;
      }
    }
    fVar5 = 0.0;
    if (0.0 <= pfVar2[4] - fVar4) {
      fVar5 = pfVar2[4] - fVar4;
    }
    pfVar2[4] = fVar5;
    if (*(char *)(pfVar2 + 7) == '\x01') {
      *pfVar2 = *pfVar2 - fVar4;
    }
    pfVar2 = pfVar2 + 8;
    lVar1 = lVar1 + -0x20;
    if (lVar1 == 0) {
      if ((*(byte *)(param_1 + 0x55) & 2) != 0) {
        FUN_1401e6b02(param_1);
      }
      FUN_140ecee9a(param_1 + 0xf8,*(undefined1 *)(param_1 + 0x1c4));
      return;
    }
  } while( true );
}



// FUNCTION 1459ccc4e FUN_1459ccc4e body=571 status=ok
// SIG undefined FUN_1459ccc4e(void)

void FUN_1459ccc4e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1459cd002();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_14475cc44(param_1 + 0x3ac8,&local_40);
    puVar7 = local_40;
    if (local_38 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    uVar4 = FUN_145a19652();
    local_50 = 0;
    local_58 = 0;
    uVar4 = FUN_141433b6f(uVar4,0,puVar7,0);
    lVar5 = FUN_1459cce8a(param_1,uVar4);
    if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar5);
    }
    *(longlong *)(param_1 + 0x39d0) = lVar5;
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_14475cc44(param_1 + 0x3aa8,&local_40);
    puVar7 = local_40;
    if (local_38 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    uVar4 = FUN_141167972();
    local_50 = 0;
    local_58 = 0;
    uVar4 = FUN_141433b6f(uVar4,0,puVar7,0);
    lVar5 = FUN_1459ccf46(param_1,uVar4);
    if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar5);
    }
    *(longlong *)(param_1 + 0x39d8) = lVar5;
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
      lVar5 = *(longlong *)(param_1 + 0x39d8);
    }
    lVar8 = *(longlong *)(param_1 + 0x39d0);
    if (DAT_14c950c29 == 1) {
      if (lVar8 == 0) {
        lVar8 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar8 = *(longlong *)(param_1 + 0x39d0);
      }
    }
    *(longlong *)(lVar5 + 0x28) = lVar8;
  }
  iVar1 = *(int *)(param_1 + 0x2d88);
  if ((longlong)iVar1 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x2d80);
    lVar8 = 0;
    do {
      lVar2 = *(longlong *)(lVar5 + lVar8);
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar2);
LAB_1459ccdd5:
        lVar6 = FUN_141433a8a();
        if ((((lVar6 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0)) &&
            (*(int *)(lVar6 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30)) {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar2);
          }
          *(longlong *)(param_1 + 0x39e0) = lVar2;
        }
      }
      else if (lVar2 != 0) goto LAB_1459ccdd5;
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459cce8a FUN_1459cce8a body=187 status=ok
// SIG undefined FUN_1459cce8a(void)

undefined8 FUN_1459cce8a(undefined8 param_1,undefined8 param_2)

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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0x40;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459ccf46 FUN_1459ccf46 body=187 status=ok
// SIG undefined FUN_1459ccf46(void)

undefined8 FUN_1459ccf46(undefined8 param_1,undefined8 param_2)

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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0x40;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459cd002 FUN_1459cd002 body=528 status=ok
// SIG undefined FUN_1459cd002(void)

void FUN_1459cd002(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0) {
    *(byte *)((longlong)param_1 + 100) = *(byte *)((longlong)param_1 + 100) | 2;
    FUN_1406ca06e(param_1);
  }
  local_48 = 0;
  iVar1 = (int)param_1[0x5b3];
  lVar2 = param_1[0x5b2];
  local_40 = iVar1;
  if (iVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1459cd4f2(&local_48,iVar1);
    FUN_1459cd33f(local_48,lVar2,iVar1);
  }
  uVar4 = FUN_1448c2e86();
  FUN_1459cd38a(&local_60);
  FUN_1459cd5d0(uVar4,&local_58,local_60);
  lVar2 = local_58;
  if ((longlong)local_50 != 0) {
    lVar8 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar8);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,&local_48);
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)local_50 * 8 != lVar8);
  }
  lVar2 = local_48;
  lVar8 = (longlong)local_40;
  if (0 < lVar8) {
    lVar7 = 0;
    do {
      lVar6 = *(longlong *)(lVar2 + lVar7);
      if ((lVar6 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar6);
LAB_1459cd10d:
        lVar5 = FUN_1410ec160();
        if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30)) {
          local_68 = lVar6;
          if ((lVar6 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar6);
          }
          lVar6 = (**(code **)(*param_1 + 0x6b0))(param_1,&local_68);
          if (lVar6 != 0) {
            lVar5 = FUN_141434440();
            if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
              if (DAT_14c950c29 == 1) {
                FUN_1456cec3c(lVar6);
              }
              param_1[0x5c2] = lVar6;
            }
          }
        }
      }
      else if (lVar6 != 0) goto LAB_1459cd10d;
      lVar7 = lVar7 + 8;
    } while (lVar8 * 8 != lVar7);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459cd214 FUN_1459cd214 body=111 status=ok
// SIG undefined FUN_1459cd214(void)

longlong FUN_1459cd214(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if ((((lVar3 == 0) || (lVar2 = FUN_1410ec160(), lVar2 == 0)) ||
      (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *param_2;
  }
  lVar3 = FUN_1459cd283(param_1,lVar3);
  if ((lVar3 != 0) && (cVar1 = (**(code **)(*param_1 + 0x6c8))(param_1,lVar3), cVar1 != '\0')) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1459cd283 FUN_1459cd283 body=187 status=ok
// SIG undefined FUN_1459cd283(void)

undefined8 FUN_1459cd283(undefined8 param_1,undefined8 param_2)

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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459cd33f FUN_1459cd33f body=75 status=ok
// SIG undefined FUN_1459cd33f(void)

void FUN_1459cd33f(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
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
  return;
}



// FUNCTION 1459cd38a FUN_1459cd38a body=120 status=ok
// SIG undefined FUN_1459cd38a(void)

undefined8 * FUN_1459cd38a(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacf270) {
    FUN_144b3d300(&DAT_14cacf270);
    if (DAT_14cacf270 == -1) {
      FUN_1446f470e(&DAT_14cacf268,L"Camera",1);
      _Init_thread_footer(&DAT_14cacf270);
    }
  }
  *param_1 = DAT_14cacf268;
  return param_1;
}



// FUNCTION 1459cd402 FUN_1459cd402 body=239 status=ok
// SIG undefined FUN_1459cd402(void)

undefined8 FUN_1459cd402(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (param_2 == (longlong *)0x0) {
LAB_1459cd4cf:
    uVar5 = 0;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x2d80);
    uVar2 = *(uint *)(param_1 + 0x2d88);
    if (0 < (int)uVar2) {
      uVar7 = 0;
      do {
        plVar3 = *(longlong **)(*plVar1 + uVar7 * 8);
        if (plVar3 != (longlong *)0x0) {
          if (plVar3 == param_2) goto LAB_1459cd4cf;
          if (*(byte *)((longlong)param_2 + 0x2c) <= *(byte *)((longlong)plVar3 + 0x2c)) {
            if ((*(byte *)((longlong)param_2 + 0x2c) != *(byte *)((longlong)plVar3 + 0x2c)) ||
               ((*(uint *)(param_2 + 5) & 2) == 0)) goto LAB_1459cd463;
            goto LAB_1459cd4cf;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    uVar7 = (ulonglong)uVar2;
LAB_1459cd463:
    *(uint *)(param_1 + 0x2d88) = uVar2 + 1;
    if (*(uint *)(param_1 + 0x2d8c) == uVar2) {
      FUN_1459cd54c(plVar1,uVar2);
    }
    lVar6 = (longlong)(int)uVar7;
    memmove((void *)(*plVar1 + lVar6 * 8 + 8),(void *)(*plVar1 + lVar6 * 8),
            (ulonglong)(uVar2 - (int)uVar7) << 3);
    lVar4 = *plVar1;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(longlong **)(lVar4 + lVar6 * 8) = param_2;
    (**(code **)(*param_2 + 0x2b0))(param_2,param_1);
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1459cd4f2 FUN_1459cd4f2 body=89 status=ok
// SIG undefined FUN_1459cd4f2(void)

void FUN_1459cd4f2(longlong param_1,int param_2)

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



// FUNCTION 1459cd54c FUN_1459cd54c body=132 status=ok
// SIG undefined FUN_1459cd54c(void)

void FUN_1459cd54c(longlong param_1,int param_2)

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



// FUNCTION 1459cd5d0 FUN_1459cd5d0 body=133 status=ok
// SIG undefined FUN_1459cd5d0(void)

longlong * FUN_1459cd5d0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1459cd656(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 1459cd656 FUN_1459cd656 body=132 status=ok
// SIG undefined FUN_1459cd656(void)

void FUN_1459cd656(longlong param_1,int param_2)

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



// FUNCTION 1459cd6e2 FUN_1459cd6e2 body=94 status=ok
// SIG undefined FUN_1459cd6e2(void)

undefined8 * FUN_1459cd6e2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1459cd740(param_1,uVar1);
  *param_1 = &PTR_FUN_14aa52210;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) & 0xfffffff8 | 4;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[6] = 0xffffffff00000000;
  return param_1;
}



// FUNCTION 1459cd740 FUN_1459cd740 body=32 status=ok
// SIG undefined FUN_1459cd740(void)

undefined8 * FUN_1459cd740(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14a8a31d0;
  return param_1;
}



// FUNCTION 1459cd76e FUN_1459cd76e body=40 status=ok
// SIG undefined FUN_1459cd76e(void)

undefined8 FUN_1459cd76e(undefined8 param_1,int param_2)

{
  FUN_1459cd796();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cd796 FUN_1459cd796 body=80 status=ok
// SIG undefined FUN_1459cd796(void)

void FUN_1459cd796(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b72e050;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1459cd7e6 FUN_1459cd7e6 body=194 status=ok
// SIG undefined FUN_1459cd7e6(void)

double * FUN_1459cd7e6(longlong param_1,double *param_2,longlong param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  uint uVar9;
  
  dVar4 = DAT_14c846520;
  dVar3 = DAT_14c846510;
  uVar8 = (undefined4)DAT_14c846518;
  uVar9 = (uint)((ulonglong)DAT_14c846518 >> 0x20);
  if ((param_3 != 0) && (*(byte *)(param_1 + 0x28) < 2)) {
    lVar6 = FUN_1404d56e0(param_3);
    if (lVar6 != 0) {
      lVar7 = FUN_14030d4a0();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        cVar5 = FUN_1459cd8a8(lVar6);
        if (cVar5 != '\0') {
          uVar9 = uVar9 ^ 0x80000000;
        }
      }
    }
  }
  dVar1 = param_4[2];
  dVar2 = param_4[1];
  *param_2 = dVar3 * *param_4;
  param_2[1] = (double)CONCAT44(uVar9,uVar8) * dVar2;
  param_2[2] = dVar4 * dVar1;
  *(undefined1 *)(param_2 + 3) = 3;
  return param_2;
}



// FUNCTION 1459cd8a8 FUN_1459cd8a8 body=7 status=ok
// SIG undefined FUN_1459cd8a8(void)

undefined1 FUN_1459cd8a8(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x45b);
}



// FUNCTION 1459cd8b0 FUN_1459cd8b0 body=108 status=ok
// SIG undefined FUN_1459cd8b0(void)

undefined4 * FUN_1459cd8b0(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1459cd91e();
  FUN_1459cd91e();
  FUN_1448e935e(param_1,&local_30,&DAT_14c9c75b0,0);
  FUN_1459cd91e();
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



// FUNCTION 1459cd91e FUN_1459cd91e body=289 status=ok
// SIG undefined FUN_1459cd91e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1459cd91e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c7658) {
    FUN_144b3d300(&DAT_14c9c7658);
    if (DAT_14c9c7658 == -1) {
      FUN_145c0a316();
      FUN_1459cda40();
      FUN_140db5666(&DAT_14c9c75b0,0,&DAT_14c9c7548,L"FCopyDistanceFieldAtlasCS",
                    L"/Engine/Private/DistanceFieldStreaming.usf",L"CopyDistanceFieldAtlasCS",5,1,
                    FUN_14714f904,FUN_14714f8a4,&LAB_1457badd4,&LAB_14714f8a0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9c8e28);
      _DAT_14c9c75b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142be437f);
      _Init_thread_footer(&DAT_14c9c7658);
    }
  }
  return &DAT_14c9c75b0;
}



// FUNCTION 1459cda40 FUN_1459cda40 body=205 status=ok
// SIG undefined FUN_1459cda40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459cda40(void)

{
  if ((DAT_14c9c75af & 2) == 0) {
    DAT_14c9c75af = DAT_14c9c75af | 2;
    _DAT_14c9c7550 = L"FCopyDistanceFieldAtlasCS";
    _DAT_14c9c7568 = FUN_146826540;
    _DAT_14c9c7570 = FUN_146825d77;
    _DAT_14c9c7578 = FUN_146825fd6;
    _DAT_14c9c7580 = FUN_1407e02ea;
    _DAT_14c9c7588 = FUN_146826273;
    _DAT_14c9c7560 = FUN_14714f872;
    _DAT_14c9c75a0 = 0xffffffff000000e0;
    _DAT_14c9c75a8 = 8;
    DAT_14c9c75ac = 0;
    _DAT_14c9c7590 = &LAB_14714f89c;
    FUN_1459cdb0e();
    FUN_1407e00cc(&DAT_14c9c7548);
    return;
  }
  return;
}



// FUNCTION 1459cdb0e FUN_1459cdb0e body=123 status=ok
// SIG undefined FUN_1459cdb0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459cdb0e(void)

{
  _DAT_14c9c9918 = L"BASE";
  DAT_14c9c9942 = 4;
  _DAT_14c9c9920 = FUN_140b35ae4();
  _DAT_14c9c9928 = DAT_14c9c7558;
  _DAT_14c9c9930 = &LAB_14682652b;
  DAT_14c9c7558 = &DAT_14c9c9918;
  DAT_14c9c75ad = DAT_14c9c75ad + '\x01';
  _DAT_14c9c9938 = 0x100000000;
  if (*(char *)(_DAT_14c9c9920 + 100) != '\0') {
    DAT_14c9c75ae = DAT_14c9c75ae + '\x01';
  }
  return;
}



// FUNCTION 1459cdb8a FUN_1459cdb8a body=156 status=ok
// SIG undefined FUN_1459cdb8a(void)

void FUN_1459cdb8a(undefined8 param_1,longlong param_2)

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
  FUN_1459cdc28(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459cdc28 FUN_1459cdc28 body=368 status=ok
// SIG undefined FUN_1459cdc28(void)

void FUN_1459cdc28(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x48);
  if (lVar5 != 0) {
    lVar5 = lVar5 * 0x28;
    plVar8 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x40) + 8);
    do {
      plVar1 = plVar8 + -1;
      plVar6 = (longlong *)FUN_14479d2ce(plVar1);
      if (plVar6 == (longlong *)0x0) {
        if (*plVar8 != 0) {
          plVar6 = (longlong *)FUN_140007850();
          cVar4 = (*(code *)PTR_FUN_14c758760)();
          if ((plVar6 == (longlong *)0x0) || (cVar4 == '\0')) {
            FUN_14485c47a(plVar1,plVar6);
            if (plVar6 == (longlong *)0x0) goto LAB_1459cdc9a;
          }
          else {
            uVar2 = *(uint *)((longlong)plVar6 + 0xc);
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(plVar1,plVar6);
            }
          }
          if ((*(uint *)(plVar6 + 1) >> 0x1e & 1) == 0) goto LAB_1459cdc76;
        }
      }
      else {
LAB_1459cdc76:
        lVar7 = FUN_144a797b2();
        if ((((*(int *)(lVar7 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
              == lVar7 + 0x30)) && (lVar7 = FUN_145a557f0(), lVar7 != 0)) &&
           ((*(int *)(lVar7 + 0x38) <= (int)plVar6[7] &&
            (*(longlong *)(plVar6[6] + (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)))) {
          lVar7 = plVar6[0x22];
          if (lVar7 == 0) {
            (**(code **)(*plVar6 + 1000))(plVar6);
            lVar7 = plVar6[0x22];
            if (lVar7 == 0) goto LAB_1459cdc9a;
          }
          uVar3 = *(undefined8 *)(lVar7 + 0x28);
          *(longlong *)(lVar7 + 0x28) = param_1;
          FUN_14876f694(lVar7,param_1,0);
          *(undefined8 *)(lVar7 + 0x28) = uVar3;
        }
      }
LAB_1459cdc9a:
      plVar8 = plVar8 + 5;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 1459cdda4 FUN_1459cdda4 body=113 status=ok
// SIG undefined FUN_1459cdda4(void)

undefined8 * FUN_1459cdda4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140edf546();
  *param_1 = &PTR_FUN_14b0261e0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x93) = 0;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  param_1[8] = (ulonglong)DAT_14c893b00;
  uVar1 = FUN_1459cde16();
  FUN_145a3e5da(5,uVar1);
  return param_1;
}



// FUNCTION 1459cde16 FUN_1459cde16 body=55 status=ok
// SIG undefined FUN_1459cde16(void)

void FUN_1459cde16(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb561f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb561f8 = FUN_140002ddd(FUN_1464b68ad,uVar1,L"ReplicatedParticleEffectRequest");
  }
  return;
}



// FUNCTION 1459cde4e FUN_1459cde4e body=179 status=ok
// SIG undefined FUN_1459cde4e(void)

void FUN_1459cde4e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14b5c5710;
  param_2[3] = &PTR_FUN_14b023b08;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  param_2[6] = 0;
  *(undefined2 *)(param_2 + 7) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0x3b9cbb9e;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined2 *)(param_2 + 0x10) = 1;
  *(undefined4 *)(param_2 + 0x11) = 0x3f800000;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xf00000d0;
  param_2[0x19] = 0;
  *(undefined4 *)(param_2 + 0x1a) = 0x3f800000;
  return;
}



// FUNCTION 1459cdf02 FUN_1459cdf02 body=55 status=ok
// SIG undefined FUN_1459cdf02(void)

void FUN_1459cdf02(longlong *param_1)

{
  FUN_1459cdf3a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459cdf3a FUN_1459cdf3a body=123 status=ok
// SIG undefined FUN_1459cdf3a(void)

void FUN_1459cdf3a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 1459cdfb6 FUN_1459cdfb6 body=96 status=ok
// SIG undefined FUN_1459cdfb6(void)

ulonglong FUN_1459cdfb6(longlong param_1)

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
LAB_1459cdff9:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1459cdff9;
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



// FUNCTION 1459ce01c FUN_1459ce01c body=23 status=ok
// SIG undefined FUN_1459ce01c(void)

undefined8 FUN_1459ce01c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 1459ce033 FUN_1459ce033 body=183 status=ok
// SIG undefined FUN_1459ce033(void)

void FUN_1459ce033(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [40];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [40];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    FUN_141434f00(local_70,param_1);
    FUN_144928b90(local_50,2);
    local_60 = DAT_14cb8cbb8;
    local_58 = DAT_14cb8cbc0;
    FUN_1411efe9e(local_50);
    lVar1 = FUN_140149a73(param_2,0);
    if (lVar1 != 0) {
      FUN_140bc53f1(local_50,local_70,lVar1,0);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459ce0ec FUN_1459ce0ec body=103 status=ok
// SIG undefined FUN_1459ce0ec(void)

ulonglong FUN_1459ce0ec(longlong param_1)

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
LAB_1459ce136:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1459ce136;
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



// FUNCTION 1459ce154 FUN_1459ce154 body=95 status=ok
// SIG undefined FUN_1459ce154(void)

void FUN_1459ce154(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x6c8))();
    if (cVar1 != '\0') {
      lVar2 = FUN_144a5dd5e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
        lVar2 = FUN_1459ce1b4(param_1);
        if (lVar2 != 0) {
          FUN_141435120(lVar2 + 0x30);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1459ce1b4 FUN_1459ce1b4 body=105 status=ok
// SIG undefined FUN_1459ce1b4(void)

void FUN_1459ce1b4(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1459ce26a();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1459ce21e(param_1 + 0x3b38,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459ce21e FUN_1459ce21e body=76 status=ok
// SIG undefined FUN_1459ce21e(void)

void FUN_1459ce21e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1459ce26a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1459ce25b;
    }
  }
  lVar2 = 0;
LAB_1459ce25b:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1459ce26a FUN_1459ce26a body=228 status=ok
// SIG undefined FUN_1459ce26a(void)

longlong FUN_1459ce26a(void)

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
  if (DAT_14cbb1d78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_1440263f2;
    local_28 = &LAB_14102785e;
    local_38 = &LAB_148c54649;
    local_40 = FUN_1465f42c7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_Challenge",&DAT_14cbb1d78,&DAT_148c54648);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb1d78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459ce350 FUN_1459ce350 body=188 status=ok
// SIG undefined FUN_1459ce350(void)

bool FUN_1459ce350(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_48 = param_5;
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459ce40e FUN_1459ce40e body=277 status=ok
// SIG undefined FUN_1459ce40e(void)

void FUN_1459ce40e(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  ulonglong param_5)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_44 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_1459ce524();
  if (lVar3 != 0) {
    lVar4 = FUN_1447210f0(lVar3);
    lVar5 = FUN_1447210f0(param_2);
    if (((lVar4 == lVar5) && (param_4 <= param_5)) &&
       (*(int *)(lVar3 + 0x394) == *(int *)(param_2 + 0x394))) {
      lVar3 = FUN_1459ce58e(param_1,param_3);
      if (((lVar3 != 0) && ((*(uint *)(param_1 + 8) & 0x10) == 0)) &&
         ((*(longlong *)(param_1 + 0x20) != 0 &&
          (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0xc30), plVar2 != (longlong *)0x0
          )))) {
        lVar4 = FUN_14620a5eb();
        iVar1 = *(int *)(lVar4 + 0x28);
        puVar7 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar3 + 8) != (undefined4 *)0x0) {
          puVar7 = *(undefined4 **)(lVar3 + 8);
        }
        FUN_144a7660c(puVar7,local_44,1);
        uVar6 = (**(code **)(*plVar2 + 0x2a8))(plVar2);
        local_58 = 1;
        FUN_14105a17e(plVar2,local_44,((int)param_5 - (int)param_4) * iVar1,uVar6);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459ce524 FUN_1459ce524 body=105 status=ok
// SIG undefined FUN_1459ce524(void)

longlong FUN_1459ce524(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((((*(uint *)(param_1 + 8) & 0x10) == 0) && (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0)
      ) && (*(longlong *)(lVar1 + 0x398) != 0)) {
    lVar3 = FUN_144a7b4ca();
    lVar1 = *(longlong *)(lVar1 + 0x398);
    if (lVar1 != 0) {
      if (lVar3 == 0) {
        return 0;
      }
      lVar2 = *(longlong *)(lVar1 + 0x10);
      if (lVar2 == 0) {
        return 0;
      }
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30) {
          return 0;
        }
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 1459ce58e FUN_1459ce58e body=114 status=ok
// SIG undefined FUN_1459ce58e(void)

undefined8 FUN_1459ce58e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x80) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x78);
    lVar5 = (longlong)*(int *)(param_1 + 0x80) * 0xe8;
    do {
      lVar1 = FUN_140e44844(lVar4);
      if (lVar1 != 0) {
        lVar2 = FUN_140e448c6(lVar1);
        if (lVar2 == param_2) {
          uVar3 = FUN_1457b1050(lVar1);
          return uVar3;
        }
      }
      lVar4 = lVar4 + 0xe8;
      lVar5 = lVar5 + -0xe8;
    } while (lVar5 != 0);
  }
  return 0;
}



// FUNCTION 1459ce600 FUN_1459ce600 body=493 status=ok
// SIG undefined FUN_1459ce600(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1459ce600(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong local_70 [11];
  
  local_70[10] = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_70[7] = 0;
  local_70[8] = 0;
  local_70[5] = 0;
  local_70[6] = 0;
  local_70[3] = 0;
  local_70[4] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[9] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70 + 1);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  local_70[0] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a0 = local_88;
  uVar1 = FUN_14477b664(uStack_80);
  local_98 = FUN_14477b664(uVar1);
  local_90 = local_78;
  local_a8 = local_70[0];
  if ((local_70[0] != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = local_70 + 1;
  }
  uVar1 = FUN_1459ce870(plVar2,&local_a8,&local_a0);
  FUN_1459ce7ee(param_3,uVar1);
  FUN_141435294(local_70 + 1);
  if ((local_70[10] ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459ce7ee FUN_1459ce7ee body=129 status=ok
// SIG undefined FUN_1459ce7ee(void)

longlong * FUN_1459ce7ee(longlong *param_1,longlong *param_2)

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
    }
  }
  param_1[1] = lVar2;
  FUN_1403de7ba(param_1 + 2,param_2 + 2);
  FUN_1409ed7fc(param_1 + 6,param_2 + 6);
  param_1[8] = param_2[8];
  return param_1;
}



// FUNCTION 1459ce870 FUN_1459ce870 body=212 status=ok
// SIG undefined FUN_1459ce870(void)

longlong FUN_1459ce870(longlong param_1,undefined8 param_2,longlong *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_78 [32];
  undefined8 **local_58;
  undefined8 local_50;
  longlong local_48;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0x18;
  local_58 = (undefined8 **)*param_3;
  uVar2 = FUN_14477b664(param_3[1]);
  local_50 = FUN_14477b664(uVar2);
  local_48 = param_3[2];
  local_38 = 0x1d;
  FUN_14095c1ce(param_1 + 0x30,param_2,&local_58,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = &local_58;
    if (0x18 < local_40) {
      pppuVar3 = (undefined8 ***)local_58;
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459ce952 FUN_1459ce952 body=34 status=ok
// SIG undefined FUN_1459ce952(void)

void FUN_1459ce952(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149e30820;
  return;
}



// FUNCTION 1459ce980 FUN_1459ce980 body=34 status=ok
// SIG undefined FUN_1459ce980(void)

void FUN_1459ce980(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149e89340;
  return;
}



// FUNCTION 1459ce9ae FUN_1459ce9ae body=34 status=ok
// SIG undefined FUN_1459ce9ae(void)

void FUN_1459ce9ae(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149ec5220;
  return;
}



// FUNCTION 1459ce9dc FUN_1459ce9dc body=34 status=ok
// SIG undefined FUN_1459ce9dc(void)

void FUN_1459ce9dc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149ee9b10;
  return;
}



// FUNCTION 1459cea0a FUN_1459cea0a body=34 status=ok
// SIG undefined FUN_1459cea0a(void)

void FUN_1459cea0a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149ef7d10;
  return;
}



// FUNCTION 1459cea38 FUN_1459cea38 body=34 status=ok
// SIG undefined FUN_1459cea38(void)

void FUN_1459cea38(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149f11820;
  return;
}



// FUNCTION 1459cea66 FUN_1459cea66 body=34 status=ok
// SIG undefined FUN_1459cea66(void)

void FUN_1459cea66(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149f230f0;
  return;
}



// FUNCTION 1459cea94 FUN_1459cea94 body=34 status=ok
// SIG undefined FUN_1459cea94(void)

void FUN_1459cea94(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149f3c750;
  return;
}



// FUNCTION 1459ceac2 FUN_1459ceac2 body=34 status=ok
// SIG undefined FUN_1459ceac2(void)

void FUN_1459ceac2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149f45850;
  return;
}



// FUNCTION 1459ceaf0 FUN_1459ceaf0 body=34 status=ok
// SIG undefined FUN_1459ceaf0(void)

void FUN_1459ceaf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a14f8b0;
  return;
}



// FUNCTION 1459ceb1e FUN_1459ceb1e body=34 status=ok
// SIG undefined FUN_1459ceb1e(void)

void FUN_1459ceb1e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a15eb00;
  return;
}



// FUNCTION 1459ceb4c FUN_1459ceb4c body=34 status=ok
// SIG undefined FUN_1459ceb4c(void)

void FUN_1459ceb4c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a1858a0;
  return;
}



// FUNCTION 1459ceb7c FUN_1459ceb7c body=31 status=ok
// SIG undefined FUN_1459ceb7c(void)

undefined8 FUN_1459ceb7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cebaa FUN_1459cebaa body=31 status=ok
// SIG undefined FUN_1459cebaa(void)

undefined8 FUN_1459cebaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cebd6 FUN_1459cebd6 body=34 status=ok
// SIG undefined FUN_1459cebd6(void)

void FUN_1459cebd6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a1c9dc0;
  return;
}



// FUNCTION 1459cec04 FUN_1459cec04 body=34 status=ok
// SIG undefined FUN_1459cec04(void)

void FUN_1459cec04(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a1e15b0;
  return;
}



// FUNCTION 1459cec32 FUN_1459cec32 body=34 status=ok
// SIG undefined FUN_1459cec32(void)

void FUN_1459cec32(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a33f060;
  return;
}



// FUNCTION 1459cec60 FUN_1459cec60 body=34 status=ok
// SIG undefined FUN_1459cec60(void)

void FUN_1459cec60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a38b680;
  return;
}



// FUNCTION 1459cec82 FUN_1459cec82 body=40 status=ok
// SIG undefined FUN_1459cec82(void)

undefined8 FUN_1459cec82(undefined8 param_1,int param_2)

{
  thunk_FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cecaa thunk_FUN_1402ef4ac body=5 status=ok
// SIG undefined thunk_FUN_1402ef4ac(void)

void thunk_FUN_1402ef4ac(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_14a77e150;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x6a],*(undefined4 *)(param_1 + 0x6b));
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x66],*(undefined4 *)(param_1 + 0x67));
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[99],*(undefined4 *)(param_1 + 100));
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x60],*(undefined4 *)(param_1 + 0x61));
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x56];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_1407903ca(param_1 + 0x48);
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_140115fde(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  lVar5 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xe) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar6 = *(int *)(param_1 + 0xe) + -1;
      lVar4 = (longlong)iVar6 * 0x88;
      lVar2 = DAT_14c9a3d60 + lVar4;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar4),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar4));
      if (*(longlong *)(lVar5 + 0x70 + lVar4) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar6,1);
    }
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  FUN_144760f98(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459cecbc FUN_1459cecbc body=34 status=ok
// SIG undefined FUN_1459cecbc(void)

void FUN_1459cecbc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a3ea1b0;
  return;
}



// FUNCTION 1459cecea FUN_1459cecea body=34 status=ok
// SIG undefined FUN_1459cecea(void)

void FUN_1459cecea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a3ef480;
  return;
}



// FUNCTION 1459ced18 FUN_1459ced18 body=34 status=ok
// SIG undefined FUN_1459ced18(void)

void FUN_1459ced18(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a42d2c0;
  return;
}



// FUNCTION 1459ced46 FUN_1459ced46 body=34 status=ok
// SIG undefined FUN_1459ced46(void)

void FUN_1459ced46(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a49f900;
  return;
}



// FUNCTION 1459ced74 FUN_1459ced74 body=34 status=ok
// SIG undefined FUN_1459ced74(void)

void FUN_1459ced74(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a4c6d40;
  return;
}



// FUNCTION 1459ceda2 FUN_1459ceda2 body=34 status=ok
// SIG undefined FUN_1459ceda2(void)

void FUN_1459ceda2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a565e00;
  return;
}



// FUNCTION 1459cedd0 FUN_1459cedd0 body=34 status=ok
// SIG undefined FUN_1459cedd0(void)

void FUN_1459cedd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a5a8d10;
  return;
}



// FUNCTION 1459cedfe FUN_1459cedfe body=34 status=ok
// SIG undefined FUN_1459cedfe(void)

void FUN_1459cedfe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a5b5980;
  return;
}



// FUNCTION 1459cee20 FUN_1459cee20 body=40 status=ok
// SIG undefined FUN_1459cee20(void)

undefined8 FUN_1459cee20(undefined8 param_1,int param_2)

{
  thunk_FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cee48 FUN_1459cee48 body=84 status=ok
// SIG undefined FUN_1459cee48(void)

undefined8 FUN_1459cee48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_1459cee9c(param_2 + 0x10,param_3 + 0x10);
    *(uint *)(param_2 + 0x20) =
         *(uint *)(param_2 + 0x20) & 0xfffffffe | *(uint *)(param_3 + 0x20) & 1;
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 1459cee9c FUN_1459cee9c body=88 status=ok
// SIG undefined FUN_1459cee9c(void)

undefined8 * FUN_1459cee9c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1459ceef4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1459ceef4 FUN_1459ceef4 body=98 status=ok
// SIG undefined FUN_1459ceef4(void)

void FUN_1459ceef4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1459cef56 FUN_1459cef56 body=40 status=ok
// SIG undefined FUN_1459cef56(void)

undefined8 FUN_1459cef56(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cef7e thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1459cef84 FUN_1459cef84 body=40 status=ok
// SIG undefined FUN_1459cef84(void)

undefined8 FUN_1459cef84(undefined8 param_1,int param_2)

{
  thunk_FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cefac thunk_FUN_1402ef4ac body=5 status=ok
// SIG undefined thunk_FUN_1402ef4ac(void)

void thunk_FUN_1402ef4ac(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_14a77e150;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x6a],*(undefined4 *)(param_1 + 0x6b));
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x66],*(undefined4 *)(param_1 + 0x67));
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[99],*(undefined4 *)(param_1 + 100));
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x60],*(undefined4 *)(param_1 + 0x61));
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x56];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_1407903ca(param_1 + 0x48);
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_140115fde(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  lVar5 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xe) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar6 = *(int *)(param_1 + 0xe) + -1;
      lVar4 = (longlong)iVar6 * 0x88;
      lVar2 = DAT_14c9a3d60 + lVar4;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar4),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar4));
      if (*(longlong *)(lVar5 + 0x70 + lVar4) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar6,1);
    }
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  FUN_144760f98(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459cefb2 FUN_1459cefb2 body=40 status=ok
// SIG undefined FUN_1459cefb2(void)

undefined8 FUN_1459cefb2(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cefda thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1459cefe0 FUN_1459cefe0 body=40 status=ok
// SIG undefined FUN_1459cefe0(void)

undefined8 FUN_1459cefe0(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cf008 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1459cf00e FUN_1459cf00e body=40 status=ok
// SIG undefined FUN_1459cf00e(void)

undefined8 FUN_1459cf00e(undefined8 param_1,int param_2)

{
  thunk_FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cf036 thunk_FUN_140bc97f4 body=5 status=ok
// SIG undefined thunk_FUN_140bc97f4(void)

void thunk_FUN_140bc97f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a648ae0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b9920(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459cf03c FUN_1459cf03c body=40 status=ok
// SIG undefined FUN_1459cf03c(void)

undefined8 FUN_1459cf03c(undefined8 param_1,int param_2)

{
  thunk_FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cf064 thunk_FUN_140bc97f4 body=5 status=ok
// SIG undefined thunk_FUN_140bc97f4(void)

void thunk_FUN_140bc97f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a648ae0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b9920(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459cf06a FUN_1459cf06a body=40 status=ok
// SIG undefined FUN_1459cf06a(void)

undefined8 FUN_1459cf06a(undefined8 param_1,int param_2)

{
  thunk_FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cf092 thunk_FUN_1402ef4ac body=5 status=ok
// SIG undefined thunk_FUN_1402ef4ac(void)

void thunk_FUN_1402ef4ac(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_14a77e150;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x6a],*(undefined4 *)(param_1 + 0x6b));
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x66],*(undefined4 *)(param_1 + 0x67));
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[99],*(undefined4 *)(param_1 + 100));
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x60],*(undefined4 *)(param_1 + 0x61));
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x56];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_1407903ca(param_1 + 0x48);
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_140115fde(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  lVar5 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xe) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar6 = *(int *)(param_1 + 0xe) + -1;
      lVar4 = (longlong)iVar6 * 0x88;
      lVar2 = DAT_14c9a3d60 + lVar4;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar4),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar4));
      if (*(longlong *)(lVar5 + 0x70 + lVar4) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar6,1);
    }
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  FUN_144760f98(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459cf098 FUN_1459cf098 body=40 status=ok
// SIG undefined FUN_1459cf098(void)

undefined8 FUN_1459cf098(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cf0c0 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1459cf0c6 FUN_1459cf0c6 body=40 status=ok
// SIG undefined FUN_1459cf0c6(void)

undefined8 FUN_1459cf0c6(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cf0ee thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1459cf0f4 FUN_1459cf0f4 body=40 status=ok
// SIG undefined FUN_1459cf0f4(void)

undefined8 FUN_1459cf0f4(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cf11c thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1459cf122 FUN_1459cf122 body=40 status=ok
// SIG undefined FUN_1459cf122(void)

undefined8 FUN_1459cf122(undefined8 param_1,int param_2)

{
  thunk_FUN_1402beb54();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cf14a thunk_FUN_1402beb54 body=5 status=ok
// SIG undefined thunk_FUN_1402beb54(void)

void thunk_FUN_1402beb54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9b8bb0;
  if (*(char *)(param_1 + 0x34) == '\x01') {
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x199) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x199) = 0;
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459cf15c FUN_1459cf15c body=34 status=ok
// SIG undefined FUN_1459cf15c(void)

void FUN_1459cf15c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14aae6220;
  return;
}



// FUNCTION 1459cf17e FUN_1459cf17e body=40 status=ok
// SIG undefined FUN_1459cf17e(void)

undefined8 FUN_1459cf17e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cf1b2 FUN_1459cf1b2 body=34 status=ok
// SIG undefined FUN_1459cf1b2(void)

void FUN_1459cf1b2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ab40d40;
  return;
}



// FUNCTION 1459cf1e0 FUN_1459cf1e0 body=34 status=ok
// SIG undefined FUN_1459cf1e0(void)

void FUN_1459cf1e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ab413b0;
  return;
}



// FUNCTION 1459cf20e FUN_1459cf20e body=34 status=ok
// SIG undefined FUN_1459cf20e(void)

void FUN_1459cf20e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ab4a0a0;
  return;
}



// FUNCTION 1459cf23c FUN_1459cf23c body=34 status=ok
// SIG undefined FUN_1459cf23c(void)

void FUN_1459cf23c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ab66c80;
  return;
}



// FUNCTION 1459cf25e FUN_1459cf25e body=44 status=ok
// SIG undefined FUN_1459cf25e(void)

undefined8 FUN_1459cf25e(undefined8 param_1,int param_2)

{
  FUN_1414352ec();
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 1459cf296 FUN_1459cf296 body=34 status=ok
// SIG undefined FUN_1459cf296(void)

void FUN_1459cf296(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ab67b40;
  return;
}



// FUNCTION 1459cf2c6 FUN_1459cf2c6 body=31 status=ok
// SIG undefined FUN_1459cf2c6(void)

undefined8 FUN_1459cf2c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cf2f2 FUN_1459cf2f2 body=34 status=ok
// SIG undefined FUN_1459cf2f2(void)

void FUN_1459cf2f2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14aba47d0;
  return;
}



// FUNCTION 1459cf320 FUN_1459cf320 body=34 status=ok
// SIG undefined FUN_1459cf320(void)

void FUN_1459cf320(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14abbfed0;
  return;
}



// FUNCTION 1459cf34e FUN_1459cf34e body=34 status=ok
// SIG undefined FUN_1459cf34e(void)

void FUN_1459cf34e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14abe5790;
  return;
}



// FUNCTION 1459cf37e FUN_1459cf37e body=31 status=ok
// SIG undefined FUN_1459cf37e(void)

undefined8 FUN_1459cf37e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cf3ac FUN_1459cf3ac body=31 status=ok
// SIG undefined FUN_1459cf3ac(void)

undefined8 FUN_1459cf3ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cf3d8 FUN_1459cf3d8 body=34 status=ok
// SIG undefined FUN_1459cf3d8(void)

void FUN_1459cf3d8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ac8abb0;
  return;
}



// FUNCTION 1459cf406 FUN_1459cf406 body=34 status=ok
// SIG undefined FUN_1459cf406(void)

void FUN_1459cf406(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ac97b90;
  return;
}



// FUNCTION 1459cf434 FUN_1459cf434 body=34 status=ok
// SIG undefined FUN_1459cf434(void)

void FUN_1459cf434(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14acf3670;
  return;
}



// FUNCTION 1459cf462 FUN_1459cf462 body=34 status=ok
// SIG undefined FUN_1459cf462(void)

void FUN_1459cf462(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ad04a40;
  return;
}



// FUNCTION 1459cf484 FUN_1459cf484 body=40 status=ok
// SIG undefined FUN_1459cf484(void)

undefined8 FUN_1459cf484(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cf4ac thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1459cf4be FUN_1459cf4be body=34 status=ok
// SIG undefined FUN_1459cf4be(void)

void FUN_1459cf4be(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ad2a360;
  return;
}



// FUNCTION 1459cf4ec FUN_1459cf4ec body=34 status=ok
// SIG undefined FUN_1459cf4ec(void)

void FUN_1459cf4ec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ad42bd0;
  return;
}



// FUNCTION 1459cf51a FUN_1459cf51a body=34 status=ok
// SIG undefined FUN_1459cf51a(void)

void FUN_1459cf51a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ad44eb0;
  return;
}



// FUNCTION 1459cf548 FUN_1459cf548 body=34 status=ok
// SIG undefined FUN_1459cf548(void)

void FUN_1459cf548(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ae31a30;
  return;
}



// FUNCTION 1459cf576 FUN_1459cf576 body=34 status=ok
// SIG undefined FUN_1459cf576(void)

void FUN_1459cf576(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ae37880;
  return;
}



// FUNCTION 1459cf5a4 FUN_1459cf5a4 body=34 status=ok
// SIG undefined FUN_1459cf5a4(void)

void FUN_1459cf5a4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ae71940;
  return;
}



// FUNCTION 1459cf5d2 FUN_1459cf5d2 body=34 status=ok
// SIG undefined FUN_1459cf5d2(void)

void FUN_1459cf5d2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ae72dd0;
  return;
}



// FUNCTION 1459cf600 FUN_1459cf600 body=34 status=ok
// SIG undefined FUN_1459cf600(void)

void FUN_1459cf600(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ae991f0;
  return;
}



// FUNCTION 1459cf62e FUN_1459cf62e body=34 status=ok
// SIG undefined FUN_1459cf62e(void)

void FUN_1459cf62e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14aee5690;
  return;
}



// FUNCTION 1459cf65c FUN_1459cf65c body=34 status=ok
// SIG undefined FUN_1459cf65c(void)

void FUN_1459cf65c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14aee6260;
  return;
}



// FUNCTION 1459cf68a FUN_1459cf68a body=34 status=ok
// SIG undefined FUN_1459cf68a(void)

void FUN_1459cf68a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14aef0870;
  return;
}



// FUNCTION 1459cf6ac FUN_1459cf6ac body=40 status=ok
// SIG undefined FUN_1459cf6ac(void)

undefined8 FUN_1459cf6ac(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cf6d4 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1459cf6e6 FUN_1459cf6e6 body=34 status=ok
// SIG undefined FUN_1459cf6e6(void)

void FUN_1459cf6e6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14af12900;
  return;
}



// FUNCTION 1459cf708 FUN_1459cf708 body=40 status=ok
// SIG undefined FUN_1459cf708(void)

undefined8 FUN_1459cf708(undefined8 param_1,int param_2)

{
  thunk_FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cf730 thunk_FUN_140e36c74 body=5 status=ok
// SIG undefined thunk_FUN_140e36c74(void)

void thunk_FUN_140e36c74(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [40];
  longlong *plStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  uint uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  uint uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14aed7c60;
  FUN_144760e21(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 7;
  puVar2 = param_1 + 9;
  uStack_48 = 0x100000000;
  uStack_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  puStack_40 = puVar2;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1449c0562(&uStack_48);
  }
  uStack_68 = uStack_48;
  puStack_60 = puStack_40;
  uStack_58 = uStack_38;
  iStack_54 = iStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  plStack_70 = plVar1;
  if (iStack_34 < *(int *)(puStack_40 + 3)) {
    do {
      if (*(longlong *)(*plStack_70 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uStack_58 = uStack_58 & ~uStack_68._4_4_;
      FUN_1449c0562(&uStack_68);
    } while (iStack_54 < *(int *)(puStack_60 + 3));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    FUN_1446f4a44(plVar1,0);
  }
  param_1[0xd] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 100)) {
    *(undefined4 *)((longlong)param_1 + 100) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  FUN_140e36e81(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if ((uStack_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459cf742 FUN_1459cf742 body=34 status=ok
// SIG undefined FUN_1459cf742(void)

void FUN_1459cf742(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14af3de90;
  return;
}



// FUNCTION 1459cf770 FUN_1459cf770 body=34 status=ok
// SIG undefined FUN_1459cf770(void)

void FUN_1459cf770(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14afab1e0;
  return;
}



// FUNCTION 1459cf79e FUN_1459cf79e body=34 status=ok
// SIG undefined FUN_1459cf79e(void)

void FUN_1459cf79e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14afb7680;
  return;
}



// FUNCTION 1459cf7cc FUN_1459cf7cc body=34 status=ok
// SIG undefined FUN_1459cf7cc(void)

void FUN_1459cf7cc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14afb7d60;
  return;
}



// FUNCTION 1459cf7fa FUN_1459cf7fa body=34 status=ok
// SIG undefined FUN_1459cf7fa(void)

void FUN_1459cf7fa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14afb8a20;
  return;
}



// FUNCTION 1459cf828 FUN_1459cf828 body=34 status=ok
// SIG undefined FUN_1459cf828(void)

void FUN_1459cf828(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14afb9ec0;
  return;
}



// FUNCTION 1459cf856 FUN_1459cf856 body=34 status=ok
// SIG undefined FUN_1459cf856(void)

void FUN_1459cf856(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14afba000;
  return;
}



// FUNCTION 1459cf884 FUN_1459cf884 body=34 status=ok
// SIG undefined FUN_1459cf884(void)

void FUN_1459cf884(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14afba120;
  return;
}



// FUNCTION 1459cf8b2 FUN_1459cf8b2 body=34 status=ok
// SIG undefined FUN_1459cf8b2(void)

void FUN_1459cf8b2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14afc17a0;
  return;
}



// FUNCTION 1459cf8e0 FUN_1459cf8e0 body=34 status=ok
// SIG undefined FUN_1459cf8e0(void)

void FUN_1459cf8e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14afc1b60;
  return;
}



// FUNCTION 1459cf90e FUN_1459cf90e body=34 status=ok
// SIG undefined FUN_1459cf90e(void)

void FUN_1459cf90e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14afc49f0;
  return;
}



// FUNCTION 1459cf93c FUN_1459cf93c body=34 status=ok
// SIG undefined FUN_1459cf93c(void)

void FUN_1459cf93c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14afca6b0;
  return;
}



// FUNCTION 1459cf96a FUN_1459cf96a body=34 status=ok
// SIG undefined FUN_1459cf96a(void)

void FUN_1459cf96a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14afcb670;
  return;
}



// FUNCTION 1459cf998 FUN_1459cf998 body=34 status=ok
// SIG undefined FUN_1459cf998(void)

void FUN_1459cf998(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14afcbed0;
  return;
}



// FUNCTION 1459cf9c6 FUN_1459cf9c6 body=82 status=ok
// SIG undefined FUN_1459cf9c6(void)

undefined8 * FUN_1459cf9c6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_141435472(puVar1);
  *puVar1 = &PTR_FUN_14afce680;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return puVar1;
}



// FUNCTION 1459cfa24 FUN_1459cfa24 body=34 status=ok
// SIG undefined FUN_1459cfa24(void)

void FUN_1459cfa24(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14afcf680;
  return;
}



// FUNCTION 1459cfa52 FUN_1459cfa52 body=34 status=ok
// SIG undefined FUN_1459cfa52(void)

void FUN_1459cfa52(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14afd0720;
  return;
}



// FUNCTION 1459cfa80 FUN_1459cfa80 body=34 status=ok
// SIG undefined FUN_1459cfa80(void)

void FUN_1459cfa80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14afd31b0;
  return;
}



// FUNCTION 1459cfaae FUN_1459cfaae body=34 status=ok
// SIG undefined FUN_1459cfaae(void)

void FUN_1459cfaae(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14afe2a60;
  return;
}



// FUNCTION 1459cfad0 FUN_1459cfad0 body=40 status=ok
// SIG undefined FUN_1459cfad0(void)

undefined8 FUN_1459cfad0(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cfb06 FUN_1459cfb06 body=31 status=ok
// SIG undefined FUN_1459cfb06(void)

undefined8 FUN_1459cfb06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cfb34 FUN_1459cfb34 body=31 status=ok
// SIG undefined FUN_1459cfb34(void)

undefined8 FUN_1459cfb34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cfb54 FUN_1459cfb54 body=40 status=ok
// SIG undefined FUN_1459cfb54(void)

undefined8 FUN_1459cfb54(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cfb7c thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1459cfb90 FUN_1459cfb90 body=31 status=ok
// SIG undefined FUN_1459cfb90(void)

undefined8 FUN_1459cfb90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cfbbe FUN_1459cfbbe body=31 status=ok
// SIG undefined FUN_1459cfbbe(void)

undefined8 FUN_1459cfbbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cfbec FUN_1459cfbec body=31 status=ok
// SIG undefined FUN_1459cfbec(void)

undefined8 FUN_1459cfbec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cfc1a FUN_1459cfc1a body=31 status=ok
// SIG undefined FUN_1459cfc1a(void)

undefined8 FUN_1459cfc1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cfc48 FUN_1459cfc48 body=31 status=ok
// SIG undefined FUN_1459cfc48(void)

undefined8 FUN_1459cfc48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cfc76 FUN_1459cfc76 body=31 status=ok
// SIG undefined FUN_1459cfc76(void)

undefined8 FUN_1459cfc76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cfca4 FUN_1459cfca4 body=31 status=ok
// SIG undefined FUN_1459cfca4(void)

undefined8 FUN_1459cfca4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cfcd2 FUN_1459cfcd2 body=31 status=ok
// SIG undefined FUN_1459cfcd2(void)

undefined8 FUN_1459cfcd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cfcf2 FUN_1459cfcf2 body=40 status=ok
// SIG undefined FUN_1459cfcf2(void)

undefined8 FUN_1459cfcf2(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cfd1a thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1459cfd2e FUN_1459cfd2e body=31 status=ok
// SIG undefined FUN_1459cfd2e(void)

undefined8 FUN_1459cfd2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cfd4e FUN_1459cfd4e body=40 status=ok
// SIG undefined FUN_1459cfd4e(void)

undefined8 FUN_1459cfd4e(undefined8 param_1,int param_2)

{
  FUN_1459cfd76();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cfd76 FUN_1459cfd76 body=50 status=ok
// SIG undefined FUN_1459cfd76(void)

void FUN_1459cfd76(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4e96c0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  return;
}



// FUNCTION 1459cfdb6 FUN_1459cfdb6 body=31 status=ok
// SIG undefined FUN_1459cfdb6(void)

undefined8 FUN_1459cfdb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cfdf2 FUN_1459cfdf2 body=31 status=ok
// SIG undefined FUN_1459cfdf2(void)

undefined8 FUN_1459cfdf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cfe20 FUN_1459cfe20 body=31 status=ok
// SIG undefined FUN_1459cfe20(void)

undefined8 FUN_1459cfe20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cfe40 FUN_1459cfe40 body=40 status=ok
// SIG undefined FUN_1459cfe40(void)

undefined8 FUN_1459cfe40(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cfe68 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1459cfe7c FUN_1459cfe7c body=31 status=ok
// SIG undefined FUN_1459cfe7c(void)

undefined8 FUN_1459cfe7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cfeaa FUN_1459cfeaa body=31 status=ok
// SIG undefined FUN_1459cfeaa(void)

undefined8 FUN_1459cfeaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cfed8 FUN_1459cfed8 body=31 status=ok
// SIG undefined FUN_1459cfed8(void)

undefined8 FUN_1459cfed8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cff06 FUN_1459cff06 body=31 status=ok
// SIG undefined FUN_1459cff06(void)

undefined8 FUN_1459cff06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cff34 FUN_1459cff34 body=31 status=ok
// SIG undefined FUN_1459cff34(void)

undefined8 FUN_1459cff34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cff60 FUN_1459cff60 body=34 status=ok
// SIG undefined FUN_1459cff60(void)

void FUN_1459cff60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b407860;
  return;
}



// FUNCTION 1459cff8e FUN_1459cff8e body=34 status=ok
// SIG undefined FUN_1459cff8e(void)

void FUN_1459cff8e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b4355c0;
  return;
}



// FUNCTION 1459cffbc FUN_1459cffbc body=34 status=ok
// SIG undefined FUN_1459cffbc(void)

void FUN_1459cffbc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b4660a0;
  return;
}



// FUNCTION 1459cffde FUN_1459cffde body=85 status=ok
// SIG undefined FUN_1459cffde(void)

undefined1 * FUN_1459cffde(longlong param_1,undefined1 *param_2)

{
  if ((*(byte *)(param_1 + 0x39) & 8) == 0) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    FUN_1459d0034(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 1459d0034 FUN_1459d0034 body=95 status=ok
// SIG undefined FUN_1459d0034(void)

byte * FUN_1459d0034(longlong param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_145c4e620(param_1,param_4,3);
  *param_2 = ~*(byte *)(param_1 + 0x2c0) & 1;
  param_2[0x20] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  memset(param_2 + 0x28,0,0x88);
  param_2[0xb0] = 2;
  param_2[0xb1] = 7;
  param_2[0xb2] = 2;
  param_2[0xb3] = 0;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 1459d00a0 FUN_1459d00a0 body=34 status=ok
// SIG undefined FUN_1459d00a0(void)

void FUN_1459d00a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b4ab940;
  return;
}



// FUNCTION 1459d00ce FUN_1459d00ce body=34 status=ok
// SIG undefined FUN_1459d00ce(void)

void FUN_1459d00ce(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b4ac180;
  return;
}



// FUNCTION 1459d00fc FUN_1459d00fc body=34 status=ok
// SIG undefined FUN_1459d00fc(void)

void FUN_1459d00fc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b4efa60;
  return;
}



// FUNCTION 1459d012a FUN_1459d012a body=34 status=ok
// SIG undefined FUN_1459d012a(void)

void FUN_1459d012a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b4f87f0;
  return;
}



// FUNCTION 1459d0158 FUN_1459d0158 body=34 status=ok
// SIG undefined FUN_1459d0158(void)

void FUN_1459d0158(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b4fe550;
  return;
}



// FUNCTION 1459d0186 FUN_1459d0186 body=34 status=ok
// SIG undefined FUN_1459d0186(void)

void FUN_1459d0186(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b50a0d0;
  return;
}



// FUNCTION 1459d01b4 FUN_1459d01b4 body=34 status=ok
// SIG undefined FUN_1459d01b4(void)

void FUN_1459d01b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b50d0b0;
  return;
}



// FUNCTION 1459d01e2 FUN_1459d01e2 body=34 status=ok
// SIG undefined FUN_1459d01e2(void)

void FUN_1459d01e2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b5247b0;
  return;
}



// FUNCTION 1459d0210 FUN_1459d0210 body=34 status=ok
// SIG undefined FUN_1459d0210(void)

void FUN_1459d0210(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b52a9f0;
  return;
}



// FUNCTION 1459d023e FUN_1459d023e body=34 status=ok
// SIG undefined FUN_1459d023e(void)

void FUN_1459d023e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b537fd0;
  return;
}



// FUNCTION 1459d026c FUN_1459d026c body=34 status=ok
// SIG undefined FUN_1459d026c(void)

void FUN_1459d026c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b541410;
  return;
}



// FUNCTION 1459d029a FUN_1459d029a body=34 status=ok
// SIG undefined FUN_1459d029a(void)

void FUN_1459d029a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b55ad20;
  return;
}



// FUNCTION 1459d02bc FUN_1459d02bc body=40 status=ok
// SIG undefined FUN_1459d02bc(void)

undefined8 FUN_1459d02bc(undefined8 param_1,int param_2)

{
  thunk_FUN_14110b6d4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d02e4 thunk_FUN_14110b6d4 body=5 status=ok
// SIG undefined thunk_FUN_14110b6d4(void)

void thunk_FUN_14110b6d4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4fe9e0;
  param_1[5] = &PTR_FUN_14a4fed00;
  plVar3 = (longlong *)param_1[0x60];
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
  param_1[0x38] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x4c];
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
  FUN_140f861ce(param_1);
  return;
}



// FUNCTION 1459d02ea FUN_1459d02ea body=40 status=ok
// SIG undefined FUN_1459d02ea(void)

undefined8 FUN_1459d02ea(undefined8 param_1,int param_2)

{
  thunk_FUN_145977296();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0312 thunk_FUN_145977296 body=5 status=ok
// SIG undefined thunk_FUN_145977296(void)

void thunk_FUN_145977296(undefined8 *param_1)

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



// FUNCTION 1459d0318 FUN_1459d0318 body=40 status=ok
// SIG undefined FUN_1459d0318(void)

undefined8 FUN_1459d0318(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0340 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1459d0352 FUN_1459d0352 body=34 status=ok
// SIG undefined FUN_1459d0352(void)

void FUN_1459d0352(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b59d720;
  return;
}



// FUNCTION 1459d0380 FUN_1459d0380 body=34 status=ok
// SIG undefined FUN_1459d0380(void)

void FUN_1459d0380(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b5afc30;
  return;
}



// FUNCTION 1459d03b0 FUN_1459d03b0 body=31 status=ok
// SIG undefined FUN_1459d03b0(void)

undefined8 FUN_1459d03b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d03de FUN_1459d03de body=31 status=ok
// SIG undefined FUN_1459d03de(void)

undefined8 FUN_1459d03de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d040c FUN_1459d040c body=31 status=ok
// SIG undefined FUN_1459d040c(void)

undefined8 FUN_1459d040c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d043a FUN_1459d043a body=31 status=ok
// SIG undefined FUN_1459d043a(void)

undefined8 FUN_1459d043a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0468 FUN_1459d0468 body=31 status=ok
// SIG undefined FUN_1459d0468(void)

undefined8 FUN_1459d0468(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0496 FUN_1459d0496 body=31 status=ok
// SIG undefined FUN_1459d0496(void)

undefined8 FUN_1459d0496(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d04c4 FUN_1459d04c4 body=31 status=ok
// SIG undefined FUN_1459d04c4(void)

undefined8 FUN_1459d04c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d04f2 FUN_1459d04f2 body=31 status=ok
// SIG undefined FUN_1459d04f2(void)

undefined8 FUN_1459d04f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0520 FUN_1459d0520 body=31 status=ok
// SIG undefined FUN_1459d0520(void)

undefined8 FUN_1459d0520(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d054e FUN_1459d054e body=31 status=ok
// SIG undefined FUN_1459d054e(void)

undefined8 FUN_1459d054e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d057c FUN_1459d057c body=31 status=ok
// SIG undefined FUN_1459d057c(void)

undefined8 FUN_1459d057c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d05aa FUN_1459d05aa body=31 status=ok
// SIG undefined FUN_1459d05aa(void)

undefined8 FUN_1459d05aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d05d8 FUN_1459d05d8 body=31 status=ok
// SIG undefined FUN_1459d05d8(void)

undefined8 FUN_1459d05d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0606 FUN_1459d0606 body=31 status=ok
// SIG undefined FUN_1459d0606(void)

undefined8 FUN_1459d0606(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0634 FUN_1459d0634 body=31 status=ok
// SIG undefined FUN_1459d0634(void)

undefined8 FUN_1459d0634(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0662 FUN_1459d0662 body=31 status=ok
// SIG undefined FUN_1459d0662(void)

undefined8 FUN_1459d0662(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0690 FUN_1459d0690 body=31 status=ok
// SIG undefined FUN_1459d0690(void)

undefined8 FUN_1459d0690(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d06be FUN_1459d06be body=31 status=ok
// SIG undefined FUN_1459d06be(void)

undefined8 FUN_1459d06be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d06ec FUN_1459d06ec body=31 status=ok
// SIG undefined FUN_1459d06ec(void)

undefined8 FUN_1459d06ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d070c FUN_1459d070c body=40 status=ok
// SIG undefined FUN_1459d070c(void)

undefined8 FUN_1459d070c(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0742 FUN_1459d0742 body=31 status=ok
// SIG undefined FUN_1459d0742(void)

undefined8 FUN_1459d0742(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0770 FUN_1459d0770 body=31 status=ok
// SIG undefined FUN_1459d0770(void)

undefined8 FUN_1459d0770(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d079e FUN_1459d079e body=31 status=ok
// SIG undefined FUN_1459d079e(void)

undefined8 FUN_1459d079e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d07cc FUN_1459d07cc body=31 status=ok
// SIG undefined FUN_1459d07cc(void)

undefined8 FUN_1459d07cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d07fa FUN_1459d07fa body=31 status=ok
// SIG undefined FUN_1459d07fa(void)

undefined8 FUN_1459d07fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0828 FUN_1459d0828 body=31 status=ok
// SIG undefined FUN_1459d0828(void)

undefined8 FUN_1459d0828(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0856 FUN_1459d0856 body=31 status=ok
// SIG undefined FUN_1459d0856(void)

undefined8 FUN_1459d0856(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0884 FUN_1459d0884 body=31 status=ok
// SIG undefined FUN_1459d0884(void)

undefined8 FUN_1459d0884(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d08b2 FUN_1459d08b2 body=31 status=ok
// SIG undefined FUN_1459d08b2(void)

undefined8 FUN_1459d08b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d08e0 FUN_1459d08e0 body=31 status=ok
// SIG undefined FUN_1459d08e0(void)

undefined8 FUN_1459d08e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0900 FUN_1459d0900 body=40 status=ok
// SIG undefined FUN_1459d0900(void)

undefined8 FUN_1459d0900(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0928 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1459d092e FUN_1459d092e body=40 status=ok
// SIG undefined FUN_1459d092e(void)

undefined8 FUN_1459d092e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0956 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1459d095c FUN_1459d095c body=40 status=ok
// SIG undefined FUN_1459d095c(void)

undefined8 FUN_1459d095c(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0984 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1459d098a FUN_1459d098a body=40 status=ok
// SIG undefined FUN_1459d098a(void)

undefined8 FUN_1459d098a(undefined8 param_1,int param_2)

{
  thunk_FUN_1402d9b92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d09b2 thunk_FUN_1402d9b92 body=5 status=ok
// SIG undefined thunk_FUN_1402d9b92(void)

void thunk_FUN_1402d9b92(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5cfba0;
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 1459d09b8 FUN_1459d09b8 body=40 status=ok
// SIG undefined FUN_1459d09b8(void)

undefined8 FUN_1459d09b8(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d09e0 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1459d09e6 FUN_1459d09e6 body=40 status=ok
// SIG undefined FUN_1459d09e6(void)

undefined8 FUN_1459d09e6(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


