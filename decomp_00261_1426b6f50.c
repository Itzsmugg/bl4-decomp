// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1426b6f50 FUN_1426b6f50 body=838 status=ok
// SIG undefined FUN_1426b6f50(void)

undefined8
FUN_1426b6f50(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  longlong lVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  ulonglong in_stack_fffffffffffffe98;
  undefined1 *in_stack_fffffffffffffea0;
  undefined1 local_140 [112];
  undefined8 local_d0;
  undefined1 local_c8 [8];
  ushort local_c0;
  short local_be;
  int local_bc;
  short *local_b0;
  undefined4 local_84;
  undefined **local_80;
  ulonglong local_78;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  local_84 = 0;
  FUN_1424a6be0(local_c8);
  if (*(char *)(param_1 + 0x30) != '\0') {
    local_80 = icu_64::ParsePosition::vftable;
    local_78 = 0xffffffff00000001;
    local_d0 = param_2;
    FUN_14252c810(local_140);
    uVar2 = (uint)local_c0;
    uVar8 = 0;
    do {
      iVar3 = (int)(short)uVar2 >> 5;
      if ((short)uVar2 < 0) {
        iVar3 = local_bc;
      }
      if ((iVar3 < 1) || ((int)local_78 == 0)) goto LAB_1426b7107;
      local_78 = local_78 & 0xffffffff00000000;
      in_stack_fffffffffffffe98 = CONCAT44((int)(in_stack_fffffffffffffe98 >> 0x20),param_7);
      in_stack_fffffffffffffea0 = local_140;
      FUN_1425f1450(*(undefined8 *)(param_1 + 0x10),local_c8,&local_80,0,in_stack_fffffffffffffe98,
                    local_140);
      if ((int)local_78 == 0) goto LAB_1426b7107;
      *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + (int)local_78;
      if ((int)local_78 == 0x7fffffff) {
        uVar1 = local_c0 & 1;
        local_c0 = local_c0 & 0x1f;
        if (uVar1 != 0) {
          local_c0 = 2;
        }
      }
      else {
        in_stack_fffffffffffffea0 =
             (undefined1 *)((ulonglong)in_stack_fffffffffffffea0 & 0xffffffff00000000);
        in_stack_fffffffffffffe98 = in_stack_fffffffffffffe98 & 0xffffffff00000000;
        FUN_1424a9130(local_c8,0,local_78 & 0xffffffff,0,in_stack_fffffffffffffe98,
                      in_stack_fffffffffffffea0);
      }
      uVar8 = uVar8 + 1;
      while( true ) {
        uVar2 = (uint)(short)local_c0;
        iVar3 = (int)uVar2 >> 5;
        if ((short)local_c0 < 0) {
          iVar3 = local_bc;
        }
        if (iVar3 < 1) break;
        psVar7 = &local_be;
        if ((uVar2 & 2) == 0) {
          psVar7 = local_b0;
        }
        if (*psVar7 != 0x20) break;
        in_stack_fffffffffffffea0 =
             (undefined1 *)((ulonglong)in_stack_fffffffffffffea0 & 0xffffffff00000000);
        in_stack_fffffffffffffe98 = in_stack_fffffffffffffe98 & 0xffffffff00000000;
        FUN_1424a9130(local_c8,0,1,0,in_stack_fffffffffffffe98,in_stack_fffffffffffffea0);
        *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
      }
    } while( true );
  }
  uVar8 = 0;
LAB_1426b7182:
  FUN_1426b6050(param_1,local_c8,param_3,param_4,param_5,
                (ulonglong)in_stack_fffffffffffffea0 & 0xffffffffffffff00,param_7,param_8);
  if (*(char *)(param_1 + 0x30) != '\0') {
    iVar3 = FUN_14252d170(param_8,&local_84);
    if (iVar3 < 1) {
      lVar5 = 1;
    }
    else {
      lVar5 = 1;
      do {
        lVar5 = lVar5 * 10;
      } while (lVar5 <= iVar3);
    }
    if (uVar8 != 0) {
      uVar2 = uVar8;
      if ((uVar8 & 7) != 0) {
        uVar2 = 0;
        do {
          lVar5 = lVar5 * 10;
          uVar2 = uVar2 + 1;
        } while ((uVar8 & 7) != uVar2);
        uVar2 = uVar8 - uVar2;
      }
      if (7 < uVar8) {
        iVar6 = uVar2 + 8;
        do {
          lVar5 = lVar5 * 100000000;
          iVar6 = iVar6 + -8;
        } while (8 < iVar6);
      }
    }
    FUN_14252d340(param_8,(double)iVar3 / (double)lVar5);
  }
  FUN_140859a90(local_c8);
  return 1;
LAB_1426b7107:
  FUN_1424a7c80(local_c8,local_d0);
  if (*(int *)(param_3 + 8) == 0x7fffffff) {
    uVar4 = local_c0 & 0x1f;
    uVar1 = local_c0 & 1;
    local_c0 = 2;
    if (uVar1 == 0) {
      local_c0 = uVar4;
    }
  }
  else {
    in_stack_fffffffffffffea0 =
         (undefined1 *)((ulonglong)in_stack_fffffffffffffea0 & 0xffffffff00000000);
    FUN_1424a9130(local_c8,0,*(int *)(param_3 + 8),0,in_stack_fffffffffffffe98 & 0xffffffff00000000,
                  in_stack_fffffffffffffea0);
  }
  *(undefined4 *)(param_3 + 8) = 0;
  FUN_14252d110(local_140);
  thunk_FUN_1424b70d0(&local_80);
  if (*(char *)(param_1 + 0x30) != '\0') {
    param_4 = 0;
  }
  goto LAB_1426b7182;
}



// FUNCTION 1426b72b0 Unwind@1426b72b0 body=74 status=ok
// SIG undefined Unwind@1426b72b0(void)

void Unwind_1426b72b0(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(param_2 + 0x48);
  return;
}



// FUNCTION 1426b7300 Unwind@1426b7300 body=77 status=ok
// SIG undefined Unwind@1426b7300(void)

void Unwind_1426b7300(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x108);
  return;
}



// FUNCTION 1426b7350 Unwind@1426b7350 body=74 status=ok
// SIG undefined Unwind@1426b7350(void)

void Unwind_1426b7350(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xc0);
  return;
}



// FUNCTION 1426b73a0 FUN_1426b73a0 body=136 status=ok
// SIG undefined FUN_1426b73a0(void)

byte FUN_1426b73a0(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = __RTtypeid();
  lVar5 = __RTtypeid(param_2);
  iVar3 = __std_type_info_compare(lVar4 + 8,lVar5 + 8);
  if (((iVar3 == 0) && (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
     ((*(longlong *)(param_1 + 0x10) != 0) != (*(longlong *)(param_2 + 0x10) == 0))) {
    if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
      if (*(longlong *)(param_2 + 0x18) != 0) goto LAB_1426b741e;
    }
    else {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
      if (cVar1 == '\0') goto LAB_1426b741e;
    }
    bVar2 = -(*(double *)(param_2 + 0x20) == *(double *)(param_1 + 0x20)) & 1;
  }
  else {
LAB_1426b741e:
    bVar2 = 0;
  }
  return bVar2;
}



// FUNCTION 1426b7430 FUN_1426b7430 body=8 status=ok
// SIG undefined FUN_1426b7430(void)

undefined * FUN_1426b7430(void)

{
  return &DAT_14c7feccb;
}



// FUNCTION 1426b7440 FUN_1426b7440 body=2 status=ok
// SIG undefined FUN_1426b7440(void)

void FUN_1426b7440(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1426b7450 FUN_1426b7450 body=78 status=ok
// SIG undefined FUN_1426b7450(void)

undefined8 * FUN_1426b7450(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::NFSubstitution::vftable;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[3] = 0;
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426b74f0 FUN_1426b74f0 body=78 status=ok
// SIG undefined FUN_1426b74f0(void)

undefined8 * FUN_1426b74f0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::NFSubstitution::vftable;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[3] = 0;
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426b7540 FUN_1426b7540 body=44 status=ok
// SIG undefined FUN_1426b7540(void)

void FUN_1426b7540(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1425f1a40(param_2,param_3);
  *(longlong *)(param_1 + 0x20) = lVar1;
  if (lVar1 == 0) {
    *param_4 = 9;
  }
  return;
}



// FUNCTION 1426b7570 FUN_1426b7570 body=17 status=ok
// SIG undefined FUN_1426b7570(void)

void FUN_1426b7570(longlong param_1,double param_2)

{
  fmod(param_2,(double)*(longlong *)(param_1 + 0x20));
  return;
}



// FUNCTION 1426b7590 FUN_1426b7590 body=32 status=ok
// SIG undefined FUN_1426b7590(void)

ulonglong FUN_1426b7590(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  if ((param_2 | uVar1) >> 0x20 != 0) {
    return (longlong)param_2 % (longlong)uVar1;
  }
  return (param_2 & 0xffffffff) % (uVar1 & 0xffffffff);
}



// FUNCTION 1426b75b0 FUN_1426b75b0 body=67 status=ok
// SIG undefined FUN_1426b75b0(void)

double FUN_1426b75b0(longlong param_1,double param_2,double param_3)

{
  double dVar1;
  
  dVar1 = fmod(param_3,(double)*(longlong *)(param_1 + 0x20));
  return (param_3 - dVar1) + param_2;
}



// FUNCTION 1426b7600 FUN_1426b7600 body=7 status=ok
// SIG undefined FUN_1426b7600(void)

double FUN_1426b7600(longlong param_1)

{
  return (double)*(longlong *)(param_1 + 0x20);
}



// FUNCTION 1426b7610 FUN_1426b7610 body=5 status=ok
// SIG undefined FUN_1426b7610(void)

undefined2 FUN_1426b7610(void)

{
  return 0x3e;
}



// FUNCTION 1426b7620 FUN_1426b7620 body=3 status=ok
// SIG undefined FUN_1426b7620(void)

undefined1 FUN_1426b7620(void)

{
  return 1;
}



// FUNCTION 1426b7630 FUN_1426b7630 body=78 status=ok
// SIG undefined FUN_1426b7630(void)

undefined8 * FUN_1426b7630(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::NFSubstitution::vftable;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[3] = 0;
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426b7690 FUN_1426b7690 body=40 status=ok
// SIG undefined FUN_1426b7690(void)

double FUN_1426b7690(undefined8 param_1,double param_2)

{
  double dVar1;
  
  dVar1 = (double)FUN_1424d97b0(param_2);
  return param_2 - dVar1;
}



// FUNCTION 1426b7700 FUN_1426b7700 body=78 status=ok
// SIG undefined FUN_1426b7700(void)

undefined8 * FUN_1426b7700(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::NFSubstitution::vftable;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[3] = 0;
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426b77a0 FUN_1426b77a0 body=78 status=ok
// SIG undefined FUN_1426b77a0(void)

undefined8 * FUN_1426b77a0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::NFSubstitution::vftable;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[3] = 0;
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426b7850 FUN_1426b7850 body=78 status=ok
// SIG undefined FUN_1426b7850(void)

undefined8 * FUN_1426b7850(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::NFSubstitution::vftable;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[3] = 0;
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426b78a0 FUN_1426b78a0 body=44 status=ok
// SIG undefined FUN_1426b78a0(void)

void FUN_1426b78a0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1425f1a40(param_2,param_3);
  *(longlong *)(param_1 + 0x20) = lVar1;
  if (lVar1 == 0) {
    *param_4 = 9;
  }
  return;
}



// FUNCTION 1426b7940 FUN_1426b7940 body=78 status=ok
// SIG undefined FUN_1426b7940(void)

undefined8 * FUN_1426b7940(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::NFSubstitution::vftable;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[3] = 0;
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426b79e0 FUN_1426b79e0 body=8 status=ok
// SIG undefined FUN_1426b79e0(void)

undefined * FUN_1426b79e0(void)

{
  return &DAT_14c7feccc;
}



// FUNCTION 1426b79f0 FUN_1426b79f0 body=3 status=ok
// SIG undefined FUN_1426b79f0(void)

undefined8 FUN_1426b79f0(void)

{
  return 0;
}



// FUNCTION 1426b7a00 FUN_1426b7a00 body=3 status=ok
// SIG undefined FUN_1426b7a00(void)

undefined8 FUN_1426b7a00(void)

{
  return 0;
}



// FUNCTION 1426b7a10 FUN_1426b7a10 body=10 status=ok
// SIG undefined FUN_1426b7a10(void)

void FUN_1426b7a10(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



// FUNCTION 1426b7a20 FUN_1426b7a20 body=19 status=ok
// SIG undefined FUN_1426b7a20(void)

undefined8 FUN_1426b7a20(undefined8 param_1,undefined8 param_2,int *param_3)

{
  if (0 < *param_3) {
    return 0;
  }
  *param_3 = 0x10;
  return 0;
}



// FUNCTION 1426b7a40 FUN_1426b7a40 body=29 status=ok
// SIG undefined FUN_1426b7a40(void)

void FUN_1426b7a40(longlong param_1,longlong param_2)

{
  if (*(short *)(param_2 + 8) < 0) {
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0xc);
    return;
  }
  *(int *)(param_1 + 0x148) = (int)*(short *)(param_2 + 8) >> 5;
  return;
}



// FUNCTION 1426b7a60 FUN_1426b7a60 body=55 status=ok
// SIG undefined FUN_1426b7a60(void)

void FUN_1426b7a60(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  
  if (*param_3 < 1) {
    lVar1 = FUN_14250e6d0(param_2);
    if (lVar1 < 0x80000000) {
      *(int *)(param_1 + 0x148) = (int)lVar1;
    }
    else {
      *param_3 = 8;
    }
  }
  return;
}



// FUNCTION 1426b7aa0 FUN_1426b7aa0 body=10 status=ok
// SIG undefined FUN_1426b7aa0(void)

void FUN_1426b7aa0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



// FUNCTION 1426b7ab0 FUN_1426b7ab0 body=3 status=ok
// SIG undefined FUN_1426b7ab0(void)

undefined8 FUN_1426b7ab0(void)

{
  return 0;
}



// FUNCTION 1426b7ac0 FUN_1426b7ac0 body=7 status=ok
// SIG undefined FUN_1426b7ac0(void)

undefined4 FUN_1426b7ac0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x148);
}



// FUNCTION 1426b7ad0 FUN_1426b7ad0 body=3 status=ok
// SIG undefined FUN_1426b7ad0(void)

undefined8 FUN_1426b7ad0(void)

{
  return 0;
}



// FUNCTION 1426b7ae0 FUN_1426b7ae0 body=7 status=ok
// SIG undefined FUN_1426b7ae0(void)

undefined4 FUN_1426b7ae0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x148);
}



// FUNCTION 1426b7af0 FUN_1426b7af0 body=3 status=ok
// SIG undefined FUN_1426b7af0(void)

undefined8 FUN_1426b7af0(void)

{
  return 0;
}



// FUNCTION 1426b7b00 FUN_1426b7b00 body=7 status=ok
// SIG undefined FUN_1426b7b00(void)

undefined4 FUN_1426b7b00(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x148);
}



// FUNCTION 1426b7b10 FUN_1426b7b10 body=3 status=ok
// SIG undefined FUN_1426b7b10(void)

undefined8 FUN_1426b7b10(void)

{
  return 0;
}



// FUNCTION 1426b7b20 FUN_1426b7b20 body=3 status=ok
// SIG undefined FUN_1426b7b20(void)

undefined8 FUN_1426b7b20(void)

{
  return 0;
}



// FUNCTION 1426b7b30 FUN_1426b7b30 body=7 status=ok
// SIG undefined FUN_1426b7b30(void)

undefined4 FUN_1426b7b30(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x148);
}



// FUNCTION 1426b7b40 FUN_1426b7b40 body=19 status=ok
// SIG undefined FUN_1426b7b40(void)

undefined8 FUN_1426b7b40(void)

{
  int *in_R9;
  
  if (0 < *in_R9) {
    return 0;
  }
  *in_R9 = 0x10;
  return 0;
}



// FUNCTION 1426b7b60 FUN_1426b7b60 body=18 status=ok
// SIG undefined FUN_1426b7b60(void)

undefined8 FUN_1426b7b60(undefined8 param_1,undefined8 param_2,int *param_3)

{
  if (0 < *param_3) {
    return param_1;
  }
  *param_3 = 0x10;
  return param_1;
}



// FUNCTION 1426b7b80 FUN_1426b7b80 body=357 status=ok
// SIG undefined FUN_1426b7b80(void)

undefined8 *
FUN_1426b7b80(longlong param_1,undefined8 param_2,uint param_3,undefined8 *param_4,longlong *param_5
             ,int *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_108 [224];
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (0 < *param_6) {
    return (undefined8 *)0x0;
  }
  param_3 = param_3 & 0xe0;
  if ((param_3 != 0) && (param_4 != (undefined8 *)0x0)) {
    *param_6 = 1;
    return (undefined8 *)0x0;
  }
  if (param_4 != (undefined8 *)0x0) {
    return param_4;
  }
  if (param_3 == 0x40) {
    if (param_1 == 0) {
      FUN_1412ae150(local_108,param_2,0,0,0);
    }
    else {
      FUN_1424a3ce0(local_108,param_1);
    }
    puVar2 = (undefined8 *)FUN_1424ba430(local_108,param_6);
LAB_1426b7ca5:
    FUN_1414b3f60(local_108);
  }
  else {
    if (param_3 == 0x20) {
      puVar2 = (undefined8 *)thunk_FUN_1424da030(0x150);
      if (puVar2 != (undefined8 *)0x0) {
        local_28 = puVar2;
        FUN_1424ba440(puVar2);
        *local_28 = icu_64::WholeStringBreakIterator::vftable;
        *(undefined4 *)(local_28 + 0x29) = 0;
        puVar2 = local_28;
        goto LAB_1426b7cbb;
      }
      *param_6 = 7;
    }
    else {
      if (param_3 == 0) {
        if (param_1 == 0) {
          FUN_1412ae150(local_108,param_2,0,0,0);
        }
        else {
          FUN_1424a3ce0(local_108,param_1);
        }
        puVar2 = (undefined8 *)FUN_140661620(local_108,param_6);
        goto LAB_1426b7ca5;
      }
      *param_6 = 1;
    }
    puVar2 = (undefined8 *)0x0;
  }
LAB_1426b7cbb:
  puVar1 = (undefined8 *)*param_5;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *param_5 = (longlong)puVar2;
  return puVar2;
}



// FUNCTION 1426b7cf0 Unwind@1426b7cf0 body=37 status=ok
// SIG undefined Unwind@1426b7cf0(void)

void Unwind_1426b7cf0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x30);
  return;
}



// FUNCTION 1426b7d20 Unwind@1426b7d20 body=40 status=ok
// SIG undefined Unwind@1426b7d20(void)

void Unwind_1426b7d20(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x110));
  return;
}



// FUNCTION 1426b7d50 Unwind@1426b7d50 body=37 status=ok
// SIG undefined Unwind@1426b7d50(void)

void Unwind_1426b7d50(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x30);
  return;
}



// FUNCTION 1426b7d80 FUN_1426b7d80 body=38 status=ok
// SIG undefined FUN_1426b7d80(void)

undefined8 FUN_1426b7d80(undefined8 param_1,int param_2)

{
  thunk_FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426b7db0 thunk_FUN_1424b70d0 body=5 status=ok
// SIG undefined thunk_FUN_1424b70d0(void)

void thunk_FUN_1424b70d0(void)

{
  return;
}



// FUNCTION 1426b7dc0 thunk_FUN_1424b70d0 body=5 status=ok
// SIG undefined thunk_FUN_1424b70d0(void)

void thunk_FUN_1424b70d0(void)

{
  return;
}



// FUNCTION 1426b7dd0 FUN_1426b7dd0 body=77 status=ok
// SIG undefined FUN_1426b7dd0(void)

undefined8 * FUN_1426b7dd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1425ce570(param_3);
  *param_1 = uVar1;
  uVar1 = FUN_1425ce4e0(param_3);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  return param_1;
}



// FUNCTION 1426b7e20 FUN_1426b7e20 body=1 status=ok
// SIG undefined FUN_1426b7e20(void)

void FUN_1426b7e20(void)

{
  return;
}



// FUNCTION 1426b7e30 FUN_1426b7e30 body=79 status=ok
// SIG undefined FUN_1426b7e30(void)

void FUN_1426b7e30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  int *param_5)

{
  if (0 < *param_5) {
    return;
  }
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined4 **)(param_1 + 0x28) = param_4;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 4) = 0xffffffff;
    *(undefined2 *)(*(longlong *)(param_1 + 0x28) + 8) = 0;
    *(undefined2 *)(*(longlong *)(param_1 + 0x28) + 0x28) = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1426b7e80();
  return;
}



// FUNCTION 1426b7e80 FUN_1426b7e80 body=556 status=ok
// SIG undefined FUN_1426b7e80(void)

void FUN_1426b7e80(longlong param_1,longlong param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  short sVar10;
  bool bVar11;
  
  if (*param_3 < 1) {
    *(longlong *)(param_1 + 0x10) = param_2;
    *(undefined4 *)(param_1 + 0x48) = 0;
    uVar6 = (uint)*(short *)(param_2 + 8);
    if (*(short *)(param_2 + 8) < 0) {
      uVar8 = *(uint *)(param_2 + 0xc);
    }
    else {
      uVar8 = (int)uVar6 >> 5;
    }
    if (0 < (int)uVar8) {
      uVar5 = 0;
      do {
        sVar10 = -1;
        if (uVar5 < uVar8) {
          if ((uVar6 & 2) == 0) {
            param_2 = *(longlong *)(param_2 + 0x18);
          }
          else {
            param_2 = param_2 + 10;
          }
          sVar10 = *(short *)(param_2 + (longlong)(int)uVar5 * 2);
        }
        cVar4 = FUN_1425cc7f0(sVar10);
        if (cVar4 != '\0') {
          uVar5 = *(int *)(param_1 + 0x48) + 1;
          *(uint *)(param_1 + 0x48) = uVar5;
          goto LAB_1426b808c;
        }
        switch(sVar10) {
        case 0x22:
        case 0x24:
        case 0x25:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
switchD_1426b7f4f_caseD_22:
          if (0 < *param_3) {
            return;
          }
          *param_3 = 3;
          *(char **)(param_1 + 0x30) = "expected a reset or setting or comment";
          if (*(longlong *)(param_1 + 0x28) != 0) {
            FUN_1426bacb0(param_1);
            iVar2 = *param_3;
            goto joined_r0x0001426b7f7d;
          }
LAB_1426b8080:
          iVar2 = *param_3;
          break;
        case 0x23:
          lVar3 = *(longlong *)(param_1 + 0x10);
          sVar10 = *(short *)(lVar3 + 8);
          if (sVar10 < 0) {
            uVar6 = *(uint *)(lVar3 + 0xc);
          }
          else {
            uVar6 = (int)sVar10 >> 5;
          }
          lVar9 = (longlong)*(int *)(param_1 + 0x48) + 1;
          uVar8 = (uint)lVar9;
          if ((int)uVar6 <= (int)uVar8) {
LAB_1426b8076:
            *(uint *)(param_1 + 0x48) = uVar8;
            goto LAB_1426b8080;
          }
          uVar8 = *(int *)(param_1 + 0x48) + 2;
          do {
            if ((uint)lVar9 < uVar6) {
              lVar7 = lVar3 + 10;
              if (((int)sVar10 & 2U) == 0) {
                lVar7 = *(longlong *)(lVar3 + 0x18);
              }
              uVar1 = *(ushort *)(lVar7 + lVar9 * 2);
              if ((((uVar1 < 0xe) && ((0x3400U >> (uVar1 & 0x1f) & 1) != 0)) || (uVar1 - 0x2028 < 2)
                  ) || (uVar1 == 0x85)) goto LAB_1426b8076;
            }
            lVar9 = lVar9 + 1;
            bVar11 = uVar8 != uVar6;
            uVar8 = uVar8 + 1;
          } while (bVar11);
          *(uint *)(param_1 + 0x48) = uVar6;
          iVar2 = *param_3;
          break;
        case 0x26:
          FUN_1426b80d0(param_1,param_3);
          iVar2 = *param_3;
          goto joined_r0x0001426b7f7d;
        case 0x40:
          FUN_142613930(*(undefined8 *)(param_1 + 0x20),0x800,0x11,0,param_3);
        case 0x21:
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
          iVar2 = *param_3;
          break;
        default:
          if (sVar10 != 0x5b) goto switchD_1426b7f4f_caseD_22;
          FUN_1426b82c0(param_1,param_3);
          iVar2 = *param_3;
joined_r0x0001426b7f7d:
          if (0 < iVar2) {
            return;
          }
          goto LAB_1426b8089;
        }
        if (0 < iVar2) {
          return;
        }
LAB_1426b8089:
        uVar5 = *(uint *)(param_1 + 0x48);
LAB_1426b808c:
        param_2 = *(longlong *)(param_1 + 0x10);
        uVar6 = (uint)*(short *)(param_2 + 8);
        if (*(short *)(param_2 + 8) < 0) {
          uVar8 = *(uint *)(param_2 + 0xc);
        }
        else {
          uVar8 = (int)uVar6 >> 5;
        }
        if ((int)uVar8 <= (int)uVar5) {
          return;
        }
      } while( true );
    }
  }
  return;
}



// FUNCTION 1426b80d0 FUN_1426b80d0 body=456 status=ok
// SIG undefined FUN_1426b80d0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1426b80d0(longlong param_1,int *param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  uint uVar10;
  longlong lVar11;
  ushort *puVar12;
  
  uVar5 = FUN_1426b9910();
  uVar8 = FUN_1426b9c80(param_1,param_2);
  if (*param_2 < 1) {
    bVar4 = true;
    do {
      if ((int)(uint)uVar8 < 0) {
        lVar11 = *(longlong *)(param_1 + 0x10);
        sVar1 = *(short *)(lVar11 + 8);
        if (sVar1 < 0) {
          uVar10 = *(uint *)(lVar11 + 0xc);
        }
        else {
          uVar10 = (int)sVar1 >> 5;
        }
        uVar7 = *(uint *)(param_1 + 0x48);
        if (uVar7 < uVar10 && (int)uVar7 < (int)uVar10) {
          if (((int)sVar1 & 2U) == 0) {
            lVar11 = *(longlong *)(lVar11 + 0x18);
            sVar1 = *(short *)(lVar11 + (longlong)(int)uVar7 * 2);
          }
          else {
            lVar11 = lVar11 + 10;
            sVar1 = *(short *)(lVar11 + (longlong)(int)uVar7 * 2);
          }
          if (sVar1 == 0x23) {
            uVar7 = uVar7 + 1;
            uVar6 = uVar7;
            if ((int)uVar7 < (int)uVar10) {
              puVar12 = (ushort *)(lVar11 + (longlong)(int)uVar7 * 2);
              do {
                if (uVar7 < uVar10) {
                  uVar2 = *puVar12;
                  if ((((uVar2 < 0xe) && ((0x3400U >> (uVar2 & 0x1f) & 1) != 0)) ||
                      (uVar2 - 0x2028 < 2)) || (uVar2 == 0x85)) {
                    uVar6 = uVar7 + 1;
                    break;
                  }
                }
                puVar12 = puVar12 + 1;
                uVar7 = uVar7 + 1;
                uVar6 = uVar10;
              } while (uVar10 != uVar7);
            }
            *(uint *)(param_1 + 0x48) = uVar6;
            goto LAB_1426b8111;
          }
        }
        if (!bVar4) {
          return;
        }
        *param_2 = 3;
        pcVar9 = "reset not followed by a relation";
LAB_1426b8291:
        *(char **)(param_1 + 0x30) = pcVar9;
        if (*(longlong *)(param_1 + 0x28) == 0) {
          return;
        }
        FUN_1426bacb0(param_1);
        return;
      }
      uVar10 = (uint)uVar8 & 0xf;
      if ((int)uVar5 < 0xf) {
        if (bVar4) {
          if (uVar10 != uVar5) {
            *param_2 = 3;
            pcVar9 = "reset-before strength differs from its first relation";
            goto LAB_1426b8291;
          }
        }
        else if ((int)uVar10 < (int)uVar5) {
          *param_2 = 3;
          pcVar9 = "reset-before strength followed by a stronger relation";
          goto LAB_1426b8291;
        }
      }
      if ((uVar8 & 0x10) == 0) {
        FUN_1426b9e80();
        iVar3 = *param_2;
      }
      else {
        FUN_1426ba0f0(param_1,uVar10,((uint)(uVar8 >> 8) & 0xffffff) + *(int *)(param_1 + 0x48),
                      param_2);
        iVar3 = *param_2;
      }
      if (0 < iVar3) {
        return;
      }
      bVar4 = false;
LAB_1426b8111:
      uVar8 = FUN_1426b9c80(param_1,param_2);
    } while (*param_2 < 1);
  }
  return;
}



// FUNCTION 1426b82c0 FUN_1426b82c0 body=4030 status=ok
// SIG undefined FUN_1426b82c0(void)

void FUN_1426b82c0(longlong param_1,int *param_2)

{
  longlong *plVar1;
  short sVar2;
  ushort uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  char *pcVar13;
  int iVar14;
  bool bVar15;
  undefined8 in_stack_fffffffffffffcd8;
  undefined8 in_stack_fffffffffffffce0;
  undefined8 uVar16;
  undefined4 uVar17;
  char local_318 [96];
  undefined **local_2b8;
  undefined2 local_2b0;
  undefined4 local_278;
  undefined1 local_274;
  short local_270;
  uint local_26c;
  longlong local_1d0;
  undefined4 local_1c8;
  undefined2 local_1c4;
  int local_198;
  undefined **local_190;
  short local_188;
  ushort local_186;
  int local_184;
  ushort *local_178;
  int local_14c;
  undefined1 local_148 [8];
  ushort local_140;
  undefined1 local_13e [2];
  uint local_13c;
  undefined1 *local_130;
  undefined **local_78;
  ushort local_70;
  uint local_6c;
  longlong local_60 [5];
  undefined8 local_38;
  
  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffcd8 >> 0x20);
  uVar17 = (undefined4)((ulonglong)in_stack_fffffffffffffce0 >> 0x20);
  local_38 = 0xfffffffffffffffe;
  if (0 < *param_2) {
    return;
  }
  local_78 = &PTR_FUN_149e18960;
  local_70 = 2;
  iVar14 = *(int *)(param_1 + 0x48) + 1;
  uVar5 = FUN_1426bb200(param_1,iVar14,&local_78);
  if ((((int)uVar5 <= iVar14) || (local_70 < 0x20)) && (*param_2 < 1)) {
    *param_2 = 3;
    *(char **)(param_1 + 0x30) = "expected a setting/option at \'[\'";
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1426bacb0(param_1);
    }
  }
  lVar8 = *(longlong *)(param_1 + 0x10);
  sVar2 = *(short *)(lVar8 + 8);
  if (sVar2 < 0) {
    uVar10 = *(uint *)(lVar8 + 0xc);
  }
  else {
    uVar10 = (int)sVar2 >> 5;
  }
  if (uVar10 <= uVar5) {
LAB_1426b907c:
    if (*param_2 < 1) {
      *param_2 = 3;
      *(char **)(param_1 + 0x30) = "not a valid setting/option";
      if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_1426bacb0(param_1);
      }
    }
    goto LAB_1426b90a1;
  }
  if (((int)sVar2 & 2U) == 0) {
    lVar8 = *(longlong *)(lVar8 + 0x18);
  }
  else {
    lVar8 = lVar8 + 10;
  }
  sVar2 = *(short *)(lVar8 + (longlong)(int)uVar5 * 2);
  if (sVar2 == 0x5b) {
    FUN_142511900(local_148);
    uVar7 = FUN_1426bb9d0(param_1,uVar5,local_148,param_2);
    if (*param_2 < 1) {
      FUN_1424a7060(&local_278,1,L"optimize",0xffffffff);
      if ((local_70 & 1) == 0) {
        uVar5 = local_6c;
        if (-1 < (short)local_70) {
          uVar5 = (int)(short)local_70 >> 5;
        }
        if (-1 < local_270) {
          local_26c = (int)local_270 >> 5;
        }
        if ((((int)local_270 & 1U) == 0) && (uVar5 == local_26c)) {
          cVar4 = FUN_1412ae090(&local_78,&local_278);
          bVar15 = cVar4 != '\0';
          goto LAB_1426b871a;
        }
        FUN_140859a90(&local_278);
LAB_1426b8758:
        FUN_1424a7060(&local_278,1,L"suppressContractions",0xffffffff);
        cVar4 = FUN_14626a19a(&local_78,&local_278);
        FUN_140859a90(&local_278);
        if (cVar4 == '\0') {
          FUN_1425121d0(local_148);
          goto LAB_1426b907c;
        }
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))
                  (*(longlong **)(param_1 + 0x38),local_148,param_1 + 0x30,param_2);
        if (0 < *param_2) {
          FUN_1426bacb0(param_1);
        }
      }
      else {
        bVar15 = (bool)((byte)local_270 & 1);
LAB_1426b871a:
        FUN_140859a90(&local_278);
        if (bVar15 == false) goto LAB_1426b8758;
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))
                  (*(longlong **)(param_1 + 0x38),local_148,param_1 + 0x30,param_2);
        if (0 < *param_2) {
          FUN_1426bacb0(param_1);
        }
      }
      *(undefined4 *)(param_1 + 0x48) = uVar7;
    }
    FUN_1425121d0(local_148);
    goto LAB_1426b90a1;
  }
  if (sVar2 != 0x5d) goto LAB_1426b907c;
  FUN_1424a7060(local_148,CONCAT71((uint7)(uint3)(uVar10 >> 8),1),L"reorder",0xffffffff);
  if ((local_140 & 1) == 0) {
    uVar10 = local_13c;
    if (-1 < (short)local_140) {
      uVar10 = (int)(short)local_140 >> 5;
    }
    uVar6 = 0;
    if (0 < (int)uVar10) {
      uVar6 = uVar10;
    }
    if ((local_140 & 2) != 0) {
      local_130 = local_13e;
    }
    uVar16 = CONCAT44(uVar17,uVar6);
    uVar12 = CONCAT44(uVar7,(int)uVar10 >> 0x1f & uVar10);
    cVar4 = FUN_1424a7e30(&local_78,0,uVar10,local_130,uVar12,uVar16);
    uVar7 = (undefined4)((ulonglong)uVar12 >> 0x20);
    uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
  }
  else {
    cVar4 = (local_70 & 1) == 0;
  }
  iVar14 = uVar5 + 1;
  if (cVar4 == '\0') {
    uVar5 = local_6c;
    if (-1 < (short)local_70) {
      uVar5 = (int)(short)local_70 >> 5;
    }
    if (uVar5 != 7) {
      if (uVar5 < 8) goto LAB_1426b8492;
      plVar9 = local_60;
      if (((int)(short)local_70 & 2U) == 0) {
        plVar9 = (longlong *)(local_60[0] + 0xe);
      }
      lVar8 = *plVar9;
      FUN_140859a90(local_148);
      if ((short)lVar8 == 0x20) goto LAB_1426b8603;
      goto LAB_1426b849e;
    }
    FUN_140859a90(local_148);
LAB_1426b8603:
    FUN_1426bb570(param_1,&local_78,param_2);
LAB_1426b8615:
    *(int *)(param_1 + 0x48) = iVar14;
    goto LAB_1426b90a1;
  }
LAB_1426b8492:
  FUN_140859a90(local_148);
LAB_1426b849e:
  FUN_1424a7060(local_148,1,L"backwards 2",0xffffffff);
  if ((local_70 & 1) == 0) {
    uVar5 = local_6c;
    if (-1 < (short)local_70) {
      uVar5 = (int)(short)local_70 >> 5;
    }
    uVar10 = local_13c;
    if (-1 < (short)local_140) {
      uVar10 = (int)(short)local_140 >> 5;
    }
    if ((((int)(short)local_140 & 1U) == 0) && (uVar5 == uVar10)) {
      cVar4 = FUN_1412ae090(&local_78,local_148);
      bVar15 = cVar4 != '\0';
      goto LAB_1426b853e;
    }
    FUN_140859a90(local_148);
  }
  else {
    bVar15 = (bool)((byte)local_140 & 1);
LAB_1426b853e:
    FUN_140859a90(local_148);
    if (bVar15 != false) {
      FUN_142613930(*(undefined8 *)(param_1 + 0x20),0x800,0x11,0,param_2);
      goto LAB_1426b8615;
    }
  }
  local_190 = &PTR_FUN_149e18960;
  local_188 = 2;
  uVar5 = local_6c;
  if (-1 < (short)local_70) {
    uVar5 = (int)(short)local_70 >> 5;
  }
  uVar5 = FUN_1424a8ab0(&local_78,0x20,0,uVar5);
  if (-1 < (int)uVar5) {
    FUN_1424a8e40(&local_190);
    uVar10 = local_6c;
    if (-1 < (short)local_70) {
      uVar10 = (int)(short)local_70 >> 5;
    }
    uVar6 = uVar5 + 1;
    if ((int)uVar10 < (int)(uVar5 + 1)) {
      uVar6 = uVar10;
    }
    iVar11 = local_184;
    if (-1 < local_188) {
      iVar11 = (int)local_188 >> 5;
    }
    FUN_1424a9610(&local_190,0,iVar11,&local_78,CONCAT44(uVar7,uVar6),
                  CONCAT44(uVar17,uVar10 - uVar6));
    if ((uVar5 == 0) && ((local_70 & 1) != 0)) {
      FUN_1424a8e40(&local_78);
    }
    else {
      uVar10 = local_6c;
      if (-1 < (short)local_70) {
        uVar10 = (int)(short)local_70 >> 5;
      }
      if (uVar5 < uVar10) {
        if (uVar5 < 0x400) {
          local_70 = (ushort)(uVar5 << 5) | local_70 & 0x1f;
        }
        else {
          local_70 = local_70 | 0xffe0;
          local_6c = uVar5;
        }
      }
    }
  }
  FUN_1424a7060(local_148,1,L"strength",0xffffffff);
  if ((local_70 & 1) != 0) {
    bVar15 = (bool)((byte)local_140 & 1);
LAB_1426b8897:
    if (bVar15 == false) goto LAB_1426b88b2;
    iVar11 = local_184;
    if (-1 < local_188) {
      iVar11 = (int)local_188 >> 5;
    }
    FUN_140859a90(local_148);
    if (iVar11 != 1) goto LAB_1426b88f1;
    if (-1 < local_188) {
      local_184 = (int)local_188 >> 5;
    }
    if (local_184 != 0) {
      if (((int)local_188 & 2U) != 0) {
        local_178 = &local_186;
      }
      uVar3 = *local_178;
      iVar11 = 0xf;
      if ((uVar3 != 0x49) &&
         (((ushort)(uVar3 - 0x35) < 0xfffc || (iVar11 = uVar3 - 0x31, iVar11 == -1))))
      goto LAB_1426b9070;
      FUN_1426138f0(*(undefined8 *)(param_1 + 0x20),iVar11,0,param_2);
      goto LAB_1426b8d73;
    }
    goto LAB_1426b9070;
  }
  uVar5 = local_6c;
  if (-1 < (short)local_70) {
    uVar5 = (int)(short)local_70 >> 5;
  }
  uVar10 = local_13c;
  if (-1 < (short)local_140) {
    uVar10 = (int)(short)local_140 >> 5;
  }
  if ((((int)(short)local_140 & 1U) == 0) && (uVar5 == uVar10)) {
    cVar4 = FUN_1412ae090(&local_78,local_148);
    bVar15 = cVar4 != '\0';
    goto LAB_1426b8897;
  }
