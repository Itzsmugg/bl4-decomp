// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14894b58e FUN_14894b58e body=48 status=ok
// SIG undefined FUN_14894b58e(void)

void FUN_14894b58e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 14894b5be FUN_14894b5be body=197 status=ok
// SIG undefined FUN_14894b5be(void)

undefined8 * FUN_14894b5be(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 2;
  puVar1 = param_1 + 5;
  param_1[8] = 0;
  param_1[9] = 0x100000000;
  lVar4 = FUN_1464fc88a();
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  iVar2 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
    FUN_1457d67de(puVar1,iVar2);
  }
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  puVar5[(longlong)iVar2 * 3] = uVar3;
  puVar5[(longlong)iVar2 * 3 + 1] = 0;
  (puVar5 + (longlong)iVar2 * 3 + 1)[1] = 0;
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  iVar2 = *(int *)(puVar5 + 2);
  *(uint *)(puVar5 + 2) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar5 + 0x14) < iVar2 + 1U) {
    FUN_140aec898(puVar5 + 1,iVar2);
  }
  *(undefined8 *)(puVar5[1] + (longlong)iVar2 * 8) = param_2;
  return param_1;
}



// FUNCTION 14894b684 FUN_14894b684 body=75 status=ok
// SIG undefined FUN_14894b684(void)

bool FUN_14894b684(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14894b6b8;
    }
  }
  lVar2 = 0;
LAB_14894b6b8:
  lVar1 = FUN_145b7c76a();
  return lVar2 == lVar1;
}



// FUNCTION 14894b6d5 FUN_14894b6d5 body=182 status=ok
// SIG undefined FUN_14894b6d5(void)

undefined8 FUN_14894b6d5(undefined8 param_1)

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
  local_b8 = FUN_145b7c76a();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 8;
  local_90 = 0;
  uStack_88 = 0;
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



// FUNCTION 14894b78c FUN_14894b78c body=164 status=ok
// SIG undefined FUN_14894b78c(void)

void FUN_14894b78c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_145b7c76a();
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
      == lVar2 + 0x30)) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    iVar1 = *(int *)(param_1 + 0x100);
    *(uint *)(param_1 + 0x100) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
      FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14894b87e FUN_14894b87e body=106 status=ok
// SIG undefined FUN_14894b87e(void)

void FUN_14894b87e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0xf8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894b8ee FUN_14894b8ee body=255 status=ok
// SIG undefined FUN_14894b8ee(void)

undefined8 * FUN_14894b8ee(undefined8 *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b378f10;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 0x128);
  uVar3 = *(undefined4 *)(param_3 + 0x11c);
  uVar4 = *(undefined4 *)(param_3 + 0x120);
  uVar5 = *(undefined4 *)(param_3 + 0x124);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_3 + 0x118);
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 6) = uVar5;
  param_1[7] = *(undefined8 *)(param_3 + 0x130);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 0x138);
  param_1[9] = 0;
  FUN_144a76ff0(param_1 + 10,param_3 + 0x148);
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_2 + 0x108);
  uVar2 = *(undefined8 *)(param_2 + 0x100);
  *(int *)(param_1 + 0xe) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_14878e25a(param_1 + 0xd,iVar1,0);
    FUN_14878e2cd(param_1[0xd],uVar2,iVar1);
  }
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_2 + 0x118);
  uVar2 = *(undefined8 *)(param_2 + 0x110);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_14878e31a(param_1 + 0xf,iVar1,0);
    FUN_14878e38c(param_1[0xf],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14894b9ee FUN_14894b9ee body=102 status=ok
// SIG undefined FUN_14894b9ee(void)

undefined8 FUN_14894b9ee(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar3 = *param_2;
      goto LAB_14894ba22;
    }
  }
  lVar3 = 0;
LAB_14894ba22:
  lVar1 = FUN_145b8093a();
  if ((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                     *(longlong *)
                      (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
                     lVar1 + 0x30);
  }
  return uVar2;
}



// FUNCTION 14894ba54 FUN_14894ba54 body=68 status=ok
// SIG undefined FUN_14894ba54(void)

void FUN_14894ba54(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145b8093a();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      == lVar1 + 0x30)) {
    FUN_1476bf71e(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14894ba9d FUN_14894ba9d body=182 status=ok
// SIG undefined FUN_14894ba9d(void)

undefined8 FUN_14894ba9d(undefined8 param_1)

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
  local_b8 = FUN_145b8093a();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 8;
  local_90 = 0;
  uStack_88 = 0;
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



// FUNCTION 14894bb5a FUN_14894bb5a body=120 status=ok
// SIG undefined FUN_14894bb5a(void)

longlong FUN_14894bb5a(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [136];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14894b8ee(local_a0,param_3,param_1 + -0x110);
  *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfe;
  FUN_148953038(param_2,local_a0);
  FUN_14878e0c2(local_a0);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894bbd4 FUN_14894bbd4 body=161 status=ok
// SIG undefined FUN_14894bbd4(void)

undefined8 * FUN_14894bbd4(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b379650;
  FUN_1401f3da4(param_1 + 4,param_2 + 0xf8);
  uVar1 = *(undefined8 *)(param_3 + 0x118);
  param_1[7] = *(undefined8 *)(param_3 + 0x110);
  param_1[8] = uVar1;
  param_1[9] = *(undefined8 *)(param_3 + 0x120);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_3 + 0x128);
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_1412e3d1e(&local_30);
  *(undefined4 *)(param_1 + 0xc) = local_30;
  *(undefined4 *)((longlong)param_1 + 100) = uStack_2c;
  *(undefined4 *)(param_1 + 0xd) = uStack_28;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894bc76 FUN_14894bc76 body=132 status=ok
// SIG undefined FUN_14894bc76(void)

void FUN_14894bc76(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0x100),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    return;
  }
  return;
}



// FUNCTION 14894bcff FUN_14894bcff body=182 status=ok
// SIG undefined FUN_14894bcff(void)

undefined8 FUN_14894bcff(undefined8 param_1)

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
  local_b8 = FUN_145b80b0e();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 8;
  local_90 = 0;
  uStack_88 = 0;
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



// FUNCTION 14894bdee FUN_14894bdee body=106 status=ok
// SIG undefined FUN_14894bdee(void)

void FUN_14894bdee(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0x100);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894be5a FUN_14894be5a body=95 status=ok
// SIG undefined FUN_14894be5a(void)

void FUN_14894be5a(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x108);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x100) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0x100) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x108);
  }
  *(int *)(param_1 + 0x108) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0x100);
  return;
}



// FUNCTION 14894bee8 FUN_14894bee8 body=75 status=ok
// SIG undefined FUN_14894bee8(void)

bool FUN_14894bee8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14894bf1c;
    }
  }
  lVar2 = 0;
LAB_14894bf1c:
  lVar1 = FUN_145b80b0e();
  return lVar2 == lVar1;
}



// FUNCTION 14894bf34 FUN_14894bf34 body=160 status=ok
// SIG undefined FUN_14894bf34(void)

longlong FUN_14894bf34(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_a8 [32];
  undefined **local_88 [5];
  longlong *local_60;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14894bbd4(local_88,param_3,param_1 + -0xf8);
  *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfe;
  FUN_14895314e(param_2,local_88);
  local_88[0] = &PTR_FUN_14b379650;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894bfde FUN_14894bfde body=179 status=ok
// SIG undefined FUN_14894bfde(void)

longlong * FUN_14894bfde(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar3 = param_2 + 2;
  plVar4 = param_1 + 2;
  for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar4 = *plVar3;
    plVar3 = plVar3 + 1;
    plVar4 = plVar4 + 1;
  }
  *(int *)(param_1 + 0x10) = (int)param_2[0x10];
  param_1[0x11] = 0;
  iVar1 = (int)param_2[0x12];
  _Src = (void *)param_2[0x11];
  *(int *)(param_1 + 0x12) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 0x11,iVar1,0);
    memcpy((void *)param_1[0x11],_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 14894c092 FUN_14894c092 body=132 status=ok
// SIG undefined FUN_14894c092(void)

void FUN_14894c092(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0x100),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    return;
  }
  return;
}



// FUNCTION 14894c11b FUN_14894c11b body=182 status=ok
// SIG undefined FUN_14894c11b(void)

undefined8 FUN_14894c11b(undefined8 param_1)

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
  local_b8 = FUN_145b80ce2();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 8;
  local_90 = 0;
  uStack_88 = 0;
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



// FUNCTION 14894c20a FUN_14894c20a body=106 status=ok
// SIG undefined FUN_14894c20a(void)

void FUN_14894c20a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0x100);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894c276 FUN_14894c276 body=95 status=ok
// SIG undefined FUN_14894c276(void)

void FUN_14894c276(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x108);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x100) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0x100) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x108);
  }
  *(int *)(param_1 + 0x108) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0x100);
  return;
}



// FUNCTION 14894c304 FUN_14894c304 body=75 status=ok
// SIG undefined FUN_14894c304(void)

bool FUN_14894c304(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14894c338;
    }
  }
  lVar2 = 0;
LAB_14894c338:
  lVar1 = FUN_145b80ce2();
  return lVar2 == lVar1;
}



// FUNCTION 14894c350 FUN_14894c350 body=178 status=ok
// SIG undefined FUN_14894c350(void)

