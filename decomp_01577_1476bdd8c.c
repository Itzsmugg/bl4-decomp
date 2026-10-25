// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1476bdd8c FUN_1476bdd8c body=95 status=ok
// SIG undefined FUN_1476bdd8c(void)

void FUN_1476bdd8c(longlong param_1,uint param_2)

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



// FUNCTION 1476bddec FUN_1476bddec body=75 status=ok
// SIG undefined FUN_1476bddec(void)

bool FUN_1476bddec(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476bde20;
    }
  }
  lVar2 = 0;
LAB_1476bde20:
  lVar1 = FUN_1459909c2();
  return lVar2 == lVar1;
}



// FUNCTION 1476bde3d FUN_1476bde3d body=174 status=ok
// SIG undefined FUN_1476bde3d(void)

undefined8 FUN_1476bde3d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459909c2();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1476bdf30 FUN_1476bdf30 body=75 status=ok
// SIG undefined FUN_1476bdf30(void)

bool FUN_1476bdf30(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476bdf64;
    }
  }
  lVar2 = 0;
LAB_1476bdf64:
  lVar1 = FUN_145a67f14();
  return lVar2 == lVar1;
}



// FUNCTION 1476bdf81 FUN_1476bdf81 body=174 status=ok
// SIG undefined FUN_1476bdf81(void)

undefined8 FUN_1476bdf81(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a67f14();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1476be034 FUN_1476be034 body=33 status=ok
// SIG undefined FUN_1476be034(void)

void FUN_1476be034(longlong param_1)

{
  FUN_1409dad52();
  FUN_1476be056(param_1,*(undefined8 *)(param_1 + 0x128));
  return;
}



// FUNCTION 1476be056 FUN_1476be056 body=180 status=ok
// SIG undefined FUN_1476be056(void)

void FUN_1476be056(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  *(longlong *)(param_1 + 0x128) = param_2;
  iVar1 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x118);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (lVar3 != 0) {
        lVar4 = FUN_145b345de();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          lVar4 = *(longlong *)(param_1 + 0x128);
          if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_14689c22e(lVar4);
          }
          *(longlong *)(lVar3 + 0x180) = lVar4;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1476be10a FUN_1476be10a body=75 status=ok
// SIG undefined FUN_1476be10a(void)

bool FUN_1476be10a(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476be13e;
    }
  }
  lVar2 = 0;
LAB_1476be13e:
  lVar1 = FUN_145b345de();
  return lVar2 == lVar1;
}



// FUNCTION 1476be156 FUN_1476be156 body=63 status=ok
// SIG undefined FUN_1476be156(void)

longlong FUN_1476be156(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_1476be195();
  lVar1 = *(longlong *)(param_1 + 0x128);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  *(longlong *)(lVar2 + 0x180) = lVar1;
  return lVar2;
}



// FUNCTION 1476be195 FUN_1476be195 body=174 status=ok
// SIG undefined FUN_1476be195(void)

undefined8 FUN_1476be195(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b345de();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1476be248 FUN_1476be248 body=75 status=ok
// SIG undefined FUN_1476be248(void)

bool FUN_1476be248(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476be27c;
    }
  }
  lVar2 = 0;
LAB_1476be27c:
  lVar1 = FUN_145b33f78();
  return lVar2 == lVar1;
}



// FUNCTION 1476be294 FUN_1476be294 body=40 status=ok
// SIG undefined FUN_1476be294(void)

void FUN_1476be294(undefined8 param_1)

{
  FUN_1476a2910(param_1,0,8,0,0,0);
  return;
}



// FUNCTION 1476be2d0 FUN_1476be2d0 body=131 status=ok
// SIG undefined FUN_1476be2d0(void)

void FUN_1476be2d0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x118);
  *(uint *)(param_1 + 0x118) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x11c) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0x110),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
    return;
  }
  return;
}



// FUNCTION 1476be354 FUN_1476be354 body=75 status=ok
// SIG undefined FUN_1476be354(void)

bool FUN_1476be354(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476be388;
    }
  }
  lVar2 = 0;
LAB_1476be388:
  lVar1 = FUN_145b346c8();
  return lVar2 == lVar1;
}



// FUNCTION 1476be3a0 FUN_1476be3a0 body=40 status=ok
// SIG undefined FUN_1476be3a0(void)

void FUN_1476be3a0(undefined8 param_1)

{
  FUN_1476be3c8(param_1,0,8,0,0,0);
  return;
}



// FUNCTION 1476be3c8 FUN_1476be3c8 body=217 status=ok
// SIG undefined FUN_1476be3c8(void)

undefined8
FUN_1476be3c8(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1459e4a50();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476be508 FUN_1476be508 body=106 status=ok
// SIG undefined FUN_1476be508(void)

void FUN_1476be508(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0x110);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476be574 FUN_1476be574 body=95 status=ok
// SIG undefined FUN_1476be574(void)

void FUN_1476be574(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x118);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x110) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0x110) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x118);
  }
  *(int *)(param_1 + 0x118) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0x110);
  return;
}



// FUNCTION 1476be5d4 FUN_1476be5d4 body=138 status=ok
// SIG undefined FUN_1476be5d4(void)

undefined8 FUN_1476be5d4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x18);
    lVar4 = (longlong)*(int *)(param_1 + 0x20) << 3;
    do {
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        lVar2 = FUN_145b346c8();
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30)) {
          if (plVar5 == (longlong *)0x0) {
            return 1;
          }
          uVar3 = FUN_14753372c(param_1,param_2,param_3);
          return uVar3;
        }
      }
      plVar5 = plVar5 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return 1;
}



// FUNCTION 1476be65e FUN_1476be65e body=199 status=ok
// SIG undefined FUN_1476be65e(void)

longlong FUN_1476be65e(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_168 [32];
  undefined **local_148 [4];
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_3 != 0) {
    lVar1 = FUN_145b346c8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_1475ab7c6(local_148,param_3,param_1 + -0xf8);
      *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfe;
      FUN_1476c3c5c(param_2,local_148);
      local_148[0] = &PTR_FUN_14a4abc80;
      FUN_145c31fda(local_128);
      goto LAB_1476be6ba;
    }
  }
  *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfc | 2;
LAB_1476be6ba:
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476be726 FUN_1476be726 body=140 status=ok
// SIG undefined FUN_1476be726(void)

void FUN_1476be726(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x14) == '\x01') {
    puVar2 = &local_28;
    uVar1 = 2;
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\0') {
      FUN_145cf16e4(&local_30,1);
      *(undefined8 *)(param_2 + 0x68) = local_30;
      *(undefined2 *)(param_2 + 0x10) = 0xf9b;
      goto LAB_1476be770;
    }
    puVar2 = &local_20;
    uVar1 = 0;
  }
  FUN_145cf16e4(puVar2,uVar1);
  *(undefined8 *)(param_2 + 0x68) = *puVar2;
LAB_1476be770:
  *(undefined1 *)(param_2 + 0x12) = 1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476be7c0 FUN_1476be7c0 body=75 status=ok
// SIG undefined FUN_1476be7c0(void)

bool FUN_1476be7c0(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476be7f4;
    }
  }
  lVar2 = 0;
LAB_1476be7f4:
  lVar1 = FUN_145b347b2();
  return lVar2 == lVar1;
}



// FUNCTION 1476be811 FUN_1476be811 body=174 status=ok
// SIG undefined FUN_1476be811(void)

undefined8 FUN_1476be811(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b347b2();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1476be8c4 FUN_1476be8c4 body=75 status=ok
// SIG undefined FUN_1476be8c4(void)

bool FUN_1476be8c4(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476be8f8;
    }
  }
  lVar2 = 0;
LAB_1476be8f8:
  lVar1 = FUN_145a68000();
  return lVar2 == lVar1;
}



// FUNCTION 1476be910 FUN_1476be910 body=40 status=ok
// SIG undefined FUN_1476be910(void)

void FUN_1476be910(undefined8 param_1)

{
  FUN_1476be938(param_1,0,8,0,0,0);
  return;
}



// FUNCTION 1476be938 FUN_1476be938 body=217 status=ok
// SIG undefined FUN_1476be938(void)

undefined8
FUN_1476be938(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145a68000();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bea16 FUN_1476bea16 body=75 status=ok
// SIG undefined FUN_1476bea16(void)

bool FUN_1476bea16(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476bea4a;
    }
  }
  lVar2 = 0;
LAB_1476bea4a:
  lVar1 = FUN_145b3489c();
  return lVar2 == lVar1;
}



// FUNCTION 1476bea62 FUN_1476bea62 body=40 status=ok
// SIG undefined FUN_1476bea62(void)

void FUN_1476bea62(undefined8 param_1)

{
  FUN_1476bea8a(param_1,0,8,0,0,0);
  return;
}



// FUNCTION 1476bea8a FUN_1476bea8a body=217 status=ok
// SIG undefined FUN_1476bea8a(void)

undefined8
FUN_1476bea8a(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145b3489c();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476beb74 FUN_1476beb74 body=131 status=ok
// SIG undefined FUN_1476beb74(void)

void FUN_1476beb74(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x100);
  *(uint *)(param_1 + 0x100) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
    return;
  }
  return;
}



// FUNCTION 1476bebf8 FUN_1476bebf8 body=106 status=ok
// SIG undefined FUN_1476bebf8(void)

void FUN_1476bebf8(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0xf8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bec64 FUN_1476bec64 body=95 status=ok
// SIG undefined FUN_1476bec64(void)

void FUN_1476bec64(longlong param_1,uint param_2)

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



// FUNCTION 1476becc4 FUN_1476becc4 body=75 status=ok
// SIG undefined FUN_1476becc4(void)

bool FUN_1476becc4(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476becf8;
    }
  }
  lVar2 = 0;
LAB_1476becf8:
  lVar1 = FUN_145990aae();
  return lVar2 == lVar1;
}



// FUNCTION 1476bed15 FUN_1476bed15 body=174 status=ok
// SIG undefined FUN_1476bed15(void)