LAB_1426b88b2:
  FUN_140859a90(local_148);
LAB_1426b88f1:
  FUN_1424a7060(local_148,1,L"alternate",0xffffffff);
  if ((local_70 & 1) == 0) {
    uVar5 = local_6c;
    if (-1 < (short)local_70) {
      uVar5 = (int)(short)local_70 >> 5;
    }
    if (-1 < (short)local_140) {
      local_13c = (int)(short)local_140 >> 5;
    }
    if ((((int)(short)local_140 & 1U) == 0) && (uVar5 == local_13c)) {
      cVar4 = FUN_1412ae090(&local_78,local_148);
      bVar15 = cVar4 != '\0';
      goto LAB_1426b897e;
    }
    FUN_140859a90(local_148);
LAB_1426b8a45:
    FUN_1424a7060(local_148,1,L"maxVariable",0xffffffff);
    cVar4 = FUN_14626a19a(&local_78,local_148);
    FUN_140859a90(local_148);
    if (cVar4 != '\0') {
      FUN_1424a7060(local_148,1,L"space",0xffffffff);
      cVar4 = FUN_14626a19a(&local_190,local_148);
      FUN_140859a90(local_148);
      uVar5 = 0;
      if (cVar4 == '\0') {
        FUN_1424a7060(local_148,1,L"punct",0xffffffff);
        cVar4 = FUN_14626a19a(&local_190,local_148);
        FUN_140859a90(local_148);
        uVar5 = 1;
        if (cVar4 == '\0') {
          FUN_1424a7060(local_148,1,L"symbol",0xffffffff);
          cVar4 = FUN_14626a19a(&local_190,local_148);
          FUN_140859a90(local_148);
          uVar5 = 2;
          if (cVar4 == '\0') {
            FUN_1424a7060(local_148,1,L"currency",0xffffffff);
            cVar4 = FUN_14626a19a(&local_190,local_148);
            FUN_140859a90(local_148);
            uVar5 = 3;
            if (cVar4 == '\0') goto LAB_1426b9070;
          }
        }
      }
      FUN_142613a10(*(undefined8 *)(param_1 + 0x20),uVar5,0,param_2);
      uVar7 = FUN_142563c10(*(undefined8 *)(param_1 + 0x18),uVar5 | 0x1000);
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x1c) = uVar7;
      goto LAB_1426b8d73;
    }
    FUN_1424a7060(local_148,1,L"caseFirst",0xffffffff);
    cVar4 = FUN_14626a19a(&local_78,local_148);
    FUN_140859a90(local_148);
    if (cVar4 != '\0') {
      FUN_1424a7060(local_148,1,&DAT_149d5aba4,0xffffffff);
      cVar4 = FUN_14626a19a(&local_190,local_148);
      FUN_140859a90(local_148);
      uVar12 = 0x10;
      if (cVar4 == '\0') {
        FUN_1424a7060(local_148,1,L"lower",0xffffffff);
        cVar4 = FUN_14626a19a(&local_190,local_148);
        FUN_140859a90(local_148);
        uVar12 = 0x18;
        if (cVar4 == '\0') {
          FUN_1424a7060(local_148,1,L"upper",0xffffffff);
          cVar4 = FUN_14626a19a(&local_190,local_148);
          FUN_140859a90(local_148);
          uVar12 = 0x19;
          if (cVar4 == '\0') goto LAB_1426b9070;
        }
      }
      FUN_142613970(*(undefined8 *)(param_1 + 0x20),uVar12,0,param_2);
      goto LAB_1426b8d73;
    }
    FUN_1424a7060(local_148,1,L"caseLevel",0xffffffff);
    cVar4 = FUN_14626a19a(&local_78,local_148);
    FUN_140859a90(local_148);
    if (cVar4 != '\0') {
      iVar11 = FUN_1426bb830(&local_190);
      if (iVar11 != -1) {
        FUN_142613930(*(undefined8 *)(param_1 + 0x20),0x400,iVar11,0,param_2);
        goto LAB_1426b8d73;
      }
LAB_1426b9070:
      FUN_140859a90(&local_190);
      goto LAB_1426b907c;
    }
    FUN_1424a7060(local_148,1,L"normalization",0xffffffff);
    cVar4 = FUN_14626a19a(&local_78,local_148);
    FUN_140859a90(local_148);
    if (cVar4 != '\0') {
      iVar11 = FUN_1426bb830(&local_190);
      if (iVar11 != -1) {
        FUN_142613930(*(undefined8 *)(param_1 + 0x20),1,iVar11,0,param_2);
        goto LAB_1426b8d73;
      }
      goto LAB_1426b9070;
    }
    FUN_1424a7060(local_148,1,L"numericOrdering",0xffffffff);
    cVar4 = FUN_14626a19a(&local_78,local_148);
    FUN_140859a90(local_148);
    if (cVar4 != '\0') {
      iVar11 = FUN_1426bb830(&local_190);
      if (iVar11 != -1) {
        FUN_142613930(*(undefined8 *)(param_1 + 0x20),2,iVar11,0,param_2);
        goto LAB_1426b8d73;
      }
      goto LAB_1426b9070;
    }
    FUN_1424a7060(local_148,1,L"hiraganaQ",0xffffffff);
    cVar4 = FUN_14626a19a(&local_78,local_148);
    FUN_140859a90(local_148);
    if (cVar4 != '\0') {
      iVar11 = FUN_1426bb830(&local_190);
      if (iVar11 != -1) {
        if ((iVar11 == 0x11) && (*param_2 < 1)) {
          *param_2 = 3;
          *(char **)(param_1 + 0x30) = "[hiraganaQ on] is not supported";
          if (*(longlong *)(param_1 + 0x28) != 0) {
            FUN_1426bacb0(param_1);
          }
        }
        goto LAB_1426b8d73;
      }
      goto LAB_1426b9070;
    }
    FUN_1424a7060(local_148,1,L"import",0xffffffff);
    cVar4 = FUN_14626a19a(&local_78,local_148);
    FUN_140859a90(local_148);
    if (cVar4 == '\0') goto LAB_1426b9070;
    local_1d0 = (longlong)&local_1c4 + 1;
    local_1c8 = 0x28;
    local_1c4 = 0;
    local_198 = 0;
    FUN_142503780(&local_1d0,&local_190,param_2);
    if (*param_2 != 7) {
      iVar11 = FUN_142507760(local_1d0,local_148,0x9d,&local_14c,param_2);
      if (((*param_2 < 1) && (local_14c == local_198)) && (iVar11 < 0x9d)) {
        iVar11 = FUN_1424ea1d0(local_148,&local_278,0x9d,param_2);
        if ((*param_2 < 1) && (iVar11 < 0x60)) {
          if (iVar11 == 0) {
            local_274 = 0;
            local_278 = 0x746f6f72;
          }
          else if ((char)local_278 == '_') {
            memmove((void *)((longlong)&local_278 + 3),&local_278,(longlong)(iVar11 + 1));
            local_278 = CONCAT13(local_278._3_1_,0x646e75);
          }
          iVar11 = FUN_1424e74e0(local_148,"collation",local_318,0x60,param_2);
          if ((*param_2 < 1) && (iVar11 < 0x60)) {
            plVar9 = *(longlong **)(param_1 + 0x40);
            if (plVar9 == (longlong *)0x0) {
              *param_2 = 3;
              *(char **)(param_1 + 0x30) = "[import langTag] is not supported";
              if (*(longlong *)(param_1 + 0x28) != 0) {
                FUN_1426bacb0(param_1);
              }
            }
            else {
              local_2b8 = &PTR_FUN_149e18960;
              local_2b0 = 2;
              plVar1 = (longlong *)(param_1 + 0x30);
              pcVar13 = "standard";
              if (0 < iVar11) {
                pcVar13 = local_318;
              }
              (**(code **)(*plVar9 + 0x10))(plVar9,&local_278,pcVar13,&local_2b8,plVar1,param_2);
              if (*param_2 < 1) {
                uVar12 = *(undefined8 *)(param_1 + 0x10);
                uVar7 = *(undefined4 *)(param_1 + 0x48);
                FUN_1426b7e80(param_1,&local_2b8,param_2);
                if ((0 < *param_2) && (*(longlong *)(param_1 + 0x28) != 0)) {
                  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 4) = uVar7;
                }
                *(undefined8 *)(param_1 + 0x10) = uVar12;
                *(int *)(param_1 + 0x48) = iVar14;
              }
              else {
                if (*plVar1 == 0) {
                  *plVar1 = (longlong)"[import langTag] failed";
                }
                FUN_1426bacb0(param_1);
              }
              FUN_140859a90(&local_2b8);
            }
          }
          else {
            *param_2 = 3;
            *(char **)(param_1 + 0x30) = "expected language tag in [import langTag]";
            if (*(longlong *)(param_1 + 0x28) != 0) {
              FUN_1426bacb0(param_1);
            }
          }
        }
        else {
          *param_2 = 3;
          *(char **)(param_1 + 0x30) = "expected language tag in [import langTag]";
          if (*(longlong *)(param_1 + 0x28) != 0) {
            FUN_1426bacb0(param_1);
          }
        }
      }
      else {
        *param_2 = 3;
        *(char **)(param_1 + 0x30) = "expected language tag in [import langTag]";
        if (*(longlong *)(param_1 + 0x28) != 0) {
          FUN_1426bacb0(param_1);
        }
      }
    }
    if ((char)local_1c4 != '\0') {
      FUN_1424da110(local_1d0);
    }
  }
  else {
    bVar15 = (bool)((byte)local_140 & 1);
LAB_1426b897e:
    FUN_140859a90(local_148);
    if (bVar15 == false) goto LAB_1426b8a45;
    FUN_1424a7060(local_148,1,L"non-ignorable",0xffffffff);
    cVar4 = FUN_14626a19a(&local_190,local_148);
    FUN_140859a90(local_148);
    uVar12 = 0x15;
    if (cVar4 == '\0') {
      FUN_1424a7060(local_148,1,L"shifted",0xffffffff);
      cVar4 = FUN_14626a19a(&local_190,local_148);
      FUN_140859a90(local_148);
      uVar12 = 0x14;
      if (cVar4 == '\0') goto LAB_1426b9070;
    }
    FUN_1426139d0(*(undefined8 *)(param_1 + 0x20),uVar12,0,param_2);
LAB_1426b8d73:
    *(int *)(param_1 + 0x48) = iVar14;
  }
  FUN_140859a90(&local_190);
LAB_1426b90a1:
  FUN_140859a90(&local_78);
  return;
}



// FUNCTION 1426b9280 Unwind@1426b9280 body=47 status=ok
// SIG undefined Unwind@1426b9280(void)

void Unwind_1426b9280(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 1426b92b0 Unwind@1426b92b0 body=59 status=ok
// SIG undefined Unwind@1426b92b0(void)

void Unwind_1426b92b0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x184) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x178));
  }
  return;
}



// FUNCTION 1426b92f0 Unwind@1426b92f0 body=50 status=ok
// SIG undefined Unwind@1426b92f0(void)

void Unwind_1426b92f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x200);
  return;
}



// FUNCTION 1426b9330 Unwind@1426b9330 body=50 status=ok
// SIG undefined Unwind@1426b9330(void)

void Unwind_1426b9330(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x200);
  return;
}



// FUNCTION 1426b9370 Unwind@1426b9370 body=50 status=ok
// SIG undefined Unwind@1426b9370(void)

void Unwind_1426b9370(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x200);
  return;
}



// FUNCTION 1426b93b0 Unwind@1426b93b0 body=50 status=ok
// SIG undefined Unwind@1426b93b0(void)

void Unwind_1426b93b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x200);
  return;
}



// FUNCTION 1426b93f0 Unwind@1426b93f0 body=50 status=ok
// SIG undefined Unwind@1426b93f0(void)

void Unwind_1426b93f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x200);
  return;
}



// FUNCTION 1426b9430 Unwind@1426b9430 body=50 status=ok
// SIG undefined Unwind@1426b9430(void)

void Unwind_1426b9430(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x200);
  return;
}



// FUNCTION 1426b9470 Unwind@1426b9470 body=50 status=ok
// SIG undefined Unwind@1426b9470(void)

void Unwind_1426b9470(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x200);
  return;
}



// FUNCTION 1426b94b0 Unwind@1426b94b0 body=50 status=ok
// SIG undefined Unwind@1426b94b0(void)

void Unwind_1426b94b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x200);
  return;
}



// FUNCTION 1426b94f0 Unwind@1426b94f0 body=50 status=ok
// SIG undefined Unwind@1426b94f0(void)

void Unwind_1426b94f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x200);
  return;
}



// FUNCTION 1426b9530 Unwind@1426b9530 body=50 status=ok
// SIG undefined Unwind@1426b9530(void)

void Unwind_1426b9530(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x200);
  return;
}



// FUNCTION 1426b9570 Unwind@1426b9570 body=50 status=ok
// SIG undefined Unwind@1426b9570(void)

void Unwind_1426b9570(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x200);
  return;
}



// FUNCTION 1426b95b0 Unwind@1426b95b0 body=50 status=ok
// SIG undefined Unwind@1426b95b0(void)

void Unwind_1426b95b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x200);
  return;
}



// FUNCTION 1426b95f0 Unwind@1426b95f0 body=50 status=ok
// SIG undefined Unwind@1426b95f0(void)

void Unwind_1426b95f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x200);
  return;
}



// FUNCTION 1426b9630 Unwind@1426b9630 body=50 status=ok
// SIG undefined Unwind@1426b9630(void)

void Unwind_1426b9630(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x200);
  return;
}



// FUNCTION 1426b9670 Unwind@1426b9670 body=47 status=ok
// SIG undefined Unwind@1426b9670(void)

void Unwind_1426b9670(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xd0);
  return;
}



// FUNCTION 1426b96a0 Unwind@1426b96a0 body=50 status=ok
// SIG undefined Unwind@1426b96a0(void)

void Unwind_1426b96a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x200);
  return;
}



// FUNCTION 1426b96e0 Unwind@1426b96e0 body=50 status=ok
// SIG undefined Unwind@1426b96e0(void)

void Unwind_1426b96e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x200);
  return;
}



// FUNCTION 1426b9720 Unwind@1426b9720 body=50 status=ok
// SIG undefined Unwind@1426b9720(void)

void Unwind_1426b9720(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x200);
  return;
}



// FUNCTION 1426b9760 Unwind@1426b9760 body=50 status=ok
// SIG undefined Unwind@1426b9760(void)

void Unwind_1426b9760(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x200);
  return;
}



// FUNCTION 1426b97a0 Unwind@1426b97a0 body=50 status=ok
// SIG undefined Unwind@1426b97a0(void)

void Unwind_1426b97a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x200);
  return;
}



// FUNCTION 1426b97e0 Unwind@1426b97e0 body=47 status=ok
// SIG undefined Unwind@1426b97e0(void)

void Unwind_1426b97e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xd0);
  return;
}



// FUNCTION 1426b9810 Unwind@1426b9810 body=50 status=ok
// SIG undefined Unwind@1426b9810(void)

void Unwind_1426b9810(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x200);
  return;
}



// FUNCTION 1426b9850 Unwind@1426b9850 body=50 status=ok
// SIG undefined Unwind@1426b9850(void)

void Unwind_1426b9850(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x200);
  return;
}



// FUNCTION 1426b9890 Unwind@1426b9890 body=50 status=ok
// SIG undefined Unwind@1426b9890(void)

void Unwind_1426b9890(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x1b8);
  return;
}



// FUNCTION 1426b98d0 Unwind@1426b98d0 body=50 status=ok
// SIG undefined Unwind@1426b98d0(void)

void Unwind_1426b98d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x2d0);
  return;
}



// FUNCTION 1426b9910 FUN_1426b9910 body=789 status=ok
// SIG undefined FUN_1426b9910(void)

int FUN_1426b9910(longlong param_1,int *param_2)

{
  short sVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  undefined8 in_stack_ffffffffffffff68;
  undefined **local_80;
  undefined2 local_78;
  undefined8 local_40;
  
  uVar4 = (uint)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_40 = 0xfffffffffffffffe;
  if (0 < *param_2) {
    return -1;
  }
  uVar11 = (longlong)*(int *)(param_1 + 0x48) + 1;
  lVar10 = *(longlong *)(param_1 + 0x10);
  uVar3 = (uint)*(short *)(lVar10 + 8);
  if (*(short *)(lVar10 + 8) < 0) {
    uVar8 = *(uint *)(lVar10 + 0xc);
  }
  else {
    uVar8 = (int)uVar3 >> 5;
  }
  if ((int)uVar11 < (int)uVar8) {
    do {
      uVar7 = 0xffff;
      if ((uint)uVar11 < uVar8) {
        if ((uVar3 & 2) == 0) {
          lVar10 = *(longlong *)(lVar10 + 0x18);
        }
        else {
          lVar10 = lVar10 + 10;
        }
        uVar7 = *(undefined2 *)(lVar10 + uVar11 * 2);
      }
      cVar2 = FUN_1425cc7f0(uVar7);
      uVar4 = (uint)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
      lVar10 = *(longlong *)(param_1 + 0x10);
      if (cVar2 == '\0') break;
      uVar3 = (uint)*(short *)(lVar10 + 8);
      if (*(short *)(lVar10 + 8) < 0) {
        uVar8 = *(uint *)(lVar10 + 0xc);
      }
      else {
        uVar8 = (int)uVar3 >> 5;
      }
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)(int)uVar8);
  }
  uVar3 = (uint)uVar11;
  cVar2 = FUN_1424a7e30(lVar10,uVar11 & 0xffffffff,7,L"[before",(ulonglong)uVar4 << 0x20,7);
  lVar10 = *(longlong *)(param_1 + 0x10);
  iVar14 = 0xf;
  if (cVar2 == '\0') {
    uVar4 = uVar3 + 7;
    sVar1 = *(short *)(lVar10 + 8);
    if (sVar1 < 0) {
      uVar8 = *(uint *)(lVar10 + 0xc);
    }
    else {
      uVar8 = (int)sVar1 >> 5;
    }
    if ((int)uVar4 < (int)uVar8) {
      uVar7 = 0xffff;
      if (uVar4 < uVar8) {
        if (((int)sVar1 & 2U) == 0) {
          lVar10 = *(longlong *)(lVar10 + 0x18);
        }
        else {
          lVar10 = lVar10 + 10;
        }
        uVar7 = *(undefined2 *)(lVar10 + (longlong)(int)uVar4 * 2);
      }
      cVar2 = FUN_1425cc7f0(uVar7);
      lVar10 = *(longlong *)(param_1 + 0x10);
      if (cVar2 != '\0') {
        uVar15 = uVar3 + 8;
        uVar5 = (uint)*(short *)(lVar10 + 8);
        uVar9 = (int)uVar5 >> 5;
        uVar4 = *(uint *)(lVar10 + 0xc);
        uVar8 = uVar9;
        if (*(short *)(lVar10 + 8) < 0) {
          uVar8 = uVar4;
        }
        if ((int)uVar15 < (int)uVar8) {
          lVar13 = (longlong)(int)uVar15;
          do {
            uVar7 = 0xffff;
            if (uVar15 < uVar8) {
              if ((uVar5 & 2) == 0) {
                lVar10 = *(longlong *)(lVar10 + 0x18);
              }
              else {
                lVar10 = lVar10 + 10;
              }
              uVar7 = *(undefined2 *)(lVar10 + lVar13 * 2);
            }
            cVar2 = FUN_1425cc7f0(uVar7);
            lVar10 = *(longlong *)(param_1 + 0x10);
            if (cVar2 == '\0') {
              uVar5 = (uint)*(short *)(lVar10 + 8);
              uVar4 = *(uint *)(lVar10 + 0xc);
              uVar9 = (int)uVar5 >> 5;
              break;
            }
            lVar13 = lVar13 + 1;
            uVar15 = uVar15 + 1;
            uVar5 = (uint)*(short *)(lVar10 + 8);
            uVar9 = (int)uVar5 >> 5;
            uVar4 = *(uint *)(lVar10 + 0xc);
            uVar8 = uVar9;
            if (*(short *)(lVar10 + 8) < 0) {
              uVar8 = uVar4;
            }
          } while (lVar13 < (int)uVar8);
        }
        uVar8 = uVar15 + 1;
        if ((short)uVar5 < 0) {
          uVar9 = uVar4;
        }
        if (((int)uVar8 < (int)uVar9) && (uVar15 < uVar9)) {
          if ((uVar5 & 2) == 0) {
            lVar13 = *(longlong *)(lVar10 + 0x18);
          }
          else {
            lVar13 = lVar10 + 10;
          }
          if (((uVar8 < uVar9) &&
              (iVar12 = *(ushort *)(lVar13 + (longlong)(int)uVar15 * 2) - 0x31, (ushort)iVar12 < 3))
             && (*(short *)(lVar13 + (longlong)(int)uVar8 * 2) == 0x5d)) {
            uVar3 = FUN_1426ba6a0(param_1,uVar15 + 2);
            lVar10 = *(longlong *)(param_1 + 0x10);
            iVar14 = iVar12;
          }
        }
      }
    }
  }
  uVar4 = (int)*(short *)(lVar10 + 8) >> 5;
  if (*(short *)(lVar10 + 8) < 0) {
    uVar4 = *(uint *)(lVar10 + 0xc);
  }
  if ((int)uVar4 <= (int)uVar3) {
    if (0 < *param_2) {
      return -1;
    }
    *param_2 = 3;
    *(char **)(param_1 + 0x30) = "reset without position";
    if (*(longlong *)(param_1 + 0x28) == 0) {
      return -1;
    }
    FUN_1426bacb0(param_1);
    return -1;
  }
  local_80 = &PTR_FUN_149e18960;
  local_78 = 2;
  sVar1 = *(short *)(lVar10 + 8);
  uVar4 = (int)sVar1 >> 5;
  if (sVar1 < 0) {
    uVar4 = *(uint *)(lVar10 + 0xc);
  }
  if (uVar3 < uVar4) {
    if (((int)sVar1 & 2U) == 0) {
      lVar10 = *(longlong *)(lVar10 + 0x18);
    }
    else {
      lVar10 = lVar10 + 10;
    }
    if (*(short *)(lVar10 + (longlong)(int)uVar3 * 2) == 0x5b) {
      uVar6 = FUN_1426ba740(param_1,uVar3,&local_80,param_2);
      goto LAB_1426b9bfa;
    }
  }
  uVar6 = FUN_1426bab40(param_1,uVar3,&local_80,param_2);
LAB_1426b9bfa:
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))
            (*(longlong **)(param_1 + 0x38),iVar14,&local_80,param_1 + 0x30,param_2);
  if (0 < *param_2) {
    FUN_1426bacb0(param_1);
  }
  *(undefined4 *)(param_1 + 0x48) = uVar6;
  FUN_140859a90(&local_80);
  return iVar14;
}



// FUNCTION 1426b9c40 Unwind@1426b9c40 body=51 status=ok
// SIG undefined Unwind@1426b9c40(void)

void Unwind_1426b9c40(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1426b9c80 FUN_1426b9c80 body=484 status=ok
// SIG undefined FUN_1426b9c80(void)

uint FUN_1426b9c80(longlong param_1,int *param_2)

{
  short sVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  
  uVar9 = 0xffffffff;
  if (*param_2 < 1) {
    uVar7 = *(uint *)(param_1 + 0x48);
    lVar5 = *(longlong *)(param_1 + 0x10);
    uVar3 = (uint)*(short *)(lVar5 + 8);
    if (*(short *)(lVar5 + 8) < 0) {
      uVar6 = *(uint *)(lVar5 + 0xc);
    }
    else {
      uVar6 = (int)uVar3 >> 5;
    }
    if ((int)uVar7 < (int)uVar6) {
      lVar10 = (longlong)(int)uVar7;
      do {
        uVar8 = 0xffff;
        if (uVar7 < uVar6) {
          if ((uVar3 & 2) == 0) {
            lVar5 = *(longlong *)(lVar5 + 0x18);
          }
          else {
            lVar5 = lVar5 + 10;
          }
          uVar8 = *(undefined2 *)(lVar5 + lVar10 * 2);
        }
        cVar2 = FUN_1425cc7f0(uVar8);
        lVar5 = *(longlong *)(param_1 + 0x10);
        if (cVar2 == '\0') break;
        uVar3 = (uint)*(short *)(lVar5 + 8);
        if (*(short *)(lVar5 + 8) < 0) {
          uVar6 = *(uint *)(lVar5 + 0xc);
        }
        else {
          uVar6 = (int)uVar3 >> 5;
        }
        lVar10 = lVar10 + 1;
        uVar7 = uVar7 + 1;
      } while (lVar10 < (int)uVar6);
    }
    *(uint *)(param_1 + 0x48) = uVar7;
    sVar1 = *(short *)(lVar5 + 8);
    if (sVar1 < 0) {
      uVar3 = *(uint *)(lVar5 + 0xc);
    }
    else {
      uVar3 = (int)sVar1 >> 5;
    }
    if (((int)uVar7 < (int)uVar3) && (uVar7 < uVar3)) {
      if (((int)sVar1 & 2U) == 0) {
        lVar5 = *(longlong *)(lVar5 + 0x18);
      }
      else {
        lVar5 = lVar5 + 10;
      }
      uVar6 = (uint)*(ushort *)(lVar5 + (longlong)(int)uVar7 * 2);
      if (uVar6 - 0x2c < 0x12) {
        uVar4 = uVar7 + 1;
        switch(uVar6) {
        case 0x2c:
          uVar9 = 2;
          break;
        default:
          goto switchD_1426b9d8a_caseD_2d;
        case 0x3b:
          uVar9 = 1;
          break;
        case 0x3c:
          uVar9 = 0;
          if ((uVar4 < uVar3 && (int)uVar4 < (int)uVar3) &&
             (uVar9 = 0, *(short *)(lVar5 + (longlong)(int)uVar4 * 2) == 0x3c)) {
            uVar4 = uVar7 + 2;
            uVar9 = 1;
            if ((uVar4 < uVar3 && (int)uVar4 < (int)uVar3) &&
               (*(short *)(lVar5 + (longlong)(int)uVar4 * 2) == 0x3c)) {
              uVar4 = uVar7 + 3;
              uVar9 = 2;
              if (uVar4 < uVar3 && (int)uVar4 < (int)uVar3) {
                bVar11 = *(short *)(lVar5 + (longlong)(int)uVar4 * 2) == 0x3c;
                if (bVar11) {
                  uVar4 = uVar7 + 4;
                }
                uVar9 = bVar11 | 2;
              }
            }
          }
          if ((uVar4 < uVar3 && (int)uVar4 < (int)uVar3) &&
             (*(short *)(lVar5 + (longlong)(int)uVar4 * 2) == 0x2a)) {
            uVar4 = uVar4 + 1;
            uVar9 = uVar9 | 0x10;
          }
          break;
        case 0x3d:
          uVar9 = 0xf;
          if (uVar4 < uVar3 && (int)uVar4 < (int)uVar3) {
            bVar11 = *(short *)(lVar5 + (longlong)(int)uVar4 * 2) == 0x2a;
            if (bVar11) {
              uVar4 = uVar7 + 2;
            }
            uVar9 = (uint)bVar11 << 4 | 0xf;
          }
        }
        uVar9 = (uVar4 - uVar7) * 0x100 | uVar9;
      }
    }
  }
switchD_1426b9d8a_caseD_2d:
  return uVar9;
}



// FUNCTION 1426b9e80 FUN_1426b9e80 body=531 status=ok
// SIG undefined FUN_1426b9e80(void)

void FUN_1426b9e80(longlong param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined **local_100;
  undefined2 local_f8;
  undefined **local_c0;
  ushort local_b8;
  undefined **local_80;
  undefined2 local_78;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_c0 = &PTR_FUN_149e18960;
  local_b8 = 2;
  local_80 = &PTR_FUN_149e18960;
  local_78 = 2;
  local_100 = &PTR_FUN_149e18960;
  local_f8 = 2;
  uVar3 = FUN_1426bab40(param_1,param_3,&local_80);
  if (0 < *param_4) goto LAB_1426ba065;
  lVar6 = *(longlong *)(param_1 + 0x10);
  sVar2 = *(short *)(lVar6 + 8);
  if (sVar2 < 0) {
    uVar7 = *(uint *)(lVar6 + 0xc);
  }
  else {
    uVar7 = (int)sVar2 >> 5;
  }
  if (uVar3 < uVar7 && (int)uVar3 < (int)uVar7) {
    if (((int)sVar2 & 2U) == 0) {
      lVar6 = *(longlong *)(lVar6 + 0x18);
    }
    else {
      lVar6 = lVar6 + 10;
    }
    sVar2 = *(short *)(lVar6 + (longlong)(int)uVar3 * 2);
    if (sVar2 == 0x7c) {
      FUN_1424a7c80(&local_c0,&local_80);
      uVar3 = FUN_1426bab40(param_1,uVar3 + 1,&local_80,param_4);
      if (0 < *param_4) goto LAB_1426ba065;
      lVar6 = *(longlong *)(param_1 + 0x10);
      sVar2 = *(short *)(lVar6 + 8);
      if (sVar2 < 0) {
        uVar7 = *(uint *)(lVar6 + 0xc);
      }
      else {
        uVar7 = (int)sVar2 >> 5;
      }
      if (uVar7 <= uVar3 || (int)uVar7 <= (int)uVar3) goto LAB_1426b9fb9;
      if (((int)sVar2 & 2U) == 0) {
        lVar6 = *(longlong *)(lVar6 + 0x18);
      }
      else {
        lVar6 = lVar6 + 10;
      }
      sVar2 = *(short *)(lVar6 + (longlong)(int)uVar3 * 2);
    }
    if (sVar2 == 0x2f) {
      uVar3 = FUN_1426bab40(param_1,uVar3 + 1,&local_100,param_4);
    }
  }
LAB_1426b9fb9:
  if (local_b8 < 0x20) {
LAB_1426b9ffe:
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
              (*(longlong **)(param_1 + 0x38),param_2,&local_c0,&local_80,&local_100,param_1 + 0x30,
               param_4);
    if (0 < *param_4) {
      FUN_1426bacb0(param_1);
    }
    *(uint *)(param_1 + 0x48) = uVar3;
  }
  else {
    uVar4 = FUN_1424a8030(&local_c0,0);
    uVar5 = FUN_1424a8030(&local_80,0);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),uVar4);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),uVar5);
      if (cVar1 != '\0') goto LAB_1426b9ffe;
    }
    if (*param_4 < 1) {
      *param_4 = 3;
      *(char **)(param_1 + 0x30) =
           "in \'prefix|str\', prefix and str must each start with an NFC boundary";
      if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_1426bacb0(param_1);
      }
    }
  }
LAB_1426ba065:
  FUN_140859a90(&local_100);
  FUN_140859a90(&local_80);
  FUN_140859a90(&local_c0);
  return;
}



// FUNCTION 1426ba0a0 Unwind@1426ba0a0 body=69 status=ok
// SIG undefined Unwind@1426ba0a0(void)

void Unwind_1426ba0a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  FUN_140859a90(param_2 + 0xb8);
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 1426ba0f0 FUN_1426ba0f0 body=1230 status=ok
// SIG undefined FUN_1426ba0f0(void)

void FUN_1426ba0f0(undefined8 *param_1,undefined4 param_2,uint param_3,int *param_4)

{
  short sVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint uVar8;
  undefined2 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined **local_110;
  undefined2 local_108;
  undefined **local_d0;
  short local_c8;
  int local_c4;
  undefined **local_90;
  ushort local_88;
  int local_84;
  undefined4 local_50;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar10 = (ulonglong)param_3;
  local_110 = &PTR_FUN_149e18960;
  local_108 = 2;
  local_90 = &PTR_FUN_149e18960;
  local_88 = 2;
  lVar7 = param_1[2];
  uVar8 = (uint)*(short *)(lVar7 + 8);
  if (*(short *)(lVar7 + 8) < 0) {
    uVar5 = *(uint *)(lVar7 + 0xc);
  }
  else {
    uVar5 = (int)uVar8 >> 5;
  }
  local_50 = param_2;
  if ((int)param_3 < (int)uVar5) {
    uVar11 = (ulonglong)(int)param_3;
    uVar14 = uVar10;
    do {
      uVar9 = 0xffff;
      if ((uint)uVar11 < uVar5) {
        if ((uVar8 & 2) == 0) {
          lVar7 = *(longlong *)(lVar7 + 0x18);
        }
        else {
          lVar7 = lVar7 + 10;
        }
        uVar9 = *(undefined2 *)(lVar7 + uVar11 * 2);
      }
      cVar4 = FUN_1425cc7f0(uVar9);
      uVar10 = uVar11 & 0xffffffff;
      if (cVar4 == '\0') break;
      lVar7 = param_1[2];
      uVar8 = (uint)*(short *)(lVar7 + 8);
      if (*(short *)(lVar7 + 8) < 0) {
        uVar5 = *(uint *)(lVar7 + 0xc);
      }
      else {
        uVar5 = (int)uVar8 >> 5;
      }
      uVar11 = uVar11 + 1;
      uVar10 = (ulonglong)((int)uVar14 + 1);
      uVar14 = uVar10;
    } while ((longlong)uVar11 < (longlong)(int)uVar5);
  }
  local_4c = FUN_1426bae50(param_1,uVar10,&local_90,param_4);
  if (*param_4 < 1) {
    if (local_88 < 0x20) {
      *param_4 = 3;
      param_1[6] = "missing starred-relation string";
      if (param_1[5] != 0) {
        FUN_1426bacb0(param_1);
      }
    }
    else {
      iVar13 = 0;
      while( true ) {
        uVar8 = 0xffffffff;
        while( true ) {
          iVar3 = local_84;
          if (-1 < (short)local_88) {
            iVar3 = (int)(short)local_88 >> 5;
          }
          if (iVar3 <= iVar13) break;
          uVar8 = FUN_1424a8030(&local_90,iVar13);
          cVar4 = (**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,uVar8);
          if (cVar4 == '\0') {
            if (*param_4 < 1) {
              *param_4 = 3;
              param_1[6] = "starred-relation string is not all NFD-inert";
              if (param_1[5] != 0) {
                FUN_1426bacb0(param_1);
              }
            }
            goto LAB_1426ba171;
          }
          plVar2 = (longlong *)param_1[7];
          FUN_1424a6c30(&local_d0,uVar8);
          (**(code **)(*plVar2 + 0x18))
                    (plVar2,local_50,&local_110,&local_d0,&local_110,param_1 + 6,param_4);
          FUN_140859a90(&local_d0);
          if (0 < *param_4) {
            FUN_1426bacb0(param_1);
            goto LAB_1426ba171;
          }
          iVar13 = (iVar13 - (uint)(uVar8 < 0x10000)) + 2;
        }
        lVar7 = param_1[2];
        sVar1 = *(short *)(lVar7 + 8);
        if (sVar1 < 0) {
          uVar5 = *(uint *)(lVar7 + 0xc);
        }
        else {
          uVar5 = (int)sVar1 >> 5;
        }
        if (uVar5 <= local_4c || (int)uVar5 <= (int)local_4c) break;
        if (((int)sVar1 & 2U) == 0) {
          lVar7 = *(longlong *)(lVar7 + 0x18);
        }
        else {
          lVar7 = lVar7 + 10;
        }
        if (*(short *)(lVar7 + (longlong)(int)local_4c * 2) != 0x2d) break;
        if ((int)uVar8 < 0) {
          if (*param_4 < 1) {
            *param_4 = 3;
            param_1[6] = "range without start in starred-relation string";
            if (param_1[5] != 0) {
              FUN_1426bacb0(param_1);
            }
          }
          goto LAB_1426ba171;
        }
        local_4c = FUN_1426bae50(param_1,local_4c + 1,&local_90,param_4);
        if (0 < *param_4) goto LAB_1426ba171;
        if (local_88 < 0x20) {
          *param_4 = 3;
          param_1[6] = "range without end in starred-relation string";
          if (param_1[5] != 0) {
            FUN_1426bacb0(param_1);
          }
          goto LAB_1426ba171;
        }
        uVar5 = FUN_1424a8030(&local_90,0);
        if ((int)uVar5 < (int)uVar8) {
          if (*param_4 < 1) {
            *param_4 = 3;
            param_1[6] = "range start greater than end in starred-relation string";
            if (param_1[5] != 0) {
              FUN_1426bacb0(param_1);
            }
          }
          goto LAB_1426ba171;
        }
        local_d0 = &PTR_FUN_149e18960;
        local_c8 = 2;
        while ((int)uVar8 < (int)uVar5) {
          uVar12 = uVar8 + 1;
          cVar4 = (**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,uVar12);
          if (cVar4 == '\0') {
            if (*param_4 < 1) {
              *param_4 = 3;
              param_1[6] = "starred-relation string range is not all NFD-inert";
              if (param_1[5] != 0) {
                FUN_1426bacb0(param_1);
              }
            }
            goto LAB_1426ba52b;
          }
          if ((uVar12 & 0xfffff800) == 0xd800) {
            if (*param_4 < 1) {
              *param_4 = 3;
              param_1[6] = "starred-relation string range contains a surrogate";
              if (param_1[5] != 0) {
                FUN_1426bacb0(param_1);
              }
            }
            goto LAB_1426ba52b;
          }
          if (uVar8 - 0xfffc < 3) {
            if (*param_4 < 1) {
              *param_4 = 3;
              param_1[6] = "starred-relation string range contains U+FFFD, U+FFFE or U+FFFF";
              if (param_1[5] != 0) {
                FUN_1426bacb0(param_1);
              }
            }
            goto LAB_1426ba52b;
          }
          FUN_1424a8e40(&local_d0);
          iVar13 = local_c4;
          if (-1 < local_c8) {
            iVar13 = (int)local_c8 >> 5;
          }
          FUN_1424a90a0(&local_d0,0,iVar13,uVar12);
          (**(code **)(*(longlong *)param_1[7] + 0x18))
                    ((longlong *)param_1[7],local_50,&local_110,&local_d0,&local_110,param_1 + 6,
                     param_4);
          uVar8 = uVar12;
          if (0 < *param_4) {
            FUN_1426bacb0(param_1);
LAB_1426ba52b:
            FUN_140859a90(&local_d0);
            goto LAB_1426ba171;
          }
        }
        iVar13 = 2 - (uint)(uVar5 < 0x10000);
        FUN_140859a90(&local_d0);
      }
      uVar6 = FUN_1426ba6a0(param_1);
      *(undefined4 *)(param_1 + 9) = uVar6;
    }
  }
LAB_1426ba171:
  FUN_140859a90(&local_90);
  FUN_140859a90(&local_110);
  return;
}