longlong FUN_14894c350(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_118 [32];
  undefined **local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined8 local_e4;
  undefined1 local_d8 [136];
  longlong local_50;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f0 = 0;
  local_e4 = 0;
  local_e8 = 0;
  local_f8 = &PTR_FUN_14b379d90;
  FUN_14894bfde(local_d8,param_3 + 0x100);
  local_38 = *(undefined4 *)(param_1 + 0x18);
  uStack_34 = *(undefined4 *)(param_1 + 0x1c);
  uStack_30 = *(undefined4 *)(param_1 + 0x20);
  uStack_2c = *(undefined4 *)(param_1 + 0x24);
  *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfe;
  FUN_1489531ce(param_2,&local_f8);
  local_f8 = &PTR_FUN_14b379d90;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894c434 FUN_14894c434 body=118 status=ok
// SIG undefined FUN_14894c434(void)

void FUN_14894c434(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140861d3c(local_50,param_1,param_1 + 0x50,param_1 + 0x70);
  local_38 = param_1 + 0x60;
  FUN_147523910(local_50,param_2,param_3,param_4);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894c4ac FUN_14894c4ac body=125 status=ok
// SIG undefined FUN_14894c4ac(void)

void FUN_14894c4ac(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_147523b62(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894c52a FUN_14894c52a body=125 status=ok
// SIG undefined FUN_14894c52a(void)

void FUN_14894c52a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_14894c5a8(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894c5a8 FUN_14894c5a8 body=90 status=ok
// SIG undefined FUN_14894c5a8(void)

void FUN_14894c5a8(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      iVar1 = FUN_14752433e(param_1,*(undefined4 *)(*param_2 + lVar2 * 4));
      if (iVar1 != -1) {
        FUN_1489532f6(param_1,iVar1,*(undefined4 *)(*param_3 + lVar2 * 4));
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14894c602 FUN_14894c602 body=125 status=ok
// SIG undefined FUN_14894c602(void)

void FUN_14894c602(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_14894c680(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894c680 FUN_14894c680 body=289 status=ok
// SIG undefined FUN_14894c680(void)

void FUN_14894c680(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < (int)param_2[1]) {
    lVar6 = 0;
    do {
      iVar1 = FUN_14752433e(param_1,*(undefined4 *)(*param_2 + lVar6 * 4));
      if (iVar1 == -1) {
        FUN_147a3fc60(&local_78);
        lVar3 = *param_3;
        uVar2 = (undefined4)local_78;
      }
      else {
        lVar3 = *(longlong *)param_1[3];
        lVar5 = (longlong)iVar1;
        uStack_70 = 0;
        local_68 = 0;
        local_78 = *(undefined8 *)(lVar3 + lVar5 * 0x18);
        uVar4 = FUN_14477b664(*(undefined8 *)(lVar3 + 8 + lVar5 * 0x18));
        uStack_70 = FUN_14477b664(uVar4);
        local_68 = *(undefined8 *)(lVar3 + 0x10 + lVar5 * 0x18);
        uVar2 = FUN_1489534d6(param_1,*(undefined4 *)(*(longlong *)*param_1 + lVar5 * 4),&local_78);
        FUN_147524308(param_1,&local_7c,uVar2);
        lVar3 = *param_3;
        uVar2 = local_7c;
      }
      *(undefined4 *)(lVar3 + lVar6 * 4) = uVar2;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_2[1]);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14894c7a2 FUN_14894c7a2 body=150 status=ok
// SIG undefined FUN_14894c7a2(void)

void FUN_14894c7a2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  lVar2 = param_2[1];
  local_30 = param_1 + 0x60;
  if (0 < (longlong)(int)lVar2) {
    lVar1 = *param_2;
    lVar4 = 0;
    do {
      iVar3 = FUN_14752433e(local_48,*(undefined4 *)(lVar1 + lVar4 * 4));
      if (iVar3 != -1) {
        FUN_1489535ae(local_48,iVar3);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar2 != lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14894c83a FUN_14894c83a body=106 status=ok
// SIG undefined FUN_14894c83a(void)

void FUN_14894c83a(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_30 = param_1 + 0x60;
  FUN_14894c8a6(local_48,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894c8a6 FUN_14894c8a6 body=353 status=ok
// SIG undefined FUN_14894c8a6(void)

void FUN_14894c8a6(undefined8 param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 2;
  uStack_80 = 2;
  FUN_147523910(param_1,&local_88,&local_68);
  local_88 = 0;
  uStack_80 = 0;
  if (0 < (int)uStack_60) {
    lVar6 = 0;
    iVar5 = (int)uStack_60;
    do {
      lVar3 = local_78;
      uVar4 = uStack_80;
      iVar2 = *(int *)(local_68 + lVar6 * 4);
      if (param_3 == '\0') {
        if (param_2 < iVar2) goto LAB_14894c931;
      }
      else if (iVar2 < param_2) {
LAB_14894c931:
        iVar5 = (int)uStack_80;
        uVar1 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
        if (uStack_80._4_4_ < uVar1) {
          FUN_14065110c(&local_88,uVar4 & 0xffffffff);
        }
        *(undefined4 *)(local_88 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar3 + lVar6 * 4);
        iVar5 = (int)uStack_60;
      }
      lVar3 = local_88;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
    lVar6 = (longlong)(int)uStack_80;
    if (0 < lVar6) {
      lVar7 = 0;
      do {
        iVar5 = FUN_14752433e(param_1,*(undefined4 *)(lVar3 + lVar7 * 4));
        if (iVar5 != -1) {
          FUN_1489535ae(param_1,iVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14894ca08 FUN_14894ca08 body=108 status=ok
// SIG undefined FUN_14894ca08(void)

void FUN_14894ca08(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_30 = param_1 + 0x60;
  FUN_147524082(local_48,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894caae FUN_14894caae body=89 status=ok
// SIG undefined FUN_14894caae(void)

void FUN_14894caae(longlong param_1)

{
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_140aba11c(param_1 + 0x50,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x6c) < 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_14895370e(param_1 + 0x60);
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  FUN_147a408e2(param_1 + 0x70);
  return;
}



// FUNCTION 14894cb08 FUN_14894cb08 body=96 status=ok
// SIG undefined FUN_14894cb08(void)

void FUN_14894cb08(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_40,param_1,param_1 + 0x50,param_1 + 0x70);
  local_28 = param_1 + 0x60;
  FUN_1475243aa(local_40,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894cb6a FUN_14894cb6a body=320 status=ok
// SIG undefined FUN_14894cb6a(void)

undefined8 FUN_14894cb6a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a492060;
  plVar1 = plVar4 + 2;
  FUN_14895373e(plVar1,param_1 + 0x110);
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_140aec6f8(&local_38,plVar1);
  plVar1 = local_30;
  if (local_30 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_38;
    plVar4 = *(longlong **)(param_1 + 0xe8);
    if (plVar4 == (longlong *)0x0) goto LAB_14894cc61;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_14894cc2b:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_14894cc61;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe0) = local_38;
    plVar4 = *(longlong **)(param_1 + 0xe8);
    if (local_30 != plVar4) {
      *(longlong **)(param_1 + 0xe8) = local_30;
      if (plVar4 == (longlong *)0x0) goto LAB_14894cc61;
      goto LAB_14894cc2b;
    }
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14894cc61;
    (**(code **)*local_30)(local_30);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_14894cc61:
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894ccac FUN_14894ccac body=75 status=ok
// SIG undefined FUN_14894ccac(void)

bool FUN_14894ccac(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14894cce0;
    }
  }
  lVar2 = 0;
LAB_14894cce0:
  lVar1 = FUN_1459f03c0();
  return lVar2 == lVar1;
}



// FUNCTION 14894ccfd FUN_14894ccfd body=182 status=ok
// SIG undefined FUN_14894ccfd(void)

undefined8 FUN_14894ccfd(undefined8 param_1)

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
  local_b8 = FUN_1459f03c0();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 8;
  local_90 = 0;
  uStack_88 = 0;
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



// FUNCTION 14894cdb4 FUN_14894cdb4 body=164 status=ok
// SIG undefined FUN_14894cdb4(void)

void FUN_14894cdb4(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1459f03c0();
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
      == lVar2 + 0x30)) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    iVar1 = *(int *)(param_1 + 0x100);
    *(uint *)(param_1 + 0x100) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
      FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14894ce9e FUN_14894ce9e body=106 status=ok
// SIG undefined FUN_14894ce9e(void)

void FUN_14894ce9e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0xf8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894cf1a FUN_14894cf1a body=387 status=ok
// SIG undefined FUN_14894cf1a(void)

void FUN_14894cf1a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  byte local_158;
  undefined **local_148;
  undefined2 local_140;
  undefined2 local_138;
  longlong local_130;
  undefined1 local_128;
  uint local_120;
  longlong local_118;
  undefined1 local_110;
  uint local_108;
  longlong local_100;
  undefined1 local_f8;
  uint local_f0;
  longlong local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined1 local_d0 [152];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((*(int *)(param_1 + 0x68) != 0) || (*(char *)(param_1 + 0x84) == '\x01')) {
    lVar1 = FUN_14009d2a0();
    lVar2 = FUN_14038fb82();
    local_108 = 0x10000;
    local_120 = 0x10000;
    if (*(int *)(param_1 + 0x178) == 0) {
      local_120 = (uint)*(byte *)(param_1 + 0x194) << 0x10;
    }
    if (*(int *)(param_1 + 0x288) == 0) {
      local_108 = (uint)*(byte *)(param_1 + 0x2a4) << 0x10;
    }
    local_130 = param_1 + 8;
    local_138 = *(undefined2 *)(lVar1 + 0x7e);
    local_140 = *(undefined2 *)(lVar1 + 0x126);
    local_118 = param_1 + 0x118;
    local_120 = local_120 | *(ushort *)(lVar1 + 0x80);
    local_100 = param_1 + 0x228;
    local_108 = *(ushort *)(lVar1 + 0x82) | local_108;
    local_e8 = param_1 + 0x338;
    local_f0 = 0x10000;
    if (*(int *)(param_1 + 0x398) == 0) {
      local_f0 = (uint)*(byte *)(param_1 + 0x3b4) << 0x10;
    }
    local_f0 = *(ushort *)(lVar1 + 0x84) | local_f0;
    local_128 = 1;
    local_110 = 1;
    local_f8 = 1;
    local_e0 = 1;
    local_d8 = 0;
    local_148 = &PTR_FUN_14b4240a0;
    local_168 = 0;
    uStack_164 = 0;
    uStack_160 = 0;
    uStack_15c = 0x3f800000;
    local_158 = *(byte *)(param_1 + 0x448) & 1;
    FUN_14894d1a0(&local_148,local_d0,*(undefined2 *)(lVar2 + 0xfe));
    FUN_14894d09e(param_4,local_d0);
  }
  if ((local_38 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894d09e FUN_14894d09e body=257 status=ok
// SIG undefined FUN_14894d09e(void)

void FUN_14894d09e(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_148953cbe(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894d1a0 FUN_14894d1a0 body=147 status=ok
// SIG undefined FUN_14894d1a0(void)

undefined8 *
FUN_14894d1a0(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  undefined2 *local_48;
  undefined2 local_34 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = local_34;
  local_30 = *param_4;
  uStack_2c = param_4[1];
  uStack_28 = param_4[2];
  uStack_24 = param_4[3];
  local_20 = param_4[4];
  local_1c = 1;
  local_50 = param_1 + 0x58;
  local_58 = param_1 + 0x40;
  uVar1 = *(undefined1 *)(param_1 + 0x70);
  local_34[0] = param_3;
  FUN_148953c12(param_2 + 1,param_1 + 8,param_1 + 0x10,param_1 + 0x28);
  *(undefined1 *)(param_2 + 0x12) = uVar1;
  *param_2 = &PTR_FUN_14b4240c0;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894d238 FUN_14894d238 body=75 status=ok
// SIG undefined FUN_14894d238(void)

bool FUN_14894d238(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14894d271;
    }
  }
  lVar2 = 0;
LAB_14894d271:
  lVar1 = FUN_145b81c6c();
  return lVar2 == lVar1;
}



// FUNCTION 14894d289 FUN_14894d289 body=182 status=ok
// SIG undefined FUN_14894d289(void)

undefined8 FUN_14894d289(undefined8 param_1)

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
  local_b8 = FUN_145b81c6c();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 8;
  local_90 = 0;
  uStack_88 = 0;
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



// FUNCTION 14894d340 FUN_14894d340 body=118 status=ok
// SIG undefined FUN_14894d340(void)

void FUN_14894d340(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140861d3c(local_50,param_1,param_1 + 0x50,param_1 + 0x70);
  local_38 = param_1 + 0x60;
  FUN_147523910(local_50,param_2,param_3,param_4);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894d3b8 FUN_14894d3b8 body=125 status=ok
// SIG undefined FUN_14894d3b8(void)

void FUN_14894d3b8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_147523b62(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894d436 FUN_14894d436 body=125 status=ok
// SIG undefined FUN_14894d436(void)

void FUN_14894d436(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_14894d4b4(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894d4b4 FUN_14894d4b4 body=90 status=ok
// SIG undefined FUN_14894d4b4(void)

void FUN_14894d4b4(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      iVar1 = FUN_14752433e(param_1,*(undefined4 *)(*param_2 + lVar2 * 4));
      if (iVar1 != -1) {
        FUN_148953dbe(param_1,iVar1,*(undefined4 *)(*param_3 + lVar2 * 4));
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14894d50e FUN_14894d50e body=125 status=ok
// SIG undefined FUN_14894d50e(void)

void FUN_14894d50e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_14894d58c(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894d58c FUN_14894d58c body=418 status=ok
// SIG undefined FUN_14894d58c(void)

void FUN_14894d58c(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_148 [36];
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8 [11];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (0 < (int)param_2[1]) {
    lVar7 = 0;
    do {
      iVar1 = FUN_14752433e(param_1,*(undefined4 *)(*param_2 + lVar7 * 4));
      if (iVar1 == -1) {
        FUN_147a3fc60(&local_120);
        lVar4 = *param_3;
        uVar2 = (undefined4)local_120;
      }
      else {
        puVar5 = (undefined8 *)(*(longlong *)param_1[3] + (longlong)iVar1 * 0xc0);
        local_120 = *puVar5;
        local_118 = *(undefined4 *)(puVar5 + 1);
        local_110 = 0;
        local_108 = *(undefined4 *)(puVar5 + 3);
        local_f0 = 0;
        uStack_f8 = 0;
        local_100 = puVar5[4];
        uVar3 = FUN_14477b664(puVar5[5]);
        uStack_f8 = FUN_14477b664(uVar3);
        local_f0 = puVar5[6];
        local_e8 = puVar5[7];
        uStack_e0 = puVar5[8];
        local_d8 = puVar5[9];
        local_d0 = *(undefined4 *)(puVar5 + 10);
        local_c8 = 0;
        local_c0 = *(undefined4 *)(puVar5 + 0xc);
        puVar5 = puVar5 + 0xd;
        puVar6 = local_b8;
        for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        uVar2 = FUN_14895407a(param_1,*(undefined4 *)(*(longlong *)*param_1 + (longlong)iVar1 * 4),
                              &local_120);
        FUN_147524308(param_1,&local_124,uVar2);
        lVar4 = *param_3;
        uVar2 = local_124;
      }
      *(undefined4 *)(lVar4 + lVar7 * 4) = uVar2;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)param_2[1]);
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14894d730 FUN_14894d730 body=150 status=ok
// SIG undefined FUN_14894d730(void)

void FUN_14894d730(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  lVar2 = param_2[1];
  local_30 = param_1 + 0x60;
  if (0 < (longlong)(int)lVar2) {
    lVar1 = *param_2;
    lVar4 = 0;
    do {
      iVar3 = FUN_14752433e(local_48,*(undefined4 *)(lVar1 + lVar4 * 4));
      if (iVar3 != -1) {
        FUN_148954152(local_48,iVar3);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar2 != lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14894d7c8 FUN_14894d7c8 body=106 status=ok
// SIG undefined FUN_14894d7c8(void)

void FUN_14894d7c8(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_30 = param_1 + 0x60;
  FUN_14894d834(local_48,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894d834 FUN_14894d834 body=353 status=ok
// SIG undefined FUN_14894d834(void)

void FUN_14894d834(undefined8 param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 2;
  uStack_80 = 2;
  FUN_147523910(param_1,&local_88,&local_68);
  local_88 = 0;
  uStack_80 = 0;
  if (0 < (int)uStack_60) {
    lVar6 = 0;
    iVar5 = (int)uStack_60;
    do {
      lVar3 = local_78;
      uVar4 = uStack_80;
      iVar2 = *(int *)(local_68 + lVar6 * 4);
      if (param_3 == '\0') {
        if (param_2 < iVar2) goto LAB_14894d8bf;
      }
      else if (iVar2 < param_2) {
LAB_14894d8bf:
        iVar5 = (int)uStack_80;
        uVar1 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
        if (uStack_80._4_4_ < uVar1) {
          FUN_14065110c(&local_88,uVar4 & 0xffffffff);
        }
        *(undefined4 *)(local_88 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar3 + lVar6 * 4);
        iVar5 = (int)uStack_60;
      }
      lVar3 = local_88;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
    lVar6 = (longlong)(int)uStack_80;
    if (0 < lVar6) {
      lVar7 = 0;
      do {
        iVar5 = FUN_14752433e(param_1,*(undefined4 *)(lVar3 + lVar7 * 4));
        if (iVar5 != -1) {
          FUN_148954152(param_1,iVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14894d996 FUN_14894d996 body=108 status=ok
// SIG undefined FUN_14894d996(void)

void FUN_14894d996(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_30 = param_1 + 0x60;
  FUN_147524082(local_48,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894da3c FUN_14894da3c body=89 status=ok
// SIG undefined FUN_14894da3c(void)

void FUN_14894da3c(longlong param_1)

{
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_140aba11c(param_1 + 0x50,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x6c) < 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_1489542b8(param_1 + 0x60);
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  FUN_147a408e2(param_1 + 0x70);
  return;
}



// FUNCTION 14894da96 FUN_14894da96 body=96 status=ok
// SIG undefined FUN_14894da96(void)

void FUN_14894da96(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_40,param_1,param_1 + 0x50,param_1 + 0x70);
  local_28 = param_1 + 0x60;
  FUN_1475243aa(local_40,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894daf8 FUN_14894daf8 body=320 status=ok
// SIG undefined FUN_14894daf8(void)

undefined8 FUN_14894daf8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a492060;
  plVar1 = plVar4 + 2;
  FUN_1489542e8(plVar1,param_1 + 0x110);
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_140aec6f8(&local_38,plVar1);
  plVar1 = local_30;
  if (local_30 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_38;
    plVar4 = *(longlong **)(param_1 + 0xe8);
    if (plVar4 == (longlong *)0x0) goto LAB_14894dbef;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_14894dbb9:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_14894dbef;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe0) = local_38;
    plVar4 = *(longlong **)(param_1 + 0xe8);
    if (local_30 != plVar4) {
      *(longlong **)(param_1 + 0xe8) = local_30;
      if (plVar4 == (longlong *)0x0) goto LAB_14894dbef;
      goto LAB_14894dbb9;
    }
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14894dbef;
    (**(code **)*local_30)(local_30);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_14894dbef:
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894dc52 FUN_14894dc52 body=2042 status=ok
// SIG undefined FUN_14894dc52(void)

void FUN_14894dc52(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  undefined1 local_1e0;
  uint local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined1 local_168 [16];
  double local_158;
  undefined8 local_148;
  undefined8 *local_140;
  int local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  ushort uStack_118;
  undefined2 uStack_116;
  undefined4 uStack_114;
  byte local_110;
  longlong *local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  double dStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  iVar17 = *(int *)(param_3 + 0x94);
  if (((longlong)iVar17 < 0) || (*(int *)(param_1 + 0x78) <= iVar17)) goto LAB_14894e208;
  lVar7 = (longlong)iVar17 * 0xc0;
  if ((*(longlong *)(*(longlong *)(param_1 + 0x70) + lVar7) == 0) ||
     ((((puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + lVar7),
        0xfffffffd < *(int *)(puVar16 + 1) - 1U || (*(int *)(param_3 + 0x80) != 1)) ||
       (plVar8 = (longlong *)FUN_14479d2ce(*param_2 + 0x18), plVar8 == (longlong *)0x0)) ||
      (lVar7 = (**(code **)(*plVar8 + 0x180))(plVar8), dVar25 = DAT_14c8464f0,
      dVar24 = DAT_14c8464e8, plVar8 = DAT_14c8464e0, lVar7 == 0)))) goto LAB_14894e208;
  if (*(char *)((longlong)puVar16 + 0x6c) == '\x01') {
    if (*(char *)(puVar16 + 0xf) == '\x01') {
      FUN_1405e06c2(*param_2,&local_140,puVar16 + 0x13,param_3 + 0x90);
      if ((longlong)local_138 != 0) {
        local_1a0 = local_140;
        lVar15 = 0;
        do {
          local_148 = *(undefined8 *)((longlong)local_1a0 + lVar15);
          lVar9 = FUN_14479d2ce(&local_148);
          if (lVar9 != 0) {
            lVar10 = FUN_144a6c4d8();
            if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
              if (puVar16[0x16] == 0) goto LAB_14894e336;
              plVar8 = (longlong *)(lVar9 + 0x240);
              lVar15 = lVar9 + 0x250;
              local_130 = (undefined8 *)&DAT_100000000;
              local_120 = 0xffffffff;
              uStack_118 = 0;
              uStack_116 = 0;
              uStack_128 = lVar15;
              if (*(int *)(lVar9 + 0x268) == 0) {
                iVar17 = 0;
              }
              else {
                FUN_1449c0562(&local_130);
                iVar17 = *(int *)(lVar9 + 0x268);
              }
              dStack_e8 = (double)CONCAT44(uStack_114,CONCAT22(uStack_116,uStack_118));
              uStack_f0 = local_120;
              uVar12 = uStack_f0;
              uStack_100 = (undefined4)local_130;
              uStack_fc = local_130._4_4_;
              local_f8 = (undefined4)uStack_128;
              uStack_f4 = uStack_128._4_4_;
              uStack_f0._4_4_ = (int)((ulonglong)local_120 >> 0x20);
              iVar6 = uStack_f0._4_4_;
              local_108 = plVar8;
              if ((uStack_f0._4_4_ != iVar17) || (uStack_f0 = uVar12, uStack_128 != lVar15))
              goto LAB_14894e378;
              goto LAB_14894e336;
            }
          }
          plVar11 = (longlong *)FUN_14479d2ce(&local_148);
          if (plVar11 != (longlong *)0x0) {
            lVar9 = FUN_144a799b0();
            if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar11[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                lVar9 + 0x30)) goto LAB_14894e34a;
          }
          lVar15 = lVar15 + 8;
        } while ((longlong)local_138 * 8 != lVar15);
      }
    }
    else {
      plVar8 = (longlong *)FUN_140127e98(*param_2 + 0x38);
      uVar32 = 0;
      uVar33 = 0x3ff00000;
      uVar34 = 0;
      uVar35 = 0x3ff00000;
      uVar30 = 0;
      uVar31 = 0x3ff00000;
      if ((plVar8 == (longlong *)0x0) ||
         (lVar15 = (**(code **)(*plVar8 + 0x18))(plVar8), lVar15 == 0)) {
LAB_14894def0:
        local_d8 = 0;
        uStack_d4 = 0;
        uVar19 = 0;
        uVar20 = 0;
        uVar21 = 0;
        uVar22 = 0x3ff00000;
        dVar23 = 0.0;
        dVar24 = 0.0;
        plVar11 = (longlong *)0x0;
        dVar25 = 0.0;
      }
      else {
        uVar12 = FUN_140127f54();
        plVar8 = (longlong *)FUN_144718840(lVar15,uVar12);
        if (plVar8 == (longlong *)0x0) {
          uVar12 = *(undefined8 *)(lVar15 + 0x10);
          uVar13 = FUN_140127f54();
          cVar5 = FUN_144a7ff9e(uVar12,uVar13);
          if (cVar5 == '\0') goto LAB_14894def0;
          FUN_1475a1e7e(&local_108,lVar15);
        }
        else {
          (**(code **)(*plVar8 + 0x10))(plVar8,&local_108);
        }
        dVar25 = (double)CONCAT44(uStack_fc,uStack_100);
        dVar24 = (double)CONCAT44(uStack_dc,uStack_e0);
        uVar19 = local_f8;
        uVar20 = uStack_f4;
        uVar21 = (uint)uStack_f0;
        uVar22 = uStack_f0._4_4_;
        dVar23 = dStack_e8;
        plVar11 = local_108;
        uVar30 = local_b8;
        uVar31 = uStack_b4;
        uVar32 = local_c8;
        uVar33 = uStack_c4;
        uVar34 = uStack_c0;
        uVar35 = uStack_bc;
      }
      dVar3 = (double)puVar16[0x10] * (double)CONCAT44(uVar33,uVar32);
      dVar4 = (double)puVar16[0x11] * (double)CONCAT44(uVar35,uVar34);
      dVar26 = (double)puVar16[0x12] * (double)CONCAT44(uVar31,uVar30);
      dVar27 = dVar4 * (double)plVar11 - dVar25 * dVar3;
      dVar28 = dVar26 * dVar25 - (double)CONCAT44(uVar20,uVar19) * dVar4;
      dVar29 = dVar3 * (double)CONCAT44(uVar20,uVar19) - (double)plVar11 * dVar26;
      dVar28 = dVar28 + dVar28;
      dVar29 = dVar29 + dVar29;
      dVar27 = dVar27 + dVar27;
      plVar8 = (longlong *)
               ((dVar27 * dVar25 - dVar29 * (double)CONCAT44(uVar20,uVar19)) +
                (double)CONCAT44(uVar22,uVar21) * dVar28 + dVar3 + dVar23);
      dVar24 = ((double)CONCAT44(uVar20,uVar19) * dVar28 - (double)plVar11 * dVar27) +
               (double)CONCAT44(uVar22,uVar21) * dVar29 + dVar4 + dVar24;
      dVar25 = (double)CONCAT44(uVar22,uVar21) * dVar27 + dVar26 +
               (dVar29 * (double)plVar11 - dVar28 * dVar25) + (double)CONCAT44(uStack_d4,local_d8);
    }
  }
LAB_14894dfe4:
  if (0 < *(int *)(lVar7 + 0x238)) {
    local_1a0 = puVar16 + 3;
    iVar17 = 0;
    lVar15 = 0;
    do {
      lVar9 = FUN_14479d2ce(*(longlong *)(lVar7 + 0x230) + lVar15);
      if (lVar9 != 0) {
        lVar10 = FUN_1449f3324();
        if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
          local_108 = (longlong *)((ulonglong)local_108 & 0xffffffffffffff00);
          uStack_e0 = 0;
          FUN_1456bb102(&local_108,*(undefined8 *)(lVar9 + 0x3d0));
          FUN_1448729ea(local_1a0,&local_130,&local_108);
          uVar18 = FUN_144a7b41a(&local_130,0x3f800000);
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_110 * 0x120));
          if (pcVar2 != (code *)0x0) {
            puVar14 = &local_130;
            if (0x18 < uStack_118) {
              puVar14 = local_130;
            }
            (*pcVar2)(puVar14);
          }
          if (0x18 < uStack_118) {
            FUN_1400020a8(local_130);
          }
          FUN_144a5ac3a(&local_108);
          if (*(char *)((longlong)puVar16 + 0x6c) == '\x01') {
            local_1b8 = *(undefined4 *)(puVar16 + 0xe);
            local_1b0 = *(undefined4 *)((longlong)puVar16 + 0x74);
            local_168._8_4_ = SUB84(dVar24,0);
            local_168._0_8_ = plVar8;
            local_168._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
            local_180 = *puVar16;
            local_178 = *(undefined4 *)(puVar16 + 1);
            local_170 = 0;
            local_1c8 = 0;
            local_1d0 = CONCAT44(local_1d0._4_4_,uVar18);
            local_1d8 = local_1d8 & 0xffffff00;
            local_1e0 = 0;
            local_1e8 = 0;
            local_1c0 = local_168;
            local_158 = dVar25;
            FUN_141884caa(lVar9,&local_180,*(undefined4 *)(puVar16 + 0xd),lVar9 + 0x960);
          }
          else {
            local_198 = *puVar16;
            local_190 = *(undefined4 *)(puVar16 + 1);
            local_188 = 0;
            local_1d0 = 0;
            local_1e0 = 0;
            local_1e8 = 0;
            local_1d8 = uVar18;
            FUN_140cab292(lVar9,&local_198,*(undefined4 *)(puVar16 + 0xd),lVar9 + 0x960);
          }
        }
      }
      lVar15 = lVar15 + 8;
      iVar17 = iVar17 + 1;
    } while (iVar17 < *(int *)(lVar7 + 0x238));
  }
LAB_14894e208:
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_a0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14894e378:
  do {
    uStack_f0 = uVar12;
    plVar11 = *(longlong **)(*local_108 + (longlong)iVar6 * 0x10);
    if (plVar11 != (longlong *)0x0) {
      lVar10 = FUN_144a799b0();
      if (((*(int *)(lVar10 + 0x38) <= *(int *)(plVar11[2] + 0x38)) &&
          (*(longlong *)(*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
           == lVar10 + 0x30)) && (plVar11[3] == puVar16[0x16])) goto LAB_14894e34a;
    }
    uStack_f0 = CONCAT44(uStack_f0._4_4_,(uint)uStack_f0 & ~uStack_fc);
    FUN_1449c0562(&uStack_100);
    iVar6 = uStack_f0._4_4_;
    uVar12 = uStack_f0;
  } while (local_108 != plVar8 ||
           (CONCAT44(uStack_f4,local_f8) != lVar15 || uStack_f0._4_4_ != iVar17));
LAB_14894e336:
  plVar11 = (longlong *)thunk_FUN_1487d5b90(lVar9);
  if (plVar11 == (longlong *)0x0) {
    lVar15 = *(longlong *)(lVar9 + 0x1c8);
    plVar8 = DAT_14c8464e0;
    dVar24 = DAT_14c8464e8;
    dVar25 = DAT_14c8464f0;
    if (lVar15 != 0) {
      plVar8 = *(longlong **)(lVar15 + 0x260);
      dVar24 = *(double *)(lVar15 + 0x268);
      dVar25 = *(double *)(lVar15 + 0x270);
    }
  }
  else {
LAB_14894e34a:
    (**(code **)(*plVar11 + 0x4b0))(plVar11,&local_108,puVar16[0x17]);
    plVar8 = local_108;
    dVar24 = (double)CONCAT44(uStack_fc,uStack_100);
    dVar25 = (double)CONCAT44(uStack_f4,local_f8);
  }
  goto LAB_14894dfe4;
}



// FUNCTION 14894e44e FUN_14894e44e body=102 status=ok
// SIG undefined FUN_14894e44e(void)

undefined8 FUN_14894e44e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar3 = *param_2;
      goto LAB_14894e482;
    }
  }
  lVar3 = 0;
LAB_14894e482:
  lVar1 = FUN_145b7ca28();
  if ((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                     *(longlong *)
                      (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
                     lVar1 + 0x30);
  }
  return uVar2;
}



// FUNCTION 14894e4b9 FUN_14894e4b9 body=182 status=ok
// SIG undefined FUN_14894e4b9(void)

undefined8 FUN_14894e4b9(undefined8 param_1)

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
  local_b8 = FUN_145b7ca28();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 8;
  local_90 = 0;
  uStack_88 = 0;
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



// FUNCTION 14894e570 FUN_14894e570 body=159 status=ok
// SIG undefined FUN_14894e570(void)

void FUN_14894e570(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_145b7ca28();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      iVar1 = *(int *)(param_1 + 0x100);
      *(uint *)(param_1 + 0x100) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
        FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14894e66a FUN_14894e66a body=106 status=ok
// SIG undefined FUN_14894e66a(void)

void FUN_14894e66a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0xf8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894e6d6 FUN_14894e6d6 body=95 status=ok
// SIG undefined FUN_14894e6d6(void)

void FUN_14894e6d6(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x100);
  }
  *(int *)(param_1 + 0x100) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0xf8);
  return;
}



// FUNCTION 14894e742 FUN_14894e742 body=38 status=ok
// SIG undefined FUN_14894e742(void)

void FUN_14894e742(longlong param_1)

{
  FUN_14781bb36();
  if (*(longlong *)(param_1 + 0x70) == 0) {
    return;
  }
  FUN_14894e768();
  return;
}



// FUNCTION 14894e768 FUN_14894e768 body=143 status=ok
// SIG undefined FUN_14894e768(void)

longlong FUN_14894e768(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b7bd5c();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  lVar1 = FUN_14756dfb0(param_1,&local_18);
  if (lVar1 != 0) {
    lVar2 = FUN_145b7bd5c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_14894e7ce;
  }
  lVar1 = 0;
LAB_14894e7ce:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894e7f8 FUN_14894e7f8 body=424 status=ok
// SIG undefined FUN_14894e7f8(void)

void FUN_14894e7f8(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_48 = (undefined1 *)0x0;
  local_40 = 0x1000000000;
  if ((int)*(uint *)(param_1 + 0x150) < 1) {
    FUN_14894f496(local_c8);
  }
  else if ((*(uint *)(param_1 + 0x150) < 0x11) ||
          (FUN_140989ea8(local_c8), 0 < *(int *)(param_1 + 0x150))) {
    lVar7 = 8;
    lVar8 = 0;
    do {
      uVar2 = local_40;
      lVar1 = *(longlong *)(param_1 + 0x148);
      *(int *)(lVar1 + lVar7) = (int)lVar8;
      lVar6 = (longlong)(int)local_40;
      uVar3 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,uVar3);
      if (local_40._4_4_ < uVar3) {
        FUN_1468b3bb8(local_c8,uVar2 & 0xffffffff);
      }
      puVar4 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar4 = local_c8;
      }
      *(undefined8 *)(puVar4 + lVar6 * 8) = *(undefined8 *)(lVar1 + -8 + lVar7);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar8 < *(int *)(param_1 + 0x150));
  }
  uVar3 = *(uint *)(param_1 + 0x128);
  if ((int)uVar3 < (int)local_40 && -1 < (int)uVar3) {
    puVar4 = local_c8;
    if (local_48 != (undefined1 *)0x0) {
      puVar4 = local_48;
    }
    if (*(longlong *)(param_1 + 0x120) == *(longlong *)(puVar4 + (ulonglong)uVar3 * 8))
    goto LAB_14894e963;
    if (*(longlong *)(param_1 + 0x120) == 0) {
      *(longlong *)(param_1 + 0x120) = *(longlong *)(puVar4 + (ulonglong)uVar3 * 8);
      goto LAB_14894e963;
    }
  }
  puVar4 = local_c8;
  if (local_48 != (undefined1 *)0x0) {
    puVar4 = local_48;
  }
  uVar5 = 0xffffffff;
  if ((int)local_40 != 0) {
    lVar7 = (longlong)(int)local_40 << 3;
    lVar8 = 0;
    do {
      if (*(longlong *)(puVar4 + lVar8 * 8) == *(longlong *)(param_1 + 0x120)) {
        uVar5 = (undefined4)lVar8;
        break;
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0x128) = uVar5;
LAB_14894e963:
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14894e9a2 FUN_14894e9a2 body=1828 status=ok
// SIG undefined FUN_14894e9a2(void)

void FUN_14894e9a2(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  longlong lVar11;
  undefined4 **ppuVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  undefined4 *puVar16;
  int iVar17;
  int *piVar18;
  ulonglong uVar19;
  int *piVar20;
  int *piVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int *piVar25;
  int iVar26;
  int *piVar27;
  int *piVar28;
  undefined4 *puVar29;
  bool bVar30;
  float fVar31;
  undefined1 auStack_3b8 [32];
  undefined4 *local_398;
  uint local_390;
  undefined4 local_38c;
  undefined1 local_388 [24];
  longlong local_370;
  undefined4 *local_368;
  undefined4 *local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400337aa();
    lVar11 = FUN_14894f3a4(*(undefined8 *)(param_1 + 0x70));
    if (lVar11 == 0) {
      lVar11 = FUN_14894e768(*(undefined8 *)(param_1 + 0x70));
    }
    FUN_1400337aa(lVar11);
    lVar11 = *(longlong *)(lVar11 + 0xf8);
    if (lVar11 != 0) {
      FUN_140861d3c(local_388,lVar11 + 0xf8,lVar11 + 0x148,lVar11 + 0x180);
      local_398 = (undefined4 *)0x0;
      uVar23 = *(uint *)(*(longlong *)(param_1 + 0x70) + 0x158);
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x150);
      local_390 = uVar23;
      local_370 = lVar11 + 0x158;
      if (uVar23 == 0) {
        local_38c = 0;
        uVar23 = 0;
      }
      else {
        FUN_1475903c0(&local_398,uVar23,0);
        FUN_147590422(local_398,uVar3,uVar23);
        uVar23 = local_390;
      }
      uVar2 = *(uint *)(param_1 + 0x128);
      if ((int)uVar2 < (int)uVar23 && -1 < (int)uVar2) {
        iVar22 = local_398[(ulonglong)uVar2 * 8 + 4] + -1;
        if (local_398[(ulonglong)uVar2 * 8 + 4] == 0) {
          iVar22 = 0;
        }
        FUN_1446f82e2(&local_368,iVar22,*(undefined8 *)(local_398 + (ulonglong)uVar2 * 8 + 2),1);
        local_68 = local_368;
        FUN_1470d6b1e(param_1 + 0x120);
        uVar23 = local_390;
      }
      else {
        *(uint *)(param_1 + 0x128) = (uint)(0 < (int)uVar2);
        *(undefined8 *)(param_1 + 0x120) =
             *(undefined8 *)(DAT_14c9a6308 + (ulonglong)(0 < (int)uVar2) * 8);
      }
      puVar29 = local_398;
      if (1 < (int)uVar23) {
        memset(local_358,0,0x2f0);
        local_368 = puVar29;
        local_360 = puVar29 + (ulonglong)uVar23 * 8 + -8;
        fVar31 = logf((float)(int)uVar23);
        local_358[0] = (int)(longlong)(fVar31 + fVar31);
        ppuVar12 = &local_368;
        do {
          piVar14 = *ppuVar12;
          piVar18 = ppuVar12[1];
          iVar22 = *(int *)(ppuVar12 + 2);
          iVar26 = (int)((ulonglong)((longlong)piVar18 - (longlong)piVar14) >> 5);
          uVar23 = iVar26 + 1;
          piVar15 = piVar14;
          piVar20 = piVar18;
          if (iVar22 != 0) {
LAB_14894ebc6:
            if (8 < (int)uVar23) {
              uVar19 = (ulonglong)(uVar23 >> 1);
              uVar3 = *(undefined8 *)(piVar14 + uVar19 * 8);
              uVar4 = *(undefined8 *)(piVar14 + uVar19 * 8 + 2);
              uVar5 = *(undefined8 *)(piVar14 + uVar19 * 8 + 4);
              uVar6 = *(undefined8 *)(piVar14 + uVar19 * 8 + 4 + 2);
              uVar7 = *(undefined8 *)piVar14;
              uVar8 = *(undefined8 *)(piVar14 + 2);
              uVar9 = *(undefined8 *)(piVar14 + 6);
              *(undefined8 *)(piVar14 + uVar19 * 8 + 4) = *(undefined8 *)(piVar14 + 4);
              *(undefined8 *)(piVar14 + uVar19 * 8 + 4 + 2) = uVar9;
              *(undefined8 *)(piVar14 + uVar19 * 8) = uVar7;
              *(undefined8 *)(piVar14 + uVar19 * 8 + 2) = uVar8;
              *(undefined8 *)(piVar14 + 4) = uVar5;
              *(undefined8 *)(piVar14 + 6) = uVar6;
              *(undefined8 *)piVar14 = uVar3;
              *(undefined8 *)(piVar14 + 2) = uVar4;
              piVar25 = piVar20 + 8;
              piVar13 = piVar14;
              do {
                piVar10 = piVar13 + 8;
                piVar21 = piVar13 + 8;
                do {
                  piVar28 = piVar21;
                  piVar13 = piVar10;
                  if (piVar20 < piVar13) break;
                  piVar10 = piVar13 + 8;
                  piVar21 = piVar28 + 8;
                } while (*piVar13 <= *piVar14);
                piVar10 = piVar25 + -0x10;
                do {
                  piVar21 = piVar25;
                  piVar27 = piVar10;
                  piVar25 = piVar21 + -8;
                  if (piVar25 <= piVar14) break;
                  piVar10 = piVar27 + -8;
                } while (*piVar14 <= *piVar25);
                if (piVar25 < piVar13) goto LAB_14894ecba;
                uVar3 = *(undefined8 *)piVar13;
                uVar4 = *(undefined8 *)(piVar13 + 2);
                uVar5 = *(undefined8 *)(piVar13 + 4);
                uVar6 = *(undefined8 *)(piVar13 + 6);
                uVar7 = *(undefined8 *)piVar25;
                uVar8 = *(undefined8 *)(piVar21 + -6);
                uVar9 = *(undefined8 *)(piVar21 + -2);
                *(undefined8 *)(piVar13 + 4) = *(undefined8 *)(piVar21 + -4);
                *(undefined8 *)(piVar13 + 6) = uVar9;
                *(undefined8 *)piVar13 = uVar7;
                *(undefined8 *)(piVar13 + 2) = uVar8;
                *(undefined8 *)(piVar21 + -4) = uVar5;
                *(undefined8 *)(piVar21 + -2) = uVar6;
                *(undefined8 *)piVar25 = uVar3;
                *(undefined8 *)(piVar21 + -6) = uVar4;
              } while( true );
            }
            if (piVar14 < piVar20) {
              do {
                piVar18 = piVar14;
                if (piVar14 + 8 <= piVar20) {
                  piVar15 = piVar14 + 8;
                  iVar22 = *piVar14;
                  do {
                    iVar26 = *piVar15;
                    iVar24 = iVar22;
                    if (iVar22 <= iVar26) {
                      iVar24 = iVar26;
                    }
                    if (iVar22 < iVar26) {
                      piVar18 = piVar15;
                    }
                    piVar15 = piVar15 + 8;
                    iVar22 = iVar24;
                  } while (piVar15 <= piVar20);
                }
                local_68 = *(undefined4 **)piVar18;
                uStack_60 = *(undefined8 *)(piVar18 + 2);
                local_58 = *(undefined8 *)(piVar18 + 4);
                uStack_50 = *(undefined8 *)(piVar18 + 6);
                puVar29 = local_68;
                uVar6 = uStack_60;
                uVar3 = *(undefined8 *)piVar20;
                uVar4 = *(undefined8 *)(piVar20 + 2);
                uVar5 = *(undefined8 *)(piVar20 + 6);
                *(undefined8 *)(piVar18 + 4) = *(undefined8 *)(piVar20 + 4);
                *(undefined8 *)(piVar18 + 6) = uVar5;
                *(undefined8 *)piVar18 = uVar3;
                *(undefined8 *)(piVar18 + 2) = uVar4;
                local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
                uStack_60._4_4_ = (int)((ulonglong)uStack_60 >> 0x20);
                *(undefined8 *)(piVar20 + 4) = local_58;
                *(undefined8 *)(piVar20 + 6) = uStack_50;
                *piVar20 = (int)local_68;
                piVar20[1] = local_68._4_4_;
                piVar20[2] = (int)uStack_60;
                piVar20[3] = uStack_60._4_4_;
                piVar20 = piVar20 + -8;
                local_68 = puVar29;
                uStack_60 = uVar6;
              } while (piVar14 < piVar20);
            }
            goto LAB_14894f057;
          }
LAB_14894ed89:
          if (uVar23 != 0) {
            iVar22 = (iVar26 - (iVar26 + -1 >> 0x1f)) + -1 >> 1;
            iVar26 = iVar22;
joined_r0x00014894edb0:
            do {
              iVar24 = iVar22 * 2 + 1;
              if (iVar24 < (int)uVar23) {
                iVar17 = iVar22 * 2 + 2;
                if ((iVar17 < (int)uVar23) &&
                   (piVar14[(longlong)iVar24 * 8] <= piVar14[(longlong)iVar17 * 8])) {
                  iVar24 = iVar17;
                }
                if (piVar14[(longlong)iVar22 * 8] < piVar14[(longlong)iVar24 * 8]) {
                  piVar20 = piVar14 + (longlong)iVar22 * 8;
                  piVar18 = piVar14 + (longlong)iVar24 * 8;
                  local_68 = *(undefined4 **)piVar20;
                  uStack_60 = *(undefined8 *)(piVar20 + 2);
                  local_58 = *(undefined8 *)(piVar20 + 4);
                  uStack_50 = *(undefined8 *)(piVar20 + 6);
                  puVar29 = local_68;
                  uVar6 = uStack_60;
                  uVar3 = *(undefined8 *)piVar18;
                  uVar4 = *(undefined8 *)(piVar18 + 2);
                  uVar5 = *(undefined8 *)(piVar18 + 6);
                  *(undefined8 *)(piVar20 + 4) = *(undefined8 *)(piVar18 + 4);
                  *(undefined8 *)(piVar20 + 6) = uVar5;
                  *(undefined8 *)piVar20 = uVar3;
                  *(undefined8 *)(piVar20 + 2) = uVar4;
                  local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
                  uStack_60._4_4_ = (int)((ulonglong)uStack_60 >> 0x20);
                  *(undefined8 *)(piVar18 + 4) = local_58;
                  *(undefined8 *)(piVar18 + 6) = uStack_50;
                  *piVar18 = (int)local_68;
                  piVar18[1] = local_68._4_4_;
                  piVar18[2] = (int)uStack_60;
                  piVar18[3] = uStack_60._4_4_;
                  iVar22 = iVar24;
                  local_68 = puVar29;
                  uStack_60 = uVar6;
                  goto joined_r0x00014894edb0;
                }
              }
              bVar30 = iVar26 != 0;
              iVar22 = iVar26 + -1;
              iVar26 = iVar22;
            } while (bVar30);
            if (1 < (int)uVar23) {
              uVar19 = (ulonglong)uVar23 - 1;
              local_68 = *(undefined4 **)piVar14;
              uStack_60 = *(undefined8 *)(piVar14 + 2);
              local_58 = *(undefined8 *)(piVar14 + 4);
              uStack_50 = *(undefined8 *)(piVar14 + 6);
              puVar29 = local_68;
              uVar6 = uStack_60;
              uVar3 = *(undefined8 *)(piVar14 + uVar19 * 8);
              uVar4 = *(undefined8 *)(piVar14 + uVar19 * 8 + 2);
              uVar5 = *(undefined8 *)(piVar14 + uVar19 * 8 + 4 + 2);
              *(undefined8 *)(piVar14 + 4) = *(undefined8 *)(piVar14 + uVar19 * 8 + 4);
              *(undefined8 *)(piVar14 + 6) = uVar5;
              *(undefined8 *)piVar14 = uVar3;
              *(undefined8 *)(piVar14 + 2) = uVar4;
              local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (int)((ulonglong)uStack_60 >> 0x20);
              *(undefined8 *)(piVar14 + uVar19 * 8 + 4) = local_58;
              *(undefined8 *)(piVar14 + uVar19 * 8 + 4 + 2) = uStack_50;
              piVar20 = piVar14 + uVar19 * 8;
              *piVar20 = (int)local_68;
              piVar20[1] = local_68._4_4_;
              piVar20[2] = (int)uStack_60;
              piVar20[3] = uStack_60._4_4_;
              local_68 = puVar29;
              uStack_60 = uVar6;
              if (uVar23 != 2) {
                do {
                  iVar22 = 0;
                  iVar24 = 1;
                  iVar26 = 0;
                  do {
                    iVar22 = iVar22 + 2;
                    iVar17 = iVar24;
                    if (((longlong)iVar22 < (longlong)uVar19) &&
                       (piVar14[(longlong)iVar24 * 8] <= piVar14[(longlong)iVar22 * 8])) {
                      iVar17 = iVar22;
                    }
                    if (piVar14[(longlong)iVar17 * 8] <= piVar14[(longlong)iVar26 * 8]) break;
                    piVar18 = piVar14 + (longlong)iVar26 * 8;
                    piVar20 = piVar14 + (longlong)iVar17 * 8;
                    uVar3 = *(undefined8 *)piVar18;
                    uVar4 = *(undefined8 *)(piVar18 + 2);
                    uVar5 = *(undefined8 *)(piVar18 + 4);
                    uVar6 = *(undefined8 *)(piVar18 + 6);
                    uVar7 = *(undefined8 *)piVar20;
                    uVar8 = *(undefined8 *)(piVar20 + 2);
                    uVar9 = *(undefined8 *)(piVar20 + 6);
                    *(undefined8 *)(piVar18 + 4) = *(undefined8 *)(piVar20 + 4);
                    *(undefined8 *)(piVar18 + 6) = uVar9;
                    *(undefined8 *)piVar18 = uVar7;
                    *(undefined8 *)(piVar18 + 2) = uVar8;
                    *(undefined8 *)(piVar20 + 4) = uVar5;
                    *(undefined8 *)(piVar20 + 6) = uVar6;
                    *(undefined8 *)piVar20 = uVar3;
                    *(undefined8 *)(piVar20 + 2) = uVar4;
                    iVar22 = iVar17 * 2;
                    iVar24 = iVar17 * 2 + 1;
                    iVar26 = iVar17;
                  } while ((longlong)iVar24 < (longlong)uVar19);
                  uVar1 = uVar19 - 1;
                  local_68 = *(undefined4 **)piVar14;
                  uStack_60 = *(undefined8 *)(piVar14 + 2);
                  local_58 = *(undefined8 *)(piVar14 + 4);
                  uStack_50 = *(undefined8 *)(piVar14 + 6);
                  puVar29 = local_68;
                  uVar6 = uStack_60;
                  uVar3 = *(undefined8 *)(piVar14 + uVar1 * 8);
                  uVar4 = *(undefined8 *)(piVar14 + uVar1 * 8 + 2);
                  uVar5 = *(undefined8 *)(piVar14 + uVar1 * 8 + 4 + 2);
                  *(undefined8 *)(piVar14 + 4) = *(undefined8 *)(piVar14 + uVar1 * 8 + 4);
                  *(undefined8 *)(piVar14 + 6) = uVar5;
                  *(undefined8 *)piVar14 = uVar3;
                  *(undefined8 *)(piVar14 + 2) = uVar4;
                  local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
                  uStack_60._4_4_ = (int)((ulonglong)uStack_60 >> 0x20);
                  *(undefined8 *)(piVar14 + uVar1 * 8 + 4) = local_58;
                  *(undefined8 *)(piVar14 + uVar1 * 8 + 4 + 2) = uStack_50;
                  piVar20 = piVar14 + uVar1 * 8;
                  *piVar20 = (int)local_68;
                  piVar20[1] = local_68._4_4_;
                  piVar20[2] = (int)uStack_60;
                  piVar20[3] = uStack_60._4_4_;
                  bVar30 = 2 < uVar19;
                  uVar19 = uVar1;
                  local_68 = puVar29;
                  uStack_60 = uVar6;
                } while (bVar30);
              }
            }
          }
LAB_14894f057:
          ppuVar12 = ppuVar12 + -3;
          uVar23 = local_390;
        } while (&local_368 <= ppuVar12);
      }
      if (uVar23 != 0) {
        puVar16 = local_398 + (longlong)(int)uVar23 * 8;
        puVar29 = local_398;
        do {
          FUN_1475b28c4(local_388,*puVar29,puVar29 + 2);
          puVar29 = puVar29 + 8;
        } while (puVar29 != puVar16);
      }
      FUN_14756ec94(*(undefined8 *)(param_1 + 0x70));
      FUN_140cae155(local_398,local_390);
      if (local_398 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_14894f1bc(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14894ecba:
  local_68 = *(undefined4 **)piVar14;
  uStack_60 = *(undefined8 *)(piVar14 + 2);
  local_58 = *(undefined8 *)(piVar14 + 4);
  uStack_50 = *(undefined8 *)(piVar14 + 6);
  puVar29 = local_68;
  uVar6 = uStack_60;
  uVar3 = *(undefined8 *)piVar25;
  uVar4 = *(undefined8 *)(piVar21 + -6);
  uVar5 = *(undefined8 *)(piVar21 + -2);
  *(undefined8 *)(piVar14 + 4) = *(undefined8 *)(piVar21 + -4);
  *(undefined8 *)(piVar14 + 6) = uVar5;
  *(undefined8 *)piVar14 = uVar3;
  *(undefined8 *)(piVar14 + 2) = uVar4;
  local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (int)((ulonglong)uStack_60 >> 0x20);
  *(undefined8 *)(piVar21 + -4) = local_58;
  *(undefined8 *)(piVar21 + -2) = uStack_50;
  *piVar25 = (int)local_68;
  piVar21[-7] = local_68._4_4_;
  piVar21[-6] = (int)uStack_60;
  piVar21[-5] = uStack_60._4_4_;
  iVar22 = iVar22 + -1;
  piVar21 = piVar21 + -0x10;
  local_68 = puVar29;
  uStack_60 = uVar6;
  if ((longlong)piVar27 - (longlong)piVar15 < (longlong)piVar18 - (longlong)piVar28) {
    if (piVar13 < piVar20) {
      *ppuVar12 = piVar13;
      ppuVar12[1] = piVar20;
      *(int *)(ppuVar12 + 2) = iVar22;
      ppuVar12 = ppuVar12 + 3;
    }
    piVar28 = piVar14;
    piVar18 = piVar27;
    if (piVar25 <= piVar14 + 8) goto LAB_14894f057;
  }
  else {
    if (piVar14 + 8 < piVar25) {
      *ppuVar12 = piVar14;
      ppuVar12[1] = piVar21;
      *(int *)(ppuVar12 + 2) = iVar22;
      ppuVar12 = ppuVar12 + 3;
    }
    piVar14 = piVar13;
    piVar21 = piVar20;
    piVar18 = piVar20;
    if (piVar20 <= piVar13) goto LAB_14894f057;
  }
  iVar26 = (int)((ulonglong)((longlong)piVar18 - (longlong)piVar28) >> 5);
  uVar23 = iVar26 + 1;
  piVar15 = piVar28;
  piVar20 = piVar21;
  if (iVar22 == 0) goto LAB_14894ed89;
  goto LAB_14894ebc6;
}



// FUNCTION 14894f0c8 FUN_14894f0c8 body=244 status=ok
// SIG undefined FUN_14894f0c8(void)

void FUN_14894f0c8(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar3 = DAT_14c9a6308;
  iVar1 = *(int *)(param_1 + 0x150);
  if ((longlong)iVar1 == 0) {
LAB_14894f166:
    uVar5 = 0xffffffff;
    if ((longlong)DAT_14c9a6310 != 0) {
      lVar9 = (longlong)DAT_14c9a6310 << 3;
      lVar8 = 0;
      do {
        if (*(longlong *)(DAT_14c9a6308 + lVar8 * 8) == *(longlong *)(param_1 + 0x120)) {
          uVar5 = (uint)lVar8;
          break;
        }
        lVar8 = lVar8 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    uVar7 = 0;
    if (0 < (int)uVar5) {
      uVar7 = (ulonglong)uVar5;
    }
    *(int *)(param_1 + 0x128) = (int)uVar7;
    uVar4 = *(undefined8 *)(lVar3 + uVar7 * 8);
  }
  else {
    lVar9 = 0;
    iVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x148) + lVar9) == *(longlong *)(param_1 + 0x120)) {
        if (iVar6 < iVar1 && -1 < iVar6) {
          *(int *)(param_1 + 0x128) = iVar6;
          return;
        }
        break;
      }
      iVar6 = iVar6 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((longlong)iVar1 << 4 != lVar9);
    uVar5 = *(uint *)(param_1 + 0x128);
    uVar7 = (ulonglong)uVar5;
    if ((int)uVar5 < 0 || iVar1 <= (int)uVar5) {
      if (iVar1 < 1) goto LAB_14894f166;
      uVar2 = iVar1 - 1U;
      if ((int)uVar5 < (int)(iVar1 - 1U)) {
        uVar2 = uVar5;
      }
      uVar7 = 0;
      if (0 < (int)uVar2) {
        uVar7 = (ulonglong)uVar2;
      }
      *(int *)(param_1 + 0x128) = (int)uVar7;
    }
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x148) + uVar7 * 0x10);
  }
  *(undefined8 *)(param_1 + 0x120) = uVar4;
  return;
}



// FUNCTION 14894f1bc FUN_14894f1bc body=487 status=ok
// SIG undefined FUN_14894f1bc(void)

void FUN_14894f1bc(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  undefined8 *local_88 [3];
  longlong local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  iVar8 = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar5 = FUN_14894f3a4();
    iVar8 = 0;
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0xf8), lVar5 != 0)) {
      FUN_140861d3c(local_88,lVar5 + 0xf8,lVar5 + 0x148,lVar5 + 0x180);
      uVar7 = *(uint *)(lVar5 + 0x160);
      if ((int)*(uint *)(local_88[0] + 1) < (int)*(uint *)(lVar5 + 0x160)) {
        uVar7 = *(uint *)(local_88[0] + 1);
      }
      local_70 = lVar5 + 0x158;
      if (0 < (int)uVar7) {
        puVar9 = (undefined4 *)*local_88[0];
        lVar5 = *(longlong *)(lVar5 + 0x158);
        local_98 = param_1;
        FUN_14894f434(&local_68,uVar7);
        lVar6 = 0;
        do {
          lVar3 = local_68;
          lVar1 = lVar6 + local_68;
          iVar8 = *(int *)(lVar5 + 8 + lVar6);
          iVar2 = iVar8 + -1;
          if (iVar8 == 0) {
            iVar2 = 0;
          }
          FUN_1446f82e2(&local_50,iVar2,*(undefined8 *)(lVar5 + lVar6),1);
          local_90 = local_50;
          FUN_1470d6b1e(lVar1,&local_90);
          *(undefined4 *)(lVar3 + 0xc + lVar6) = *puVar9;
          lVar6 = lVar6 + 0x10;
          puVar9 = puVar9 + 1;
        } while ((ulonglong)uVar7 << 4 != lVar6);
        FUN_1489544e5(local_68,uStack_60 & 0xffffffff);
        param_1 = local_98;
      }
      iVar8 = (int)uStack_60;
    }
  }
  lVar5 = local_68;
  if (*(int *)(param_1 + 0x150) == iVar8) {
    cVar4 = FUN_148954931(*(longlong *)(param_1 + 0x148),local_68,iVar8);
    if (cVar4 != '\0') goto LAB_14894f36f;
  }
  if ((longlong *)(param_1 + 0x148) != &local_68) {
    if (*(longlong *)(param_1 + 0x148) != 0) {
      FUN_1400020a8();
      iVar8 = (int)uStack_60;
    }
    *(longlong *)(param_1 + 0x148) = local_68;
    local_68 = 0;
    *(int *)(param_1 + 0x150) = iVar8;
    *(undefined4 *)(param_1 + 0x154) = uStack_60._4_4_;
    uStack_60 = 0;
  }
  FUN_14894f0c8(param_1);
  lVar5 = local_68;
LAB_14894f36f:
  if (lVar5 != 0) {
    FUN_1400020a8(lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894f3a4 FUN_14894f3a4 body=143 status=ok
// SIG undefined FUN_14894f3a4(void)

longlong FUN_14894f3a4(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b7bd5c();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  lVar1 = FUN_14029826e(param_1,&local_18);
  if (lVar1 != 0) {
    lVar2 = FUN_145b7bd5c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_14894f40a;
  }
  lVar1 = 0;
LAB_14894f40a:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894f434 FUN_14894f434 body=98 status=ok
// SIG undefined FUN_14894f434(void)

void FUN_14894f434(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1489543c4(param_1,iVar1);
    }
    FUN_1489543ad((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_14895444a(param_1);
  return;
}



// FUNCTION 14894f496 FUN_14894f496 body=110 status=ok
// SIG undefined FUN_14894f496(void)

void * FUN_14894f496(void *param_1)

{
  void *_Src;
  int iVar1;
  void *_Dst;
  longlong lVar2;
  
  iVar1 = DAT_14c9a6310;
  _Src = DAT_14c9a6308;
  lVar2 = (longlong)DAT_14c9a6310;
  *(int *)((longlong)param_1 + 0x88) = DAT_14c9a6310;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x8c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0x10;
  }
  else {
    FUN_147003520(param_1,iVar1);
    if (iVar1 != 0) {
      _Dst = *(void **)((longlong)param_1 + 0x80);
      if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
        _Dst = param_1;
      }
      memcpy(_Dst,_Src,lVar2 << 3);
    }
  }
  return param_1;
}



// FUNCTION 14894f504 FUN_14894f504 body=121 status=ok
// SIG undefined FUN_14894f504(void)

undefined8 *
FUN_14894f504(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_2;
  FUN_143e15675(&local_28,param_4);
  local_48 = local_28;
  local_40 = 0xffffffff;
  FUN_145db43d8(local_38,param_3);
  *param_1 = local_38[0];
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894f57e FUN_14894f57e body=98 status=ok
// SIG undefined FUN_14894f57e(void)

void FUN_14894f57e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_1;
  FUN_143e15675(&local_20,param_3);
  local_30 = local_20;
  local_28 = 0xffffffff;
  FUN_140ebd630(param_2);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894f5e2 FUN_14894f5e2 body=116 status=ok
// SIG undefined FUN_14894f5e2(void)

void FUN_14894f5e2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_1;
  FUN_143e15675(&local_28,param_4);
  local_30 = 0xffffffff;
  local_48 = local_28;
  local_40 = 0xffffffff;
  local_38 = param_2;
  FUN_1409c2518(param_3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894f658 FUN_14894f658 body=105 status=ok
// SIG undefined FUN_14894f658(void)

void FUN_14894f658(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_1;
  FUN_143e15675(&local_28,param_4);
  local_38 = local_28;
  local_30 = 0xffffffff;
  FUN_14128618c(param_3,&local_38,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894f6c9 FUN_14894f6c9 body=133 status=ok
// SIG undefined FUN_14894f6c9(void)

ulonglong FUN_14894f6c9(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_140298400();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) &&
       (((*(int *)(param_1 + 0xc) != 0 || *(int *)(param_1 + 8) != 0) ||
        *(int *)(param_1 + 0x10) != 0) || *(int *)(param_1 + 0x14) != 0)) {
      lVar2 = (**(code **)(*plVar1 + 0x2e8))(plVar1);
      if (lVar2 != 0) {
        lVar2 = FUN_140313508(lVar2,param_1 + 8);
        if ((lVar2 != 0) &&
           (((*(int *)(lVar2 + 0x5c) != 0 || *(int *)(lVar2 + 0x58) != 0) ||
            *(int *)(lVar2 + 0x60) != 0) || *(int *)(lVar2 + 100) != 0)) {
          uVar3 = 0;
        }
      }
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14894f74e FUN_14894f74e body=248 status=ok
// SIG undefined FUN_14894f74e(void)

longlong * FUN_14894f74e(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  cVar4 = FUN_14894f6c9(param_3);
  if (cVar4 != '\0') {
    uVar6 = (**(code **)(*param_2 + 0x180))(param_2);
    FUN_14132b09a(&local_30,uVar6);
    if (local_28 != (longlong *)0x0) {
      iVar5 = (int)local_28[1];
      do {
        if (iVar5 == 0) {
          plVar8 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_28[1];
        bVar9 = iVar5 == iVar3;
        if (bVar9) {
          *(int *)(local_28 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
        plVar8 = local_28;
      } while (!bVar9);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      if (plVar8 != (longlong *)0x0) {
        if (local_30 != 0) {
          lVar7 = FUN_1488ae41c(local_30,param_4);
          if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar7);
          }
          *param_1 = lVar7;
        }
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14894f848 FUN_14894f848 body=488 status=ok
// SIG undefined FUN_14894f848(void)

longlong * FUN_14894f848(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  cVar4 = FUN_14894f6c9(param_3);
  if (cVar4 == '\0') goto LAB_14894f938;
  uVar6 = (**(code **)(*param_2 + 0x180))(param_2);
  FUN_14132b09a(&local_50,uVar6);
  if (local_48 == (longlong *)0x0) goto LAB_14894f938;
  iVar5 = (int)local_48[1];
  do {
    if (iVar5 == 0) {
      plVar10 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar3 = (int)local_48[1];
    bVar11 = iVar5 == iVar3;
    if (bVar11) {
      *(int *)(local_48 + 1) = iVar5 + 1;
      iVar3 = iVar5;
    }
    iVar5 = iVar3;
    UNLOCK();
    plVar10 = local_48;
  } while (!bVar11);
  LOCK();
  piVar1 = (int *)((longlong)local_48 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_48 + 0x10))();
  }
  if (plVar10 == (longlong *)0x0) goto LAB_14894f938;
  if ((local_50 != 0) && (lVar7 = FUN_1460489ff(uVar6), lVar7 != 0)) {
    lVar8 = FUN_140082f10();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
        == lVar8 + 0x30)) {
      lVar8 = FUN_1488ae4fe(local_50,lVar7,param_4);
      if (lVar8 == 0) {
        lVar8 = FUN_1403b0700(lVar7);
        lVar7 = *(longlong *)(lVar8 + 0x40);
        if (lVar7 == 0) {
          uVar6 = FUN_140355b7c();
          lVar7 = FUN_14477b664(uVar6);
          *(longlong *)(lVar8 + 0x40) = lVar7;
        }
        lVar9 = *(longlong *)(lVar8 + 0x48);
        if (((lVar9 == 0) && (lVar9 = 0, lVar7 != 0)) && (*(longlong *)(lVar8 + 0x38) != 0)) {
          plVar2 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
            lVar9 = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar9 = FUN_144aff482(uVar6,(longlong *)(lVar8 + 0x38));
          }
          *(longlong *)(lVar8 + 0x48) = lVar9;
        }
        lVar8 = FUN_1488ae6d8(local_50,lVar9,param_4);
        if (lVar8 != 0) goto LAB_14894f978;
      }
      else {
LAB_14894f978:
        if (DAT_14c950c29 != '\0') {
          FUN_1456cec3c(lVar8);
        }
      }
      *param_1 = lVar8;
    }
  }
  LOCK();
  plVar2 = plVar10 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
LAB_14894f938:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14894fa32 FUN_14894fa32 body=2350 status=ok
// SIG undefined FUN_14894fa32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_14894fa32(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,byte param_5)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar25;
  double dVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar21;
  double dVar27;
  undefined1 auVar24 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auStack_308 [32];
  undefined1 local_2e8 [16];
  double local_2d0;
  undefined1 local_2c8 [16];
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278 [32];
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
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
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  uVar8 = FUN_1447addd0(param_3,0x10);
  iVar9 = FUN_148954b00((longlong *)(param_1 + 0x148),uVar8,param_3);
  if (iVar9 != -1) {
    lVar14 = (longlong)iVar9 * 0xf0 + *(longlong *)(param_1 + 0x148);
    if ((undefined8 *)(lVar14 + 0x10) != (undefined8 *)0x0 && lVar14 != 0) {
      puVar12 = (undefined8 *)(lVar14 + 0x70);
      if (param_5 != 0) {
        puVar12 = (undefined8 *)(lVar14 + 0x10);
      }
      local_298 = *puVar12;
      uStack_290 = puVar12[1];
      local_288 = puVar12[2];
      uStack_280 = puVar12[3];
      dVar2 = (double)puVar12[4];
      dVar3 = (double)puVar12[5];
      dVar5 = (double)puVar12[6];
      dVar6 = (double)puVar12[7];
      local_2a8 = puVar12[10];
      uStack_2a0 = puVar12[0xb];
      local_2b8 = puVar12[8];
      uStack_2b0 = puVar12[9];
      if (param_4 != 0) {
        lVar10 = FUN_144a6c4d8();
        iVar9 = *(int *)(lVar10 + 0x38);
        if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x38) < iVar9) ||
           (*(longlong *)(*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) + (longlong)iVar9 * 8)
            != lVar10 + 0x30)) {
          lVar10 = FUN_144a799b0();
          iVar9 = *(int *)(lVar10 + 0x38);
          if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x38) < iVar9) ||
             ((*(longlong *)
                (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) + (longlong)iVar9 * 8) !=
               lVar10 + 0x30 || (param_4 = *(longlong *)(param_4 + 0xa8), param_4 == 0))))
          goto LAB_14894fc1d;
        }
        lVar10 = *(longlong *)(param_4 + 0x1c8);
        if ((lVar10 != 0) &&
           ((fVar1 = *(float *)(lVar14 + 0xd0 + (ulonglong)(param_5 ^ 1) * 4), 1e-08 < fVar1 &&
            (lVar14 = thunk_FUN_140e1d22c(), auVar24 = _DAT_149934d80, lVar14 != 0)))) {
          auVar22 = *(undefined1 (*) [16])(lVar14 + 0x280);
          auVar18 = *(undefined1 (*) [16])(lVar14 + 0x290);
          auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar22._8_8_));
          auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar22._0_8_));
          iVar11 = movmskpd((int)param_4,auVar31);
          auVar36._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar18._8_8_));
          auVar36._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar18._0_8_));
          uVar13 = movmskpd(iVar9,auVar36);
          auVar17 = _DAT_14c8464c0;
          auVar31 = _DAT_14c8464d0;
          dVar33 = DAT_14c846480;
          dVar34 = DAT_14c846488;
          dVar38 = DAT_14c846490;
          dVar40 = DAT_14c846498;
          dVar30 = DAT_14c8464a0;
          dVar32 = DAT_14c8464a8;
          dVar20 = DAT_14c8464b0;
          if ((uVar13 & 0x3fffffff) != 0 || iVar11 != 0) {
            auVar36 = divpd(_DAT_149934d80,auVar22);
            auVar31 = divpd(ZEXT816(0x3ff0000000000000),auVar18);
            auVar17._0_8_ =
                 (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar22._0_8_)) & auVar36._0_8_);
            auVar17._8_8_ =
                 (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar22._8_8_)) & auVar36._8_8_);
            local_2e8._0_8_ =
                 -(ulonglong)(9.99999993922529e-09 < ABS(auVar18._0_8_)) & auVar31._0_8_;
            local_2e8._8_8_ = 0;
            dVar38 = *(double *)(lVar14 + 0x250) * -1.0;
            dVar40 = *(double *)(lVar14 + 600) * 1.0;
            dVar33 = -*(double *)(lVar14 + 0x240);
            dVar34 = -*(double *)(lVar14 + 0x248);
            dVar30 = *(double *)(lVar14 + 0x260) * auVar17._0_8_;
            dVar32 = *(double *)(lVar14 + 0x268) * auVar17._8_8_;
            dVar35 = *(double *)(lVar14 + 0x270) * (double)local_2e8._0_8_;
            dVar20 = dVar32 * dVar33 - dVar34 * dVar30;
            dVar25 = dVar35 * dVar34 - dVar38 * dVar32;
            dVar26 = dVar30 * dVar38 - dVar33 * dVar35;
            dVar25 = dVar25 + dVar25;
            dVar26 = dVar26 + dVar26;
            dVar20 = dVar20 + dVar20;
            auVar31 = local_2e8;
            dVar30 = 0.0 - ((dVar20 * dVar34 - dVar26 * dVar38) + dVar40 * dVar25 + dVar30);
            dVar32 = 0.0 - (dVar20 * *(double *)(lVar14 + 0x240) + dVar38 * dVar25 +
                           dVar40 * dVar26 + dVar32);
            dVar20 = 0.0 - (dVar40 * dVar20 + dVar35 + (dVar26 * dVar33 - dVar25 * dVar34));
          }
          dVar35 = (double)fVar1;
          auVar22 = *(undefined1 (*) [16])(lVar10 + 0x280);
          dVar26 = auVar22._0_8_;
          dVar25 = auVar22._8_8_;
          auVar18 = *(undefined1 (*) [16])(lVar10 + 0x290);
          auVar22 = minpd(auVar22,auVar17);
          auVar36 = minpd(auVar18,auVar31);
          auVar23._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
          auVar23._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
          iVar9 = movmskpd((int)lVar14,auVar23);
          auVar22._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
          auVar22._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
          uVar13 = movmskpd(iVar11,auVar22);
          dVar16 = auVar17._0_8_;
          dVar19 = auVar17._8_8_;
          dVar28 = auVar31._0_8_;
          if ((uVar13 & 0x3fffffff) == 0 && iVar9 == 0) {
            dVar16 = dVar16 * *(double *)(lVar10 + 0x260);
            dVar19 = dVar19 * *(double *)(lVar10 + 0x268);
            dVar28 = dVar28 * *(double *)(lVar10 + 0x270);
            dVar30 = dVar19 * dVar33 - dVar16 * dVar34;
            dVar32 = dVar28 * dVar34 - dVar19 * dVar38;
            dVar38 = dVar16 * dVar38 - dVar33 * dVar28;
            local_e8 = dVar20 + ((dVar38 + dVar38) * dVar33 - dVar34 * (dVar32 + dVar32)) +
                                dVar40 * (dVar30 + dVar30) + dVar28;
          }
          else {
            dVar37 = dVar34 + dVar34;
            dVar21 = dVar38 + dVar38;
            dVar29 = dVar33 * (dVar33 + dVar33);
            local_1d8 = (1.0 - (dVar38 * dVar21 + dVar34 * dVar37)) * dVar16;
            dVar38 = (1.0 - (dVar38 * dVar21 + dVar29)) * dVar19;
            dVar27 = (dVar33 + dVar33) * dVar40;
            dStack_190 = (dVar21 * dVar34 - dVar27) * dVar28;
            local_198 = (dVar33 * dVar21 + dVar37 * dVar40) * dVar28;
            dStack_1d0 = (dVar37 * dVar33 + dVar21 * dVar40) * dVar16;
            local_1a8 = (dVar21 * dVar34 + dVar27) * dVar19;
            local_188 = (1.0 - (dVar29 + dVar34 * dVar37)) * dVar28;
            local_1c8 = (dVar33 * dVar21 - dVar37 * dVar40) * dVar16;
            uStack_1c0 = 0;
            local_1b8._8_4_ = SUB84(dVar38,0);
            local_1b8._0_8_ = (dVar37 * dVar33 - dVar21 * dVar40) * dVar19;
            local_1b8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
            uStack_1a0 = 0;
            uStack_180 = 0;
            uStack_160 = 0x3ff0000000000000;
            dVar34 = *(double *)(lVar10 + 0x240);
            dVar38 = *(double *)(lVar10 + 0x248);
            dVar40 = *(double *)(lVar10 + 0x250);
            dVar28 = dVar38 + dVar38;
            dVar21 = dVar40 + dVar40;
            dVar37 = dVar34 * (dVar34 + dVar34);
            dVar39 = *(double *)(lVar10 + 0x240) * dVar21;
            dVar33 = *(double *)(lVar10 + 600);
            dVar27 = dVar21 * dVar33;
            dVar29 = (dVar34 + dVar34) * *(double *)(lVar10 + 600);
            dVar33 = dVar28 * dVar33;
            local_2c8._0_8_ = auVar18._0_8_;
            uVar7 = local_2c8._0_8_;
            local_238 = (dVar28 * dVar34 - dVar27) * dVar25;
            dStack_210 = (dVar21 * dVar38 - dVar29) * (double)local_2c8._0_8_;
            local_258 = ((double)DAT_149934d80 - (dVar40 * dVar21 + dVar38 * dVar28)) * dVar26;
            dStack_230 = (DAT_149934d80._8_8_ - (dVar40 * dVar21 + dVar37)) * dVar25;
            dStack_250 = (dVar28 * dVar34 + dVar27) * dVar26;
            local_228 = (dVar21 * dVar38 + dVar29) * dVar25;
            local_218 = (dVar33 + dVar39) * (double)local_2c8._0_8_;
            local_248 = (dVar39 - dVar33) * dVar26;
            uStack_240 = 0;
            uStack_220 = 0;
            local_208 = (1.0 - (dVar37 + dVar38 * dVar28)) * (double)local_2c8._0_8_;
            uStack_200 = 0;
            local_1f8 = *(undefined8 *)(lVar10 + 0x260);
            uStack_1f0 = *(undefined8 *)(lVar10 + 0x268);
            local_1e8 = *(undefined8 *)(lVar10 + 0x270);
            uStack_1e0 = 0x3ff0000000000000;
            local_2e8 = auVar31;
            local_2d0 = dVar35;
            local_2c8 = auVar18;
            local_178 = dVar30;
            dStack_170 = dVar32;
            local_168 = dVar20;
            FUN_1447fea8d(&local_158);
            FUN_144a1c686(&local_158,0x3e45798ee0000000);
            dVar35 = local_2d0;
            auVar18._8_8_ = -(ulonglong)(0.0 <= dVar19 * dVar25);
            auVar18._0_8_ = -(ulonglong)(0.0 <= dVar16 * dVar26);
            auVar24 = blendvpd(_DAT_149936790,auVar24,auVar18);
            uVar15 = -(ulonglong)(0.0 <= (double)local_2e8._0_8_ * (double)uVar7);
            dVar33 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
            dVar34 = auVar24._0_8_;
            local_148 = local_148 * dVar34;
            local_150 = local_150 * dVar34;
            local_158 = local_158 * dVar34;
            dVar34 = auVar24._8_8_;
            local_128 = local_128 * dVar34;
            local_130 = local_130 * dVar34;
            local_138 = dVar34 * local_138;
            local_108 = local_108 * dVar33;
            local_110 = local_110 * dVar33;
            local_118 = dVar33 * local_118;
            FUN_14481fd10(local_278,&local_158);
          }
          dVar2 = dVar2 + 0.0;
          dVar3 = dVar3 + 0.0;
          dVar5 = dVar5 + (double)(float)(local_e8 * dVar35);
          dVar6 = dVar6 + 0.0;
        }
      }
LAB_14894fc1d:
      param_2[2] = local_288;
      param_2[3] = uStack_280;
      *param_2 = local_298;
      param_2[1] = uStack_290;
      auVar24._8_4_ = SUB84(dVar3,0);
      auVar24._0_8_ = dVar2;
      auVar24._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 4) = auVar24;
      auVar4._8_4_ = SUB84(dVar6,0);
      auVar4._0_8_ = dVar5;
      auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 6) = auVar4;
      param_2[8] = local_2b8;
      param_2[9] = uStack_2b0;
      param_2[10] = local_2a8;
      param_2[0xb] = uStack_2a0;
      *(undefined1 *)(param_2 + 0xc) = 1;
      goto LAB_14894fb0d;
    }
  }
  *(undefined1 *)(param_2 + 0xc) = 0;
LAB_14894fb0d:
  if ((local_d0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14895036a FUN_14895036a body=166 status=ok
// SIG undefined FUN_14895036a(void)

ulonglong FUN_14895036a(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 unaff_RBX;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  cVar1 = *(char *)(param_1 + 0xb8);
  if (cVar1 == '\x01') {
    lVar8 = FUN_1404101e2(param_1 + 0xc0);
    uVar7 = DAT_14c846520;
    uVar6 = DAT_14c846518;
    uVar5 = DAT_14c846510;
    if (lVar8 == 0) {
      puVar9 = (undefined8 *)(param_1 + 0x110);
      puVar10 = (undefined8 *)(param_1 + 0x120);
      uVar11 = *(undefined4 *)(param_1 + 0xf0);
      uVar12 = *(undefined4 *)(param_1 + 0xf4);
      uVar13 = *(undefined4 *)(param_1 + 0xf8);
      uVar14 = *(undefined4 *)(param_1 + 0xfc);
      uVar15 = (undefined4)*(undefined8 *)(param_1 + 0x100);
      uVar16 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x100) >> 0x20);
      uVar17 = 0;
      uVar18 = 0;
    }
    else {
      puVar9 = &DAT_14c846480;
      if (*(longlong *)(lVar8 + 0x1c8) != 0) {
        puVar9 = (undefined8 *)(*(longlong *)(lVar8 + 0x1c8) + 0x240);
      }
      puVar10 = puVar9 + 2;
      uVar11 = *(undefined4 *)(puVar9 + 4);
      uVar12 = *(undefined4 *)((longlong)puVar9 + 0x24);
      uVar13 = *(undefined4 *)(puVar9 + 5);
      uVar14 = *(undefined4 *)((longlong)puVar9 + 0x2c);
      uVar15 = *(undefined4 *)(puVar9 + 6);
      uVar16 = *(undefined4 *)((longlong)puVar9 + 0x34);
      uVar17 = *(undefined4 *)(puVar9 + 7);
      uVar18 = *(undefined4 *)((longlong)puVar9 + 0x3c);
    }
    uVar2 = puVar9[1];
    uVar3 = *puVar10;
    uVar4 = puVar10[1];
    *param_2 = *puVar9;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    *(undefined4 *)(param_2 + 4) = uVar11;
    *(undefined4 *)((longlong)param_2 + 0x24) = uVar12;
    *(undefined4 *)(param_2 + 5) = uVar13;
    *(undefined4 *)((longlong)param_2 + 0x2c) = uVar14;
    *(undefined4 *)(param_2 + 6) = uVar15;
    *(undefined4 *)((longlong)param_2 + 0x34) = uVar16;
    *(undefined4 *)(param_2 + 7) = uVar17;
    *(undefined4 *)((longlong)param_2 + 0x3c) = uVar18;
    param_2[8] = uVar5;
    param_2[9] = uVar6;
    param_2[10] = uVar7;
    param_2[0xb] = 0;
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) & 0xffffffff;
}



// FUNCTION 148950410 FUN_148950410 body=67 status=ok
// SIG undefined FUN_148950410(void)

undefined8 FUN_148950410(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x160))(param_2,param_1);
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 8);
  FUN_1488345b9(param_2,param_1 + 0x10);
  return 1;
}



// FUNCTION 148950454 FUN_148950454 body=75 status=ok
// SIG undefined FUN_148950454(void)

undefined8 FUN_148950454(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  (**(code **)(*param_2 + 0x160))(param_2,param_1);
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 8);
  FUN_1488345b9(param_2,param_1 + 0x10);
  *param_4 = 1;
  return 1;
}



// FUNCTION 1489504a0 FUN_1489504a0 body=373 status=ok
// SIG undefined FUN_1489504a0(void)

undefined8 FUN_1489504a0(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 2);
  uVar3 = FUN_14633a04a();
  FUN_14047320e(uVar3,param_2,param_1 + 4,0);
  FUN_148950616(param_2,param_1 + 0xe);
  FUN_148954b7a(param_2,param_1 + 0x14);
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x18);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x18) = local_24 != 0;
    if (local_24 == 0) goto LAB_1489505d4;
  }
  else {
    *(bool *)(param_1 + 0x18) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) goto LAB_1489505d4;
  }
  FUN_1400f4f7e(param_2,param_1 + 0x1c);
  FUN_14480c34d(param_2,param_1 + 0x24);
  FUN_14480c34d(param_2,param_1 + 0x2c);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined8 *)(param_1 + 0x2a) = 0;
    *(undefined8 *)(param_1 + 0x32) = 0;
  }
LAB_1489505d4:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 148950616 FUN_148950616 body=148 status=ok
// SIG undefined FUN_148950616(void)

void FUN_148950616(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_28 = *param_2;
    (**(code **)(*param_1 + 0x160))(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x160))(param_1,&local_28);
    if (*param_2 != local_28) {
      param_2[2] = 0;
    }
    *param_2 = local_28;
  }
  FUN_14041e882(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489506ac FUN_1489506ac body=24 status=ok
// SIG undefined FUN_1489506ac(void)

undefined1 FUN_1489506ac(void)

{
  undefined1 *in_R9;
  
  FUN_1489504a0();
  *in_R9 = 1;
  return 1;
}



// FUNCTION 1489506c4 FUN_1489506c4 body=24 status=ok
// SIG undefined FUN_1489506c4(void)

void FUN_1489506c4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *(undefined1 *)(param_1 + 0x60) = 1;
  puVar2 = (undefined8 *)(param_1 + 0x70);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}



// FUNCTION 1489506dc FUN_1489506dc body=197 status=ok
// SIG undefined FUN_1489506dc(void)

longlong FUN_1489506dc(longlong param_1)

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
  lVar4 = FUN_1459f0598();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1489507a2 FUN_1489507a2 body=11 status=ok
// SIG undefined FUN_1489507a2(void)

bool FUN_1489507a2(longlong param_1)

{
  return *(int *)(param_1 + 0x9e8) == 1;
}



// FUNCTION 1489507ae FUN_1489507ae body=15 status=ok
// SIG undefined FUN_1489507ae(void)

void FUN_1489507ae(undefined8 param_1,undefined4 param_2)

{
  FUN_14655c96a(param_1,&DAT_14cb8a538,param_2);
  return;
}



// FUNCTION 1489507be FUN_1489507be body=15 status=ok
// SIG undefined FUN_1489507be(void)

void FUN_1489507be(undefined8 param_1,undefined4 param_2)

{
  FUN_14655c96a(param_1,&DAT_14cb8a5c0,param_2);
  return;
}



// FUNCTION 1489507ce FUN_1489507ce body=121 status=ok
// SIG undefined FUN_1489507ce(void)

undefined4 * FUN_1489507ce(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  param_1[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),_Src,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d) = 0;
  param_1[0xe] = 0x1000002;
  return param_1;
}



// FUNCTION 148950848 FUN_148950848 body=38 status=ok
// SIG undefined FUN_148950848(void)

void FUN_148950848(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  
  uVar1 = *(undefined1 *)(param_1 + 0x200);
  uVar2 = FUN_1447210f0(param_1 + -0x440);
  FUN_1418a8aca(uVar2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 14895086e FUN_14895086e body=160 status=ok
// SIG undefined FUN_14895086e(void)

void FUN_14895086e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_1418a7c2a(param_1 + 0x640);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_2 + 0x20);
  uVar6 = *(undefined4 *)(param_2 + 0x24);
  uVar7 = *(undefined4 *)(param_2 + 0x28);
  uVar8 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x3ac) = uVar2;
  *(undefined4 *)(param_1 + 0x3b0) = uVar3;
  *(undefined4 *)(param_1 + 0x3b4) = uVar4;
  *(undefined4 *)(param_1 + 0x3b8) = uVar5;
  *(undefined4 *)(param_1 + 0x3bc) = uVar6;
  *(undefined4 *)(param_1 + 0x3c0) = uVar7;
  *(undefined4 *)(param_1 + 0x3c4) = uVar8;
  *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(param_2 + 0x30);
  FUN_14781eba2(param_1,*(undefined8 *)(param_2 + 8));
  lVar1 = *(longlong *)(param_2 + 0x38);
  if ((*(longlong *)(param_1 + 0x460) != lVar1) ||
     (*(int *)(param_1 + 0x468) != *(int *)(param_2 + 0x40))) {
    *(longlong *)(param_1 + 0x460) = lVar1;
    *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x470) = 0;
  }
  if (lVar1 != 0) {
    *(byte *)(param_1 + 0x3c4) = *(byte *)(param_1 + 0x3c4) & 0xc1;
  }
  FUN_145dbe520(param_1,*(undefined8 *)(param_1 + 0x648),param_1 + 0x690);
  return;
}



// FUNCTION 14895090e FUN_14895090e body=27 status=ok
// SIG undefined FUN_14895090e(void)

byte FUN_14895090e(longlong param_1)

{
  FUN_145dbe8f4();
  return *(byte *)(param_1 + 0x720) ^ 1;
}



// FUNCTION 14895092a FUN_14895092a body=241 status=ok
// SIG undefined FUN_14895092a(void)

void FUN_14895092a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(param_1 + 0x670);
  *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)(param_1 + 0x660);
  *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(param_1 + 0x668);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_1 + 0x650);
  *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_1 + 0x654);
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_1 + 0x658);
  *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(param_1 + 0x65c);
  if (*(longlong *)(param_1 + 0x460) == *(longlong *)(param_1 + 0x678)) {
    iVar3 = *(int *)(param_1 + 0x680);
    if (*(int *)(param_1 + 0x468) == iVar3) goto LAB_14895099a;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x680);
  }
  *(longlong *)(param_1 + 0x460) = *(longlong *)(param_1 + 0x678);
  *(int *)(param_1 + 0x468) = iVar3;
  *(undefined8 *)(param_1 + 0x470) = 0;
LAB_14895099a:
  lVar2 = FUN_141416276(param_1);
  lVar1 = *(longlong *)(param_1 + 0x460);
  if (((lVar1 != 0) && (*(byte *)(param_1 + 0x3c4) = *(byte *)(param_1 + 0x3c4) & 0xc1, lVar2 != 0))
     && ((*(longlong *)(lVar2 + 0x8a8) != lVar1 ||
         (*(int *)(lVar2 + 0x8b0) != *(int *)(param_1 + 0x468))))) {
    *(longlong *)(lVar2 + 0x8a8) = lVar1;
    *(undefined4 *)(lVar2 + 0x8b0) = *(undefined4 *)(param_1 + 0x468);
    *(undefined8 *)(lVar2 + 0x8b8) = 0;
  }
  FUN_14781eba2(param_1,*(undefined8 *)(param_1 + 0x648));
  FUN_145dbe520(param_1,*(undefined8 *)(param_1 + 0x648),param_1 + 0x690);
  return;
}



// FUNCTION 148950a30 FUN_148950a30 body=27 status=ok
// SIG undefined FUN_148950a30(void)

undefined8 FUN_148950a30(undefined8 param_1,undefined8 param_2)

{
  FUN_148950a4c();
  return param_2;
}



// FUNCTION 148950a4c FUN_148950a4c body=1989 status=ok
// SIG undefined FUN_148950a4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_148950a4c(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                      undefined1 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong *plVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar26;
  double dVar27;
  undefined1 auVar25 [16];
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_308 [32];
  undefined1 local_2e8;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  double dStack_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
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
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
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
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  lVar16 = FUN_145d503e6();
  if (lVar16 != 0) {
    lVar17 = FUN_140861c56();
    if ((*(int *)(lVar17 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8
         ) == lVar17 + 0x30)) {
      local_2e8 = param_5;
      FUN_14894fa32(lVar16,param_2,param_3,param_4);
      if (*(char *)(param_2 + 0xc) == '\x01') {
        lVar16 = (**(code **)(*(longlong *)(param_1 + 0x390) + 0x18))(param_1 + 0x390);
        if (lVar16 != 0) {
          uVar18 = FUN_140127f54();
          plVar19 = (longlong *)FUN_144718840(lVar16,uVar18);
          if (plVar19 != (longlong *)0x0) {
            uVar14 = (**(code **)(*plVar19 + 0x10))(plVar19,&local_2d8);
            auVar31 = _DAT_149934d80;
            dVar2 = local_298._0_8_;
            dVar6 = local_298._8_8_;
            dVar3 = local_288._0_8_;
            auVar23 = *(undefined1 (*) [16])(param_2 + 8);
            dVar4 = auVar23._0_8_;
            dVar7 = auVar23._8_8_;
            auVar1 = *(undefined1 (*) [16])(param_2 + 10);
            dVar5 = auVar1._0_8_;
            auVar23 = minpd(auVar23,local_298);
            auVar29 = minpd(auVar1,local_288);
            auVar24._8_8_ = -(ulonglong)(auVar23._8_8_ < 0.0);
            auVar24._0_8_ = -(ulonglong)(auVar23._0_8_ < 0.0);
            iVar15 = movmskpd(uVar14,auVar24);
            auVar23._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
            auVar23._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
            uVar20 = movmskpd((int)plVar19,auVar23);
            if ((uVar20 & 0x3fffffff) == 0 && iVar15 == 0) {
              dVar11 = *param_2;
              dVar12 = param_2[1];
              dVar30 = param_2[2];
              dVar13 = param_2[3];
              dVar34 = param_2[4] * dVar2;
              dVar35 = param_2[5] * dVar6;
              dVar26 = param_2[6] * dVar3;
              dVar9 = param_2[7] * local_288._8_8_;
              dVar28 = dVar35 * local_2d8 - dStack_2d0 * dVar34;
              dVar27 = dVar26 * dStack_2d0 - local_2c8 * dVar35;
              dVar33 = dVar34 * local_2c8 - local_2d8 * dVar26;
              dVar10 = dVar9 * dStack_2c0 - dStack_2c0 * dVar9;
              dVar27 = dVar27 + dVar27;
              dVar33 = dVar33 + dVar33;
              dVar28 = dVar28 + dVar28;
              dVar10 = dVar10 + dVar10;
              dStack_2b0 = (dVar27 * local_2c8 - dVar28 * local_2d8) + dStack_2c0 * dVar33 + dVar35
                           + dStack_2b0;
              *param_2 = dVar12 * local_2c8 * -1.0 +
                         dVar30 * dStack_2d0 + dVar13 * local_2d8 * 1.0 + dVar11 * dStack_2c0;
              param_2[1] = dVar11 * local_2c8 * 1.0 +
                           dVar13 * dStack_2d0 + dVar30 * local_2d8 * -1.0 + dVar12 * dStack_2c0;
              param_2[2] = dVar13 * local_2c8 * 1.0 +
                           ((local_2d8 * dVar12 * 1.0 + dVar30 * dStack_2c0) - dVar11 * dStack_2d0);
              param_2[3] = dVar30 * local_2c8 * -1.0 +
                           ((local_2d8 * dVar11 * -1.0 + dVar13 * dStack_2c0) - dVar12 * dStack_2d0)
              ;
              auVar31._8_4_ = SUB84(dStack_2b0,0);
              auVar31._0_8_ =
                   (dVar28 * dStack_2d0 - local_2c8 * dVar33) + dStack_2c0 * dVar27 + dVar34 +
                   local_2b8;
              auVar31._12_4_ = (int)((ulonglong)dStack_2b0 >> 0x20);
              *(undefined1 (*) [16])(param_2 + 4) = auVar31;
              param_2[6] = (dVar33 * local_2d8 - dStack_2d0 * dVar27) + dStack_2c0 * dVar28 + dVar26
                           + (double)CONCAT44(uStack_2a4,local_2a8);
              param_2[7] = (dVar10 * dStack_2c0 - dVar10 * dStack_2c0) + dStack_2c0 * dVar10 + dVar9
                           + dStack_2a0;
            }
            else {
              dVar26 = dStack_2d0 + dStack_2d0;
              dVar28 = local_2c8 + local_2c8;
              dVar33 = local_2d8 * (local_2d8 + local_2d8);
              local_188 = (1.0 - (dVar33 + dStack_2d0 * dVar26)) * dVar3;
              dVar27 = (local_2d8 + local_2d8) * dStack_2c0;
              local_198 = (dVar26 * dStack_2c0 + local_2d8 * dVar28) * dVar3;
              dStack_190 = (dVar28 * dStack_2d0 - dVar27) * dVar3;
              local_1d8 = ((double)DAT_149934d80 - (local_2c8 * dVar28 + dStack_2d0 * dVar26)) *
                          dVar2;
              dVar33 = (DAT_149934d80._8_8_ - (local_2c8 * dVar28 + dVar33)) * dVar6;
              dStack_1d0 = (dVar26 * local_2d8 + dVar28 * dStack_2c0) * dVar2;
              local_1a8 = (dVar28 * dStack_2d0 + dVar27) * dVar6;
              local_1c8 = (local_2d8 * dVar28 - dVar26 * dStack_2c0) * dVar2;
              uStack_1c0 = 0;
              local_1b8._8_4_ = SUB84(dVar33,0);
              local_1b8._0_8_ = (dVar26 * local_2d8 - dVar28 * dStack_2c0) * dVar6;
              local_1b8._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
              uStack_1a0 = 0;
              uStack_180 = 0;
              local_178 = local_2b8;
              dStack_170 = dStack_2b0;
              local_168 = local_2a8;
              uStack_164 = uStack_2a4;
              uStack_160 = 0;
              uStack_15c = 0x3ff00000;
              dVar10 = *param_2;
              dVar11 = param_2[1];
              dVar12 = param_2[2];
              dVar30 = dVar11 + dVar11;
              dVar27 = dVar12 + dVar12;
              dVar9 = dVar10 * (dVar10 + dVar10);
              local_208 = (1.0 - (dVar9 + dVar11 * dVar30)) * dVar5;
              dVar28 = param_2[3];
              dVar33 = dVar27 * dVar28;
              dVar26 = (dVar10 + dVar10) * param_2[3];
              dVar28 = dVar30 * dVar28;
              local_218 = (dVar28 + *param_2 * dVar27) * dVar5;
              local_238 = (dVar30 * dVar10 - dVar33) * dVar7;
              dStack_210 = (dVar27 * dVar11 - dVar26) * dVar5;
              local_258 = ((double)DAT_149934d80 - (dVar12 * dVar27 + dVar11 * dVar30)) * dVar4;
              dStack_230 = (DAT_149934d80._8_8_ - (dVar12 * dVar27 + dVar9)) * dVar7;
              dStack_250 = (dVar30 * dVar10 + dVar33) * dVar4;
              local_228 = (dVar27 * dVar11 + dVar26) * dVar7;
              local_248 = (*param_2 * dVar27 - dVar28) * dVar4;
              uStack_240 = 0;
              uStack_220 = 0;
              uStack_200 = 0;
              local_1f8 = param_2[4];
              dStack_1f0 = param_2[5];
              local_1e8 = param_2[6];
              uStack_1e0 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_158);
              FUN_144a1c686(&local_158,0x3e45798ee0000000);
              auVar29._8_8_ = -(ulonglong)(0.0 <= dVar6 * dVar7);
              auVar29._0_8_ = -(ulonglong)(0.0 <= dVar2 * dVar4);
              auVar23 = blendvpd(_DAT_149936790,auVar31,auVar29);
              uVar21 = -(ulonglong)(0.0 <= dVar3 * dVar5);
              dVar28 = (double)(~uVar21 & 0xbff0000000000000 | uVar21 & 0x3ff0000000000000);
              dVar27 = auVar23._0_8_;
              local_148 = local_148 * dVar27;
              local_150 = local_150 * dVar27;
              local_158 = local_158 * dVar27;
              dVar27 = auVar23._8_8_;
              local_128 = local_128 * dVar27;
              local_130 = local_130 * dVar27;
              local_138 = dVar27 * local_138;
              local_108 = local_108 * dVar28;
              local_110 = local_110 * dVar28;
              local_118 = dVar28 * local_118;
              FUN_14481fd10(&local_278,&local_158);
              dVar28 = local_268 * local_268 + local_278 * local_278;
              dVar27 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
              auVar25._0_8_ = dVar28 + dVar27;
              auVar25._8_8_ = dVar28 + dVar27;
              auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_);
              auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
              auVar23 = sqrtpd(auVar25,auVar25);
              auVar31 = divpd(auVar31,auVar23);
              auVar32._0_8_ = auVar31._0_8_ * local_268;
              auVar32._8_8_ = auVar31._8_8_ * dStack_260;
              auVar23 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar32,auVar22);
              *param_2 = (double)((ulonglong)(local_278 * auVar31._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_));
              param_2[1] = (double)((ulonglong)(dStack_270 * auVar31._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_));
              *(undefined1 (*) [16])(param_2 + 2) = auVar23;
              param_2[4] = local_f8;
              param_2[5] = dStack_f0;
              param_2[6] = local_e8;
              param_2[7] = 0.0;
            }
            dVar28 = local_288._8_8_ * auVar1._8_8_;
            auVar8._8_4_ = SUB84(dVar6 * dVar7,0);
            auVar8._0_8_ = dVar2 * dVar4;
            auVar8._12_4_ = (int)((ulonglong)(dVar6 * dVar7) >> 0x20);
            *(undefined1 (*) [16])(param_2 + 8) = auVar8;
            auVar1._8_4_ = SUB84(dVar28,0);
            auVar1._0_8_ = dVar3 * dVar5;
            auVar1._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
            *(undefined1 (*) [16])(param_2 + 10) = auVar1;
          }
        }
      }
      goto LAB_148950b0f;
    }
  }
  *(undefined1 *)(param_2 + 0xc) = 0;
LAB_148950b0f:
  if ((local_d0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148951212 FUN_148951212 body=27 status=ok
// SIG undefined FUN_148951212(void)

undefined8 FUN_148951212(undefined8 param_1,undefined8 param_2)

{
  FUN_148950a4c();
  return param_2;
}



// FUNCTION 14895122e FUN_14895122e body=246 status=ok
// SIG undefined FUN_14895122e(void)

longlong * FUN_14895122e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (lVar2 != 0) {
    iVar5 = *(int *)(lVar2 + 0x68);
    iVar3 = *(int *)(lVar2 + 0x78) + iVar5;
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3);
    }
    if (iVar3 != 0) {
      FUN_1402191ca(param_2);
      lVar2 = *(longlong *)(param_1 + 0x70);
      iVar5 = *(int *)(lVar2 + 0x68);
    }
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        lVar2 = FUN_14574ef0a(lVar2,iVar5);
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_1446f84a2(param_2,iVar3);
        }
        lVar1 = *param_2;
        iVar4 = *(int *)(lVar2 + 0xb8) + -1;
        if (*(int *)(lVar2 + 0xb8) == 0) {
          iVar4 = 0;
        }
        FUN_1446f82e2(&local_50,iVar4,*(undefined8 *)(lVar2 + 0xb0),1);
        *(undefined8 *)(lVar1 + (longlong)iVar3 * 8) = local_50;
        iVar5 = iVar5 + 1;
        lVar2 = *(longlong *)(param_1 + 0x70);
      } while (iVar5 < *(int *)(lVar2 + 0x68));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148951326 FUN_148951326 body=488 status=ok