undefined8 FUN_1476bed15(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145990aae();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1476bee08 FUN_1476bee08 body=127 status=ok
// SIG undefined FUN_1476bee08(void)

longlong * FUN_1476bee08(undefined8 param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_38 = 0;
  plVar1 = (longlong *)FUN_1476bee88(param_1,0,8,0);
  (**(code **)(*plVar1 + 0x2c0))(plVar1,1);
  local_20 = 2;
  local_18 = 2;
  (**(code **)(*plVar1 + 0x2a0))(plVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bee88 FUN_1476bee88 body=217 status=ok
// SIG undefined FUN_1476bee88(void)

undefined8
FUN_1476bee88(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145957834();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bef64 FUN_1476bef64 body=219 status=ok
// SIG undefined FUN_1476bef64(void)

void FUN_1476bef64(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined2 local_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined1 local_4c;
  undefined1 local_44;
  undefined2 local_40;
  uint local_3e;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_14009d2a0();
  lVar2 = FUN_14038fb82();
  FUN_1476c3dac(&local_58,*(undefined2 *)(lVar2 + 0xfc),param_1 + 8);
  local_40 = *(undefined2 *)(lVar1 + 0x126);
  uStack_50 = local_58;
  local_44 = local_4c;
  local_3e = ((*(ushort *)(param_2 + 0xd9) & 0x100) << 8 | (uint)*(ushort *)(lVar1 + 0x110)) ^
             0x10000;
  local_38 = 0;
  local_58 = 0xc230;
  uStack_56 = 0x4a4e;
  uStack_54 = 1;
  FUN_1476bf040(param_5);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bf040 FUN_1476bf040 body=160 status=ok
// SIG undefined FUN_1476bf040(void)

void FUN_1476bf040(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  uVar4 = *(undefined2 *)(param_2 + 8);
  uVar2 = *(undefined1 *)(param_2 + 0x14);
  uVar8 = *(undefined8 *)(param_2 + 0xc);
  uVar5 = *(undefined2 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x1a);
  uVar3 = *(undefined1 *)(param_2 + 0x20);
  iVar7 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar7 + 1U) {
    FUN_140561fb4(param_1,iVar7);
  }
  lVar9 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar9 = param_1;
  }
  puVar1 = (undefined8 *)(lVar9 + (longlong)iVar7 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) | 3;
  *puVar1 = &PTR_FUN_14a4ec230;
  *(undefined2 *)(puVar1 + 1) = uVar4;
  *(undefined8 *)((longlong)puVar1 + 0xc) = uVar8;
  *(undefined1 *)((longlong)puVar1 + 0x14) = uVar2;
  *(undefined2 *)(puVar1 + 3) = uVar5;
  *(undefined4 *)((longlong)puVar1 + 0x1a) = uVar6;
  *(undefined1 *)(puVar1 + 4) = uVar3;
  return;
}



// FUNCTION 1476bf0e0 FUN_1476bf0e0 body=984 status=ok
// SIG undefined FUN_1476bf0e0(void)

undefined8 FUN_1476bf0e0(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  char cVar3;
  uint uVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  int iVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  longlong local_b0;
  char local_9c;
  ulonglong local_90;
  ulonglong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = param_4;
  local_e0 = param_3;
  plVar6 = (longlong *)FUN_1456c5f90();
  if ((longlong)(int)plVar6[1] != 0) {
    puVar1 = param_2 + 1;
    lVar17 = (longlong)(int)plVar6[1] << 5;
    puVar13 = (ulonglong *)(*plVar6 + 0x10);
    do {
      if (puVar13[-2] == 0) {
        uVar18 = 0;
LAB_1476bf1a5:
        uVar9 = 0;
        uVar12 = 0;
      }
      else {
        puVar2 = puVar13 + -2;
        uVar7 = FUN_145957834();
        cVar5 = FUN_144a7ca96(puVar2,uVar7);
        uVar18 = 0;
        if (cVar5 != '\0') {
          uVar18 = *puVar2;
        }
        if (*puVar2 == 0) goto LAB_1476bf1a5;
        uVar7 = FUN_1459e46a0();
        cVar5 = FUN_144a7ca96(puVar2,uVar7);
        uVar9 = *puVar2;
        uVar12 = 0;
        if (cVar5 != '\0') {
          uVar12 = uVar9;
        }
      }
      if ((uVar18 != 0 || uVar12 != 0) &&
         (cVar5 = FUN_14758438e(param_1 + -0x110,*(undefined4 *)(uVar9 + 0xb8)), cVar5 == '\0')) {
        cVar5 = (char)*param_2;
        if (((cVar5 == '\x02') || ((char)*puVar1 == '\x02')) ||
           ((*(int *)((longlong)param_2 + 4) <= *(int *)((longlong)param_2 + 0xc) &&
            ((*(int *)((longlong)param_2 + 4) != *(int *)((longlong)param_2 + 0xc) ||
             ((char)*puVar1 != '\0' && cVar5 != '\0')))))) {
          puVar2 = puVar13 + -1;
          cVar3 = (char)*puVar2;
          if (((cVar3 == '\x02') || ((char)*puVar13 == '\x02')) ||
             ((*(int *)((longlong)puVar13 + -4) <= *(int *)((longlong)puVar13 + 4) &&
              ((*(int *)((longlong)puVar13 + -4) != *(int *)((longlong)puVar13 + 4) ||
               ((char)*puVar13 != '\0' && cVar3 != '\0')))))) {
            puVar15 = puVar13;
            if (((char)*puVar1 != '\x02') && (puVar15 = puVar1, (char)*puVar13 != '\x02')) {
              if (((*(int *)((longlong)puVar13 + 4) <= *(int *)((longlong)param_2 + 0xc)) &&
                  (puVar15 = puVar13,
                  *(int *)((longlong)param_2 + 0xc) <= *(int *)((longlong)puVar13 + 4))) &&
                 ((char)*puVar1 == '\0')) {
                puVar15 = puVar1;
              }
            }
            puVar16 = puVar2;
            if ((cVar5 != '\x02') && (puVar16 = param_2, cVar3 != '\x02')) {
              if ((*(int *)((longlong)param_2 + 4) <= *(int *)((longlong)puVar13 + -4)) &&
                 ((puVar16 = puVar2,
                  *(int *)((longlong)puVar13 + -4) <= *(int *)((longlong)param_2 + 4) &&
                  (cVar5 == '\0')))) {
                puVar16 = param_2;
              }
            }
            local_90 = *puVar16;
            local_88 = *puVar15;
            if (((char)local_90 != '\x02') && ((char)local_88 != '\x02')) {
              iVar14 = (int)(local_90 >> 0x20);
              iVar11 = (int)(local_88 >> 0x20);
              if ((iVar11 < iVar14) ||
                 ((iVar14 == iVar11 && (((char)local_90 == '\0' || ((char)local_88 == '\0'))))))
              goto LAB_1476bf1c1;
            }
            FUN_1475376e2(&local_d8,local_e0);
            local_9c = *(char *)((longlong)puVar13 + 0xc);
            if (puVar13[-2] != 0) {
              lVar8 = FUN_147571e62(param_1 + -0x110,puVar13[-2],1);
              if (lVar8 == 0) {
                local_d8 = 0;
                uStack_d0 = 0;
                uStack_c8 = 0;
                uStack_b8 = 0;
                if (iStack_b4 < 0) {
                  FUN_1446f8c06(&local_c0,0);
                }
                if ((undefined2 *)CONCAT44(uStack_bc,local_c0) != (undefined2 *)0x0) {
                  *(undefined2 *)CONCAT44(uStack_bc,local_c0) = 0;
                }
              }
              else {
                FUN_1400bbfae(&local_80,lVar8);
                uStack_d0 = CONCAT44(uStack_7c,local_80);
                uStack_c8 = CONCAT44(uStack_74,uStack_78);
                if (CONCAT44(uStack_bc,local_c0) != 0) {
                  FUN_1400020a8();
                }
                local_c0 = local_70;
                uStack_bc = uStack_6c;
                uStack_b8 = uStack_68;
                iStack_b4 = iStack_64;
                cVar5 = (*(code *)PTR_FUN_14c758760)();
                if (cVar5 != '\0') {
                  uVar4 = *(uint *)(lVar8 + 0xc);
                  if ((int)uVar4 < DAT_14c9647dc) {
                    lVar10 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
                  }
                  else {
                    lVar10 = 0;
                  }
                  if ((*(uint *)(lVar10 + 8) & 0x8400000) != 0) {
                    local_d8 = 0;
                    goto LAB_1476bf327;
                  }
                }
                FUN_14485c47a(&local_d8,lVar8);
              }
            }
LAB_1476bf327:
            if (uVar18 == 0) {
              if (uVar12 != 0) {
                FUN_1475c67f4(uVar12,&local_90,&local_d8,local_e8);
              }
            }
            else {
              FUN_1475ce654(uVar18,&local_90,&local_d8,local_e8);
            }
            if (local_b0 != 0) {
              FUN_1400020a8();
            }
            if (CONCAT44(uStack_bc,local_c0) != 0) {
              FUN_1400020a8();
            }
          }
        }
      }
LAB_1476bf1c1:
      puVar13 = puVar13 + 4;
      lVar17 = lVar17 + -0x20;
    } while (lVar17 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bf4ba FUN_1476bf4ba body=137 status=ok
// SIG undefined FUN_1476bf4ba(void)

bool FUN_1476bf4ba(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if ((((lVar2 == 0) || (lVar1 = FUN_14055f146(), lVar1 == 0)) ||
      (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *param_2;
  }
  lVar1 = FUN_1459e46a0();
  if (lVar2 != lVar1) {
    lVar2 = *param_2;
    if (((lVar2 == 0) || (lVar1 = FUN_14055f146(), lVar1 == 0)) ||
       ((*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
         lVar1 + 0x30)))) {
      lVar2 = 0;
    }
    else {
      lVar2 = *param_2;
    }
    lVar1 = FUN_145957834();
    return lVar2 == lVar1;
  }
  return true;
}



// FUNCTION 1476bf54c FUN_1476bf54c body=137 status=ok
// SIG undefined FUN_1476bf54c(void)

bool FUN_1476bf54c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if ((((lVar2 == 0) || (lVar1 = FUN_14055f146(), lVar1 == 0)) ||
      (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *param_2;
  }
  lVar1 = FUN_1459e46a0();
  if (lVar2 != lVar1) {
    lVar2 = *param_2;
    if (((lVar2 == 0) || (lVar1 = FUN_14055f146(), lVar1 == 0)) ||
       ((*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
         lVar1 + 0x30)))) {
      lVar2 = 0;
    }
    else {
      lVar2 = *param_2;
    }
    lVar1 = FUN_145957834();
    return lVar2 == lVar1;
  }
  return true;
}



// FUNCTION 1476bf5d6 FUN_1476bf5d6 body=36 status=ok
// SIG undefined FUN_1476bf5d6(void)

longlong * FUN_1476bf5d6(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1476bf5fa();
  (**(code **)(*plVar1 + 0x2c0))(plVar1,1);
  return plVar1;
}



// FUNCTION 1476bf5fa FUN_1476bf5fa body=174 status=ok
// SIG undefined FUN_1476bf5fa(void)

undefined8 FUN_1476bf5fa(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459e46a0();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1476bf6aa FUN_1476bf6aa body=60 status=ok
// SIG undefined FUN_1476bf6aa(void)

void FUN_1476bf6aa(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(int *)(param_1 + 0x104) != 0) {
    FUN_1475916a0(param_1 + 0xf8,0);
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  return;
}



// FUNCTION 1476bf71e FUN_1476bf71e body=159 status=ok
// SIG undefined FUN_1476bf71e(void)

void FUN_1476bf71e(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  iVar1 = (int)param_1[0x20];
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x104) < iVar1 + 1U) {
    FUN_14759143a(param_1 + 0x1f,iVar1);
  }
  *(longlong *)(param_1[0x1f] + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  if (1 < (int)param_1[0x20]) {
                    /* WARNING: Could not recover jumptable at 0x0001476bf7a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2f8))(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1476bf7be FUN_1476bf7be body=172 status=ok
// SIG undefined FUN_1476bf7be(void)

void FUN_1476bf7be(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_28 = &local_30;
  FUN_1475914c0();
  if (*(longlong *)(param_1 + 0x108) != param_2) goto LAB_1476bf81a;
  if (*(int *)(param_1 + 0x100) < 1) {
LAB_1476bf860:
    lVar2 = 0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0xf8);
    lVar2 = *plVar1;
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) goto LAB_1476bf860;
      FUN_14689c22e();
      lVar2 = *plVar1;
    }
  }
  *(longlong *)(param_1 + 0x108) = lVar2;
LAB_1476bf81a:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bf86c FUN_1476bf86c body=234 status=ok
// SIG undefined FUN_1476bf86c(void)

void FUN_1476bf86c(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)(int)param_2;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf8) + lVar4 * 8);
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e(lVar3);
  }
  lVar1 = *(longlong *)(param_1 + 0x108);
  iVar2 = *(int *)(param_1 + 0x100);
  if (~param_2 + iVar2 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0xf8) + lVar4 * 8),
            (void *)(*(longlong *)(param_1 + 0xf8) + lVar4 * 8 + 8),
            (longlong)(int)(~param_2 + iVar2) << 3);
    iVar2 = *(int *)(param_1 + 0x100);
  }
  *(int *)(param_1 + 0x100) = iVar2 + -1;
  FUN_1475915fe((undefined8 *)(param_1 + 0xf8));
  if (lVar1 == lVar3) {
    if (*(int *)(param_1 + 0x100) < 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = **(longlong **)(param_1 + 0xf8);
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar3);
      }
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar3);
      }
    }
    *(longlong *)(param_1 + 0x108) = lVar3;
  }
  return;
}



// FUNCTION 1476bf966 FUN_1476bf966 body=48 status=ok
// SIG undefined FUN_1476bf966(void)

void FUN_1476bf966(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  *(longlong *)(param_1 + 0x108) = param_2;
  return;
}



// FUNCTION 1476bf9a0 FUN_1476bf9a0 body=169 status=ok
// SIG undefined FUN_1476bf9a0(void)

void FUN_1476bf9a0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined **local_50;
  undefined2 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  uint local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_14009d2a0();
  lVar2 = FUN_14038fb82();
  local_48 = *(undefined2 *)(lVar2 + 0xe6);
  local_34 = 1;
  local_44 = *(undefined4 *)(param_1 + 8);
  uStack_40 = *(undefined4 *)(param_1 + 0xc);
  uStack_3c = *(undefined4 *)(param_1 + 0x10);
  uStack_38 = *(undefined4 *)(param_1 + 0x14);
  local_30 = ((*(ushort *)(param_2 + 0xd9) & 0x100) << 8 | (uint)*(ushort *)(lVar1 + 0x110)) ^
             0x10000;
  local_2c = 0;
  local_50 = &PTR_FUN_14a4ec250;
  FUN_1476bfa4a(param_5);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bfa4a FUN_1476bfa4a body=203 status=ok
// SIG undefined FUN_1476bfa4a(void)

void FUN_1476bfa4a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [46];
  undefined2 uStack_4a;
  undefined2 local_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = *(char *)(param_2 + 0x1c);
  if (cVar2 == '\x01') {
    local_48 = (undefined2)*(undefined4 *)(param_2 + 0xc);
    uStack_46 = (undefined2)((uint)*(undefined4 *)(param_2 + 0xc) >> 0x10);
    uStack_44 = (undefined2)*(undefined4 *)(param_2 + 0x10);
    uStack_42 = (undefined2)((uint)*(undefined4 *)(param_2 + 0x10) >> 0x10);
    uStack_40 = (undefined2)*(undefined4 *)(param_2 + 0x14);
    uStack_3e = (undefined2)((uint)*(undefined4 *)(param_2 + 0x14) >> 0x10);
    uStack_3c = (undefined2)*(undefined4 *)(param_2 + 0x18);
    uStack_3a = (undefined2)((uint)*(undefined4 *)(param_2 + 0x18) >> 0x10);
  }
  uVar4 = *(undefined2 *)(param_2 + 8);
  uVar5 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined1 *)(param_2 + 0x24);
  iVar6 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar6 + 1U) {
    FUN_140561fb4(param_1,iVar6);
  }
  lVar7 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar7 = param_1;
  }
  puVar1 = (undefined8 *)(lVar7 + (longlong)iVar6 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) | 3;
  *puVar1 = &PTR_FUN_14a4ec250;
  *(undefined2 *)(puVar1 + 1) = uVar4;
  *(uint *)((longlong)puVar1 + 10) = CONCAT22(local_48,uStack_4a);
  *(uint *)((longlong)puVar1 + 0xe) = CONCAT22(uStack_44,uStack_46);
  *(uint *)((longlong)puVar1 + 0x12) = CONCAT22(uStack_40,uStack_42);
  *(uint *)((longlong)puVar1 + 0x16) = CONCAT22(uStack_3c,uStack_3e);
  *(undefined2 *)((longlong)puVar1 + 0x1a) = uStack_3a;
  *(char *)((longlong)puVar1 + 0x1c) = cVar2;
  *(undefined4 *)(puVar1 + 4) = uVar5;
  *(undefined1 *)((longlong)puVar1 + 0x24) = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bfb16 FUN_1476bfb16 body=984 status=ok
// SIG undefined FUN_1476bfb16(void)

undefined8 FUN_1476bfb16(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  char cVar3;
  uint uVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  int iVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  longlong local_b0;
  char local_9c;
  ulonglong local_90;
  ulonglong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = param_4;
  local_e0 = param_3;
  plVar6 = (longlong *)FUN_1456c5f90();
  if ((longlong)(int)plVar6[1] != 0) {
    puVar1 = param_2 + 1;
    lVar17 = (longlong)(int)plVar6[1] << 5;
    puVar13 = (ulonglong *)(*plVar6 + 0x10);
    do {
      if (puVar13[-2] == 0) {
        uVar18 = 0;
LAB_1476bfbdb:
        uVar9 = 0;
        uVar12 = 0;
      }
      else {
        puVar2 = puVar13 + -2;
        uVar7 = FUN_145957834();
        cVar5 = FUN_144a7ca96(puVar2,uVar7);
        uVar18 = 0;
        if (cVar5 != '\0') {
          uVar18 = *puVar2;
        }
        if (*puVar2 == 0) goto LAB_1476bfbdb;
        uVar7 = FUN_1459e46a0();
        cVar5 = FUN_144a7ca96(puVar2,uVar7);
        uVar9 = *puVar2;
        uVar12 = 0;
        if (cVar5 != '\0') {
          uVar12 = uVar9;
        }
      }
      if ((uVar18 != 0 || uVar12 != 0) &&
         (cVar5 = FUN_14758438e(param_1 + -0x110,*(undefined4 *)(uVar9 + 0xb8)), cVar5 == '\0')) {
        cVar5 = (char)*param_2;
        if (((cVar5 == '\x02') || ((char)*puVar1 == '\x02')) ||
           ((*(int *)((longlong)param_2 + 4) <= *(int *)((longlong)param_2 + 0xc) &&
            ((*(int *)((longlong)param_2 + 4) != *(int *)((longlong)param_2 + 0xc) ||
             ((char)*puVar1 != '\0' && cVar5 != '\0')))))) {
          puVar2 = puVar13 + -1;
          cVar3 = (char)*puVar2;
          if (((cVar3 == '\x02') || ((char)*puVar13 == '\x02')) ||
             ((*(int *)((longlong)puVar13 + -4) <= *(int *)((longlong)puVar13 + 4) &&
              ((*(int *)((longlong)puVar13 + -4) != *(int *)((longlong)puVar13 + 4) ||
               ((char)*puVar13 != '\0' && cVar3 != '\0')))))) {
            puVar15 = puVar13;
            if (((char)*puVar1 != '\x02') && (puVar15 = puVar1, (char)*puVar13 != '\x02')) {
              if (((*(int *)((longlong)puVar13 + 4) <= *(int *)((longlong)param_2 + 0xc)) &&
                  (puVar15 = puVar13,
                  *(int *)((longlong)param_2 + 0xc) <= *(int *)((longlong)puVar13 + 4))) &&
                 ((char)*puVar1 == '\0')) {
                puVar15 = puVar1;
              }
            }
            puVar16 = puVar2;
            if ((cVar5 != '\x02') && (puVar16 = param_2, cVar3 != '\x02')) {
              if ((*(int *)((longlong)param_2 + 4) <= *(int *)((longlong)puVar13 + -4)) &&
                 ((puVar16 = puVar2,
                  *(int *)((longlong)puVar13 + -4) <= *(int *)((longlong)param_2 + 4) &&
                  (cVar5 == '\0')))) {
                puVar16 = param_2;
              }
            }
            local_90 = *puVar16;
            local_88 = *puVar15;
            if (((char)local_90 != '\x02') && ((char)local_88 != '\x02')) {
              iVar14 = (int)(local_90 >> 0x20);
              iVar11 = (int)(local_88 >> 0x20);
              if ((iVar11 < iVar14) ||
                 ((iVar14 == iVar11 && (((char)local_90 == '\0' || ((char)local_88 == '\0'))))))
              goto LAB_1476bfbf7;
            }
            FUN_1475376e2(&local_d8,local_e0);
            local_9c = *(char *)((longlong)puVar13 + 0xc);
            if (puVar13[-2] != 0) {
              lVar8 = FUN_147571e62(param_1 + -0x110,puVar13[-2],1);
              if (lVar8 == 0) {
                local_d8 = 0;
                uStack_d0 = 0;
                uStack_c8 = 0;
                uStack_b8 = 0;
                if (iStack_b4 < 0) {
                  FUN_1446f8c06(&local_c0,0);
                }
                if ((undefined2 *)CONCAT44(uStack_bc,local_c0) != (undefined2 *)0x0) {
                  *(undefined2 *)CONCAT44(uStack_bc,local_c0) = 0;
                }
              }
              else {
                FUN_1400bbfae(&local_80,lVar8);
                uStack_d0 = CONCAT44(uStack_7c,local_80);
                uStack_c8 = CONCAT44(uStack_74,uStack_78);
                if (CONCAT44(uStack_bc,local_c0) != 0) {
                  FUN_1400020a8();
                }
                local_c0 = local_70;
                uStack_bc = uStack_6c;
                uStack_b8 = uStack_68;
                iStack_b4 = iStack_64;
                cVar5 = (*(code *)PTR_FUN_14c758760)();
                if (cVar5 != '\0') {
                  uVar4 = *(uint *)(lVar8 + 0xc);
                  if ((int)uVar4 < DAT_14c9647dc) {
                    lVar10 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
                  }
                  else {
                    lVar10 = 0;
                  }
                  if ((*(uint *)(lVar10 + 8) & 0x8400000) != 0) {
                    local_d8 = 0;
                    goto LAB_1476bfd5d;
                  }
                }
                FUN_14485c47a(&local_d8,lVar8);
              }
            }
LAB_1476bfd5d:
            if (uVar18 == 0) {
              if (uVar12 != 0) {
                FUN_1475c67f4(uVar12,&local_90,&local_d8,local_e8);
              }
            }
            else {
              FUN_1475ce654(uVar18,&local_90,&local_d8,local_e8);
            }
            if (local_b0 != 0) {
              FUN_1400020a8();
            }
            if (CONCAT44(uStack_bc,local_c0) != 0) {
              FUN_1400020a8();
            }
          }
        }
      }
LAB_1476bfbf7:
      puVar13 = puVar13 + 4;
      lVar17 = lVar17 + -0x20;
    } while (lVar17 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bfef4 FUN_1476bfef4 body=75 status=ok
// SIG undefined FUN_1476bfef4(void)

bool FUN_1476bfef4(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476bff28;
    }
  }
  lVar2 = 0;
LAB_1476bff28:
  lVar1 = FUN_145b34986();
  return lVar2 == lVar1;
}



// FUNCTION 1476bff40 FUN_1476bff40 body=63 status=ok
// SIG undefined FUN_1476bff40(void)

longlong FUN_1476bff40(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_1476bff7f();
  lVar1 = *(longlong *)(param_1 + 0x128);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  *(longlong *)(lVar2 + 0x150) = lVar1;
  return lVar2;
}



// FUNCTION 1476bff7f FUN_1476bff7f body=174 status=ok
// SIG undefined FUN_1476bff7f(void)

undefined8 FUN_1476bff7f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b34986();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1476c0032 FUN_1476c0032 body=309 status=ok
// SIG undefined FUN_1476c0032(void)

undefined8 * FUN_1476c0032(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  undefined1 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1475b638c(local_98,param_3,param_1 + -0xf8);
  *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 3;
  *(undefined1 *)(param_2 + 1) = local_90;
  *(undefined4 *)(param_2 + 3) = local_80;
  param_2[2] = local_88;
  param_2[4] = local_78;
  local_78 = 0;
  *(undefined4 *)(param_2 + 5) = (undefined4)local_70;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_70._4_4_;
  local_70 = 0;
  param_2[6] = local_68;
  local_68 = 0;
  *(undefined4 *)(param_2 + 7) = (undefined4)local_60;
  *(undefined4 *)((longlong)param_2 + 0x3c) = local_60._4_4_;
  local_60 = 0;
  param_2[8] = local_58;
  local_58 = 0;
  *(undefined4 *)(param_2 + 9) = (undefined4)local_50;
  *(undefined4 *)((longlong)param_2 + 0x4c) = local_50._4_4_;
  local_50 = 0;
  param_2[10] = local_48;
  local_48 = 0;
  *(undefined4 *)(param_2 + 0xb) = (undefined4)local_40;
  *(undefined4 *)((longlong)param_2 + 0x5c) = local_40._4_4_;
  local_40 = 0;
  param_2[0xc] = local_38;
  local_38 = 0;
  *(undefined4 *)(param_2 + 0xd) = (undefined4)local_30;
  *(undefined4 *)((longlong)param_2 + 0x6c) = local_30._4_4_;
  local_30 = 0;
  param_2[0xe] = local_28;
  local_28 = 0;
  *(undefined4 *)(param_2 + 0xf) = (undefined4)local_20;
  *(undefined4 *)((longlong)param_2 + 0x7c) = local_20._4_4_;
  local_20 = 0;
  *param_2 = &PTR_FUN_14a4c7f50;
  FUN_1475b1abc(local_98);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c0168 FUN_1476c0168 body=75 status=ok
// SIG undefined FUN_1476c0168(void)

bool FUN_1476c0168(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476c019c;
    }
  }
  lVar2 = 0;
LAB_1476c019c:
  lVar1 = FUN_145957834();
  return lVar2 == lVar1;
}



// FUNCTION 1476c01b4 FUN_1476c01b4 body=40 status=ok
// SIG undefined FUN_1476c01b4(void)

void FUN_1476c01b4(undefined8 param_1)

{
  FUN_1476bee88(param_1,0,8,0,0,0);
  return;
}



// FUNCTION 1476c0236 FUN_1476c0236 body=131 status=ok
// SIG undefined FUN_1476c0236(void)

void FUN_1476c0236(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0x100),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
    return;
  }
  return;
}



// FUNCTION 1476c02ba FUN_1476c02ba body=106 status=ok
// SIG undefined FUN_1476c02ba(void)

void FUN_1476c02ba(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0x100);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c0326 FUN_1476c0326 body=95 status=ok
// SIG undefined FUN_1476c0326(void)

void FUN_1476c0326(longlong param_1,uint param_2)

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



// FUNCTION 1476c039e FUN_1476c039e body=122 status=ok
// SIG undefined FUN_1476c039e(void)

longlong FUN_1476c039e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_168 [32];
  undefined **local_148 [4];
  undefined1 local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1475b6744(local_148,param_3);
  *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfe;
  FUN_1476c3e8c(param_2,local_148);
  local_148[0] = &PTR_FUN_14a4c7f00;
  FUN_140e127fe(local_128);
  if ((local_18 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c0454 FUN_1476c0454 body=131 status=ok
// SIG undefined FUN_1476c0454(void)

void FUN_1476c0454(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0x100),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
    return;
  }
  return;
}



// FUNCTION 1476c04d8 FUN_1476c04d8 body=106 status=ok
// SIG undefined FUN_1476c04d8(void)

void FUN_1476c04d8(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0x100);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c0544 FUN_1476c0544 body=95 status=ok
// SIG undefined FUN_1476c0544(void)

void FUN_1476c0544(longlong param_1,uint param_2)

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



// FUNCTION 1476c05b0 FUN_1476c05b0 body=264 status=ok
// SIG undefined FUN_1476c05b0(void)

void FUN_1476c05b0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_1[0x20];
  local_38 = (undefined4)param_1[0x21];
  lVar2 = FUN_14756ff54(&local_40,param_2,0xffffffff);
  if (lVar2 != 0) goto LAB_1476c05f5;
  lVar2 = (**(code **)(*param_1 + 800))(param_1);
  if (lVar2 == 0) {
LAB_1476c064c:
    bVar4 = 0;
    lVar2 = 0;
  }
  else {
    lVar3 = FUN_145b34a70();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1476c064c;
    bVar4 = 1;
    if (DAT_14c950c29 == 1) {
      FUN_14689c22e(lVar2);
    }
  }
  iVar1 = (int)param_1[0x21];
  *(uint *)(param_1 + 0x21) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x10c) < iVar1 + 1U) {
    FUN_14759143a(param_1 + 0x20,iVar1);
  }
  *(longlong *)(param_1[0x20] + (longlong)iVar1 * 8) = lVar2;
  if ((bVar4 & DAT_14c950c29) == 1) {
    FUN_14689c22e(lVar2);
  }
LAB_1476c05f5:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c06ba FUN_1476c06ba body=75 status=ok
// SIG undefined FUN_1476c06ba(void)

bool FUN_1476c06ba(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476c06ee;
    }
  }
  lVar2 = 0;
LAB_1476c06ee:
  lVar1 = FUN_145b34a70();
  return lVar2 == lVar1;
}



// FUNCTION 1476c070b FUN_1476c070b body=174 status=ok
// SIG undefined FUN_1476c070b(void)

undefined8 FUN_1476c070b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b34a70();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1476c07c3 FUN_1476c07c3 body=174 status=ok
// SIG undefined FUN_1476c07c3(void)

undefined8 FUN_1476c07c3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b34b5a();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1476c0872 FUN_1476c0872 body=75 status=ok
// SIG undefined FUN_1476c0872(void)

bool FUN_1476c0872(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476c08a6;
    }
  }
  lVar2 = 0;
LAB_1476c08a6:
  lVar1 = FUN_145b34b5a();
  return lVar2 == lVar1;
}



// FUNCTION 1476c08be FUN_1476c08be body=11 status=ok
// SIG undefined FUN_1476c08be(void)

void FUN_1476c08be(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x128) = *param_2;
  *(undefined8 *)(param_1 + 0x130) = uVar1;
  return;
}



// FUNCTION 1476c08ce FUN_1476c08ce body=132 status=ok
// SIG undefined FUN_1476c08ce(void)

void FUN_1476c08ce(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar1 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14a4e9a38);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = plVar1;
  switchD_143c3d4dc::caseD_20(param_1);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c0954 FUN_1476c0954 body=60 status=ok
// SIG undefined FUN_1476c0954(void)

void FUN_1476c0954(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 0x124) != 0) {
    FUN_1475916a0(param_1 + 0x118,0);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  return;
}



// FUNCTION 1476c09c8 FUN_1476c09c8 body=159 status=ok
// SIG undefined FUN_1476c09c8(void)

void FUN_1476c09c8(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  iVar1 = (int)param_1[0x24];
  *(uint *)(param_1 + 0x24) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x124) < iVar1 + 1U) {
    FUN_14759143a(param_1 + 0x23,iVar1);
  }
  *(longlong *)(param_1[0x23] + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  if (1 < (int)param_1[0x24]) {
                    /* WARNING: Could not recover jumptable at 0x0001476c0a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2f8))(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1476c0a68 FUN_1476c0a68 body=172 status=ok
// SIG undefined FUN_1476c0a68(void)

void FUN_1476c0a68(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_28 = &local_30;
  FUN_1475914c0();
  if (*(longlong *)(param_1 + 0xf8) != param_2) goto LAB_1476c0ac4;
  if (*(int *)(param_1 + 0x120) < 1) {
LAB_1476c0b0a:
    lVar2 = 0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x118);
    lVar2 = *plVar1;
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) goto LAB_1476c0b0a;
      FUN_14689c22e();
      lVar2 = *plVar1;
    }
  }
  *(longlong *)(param_1 + 0xf8) = lVar2;
LAB_1476c0ac4:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c0b16 FUN_1476c0b16 body=234 status=ok
// SIG undefined FUN_1476c0b16(void)

void FUN_1476c0b16(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)(int)param_2;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x118) + lVar4 * 8);
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e(lVar3);
  }
  lVar1 = *(longlong *)(param_1 + 0xf8);
  iVar2 = *(int *)(param_1 + 0x120);
  if (~param_2 + iVar2 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x118) + lVar4 * 8),
            (void *)(*(longlong *)(param_1 + 0x118) + lVar4 * 8 + 8),
            (longlong)(int)(~param_2 + iVar2) << 3);
    iVar2 = *(int *)(param_1 + 0x120);
  }
  *(int *)(param_1 + 0x120) = iVar2 + -1;
  FUN_1475915fe((undefined8 *)(param_1 + 0x118));
  if (lVar1 == lVar3) {
    if (*(int *)(param_1 + 0x120) < 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = **(longlong **)(param_1 + 0x118);
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar3);
      }
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar3);
      }
    }
    *(longlong *)(param_1 + 0xf8) = lVar3;
  }
  return;
}



// FUNCTION 1476c0c0c FUN_1476c0c0c body=48 status=ok
// SIG undefined FUN_1476c0c0c(void)

void FUN_1476c0c0c(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  *(longlong *)(param_1 + 0xf8) = param_2;
  return;
}



// FUNCTION 1476c0c44 FUN_1476c0c44 body=905 status=ok
// SIG undefined FUN_1476c0c44(void)

void FUN_1476c0c44(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined1 auStack_118 [32];
  longlong local_f8;
  void *local_f0;
  int local_e8;
  undefined4 local_e4;
  longlong local_d8;
  longlong local_c8 [3];
  longlong local_b0 [2];
  longlong local_a0;
  int local_98;
  undefined1 local_90 [56];
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar1 = 0;
  if (param_1 != 0) {
    uVar5 = FUN_1459e3e54();
    plVar6 = (longlong *)FUN_144718840(param_1,uVar5);
    if (plVar6 != (longlong *)0x0) {
      iVar1 = 0;
      lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,0);
      if (lVar7 != 0) {
        iVar1 = FUN_1475331a8(lVar7);
        local_f8 = param_1;
        FUN_1475332f4(lVar7,param_2,param_3,param_4);
      }
    }
  }
  uVar5 = FUN_14757509a(param_1);
  iVar2 = FUN_147526486(uVar5);
  if (iVar1 < iVar2) {
    uVar3 = FUN_14755452a(param_4,param_1,0);
    uVar4 = FUN_1475545d8(param_4,param_3);
    FUN_147554828(param_4,param_2,uVar3,uVar4);
  }
  uVar5 = FUN_140bc7f26();
  lVar7 = FUN_144a78ede(param_1,uVar5);
  uVar5 = FUN_14073751e();
  lVar8 = FUN_144a78ede(param_1,uVar5);
  if ((lVar7 != 0) && (lVar8 != 0)) {
    local_58 = (void *)0x0;
    uStack_50 = 0;
    FUN_1400021e4(lVar7 + 0x108,&local_f0);
    FUN_1403de9f2(&local_f0,&local_58,&DAT_149e0635c,1);
    if (local_f0 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_147029d3e(local_90,&local_58);
    local_e8 = (int)uStack_50 + -1;
    local_f0 = local_58;
    FUN_1476c0fce(&local_a0);
    if (1 < (longlong)(int)uStack_50) {
      lVar7 = (longlong)(int)uStack_50 * 0x10;
      if (*(int *)((longlong)local_58 + lVar7 + -0x18) == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = *(undefined2 **)((longlong)local_58 + lVar7 + -0x20);
      }
      iVar1 = FUN_144a8a8b6(puVar9,"PostProcessSettings");
      if (iVar1 == 0) {
        local_f0 = (void *)0x0;
        local_e8 = *(int *)((longlong)local_58 + (longlong)(int)uStack_50 * 0x10 + -8);
        lVar7 = (longlong)local_e8;
        _Src = *(void **)((longlong)local_58 + (longlong)(int)uStack_50 * 0x10 + -0x10);
        if (lVar7 == 0) {
          local_e4 = 0;
        }
        else {
          FUN_1446dd670(&local_f0,local_e8,0);
          memcpy(local_f0,_Src,lVar7 * 2);
        }
        FUN_140056680(local_b0,L"bOverride_");
        FUN_140e63652(&local_f0,0,local_b0);
        if (local_b0[0] != 0) {
          FUN_1400020a8();
        }
        if (1 < local_98) {
          thunk_FUN_14047a987(&local_a0,L".Preview",1);
        }
        iVar1 = local_e8 + -1;
        if (local_e8 == 0) {
          iVar1 = 0;
        }
        FUN_1400020e8(&local_a0,local_f0,iVar1);
        if (local_f0 != (void *)0x0) {
          FUN_1400020a8();
        }
        FUN_1475376e2(&local_f0,param_3);
        iVar1 = local_98 + -1;
        if (local_98 == 0) {
          iVar1 = 0;
        }
        FUN_1402980a2(local_c8,local_a0,iVar1);
        uVar3 = FUN_14755452a(param_4,param_1,1);
        uVar4 = FUN_1475545d8(param_4,&local_f0);
        FUN_147554828(param_4,param_2,uVar3,uVar4);
        if (local_c8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    FUN_141318128(local_90);
    FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c0fce FUN_1476c0fce body=125 status=ok
// SIG undefined FUN_1476c0fce(void)

undefined8 * FUN_1476c0fce(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    iVar4 = 1;
    lVar6 = 0;
    do {
      if ((char)iVar4 == '\0') {
        FUN_1400020e8(param_1,&DAT_149e0635c,1);
      }
      iVar1 = *(int *)(lVar2 + 8 + lVar6);
      iVar4 = 0;
      iVar5 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar5 = iVar4;
      }
      FUN_1400020e8(param_1,*(undefined8 *)(lVar2 + lVar6),iVar5);
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  return param_1;
}



// FUNCTION 1476c104c FUN_1476c104c body=75 status=ok
// SIG undefined FUN_1476c104c(void)

bool FUN_1476c104c(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476c1080;
    }
  }
  lVar2 = 0;
LAB_1476c1080:
  lVar1 = FUN_145b3373e();
  return lVar2 == lVar1;
}



// FUNCTION 1476c109d FUN_1476c109d body=174 status=ok
// SIG undefined FUN_1476c109d(void)

undefined8 FUN_1476c109d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b3373e();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1476c114c FUN_1476c114c body=131 status=ok
// SIG undefined FUN_1476c114c(void)

void FUN_1476c114c(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x120);
  *(uint *)(param_1 + 0x120) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x124) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0x118),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
    return;
  }
  return;
}



// FUNCTION 1476c123e FUN_1476c123e body=106 status=ok
// SIG undefined FUN_1476c123e(void)

void FUN_1476c123e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0x118);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c12aa FUN_1476c12aa body=95 status=ok
// SIG undefined FUN_1476c12aa(void)

void FUN_1476c12aa(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x120);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x118) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0x118) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x120);
  }
  *(int *)(param_1 + 0x120) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0x118);
  return;
}



// FUNCTION 1476c1324 FUN_1476c1324 body=7 status=ok
// SIG undefined FUN_1476c1324(void)

undefined1 FUN_1476c1324(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x191);
}



// FUNCTION 1476c132c FUN_1476c132c body=151 status=ok
// SIG undefined FUN_1476c132c(void)

void FUN_1476c132c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1476c13c4(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c13c4 FUN_1476c13c4 body=128 status=ok
// SIG undefined FUN_1476c13c4(void)

void FUN_1476c13c4(longlong param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *(undefined1 *)(param_1 + 0x191) = param_2;
  iVar1 = *(int *)(param_1 + 0x100);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xf8);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (lVar3 != 0) {
        lVar4 = FUN_140f157e0();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          *(undefined1 *)(lVar3 + 0x24a) = *(undefined1 *)(param_1 + 0x191);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  *(undefined1 *)(param_1 + 0x128) = 1;
  return;
}



// FUNCTION 1476c1468 FUN_1476c1468 body=363 status=ok
// SIG undefined FUN_1476c1468(void)

longlong * FUN_1476c1468(longlong *param_1,undefined4 param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 800))();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_140f157e0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) goto LAB_1476c14b2;
  }
  plVar1 = (longlong *)0x0;
LAB_1476c14b2:
  uVar3 = FUN_14073751e();
  lVar2 = FUN_144a78ede(param_1,uVar3);
  uVar3 = *(undefined8 *)(lVar2 + 0x118);
  fVar5 = (float)(**(code **)(*param_3 + 0x2b0))(param_3);
  dVar9 = ((double)(int)uVar3 * (double)fVar5) / (double)(int)((ulonglong)uVar3 >> 0x20);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar9;
  auVar8 = roundpd(auVar8,auVar8,1);
  dVar7 = auVar8._0_8_;
  dVar9 = dVar9 - dVar7;
  if (2147483647.0 <= dVar7) {
    dVar7 = 2147483647.0;
  }
  if (dVar7 <= -2147483648.0) {
    dVar7 = -2147483648.0;
  }
  iVar4 = (int)dVar9;
  fVar6 = (float)dVar9 - (float)iVar4;
  fVar5 = fVar6;
  if (0.99999994 <= fVar6) {
    fVar5 = 0.99999994;
  }
  fVar5 = (float)(~-(uint)(0.0 < fVar6) & (uint)fVar6 | (uint)fVar5 & -(uint)(0.0 < fVar6)) + 0.5 +
          -0.5;
  if (0.99999994 <= fVar5) {
    fVar5 = 0.99999994;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  (**(code **)(*plVar1 + 0x308))
            (plVar1,param_1 + 0x1f,param_2,(int)(fVar5 + 0.5) + (int)dVar7 + iVar4 + 1,param_4);
  if ((param_3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_3);
  }
  plVar1[0x20] = (longlong)param_3;
  (**(code **)(*param_1 + 0x318))(param_1,plVar1);
  return plVar1;
}



// FUNCTION 1476c15d8 FUN_1476c15d8 body=75 status=ok
// SIG undefined FUN_1476c15d8(void)

bool FUN_1476c15d8(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476c160c;
    }
  }
  lVar2 = 0;
LAB_1476c160c:
  lVar1 = FUN_140f157e0();
  return lVar2 == lVar1;
}



// FUNCTION 1476c1629 FUN_1476c1629 body=174 status=ok
// SIG undefined FUN_1476c1629(void)

undefined8 FUN_1476c1629(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_140f157e0();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1476c1732 FUN_1476c1732 body=189 status=ok
// SIG undefined FUN_1476c1732(void)

void FUN_1476c1732(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x100);
  *(uint *)(param_1 + 0x100) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    FUN_14689c22e(param_2);
  }
  lVar2 = FUN_140f157e0();
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
      == lVar2 + 0x30)) {
    *(undefined1 *)(param_2 + 0x24a) = *(undefined1 *)(param_1 + 0x191);
    FUN_14073a9be(param_1);
    return;
  }
  return;
}



// FUNCTION 1476c17f0 FUN_1476c17f0 body=26 status=ok
// SIG undefined FUN_1476c17f0(void)

void FUN_1476c17f0(longlong param_1)

{
  FUN_147583cf6();
  *(undefined1 *)(param_1 + 0x128) = 1;
  return;
}



// FUNCTION 1476c180a FUN_1476c180a body=111 status=ok
// SIG undefined FUN_1476c180a(void)

void FUN_1476c180a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0xf8);
  FUN_14073a9be(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c187a FUN_1476c187a body=103 status=ok
// SIG undefined FUN_1476c187a(void)

void FUN_1476c187a(longlong param_1,uint param_2)

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
  FUN_14073a9be(param_1);
  return;
}



// FUNCTION 1476c18ee FUN_1476c18ee body=147 status=ok
// SIG undefined FUN_1476c18ee(void)

undefined8 FUN_1476c18ee(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 local_19;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x108) == '\0') {
    local_18 = *(undefined8 *)(param_1 + 0xf8);
    local_10 = *(undefined4 *)(param_1 + 0x100);
    FUN_147544376(&local_18);
  }
  else {
    local_28 = &local_19;
    local_30 = &LAB_14332d0f2;
    local_40 = *(undefined8 *)(param_1 + 0xf8);
    local_38 = *(undefined4 *)(param_1 + 0x100);
    FUN_1475443d0(&local_40);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c1982 FUN_1476c1982 body=11 status=ok
// SIG undefined FUN_1476c1982(void)

undefined8 * FUN_1476c1982(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1476c1992 FUN_1476c1992 body=75 status=ok
// SIG undefined FUN_1476c1992(void)

bool FUN_1476c1992(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476c19c6;
    }
  }
  lVar2 = 0;
LAB_1476c19c6:
  lVar1 = FUN_145b34c44();
  return lVar2 == lVar1;
}



// FUNCTION 1476c19e3 FUN_1476c19e3 body=174 status=ok
// SIG undefined FUN_1476c19e3(void)

undefined8 FUN_1476c19e3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b34c44();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1476c1a96 FUN_1476c1a96 body=131 status=ok
// SIG undefined FUN_1476c1a96(void)

void FUN_1476c1a96(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x120);
  *(uint *)(param_1 + 0x120) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x124) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0x118),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
    return;
  }
  return;
}



// FUNCTION 1476c1b1a FUN_1476c1b1a body=75 status=ok
// SIG undefined FUN_1476c1b1a(void)

bool FUN_1476c1b1a(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476c1b4e;
    }
  }
  lVar2 = 0;
LAB_1476c1b4e:
  lVar1 = FUN_145b34d2e();
  return lVar2 == lVar1;
}



// FUNCTION 1476c1b6b FUN_1476c1b6b body=174 status=ok
// SIG undefined FUN_1476c1b6b(void)

undefined8 FUN_1476c1b6b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b34d2e();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1476c1c88 FUN_1476c1c88 body=106 status=ok
// SIG undefined FUN_1476c1c88(void)

void FUN_1476c1c88(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0x118);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c1cf4 FUN_1476c1cf4 body=95 status=ok
// SIG undefined FUN_1476c1cf4(void)

void FUN_1476c1cf4(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x120);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x118) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0x118) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x120);
  }
  *(int *)(param_1 + 0x120) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0x118);
  return;
}



// FUNCTION 1476c1d58 FUN_1476c1d58 body=75 status=ok
// SIG undefined FUN_1476c1d58(void)

bool FUN_1476c1d58(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476c1d8c;
    }
  }
  lVar2 = 0;
LAB_1476c1d8c:
  lVar1 = FUN_145b33f78();
  return lVar2 == lVar1;
}



// FUNCTION 1476c1da4 FUN_1476c1da4 body=40 status=ok
// SIG undefined FUN_1476c1da4(void)

void FUN_1476c1da4(undefined8 param_1)

{
  FUN_1476a2910(param_1,0,8,0,0,0);
  return;
}



// FUNCTION 1476c1dd4 FUN_1476c1dd4 body=75 status=ok
// SIG undefined FUN_1476c1dd4(void)

bool FUN_1476c1dd4(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476c1e08;
    }
  }
  lVar2 = 0;
LAB_1476c1e08:
  lVar1 = FUN_145b34e18();
  return lVar2 == lVar1;
}



// FUNCTION 1476c1e20 FUN_1476c1e20 body=72 status=ok
// SIG undefined FUN_1476c1e20(void)

longlong FUN_1476c1e20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1476c1e68(param_1,0,8,0,0,0);
  *(undefined4 *)(lVar1 + 0x540) = *(undefined4 *)(param_1 + 0x128);
  FUN_14135c1a6(lVar1);
  return lVar1;
}



// FUNCTION 1476c1e68 FUN_1476c1e68 body=217 status=ok
// SIG undefined FUN_1476c1e68(void)

undefined8
FUN_1476c1e68(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145b34e18();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c1f42 FUN_1476c1f42 body=75 status=ok
// SIG undefined FUN_1476c1f42(void)

bool FUN_1476c1f42(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476c1f76;
    }
  }
  lVar2 = 0;
LAB_1476c1f76:
  lVar1 = FUN_145b34f02();
  return lVar2 == lVar1;
}



// FUNCTION 1476c1f8e FUN_1476c1f8e body=47 status=ok
// SIG undefined FUN_1476c1f8e(void)

longlong FUN_1476c1f8e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1476c1fbd();
  *(undefined4 *)(lVar1 + 0x560) = *(undefined4 *)(param_1 + 0x128);
  FUN_1461c2626(lVar1);
  return lVar1;
}



// FUNCTION 1476c1fbd FUN_1476c1fbd body=174 status=ok
// SIG undefined FUN_1476c1fbd(void)

undefined8 FUN_1476c1fbd(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b34f02();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1476c207c FUN_1476c207c body=174 status=ok
// SIG undefined FUN_1476c207c(void)

undefined8 FUN_1476c207c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b34fec();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1476c212c FUN_1476c212c body=75 status=ok
// SIG undefined FUN_1476c212c(void)

bool FUN_1476c212c(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476c2160;
    }
  }
  lVar2 = 0;
LAB_1476c2160:
  lVar1 = FUN_145b34fec();
  return lVar2 == lVar1;
}



// FUNCTION 1476c21c2 FUN_1476c21c2 body=27 status=ok
// SIG undefined FUN_1476c21c2(void)

void FUN_1476c21c2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x350))();
  return;
}



// FUNCTION 1476c229e FUN_1476c229e body=90 status=ok
// SIG undefined FUN_1476c229e(void)

undefined8 * FUN_1476c229e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x108);
  _Src = *(void **)(param_1 + 0x100);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_14574f05a(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 << 3);
  }
  return param_2;
}



// FUNCTION 1476c2320 FUN_1476c2320 body=49 status=ok
// SIG undefined FUN_1476c2320(void)

undefined8 * FUN_1476c2320(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4ebd90;
  if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476c2352 FUN_1476c2352 body=78 status=ok
// SIG undefined FUN_1476c2352(void)

undefined8 FUN_1476c2352(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476c240c();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c23a2 FUN_1476c23a2 body=82 status=ok
// SIG undefined FUN_1476c23a2(void)

void FUN_1476c23a2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476c2530(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c240c FUN_1476c240c body=291 status=ok
// SIG undefined FUN_1476c240c(void)

undefined2 * FUN_1476c240c(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined1 local_68 [8];
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_1476c2530(local_60,param_1 + 8);
  cVar1 = *(char *)(param_1 + 0x20);
  local_50 = 0;
  local_48 = 0x200000000;
  FUN_1432d436e(local_68,param_3);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1 * '\x02' + '\x01') & 0xffffffff,
                param_4,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  if (local_80 == 0) {
    local_80 = 0;
  }
  else {
    FUN_1476c2574(param_1 + 8,local_80,local_78);
  }
  local_88 = local_78;
  local_84 = 1;
  local_90 = local_80;
  FUN_14163869e(local_60,&local_90,local_68);
  *param_2 = local_70;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c2530 FUN_1476c2530 body=67 status=ok
// SIG undefined FUN_1476c2530(void)

void FUN_1476c2530(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[8]);
  if (*(char *)(param_2 + 10) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[9]);
    return;
  }
  return;
}



// FUNCTION 1476c2574 FUN_1476c2574 body=151 status=ok
// SIG undefined FUN_1476c2574(void)

void FUN_1476c2574(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_1476c25a7;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_1476c25a7:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  *(undefined8 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
       *(undefined8 *)(param_1 + 2);
  if ((char)param_1[6] == '\x01') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476c25fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1476c267a FUN_1476c267a body=92 status=ok
// SIG undefined FUN_1476c267a(void)

uint FUN_1476c267a(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_28);
  uVar1 = *param_2;
  iVar2 = FUN_144a788f7();
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (uint)*(byte *)((longlong)param_2 + 0xc) ^
           iVar2 + (int)((ulonglong)uVar1 >> 0x20) ^ *(uint *)(param_2 + 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c273e FUN_1476c273e body=49 status=ok
// SIG undefined FUN_1476c273e(void)

undefined8 * FUN_1476c273e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4ec020;
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476c2770 FUN_1476c2770 body=78 status=ok
// SIG undefined FUN_1476c2770(void)

undefined8 FUN_1476c2770(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476c2816();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c27c0 FUN_1476c27c0 body=63 status=ok
// SIG undefined FUN_1476c27c0(void)

void FUN_1476c27c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  if (*(char *)(param_1 + 0x22) == '\x01') {
    FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x24) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 1476c2816 FUN_1476c2816 body=292 status=ok
// SIG undefined FUN_1476c2816(void)

undefined2 * FUN_1476c2816(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined2 local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  if (*(char *)(param_1 + 0x22) == '\x01') {
    FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 0x20));
  }
  cVar1 = *(char *)(param_1 + 0x24);
  local_48 = 0;
  local_40 = 0x200000000;
  FUN_1432d436e(local_60,param_3);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1 * '\x02' + '\x01') & 0xffffffff,
                param_4,local_58);
  FUN_140560464(param_3,&local_78,param_4);
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    FUN_140b5f6dc(param_1 + 8,local_78,local_70);
  }
  local_80 = local_70;
  local_7c = 1;
  local_88 = local_78;
  FUN_14163869e(local_58,&local_88,local_60);
  *param_2 = local_68;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c293c FUN_1476c293c body=79 status=ok
// SIG undefined FUN_1476c293c(void)

undefined8 * FUN_1476c293c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4ec040;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xb) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476c298c FUN_1476c298c body=78 status=ok
// SIG undefined FUN_1476c298c(void)

undefined8 FUN_1476c298c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476c29dc();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c29dc FUN_1476c29dc body=309 status=ok
// SIG undefined FUN_1476c29dc(void)

undefined2 * FUN_1476c29dc(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

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
  FUN_145f96a40(local_60,param_1 + 8);
  cVar1 = *(char *)(param_1 + 0x60);
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
    FUN_145f98edc(&local_78,param_1 + 8);
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



// FUNCTION 1476c2b12 FUN_1476c2b12 body=59 status=ok
// SIG undefined FUN_1476c2b12(void)

undefined8 * FUN_1476c2b12(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4ec060;
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xb) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476c2b4e FUN_1476c2b4e body=78 status=ok
// SIG undefined FUN_1476c2b4e(void)

undefined8 FUN_1476c2b4e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476c2c20();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c2b9e FUN_1476c2b9e body=57 status=ok
// SIG undefined FUN_1476c2b9e(void)

void FUN_1476c2b9e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x10));
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 1476c2bd8 FUN_1476c2bd8 body=71 status=ok
// SIG undefined FUN_1476c2bd8(void)

void FUN_1476c2bd8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    lVar2 = param_3[1];
    FUN_140e4f2da(param_1 + 8,lVar1,(int)lVar2);
    FUN_140e3860a(param_1 + 0x10,lVar1,(int)lVar2);
    return;
  }
  return;
}



// FUNCTION 1476c2c20 FUN_1476c2c20 body=310 status=ok
// SIG undefined FUN_1476c2c20(void)

undefined2 * FUN_1476c2c20(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 unaff_RBP;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined2 local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 0x10));
  cVar1 = *(char *)(param_1 + 0x28);
  local_48 = 0;
  local_40 = 0x200000000;
  FUN_1432d436e(local_60,param_3);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1 * '\x02' + '\x01') & 0xffffffff,
                param_4,local_58);
  FUN_140560464(param_3,&local_78,param_4);
  uVar3 = local_70;
  lVar2 = local_78;
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    FUN_140e4f2da(param_1 + 8,local_78,local_70);
    FUN_140e3860a(param_1 + 0x10,lVar2,uVar3);
  }
  local_80 = local_70;
  local_7c = 1;
  local_88 = local_78;
  FUN_14163869e(local_58,&local_88,local_60);
  *param_2 = local_68;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c2d58 FUN_1476c2d58 body=49 status=ok
// SIG undefined FUN_1476c2d58(void)

undefined8 * FUN_1476c2d58(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4ec080;
  if (*(char *)((longlong)param_1 + 0xb) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476c2d8a FUN_1476c2d8a body=78 status=ok
// SIG undefined FUN_1476c2d8a(void)

undefined8 FUN_1476c2d8a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476c2e18();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c2dda FUN_1476c2dda body=40 status=ok
// SIG undefined FUN_1476c2dda(void)

void FUN_1476c2dda(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 1476c2e18 FUN_1476c2e18 body=274 status=ok
// SIG undefined FUN_1476c2e18(void)

undefined2 * FUN_1476c2e18(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined2 local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  cVar1 = *(char *)(param_1 + 0xc);
  local_48 = 0;
  local_40 = 0x200000000;
  FUN_1432d436e(local_60,param_3);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1 * '\x02' + '\x01') & 0xffffffff,
                param_4,local_58);
  FUN_140560464(param_3,&local_78,param_4);
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    FUN_140e4f2da(param_1 + 8,local_78,local_70);
  }
  local_80 = local_70;
  local_7c = 1;
  local_88 = local_78;
  FUN_14163869e(local_58,&local_88,local_60);
  *param_2 = local_68;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c2fd0 FUN_1476c2fd0 body=39 status=ok
// SIG undefined FUN_1476c2fd0(void)

undefined8 FUN_1476c2fd0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1476c3020 FUN_1476c3020 body=59 status=ok
// SIG undefined FUN_1476c3020(void)

undefined8 FUN_1476c3020(longlong *param_1)

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



// FUNCTION 1476c30ce FUN_1476c30ce body=178 status=ok
// SIG undefined FUN_1476c30ce(void)

void FUN_1476c30ce(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x158,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a463c30;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *param_1 = &PTR_FUN_14a481250;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14a4abba0;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = 0;
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1476c3180(param_1 + 7,param_2 + 0x38);
  return;
}



// FUNCTION 1476c3180 FUN_1476c3180 body=252 status=ok
// SIG undefined FUN_1476c3180(void)

undefined8 * FUN_1476c3180(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_1475affea();
  *param_1 = &PTR_FUN_14a4abbf0;
  param_1[10] = 0;
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined8 *)(param_2 + 0x58) = 0;
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar3;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar2;
  param_1[0x11] = 0;
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined8 *)(param_2 + 0x90) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  return param_1;
}



// FUNCTION 1476c327c FUN_1476c327c body=107 status=ok
// SIG undefined FUN_1476c327c(void)

void FUN_1476c327c(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x140,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  FUN_147557926(param_1,param_2);
  *param_1 = &PTR_FUN_14a4c7eb0;
  FUN_14764a36a(param_1 + 7,param_2 + 0x38);
  return;
}



// FUNCTION 1476c32e8 FUN_1476c32e8 body=136 status=ok
// SIG undefined FUN_1476c32e8(void)

void FUN_1476c32e8(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0xcc)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      iVar4 = (int)(uVar3 / 0xc);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_1476c3372(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1476c3372 FUN_1476c3372 body=149 status=ok
// SIG undefined FUN_1476c3372(void)

void FUN_1476c3372(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,0xc);
  return;
}



// FUNCTION 1476c3407 FUN_1476c3407 body=874 status=ok
// SIG undefined FUN_1476c3407(void)

void FUN_1476c3407(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  longlong *plVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  float fVar18;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = param_1 + (ulonglong)param_2 * 0xc + -0xc;
    local_358 = param_1;
    fVar18 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar18 + fVar18);
    plVar12 = &local_358;
    do {
      piVar4 = (int *)*plVar12;
      piVar13 = (int *)plVar12[1];
      iVar15 = (int)plVar12[2];
      iVar5 = (int)((ulonglong)((longlong)piVar13 - (longlong)piVar4) >> 2);
      piVar16 = piVar13;
      piVar10 = piVar4;
      if (iVar15 != 0) {
LAB_1476c34d6:
        uVar7 = iVar5 * -0x55555555 + 1;
        if (8 < (int)uVar7) {
          uVar8 = (ulonglong)(uVar7 >> 1);
          iVar5 = piVar4[uVar8 * 3 + 2];
          uVar1 = *(undefined8 *)(piVar4 + uVar8 * 3);
          piVar4[uVar8 * 3 + 2] = piVar4[2];
          *(undefined8 *)(piVar4 + uVar8 * 3) = *(undefined8 *)piVar4;
          piVar4[2] = iVar5;
          *(undefined8 *)piVar4 = uVar1;
          piVar9 = piVar13 + 3;
          piVar6 = piVar4;
          do {
            piVar3 = piVar6 + 3;
            piVar14 = piVar6 + 3;
            do {
              piVar6 = piVar14;
              piVar11 = piVar3;
              if (piVar13 < piVar6) break;
              bVar2 = *piVar4 < *piVar6;
              if (*piVar4 == *piVar6) {
                bVar2 = piVar6[1] < piVar4[1];
              }
              piVar3 = piVar11 + 3;
              piVar14 = piVar6 + 3;
            } while (!bVar2);
            piVar3 = piVar9 + -6;
            do {
              piVar14 = piVar9;
              piVar17 = piVar3;
              piVar9 = piVar14 + -3;
              if (piVar9 <= piVar4) break;
              bVar2 = *piVar9 < *piVar4;
              if (*piVar9 == *piVar4) {
                bVar2 = piVar4[1] < piVar14[-2];
              }
              piVar3 = piVar17 + -3;
            } while (!bVar2);
            if (piVar9 < piVar6) goto LAB_1476c35e9;
            iVar5 = piVar6[2];
            uVar1 = *(undefined8 *)piVar6;
            piVar6[2] = piVar14[-1];
            *(undefined8 *)piVar6 = *(undefined8 *)piVar9;
            piVar14[-1] = iVar5;
            *(undefined8 *)piVar9 = uVar1;
          } while( true );
        }
        if (piVar4 < piVar13) {
          do {
            piVar16 = piVar4;
            if (piVar4 + 3 <= piVar13) {
              iVar15 = *piVar4;
              piVar10 = piVar4 + 3;
              do {
                iVar5 = *piVar10;
                bVar2 = iVar15 < iVar5;
                if (iVar15 == iVar5) {
                  bVar2 = piVar10[1] < piVar16[1];
                }
                piVar9 = piVar10;
                if (!bVar2) {
                  piVar9 = piVar16;
                  iVar5 = iVar15;
                }
                iVar15 = iVar5;
                piVar16 = piVar9;
                piVar10 = piVar10 + 3;
              } while (piVar10 <= piVar13);
            }
            local_50 = piVar16[2];
            local_58 = *(undefined8 *)piVar16;
            piVar16[2] = piVar13[2];
            *(undefined8 *)piVar16 = *(undefined8 *)piVar13;
            piVar13[2] = local_50;
            *(undefined8 *)piVar13 = local_58;
            piVar13 = piVar13 + -3;
          } while (piVar4 < piVar13);
        }
        goto LAB_1476c3750;
      }
LAB_1476c3765:
      FUN_1476c3772(piVar4);
LAB_1476c3750:
      plVar12 = plVar12 + -3;
    } while (&local_358 <= plVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1476c35e9:
  local_50 = piVar4[2];
  local_58 = *(undefined8 *)piVar4;
  piVar4[2] = piVar14[-1];
  *(undefined8 *)piVar4 = *(undefined8 *)piVar9;
  piVar14[-1] = local_50;
  *(undefined8 *)piVar9 = local_58;
  iVar15 = iVar15 + -1;
  piVar14 = piVar14 + -6;
  if ((longlong)piVar17 - (longlong)piVar10 < (longlong)piVar16 - (longlong)piVar11) {
    if (piVar6 < piVar13) {
      *plVar12 = (longlong)piVar6;
      plVar12[1] = (longlong)piVar13;
      *(int *)(plVar12 + 2) = iVar15;
      plVar12 = plVar12 + 3;
    }
    piVar11 = piVar4;
    if (piVar9 <= piVar4 + 3) goto LAB_1476c3750;
  }
  else {
    if (piVar4 + 3 < piVar9) {
      *plVar12 = (longlong)piVar4;
      plVar12[1] = (longlong)piVar14;
      *(int *)(plVar12 + 2) = iVar15;
      plVar12 = plVar12 + 3;
    }
    piVar4 = piVar6;
    piVar14 = piVar13;
    piVar17 = piVar13;
    if (piVar13 <= piVar6) goto LAB_1476c3750;
  }
  iVar5 = (int)((ulonglong)((longlong)piVar17 - (longlong)piVar11) >> 2);
  piVar13 = piVar14;
  piVar16 = piVar17;
  piVar10 = piVar11;
  if (iVar15 == 0) goto LAB_1476c3765;
  goto LAB_1476c34d6;
}



// FUNCTION 1476c3772 FUN_1476c3772 body=671 status=ok
// SIG undefined FUN_1476c3772(void)

void FUN_1476c3772(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar13 = iVar8;
joined_r0x0001476c37a8:
    do {
      iVar11 = iVar8 * 2 + 1;
      if (iVar11 < (int)param_2) {
        iVar12 = iVar8 * 2 + 2;
        if (iVar12 < (int)param_2) {
          iVar5 = *(int *)((longlong)param_1 + (longlong)iVar12 * 0xc);
          iVar4 = *(int *)((longlong)param_1 + (longlong)iVar11 * 0xc);
          bVar15 = iVar5 < iVar4;
          if (iVar5 == iVar4) {
            bVar15 = *(int *)((longlong)param_1 + (longlong)iVar11 * 0xc + 4) <
                     *(int *)((longlong)param_1 + (longlong)iVar12 * 0xc + 4);
          }
          if (!bVar15) {
            iVar11 = iVar12;
          }
        }
        lVar10 = (longlong)iVar8;
        lVar14 = (longlong)iVar11;
        iVar12 = *(int *)((longlong)param_1 + lVar10 * 0xc);
        iVar8 = *(int *)((longlong)param_1 + lVar14 * 0xc);
        bVar15 = iVar12 < iVar8;
        if (iVar12 == iVar8) {
          bVar15 = *(int *)((longlong)param_1 + lVar14 * 0xc + 4) <
                   *(int *)((longlong)param_1 + lVar10 * 0xc + 4);
        }
        if (bVar15) {
          puVar2 = (undefined8 *)((longlong)param_1 + lVar10 * 0xc);
          puVar3 = (undefined8 *)((longlong)param_1 + lVar14 * 0xc);
          local_28 = *(undefined4 *)(puVar2 + 1);
          local_30 = *puVar2;
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar3 + 1) = local_28;
          *puVar3 = local_30;
          iVar8 = iVar11;
          goto joined_r0x0001476c37a8;
        }
      }
      bVar15 = iVar13 != 0;
      iVar8 = iVar13 + -1;
      iVar13 = iVar8;
    } while (bVar15);
    if (1 < (int)param_2) {
      uVar9 = (ulonglong)param_2 - 1;
      local_28 = *(undefined4 *)(param_1 + 1);
      local_30 = *param_1;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)param_1 + uVar9 * 0xc + 8);
      *param_1 = *(undefined8 *)((longlong)param_1 + uVar9 * 0xc);
      *(undefined4 *)((longlong)param_1 + uVar9 * 0xc + 8) = local_28;
      *(undefined8 *)((longlong)param_1 + uVar9 * 0xc) = local_30;
      if (param_2 != 2) {
        do {
          iVar8 = 0;
          iVar11 = 1;
          iVar13 = 0;
          do {
            lVar10 = (longlong)(iVar8 + 2);
            iVar12 = iVar11;
            if (lVar10 < (longlong)uVar9) {
              iVar5 = *(int *)((longlong)param_1 + lVar10 * 0xc);
              iVar4 = *(int *)((longlong)param_1 + (longlong)iVar11 * 0xc);
              bVar15 = iVar5 < iVar4;
              if (iVar5 == iVar4) {
                bVar15 = *(int *)((longlong)param_1 + (longlong)iVar11 * 0xc + 4) <
                         *(int *)((longlong)param_1 + lVar10 * 0xc + 4);
              }
              if (!bVar15) {
                iVar12 = iVar8 + 2;
              }
            }
            lVar10 = (longlong)iVar13;
            lVar14 = (longlong)iVar12;
            iVar13 = *(int *)((longlong)param_1 + lVar10 * 0xc);
            iVar8 = *(int *)((longlong)param_1 + lVar14 * 0xc);
            bVar15 = iVar13 < iVar8;
            if (iVar13 == iVar8) {
              bVar15 = *(int *)((longlong)param_1 + lVar14 * 0xc + 4) <
                       *(int *)((longlong)param_1 + lVar10 * 0xc + 4);
            }
            if (!bVar15) break;
            puVar2 = (undefined8 *)((longlong)param_1 + lVar10 * 0xc);
            puVar3 = (undefined8 *)((longlong)param_1 + lVar14 * 0xc);
            uVar6 = *(undefined4 *)(puVar2 + 1);
            uVar7 = *puVar2;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
            *puVar2 = *puVar3;
            *(undefined4 *)(puVar3 + 1) = uVar6;
            *puVar3 = uVar7;
            iVar8 = iVar12 * 2;
            iVar11 = iVar12 * 2 + 1;
            iVar13 = iVar12;
          } while ((longlong)iVar11 < (longlong)uVar9);
          uVar1 = uVar9 - 1;
          local_28 = *(undefined4 *)(param_1 + 1);
          local_30 = *param_1;
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)param_1 + uVar1 * 0xc + 8);
          *param_1 = *(undefined8 *)((longlong)param_1 + uVar1 * 0xc);
          *(undefined4 *)((longlong)param_1 + uVar1 * 0xc + 8) = local_28;
          *(undefined8 *)((longlong)param_1 + uVar1 * 0xc) = local_30;
          bVar15 = 2 < uVar9;
          uVar9 = uVar1;
        } while (bVar15);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476c3a1a FUN_1476c3a1a body=127 status=ok
// SIG undefined FUN_1476c3a1a(void)

undefined8 FUN_1476c3a1a(undefined8 *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14754a3b2(&local_28,*param_1,param_2);
  if (local_20 == 0) {
    uVar2 = 1;
  }
  else {
    if ((longlong)*(int *)(local_20 + 0x1c) == -1) {
      uVar1 = 0;
    }
    else {
      uVar1 = (ulonglong)
              *(uint *)(*(longlong *)(local_28 + 0x40) + 4 +
                       (longlong)*(int *)(local_20 + 0x1c) * 0xc);
    }
    uVar2 = CONCAT71((int7)(uVar1 >> 8),(int)uVar1 <= local_18 || local_18 < 0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c3a9a FUN_1476c3a9a body=29 status=ok
// SIG undefined FUN_1476c3a9a(void)

undefined8 FUN_1476c3a9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476c3ab8 FUN_1476c3ab8 body=78 status=ok
// SIG undefined FUN_1476c3ab8(void)

undefined8 FUN_1476c3ab8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476c3b4a();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c3b08 FUN_1476c3b08 body=63 status=ok
// SIG undefined FUN_1476c3b08(void)

void FUN_1476c3b08(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  if (*(char *)(param_1 + 0xc) == '\x01') {
    FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 10));
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 1476c3b4a FUN_1476c3b4a body=272 status=ok
// SIG undefined FUN_1476c3b4a(void)

undefined2 * FUN_1476c3b4a(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [16];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  if (*(char *)(param_1 + 0xc) == '\x01') {
    FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 10));
  }
  cVar1 = *(char *)(param_1 + 0xe);
  local_50 = 0;
  local_48 = 0x200000000;
  FUN_1432d436e(local_68,param_3);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1 * '\x02' + '\x01') & 0xffffffff,
                param_4,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  local_90 = local_80;
  local_88 = local_78;
  local_84 = 1;
  FUN_14163869e(local_60,&local_90,local_68);
  *param_2 = local_70;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c3c5c FUN_1476c3c5c body=143 status=ok
// SIG undefined FUN_1476c3c5c(void)

void FUN_1476c3c5c(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x120,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a463c30;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *param_1 = &PTR_FUN_14a481250;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14a4abc80;
  FUN_1476c3cec(param_1 + 4,param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x118);
  return;
}



// FUNCTION 1476c3cec FUN_1476c3cec body=192 status=ok
// SIG undefined FUN_1476c3cec(void)

undefined8 * FUN_1476c3cec(undefined8 *param_1,longlong param_2)

{
  FUN_1475affea();
  *param_1 = &PTR_FUN_14a4abcd0;
  param_1[10] = 0;
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined8 *)(param_2 + 0x58) = 0;
  param_1[0xc] = 0;
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined8 *)(param_2 + 0x68) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
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
  return param_1;
}



// FUNCTION 1476c3dac FUN_1476c3dac body=122 status=ok
// SIG undefined FUN_1476c3dac(void)

undefined2 * FUN_1476c3dac(undefined2 *param_1,undefined2 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = param_2;
  lVar1 = *param_3;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e(lVar1);
  }
  local_28 = 0;
  FUN_14485c47a(&local_28,lVar1);
  *(undefined8 *)(param_1 + 2) = local_28;
  *(undefined1 *)(param_1 + 6) = 1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c3e28 FUN_1476c3e28 body=49 status=ok
// SIG undefined FUN_1476c3e28(void)

undefined8 * FUN_1476c3e28(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4ebd90;
  if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476c3e5a FUN_1476c3e5a body=49 status=ok
// SIG undefined FUN_1476c3e5a(void)

undefined8 * FUN_1476c3e5a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4ec020;
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476c3e8c FUN_1476c3e8c body=145 status=ok
// SIG undefined FUN_1476c3e8c(void)

void FUN_1476c3e8c(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x130,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a463c30;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *param_1 = &PTR_FUN_14a481250;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14a4c7f00;
  FUN_1476c3f1e(param_1 + 4,param_2 + 0x20);
  param_1[4] = &PTR_FUN_14a4c7fa0;
  return;
}



// FUNCTION 1476c3f1e FUN_1476c3f1e body=248 status=ok
// SIG undefined FUN_1476c3f1e(void)

undefined8 * FUN_1476c3f1e(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_1475affea();
  *param_1 = &PTR_FUN_14a46bfe0;
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 0x50);
  param_1[0xb] = 0;
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_2 + 0x68);
  param_1[0xe] = 0;
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined8 *)(param_2 + 0x78) = 0;
  lVar1 = *(longlong *)(param_2 + 0x80);
  param_1[0x10] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  return param_1;
}



// FUNCTION 1476c4016 FUN_1476c4016 body=49 status=ok
// SIG undefined FUN_1476c4016(void)

undefined8 * FUN_1476c4016(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4ec080;
  if (*(char *)((longlong)param_1 + 0xb) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476c4048 FUN_1476c4048 body=59 status=ok
// SIG undefined FUN_1476c4048(void)

undefined8 * FUN_1476c4048(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4ec060;
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xb) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476c4084 FUN_1476c4084 body=89 status=ok
// SIG undefined FUN_1476c4084(void)

undefined8 * FUN_1476c4084(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4ec040;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xb) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476c4102 FUN_1476c4102 body=57 status=ok
// SIG undefined FUN_1476c4102(void)

void FUN_1476c4102(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0001476c4138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,0,*(code **)(*plVar1 + 0x248));
  return;
}



// FUNCTION 1476c4144 FUN_1476c4144 body=113 status=ok
// SIG undefined FUN_1476c4144(void)

undefined8 FUN_1476c4144(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_30[0] = param_2;
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c41c8 FUN_1476c41c8 body=512 status=ok
// SIG undefined FUN_1476c41c8(void)

undefined8 FUN_1476c41c8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_28 = 0x100000000;
  FUN_140f937a0(&local_48,param_1 + 0x108);
  FUN_140f937a0(&local_48,param_1 + 0x218);
  FUN_140f937a0(&local_48,param_1 + 0x328);
  FUN_140f937a0(&local_48,param_1 + 0x438);
  FUN_140f937a0(&local_48,param_1 + 0x548);
  FUN_140f937a0(&local_48,param_1 + 0x658);
  FUN_140f937a0(&local_48,param_1 + 0x768);
  local_50 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_50[1] = (longlong)&DAT_100000001;
  *local_50 = (longlong)&PTR_FUN_14a492060;
  local_58 = local_50 + 2;
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 2;
  if (local_30 == 0) {
    local_50[9] = local_38;
    *(undefined4 *)(local_50 + 7) = local_48;
    *(undefined4 *)((longlong)local_50 + 0x3c) = uStack_44;
    *(undefined4 *)(local_50 + 8) = uStack_40;
    *(undefined4 *)((longlong)local_50 + 0x44) = uStack_3c;
  }
  local_50[10] = local_30;
  local_30 = 0;
  *(undefined4 *)(local_50 + 0xb) = (undefined4)local_28;
  *(undefined4 *)((longlong)local_50 + 0x5c) = local_28._4_4_;
  local_28 = 0x100000000;
  FUN_140aec6f8(&local_58);
  plVar1 = local_50;
  if (local_50 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_58;
    plVar4 = *(longlong **)(param_1 + 0xe8);
    if (plVar4 == (longlong *)0x0) goto LAB_1476c4377;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_1476c4341:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1476c4377;
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
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe0) = local_58;
    plVar4 = *(longlong **)(param_1 + 0xe8);
    if (local_50 != plVar4) {
      *(longlong **)(param_1 + 0xe8) = local_50;
      if (plVar4 == (longlong *)0x0) goto LAB_1476c4377;
      goto LAB_1476c4341;
    }
    LOCK();
    plVar4 = local_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1476c4377;
    (**(code **)*local_50)(local_50);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1476c4377:
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_1404dbc0c(&local_48);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c43ca FUN_1476c43ca body=1498 status=ok
// SIG undefined FUN_1476c43ca(void)

void FUN_1476c43ca(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 auStack_5f8 [32];
  undefined1 local_5d8;
  undefined2 local_5ca;
  longlong local_5c8;
  int local_5c0;
  uint local_5bc;
  longlong local_5b8;
  undefined8 local_5b0;
  longlong local_5a8;
  longlong local_5a0;
  longlong local_598;
  longlong local_590;
  longlong local_588;
  char local_57f [7];
  undefined **local_578;
  undefined2 local_570;
  undefined4 local_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 local_55c;
  undefined1 local_558;
  int local_554;
  int local_550;
  int local_54c;
  int local_548;
  int local_544;
  undefined1 local_540;
  uint local_538;
  longlong local_530;
  undefined1 local_528;
  uint local_520;
  longlong local_518;
  undefined1 local_510;
  undefined1 local_508;
  undefined1 local_500 [144];
  undefined1 local_470 [168];
  undefined1 local_3c8 [192];
  undefined1 local_308 [216];
  undefined1 local_230 [8];
  undefined2 local_228;
  undefined4 local_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 local_214;
  char local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  char local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  char local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  char local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  char local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  char local_198;
  undefined4 local_190;
  undefined8 local_188;
  char local_180;
  undefined4 local_178;
  undefined8 local_170;
  char local_168;
  undefined4 local_160;
  undefined8 local_158;
  char local_150;
  undefined1 local_148;
  undefined **local_140;
  undefined2 local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  char local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  char local_108;
  undefined4 local_100;
  undefined8 local_f8;
  char local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  char local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  char local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  char local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  char local_90;
  undefined4 local_88;
  undefined8 local_80;
  char local_78;
  undefined4 local_70;
  undefined8 local_68;
  char local_60;
  undefined2 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_5f8;
  uVar1 = *(uint *)(param_1 + 8);
  local_5b0 = param_4;
  lVar3 = FUN_14009d2a0();
  local_5b8 = FUN_145f643ae();
  FUN_145b38a6c();
  lVar4 = FUN_144a78ede();
  if ((uVar1 & 1) == 0) {
    local_57f[0] = '\0';
  }
  else {
    local_57f[0] = '\x01';
    if (*(int *)(param_1 + 0x70) == 0) {
      local_57f[0] = *(char *)(param_1 + 0x8c);
    }
  }
  if ((uVar1 & 2) == 0) {
    local_57f[1] = 0;
  }
  else {
    local_57f[1] = 1;
    if (*(int *)(param_1 + 0x180) == 0) {
      local_57f[1] = *(undefined1 *)(param_1 + 0x19c);
    }
  }
  if ((uVar1 & 4) == 0) {
    local_57f[2] = 0;
  }
  else {
    local_57f[2] = 1;
    if (*(int *)(param_1 + 0x290) == 0) {
      local_57f[2] = *(undefined1 *)(param_1 + 0x2ac);
    }
  }
  if ((uVar1 & 8) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
    if (*(int *)(param_1 + 0x3a0) == 0) {
      uVar6 = *(undefined1 *)(param_1 + 0x3bc);
    }
  }
  local_57f[3] = uVar6;
  if ((uVar1 & 0x10) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
    if (*(int *)(param_1 + 0x4b0) == 0) {
      uVar9 = *(undefined1 *)(param_1 + 0x4cc);
    }
  }
  local_57f[4] = uVar9;
  if ((uVar1 & 0x20) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
    if (*(int *)(param_1 + 0x5c0) == 0) {
      uVar7 = *(undefined1 *)(param_1 + 0x5dc);
    }
  }
  local_57f[5] = uVar7;
  if ((uVar1 & 0x40) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
    if (*(int *)(param_1 + 0x6d0) == 0) {
      uVar8 = *(undefined1 *)(param_1 + 0x6ec);
    }
  }
  local_57f[6] = uVar8;
  lVar5 = 0;
  do {
    if (local_57f[lVar5] == '\x01') {
      piVar2 = *(int **)(param_3 + 8);
      if (piVar2 == (int *)0x0) {
        local_550 = 0;
        local_54c = 0;
        local_5c0 = 0;
        local_544 = 0;
      }
      else {
        local_550 = *piVar2;
        local_54c = piVar2[1];
        local_5c0 = piVar2[2];
        local_544 = piVar2[3];
      }
      local_5ca = *(undefined2 *)(lVar3 + 0x62);
      local_5bc = (uint)*(ushort *)(lVar3 + 100);
      local_554 = (uint)(((local_54c != 0 || local_550 != 0) || local_5c0 != 0) || local_544 != 0) *
                  0x10000 + local_5bc;
      local_530 = param_1 + 0x10;
      local_538 = (uint)CONCAT12(local_57f[0],*(undefined2 *)(lVar3 + 0x7e));
      local_5c8 = param_1 + 0x120;
      local_558 = 1;
      local_56c = *(undefined4 *)(lVar4 + 0x100);
      uStack_568 = *(undefined4 *)(lVar4 + 0x104);
      uStack_564 = *(undefined4 *)(lVar4 + 0x108);
      uStack_560 = *(undefined4 *)(lVar4 + 0x10c);
      local_55c = *(undefined4 *)(lVar4 + 0x110);
      local_540 = 1;
      local_528 = 1;
      local_520 = (uint)CONCAT12(local_57f[1],*(undefined2 *)(lVar3 + 0x80));
      local_510 = 1;
      local_508 = 0;
      local_578 = &PTR_FUN_14a508030;
      local_588 = param_1 + 0x230;
      local_5d8 = local_57f[2];
      local_570 = local_5ca;
      local_548 = local_5c0;
      local_518 = local_5c8;
      FUN_1476c4aa8(&local_578,local_500,*(undefined2 *)(lVar3 + 0x82));
      local_590 = param_1 + 0x340;
      local_5d8 = uVar6;
      FUN_1476c4b38(local_500,local_470,*(undefined2 *)(lVar3 + 0x84));
      local_598 = param_1 + 0x450;
      local_5d8 = uVar9;
      FUN_1476c4bd4(local_470,local_3c8,*(undefined2 *)(lVar3 + 0x86));
      local_5a0 = param_1 + 0x560;
      local_5d8 = uVar7;
      FUN_1476c4c7e(local_3c8,local_308,*(undefined2 *)(lVar3 + 0x88));
      local_5a8 = param_1 + 0x670;
      local_5d8 = uVar8;
      FUN_1476c4d38(local_308,local_230,*(undefined2 *)(lVar3 + 0x8a));
      local_58 = *(undefined2 *)(local_5b8 + 0xc);
      local_138 = local_228;
      local_120 = local_210;
      if (local_210 == '\x01') {
        local_124 = local_214;
        local_134 = local_224;
        uStack_130 = uStack_220;
        uStack_12c = uStack_21c;
        uStack_128 = uStack_218;
      }
      local_11c = local_20c;
      local_108 = local_1f8;
      if (local_1f8 == '\x01') {
        local_118 = local_208;
        uStack_114 = uStack_204;
        uStack_110 = uStack_200;
        uStack_10c = uStack_1fc;
      }
      local_100 = local_1f0;
      local_f0 = local_1e0;
      if (local_1e0 == '\x01') {
        local_f8 = local_1e8;
      }
      local_e8 = local_1d8;
      local_d8 = local_1c8;
      if (local_1c8 == '\x01') {
        local_e0 = local_1d0;
      }
      local_d0 = local_1c0;
      local_c0 = local_1b0;
      if (local_1b0 == '\x01') {
        local_c8 = local_1b8;
      }
      local_b8 = local_1a8;
      local_a8 = local_198;
      if (local_198 == '\x01') {
        local_b0 = local_1a0;
      }
      local_a0 = local_190;
      local_90 = local_180;
      if (local_180 == '\x01') {
        local_98 = local_188;
      }
      local_88 = local_178;
      local_78 = local_168;
      if (local_168 == '\x01') {
        local_80 = local_170;
      }
      local_70 = local_160;
      local_60 = local_150;
      if (local_150 == '\x01') {
        local_68 = local_158;
      }
      local_50 = local_148;
      local_140 = &PTR_FUN_14a5080f0;
      FUN_1476c49a6(local_5b0);
      break;
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 7);
  if ((local_48 ^ (ulonglong)auStack_5f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c49a6 FUN_1476c49a6 body=257 status=ok
// SIG undefined FUN_1476c49a6(void)

void FUN_1476c49a6(longlong param_1)

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
  FUN_1476e0372(puVar4);
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



// FUNCTION 1476c4aa8 FUN_1476c4aa8 body=142 status=ok
// SIG undefined FUN_1476c4aa8(void)

undefined8 *
FUN_1476c4aa8(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 *local_40;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &local_30;
  local_2e = param_5;
  local_28 = *param_4;
  local_20 = 1;
  local_48 = param_1 + 0x58;
  uVar1 = *(undefined1 *)(param_1 + 0x70);
  local_30 = param_3;
  FUN_1476dfd9c(param_2 + 1,param_1 + 8,param_1 + 0x24,param_1 + 0x40);
  *(undefined1 *)(param_2 + 0x11) = uVar1;
  *param_2 = &PTR_FUN_14a508050;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c4b38 FUN_1476c4b38 body=154 status=ok
// SIG undefined FUN_1476c4b38(void)

undefined8 *
FUN_1476c4b38(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined2 *local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &local_30;
  local_2e = param_5;
  local_28 = *param_4;
  local_20 = 1;
  local_40 = param_1 + 0x70;
  local_48 = param_1 + 0x58;
  uVar1 = *(undefined1 *)(param_1 + 0x88);
  local_30 = param_3;
  FUN_1476dfea4(param_2 + 1,param_1 + 8,param_1 + 0x24,param_1 + 0x40);
  *(undefined1 *)(param_2 + 0x14) = uVar1;
  *param_2 = &PTR_FUN_14a508070;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c4bd4 FUN_1476c4bd4 body=168 status=ok
// SIG undefined FUN_1476c4bd4(void)

undefined8 *
FUN_1476c4bd4(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined2 *local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = &local_38;
  local_36 = param_5;
  local_30 = *param_4;
  local_28 = 1;
  local_48 = param_1 + 0x88;
  local_50 = param_1 + 0x70;
  local_58 = param_1 + 0x58;
  uVar1 = *(undefined1 *)(param_1 + 0xa0);
  local_38 = param_3;
  FUN_1476dff8c(param_2 + 1,param_1 + 8,param_1 + 0x24,param_1 + 0x40);
  *(undefined1 *)(param_2 + 0x17) = uVar1;
  *param_2 = &PTR_FUN_14a508090;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c4c7e FUN_1476c4c7e body=184 status=ok
// SIG undefined FUN_1476c4c7e(void)

undefined8 *
FUN_1476c4c7e(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined2 *local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = &local_40;
  local_3e = param_5;
  local_38 = *param_4;
  local_30 = 1;
  local_50 = param_1 + 0xa0;
  local_58 = param_1 + 0x88;
  local_60 = param_1 + 0x70;
  local_68 = param_1 + 0x58;
  uVar1 = *(undefined1 *)(param_1 + 0xb8);
  local_40 = param_3;
  FUN_1476e00ae(param_2 + 1,param_1 + 8,param_1 + 0x24,param_1 + 0x40);
  *(undefined1 *)(param_2 + 0x1a) = uVar1;
  *param_2 = &PTR_FUN_14a5080b0;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c4d38 FUN_1476c4d38 body=200 status=ok
// SIG undefined FUN_1476c4d38(void)

undefined8 *
FUN_1476c4d38(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined2 *local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = &local_48;
  local_46 = param_5;
  local_40 = *param_4;
  local_38 = 1;
  local_58 = param_1 + 0xb8;
  local_60 = param_1 + 0xa0;
  local_68 = param_1 + 0x88;
  local_70 = param_1 + 0x70;
  local_78 = param_1 + 0x58;
  uVar1 = *(undefined1 *)(param_1 + 0xd0);
  local_48 = param_3;
  FUN_1476e01fa(param_2 + 1,param_1 + 8,param_1 + 0x24,param_1 + 0x40);
  *(undefined1 *)(param_2 + 0x1d) = uVar1;
  *param_2 = &PTR_FUN_14a5080d0;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c4e02 FUN_1476c4e02 body=99 status=ok
// SIG undefined FUN_1476c4e02(void)

void FUN_1476c4e02(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a507430;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  if (*(char *)(param_1 + 0x13) == '\x01') {
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
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
  return;
}



// FUNCTION 1476c4e6a FUN_1476c4e6a body=75 status=ok
// SIG undefined FUN_1476c4e6a(void)

bool FUN_1476c4e6a(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476c4ea3;
    }
  }
  lVar2 = 0;
LAB_1476c4ea3:
  lVar1 = FUN_145b38982();
  return lVar2 == lVar1;
}



// FUNCTION 1476c4ebb FUN_1476c4ebb body=174 status=ok
// SIG undefined FUN_1476c4ebb(void)

undefined8 FUN_1476c4ebb(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b38982();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1476c4f78 FUN_1476c4f78 body=23 status=ok
// SIG undefined FUN_1476c4f78(void)

undefined1 FUN_1476c4f78(longlong param_1)

{
  FUN_1476c0c44(param_1 + -0xf8);
  return 1;
}



// FUNCTION 1476c4f90 FUN_1476c4f90 body=370 status=ok
// SIG undefined FUN_1476c4f90(void)

void FUN_1476c4f90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_e8 [32];
  undefined **local_c8;
  undefined2 local_c0;
  uint local_b8;
  longlong local_b0;
  undefined1 local_a8;
  uint local_a0;
  longlong local_98;
  undefined1 local_90;
  uint local_88;
  longlong local_80;
  undefined1 local_78;
  uint local_70;
  longlong local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = FUN_14009d2a0();
  puVar2 = (undefined2 *)FUN_145f643ae();
  local_a0 = 0x10000;
  local_b8 = 0x10000;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_b8 = (uint)*(byte *)(param_1 + 0x194) << 0x10;
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    local_a0 = (uint)*(byte *)(param_1 + 0x84) << 0x10;
  }
  local_70 = 0x10000;
  local_88 = 0x10000;
  if (*(int *)(param_1 + 0x288) == 0) {
    local_88 = (uint)*(byte *)(param_1 + 0x2a4) << 0x10;
  }
  local_c0 = *puVar2;
  if (*(int *)(param_1 + 0x398) == 0) {
    local_70 = (uint)*(byte *)(param_1 + 0x3b4) << 0x10;
  }
  local_68 = param_1 + 0x338;
  local_80 = param_1 + 0x228;
  local_88 = local_88 | *(ushort *)(lVar1 + 0x82);
  local_98 = param_1 + 8;
  local_a0 = local_a0 | *(ushort *)(lVar1 + 0x80);
  local_b0 = param_1 + 0x118;
  local_b8 = local_b8 | *(ushort *)(lVar1 + 0x7e);
  local_70 = *(ushort *)(lVar1 + 0x84) | local_70;
  local_a8 = 1;
  local_90 = 1;
  local_78 = 1;
  local_60 = 1;
  local_58 = 0;
  local_c8 = &PTR_FUN_14a4c7c80;
  local_50 = local_c0;
  FUN_1411538b8(&local_c8,param_1 + -0xf8,param_3,param_4);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c5108 FUN_1476c5108 body=75 status=ok
// SIG undefined FUN_1476c5108(void)

bool FUN_1476c5108(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476c5141;
    }
  }
  lVar2 = 0;
LAB_1476c5141:
  lVar1 = FUN_145b38c40();
  return lVar2 == lVar1;
}



// FUNCTION 1476c5159 FUN_1476c5159 body=174 status=ok
// SIG undefined FUN_1476c5159(void)

undefined8 FUN_1476c5159(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b38c40();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1476c5208 FUN_1476c5208 body=107 status=ok
// SIG undefined FUN_1476c5208(void)

double * FUN_1476c5208(double *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  
  if (*(longlong *)(param_2 + 0x80) == 0) {
    pfVar4 = (float *)(param_2 + 0x38);
    pfVar5 = (float *)(param_2 + 0x3c);
    pfVar7 = (float *)(param_2 + 0x40);
    pfVar6 = (float *)(param_2 + 0x44);
  }
  else {
    pfVar4 = (float *)FUN_140133f88(*(longlong *)(param_2 + 0x80) + 0x20);
    pfVar5 = pfVar4 + 1;
    pfVar7 = pfVar4 + 2;
    pfVar6 = pfVar4 + 3;
  }
  fVar1 = *pfVar7;
  fVar2 = *pfVar6;
  fVar3 = *pfVar4;
  param_1[1] = (double)*pfVar5;
  param_1[2] = (double)fVar1;
  param_1[3] = (double)fVar2;
  *param_1 = (double)fVar3;
  return param_1;
}



// FUNCTION 1476c5273 FUN_1476c5273 body=94 status=ok
// SIG undefined FUN_1476c5273(void)

void FUN_1476c5273(undefined8 param_1,double *param_2)

{
  undefined1 auStack_38 [32];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = (float)param_2[1];
  local_10 = (float)param_2[2];
  local_c = (float)param_2[3];
  local_18 = (float)*param_2;
  FUN_1476c52d2();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c52d2 FUN_1476c52d2 body=116 status=ok
// SIG undefined FUN_1476c52d2(void)

void FUN_1476c52d2(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_1476df0e4(lVar1,lVar1 + 0x20,&local_38,1);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c5348 FUN_1476c5348 body=74 status=ok
// SIG undefined FUN_1476c5348(void)

void FUN_1476c5348(longlong param_1)

{
  *(undefined ***)(param_1 + 0x60) = &PTR_FUN_14a5074c0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_14a5074b0;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1476c5396 FUN_1476c5396 body=212 status=ok
// SIG undefined FUN_1476c5396(void)

longlong FUN_1476c5396(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1476ca79a(&local_20);
  if (*param_1 == local_20) {
LAB_1476c53c3:
    if (*(longlong *)(param_1[1] + 8) != 0) {
      plVar4 = (longlong *)(param_1[1] + 8);
      uVar2 = FUN_1402d2740();
      cVar1 = FUN_144a7ca96(plVar4,uVar2);
      if (cVar1 != '\0') {
        lVar5 = *plVar4;
        goto LAB_1476c542f;
      }
    }
  }
  else {
    FUN_1476ca812(&local_28);
    if (*param_1 == local_28) {
      lVar5 = *(longlong *)(param_1[1] + 0x38);
      if (lVar5 != 0) {
        lVar3 = FUN_1402d2740();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) goto LAB_1476c542f;
      }
    }
    else {
      FUN_1476ca88a(&local_30);
      if (*param_1 == local_30) goto LAB_1476c53c3;
    }
  }
  lVar5 = 0;
LAB_1476c542f:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1476c546c FUN_1476c546c body=279 status=ok
// SIG undefined FUN_1476c546c(void)

void FUN_1476c546c(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1476ca79a(&local_30);
  if (*param_1 != local_30) {
    FUN_1476ca812(&local_38);
    if (*param_1 == local_38) {
      FUN_140648376(param_1[1],param_2);
      goto LAB_1476c54c0;
    }
    FUN_1476ca88a(&local_40);
    if (*param_1 != local_40) goto LAB_1476c54c0;
  }
  lVar3 = param_1[1];
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(lVar3 + 8) = param_2;
LAB_1476c54c0:
  FUN_140760c2c(param_3,&local_50);
  if (local_50 != 0) {
    FUN_140163244(local_50,5);
    (**(code **)(*param_3 + 0x2d8))(param_3);
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476c5584 FUN_1476c5584 body=328 status=ok
// SIG undefined FUN_1476c5584(void)

undefined8 FUN_1476c5584(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined8 local_150;
  undefined8 local_148;
  wchar_t *local_140;
  wchar_t *local_138;
  wchar_t *local_130;
  undefined1 local_128;
  wchar_t local_120 [128];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_140 = local_120;
  local_128 = 0;
  local_130 = (wchar_t *)&local_20;
  local_148 = *(undefined8 *)(param_2 + 0x18);
  local_138 = local_140;
  FUN_144aa13b0(&local_148,&local_140);
  if (local_130 <= local_138 + 9) {
    FUN_140213274(&local_140,9);
  }
  builtin_wcsncpy(local_138,L"_Animated",10);
  local_138 = local_138 + 9;
  FUN_1446f470e(&local_150,local_140,1);
  uVar1 = FUN_144a772c4();
  local_158 = 0;
  FUN_140af9fb2(&local_148,*param_1,uVar1,local_150);
  uVar1 = FUN_14090ceee(param_2,*param_1,local_148);
  if ((param_1[1] != 0) && (param_1[2] != 0)) {
    FUN_1476c546c(param_1 + 1,uVar1,*param_1);
  }
  FUN_144724f3c(&local_140);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c56ce FUN_1476c56ce body=578 status=ok
// SIG undefined FUN_1476c56ce(void)

void FUN_1476c56ce(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_14009d2a0();
  lVar5 = FUN_145f643ae();
  FUN_1476f1b20(*(longlong *)(param_1 + 0x28) + 0x430,&local_48,DAT_14cab6ab8);
  plVar2 = local_40;
  if (local_40 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = local_48;
    plVar6 = *(longlong **)(param_1 + 0x50);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x50) = 0;
LAB_1476c5893:
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x0001476c5840:
        if (iVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x48) = local_48;
    plVar6 = *(longlong **)(param_1 + 0x50);
    if (local_40 == plVar6) {
      LOCK();
      plVar6 = local_40 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar6 = plVar2;
        goto joined_r0x0001476c5840;
      }
    }
    else {
      *(longlong **)(param_1 + 0x50) = local_40;
      if (plVar6 != (longlong *)0x0) goto LAB_1476c5893;
    }
  }
  plVar2 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_1476f3228(*(longlong *)(param_1 + 0x28) + 0x430,&local_48,DAT_14cab6abc);
  plVar2 = local_40;
  if (local_40 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x58) = local_48;
    plVar6 = *(longlong **)(param_1 + 0x60);
    if (plVar6 == (longlong *)0x0) goto LAB_1476c57a6;
    *(undefined8 *)(param_1 + 0x60) = 0;
LAB_1476c58c7:
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_1476c57a6;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x58) = local_48;
    plVar6 = *(longlong **)(param_1 + 0x60);
    if (local_40 != plVar6) {
      *(longlong **)(param_1 + 0x60) = local_40;
      if (plVar6 == (longlong *)0x0) goto LAB_1476c57a6;
      goto LAB_1476c58c7;
    }
    LOCK();
    plVar6 = local_40 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_1476c57a6;
    (**(code **)*local_40)(local_40);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar6 = plVar2;
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_1476c57a6:
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
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_1476c5912(param_1 + 0x48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68,*(undefined8 *)(param_1 + 0x28),
                *(undefined2 *)(lVar4 + 0x4a),*(undefined2 *)(lVar5 + 0x1a));
}



// FUNCTION 1476c5912 FUN_1476c5912 body=630 status=ok
// SIG undefined FUN_1476c5912(void)

void FUN_1476c5912(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  longlong local_80;
  longlong local_78;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined2 *local_68;
  ulonglong *local_60;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  ulonglong local_48;
  
  uVar2 = (undefined2)param_4;
  uVar1 = (undefined2)param_3;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_6c = uVar2;
  local_6a = uVar1;
  lVar3 = FUN_14009d2a0();
  lVar4 = FUN_14038fb82();
  local_80 = param_2;
  uVar5 = FUN_1409ee0ec(param_2);
  FUN_1476f374e(uVar5,&local_68,param_3,param_4);
  *(undefined4 *)(param_1 + 0x20) = local_68._0_4_;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x84) < 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    FUN_1476644c4(param_1 + 0x78,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  local_60 = (ulonglong *)&local_4e;
  local_50 = *(undefined2 *)(lVar3 + 0xea);
  local_68 = &local_54;
  local_54 = uVar1;
  local_52 = uVar2;
  FUN_1447c44f6(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  local_78 = lVar3;
  if (*(int *)(param_1 + 0xe4) < 0) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
    FUN_1476644c4(param_1 + 0xd8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  local_60 = (ulonglong *)&local_50;
  local_68 = &local_54;
  local_54 = uVar1;
  local_52 = uVar2;
  FUN_1447c44f6(param_1 + 0x88,&local_68);
  local_54 = *(undefined2 *)(lVar4 + 0xea);
  local_52 = *(undefined2 *)(lVar4 + 0xf0);
  local_50 = *(undefined2 *)(lVar4 + 0xee);
  local_4e = *(undefined2 *)(lVar4 + 0xf4);
  local_4c = *(undefined2 *)(lVar4 + 0xf6);
  local_4a = *(undefined2 *)(lVar4 + 0xf8);
  local_60 = &local_48;
  local_68 = &local_54;
  FUN_1403b5126(param_1 + 0x88,&local_68,2);
  local_88 = &local_6c;
  FUN_1476f3900(local_80 + 0x640,&local_68,param_1,&local_6a);
  local_54 = *(undefined2 *)(lVar4 + 0xfa);
  local_60 = (ulonglong *)&local_4e;
  local_68 = &local_54;
  local_52 = uVar1;
  local_50 = uVar2;
  FUN_1447c44f6(param_1 + 0xe8,&local_68);
  local_54 = *(undefined2 *)(local_78 + 0x11c);
  local_60 = (ulonglong *)&local_52;
  local_68 = &local_54;
  FUN_1447c44f6(param_1 + 0x110,&local_68);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c5b98 FUN_1476c5b98 body=67 status=ok
// SIG undefined FUN_1476c5b98(void)

void FUN_1476c5b98(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140e3cd36(param_2);
  if (lVar1 != 0) {
    FUN_140e3cd9a(lVar1,*(undefined4 *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  FUN_140457ffc(param_2 + 0x640,param_1);
  return;
}



// FUNCTION 1476c5bdc FUN_1476c5bdc body=54 status=ok
// SIG undefined FUN_1476c5bdc(void)

void FUN_1476c5bdc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14009d2a0();
  lVar2 = FUN_145f643ae();
  FUN_1476c5c12(param_1 + 0x48,*(undefined8 *)(param_1 + 0x28),*(undefined2 *)(lVar1 + 0x4a),
                *(undefined2 *)(lVar2 + 0x1a));
  return;
}



// FUNCTION 1476c5c12 FUN_1476c5c12 body=786 status=ok
// SIG undefined FUN_1476c5c12(void)

void FUN_1476c5c12(longlong param_1,longlong param_2,undefined2 param_3,undefined2 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_208 [40];
  longlong local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined2 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  longlong local_1a8;
  undefined2 local_19e;
  undefined2 local_19c;
  undefined2 local_19a;
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined2 *local_178;
  undefined2 local_170;
  undefined2 local_16e;
  undefined2 local_16c;
  undefined1 local_167;
  undefined4 local_164;
  undefined1 local_160;
  undefined1 local_148 [40];
  longlong local_120;
  undefined **local_110;
  longlong local_108;
  undefined8 local_100;
  undefined2 local_f8;
  undefined2 local_f6;
  undefined1 local_d0 [40];
  longlong local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar5 = FUN_14009d2a0();
  lVar6 = FUN_14038fb82();
  lVar3 = *(longlong *)(param_2 + 0x5d8);
  plVar4 = *(longlong **)(param_2 + 0x5e0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (*(char *)(lVar3 + 0x7c) == '\x04') {
    local_16c = *(undefined2 *)(lVar5 + 0xea);
    local_167 = 0;
    local_164 = 0x6ff;
    local_160 = 0;
    local_1b0 = &local_180;
    local_180 = (undefined2 *)CONCAT62(local_180._2_6_,*(undefined2 *)(lVar5 + 0x11a));
    local_1a8 = (longlong)&local_180 + 2;
    local_170 = param_3;
    local_16e = param_4;
    FUN_1476f5764(&local_170,&local_110);
    local_19e = *(undefined2 *)(lVar5 + 0x130);
    local_190 = &local_19c;
    local_198 = &local_19e;
    FUN_1447c44f6(local_d0);
    local_1e0 = param_2 + 0x28;
    FUN_1476f57f8(&local_110);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_1403b8af8(&local_170,param_1 + 0x88);
    local_110 = (undefined **)&local_198;
    local_108 = (longlong)&local_198 + 2;
    local_198._0_2_ = *(undefined2 *)(lVar5 + 0x11a);
    FUN_1447c44f6(&local_170,&local_110);
    local_198 = (undefined2 *)CONCAT62(local_198._2_6_,*(undefined2 *)(lVar5 + 0x122));
    local_110 = (undefined **)&local_198;
    local_108 = (longlong)&local_198 + 2;
    FUN_1447c44f6(local_148,&local_110);
    local_110 = &PTR_FUN_14a5088e0;
    local_f8 = param_3;
    local_f6 = param_4;
    local_108 = FUN_14009d2a0();
    local_100 = FUN_14038fb82();
    lVar3 = local_1e0;
    FUN_140857d6a(local_1e0,&local_170,&local_110,1);
    local_198 = (undefined2 *)
                CONCAT26(*(undefined2 *)(lVar6 + 0xfa),
                         CONCAT24(param_4,CONCAT22(param_3,(undefined2)local_198)));
    local_190._0_2_ = (ushort)(byte)local_190;
    local_190 = (undefined2 *)CONCAT44(0x6ff,(undefined4)local_190);
    local_188 = 0;
    local_19a = *(undefined2 *)(lVar5 + 0x11a);
    local_1c0 = &local_19a;
    local_1b8 = &local_198;
    FUN_1476f5872(&local_198,&local_110);
    local_19e = *(undefined2 *)(lVar5 + 0x130);
    local_178 = &local_19a;
    local_19c = *(undefined2 *)(lVar5 + 0x11c);
    local_180 = &local_19e;
    FUN_1447c44f6(local_d0);
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_1d8 = param_2;
    FUN_1476f5906(&local_110,lVar3);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_120 != 0) {
      FUN_1400020a8();
    }
  }
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
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c5f26 FUN_1476c5f26 body=54 status=ok
// SIG undefined FUN_1476c5f26(void)

void FUN_1476c5f26(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14009d2a0();
  lVar2 = FUN_145f643ae();
  FUN_1476c5f5c(param_1 + 8,*(undefined8 *)(param_1 + -0x18),*(undefined2 *)(lVar1 + 0x4a),
                *(undefined2 *)(lVar2 + 0x1a));
  return;
}



// FUNCTION 1476c5f5c FUN_1476c5f5c body=429 status=ok
// SIG undefined FUN_1476c5f5c(void)

void FUN_1476c5f5c(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined2 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_e8 [32];
  undefined2 local_c8;
  undefined2 *local_c0;
  undefined1 *local_b8;
  undefined2 local_aa;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar1 = FUN_14050a5e0(param_2 + 0x28,param_1 + 5);
  if (cVar1 != '\0') {
    local_88 = 0x10000000000;
    local_60 = 0x10000000000;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    lVar2 = FUN_14009d2a0();
    local_aa = *(undefined2 *)(lVar2 + 0x11a);
    local_b8 = local_a8;
    local_c0 = &local_aa;
    FUN_1447c44f6(local_a8);
    FUN_14767d262(local_a8,param_1 + 5);
    local_c8 = param_4;
    FUN_1476f6232(*param_1,param_2,local_a8,param_3);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  cVar1 = FUN_14050a5e0(param_2 + 0x28,param_1 + 0x11);
  if (cVar1 != '\0') {
    local_88 = 0x10000000000;
    local_60 = 0x10000000000;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    lVar2 = FUN_14009d2a0();
    local_aa = *(undefined2 *)(lVar2 + 0x11a);
    local_b8 = local_a8;
    local_c0 = &local_aa;
    FUN_1447c44f6(local_a8);
    FUN_14767d262(local_a8,param_1 + 0x11);
    local_c8 = param_4;
    FUN_1476f6232(param_1[2],param_2,local_a8,param_3);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c610e FUN_1476c610e body=127 status=ok
// SIG undefined FUN_1476c610e(void)

longlong * FUN_1476c610e(undefined8 param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_38 = 0;
  plVar1 = (longlong *)FUN_1476bee88(param_1,0,8,0);
  (**(code **)(*plVar1 + 0x2c0))(plVar1,1);
  local_20 = 2;
  local_18 = 2;
  (**(code **)(*plVar1 + 0x2a0))(plVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c618e FUN_1476c618e body=75 status=ok
// SIG undefined FUN_1476c618e(void)

bool FUN_1476c618e(undefined8 param_1,longlong *param_2)

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
      goto LAB_1476c61c2;
    }
  }
  lVar2 = 0;
LAB_1476c61c2:
  lVar1 = FUN_145957834();
  return lVar2 == lVar1;
}



// FUNCTION 1476c61dc FUN_1476c61dc body=385 status=ok
// SIG undefined FUN_1476c61dc(void)

void FUN_1476c61dc(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 local_80;
  undefined **local_78;
  undefined2 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  char local_48;
  uint local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = FUN_14009d2a0();
  lVar4 = FUN_145f643ae();
  local_a8 = *(undefined8 *)(param_1 + 8);
  local_a0 = *(undefined4 *)(param_1 + 0x10);
  FUN_1476c6454(&local_98);
  local_58 = local_88;
  local_70 = *(undefined2 *)(lVar4 + 0x18);
  local_50 = (undefined4)local_80;
  local_4c = local_80._4_4_;
  if (local_88 == 0) {
    uVar1 = *(ushort *)(param_2 + 0xd9);
    uVar2 = *(ushort *)(lVar3 + 0x110);
    local_68 = local_98;
    uStack_64 = uStack_94;
    uStack_60 = uStack_90;
    uStack_5c = uStack_8c;
  }
  else {
    local_88 = 0;
    uVar1 = *(ushort *)(param_2 + 0xd9);
    uVar2 = *(ushort *)(lVar3 + 0x110);
  }
  local_48 = '\x01';
  local_80 = 0x200000000;
  local_40 = ((uint)uVar2 | (uVar1 & 0x100) << 8) ^ 0x10000;
  local_38 = 0;
  local_78 = &PTR_FUN_14a508900;
  FUN_1476c635e(param_5,&local_78);
  if (local_48 == '\x01') {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_48 = '\0';
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c635e FUN_1476c635e body=245 status=ok
// SIG undefined FUN_1476c635e(void)

void FUN_1476c635e(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 *puVar5;
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
  puVar5 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_1476f6d5a(puVar5);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar4 = param_1;
  }
  puVar1 = (undefined4 *)(lVar4 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  bVar3 = local_28;
  if ((local_28 & 1) != 0) {
    bVar3 = local_28 & 0xfe;
    *(byte *)(puVar1 + 0x10) = (*(byte *)(puVar1 + 0x10) & 0xfc | local_28 & 2) + 1;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
  }
  if ((bVar3 & 1) != 0) {
    if ((bVar3 & 2) == 0) {
      puVar5 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = bVar3 & 0xfe;
    (**(code **)*puVar5)(puVar5,0);
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



// FUNCTION 1476c6454 FUN_1476c6454 body=101 status=ok
// SIG undefined FUN_1476c6454(void)

void * FUN_1476c6454(void *param_1,undefined8 *param_2)

{
  uint uVar1;
  void *_Src;
  void *_Dst;
  
  uVar1 = *(uint *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  if (-1 < (int)uVar1) {
    *(uint *)((longlong)param_1 + 0x18) = uVar1;
    if (uVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 2;
    }
    else {
      FUN_140b1783e(param_1,uVar1,0);
      _Dst = *(void **)((longlong)param_1 + 0x10);
      if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
        _Dst = param_1;
      }
      memcpy(_Dst,_Src,(ulonglong)uVar1 * 8);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4((ulonglong)uVar1);
}



// FUNCTION 1476c64ba FUN_1476c64ba body=892 status=ok
// SIG undefined FUN_1476c64ba(void)

undefined8 FUN_1476c64ba(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  longlong lVar17;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  longlong local_b0;
  char local_9c;
  ulonglong local_90;
  ulonglong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  param_1 = param_1 + -0x110;
  plVar8 = (longlong *)FUN_1456c5f90(param_1);
  if ((longlong)(int)plVar8[1] != 0) {
    puVar1 = param_2 + 1;
    lVar17 = (longlong)(int)plVar8[1] << 5;
    puVar16 = (ulonglong *)(*plVar8 + 0x10);
    do {
      if (puVar16[-2] != 0) {
        uVar9 = FUN_145957834();
        bVar6 = FUN_144a7ca96(puVar16 + -2,uVar9);
        uVar5 = puVar16[-2];
        if (((uVar5 != 0 & bVar6) == 1) &&
           (cVar7 = FUN_14758438e(param_1,*(undefined4 *)(uVar5 + 0xb8)), cVar7 == '\0')) {
          cVar7 = (char)*param_2;
          if (((cVar7 == '\x02') || ((char)*puVar1 == '\x02')) ||
             ((*(int *)((longlong)param_2 + 4) <= *(int *)((longlong)param_2 + 0xc) &&
              ((*(int *)((longlong)param_2 + 4) != *(int *)((longlong)param_2 + 0xc) ||
               ((char)*puVar1 != '\0' && cVar7 != '\0')))))) {
            puVar2 = puVar16 + -1;
            cVar3 = (char)*puVar2;
            if (((cVar3 == '\x02') || ((char)*puVar16 == '\x02')) ||
               ((*(int *)((longlong)puVar16 + -4) <= *(int *)((longlong)puVar16 + 4) &&
                ((*(int *)((longlong)puVar16 + -4) != *(int *)((longlong)puVar16 + 4) ||
                 ((char)*puVar16 != '\0' && cVar3 != '\0')))))) {
              puVar14 = puVar16;
              if (((char)*puVar1 != '\x02') && (puVar14 = puVar1, (char)*puVar16 != '\x02')) {
                if (((*(int *)((longlong)puVar16 + 4) <= *(int *)((longlong)param_2 + 0xc)) &&
                    (puVar14 = puVar16,
                    *(int *)((longlong)param_2 + 0xc) <= *(int *)((longlong)puVar16 + 4))) &&
                   ((char)*puVar1 == '\0')) {
                  puVar14 = puVar1;
                }
              }
              puVar15 = puVar2;
              if ((cVar7 != '\x02') && (puVar15 = param_2, cVar3 != '\x02')) {
                if ((*(int *)((longlong)param_2 + 4) <= *(int *)((longlong)puVar16 + -4)) &&
                   ((puVar15 = puVar2,
                    *(int *)((longlong)puVar16 + -4) <= *(int *)((longlong)param_2 + 4) &&
                    (cVar7 == '\0')))) {
                  puVar15 = param_2;
                }
              }
              local_90 = *puVar15;
              local_88 = *puVar14;
              if (((char)local_90 != '\x02') && ((char)local_88 != '\x02')) {
                iVar13 = (int)(local_90 >> 0x20);
                iVar12 = (int)(local_88 >> 0x20);
                if ((iVar12 < iVar13) ||
                   ((iVar13 == iVar12 && (((char)local_90 == '\0' || ((char)local_88 == '\0'))))))
                goto LAB_1476c6561;
              }
              local_e0 = param_3;
              FUN_1475376e2(&local_d8);
              local_9c = *(char *)((longlong)puVar16 + 0xc);
              lVar10 = FUN_147571e62(param_1,uVar5,1);
              if (lVar10 == 0) {
                local_d8 = 0;
                uStack_d0 = 0;
                uStack_c8 = 0;
                uStack_b8 = 0;
                if (iStack_b4 < 0) {
                  FUN_1446f8c06(&local_c0,0);
                }
                if ((undefined2 *)CONCAT44(uStack_bc,local_c0) != (undefined2 *)0x0) {
                  *(undefined2 *)CONCAT44(uStack_bc,local_c0) = 0;
                }
              }
              else {
                FUN_1400bbfae(&local_80,lVar10);
                uStack_d0 = CONCAT44(uStack_7c,local_80);
                uStack_c8 = CONCAT44(uStack_74,uStack_78);
                if (CONCAT44(uStack_bc,local_c0) != 0) {
                  FUN_1400020a8();
                }
                local_c0 = local_70;
                uStack_bc = uStack_6c;
                uStack_b8 = uStack_68;
                iStack_b4 = iStack_64;
                cVar7 = (*(code *)PTR_FUN_14c758760)();
                if (cVar7 != '\0') {
                  uVar4 = *(uint *)(lVar10 + 0xc);
                  if ((int)uVar4 < DAT_14c9647dc) {
                    lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
                  }
                  else {
                    lVar11 = 0;
                  }
                  if ((*(uint *)(lVar11 + 8) & 0x8400000) != 0) {
                    local_d8 = 0;
                    goto LAB_1476c66d3;
                  }
                }
                FUN_14485c47a(&local_d8,lVar10);
              }
LAB_1476c66d3:
              FUN_1475ce654(uVar5,&local_90,&local_d8,param_4);
              param_3 = local_e0;
              if (local_b0 != 0) {
                FUN_1400020a8();
              }
              if (CONCAT44(uStack_bc,local_c0) != 0) {
                FUN_1400020a8();
              }
            }
          }
        }
      }
LAB_1476c6561:
      puVar16 = puVar16 + 4;
      lVar17 = lVar17 + -0x20;
    } while (lVar17 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c6862 FUN_1476c6862 body=155 status=ok
// SIG undefined FUN_1476c6862(void)

void FUN_1476c6862(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(param_1 + 0x2ac) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c6902 FUN_1476c6902 body=219 status=ok
// SIG undefined FUN_1476c6902(void)

void FUN_1476c6902(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x210) = param_2;
  FUN_14485c47a(param_1 + 0x218,param_3);
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x2e8))();
  *(int *)(param_1 + 0x26c) =
       ((int)((ulonglong)*(undefined8 *)(lVar1 + 0x110) >> 0x20) +
       *(int *)(&DAT_14a46e600 + (ulonglong)((char)*(undefined8 *)(lVar1 + 0x110) == '\x01') * 4)) -
       ((int)((ulonglong)*(undefined8 *)(lVar1 + 0x108) >> 0x20) +
       *(int *)(&DAT_14a46e5f8 + (ulonglong)((char)*(undefined8 *)(lVar1 + 0x108) == '\0') * 4));
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(lVar1 + 0x118);
  *(int *)(param_1 + 600) =
       (int)((ulonglong)*(undefined8 *)(lVar1 + 0x108) >> 0x20) +
       *(int *)(&DAT_14a46e5f8 + (ulonglong)((char)*(undefined8 *)(lVar1 + 0x108) == '\0') * 4);
  return;
}



// FUNCTION 1476c69de FUN_1476c69de body=160 status=ok
// SIG undefined FUN_1476c69de(void)

undefined8 FUN_1476c69de(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x1f0);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    if ((*(byte *)(*(longlong *)(param_1 + 0x1e8) + 99) & 2) == 0) {
      lVar3 = plVar1[0x46];
      if (lVar3 == 0) {
        lVar3 = FUN_1476c6a7e(plVar1);
        if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar3);
        }
        plVar1[0x46] = lVar3;
        FUN_1476c6b24(lVar3,plVar1);
        lVar3 = plVar1[0x46];
      }
      return *(undefined8 *)(lVar3 + 0x78);
    }
    uVar2 = (**(code **)(*plVar1 + 0x180))(plVar1);
  }
  uVar2 = FUN_14754778a(uVar2,3);
  return uVar2;
}



// FUNCTION 1476c6a7e FUN_1476c6a7e body=164 status=ok
// SIG undefined FUN_1476c6a7e(void)

longlong FUN_1476c6a7e(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 == 0) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
  }
  uVar2 = FUN_1459d4428();
  lVar3 = FUN_140277b32(uVar2,lVar1,L"GlobalUMGSequenceTickManager",0);
  if (lVar3 == 0) {
    FUN_1446f470e(&local_20,L"GlobalUMGSequenceTickManager",1);
    lVar3 = FUN_1476c8e0c(lVar1,local_20);
    FUN_1476c856c(lVar3,lVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c6b24 FUN_1476c6b24 body=181 status=ok
// SIG undefined FUN_1476c6b24(void)

void FUN_1476c6b24(longlong param_1)

{
  int iVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined1 auStack_68 [46];
  undefined2 local_3a;
  undefined8 **local_38;
  undefined8 **local_30;
  undefined2 *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined8 ***)0x0;
  FUN_14485c47a(&local_38);
  plVar3 = (longlong *)(param_1 + 0x28);
  local_30 = local_38;
  iVar1 = FUN_1476f7c64(plVar3,(uint)((ulonglong)local_38 >> 0x20) ^ (uint)local_38);
  if (iVar1 != -1) {
    if ((*plVar3 + (longlong)iVar1 * 0x14 != 0) &&
       (puVar2 = (undefined1 *)(*plVar3 + (longlong)iVar1 * 0x14 + 8), puVar2 != (undefined1 *)0x0))
    {
      *puVar2 = 1;
      goto LAB_1476c6b97;
    }
  }
  local_28 = &local_3a;
  local_3a = 1;
  local_30 = &local_38;
  FUN_1476f7d1a(plVar3,local_1c);
LAB_1476c6b97:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c6bda FUN_1476c6bda body=1825 status=ok
// SIG undefined FUN_1476c6bda(void)

void FUN_1476c6bda(longlong param_1,float param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  bool bVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  float fVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  double dVar30;
  float fVar31;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined1 local_a1;
  char local_a0;
  char cStack_9f;
  undefined6 uStack_9e;
  longlong local_90;
  undefined8 local_7c;
  char local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar10 = FUN_1475743ce(param_1 + 0x28);
  if (cVar10 != '\0') {
    *(float *)(param_1 + 0x278) = param_2 + *(float *)(param_1 + 0x278);
    goto LAB_1476c6c2f;
  }
  if (((*(byte *)(param_1 + 0x2b5) >> 1 | *(byte *)(param_1 + 0x2b5)) & 1) != 0) goto LAB_1476c6c2f;
  param_2 = param_2 + *(float *)(param_1 + 0x278);
  *(undefined4 *)(param_1 + 0x278) = 0;
  if (*(int *)(param_1 + 0x27c) != 1) goto LAB_1476c6c2f;
  if (*(char *)(param_1 + 0x2b4) != '\x01') {
    param_2 = -param_2;
  }
  dVar30 = ((double)(int)*(undefined8 *)(param_1 + 0x250) *
           (double)(param_2 * *(float *)(param_1 + 0x2a0))) /
           (double)(int)((ulonglong)*(undefined8 *)(param_1 + 0x250) >> 0x20);
  auVar25._8_8_ = 0;
  auVar25._0_8_ = dVar30;
  auVar25 = roundpd(auVar25,auVar25,1);
  dVar24 = auVar25._0_8_;
  dVar30 = dVar30 - dVar24;
  if (2147483647.0 <= dVar24) {
    dVar24 = 2147483647.0;
  }
  if (dVar24 <= -2147483648.0) {
    dVar24 = -2147483648.0;
  }
  fVar29 = (float)dVar30 - (float)(int)dVar30;
  fVar31 = fVar29;
  if (0.99999994 <= fVar29) {
    fVar31 = 0.99999994;
  }
  fVar31 = (float)(~-(uint)(0.0 < fVar29) & (uint)fVar29 | (uint)fVar31 & -(uint)(0.0 < fVar29)) +
           0.5 + -0.5;
  if (0.99999994 <= fVar31) {
    fVar31 = 0.99999994;
  }
  if (fVar31 <= 0.0) {
    fVar31 = 0.0;
  }
  auVar27._0_4_ = fVar31 + *(float *)(param_1 + 0x268);
  auVar27._4_4_ = (int)((ulonglong)dVar30 >> 0x20);
  auVar27._8_8_ = 0;
  *(int *)(param_1 + 0x264) =
       (int)dVar30 + *(int *)(param_1 + 0x264) + (int)dVar24 +
       ((int)ROUND(auVar27._0_4_ + auVar27._0_4_ + -0.5) >> 1);
  auVar25 = roundss(ZEXT416(0),auVar27,9);
  *(float *)(param_1 + 0x268) = auVar27._0_4_ - auVar25._0_4_;
  uVar18 = *(ulonglong *)(param_1 + 0x25c);
  lVar12 = FUN_14179e7c6(param_1 + 0x220);
  local_c8 = 0x3f800000;
  local_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  if (lVar12 != 0) {
    FUN_1432d92ec((undefined8 *)(lVar12 + 0x78),&local_a0);
    if (cStack_9f != '\0' && local_a0 == '\x01') {
      local_c0 = *(undefined4 *)(lVar12 + 0x80);
      local_c8 = *(undefined8 *)(lVar12 + 0x78);
      FUN_1447bdcfc(&local_b8,lVar12 + 0x88);
    }
  }
  puVar14 = &local_c8;
  FUN_14040645e(puVar14,&local_a0,*(undefined8 *)(param_1 + 0x264));
  uVar2 = CONCAT62(uStack_9e,CONCAT11(cStack_9f,local_a0));
  *(undefined8 *)(param_1 + 0x25c) = uVar2;
  uVar13 = (uint)CONCAT71((int7)((ulonglong)puVar14 >> 8),1);
  iVar19 = (int)uVar2;
  fVar31 = (float)((uint6)uStack_9e >> 0x10);
  if (-1 < iVar19) {
    uVar13 = (uint)fVar31 & 0xffffff00;
  }
  bVar9 = -1 >= iVar19;
  bVar22 = iVar19 == 0;
  bVar5 = fVar31 < 0.0;
  iVar1 = *(int *)(param_1 + 0x26c);
  bVar3 = iVar1 < iVar19;
  bVar23 = iVar1 == iVar19;
  bVar4 = 0.0 <= fVar31;
  uVar2 = *(undefined8 *)(param_1 + 0x270);
  iVar15 = (int)uVar2;
  iVar17 = (int)uVar18;
  fVar29 = (float)((ulonglong)uVar2 >> 0x20);
  fVar20 = (float)(uVar18 >> 0x20);
  if (*(char *)(param_1 + 0x2b4) == '\x01') {
    if (((iVar17 < iVar15) || ((bVar16 = false, iVar17 == iVar15 && (fVar20 < fVar29)))) &&
       (bVar16 = true, iVar19 <= iVar15)) {
      bVar16 = fVar31 < fVar29;
LAB_1476c6ef4:
      bVar16 = !bVar16 && iVar15 == iVar19;
    }
  }
  else if (((iVar15 < iVar17) || ((bVar16 = false, iVar17 == iVar15 && (fVar29 < fVar20)))) &&
          (bVar16 = true, iVar15 <= iVar19)) {
    bVar16 = fVar29 < fVar31;
    goto LAB_1476c6ef4;
  }
  bVar6 = (bVar9 || bVar5 && bVar22) || (bVar3 || bVar4 && bVar23);
  if ((bVar9 || bVar5 && bVar22) || (bVar3 || bVar4 && bVar23)) {
    iVar19 = *(int *)(param_1 + 0x29c);
LAB_1476c6f0f:
    *(int *)(param_1 + 0x29c) = iVar19 + 1;
  }
  else if ((bVar16 != false) &&
          (iVar19 = *(int *)(param_1 + 0x29c), *(int *)(param_1 + 0x298) + -1 <= iVar19))
  goto LAB_1476c6f0f;
  puVar14 = (undefined8 *)(param_1 + 0x25c);
  iVar19 = *(int *)(param_1 + 0x298);
  if (iVar19 == 0) {
    if (bVar9 || bVar5 && bVar22) {
LAB_1476c6f3b:
      FUN_1476c72fc(param_1,uVar18,0);
      if (*(int *)(param_1 + 0x2a8) == 2) {
        *(byte *)(param_1 + 0x2b4) = *(byte *)(param_1 + 0x2b4) ^ 1;
        uVar11 = *(uint *)(param_1 + 0x25c);
        fVar31 = *(float *)(param_1 + 0x260);
        if (((int)uVar11 < 0) || ((uVar11 == 0 && (fVar31 < 0.0)))) {
          auVar28 = ZEXT816(0);
          if ((fVar31 != 0.0) || (NAN(fVar31))) {
            uVar11 = ~uVar11;
            fVar31 = (1.0 - fVar31) + 0.5 + -0.5;
            if (0.99999994 <= fVar31) {
              fVar31 = 0.99999994;
            }
            if (fVar31 <= 0.0) {
              fVar31 = 0.0;
            }
            auVar28 = ZEXT416((uint)fVar31);
          }
          else {
            uVar11 = -uVar11;
          }
        }
        else {
          auVar28 = ZEXT416((uint)fVar31);
        }
LAB_1476c7214:
        *(uint *)(param_1 + 0x25c) = uVar11;
        *(int *)(param_1 + 0x260) = auVar28._0_4_;
        uVar18 = 0;
      }
      else {
        fVar31 = *(float *)(param_1 + 0x260) + 0.0;
        *(int *)(param_1 + 0x25c) =
             *(int *)(param_1 + 0x25c) + *(int *)(param_1 + 0x26c) +
             ((int)ROUND(fVar31 + fVar31 + -0.5) >> 1);
        auVar25 = roundss(ZEXT416(0),ZEXT416((uint)fVar31),9);
        *(float *)(param_1 + 0x260) = fVar31 - auVar25._0_4_;
        uVar18 = (ulonglong)(iVar1 - 1) | 0x3f7fffff00000000;
      }
LAB_1476c7224:
      bVar21 = false;
      goto LAB_1476c7227;
    }
    if (bVar3 || bVar4 && bVar23) {
LAB_1476c704a:
      FUN_1476c72fc(param_1,uVar18,0);
      if (*(int *)(param_1 + 0x2a8) != 2) {
        fVar31 = *(float *)(param_1 + 0x260);
        auVar25 = roundps(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31),1);
        uVar11 = (*(int *)(param_1 + 0x25c) - *(int *)(param_1 + 0x26c)) + (int)auVar25._0_4_;
        fVar31 = (fVar31 - auVar25._0_4_) + 0.5 + -0.5;
        auVar28 = ZEXT416((uint)fVar31);
        if (0.99999994 <= fVar31) {
          auVar28._4_12_ = ZEXT812(0);
          auVar28._0_4_ = 0x3f7fffff;
        }
        if (auVar28._0_4_ <= 0.0) {
          auVar8._12_4_ = 0;
          auVar8._0_12_ = auVar28._4_12_;
          auVar28 = auVar8 << 0x20;
        }
        goto LAB_1476c7214;
      }
      *(byte *)(param_1 + 0x2b4) = *(byte *)(param_1 + 0x2b4) ^ 1;
      uVar18 = (ulonglong)(iVar1 - 1U) | 0x3f7fffff00000000;
      fVar31 = *(float *)(param_1 + 0x260);
      auVar25 = roundps(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31),1);
      fVar31 = (fVar31 - auVar25._0_4_) + 0.5 + -0.5;
      auVar26 = ZEXT416((uint)fVar31);
      if (0.99999994 <= fVar31) {
        auVar26._4_12_ = ZEXT812(0);
        auVar26._0_4_ = 0x3f7fffff;
      }
      if (auVar26._0_4_ <= 0.0) {
        auVar7._12_4_ = 0;
        auVar7._0_12_ = auVar26._4_12_;
        auVar26 = auVar7 << 0x20;
      }
      fVar31 = 0.99999994 - auVar26._0_4_;
      auVar27 = roundps(auVar26,ZEXT416((uint)fVar31),1);
      fVar31 = (fVar31 - auVar27._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar31) {
        fVar31 = 0.99999994;
      }
      if (fVar31 <= 0.0) {
        fVar31 = 0.0;
      }
      *(uint *)(param_1 + 0x25c) =
           (((iVar1 - 1U) + *(int *)(param_1 + 0x26c)) -
           ((int)auVar25._0_4_ + *(int *)(param_1 + 0x25c))) + (int)auVar27._0_4_;
      *(float *)(param_1 + 0x260) = fVar31;
      goto LAB_1476c7224;
    }
    bVar21 = false;
LAB_1476c718f:
    if ((bVar6 | bVar16) == 1) goto LAB_1476c7227;
  }
  else {
    iVar15 = *(int *)(param_1 + 0x29c);
    bVar21 = iVar19 <= iVar15;
    if (bVar9 || bVar5 && bVar22) {
      if (iVar15 < iVar19) goto LAB_1476c6f3b;
      *puVar14 = 0;
      *(undefined8 *)(param_1 + 0x264) = 0;
    }
    else {
      if (!bVar3 && (!bVar4 || !bVar23)) {
        if ((iVar19 <= iVar15 & bVar16) == 1) {
          *puVar14 = uVar2;
          bVar21 = true;
        }
        goto LAB_1476c718f;
      }
      if (iVar15 < iVar19) goto LAB_1476c704a;
      *(int *)(param_1 + 0x25c) = iVar1 + -1;
      *(undefined4 *)(param_1 + 0x260) = 0x3f7fffff;
    }
    bVar21 = true;
LAB_1476c7227:
    FUN_14087ad3e(&local_c8,&local_a0);
    local_a1 = 0xf;
    FUN_1405bad34(&local_a0,&local_7c,*(undefined8 *)(param_1 + 0x25c));
    if (local_74 != '\0') {
      puVar14 = &local_7c;
    }
    *(undefined8 *)(param_1 + 0x264) = *puVar14;
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
  *(byte *)(param_1 + 0x2b5) = *(byte *)(param_1 + 0x2b5) & 0xfb | bVar21 << 2;
  FUN_1476c72fc(param_1,uVar18,CONCAT31((int3)(uVar13 >> 8),bVar6 | bVar16));
  FUN_1447bda9c(local_b8,uStack_b0 & 0xffffffff);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
LAB_1476c6c2f:
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c72fc FUN_1476c72fc body=1053 status=ok
// SIG undefined FUN_1476c72fc(void)

void FUN_1476c72fc(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 uVar8;
  char cVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined1 auVar20 [16];
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined8 *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [24];
  undefined1 local_d0 [4];
  undefined8 local_cc;
  undefined1 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  uint local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined8 local_5c;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  cVar9 = FUN_1432dadb8(param_1 + 0x220);
  if (cVar9 == '\0') goto LAB_1476c7674;
  (**(code **)(**(longlong **)(param_1 + 0x210) + 0x2e8))();
  local_60 = *(undefined4 *)(param_1 + 0x27c);
  local_b8 = *(undefined8 *)(param_1 + 0x250);
  fVar16 = (float)((ulonglong)param_2 >> 0x20) + 0.0;
  auVar18 = roundss(ZEXT416(0),ZEXT416((uint)fVar16),9);
  iVar12 = (int)param_2 + *(int *)(param_1 + 600) + ((int)ROUND(fVar16 + fVar16 + -0.5) >> 1);
  fVar16 = (fVar16 - auVar18._0_4_) + 0.5 + -0.5;
  auVar18 = ZEXT416((uint)fVar16);
  if (0.99999994 <= fVar16) {
    auVar18 = ZEXT416(0x3f7fffff);
  }
  if (auVar18._0_4_ <= 0.0) {
    auVar20._12_4_ = 0;
    auVar20._0_12_ = auVar18._4_12_;
    auVar18 = auVar20 << 0x20;
  }
  fVar16 = *(float *)(param_1 + 0x260) + 0.0;
  auVar20 = roundss(ZEXT416(0),ZEXT416((uint)fVar16),9);
  iVar13 = *(int *)(param_1 + 600) + *(int *)(param_1 + 0x25c) +
           ((int)ROUND(fVar16 + fVar16 + -0.5) >> 1);
  fVar16 = (fVar16 - auVar20._0_4_) + 0.5 + -0.5;
  auVar19 = (undefined1  [12])0x0;
  if (0.99999994 <= fVar16) {
    auVar19 = ZEXT812(0);
    fVar16 = 0.99999994;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  local_d0[0] = 1;
  iVar11 = iVar13 - iVar12;
  fVar17 = auVar18._0_4_;
  fVar3 = fVar16;
  if (iVar11 == 0) {
    if ((fVar16 != fVar17) || (iVar15 = iVar12, uVar8 = 1, NAN(fVar16) || NAN(fVar17)))
    goto LAB_1476c7421;
LAB_1476c7451:
    local_d0[0] = uVar8;
    local_c4 = 1;
    iVar13 = iVar12;
    iVar12 = iVar15;
    fVar4 = fVar16;
  }
  else {
LAB_1476c7421:
    local_c4 = 0;
    fVar4 = fVar17;
    if ((iVar12 <= iVar13) && (iVar13 != iVar12 || fVar17 <= fVar16)) {
      iVar15 = iVar13;
      fVar3 = fVar17;
      uVar8 = 0;
      goto LAB_1476c7451;
    }
  }
  auVar18._0_4_ = fVar16 - fVar17;
  auVar18._4_12_ = auVar19;
  local_98 = ZEXT816(0);
  auVar18 = blendps(auVar18,local_98,0xe);
  auVar18 = roundps(auVar18,auVar18,1);
  local_b0 = (uint)(iVar11 + (int)auVar18._0_4_) >> 0x1f;
  local_cc = CONCAT44(fVar3,iVar13);
  local_c0 = CONCAT44(fVar4,iVar12);
  local_ac = 0x3f80000080000000;
  uStack_a4 = 0;
  local_78 = 0;
  local_5c = 0x80000000;
  auVar18 = local_98;
  local_88 = local_98;
  local_70 = local_98;
  local_54 = param_3;
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FUN_140232b8e(*(longlong *)(param_1 + 0x228),local_e8);
    auVar18 = local_e8._0_16_;
    if (local_e8._0_8_ != 0) {
      local_f8 = 0;
      local_f0 = 0;
      local_118 = 0;
      if ((*(byte *)(param_1 + 0x2b5) & 4) != 0) {
        *(byte *)(param_1 + 0x2b5) = (*(byte *)(param_1 + 0x2b5) & 0xfa) + 1;
        local_108 = (undefined8 *)0x0;
        local_100 = 0;
        FUN_1446efa72(&local_108,0,3,0x10);
        puVar5 = local_108;
        local_100 = 3;
        *local_108 = &PTR_LAB_149e020b0;
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
        local_108[2] = lVar10;
        *local_108 = &PTR_FUN_14a508920;
        local_108[3] = 0;
        FUN_14485c47a(local_108 + 3,param_1);
        puVar5[4] = &DAT_14332d890;
        *(undefined4 *)(puVar5 + 5) = 0;
        FUN_144a450dc(&local_f8,&local_108);
        FUN_1449db362(&local_108);
        local_118 = 1;
      }
      if (*(longlong *)(param_1 + 0x228) == 0) {
        uVar14 = 0xffff;
      }
      else {
        uVar14 = *(undefined4 *)(*(longlong *)(param_1 + 0x228) + 0x30);
      }
      FUN_14179d4b8(local_e8._0_8_,local_d0,uVar14,&local_f8);
      if ((local_e8._0_8_ == *(longlong *)(param_1 + 0x240)) || (DAT_14c761020 == '\0')) {
        if (*(int *)(local_e8._0_8_ + 0x80) == 0) {
          *(undefined4 *)(local_e8._0_8_ + 0x80) = DAT_14cab2be4;
        }
        FUN_14029f2bc();
        FUN_1476c771a(param_1);
      }
      FUN_1449db362(&local_f8);
      auVar18 = local_e8._0_16_;
    }
  }
  local_e8._0_16_ = auVar18;
  uVar6 = local_e8._8_8_;
  if ((longlong *)local_e8._8_8_ != (longlong *)0x0) {
    LOCK();
    plVar1 = (longlong *)(local_e8._8_8_ + 8);
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (*(code *)**(undefined8 **)local_e8._8_8_)(local_e8._8_8_);
      LOCK();
      piVar2 = (int *)(uVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*(longlong *)uVar6 + 0x10))(uVar6);
      }
    }
  }
  FUN_144adeafa(local_d0);
LAB_1476c7674:
  if ((local_50 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476c771a FUN_1476c771a body=132 status=ok
// SIG undefined FUN_1476c771a(void)

void FUN_1476c771a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*DAT_14caba880 == '\0') {
    if (0 < *(int *)(param_1 + 0x2c0)) {
      do {
        plVar1 = *(longlong **)(param_1 + 0x2b8);
        if (((int)plVar1[1] != 0) && (plVar1 = (longlong *)*plVar1, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x60))();
        }
        FUN_1457b112e((longlong *)(param_1 + 0x2b8),0,1);
      } while (0 < *(int *)(param_1 + 0x2c0));
    }
  }
  else {
    lVar2 = FUN_14479d2ce(param_1 + 0x218);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x230) != 0)) {
      FUN_1476c83d6();
      return;
    }
  }
  return;
}



// FUNCTION 1476c779e FUN_1476c779e body=363 status=ok
// SIG undefined FUN_1476c779e(void)

void FUN_1476c779e(longlong param_1,float param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar3 = FUN_1475743ce(param_1 + 0x28);
  if (cVar3 != '\0') {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,4,0x10);
    puVar1 = local_60;
    local_58 = 4;
    *local_60 = &PTR_LAB_14a508a70;
    *(float *)(local_60 + 1) = param_2;
    *(undefined4 *)((longlong)local_60 + 0xc) = param_3;
    *(undefined4 *)(local_60 + 2) = param_4;
    *(undefined4 *)((longlong)local_60 + 0x14) = param_5;
    *(undefined1 *)(local_60 + 3) = param_6;
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
    local_60[4] = lVar4;
    *local_60 = &PTR_FUN_14a508a00;
    local_60[5] = 0;
    FUN_14485c47a(local_60 + 5,param_1);
    puVar1[6] = FUN_1476c779e;
    *(undefined4 *)(puVar1 + 7) = 0;
    FUN_1476c7910(param_1,&local_60);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_98);
  }
  local_68 = param_6;
  local_70 = param_5;
  local_78 = param_4;
  FUN_14332d9e0(param_1,(double)param_2,0,param_3);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c7910 FUN_1476c7910 body=275 status=ok
// SIG undefined FUN_1476c7910(void)

void FUN_1476c7910(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*DAT_14caba880 == '\x01') {
    lVar2 = FUN_14479d2ce(param_1 + 0x218);
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x230), lVar2 != 0)) {
      local_50 = 0;
      local_48 = 0;
      FUN_14487d8d8(&local_50,param_2);
      local_40 = 0;
      local_38 = 0;
      FUN_14487d8d8(&local_40,&local_50);
      FUN_1462155ec(lVar2 + 0xa0,&local_40);
      FUN_1449db362(&local_50);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2c0);
    *(uint *)(param_1 + 0x2c0) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x2c4) < iVar1 + 1U) {
      FUN_146215644((longlong *)(param_1 + 0x2b8),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x2b8);
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar3) = 0;
    FUN_14487d8d8(lVar2 + lVar3,param_2);
  }
  FUN_1449db362(param_2);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c7a24 FUN_1476c7a24 body=372 status=ok
// SIG undefined FUN_1476c7a24(void)

void FUN_1476c7a24(longlong param_1,float param_2,float param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar3 = FUN_1475743ce(param_1 + 0x28);
  if (cVar3 != '\0') {
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    FUN_1446efa72(&local_70,0,4,0x10);
    puVar1 = local_70;
    local_68 = 4;
    *local_70 = &PTR_LAB_14a508b50;
    *(float *)(local_70 + 1) = param_2;
    *(float *)((longlong)local_70 + 0xc) = param_3;
    *(undefined4 *)(local_70 + 2) = param_4;
    *(undefined4 *)((longlong)local_70 + 0x14) = param_5;
    *(undefined4 *)(local_70 + 3) = param_6;
    *(undefined1 *)((longlong)local_70 + 0x1c) = param_7;
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
    local_70[4] = lVar4;
    *local_70 = &PTR_FUN_14a508ae0;
    local_70[5] = 0;
    FUN_14485c47a(local_70 + 5,param_1);
    puVar1[6] = FUN_1476c7a24;
    *(undefined4 *)(puVar1 + 7) = 0;
    FUN_1476c7910(param_1,&local_70);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_98);
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_14332d9e0(param_1,(double)param_2,(double)param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_98,(double)param_2,(double)param_3);
}



// FUNCTION 1476c7bb4 FUN_1476c7bb4 body=740 status=ok
// SIG undefined FUN_1476c7bb4(void)

void FUN_1476c7bb4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [16];
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [4];
  int local_b4;
  float local_b0;
  undefined1 local_ac;
  int local_a8;
  float local_a4;
  undefined8 local_a0;
  uint local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined1 local_3c;
  longlong local_38;
  longlong *plStack_30;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar6 = FUN_1475743ce(param_1 + 0x28);
  if (cVar6 == '\0') {
    *(undefined4 *)(param_1 + 0x27c) = 0;
    cVar6 = FUN_1432dadca(param_1 + 0x220);
    if ((cVar6 == '\0') || (*(longlong *)(param_1 + 0x228) == 0)) {
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
    }
    else {
      FUN_140232b8e(*(longlong *)(param_1 + 0x228),&local_38);
      lVar5 = local_38;
      if (local_38 != 0) {
        local_48 = *(undefined4 *)(param_1 + 0x27c);
        local_a0 = *(undefined8 *)(param_1 + 0x250);
        fVar9 = *(float *)(param_1 + 0x260) + 0.0;
        auVar11 = roundss(ZEXT416(0),ZEXT416((uint)fVar9),9);
        local_b0 = (fVar9 - auVar11._0_4_) + 0.5 + -0.5;
        auVar10 = (undefined1  [12])0x0;
        if (0.99999994 <= local_b0) {
          auVar10 = ZEXT812(0);
          local_b0 = 0.99999994;
        }
        local_b4 = *(int *)(param_1 + 600) + *(int *)(param_1 + 0x25c) +
                   ((int)ROUND(fVar9 + fVar9 + -0.5) >> 1);
        if (local_b0 <= 0.0) {
          local_b0 = 0.0;
        }
        local_b8[0] = 1;
        local_ac = 1;
        auVar11._0_4_ = local_b0 - local_b0;
        auVar11._4_12_ = auVar10;
        auVar11 = blendps(auVar11,ZEXT816(0),0xe);
        auVar11 = roundps(auVar11,auVar11,1);
        local_98 = (uint)(int)auVar11._0_4_ >> 0x1f;
        local_94 = 0x3f80000080000000;
        uStack_8c = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_60 = 0;
        local_44 = 0x80000000;
        local_3c = 0;
        if (*(longlong *)(param_1 + 0x228) == 0) {
          uVar8 = 0xffff;
        }
        else {
          uVar8 = *(undefined4 *)(*(longlong *)(param_1 + 0x228) + 0x30);
        }
        local_a8 = local_b4;
        local_a4 = local_b0;
        FUN_1404117b8(local_38,local_b8,uVar8,1);
        if ((lVar5 == *(longlong *)(param_1 + 0x240)) || (DAT_14c761020 == '\0')) {
          if (*(int *)(lVar5 + 0x80) == 0) {
            *(undefined4 *)(lVar5 + 0x80) = DAT_14cab2be4;
          }
          FUN_14029f2bc(lVar5,0);
        }
        FUN_144adeafa(local_b8);
      }
    }
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
  }
  else {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,3,0x10);
    puVar4 = local_28;
    local_20 = 3;
    *local_28 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_28[2] = lVar7;
    *local_28 = &PTR_FUN_14a508bc0;
    local_28[3] = 0;
    FUN_14485c47a(local_28 + 3,param_1);
    puVar4[4] = FUN_1476c7bb4;
    *(undefined4 *)(puVar4 + 5) = 0;
    FUN_1476c7910(param_1,&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c7e9a FUN_1476c7e9a body=17 status=ok
// SIG undefined FUN_1476c7e9a(void)

void FUN_1476c7e9a(longlong param_1)

{
  if (*(int *)(param_1 + 0x27c) == 1) {
    *(byte *)(param_1 + 0x2b4) = *(byte *)(param_1 + 0x2b4) ^ 1;
  }
  return;
}



// FUNCTION 1476c7eac FUN_1476c7eac body=1046 status=ok
// SIG undefined FUN_1476c7eac(void)

void FUN_1476c7eac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined8 *local_108;
  undefined4 local_100;
  longlong local_f8;
  longlong *plStack_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined1 local_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  cVar6 = FUN_1475743ce(param_1 + 0x28);
  if (cVar6 == '\0') {
    if (*(int *)(param_1 + 0x27c) != 0) {
      *(undefined4 *)(param_1 + 0x27c) = 0;
      lVar3 = param_1 + 0x220;
      FUN_1400d1216(lVar3,&DAT_14cab69dc);
      lVar7 = FUN_14479d2ce(param_1 + 0x218);
      if (lVar7 == 0) {
        *(undefined8 *)(param_1 + 0x25c) = 0;
        *(undefined8 *)(param_1 + 0x264) = 0;
      }
      else {
        lVar7 = *(longlong *)(lVar7 + 0x230);
        *(undefined8 *)(param_1 + 0x25c) = 0;
        *(undefined8 *)(param_1 + 0x264) = 0;
        if (lVar7 != 0) {
          cVar6 = FUN_1432dadb8(lVar3);
          if (cVar6 != '\0') {
            cVar6 = FUN_1432dadca(lVar3);
            if (cVar6 != '\0') {
              uVar9 = *(undefined4 *)(param_1 + 0x27c);
              FUN_1475571ba(&local_e0,*(undefined4 *)(param_1 + 600),
                            *(undefined8 *)(param_1 + 0x250));
              local_98 = local_c0;
              local_a8 = local_d0;
              uStack_a4 = uStack_cc;
              uStack_a0 = uStack_c8;
              uStack_9c = uStack_c4;
              local_b8 = local_e0;
              uStack_b0 = uStack_d8;
              local_90 = 0x3f800000;
              local_88 = 0;
              local_58 = 0;
              uStack_50 = 0;
              local_80 = 0;
              uStack_78 = 0;
              local_70 = 0;
              uStack_68 = 0;
              local_60 = 0;
              local_44 = 0x80000000;
              local_3c = 0;
              *(byte *)(param_1 + 0x2b5) = *(byte *)(param_1 + 0x2b5) | 1;
              local_48 = uVar9;
              if (*(longlong *)(param_1 + 0x228) == 0) {
                local_f8 = 0;
                plStack_f0 = (longlong *)0x0;
              }
              else {
                FUN_140232b8e(*(longlong *)(param_1 + 0x228),&local_f8);
                lVar3 = local_f8;
                if (local_f8 != 0) {
                  local_108 = (undefined8 *)0x0;
                  local_100 = 0;
                  FUN_1446efa72(&local_108,0,3,0x10);
                  puVar4 = local_108;
                  local_100 = 3;
                  *local_108 = &PTR_LAB_149e020b0;
                  LOCK();
                  UNLOCK();
                  lVar8 = DAT_14c758608 + 1;
                  lVar7 = DAT_14c758608 + 1;
                  if (lVar8 == 0) {
                    LOCK();
                    UNLOCK();
                    lVar8 = DAT_14c758608 + 2;
                    lVar7 = DAT_14c758608 + 2;
                  }
                  DAT_14c758608 = lVar7;
                  local_108[2] = lVar8;
                  *local_108 = &PTR_FUN_14a508920;
                  local_108[3] = 0;
                  FUN_14485c47a(local_108 + 3,param_1);
                  puVar4[4] = &DAT_14332d890;
                  *(undefined4 *)(puVar4 + 5) = 0;
                  if (*(longlong *)(param_1 + 0x228) == 0) {
                    uVar9 = 0xffff;
                  }
                  else {
                    uVar9 = *(undefined4 *)(*(longlong *)(param_1 + 0x228) + 0x30);
                  }
                  local_118 = 1;
                  FUN_14179d4b8(lVar3,&local_b8,uVar9,&local_108);
                  FUN_1449db362(&local_108);
                  if ((local_f8 == *(longlong *)(param_1 + 0x240)) || (DAT_14c761020 == '\0')) {
                    if (*(int *)(local_f8 + 0x80) == 0) {
                      *(undefined4 *)(local_f8 + 0x80) = DAT_14cab2be4;
                    }
                    FUN_14029f2bc(local_f8,0);
                  }
                }
              }
              plVar5 = plStack_f0;
              if (plStack_f0 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_f0 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plStack_f0)(plStack_f0);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar5 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5);
                  }
                }
              }
              FUN_144adeafa(&local_b8);
              goto LAB_1476c8225;
            }
            FUN_140873d40(lVar7 + 0xa0,param_1);
            FUN_140a07690(*(undefined8 *)(param_1 + 0x2b8),*(undefined4 *)(param_1 + 0x2c0));
            *(undefined4 *)(param_1 + 0x2c0) = 0;
            if (*(int *)(param_1 + 0x2c4) != 0) {
              FUN_147581eec(param_1 + 0x2b8,0);
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_138);
    }
  }
  else {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar4 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_30[2] = lVar7;
    *local_30 = &PTR_FUN_14a508bc0;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    puVar4[4] = FUN_1476c7eac;
    *(undefined4 *)(puVar4 + 5) = 0;
    FUN_1476c7910(param_1,&local_30);
  }
LAB_1476c8225:
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c82d6 FUN_1476c82d6 body=22 status=ok
// SIG undefined FUN_1476c82d6(void)

void FUN_1476c82d6(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x298) = param_2 << (*(int *)(param_1 + 0x2a8) == 2);
  return;
}



// FUNCTION 1476c830a FUN_1476c830a body=81 status=ok
// SIG undefined FUN_1476c830a(void)

undefined8 * FUN_1476c830a(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  cVar1 = FUN_144729dda(param_1 + 0x1f0);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x1f0);
    *(undefined4 *)(param_2 + 1) = 1;
    FUN_1447f76d2(param_2,0);
    *(undefined8 *)*param_2 = uVar2;
  }
  return param_2;
}



// FUNCTION 1476c8366 FUN_1476c8366 body=111 status=ok
// SIG undefined FUN_1476c8366(void)

void FUN_1476c8366(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0;
  FUN_14487d8d8(&local_30);
  FUN_1462155ec(param_1 + 0xa0,&local_30);
  FUN_1449db362(param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c83d6 FUN_1476c83d6 body=141 status=ok
// SIG undefined FUN_1476c83d6(void)

void FUN_1476c83d6(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 *local_38;
  int *local_30;
  undefined1 *local_28;
  longlong *local_20;
  undefined8 local_18;
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(int *)(lVar1 + 0x80) == 0) {
    local_c = *(int *)(lVar1 + 0x40) + *(int *)(lVar1 + 0x20);
    local_30 = &local_c;
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x270);
    local_38 = &local_18;
    local_20 = &local_40;
    local_28 = &LAB_1433321ae;
    local_40 = param_1;
    FUN_140de924e(param_1 + 0xa0);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c8464 FUN_1476c8464 body=247 status=ok
// SIG undefined FUN_1476c8464(void)

void FUN_1476c8464(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = param_1 + 0x220;
  lVar5 = FUN_1475542ea(lVar3);
  lVar6 = FUN_1475563ec(lVar3,DAT_14cab69dc);
  if (lVar5 != 0 && lVar6 != 0) {
    if (*(longlong *)(param_1 + 0x228) == 0) {
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
    }
    else {
      FUN_140232b8e(*(longlong *)(param_1 + 0x228),&local_38);
      if ((local_38 != 0) && (*(int *)(local_38 + 0x80) != 0)) {
        FUN_14029f2bc(local_38,0,0);
      }
    }
    FUN_14055c180(lVar6,lVar5,0);
    FUN_140a462a4(lVar6,1);
    plVar4 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1475563be(lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c855c FUN_1476c855c body=12 status=ok
// SIG undefined FUN_1476c855c(void)

void FUN_1476c855c(longlong param_1)

{
  FUN_14087332c(param_1 + 0x220);
  return;
}



// FUNCTION 1476c856c FUN_1476c856c body=395 status=ok
// SIG undefined FUN_1476c856c(void)

void FUN_1476c856c(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_1407f0098(param_2,3,L"UMGAnimationEntitySystemLinker");
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  *(longlong *)(param_1 + 0x78) = lVar5;
  uVar3 = *(undefined8 *)(lVar5 + 0x5d8);
  plVar4 = *(longlong **)(lVar5 + 0x5e0);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = uVar3;
    plVar6 = *(longlong **)(param_1 + 0x88);
    if (plVar6 == (longlong *)0x0) goto LAB_1476c863c;
    *(undefined8 *)(param_1 + 0x88) = 0;
LAB_1476c86d7:
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
LAB_1476c85ff:
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    if (plVar4 == (longlong *)0x0) goto LAB_1476c863c;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x80) = uVar3;
    plVar6 = *(longlong **)(param_1 + 0x88);
    if (plVar4 == plVar6) {
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
        plVar6 = plVar4;
        if (*piVar1 == 0) goto LAB_1476c85ff;
      }
    }
    else {
      *(longlong **)(param_1 + 0x88) = plVar4;
      if (plVar6 != (longlong *)0x0) goto LAB_1476c86d7;
    }
  }
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
LAB_1476c863c:
  lVar5 = DAT_14c98e618;
  FUN_1476c86f8(DAT_14c98e618 + 0x550,&local_28,param_1,FUN_1476c87ee);
  *(undefined8 *)(param_1 + 0x90) = local_28;
  FUN_1476c86f8(lVar5 + 0x568,&local_30,param_1,FUN_14332e2a4);
  *(undefined8 *)(param_1 + 0x98) = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476c86f8 FUN_1476c86f8 body=244 status=ok
// SIG undefined FUN_1476c86f8(void)

undefined8
FUN_1476c86f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e01f80;
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
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14a508c30;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_140ca2242(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c87ee FUN_1476c87ee body=1173 status=ok
// SIG undefined FUN_1476c87ee(void)

void FUN_1476c87ee(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 uVar11;
  char *pcVar12;
  double dVar13;
  undefined1 auStack_e8 [39];
  undefined1 local_c1;
  code *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  code *local_90;
  undefined2 local_88;
  undefined8 ***local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*DAT_14caba880 == '\x01') && (*(char *)(param_1 + 0xb8) == '\0')) {
    uVar2 = *(uint *)(param_1 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    if ((((*(uint *)(lVar10 + 8) >> 0x1c & 1) == 0) && (-1 < (short)*(undefined4 *)(param_1 + 8)))
       && (lVar10 = *(longlong *)(param_1 + 0x78), lVar10 != 0)) {
      uVar2 = *(uint *)(lVar10 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if (((*(uint *)(lVar7 + 8) >> 0x1c & 1) == 0) && (-1 < (short)*(undefined4 *)(lVar10 + 8))) {
        local_b8 = &local_80;
        local_c0 = FUN_141073f72;
        lVar10 = FUN_144a773aa(&local_c0,&DAT_14c75ec34);
        if (*(char *)(lVar10 + 0x20) == '\0') {
          uVar11 = *(undefined1 *)(param_1 + 0xb8);
          *(undefined1 *)(param_1 + 0xb8) = 1;
          iVar6 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x80);
          pcVar1 = (code *)(param_1 + 0x28);
          lVar10 = param_1 + 0x38;
          local_80 = (undefined8 ***)&DAT_100000000;
          local_70 = 0xffffffff;
          local_68 = 0;
          local_78 = lVar10;
          if (*(int *)(param_1 + 0x50) != 0) {
            FUN_1449c0562(&local_80);
          }
          local_a8 = local_70;
          uVar3 = local_a8;
          local_a0 = local_68;
          local_9c = local_64;
          local_b8 = (undefined8 ****)local_80;
          local_b0 = local_78;
          local_88 = 0;
          local_a8._4_4_ = (int)((ulonglong)local_70 >> 0x20);
          local_c0 = pcVar1;
          local_98 = pcVar1;
          local_90 = pcVar1;
          if (local_a8._4_4_ < *(int *)(local_78 + 0x18)) {
            iVar5 = local_a8._4_4_;
            local_c1 = uVar11;
            local_a8 = uVar3;
            do {
              lVar8 = FUN_14479d2ce((longlong)iVar5 * 0x14 + *(longlong *)local_c0);
              lVar9 = (longlong)local_a8._4_4_;
              lVar7 = *(longlong *)local_c0;
              *(undefined1 *)(lVar7 + 9 + lVar9 * 0x14) = 0;
              if (lVar8 == 0) {
LAB_1476c8ab6:
                FUN_1476f8326(local_98,local_a8._4_4_);
                local_88 = CONCAT11(local_88._1_1_,1);
              }
              else {
                cVar4 = FUN_14775e6ac(lVar8);
                if (cVar4 == '\0') {
                  if (iVar6 == 0) {
                    FUN_14779c588(lVar8);
                    FUN_1417aaa18(lVar8);
                    cVar4 = FUN_147793b34(lVar8);
                    if (cVar4 == '\0') {
                      *(undefined8 *)(lVar8 + 0x230) = 0;
                      goto LAB_1476c8ab6;
                    }
                  }
                }
                else {
                  lVar7 = lVar7 + lVar9 * 0x14;
                  pcVar12 = (char *)(lVar7 + 8);
                  if (*pcVar12 == '\0') {
                    if (iVar6 == 0) {
                      FUN_14779c68a(lVar8);
                      goto LAB_1476c8ab6;
                    }
                  }
                  else {
                    cVar4 = FUN_140760b04(lVar8);
                    if (cVar4 != '\0') {
                      FUN_14779d108(lVar8,param_2);
                      *(undefined1 *)(lVar7 + 9) = 1;
                    }
                    *pcVar12 = '\0';
                  }
                }
              }
              local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~local_b8._4_4_);
              FUN_1449c0562(&local_b8);
              uVar11 = local_c1;
              iVar5 = local_a8._4_4_;
            } while (local_a8._4_4_ < *(int *)(local_b0 + 0x18));
            uVar3 = local_a8;
            if (((local_88 & 1) != 0) && (local_88._1_1_ == '\x01')) {
              FUN_1476f802c(local_90,*(int *)(local_90 + 8) - *(int *)(local_90 + 0x34));
              uVar3 = local_a8;
            }
          }
          local_a8 = uVar3;
          dVar13 = (double)DAT_14cab6b80;
          lVar7 = *(longlong *)(param_1 + 0x80);
          if (*(int *)(lVar7 + 0x80) == 0) {
            *(undefined4 *)(lVar7 + 0x80) = DAT_14cab2be4;
          }
          FUN_14029f2bc(lVar7,dVar13);
          FUN_1476c83d6(param_1);
          uVar3 = local_a8;
          if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x80) == 0) {
            local_80 = (undefined8 ***)&DAT_100000000;
            local_70 = 0xffffffff;
            local_68 = 0;
            local_78 = lVar10;
            if (*(int *)(param_1 + 0x50) != 0) {
              FUN_1449c0562(&local_80);
            }
            local_a8 = local_70;
            uVar3 = local_a8;
            local_a0 = local_68;
            local_9c = local_64;
            local_b8 = (undefined8 ****)local_80;
            local_b0 = local_78;
            local_88 = 0;
            local_a8._4_4_ = (int)((ulonglong)local_70 >> 0x20);
            local_c0 = pcVar1;
            local_98 = pcVar1;
            local_90 = pcVar1;
            if (local_a8._4_4_ < *(int *)(local_78 + 0x18)) {
              iVar6 = local_a8._4_4_;
              local_a8 = uVar3;
              do {
                lVar10 = FUN_14479d2ce((longlong)iVar6 * 0x14 + *(longlong *)local_c0);
                if (lVar10 == 0) {
LAB_1476c8c2f:
                  FUN_1476f8326(local_98,local_a8._4_4_);
                  local_88 = CONCAT11(local_88._1_1_,1);
                }
                else if (*(int *)(lVar10 + 0x228) == 0) {
                  FUN_1417aaa18(lVar10);
                  *(undefined8 *)(lVar10 + 0x230) = 0;
                  goto LAB_1476c8c2f;
                }
                local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~local_b8._4_4_);
                FUN_1449c0562(&local_b8);
                iVar6 = local_a8._4_4_;
              } while (local_a8._4_4_ < *(int *)(local_b0 + 0x18));
              uVar3 = local_a8;
              if (((local_88 & 1) != 0) && (local_88._1_1_ == '\x01')) {
                FUN_1476f802c(local_90,*(int *)(local_90 + 8) - *(int *)(local_90 + 0x34));
                uVar3 = local_a8;
              }
            }
          }
          local_a8 = uVar3;
          FUN_1476f84aa(pcVar1);
          FUN_1476f802c(pcVar1,*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x5c));
          *(undefined1 *)(param_1 + 0xb8) = uVar11;
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c8c84 FUN_1476c8c84 body=107 status=ok
// SIG undefined FUN_1476c8c84(void)

void FUN_1476c8c84(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140873d40(param_1 + 0xa0);
  local_28 = 0;
  FUN_14485c47a(&local_28,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1476f8226(param_1 + 0x28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48,local_28);
}



// FUNCTION 1476c8cf0 FUN_1476c8cf0 body=214 status=ok
// SIG undefined FUN_1476c8cf0(void)

void FUN_1476c8cf0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined1 auStack_78 [36];
  undefined8 local_54;
  undefined2 local_4a;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined2 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)(param_1 + 0x28);
  local_48 = (undefined8 *)0x0;
  FUN_14485c47a(&local_48);
  local_40 = local_48;
  iVar1 = FUN_1476f7c64(plVar3,(uint)((ulonglong)local_48 >> 0x20) ^ (uint)local_48);
  if (iVar1 != -1) {
    if ((*plVar3 + (longlong)iVar1 * 0x14 != 0) &&
       (puVar2 = (undefined1 *)(*plVar3 + (longlong)iVar1 * 0x14 + 8), puVar2 != (undefined1 *)0x0))
    {
      *puVar2 = 1;
      goto LAB_1476c8d69;
    }
  }
  local_4a = 1;
  local_54 = 0;
  FUN_14485c47a(&local_54,param_2);
  local_40 = &local_54;
  local_38 = &local_4a;
  FUN_1476f837e(plVar3,local_2c);
LAB_1476c8d69:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c8dc8 FUN_1476c8dc8 body=68 status=ok
// SIG undefined FUN_1476c8dc8(void)

void FUN_1476c8dc8(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  fVar2 = DAT_14cab6b80;
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(int *)(lVar1 + 0x80) == 0) {
    *(undefined4 *)(lVar1 + 0x80) = DAT_14cab2be4;
  }
  FUN_14029f2bc(lVar1,(double)fVar2);
  FUN_1476c83d6(param_1);
  return;
}



// FUNCTION 1476c8e0c FUN_1476c8e0c body=183 status=ok
// SIG undefined FUN_1476c8e0c(void)

undefined8 FUN_1476c8e0c(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1459d4428();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c8ec4 FUN_1476c8ec4 body=267 status=ok
// SIG undefined FUN_1476c8ec4(void)

void FUN_1476c8ec4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_30 != 0) {
    local_28 = local_48;
    local_20 = uStack_40;
    FUN_147792f0a(local_30,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c8fd0 FUN_1476c8fd0 body=267 status=ok
// SIG undefined FUN_1476c8fd0(void)

void FUN_1476c8fd0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_30 != 0) {
    local_28 = local_48;
    local_20 = uStack_40;
    FUN_1477930a6(local_30,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c9138 FUN_1476c9138 body=70 status=ok
// SIG undefined FUN_1476c9138(void)

float FUN_1476c9138(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x118);
  return (float)(((double)((lVar1 >> 0x20) *
                          (longlong)*(int *)(*(longlong *)(param_1 + 0x68) + 0x114)) +
                 (double)((ulonglong)(double)(int)((ulonglong)lVar1 >> 0x20) & 0x8000000000000000))
                / (double)(int)lVar1);
}



// FUNCTION 1476c91da FUN_1476c91da body=161 status=ok
// SIG undefined FUN_1476c91da(void)

void FUN_1476c91da(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if (local_20 != 0) {
    FUN_14779b432(local_20,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c927c FUN_1476c927c body=161 status=ok
// SIG undefined FUN_1476c927c(void)

void FUN_1476c927c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if (local_20 != 0) {
    FUN_14779b5d6(local_20,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c931e FUN_1476c931e body=267 status=ok
// SIG undefined FUN_1476c931e(void)

void FUN_1476c931e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_30 != 0) {
    local_28 = local_48;
    local_20 = uStack_40;
    FUN_14779b7ce(local_30,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c942a FUN_1476c942a body=267 status=ok
// SIG undefined FUN_1476c942a(void)

void FUN_1476c942a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_30 != 0) {
    local_28 = local_48;
    local_20 = uStack_40;
    FUN_14779bb36(local_30,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c9542 FUN_1476c9542 body=248 status=ok
// SIG undefined FUN_1476c9542(void)

longlong * FUN_1476c9542(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar3 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *param_2;
    }
  }
  *param_1 = lVar3;
  plVar1 = param_2 + 1;
  lVar3 = FUN_1446ddbd2();
  if (param_2[1] == 0) {
    if ((int)param_2[4] != 0) goto LAB_1476c9591;
  }
  else {
    cVar2 = FUN_144729dda(param_2 + 2);
    if ((cVar2 != '\0') || ((int)param_2[4] == 0)) {
      lVar4 = *plVar1;
      goto LAB_1476c9604;
    }
LAB_1476c9591:
    lVar4 = FUN_14007daa4(plVar1,0,0);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar4 + 8);
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar5 != 0;
        if (lVar5 != lVar3 && bVar6) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar6 = lVar5 != 0;
            if (lVar5 == lVar3) break;
          } while (lVar5 != 0);
        }
        if (bVar6) goto LAB_1476c95b6;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_1476c95b6:
        *plVar1 = lVar4;
        goto LAB_1476c9604;
      }
    }
    if (*plVar1 != 0) {
      *plVar1 = 0;
      param_2[2] = 0;
    }
  }
  lVar4 = 0;
LAB_1476c9604:
  param_1[1] = lVar4;
  param_1[2] = param_2[2];
  FUN_1406fa324(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 1476c963a FUN_1476c963a body=379 status=ok
// SIG undefined FUN_1476c963a(void)

void FUN_1476c963a(longlong param_1,undefined4 *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  longlong lStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_4 == param_3) {
    uStack_70 = 0;
    local_68 = *param_2;
    uStack_64 = param_2[1];
    uStack_60 = param_2[2];
    uStack_5c = param_2[3];
    local_78 = *(undefined8 *)(param_3 + 0x18);
    local_58 = 1;
  }
  else {
    if (param_3 == 0) {
LAB_1476c968d:
      uStack_70 = 0;
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      local_78 = *(undefined8 *)(param_3 + 0x18);
    }
    else {
      lVar2 = FUN_141117300();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30)) goto LAB_1476c968d;
      if (*(longlong *)(param_3 + 0x30) == 0) goto LAB_1476c9716;
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      uStack_70 = *(undefined8 *)(param_3 + 0x18);
      local_78 = *(undefined8 *)(*(longlong *)(param_3 + 0x30) + 0x18);
    }
    local_58 = 0;
  }
  local_30 = 0;
  lStack_38 = 0;
  local_40 = 0;
  uStack_48 = 0;
  local_50 = 0;
  iVar1 = *(int *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x78) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x7c) < iVar1 + 1U) {
    FUN_1476f856e((longlong *)(param_1 + 0x70),iVar1);
  }
  puVar3 = (undefined4 *)((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x70));
  *(undefined1 *)(puVar3 + 8) = local_58;
  puVar3[4] = local_68;
  puVar3[5] = uStack_64;
  puVar3[6] = uStack_60;
  puVar3[7] = uStack_5c;
  *puVar3 = (undefined4)local_78;
  puVar3[1] = local_78._4_4_;
  puVar3[2] = (undefined4)uStack_70;
  puVar3[3] = uStack_70._4_4_;
  FUN_140c13dec(puVar3 + 10,&local_50);
  if (lStack_38 != 0) {
    FUN_1400020a8();
  }
LAB_1476c9716:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476c97b6 FUN_1476c97b6 body=130 status=ok
// SIG undefined FUN_1476c97b6(void)

undefined8 FUN_1476c97b6(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    if (param_3 == param_2) {
      return 1;
    }
    if (param_2 != 0) {
      lVar1 = FUN_141117300();
      if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
         (*(longlong *)(param_2 + 0x30) == 0)) {
        return 0;
      }
    }
    lVar1 = FUN_1459d45f0();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      uVar2 = FUN_144b00bde(param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1476c9838 FUN_1476c9838 body=362 status=ok
// SIG undefined FUN_1476c9838(void)

void FUN_1476c9838(longlong param_1,int *param_2,longlong *param_3,undefined8 *param_4,
                  longlong param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_3;
  if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x268) != 0)) &&
     ((longlong)*(int *)(param_1 + 0x78) != 0)) {
    lVar8 = *(longlong *)(param_1 + 0x70);
    lVar7 = (longlong)*(int *)(param_1 + 0x78) * 0x50;
    local_60 = param_1;
    do {
      if (((*(int *)(lVar8 + 0x10) == *param_2) && (*(int *)(lVar8 + 0x14) == param_2[1])) &&
         ((*(int *)(lVar8 + 0x18) == param_2[2] && (*(int *)(lVar8 + 0x1c) == param_2[3])))) {
        local_58 = *param_4;
        local_50 = param_4[1];
        if (local_50 != 0) {
          LOCK();
          *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
          UNLOCK();
        }
        local_68 = &local_58;
        lVar5 = FUN_1476c99be(lVar8,*(undefined8 *)(lVar3 + 0x268),lVar3,param_1);
        if (lVar5 != 0) {
          iVar2 = *(int *)(param_5 + 0x10);
          *(uint *)(param_5 + 0x10) = iVar2 + 1U;
          if (*(uint *)(param_5 + 0x14) < iVar2 + 1U) {
            FUN_14571f162(param_5,iVar2);
          }
          lVar6 = *(longlong *)(param_5 + 8);
          if (*(longlong *)(param_5 + 8) == 0) {
            lVar6 = param_5;
          }
          *(longlong *)(lVar6 + (longlong)iVar2 * 8) = lVar5;
          param_1 = local_60;
        }
      }
      lVar8 = lVar8 + 0x50;
      lVar7 = lVar7 + -0x50;
    } while (lVar7 != 0);
  }
  puVar4 = (undefined8 *)param_4[1];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476c99be FUN_1476c99be body=350 status=ok
// SIG undefined FUN_1476c99be(void)

undefined2 *
FUN_1476c99be(longlong param_1,undefined8 param_2,undefined2 *param_3,longlong param_4,
             longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [8];
  longlong local_50;
  longlong local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_4 != 0) && (lVar3 = *param_5, lVar3 != 0)) && (*(longlong *)(param_1 + 0x28) != 0)) {
    local_60 = param_1 + 0x28;
    local_68 = param_1 + 0x10;
    local_48 = param_5[1];
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    local_50 = lVar3;
    FUN_1432dd584(&local_40,&local_50,param_4,&DAT_14cab69dc);
    puVar5 = local_40;
    if (local_40 != (undefined2 *)0x0) goto LAB_1476c9a56;
  }
  puVar5 = param_3;
  if (*(char *)(param_1 + 0x20) == '\0') {
    FUN_1400021e4(param_1,&local_40);
    puVar5 = local_40;
    if (local_38 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_1446f470e(local_58,puVar5,1);
    puVar5 = (undefined2 *)FUN_14778ad4e(param_2,local_58);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puVar5 == (undefined2 *)0x0) {
      puVar5 = (undefined2 *)0x0;
    }
    else if ((*(longlong *)(param_1 + 8) != 0) &&
            (*(undefined2 **)(puVar5 + 0x18) != (undefined2 *)0x0)) {
      puVar5 = *(undefined2 **)(puVar5 + 0x18);
    }
  }
LAB_1476c9a56:
  plVar4 = (longlong *)param_5[1];
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
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5;
}



// FUNCTION 1476c9b24 FUN_1476c9b24 body=72 status=ok
// SIG undefined FUN_1476c9b24(void)

undefined8 FUN_1476c9b24(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_14479d2ce(*param_2 + 0x18);
  plVar3 = (longlong *)param_2[1];
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
  return uVar4;
}



// FUNCTION 1476c9b6c FUN_1476c9b6c body=59 status=ok
// SIG undefined FUN_1476c9b6c(void)

undefined8 FUN_1476c9b6c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_141117300();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return *(undefined8 *)(param_2 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 1476c9ba8 FUN_1476c9ba8 body=369 status=ok
// SIG undefined FUN_1476c9ba8(void)

void FUN_1476c9ba8(longlong param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int *piVar16;
  
  iVar4 = *(int *)(param_1 + 0x78);
  lVar15 = (longlong)iVar4;
  if (lVar15 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x70);
    iVar13 = 0;
    iVar9 = 0;
    bVar7 = *(int *)(lVar6 + 0x1c) == param_2[3] &&
            (*(int *)(lVar6 + 0x18) == param_2[2] &&
            (*(int *)(lVar6 + 0x14) == param_2[1] && *(int *)(lVar6 + 0x10) == *param_2));
    do {
      lVar14 = (longlong)iVar9;
      iVar12 = iVar9 + 1;
      if (iVar9 + 1 < iVar4) {
        iVar12 = iVar4;
      }
      lVar8 = lVar14 * 0x50;
      piVar16 = (int *)(lVar6 + 0x6c + lVar8);
      iVar10 = iVar9;
      do {
        lVar14 = lVar14 + 1;
        iVar11 = iVar12;
        if (lVar15 <= lVar14) break;
        piVar1 = piVar16 + -3;
        piVar2 = piVar16 + -2;
        piVar3 = piVar16 + -1;
        iVar5 = *piVar16;
        iVar10 = iVar10 + 1;
        piVar16 = piVar16 + 0x14;
        iVar11 = iVar10;
      } while (bVar7 == (iVar5 == param_2[3] &&
                        (*piVar3 == param_2[2] && (*piVar2 == param_2[1] && *piVar1 == *param_2))));
      iVar12 = iVar11 - iVar9;
      if (bVar7 == false) {
        if (iVar13 != iVar9) {
          memmove((void *)((longlong)iVar13 * 0x50 + lVar6),(void *)(lVar8 + lVar6),
                  (longlong)iVar12 * 0x50);
        }
        iVar13 = iVar13 + iVar12;
      }
      else {
        FUN_1458185ce(lVar8 + lVar6,iVar12);
      }
      iVar9 = iVar11;
      bVar7 = (bool)(bVar7 ^ 1);
    } while (lVar14 < lVar15);
    *(int *)(param_1 + 0x78) = iVar13;
  }
  return;
}



// FUNCTION 1476c9d28 FUN_1476c9d28 body=750 status=ok
// SIG undefined FUN_1476c9d28(void)

void FUN_1476c9d28(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  uint local_a0;
  undefined4 local_98;
  undefined4 local_88;
  byte local_81;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  plVar9 = &local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_78 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_80 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_81 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_81);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_81);
  }
  local_88 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  uVar6 = local_70;
  uVar5 = local_78;
  uVar4 = local_7c;
  uVar3 = local_80;
  bVar2 = local_81;
  uVar1 = local_88;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar7 = FUN_1476ca376(DAT_14c951640);
  FUN_144757f48(uVar7,0x1000000);
  local_98 = uVar1;
  local_a0 = (uint)bVar2;
  local_a8 = uVar3;
  lVar8 = FUN_1476ca40c(uVar7,uVar6,uVar5,uVar4);
  *plVar9 = lVar8;
  *param_3 = uVar7;
  if ((DAT_14c950c29 == '\x01') && (*plVar9 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ca018 FUN_1476ca018 body=858 status=ok
// SIG undefined FUN_1476ca018(void)

void FUN_1476ca018(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  uint local_b8;
  undefined4 local_b0;
  undefined4 local_9c;
  byte local_95;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  plVar10 = &local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar10 = *(longlong **)(param_2 + 0x38);
  }
  local_80 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_88 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_8c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  local_90 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_94 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  local_95 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_95);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_95);
  }
  local_9c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  uVar7 = local_80;
  uVar6 = local_88;
  uVar5 = local_8c;
  uVar4 = local_90;
  uVar3 = local_94;
  bVar2 = local_95;
  uVar1 = local_9c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar8 = FUN_1476ca376(DAT_14c951640);
  FUN_144757f48(uVar8,0x1000000);
  local_b0 = uVar1;
  local_b8 = (uint)bVar2;
  local_c0 = uVar3;
  local_c8 = uVar4;
  lVar9 = FUN_1476ca4a2(uVar8,uVar7,uVar6,uVar5);
  *plVar10 = lVar9;
  *param_3 = uVar8;
  if ((DAT_14c950c29 == '\x01') && (*plVar10 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ca376 FUN_1476ca376 body=148 status=ok
// SIG undefined FUN_1476ca376(void)

undefined8 FUN_1476ca376(undefined8 param_1)

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
  uVar1 = FUN_14590937c();
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



// FUNCTION 1476ca40c FUN_1476ca40c body=149 status=ok
// SIG undefined FUN_1476ca40c(void)

longlong FUN_1476ca40c(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    local_30 = param_7;
    local_38 = param_6;
    local_28 = 0;
    lVar1 = FUN_14333c8c0(param_2,param_3,param_4,param_5);
    if (lVar1 != 0) {
      FUN_1476ca554(lVar1 + 0x280,local_20,param_1);
      goto LAB_1476ca465;
    }
  }
  lVar1 = 0;
LAB_1476ca465:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ca4a2 FUN_1476ca4a2 body=176 status=ok
// SIG undefined FUN_1476ca4a2(void)

longlong FUN_1476ca4a2(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    local_38 = param_8;
    local_40 = param_7;
    local_48 = param_6;
    local_30 = 0;
    lVar1 = FUN_14333c93c(param_2,param_3,param_4,param_5);
    if (lVar1 != 0) {
      FUN_1476ca554(lVar1 + 0x280,&local_28,param_1);
      *(undefined8 *)(param_1 + 0x38) = local_28;
      goto LAB_1476ca50b;
    }
  }
  lVar1 = 0;
LAB_1476ca50b:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ca554 FUN_1476ca554 body=244 status=ok
// SIG undefined FUN_1476ca554(void)

undefined8 FUN_1476ca554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14a508d10;
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
  *local_38 = &PTR_FUN_14a508ca0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_1476ca64a;
  FUN_1476f8602(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ca64a FUN_1476ca64a body=312 status=ok
// SIG undefined FUN_1476ca64a(void)

void FUN_1476ca64a(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_14480f766(param_2 + 0x280,*(longlong *)(param_1 + 0x38));
  }
  uVar4 = FUN_1401cb356();
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar2 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14a508d80;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_1);
  puVar2[4] = FUN_1476ca784;
  local_48 = 0;
  FUN_1405f67fc(uVar4,local_30,&local_40,L"UWidgetAnimationPlayCallbackProxy_OnAnimationFinished");
  FUN_1449db362(&local_40);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ca784 FUN_1476ca784 body=22 status=ok
// SIG undefined FUN_1476ca784(void)

undefined8 FUN_1476ca784(longlong param_1)

{
  FUN_1447cd2ec(param_1 + 0x28,0);
  return 0;
}



// FUNCTION 1476ca79a FUN_1476ca79a body=120 status=ok
// SIG undefined FUN_1476ca79a(void)

undefined8 * FUN_1476ca79a(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab7588) {
    FUN_144b3d300(&DAT_14cab7588);
    if (DAT_14cab7588 == -1) {
      FUN_1446ddc76(&DAT_14cab7580,"SlateFontInfo",1);
      _Init_thread_footer(&DAT_14cab7588);
    }
  }
  *param_1 = DAT_14cab7580;
  return param_1;
}



// FUNCTION 1476ca812 FUN_1476ca812 body=120 status=ok
// SIG undefined FUN_1476ca812(void)

undefined8 * FUN_1476ca812(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab7598) {
    FUN_144b3d300(&DAT_14cab7598);
    if (DAT_14cab7598 == -1) {
      FUN_1446ddc76(&DAT_14cab7590,"SlateBrush",1);
      _Init_thread_footer(&DAT_14cab7598);
    }
  }
  *param_1 = DAT_14cab7590;
  return param_1;
}