// FUNCTION 1426ba5e0 Unwind@1426ba5e0 body=55 status=ok
// SIG undefined Unwind@1426ba5e0(void)

void Unwind_1426ba5e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 1426ba620 Unwind@1426ba620 body=55 status=ok
// SIG undefined Unwind@1426ba620(void)

void Unwind_1426ba620(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 1426ba660 Unwind@1426ba660 body=64 status=ok
// SIG undefined Unwind@1426ba660(void)

void Unwind_1426ba660(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb8);
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1426ba6a0 FUN_1426ba6a0 body=136 status=ok
// SIG undefined FUN_1426ba6a0(void)

uint FUN_1426ba6a0(longlong param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined2 uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar3 = (uint)*(short *)(lVar2 + 8);
  if (*(short *)(lVar2 + 8) < 0) {
    uVar4 = *(uint *)(lVar2 + 0xc);
  }
  else {
    uVar4 = (int)uVar3 >> 5;
  }
  if ((int)param_2 < (int)uVar4) {
    lVar5 = (longlong)(int)param_2;
    do {
      uVar6 = 0xffff;
      if (param_2 < uVar4) {
        if ((uVar3 & 2) == 0) {
          lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
          lVar2 = lVar2 + 10;
        }
        uVar6 = *(undefined2 *)(lVar2 + lVar5 * 2);
      }
      cVar1 = FUN_1425cc7f0(uVar6);
      if (cVar1 == '\0') {
        return param_2;
      }
      lVar2 = *(longlong *)(param_1 + 0x10);
      uVar3 = (uint)*(short *)(lVar2 + 8);
      if (*(short *)(lVar2 + 8) < 0) {
        uVar4 = *(uint *)(lVar2 + 0xc);
      }
      else {
        uVar4 = (int)uVar3 >> 5;
      }
      lVar5 = lVar5 + 1;
      param_2 = param_2 + 1;
    } while (lVar5 < (int)uVar4);
  }
  return param_2;
}



// FUNCTION 1426ba740 FUN_1426ba740 body=743 status=ok
// SIG undefined FUN_1426ba740(void)

int FUN_1426ba740(longlong param_1,int param_2,undefined8 param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  bool bVar9;
  undefined **local_d8;
  ushort local_d0;
  int local_cc;
  short local_98 [4];
  ushort local_90;
  int local_8c;
  undefined8 local_58;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_4) {
    return 0;
  }
  local_d8 = &PTR_FUN_149e18960;
  local_d0 = 2;
  local_58 = param_3;
  uVar5 = FUN_1426bb200(param_1,param_2 + 1,&local_d8);
  if (param_2 < (int)uVar5) {
    lVar6 = *(longlong *)(param_1 + 0x10);
    sVar1 = *(short *)(lVar6 + 8);
    if (sVar1 < 0) {
      uVar8 = *(uint *)(lVar6 + 0xc);
    }
    else {
      uVar8 = (int)sVar1 >> 5;
    }
    if (uVar5 < uVar8) {
      if (((int)sVar1 & 2U) == 0) {
        lVar6 = *(longlong *)(lVar6 + 0x18);
      }
      else {
        lVar6 = lVar6 + 10;
      }
      if ((*(short *)(lVar6 + (longlong)(int)uVar5 * 2) == 0x5d) && (0x1f < local_d0)) {
        local_4c = uVar5 + 1;
        for (uVar5 = 0; uVar5 < 0xe; uVar5 = uVar5 + 1) {
          FUN_1424a7220(local_98,(&PTR_s_first_tertiary_ignorable_149d5a6a0)[uVar5],0xffffffff,0);
          if ((local_d0 & 1) == 0) {
            iVar2 = local_cc;
            if (-1 < (short)local_d0) {
              iVar2 = (int)(short)local_d0 >> 5;
            }
            iVar3 = local_8c;
            if (-1 < (short)local_90) {
              iVar3 = (int)(short)local_90 >> 5;
            }
            if (((local_90 & 1) == 0) && (iVar2 == iVar3)) {
              cVar4 = FUN_1412ae090(&local_d8,local_98);
              bVar9 = cVar4 != '\0';
              goto LAB_1426ba89f;
            }
            FUN_140859a90(local_98);
          }
          else {
            bVar9 = (bool)((byte)local_90 & 1);
LAB_1426ba89f:
            FUN_140859a90(local_98);
            if (bVar9 != false) {
              uVar7 = FUN_1425553f0(local_58,0xfffe);
              local_98[0] = (short)uVar5 + 0x2800;
              FUN_1424a6cf0(uVar7,local_98,0,1);
              param_2 = local_4c;
              goto LAB_1426baa1b;
            }
          }
        }
        FUN_1424a7060(local_98,1,&DAT_149d5aa72,0xffffffff);
        if ((local_d0 & 1) == 0) {
          if (-1 < (short)local_d0) {
            local_cc = (int)(short)local_d0 >> 5;
          }
          if (-1 < (short)local_90) {
            local_8c = (int)(short)local_90 >> 5;
          }
          if ((((int)(short)local_90 & 1U) == 0) && (local_cc == local_8c)) {
            cVar4 = FUN_1412ae090(&local_d8,local_98);
            bVar9 = cVar4 != '\0';
            goto LAB_1426ba94e;
          }
          FUN_140859a90(local_98);
        }
        else {
          bVar9 = (bool)((byte)local_90 & 1);
LAB_1426ba94e:
          FUN_140859a90(local_98);
          if (bVar9 != false) {
            uVar7 = FUN_1425553f0(local_58,0xfffe);
            local_98[0] = 0x2809;
            FUN_1424a6cf0(uVar7,local_98,0,1);
            param_2 = local_4c;
            goto LAB_1426baa1b;
          }
        }
        FUN_1424a7060(local_98,1,L"variable top",0xffffffff);
        cVar4 = FUN_14626a19a(&local_d8,local_98);
        FUN_140859a90(local_98);
        if (cVar4 != '\0') {
          uVar7 = FUN_1425553f0(local_58,0xfffe);
          local_98[0] = 0x2807;
          FUN_1424a6cf0(uVar7,local_98,0,1);
          param_2 = local_4c;
          goto LAB_1426baa1b;
        }
      }
    }
  }
  if (*param_4 < 1) {
    *param_4 = 3;
    *(char **)(param_1 + 0x30) = "not a valid special reset position";
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1426bacb0(param_1);
    }
  }
LAB_1426baa1b:
  FUN_140859a90(&local_d8);
  return param_2;
}



// FUNCTION 1426baa40 Unwind@1426baa40 body=55 status=ok
// SIG undefined Unwind@1426baa40(void)

void Unwind_1426baa40(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x60);
  return;
}



// FUNCTION 1426baa80 Unwind@1426baa80 body=55 status=ok
// SIG undefined Unwind@1426baa80(void)

void Unwind_1426baa80(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x60);
  return;
}



// FUNCTION 1426baac0 Unwind@1426baac0 body=55 status=ok
// SIG undefined Unwind@1426baac0(void)

void Unwind_1426baac0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x60);
  return;
}



// FUNCTION 1426bab00 Unwind@1426bab00 body=55 status=ok
// SIG undefined Unwind@1426bab00(void)

void Unwind_1426bab00(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1426bab40 FUN_1426bab40 body=327 status=ok
// SIG undefined FUN_1426bab40(void)

uint FUN_1426bab40(longlong param_1,uint param_2,longlong param_3,int *param_4)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined2 uVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar3 = (uint)*(short *)(lVar2 + 8);
  if (*(short *)(lVar2 + 8) < 0) {
    uVar4 = *(uint *)(lVar2 + 0xc);
  }
  else {
    uVar4 = (int)uVar3 >> 5;
  }
  if ((int)param_2 < (int)uVar4) {
    lVar6 = (longlong)(int)param_2;
    do {
      uVar7 = 0xffff;
      if (param_2 < uVar4) {
        if ((uVar3 & 2) == 0) {
          lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
          lVar2 = lVar2 + 10;
        }
        uVar7 = *(undefined2 *)(lVar2 + lVar6 * 2);
      }
      cVar1 = FUN_1425cc7f0(uVar7);
      if (cVar1 == '\0') break;
      lVar2 = *(longlong *)(param_1 + 0x10);
      uVar3 = (uint)*(short *)(lVar2 + 8);
      if (*(short *)(lVar2 + 8) < 0) {
        uVar4 = *(uint *)(lVar2 + 0xc);
      }
      else {
        uVar4 = (int)uVar3 >> 5;
      }
      lVar6 = lVar6 + 1;
      param_2 = param_2 + 1;
    } while (lVar6 < (int)uVar4);
  }
  uVar3 = FUN_1426bae50(param_1,param_2,param_3,param_4);
  if ((*param_4 < 1) && (*(ushort *)(param_3 + 8) < 0x20)) {
    *param_4 = 3;
    *(char **)(param_1 + 0x30) = "missing relation string";
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1426bacb0(param_1);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar4 = (uint)*(short *)(lVar2 + 8);
  if (*(short *)(lVar2 + 8) < 0) {
    uVar5 = *(uint *)(lVar2 + 0xc);
  }
  else {
    uVar5 = (int)uVar4 >> 5;
  }
  if ((int)uVar3 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar3;
    do {
      uVar7 = 0xffff;
      if (uVar3 < uVar5) {
        if ((uVar4 & 2) == 0) {
          lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
          lVar2 = lVar2 + 10;
        }
        uVar7 = *(undefined2 *)(lVar2 + lVar6 * 2);
      }
      cVar1 = FUN_1425cc7f0(uVar7);
      if (cVar1 == '\0') {
        return uVar3;
      }
      lVar2 = *(longlong *)(param_1 + 0x10);
      uVar4 = (uint)*(short *)(lVar2 + 8);
      if (*(short *)(lVar2 + 8) < 0) {
        uVar5 = *(uint *)(lVar2 + 0xc);
      }
      else {
        uVar5 = (int)uVar4 >> 5;
      }
      lVar6 = lVar6 + 1;
      uVar3 = uVar3 + 1;
    } while (lVar6 < (int)uVar5);
  }
  return uVar3;
}



// FUNCTION 1426bacb0 FUN_1426bacb0 body=346 status=ok
// SIG undefined FUN_1426bacb0(void)

void FUN_1426bacb0(longlong param_1)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 4) = *(undefined4 *)(param_1 + 0x48);
    **(undefined4 **)(param_1 + 0x28) = 0;
    iVar5 = *(int *)(param_1 + 0x48);
    lVar2 = *(longlong *)(param_1 + 0x10);
    uVar4 = 0;
    if (0xf < iVar5) {
      uVar4 = (ulonglong)(iVar5 - 0xfU);
      sVar1 = *(short *)(lVar2 + 8);
      if (sVar1 < 0) {
        uVar7 = *(uint *)(lVar2 + 0xc);
      }
      else {
        uVar7 = (int)sVar1 >> 5;
      }
      if (iVar5 - 0xfU < uVar7) {
        if (((int)sVar1 & 2U) == 0) {
          lVar3 = *(longlong *)(lVar2 + 0x18);
        }
        else {
          lVar3 = lVar2 + 10;
        }
        if ((*(ushort *)(lVar3 + uVar4 * 2) & 0xfc00) == 0xdc00) {
          uVar4 = (ulonglong)(iVar5 - 0xe);
        }
      }
    }
    iVar5 = iVar5 - (int)uVar4;
    FUN_1424a82d0(lVar2,uVar4,iVar5,*(longlong *)(param_1 + 0x28) + 8,0);
    *(undefined2 *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)iVar5 * 2) = 0;
    lVar2 = *(longlong *)(param_1 + 0x10);
    sVar1 = *(short *)(lVar2 + 8);
    if (sVar1 < 0) {
      uVar7 = *(uint *)(lVar2 + 0xc);
    }
    else {
      uVar7 = (int)sVar1 >> 5;
    }
    iVar5 = *(int *)(param_1 + 0x48);
    uVar6 = uVar7 - iVar5;
    if ((0xf < (int)uVar6) && (uVar6 = 0xf, iVar5 + 0xeU < uVar7)) {
      if (((int)sVar1 & 2U) == 0) {
        lVar3 = *(longlong *)(lVar2 + 0x18);
      }
      else {
        lVar3 = lVar2 + 10;
      }
      uVar6 = (*(ushort *)(lVar3 + 0x1c + (longlong)iVar5 * 2) & 0xfc00) == 0xd800 ^ 0xf;
    }
    FUN_1424a82d0(lVar2,iVar5,uVar6,*(longlong *)(param_1 + 0x28) + 0x28,0);
    *(undefined2 *)(*(longlong *)(param_1 + 0x28) + 0x28 + (longlong)(int)uVar6 * 2) = 0;
  }
  return;
}



// FUNCTION 1426bae10 Unwind@1426bae10 body=32 status=ok
// SIG undefined Unwind@1426bae10(void)

void Unwind_1426bae10(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x50);
  return;
}



// FUNCTION 1426bae30 Unwind@1426bae30 body=32 status=ok
// SIG undefined Unwind@1426bae30(void)

void Unwind_1426bae30(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x50);
  return;
}



// FUNCTION 1426bae50 FUN_1426bae50 body=882 status=ok
// SIG undefined FUN_1426bae50(void)

void FUN_1426bae50(longlong param_1,uint param_2,longlong param_3,int *param_4)

{
  short sVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_78 [42];
  undefined2 local_4e;
  short local_4c;
  ushort local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_4 < 1) {
    uVar3 = 2;
    if ((*(ushort *)(param_3 + 8) & 1) == 0) {
      uVar3 = *(ushort *)(param_3 + 8) & 0x1f;
    }
    *(ushort *)(param_3 + 8) = uVar3;
    lVar8 = *(longlong *)(param_1 + 0x10);
    uVar9 = (uint)*(short *)(lVar8 + 8);
    uVar5 = *(uint *)(lVar8 + 0xc);
    uVar4 = (int)uVar9 >> 5;
    if (*(short *)(lVar8 + 8) < 0) {
      uVar4 = uVar5;
    }
    if ((int)param_2 < (int)uVar4) {
      do {
        uVar13 = param_2 + 1;
        if (param_2 < uVar4) {
          if ((uVar9 & 2) == 0) {
            lVar11 = *(longlong *)(lVar8 + 0x18);
          }
          else {
            lVar11 = lVar8 + 10;
          }
          uVar3 = *(ushort *)(lVar11 + (longlong)(int)param_2 * 2);
          if (0x5d < uVar3 - 0x21) goto LAB_1426bb0a0;
          if (uVar3 < 0x30) {
LAB_1426baf25:
            if (uVar3 != 0x27) break;
            if ((uVar4 <= uVar13 || (int)uVar4 <= (int)uVar13) ||
               (*(short *)(lVar11 + (longlong)(int)uVar13 * 2) != 0x27)) {
              uVar4 = (int)(short)uVar9 >> 5;
              if ((short)uVar9 < 0) {
                uVar4 = uVar5;
              }
              if (uVar13 != uVar4) {
                do {
                  param_2 = uVar13 + 1;
                  sVar1 = -1;
                  if (uVar13 < uVar4) {
                    if ((uVar9 & 2) == 0) {
                      lVar8 = *(longlong *)(lVar8 + 0x18);
                    }
                    else {
                      lVar8 = lVar8 + 10;
                    }
                    sVar1 = *(short *)(lVar8 + (longlong)(int)uVar13 * 2);
                    if (sVar1 == 0x27) {
                      if ((uVar4 <= param_2 || (int)uVar4 <= (int)param_2) ||
                         (*(short *)(lVar8 + (longlong)(int)param_2 * 2) != 0x27))
                      goto LAB_1426bb0ca;
                      param_2 = uVar13 + 2;
                      sVar1 = 0x27;
                    }
                  }
                  local_4c = sVar1;
                  uVar13 = param_2;
                  FUN_1424a6cf0(param_3,&local_4c,0,1);
                  lVar8 = *(longlong *)(param_1 + 0x10);
                  uVar9 = (uint)*(short *)(lVar8 + 8);
                  if (*(short *)(lVar8 + 8) < 0) {
                    uVar4 = *(uint *)(lVar8 + 0xc);
                  }
                  else {
                    uVar4 = (int)uVar9 >> 5;
                  }
                  if (uVar13 == uVar4) break;
                } while( true );
              }
              if (0 < *param_4) goto LAB_1426bb1bc;
              *param_4 = 3;
              pcVar7 = "quoted literal text missing terminating apostrophe";
              goto LAB_1426bb1a3;
            }
            local_4e = 0x27;
            FUN_1424a6cf0(param_3,&local_4e,0,1);
            param_2 = param_2 + 2;
          }
          else {
            uVar12 = uVar3 - 0x3a;
            if (0x26 < uVar12) {
LAB_1426bb091:
              if (uVar3 < 0x7b) goto LAB_1426bb0a0;
              goto LAB_1426baf25;
            }
            if ((ulonglong)uVar12 != 0x22) {
              if ((0x7a0000007fU >> ((ulonglong)uVar12 & 0x3f) & 1) == 0) goto LAB_1426bb091;
              break;
            }
            if (uVar13 == uVar4) {
              if (0 < *param_4) goto LAB_1426bb1bc;
              *param_4 = 3;
              *(char **)(param_1 + 0x30) = "backslash escape at the end of the rule string";
              lVar8 = *(longlong *)(param_1 + 0x28);
              goto joined_r0x0001426bb1fb;
            }
            uVar5 = FUN_1424a8030(lVar8,uVar13);
            FUN_1424a7d60(param_3,uVar5);
            param_2 = (uVar13 - (uVar5 < 0x10000)) + 2;
          }
        }
        else {
          uVar3 = 0xffff;
LAB_1426bb0a0:
          cVar2 = FUN_1425cc7f0(uVar3);
          if (cVar2 != '\0') break;
          local_4a = uVar3;
          FUN_1424a6cf0(param_3,&local_4a,0,1);
          param_2 = uVar13;
        }
LAB_1426bb0ca:
        lVar8 = *(longlong *)(param_1 + 0x10);
        uVar9 = (uint)*(short *)(lVar8 + 8);
        uVar5 = *(uint *)(lVar8 + 0xc);
        uVar4 = (int)uVar9 >> 5;
        if (*(short *)(lVar8 + 8) < 0) {
          uVar4 = uVar5;
        }
      } while ((int)param_2 < (int)uVar4);
      uVar3 = *(ushort *)(param_3 + 8);
    }
    if ((short)uVar3 < 0) {
      if (*(int *)(param_3 + 0xc) < 1) goto LAB_1426bb1bc;
    }
    else if ((short)uVar3 >> 5 < 1) goto LAB_1426bb1bc;
    iVar10 = 0;
    do {
      uVar5 = FUN_1424a8030(param_3,iVar10);
      if ((uVar5 & 0xfffff800) == 0xd800) {
        if (*param_4 < 1) {
          *param_4 = 3;
          pcVar7 = "string contains an unpaired surrogate";
          goto LAB_1426bb1a3;
        }
        break;
      }
      if (uVar5 - 0xfffd < 3) {
        if (*param_4 < 1) {
          *param_4 = 3;
          pcVar7 = "string contains U+FFFD, U+FFFE or U+FFFF";
LAB_1426bb1a3:
          *(char **)(param_1 + 0x30) = pcVar7;
          lVar8 = *(longlong *)(param_1 + 0x28);
joined_r0x0001426bb1fb:
          if (lVar8 != 0) {
            FUN_1426bacb0(param_1);
          }
        }
        break;
      }
      if (*(short *)(param_3 + 8) < 0) {
        iVar6 = *(int *)(param_3 + 0xc);
      }
      else {
        iVar6 = (int)*(short *)(param_3 + 8) >> 5;
      }
      iVar10 = (iVar10 - (uint)(uVar5 < 0x10000)) + 2;
    } while (iVar10 < iVar6);
  }
LAB_1426bb1bc:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 1426bb200 FUN_1426bb200 body=765 status=ok
// SIG undefined FUN_1426bb200(void)

uint FUN_1426bb200(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ushort local_42 [5];
  
  local_42[1] = 0xfffe;
  local_42[2] = 0xffff;
  local_42[3] = 0xffff;
  local_42[4] = 0xffff;
  uVar3 = 2;
  if ((*(ushort *)(param_3 + 8) & 1) == 0) {
    uVar3 = *(ushort *)(param_3 + 8) & 0x1f;
  }
  *(ushort *)(param_3 + 8) = uVar3;
  lVar5 = *(longlong *)(param_1 + 0x10);
  uVar8 = (uint)*(short *)(lVar5 + 8);
  uVar10 = (int)uVar8 >> 5;
  uVar6 = *(uint *)(lVar5 + 0xc);
  uVar1 = uVar10;
  if (*(short *)(lVar5 + 8) < 0) {
    uVar1 = uVar6;
  }
  if ((int)param_2 < (int)uVar1) {
    lVar11 = (longlong)(int)param_2;
    do {
      uVar4 = 0xffff;
      if (param_2 < uVar1) {
        if ((uVar8 & 2) == 0) {
          lVar5 = *(longlong *)(lVar5 + 0x18);
        }
        else {
          lVar5 = lVar5 + 10;
        }
        uVar4 = *(undefined2 *)(lVar5 + lVar11 * 2);
      }
      cVar2 = FUN_1425cc7f0(uVar4);
      lVar5 = *(longlong *)(param_1 + 0x10);
      if (cVar2 == '\0') {
        uVar8 = (uint)*(short *)(lVar5 + 8);
        uVar6 = *(uint *)(lVar5 + 0xc);
        uVar10 = (int)uVar8 >> 5;
        break;
      }
      lVar11 = lVar11 + 1;
      param_2 = param_2 + 1;
      uVar8 = (uint)*(short *)(lVar5 + 8);
      uVar10 = (int)uVar8 >> 5;
      uVar6 = *(uint *)(lVar5 + 0xc);
      uVar1 = uVar10;
      if (*(short *)(lVar5 + 8) < 0) {
        uVar1 = uVar6;
      }
    } while (lVar11 < (int)uVar1);
  }
  if ((short)uVar8 < 0) {
    uVar10 = uVar6;
  }
  if ((int)uVar10 <= (int)param_2) {
    return 0;
  }
  do {
    if (param_2 < uVar10) {
      if ((uVar8 & 2) == 0) {
        lVar5 = *(longlong *)(lVar5 + 0x18);
      }
      else {
        lVar5 = lVar5 + 10;
      }
      uVar3 = *(ushort *)(lVar5 + (longlong)(int)param_2 * 2);
      if (uVar3 - 0x21 < 0x5e) {
        if (0x2f < uVar3) {
          uVar6 = uVar3 - 0x3a;
          if (uVar6 < 0x27) {
            if ((ulonglong)uVar6 == 0x25) goto LAB_1426bb380;
            if ((0x5e0000007fU >> ((ulonglong)uVar6 & 0x3f) & 1) != 0) goto LAB_1426bb478;
          }
          if (uVar3 < 0x7b) goto LAB_1426bb380;
        }
        if (uVar3 != 0x2d) {
LAB_1426bb478:
          uVar3 = *(ushort *)(param_3 + 8);
          if (uVar3 < 0x20) {
            return param_2;
          }
          if ((short)uVar3 < 0) {
            iVar9 = *(int *)(param_3 + 0xc);
          }
          else {
            iVar9 = (int)(short)uVar3 >> 5;
          }
          cVar2 = FUN_1424a7e30(param_3,iVar9 + -1,1,&DAT_149d5a710,0,1);
          if (cVar2 != '\0') {
            return param_2;
          }
          uVar3 = *(ushort *)(param_3 + 8);
          if ((short)uVar3 < 0) {
            iVar9 = *(int *)(param_3 + 0xc);
          }
          else {
            iVar9 = (int)(short)uVar3 >> 5;
          }
          iVar7 = iVar9 + -1;
          if ((((int)(short)uVar3 & 1U) != 0) && (iVar7 == 0)) {
            FUN_1424a8e40(param_3);
            return param_2;
          }
          if (iVar9 == 0) {
            return param_2;
          }
          if (0x400 < iVar9) {
            *(ushort *)(param_3 + 8) = uVar3 | 0xffe0;
            *(int *)(param_3 + 0xc) = iVar7;
            return param_2;
          }
          *(ushort *)(param_3 + 8) = (short)iVar7 * 0x20 | uVar3 & 0x1f;
          return param_2;
        }
        uVar3 = 0x2d;
      }
    }
    else {
      uVar3 = 0xffff;
    }
LAB_1426bb380:
    cVar2 = FUN_1425cc7f0(uVar3);
    param_2 = param_2 + 1;
    if (cVar2 == '\0') {
      local_42[0] = uVar3;
      FUN_1424a6cf0(param_3,local_42,0,1);
    }
    else {
      local_42[0] = 0x20;
      FUN_1424a6cf0(param_3,local_42,0,1);
      lVar5 = *(longlong *)(param_1 + 0x10);
      uVar6 = (uint)*(short *)(lVar5 + 8);
      if (*(short *)(lVar5 + 8) < 0) {
        uVar10 = *(uint *)(lVar5 + 0xc);
      }
      else {
        uVar10 = (int)uVar6 >> 5;
      }
      if ((int)param_2 < (int)uVar10) {
        lVar11 = (longlong)(int)param_2;
        do {
          uVar4 = 0xffff;
          if (param_2 < uVar10) {
            if ((uVar6 & 2) == 0) {
              lVar5 = *(longlong *)(lVar5 + 0x18);
            }
            else {
              lVar5 = lVar5 + 10;
            }
            uVar4 = *(undefined2 *)(lVar5 + lVar11 * 2);
          }
          cVar2 = FUN_1425cc7f0(uVar4);
          if (cVar2 == '\0') break;
          lVar5 = *(longlong *)(param_1 + 0x10);
          uVar6 = (uint)*(short *)(lVar5 + 8);
          if (*(short *)(lVar5 + 8) < 0) {
            uVar10 = *(uint *)(lVar5 + 0xc);
          }
          else {
            uVar10 = (int)uVar6 >> 5;
          }
          lVar11 = lVar11 + 1;
          param_2 = param_2 + 1;
        } while (lVar11 < (int)uVar10);
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x10);
    uVar8 = (uint)*(short *)(lVar5 + 8);
    if (*(short *)(lVar5 + 8) < 0) {
      uVar10 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar10 <= (int)param_2) {
        return 0;
      }
    }
    else {
      uVar10 = (int)uVar8 >> 5;
      if ((int)uVar10 <= (int)param_2) {
        return 0;
      }
    }
  } while( true );
}



// FUNCTION 1426bb530 Unwind@1426bb530 body=49 status=ok
// SIG undefined Unwind@1426bb530(void)

void Unwind_1426bb530(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x30) = &DAT_149d5a710;
  return;
}



// FUNCTION 1426bb570 FUN_1426bb570 body=535 status=ok
// SIG undefined FUN_1426bb570(void)

void FUN_1426bb570(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_e8 [64];
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_70;
  undefined1 local_68 [8];
  int local_60;
  int local_5c;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*param_3 < 1) {
    if (*(short *)(param_2 + 8) < 0) {
      if (*(int *)(param_2 + 0xc) == 7) {
LAB_1426bb70c:
        FUN_142612fb0(*(undefined8 *)(param_1 + 0x20));
        return;
      }
    }
    else if (*(short *)(param_2 + 8) >> 5 == 7) goto LAB_1426bb70c;
    FUN_142517d10(local_68,param_3);
    if (*param_3 < 1) {
      local_a8 = (undefined1 *)((longlong)&local_9c + 1);
      local_a0 = 0x28;
      local_9c = 0;
      local_70 = 0;
      iVar3 = 7;
      do {
        if (*(short *)(param_2 + 8) < 0) {
          iVar4 = *(int *)(param_2 + 0xc);
        }
        else {
          iVar4 = (int)*(short *)(param_2 + 8) >> 5;
        }
        if (iVar4 <= iVar3) {
          FUN_142613160(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),local_50,
                        local_60,param_3);
          break;
        }
        iVar1 = iVar3 + 1;
        iVar5 = iVar1;
        if (iVar3 < -1) {
          iVar5 = 0;
        }
        iVar3 = FUN_1424a8940(param_2,0x20,iVar5,iVar4 - iVar5);
        if (iVar3 < 0) {
          if (*(short *)(param_2 + 8) < 0) {
            iVar3 = *(int *)(param_2 + 0xc);
          }
          else {
            iVar3 = (int)*(short *)(param_2 + 8) >> 5;
          }
        }
        local_70 = 0;
        *local_a8 = 0;
        FUN_1424a84d0(param_2,local_e8,iVar1,iVar3 - iVar1);
        FUN_142503780(&local_a8,local_e8,param_3);
        FUN_140859a90(local_e8);
        if (0 < *param_3) break;
        iVar4 = FUN_1426bbc40(local_a8);
        if (iVar4 < 0) {
          if (*param_3 < 1) {
            *param_3 = 3;
            *(char **)(param_1 + 0x30) = "unknown script or reorder code";
            if (*(longlong *)(param_1 + 0x28) != 0) {
              FUN_1426bacb0(param_1);
            }
          }
          break;
        }
        if ((local_60 < -1) || (local_5c <= local_60)) {
          cVar2 = FUN_1425182c0(local_68,local_60 + 1,param_3);
          if (cVar2 != '\0') goto LAB_1426bb6e7;
        }
        else {
LAB_1426bb6e7:
          *(int *)(local_50 + (longlong)local_60 * 4) = iVar4;
          local_60 = local_60 + 1;
        }
      } while (*param_3 < 1);
      if ((char)local_9c != '\0') {
        FUN_1424da110(local_a8);
      }
    }
    FUN_142517df0(local_68);
  }
  return;
}



// FUNCTION 1426bb7a0 Unwind@1426bb7a0 body=70 status=ok
// SIG undefined Unwind@1426bb7a0(void)

void Unwind_1426bb7a0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x7c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x70));
  }
  FUN_142517df0(param_2 + 0xb0);
  return;
}



// FUNCTION 1426bb7f0 Unwind@1426bb7f0 body=55 status=ok
// SIG undefined Unwind@1426bb7f0(void)

void Unwind_1426bb7f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1426bb830 FUN_1426bb830 body=319 status=ok
// SIG undefined FUN_1426bb830(void)

undefined8 FUN_1426bb830(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_60 [8];
  ushort local_58;
  int local_54;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1424a7060(local_60,1,&DAT_149d5ad38,0xffffffff);
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar4 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar4 = (int)(short)uVar1 >> 5;
    }
    iVar2 = local_54;
    if (-1 < (short)local_58) {
      iVar2 = (int)(short)local_58 >> 5;
    }
    if (((local_58 & 1) != 0) || (iVar4 != iVar2)) {
      FUN_140859a90(local_60);
      goto LAB_1426bb8d5;
    }
    cVar3 = FUN_1412ae090(param_1,local_60);
    bVar5 = cVar3 != '\0';
  }
  else {
    bVar5 = (bool)((byte)local_58 & 1);
  }
  FUN_140859a90(local_60);
  if (bVar5 != false) {
    return 0x11;
  }
LAB_1426bb8d5:
  FUN_1424a7060(local_60,1,&DAT_149d5aba4,0xffffffff);
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar4 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar4 = (int)(short)uVar1 >> 5;
    }
    if (-1 < (short)local_58) {
      local_54 = (int)(short)local_58 >> 5;
    }
    if (((local_58 & 1) != 0) || (iVar4 != local_54)) {
      FUN_140859a90(local_60);
      return 0xffffffff;
    }
    cVar3 = FUN_1412ae090(param_1,local_60);
    bVar5 = cVar3 != '\0';
  }
  else {
    bVar5 = (bool)((byte)local_58 & 1);
  }
  FUN_140859a90(local_60);
  if (bVar5 == false) {
    return 0xffffffff;
  }
  return 0x10;
}



// FUNCTION 1426bb970 Unwind@1426bb970 body=34 status=ok
// SIG undefined Unwind@1426bb970(void)

void Unwind_1426bb970(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1426bb9a0 Unwind@1426bb9a0 body=34 status=ok
// SIG undefined Unwind@1426bb9a0(void)

void Unwind_1426bb9a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1426bb9d0 FUN_1426bb9d0 body=548 status=ok
// SIG undefined FUN_1426bb9d0(void)

ulonglong FUN_1426bb9d0(longlong param_1,uint param_2,undefined8 param_3,int *param_4)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  longlong lVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  undefined1 local_98 [64];
  undefined8 local_58;
  int *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar8 = *(longlong *)(param_1 + 0x10);
  sVar1 = *(short *)(lVar8 + 8);
  if (sVar1 < 0) {
    uVar10 = *(uint *)(lVar8 + 0xc);
    if (uVar10 == param_2) goto LAB_1426bba06;
LAB_1426bba1e:
    lVar14 = (longlong)(int)param_2 << 0x20;
    lVar16 = 0;
    iVar15 = 0;
    do {
      lVar14 = lVar14 + 0x100000000;
      local_58 = param_3;
      local_50 = param_4;
      if ((int)lVar16 + param_2 < uVar10) {
        lVar13 = lVar8 + 10;
        if (((int)sVar1 & 2U) == 0) {
          lVar13 = *(longlong *)(lVar8 + 0x18);
        }
        sVar2 = *(short *)(lVar13 + (longlong)(int)param_2 * 2 + lVar16 * 2);
        if (sVar2 == 0x5d) {
          iVar15 = iVar15 + -1;
          if (iVar15 == 0) {
            FUN_1424a84d0(lVar8,local_98,param_2,(int)lVar16 + 1);
            piVar4 = local_50;
            FUN_1425c5c30(local_58,local_98,local_50);
            uVar12 = lVar16 + (ulonglong)param_2 + 1;
            FUN_140859a90(local_98);
            if (0 < *piVar4) {
              *piVar4 = 3;
              pcVar7 = "not a valid UnicodeSet pattern";
              goto LAB_1426bbab5;
            }
            lVar8 = *(longlong *)(param_1 + 0x10);
            uVar6 = (uint)*(short *)(lVar8 + 8);
            uVar11 = (int)uVar6 >> 5;
            uVar10 = *(uint *)(lVar8 + 0xc);
            uVar3 = uVar11;
            if (*(short *)(lVar8 + 8) < 0) {
              uVar3 = uVar10;
            }
            if ((int)uVar3 <= (int)uVar12) goto LAB_1426bbbaf;
            lVar14 = lVar14 >> 0x20;
            goto LAB_1426bbb50;
          }
        }
        else if (sVar2 == 0x5b) {
          iVar15 = iVar15 + 1;
        }
      }
      lVar16 = lVar16 + 1;
    } while ((param_2 - uVar10) + (int)lVar16 != 0);
    iVar15 = *param_4;
  }
  else {
    uVar10 = (int)sVar1 >> 5;
    if (uVar10 != param_2) goto LAB_1426bba1e;
LAB_1426bba06:
    iVar15 = *param_4;
    uVar10 = param_2;
  }
  uVar12 = (ulonglong)uVar10;
  if (0 < iVar15) goto LAB_1426bbac8;
  *param_4 = 3;
  pcVar7 = "unbalanced UnicodeSet pattern brackets";
  goto LAB_1426bbab5;
  while( true ) {
    lVar14 = lVar14 + 1;
    uVar12 = (ulonglong)((uint)uVar12 + 1);
    uVar6 = (uint)*(short *)(lVar8 + 8);
    uVar11 = (int)uVar6 >> 5;
    uVar10 = *(uint *)(lVar8 + 0xc);
    uVar3 = uVar11;
    if (*(short *)(lVar8 + 8) < 0) {
      uVar3 = uVar10;
    }
    if ((int)uVar3 <= lVar14) break;
LAB_1426bbb50:
    uVar9 = 0xffff;
    if ((uint)uVar12 < uVar3) {
      if ((uVar6 & 2) == 0) {
        lVar8 = *(longlong *)(lVar8 + 0x18);
      }
      else {
        lVar8 = lVar8 + 10;
      }
      uVar9 = *(undefined2 *)(lVar8 + lVar14 * 2);
    }
    cVar5 = FUN_1425cc7f0(uVar9);
    lVar8 = *(longlong *)(param_1 + 0x10);
    if (cVar5 == '\0') {
      uVar6 = (uint)*(short *)(lVar8 + 8);
      uVar10 = *(uint *)(lVar8 + 0xc);
      uVar11 = (int)uVar6 >> 5;
      break;
    }
  }
LAB_1426bbbaf:
  if ((short)uVar6 < 0) {
    uVar11 = uVar10;
  }
  uVar10 = (uint)uVar12;
  if (uVar10 < uVar11) {
    if ((uVar6 & 2) == 0) {
      lVar8 = *(longlong *)(lVar8 + 0x18);
    }
    else {
      lVar8 = lVar8 + 10;
    }
    if (*(short *)(lVar8 + (longlong)(int)uVar10 * 2) == 0x5d) {
      uVar12 = (ulonglong)(uVar10 + 1);
      goto LAB_1426bbac8;
    }
  }
  if (0 < *piVar4) goto LAB_1426bbac8;
  *piVar4 = 3;
  pcVar7 = "missing option-terminating \']\' after UnicodeSet pattern";
LAB_1426bbab5:
  *(char **)(param_1 + 0x30) = pcVar7;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1426bacb0(param_1);
  }
LAB_1426bbac8:
  return uVar12 & 0xffffffff;
}