// SIG undefined FUN_148951326(void)

undefined4 * FUN_148951326(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar7 = 0;
  if (*(longlong *)(param_1 + 0x70) == 0) goto LAB_1489514cc;
  iVar6 = 0;
  local_70 = param_2;
  do {
    if (*(int *)(*(longlong *)(param_1 + 0x70) + 0x68) <= iVar6) {
      lVar5 = 0x50;
      lVar8 = -1;
      goto LAB_148951414;
    }
    lVar5 = FUN_14574ef0a();
    local_58 = (void *)0x0;
    local_50 = *(int *)(lVar5 + 0xb8);
    lVar8 = (longlong)local_50;
    pvVar2 = *(void **)(lVar5 + 0xb0);
    if (lVar8 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,pvVar2,lVar8 * 2);
    }
    cVar4 = FUN_1402ca054(param_3,local_58);
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    iVar6 = iVar6 + 1;
  } while (cVar4 == '\0');
  uVar10 = *(undefined4 *)(lVar5 + 0xa0);
  uVar11 = *(undefined4 *)(lVar5 + 0xa4);
  uVar12 = *(undefined4 *)(lVar5 + 0xa8);
  uVar13 = *(undefined4 *)(lVar5 + 0xac);
  goto LAB_1489514c1;
  while( true ) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x70);
    local_68 = (void *)0x0;
    local_60 = *(int *)(lVar3 + lVar5);
    lVar9 = (longlong)local_60;
    pvVar2 = *(void **)(lVar3 + -8 + lVar5);
    if (lVar9 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
      memcpy(local_68,pvVar2,lVar9 * 2);
    }
    cVar4 = FUN_1402ca054(param_3,local_68);
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    lVar5 = lVar5 + 0x80;
    if (cVar4 != '\0') break;
LAB_148951414:
    lVar8 = lVar8 + 1;
    if (*(int *)(*(longlong *)(param_1 + 0x70) + 0x78) <= lVar8) {
      uVar7 = 0;
      param_2 = local_70;
      goto LAB_1489514cc;
    }
  }
  puVar1 = (undefined4 *)(lVar3 + -0x98 + lVar5);
  uVar10 = *puVar1;
  uVar11 = puVar1[1];
  uVar12 = puVar1[2];
  uVar13 = puVar1[3];
LAB_1489514c1:
  *local_70 = uVar10;
  local_70[1] = uVar11;
  local_70[2] = uVar12;
  local_70[3] = uVar13;
  uVar7 = 1;
  param_2 = local_70;
LAB_1489514cc:
  *(undefined1 *)(param_2 + 4) = uVar7;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148951510 FUN_148951510 body=344 status=ok
// SIG undefined FUN_148951510(void)

undefined4
FUN_148951510(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_145a9bcf6(&local_88);
    local_88 = *param_3;
    uStack_70 = *(undefined8 *)(param_2 + 4);
    uStack_80 = *param_2;
    uStack_7c = param_2[1];
    uStack_78 = param_2[2];
    uStack_74 = param_2[3];
    uVar2 = FUN_141486f2e(param_1,&local_88);
    if ((char)uVar2 != '\0') {
      iVar1 = *(int *)(param_1 + 0x398);
      *(uint *)(param_1 + 0x398) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x39c) < iVar1 + 1U) {
        FUN_145a9bd30((longlong *)(param_1 + 0x390),iVar1);
      }
      puVar3 = (undefined8 *)((longlong)iVar1 * 0x58 + *(longlong *)(param_1 + 0x390));
      *(undefined4 *)(puVar3 + 2) = uStack_78;
      *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_74;
      *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_70._4_4_;
      *puVar3 = local_88;
      puVar3[1] = CONCAT44(uStack_7c,uStack_80);
      *(undefined2 *)(puVar3 + 4) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(undefined4 *)(puVar3 + 8) = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[4] = local_68;
      *(undefined4 *)(puVar3 + 5) = local_60;
      FUN_1447715ec(puVar3 + 6,local_58);
      *param_4 = (undefined4)local_88;
      param_4[1] = local_88._4_4_;
      param_4[2] = uStack_80;
      param_4[3] = uStack_7c;
      param_4[4] = uStack_78;
      param_4[5] = uStack_74;
      param_4[6] = (undefined4)uStack_70;
      param_4[7] = uStack_70._4_4_;
      FUN_1411b8130(param_4 + 8,&local_68);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar2 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148951670 FUN_148951670 body=114 status=ok