// FUNCTION 1426bbc00 Unwind@1426bbc00 body=52 status=ok
// SIG undefined Unwind@1426bbc00(void)

void Unwind_1426bbc00(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1426bbc40 FUN_1426bbc40 body=184 status=ok
// SIG undefined FUN_1426bbc40(void)

ulonglong FUN_1426bbc40(undefined8 param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_142503a40(param_1,"space");
  if (iVar1 == 0) {
    uVar2 = 0x1000;
  }
  else {
    iVar1 = FUN_142503a40(param_1,"punct");
    if (iVar1 == 0) {
      uVar2 = 0x1001;
    }
    else {
      iVar1 = FUN_142503a40(param_1,"symbol");
      if (iVar1 == 0) {
        uVar2 = 0x1002;
      }
      else {
        iVar1 = FUN_142503a40(param_1,"currency");
        if (iVar1 == 0) {
          uVar2 = 0x1003;
        }
        else {
          iVar1 = FUN_142503a40(param_1,"digit");
          if (iVar1 == 0) {
            uVar2 = 0x1004;
          }
          else {
            uVar2 = FUN_1425634b0(0x100a,param_1);
            if ((int)uVar2 < 0) {
              iVar1 = FUN_142503a40(param_1,"others");
              uVar2 = (ulonglong)(-(uint)(iVar1 != 0) | 0x67);
            }
          }
        }
      }
    }
  }
  return uVar2;
}



// FUNCTION 1426bbd00 thunk_FUN_1424b70d0 body=5 status=ok
// SIG undefined thunk_FUN_1424b70d0(void)

void thunk_FUN_1424b70d0(void)

{
  return;
}



// FUNCTION 1426bbd10 FUN_1426bbd10 body=38 status=ok
// SIG undefined FUN_1426bbd10(void)

void FUN_1426bbd10(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140859a90();
    FUN_1401773f0(param_1);
    return;
  }
  return;
}



// FUNCTION 1426bbd40 FUN_1426bbd40 body=552 status=ok
// SIG undefined FUN_1426bbd40(void)

void FUN_1426bbd40(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                  int param_5)

{
  short sVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int *local_50;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = *(longlong *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(lVar7 + 0x40);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(lVar7 + 0x60);
  if ((*(ushort *)(lVar7 + 0x160) & 0x11) == 0) {
    if ((*(ushort *)(lVar7 + 0x160) & 2) == 0) {
      lVar7 = *(longlong *)(lVar7 + 0x170);
    }
    else {
      lVar7 = lVar7 + 0x162;
    }
  }
  else {
    lVar7 = 0;
  }
  *(longlong *)(param_1 + 0x1a8) = lVar7;
  FUN_1426192c0(param_1);
  *(undefined8 *)(param_1 + 0x330) = param_2;
  *(undefined4 *)(param_1 + 0x338) = param_3;
  local_3c = 0;
  do {
    sVar1 = *(short *)(*(longlong *)(param_1 + 0x330) + 8);
    if (sVar1 < 0) {
      iVar6 = *(int *)(*(longlong *)(param_1 + 0x330) + 0xc);
    }
    else {
      iVar6 = (int)sVar1 >> 5;
    }
    if (iVar6 <= *(int *)(param_1 + 0x338)) break;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x170) = 0;
    uVar5 = FUN_1424a8030();
    *(uint *)(param_1 + 0x338) = (*(int *)(param_1 + 0x338) - (uint)(uVar5 < 0x10000)) + 2;
    iVar6 = FUN_14257f620(*(undefined8 *)(*(longlong *)(param_1 + 0x188) + 0x20),uVar5);
    plVar8 = (longlong *)(param_1 + 400);
    if (iVar6 == 0xc0) {
      plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x188) + 0x10);
      plVar3 = (longlong *)*plVar8;
      if (uVar5 < 0xd800) {
        uVar2 = *(ushort *)(*plVar3 + (ulonglong)(uVar5 >> 5) * 2);
LAB_1426bbecc:
        iVar6 = (uVar5 & 0x1f) + (uint)uVar2 * 4;
      }
      else {
        if (uVar5 < 0x10000) {
          lVar7 = *plVar3;
          uVar9 = (ulonglong)((uVar5 >> 5) + 0x140);
          if (0xdbff < uVar5) {
            uVar9 = (ulonglong)(uVar5 >> 5);
          }
LAB_1426bbec7:
          uVar2 = *(ushort *)(lVar7 + uVar9 * 2);
          goto LAB_1426bbecc;
        }
        iVar6 = 0x80;
        if (uVar5 < 0x110000) {
          if ((int)uVar5 < *(int *)((longlong)plVar3 + 0x2c)) {
            lVar7 = *plVar3;
            uVar9 = (ulonglong)(uVar5 >> 5 & 0x3f) +
                    (ulonglong)*(ushort *)(lVar7 + 0x1040 + (ulonglong)(uVar5 >> 0xb) * 2);
            goto LAB_1426bbec7;
          }
          iVar6 = (int)plVar3[6];
        }
      }
      iVar6 = *(int *)(plVar3[2] + (longlong)iVar6 * 4);
    }
    local_58 = 1;
    local_50 = &local_3c;
    FUN_142619550(param_1,plVar8,uVar5,iVar6);
    iVar6 = *(int *)(param_1 + 0x18);
    if (0 < iVar6) {
      lVar7 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar7 * 8);
        if (lVar4 != 0) {
          if (param_5 < 0x1f) {
            *(longlong *)(param_4 + (longlong)param_5 * 8) = lVar4;
            iVar6 = *(int *)(param_1 + 0x18);
          }
          param_5 = param_5 + 1;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar6);
    }
  } while (local_3c < 1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 1426bbfa0 FUN_1426bbfa0 body=146 status=ok
// SIG undefined FUN_1426bbfa0(void)

undefined4 FUN_1426bbfa0(longlong *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  
  param_1 = (longlong *)*param_1;
  if (param_2 < 0xd800) {
    uVar1 = *(ushort *)(*param_1 + (ulonglong)(param_2 >> 5) * 2);
  }
  else {
    if (param_2 < 0x10000) {
      uVar2 = (param_2 >> 5) + 0x140;
      if (0xdbff < param_2) {
        uVar2 = param_2 >> 5;
      }
      uVar5 = (ulonglong)uVar2;
      lVar3 = *param_1;
    }
    else {
      iVar4 = 0x80;
      if (0x10ffff < param_2) goto LAB_1426bc025;
      if (*(int *)((longlong)param_1 + 0x2c) <= (int)param_2) {
        iVar4 = (int)param_1[6];
        goto LAB_1426bc025;
      }
      lVar3 = *param_1;
      uVar5 = (ulonglong)(param_2 >> 5 & 0x3f) +
              (ulonglong)*(ushort *)(lVar3 + 0x1040 + (ulonglong)(param_2 >> 0xb) * 2);
    }
    uVar1 = *(ushort *)(lVar3 + uVar5 * 2);
  }
  iVar4 = (param_2 & 0x1f) + (uint)uVar1 * 4;
LAB_1426bc025:
  return *(undefined4 *)(param_1[2] + (longlong)iVar4 * 4);
}



// FUNCTION 1426bc040 FUN_1426bc040 body=29 status=ok
// SIG undefined FUN_1426bc040(void)

void FUN_1426bc040(longlong param_1,undefined4 param_2)

{
  FUN_1426192c0();
  *(undefined4 *)(param_1 + 0x338) = param_2;
  return;
}



// FUNCTION 1426bc060 FUN_1426bc060 body=7 status=ok
// SIG undefined FUN_1426bc060(void)

undefined4 FUN_1426bc060(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x338);
}



// FUNCTION 1426bc070 FUN_1426bc070 body=86 status=ok
// SIG undefined FUN_1426bc070(void)

undefined8 FUN_1426bc070(longlong param_1)

{
  short sVar1;
  undefined8 uVar2;
  int iVar3;
  
  sVar1 = *(short *)(*(longlong *)(param_1 + 0x330) + 8);
  if (sVar1 < 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x330) + 0xc);
  }
  else {
    iVar3 = (int)sVar1 >> 5;
  }
  uVar2 = 0xffffffff;
  if (*(int *)(param_1 + 0x338) != iVar3) {
    uVar2 = FUN_1424a8030();
    *(uint *)(param_1 + 0x338) = (*(int *)(param_1 + 0x338) - (uint)((uint)uVar2 < 0x10000)) + 2;
  }
  return uVar2;
}



// FUNCTION 1426bc0d0 FUN_1426bc0d0 body=64 status=ok
// SIG undefined FUN_1426bc0d0(void)

undefined8 FUN_1426bc0d0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x338) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_1424a8030(*(undefined8 *)(param_1 + 0x330),*(int *)(param_1 + 0x338) + -1);
    *(int *)(param_1 + 0x338) = *(int *)(param_1 + 0x338) + ((uint)uVar1 < 0x10000 | 0xfffffffe);
  }
  return uVar1;
}



// FUNCTION 1426bc110 FUN_1426bc110 body=41 status=ok
// SIG undefined FUN_1426bc110(void)

void FUN_1426bc110(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1424a81b0(*(undefined8 *)(param_1 + 0x330),*(undefined4 *)(param_1 + 0x338),param_2);
  *(undefined4 *)(param_1 + 0x338) = uVar1;
  return;
}



// FUNCTION 1426bc140 FUN_1426bc140 body=44 status=ok
// SIG undefined FUN_1426bc140(void)

void FUN_1426bc140(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1424a81b0(*(undefined8 *)(param_1 + 0x330),*(undefined4 *)(param_1 + 0x338),-param_2);
  *(undefined4 *)(param_1 + 0x338) = uVar1;
  return;
}



// FUNCTION 1426bc170 FUN_1426bc170 body=16 status=ok
// SIG undefined FUN_1426bc170(void)

void FUN_1426bc170(longlong param_1)

{
  FUN_14257f620(*(undefined8 *)(*(longlong *)(param_1 + 0x188) + 0x20));
  return;
}



// FUNCTION 1426bc180 FUN_1426bc180 body=207 status=ok
// SIG undefined FUN_1426bc180(void)

ulonglong FUN_1426bc180(longlong param_1,uint param_2,int *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if ((param_2 & 0x100) == 0) {
    lVar3 = FUN_142516630(*(longlong *)(param_1 + 0x188) + 0x68,param_2 >> 0xd);
    uVar1 = *(uint *)(lVar3 + 0x48);
    if (uVar1 == 1) {
      uVar2 = FUN_1426bc250(*(undefined8 *)(param_1 + 0x188),lVar3,param_3);
      *(undefined4 *)(lVar3 + 0x48) = uVar2;
      if (*param_3 == 0xf) {
        *param_3 = 0;
        FUN_1426bc970(*(undefined8 *)(param_1 + 0x188));
        uVar2 = FUN_1426bc250(*(undefined8 *)(param_1 + 0x188),lVar3,param_3);
        *(undefined4 *)(lVar3 + 0x48) = uVar2;
      }
      lVar5 = *(longlong *)(param_1 + 0x188);
      if ((*(ushort *)(lVar5 + 0x160) & 0x11) == 0) {
        if ((*(ushort *)(lVar5 + 0x160) & 2) == 0) {
          lVar5 = *(longlong *)(lVar5 + 0x170);
        }
        else {
          lVar5 = lVar5 + 0x162;
        }
      }
      else {
        lVar5 = 0;
      }
      *(longlong *)(param_1 + 0x1a8) = lVar5;
      uVar1 = *(uint *)(lVar3 + 0x48);
    }
    return (ulonglong)uVar1;
  }
  uVar4 = FUN_14257f620(*(undefined8 *)(*(longlong *)(param_1 + 0x188) + 0x20),param_2 >> 0xd);
  return uVar4;
}



// FUNCTION 1426bc250 FUN_1426bc250 body=1475 status=ok
// SIG undefined FUN_1426bc250(void)

uint FUN_1426bc250(longlong param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 *puVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 local_1d8 [112];
  undefined1 local_168 [8];
  short local_160;
  int local_15c;
  undefined1 local_128 [24];
  ushort local_110;
  undefined4 local_cc;
  undefined4 local_bc;
  undefined1 local_b8 [8];
  ushort local_b0;
  undefined1 local_ae [2];
  uint local_ac;
  undefined1 *local_a0;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  int local_54;
  int *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_3) {
    return 0;
  }
  local_70 = param_2;
  FUN_1425e7ad0(local_1d8,param_3);
  local_50 = param_3;
  FUN_1425e7ad0(local_128,param_3);
  lVar1 = param_1 + 0x68;
  lVar9 = local_70;
  local_68 = param_1;
LAB_1426bc2f4:
  uVar5 = *(ushort *)(lVar9 + 8);
  if ((short)uVar5 < 0) {
    if (*(int *)(lVar9 + 0xc) == 0) goto LAB_1426bc319;
LAB_1426bc304:
    if ((uVar5 & 2) == 0) {
      puVar8 = *(ushort **)(lVar9 + 0x18);
    }
    else {
      puVar8 = (ushort *)(lVar9 + 10);
    }
    local_78 = (ulonglong)*puVar8;
  }
  else {
    if ((short)uVar5 >> 5 != 0) goto LAB_1426bc304;
LAB_1426bc319:
    local_78 = 0xffff;
  }
  local_54 = (int)local_78 + 1;
  FUN_1424a7950(local_b8,lVar9,0);
  local_60 = lVar9;
  do {
    lVar12 = lVar9;
    if (*(int *)(lVar12 + 0x4c) < 0) break;
    lVar9 = FUN_142516630(lVar1);
    if ((local_b0 & 1) == 0) {
      uVar11 = local_ac;
      if (-1 < (short)local_b0) {
        uVar11 = (int)(short)local_b0 >> 5;
      }
      uVar10 = 0;
      if (0 < (int)uVar11) {
        uVar10 = uVar11;
      }
      puVar14 = local_ae;
      if ((local_b0 & 2) == 0) {
        puVar14 = local_a0;
      }
      cVar4 = FUN_1424a7e30(lVar9,0,uVar11,puVar14,(int)uVar11 >> 0x1f & uVar11,uVar10);
    }
    else {
      cVar4 = (*(byte *)(lVar9 + 8) & 1) == 0;
    }
  } while (cVar4 == '\0');
  if (*(short *)(lVar12 + 8) < 0) {
    iVar7 = *(int *)(lVar12 + 0xc);
  }
  else {
    iVar7 = (int)*(short *)(lVar12 + 8) >> 5;
  }
  if (iVar7 != local_54) {
    uVar5 = local_110 & 1;
    local_110 = local_110 & 0x1f;
    if (uVar5 != 0) {
      local_110 = 2;
    }
    local_cc = 0;
    local_bc = 0;
    if (*(short *)(local_60 + 8) < 0) {
      iVar7 = *(int *)(local_60 + 0xc);
    }
    else {
      iVar7 = (int)*(short *)(local_60 + 8) >> 5;
    }
    if (iVar7 != local_54) {
      lVar9 = local_70;
      iVar7 = 0;
      do {
        uVar5 = *(ushort *)(lVar9 + 8);
        if ((short)uVar5 < 0) {
          uVar11 = *(uint *)(lVar9 + 0xc);
          if (uVar11 == 0) goto LAB_1426bc4b9;
LAB_1426bc4a4:
          if ((uVar5 & 2) == 0) {
            puVar8 = *(ushort **)(lVar9 + 0x18);
          }
          else {
            puVar8 = (ushort *)(lVar9 + 10);
          }
          uVar10 = (uint)*puVar8;
          if (*puVar8 == (uint)local_78) goto LAB_1426bc5c0;
        }
        else {
          uVar11 = (int)(short)uVar5 >> 5;
          if (uVar11 != 0) goto LAB_1426bc4a4;
LAB_1426bc4b9:
          uVar10 = 0xffff;
          if ((uint)local_78 == 0xffff) goto LAB_1426bc5c0;
        }
        iVar6 = iVar7;
        if ((*(int *)(lVar9 + 0x44) != 1) && (iVar6 = *(int *)(lVar9 + 0x44), uVar10 != 0)) {
          uVar16 = 1;
          if ((int)uVar11 < 1) {
            uVar16 = uVar11;
          }
          uVar3 = uVar11 - uVar16;
          if ((int)uVar10 <= (int)(uVar11 - uVar16)) {
            uVar3 = uVar10;
          }
          if ((short)local_b0 < 0) {
            uVar10 = local_ac;
            if ((uVar5 & 1) == 0) goto LAB_1426bc533;
LAB_1426bc520:
            cVar4 = ((int)(short)local_b0 & 1U) == 0;
          }
          else {
            uVar10 = (int)(short)local_b0 >> 5;
            if ((uVar5 & 1) != 0) goto LAB_1426bc520;
LAB_1426bc533:
            uVar13 = 0;
            if ((int)uVar16 < 1) {
              uVar16 = uVar13;
            }
            if (((int)uVar3 < 0) ||
               (uVar13 = uVar11 - uVar16, uVar11 = uVar3, (int)uVar13 < (int)uVar3)) {
              uVar11 = uVar13;
            }
            if ((uVar5 & 2) == 0) {
              lVar15 = *(longlong *)(lVar9 + 0x18);
            }
            else {
              lVar15 = lVar9 + 10;
            }
            cVar4 = FUN_1424a7e30(local_b8,uVar10 - uVar3,uVar3,lVar15,uVar16,uVar11);
          }
          iVar6 = iVar7;
          if (cVar4 == '\0') {
            iVar6 = *(int *)(lVar9 + 0x44);
          }
        }
        lVar9 = FUN_142516630(lVar1,*(undefined4 *)(lVar9 + 0x4c));
        iVar7 = iVar6;
      } while( true );
    }
    iVar7 = *(int *)(local_60 + 0x40);
    lVar9 = FUN_142516630(lVar1,*(undefined4 *)(local_60 + 0x4c));
    uVar11 = 0x200;
    goto LAB_1426bc5e6;
  }
  uVar11 = *(uint *)(lVar12 + 0x40);
  goto LAB_1426bc74b;
LAB_1426bc5c0:
  uVar11 = 0x300;
  lVar9 = local_60;
LAB_1426bc5e6:
  do {
    FUN_1424a7860(local_168,lVar9,local_54);
    lVar15 = *(longlong *)(local_68 + 8);
    iVar6 = FUN_1424a8030(local_168,0);
    if (iVar6 < (int)(uint)*(ushort *)(lVar15 + 8)) {
LAB_1426bc658:
      uVar11 = uVar11 & 0xfffffdff;
    }
    else {
      if (iVar6 < 0x10000) {
        bVar2 = *(byte *)(*(longlong *)(lVar15 + 0x38) + (longlong)(iVar6 >> 8));
        if ((bVar2 == 0) || ((1 << ((byte)iVar6 >> 5) & (uint)bVar2) == 0)) goto LAB_1426bc658;
      }
      uVar5 = FUN_1425d5c90(lVar15,iVar6);
      if (uVar5 < 0x100) goto LAB_1426bc658;
    }
    iVar6 = local_15c;
    if (-1 < local_160) {
      iVar6 = (int)local_160 >> 5;
    }
    lVar15 = *(longlong *)(local_68 + 8);
    iVar6 = FUN_1424a8030(local_168,iVar6 + -1);
    if ((int)(uint)*(ushort *)(lVar15 + 8) <= iVar6) {
      if (iVar6 < 0x10000) {
        bVar2 = *(byte *)(*(longlong *)(lVar15 + 0x38) + (longlong)(iVar6 >> 8));
        if ((bVar2 == 0) || ((1 << ((byte)iVar6 >> 5) & (uint)bVar2) == 0)) goto LAB_1426bc6dc;
      }
      uVar5 = FUN_1425d5c90(lVar15,iVar6);
      if (0xff < uVar5) {
        uVar11 = uVar11 | 0x400;
      }
    }
LAB_1426bc6dc:
    FUN_1425e7b50(local_128,local_168,*(undefined4 *)(lVar9 + 0x40),local_50);
    if (lVar9 == lVar12) break;
    lVar9 = FUN_142516630(lVar1,*(undefined4 *)(lVar9 + 0x4c));
    FUN_140859a90(local_168);
  } while( true );
  FUN_140859a90(local_168);
  iVar7 = FUN_1426bf5e0(local_68,iVar7,local_128,local_50);
  if (*local_50 < 1) {
    if (iVar7 < 0x80000) {
      uVar11 = uVar11 | iVar7 << 0xd | 0xc9;
LAB_1426bc74b:
      *(uint *)(local_60 + 0x44) = uVar11;
      if ((uint)local_78 != 0) {
        FUN_1424a9130(local_b8,0,1,0,0,0);
        uVar10 = local_ac;
        if (-1 < (short)local_b0) {
          uVar10 = (int)(short)local_b0 >> 5;
        }
        FUN_1424a98a0(local_b8,0,uVar10);
        FUN_1425e7b50(local_1d8,local_b8,uVar11,local_50);
        if (*(int *)(lVar12 + 0x4c) < 0) {
          FUN_140859a90(local_b8);
          iVar7 = FUN_1426bf5e0(local_68,*(undefined4 *)(local_70 + 0x44),local_1d8,local_50);
          uVar11 = 0;
          if (*local_50 < 1) {
            if (iVar7 < 0x80000) {
              uVar11 = iVar7 << 0xd | 200;
            }
            else {
              *local_50 = 0xf;
            }
          }
LAB_1426bc83b:
          FUN_1425e7b10(local_128);
          FUN_1425e7b10(local_1d8);
          return uVar11;
        }
LAB_1426bc2da:
        FUN_140859a90(local_b8);
        lVar9 = FUN_142516630(lVar1,*(undefined4 *)(lVar12 + 0x4c));
        goto LAB_1426bc2f4;
      }
      if (-1 < *(int *)(lVar12 + 0x4c)) goto LAB_1426bc2da;
      goto LAB_1426bc82f;
    }
    *local_50 = 0xf;
  }
  uVar11 = 0;
LAB_1426bc82f:
  FUN_140859a90(local_b8);
  goto LAB_1426bc83b;
}



// FUNCTION 1426bc870 Unwind@1426bc870 body=55 status=ok
// SIG undefined Unwind@1426bc870(void)

void Unwind_1426bc870(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xa0);
  return;
}



// FUNCTION 1426bc8b0 Unwind@1426bc8b0 body=58 status=ok
// SIG undefined Unwind@1426bc8b0(void)

void Unwind_1426bc8b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x150);
  return;
}



// FUNCTION 1426bc8f0 Unwind@1426bc8f0 body=55 status=ok
// SIG undefined Unwind@1426bc8f0(void)

void Unwind_1426bc8f0(undefined8 param_1,longlong param_2)

{
  FUN_1425e7b10(param_2 + 0xe0);
  return;
}



// FUNCTION 1426bc930 Unwind@1426bc930 body=55 status=ok
// SIG undefined Unwind@1426bc930(void)

void Unwind_1426bc930(undefined8 param_1,longlong param_2)

{
  FUN_1425e7b10(param_2 + 0x30);
  return;
}



// FUNCTION 1426bc970 FUN_1426bc970 body=145 status=ok
// SIG undefined FUN_1426bc970(void)

void FUN_1426bc970(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 local_68 [8];
  undefined4 local_60;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar2 = 2;
  if ((*(ushort *)(param_1 + 0x160) & 1) == 0) {
    uVar2 = *(ushort *)(param_1 + 0x160) & 0x1f;
  }
  *(ushort *)(param_1 + 0x160) = uVar2;
  FUN_1425ec120(local_68,param_1 + 0x90);
  while( true ) {
    cVar1 = FUN_1425ec210(local_68);
    if (cVar1 == '\0') break;
    uVar3 = FUN_14257f620(*(undefined8 *)(param_1 + 0x20),local_60);
    lVar4 = FUN_142516630(param_1 + 0x68,uVar3 >> 0xd);
    *(undefined4 *)(lVar4 + 0x48) = 1;
  }
  FUN_1425ec1d0(local_68);
  return;
}



// FUNCTION 1426bca10 Unwind@1426bca10 body=36 status=ok
// SIG undefined Unwind@1426bca10(void)

void Unwind_1426bca10(undefined8 param_1,longlong param_2)

{
  FUN_1425ec1d0(param_2 + 0x20);
  return;
}



// FUNCTION 1426bca40 FUN_1426bca40 body=312 status=ok
// SIG undefined FUN_1426bca40(void)

undefined8 *
FUN_1426bca40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *param_1 = icu_64::CollationDataBuilder::vftable;
  uVar2 = FUN_1425ce690(param_2);
  param_1[1] = uVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_142517d10(param_1 + 5,param_2);
  puVar4 = param_1 + 9;
  FUN_14250dd10(puVar4,param_2);
  FUN_142515e50(param_1 + 0xd,param_2);
  puVar5 = param_1 + 0x12;
  FUN_142511900();
  puVar6 = param_1 + 0x2b;
  param_1[0x2b] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x2c) = 2;
  FUN_142511900(param_1 + 0x33);
  *(undefined2 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  iVar3 = *(int *)(param_1 + 6);
  if ((iVar3 < -1) || (*(int *)((longlong)param_1 + 0x34) <= iVar3)) {
    cVar1 = FUN_1425182c0(param_1 + 5,iVar3 + 1,param_2,param_4,puVar4,puVar5,puVar6,param_1 + 0x33)
    ;
    if (cVar1 == '\0') goto LAB_1426bcb5c;
    iVar3 = *(int *)(param_1 + 6);
  }
  *(undefined4 *)(param_1[8] + (longlong)iVar3 * 4) = 0;
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
LAB_1426bcb5c:
  FUN_142516bb0(param_1 + 0xd,FUN_1426bbd10);
  return param_1;
}



// FUNCTION 1426bcb80 Unwind@1426bcb80 body=34 status=ok
// SIG undefined Unwind@1426bcb80(void)

void Unwind_1426bcb80(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1426bcbb0 Unwind@1426bcbb0 body=43 status=ok
// SIG undefined Unwind@1426bcbb0(void)

void Unwind_1426bcbb0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1426bcbe0 Unwind@1426bcbe0 body=34 status=ok
// SIG undefined Unwind@1426bcbe0(void)

void Unwind_1426bcbe0(undefined8 param_1,longlong param_2)

{
  FUN_142515ff0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 1426bcc10 Unwind@1426bcc10 body=34 status=ok
// SIG undefined Unwind@1426bcc10(void)

void Unwind_1426bcc10(undefined8 param_1,longlong param_2)

{
  FUN_14250dd70(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1426bcc40 Unwind@1426bcc40 body=34 status=ok
// SIG undefined Unwind@1426bcc40(void)

void Unwind_1426bcc40(undefined8 param_1,longlong param_2)

{
  FUN_142517df0(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 1426bcc70 Unwind@1426bcc70 body=34 status=ok
// SIG undefined Unwind@1426bcc70(void)

void Unwind_1426bcc70(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 1426bcca0 FUN_1426bcca0 body=147 status=ok
// SIG undefined FUN_1426bcca0(void)

void FUN_1426bcca0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::CollationDataBuilder::vftable;
  FUN_14257f940(param_1[4]);
  puVar1 = (undefined8 *)param_1[0x4d];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x4e];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1425121d0(param_1 + 0x33);
  FUN_140859a90(param_1 + 0x2b);
  FUN_1425121d0(param_1 + 0x12);
  FUN_142515ff0(param_1 + 0xd);
  FUN_14250dd70(param_1 + 9);
  FUN_142517df0(param_1 + 5);
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 1426bcd40 FUN_1426bcd40 body=200 status=ok
// SIG undefined FUN_1426bcd40(void)

void FUN_1426bcd40(longlong param_1,longlong param_2,int *param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*param_3 < 1) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      if (param_2 != 0) {
        *(longlong *)(param_1 + 0x10) = param_2;
        iVar2 = 0xc0;
        uVar1 = FUN_1426caea0(0xc0,0xfffd0505,param_3);
        *(undefined8 *)(param_1 + 0x20) = uVar1;
        do {
          FUN_1426cb2f0(*(undefined8 *)(param_1 + 0x20),iVar2,0xc0,param_3);
          iVar2 = iVar2 + 1;
        } while (iVar2 != 0x100);
        FUN_1426cc890(*(undefined8 *)(param_1 + 0x20),0xac00,0xd7a3,0xcc,1,param_3);
        FUN_142513300(param_1 + 0x198,*(undefined8 *)(param_2 + 0x50));
        return;
      }
      *param_3 = 1;
    }
    else {
      *param_3 = 0x1b;
    }
  }
  return;
}



// FUNCTION 1426bce10 FUN_1426bce10 body=15 status=ok
// SIG undefined FUN_1426bce10(void)

undefined1 FUN_1426bce10(longlong param_1,uint param_2)

{
  return *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48) + (ulonglong)param_2);
}



// FUNCTION 1426bce20 FUN_1426bce20 body=174 status=ok
// SIG undefined FUN_1426bce20(void)

int FUN_1426bce20(longlong param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = -1;
  if (*param_4 < 1) {
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 < 0x80000) {
      lVar2 = thunk_FUN_1424da030(0x50);
      if (lVar2 == 0) {
        *param_4 = 7;
      }
      else {
        FUN_1424a6be0(lVar2,param_2);
        *(undefined4 *)(lVar2 + 0x40) = param_3;
        *(undefined1 **)(lVar2 + 0x44) = &DAT_100000001;
        *(undefined4 *)(lVar2 + 0x4c) = 0xffffffff;
        FUN_1425163e0(param_1 + 0x68,lVar2,param_4);
        iVar3 = iVar1;
      }
    }
    else {
      *param_4 = 0xf;
    }
  }
  return iVar3;
}



// FUNCTION 1426bced0 Unwind@1426bced0 body=48 status=ok
// SIG undefined Unwind@1426bced0(void)

void Unwind_1426bced0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1426bcf00 FUN_1426bcf00 body=1181 status=ok
// SIG undefined FUN_1426bcf00(void)

void FUN_1426bcf00(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  int *param_5)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined1 local_e0 [8];
  ushort local_d8;
  int local_d4;
  undefined1 local_a0 [8];
  short local_98;
  int local_94;
  int local_5c;
  ulonglong local_58;
  byte local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_5) {
    return;
  }
  if (*(ushort *)(param_3 + 8) < 0x20) {
    *param_5 = 1;
    return;
  }
  if ((*(longlong *)(param_1 + 0x20) == 0) || (cVar4 = FUN_14257f990(), cVar4 != '\0')) {
    *param_5 = 0x1b;
    return;
  }
  uVar5 = FUN_1424a8030(param_3,0);
  local_5c = 2 - (uint)(uVar5 < 0x10000);
  local_58 = CONCAT44(local_58._4_4_,uVar5);
  uVar5 = FUN_14257f620(*(undefined8 *)(param_1 + 0x20));
  uVar10 = local_58;
  bVar12 = true;
  if (*(ushort *)(param_2 + 8) < 0x20) {
    if (*(short *)(param_3 + 8) < 0) {
      iVar14 = *(int *)(param_3 + 0xc);
    }
    else {
      iVar14 = (int)*(short *)(param_3 + 8) >> 5;
    }
    bVar12 = local_5c < iVar14;
  }
  if (uVar5 == 0xc0) {
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    uVar16 = (undefined4)local_58;
    local_49 = bVar12;
    uVar6 = FUN_1426bbfa0(uVar8,local_58 & 0xffffffff);
    uVar5 = FUN_1425638e0(uVar8,uVar6);
    if ((~local_49 & (uVar5 & 0xce) != 200) != 0) goto LAB_1426bd0b2;
    uVar5 = FUN_1426bd4e0(param_1,uVar10 & 0xffffffff,uVar5,1,param_5);
    FUN_1426cb2f0(*(undefined8 *)(param_1 + 0x20),uVar10 & 0xffffffff,uVar5,param_5);
    bVar12 = local_49;
    if (0 < *param_5) {
      return;
    }
  }
  if (bVar12 != 0) {
    if ((uVar5 & 0xcf) == 199) {
      lVar7 = FUN_142516630(param_1 + 0x68,uVar5 >> 0xd);
      *(undefined4 *)(lVar7 + 0x48) = 1;
    }
    else {
      FUN_1424a6c10(local_a0,0);
      iVar14 = FUN_1426bce20(param_1,local_a0,uVar5,param_5);
      FUN_140859a90(local_a0);
      uVar10 = local_58;
      if (0 < *param_5) {
        return;
      }
      FUN_1426cb2f0(*(undefined8 *)(param_1 + 0x20),local_58 & 0xffffffff,iVar14 << 0xd | 199,
                    param_5);
      FUN_142513960(param_1 + 0x90,uVar10 & 0xffffffff);
      lVar7 = FUN_142516630(param_1 + 0x68,iVar14);
    }
    FUN_1424a7860(local_a0,param_3,local_5c);
    if (*(short *)(param_2 + 8) < 0) {
      uVar5 = (uint)*(ushort *)(param_2 + 0xc);
    }
    else {
      uVar5 = (uint)(int)*(short *)(param_2 + 8) >> 5;
    }
    FUN_1424a6c10(local_e0,uVar5);
    if (*(short *)(param_2 + 8) < 0) {
      iVar14 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar14 = (int)*(short *)(param_2 + 8) >> 5;
    }
    uVar8 = FUN_1424a9690(local_e0,param_2,0,iVar14);
    if (-1 < local_98) {
      local_94 = (int)local_98 >> 5;
    }
    FUN_1424a9690(uVar8,local_a0,0,local_94);
    FUN_142513eb0(param_1 + 0x198,local_a0);
    lVar1 = param_1 + 0x68;
    do {
      iVar14 = *(int *)(lVar7 + 0x4c);
      if (iVar14 < 0) {
        if (0 < *param_5) goto LAB_1426bd386;
        iVar14 = *(int *)(param_1 + 0x70);
        iVar13 = 0xf;
        if (iVar14 < 0x80000) {
          uVar10 = thunk_FUN_1424da030(0x50);
          if (uVar10 != 0) {
            local_58 = uVar10;
            FUN_1424a6be0(uVar10,local_e0);
            *(undefined4 *)(local_58 + 0x40) = param_4;
            *(undefined1 **)(local_58 + 0x44) = &DAT_100000001;
            *(undefined4 *)(local_58 + 0x4c) = 0xffffffff;
            FUN_1425163e0(lVar1,local_58,param_5);
            if (0 < *param_5) goto LAB_1426bd386;
            *(int *)(lVar7 + 0x4c) = iVar14;
            goto LAB_1426bd361;
          }
LAB_1426bd37f:
          iVar13 = 7;
        }
LAB_1426bd384:
        *param_5 = iVar13;
LAB_1426bd386:
        FUN_140859a90(local_e0);
        FUN_140859a90(local_a0);
        return;
      }
      lVar9 = FUN_142516630(lVar1,iVar14);
      uVar2 = *(ushort *)(lVar9 + 8);
      if ((uVar2 & 1) == 0) {
        if ((short)local_d8 < 0) {
          iVar13 = local_d4;
          if (-1 < (short)uVar2) goto LAB_1426bd214;
LAB_1426bd229:
          uVar5 = *(uint *)(lVar9 + 0xc);
        }
        else {
          iVar13 = (int)(short)local_d8 >> 5;
          if ((short)uVar2 < 0) goto LAB_1426bd229;
LAB_1426bd214:
          uVar5 = (int)(short)uVar2 >> 5;
        }
        uVar11 = 0;
        if (0 < (int)uVar5) {
          uVar11 = uVar5;
        }
        if ((uVar2 & 2) == 0) {
          lVar15 = *(longlong *)(lVar9 + 0x18);
        }
        else {
          lVar15 = lVar9 + 10;
        }
        cVar4 = FUN_1424a7e30(local_e0,0,iVar13,lVar15,(int)uVar5 >> 0x1f & uVar5,uVar11);
        if (cVar4 < '\0') {
          if (0 < *param_5) goto LAB_1426bd386;
          iVar3 = *(int *)(param_1 + 0x70);
          iVar13 = 0xf;
          if (0x7ffff < iVar3) goto LAB_1426bd384;
          uVar10 = thunk_FUN_1424da030(0x50);
          if (uVar10 == 0) goto LAB_1426bd37f;
          local_58 = uVar10;
          FUN_1424a6be0(uVar10,local_e0);
          *(undefined4 *)(local_58 + 0x40) = param_4;
          *(undefined1 **)(local_58 + 0x44) = &DAT_100000001;
          *(undefined4 *)(local_58 + 0x4c) = 0xffffffff;
          FUN_1425163e0(lVar1,local_58,param_5);
          if (0 < *param_5) goto LAB_1426bd386;
          *(int *)(lVar7 + 0x4c) = iVar3;
          lVar7 = FUN_142516630(lVar1,iVar3);
          *(int *)(lVar7 + 0x4c) = iVar14;
          goto LAB_1426bd361;
        }
      }
      else {
        cVar4 = (local_d8 & 1) == 0;
      }
      lVar7 = lVar9;
      if (cVar4 == '\0') {
        *(undefined4 *)(lVar9 + 0x40) = param_4;
LAB_1426bd361:
        FUN_140859a90(local_e0);
        FUN_140859a90(local_a0);
        *(undefined1 *)(param_1 + 0x260) = 1;
        return;
      }
    } while( true );
  }
  uVar16 = (undefined4)local_58;
  if ((uVar5 & 0xcf) == 199) {
    lVar7 = FUN_142516630(param_1 + 0x68,uVar5 >> 0xd);
    *(undefined4 *)(lVar7 + 0x48) = 1;
    *(undefined4 *)(lVar7 + 0x40) = param_4;
    *(undefined1 *)(param_1 + 0x260) = 1;
    return;
  }
LAB_1426bd0b2:
  FUN_1426cb2f0(*(undefined8 *)(param_1 + 0x20),uVar16,param_4,param_5);
  *(undefined1 *)(param_1 + 0x260) = 1;
  return;
}



// FUNCTION 1426bd3a0 Unwind@1426bd3a0 body=55 status=ok
// SIG undefined Unwind@1426bd3a0(void)

void Unwind_1426bd3a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xc0));
  return;
}



// FUNCTION 1426bd3e0 Unwind@1426bd3e0 body=55 status=ok
// SIG undefined Unwind@1426bd3e0(void)

void Unwind_1426bd3e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1426bd420 Unwind@1426bd420 body=55 status=ok
// SIG undefined Unwind@1426bd420(void)

void Unwind_1426bd420(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 1426bd460 Unwind@1426bd460 body=55 status=ok
// SIG undefined Unwind@1426bd460(void)

void Unwind_1426bd460(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 1426bd4a0 Unwind@1426bd4a0 body=55 status=ok
// SIG undefined Unwind@1426bd4a0(void)

void Unwind_1426bd4a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xc0));
  return;
}