// SIG undefined FUN_148951670(void)

void FUN_148951670(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [38];
  undefined2 local_22;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_22 = (undefined2)param_3;
  local_20 = param_2;
  lVar1 = FUN_14479d2ce();
  if (lVar1 != 0) {
    FUN_143e1716e(param_1,lVar1,param_3);
  }
  FUN_14895638e(param_1 + 0x5c8,&local_22);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148951732 FUN_148951732 body=374 status=ok
// SIG undefined FUN_148951732(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148951732(longlong param_1,longlong param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_2 + 0x348) & 0x10) == 0) {
    plVar3 = (longlong *)FUN_14620cc76((longlong *)(param_1 + 0x778),*param_3,param_3);
    if (*plVar3 == 0) {
      local_58[1] = 0;
      FUN_14485c47a(local_58 + 1,param_2);
      FUN_1489578b0(local_48,param_1,local_58 + 1,param_3);
      FUN_1448b6402(param_2 + 0x350,local_58,local_48);
      FUN_1449db362(local_48);
      *plVar3 = local_58[0];
    }
  }
  else {
    if (*(int *)(param_1 + 0x780) != *(int *)(param_1 + 0x7ac)) {
      lVar2 = param_1 + 0x7b0;
      if (*(longlong *)(param_1 + 0x7b8) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x7b8);
      }
      iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x7c0) - 1U & *param_3) * 4);
      if (iVar4 != -1) {
        lVar2 = *(longlong *)(param_1 + 0x778);
        do {
          lVar1 = lVar2 + (longlong)iVar4 * 0x38;
          if (*(uint *)(lVar2 + (longlong)iVar4 * 0x38) == *param_3) {
            if (((longlong *)(lVar1 + 0x28) != (longlong *)0x0 && lVar1 != 0) &&
               (*(longlong *)(lVar1 + 0x28) != 0)) {
              FUN_14480f766(param_2 + 0x350);
            }
            break;
          }
          iVar4 = *(int *)(lVar1 + 0x30);
        } while (iVar4 != -1);
      }
    }
    lVar2 = FUN_141416276(param_2);
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489518be FUN_1489518be body=348 status=ok
// SIG undefined FUN_1489518be(void)

void FUN_1489518be(longlong param_1,undefined8 param_2,longlong *param_3,uint *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar1 = FUN_1447210f0();
  lVar2 = FUN_140149a73(uVar1,0);
  if ((lVar2 != 0) && (plVar3 = (longlong *)FUN_1401499e8(lVar2), plVar3 != (longlong *)0x0)) {
    if (*(int *)(param_1 + 0x730) != *(int *)(param_1 + 0x75c)) {
      lVar2 = param_1 + 0x760;
      if (*(longlong *)(param_1 + 0x768) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x768);
      }
      iVar6 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x770) - 1U & *param_4) * 4);
      if (iVar6 != -1) {
        lVar2 = *(longlong *)(param_1 + 0x728);
        do {
          lVar7 = lVar2 + (longlong)iVar6 * 0x38;
          if (*(uint *)(lVar2 + (longlong)iVar6 * 0x38) == *param_4) goto LAB_14895191a;
          iVar6 = *(int *)(lVar7 + 0x30);
        } while (iVar6 != -1);
      }
    }
    lVar7 = 0;
LAB_14895191a:
    if ((longlong)(int)param_3[1] != 0) {
      lVar2 = *param_3;
      lVar8 = (longlong)(int)param_3[1] << 3;
      do {
        lVar4 = FUN_14479d2ce(lVar2);
        if (lVar4 != 0) {
          lVar5 = FUN_141349952();
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
            FUN_148951732(param_1,lVar4,param_4);
            (**(code **)(*plVar3 + 0x78))(plVar3,param_2,*(undefined8 *)(lVar7 + 0x28));
            FUN_145be52cc((longlong *)(param_1 + 0x728),param_4);
            break;
          }
        }
        lVar2 = lVar2 + 8;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
  }
  if (*(longlong *)(param_4 + 6) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148951a1a FUN_148951a1a body=128 status=ok
// SIG undefined FUN_148951a1a(void)

void FUN_148951a1a(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  lVar1 = FUN_14479d2ce();
  if (lVar1 != 0) {
    FUN_148951732(param_1,lVar1,param_3);
  }
  FUN_145be52cc(param_1 + 0x778,param_3);
  if (*(longlong *)(param_3 + 0x18) == 0) {
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 148951aaa FUN_148951aaa body=59 status=ok
// SIG undefined FUN_148951aaa(void)

ulonglong FUN_148951aaa(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar6;
  bool bVar7;
  undefined7 uVar5;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x80);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = lVar2 * 3;
    lVar6 = 0;
    do {
      cVar1 = *(char *)(*(longlong *)(param_1 + 0x78) + 0x10 + lVar6);
      uVar5 = (undefined7)((ulonglong)lVar3 >> 8);
      lVar3 = CONCAT71(uVar5,cVar1);
      if (cVar1 != '\x01') break;
      bVar7 = lVar2 * 0x18 + -0x18 != lVar6;
      lVar6 = lVar6 + 0x18;
    } while (bVar7);
    uVar4 = CONCAT71(uVar5,cVar1) ^ 1;
  }
  return uVar4;
}



// FUNCTION 148951ae6 FUN_148951ae6 body=738 status=ok
// SIG undefined FUN_148951ae6(void)

undefined8
FUN_148951ae6(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong *param_4,
             longlong *param_5,undefined8 param_6)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_188 [40];
  longlong *local_160;
  undefined8 local_158;
  longlong *local_150;
  uint local_148;
  int iStack_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138 [2];
  longlong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  longlong local_100;
  int local_f8;
  undefined8 local_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  uint local_e0;
  uint local_dc;
  undefined1 uStack_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_138[0] = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = CONCAT22(local_118._2_2_,0x100);
  uStack_114 = 0x3f800000;
  local_100 = 0;
  local_f8 = -0x3c8962e9;
  local_c8 = 0;
  uStack_c0 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_e7 = 0;
  local_e0 = 0;
  local_dc = 0;
  uStack_d8 = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0x3ff00000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_84 = 0x3ff00000;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_108 = param_3[4];
  local_128 = *param_3;
  uStack_120 = param_3[1];
  local_118 = *(undefined4 *)(param_3 + 2);
  uStack_114 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_110 = *(undefined4 *)(param_3 + 3);
  uStack_10c = *(undefined4 *)((longlong)param_3 + 0x1c);
  if (*param_4 != 0 || (int)param_4[1] != -0x3c8962e9) {
    local_f0 = 0;
    local_100 = *param_4;
    local_f8 = (int)param_4[1];
  }
  iVar4 = (int)param_5[1] - *(int *)((longlong)param_5 + 0x34);
  local_130 = param_2;
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iVar4 != 0) {
    FUN_146544ebe(&uStack_e8);
  }
  plVar1 = param_5 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar4 = 0;
  local_60 = plVar1;
  if ((int)param_5[5] != 0) {
    FUN_1449c0562(&local_68);
    iVar4 = (int)param_5[5];
  }
  local_148 = local_58;
  iStack_144 = iStack_54;
  local_140 = local_50;
  local_13c = local_4c;
  local_158 = local_68;
  local_150 = local_60;
  local_160 = param_5;
  if ((iStack_54 != iVar4) || (local_60 != plVar1)) {
    do {
      uVar2 = local_e0;
      lVar6 = (longlong)iStack_144 * 0x18 + *local_160;
      lVar5 = (longlong)(int)local_e0;
      local_e0 = local_e0 + 1;
      if (local_dc < local_e0) {
        FUN_1487cbd28(&uStack_e8,uVar2);
      }
      FUN_14655c866(lVar5 * 0x48 + CONCAT71(uStack_e7,uStack_e8),lVar6,*(undefined8 *)(lVar6 + 8));
      local_148 = local_148 & ~local_158._4_4_;
      FUN_1449c0562(&local_158);
    } while (local_160 != param_5 || (local_150 != plVar1 || iStack_144 != iVar4));
  }
  uVar3 = FUN_148951dca(param_1,local_138,param_6);
  FUN_140e457df(CONCAT71(uStack_e7,uStack_e8),local_e0);
  if (CONCAT71(uStack_e7,uStack_e8) != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148951dca FUN_148951dca body=497 status=ok
// SIG undefined FUN_148951dca(void)

longlong FUN_148951dca(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [5];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*(longlong *)(param_2 + 8) != 0) {
    lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x155) & 0x20) == 0)) {
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_b8 = 0;
      local_a8 = (longlong *)0x0;
      local_c8 = 0x48000c0101;
      uVar2 = FUN_141349952();
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      uStack_144 = 0;
      uStack_140 = 0;
      uStack_13c = 0x3ff00000;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0x3ff0000000000000;
      uStack_110 = 0x3ff0000000000000;
      local_108 = 0x3ff0000000000000;
      uStack_100 = 0;
      lVar1 = FUN_141037e38(lVar1,uVar2,&local_158,&local_f8);
      FUN_14895086e(lVar1,param_2);
      FUN_140d641a2(lVar1);
      *param_3 = lVar1;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      uStack_144 = 0;
      uStack_140 = 0;
      uStack_13c = 0x3ff00000;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0x3ff0000000000000;
      uStack_110 = 0x3ff0000000000000;
      local_108 = 0x3ff0000000000000;
      uStack_100 = 0;
      local_168 = 0;
      FUN_14113775c(lVar1,&local_158,0,0);
      lVar1 = *(longlong *)(lVar1 + 0x3d0);
      if (lVar1 == 0) {
LAB_148951f8d:
        lVar1 = 0;
      }
      else {
        lVar3 = FUN_1410758a4();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_148951f8d;
      }
      if (local_b8 != 0) {
        plVar4 = local_a8;
        if (local_a8 == (longlong *)0x0) {
          plVar4 = local_98;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      goto LAB_148951e41;
    }
  }
  lVar1 = 0;
LAB_148951e41:
  if ((local_70 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148951fc2 FUN_148951fc2 body=34 status=ok
// SIG undefined FUN_148951fc2(void)

bool FUN_148951fc2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3b0);
  if (lVar1 != 0) {
    FUN_1413ea58e();
  }
  return lVar1 == 0;
}



// FUNCTION 148951fe4 FUN_148951fe4 body=326 status=ok
// SIG undefined FUN_148951fe4(void)

longlong FUN_148951fe4(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x178) != 0)) {
    lVar3 = FUN_14041aabe();
    if ((*(longlong *)(param_1 + 0x178) != 0) &&
       ((((lVar3 != 0 && (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x178) + 0x10), lVar4 != 0))
         && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
        ((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30 && (lVar3 = FUN_14127bc34(), lVar3 != 0)))))) {
      lVar4 = FUN_140082f10();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        lVar4 = FUN_1403b0700(lVar3);
        cVar2 = FUN_1415c6336(lVar4);
        if (cVar2 != '\0') {
          lVar6 = *(longlong *)(lVar4 + 0x40);
          if (lVar6 == 0) {
            uVar5 = FUN_140355b7c();
            lVar6 = FUN_14477b664(uVar5);
            *(longlong *)(lVar4 + 0x40) = lVar6;
          }
          if (((*(longlong *)(lVar4 + 0x48) == 0) && (lVar6 != 0)) &&
             (*(longlong *)(lVar4 + 0x38) != 0)) {
            plVar1 = *(longlong **)(lVar6 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
              uVar5 = 0;
            }
            else {
              uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
              uVar5 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x38));
            }
            *(undefined8 *)(lVar4 + 0x48) = uVar5;
          }
          cVar2 = (**(code **)*param_2)(param_2,param_3);
          if (cVar2 != '\0') {
            return lVar3;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14895212c FUN_14895212c body=189 status=ok
// SIG undefined FUN_14895212c(void)

undefined8 FUN_14895212c(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar1 = FUN_141147bae();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      (**(code **)(*param_1 + 0x48))(param_1,&local_30);
      if ((longlong)*(int *)(param_2 + 0x1f8) != 0) {
        lVar1 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_2 + 0x1f0) + lVar1) == local_30) {
            uVar2 = (**(code **)(*param_1 + 0x50))(param_1,param_2,param_3,param_4);
            goto LAB_148952177;
          }
          lVar1 = lVar1 + 8;
        } while ((longlong)*(int *)(param_2 + 0x1f8) * 8 != lVar1);
      }
    }
  }
  uVar2 = 0;
LAB_148952177:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1489521ea FUN_1489521ea body=36 status=ok
// SIG undefined FUN_1489521ea(void)

void FUN_1489521ea(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + -0x5b8) + 0x180))(param_1 + -0x5b8);
  FUN_1406f625c(uVar1);
  return;
}



// FUNCTION 14895221b FUN_14895221b body=191 status=ok
// SIG undefined FUN_14895221b(void)

undefined8 * FUN_14895221b(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x178) != 0)) {
    lVar2 = FUN_14041aabe();
    if (((*(longlong *)(param_2 + 0x178) != 0) &&
        (((lVar2 != 0 && (lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x178) + 0x10), lVar3 != 0))
         && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))))) &&
       ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30 && (lVar2 = FUN_14127bc34(), lVar2 != 0)))) {
      lVar3 = FUN_140082f10();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        lVar2 = FUN_1403b0700(lVar2);
        cVar1 = FUN_1415c6336(lVar2);
        if (cVar1 != '\0') {
          FUN_1460489b8(param_1,lVar2 + 0x38);
          return param_1;
        }
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1489522da FUN_1489522da body=45 status=ok
// SIG undefined FUN_1489522da(void)

void FUN_1489522da(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14148624c();
  FUN_148951510(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148952308 FUN_148952308 body=46 status=ok
// SIG undefined FUN_148952308(void)

undefined8 FUN_148952308(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14148624c();
  if (*(char *)(lVar1 + 0x178) == '\x03') {
    uVar2 = FUN_1411ade9c(lVar1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148952400 FUN_148952400 body=124 status=ok
// SIG undefined FUN_148952400(void)

void FUN_148952400(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if (param_2 != 0) {
    local_28 = 0;
    FUN_14485c47a(&local_28);
    local_38 = local_28;
  }
  local_30 = *param_3;
  FUN_148952c92(param_1 + 8);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895247e FUN_14895247e body=48 status=ok
// SIG undefined FUN_14895247e(void)

longlong FUN_14895247e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_145ce6714(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489524b6 FUN_1489524b6 body=191 status=ok
// SIG undefined FUN_1489524b6(void)

undefined4 * FUN_1489524b6(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 8) == '\x18') {
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *param_2 = *param_1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  FUN_1400b56fe(local_40,param_1,0x18);
  pppuVar5 = (undefined8 ***)&DAT_149e1e2f8;
  if (local_20 != 0) {
    pppuVar5 = local_40;
  }
  uVar2 = *(undefined4 *)((longlong)pppuVar5 + 4);
  uVar3 = *(undefined4 *)(pppuVar5 + 1);
  uVar4 = *(undefined4 *)((longlong)pppuVar5 + 0xc);
  *param_2 = *(undefined4 *)pppuVar5;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar5 = local_40;
    if (0x18 < local_28) {
      pppuVar5 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar5);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148952576 FUN_148952576 body=95 status=ok
// SIG undefined FUN_148952576(void)

undefined8 * FUN_148952576(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b423bb0;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489525d6 FUN_1489525d6 body=78 status=ok
// SIG undefined FUN_1489525d6(void)

undefined8 FUN_1489525d6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1489526d4();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148952626 FUN_148952626 body=85 status=ok
// SIG undefined FUN_148952626(void)

void FUN_148952626(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14895280e(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895267c FUN_14895267c body=86 status=ok
// SIG undefined FUN_14895267c(void)

void FUN_14895267c(longlong param_1,undefined8 param_2,longlong *param_3)

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
    FUN_14895287a(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489526d4 FUN_1489526d4 body=312 status=ok
// SIG undefined FUN_1489526d4(void)

undefined2 * FUN_1489526d4(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_14895280e(local_60,param_1 + 8);
  cVar1 = *(char *)(param_1 + 0x90);
  local_50 = 0;
  local_48 = 0x200000000;
  FUN_1432d436e(local_80,param_3);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1 * '\x02' + '\x01') & 0xffffffff,
                param_4,local_60);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_14895287a(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_60,&local_78,local_80);
  *param_2 = local_88;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895280e FUN_14895280e body=107 status=ok
// SIG undefined FUN_14895280e(void)

void FUN_14895280e(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[4]);
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  FUN_140dba9e6(*param_1,param_2[0x34]);
  return;
}



// FUNCTION 14895287a FUN_14895287a body=101 status=ok
// SIG undefined FUN_14895287a(void)

void FUN_14895287a(undefined8 *param_1,longlong param_2)

{
  FUN_140b5f80c(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1462175bc(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1489528e0 FUN_1489528e0 body=79 status=ok
// SIG undefined FUN_1489528e0(void)

undefined8 * FUN_1489528e0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b423bd0;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148952930 FUN_148952930 body=78 status=ok
// SIG undefined FUN_148952930(void)

undefined8 FUN_148952930(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_148952a2c();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148952980 FUN_148952980 body=82 status=ok
// SIG undefined FUN_148952980(void)

void FUN_148952980(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_148952b62(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489529d4 FUN_1489529d4 body=86 status=ok
// SIG undefined FUN_1489529d4(void)

void FUN_1489529d4(longlong param_1,undefined8 param_2,longlong *param_3)

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
    FUN_148952bca(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148952a2c FUN_148952a2c body=309 status=ok
// SIG undefined FUN_148952a2c(void)

undefined2 * FUN_148952a2c(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_148952b62(local_60,param_1 + 8);
  cVar1 = *(char *)(param_1 + 0x70);
  local_50 = 0;
  local_48 = 0x200000000;
  FUN_1432d436e(local_80,param_3);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1 * '\x02' + '\x01') & 0xffffffff,
                param_4,local_60);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_148952bca(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_60,&local_78,local_80);
  *param_2 = local_88;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148952b62 FUN_148952b62 body=103 status=ok
// SIG undefined FUN_148952b62(void)

void FUN_148952b62(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[4]);
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
    return;
  }
  return;
}



// FUNCTION 148952bca FUN_148952bca body=85 status=ok
// SIG undefined FUN_148952bca(void)

void FUN_148952bca(undefined8 *param_1,longlong param_2)

{
  FUN_140b5f80c(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 148952c20 FUN_148952c20 body=114 status=ok
// SIG undefined FUN_148952c20(void)

void FUN_148952c20(longlong *param_1,int param_2)

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



// FUNCTION 148952c92 FUN_148952c92 body=224 status=ok
// SIG undefined FUN_148952c92(void)

void FUN_148952c92(longlong *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = FUN_144a78877(*param_2,param_2[1]);
    lVar3 = *(longlong *)(param_2 + 2);
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar7 = (uint)lVar3 & 0xffff;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar6 +
                    ((longlong)
                     (int)((uVar7 >> 4) +
                           (uint)lVar3 * 0x10000 + uVar7 + (int)((ulonglong)lVar3 >> 0x20) +
                           (uVar5 >> 2) + uVar5 * 0x40 + (uVar4 << 0x13 | uVar4 & 0xffff) +
                           0x9e3779b9 ^ uVar5) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x28);
        if (((*piVar1 == *param_2) &&
            (*(int *)(*param_1 + 4 + (longlong)iVar2 * 0x28) == param_2[1])) &&
           (*(longlong *)(piVar1 + 2) == lVar3)) {
          FUN_148952d72(param_1);
          return;
        }
        iVar2 = piVar1[8];
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 148952d72 FUN_148952d72 body=121 status=ok
// SIG undefined FUN_148952d72(void)

void FUN_148952d72(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_1449db362(*param_1 + (longlong)param_2 * 0x28 + 0x10);
  FUN_148952c20(param_1,param_2);
  return;
}



// FUNCTION 148952dec FUN_148952dec body=150 status=ok
// SIG undefined FUN_148952dec(void)

void FUN_148952dec(longlong param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar4 = param_1;
  }
  if (*(int *)(param_1 + 0x22c) != 0) {
    *(int *)(lVar4 + (longlong)*(int *)(param_1 + 0x228) * 0x10) = param_2;
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)(param_1 + 0x22c) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x228);
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x10 + 4) = uVar5;
  *(int *)(param_1 + 0x228) = param_2;
  *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
  lVar4 = param_1 + 0x210;
  if (*(longlong *)(param_1 + 0x218) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x218);
  }
  iVar3 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  bVar2 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 148952e82 FUN_148952e82 body=79 status=ok
// SIG undefined FUN_148952e82(void)

void FUN_148952e82(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)(*param_1 + 0x38);
  FUN_140dda5bb(_Dst);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + 1);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((ulonglong)param_2 * 0x38 + (longlong)_Dst),(longlong)iVar2 * 0x38);
    iVar1 = (int)param_1[1];
  }
  *(uint *)(param_1 + 1) = iVar1 - param_2;
  return;
}



// FUNCTION 148952ed2 FUN_148952ed2 body=96 status=ok
// SIG undefined FUN_148952ed2(void)

void FUN_148952ed2(longlong param_1,int param_2)

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



// FUNCTION 148952f32 FUN_148952f32 body=119 status=ok
// SIG undefined FUN_148952f32(void)

void FUN_148952f32(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_148952faa(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148952faa FUN_148952faa body=141 status=ok
// SIG undefined FUN_148952faa(void)

void FUN_148952faa(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x20);
  return;
}



// FUNCTION 148953038 FUN_148953038 body=78 status=ok
// SIG undefined FUN_148953038(void)

void FUN_148953038(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x88,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  FUN_148953086(param_1,param_2);
  return;
}



// FUNCTION 148953086 FUN_148953086 body=200 status=ok
// SIG undefined FUN_148953086(void)

undefined8 * FUN_148953086(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = &PTR_FUN_14a463c30;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *param_1 = &PTR_FUN_14a481250;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_14b378f10;
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  param_1[9] = 0;
  FUN_1459812d2(param_1 + 10,param_2 + 0x50);
  param_1[0xd] = 0;
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined8 *)(param_2 + 0x70) = 0;
  param_1[0xf] = 0;
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined8 *)(param_2 + 0x80) = 0;
  return param_1;
}



// FUNCTION 14895314e FUN_14895314e body=127 status=ok
// SIG undefined FUN_14895314e(void)

void FUN_14895314e(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 3;
  *param_1 = &PTR_FUN_14a463c30;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *param_1 = &PTR_FUN_14a481250;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_14b379650;
  FUN_140c13cc0(param_1 + 4,param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[8] = uVar1;
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  param_1[0xb] = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = uVar1;
  return;
}



// FUNCTION 1489531ce FUN_1489531ce body=145 status=ok
// SIG undefined FUN_1489531ce(void)

void FUN_1489531ce(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  puVar3 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
  *param_1 = puVar3;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar3;
  }
  *param_1 = &PTR_FUN_14a463c30;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *param_1 = &PTR_FUN_14a481250;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14b379d90;
  FUN_148953260(param_1 + 4,param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 200);
  param_1[0x18] = *(undefined8 *)(param_2 + 0xc0);
  param_1[0x19] = uVar2;
  return;
}



// FUNCTION 148953260 FUN_148953260 body=149 status=ok
// SIG undefined FUN_148953260(void)

longlong * FUN_148953260(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar2 = param_2 + 2;
  plVar3 = param_1 + 2;
  for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
    *plVar3 = *plVar2;
    plVar2 = plVar2 + 1;
    plVar3 = plVar3 + 1;
  }
  *(int *)(param_1 + 0x10) = (int)param_2[0x10];
  param_1[0x11] = 0;
  param_1[0x11] = param_2[0x11];
  param_2[0x11] = 0;
  *(int *)(param_1 + 0x12) = (int)param_2[0x12];
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  param_2[0x12] = 0;
  return param_1;
}



// FUNCTION 1489532f6 FUN_1489532f6 body=209 status=ok
// SIG undefined FUN_1489532f6(void)

void FUN_1489532f6(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_147526062();
  if (uVar3 != param_2) {
    lVar1 = **(longlong **)(param_1 + 0x18);
    lVar5 = (longlong)(int)param_2;
    local_48 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
    uVar6 = FUN_14477b664(*(undefined8 *)(lVar1 + 8 + lVar5 * 0x18));
    local_40 = FUN_14477b664(uVar6);
    local_38 = *(undefined8 *)(lVar1 + 0x10 + lVar5 * 0x18);
    plVar2 = *(longlong **)(param_1 + 0x18);
    iVar4 = (int)plVar2[1];
    if (~param_2 + iVar4 != 0) {
      memmove((void *)(*plVar2 + lVar5 * 0x18),(void *)(*plVar2 + lVar5 * 0x18 + 0x18),
              (longlong)(int)(~param_2 + iVar4) * 0x18);
      iVar4 = (int)plVar2[1];
    }
    *(int *)(plVar2 + 1) = iVar4 + -1;
    FUN_1489533c8(*(undefined8 *)(param_1 + 0x18),&local_48,uVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489533c8 FUN_1489533c8 body=122 status=ok
// SIG undefined FUN_1489533c8(void)

int FUN_1489533c8(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148953442(param_1,iVar1);
  }
  lVar2 = (longlong)param_3 * 0x18;
  memmove((void *)(*param_1 + lVar2 + 0x18),(void *)(*param_1 + lVar2),
          (ulonglong)(uint)(iVar1 - param_3) * 0x18);
  FUN_140862250(lVar2 + *param_1,param_2);
  return param_3;
}



// FUNCTION 148953442 FUN_148953442 body=147 status=ok
// SIG undefined FUN_148953442(void)

void FUN_148953442(longlong param_1,int param_2)

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



// FUNCTION 1489534d6 FUN_1489534d6 body=215 status=ok
// SIG undefined FUN_1489534d6(void)

ulonglong FUN_1489534d6(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  ulonglong *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_147525f8a();
  FUN_1489533c8(*(undefined8 *)(param_1 + 0x18),param_3,uVar2);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x10) != 0)) {
    lVar3 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar1 + 8) + 8 + lVar3) != 0) &&
         (*(longlong *)(*(longlong *)(lVar1 + 8) + lVar3) != 0)) {
        local_38 = (ulonglong *)0x0;
        uStack_30 = 1;
        FUN_14753e66a(&local_38,0);
        *local_38 = (ulonglong)uVar2 | param_2 << 0x20;
        FUN_14753e6f0(*(longlong *)(param_1 + 0x10) + 8,*(longlong *)(param_1 + 0x10),&local_38);
        if (local_38 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)*(int *)(lVar1 + 0x10) * 0x10 != lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (ulonglong)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489535ae FUN_1489535ae body=350 status=ok
// SIG undefined FUN_1489535ae(void)

void FUN_1489535ae(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[2];
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x28) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar2 + 0x20) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x20) + lVar5) != 0)) {
        uVar1 = *(undefined4 *)(*(longlong *)*param_1 + (longlong)(int)param_2 * 4);
        local_48 = (undefined8 *)0x0;
        uStack_40 = 1;
        FUN_14753e66a(&local_48,0);
        *local_48 = CONCAT44(uVar1,param_2);
        FUN_14753e6f0(param_1[2] + 0x20,param_1[2],&local_48);
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(lVar2 + 0x28) * 0x10 != lVar5);
  }
  plVar3 = (longlong *)*param_1;
  iVar4 = (int)plVar3[1];
  iVar6 = iVar4 + ~param_2;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 4),
            (void *)(*plVar3 + (longlong)(int)param_2 * 4 + 4),(longlong)iVar6 << 2);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  plVar3 = (longlong *)param_1[3];
  iVar4 = (int)plVar3[1];
  iVar6 = ~param_2 + iVar4;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 0x18),
            (void *)(*plVar3 + (longlong)(int)param_2 * 0x18 + 0x18),(longlong)iVar6 * 0x18);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  if (param_1[1] != 0) {
    FUN_147a40876(param_1[1],param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895370e FUN_14895370e body=48 status=ok
// SIG undefined FUN_14895370e(void)

void FUN_14895370e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 14895373e FUN_14895373e body=197 status=ok
// SIG undefined FUN_14895373e(void)

undefined8 * FUN_14895373e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 2;
  puVar1 = param_1 + 5;
  param_1[8] = 0;
  param_1[9] = 0x100000000;
  lVar4 = FUN_1464fca14();
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  iVar2 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
    FUN_1457d67de(puVar1,iVar2);
  }
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  puVar5[(longlong)iVar2 * 3] = uVar3;
  puVar5[(longlong)iVar2 * 3 + 1] = 0;
  (puVar5 + (longlong)iVar2 * 3 + 1)[1] = 0;
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  iVar2 = *(int *)(puVar5 + 2);
  *(uint *)(puVar5 + 2) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar5 + 0x14) < iVar2 + 1U) {
    FUN_140aec898(puVar5 + 1,iVar2);
  }
  *(undefined8 *)(puVar5[1] + (longlong)iVar2 * 8) = param_2;
  return param_1;
}