// FUNCTION 1426bd4e0 FUN_1426bd4e0 body=1261 status=ok
// SIG undefined FUN_1426bd4e0(void)

ulonglong FUN_1426bd4e0(longlong param_1,undefined4 param_2,ulonglong param_3,char param_4,
                       undefined ***param_5)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined ***pppuVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined ***pppuVar11;
  undefined ***in_stack_fffffffffffffe90;
  undefined4 uVar12;
  undefined **local_168;
  undefined2 local_160;
  undefined1 local_140 [24];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int iStack_11c;
  uint local_fc;
  undefined **local_f0;
  undefined2 local_e8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  undefined1 local_a0 [8];
  short local_98;
  int local_94;
  longlong local_60;
  longlong local_58;
  undefined2 local_4a;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *(int *)param_5) {
    return 0;
  }
  uVar4 = (uint)param_3;
  uVar7 = param_3 & 0xffffffff;
  if ((~uVar4 & 0xc0) != 0) {
    return uVar7;
  }
  if (0xe < (uVar4 & 0xf) - 1) {
switchD_1426bd550_caseD_3:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = *(longlong *)(param_1 + 0x10);
  switch(uVar4 & 0xf) {
  case 1:
  case 2:
  case 4:
    break;
  default:
    goto switchD_1426bd550_caseD_3;
  case 5:
switchD_1426bd550_caseD_5:
    uVar7 = FUN_1426bde20(param_1,(uVar7 >> 0xd) * 4 + *(longlong *)(lVar6 + 8),
                          (uint)uVar7 >> 8 & 0x1f,param_5);
    return uVar7;
  case 6:
switchD_1426bd550_caseD_6:
    uVar7 = FUN_1426bdf90(param_1,(uVar7 >> 0xd) * 8 + *(longlong *)(lVar6 + 0x10),
                          (uint)uVar7 >> 8 & 0x1f,param_5);
    return uVar7;
  case 8:
    lVar10 = *(longlong *)(lVar6 + 0x18);
    uVar9 = param_3 >> 0xd & 0x7ffff;
    uVar1 = *(ushort *)(lVar10 + 2 + uVar9 * 2);
    uVar7 = (ulonglong)CONCAT22(*(undefined2 *)(lVar10 + uVar9 * 2),uVar1);
    if (param_4 != '\0') {
      local_f0 = &PTR_FUN_149e18960;
      local_e8 = 2;
      local_b0 = 0;
      uStack_ac = 1;
      uStack_a8 = 1;
      iStack_a4 = -1;
      FUN_1424a6c10(local_a0,0);
      if ((uVar1 & 0xcf) == 0xc9) {
        pppuVar11 = &local_f0;
        in_stack_fffffffffffffe90 = param_5;
        iVar3 = FUN_1426be110(param_1,local_a0,param_2,uVar7,pppuVar11,param_5);
      }
      else {
        pppuVar11 = param_5;
        uVar4 = FUN_1426bd4e0(param_1,param_2,uVar7,1,param_5);
        uVar7 = (ulonglong)uVar4;
        iVar3 = FUN_1426bce20(param_1,local_a0,uVar4,param_5);
        iStack_a4 = iVar3;
      }
      iVar5 = 1;
      if (*(int *)param_5 < 1) {
        local_60 = param_1 + 0x68;
        pppuVar8 = (undefined ***)FUN_142516630(local_60,iVar3);
        FUN_1426c6b30(&local_168,lVar10 + uVar9 * 2 + 4,0,param_5);
        while( true ) {
          uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffe90 >> 0x20);
          cVar2 = FUN_1426c6c60(&local_168,param_5);
          iVar3 = iStack_a4;
          if (cVar2 == '\0') break;
          FUN_1424a7c80(local_a0,local_140);
          iVar3 = local_94;
          if (-1 < local_98) {
            iVar3 = (int)local_98 >> 5;
          }
          FUN_1424a98a0(local_a0,0,iVar3);
          if (local_98 < 0) {
            local_4a = (undefined2)local_94;
          }
          else {
            local_4a = (undefined2)((uint)(int)local_98 >> 5);
          }
          in_stack_fffffffffffffe90 = (undefined ***)CONCAT44(uVar12,1);
          FUN_1424a9130(local_a0,0,0,&local_4a,(ulonglong)pppuVar11 & 0xffffffff00000000,
                        in_stack_fffffffffffffe90);
          uVar7 = (ulonglong)local_fc;
          if ((local_fc & 0xcf) == 0xc9) {
            in_stack_fffffffffffffe90 = param_5;
            iVar3 = FUN_1426be110(param_1,local_a0,param_2,uVar7,pppuVar8,param_5);
            pppuVar11 = pppuVar8;
          }
          else {
            pppuVar11 = param_5;
            uVar4 = FUN_1426bd4e0(param_1,param_2,local_fc,1,param_5);
            uVar7 = (ulonglong)uVar4;
            iVar3 = -1;
            if (*(int *)param_5 < 1) {
              iVar3 = *(int *)(param_1 + 0x70);
              iVar5 = 0xf;
              if (iVar3 < 0x80000) {
                lVar6 = thunk_FUN_1424da030(0x50);
                if (lVar6 != 0) {
                  local_58 = lVar6;
                  FUN_1424a6be0(lVar6,local_a0);
                  *(uint *)(local_58 + 0x40) = uVar4;
                  *(undefined1 **)(local_58 + 0x44) = &DAT_100000001;
                  *(undefined4 *)(local_58 + 0x4c) = 0xffffffff;
                  FUN_1425163e0(local_60,local_58,param_5);
                  goto LAB_1426bd93f;
                }
                iVar5 = 7;
              }
              *(int *)param_5 = iVar5;
              iVar3 = -1;
            }
LAB_1426bd93f:
            *(int *)((longlong)pppuVar8 + 0x4c) = iVar3;
          }
          if (0 < *(int *)param_5) {
            iVar5 = 1;
            goto LAB_1426bd98d;
          }
          pppuVar8 = (undefined ***)FUN_142516630(local_60,iVar3);
        }
        FUN_142513960(param_1 + 0x90,param_2);
        uVar7 = (ulonglong)(iVar3 << 0xd | 199);
        iVar5 = 2;
LAB_1426bd98d:
        FUN_1426c6c30(&local_168);
      }
      FUN_140859a90(local_a0);
      FUN_140859a90(&local_f0);
      if (iVar5 != 1) {
        return uVar7;
      }
      return 0;
    }
    goto LAB_1426bd6a0;
  case 9:
    if (param_4 != '\0') {
      local_168 = &PTR_FUN_149e18960;
      local_160 = 2;
      local_128 = 0;
      uStack_124 = 1;
      uStack_120 = 1;
      iStack_11c = -1;
      FUN_1424a6c10(&local_f0,0);
      FUN_1426be110(param_1,&local_f0,param_2,param_3 & 0xffffffff,&local_168,param_5);
      iVar3 = iStack_11c;
      FUN_142513960(param_1 + 0x90,param_2);
      FUN_140859a90(&local_f0);
      FUN_140859a90(&local_168);
      return (ulonglong)(iVar3 << 0xd | 199);
    }
    lVar10 = *(longlong *)(lVar6 + 0x18);
    uVar7 = (ulonglong)
            CONCAT22(*(undefined2 *)(lVar10 + (ulonglong)(uVar4 >> 0xd) * 2),
                     *(undefined2 *)(lVar10 + 2 + (ulonglong)(uVar4 >> 0xd) * 2));
LAB_1426bd6a0:
    if ((~(uint)uVar7 & 0xc0) == 0) {
      do {
        uVar4 = (uint)uVar7;
        switch(uVar4 & 0xf) {
        case 1:
        case 2:
        case 4:
          goto switchD_1426bd550_caseD_1;
        default:
          goto switchD_1426bd550_caseD_3;
        case 5:
          goto switchD_1426bd550_caseD_5;
        case 6:
          goto switchD_1426bd550_caseD_6;
        case 9:
        case 8:
          uVar1 = *(ushort *)(lVar10 + 2 + (ulonglong)(uVar4 >> 0xd) * 2);
          uVar4 = CONCAT22(*(undefined2 *)(lVar10 + (ulonglong)(uVar4 >> 0xd) * 2),uVar1);
          uVar7 = (ulonglong)uVar4;
          if ((~uVar1 & 0xc0) != 0) {
            return (ulonglong)uVar4;
          }
          break;
        case 0xc:
          goto switchD_1426bd550_caseD_c;
        case 0xe:
          goto switchD_1426bd550_caseD_e;
        case 0xf:
          goto switchD_1426bd550_caseD_f;
        }
      } while( true );
    }
    break;
  case 0xc:
switchD_1426bd550_caseD_c:
    *(int *)param_5 = 0x10;
    break;
  case 0xe:
switchD_1426bd550_caseD_e:
    uVar4 = FUN_142620c40(param_2,*(undefined8 *)
                                   (*(longlong *)(lVar6 + 0x10) + (ulonglong)(uVar4 >> 0xd) * 8));
    uVar7 = (ulonglong)(uVar4 | 0xc1);
    break;
  case 0xf:
switchD_1426bd550_caseD_f:
    lVar6 = FUN_142620d50(param_2);
    uVar7 = FUN_1426bdb50(param_1,(lVar6 << 0x20) + 0x5000500,param_5);
    return uVar7;
  }
switchD_1426bd550_caseD_1:
  return uVar7;
}



// FUNCTION 1426bd9d0 Unwind@1426bd9d0 body=58 status=ok
// SIG undefined Unwind@1426bd9d0(void)

void Unwind_1426bd9d0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x140));
  return;
}



// FUNCTION 1426bda10 Unwind@1426bda10 body=55 status=ok
// SIG undefined Unwind@1426bda10(void)

void Unwind_1426bda10(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xa8);
  return;
}



// FUNCTION 1426bda50 Unwind@1426bda50 body=55 status=ok
// SIG undefined Unwind@1426bda50(void)

void Unwind_1426bda50(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1426bda90 Unwind@1426bda90 body=55 status=ok
// SIG undefined Unwind@1426bda90(void)

void Unwind_1426bda90(undefined8 param_1,longlong param_2)

{
  FUN_1426c6c30(param_2 + 0x30);
  return;
}



// FUNCTION 1426bdad0 Unwind@1426bdad0 body=55 status=ok
// SIG undefined Unwind@1426bdad0(void)

void Unwind_1426bdad0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xf8);
  return;
}



// FUNCTION 1426bdb10 Unwind@1426bdb10 body=55 status=ok
// SIG undefined Unwind@1426bdb10(void)

void Unwind_1426bdb10(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xa8);
  return;
}



// FUNCTION 1426bdb50 FUN_1426bdb50 body=256 status=ok
// SIG undefined FUN_1426bdb50(void)

uint FUN_1426bdb50(longlong param_1,ulonglong param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar2 = (uint)(param_2 >> 0x20);
  if ((param_2 & 0xffff00ff00ff) == 0) {
    uVar2 = (uint)(byte)(param_2 >> 8) | (uint)(param_2 >> 0x10) & 0xffff | uVar2;
    if (uVar2 != 1) {
      return uVar2;
    }
  }
  else {
    if ((param_2 & 0xffffffffff) == 0x5000500) {
      return uVar2 | 0xc1;
    }
    if ((param_2 & 0xff) == 0 && uVar2 == 0) {
      return (uint)param_2 | 0xc2;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x50);
  if (0 < (int)uVar2) {
    uVar3 = 0;
    do {
      if (*(ulonglong *)(*(longlong *)(param_1 + 0x60) + uVar3 * 8) == param_2) {
        uVar2 = (uint)uVar3;
        goto LAB_1426bdc20;
      }
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  if (((int)uVar2 < -1) || (uVar4 = uVar2, *(int *)(param_1 + 0x54) <= (int)uVar2)) {
    cVar1 = FUN_14250e240(param_1 + 0x48,uVar2 + 1,param_3);
    if (cVar1 == '\0') goto LAB_1426bdc20;
    uVar4 = *(uint *)(param_1 + 0x50);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x60) + (longlong)(int)uVar4 * 8) = param_2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
LAB_1426bdc20:
  uVar4 = 0;
  if (*param_3 < 1) {
    if ((int)uVar2 < 0x80000) {
      uVar4 = uVar2 << 0xd | 0x1c6;
    }
    else {
      *param_3 = 0xf;
    }
  }
  return uVar4;
}



// FUNCTION 1426bdc50 FUN_1426bdc50 body=409 status=ok
// SIG undefined FUN_1426bdc50(void)

void FUN_1426bdc50(longlong param_1,ulonglong *param_2,uint param_3,int *param_4)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auStack_d8 [32];
  uint local_b8 [34];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_4 < 1) {
    if (param_3 < 0x20) {
      if ((*(longlong *)(param_1 + 0x20) == 0) || (cVar2 = FUN_14257f990(), cVar2 != '\0')) {
        *param_4 = 0x1b;
      }
      else if (param_3 != 0) {
        if (param_3 == 2) {
          if ((((*param_2 & 0xffffffffff00ff) == 0x5000000) &&
              ((param_2[1] & 0xffffffff00ffffff) == 0x500)) && (*param_2 >> 0x20 != 0))
          goto LAB_1426bdcab;
        }
        else if (param_3 == 1) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_d8);
        }
        uVar3 = 0;
        do {
          uVar1 = param_2[uVar3];
          uVar4 = (uint)(uVar1 >> 0x20);
          if ((uVar1 & 0xffff00ff00ff) == 0) {
            uVar4 = (uint)(byte)(uVar1 >> 8) | (uint)(uVar1 >> 0x10) & 0xffff | uVar4;
            if (uVar4 == 1) {
LAB_1426bddfe:
              FUN_1426bdf90(param_1,param_2,param_3,param_4);
              goto LAB_1426bdcab;
            }
          }
          else if ((uVar1 & 0xffffffffff) == 0x5000500) {
            uVar4 = uVar4 | 0xc1;
          }
          else {
            if ((uVar1 & 0xff) != 0 || uVar4 != 0) goto LAB_1426bddfe;
            uVar4 = (uint)uVar1 | 0xc2;
          }
          local_b8[uVar3] = uVar4;
          uVar3 = uVar3 + 1;
        } while (param_3 != uVar3);
        FUN_1426bde20(param_1,local_b8,param_3,param_4);
      }
    }
    else {
      *param_4 = 1;
    }
  }
LAB_1426bdcab:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1426bde20 FUN_1426bde20 body=341 status=ok
// SIG undefined FUN_1426bde20(void)

uint FUN_1426bde20(longlong param_1,int *param_2,uint param_3,int *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar6 = 0;
  if (*param_4 < 1) {
    iVar1 = *(int *)(param_1 + 0x30);
    if ((int)param_3 <= iVar1) {
      uVar5 = 0;
      lVar7 = *(longlong *)(param_1 + 0x40);
      do {
        iVar4 = 0;
        if ((0 < iVar1) && ((longlong)uVar5 < (longlong)iVar1)) {
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x40) + uVar5 * 4);
        }
        if (*param_2 == iVar4) {
          if (0x7ffff < uVar5) {
            *param_4 = 0xf;
            return 0;
          }
          if (param_3 == 1) {
LAB_1426bdef2:
            uVar6 = param_3 << 8 | (int)uVar5 << 0xd;
            goto LAB_1426bdf6d;
          }
          uVar8 = 1;
          while( true ) {
            iVar4 = 0;
            if ((0 < iVar1) && ((int)uVar5 + (int)uVar8 < iVar1)) {
              iVar4 = *(int *)(lVar7 + uVar8 * 4);
            }
            if (iVar4 != param_2[uVar8]) break;
            uVar8 = uVar8 + 1;
            if (param_3 == uVar8) goto LAB_1426bdef2;
          }
        }
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 4;
      } while (uVar5 != (iVar1 - param_3) + 1);
    }
    if (iVar1 < 0x80000) {
      if (0 < (int)param_3) {
        uVar5 = 0;
        do {
          iVar4 = param_2[uVar5];
          iVar3 = *(int *)(param_1 + 0x30);
          if ((iVar3 < -1) || (*(int *)(param_1 + 0x34) <= iVar3)) {
            cVar2 = FUN_1425182c0(param_1 + 0x28,iVar3 + 1,param_4);
            if (cVar2 != '\0') {
              iVar3 = *(int *)(param_1 + 0x30);
              goto LAB_1426bdf37;
            }
          }
          else {
LAB_1426bdf37:
            *(int *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 4) = iVar4;
            *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
          }
          uVar5 = uVar5 + 1;
        } while (param_3 != uVar5);
      }
      uVar6 = param_3 << 8 | iVar1 << 0xd;
LAB_1426bdf6d:
      uVar6 = uVar6 | 0xc5;
    }
    else {
      *param_4 = 0xf;
    }
  }
  return uVar6;
}



// FUNCTION 1426bdf90 FUN_1426bdf90 body=342 status=ok
// SIG undefined FUN_1426bdf90(void)

uint FUN_1426bdf90(longlong param_1,longlong *param_2,uint param_3,int *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  if (*param_4 < 1) {
    iVar1 = *(int *)(param_1 + 0x50);
    if ((int)param_3 <= iVar1) {
      uVar4 = 0;
      lVar6 = *(longlong *)(param_1 + 0x60);
      do {
        if ((longlong)uVar4 < (longlong)iVar1) {
          if (*param_2 == *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar4 * 8))
          goto LAB_1426be028;
        }
        else if (*param_2 == 0) {
LAB_1426be028:
          if (0x7ffff < uVar4) {
            *param_4 = 0xf;
            return 0;
          }
          if (param_3 != 1) {
            uVar7 = 1;
            do {
              if ((int)uVar4 + (int)uVar7 < iVar1) {
                if (*(longlong *)(lVar6 + uVar7 * 8) != param_2[uVar7]) goto LAB_1426be000;
              }
              else if (param_2[uVar7] != 0) goto LAB_1426be000;
              uVar7 = uVar7 + 1;
              if (param_3 == uVar7) break;
            } while( true );
          }
          uVar5 = param_3 << 8 | (int)uVar4 << 0xd;
          goto LAB_1426be0ed;
        }
LAB_1426be000:
        uVar4 = uVar4 + 1;
        lVar6 = lVar6 + 8;
      } while (uVar4 != (iVar1 - param_3) + 1);
    }
    if (iVar1 < 0x80000) {
      if (0 < (int)param_3) {
        uVar4 = 0;
        do {
          lVar6 = param_2[uVar4];
          iVar3 = *(int *)(param_1 + 0x50);
          if ((iVar3 < -1) || (*(int *)(param_1 + 0x54) <= iVar3)) {
            cVar2 = FUN_14250e240(param_1 + 0x48,iVar3 + 1,param_4);
            if (cVar2 != '\0') {
              iVar3 = *(int *)(param_1 + 0x50);
              goto LAB_1426be0b7;
            }
          }
          else {
LAB_1426be0b7:
            *(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar3 * 8) = lVar6;
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
          }
          uVar4 = uVar4 + 1;
        } while (param_3 != uVar4);
      }
      uVar5 = param_3 << 8 | iVar1 << 0xd;
LAB_1426be0ed:
      uVar5 = uVar5 | 0xc6;
    }
    else {
      *param_4 = 0xf;
    }
  }
  return uVar5;
}



// FUNCTION 1426be110 FUN_1426be110 body=719 status=ok
// SIG undefined FUN_1426be110(void)

int FUN_1426be110(longlong param_1,longlong param_2,undefined4 param_3,ulonglong param_4,
                 longlong param_5,int *param_6)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined1 local_e0 [40];
  undefined1 local_b8 [8];
  short local_b0;
  int local_ac;
  undefined4 local_74;
  undefined4 local_64;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  iVar9 = 0;
  if (*param_6 < 1) {
    puVar10 = (undefined2 *)
              ((param_4 >> 0xd & 0x7ffff) * 2 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18))
    ;
    iVar9 = -1;
    local_64 = param_3;
    local_50 = param_1;
    if ((param_4 & 0x100) == 0) {
      uVar3 = FUN_1426bd4e0(param_1,param_3,CONCAT22(*puVar10,puVar10[1]),1,param_6);
      if (*param_6 < 1) {
        iVar4 = *(int *)(param_1 + 0x70);
        if (iVar4 < 0x80000) {
          local_60 = CONCAT44(local_60._4_4_,uVar3);
          lVar5 = thunk_FUN_1424da030(0x50);
          if (lVar5 == 0) {
            *param_6 = 7;
          }
          else {
            local_58 = lVar5;
            FUN_1424a6be0(lVar5,param_2);
            *(undefined4 *)(local_58 + 0x40) = (undefined4)local_60;
            *(undefined1 **)(local_58 + 0x44) = &DAT_100000001;
            *(undefined4 *)(local_58 + 0x4c) = 0xffffffff;
            FUN_1425163e0(local_50 + 0x68,local_58,param_6);
            iVar9 = iVar4;
          }
        }
        else {
          *param_6 = 0xf;
        }
      }
      *(int *)(param_5 + 0x4c) = iVar9;
      if (0 < *param_6) {
        return 0;
      }
      param_5 = FUN_142516630(local_50 + 0x68,iVar9);
    }
    if (*(short *)(param_2 + 8) < 0) {
      uVar8 = *(uint *)(param_2 + 0xc);
    }
    else {
      uVar8 = (int)*(short *)(param_2 + 8) >> 5;
    }
    FUN_1426c6b30(local_e0,puVar10 + 2,0,param_6);
    lVar5 = local_50 + 0x68;
    local_58 = CONCAT44(local_58._4_4_,uVar8 << 5);
    while (cVar2 = FUN_1426c6c60(local_e0,param_6), cVar2 != '\0') {
      iVar9 = local_ac;
      if (-1 < local_b0) {
        iVar9 = (int)local_b0 >> 5;
      }
      FUN_1424a9690(param_2,local_b8,0,iVar9);
      uVar3 = FUN_1426bd4e0(local_50,local_64,local_74,1,param_6);
      iVar9 = -1;
      if (*param_6 < 1) {
        iVar9 = *(int *)(local_50 + 0x70);
        iVar4 = 0xf;
        if (iVar9 < 0x80000) {
          lVar6 = thunk_FUN_1424da030(0x50);
          if (lVar6 != 0) {
            local_60 = lVar6;
            FUN_1424a6be0(lVar6,param_2);
            *(undefined4 *)(local_60 + 0x40) = uVar3;
            *(undefined1 **)(local_60 + 0x44) = &DAT_100000001;
            *(undefined4 *)(local_60 + 0x4c) = 0xffffffff;
            FUN_1425163e0(lVar5);
            goto LAB_1426be354;
          }
          iVar4 = 7;
        }
        *param_6 = iVar4;
        iVar9 = -1;
      }
LAB_1426be354:
      *(int *)(param_5 + 0x4c) = iVar9;
      if (0 < *param_6) {
        iVar9 = 0;
        break;
      }
      param_5 = FUN_142516630(lVar5,iVar9);
      uVar1 = *(ushort *)(param_2 + 8);
      if ((uVar8 == 0) && ((uVar1 & 1) != 0)) {
        FUN_1424a8e40(param_2);
      }
      else {
        if ((short)uVar1 < 0) {
          uVar7 = *(uint *)(param_2 + 0xc);
        }
        else {
          uVar7 = (int)(short)uVar1 >> 5;
        }
        if (uVar8 < uVar7) {
          if ((int)uVar8 < 0x400) {
            *(ushort *)(param_2 + 8) = uVar1 & 0x1f | (ushort)local_58;
          }
          else {
            *(ushort *)(param_2 + 8) = uVar1 | 0xffe0;
            *(uint *)(param_2 + 0xc) = uVar8;
          }
        }
      }
    }
    FUN_1426c6c30(local_e0);
  }
  return iVar9;
}



// FUNCTION 1426be400 Unwind@1426be400 body=55 status=ok
// SIG undefined Unwind@1426be400(void)

void Unwind_1426be400(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xb0));
  return;
}



// FUNCTION 1426be440 Unwind@1426be440 body=55 status=ok
// SIG undefined Unwind@1426be440(void)

void Unwind_1426be440(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



// FUNCTION 1426be480 Unwind@1426be480 body=55 status=ok
// SIG undefined Unwind@1426be480(void)

void Unwind_1426be480(undefined8 param_1,longlong param_2)

{
  FUN_1426c6c30(param_2 + 0x28);
  return;
}



// FUNCTION 1426be4c0 FUN_1426be4c0 body=159 status=ok
// SIG undefined FUN_1426be4c0(void)

void FUN_1426be4c0(longlong param_1,longlong param_2,undefined8 param_3,int *param_4)

{
  char cVar1;
  undefined1 auStack_168 [40];
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*param_4 < 1) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      cVar1 = FUN_14257f990();
      if (cVar1 == '\0') {
        local_30 = *param_4;
        local_140 = param_2;
        local_138 = param_1;
        local_130 = param_3;
        FUN_14257f9a0(*(undefined8 *)(param_2 + 0x20),0,FUN_1426be570,&local_140);
        *param_4 = local_30;
        *(byte *)(param_1 + 0x260) = *(byte *)(param_1 + 0x260) | *(byte *)(param_2 + 0x260);
        goto LAB_1426be54f;
      }
    }
    *param_4 = 0x1b;
  }
LAB_1426be54f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_168);
}



// FUNCTION 1426be570 FUN_1426be570 body=134 status=ok
// SIG undefined FUN_1426be570(void)

bool FUN_1426be570(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = true;
  if ((param_4 != -1) && (param_4 != 0xc0)) {
    uVar2 = FUN_1426bfcc0(param_1,param_4);
    FUN_1426cc890(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20),param_2,param_3,uVar2,1,
                  (int *)(param_1 + 0x110));
    if ((uVar2 & 0xcf) == 199) {
      FUN_142511a00(*(longlong *)(param_1 + 8) + 0x90,param_2,param_3);
    }
    bVar1 = *(int *)(param_1 + 0x110) < 1;
  }
  return bVar1;
}



// FUNCTION 1426be600 FUN_1426be600 body=391 status=ok
// SIG undefined FUN_1426be600(void)

void FUN_1426be600(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 local_80 [8];
  uint local_78;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*param_3 < 1) {
    cVar3 = FUN_142512860(param_2);
    if (cVar3 == '\0') {
      FUN_1425ec120(local_80,param_2);
      while( true ) {
        cVar3 = FUN_1425ec210(local_80);
        uVar2 = local_78;
        if (cVar3 == '\0') break;
        if (local_78 == 0xffffffff) break;
        iVar4 = FUN_14257f620(*(undefined8 *)(param_1 + 0x20),local_78);
        if (iVar4 == 0xc0) {
          plVar1 = (longlong *)**(longlong **)(param_1 + 0x10);
          if (uVar2 < 0xd800) {
            uVar6 = (uint)*(ushort *)(*plVar1 + (ulonglong)(uVar2 >> 5) * 2);
LAB_1426be6eb:
            iVar4 = (uVar2 & 0x1f) + uVar6 * 4;
          }
          else {
            if (uVar2 < 0x10000) {
              lVar7 = 0;
              if (uVar2 < 0xdc00) {
                lVar7 = 0x140;
              }
              uVar6 = (uint)*(ushort *)(*plVar1 + (lVar7 + (ulonglong)(uVar2 >> 5)) * 2);
              goto LAB_1426be6eb;
            }
            iVar4 = 0x80;
            if (uVar2 < 0x110000) {
              if ((int)uVar2 < *(int *)((longlong)plVar1 + 0x2c)) {
                uVar6 = (uint)*(ushort *)
                               (*plVar1 +
                               ((ulonglong)(uVar2 >> 5 & 0x3f) +
                               (ulonglong)
                               *(ushort *)(*plVar1 + 0x1040 + (ulonglong)(uVar2 >> 0xb) * 2)) * 2);
                goto LAB_1426be6eb;
              }
              iVar4 = (int)plVar1[6];
            }
          }
          uVar5 = FUN_1425638e0(*(longlong **)(param_1 + 0x10),
                                *(undefined4 *)(plVar1[2] + (longlong)iVar4 * 4));
          uVar5 = FUN_1426bd4e0(param_1,uVar2,uVar5,1,param_3);
          FUN_1426cb2f0(*(undefined8 *)(param_1 + 0x20),uVar2,uVar5,param_3);
        }
      }
      *(undefined1 *)(param_1 + 0x260) = 1;
      FUN_1425ec1d0(local_80);
    }
  }
  return;
}



// FUNCTION 1426be7a0 Unwind@1426be7a0 body=48 status=ok
// SIG undefined Unwind@1426be7a0(void)

void Unwind_1426be7a0(undefined8 param_1,longlong param_2)

{
  FUN_1425ec1d0(param_2 + 0x28);
  return;
}



// FUNCTION 1426be7d0 FUN_1426be7d0 body=502 status=ok
// SIG undefined FUN_1426be7d0(void)

void FUN_1426be7d0(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_88 [8];
  uint local_80;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*param_3 < 1) {
    cVar3 = FUN_142512860(param_2);
    if (cVar3 == '\0') {
      FUN_1425ec120(local_88,param_2);
      while( true ) {
        cVar3 = FUN_1425ec210(local_88);
        uVar2 = local_80;
        if (cVar3 == '\0') break;
        if (local_80 == 0xffffffff) break;
        uVar4 = FUN_14257f620(*(undefined8 *)(param_1 + 0x20),local_80);
        if (uVar4 == 0xc0) {
          plVar1 = (longlong *)**(longlong **)(param_1 + 0x10);
          if (uVar2 < 0xd800) {
            uVar4 = (uint)*(ushort *)(*plVar1 + (ulonglong)(uVar2 >> 5) * 2);
LAB_1426be950:
            iVar6 = (uVar2 & 0x1f) + uVar4 * 4;
          }
          else {
            if (uVar2 < 0x10000) {
              lVar7 = 0;
              if (uVar2 < 0xdc00) {
                lVar7 = 0x140;
              }
              uVar4 = (uint)*(ushort *)(*plVar1 + (lVar7 + (ulonglong)(uVar2 >> 5)) * 2);
              goto LAB_1426be950;
            }
            iVar6 = 0x80;
            if (uVar2 < 0x110000) {
              if ((int)uVar2 < *(int *)((longlong)plVar1 + 0x2c)) {
                uVar4 = (uint)*(ushort *)
                               (*plVar1 +
                               ((ulonglong)(uVar2 >> 5 & 0x3f) +
                               (ulonglong)
                               *(ushort *)(*plVar1 + 0x1040 + (ulonglong)(uVar2 >> 0xb) * 2)) * 2);
                goto LAB_1426be950;
              }
              iVar6 = (int)plVar1[6];
            }
          }
          uVar4 = FUN_1425638e0(*(longlong **)(param_1 + 0x10),
                                *(undefined4 *)(plVar1[2] + (longlong)iVar6 * 4));
          if ((uVar4 & 0xce) == 200) {
            uVar5 = FUN_1426bd4e0(param_1,uVar2,uVar4,0,param_3);
            FUN_1426cb2f0(*(undefined8 *)(param_1 + 0x20),uVar2,uVar5);
          }
        }
        else if ((uVar4 & 0xcf) == 199) {
          lVar7 = FUN_142516630(param_1 + 0x68,uVar4 >> 0xd);
          FUN_1426cb2f0(*(undefined8 *)(param_1 + 0x20),uVar2,*(undefined4 *)(lVar7 + 0x40),param_3)
          ;
          FUN_1425144c0(param_1 + 0x90,uVar2);
        }
      }
      *(undefined1 *)(param_1 + 0x260) = 1;
      FUN_1425ec1d0(local_88);
    }
  }
  return;
}



// FUNCTION 1426be9e0 Unwind@1426be9e0 body=52 status=ok
// SIG undefined Unwind@1426be9e0(void)

void Unwind_1426be9e0(undefined8 param_1,longlong param_2)

{
  FUN_1425ec1d0(param_2 + 0x30);
  return;
}



// FUNCTION 1426bea20 FUN_1426bea20 body=534 status=ok
// SIG undefined FUN_1426bea20(void)

bool FUN_1426bea20(longlong param_1,longlong param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  
  if (*param_3 < 1) {
    bVar10 = *(longlong *)(param_1 + 0x10) == 0;
    uVar7 = 0;
    bVar1 = false;
    do {
      uVar8 = 0x1180;
      if (uVar7 < 0x28) {
        uVar8 = 0x114e;
      }
      if (uVar7 < 0x13) {
        uVar8 = 0x1100;
      }
      uVar9 = uVar8 + uVar7;
      uVar2 = FUN_14257f620(*(undefined8 *)(param_1 + 0x20),uVar9 & 0xffffffff);
      bVar11 = uVar2 != 0xc0;
      bVar12 = uVar2 != 0xffffffff;
      uVar8 = uVar2;
      if (uVar2 == 0xc0) {
        uVar8 = *(uint *)(((longlong *)**(longlong **)(param_1 + 0x10))[2] +
                         ((ulonglong)((uint)uVar9 & 0x1f) +
                         (ulonglong)
                         *(ushort *)
                          (*(longlong *)**(longlong **)(param_1 + 0x10) +
                          (uVar9 >> 5 & 0x7ffffff) * 2) * 4) * 4);
      }
      if ((~uVar8 & 0xc0) == 0) {
        switch(uVar8 & 0xf) {
        case 0:
        case 3:
        case 7:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
          *param_3 = 5;
          return false;
        default:
          goto switchD_1426beb22_caseD_1;
        case 5:
        case 6:
        case 8:
        case 9:
          if (uVar2 == 0xc0) {
            bVar1 = true;
          }
          break;
        case 0xe:
          if (uVar2 == 0xc0) {
            plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
LAB_1426beb65:
            uVar5 = *(undefined8 *)(*plVar4 + (ulonglong)(uVar8 >> 0xd) * 8);
          }
          else {
            plVar4 = (longlong *)(param_1 + 0x60);
            if ((int)(uVar8 >> 0xd) < *(int *)(param_1 + 0x50)) goto LAB_1426beb65;
            uVar5 = 0;
          }
          uVar2 = FUN_142620c40(uVar9 & 0xffffffff,uVar5);
          uVar2 = uVar2 | 0xc1;
          break;
        case 0xf:
          uVar2 = 0xc0;
          bVar1 = true;
        }
      }
      else {
switchD_1426beb22_caseD_1:
        uVar2 = uVar8;
      }
      bVar10 = (bool)(bVar10 | (bVar11 && bVar12));
      *(uint *)(param_2 + uVar7 * 4) = uVar2;
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x43);
    if ((bVar10) && (bVar1)) {
      uVar7 = 0;
      do {
        if (*(int *)(param_2 + uVar7 * 4) == 0xc0) {
          puVar6 = (undefined1 *)0x1180;
          if (uVar7 < 0x28) {
            puVar6 = (undefined1 *)0x114e;
          }
          if (uVar7 < 0x13) {
            puVar6 = &DAT_00001100;
          }
          puVar6 = puVar6 + uVar7;
          uVar3 = FUN_1426bd4e0(param_1,puVar6,
                                *(undefined4 *)
                                 (((longlong *)**(longlong **)(param_1 + 0x10))[2] +
                                 ((ulonglong)((uint)puVar6 & 0x1f) +
                                 (ulonglong)
                                 *(ushort *)
                                  (*(longlong *)**(longlong **)(param_1 + 0x10) +
                                  ((ulonglong)puVar6 >> 5 & 0x7ffffff) * 2) * 4) * 4),1,param_3);
          *(undefined4 *)(param_2 + uVar7 * 4) = uVar3;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0x43);
    }
    if (bVar10) {
      return *param_3 < 1;
    }
  }
  return false;
}



// FUNCTION 1426bec40 FUN_1426bec40 body=374 status=ok
// SIG undefined FUN_1426bec40(void)

void FUN_1426bec40(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 local_150 [200];
  undefined1 local_88 [8];
  undefined4 local_80;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_1424a7060(local_88,1,L"[:Nd:]",0xffffffff);
  FUN_1425c5b90(local_150,local_88,param_2);
  FUN_140859a90(local_88);
  if (*param_2 < 1) {
    FUN_1425ec120(local_88,local_150);
    while (cVar2 = FUN_1425ec210(local_88), uVar1 = local_80, cVar2 != '\0') {
      iVar3 = FUN_14257f620(*(undefined8 *)(param_1 + 0x20),local_80);
      if ((iVar3 != -1) && (iVar3 != 0xc0)) {
        uVar6 = *(uint *)(param_1 + 0x30);
        if (0 < (int)uVar6) {
          uVar5 = 0;
          do {
            if (*(int *)(*(longlong *)(param_1 + 0x40) + uVar5 * 4) == iVar3) {
              uVar6 = (uint)uVar5;
              iVar3 = *param_2;
              goto joined_r0x0001426bed4e;
            }
            uVar5 = uVar5 + 1;
          } while (uVar6 != uVar5);
        }
        if (((int)uVar6 < -1) || (uVar4 = uVar6, *(int *)(param_1 + 0x34) <= (int)uVar6)) {
          cVar2 = FUN_1425182c0(param_1 + 0x28,uVar6 + 1,param_2);
          if (cVar2 != '\0') {
            uVar4 = *(uint *)(param_1 + 0x30);
            goto LAB_1426bed34;
          }
        }
        else {
LAB_1426bed34:
          *(int *)(*(longlong *)(param_1 + 0x40) + (longlong)(int)uVar4 * 4) = iVar3;
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        }
        iVar3 = *param_2;
joined_r0x0001426bed4e:
        if (0 < iVar3) break;
        if (0x7ffff < (int)uVar6) {
          *param_2 = 0xf;
          break;
        }
        iVar3 = FUN_1424d8db0(uVar1);
        FUN_1426cb2f0(*(undefined8 *)(param_1 + 0x20),uVar1,uVar6 << 0xd | iVar3 << 8 | 0xca,param_2
                     );
      }
    }
    FUN_1425ec1d0(local_88);
  }
  FUN_1425121d0(local_150);
  return;
}



// FUNCTION 1426bedc0 Unwind@1426bedc0 body=55 status=ok
// SIG undefined Unwind@1426bedc0(void)

void Unwind_1426bedc0(undefined8 param_1,longlong param_2)

{
  FUN_1425ec1d0(param_2 + 0xf0);
  return;
}



// FUNCTION 1426bee00 Unwind@1426bee00 body=55 status=ok
// SIG undefined Unwind@1426bee00(void)

void Unwind_1426bee00(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x28);
  return;
}



// FUNCTION 1426bee40 Unwind@1426bee40 body=55 status=ok
// SIG undefined Unwind@1426bee40(void)

void Unwind_1426bee40(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xf0);
  return;
}



// FUNCTION 1426beec0 FUN_1426beec0 body=113 status=ok
// SIG undefined FUN_1426beec0(void)

void FUN_1426beec0(longlong param_1,longlong param_2,undefined8 param_3)

{
  FUN_1426bef40();
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x38);
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x48);
    *(undefined4 *)(param_2 + 100) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 100);
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x68);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x70);
    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x78);
  }
  FUN_1426bf320(param_1,param_2,param_3);
  return;
}



// FUNCTION 1426bef40 FUN_1426bef40 body=937 status=ok
// SIG undefined FUN_1426bef40(void)

void FUN_1426bef40(longlong param_1,undefined8 *param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_198 [32];
  uint *local_178;
  int *local_170;
  uint local_15c;
  uint local_158 [68];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (*param_3 < 1) {
    if ((*(longlong *)(param_1 + 0x20) == 0) || (cVar1 = FUN_14257f990(), cVar1 != '\0')) {
      *param_3 = 0x1b;
    }
    else {
      FUN_1426bf4c0(param_1,param_3);
      cVar1 = FUN_1426bea20(param_1,local_158,param_3);
      if (cVar1 == '\0') {
        uVar9 = 0xac00;
        do {
          local_178 = (uint *)CONCAT71(local_178._1_7_,1);
          local_170 = param_3;
          FUN_1426cc890(*(undefined8 *)(param_1 + 0x20),uVar9,uVar9 + 0x24b,
                        *(undefined4 *)
                         (((longlong *)**(longlong **)(param_1 + 0x10))[2] +
                         ((ulonglong)(uVar9 & 0x1c) +
                         (ulonglong)
                         *(ushort *)
                          (*(longlong *)**(longlong **)(param_1 + 0x10) +
                          (ulonglong)(uVar9 >> 5) * 2) * 4) * 4));
          bVar10 = uVar9 < 0xd558;
          uVar9 = uVar9 + 0x24c;
        } while (bVar10);
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = *(uint *)(param_1 + 0x30);
        lVar7 = 0;
        do {
          uVar6 = local_158[lVar7];
          iVar8 = *(int *)(param_1 + 0x30);
          if ((iVar8 < -1) || (*(int *)(param_1 + 0x34) <= iVar8)) {
            cVar1 = FUN_1425182c0(param_1 + 0x28,iVar8 + 1,param_3);
            if (cVar1 != '\0') {
              iVar8 = *(int *)(param_1 + 0x30);
              goto LAB_1426beff0;
            }
          }
          else {
LAB_1426beff0:
            *(uint *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar8 * 4) = uVar6;
            *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x43);
        if ((~local_158[0x13] & 0xc0) == 0) {
LAB_1426bf03f:
          bVar10 = false;
        }
        else {
          lVar7 = 0;
          do {
            lVar3 = lVar7;
            if ((((~local_158[lVar3 + 0x14] & 0xc0) == 0) ||
                ((~local_158[lVar3 + 0x15] & 0xc0) == 0)) ||
               ((~local_158[lVar3 + 0x16] & 0xc0) == 0)) goto LAB_1426bf03f;
          } while ((lVar3 != 0x2c) && (lVar7 = lVar3 + 4, (~local_158[lVar3 + 0x17] & 0xc0) != 0));
          bVar10 = 0x3e < lVar3 + 0x13U;
        }
        iVar8 = 0xac00;
        lVar7 = 0;
        do {
          uVar6 = 0xcc;
          if (bVar10) {
            uVar6 = (uint)((~local_158[lVar7] & 0xc0) != 0) << 8 | 0xcc;
          }
          local_178 = (uint *)CONCAT71(local_178._1_7_,1);
          local_170 = param_3;
          FUN_1426cc890(*(undefined8 *)(param_1 + 0x20),iVar8,iVar8 + 0x24b,uVar6);
          lVar7 = lVar7 + 1;
          iVar8 = iVar8 + 0x24c;
        } while (lVar7 != 0x13);
      }
      FUN_1426bec40(param_1,param_3);
      iVar8 = 0xd800;
      do {
        local_15c = 0xffffffff;
        local_178 = &local_15c;
        FUN_14257fea0(*(undefined8 *)(param_1 + 0x20),iVar8,0,&LAB_1426bee80);
        FUN_1426cb370(*(undefined8 *)(param_1 + 0x20),iVar8,local_15c | 0xcd,param_3);
        iVar8 = iVar8 + 1;
      } while (iVar8 != 0xdc00);
      uVar2 = FUN_14257f620(*(undefined8 *)(param_1 + 0x20),0);
      FUN_142518140(param_1 + 0x28,uVar2,0);
      FUN_1426cb2f0(*(undefined8 *)(param_1 + 0x20),0,0xcb,param_3);
      FUN_1426cb3f0(*(undefined8 *)(param_1 + 0x20),1,param_3);
      if (*param_3 < 1) {
        lVar7 = param_1 + 0x198;
        iVar8 = 0x10000;
        iVar5 = 0xd800;
        do {
          cVar1 = FUN_142512dc0(lVar7,iVar8,iVar8 + 0x3ff);
          if (cVar1 == '\0') {
            FUN_142513960(lVar7,iVar5);
          }
          iVar5 = iVar5 + 1;
          iVar8 = iVar8 + 0x400;
        } while (iVar5 != 0xdc00);
        FUN_1425151b0(lVar7);
        *param_2 = *(undefined8 *)(param_1 + 0x20);
        lVar3 = *(longlong *)(param_1 + 0x40);
        param_2[1] = lVar3;
        param_2[2] = *(undefined8 *)(param_1 + 0x60);
        if ((*(ushort *)(param_1 + 0x160) & 0x11) == 0) {
          if ((*(ushort *)(param_1 + 0x160) & 2) == 0) {
            lVar4 = *(longlong *)(param_1 + 0x170);
          }
          else {
            lVar4 = param_1 + 0x162;
          }
        }
        else {
          lVar4 = 0;
        }
        param_2[3] = lVar4;
        *(undefined4 *)((longlong)param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x30);
        *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x50);
        if (*(short *)(param_1 + 0x160) < 0) {
          iVar8 = *(int *)(param_1 + 0x164);
        }
        else {
          iVar8 = (int)*(short *)(param_1 + 0x160) >> 5;
        }
        *(int *)((longlong)param_2 + 0x44) = iVar8;
        param_2[4] = *(undefined8 *)(param_1 + 0x10);
        if ((int)uVar9 < 0) {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
        }
        else {
          lVar3 = lVar3 + (ulonglong)uVar9 * 4;
        }
        param_2[5] = lVar3;
        param_2[10] = lVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_198);
}



// FUNCTION 1426bf320 FUN_1426bf320 body=357 status=ok
// SIG undefined FUN_1426bf320(void)

void FUN_1426bf320(longlong param_1,longlong param_2,int *param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  void *_Buf1;
  int iVar6;
  
  if (0 < *param_3) {
    return;
  }
  if (*(char *)(param_1 + 0x261) != '\0') {
    puVar2 = *(undefined8 **)(param_1 + 0x268);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    lVar5 = thunk_FUN_1424da030(0x1cd0);
    if (lVar5 != 0) {
      FUN_142726700(lVar5,param_3);
      *(longlong *)(param_1 + 0x268) = lVar5;
      cVar3 = FUN_1427267e0(lVar5,param_2,param_3);
      puVar2 = *(undefined8 **)(param_1 + 0x268);
      if (cVar3 != '\0') {
        uVar1 = *(ushort *)(puVar2 + 0x392);
        if ((uVar1 & 0x11) == 0) {
          if ((uVar1 & 2) == 0) {
            _Buf1 = (void *)puVar2[0x394];
          }
          else {
            _Buf1 = (void *)((longlong)puVar2 + 0x1c92);
          }
        }
        else {
          _Buf1 = (void *)0x0;
        }
        if ((short)uVar1 < 0) {
          iVar6 = *(int *)((longlong)puVar2 + 0x1c94);
        }
        else {
          iVar6 = (int)(short)uVar1 >> 5;
        }
        lVar5 = *(longlong *)(param_1 + 0x10);
        if (((lVar5 != 0) && (iVar6 == *(int *)(lVar5 + 0x60))) &&
           (iVar4 = memcmp(_Buf1,*(void **)(lVar5 + 0x58),(longlong)(iVar6 * 2)), iVar4 == 0)) {
          (**(code **)*puVar2)(puVar2,1);
          *(undefined8 *)(param_1 + 0x268) = 0;
          _Buf1 = *(void **)(*(longlong *)(param_1 + 0x10) + 0x58);
        }
        *(void **)(param_2 + 0x58) = _Buf1;
        *(int *)(param_2 + 0x60) = iVar6;
        return;
      }
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      *(undefined8 *)(param_1 + 0x268) = 0;
      return;
    }
    *(undefined8 *)(param_1 + 0x268) = 0;
    *param_3 = 7;
    return;
  }
  return;
}



// FUNCTION 1426bf490 Unwind@1426bf490 body=44 status=ok
// SIG undefined Unwind@1426bf490(void)

void Unwind_1426bf490(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1426bf4c0 FUN_1426bf4c0 body=238 status=ok
// SIG undefined FUN_1426bf4c0(void)

void FUN_1426bf4c0(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 local_78 [8];
  undefined4 local_70;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*param_2 < 1) {
    uVar3 = 2;
    if ((*(ushort *)(param_1 + 0x160) & 1) == 0) {
      uVar3 = *(ushort *)(param_1 + 0x160) & 0x1f;
    }
    *(ushort *)(param_1 + 0x160) = uVar3;
    FUN_1425ec120(local_78,param_1 + 0x90);
    if (*param_2 < 1) {
      do {
        cVar2 = FUN_1425ec210(local_78);
        uVar1 = local_70;
        if (cVar2 == '\0') break;
        uVar4 = FUN_14257f620(*(undefined8 *)(param_1 + 0x20),local_70);
        if ((uVar4 & 0xcf) != 199) {
          *param_2 = 5;
          break;
        }
        uVar6 = FUN_142516630(param_1 + 0x68,uVar4 >> 0xd);
        uVar5 = FUN_1426bc250(param_1,uVar6,param_2);
        FUN_1426cb2f0(*(undefined8 *)(param_1 + 0x20),uVar1,uVar5,param_2);
      } while (*param_2 < 1);
    }
    FUN_1425ec1d0(local_78);
  }
  return;
}



// FUNCTION 1426bf5b0 Unwind@1426bf5b0 body=44 status=ok
// SIG undefined Unwind@1426bf5b0(void)

void Unwind_1426bf5b0(undefined8 param_1,longlong param_2)

{
  FUN_1425ec1d0(param_2 + 0x20);
  return;
}



// FUNCTION 1426bf5e0 FUN_1426bf5e0 body=413 status=ok
// SIG undefined FUN_1426bf5e0(void)

int FUN_1426bf5e0(longlong param_1,undefined4 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined **local_b8;
  undefined2 local_b0;
  undefined **local_78;
  ushort local_70;
  undefined1 local_6e [2];
  int local_6c;
  undefined1 *local_60;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_78 = &PTR_FUN_149e18960;
  local_70 = 2;
  local_b8._0_2_ = (short)((uint)param_2 >> 0x10);
  uVar4 = FUN_1424a6cf0(&local_78,&local_b8,0,1);
  local_b8 = (undefined **)CONCAT62(local_b8._2_6_,(short)param_2);
  FUN_1424a6cf0(uVar4,&local_b8,0,1);
  local_b8 = &PTR_FUN_149e18960;
  local_b0 = 2;
  lVar5 = FUN_1425e8020(param_3,1,&local_b8,param_4);
  if (*(short *)(lVar5 + 8) < 0) {
    iVar7 = *(int *)(lVar5 + 0xc);
  }
  else {
    iVar7 = (int)*(short *)(lVar5 + 8) >> 5;
  }
  FUN_1424a9690(&local_78,lVar5,0,iVar7);
  iVar7 = -1;
  if (*param_4 < 1) {
    sVar3 = *(short *)(param_1 + 0x160);
    iVar7 = (int)sVar3 >> 5;
    iVar6 = *(int *)(param_1 + 0x164);
    iVar1 = iVar7;
    if (sVar3 < 0) {
      iVar1 = iVar6;
    }
    if ((local_70 & 1) == 0) {
      iVar2 = local_6c;
      if (-1 < (short)local_70) {
        iVar2 = (int)(short)local_70 >> 5;
      }
      if (0 < iVar2) {
        if ((local_70 & 2) != 0) {
          local_60 = local_6e;
        }
        iVar7 = FUN_1424a8860(param_1 + 0x158,local_60,0,iVar2,0,iVar1);
        if (-1 < iVar7) goto LAB_1426bf759;
        sVar3 = *(short *)(param_1 + 0x160);
        iVar6 = *(int *)(param_1 + 0x164);
        iVar7 = (int)sVar3 >> 5;
      }
    }
    if (sVar3 < 0) {
      iVar7 = iVar6;
    }
    if (-1 < (short)local_70) {
      local_6c = (int)(short)local_70 >> 5;
    }
    FUN_1424a9690(param_1 + 0x158,&local_78,0,local_6c);
  }
LAB_1426bf759:
  FUN_140859a90(&local_b8);
  FUN_140859a90(&local_78);
  return iVar7;
}



// FUNCTION 1426bf780 Unwind@1426bf780 body=47 status=ok
// SIG undefined Unwind@1426bf780(void)

void Unwind_1426bf780(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1426bf7b0 Unwind@1426bf7b0 body=47 status=ok
// SIG undefined Unwind@1426bf7b0(void)

void Unwind_1426bf7b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 1426bf7e0 FUN_1426bf7e0 body=29 status=ok
// SIG undefined FUN_1426bf7e0(void)

void FUN_1426bf7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_1426bf800(param_1,param_2,0,param_3,param_4);
  return;
}



// FUNCTION 1426bf800 FUN_1426bf800 body=910 status=ok
// SIG undefined FUN_1426bf800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1426bf800(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar19;
  uint uVar20;
  undefined1 auVar18 [16];
  uint uVar21;
  undefined1 auVar22 [16];
  longlong lVar7;
  
  puVar3 = *(undefined8 **)(param_1 + 0x270);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)thunk_FUN_1424da030(0x340);
    if (puVar3 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x270) = 0;
      return 0;
    }
    puVar3[1] = puVar3[0x32];
    puVar3[2] = puVar3 + 0x32;
    *(undefined4 *)(puVar3 + 3) = 0;
    puVar3[4] = puVar3 + 6;
    *(undefined4 *)(puVar3 + 5) = 0x28;
    *(undefined1 *)((longlong)puVar3 + 0x2c) = 0;
    *(undefined4 *)(puVar3 + 0x2e) = 0;
    puVar3[0x2f] = 0;
    *(undefined4 *)(puVar3 + 0x30) = 0xffffffff;
    *(undefined1 *)((longlong)puVar3 + 0x184) = 0;
    *puVar3 = icu_64::DataBuilderCollationIterator::vftable;
    puVar3[0x31] = param_1;
    uVar5 = *(undefined8 *)(param_1 + 8);
    puVar3[0x32] = 0;
    puVar3[0x33] = 0;
    puVar3[0x34] = 0;
    puVar3[0x35] = 0;
    puVar3[0x36] = 0;
    puVar3[0x37] = 0;
    puVar3[0x38] = uVar5;
    *(undefined4 *)(puVar3 + 0x39) = 0x12000000;
    puVar3[0x42] = 0;
    *(undefined4 *)(puVar3 + 0x43) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x1fc) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x204) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x1ec) = 0;
    *(undefined8 *)((longlong)puVar3 + 500) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x1dc) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x1e4) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x1cc) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x1d4) = 0;
    puVar3[0x66] = 0;
    *(undefined4 *)(puVar3 + 0x67) = 0;
    puVar3[0x36] = *(undefined8 *)(param_1 + 0x10);
    auVar2 = _DAT_1499319e0;
    iVar9 = 0;
    iVar10 = 1;
    iVar11 = 2;
    iVar12 = 3;
    lVar4 = 0x88;
    auVar6 = _DAT_14996b6c0;
    auVar8 = _DAT_14996b6d0;
    do {
      auVar18 = auVar8 ^ auVar2;
      auVar22 = auVar6 ^ auVar2;
      uVar13 = -(uint)(auVar18._4_4_ == -0x80000000 && auVar18._0_4_ < -0x7fffffed);
      uVar14 = -(uint)(auVar18._12_4_ == -0x80000000 && auVar18._8_4_ < -0x7fffffed);
      uVar15 = -(uint)(auVar22._4_4_ == -0x80000000 && auVar22._0_4_ < -0x7fffffed);
      uVar16 = -(uint)(auVar22._12_4_ == -0x80000000 && auVar22._8_4_ < -0x7fffffed);
      uVar17 = -(uint)(auVar18._4_4_ == -0x80000000 && auVar18._0_4_ < -0x7fffffd8);
      uVar19 = -(uint)(auVar18._12_4_ == -0x80000000 && auVar18._8_4_ < -0x7fffffd8);
      uVar20 = -(uint)(auVar22._4_4_ == -0x80000000 && auVar22._0_4_ < -0x7fffffd8);
      uVar21 = -(uint)(auVar22._12_4_ == -0x80000000 && auVar22._8_4_ < -0x7fffffd8);
      puVar1 = (uint *)((longlong)puVar3 + lVar4 * 4);
      *puVar1 = ((uVar13 & 0x1100 | ~uVar13 & (uVar17 & 0x114e | ~uVar17 & 0x1180)) + iVar9) *
                0x2000 | 0x1c7;
      puVar1[1] = ((uVar14 & 0x1100 | ~uVar14 & (uVar19 & 0x114e | ~uVar19 & 0x1180)) + iVar10) *
                  0x2000 | 0x1c7;
      puVar1[2] = ((uVar15 & 0x1100 | ~uVar15 & (uVar20 & 0x114e | ~uVar20 & 0x1180)) + iVar11) *
                  0x2000 | 0x1c7;
      puVar1[3] = ((uVar16 & 0x1100 | ~uVar16 & (uVar21 & 0x114e | ~uVar21 & 0x1180)) + iVar12) *
                  0x2000 | 0x1c7;
      lVar7 = auVar8._8_8_;
      auVar8._0_8_ = auVar8._0_8_ + 4;
      auVar8._8_8_ = lVar7 + 4;
      lVar7 = auVar6._8_8_;
      auVar6._0_8_ = auVar6._0_8_ + 4;
      auVar6._8_8_ = lVar7 + 4;
      iVar9 = iVar9 + 4;
      iVar10 = iVar10 + 4;
      iVar11 = iVar11 + 4;
      iVar12 = iVar12 + 4;
      lVar4 = lVar4 + 4;
    } while (lVar4 != 200);
    puVar3[100] = 0x23821c7023801c7;
    *(undefined4 *)(puVar3 + 0x65) = 0x23841c7;
    puVar3[0x37] = puVar3 + 0x44;
    *(undefined8 **)(param_1 + 0x270) = puVar3;
  }
  uVar5 = FUN_1426bbd40(puVar3,param_2,param_3,param_4);
  return uVar5;
}



// FUNCTION 1426bfb90 FUN_1426bfb90 body=147 status=ok
// SIG undefined FUN_1426bfb90(void)

ulonglong FUN_1426bfb90(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 param_5)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 local_78 [64];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(short *)(param_2 + 8) < 0) {
    iVar3 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar3 = (int)*(short *)(param_2 + 8) >> 5;
  }
  if (iVar3 != 0) {
    FUN_1424a66c0(local_78);
    uVar1 = FUN_1426bf800(param_1,local_78,iVar3,param_4,param_5);
    FUN_140859a90(local_78);
    return (ulonglong)uVar1;
  }
  uVar2 = FUN_1426bf800(param_1,param_3,0,param_4);
  return uVar2;
}



// FUNCTION 1426bfc30 Unwind@1426bfc30 body=44 status=ok
// SIG undefined Unwind@1426bfc30(void)