// FUNCTION 148953804 FUN_148953804 body=73 status=ok
// SIG undefined FUN_148953804(void)

void FUN_148953804(undefined4 *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_148953a50();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895384e FUN_14895384e body=29 status=ok
// SIG undefined FUN_14895384e(void)

undefined8 FUN_14895384e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14895386c FUN_14895386c body=89 status=ok
// SIG undefined FUN_14895386c(void)

void FUN_14895386c(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  uVar1 = *param_1;
  uVar2 = FUN_144b1f222(&local_28);
  FUN_1489538c6(uVar1,uVar2,param_3);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489538c6 FUN_1489538c6 body=394 status=ok
// SIG undefined FUN_1489538c6(void)

void FUN_1489538c6(short *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  uint uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,4);
  lVar1 = *param_3;
  uVar3 = (uint)*(ushort *)(param_2 + 0xc);
  if (uVar3 != 0) {
    puVar2 = *(ulonglong **)(param_2 + 0x28);
    lVar5 = 0;
    do {
      if (*(short *)((longlong)puVar2 + lVar5 + 0x1e) == *param_1) {
        if ((longlong)puVar2 + lVar5 != 0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *(ulonglong *)((longlong)puVar2 + lVar5)) {
            *(int *)(lVar1 + lVar6 * 4) =
                 (int)*(ulonglong *)((longlong)puVar2 + lVar5) - (int)*(ulonglong *)(param_2 + 0x20)
            ;
            lVar1 = *param_3;
            uVar3 = (uint)*(ushort *)(param_2 + 0xc);
            if (*(ushort *)(param_2 + 0xc) == 0) goto LAB_148953987;
            puVar2 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      lVar5 = lVar5 + 0x20;
    } while ((ulonglong)*(ushort *)(param_2 + 0xc) << 5 != lVar5);
    puVar4 = puVar2;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[1]) {
        if (puVar4 != (ulonglong *)0x0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
            *(int *)(lVar1 + 4 + lVar6 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
            lVar1 = *param_3;
            uVar3 = (uint)*(ushort *)(param_2 + 0xc);
            if (*(ushort *)(param_2 + 0xc) == 0) goto LAB_148953987;
            puVar2 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      puVar4 = puVar4 + 4;
    } while (puVar4 != (ulonglong *)((ulonglong)(uVar3 << 5) + (longlong)puVar2));
    puVar4 = puVar2;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[2]) {
        if (puVar4 != (ulonglong *)0x0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
            *(int *)(lVar1 + 8 + lVar6 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
            lVar1 = *param_3;
            uVar3 = (uint)*(ushort *)(param_2 + 0xc);
            if (uVar3 == 0) goto LAB_148953987;
            puVar2 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      puVar4 = puVar4 + 4;
    } while (puVar4 != (ulonglong *)((ulonglong)(uVar3 << 5) + (longlong)puVar2));
    puVar4 = (ulonglong *)((ulonglong)(uVar3 << 5) + (longlong)puVar2);
    do {
      if (*(short *)((longlong)puVar2 + 0x1e) == param_1[3]) goto LAB_148953989;
      puVar2 = puVar2 + 4;
    } while (puVar2 != puVar4);
  }
LAB_148953987:
  puVar2 = (ulonglong *)0x0;
LAB_148953989:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar2) {
    *(int *)(lVar1 + 0xc + lVar6 * 4) = (int)*puVar2 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 148953a50 FUN_148953a50 body=159 status=ok
// SIG undefined FUN_148953a50(void)

void FUN_148953a50(undefined4 *param_1,undefined8 *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_144b1f222();
  puVar1 = (uint *)*param_2;
  lVar2 = *(longlong *)(lVar2 + 0x20);
  lVar4 = 0;
  lVar3 = lVar2 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar3 = lVar4;
  }
  lVar5 = lVar2 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    lVar5 = lVar4;
  }
  lVar6 = lVar2 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    lVar6 = lVar4;
  }
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  local_48 = lVar2 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    local_48 = lVar4;
  }
  FUN_148953af0(&local_38,lVar3,lVar5,lVar6);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148953af0 FUN_148953af0 body=114 status=ok
// SIG undefined FUN_148953af0(void)

void FUN_148953af0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  float *pfVar3;
  ulonglong uVar4;
  
  lVar2 = FUN_1432d4e6a();
  uVar1 = *(ushort *)(lVar2 + 0xe);
  if ((ulonglong)uVar1 != 0) {
    pfVar3 = (float *)(param_5 + 8);
    uVar4 = 0;
    do {
      if (param_2 != 0) {
        pfVar3[-2] = (float)*(double *)(param_2 + uVar4 * 8);
      }
      if (param_3 != 0) {
        pfVar3[-1] = (float)*(double *)(param_3 + uVar4 * 8);
      }
      if (param_4 != 0) {
        *pfVar3 = (float)*(double *)(param_4 + uVar4 * 8);
      }
      uVar4 = uVar4 + 1;
      pfVar3 = pfVar3 + 5;
    } while (uVar1 != uVar4);
  }
  return;
}



// FUNCTION 148953b62 FUN_148953b62 body=79 status=ok
// SIG undefined FUN_148953b62(void)

undefined8 * FUN_148953b62(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b423bd0;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148953bb2 FUN_148953bb2 body=95 status=ok
// SIG undefined FUN_148953bb2(void)

undefined8 * FUN_148953bb2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b423bb0;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148953c12 FUN_148953c12 body=172 status=ok
// SIG undefined FUN_148953c12(void)

void FUN_148953c12(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined2 *param_7)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[4] = *param_3;
  cVar1 = *(char *)(param_3 + 8);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 4);
  }
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_4 + 2);
  }
  *(undefined4 *)(param_1 + 0x1c) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_5 + 2);
  }
  *(undefined4 *)(param_1 + 0x28) = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_6 + 2);
  }
  param_1[0x34] = *param_7;
  cVar1 = *(char *)(param_7 + 0xc);
  *(char *)(param_1 + 0x40) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_7 + 10);
    uVar2 = *(undefined8 *)(param_7 + 6);
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_7 + 2);
    *(undefined8 *)(param_1 + 0x3a) = uVar2;
  }
  return;
}



// FUNCTION 148953cbe FUN_148953cbe body=104 status=ok
// SIG undefined FUN_148953cbe(void)

void FUN_148953cbe(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x98,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14b423bb0;
  FUN_148953d26(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x90);
  *param_1 = &PTR_FUN_14b4240c0;
  return;
}



// FUNCTION 148953d26 FUN_148953d26 body=151 status=ok
// SIG undefined FUN_148953d26(void)

void FUN_148953d26(undefined2 *param_1,undefined2 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[4] = param_2[4];
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  cVar1 = *(char *)(param_2 + 0x18);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  cVar1 = *(char *)(param_2 + 0x24);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  cVar1 = *(char *)(param_2 + 0x30);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  }
  param_1[0x34] = param_2[0x34];
  cVar1 = *(char *)(param_2 + 0x40);
  *(char *)(param_1 + 0x40) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_2 + 0x3e);
    uVar2 = *(undefined8 *)(param_2 + 0x3a);
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
    *(undefined8 *)(param_1 + 0x3a) = uVar2;
  }
  return;
}



// FUNCTION 148953dbe FUN_148953dbe body=321 status=ok
// SIG undefined FUN_148953dbe(void)

void FUN_148953dbe(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98 [11];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar2 = FUN_147526062();
  if (uVar2 != param_2) {
    lVar8 = (longlong)(int)param_2 * 0xc0;
    puVar6 = (undefined8 *)(**(longlong **)(param_1 + 0x18) + lVar8);
    local_100 = *puVar6;
    local_f8 = *(undefined4 *)(puVar6 + 1);
    local_f0 = 0;
    local_e8 = *(undefined4 *)(puVar6 + 3);
    local_e0 = puVar6[4];
    uVar4 = FUN_14477b664(puVar6[5]);
    local_d8 = FUN_14477b664(uVar4);
    local_d0 = puVar6[6];
    local_c8 = puVar6[7];
    uStack_c0 = puVar6[8];
    local_b8 = puVar6[9];
    local_b0 = *(undefined4 *)(puVar6 + 10);
    local_a8 = 0;
    local_a0 = *(undefined4 *)(puVar6 + 0xc);
    puVar6 = puVar6 + 0xd;
    puVar7 = local_98;
    for (lVar5 = 0xb; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    plVar1 = *(longlong **)(param_1 + 0x18);
    iVar3 = (int)plVar1[1];
    if (~param_2 + iVar3 != 0) {
      memmove((void *)(*plVar1 + lVar8),(void *)(*plVar1 + lVar8 + 0xc0),
              (longlong)(int)(~param_2 + iVar3) * 0xc0);
      iVar3 = (int)plVar1[1];
    }
    *(int *)(plVar1 + 1) = iVar3 + -1;
    FUN_148953f00(*(undefined8 *)(param_1 + 0x18),&local_100,uVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148953f00 FUN_148953f00 body=230 status=ok
// SIG undefined FUN_148953f00(void)

int FUN_148953f00(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148953fe6(param_1,iVar1);
  }
  lVar3 = (longlong)param_3 * 0xc0;
  memmove((void *)(*param_1 + lVar3 + 0xc0),(void *)(*param_1 + lVar3),
          (ulonglong)(uint)(iVar1 - param_3) * 0xc0);
  lVar2 = *param_1;
  puVar6 = (undefined8 *)(lVar2 + lVar3);
  *puVar6 = *param_2;
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_2 + 1);
  puVar6[2] = 0;
  *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(param_2 + 3);
  FUN_144a7f96e(puVar6 + 4,param_2 + 4);
  uVar4 = param_2[8];
  puVar6[7] = param_2[7];
  puVar6[8] = uVar4;
  puVar6[9] = param_2[9];
  *(undefined4 *)(puVar6 + 10) = *(undefined4 *)(param_2 + 10);
  puVar6[0xb] = 0;
  *(undefined4 *)(puVar6 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  puVar6 = param_2 + 0xd;
  puVar7 = (undefined8 *)(lVar2 + lVar3 + 0x68);
  for (lVar5 = 0xb; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  return param_3;
}



// FUNCTION 148953fe6 FUN_148953fe6 body=147 status=ok
// SIG undefined FUN_148953fe6(void)

void FUN_148953fe6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc0)) {
      uVar5 = uVar4 / 0xc0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14895407a FUN_14895407a body=215 status=ok
// SIG undefined FUN_14895407a(void)

ulonglong FUN_14895407a(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  ulonglong *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_147525f8a();
  FUN_148953f00(*(undefined8 *)(param_1 + 0x18),param_3,uVar2);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x10) != 0)) {
    lVar3 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar1 + 8) + 8 + lVar3) != 0) &&
         (*(longlong *)(*(longlong *)(lVar1 + 8) + lVar3) != 0)) {
        local_38 = (ulonglong *)0x0;
        uStack_30 = 1;
        FUN_14753e66a(&local_38,0);
        *local_38 = (ulonglong)uVar2 | param_2 << 0x20;
        FUN_14753e6f0(*(longlong *)(param_1 + 0x10) + 8,*(longlong *)(param_1 + 0x10),&local_38);
        if (local_38 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)*(int *)(lVar1 + 0x10) * 0x10 != lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (ulonglong)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148954152 FUN_148954152 body=356 status=ok
// SIG undefined FUN_148954152(void)

void FUN_148954152(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[2];
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x28) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar2 + 0x20) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x20) + lVar5) != 0)) {
        uVar1 = *(undefined4 *)(*(longlong *)*param_1 + (longlong)(int)param_2 * 4);
        local_48 = (undefined8 *)0x0;
        uStack_40 = 1;
        FUN_14753e66a(&local_48,0);
        *local_48 = CONCAT44(uVar1,param_2);
        FUN_14753e6f0(param_1[2] + 0x20,param_1[2],&local_48);
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(lVar2 + 0x28) * 0x10 != lVar5);
  }
  plVar3 = (longlong *)*param_1;
  iVar4 = (int)plVar3[1];
  iVar6 = iVar4 + ~param_2;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 4),
            (void *)(*plVar3 + (longlong)(int)param_2 * 4 + 4),(longlong)iVar6 << 2);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  plVar3 = (longlong *)param_1[3];
  iVar4 = (int)plVar3[1];
  iVar6 = ~param_2 + iVar4;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 0xc0),
            (void *)((longlong)(int)param_2 * 0xc0 + *plVar3 + 0xc0),(longlong)iVar6 * 0xc0);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  if (param_1[1] != 0) {
    FUN_147a40876(param_1[1],param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489542b8 FUN_1489542b8 body=48 status=ok
// SIG undefined FUN_1489542b8(void)

void FUN_1489542b8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc0,8);
  }
  return;
}



// FUNCTION 1489542e8 FUN_1489542e8 body=197 status=ok
// SIG undefined FUN_1489542e8(void)

undefined8 * FUN_1489542e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 2;
  puVar1 = param_1 + 5;
  param_1[8] = 0;
  param_1[9] = 0x100000000;
  lVar4 = FUN_1464fcbd4();
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  iVar2 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
    FUN_1457d67de(puVar1,iVar2);
  }
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  puVar5[(longlong)iVar2 * 3] = uVar3;
  puVar5[(longlong)iVar2 * 3 + 1] = 0;
  (puVar5 + (longlong)iVar2 * 3 + 1)[1] = 0;
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  iVar2 = *(int *)(puVar5 + 2);
  *(uint *)(puVar5 + 2) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar5 + 0x14) < iVar2 + 1U) {
    FUN_140aec898(puVar5 + 1,iVar2);
  }
  *(undefined8 *)(puVar5[1] + (longlong)iVar2 * 8) = param_2;
  return param_1;
}



// FUNCTION 1489543ad FUN_1489543ad body=23 status=ok
// SIG undefined FUN_1489543ad(void)

void FUN_1489543ad(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0xffffffff;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1489543c4 FUN_1489543c4 body=132 status=ok
// SIG undefined FUN_1489543c4(void)

void FUN_1489543c4(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14895444a FUN_14895444a body=62 status=ok
// SIG undefined FUN_14895444a(void)

void FUN_14895444a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148954488(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 148954488 FUN_148954488 body=93 status=ok
// SIG undefined FUN_148954488(void)

ulonglong FUN_148954488(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1489544e5 FUN_1489544e5 body=645 status=ok
// SIG undefined FUN_1489544e5(void)

void FUN_1489544e5(longlong param_1,uint param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_358 = param_1;
    fVar19 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar19 + fVar19);
    plVar12 = &local_358;
    do {
      puVar6 = (undefined8 *)*plVar12;
      puVar13 = (undefined8 *)plVar12[1];
      iVar15 = (int)plVar12[2];
      iVar8 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar6) >> 4);
      puVar16 = puVar13;
      puVar17 = puVar6;
      if (iVar15 != 0) {
LAB_1489545a9:
        if (8 < (int)(iVar8 + 1U)) {
          uVar9 = (ulonglong)(iVar8 + 1U >> 1);
          uVar2 = puVar6[uVar9 * 2];
          uVar3 = (puVar6 + uVar9 * 2)[1];
          uVar4 = puVar6[1];
          puVar6[uVar9 * 2] = *puVar6;
          (puVar6 + uVar9 * 2)[1] = uVar4;
          *puVar6 = uVar2;
          puVar6[1] = uVar3;
          puVar10 = puVar13 + 2;
          puVar7 = puVar6;
          do {
            puVar5 = puVar7 + 2;
            puVar14 = puVar7 + 2;
            do {
              puVar7 = puVar14;
              puVar11 = puVar5;
              if (puVar13 < puVar7) break;
              puVar5 = puVar11 + 2;
              puVar14 = puVar7 + 2;
            } while (*(int *)((longlong)puVar7 + 0xc) <= *(int *)((longlong)puVar6 + 0xc));
            puVar5 = puVar10 + -4;
            do {
              puVar14 = puVar10;
              puVar18 = puVar5;
              puVar10 = puVar14 + -2;
              if (puVar10 <= puVar6) break;
              puVar5 = puVar18 + -2;
            } while (*(int *)((longlong)puVar6 + 0xc) <= *(int *)((longlong)puVar14 + -4));
            if (puVar10 < puVar7) goto LAB_14895464b;
            uVar2 = *puVar7;
            uVar3 = puVar7[1];
            uVar4 = puVar14[-1];
            *puVar7 = *puVar10;
            puVar7[1] = uVar4;
            *puVar10 = uVar2;
            puVar14[-1] = uVar3;
          } while( true );
        }
        for (; puVar16 = puVar6, puVar17 = puVar6, puVar6 < puVar13; puVar13 = puVar13 + -2) {
          while (puVar10 = puVar16, puVar16 = puVar17 + 2, puVar16 <= puVar13) {
            piVar1 = (int *)((longlong)puVar17 + 0x1c);
            puVar17 = puVar16;
            if (*piVar1 <= *(int *)((longlong)puVar10 + 0xc)) {
              puVar16 = puVar10;
            }
          }
          local_58 = *puVar10;
          uStack_50 = puVar10[1];
          uVar3 = local_58;
          uVar4 = uStack_50;
          uVar2 = puVar13[1];
          *puVar10 = *puVar13;
          puVar10[1] = uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar13 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar13 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_50._4_4_;
          local_58 = uVar3;
          uStack_50 = uVar4;
        }
        goto LAB_148954749;
      }
LAB_14895475e:
      FUN_14895476b(puVar6);
LAB_148954749:
      plVar12 = plVar12 + -3;
    } while (&local_358 <= plVar12);
  }
  if ((local_40 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14895464b:
  local_58 = *puVar6;
  uStack_50 = puVar6[1];
  uVar3 = local_58;
  uVar4 = uStack_50;
  uVar2 = puVar14[-1];
  *puVar6 = *puVar10;
  puVar6[1] = uVar2;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar10 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar14 + -0xc) = local_58._4_4_;
  *(undefined4 *)(puVar14 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar14 + -4) = uStack_50._4_4_;
  iVar15 = iVar15 + -1;
  puVar14 = puVar14 + -4;
  local_58 = uVar3;
  uStack_50 = uVar4;
  if ((longlong)puVar18 - (longlong)puVar17 < (longlong)puVar16 - (longlong)puVar11) {
    if (puVar7 < puVar13) {
      *plVar12 = (longlong)puVar7;
      plVar12[1] = (longlong)puVar13;
      *(int *)(plVar12 + 2) = iVar15;
      plVar12 = plVar12 + 3;
    }
    puVar11 = puVar6;
    if (puVar10 <= puVar6 + 2) goto LAB_148954749;
  }
  else {
    if (puVar6 + 2 < puVar10) {
      *plVar12 = (longlong)puVar6;
      plVar12[1] = (longlong)puVar14;
      *(int *)(plVar12 + 2) = iVar15;
      plVar12 = plVar12 + 3;
    }
    puVar6 = puVar7;
    puVar14 = puVar13;
    puVar18 = puVar13;
    if (puVar13 <= puVar7) goto LAB_148954749;
  }
  iVar8 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar11) >> 4);
  puVar13 = puVar14;
  puVar16 = puVar18;
  puVar17 = puVar11;
  if (iVar15 == 0) goto LAB_14895475e;
  goto LAB_1489545a9;
}