void Unwind_1426bfc30(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1426bfc60 FUN_1426bfc60 body=38 status=ok
// SIG undefined FUN_1426bfc60(void)

undefined8 FUN_1426bfc60(undefined8 param_1,int param_2)

{
  FUN_1426191b0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426bfc90 FUN_1426bfc90 body=38 status=ok
// SIG undefined FUN_1426bfc90(void)

undefined8 FUN_1426bfc90(undefined8 param_1,int param_2)

{
  FUN_1426bcca0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426bfcc0 FUN_1426bfcc0 body=1560 status=ok
// SIG undefined FUN_1426bfcc0(void)

ulonglong FUN_1426bfcc0(longlong *param_1,uint param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ushort *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  undefined1 local_a0 [64];
  longlong local_60;
  longlong *local_58;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar21 = (ulonglong)param_2;
  if ((~param_2 & 0xc0) == 0) {
    uVar10 = param_2 & 0xf;
    if (uVar10 == 7) {
      lVar13 = FUN_142516630(*param_1 + 0x68,param_2 >> 0xd);
      lVar19 = param_1[1];
      local_58 = param_1 + 0x22;
      uVar11 = FUN_1426bfcc0(param_1,*(undefined4 *)(lVar13 + 0x40));
      iVar20 = -1;
      if ((int)param_1[0x22] < 1) {
        iVar5 = *(int *)(lVar19 + 0x70);
        if (iVar5 < 0x80000) {
          lVar15 = thunk_FUN_1424da030(0x50);
          if (lVar15 == 0) {
            *(undefined4 *)local_58 = 7;
          }
          else {
            local_60 = lVar15;
            FUN_1424a6be0(lVar15,lVar13);
            *(undefined4 *)(local_60 + 0x40) = uVar11;
            *(undefined1 **)(local_60 + 0x44) = &DAT_100000001;
            *(undefined4 *)(local_60 + 0x4c) = 0xffffffff;
            FUN_1425163e0(lVar19 + 0x68,local_60,local_58);
            iVar20 = iVar5;
          }
        }
        else {
          *(undefined4 *)local_58 = 0xf;
        }
      }
      local_4c = iVar20 << 0xd | 199;
      uVar21 = (ulonglong)local_4c;
      if (-1 < *(int *)(lVar13 + 0x4c)) {
        do {
          lVar13 = FUN_142516630(*param_1 + 0x68);
          lVar15 = FUN_142516630(param_1[1] + 0x68,iVar20);
          lVar19 = param_1[1];
          uVar11 = FUN_1426bfcc0(param_1,*(undefined4 *)(lVar13 + 0x40));
          iVar20 = -1;
          if ((int)param_1[0x22] < 1) {
            iVar5 = *(int *)(lVar19 + 0x70);
            if (iVar5 < 0x80000) {
              lVar14 = thunk_FUN_1424da030(0x50);
              if (lVar14 == 0) {
                *(undefined4 *)local_58 = 7;
              }
              else {
                local_60 = lVar14;
                FUN_1424a6be0(lVar14,lVar13);
                *(undefined4 *)(local_60 + 0x40) = uVar11;
                *(undefined1 **)(local_60 + 0x44) = &DAT_100000001;
                *(undefined4 *)(local_60 + 0x4c) = 0xffffffff;
                FUN_1425163e0(lVar19 + 0x68,local_60,local_58);
                iVar20 = iVar5;
              }
            }
            else {
              *(undefined4 *)local_58 = 0xf;
            }
          }
          uVar3 = *(ushort *)(lVar13 + 8);
          if ((short)uVar3 < 0) {
            if (*(int *)(lVar13 + 0xc) == 0) goto LAB_1426c0299;
LAB_1426c0284:
            if ((uVar3 & 2) == 0) {
              puVar16 = *(ushort **)(lVar13 + 0x18);
            }
            else {
              puVar16 = (ushort *)(lVar13 + 10);
            }
            uVar10 = (uint)*puVar16;
          }
          else {
            if ((short)uVar3 >> 5 != 0) goto LAB_1426c0284;
LAB_1426c0299:
            uVar10 = 0xffff;
          }
          lVar19 = param_1[1];
          FUN_1424a84d0(lVar13,local_a0,uVar10 + 1,0x7fffffff);
          FUN_142513eb0(lVar19 + 0x198,local_a0);
          FUN_140859a90(local_a0);
          *(int *)(lVar15 + 0x4c) = iVar20;
        } while (-1 < *(int *)(lVar13 + 0x4c));
        uVar21 = (ulonglong)local_4c;
      }
    }
    else {
      if (uVar10 == 6) {
        lVar19 = *(longlong *)(*param_1 + 0x60) + (ulonglong)(param_2 >> 0xd) * 8;
        uVar10 = param_2 >> 8 & 0x1f;
        if (uVar10 != 0) {
          local_58 = (longlong *)((longlong)param_1 + (0x18 - lVar19));
          lVar13 = *(longlong *)(*param_1 + 0x60) + (ulonglong)(param_2 >> 0xd) * 8;
          uVar21 = 0;
          bVar8 = false;
          local_4c = uVar10;
          do {
            lVar15 = *(longlong *)(lVar19 + uVar21 * 8);
            lVar14 = (**(code **)(*(longlong *)param_1[2] + 0x18))((longlong *)param_1[2],lVar15);
            if (lVar14 == 0x101000100) {
              lVar14 = lVar15;
              if (bVar8) goto LAB_1426bff63;
              bVar9 = true;
              bVar8 = false;
            }
            else {
              if ((!bVar8) && (uVar21 != 0)) {
                if (uVar21 < 6) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = 0;
                  if (0xf < local_58) {
                    uVar12 = uVar21 & 0x7ffffffffffffffe;
                    uVar17 = 0;
                    do {
                      puVar1 = (undefined4 *)(lVar19 + uVar17 * 8);
                      uVar11 = puVar1[1];
                      uVar6 = puVar1[2];
                      uVar7 = puVar1[3];
                      plVar2 = param_1 + uVar17 + 3;
                      *(undefined4 *)plVar2 = *puVar1;
                      *(undefined4 *)((longlong)plVar2 + 4) = uVar11;
                      *(undefined4 *)(plVar2 + 1) = uVar6;
                      *(undefined4 *)((longlong)plVar2 + 0xc) = uVar7;
                      uVar17 = uVar17 + 2;
                    } while ((uVar21 & 0xfffffffffffffffe) != uVar17);
                    if (uVar21 == uVar12) goto LAB_1426bff63;
                  }
                }
                uVar17 = uVar12;
                if (((int)uVar21 - (int)uVar12 & 3U) != 0) {
                  uVar18 = (ulonglong)((byte)((char)uVar21 - (char)uVar12) & 3);
                  do {
                    param_1[uVar17 + 3] = *(longlong *)(lVar19 + uVar17 * 8);
                    uVar17 = uVar17 + 1;
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                }
                if (2 < ~uVar12 + uVar21) {
                  do {
                    param_1[uVar17 + 3] = *(longlong *)(lVar13 + uVar17 * 8);
                    param_1[uVar17 + 4] = *(longlong *)(lVar13 + 8 + uVar17 * 8);
                    param_1[uVar17 + 5] = *(longlong *)(lVar13 + 0x10 + uVar17 * 8);
                    param_1[uVar17 + 6] = *(longlong *)(lVar13 + 0x18 + uVar17 * 8);
                    uVar17 = uVar17 + 4;
                  } while (uVar21 != uVar17);
                }
              }
LAB_1426bff63:
              param_1[uVar21 + 3] = lVar14;
              bVar8 = true;
              bVar9 = false;
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 != uVar10);
          uVar10 = local_4c;
          if (!bVar9) {
LAB_1426c00fb:
                    /* WARNING: Could not recover jumptable at 0x0001426c012a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar21 = (**(code **)(*(longlong *)param_1[1] + 0x18))
                               ((longlong *)param_1[1],param_1 + 3,local_4c,param_1 + 0x22);
            return uVar21;
          }
        }
        uVar21 = FUN_1426bdf90(param_1[1],lVar19,uVar10,param_1 + 0x22);
        return uVar21;
      }
      if (uVar10 == 5) {
        lVar19 = (ulonglong)(param_2 >> 0xd) * 4 + *(longlong *)(*param_1 + 0x40);
        uVar10 = param_2 >> 8 & 0x1f;
        if (uVar10 != 0) {
          uVar21 = 0;
          bVar8 = false;
          local_4c = uVar10;
          do {
            uVar4 = *(uint *)(lVar19 + uVar21 * 4);
            if (((~uVar4 & 0xc0) == 0) ||
               (uVar12 = (**(code **)(*(longlong *)param_1[2] + 0x10))((longlong *)param_1[2],uVar4)
               , uVar12 == 0x101000100)) {
              if (bVar8) {
                if ((uVar4 & 0xff) < 0xc0) {
                  uVar12 = (ulonglong)(uVar4 & 0xff) << 8 |
                           CONCAT44(uVar4,uVar4 << 0x10) & 0xffff0000ff000000;
                }
                else {
                  uVar12 = (ulonglong)(uVar4 & 0xffffff00);
                  if ((uVar4 & 0xf) == 1) {
                    uVar12 = uVar12 << 0x20 | 0x5000500;
                  }
                }
                goto LAB_1426bfd72;
              }
              bVar9 = true;
              bVar8 = false;
            }
            else {
              if ((!bVar8) && (uVar21 != 0)) {
                uVar17 = 0;
                do {
                  uVar4 = *(uint *)(lVar19 + uVar17 * 4);
                  if ((uint)((ulonglong)uVar4 & 0xff) < 0xc0) {
                    uVar18 = ((ulonglong)uVar4 & 0xff) << 8 |
                             CONCAT44(uVar4,uVar4 << 0x10) & 0xffff0000ff000000;
                  }
                  else {
                    uVar18 = (ulonglong)(uVar4 & 0xffffff00);
                    if ((uVar4 & 0xf) == 1) {
                      uVar18 = uVar18 << 0x20 | 0x5000500;
                    }
                  }
                  param_1[uVar17 + 3] = uVar18;
                  uVar17 = uVar17 + 1;
                } while (uVar21 != uVar17);
              }
LAB_1426bfd72:
              param_1[uVar21 + 3] = uVar12;
              bVar8 = true;
              bVar9 = false;
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 != uVar10);
          uVar10 = local_4c;
          if (!bVar9) goto LAB_1426c00fb;
        }
        uVar21 = FUN_1426bde20(param_1[1],lVar19,uVar10,param_1 + 0x22);
        return uVar21;
      }
    }
  }
  else {
    lVar19 = (**(code **)(*(longlong *)param_1[2] + 0x10))((longlong *)param_1[2],uVar21);
    if (lVar19 != 0x101000100) {
      uVar21 = FUN_1426bdb50(param_1[1],lVar19,param_1 + 0x22);
      return uVar21;
    }
  }
  return uVar21;
}



// FUNCTION 1426c0320 Unwind@1426c0320 body=55 status=ok
// SIG undefined Unwind@1426c0320(void)

void Unwind_1426c0320(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x68));
  return;
}



// FUNCTION 1426c0360 Unwind@1426c0360 body=55 status=ok
// SIG undefined Unwind@1426c0360(void)

void Unwind_1426c0360(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x68));
  return;
}



// FUNCTION 1426c03a0 Unwind@1426c03a0 body=55 status=ok
// SIG undefined Unwind@1426c03a0(void)

void Unwind_1426c03a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1426c03e0 FUN_1426c03e0 body=29 status=ok
// SIG undefined FUN_1426c03e0(void)

undefined8 * FUN_1426c03e0(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  return param_1;
}



// FUNCTION 1426c0400 FUN_1426c0400 body=82 status=ok
// SIG undefined FUN_1426c0400(void)

void FUN_1426c0400(undefined4 *param_1,char param_2)

{
  *param_1 = 1;
  param_1[2] = 3;
  param_1[7] = 0xff;
  param_1[3] = (uint)(param_2 != '\0') * 2 + 2;
  param_1[8] = param_2 == '\0' | 0xfe;
  *(undefined1 **)(param_1 + 4) = &DAT_200000002;
  *(undefined **)(param_1 + 9) = &DAT_ff000000ff;
  return;
}



// FUNCTION 1426c0460 FUN_1426c0460 body=29 status=ok
// SIG undefined FUN_1426c0460(void)

void FUN_1426c0460(undefined4 *param_1)

{
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined1 **)(param_1 + 4) = &DAT_200000002;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined **)(param_1 + 9) = &DAT_ff000000ff;
  return;
}



// FUNCTION 1426c0480 FUN_1426c0480 body=29 status=ok
// SIG undefined FUN_1426c0480(void)

void FUN_1426c0480(undefined4 *param_1)

{
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined1 **)(param_1 + 4) = &DAT_200000002;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 9) = 0x3f0000003f;
  return;
}



// FUNCTION 1426c04a0 FUN_1426c04a0 body=1376 status=ok
// SIG undefined FUN_1426c04a0(void)

void FUN_1426c04a0(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  byte bVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte bVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 auStack_128 [40];
  ulonglong local_100;
  uint local_f8 [2];
  undefined8 local_f0;
  uint local_e8 [40];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar12 = 1;
  uVar18 = 1;
  if ((param_2 & 0xffffff) != 0) {
    if ((short)param_2 == 0) {
      uVar18 = 2;
    }
    else {
      uVar18 = (ulonglong)(4 - ((char)param_2 == '\0'));
    }
  }
  if ((param_3 & 0xffffff) != 0) {
    if ((short)param_3 == 0) {
      uVar12 = 2;
    }
    else {
      uVar12 = 4 - ((char)param_3 == '\0');
    }
  }
  if ((param_2 < param_3) &&
     ((uVar20 = (uint)uVar18, uVar12 <= uVar20 ||
      (bVar5 = (char)uVar18 * -8, (param_3 >> (bVar5 & 0x1f)) << (bVar5 & 0x1f) != param_2)))) {
    local_e8[0x14] = 0;
    local_e8[0x15] = 0;
    local_e8[0x16] = 0;
    local_e8[0x17] = 0;
    local_e8[0x18] = 0;
    local_e8[0x19] = 0;
    local_e8[0x1a] = 0;
    local_e8[0x1b] = 0;
    local_e8[0x1c] = 0;
    local_e8[0x1d] = 0;
    local_e8[0x1e] = 0;
    local_e8[0x1f] = 0;
    local_e8[0x20] = 0;
    local_e8[0x21] = 0;
    local_e8[0x22] = 0;
    local_e8[0x23] = 0;
    local_e8[0x24] = 0;
    local_e8[0x25] = 0;
    local_e8[0x26] = 0;
    local_e8[0x27] = 0;
    local_e8[0] = 0;
    local_e8[1] = 0;
    local_e8[2] = 0;
    local_e8[3] = 0;
    local_e8[4] = 0;
    local_e8[5] = 0;
    local_e8[6] = 0;
    local_e8[7] = 0;
    local_e8[8] = 0;
    local_e8[9] = 0;
    local_e8[10] = 0;
    local_e8[0xb] = 0;
    local_e8[0xc] = 0;
    local_e8[0xd] = 0;
    local_e8[0xe] = 0;
    local_e8[0xf] = 0;
    local_e8[0x10] = 0;
    local_e8[0x11] = 0;
    local_e8[0x12] = 0;
    local_e8[0x13] = 0;
    uVar2 = *param_1;
    lVar19 = (longlong)(int)uVar2;
    if ((int)uVar2 < (int)uVar20) {
      puVar10 = local_e8 + uVar18 * 4 + 0x17;
      iVar7 = uVar20 * -8 + 0x20;
      do {
        bVar5 = (byte)iVar7;
        uVar11 = param_2 >> (bVar5 & 0x1f) & 0xff;
        uVar20 = param_1[uVar18 + 6];
        uVar17 = uVar20 - uVar11;
        if (uVar11 <= uVar20 && uVar17 != 0) {
          puVar10[-3] = (1 << (bVar5 & 0x1f)) + param_2;
          puVar10[-2] = uVar20 << (bVar5 & 0x1f) | -0x100 << (bVar5 & 0x1f) & param_2;
          puVar10[-1] = (uint)uVar18;
          *puVar10 = uVar17;
        }
        iVar7 = iVar7 + 8;
        param_2 = (param_2 >> ((byte)iVar7 & 0x1f)) << ((byte)iVar7 & 0x1f);
        uVar18 = uVar18 - 1;
        puVar10 = puVar10 + -4;
      } while (lVar19 < (longlong)uVar18);
    }
    bVar5 = (char)uVar2 * -8 + 0x20;
    uVar20 = (1 << ((char)uVar2 * -8 & 0x1fU)) + param_2;
    if (0xfeffffff < param_2) {
      uVar20 = 0xffffffff;
    }
    if ((int)uVar2 < (int)uVar12) {
      uVar18 = (ulonglong)uVar12;
      puVar10 = local_e8 + uVar18 * 4 + 3;
      iVar7 = uVar12 * -8 + 0x20;
      do {
        bVar6 = (byte)iVar7;
        uVar11 = param_3 >> (bVar6 & 0x1f) & 0xff;
        uVar12 = param_1[uVar18 + 1];
        uVar17 = uVar11 - uVar12;
        if (uVar12 <= uVar11 && uVar17 != 0) {
          puVar10[-3] = uVar12 << (bVar6 & 0x1f) | -0x100 << (bVar6 & 0x1f) & param_3;
          puVar10[-2] = (-1 << (bVar6 & 0x1f)) + param_3;
          puVar10[-1] = (uint)uVar18;
          *puVar10 = uVar17;
        }
        iVar7 = iVar7 + 8;
        param_3 = (param_3 >> ((byte)iVar7 & 0x1f)) << ((byte)iVar7 & 0x1f);
        uVar18 = uVar18 - 1;
        puVar10 = puVar10 + -4;
      } while (lVar19 < (longlong)uVar18);
    }
    param_3 = (-1 << (bVar5 & 0x1f)) + param_3;
    if (param_3 < uVar20) {
      if ((int)uVar2 < 4) {
        uVar18 = 4;
        bVar5 = 0;
        bVar6 = 0;
        do {
          if ((0 < (int)local_e8[uVar18 * 4 + 0x17]) &&
             (uVar12 = local_e8[uVar18 * 4 + 3], 0 < (int)uVar12)) {
            puVar10 = local_e8 + uVar18 * 4 + 0x15;
            uVar20 = local_e8[uVar18 * 4 + 0x15];
            uVar11 = local_e8[uVar18 * 4];
            iVar7 = (int)uVar18;
            cVar4 = (char)uVar18;
            if (uVar11 < uVar20) {
              *puVar10 = local_e8[uVar18 * 4 + 1];
              uVar12 = ((local_e8[uVar18 * 4 + 1] >> (cVar4 * -8 & 0x1fU) & 0xff) -
                       (local_e8[uVar18 * 4 + 0x14] >> (cVar4 * -8 & 0x1fU) & 0xff)) + 1;
LAB_1426c08c6:
              local_e8[uVar18 * 4 + 0x17] = uVar12;
              local_e8[uVar18 * 4 + 3] = 0;
              if ((int)uVar2 < iVar7 + -1) {
                lVar16 = (longlong)iVar7 + -1;
                lVar9 = (longlong)iVar7 + -2;
                if ((~uVar2 + iVar7 & 1) != 0) {
                  local_e8[lVar16 * 4 + 3] = 0;
                  local_e8[lVar16 * 4 + 0x17] = 0;
                  lVar16 = lVar9;
                }
                if (lVar9 != lVar19) {
                  uVar18 = lVar16 << 4 | 0xc;
                  do {
                    *(undefined4 *)((longlong)local_e8 + uVar18) = 0;
                    *(undefined4 *)((longlong)local_e8 + uVar18 + 0x50) = 0;
                    *(undefined4 *)((longlong)local_f8 + uVar18) = 0;
                    *(undefined4 *)((longlong)local_e8 + uVar18 + 0x40) = 0;
                    lVar16 = lVar16 + -2;
                    uVar18 = uVar18 - 0x20;
                  } while (lVar19 < lVar16);
                }
              }
              break;
            }
            if (uVar20 != uVar11) {
              local_f8[1] = uVar11;
              local_f0 = puVar10;
              bVar15 = cVar4 * '\b';
              uVar17 = uVar20 >> (cVar4 * -8 & 0x1fU) & 0xff;
              if (uVar17 < param_1[uVar18 + 6]) {
                bVar8 = cVar4 * -8 + 0x20;
                uVar13 = uVar18 & 0xffffffff;
              }
              else {
                uVar14 = uVar18;
                bVar8 = bVar6;
                bVar15 = bVar5;
                do {
                  uVar17 = 0xffffffff >> (bVar15 & 0x1f);
                  if (3 < (longlong)uVar14) {
                    uVar17 = 0;
                  }
                  uVar20 = param_1[uVar14 + 1] << (bVar8 & 0x1f) |
                           (-0x100 << (bVar8 & 0x1f) | uVar17) & uVar20;
                  uVar13 = uVar14 - 1;
                  bVar8 = bVar8 + 8;
                  uVar17 = uVar20 >> (bVar8 & 0x1f) & 0xff;
                  bVar15 = bVar15 - 8;
                  lVar16 = uVar14 + 5;
                  uVar14 = uVar13;
                  local_f8[0] = uVar12;
                } while (param_1[lVar16] <= uVar17);
              }
              uVar3 = 0xffffffff >> (bVar15 & 0x1f);
              if (3 < (int)uVar13) {
                uVar3 = 0;
              }
              if ((uVar17 + 1 << (bVar8 & 0x1f) | (-0x100 << (bVar8 & 0x1f) | uVar3) & uVar20) ==
                  uVar11) {
                *puVar10 = local_e8[uVar18 * 4 + 1];
                uVar12 = uVar12 + local_e8[uVar18 * 4 + 0x17];
                goto LAB_1426c08c6;
              }
            }
          }
          uVar18 = uVar18 - 1;
          bVar5 = bVar5 - 8;
          bVar6 = bVar6 + 8;
        } while (lVar19 < (longlong)uVar18);
      }
      param_1[0x28] = 0;
      uVar12 = 0;
      local_100 = (ulonglong)uVar2;
    }
    else {
      uVar12 = param_3 - uVar20 >> (bVar5 & 0x1f);
      param_1[0x28] = 0;
      if ((int)uVar12 < 0) {
        uVar12 = 0;
      }
      else {
        param_1[0xb] = uVar20;
        param_1[0xc] = param_3;
        param_1[0xd] = uVar2;
        param_1[0xe] = uVar12 + 1;
        param_1[0x28] = 1;
        uVar12 = 1;
      }
    }
    puVar10 = param_1 + 0x28;
    if ((int)uVar2 < 4) {
      lVar16 = lVar19 + -4;
      lVar19 = lVar19 * 0x10 + 0x1c;
      do {
        if (0 < *(int *)((longlong)local_e8 + lVar19)) {
          uVar20 = *(uint *)((longlong)&local_f0 + lVar19);
          uVar2 = *(uint *)((longlong)&local_f0 + lVar19 + 4);
          uVar11 = *(uint *)((longlong)local_e8 + lVar19);
          puVar1 = param_1 + (longlong)(int)uVar12 * 4 + 0xb;
          *puVar1 = *(uint *)((longlong)local_f8 + lVar19 + 4);
          puVar1[1] = uVar20;
          puVar1[2] = uVar2;
          puVar1[3] = uVar11;
          uVar12 = *puVar10 + 1;
          *puVar10 = uVar12;
        }
        if (0 < *(int *)((longlong)local_e8 + lVar19 + 0x50)) {
          uVar20 = *(uint *)((longlong)local_e8 + lVar19 + 0x48);
          uVar2 = *(uint *)((longlong)local_e8 + lVar19 + 0x4c);
          uVar11 = *(uint *)((longlong)local_e8 + lVar19 + 0x50);
          puVar1 = param_1 + (longlong)(int)uVar12 * 4 + 0xb;
          *puVar1 = *(uint *)((longlong)local_e8 + lVar19 + 0x44);
          puVar1[1] = uVar20;
          puVar1[2] = uVar2;
          puVar1[3] = uVar11;
          uVar12 = *puVar10 + 1;
          *puVar10 = uVar12;
        }
        lVar19 = lVar19 + 0x10;
        lVar16 = lVar16 + 1;
      } while (lVar16 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
}



// FUNCTION 1426c0a50 FUN_1426c0a50 body=981 status=ok
// SIG undefined FUN_1426c0a50(void)

undefined8 FUN_1426c0a50(longlong param_1,int param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  ulonglong uVar15;
  longlong lVar16;
  byte bVar17;
  int iVar19;
  int iVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  int iVar18;
  
  uVar25 = *(uint *)(param_1 + 0xa0);
  if ((int)uVar25 < 1) {
    iVar19 = 0;
    uVar15 = 0;
  }
  else {
    piVar14 = (int *)(param_1 + 0x38);
    uVar15 = 0;
    iVar19 = 0;
    do {
      if (piVar14[-1] != param_3) goto LAB_1426c0a9c;
      iVar19 = iVar19 + *piVar14;
      uVar15 = uVar15 + 1;
      piVar14 = piVar14 + 4;
    } while (uVar25 != uVar15);
    uVar15 = (ulonglong)uVar25;
  }
LAB_1426c0a9c:
  uVar24 = (ulonglong)(int)param_3;
  iVar11 = *(int *)(param_1 + 0x1c + uVar24 * 4) - *(int *)(param_1 + 8 + uVar24 * 4);
  iVar12 = iVar11 + 1;
  if (iVar12 * iVar19 < param_2) {
    uVar7 = 0;
  }
  else {
    uVar25 = *(uint *)(param_1 + 0x2c);
    uVar26 = *(uint *)(param_1 + 0x30);
    if (1 < (uint)uVar15) {
      uVar6 = (uVar15 & 0xffffffff) - 1;
      if ((uint)uVar15 == 2) {
        lVar16 = 1;
      }
      else {
        puVar21 = (uint *)(param_1 + 0x50);
        lVar16 = 1;
        do {
          if (puVar21[-5] < uVar25) {
            uVar25 = puVar21[-5];
          }
          if (uVar26 < puVar21[-4]) {
            uVar26 = puVar21[-4];
          }
          if (puVar21[-1] < uVar25) {
            uVar25 = puVar21[-1];
          }
          if (uVar26 < *puVar21) {
            uVar26 = *puVar21;
          }
          puVar21 = puVar21 + 8;
          lVar1 = lVar16 - (uVar6 & 0xfffffffffffffffe);
          lVar16 = lVar16 + 2;
        } while (lVar1 != -1);
      }
      if ((uVar6 & 1) != 0) {
        uVar23 = *(uint *)(param_1 + 0x2c + lVar16 * 0x10);
        uVar4 = *(uint *)(param_1 + 0x30 + lVar16 * 0x10);
        if (uVar23 < uVar25) {
          uVar25 = uVar23;
        }
        if (uVar26 < uVar4) {
          uVar26 = uVar4;
        }
      }
    }
    iVar11 = (param_2 - iVar19) / iVar11;
    iVar22 = iVar19 - iVar11;
    if ((iVar11 == 0) || (iVar12 * iVar11 + iVar22 < param_2)) {
      iVar11 = iVar11 + 1;
      iVar22 = iVar22 + -1;
    }
    *(uint *)(param_1 + 0x2c) = uVar25;
    if (iVar22 == 0) {
      *(uint *)(param_1 + 0x30) = uVar26;
      *(int *)(param_1 + 0x38) = iVar19;
      lVar16 = (longlong)*(int *)(param_1 + 0x34);
      bVar10 = (char)(lVar16 + 1) * -8;
      uVar23 = -0x100 << (bVar10 & 0x1f);
      *(uint *)(param_1 + 0x2c) =
           *(int *)(param_1 + 8 + lVar16 * 4) << (bVar10 & 0x1f) | uVar25 & uVar23;
      *(uint *)(param_1 + 0x30) =
           *(int *)(param_1 + 0x1c + lVar16 * 4) << (bVar10 & 0x1f) | uVar23 & uVar26;
      *(int *)(param_1 + 0x38) =
           ((*(int *)(param_1 + 0x1c + lVar16 * 4) - *(int *)(param_1 + 8 + lVar16 * 4)) + 1) *
           iVar19;
      *(int *)(param_1 + 0x34) = (int)(lVar16 + 1);
      uVar5 = 1;
    }
    else {
      iVar19 = param_3 * 8;
      iVar12 = param_3 * -8 + 0x20;
      bVar9 = (byte)iVar12;
      bVar10 = (byte)iVar19;
      uVar4 = ((uVar25 >> (-bVar10 & 0x1f) & 0xff) + iVar22) - 1;
      uVar23 = *(uint *)(param_1 + 0x18 + uVar24 * 4);
      if (uVar23 < uVar4) {
        uVar15 = uVar24;
        iVar20 = iVar12;
        iVar18 = iVar19;
        do {
          iVar2 = *(int *)(param_1 + 4 + uVar15 * 4);
          uVar3 = *(uint *)(param_1 + 0x14 + uVar15 * 4);
          iVar13 = (uVar23 - iVar2) + 1;
          uVar23 = 0xffffffff >> ((byte)iVar18 & 0x1f);
          if (3 < (longlong)uVar15) {
            uVar23 = 0;
          }
          uVar25 = (int)(uVar4 - iVar2) % iVar13 + iVar2 << ((byte)iVar20 & 0x1f) |
                   (-0x100 << ((byte)iVar20 & 0x1f) | uVar23) & uVar25;
          iVar20 = iVar20 + 8;
          bVar8 = (byte)iVar20;
          uVar15 = uVar15 - 1;
          uVar4 = (uVar25 >> (bVar8 & 0x1f) & 0xff) + (int)(uVar4 - iVar2) / iVar13;
          iVar18 = iVar18 + -8;
          bVar17 = (byte)iVar18;
          uVar23 = uVar3;
        } while (uVar3 < uVar4);
      }
      else {
        uVar15 = (ulonglong)param_3;
        bVar8 = bVar9;
        bVar17 = bVar10;
      }
      lVar16 = uVar24 + 1;
      uVar23 = 0xffffffff >> (bVar17 & 0x1f);
      if (3 < (int)uVar15) {
        uVar23 = 0;
      }
      uVar25 = uVar4 << (bVar8 & 0x1f) | (-0x100 << (bVar8 & 0x1f) | uVar23) & uVar25;
      *(uint *)(param_1 + 0x30) = uVar25;
      *(int *)(param_1 + 0x38) = iVar22;
      uVar23 = uVar25 >> (bVar9 & 0x1f) & 0xff;
      if (uVar23 < *(uint *)(param_1 + 0x18 + uVar24 * 4)) {
        uVar15 = (ulonglong)param_3;
      }
      else {
        do {
          uVar23 = 0xffffffff >> ((byte)iVar19 & 0x1f);
          if (3 < (longlong)uVar24) {
            uVar23 = 0;
          }
          uVar25 = *(int *)(param_1 + 4 + uVar24 * 4) << ((byte)iVar12 & 0x1f) |
                   (-0x100 << ((byte)iVar12 & 0x1f) | uVar23) & uVar25;
          uVar15 = uVar24 - 1;
          iVar12 = iVar12 + 8;
          bVar9 = (byte)iVar12;
          uVar23 = uVar25 >> (bVar9 & 0x1f) & 0xff;
          iVar19 = iVar19 + -8;
          bVar10 = (byte)iVar19;
          lVar1 = uVar24 * 4;
          uVar24 = uVar15;
        } while (*(uint *)(param_1 + 0x14 + lVar1) <= uVar23);
      }
      uVar4 = 0;
      if ((int)uVar15 < 4) {
        uVar4 = 0xffffffff >> (bVar10 & 0x1f);
      }
      uVar23 = uVar23 + 1 << (bVar9 & 0x1f) | (-0x100 << (bVar9 & 0x1f) | uVar4) & uVar25;
      *(uint *)(param_1 + 0x3c) = uVar23;
      *(uint *)(param_1 + 0x40) = uVar26;
      *(uint *)(param_1 + 0x44) = param_3;
      *(int *)(param_1 + 0x48) = iVar11;
      bVar10 = (char)(param_3 + 1) * -8;
      uVar25 = -0x100 << (bVar10 & 0x1f);
      *(uint *)(param_1 + 0x3c) =
           *(int *)(param_1 + 4 + lVar16 * 4) << (bVar10 & 0x1f) | uVar23 & uVar25;
      *(uint *)(param_1 + 0x40) =
           *(int *)(param_1 + 0x18 + lVar16 * 4) << (bVar10 & 0x1f) | uVar25 & uVar26;
      *(int *)(param_1 + 0x48) =
           ((*(int *)(param_1 + 0x18 + lVar16 * 4) - *(int *)(param_1 + 4 + lVar16 * 4)) + 1) *
           iVar11;
      *(uint *)(param_1 + 0x44) = param_3 + 1;
      uVar5 = 2;
    }
    *(undefined4 *)(param_1 + 0xa0) = uVar5;
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 1426c0e30 FUN_1426c0e30 body=434 status=ok
// SIG undefined FUN_1426c0e30(void)

void FUN_1426c0e30(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined4 *local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar5 = FUN_1426c04a0();
  if (cVar5 != '\0') {
    uVar11 = (ulonglong)*(uint *)(param_1 + 0xa0);
    do {
      uVar3 = *(uint *)(param_1 + 0x34);
      lVar10 = (longlong)(int)uVar3;
      if (0 < (int)uVar11) {
        iVar9 = 1;
        lVar8 = 0;
        iVar12 = param_4;
        do {
          iVar4 = *(int *)(param_1 + 0x34 + lVar8);
          if ((int)(uVar3 + 1) < iVar4) break;
          piVar2 = (int *)(param_1 + 0x38 + lVar8);
          iVar13 = iVar12 - *piVar2;
          if (iVar13 == 0 || iVar12 < *piVar2) {
            if ((int)uVar3 < iVar4) {
              *(int *)(param_1 + 0x38 + lVar8) = iVar12;
            }
            *(int *)(param_1 + 0xa0) = iVar9;
            if (iVar9 != 1) {
              local_2c = 0;
              local_38 = &local_2c;
              local_40 = 0;
              local_48 = 0;
              FUN_14258cce0(param_1 + 0x2c,iVar9,0x10,&LAB_1426c0a30);
            }
            goto LAB_1426c0fc4;
          }
          iVar9 = iVar9 + 1;
          lVar8 = lVar8 + 0x10;
          iVar12 = iVar13;
        } while ((uVar11 & 0xffffffff) << 4 != lVar8);
      }
      if (uVar3 == 4) break;
      cVar5 = FUN_1426c0a50(param_1,param_4,uVar3);
      if (cVar5 != '\0') goto LAB_1426c0fc4;
      uVar11 = (ulonglong)*(uint *)(param_1 + 0xa0);
      if (0 < (int)*(uint *)(param_1 + 0xa0)) {
        cVar5 = (char)uVar3 * '\b' + '\b';
        uVar6 = -0x100 << (-cVar5 & 0x1fU);
        if (*(uint *)(param_1 + 0x34) == uVar3) {
          bVar7 = 0x20 - cVar5;
          lVar8 = 0;
          puVar14 = (uint *)(param_1 + 0x2c);
          do {
            *puVar14 = *(int *)(param_1 + 8 + lVar10 * 4) << (bVar7 & 0x1f) | *puVar14 & uVar6;
            puVar14[1] = *(int *)(param_1 + 0x1c + lVar10 * 4) << (bVar7 & 0x1f) |
                         puVar14[1] & uVar6;
            puVar14[3] = ((*(int *)(param_1 + 0x1c + lVar10 * 4) -
                          *(int *)(param_1 + 8 + lVar10 * 4)) + 1) * puVar14[3];
            puVar14[2] = uVar3 + 1;
            lVar8 = lVar8 + 1;
            uVar11 = (ulonglong)*(int *)(param_1 + 0xa0);
            if ((longlong)uVar11 <= lVar8) break;
            puVar1 = puVar14 + 6;
            puVar14 = puVar14 + 4;
          } while (*puVar1 == uVar3);
        }
      }
    } while( true );
  }
LAB_1426c0fd5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
LAB_1426c0fc4:
  *(undefined4 *)(param_1 + 0x9c) = 0;
  goto LAB_1426c0fd5;
}



// FUNCTION 1426c0ff0 FUN_1426c0ff0 body=276 status=ok
// SIG undefined FUN_1426c0ff0(void)

uint FUN_1426c0ff0(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  byte bVar8;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x9c);
  uVar3 = 0xffffffff;
  if (iVar9 < *(int *)(param_1 + 0xa0)) {
    lVar6 = (longlong)iVar9 * 0x10;
    uVar3 = *(uint *)(param_1 + 0x2c + lVar6);
    piVar2 = (int *)(param_1 + 0x38 + lVar6);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *(int *)(param_1 + 0x9c) = iVar9 + 1;
    }
    else {
      iVar12 = *(int *)(param_1 + 0x34 + lVar6);
      iVar9 = iVar12 * 8;
      iVar5 = iVar12 * -8 + 0x20;
      bVar4 = (byte)iVar5;
      bVar8 = (byte)iVar9;
      uVar7 = uVar3 >> (-bVar8 & 0x1f) & 0xff;
      uVar11 = uVar3;
      if (*(uint *)(param_1 + 0x18 + (longlong)iVar12 * 4) <= uVar7) {
        lVar13 = (longlong)iVar12;
        do {
          uVar7 = 0xffffffff >> ((byte)iVar9 & 0x1f);
          if (3 < lVar13) {
            uVar7 = 0;
          }
          uVar11 = *(int *)(param_1 + 4 + lVar13 * 4) << ((byte)iVar5 & 0x1f) |
                   (-0x100 << ((byte)iVar5 & 0x1f) | uVar7) & uVar11;
          lVar14 = lVar13 + -1;
          iVar5 = iVar5 + 8;
          bVar4 = (byte)iVar5;
          uVar7 = uVar11 >> (bVar4 & 0x1f) & 0xff;
          iVar9 = iVar9 + -8;
          bVar8 = (byte)iVar9;
          lVar1 = lVar13 * 4;
          lVar13 = lVar14;
        } while (*(uint *)(param_1 + 0x14 + lVar1) <= uVar7);
        iVar12 = (int)lVar14;
      }
      uVar10 = 0;
      if (iVar12 < 4) {
        uVar10 = 0xffffffff >> (bVar8 & 0x1f);
      }
      *(uint *)(param_1 + lVar6 + 0x2c) =
           uVar7 + 1 << (bVar4 & 0x1f) | (-0x100 << (bVar4 & 0x1f) | uVar10) & uVar11;
    }
  }
  return uVar3;
}



// FUNCTION 1426c1110 FUN_1426c1110 body=286 status=ok
// SIG undefined FUN_1426c1110(void)

ulonglong FUN_1426c1110(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    uVar9 = 0;
  }
  else {
    lVar1 = *param_1;
    iVar2 = *(int *)(lVar1 + 8);
    iVar3 = (int)param_1[1] + -1;
    while (iVar8 = iVar2, iVar8 + 1 < iVar3) {
      uVar5 = (iVar8 + iVar3) / 2;
      uVar9 = (ulonglong)uVar5;
      uVar6 = *(uint *)(lVar1 + (longlong)(int)uVar5 * 4);
      if ((char)uVar6 < '\0') {
        if (uVar5 + 1 != iVar3) {
          uVar9 = (longlong)(int)uVar5 + 1;
          do {
            uVar6 = *(uint *)(lVar1 + uVar9 * 4);
            if (-1 < (char)uVar6) {
              uVar9 = uVar9 & 0xffffffff;
              goto LAB_1426c1130;
            }
            uVar9 = uVar9 + 1;
          } while (iVar3 != (int)uVar9);
        }
        if (uVar5 - 1 == iVar8) break;
        uVar9 = (ulonglong)(int)(uVar5 - 1);
        while (uVar6 = *(uint *)(lVar1 + uVar9 * 4), (char)uVar6 < '\0') {
          uVar9 = uVar9 - 1;
          if (iVar8 == (int)uVar9) goto LAB_1426c11b1;
        }
      }
LAB_1426c1130:
      iVar2 = (int)uVar9;
      if (param_2 < (uVar6 & 0xffffff00)) {
        iVar2 = iVar8;
        iVar3 = (int)uVar9;
      }
    }
LAB_1426c11b1:
    lVar4 = (longlong)iVar8;
    uVar6 = *(uint *)(lVar1 + lVar4 * 4) & 0xffffff00;
    uVar9 = (ulonglong)uVar6;
    if (uVar6 == param_2) {
      uVar5 = *(uint *)(lVar1 + -4 + lVar4 * 4);
      if ((char)uVar5 < '\0') {
        puVar7 = (uint *)(lVar1 + (longlong)(iVar8 + -2) * 4);
        do {
          uVar6 = *puVar7;
          puVar7 = puVar7 + -1;
        } while ((char)uVar6 < '\0');
        uVar9 = (ulonglong)(uVar6 & 0xffffff00);
      }
      else {
        uVar9 = (ulonglong)(uVar5 & 0xffffff00);
        uVar5 = 0x5000500;
      }
    }
    else {
      puVar7 = (uint *)(lVar1 + lVar4 * 4);
      uVar6 = 0x5000500;
      do {
        uVar5 = uVar6;
        puVar7 = puVar7 + 1;
        uVar6 = *puVar7;
      } while ((char)*puVar7 < '\0');
    }
    uVar9 = (ulonglong)(uVar5 & 0xffffff7f) | uVar9 << 0x20;
  }
  return uVar9;
}



// FUNCTION 1426c1230 FUN_1426c1230 body=214 status=ok
// SIG undefined FUN_1426c1230(void)

ulonglong FUN_1426c1230(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  if (param_2 == 0) {
    uVar7 = 0;
  }
  else {
    lVar1 = *param_1;
    iVar2 = *(int *)(lVar1 + 8);
    iVar3 = (int)param_1[1] + -1;
    while (iVar5 = iVar2, iVar5 + 1 < iVar3) {
      uVar6 = (iVar5 + iVar3) / 2;
      uVar7 = (ulonglong)uVar6;
      uVar8 = *(uint *)(lVar1 + (longlong)(int)uVar6 * 4);
      if ((char)uVar8 < '\0') {
        if (uVar6 + 1 != iVar3) {
          uVar7 = (longlong)(int)uVar6 + 1;
          do {
            uVar8 = *(uint *)(lVar1 + uVar7 * 4);
            if (-1 < (char)uVar8) {
              uVar7 = uVar7 & 0xffffffff;
              goto LAB_1426c1250;
            }
            uVar7 = uVar7 + 1;
          } while (iVar3 != (int)uVar7);
        }
        if (uVar6 - 1 == iVar5) break;
        uVar7 = (ulonglong)(int)(uVar6 - 1);
        while (uVar8 = *(uint *)(lVar1 + uVar7 * 4), (char)uVar8 < '\0') {
          uVar7 = uVar7 - 1;
          if (iVar5 == (int)uVar7) goto LAB_1426c12d1;
        }
      }
LAB_1426c1250:
      iVar2 = (int)uVar7;
      if (param_2 < (uVar8 & 0xffffff00)) {
        iVar2 = iVar5;
        iVar3 = (int)uVar7;
      }
    }
LAB_1426c12d1:
    if ((*(uint *)(lVar1 + (longlong)iVar5 * 4) & 0xffffff00) != param_2) {
      puVar4 = (uint *)(lVar1 + (longlong)iVar5 * 4);
      do {
        puVar4 = puVar4 + 1;
        param_2 = *puVar4;
      } while ((char)param_2 < '\0');
    }
    uVar7 = (ulonglong)param_2 << 0x20 | 0x5000500;
  }
  return uVar7;
}



// FUNCTION 1426c1310 FUN_1426c1310 body=267 status=ok
// SIG undefined FUN_1426c1310(void)

ulonglong FUN_1426c1310(longlong *param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  
  lVar1 = *param_1;
  iVar2 = *(int *)(lVar1 + 8);
  iVar5 = (int)param_1[1] + -1;
  while (iVar3 = iVar2, iVar3 + 1 < iVar5) {
    uVar8 = (iVar3 + iVar5) / 2;
    uVar9 = (ulonglong)uVar8;
    uVar4 = *(uint *)(lVar1 + (longlong)(int)uVar8 * 4);
    if ((char)uVar4 < '\0') {
      if (uVar8 + 1 != iVar5) {
        uVar9 = (longlong)(int)uVar8 + 1;
        do {
          uVar4 = *(uint *)(lVar1 + uVar9 * 4);
          if (-1 < (char)uVar4) {
            uVar9 = uVar9 & 0xffffffff;
            goto LAB_1426c1330;
          }
          uVar9 = uVar9 + 1;
        } while (iVar5 != (int)uVar9);
      }
      if (uVar8 - 1 == iVar3) break;
      uVar9 = (ulonglong)(int)(uVar8 - 1);
      while (uVar4 = *(uint *)(lVar1 + uVar9 * 4), (char)uVar4 < '\0') {
        uVar9 = uVar9 - 1;
        if (iVar3 == (int)uVar9) goto LAB_1426c13b1;
      }
    }
LAB_1426c1330:
    iVar2 = (int)uVar9;
    if (param_2 < (uVar4 & 0xffffff00)) {
      iVar2 = iVar3;
      iVar5 = (int)uVar9;
    }
  }
LAB_1426c13b1:
  lVar6 = (longlong)iVar3;
  uVar4 = *(uint *)(lVar1 + lVar6 * 4);
  if ((uVar4 & 0xffffff00) == param_2) {
    uVar4 = uVar4 & 0x7f;
    if (uVar4 == 0) {
      puVar7 = (uint *)(lVar1 + lVar6 * 4);
      do {
        puVar7 = puVar7 + -1;
      } while ((char)*puVar7 < '\0');
      return (ulonglong)(*puVar7 & 0xffffff00);
    }
  }
  else {
    uVar4 = *(uint *)(lVar1 + 4 + lVar6 * 4) & 0x7f;
  }
  if ((short)param_2 != 0) {
    uVar9 = FUN_142620bd0(param_2,param_3,uVar4);
    return uVar9;
  }
  uVar9 = FUN_142620b90(param_2,param_3,uVar4);
  return uVar9;
}



// FUNCTION 1426c1420 FUN_1426c1420 body=163 status=ok
// SIG undefined FUN_1426c1420(void)

void FUN_1426c1420(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  lVar1 = *param_1;
  iVar2 = *(int *)(lVar1 + 8);
  iVar4 = (int)param_1[1] + -1;
  do {
    iVar3 = iVar2;
    if (iVar4 <= iVar3 + 1) {
      return;
    }
    uVar5 = (iVar3 + iVar4) / 2;
    uVar6 = (ulonglong)uVar5;
    uVar7 = *(uint *)(lVar1 + (longlong)(int)uVar5 * 4);
    if ((char)uVar7 < '\0') {
      if (uVar5 + 1 != iVar4) {
        uVar6 = (longlong)(int)uVar5 + 1;
        do {
          uVar7 = *(uint *)(lVar1 + uVar6 * 4);
          if (-1 < (char)uVar7) {
            uVar6 = uVar6 & 0xffffffff;
            goto LAB_1426c1440;
          }
          uVar6 = uVar6 + 1;
        } while (iVar4 != (int)uVar6);
      }
      if (uVar5 - 1 == iVar3) {
        return;
      }
      uVar6 = (ulonglong)(int)(uVar5 - 1);
      while (uVar7 = *(uint *)(lVar1 + uVar6 * 4), (char)uVar7 < '\0') {
        uVar6 = uVar6 - 1;
        if (iVar3 == (int)uVar6) {
          return;
        }
      }
    }
LAB_1426c1440:
    iVar2 = (int)uVar6;
    if (param_2 < (uVar7 & 0xffffff00)) {
      iVar2 = iVar3;
      iVar4 = (int)uVar6;
    }
  } while( true );
}



// FUNCTION 1426c14d0 FUN_1426c14d0 body=243 status=ok
// SIG undefined FUN_1426c14d0(void)

uint FUN_1426c14d0(longlong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  
  lVar2 = *param_1;
  if (param_2 == 0) {
    iVar8 = *(int *)(lVar2 + 4);
    uVar5 = *(uint *)(lVar2 + (longlong)iVar8 * 4);
    uVar4 = 0;
  }
  else {
    iVar8 = *(int *)(lVar2 + 8);
    iVar3 = (int)param_1[1] + -1;
    while (iVar7 = iVar8, iVar7 + 1 < iVar3) {
      uVar4 = (iVar7 + iVar3) / 2;
      uVar9 = (ulonglong)uVar4;
      uVar5 = *(uint *)(lVar2 + (longlong)(int)uVar4 * 4);
      if ((char)uVar5 < '\0') {
        if (uVar4 + 1 != iVar3) {
          uVar9 = (longlong)(int)uVar4 + 1;
          do {
            uVar5 = *(uint *)(lVar2 + uVar9 * 4);
            if (-1 < (char)uVar5) {
              uVar9 = uVar9 & 0xffffffff;
              goto LAB_1426c1500;
            }
            uVar9 = uVar9 + 1;
          } while (iVar3 != (int)uVar9);
        }
        if (uVar4 - 1 == iVar7) break;
        uVar9 = (ulonglong)(int)(uVar4 - 1);
        while (uVar5 = *(uint *)(lVar2 + uVar9 * 4), (char)uVar5 < '\0') {
          uVar9 = uVar9 - 1;
          if (iVar7 == (int)uVar9) goto LAB_1426c1571;
        }
      }
LAB_1426c1500:
      iVar8 = (int)uVar9;
      if (param_2 < (uVar5 & 0xffffff00)) {
        iVar8 = iVar7;
        iVar3 = (int)uVar9;
      }
    }
LAB_1426c1571:
    iVar8 = iVar7 + 1;
    uVar4 = *(uint *)(lVar2 + 4 + (longlong)iVar7 * 4);
    uVar5 = uVar4 & 0xffffff7f;
    if (0x50004ff < uVar5) {
      uVar5 = 0x5000500;
    }
    if (-1 < (char)uVar4) {
      uVar5 = 0x5000500;
    }
    uVar4 = 0x100;
  }
  if (uVar5 >> 0x10 < param_3) {
    puVar6 = (uint *)(lVar2 + (longlong)iVar8 * 4);
    uVar5 = uVar5 >> 0x10;
    do {
      uVar4 = uVar5;
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      uVar5 = uVar1 >> 0x10;
    } while (uVar1 >> 0x10 < param_3);
  }
  return uVar4;
}



// FUNCTION 1426c15d0 FUN_1426c15d0 body=306 status=ok
// SIG undefined FUN_1426c15d0(void)

uint FUN_1426c15d0(longlong *param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  if (param_2 == 0) {
    lVar1 = *param_1;
    iVar7 = *(int *)(lVar1 + (ulonglong)(param_3 != 0) * 4);
    uVar4 = (uint)(param_3 != 0) << 8;
    uVar8 = *(uint *)(lVar1 + (longlong)iVar7 * 4) & 0xffffff7f;
  }
  else {
    lVar1 = *param_1;
    iVar7 = *(int *)(lVar1 + 8);
    iVar3 = (int)param_1[1] + -1;
    while (iVar6 = iVar7, iVar6 + 1 < iVar3) {
      uVar8 = (iVar6 + iVar3) / 2;
      uVar5 = (ulonglong)uVar8;
      uVar4 = *(uint *)(lVar1 + (longlong)(int)uVar8 * 4);
      if ((char)uVar4 < '\0') {
        if (uVar8 + 1 != iVar3) {
          uVar5 = (longlong)(int)uVar8 + 1;
          do {
            uVar4 = *(uint *)(lVar1 + uVar5 * 4);
            if (-1 < (char)uVar4) {
              uVar5 = uVar5 & 0xffffffff;
              goto LAB_1426c1610;
            }
            uVar5 = uVar5 + 1;
          } while (iVar3 != (int)uVar5);
        }
        if (uVar8 - 1 == iVar6) break;
        uVar5 = (ulonglong)(int)(uVar8 - 1);
        while (uVar4 = *(uint *)(lVar1 + uVar5 * 4), (char)uVar4 < '\0') {
          uVar5 = uVar5 - 1;
          if (iVar6 == (int)uVar5) goto LAB_1426c1691;
        }
      }
LAB_1426c1610:
      iVar7 = (int)uVar5;
      if (param_2 < (uVar4 & 0xffffff00)) {
        iVar7 = iVar6;
        iVar3 = (int)uVar5;
      }
    }
LAB_1426c1691:
    iVar7 = iVar6 + 1;
    uVar4 = *(uint *)(lVar1 + 4 + (longlong)iVar6 * 4);
    uVar8 = uVar4 & 0xffffff7f;
    if (0x50004ff < uVar8) {
      uVar8 = 0x5000500;
    }
    if (-1 < (char)uVar4) {
      uVar8 = 0x5000500;
    }
    uVar4 = 0x100;
  }
  param_4 = param_3 << 0x10 | param_4;
  if (uVar8 < param_4) {
    puVar2 = (uint *)(lVar1 + (longlong)iVar7 * 4);
    do {
      if (uVar8 >> 0x10 == param_3) {
        uVar4 = uVar8;
      }
      uVar8 = *puVar2 & 0xffffff7f;
      puVar2 = puVar2 + 1;
    } while (uVar8 < param_4);
  }
  return uVar4 & 0xffff;
}



// FUNCTION 1426c1710 FUN_1426c1710 body=67 status=ok
// SIG undefined FUN_1426c1710(void)

void FUN_1426c1710(longlong *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar1 = *(uint *)(*param_1 + 4 + (longlong)param_3 * 4);
  if ((char)uVar1 < '\0') {
    puVar3 = (undefined4 *)(*param_1 + (longlong)param_3 * 4 + 8);
    do {
      uVar2 = *puVar3;
      puVar3 = puVar3 + 1;
    } while ((char)uVar2 < '\0');
  }
  else if ((uVar1 & 0x7f) != 0) {
    if ((short)param_2 != 0) {
      FUN_142620a90(param_2,param_4);
      return;
    }
    FUN_1426209f0(param_2,param_4);
    return;
  }
  return;
}



// FUNCTION 1426c1760 FUN_1426c1760 body=117 status=ok
// SIG undefined FUN_1426c1760(void)

ulonglong FUN_1426c1760(longlong *param_1,int param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    lVar5 = *param_1;
    param_2 = *(int *)(lVar5 + 4);
    uVar2 = (ulonglong)*(uint *)(lVar5 + (longlong)param_2 * 4);
    uVar3 = 0x10000;
  }
  else {
    lVar5 = *param_1;
    uVar3 = *(uint *)(lVar5 + 4 + (longlong)param_2 * 4);
    uVar1 = uVar3 & 0xffffff7f;
    uVar2 = (ulonglong)uVar1;
    if (0x50004ff < uVar1) {
      uVar2 = 0x5000500;
    }
    if (-1 < (char)uVar3) {
      uVar2 = 0x5000500;
    }
    uVar3 = *(uint *)(lVar5 + 0x10) >> 8 & 0xff00;
  }
  puVar4 = (uint *)(lVar5 + (longlong)param_2 * 4);
  do {
    puVar4 = puVar4 + 1;
    if (param_3 < (uint)(uVar2 >> 0x10)) {
      return uVar2 >> 0x10;
    }
    uVar2 = (ulonglong)*puVar4;
  } while ((char)*puVar4 < '\0');
  return (ulonglong)uVar3;
}



// FUNCTION 1426c17e0 FUN_1426c17e0 body=168 status=ok
// SIG undefined FUN_1426c17e0(void)

uint FUN_1426c17e0(undefined8 *param_1,int param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  
  piVar1 = (int *)*param_1;
  if (param_2 == 0) {
    if (param_3 == 0) {
      uVar2 = 0x4000;
      piVar4 = piVar1;
    }
    else {
      uVar2 = (piVar1[4] & 0xffU) << 8;
      piVar4 = piVar1 + 1;
    }
    param_2 = *piVar4;
    uVar5 = piVar1[param_2] & 0xffffff7f;
  }
  else {
    uVar5 = piVar1[(longlong)param_2 + 1] & 0xffffff7f;
    if (0x50004ff < uVar5) {
      uVar5 = 0x5000500;
    }
    if (-1 < (char)piVar1[(longlong)param_2 + 1]) {
      uVar5 = 0x5000500;
    }
    uVar2 = (piVar1[4] & 0xffU) << 8;
  }
  param_4 = param_3 << 0x10 | param_4;
  if (uVar5 <= param_4) {
    puVar3 = (uint *)(piVar1 + param_2);
    do {
      puVar3 = puVar3 + 1;
      uVar5 = *puVar3;
      if (-1 < (char)uVar5) {
        return uVar2;
      }
      if (param_3 < uVar5 >> 0x10) {
        return uVar2;
      }
      uVar5 = uVar5 & 0xffffff7f;
    } while (uVar5 <= param_4);
  }
  return uVar5 & 0xffff;
}



// FUNCTION 1426c1890 FUN_1426c1890 body=8 status=ok
// SIG undefined FUN_1426c1890(void)

undefined * FUN_1426c1890(void)

{
  return &DAT_14c7fecd0;
}



// FUNCTION 1426c18a0 FUN_1426c18a0 body=200 status=ok
// SIG undefined FUN_1426c18a0(void)

undefined8 * FUN_1426c18a0(undefined8 *param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  *param_1 = icu_64::CanonicalIterator::vftable;
  puVar3 = param_1 + 1;
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  puVar4 = param_1 + 0xf;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x10) = 2;
  uVar2 = FUN_1425ce570(param_3);
  param_1[0x17] = uVar2;
  uVar2 = FUN_1425ce690(param_3);
  param_1[0x18] = uVar2;
  if (*param_3 < 1) {
    cVar1 = FUN_1425d0e00(uVar2,param_3);
    if (cVar1 != '\0') {
      FUN_1426c19b0(param_1,param_2,param_3,param_4,puVar3,puVar4,param_1,uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1426c1970 Unwind@1426c1970 body=52 status=ok
// SIG undefined Unwind@1426c1970(void)

void Unwind_1426c1970(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x20));
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1426c19b0 FUN_1426c19b0 body=1034 status=ok
// SIG undefined FUN_1426c19b0(void)

void FUN_1426c19b0(longlong param_1,longlong param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong *plVar16;
  
  lVar9 = param_1 + 8;
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))
            (*(longlong **)(param_1 + 0xb8),param_2,lVar9,param_3);
  if (0 < *param_3) {
    return;
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  FUN_1426c1e00(param_1);
  if (*(short *)(param_2 + 8) < 0) {
    if (*(int *)(param_2 + 0xc) == 0) goto LAB_1426c1a2e;
LAB_1426c1a12:
    if (*(short *)(param_1 + 0x10) < 0) {
      iVar2 = *(int *)(param_1 + 0x14);
    }
    else {
      iVar2 = (int)*(short *)(param_1 + 0x10) >> 5;
    }
    lVar14 = (longlong)iVar2;
    lVar11 = -1;
    if (-1 < iVar2) {
      lVar11 = lVar14 * 0x40 + 8;
    }
    plVar7 = (longlong *)thunk_FUN_1424da030(lVar11);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = lVar14;
      plVar16 = plVar7 + 1;
      if (iVar2 != 0) {
        plVar10 = plVar16;
        do {
          *plVar10 = (longlong)&PTR_FUN_149e18960;
          *(undefined2 *)(plVar10 + 1) = 2;
          plVar10 = plVar10 + 8;
        } while (plVar10 != plVar16 + lVar14 * 8);
      }
      iVar2 = 0;
      uVar3 = FUN_1424a8030(lVar9,0);
      iVar13 = 2 - (uint)(uVar3 < 0x10000);
      if (*(short *)(param_1 + 0x10) < 0) {
        iVar4 = *(int *)(param_1 + 0x14);
      }
      else {
        iVar4 = (int)*(short *)(param_1 + 0x10) >> 5;
      }
      iVar15 = 0;
      if (iVar13 < iVar4) {
        iVar2 = 0;
        do {
          uVar3 = FUN_1424a8030(lVar9,iVar13);
          cVar1 = FUN_1425d6eb0(*(undefined8 *)(param_1 + 0xc0),uVar3);
          if (cVar1 != '\0') {
            lVar11 = (longlong)iVar15;
            if ((short)plVar7[lVar11 * 8 + 2] < 0) {
              iVar4 = *(int *)((longlong)plVar7 + lVar11 * 0x40 + 0x14);
            }
            else {
              iVar4 = (int)(short)plVar7[lVar11 * 8 + 2] >> 5;
            }
            iVar15 = iVar15 + 1;
            FUN_1424a9610(plVar16 + lVar11 * 8,0,iVar4,lVar9,iVar2,iVar13 - iVar2);
            iVar2 = iVar13;
          }
          if (*(short *)(param_1 + 0x10) < 0) {
            iVar4 = *(int *)(param_1 + 0x14);
          }
          else {
            iVar4 = (int)*(short *)(param_1 + 0x10) >> 5;
          }
          iVar13 = (iVar13 - (uint)(uVar3 < 0x10000)) + 2;
        } while (iVar13 < iVar4);
      }
      lVar11 = (longlong)iVar15;
      if ((short)plVar7[lVar11 * 8 + 2] < 0) {
        iVar4 = *(int *)((longlong)plVar7 + lVar11 * 0x40 + 0x14);
      }
      else {
        iVar4 = (int)(short)plVar7[lVar11 * 8 + 2] >> 5;
      }
      FUN_1424a9610(plVar16 + lVar11 * 8,0,iVar4,lVar9,iVar2,iVar13 - iVar2);
      uVar8 = FUN_1424da030(lVar11 * 8 + 8);
      *(undefined8 *)(param_1 + 0x50) = uVar8;
      *(int *)(param_1 + 0x58) = iVar15 + 1;
      lVar9 = lVar11 * 4 + 4;
      uVar8 = FUN_1424da030(lVar9);
      *(undefined8 *)(param_1 + 0x60) = uVar8;
      lVar9 = FUN_1424da030(lVar9);
      *(longlong *)(param_1 + 0x68) = lVar9;
      *(int *)(param_1 + 0x70) = iVar15 + 1;
      if (((*(longlong *)(param_1 + 0x50) != 0) && (*(longlong *)(param_1 + 0x60) != 0)) &&
         (lVar9 != 0)) {
        if (-1 < iVar15) {
          lVar9 = 0;
          do {
            *(undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)(param_1 + 0x70));
        }
        if (0 < *(int *)(param_1 + 0x58)) {
          lVar9 = 0;
          lVar11 = 0;
          do {
            uVar8 = FUN_1426c2000(param_1,plVar16,*(longlong *)(param_1 + 0x60) + lVar9,param_3);
            *(undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar11 * 8) = uVar8;
            lVar11 = lVar11 + 1;
            plVar16 = plVar16 + 8;
            lVar9 = lVar9 + 4;
          } while (lVar11 < *(int *)(param_1 + 0x58));
        }
        if (*plVar7 != 0) {
          lVar9 = *plVar7 << 6;
          do {
            FUN_140859a90((longlong)plVar7 + lVar9 + -0x38);
            lVar9 = lVar9 + -0x40;
          } while (lVar9 != 0);
        }
        FUN_1424b70c0(plVar7);
        return;
      }
      *param_3 = 7;
      if (*plVar7 != 0) {
        lVar9 = *plVar7 << 6;
        do {
          FUN_140859a90((longlong)plVar7 + lVar9 + -0x38);
          lVar9 = lVar9 + -0x40;
        } while (lVar9 != 0);
      }
      FUN_1424b70c0(plVar7);
      goto LAB_1426c1db0;
    }
  }
  else {
    if (*(short *)(param_2 + 8) >> 5 != 0) goto LAB_1426c1a12;
LAB_1426c1a2e:
    uVar8 = FUN_1424da030(8);
    *(undefined8 *)(param_1 + 0x50) = uVar8;
    uVar8 = FUN_1424da030(4);
    *(undefined8 *)(param_1 + 0x60) = uVar8;
    *(undefined4 *)(param_1 + 0x58) = 1;
    puVar5 = (undefined4 *)FUN_1424da030(4);
    *(undefined4 **)(param_1 + 0x68) = puVar5;
    *(undefined4 *)(param_1 + 0x70) = 1;
    if (((*(longlong *)(param_1 + 0x50) != 0) && (*(longlong *)(param_1 + 0x60) != 0)) &&
       (puVar5 != (undefined4 *)0x0)) {
      *puVar5 = 0;
      puVar6 = (undefined8 *)thunk_FUN_1424da030();
      if (puVar6 == (undefined8 *)0x0) {
        puVar12 = (undefined8 *)0x0;
      }
      else {
        *puVar6 = 1;
        puVar12 = puVar6 + 1;
        puVar6[1] = &PTR_FUN_149e18960;
        *(undefined2 *)(puVar6 + 2) = 2;
      }
      **(undefined8 **)(param_1 + 0x50) = puVar12;
      **(undefined4 **)(param_1 + 0x60) = 1;
      if (**(longlong **)(param_1 + 0x50) != 0) {
        return;
      }
    }
  }
  *param_3 = 7;
LAB_1426c1db0:
  FUN_1426c1e00(param_1);
  return;
}



// FUNCTION 1426c1dd0 FUN_1426c1dd0 body=44 status=ok
// SIG undefined FUN_1426c1dd0(void)

void FUN_1426c1dd0(longlong param_1)

{
  FUN_1426c1e00();
  FUN_140859a90(param_1 + 0x78);
  FUN_140859a90(param_1 + 8);
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 1426c1e00 FUN_1426c1e00 body=206 status=ok
// SIG undefined FUN_1426c1e00(void)

void FUN_1426c1e00(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (lVar3 != 0) {
    iVar2 = *(int *)(param_1 + 0x58);
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + lVar3 * 8);
        if (lVar1 != 0) {
          if (*(longlong *)(lVar1 + -8) != 0) {
            lVar4 = *(longlong *)(lVar1 + -8) << 6;
            do {
              FUN_140859a90(lVar1 + -0x40 + lVar4);
              lVar4 = lVar4 + -0x40;
            } while (lVar4 != 0);
          }
          FUN_1424b70c0(lVar1 + -8);
          iVar2 = *(int *)(param_1 + 0x58);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
      lVar3 = *(longlong *)(param_1 + 0x50);
    }
    FUN_1424da110(lVar3);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1424da110();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1424da110();
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1426c1ee0 FUN_1426c1ee0 body=40 status=ok
// SIG undefined FUN_1426c1ee0(void)

void FUN_1426c1ee0(longlong param_1)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x48) = 0;
  if (0 < *(int *)(param_1 + 0x70)) {
    lVar1 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar1 * 4) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x70));
  }
  return;
}



// FUNCTION 1426c1f10 FUN_1426c1f10 body=230 status=ok
// SIG undefined FUN_1426c1f10(void)

undefined8 FUN_1426c1f10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  short sVar3;
  longlong lVar4;
  ushort uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  
  lVar1 = param_1 + 0x78;
  if (*(char *)(param_1 + 0x48) == '\0') {
    uVar5 = 2;
    if ((*(ushort *)(param_1 + 0x80) & 1) == 0) {
      uVar5 = *(ushort *)(param_1 + 0x80) & 0x1f;
    }
    *(ushort *)(param_1 + 0x80) = uVar5;
    if (0 < *(int *)(param_1 + 0x58)) {
      lVar10 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x50) + lVar10 * 8);
        lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x68) + lVar10 * 4) * 0x40;
        sVar3 = *(short *)(lVar4 + 8 + lVar6);
        if (sVar3 < 0) {
          iVar9 = *(int *)(lVar4 + 0xc + lVar6);
        }
        else {
          iVar9 = (int)sVar3 >> 5;
        }
        FUN_1424a9690(lVar1,lVar4 + lVar6,0,iVar9);
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(param_1 + 0x58));
    }
    if (0 < (int)*(uint *)(param_1 + 0x70)) {
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x70) + 1;
      do {
        uVar8 = (ulonglong)((int)uVar7 - 2);
        piVar2 = (int *)(*(longlong *)(param_1 + 0x68) + uVar8 * 4);
        *piVar2 = *piVar2 + 1;
        if (*(int *)(*(longlong *)(param_1 + 0x68) + uVar8 * 4) <
            *(int *)(*(longlong *)(param_1 + 0x60) + uVar8 * 4)) goto LAB_1426c1fe0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x68) + uVar8 * 4) = 0;
        uVar7 = uVar7 - 1;
      } while (1 < uVar7);
    }
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  else {
    FUN_1424a7130(lVar1);
  }
LAB_1426c1fe0:
  FUN_1424a6be0(param_2,lVar1);
  return param_2;
}



// FUNCTION 1426c2000 FUN_1426c2000 body=1252 status=ok
// SIG undefined FUN_1426c2000(void)

longlong * FUN_1426c2000(longlong param_1,longlong param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 local_438 [520];
  undefined1 local_230 [64];
  undefined1 local_1f0 [64];
  undefined **local_1b0;
  ushort local_1a8;
  int local_1a4;
  undefined1 *local_170;
  undefined1 local_168 [80];
  undefined1 *local_118;
  undefined1 local_110 [80];
  undefined1 *local_c0;
  undefined1 local_b8 [80];
  int *local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_170 = (undefined1 *)0x0;
  if (*param_4 < 1) {
    FUN_142502140(local_168,FUN_1424a9c90,FUN_1424a9cd0,0,param_4);
    if (*param_4 < 1) {
      local_170 = local_168;
      FUN_142502340(local_168,&LAB_1424b70f0);
      local_c0 = (undefined1 *)0x0;
      if (*param_4 < 1) {
        FUN_142502140(local_b8,FUN_1424a9c90,FUN_1424a9cd0,0,param_4);
        if (0 < *param_4) goto LAB_1426c210e;
        local_c0 = local_b8;
        FUN_142502340(local_b8,&LAB_1424b70f0);
        local_118 = (undefined1 *)0x0;
        if (0 < *param_4) goto LAB_1426c210e;
        plVar11 = (longlong *)0x0;
        FUN_142502140(local_110,FUN_1424a9c90,FUN_1424a9cd0,0,param_4);
        if (*param_4 < 1) {
          local_118 = local_110;
          FUN_142502340(local_110,&LAB_1424b70f0);
          if (*param_4 < 1) {
            local_68 = param_3;
            FUN_142502350(local_170,&LAB_1424b70f0);
            FUN_142502350(local_c0,&LAB_1424b70f0);
            FUN_142502350(local_118,&LAB_1424b70f0);
            uVar4 = FUN_1424a8350(param_2,local_438,0x100,param_4);
            FUN_1426c2af0(param_1,&local_118,local_438,uVar4,param_4);
            local_4c = 0xffffffff;
            lVar6 = FUN_1425022e0(local_118,&local_4c);
            while (lVar6 != 0) {
              FUN_1424a6be0(local_1f0,*(undefined8 *)(lVar6 + 8));
              FUN_142502f40(local_c0);
              FUN_1426c2680(local_1f0,1,&local_c0,param_4);
              local_50 = 0xffffffff;
              lVar6 = FUN_1425022e0(local_c0,&local_50);
              while (lVar6 != 0) {
                FUN_1424a6be0(local_230,*(undefined8 *)(lVar6 + 8));
                local_1b0 = &PTR_FUN_149e18960;
                local_1a8 = 2;
                (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))
                          (*(longlong **)(param_1 + 0xb8),local_230,&local_1b0,param_4);
                if ((local_1a8 & 1) == 0) {
                  iVar5 = local_1a4;
                  if (-1 < (short)local_1a8) {
                    iVar5 = (int)(short)local_1a8 >> 5;
                  }
                  uVar1 = *(ushort *)(param_2 + 8);
                  if ((short)uVar1 < 0) {
                    iVar8 = *(int *)(param_2 + 0xc);
                  }
                  else {
                    iVar8 = (int)(short)uVar1 >> 5;
                  }
                  if (((uVar1 & 1) == 0) && (iVar5 == iVar8)) {
                    bVar3 = FUN_1412ae090(&local_1b0,param_2);
                    goto joined_r0x0001426c2348;
                  }
                }
                else {
                  bVar3 = *(byte *)(param_2 + 8) & 1;
joined_r0x0001426c2348:
                  if (bVar3 != 0) {
                    local_60 = thunk_FUN_1424da030(0x40);
                    if (local_60 != 0) {
                      FUN_1424a6be0(local_60,local_230);
                    }
                    lVar6 = local_60;
                    local_58 = thunk_FUN_1424da030(0x40);
                    if (local_58 != 0) {
                      FUN_1424a6be0(local_58,local_230);
                    }
                    FUN_142502aa0(local_170,local_58,lVar6,param_4);
                  }
                }
                lVar6 = FUN_1425022e0(local_c0,&local_50);
                FUN_140859a90(&local_1b0);
                FUN_140859a90(local_230);
              }
              lVar6 = FUN_1425022e0(local_118,&local_4c);
              FUN_140859a90(local_1f0);
            }
            if (*param_4 < 1) {
              iVar5 = FUN_142502610(local_170);
              if (iVar5 == 0) {
                *param_4 = 1;
              }
              else {
                lVar10 = (longlong)iVar5;
                lVar6 = -1;
                if (-1 < iVar5) {
                  lVar6 = lVar10 * 0x40 + 8;
                }
                plVar7 = (longlong *)thunk_FUN_1424da030(lVar6);
                if (plVar7 != (longlong *)0x0) {
                  *plVar7 = lVar10;
                  plVar11 = plVar7 + 1;
                  plVar9 = plVar11;
                  do {
                    *plVar9 = (longlong)&PTR_FUN_149e18960;
                    *(undefined2 *)(plVar9 + 1) = 2;
                    plVar9 = plVar9 + 8;
                  } while (plVar9 != plVar7 + lVar10 * 8 + 1);
                  *local_68 = 0;
                  local_4c = 0xffffffff;
                  while (lVar6 = FUN_1425022e0(local_170,&local_4c), lVar6 != 0) {
                    uVar2 = *(undefined8 *)(lVar6 + 8);
                    iVar5 = *local_68;
                    *local_68 = iVar5 + 1;
                    FUN_1424a7c80(plVar11 + (longlong)iVar5 * 8,uVar2);
                  }
                  goto LAB_1426c2400;
                }
                *param_4 = 7;
              }
            }
          }
          plVar11 = (longlong *)0x0;
        }
LAB_1426c2400:
        if (local_118 != (undefined1 *)0x0) {
          FUN_142502220();
        }
      }
      else {
LAB_1426c210e:
        plVar11 = (longlong *)0x0;
      }
      if (local_c0 != (undefined1 *)0x0) {
        FUN_142502220();
      }
      goto LAB_1426c2070;
    }
  }
  plVar11 = (longlong *)0x0;
LAB_1426c2070:
  if (local_170 != (undefined1 *)0x0) {
    FUN_142502220();
  }
  return plVar11;
}



// FUNCTION 1426c2500 Unwind@1426c2500 body=58 status=ok
// SIG undefined Unwind@1426c2500(void)

void Unwind_1426c2500(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x410));
  return;
}



// FUNCTION 1426c2540 Unwind@1426c2540 body=58 status=ok
// SIG undefined Unwind@1426c2540(void)

void Unwind_1426c2540(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x408));
  return;
}



// FUNCTION 1426c2580 Unwind@1426c2580 body=70 status=ok
// SIG undefined Unwind@1426c2580(void)

void Unwind_1426c2580(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x2b8);
  FUN_140859a90(param_2 + 0x238);
  return;
}



// FUNCTION 1426c25d0 Unwind@1426c25d0 body=58 status=ok
// SIG undefined Unwind@1426c25d0(void)

void Unwind_1426c25d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x278);
  return;
}



// FUNCTION 1426c2610 Unwind@1426c2610 body=97 status=ok
// SIG undefined Unwind@1426c2610(void)

void Unwind_1426c2610(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x350) != 0) {
    FUN_142502220();
  }
  if (*(longlong *)(param_2 + 0x3a8) != 0) {
    FUN_142502220();
  }
  if (*(longlong *)(param_2 + 0x2f8) != 0) {
    FUN_142502220();
  }
  return;
}



// FUNCTION 1426c2680 FUN_1426c2680 body=746 status=ok
// SIG undefined FUN_1426c2680(void)

void FUN_1426c2680(longlong param_1,undefined4 param_2,undefined8 *param_3,int *param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int *piVar8;
  undefined1 local_100 [64];
  undefined1 *local_c0;
  undefined1 local_b8 [84];
  undefined4 local_64;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_4) {
    return;
  }
  if (*(short *)(param_1 + 8) < 0) {
    if (*(int *)(param_1 + 0xc) < 3) {
LAB_1426c274c:
      iVar7 = FUN_1424a8140(param_1,0,0x7fffffff);
      if (iVar7 < 2) {
        local_58 = thunk_FUN_1424da030(0x40);
        if (local_58 == 0) {
          *param_4 = 7;
          return;
        }
        FUN_1424a6be0(local_58,param_1);
        local_50 = thunk_FUN_1424da030(0x40);
        if (local_50 != 0) {
          FUN_1424a6be0(local_50,param_1);
        }
        FUN_142502aa0(*param_3,local_50,local_58,param_4);
        return;
      }
      if (0 < *param_4) {
        return;
      }
    }
  }
  else if (*(short *)(param_1 + 8) >> 5 < 3) goto LAB_1426c274c;
  local_c0 = (undefined1 *)0x0;
  piVar8 = param_4;
  FUN_142502140(local_b8,FUN_1424a9c90,FUN_1424a9cd0,0,param_4);
  if ((*param_4 < 1) && (local_c0 = local_b8, FUN_142502340(local_b8,&LAB_1424b70f0), *param_4 < 1))
  {
    FUN_142502350(local_c0);
    uVar6 = 0;
    do {
      if (*(short *)(param_1 + 8) < 0) {
        iVar7 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar7 = (int)*(short *)(param_1 + 8) >> 5;
      }
      if (iVar7 <= (int)uVar6) break;
      local_60 = uVar6;
      uVar2 = FUN_1424a8030(param_1);
      local_64 = 0xffffffff;
      FUN_1424a6be0(local_100,param_1);
      if ((((char)param_2 == '\0') || ((int)local_60 == 0)) ||
         (cVar1 = FUN_1425ce8a0(uVar2), cVar1 != '\0')) {
        FUN_142502f40(local_c0);
        piVar8 = (int *)((ulonglong)piVar8 & 0xffffffff00000000);
        uVar3 = FUN_1424a9130(local_100,local_60,2 - (uint)(uVar2 < 0x10000),0,piVar8,0);
        FUN_1426c2680(uVar3,param_2,&local_c0);
        if (0 < *param_4) goto LAB_1426c2950;
        while (lVar4 = FUN_1425022e0(local_c0,&local_64), lVar4 != 0) {
          lVar4 = *(longlong *)(lVar4 + 8);
          lVar5 = thunk_FUN_1424da030(0x40);
          if (lVar5 == 0) {
            *param_4 = 7;
            goto LAB_1426c2950;
          }
          local_50 = lVar5;
          FUN_1424a6c30(lVar5,uVar2);
          if (*(short *)(lVar4 + 8) < 0) {
            iVar7 = *(int *)(lVar4 + 0xc);
          }
          else {
            iVar7 = (int)*(short *)(lVar4 + 8) >> 5;
          }
          FUN_1424a9690(local_50,lVar4,0,iVar7);
          local_58 = thunk_FUN_1424da030(0x40);
          if (local_58 != 0) {
            FUN_1424a6be0(local_58,local_50);
          }
          FUN_142502aa0(*param_3,local_58);
        }
      }
      FUN_140859a90(local_100);
      uVar6 = (ulonglong)(((int)local_60 - (uint)(uVar2 < 0x10000)) + 2);
    } while( true );
  }
LAB_1426c2959:
  if (local_c0 != (undefined1 *)0x0) {
    FUN_142502220();
  }
  return;
LAB_1426c2950:
  FUN_140859a90(local_100);
  goto LAB_1426c2959;
}



// FUNCTION 1426c2970 Unwind@1426c2970 body=55 status=ok
// SIG undefined Unwind@1426c2970(void)

void Unwind_1426c2970(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xe0));
  return;
}



// FUNCTION 1426c29b0 Unwind@1426c29b0 body=55 status=ok
// SIG undefined Unwind@1426c29b0(void)

void Unwind_1426c29b0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xe8));
  return;
}



// FUNCTION 1426c29f0 Unwind@1426c29f0 body=55 status=ok
// SIG undefined Unwind@1426c29f0(void)

void Unwind_1426c29f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1426c2a30 Unwind@1426c2a30 body=60 status=ok
// SIG undefined Unwind@1426c2a30(void)

void Unwind_1426c2a30(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_142502220();
  }
  return;
}



// FUNCTION 1426c2a70 Unwind@1426c2a70 body=55 status=ok
// SIG undefined Unwind@1426c2a70(void)

void Unwind_1426c2a70(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xe8));
  return;
}



// FUNCTION 1426c2ab0 Unwind@1426c2ab0 body=55 status=ok
// SIG undefined Unwind@1426c2ab0(void)

void Unwind_1426c2ab0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xe0));
  return;
}



// FUNCTION 1426c2af0 FUN_1426c2af0 body=1112 status=ok
// SIG undefined FUN_1426c2af0(void)

undefined8 *
FUN_1426c2af0(longlong param_1,undefined8 *param_2,longlong param_3,uint param_4,int *param_5)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 in_stack_fffffffffffffd58;
  int *piVar11;
  undefined4 uVar12;
  undefined1 local_290 [200];
  undefined1 local_1c8 [64];
  undefined1 local_188 [8];
  short local_180;
  int local_17c;
  undefined1 local_148 [64];
  undefined1 local_108 [8];
  undefined4 local_100;
  undefined1 *local_c8;
  undefined1 local_c0 [80];
  longlong local_70;
  undefined4 local_68;
  uint local_64;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    FUN_1424a7000(local_148,param_3,param_4);
    local_50 = thunk_FUN_1424da030(0x40);
    if (local_50 != 0) {
      FUN_1424a6be0(local_50,local_148);
    }
    lVar6 = local_50;
    local_58 = thunk_FUN_1424da030(0x40);
    if (local_58 != 0) {
      FUN_1424a6be0(local_58,local_148);
    }
    local_70 = param_1;
    local_60 = param_3;
    FUN_142502aa0(*param_2,local_58,lVar6,param_5);
    FUN_142511900(local_290);
    local_64 = param_4;
    for (uVar10 = 0; (int)uVar10 < (int)param_4; uVar10 = (uVar10 - ((uint)local_58 < 0x10000)) + 2)
    {
      uVar1 = *(ushort *)(local_60 + (ulonglong)uVar10 * 2);
      local_58 = (ulonglong)uVar1;
      if ((uVar1 & 0xf800) == 0xd800) {
        if ((uVar1 & 0x400) == 0) {
          if ((uVar10 + 1 != param_4) &&
             (uVar2 = *(ushort *)(local_60 + (ulonglong)(uVar10 + 1) * 2), uVar5 = (uint)uVar2,
             (uVar2 & 0xfc00) == 0xdc00)) {
            uVar7 = (uint)uVar1 << 10;
LAB_1426c2caf:
            local_58 = (ulonglong)(uVar7 + uVar5 + 0xfca02400);
          }
        }
        else if ((uVar10 != 0) &&
                (uVar2 = *(ushort *)(local_60 + (ulonglong)(uVar10 - 1) * 2),
                (uVar2 & 0xfc00) == 0xd800)) {
          uVar5 = (uint)uVar2 << 10;
          uVar7 = (uint)uVar1;
          goto LAB_1426c2caf;
        }
      }
      cVar4 = FUN_1425d6ed0(*(undefined8 *)(local_70 + 0xc0),local_58,local_290);
      if (cVar4 != '\0') {
        FUN_1425ec120(local_108,local_290);
        while( true ) {
          cVar4 = FUN_1425ec210(local_108);
          uVar3 = local_100;
          uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffd58 >> 0x20);
          if (cVar4 == '\0') break;
          local_c8 = (undefined1 *)0x0;
          if (*param_5 < 1) {
            piVar11 = param_5;
            FUN_142502140(local_c0,FUN_1424a9c90,FUN_1424a9cd0,0,param_5);
            uVar12 = (undefined4)((ulonglong)piVar11 >> 0x20);
            if (*param_5 < 1) {
              local_c8 = local_c0;
              FUN_142502340(local_c8,&LAB_1424b70f0);
            }
          }
          FUN_142502350(local_c8,&LAB_1424b70f0);
          in_stack_fffffffffffffd58 = CONCAT44(uVar12,local_64);
          lVar6 = FUN_1426c3200(local_70,&local_c8,uVar3,local_60,in_stack_fffffffffffffd58,uVar10,
                                param_5);
          if (lVar6 == 0) {
            iVar8 = 5;
          }
          else {
            FUN_1424a7000(local_1c8,local_60,uVar10);
            FUN_1424a7d60(local_1c8,uVar3);
            local_68 = 0xffffffff;
            lVar6 = FUN_1425022e0(local_c8,&local_68);
            while (lVar6 != 0) {
              FUN_1424a6be0(local_188,*(undefined8 *)(lVar6 + 8));
              lVar6 = thunk_FUN_1424da030(0x40);
              if (lVar6 == 0) {
                *param_5 = 7;
                FUN_140859a90(local_188);
                iVar8 = 1;
                goto LAB_1426c2f04;
              }
              local_50 = lVar6;
              FUN_1424a6be0(lVar6,local_1c8);
              lVar6 = local_50;
              iVar8 = local_17c;
              if (-1 < local_180) {
                iVar8 = (int)local_180 >> 5;
              }
              FUN_1424a9690(local_50,local_188,0,iVar8);
              local_50 = thunk_FUN_1424da030(0x40);
              if (local_50 != 0) {
                FUN_1424a6be0(local_50,lVar6);
              }
              FUN_142502aa0(*param_2,local_50);
              lVar6 = FUN_1425022e0(local_c8,&local_68);
              FUN_140859a90(local_188);
            }
            iVar8 = 0;
LAB_1426c2f04:
            FUN_140859a90(local_1c8);
          }
          if (local_c8 != (undefined1 *)0x0) {
            FUN_142502220();
          }
          if ((iVar8 != 0) && (iVar8 != 5)) {
            FUN_1425ec1d0(local_108);
            puVar9 = (undefined8 *)0x0;
            goto LAB_1426c2f3c;
          }
        }
        FUN_1425ec1d0(local_108);
        param_4 = local_64;
      }
    }
    puVar9 = (undefined8 *)0x0;
    if (*param_5 < 1) {
      puVar9 = param_2;
    }
LAB_1426c2f3c:
    FUN_1425121d0(local_290);
    FUN_140859a90(local_148);
  }
  else {
    puVar9 = (undefined8 *)0x0;
  }
  return puVar9;
}



// FUNCTION 1426c2f80 Unwind@1426c2f80 body=58 status=ok
// SIG undefined Unwind@1426c2f80(void)

void Unwind_1426c2f80(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x140);
  return;
}



// FUNCTION 1426c2fc0 Unwind@1426c2fc0 body=58 status=ok
// SIG undefined Unwind@1426c2fc0(void)

void Unwind_1426c2fc0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x100);
  return;
}



// FUNCTION 1426c3000 Unwind@1426c3000 body=63 status=ok
// SIG undefined Unwind@1426c3000(void)

void Unwind_1426c3000(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x200) != 0) {
    FUN_142502220();
  }
  return;
}



// FUNCTION 1426c3040 Unwind@1426c3040 body=58 status=ok
// SIG undefined Unwind@1426c3040(void)

void Unwind_1426c3040(undefined8 param_1,longlong param_2)

{
  FUN_1425ec1d0(param_2 + 0x1c0);
  return;
}



// FUNCTION 1426c3080 Unwind@1426c3080 body=55 status=ok
// SIG undefined Unwind@1426c3080(void)

void Unwind_1426c3080(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x38);
  return;
}



// FUNCTION 1426c30c0 Unwind@1426c30c0 body=58 status=ok
// SIG undefined Unwind@1426c30c0(void)

void Unwind_1426c30c0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x270));
  return;
}



// FUNCTION 1426c3100 Unwind@1426c3100 body=58 status=ok
// SIG undefined Unwind@1426c3100(void)

void Unwind_1426c3100(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x278));
  return;
}



// FUNCTION 1426c3140 Unwind@1426c3140 body=58 status=ok
// SIG undefined Unwind@1426c3140(void)

void Unwind_1426c3140(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x278));
  return;
}



// FUNCTION 1426c3180 Unwind@1426c3180 body=58 status=ok
// SIG undefined Unwind@1426c3180(void)

void Unwind_1426c3180(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x278));
  return;
}



// FUNCTION 1426c31c0 Unwind@1426c31c0 body=58 status=ok
// SIG undefined Unwind@1426c31c0(void)

void Unwind_1426c31c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x180);
  return;
}



// FUNCTION 1426c3200 FUN_1426c3200 body=943 status=ok
// SIG undefined FUN_1426c3200(void)

undefined8
FUN_1426c3200(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4,int param_5,
             int param_6,int *param_7)

{
  int iVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined **local_138;
  ushort local_130;
  ushort local_12e;
  uint local_12c;
  ushort *local_120;
  undefined **local_f8;
  undefined2 local_f0;
  undefined1 local_b8 [8];
  ushort local_b0;
  undefined1 local_ae [2];
  int local_ac;
  undefined1 *local_a0;
  ulonglong local_70;
  ushort *local_68;
  uint local_5c;
  ulonglong local_58;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*param_7 < 1) {
    FUN_1424a6c30(local_b8,param_3);
    local_4c = local_ac;
    if (-1 < (short)local_b0) {
      local_4c = (int)(short)local_b0 >> 5;
    }
    local_138 = &PTR_FUN_149e18960;
    local_130 = 2;
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))
              (*(longlong **)(param_1 + 0xb8),local_b8,&local_138,param_7);
    if (*param_7 < 1) {
      if ((local_130 & 1) == 0) {
        if ((local_130 & 0x11) == 0) {
          if ((local_130 & 2) != 0) {
            local_120 = &local_12e;
          }
        }
        else {
          local_120 = (ushort *)0x0;
        }
        if (-1 < (short)local_130) {
          local_12c = (int)(short)local_130 >> 5;
        }
        uVar7 = (uint)*local_120;
        local_58 = 1;
        local_68 = local_120;
        local_5c = local_12c;
        if (((local_12c != 1) && ((uVar7 & 0xfc00) == 0xd800)) &&
           ((local_120[1] & 0xfc00) == 0xdc00)) {
          uVar7 = (uint)*local_120 * 0x400 + (uint)local_120[1] + 0xfca02400;
          local_58 = 2;
        }
        iVar8 = param_6;
        while (iVar8 < param_5) {
          iVar1 = iVar8 + 1;
          uVar2 = *(ushort *)(param_4 + (longlong)iVar8 * 2);
          uVar6 = (uint)uVar2;
          if ((((uVar2 & 0xfc00) == 0xd800) && (iVar1 != param_5)) &&
             (uVar4 = (uint)*(ushort *)(param_4 + (longlong)iVar1 * 2), (uVar4 & 0xfc00) == 0xdc00))
          {
            uVar6 = (uint)uVar2 * 0x400 + uVar4 + 0xfca02400;
            iVar1 = iVar8 + 2;
          }
          iVar8 = iVar1;
          if (uVar6 == uVar7) {
            uVar6 = (uint)local_58;
            if (uVar6 == local_5c) {
              local_58 = param_4 + (longlong)iVar8 * 2;
              FUN_1424a6cf0(local_b8,local_58,0,param_5 - iVar8);
              local_70 = local_58;
              iVar8 = local_ac;
              if (-1 < (short)local_b0) {
                iVar8 = (int)(short)local_b0 >> 5;
              }
              if (local_4c == iVar8) {
                puVar5 = (undefined8 *)thunk_FUN_1424da030(0x40);
                if (puVar5 != (undefined8 *)0x0) {
                  *puVar5 = &PTR_FUN_149e18960;
                  *(undefined2 *)(puVar5 + 1) = 2;
                }
                local_f8 = &PTR_FUN_149e18960;
                local_f0 = 2;
                FUN_142534fd0(param_2,&local_f8,puVar5,param_7);
              }
              else {
                local_f8 = &PTR_FUN_149e18960;
                local_f0 = 2;
                (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))
                          (*(longlong **)(param_1 + 0xb8),local_b8,&local_f8,param_7);
                if ((*param_7 < 1) &&
                   (cVar3 = FUN_1424c19f0(&local_f8,param_4 + (longlong)param_6 * 2,
                                          param_5 - param_6), cVar3 == '\0')) {
                  if (-1 < (short)local_b0) {
                    local_ac = (int)(short)local_b0 >> 5;
                  }
                  if (((int)(short)local_b0 & 0x11U) == 0) {
                    if ((local_b0 & 2) != 0) {
                      local_a0 = local_ae;
                    }
                  }
                  else {
                    local_a0 = (undefined1 *)0x0;
                  }
                  param_2 = FUN_1426c2af0(param_1,param_2,local_a0 + (longlong)local_4c * 2,
                                          local_ac - local_4c,param_7);
                }
                else {
                  param_2 = 0;
                }
              }
              FUN_140859a90(&local_f8);
              goto LAB_1426c32bd;
            }
            uVar4 = uVar6 + 1;
            local_58 = (ulonglong)uVar4;
            uVar7 = (uint)local_68[(int)uVar6];
            if ((((uVar7 & 0xfc00) == 0xd800) && (uVar4 != local_5c)) &&
               ((local_68[(int)uVar4] & 0xfc00) == 0xdc00)) {
              local_58 = (ulonglong)(uVar6 + 2);
              uVar7 = uVar7 * 0x400 + (uint)local_68[(int)uVar4] + 0xfca02400;
            }
          }
          else {
            FUN_1424a7d60(local_b8);
          }
        }
      }
      else {
        *param_7 = 7;
      }
    }
    param_2 = 0;
LAB_1426c32bd:
    FUN_140859a90(&local_138);
    FUN_140859a90(local_b8);
  }
  else {
    param_2 = 0;
  }
  return param_2;
}



// FUNCTION 1426c35c0 Unwind@1426c35c0 body=55 status=ok
// SIG undefined Unwind@1426c35c0(void)

void Unwind_1426c35c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 1426c3600 Unwind@1426c3600 body=55 status=ok
// SIG undefined Unwind@1426c3600(void)

void Unwind_1426c3600(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 1426c3640 Unwind@1426c3640 body=56 status=ok
// SIG undefined Unwind@1426c3640(void)

void Unwind_1426c3640(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0xf0) = *(undefined8 *)(param_2 + 0x110);
  return;
}



// FUNCTION 1426c3680 Unwind@1426c3680 body=64 status=ok
// SIG undefined Unwind@1426c3680(void)

void Unwind_1426c3680(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  FUN_140859a90(param_2 + 0xb0);
  return;
}



// FUNCTION 1426c36c0 FUN_1426c36c0 body=64 status=ok
// SIG undefined FUN_1426c36c0(void)

longlong FUN_1426c36c0(longlong param_1,int param_2)

{
  FUN_1426c1e00();
  FUN_140859a90(param_1 + 0x78);
  FUN_140859a90(param_1 + 8);
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}