// FUNCTION 14895476b FUN_14895476b body=453 status=ok
// SIG undefined FUN_14895476b(void)

void FUN_14895476b(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar5 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar10 = iVar5;
joined_r0x00014895479f:
    do {
      iVar7 = iVar5 * 2 + 1;
      if (iVar7 < (int)param_2) {
        iVar9 = iVar5 * 2 + 2;
        if ((iVar9 < (int)param_2) &&
           (*(int *)((longlong)param_1 + (longlong)iVar7 * 0x10 + 0xc) <=
            *(int *)((longlong)param_1 + (longlong)iVar9 * 0x10 + 0xc))) {
          iVar7 = iVar9;
        }
        if (*(int *)((longlong)param_1 + (longlong)iVar5 * 0x10 + 0xc) <
            *(int *)((longlong)param_1 + (longlong)iVar7 * 0x10 + 0xc)) {
          puVar8 = param_1 + (longlong)iVar5 * 2;
          puVar11 = param_1 + (longlong)iVar7 * 2;
          uVar2 = *puVar8;
          uVar3 = puVar8[1];
          uVar4 = puVar11[1];
          *puVar8 = *puVar11;
          puVar8[1] = uVar4;
          local_28._0_4_ = (undefined4)uVar2;
          local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar3;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          *(undefined4 *)puVar11 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar11 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_20._4_4_;
          iVar5 = iVar7;
          local_28 = uVar2;
          uStack_20 = uVar3;
          goto joined_r0x00014895479f;
        }
      }
      bVar12 = iVar10 != 0;
      iVar5 = iVar10 + -1;
      iVar10 = iVar5;
    } while (bVar12);
    if (1 < (int)param_2) {
      uVar6 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = (param_1 + uVar6 * 2)[1];
      *param_1 = param_1[uVar6 * 2];
      param_1[1] = uVar4;
      local_28._0_4_ = (undefined4)uVar2;
      local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar3;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar8 = param_1 + uVar6 * 2;
      *(undefined4 *)puVar8 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar8 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar8 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uStack_20._4_4_;
      local_28 = uVar2;
      uStack_20 = uVar3;
      if (param_2 != 2) {
        do {
          iVar5 = 0;
          iVar7 = 1;
          iVar10 = 0;
          do {
            iVar5 = iVar5 + 2;
            iVar9 = iVar7;
            if (((longlong)iVar5 < (longlong)uVar6) &&
               (*(int *)((longlong)param_1 + (longlong)iVar7 * 0x10 + 0xc) <=
                *(int *)((longlong)param_1 + (longlong)iVar5 * 0x10 + 0xc))) {
              iVar9 = iVar5;
            }
            if (*(int *)((longlong)param_1 + (longlong)iVar9 * 0x10 + 0xc) <=
                *(int *)((longlong)param_1 + (longlong)iVar10 * 0x10 + 0xc)) break;
            puVar8 = param_1 + (longlong)iVar10 * 2;
            puVar11 = param_1 + (longlong)iVar9 * 2;
            uVar2 = *puVar8;
            uVar3 = puVar8[1];
            uVar4 = puVar11[1];
            *puVar8 = *puVar11;
            puVar8[1] = uVar4;
            *puVar11 = uVar2;
            puVar11[1] = uVar3;
            iVar5 = iVar9 * 2;
            iVar7 = iVar9 * 2 + 1;
            iVar10 = iVar9;
          } while ((longlong)iVar7 < (longlong)uVar6);
          uVar1 = uVar6 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = (param_1 + uVar1 * 2)[1];
          *param_1 = param_1[uVar1 * 2];
          param_1[1] = uVar4;
          local_28._0_4_ = (undefined4)uVar2;
          local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar3;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          puVar8 = param_1 + uVar1 * 2;
          *(undefined4 *)puVar8 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar8 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar8 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar8 + 0xc) = uStack_20._4_4_;
          bVar12 = 2 < uVar6;
          uVar6 = uVar1;
          local_28 = uVar2;
          uStack_20 = uVar3;
        } while (bVar12);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148954931 FUN_148954931 body=46 status=ok
// SIG undefined FUN_148954931(void)

undefined8 FUN_148954931(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if ((*(longlong *)(param_1 + lVar1) != *(longlong *)(param_2 + lVar1)) ||
         (*(int *)(param_1 + 0xc + lVar1) != *(int *)(param_2 + 0xc + lVar1))) {
        return 0;
      }
      lVar1 = lVar1 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 1;
}



// FUNCTION 14895497a FUN_14895497a body=101 status=ok
// SIG undefined FUN_14895497a(void)

void FUN_14895497a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b424110;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1489549e0 FUN_1489549e0 body=101 status=ok
// SIG undefined FUN_1489549e0(void)

void FUN_1489549e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b424110;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148954a46 FUN_148954a46 body=134 status=ok
// SIG undefined FUN_148954a46(void)

void FUN_148954a46(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b424110;
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
                    /* WARNING: Could not recover jumptable at 0x000148954abd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148954acc FUN_148954acc body=52 status=ok
// SIG undefined FUN_148954acc(void)

void FUN_148954acc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148954afd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148954b00 FUN_148954b00 body=121 status=ok
// SIG undefined FUN_148954b00(void)

int FUN_148954b00(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1 * 0xf0;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0xe0);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 148954b7a FUN_148954b7a body=414 status=ok
// SIG undefined FUN_148954b7a(void)

longlong * FUN_148954b7a(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x48,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x48);
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_140e457df(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_146544ebe(param_2,0);
      }
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x38e38 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar7 = 0;
    lVar8 = 0;
    do {
      lVar3 = *param_2;
      uVar4 = FUN_1464eaaa8();
      FUN_14047320e(uVar4,param_1,lVar3 + lVar7,0);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x48;
    } while (lVar8 < (int)param_2[1]);
  }
  else {
    FUN_148954d1a(param_2);
    if (0 < (int)local_34) {
      iVar6 = 0;
      do {
        uVar4 = FUN_148954d54(param_2);
        uVar5 = FUN_1464eaaa8();
        FUN_14047320e(uVar5,param_1,uVar4,0);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148954d1a FUN_148954d1a body=57 status=ok
// SIG undefined FUN_148954d1a(void)

void FUN_148954d1a(undefined8 *param_1,int param_2)

{
  FUN_140e457df(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146544ebe(param_1,param_2);
  return;
}



// FUNCTION 148954d54 FUN_148954d54 body=63 status=ok
// SIG undefined FUN_148954d54(void)

longlong FUN_148954d54(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1487cbd28(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x48 + *param_1;
  FUN_148954d93(lVar2);
  return lVar2;
}



// FUNCTION 148954d93 FUN_148954d93 body=36 status=ok
// SIG undefined FUN_148954d93(void)

void FUN_148954d93(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 148954dd2 FUN_148954dd2 body=101 status=ok
// SIG undefined FUN_148954dd2(void)

void FUN_148954dd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca6c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b424180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148954e38 FUN_148954e38 body=101 status=ok
// SIG undefined FUN_148954e38(void)

void FUN_148954e38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca6c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b424180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148954e9e FUN_148954e9e body=134 status=ok
// SIG undefined FUN_148954e9e(void)

void FUN_148954e9e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca6c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b424180;
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
                    /* WARNING: Could not recover jumptable at 0x000148954f15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148954f24 FUN_148954f24 body=52 status=ok
// SIG undefined FUN_148954f24(void)

void FUN_148954f24(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148954f55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148954f58 FUN_148954f58 body=29 status=ok
// SIG undefined FUN_148954f58(void)

undefined8 FUN_148954f58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148954f90 FUN_148954f90 body=29 status=ok
// SIG undefined FUN_148954f90(void)

bool FUN_148954f90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148954fae FUN_148954fae body=26 status=ok
// SIG undefined FUN_148954fae(void)

bool FUN_148954fae(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148954fc8 FUN_148954fc8 body=24 status=ok
// SIG undefined FUN_148954fc8(void)

bool FUN_148954fc8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148954fe0 FUN_148954fe0 body=101 status=ok
// SIG undefined FUN_148954fe0(void)

void FUN_148954fe0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4241f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148955046 FUN_148955046 body=101 status=ok
// SIG undefined FUN_148955046(void)

void FUN_148955046(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4241f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1489550ac FUN_1489550ac body=134 status=ok
// SIG undefined FUN_1489550ac(void)

void FUN_1489550ac(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4241f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148955123. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148955132 FUN_148955132 body=52 status=ok
// SIG undefined FUN_148955132(void)

void FUN_148955132(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148955163. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return;
}



// FUNCTION 148955166 FUN_148955166 body=162 status=ok
// SIG undefined FUN_148955166(void)

bool FUN_148955166(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895520a FUN_14895520a body=322 status=ok
// SIG undefined FUN_14895520a(void)

void FUN_14895520a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x10 + (longlong)iVar4 * 0x14) * 4) =
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



// FUNCTION 14895534e FUN_14895534e body=114 status=ok
// SIG undefined FUN_14895534e(void)

void FUN_14895534e(longlong *param_1,int param_2)

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



// FUNCTION 1489553c0 FUN_1489553c0 body=48 status=ok
// SIG undefined FUN_1489553c0(void)

void FUN_1489553c0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 1489553f0 FUN_1489553f0 body=25 status=ok
// SIG undefined FUN_1489553f0(void)

void FUN_1489553f0(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b424b40;
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 14895540a FUN_14895540a body=59 status=ok
// SIG undefined FUN_14895540a(void)

undefined8 * FUN_14895540a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b424b40;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148955446 FUN_148955446 body=68 status=ok
// SIG undefined FUN_148955446(void)

void FUN_148955446(longlong param_1,uint param_2)

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
  FUN_14895548a(param_1);
  return;
}



// FUNCTION 14895548a FUN_14895548a body=413 status=ok
// SIG undefined FUN_14895548a(void)

void FUN_14895548a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
        lVar6 = (longlong)iVar4 * 0x40;
        uVar8 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0x3c + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x38 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 148955628 FUN_148955628 body=128 status=ok
// SIG undefined FUN_148955628(void)

void FUN_148955628(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x40;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x3c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x38 + lVar6 * 0x40);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x40 + 0x38);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x38);
  if (*(longlong *)(*param_1 + 0x28 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_1489556a8(param_1,param_2);
  return;
}



// FUNCTION 1489556a8 FUN_1489556a8 body=114 status=ok
// SIG undefined FUN_1489556a8(void)

void FUN_1489556a8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 14895571a FUN_14895571a body=68 status=ok
// SIG undefined FUN_14895571a(void)

void FUN_14895571a(longlong param_1,uint param_2)

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
  FUN_14895575e(param_1);
  return;
}



// FUNCTION 14895575e FUN_14895575e body=413 status=ok
// SIG undefined FUN_14895575e(void)

void FUN_14895575e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
        uVar8 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0x1c + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 1489558fc FUN_1489558fc body=90 status=ok
// SIG undefined FUN_1489558fc(void)

void FUN_1489558fc(longlong *param_1,int param_2)

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
  FUN_148955956();
  return;
}



// FUNCTION 148955956 FUN_148955956 body=114 status=ok
// SIG undefined FUN_148955956(void)

void FUN_148955956(longlong *param_1,int param_2)

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



// FUNCTION 1489559c8 FUN_1489559c8 body=68 status=ok
// SIG undefined FUN_1489559c8(void)

void FUN_1489559c8(longlong param_1,uint param_2)

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
  FUN_148955a0c(param_1);
  return;
}



// FUNCTION 148955a0c FUN_148955a0c body=413 status=ok
// SIG undefined FUN_148955a0c(void)

void FUN_148955a0c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
        uVar8 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0x1c + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 148955baa FUN_148955baa body=90 status=ok
// SIG undefined FUN_148955baa(void)

void FUN_148955baa(longlong *param_1,int param_2)

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
  FUN_148955c04();
  return;
}



// FUNCTION 148955c04 FUN_148955c04 body=59 status=ok
// SIG undefined FUN_148955c04(void)

void FUN_148955c04(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_148955c40(param_1,param_2);
  return;
}



// FUNCTION 148955c40 FUN_148955c40 body=114 status=ok
// SIG undefined FUN_148955c40(void)

void FUN_148955c40(longlong *param_1,int param_2)

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



// FUNCTION 148955cb2 FUN_148955cb2 body=183 status=ok
// SIG undefined FUN_148955cb2(void)

longlong FUN_148955cb2(longlong *param_1,uint param_2,short *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  short *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x40;
        if (*(short *)(*param_1 + (longlong)iVar1 * 0x40) == *param_3) {
          if (lVar3 != 0) goto LAB_148955d4c;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x38);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_148955d6a(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x40 + *param_1;
LAB_148955d4c:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 148955d6a FUN_148955d6a body=332 status=ok
// SIG undefined FUN_148955d6a(void)

undefined4 * FUN_148955d6a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78 [2];
  undefined2 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148955eb8(param_1,local_78);
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  *local_70 = *(undefined2 *)*param_4;
  *(undefined8 *)(local_70 + 4) = 0;
  FUN_1404e49e4(local_70 + 8,&uStack_60);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(local_70 + 0x1c) = 0xffffffff;
  cVar1 = FUN_148955f9e(param_1,param_3,local_70);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_70 + 0x1e) = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(local_70 + 0x1c) =
           *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4) =
           local_78[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14895548a(param_1);
    }
  }
  *param_2 = local_78[0];
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148955eb8 FUN_148955eb8 body=229 status=ok
// SIG undefined FUN_148955eb8(void)

int * FUN_148955eb8(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 148955f9e FUN_148955f9e body=179 status=ok
// SIG undefined FUN_148955f9e(void)

undefined8 FUN_148955f9e(longlong *param_1,uint param_2,short *param_3,int *param_4)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong *plVar14;
  int iVar15;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x40);
        if (*(short *)(*param_1 + (longlong)iVar15 * 0x40) == *param_3) {
          if (*(longlong *)(puVar1 + 10) != 0) {
            FUN_1400020a8();
          }
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 2);
          uVar4 = *(undefined4 *)(param_3 + 4);
          uVar5 = *(undefined4 *)(param_3 + 6);
          uVar6 = *(undefined4 *)(param_3 + 8);
          uVar7 = *(undefined4 *)(param_3 + 10);
          uVar8 = *(undefined4 *)(param_3 + 0xc);
          uVar9 = *(undefined4 *)(param_3 + 0xe);
          uVar10 = *(undefined4 *)(param_3 + 0x10);
          uVar11 = *(undefined4 *)(param_3 + 0x12);
          uVar12 = *(undefined4 *)(param_3 + 0x14);
          uVar13 = *(undefined4 *)(param_3 + 0x16);
          *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_3 + 0x18);
          puVar1[8] = uVar10;
          puVar1[9] = uVar11;
          puVar1[10] = uVar12;
          puVar1[0xb] = uVar13;
          puVar1[4] = uVar6;
          puVar1[5] = uVar7;
          puVar1[6] = uVar8;
          puVar1[7] = uVar9;
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          FUN_1489556a8(param_1,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = puVar1[0xe];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 148956052 FUN_148956052 body=29 status=ok
// SIG undefined FUN_148956052(void)

undefined8 FUN_148956052(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14895608a FUN_14895608a body=29 status=ok
// SIG undefined FUN_14895608a(void)

bool FUN_14895608a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489560a8 FUN_1489560a8 body=26 status=ok
// SIG undefined FUN_1489560a8(void)

bool FUN_1489560a8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489560c2 FUN_1489560c2 body=24 status=ok
// SIG undefined FUN_1489560c2(void)

bool FUN_1489560c2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1489560e6 FUN_1489560e6 body=93 status=ok
// SIG undefined FUN_1489560e6(void)

void FUN_1489560e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4242f0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b424280;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148956144 FUN_148956144 body=93 status=ok
// SIG undefined FUN_148956144(void)

void FUN_148956144(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4242f0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b424280;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489561a2 FUN_1489561a2 body=126 status=ok
// SIG undefined FUN_1489561a2(void)

void FUN_1489561a2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  _LIST_ENTRY *p_Var5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4242f0;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14b424280;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148956211. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148956220 FUN_148956220 body=100 status=ok
// SIG undefined FUN_148956220(void)

void FUN_148956220(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  (**(code **)(param_1 + 0x20))(uVar1,param_2,&local_38,*(undefined2 *)(param_1 + 8));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148956286 FUN_148956286 body=180 status=ok
// SIG undefined FUN_148956286(void)

bool FUN_148956286(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = CONCAT44(uStack_44,local_48);
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_48 = *param_3;
    uStack_44 = param_3[1];
    uStack_40 = param_3[2];
    uStack_3c = param_3[3];
    (**(code **)(param_1 + 0x20))(lVar2,param_2,&local_48,*(undefined2 *)(param_1 + 8));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895633e FUN_14895633e body=80 status=ok
// SIG undefined FUN_14895633e(void)

void FUN_14895633e(longlong *param_1,ushort *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & (uint)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ushort *)(*param_1 + (longlong)iVar1 * 0x40) == *param_2) {
          FUN_148955628();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x40 + *param_1 + 0x38);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14895638e FUN_14895638e body=80 status=ok
// SIG undefined FUN_14895638e(void)

void FUN_14895638e(longlong *param_1,ushort *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & (uint)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ushort *)(*param_1 + (longlong)iVar1 * 0x20) == *param_2) {
          FUN_1489558fc();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1489563de FUN_1489563de body=183 status=ok
// SIG undefined FUN_1489563de(void)

longlong FUN_1489563de(longlong *param_1,uint param_2,short *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  short *local_28;
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
        if (*(short *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_148956478;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_148956496(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_148956478:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 148956496 FUN_148956496 body=271 status=ok
// SIG undefined FUN_148956496(void)

undefined4 * FUN_148956496(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined2 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1489565a6(param_1,local_48);
  *local_40 = *(undefined2 *)*param_4;
  *(undefined8 *)(local_40 + 4) = 0;
  *(undefined8 *)(local_40 + 8) = 0;
  *(undefined4 *)(local_40 + 0xc) = 0xffffffff;
  cVar1 = FUN_14895668c(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0xe) = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xc) =
           *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14895575e(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489565a6 FUN_1489565a6 body=229 status=ok
// SIG undefined FUN_1489565a6(void)

int * FUN_1489565a6(longlong *param_1,int *param_2)

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



// FUNCTION 14895668c FUN_14895668c body=136 status=ok
// SIG undefined FUN_14895668c(void)

undefined8 FUN_14895668c(longlong *param_1,uint param_2,short *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(short *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 2);
          uVar4 = *(undefined4 *)(param_3 + 4);
          uVar5 = *(undefined4 *)(param_3 + 6);
          *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 8);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          FUN_148955956(uVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 148956714 FUN_148956714 body=29 status=ok
// SIG undefined FUN_148956714(void)

undefined8 FUN_148956714(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14895674c FUN_14895674c body=29 status=ok
// SIG undefined FUN_14895674c(void)

bool FUN_14895674c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 == param_2;
}



// FUNCTION 14895676a FUN_14895676a body=26 status=ok
// SIG undefined FUN_14895676a(void)

bool FUN_14895676a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x20,1);
  return lVar1 == 0;
}



// FUNCTION 148956784 FUN_148956784 body=24 status=ok
// SIG undefined FUN_148956784(void)

bool FUN_148956784(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 != 0;
}



// FUNCTION 1489567a8 FUN_1489567a8 body=101 status=ok
// SIG undefined FUN_1489567a8(void)

void FUN_1489567a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4243d0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b424360;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  return;
}



// FUNCTION 14895680e FUN_14895680e body=101 status=ok
// SIG undefined FUN_14895680e(void)

void FUN_14895680e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4243d0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b424360;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  return;
}



// FUNCTION 148956874 FUN_148956874 body=134 status=ok
// SIG undefined FUN_148956874(void)

void FUN_148956874(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  DWORD DVar2;
  DWORD DVar3;
  undefined4 uVar4;
  _LIST_ENTRY *p_Var5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4243d0;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14b424360;
  DVar2 = *(DWORD *)(param_1 + 0x24);
  DVar3 = *(DWORD *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->ContentionCount = DVar2;
  p_Var1->Flags = DVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar4;
  p_Var1->SpareWORD = (short)((uint)uVar4 >> 0x10);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489568eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489568fa FUN_1489568fa body=41 status=ok
// SIG undefined FUN_1489568fa(void)

void FUN_1489568fa(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000148956920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))
            (uVar1,*(undefined8 *)(param_1 + 8),*(undefined2 *)(param_1 + 0x10),
             *(code **)(param_1 + 0x28));
  return;
}



// FUNCTION 148956924 FUN_148956924 body=151 status=ok
// SIG undefined FUN_148956924(void)

bool FUN_148956924(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x20,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x20);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x28))
              (lVar2,*(undefined8 *)(param_1 + 8),*(undefined2 *)(param_1 + 0x10));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489569be FUN_1489569be body=31 status=ok
// SIG undefined FUN_1489569be(void)

undefined8 FUN_1489569be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


