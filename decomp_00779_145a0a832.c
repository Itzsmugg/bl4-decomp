// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145a0a832 FUN_145a0a832 body=36 status=ok
// SIG undefined FUN_145a0a832(void)

undefined8 FUN_145a0a832(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a0a862 FUN_145a0a862 body=36 status=ok
// SIG undefined FUN_145a0a862(void)

undefined8 FUN_145a0a862(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a0a892 FUN_145a0a892 body=36 status=ok
// SIG undefined FUN_145a0a892(void)

undefined8 FUN_145a0a892(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a0a8c2 FUN_145a0a8c2 body=36 status=ok
// SIG undefined FUN_145a0a8c2(void)

undefined8 FUN_145a0a8c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a0a8f2 FUN_145a0a8f2 body=36 status=ok
// SIG undefined FUN_145a0a8f2(void)

undefined8 FUN_145a0a8f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a0a922 FUN_145a0a922 body=36 status=ok
// SIG undefined FUN_145a0a922(void)

undefined8 FUN_145a0a922(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a0a952 FUN_145a0a952 body=36 status=ok
// SIG undefined FUN_145a0a952(void)

undefined8 FUN_145a0a952(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a0a982 FUN_145a0a982 body=36 status=ok
// SIG undefined FUN_145a0a982(void)

undefined8 FUN_145a0a982(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a0a9b2 FUN_145a0a9b2 body=36 status=ok
// SIG undefined FUN_145a0a9b2(void)

undefined8 FUN_145a0a9b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a0a9e2 FUN_145a0a9e2 body=36 status=ok
// SIG undefined FUN_145a0a9e2(void)

undefined8 FUN_145a0a9e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a0aa12 FUN_145a0aa12 body=37 status=ok
// SIG undefined FUN_145a0aa12(void)

void FUN_145a0aa12(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  *puVar1 = &PTR_FUN_14bead7f0;
  puVar1[1] = 0;
  return;
}



// FUNCTION 145a0aa38 FUN_145a0aa38 body=31 status=ok
// SIG undefined FUN_145a0aa38(void)

undefined1
FUN_145a0aa38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_145a0aa58(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 145a0aa58 FUN_145a0aa58 body=425 status=ok
// SIG undefined FUN_145a0aa58(void)

ulonglong FUN_145a0aa58(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*param_1 != *param_2) || ((char)param_1[1] != (char)param_2[1])) goto LAB_145a0abf0;
  if (param_1[9] == 0) {
    uVar6 = FUN_14016979c();
    lVar8 = FUN_14477b664(uVar6);
    param_1[9] = lVar8;
  }
  lVar8 = param_2[9];
  if (lVar8 == 0) {
    lVar8 = FUN_14016979c();
  }
  lVar2 = param_2[8];
  uVar6 = FUN_14477b664(lVar8);
  local_48 = lVar2;
  uVar4 = FUN_144a7891a(uVar6);
  local_50 = param_1[8];
  lVar8 = param_1[9];
  uVar5 = FUN_144a7891a(lVar8);
  local_68 = uVar6;
  local_60 = &local_48;
  cVar3 = FUN_144a789b8(uVar5,lVar8,&local_50,uVar4);
  if (cVar3 == '\0') goto LAB_145a0abf0;
  bVar1 = *(byte *)(param_1 + 1);
  if (4 < (ulonglong)bVar1) goto LAB_145a0abf0;
  switch(bVar1) {
  case 0:
    uVar7 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
    bVar9 = *(uint *)((longlong)param_1 + 0xc) == *(uint *)((longlong)param_2 + 0xc);
    break;
  case 1:
    bVar9 = *(float *)(param_2 + 2) == *(float *)(param_1 + 2);
LAB_145a0ab31:
    uVar7 = (ulonglong)(-(uint)bVar9 & 1);
    goto LAB_145a0ab34;
  case 2:
    if (((double)param_1[3] == (double)param_2[3]) &&
       (!NAN((double)param_1[3]) && !NAN((double)param_2[3]))) {
      if (((double)param_1[4] == (double)param_2[4]) &&
         (!NAN((double)param_1[4]) && !NAN((double)param_2[4]))) {
        bVar9 = (double)param_2[5] == (double)param_1[5];
        goto LAB_145a0ab31;
      }
    }
    goto LAB_145a0abf0;
  case 3:
    if ((*(float *)(param_1 + 6) == *(float *)(param_2 + 6)) &&
       (!NAN(*(float *)(param_1 + 6)) && !NAN(*(float *)(param_2 + 6)))) {
      if ((*(float *)((longlong)param_1 + 0x34) == *(float *)((longlong)param_2 + 0x34)) &&
         (!NAN(*(float *)((longlong)param_1 + 0x34)) && !NAN(*(float *)((longlong)param_2 + 0x34))))
      {
        if ((*(float *)(param_1 + 7) == *(float *)(param_2 + 7)) &&
           (!NAN(*(float *)(param_1 + 7)) && !NAN(*(float *)(param_2 + 7)))) {
          bVar9 = *(float *)((longlong)param_2 + 0x3c) == *(float *)((longlong)param_1 + 0x3c);
          goto LAB_145a0ab31;
        }
      }
    }
LAB_145a0abf0:
    uVar7 = 0;
    goto LAB_145a0ab34;
  case 4:
    uVar7 = CONCAT71((int7)((ulonglong)
                            ((longlong)&switchD_145a0ab20::switchdataD_14a1cc978 +
                            (longlong)(int)(&switchD_145a0ab20::switchdataD_14a1cc978)[bVar1]) >> 8)
                     ,*(char *)((longlong)param_1 + 9));
    bVar9 = *(char *)((longlong)param_1 + 9) == *(char *)((longlong)param_2 + 9);
  }
  uVar7 = CONCAT71((int7)(uVar7 >> 8),bVar9);
LAB_145a0ab34:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 145a0ac02 FUN_145a0ac02 body=349 status=ok
// SIG undefined FUN_145a0ac02(void)

void FUN_145a0ac02(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [44];
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  local_28 = 0xf00000d0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar2 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145a0ad60(puVar2,local_38,local_3c != 0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0ad60 FUN_145a0ad60 body=251 status=ok
// SIG undefined FUN_145a0ad60(void)

void FUN_145a0ad60(undefined8 param_1,undefined8 param_2,uint param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined1 local_88 [40];
  undefined4 local_60;
  uint local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar3 = &local_58;
  local_40 = 4;
  local_58 = param_3 & 0xff;
  local_38 = 1;
  local_b8[0] = 0;
  local_90 = 0;
  FUN_1456bb102(local_b8);
  local_88[0] = 0;
  local_60 = 0;
  uVar2 = FUN_144873cc0(param_1);
  FUN_140e4698e(uVar2,local_b8,puVar3);
  FUN_144a5ac3a(local_88);
  FUN_144a5ac3a(local_b8);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_40) {
      puVar3 = (uint *)CONCAT44(uStack_54,local_58);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(CONCAT44(uStack_54,local_58));
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0ae68 FUN_145a0ae68 body=245 status=ok
// SIG undefined FUN_145a0ae68(void)

undefined8 * FUN_145a0ae68(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145a0b12e();
  *param_1 = &PTR_FUN_14b7dc250;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined2 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined8 *)((longlong)param_1 + 900) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  FUN_145a0af5e(param_1 + 8,&local_20,param_1);
  param_1[0x5a] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0af5e FUN_145a0af5e body=244 status=ok
// SIG undefined FUN_145a0af5e(void)

undefined8 FUN_145a0af5e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14b3fdf50;
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
  *local_38 = &PTR_FUN_14b9dce90;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &DAT_1458e88d0;
  FUN_145a0b054(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0b054 FUN_145a0b054 body=216 status=ok
// SIG undefined FUN_145a0b054(void)

undefined8 * FUN_145a0b054(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145a0b12e FUN_145a0b12e body=450 status=ok
// SIG undefined FUN_145a0b12e(void)

undefined8 * FUN_145a0b12e(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b1e8c40;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x200000000;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0xfffffffe;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 1;
  param_1[0x4a] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x4b] = &DAT_100000010;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x52) = 2;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x55) = 2;
  *(undefined4 *)((longlong)param_1 + 700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x58] = 2;
  return param_1;
}



// FUNCTION 145a0b2f0 FUN_145a0b2f0 body=120 status=ok
// SIG undefined FUN_145a0b2f0(void)

longlong FUN_145a0b2f0(longlong param_1,longlong param_2)

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
    FUN_145a0b368(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145a0b368 FUN_145a0b368 body=121 status=ok
// SIG undefined FUN_145a0b368(void)

undefined8 * FUN_145a0b368(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14130b458(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14055df60(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x28);
    }
  }
  return param_1;
}



// FUNCTION 145a0b3ec FUN_145a0b3ec body=181 status=ok
// SIG undefined FUN_145a0b3ec(void)

undefined8 * FUN_145a0b3ec(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a71eeb0;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"NewReflectionComponent",1);
  uVar1 = FUN_145898b94();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x72] = lVar2;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 0x10;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0b4a2 FUN_145a0b4a2 body=40 status=ok
// SIG undefined FUN_145a0b4a2(void)

undefined8 FUN_145a0b4a2(undefined8 param_1,int param_2)

{
  FUN_145a0b4ca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a0b4ca FUN_145a0b4ca body=90 status=ok
// SIG undefined FUN_145a0b4ca(void)

void FUN_145a0b4ca(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b00b3d0;
  param_1[5] = &PTR_FUN_14b00b9b0;
  param_1[6] = &PTR_LAB_14b00b9f0;
  FUN_145a0b524(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 145a0b524 FUN_145a0b524 body=63 status=ok
// SIG undefined FUN_145a0b524(void)

void FUN_145a0b524(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x48);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-6] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145a0b572 FUN_145a0b572 body=40 status=ok
// SIG undefined FUN_145a0b572(void)

undefined8 FUN_145a0b572(undefined8 param_1,int param_2)

{
  FUN_145a0b59a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a0b59a FUN_145a0b59a body=139 status=ok
// SIG undefined FUN_145a0b59a(void)

void FUN_145a0b59a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6fa120;
  if (param_1[0xa8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa3] != 0) {
    FUN_1400020a8();
  }
  if ((param_1[0x9f] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x9f] + 0x50));
  }
  if (param_1[0x92] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x90] != 0) {
    FUN_1400020a8();
  }
  FUN_14075380c(param_1);
  return;
}



// FUNCTION 145a0b626 FUN_145a0b626 body=223 status=ok
// SIG undefined FUN_145a0b626(void)

void FUN_145a0b626(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_145a0b706(&local_30,local_20);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0b706 FUN_145a0b706 body=180 status=ok
// SIG undefined FUN_145a0b706(void)

undefined8 * FUN_145a0b706(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
LAB_145a0b729:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  lVar1 = FUN_144a6c4d8();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      != lVar1 + 0x30)) {
    lVar1 = FUN_144a78d6a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_145a0b7bc(param_2,param_1);
      goto LAB_145a0b729;
    }
  }
  local_20 = *(undefined8 *)(param_2 + 0x18);
  FUN_1400021e4(&local_20,param_1);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145a0b7bc FUN_145a0b7bc body=306 status=ok
// SIG undefined FUN_145a0b7bc(void)

undefined8 FUN_145a0b7bc(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[0x15];
  local_40[0] = param_1[3];
  FUN_1400021e4(local_40,local_30);
  if (lVar1 == 0) {
    FUN_140056680(local_50,&DAT_149e01fe8);
  }
  else {
    local_40[0] = *(longlong *)(lVar1 + 0x18);
    FUN_1400021e4(local_40,local_50);
  }
  FUN_144a882a8(local_40,local_50,&DAT_149e0635c);
  FUN_1401c7f3e(param_2,local_40,local_30);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  lVar1 = (**(code **)(*param_1 + 0x400))(param_1);
  if (lVar1 != 0) {
    FUN_1400020e8(param_2,&DAT_149e001d8,1);
    local_30[0] = *(longlong *)(lVar1 + 0x18);
    FUN_140180cec(local_30,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0b8f0 FUN_145a0b8f0 body=40 status=ok
// SIG undefined FUN_145a0b8f0(void)

undefined8 FUN_145a0b8f0(undefined8 param_1,int param_2)

{
  FUN_145a0b918();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a0b918 FUN_145a0b918 body=129 status=ok
// SIG undefined FUN_145a0b918(void)

void FUN_145a0b918(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae8e240;
  param_1[5] = &PTR_FUN_14ae8edc0;
  param_1[6] = &PTR_LAB_14ae8ee00;
  param_1[0x55] = &PTR_FUN_14ae8ee50;
  param_1[0x56] = &PTR_FUN_14ae8eed0;
  param_1[0x57] = &PTR_FUN_14ae8eee0;
  if (param_1[0x338] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x336] != 0) {
    FUN_1400020a8();
  }
  FUN_140bb64c8(param_1);
  return;
}



// FUNCTION 145a0b9a0 FUN_145a0b9a0 body=235 status=ok
// SIG undefined FUN_145a0b9a0(void)

void FUN_145a0b9a0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [3];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = 0;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,0);
  FUN_140f67fee(uVar2,&local_50);
  local_68[0] = 0;
  local_68[1] = 0;
  plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  local_40 = 0;
  local_48 = 0;
  (**(code **)(*plVar3 + 0x1c8))(plVar3,&local_48,&local_40);
  FUN_1409ee323(local_48,local_40,local_68);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),&local_50,local_68);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0baa8 FUN_145a0baa8 body=40 status=ok
// SIG undefined FUN_145a0baa8(void)

undefined8 FUN_145a0baa8(undefined8 param_1,int param_2)

{
  FUN_145a0bad0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a0bad0 FUN_145a0bad0 body=69 status=ok
// SIG undefined FUN_145a0bad0(void)

void FUN_145a0bad0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7fd950;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_145a0bb16(param_1);
  return;
}



// FUNCTION 145a0bb16 FUN_145a0bb16 body=119 status=ok
// SIG undefined FUN_145a0bb16(void)

void FUN_145a0bb16(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ab64e60;
  FUN_145862306(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145a0bb8e FUN_145a0bb8e body=156 status=ok
// SIG undefined FUN_145a0bb8e(void)

void FUN_145a0bb8e(undefined8 param_1,longlong param_2)

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
  FUN_145a0bc2c(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0bc2c FUN_145a0bc2c body=206 status=ok
// SIG undefined FUN_145a0bc2c(void)

void FUN_145a0bc2c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  cVar2 = (**(code **)(*param_1 + 0x700))();
  if (cVar2 != '\0') {
    lVar1 = param_1[0x78];
    if (lVar1 != 0) {
      lVar3 = FUN_144a5dd5e();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        FUN_140eeb04a(lVar1,param_2);
        if (param_2 == (longlong *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(*param_2 + 0x860))(param_2);
        }
        FUN_140ee9c88(lVar1,uVar4);
      }
    }
    plVar5 = param_1 + 0x4aa;
    *(int *)plVar5 = (int)*plVar5 + -1;
    if ((int)*plVar5 == 0) {
      if ((0 < (int)param_1[0x469]) && ((*(byte *)(param_1[0x468] + 0x60) & 1) != 0)) {
        FUN_140dc8f42(param_1 + 0x454,0);
      }
      plVar5 = param_1 + 0xa3;
      cVar2 = (**(code **)(param_1[0xa3] + 0x58))(plVar5);
      if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000145a0bcf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x78))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145a0bcfa FUN_145a0bcfa body=20 status=ok
// SIG undefined FUN_145a0bcfa(void)

undefined8 FUN_145a0bcfa(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 145a0bd0e FUN_145a0bd0e body=331 status=ok
// SIG undefined FUN_145a0bd0e(void)

void FUN_145a0bd0e(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145a0be5a(param_1 + 0x300,local_20);
  if (*(int *)(param_1 + 0x350) != 2) {
    FUN_1446efa72((longlong *)(param_1 + 0x348),0,2,0x10);
    *(undefined4 *)(param_1 + 0x350) = 2;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x348);
  *puVar1 = &PTR_LAB_14b4326c0;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14b432650;
  puVar1[3] = FUN_146008df6;
  if (*(int *)(param_1 + 0x360) != 2) {
    FUN_1446efa72((longlong *)(param_1 + 0x358),0,2,0x10);
    *(undefined4 *)(param_1 + 0x360) = 2;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x358);
  *puVar1 = &PTR_LAB_14b4327a0;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14b432730;
  puVar1[3] = FUN_145891f92;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0be5a FUN_145a0be5a body=215 status=ok
// SIG undefined FUN_145a0be5a(void)

undefined8 FUN_145a0be5a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14b4325e0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14b432570;
  local_30[3] = FUN_1459ce033;
  FUN_145a0bf32(param_1,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0bf32 FUN_145a0bf32 body=216 status=ok
// SIG undefined FUN_145a0bf32(void)

undefined8 * FUN_145a0bf32(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145a0c01c FUN_145a0c01c body=132 status=ok
// SIG undefined FUN_145a0c01c(void)

void FUN_145a0c01c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_1;
  uVar1 = FUN_14001cc68(0x2a0,0x10);
  FUN_145a0c0a2(uVar1,param_1);
  local_30 = &local_38;
  FUN_145a0c1bc(&local_24);
  *(undefined8 *)(DAT_14cacd608 + 8 + (longlong)local_24 * 0x18) = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0c0a2 FUN_145a0c0a2 body=281 status=ok
// SIG undefined FUN_145a0c0a2(void)

undefined8 * FUN_145a0c0a2(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  
  FUN_1409e1656();
  *param_1 = &PTR_FUN_14a7da480;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0x400000000;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(undefined2 *)(param_1 + 0x4b) = 0;
  bVar1 = *(byte *)((longlong)param_1 + 0x25a) & 0x80;
  *(byte *)((longlong)param_1 + 0x25a) = bVar1 + 8;
  *(undefined1 *)((longlong)param_1 + 0x25b) = 1;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4a] = &PTR_FUN_14a7df1b0;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  param_1[0x52] = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  if (param_2 != 0) {
    *(undefined2 *)(param_1 + 0x4b) = 0x500;
    *(byte *)((longlong)param_1 + 0x25a) = bVar1 | 0xe;
    param_1[0x4f] = param_1;
    FUN_1402eb876(param_1 + 0x4a,*(undefined8 *)(param_2 + 0x30));
    FUN_14485c47a((longlong)param_1 + 0x284,param_2);
  }
  return param_1;
}



// FUNCTION 145a0c1bc FUN_145a0c1bc body=336 status=ok
// SIG undefined FUN_145a0c1bc(void)

undefined4 * FUN_145a0c1bc(undefined4 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145a0c3a4(local_40);
  uVar7 = *(ulonglong *)*param_2;
  *local_38 = uVar7;
  local_38[1] = 0;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_145a0c30e(uVar4,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar5 = DAT_14cacd610 - DAT_14cacd63c;
    iVar8 = 1;
    if (3 < uVar5) {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= DAT_14cacd650)) {
      uVar4 = DAT_14cacd650 - 1U & uVar4;
      *(uint *)((longlong)local_38 + 0x14) = uVar4;
      puVar6 = DAT_14cacd648;
      if (DAT_14cacd648 == (undefined *)0x0) {
        puVar6 = &DAT_14cacd640;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar6 + ((longlong)DAT_14cacd650 - 1U & (longlong)(int)uVar4) * 4);
      puVar6 = DAT_14cacd648;
      if (DAT_14cacd648 == (undefined *)0x0) {
        puVar6 = &DAT_14cacd640;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14cacd650 - 1U & (longlong)(int)uVar4) * 4) = local_44
      ;
    }
    else {
      DAT_14cacd650 = iVar8;
      FUN_14144b8e6();
    }
  }
  *param_1 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0c30e FUN_145a0c30e body=150 status=ok
// SIG undefined FUN_145a0c30e(void)

undefined8 FUN_145a0c30e(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cacd610 - DAT_14cacd63c != 1) && (DAT_14cacd610 != DAT_14cacd63c)) {
    puVar6 = &DAT_14cacd640;
    if (DAT_14cacd648 != (undefined *)0x0) {
      puVar6 = DAT_14cacd648;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cacd650 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cacd608 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_14585e486(&DAT_14cacd608,*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 145a0c3a4 FUN_145a0c3a4 body=279 status=ok
// SIG undefined FUN_145a0c3a4(void)

int * FUN_145a0c3a4(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cacd638;
  iVar3 = DAT_14cacd610;
  if (DAT_14cacd63c == 0) {
    iVar2 = DAT_14cacd610 + 1;
    bVar7 = DAT_14cacd614 == DAT_14cacd610;
    DAT_14cacd610 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cacd608,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cacd618,1);
    puVar4 = DAT_14cacd628;
    if (DAT_14cacd628 == (undefined *)0x0) {
      puVar4 = &DAT_14cacd618;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cacd638;
    DAT_14cacd638 = *(int *)(DAT_14cacd608 + 4 + lVar6 * 0x18);
    DAT_14cacd63c = DAT_14cacd63c + -1;
    if (DAT_14cacd63c != 0) {
      *(undefined4 *)(DAT_14cacd608 + (longlong)DAT_14cacd638 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cacd618;
  if (DAT_14cacd628 != (undefined *)0x0) {
    puVar4 = DAT_14cacd628;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cacd608;
  return param_1;
}



// FUNCTION 145a0c4bc FUN_145a0c4bc body=90 status=ok
// SIG undefined FUN_145a0c4bc(void)

void FUN_145a0c4bc(longlong param_1)

{
  FUN_145a0c516(param_1,0);
  FUN_145a0c516(param_1 + 0x50,0);
  FUN_145a0c516(param_1 + 0xa0,0);
  FUN_145a0c5ee(param_1 + 0x140,0);
  FUN_145a0c582(param_1 + 400,0);
  FUN_145a0c65a(param_1 + 0x1e0,0);
  return;
}



// FUNCTION 145a0c516 FUN_145a0c516 body=107 status=ok
// SIG undefined FUN_145a0c516(void)

void FUN_145a0c516(longlong param_1,uint param_2)

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
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145a0c565:
      FUN_141355ae4(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_140ae3646(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145a0c565;
  FUN_145a0c6c6(param_1);
  FUN_141355ae4(param_1,param_2);
  return;
}



// FUNCTION 145a0c582 FUN_145a0c582 body=107 status=ok
// SIG undefined FUN_145a0c582(void)

void FUN_145a0c582(longlong param_1,uint param_2)

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
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145a0c5d1:
      FUN_145919d8e(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_147be1eb4(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145a0c5d1;
  FUN_145a0c80e(param_1);
  FUN_145919d8e(param_1,param_2);
  return;
}



// FUNCTION 145a0c5ee FUN_145a0c5ee body=107 status=ok
// SIG undefined FUN_145a0c5ee(void)

void FUN_145a0c5ee(longlong param_1,uint param_2)

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
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145a0c63d:
      FUN_145919d12(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1456e7908(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145a0c63d;
  FUN_145a0c962(param_1);
  FUN_145919d12(param_1,param_2);
  return;
}



// FUNCTION 145a0c65a FUN_145a0c65a body=107 status=ok
// SIG undefined FUN_145a0c65a(void)

void FUN_145a0c65a(longlong param_1,uint param_2)

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
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145a0c6a9:
      FUN_145919f34(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_147be16bc(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145a0c6a9;
  FUN_145a0caaa(param_1);
  FUN_145919f34(param_1,param_2);
  return;
}



// FUNCTION 145a0c6c6 FUN_145a0c6c6 body=327 status=ok
// SIG undefined FUN_145a0c6c6(void)

void FUN_145a0c6c6(longlong *param_1)

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



// FUNCTION 145a0c80e FUN_145a0c80e body=339 status=ok
// SIG undefined FUN_145a0c80e(void)

void FUN_145a0c80e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
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



// FUNCTION 145a0c962 FUN_145a0c962 body=327 status=ok
// SIG undefined FUN_145a0c962(void)

void FUN_145a0c962(longlong *param_1)

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



// FUNCTION 145a0caaa FUN_145a0caaa body=339 status=ok
// SIG undefined FUN_145a0caaa(void)

void FUN_145a0caaa(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
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



// FUNCTION 145a0cbfe FUN_145a0cbfe body=169 status=ok
// SIG undefined FUN_145a0cbfe(void)

bool FUN_145a0cbfe(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 145a0cca8 FUN_145a0cca8 body=36 status=ok
// SIG undefined FUN_145a0cca8(void)

void FUN_145a0cca8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14133a8ca(param_1 + 0x80,param_3);
  *(undefined1 *)(param_1 + 0x141) = 1;
  return;
}



// FUNCTION 145a0cccc FUN_145a0cccc body=279 status=ok
// SIG undefined FUN_145a0cccc(void)

undefined4 * FUN_145a0cccc(longlong param_1,undefined4 *param_2,undefined8 param_3)

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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145a0d104(param_1,local_48);
  FUN_145a0cde4(param_3,local_40);
  local_40[0x16] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  cVar2 = FUN_145a0d046(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[0x17] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[0x16] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145a0d1f0(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0cde4 FUN_145a0cde4 body=149 status=ok
// SIG undefined FUN_145a0cde4(void)

undefined4 * FUN_145a0cde4(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  *param_2 = *(undefined4 *)*param_1;
  FUN_145a0cf32(param_2 + 2,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_145a0ce7a(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0ce7a FUN_145a0ce7a body=55 status=ok
// SIG undefined FUN_145a0ce7a(void)

void FUN_145a0ce7a(longlong *param_1)

{
  FUN_145a0ceb2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a0ceb2 FUN_145a0ceb2 body=127 status=ok
// SIG undefined FUN_145a0ceb2(void)

void FUN_145a0ceb2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((int)uVar2 <= *(int *)(param_1 + 0x2c) && *(int *)(param_1 + 0x2c) < 0x81) {
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



// FUNCTION 145a0cf32 FUN_145a0cf32 body=125 status=ok
// SIG undefined FUN_145a0cf32(void)

undefined8 * FUN_145a0cf32(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145a0cfb0();
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



// FUNCTION 145a0cfb0 FUN_145a0cfb0 body=150 status=ok
// SIG undefined FUN_145a0cfb0(void)

longlong * FUN_145a0cfb0(longlong *param_1,longlong *param_2)

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



// FUNCTION 145a0d046 FUN_145a0d046 body=189 status=ok
// SIG undefined FUN_145a0d046(void)

undefined8 FUN_145a0d046(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_145a0ce7a((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_145bf4ebc(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145a0d104 FUN_145a0d104 body=235 status=ok
// SIG undefined FUN_145a0d104(void)

int * FUN_145a0d104(longlong *param_1,int *param_2)

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



// FUNCTION 145a0d1f0 FUN_145a0d1f0 body=432 status=ok
// SIG undefined FUN_145a0d1f0(void)

void FUN_145a0d1f0(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 145a0d3a1 FUN_145a0d3a1 body=35 status=ok
// SIG undefined FUN_145a0d3a1(void)

void FUN_145a0d3a1(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a0d3c4(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad5f0c0;
  return;
}



// FUNCTION 145a0d3c4 FUN_145a0d3c4 body=62 status=ok
// SIG undefined FUN_145a0d3c4(void)

undefined8 * FUN_145a0d3c4(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14adae1f0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 1;
  *(undefined1 *)((longlong)param_1 + 0x3a) = 3;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_144a78564(param_1 + 10);
  return param_1;
}



// FUNCTION 145a0d410 FUN_145a0d410 body=40 status=ok
// SIG undefined FUN_145a0d410(void)

undefined8 FUN_145a0d410(undefined8 param_1,int param_2)

{
  FUN_145a0d438();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a0d438 FUN_145a0d438 body=237 status=ok
// SIG undefined FUN_145a0d438(void)

void FUN_145a0d438(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b66ae10;
  if (param_1[0xae] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x98] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  FUN_14051f4c4(param_1 + 0x62);
  FUN_14051f4c4(param_1 + 0x4c);
  FUN_14051f4c4(param_1 + 0x35);
  FUN_14051f4c4(param_1 + 0x1f);
  FUN_14051f4c4(param_1 + 9);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145a0d526 FUN_145a0d526 body=188 status=ok
// SIG undefined FUN_145a0d526(void)

bool FUN_145a0d526(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
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



// FUNCTION 145a0d5e4 FUN_145a0d5e4 body=199 status=ok
// SIG undefined FUN_145a0d5e4(void)

void FUN_145a0d5e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0xffff;
  lVar2 = FUN_140b9fe48(0,param_3);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x8a) == '\0') {
      FUN_141683dd2(param_1,&local_48,lVar2,*(undefined4 *)(lVar2 + 0x30));
    }
    else {
      iVar1 = FUN_1402d8968(param_2,param_3);
      FUN_145a0d6ac(param_1,lVar2,&local_48,iVar1);
      if (iVar1 == 0xb) {
        *(undefined8 *)(lVar2 + 0x150) = 0;
        *param_5 = 1;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0d6ac FUN_145a0d6ac body=730 status=ok
// SIG undefined FUN_145a0d6ac(void)

void FUN_145a0d6ac(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_108 [39];
  undefined1 local_e1;
  longlong *local_e0;
  undefined4 local_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98 [2];
  undefined1 local_88 [24];
  int local_70;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(longlong *)(param_2 + 0x38) != 0) && (*(int *)(param_2 + 300) < *(int *)(param_2 + 0x100)))
  {
    DAT_14cb8dc18 = 1;
    if ((*(int *)(param_2 + 0x2c) == 0) &&
       ((*(longlong *)(param_3 + 8) != 0 &&
        (cVar5 = FUN_14573acc6(*(longlong *)(param_3 + 8),param_3 + 0x18), cVar5 != '\0')))) {
      DAT_14cb8dc18 = 0;
    }
    FUN_145a0d988(local_98,param_2 + 0xf8);
    local_e1 = *(undefined1 *)(param_2 + 0x148);
    *(undefined1 *)(param_2 + 0x148) = 1;
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    uStack_a0 = 0;
    uStack_b0 = local_88;
    if (local_70 == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_b8);
      iVar8 = local_70;
    }
    uStack_c0 = CONCAT44(uStack_9c,uStack_a0);
    local_c8 = local_a8;
    uVar4 = local_c8;
    local_d8 = (undefined4)local_b8;
    uStack_d4 = local_b8._4_4_;
    uStack_d0 = (undefined4)uStack_b0;
    uStack_cc = uStack_b0._4_4_;
    local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    local_e0 = local_98;
    if ((local_c8._4_4_ != iVar8) || (uStack_b0 != local_88)) {
      iVar6 = local_c8._4_4_;
      local_c8 = uVar4;
      do {
        uVar2 = *(uint *)(*local_e0 + (longlong)iVar6 * 0x30);
        if ((((uVar2 != 0) && (*(int *)(*local_e0 + (longlong)iVar6 * 0x30 + 4) != 0)) &&
            (uVar2 != DAT_14c948000)) &&
           (lVar3 = *(longlong *)(param_2 + 0x38), *(int *)(lVar3 + 0x60) != *(int *)(lVar3 + 0x8c))
           ) {
          lVar7 = lVar3 + 0x90;
          if (*(longlong *)(lVar3 + 0x98) != 0) {
            lVar7 = *(longlong *)(lVar3 + 0x98);
          }
          iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar3 + 0xa0) - 1U & uVar2) * 4);
          if (iVar6 != -1) {
            do {
              lVar7 = *(longlong *)(lVar3 + 0x58) + (longlong)iVar6 * 0x38;
              if (*(uint *)(*(longlong *)(lVar3 + 0x58) + (longlong)iVar6 * 0x38) == uVar2) {
                if ((lVar7 != 0) && ((ushort *)(lVar7 + 0x28) != (ushort *)0x0)) {
                  uVar1 = *(ushort *)(lVar7 + 0x28);
                  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 200))) {
                    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)uVar1 * 8);
                    if (param_4 < *(uint *)(lVar3 + 0xf0)) {
                      FUN_1458f0160(param_1,param_2,lVar3 + 0x50);
                    }
                    else {
                      FUN_145a0da06(param_1,lVar3,param_3,param_2);
                    }
                  }
                }
                break;
              }
              iVar6 = *(int *)(lVar7 + 0x30);
            } while (iVar6 != -1);
          }
        }
        local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~uStack_d4);
        FUN_1449c0562(&local_d8);
        iVar6 = local_c8._4_4_;
        uVar4 = local_c8;
      } while (local_e0 != local_98 ||
               ((undefined1 *)CONCAT44(uStack_cc,uStack_d0) != local_88 || local_c8._4_4_ != iVar8))
      ;
    }
    local_c8 = uVar4;
    *(undefined1 *)(param_2 + 0x148) = local_e1;
    if (((*(longlong *)(param_1 + 0x1b0) != 0) &&
        (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x1e0), lVar3 != 0)) &&
       (lVar3 = *(longlong *)(lVar3 + 0x68), lVar3 != 0)) {
      FUN_145a0db70(param_1,param_2,lVar3,param_3);
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1402d9776(local_98);
    DAT_14cb8dc18 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a0d988 FUN_145a0d988 body=125 status=ok
// SIG undefined FUN_145a0d988(void)

undefined8 * FUN_145a0d988(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145a0dcb8();
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



// FUNCTION 145a0da06 FUN_145a0da06 body=342 status=ok
// SIG undefined FUN_145a0da06(void)

ulonglong FUN_145a0da06(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong unaff_R12;
  
  if ((*(longlong *)(param_1 + 0x1b0) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x1e0), lVar2 != 0)) {
    lVar2 = *(longlong *)(lVar2 + 0x68);
    uVar3 = 0;
    if (lVar2 != 0) {
      if (-1 < *(short *)(param_3 + 0x18)) {
        uVar3 = FUN_1402d8968(lVar2,param_3 + 0x18);
      }
      if (*(longlong *)(param_2 + 0x78) == 0) {
        lVar6 = param_4 + 0x68;
LAB_145a0daef:
        uVar4 = FUN_145a0db5c(lVar6,param_2 + 0x80);
        if (*(longlong *)(param_2 + 0x88) != 0) {
          uVar4 = FUN_145a0db5c(uVar4,param_2 + 0x88);
        }
        FUN_14120be0c(param_4,param_2,param_3,uVar4,uVar3);
        unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),1);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x1f8);
        if ((longlong)iVar1 != 0) {
          lVar6 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x1f0) + lVar6) ==
                *(longlong *)(param_2 + 0x78)) {
              uVar5 = (int)(lVar6 >> 4) * -0x33333333;
              unaff_R12 = 0;
              if (((int)uVar5 < 0) || (iVar1 <= (int)uVar5)) goto LAB_145a0db1d;
              lVar7 = (ulonglong)(uVar5 & 0x7fffffff) * 0x70;
              lVar6 = *(longlong *)(param_4 + 0x78) + 0x60 + lVar7;
              if (1 < (byte)(*(char *)(*(longlong *)(param_1 + 0x1f0) + 8 +
                                      (ulonglong)(uVar5 & 0x7fffffff) * 0x50) - 1U)) {
                lVar6 = *(longlong *)(param_4 + 0x78) + lVar7;
              }
              goto LAB_145a0daef;
            }
            lVar6 = lVar6 + 0x50;
          } while ((longlong)iVar1 * 0x50 != lVar6);
        }
        unaff_R12 = 0;
      }
LAB_145a0db1d:
      FUN_145a0db70(param_1,param_4,lVar2,param_3);
      goto LAB_145a0db2e;
    }
  }
  unaff_R12 = 0;
LAB_145a0db2e:
  return unaff_R12 & 0xffffffff;
}



// FUNCTION 145a0db5c FUN_145a0db5c body=20 status=ok
// SIG undefined FUN_145a0db5c(void)

undefined8 * FUN_145a0db5c(undefined8 *param_1,longlong *param_2)

{
  PSRWLOCK SRWLock;
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  longlong *plVar23;
  undefined1 auStack_998 [32];
  undefined1 *puStack_978;
  code *pcStack_970;
  undefined1 **ppuStack_968;
  int iStack_95c;
  uint uStack_958;
  int iStack_954;
  undefined8 uStack_950;
  uint uStack_948;
  uint uStack_944;
  undefined8 uStack_940;
  uint auStack_938 [2];
  undefined8 *puStack_930;
  undefined8 uStack_928;
  undefined1 auStack_918 [192];
  undefined1 *puStack_858;
  ulonglong uStack_850;
  undefined8 uStack_848;
  int iStack_840;
  ulonglong uStack_48;
  
  pbVar1 = (byte *)*param_1;
  if (pbVar1 == (byte *)0x0) {
    return &DAT_14c9a1308;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_998;
  if ((*pbVar1 & 2) == 0) {
    plVar23 = &DAT_14c9a1288;
  }
  else {
    plVar23 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
  }
  uStack_948 = 0;
  uStack_944 = 0;
  uStack_940 = 0;
  auStack_938[0] = 0;
  puStack_930 = (undefined8 *)0x0;
  uStack_928 = 0;
  lVar15 = *param_2;
  puStack_858 = (undefined1 *)0x0;
  uStack_850 = 0x1000000000;
  ppuStack_968 = &puStack_978;
  pcStack_970 = FUN_1456ab7da;
  puStack_978 = auStack_918;
  if (DAT_14c947fe0 == 0) {
    lVar19 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar19);
    DAT_14c947fe0 = lVar19;
  }
  lVar19 = DAT_14c947fe0;
  uStack_950 = lVar15;
  if (lVar15 == 0) {
    if (pcStack_970 == FUN_1456ab7da) {
      puVar21 = *ppuStack_968;
      iVar16 = *(int *)(puVar21 + 200);
      lVar15 = (longlong)iVar16;
      *(uint *)(puVar21 + 200) = iVar16 + 1U;
      if (*(uint *)(puVar21 + 0xcc) < iVar16 + 1U) {
        FUN_1456b1fa2(puVar21,iVar16);
      }
      puVar7 = *(undefined1 **)(puVar21 + 0xc0);
      if (*(undefined1 **)(puVar21 + 0xc0) == (undefined1 *)0x0) {
        puVar7 = puVar21;
      }
      *(undefined4 *)(puVar7 + lVar15 * 0xc + 8) = DAT_14c948620;
      uVar14 = DAT_14c948618;
LAB_1446e630f:
      *(undefined8 *)(puVar7 + lVar15 * 0xc) = uVar14;
    }
    else {
LAB_1446e6912:
      (*pcStack_970)();
    }
  }
  else {
    SRWLock = (PSRWLOCK)(DAT_14c947fe0 + 0x50);
    AcquireSRWLockShared(SRWLock);
    if (*(int *)(lVar19 + 0x60) != *(int *)(lVar19 + 0x8c)) {
      uVar10 = (uint)lVar15;
      uVar5 = (uint)((ulonglong)lVar15 >> 0x10);
      iVar16 = (int)((ulonglong)lVar15 >> 0x20);
      lVar6 = lVar19 + 0x90;
      if (*(longlong *)(lVar19 + 0x98) != 0) {
        lVar6 = *(longlong *)(lVar19 + 0x98);
      }
      iVar9 = *(int *)(lVar6 + (ulonglong)
                               (*(int *)(lVar19 + 0xa0) - 1U &
                               iVar16 + (uVar10 << 0x10 | uVar10 & 0xffff) +
                               (uVar5 << 0x13 | uVar5 & 0xffff) + ((uVar10 & 0xffff) >> 4)) * 4);
      if (iVar9 != -1) {
        do {
          plVar11 = (longlong *)(*(longlong *)(lVar19 + 0x58) + (longlong)iVar9 * 0x14);
          if (*plVar11 == lVar15) {
            if ((plVar11 != (longlong *)0x0) && (plVar11 + 1 != (longlong *)0x0)) {
              iVar9 = (int)plVar11[1];
              ReleaseSRWLockShared(SRWLock);
              if (iVar9 == 0) goto LAB_1446e622b;
              iStack_95c = iVar9;
              uStack_958 = uVar10;
              iStack_954 = iVar16;
              if (pcStack_970 != FUN_1456ab7da) {
                if (pcStack_970 != FUN_1400018c6) goto LAB_1446e6912;
                iStack_840 = iVar16;
                uStack_848 = CONCAT44(uVar10,iVar9);
                iVar16 = *(int *)*ppuStack_968;
                *(int *)*ppuStack_968 = iVar16 + 1;
                puVar8 = (undefined8 *)ppuStack_968[1];
                puVar12 = &DAT_14c948618;
                if (iVar16 < 1) {
                  puVar12 = &uStack_848;
                }
                *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar12 + 1);
                *puVar8 = *puVar12;
                goto LAB_1446e6313;
              }
              puVar21 = *ppuStack_968;
              iVar16 = *(int *)(puVar21 + 200);
              lVar15 = (longlong)iVar16;
              *(uint *)(puVar21 + 200) = iVar16 + 1U;
              if (*(uint *)(puVar21 + 0xcc) < iVar16 + 1U) {
                FUN_1456b1fa2(puVar21,iVar16);
              }
              puVar7 = *(undefined1 **)(puVar21 + 0xc0);
              if (*(undefined1 **)(puVar21 + 0xc0) == (undefined1 *)0x0) {
                puVar7 = puVar21;
              }
              *(int *)(puVar7 + lVar15 * 0xc + 8) = iStack_954;
              uVar14 = CONCAT44(uStack_958,iStack_95c);
              goto LAB_1446e630f;
            }
            break;
          }
          iVar9 = *(int *)((longlong)plVar11 + 0xc);
        } while (iVar9 != -1);
      }
    }
    ReleaseSRWLockShared(SRWLock);
LAB_1446e622b:
    uVar5 = (uint)uStack_950;
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    if ((*(byte *)((&DAT_14c87eb10)[uVar5 >> 0x10] + (ulonglong)(uVar5 & 0xffff) * 2) & 1) == 0) {
      FUN_140024b62(&uStack_950,&uStack_848);
      FUN_1446ded13(lVar19,&uStack_848,uStack_950._4_4_);
    }
    else {
      FUN_1427922d0(&uStack_950,&uStack_848);
      FUN_1446df218(lVar19,&uStack_848,uStack_950._4_4_);
    }
  }
LAB_1446e6313:
  uVar4 = uStack_850;
  uVar22 = uStack_928;
  uVar5 = (uint)uStack_850;
  uVar18 = (ulonglong)uStack_944;
  if ((int)uStack_944 < (int)(uint)uStack_850) {
    bVar3 = 0 < uStack_928._4_4_;
    bVar2 = 1 < (int)uStack_944;
    if ((int)(uint)uStack_850 < 2) {
      if (bVar2 || bVar3) {
        FUN_145741a94(&puStack_930,uStack_850 & 0xffffffff,
                      CONCAT71((uint7)(uint3)(uStack_944 >> 8),1));
        if (uStack_928._4_4_ != (uint)uStack_928) {
          FUN_1446dda88(&puStack_930);
        }
      }
    }
    else {
      uVar10 = (uint)uStack_928;
      lVar15 = (longlong)(int)(uint)uStack_928;
      if ((int)(uint)uStack_928 < (int)(uint)uStack_850) {
        uVar13 = (uint)uStack_850 - (uint)uStack_928;
        uStack_928 = CONCAT44(uStack_928._4_4_,(uint)uStack_850);
        if (uStack_928._4_4_ - uVar10 < uVar13) {
          FUN_1446dd912(&puStack_930,uVar22 & 0xffffffff);
        }
        FUN_1446dd7a8(lVar15 * 0xc + (longlong)puStack_930,uVar13);
      }
      else if ((uint)uStack_850 < (uint)uStack_928) {
        uStack_928 = CONCAT44(uStack_928._4_4_,(uint)uStack_850);
        FUN_140c05acc(&puStack_930);
      }
      if (uStack_928._4_4_ != (uint)uStack_928) {
        FUN_1446dda88(&puStack_930);
      }
      if ((!bVar2 && !bVar3) && 0 < (int)uStack_944) {
        lVar15 = 0;
        lVar19 = 0;
        do {
          *(undefined4 *)((longlong)puStack_930 + lVar15 + 8) =
               *(undefined4 *)((longlong)auStack_938 + lVar15);
          *(undefined8 *)((longlong)puStack_930 + lVar15) =
               *(undefined8 *)((longlong)auStack_938 + lVar15 + -8);
          lVar19 = lVar19 + 1;
          lVar15 = lVar15 + 0xc;
        } while (lVar19 < (int)uStack_944);
      }
    }
    uStack_944 = uVar5;
    uVar18 = uVar4 & 0xffffffff;
  }
  if (0 < (int)(uint)uStack_850) {
    uVar22 = 0;
    do {
      uVar4 = uStack_928;
      puVar21 = puStack_858;
      if (puStack_858 == (undefined1 *)0x0) {
        puVar21 = auStack_918;
      }
      uVar18 = uVar22 + 1;
      if ((longlong)(int)uStack_944 <= (longlong)uVar22) {
        bVar3 = 0 < uStack_928._4_4_;
        bVar2 = 1 < (int)uStack_944;
        uVar5 = (uint)uVar18;
        if (uVar22 == 0) {
          if (bVar2 || bVar3) {
            FUN_145741a94(&puStack_930,1,CONCAT71((int7)(int3)(uStack_944 >> 8),1));
            if (uStack_928._4_4_ != (uint)uStack_928) {
              FUN_1446dda88();
            }
          }
        }
        else {
          iVar16 = (uint)uStack_928;
          lVar15 = (longlong)(int)(uint)uStack_928;
          if ((longlong)uVar22 < lVar15) {
            if (uVar18 < (uStack_928 & 0xffffffff)) {
              uStack_928 = CONCAT44(uStack_928._4_4_,uVar5);
              FUN_140c05acc(&puStack_930);
            }
          }
          else {
            uStack_928 = CONCAT44(uStack_928._4_4_,uVar5);
            uVar10 = uVar5 - iVar16;
            if ((uint)(uStack_928._4_4_ - iVar16) < uVar10) {
              FUN_1446dd912(&puStack_930,uVar4 & 0xffffffff);
            }
            FUN_1446dd7a8(lVar15 * 0xc + (longlong)puStack_930,uVar10);
          }
          if (uStack_928._4_4_ != (uint)uStack_928) {
            FUN_1446dda88(&puStack_930);
          }
          if ((!bVar2 && !bVar3) && 0 < (int)uStack_944) {
            lVar15 = 0;
            lVar19 = 0;
            do {
              *(undefined4 *)((longlong)puStack_930 + lVar15 + 8) =
                   *(undefined4 *)((longlong)auStack_938 + lVar15);
              *(undefined8 *)((longlong)puStack_930 + lVar15) =
                   *(undefined8 *)((longlong)auStack_938 + lVar15 + -8);
              lVar19 = lVar19 + 1;
              lVar15 = lVar15 + 0xc;
            } while (lVar19 < (int)uStack_944);
          }
        }
        uStack_944 = uVar5;
      }
      puVar8 = &uStack_940;
      if (1 < (int)uStack_944) {
        puVar8 = puStack_930;
      }
      if (0 < uStack_928._4_4_) {
        puVar8 = puStack_930;
      }
      *(undefined4 *)((longlong)puVar8 + uVar22 * 0xc + 8) =
           *(undefined4 *)((longlong)(puVar21 + uVar22 * 0xc) + 8);
      *(undefined8 *)((longlong)puVar8 + uVar22 * 0xc) = *(undefined8 *)(puVar21 + uVar22 * 0xc);
      uVar22 = uVar18;
    } while ((longlong)uVar18 < (longlong)(int)(uint)uStack_850);
    uVar18 = (ulonglong)uStack_944;
  }
  if ((int)uVar18 == 1) {
    if ((uint)uStack_940 != 0) {
      uVar5 = (uint)uStack_940;
      if (auStack_938[0] != 0) {
        uVar5 = auStack_938[0] >> 0xd ^ (uint)uStack_940 - auStack_938[0];
        uVar13 = uVar5 << 8 ^ (-0x61c88647 - auStack_938[0]) - uVar5;
        uVar17 = uVar13 >> 0xd ^ (auStack_938[0] - uVar5) - uVar13;
        uVar10 = uVar17 >> 0xc ^ (uVar5 - uVar13) - uVar17;
        uVar5 = uVar10 << 0x10 ^ (uVar13 - uVar17) - uVar10;
        uVar13 = uVar5 >> 5 ^ (uVar17 - uVar10) - uVar5;
        uVar10 = uVar13 >> 3 ^ (uVar10 - uVar5) - uVar13;
        uVar5 = uVar10 << 10 ^ (uVar5 - uVar13) - uVar10;
        uVar5 = uVar5 >> 0xf ^ uVar13 - (uVar10 + uVar5);
      }
      goto LAB_1446e642c;
    }
  }
  else if (1 < (int)uVar18) {
    lVar15 = 0;
    uVar5 = 0;
    do {
      uVar10 = *(uint *)((longlong)puStack_930 + lVar15);
      uVar13 = 0;
      if ((uVar10 != 0) &&
         (uVar17 = *(uint *)((longlong)puStack_930 + lVar15 + 8), uVar13 = uVar10, uVar17 != 0)) {
        uVar13 = uVar17 >> 0xd ^ uVar10 - uVar17;
        uVar20 = uVar13 << 8 ^ (-0x61c88647 - uVar17) - uVar13;
        uVar10 = uVar20 >> 0xd ^ (uVar17 - uVar13) - uVar20;
        uVar13 = uVar10 >> 0xc ^ (uVar13 - uVar20) - uVar10;
        uVar20 = uVar13 << 0x10 ^ (uVar20 - uVar10) - uVar13;
        uVar17 = uVar20 >> 5 ^ (uVar10 - uVar13) - uVar20;
        uVar10 = uVar17 >> 3 ^ (uVar13 - uVar20) - uVar17;
        uVar13 = uVar10 << 10 ^ (uVar20 - uVar17) - uVar10;
        uVar13 = uVar13 >> 0xf ^ uVar17 - (uVar10 + uVar13);
      }
      if (uVar13 == 0 && uVar5 == 0) {
        uVar5 = 0;
      }
      else {
        uVar10 = uVar13 >> 0xd ^ uVar5 - uVar13;
        uVar5 = uVar10 << 8 ^ (-0x61c88647 - uVar13) - uVar10;
        uVar17 = uVar5 >> 0xd ^ (uVar13 - uVar10) - uVar5;
        uVar10 = uVar17 >> 0xc ^ (uVar10 - uVar5) - uVar17;
        uVar13 = uVar10 << 0x10 ^ (uVar5 - uVar17) - uVar10;
        uVar5 = uVar13 >> 5 ^ (uVar17 - uVar10) - uVar13;
        uVar17 = uVar5 >> 3 ^ (uVar10 - uVar13) - uVar5;
        uVar10 = uVar17 << 10 ^ (uVar13 - uVar5) - uVar17;
        uVar5 = uVar10 >> 0xf ^ uVar5 - (uVar17 + uVar10);
      }
      lVar15 = lVar15 + 0xc;
    } while (uVar18 * 0xc != lVar15);
    goto LAB_1446e642c;
  }
  uVar5 = 0;
LAB_1446e642c:
  _uStack_948 = CONCAT44(uStack_944,uVar5);
  if (puStack_858 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((int)plVar23[2] != *(int *)((longlong)plVar23 + 0x3c)) {
    plVar11 = plVar23 + 8;
    if ((longlong *)plVar23[9] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar23[9];
    }
    iVar16 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar23[10] - 1U & uStack_948) * 4);
    if (iVar16 != -1) {
      do {
        lVar15 = *plVar23 + (longlong)iVar16 * 0x40;
        if (*(uint *)(*plVar23 + (longlong)iVar16 * 0x40) == uStack_948) {
          if (puStack_930 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          puVar8 = &DAT_14c9a1308;
          if (((lVar15 != 0) && (*(byte **)(lVar15 + 0x28) != (byte *)0x0)) &&
             ((**(byte **)(lVar15 + 0x28) & 0x40) == 0)) {
            puVar8 = (undefined8 *)(lVar15 + 0x28);
          }
          goto LAB_1446e64d0;
        }
        iVar16 = *(int *)(lVar15 + 0x38);
      } while (iVar16 != -1);
    }
  }
  if (puStack_930 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  puVar8 = &DAT_14c9a1308;
LAB_1446e64d0:
  if ((uStack_48 ^ (ulonglong)auStack_998) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar8;
}



// FUNCTION 145a0db70 FUN_145a0db70 body=326 status=ok
// SIG undefined FUN_145a0db70(void)

void FUN_145a0db70(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(char *)(param_2 + 0x148) == '\0') && (*(char *)(param_2 + 0x8c) == '\0')) {
    iVar2 = *(int *)(param_2 + 0x100);
    iVar3 = *(int *)(param_2 + 300);
    if ((iVar2 <= iVar3) &&
       ((*(longlong *)(param_1 + 0x210) != 0 && (*(longlong *)(param_1 + 0x1b0) != 0)))) {
      puVar1 = (undefined8 *)(param_1 + 0x210);
      uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0xf0);
      lVar5 = FUN_144a61814(uVar4,puVar1);
      if (lVar5 != 0) {
        FUN_1405a424c(uVar4,*puVar1);
      }
      *puVar1 = 0;
    }
    if ((-1 < *(short *)(param_4 + 0x18)) && (*(char *)(param_2 + 0x8e) == '\0')) {
      FUN_14144be2e(param_3,param_4 + 0x18,0);
    }
    if (((*(char *)(param_2 + 0x8a) == '\x01') && (*(char *)(param_2 + 0x8b) == '\0')) &&
       (*(undefined1 *)(param_2 + 0x8b) = 1, *(char *)(param_2 + 0x8f) == '\0')) {
      local_49 = 1;
      FUN_1414ba756(param_1 + 0x40,param_4,param_2 + 0x2c);
    }
    FUN_14144be7c(param_3,param_4 + 0x18,iVar3 < iVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0dcb8 FUN_145a0dcb8 body=438 status=ok
// SIG undefined FUN_145a0dcb8(void)

longlong * FUN_145a0dcb8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + 0x18 + (longlong)iVar6 * 0x30) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (((local_60._4_4_ != iVar7) || (local_68 != plVar1)) || (local_78 != param_1));
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
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145a0de70 FUN_145a0de70 body=577 status=ok
// SIG undefined FUN_145a0de70(void)

longlong * FUN_145a0de70(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (longlong *)FUN_14001cc68(0x50,0x10);
  local_30[1] = (longlong)&DAT_100000001;
  *local_30 = (longlong)&PTR_FUN_14b4214b0;
  local_38 = local_30 + 2;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  local_30[6] = 0;
  local_30[7] = 0;
  local_30[2] = (longlong)&PTR_FUN_14b4214d0;
  local_30[8] = 0;
  local_30[9] = 0;
  FUN_145a0e0b2();
  uVar5 = (**(code **)(*(longlong *)*param_3 + 8))();
  plVar6 = (longlong *)FUN_1401cd47c(uVar5);
  lVar2 = *(longlong *)(param_1 + 0x10);
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((plVar6 != (longlong *)0x0) && (lVar2 != 0)) {
    uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_140e58d02(lVar2,&local_48,uVar5,0);
    plVar6 = local_40;
    if (local_38 + 6 != &local_48) {
      local_38[6] = local_48;
      local_48 = 0;
      plVar4 = (longlong *)local_38[7];
      if (local_40 != plVar4) {
        local_40 = (longlong *)0x0;
        local_38[7] = (longlong)plVar6;
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
        }
      }
    }
    plVar6 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_40 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_40)(local_40);
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
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  plVar3 = local_30;
  *param_2 = (longlong)local_38;
  param_2[1] = (longlong)local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_30 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_30)(local_30);
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0e0b2 FUN_145a0e0b2 body=162 status=ok
// SIG undefined FUN_145a0e0b2(void)

void FUN_145a0e0b2(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145a0e0f1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145a0e0f1;
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
LAB_145a0e0f1:
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
                    /* WARNING: Could not recover jumptable at 0x000145a0e150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145a0e154 FUN_145a0e154 body=58 status=ok
// SIG undefined FUN_145a0e154(void)

void FUN_145a0e154(undefined8 *param_1,int param_2)

{
  FUN_140840ea5(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_145a0e18e(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145a0e18e FUN_145a0e18e body=112 status=ok
// SIG undefined FUN_145a0e18e(void)

void FUN_145a0e18e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 145a0e1fe FUN_145a0e1fe body=96 status=ok
// SIG undefined FUN_145a0e1fe(void)

ulonglong FUN_145a0e1fe(longlong param_1)

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
LAB_145a0e241:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_145a0e241;
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



// FUNCTION 145a0e25e FUN_145a0e25e body=379 status=ok
// SIG undefined FUN_145a0e25e(void)

void FUN_145a0e25e(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(char *)(param_1 + 0xe0) == '\x01') && (cVar3 = FUN_145a0e3da(), cVar3 != '\0')) {
    *(undefined1 *)(param_1 + 0xe0) = 0;
    uVar5 = FUN_145a0e418(param_1);
    iVar7 = 0;
    lVar6 = FUN_140149a73(uVar5,0);
    if (lVar6 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_1401499e8(lVar6);
    }
    plVar1 = (longlong *)(param_1 + 0x18);
    lVar6 = param_1 + 0x28;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = lVar6;
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_1449c0562(&local_58);
      iVar7 = *(int *)(param_1 + 0x40);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar2 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar4 = local_68._4_4_;
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar7) || (local_68 = local_48, local_50 != lVar6)) {
      do {
        do {
          local_68 = uVar2;
          local_88 = 1;
          FUN_14885394c(param_1,*local_80 + (longlong)iVar4 * 0x90 + 0x10,0,uVar5);
          local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
          FUN_1449c0562(&local_78);
          iVar4 = local_68._4_4_;
          uVar2 = local_68;
        } while (local_68._4_4_ != iVar7);
      } while ((local_70 != lVar6) || (local_80 != plVar1));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a0e3da FUN_145a0e3da body=62 status=ok
// SIG undefined FUN_145a0e3da(void)

undefined8 FUN_145a0e3da(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x10);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x10);
    cVar1 = (**(code **)(*plVar2 + 0x498))(plVar2);
    if (0xfd < (byte)(cVar1 - 9U)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145a0e418 FUN_145a0e418 body=58 status=ok
// SIG undefined FUN_145a0e418(void)

undefined8 FUN_145a0e418(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x10);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x10);
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      return *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x360);
    }
  }
  return 0;
}



// FUNCTION 145a0e452 FUN_145a0e452 body=63 status=ok
// SIG undefined FUN_145a0e452(void)

void FUN_145a0e452(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145a0e492(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 145a0e492 FUN_145a0e492 body=83 status=ok
// SIG undefined FUN_145a0e492(void)

ulonglong FUN_145a0e492(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 145a0e4e6 FUN_145a0e4e6 body=592 status=ok
// SIG undefined FUN_145a0e4e6(void)

void FUN_145a0e4e6(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  bool bVar13;
  bool bVar14;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar8 = *param_2;
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xcU) = *(int *)((longlong)plVar7 + 0xcU) + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar7 + uVar8 * 4);
    if (iVar6 != -1) {
      puVar10 = (ulonglong *)((longlong)plVar7 + uVar8 * 4);
      do {
        puVar9 = (ulonglong *)((longlong)iVar6 * 0x38 + *param_1);
        uVar8 = *param_2;
        plVar7 = (longlong *)param_2[1];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar7 + 0xcU) = *(int *)((longlong)plVar7 + 0xcU) + 1;
          UNLOCK();
        }
        uVar11 = *puVar9;
        plVar3 = (longlong *)puVar9[1];
        if (plVar3 == (longlong *)0x0) {
LAB_145a0e667:
          plVar12 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
          UNLOCK();
          iVar6 = (int)plVar3[1];
          do {
            if (iVar6 == 0) goto LAB_145a0e667;
            LOCK();
            iVar4 = (int)plVar3[1];
            bVar13 = iVar6 == iVar4;
            if (bVar13) {
              *(int *)(plVar3 + 1) = iVar6 + 1;
              iVar4 = iVar6;
            }
            iVar6 = iVar4;
            UNLOCK();
            plVar12 = plVar3;
          } while (!bVar13);
        }
        bVar13 = true;
        if (plVar7 != (longlong *)0x0) {
          iVar6 = (int)plVar7[1];
          do {
            if (iVar6 == 0) goto LAB_145a0e5e4;
            LOCK();
            iVar4 = (int)plVar7[1];
            bVar14 = iVar6 == iVar4;
            if (bVar14) {
              *(int *)(plVar7 + 1) = iVar6 + 1;
              iVar4 = iVar6;
            }
            iVar6 = iVar4;
            UNLOCK();
          } while (!bVar14);
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
            bVar13 = false;
          }
          else {
            bVar13 = false;
          }
        }
LAB_145a0e5e4:
        if (plVar12 == (longlong *)0x0) {
          uVar11 = 0;
        }
        else {
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
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
        if (bVar13) {
          uVar8 = 0;
        }
        if (uVar11 == uVar8) {
          FUN_145a0e736(param_1,(int)*puVar10);
          break;
        }
        iVar6 = (int)puVar9[6];
        puVar10 = puVar9 + 6;
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145a0e732. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145a0e736 FUN_145a0e736 body=86 status=ok
// SIG undefined FUN_145a0e736(void)

void FUN_145a0e736(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x34 + (longlong)param_2 * 0x38);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x38 + 0x30);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x38 + 0x30);
  FUN_145a0e78c();
  return;
}



// FUNCTION 145a0e78c FUN_145a0e78c body=82 status=ok
// SIG undefined FUN_145a0e78c(void)

void FUN_145a0e78c(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 0x18 + (longlong)param_2 * 0x38);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)(lVar2 + (longlong)param_2 * 0x38 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_145a0e7de(param_1,param_2);
  return;
}



// FUNCTION 145a0e7de FUN_145a0e7de body=116 status=ok
// SIG undefined FUN_145a0e7de(void)

void FUN_145a0e7de(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 145a0e858 FUN_145a0e858 body=68 status=ok
// SIG undefined FUN_145a0e858(void)

void FUN_145a0e858(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140312256(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a9b6d10;
  FUN_1403121a6(puVar1,0);
  *(byte *)(puVar1 + 0x72) = *(byte *)(puVar1 + 0x72) | 1;
  *(undefined1 *)(puVar1 + 0xd) = 1;
  *(byte *)((longlong)puVar1 + 99) = *(byte *)((longlong)puVar1 + 99) | 8;
  *(byte *)(puVar1 + 0xc) = *(byte *)(puVar1 + 0xc) | 8;
  *(byte *)((longlong)puVar1 + 0x61) = *(byte *)((longlong)puVar1 + 0x61) | 0x80;
  return;
}



// FUNCTION 145a0e8a8 FUN_145a0e8a8 body=135 status=ok
// SIG undefined FUN_145a0e8a8(void)

undefined8 * FUN_145a0e8a8(undefined8 *param_1)

{
  FUN_140307c5a();
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(byte *)((longlong)param_1 + 0xbc) = *(byte *)((longlong)param_1 + 0xbc) | 1;
  *(byte *)((longlong)param_1 + 0xfe) = *(byte *)((longlong)param_1 + 0xfe) | 1;
  *(undefined1 *)((longlong)param_1 + 0xf6) = 0x12;
  *(byte *)((longlong)param_1 + 0x13c) = *(byte *)((longlong)param_1 + 0x13c) & 0xf8;
  *param_1 = &PTR_FUN_14aad9a30;
  param_1[0x19] = &PTR_FUN_14aad9e00;
  param_1[0x1a] = &PTR_FUN_14aad9e40;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0x15c) = 0;
  *(byte *)((longlong)param_1 + 0x15d) = *(byte *)((longlong)param_1 + 0x15d) & 0xf8 | 5;
  return param_1;
}



// FUNCTION 145a0e93a FUN_145a0e93a body=233 status=ok
// SIG undefined FUN_145a0e93a(void)

undefined8 * FUN_145a0e93a(undefined8 *param_1)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145a0ea24();
  *param_1 = &PTR_FUN_14b443df0;
  param_1[5] = &PTR_LAB_14b444290;
  param_1[6] = &PTR_LAB_14b4442d0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 1;
  param_1[0x50] = 0;
  FUN_145a0eaf2(&local_40);
  *(undefined4 *)(param_1 + 0x4b) = local_40;
  *(undefined4 *)((longlong)param_1 + 0x25c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x4c) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0x264) = uStack_34;
  if (param_1 + 0x4b == (undefined8 *)&local_40) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x4d] != 0) {
      FUN_1400020a8();
    }
    param_1[0x4d] = local_30;
    *(undefined4 *)(param_1 + 0x4e) = local_28;
    *(undefined4 *)((longlong)param_1 + 0x274) = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0ea24 FUN_145a0ea24 body=206 status=ok
// SIG undefined FUN_145a0ea24(void)

undefined8 * FUN_145a0ea24(undefined8 *param_1)

{
  FUN_144805d84();
  *param_1 = &PTR_FUN_14b440070;
  param_1[5] = &PTR_FUN_14b440510;
  param_1[6] = &PTR_LAB_14b440550;
  memset(param_1 + 0x22,0,0x90);
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  *(undefined1 *)(param_1 + 0x34) = 1;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 1;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1b1) = 1;
  param_1[0x3b] = 0x1000100000001;
  *(undefined2 *)((longlong)param_1 + 0x1b2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1b4) = 0;
  return param_1;
}



// FUNCTION 145a0eaf2 FUN_145a0eaf2 body=132 status=ok
// SIG undefined FUN_145a0eaf2(void)

undefined8 * FUN_145a0eaf2(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400b22c2(&local_38,"Material\'/CohtmlPlugin/CohtmlHUDMaterial.CohtmlHUDMaterial\'");
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_28 = local_38;
  local_20 = local_30 + -1;
  if (local_30 == 0) {
    local_20 = 0;
  }
  FUN_14475bf92(param_1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0eb78 FUN_145a0eb78 body=284 status=ok
// SIG undefined FUN_145a0eb78(void)

bool FUN_145a0eb78(void)

{
  int *piVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  pvVar3 = DAT_14cb974d0;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  lVar6 = (longlong)DAT_14cb974d8;
  local_30 = DAT_14cb974d8;
  if (lVar6 == 0) {
    local_2c = 0;
  }
  else {
    FUN_145a0ecd6(&local_38,DAT_14cb974d8);
    memcpy(local_38,pvVar3,lVar6 << 3);
  }
  DAT_14cb974d8 = 0;
  if (DAT_14cb974dc != 0) {
    FUN_145a0ec96();
  }
  pvVar3 = local_38;
  lVar6 = (longlong)local_30;
  if (lVar6 != 0) {
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)((longlong)pvVar3 + lVar7);
      if (lVar2 != 0) {
        FUN_1411ebea2(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar7 = lVar7 + 8;
    } while (lVar6 * 8 != lVar7);
  }
  plVar5 = DAT_14cb974e8;
  iVar4 = DAT_14cb974d8;
  if (DAT_14cb974d8 == 0) {
    DAT_14cb974e0 = 0;
    DAT_14cb974e8 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0ec96 FUN_145a0ec96 body=64 status=ok
// SIG undefined FUN_145a0ec96(void)

void FUN_145a0ec96(void)

{
  if (DAT_14cb974dc != 0) {
    DAT_14cb974dc = 0;
    FUN_1446f8d3c(&DAT_14cb974d0,DAT_14cb974d8,0,8,8);
  }
  return;
}



// FUNCTION 145a0ecd6 FUN_145a0ecd6 body=89 status=ok
// SIG undefined FUN_145a0ecd6(void)

void FUN_145a0ecd6(longlong param_1,int param_2)

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



// FUNCTION 145a0ed30 FUN_145a0ed30 body=107 status=ok
// SIG undefined FUN_145a0ed30(void)

void FUN_145a0ed30(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_144a52528();
  FUN_145a0eede(local_58,param_1);
  FUN_145a0ed9c(lVar1 + 0x310,local_60,local_58);
  FUN_1401cb1ee(local_58);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0ed9c FUN_145a0ed9c body=317 status=ok
// SIG undefined FUN_145a0ed9c(void)

undefined8 *
FUN_145a0ed9c(LPCRITICAL_SECTION param_1,undefined8 *param_2,LPCRITICAL_SECTION param_3)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection(param_1);
  *param_2 = 0;
  EnterCriticalSection(param_3);
  cVar3 = '\0';
  if ((param_3[1].LockCount != 0) && (param_3[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    cVar3 = (**(code **)(*(longlong *)param_3[1].DebugInfo + 0x30))();
  }
  if (param_3 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_3);
  }
  if (cVar3 != '\0') {
    FUN_14109be94(param_1,1);
    EnterCriticalSection(param_3);
    if ((param_3[1].LockCount == 0) ||
       (p_Var2 = param_3[1].DebugInfo, p_Var2 == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      local_40 = 0;
    }
    else {
      (**(code **)(*(longlong *)p_Var2 + 0x38))(p_Var2,&local_40);
    }
    if (param_3 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_3);
    }
    *param_2 = local_40;
    iVar1 = param_1[1].LockCount;
    lVar4 = (longlong)iVar1;
    param_1[1].LockCount = iVar1 + 1U;
    if ((uint)param_1[1].RecursionCount < iVar1 + 1U) {
      FUN_1447a71f6(param_1 + 1,iVar1);
    }
    p_Var2 = param_1[1].DebugInfo;
    *(undefined8 *)(&p_Var2->Type + lVar4 * 8) = 0;
    *(undefined4 *)(&p_Var2->CriticalSection + lVar4 * 2) = 0;
    FUN_14109be38(&p_Var2->Type + lVar4 * 8,param_3);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0eede FUN_145a0eede body=204 status=ok
// SIG undefined FUN_145a0eede(void)

LPCRITICAL_SECTION FUN_145a0eede(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e41ba0;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14afcbd10;
  (p_Var1->ProcessLocksList).Blink = param_2;
  *(code **)&p_Var1->EntryCount = FUN_14090b384;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 145a0efaa FUN_145a0efaa body=315 status=ok
// SIG undefined FUN_145a0efaa(void)

undefined4 * FUN_145a0efaa(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145a0f184(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  *(undefined4 *)(local_40 + 8) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (int)((ulonglong)uVar1 >> 0x20) * 0x17 + (int)uVar1;
  cVar3 = FUN_145a0f0e6(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x44) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145a0f274(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0f0e6 FUN_145a0f0e6 body=157 status=ok
// SIG undefined FUN_145a0f0e6(void)

undefined8 FUN_145a0f0e6(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar16 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[8];
    }
    iVar17 = *(int *)((longlong)plVar16 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar17 != -1) {
      do {
        plVar16 = (longlong *)(*param_1 + (longlong)iVar17 * 0x48);
        if (*plVar16 == *param_3) {
          lVar9 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar10 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar11 = param_3[2];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar12 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          lVar13 = param_3[4];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar14 = param_3[5];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x2c);
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x34);
          lVar15 = param_3[7];
          uVar8 = *(undefined4 *)((longlong)param_3 + 0x3c);
          *(int *)(plVar16 + 6) = (int)param_3[6];
          *(undefined4 *)((longlong)plVar16 + 0x34) = uVar7;
          *(int *)(plVar16 + 7) = (int)lVar15;
          *(undefined4 *)((longlong)plVar16 + 0x3c) = uVar8;
          *(int *)(plVar16 + 4) = (int)lVar13;
          *(undefined4 *)((longlong)plVar16 + 0x24) = uVar5;
          *(int *)(plVar16 + 5) = (int)lVar14;
          *(undefined4 *)((longlong)plVar16 + 0x2c) = uVar6;
          *(int *)(plVar16 + 2) = (int)lVar11;
          *(undefined4 *)((longlong)plVar16 + 0x14) = uVar3;
          *(int *)(plVar16 + 3) = (int)lVar12;
          *(undefined4 *)((longlong)plVar16 + 0x1c) = uVar4;
          *(int *)plVar16 = (int)lVar9;
          *(undefined4 *)((longlong)plVar16 + 4) = uVar1;
          *(int *)(plVar16 + 1) = (int)lVar10;
          *(undefined4 *)((longlong)plVar16 + 0xc) = uVar2;
          FUN_14584fb88((int)lVar9,*param_4);
          *param_4 = iVar17;
          return 1;
        }
        iVar17 = (int)plVar16[8];
      } while (iVar17 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145a0f184 FUN_145a0f184 body=239 status=ok
// SIG undefined FUN_145a0f184(void)

int * FUN_145a0f184(longlong *param_1,int *param_2)

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
      FUN_14021b4e8(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x48) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 145a0f274 FUN_145a0f274 body=456 status=ok
// SIG undefined FUN_145a0f274(void)

void FUN_145a0f274(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x48);
        uVar10 = (longlong)((int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x44 + lVar6 * 0x48) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x40 + lVar6 * 0x48) =
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



// FUNCTION 145a0f43e FUN_145a0f43e body=685 status=ok
// SIG undefined FUN_145a0f43e(void)

void FUN_145a0f43e(longlong param_1,char *param_2,char *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  
  FUN_145a0f6ec();
  if (*(char *)(param_1 + 0x1f8) == '\x01') {
    if (*param_3 != '\x04') {
      return;
    }
    puVar3 = &DAT_14cbca398;
    goto LAB_145a0f587;
  }
  if ((*(char *)(param_1 + 0x533) == '\x01') && (*(longlong *)(param_1 + 0x538) != 0)) {
    FUN_148d3232e(*(longlong *)(param_1 + 0x538),param_3);
  }
  if (((*(longlong *)(param_1 + 0x30) == 0) ||
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar2 == 0)) ||
     (*(longlong *)(lVar2 + 0x1f0) == 0)) {
    FUN_140d01982(param_1);
LAB_145a0f614:
    cVar1 = '\0';
    cVar4 = '\0';
  }
  else {
    lVar2 = FUN_14116599c();
    FUN_140d01982(param_1);
    if (lVar2 == 0) goto LAB_145a0f614;
    cVar1 = FUN_14144bed0(lVar2);
    cVar4 = *(char *)(lVar2 + 0x221);
  }
  switch(*param_3) {
  case '\x02':
    if (*param_2 == '\t') {
      lVar2 = param_1 + 0x200;
      FUN_14144c0b6(lVar2,&DAT_14cbca390);
      FUN_14144c0b6(lVar2,&DAT_14cbca7b8);
      FUN_14144f736(lVar2,&DAT_14cbca3c0,0);
    }
    if (cVar4 != '\0') {
      puVar3 = &DAT_14cbca3a0;
LAB_145a0f587:
      FUN_14144c0b6(param_1 + 0x200,puVar3);
      return;
    }
    break;
  case '\x03':
    if (*(char *)(param_1 + 0x533) == '\0') {
      FUN_14144bfc0(param_1 + 0x200,&DAT_14cbca3a8);
    }
    if ((*(char *)(param_1 + 0x531) == '\0') && (*(char *)(param_1 + 0x533) == '\0'))
    goto LAB_145a0f5f3;
    break;
  case '\x04':
    if ((*param_2 == '\t') || (*param_2 == '\a')) {
      FUN_14144c0b6(param_1 + 0x200,&DAT_14cbca390);
      FUN_14144c0b6(param_1 + 0x200,&DAT_14cbca7b8);
    }
    FUN_14144bfc0(param_1 + 0x200,&DAT_14cbca388);
    if (cVar1 == '\0' && *(char *)(param_1 + 0x531) == '\0') {
      puVar3 = &DAT_14cbca380;
      goto LAB_145a0f587;
    }
    break;
  case '\x05':
    if ((*param_2 == '\x04') && (*(char *)(param_1 + 0x531) == '\0')) {
      if (cVar1 == '\0') {
        FUN_14144c0b6(param_1 + 0x200,&DAT_14cbca380);
      }
      goto LAB_145a0f5f3;
    }
    break;
  case '\b':
    if (*(char *)(param_1 + 0x533) == '\0') {
      FUN_14144bfc0(param_1 + 0x200,&DAT_14cbca3a8);
    }
    FUN_14144bfc0(param_1 + 0x200,&DAT_14cbca3b0);
    FUN_14144bfc0(param_1 + 0x200,&DAT_14cbca3b8);
LAB_145a0f5f3:
    FUN_14144bfc0(param_1 + 0x200,&DAT_14cbca3c0);
    return;
  }
  return;
}



// FUNCTION 145a0f6ec FUN_145a0f6ec body=1 status=ok
// SIG undefined FUN_145a0f6ec(void)

void FUN_145a0f6ec(void)

{
  return;
}



// FUNCTION 145a0f6f6 FUN_145a0f6f6 body=172 status=ok
// SIG undefined FUN_145a0f6f6(void)

undefined8 * FUN_145a0f6f6(undefined8 *param_1)

{
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14a175e90;
  FUN_1458875a0(param_1 + 3);
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_145a0f7a4(param_1 + 0xd,local_1c,param_1 + 3);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0f7a4 FUN_145a0f7a4 body=326 status=ok
// SIG undefined FUN_145a0f7a4(void)

undefined4 * FUN_145a0f7a4(longlong param_1,undefined4 *param_2,undefined8 param_3)

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
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145a0f972(param_1,local_48);
  local_40[4] = 0;
  *(undefined4 *)(local_40 + 5) = 0;
  *local_40 = 0;
  local_40[1] = 0;
  *(undefined8 *)((longlong)local_40 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)local_40 + 0x34) = 0;
  local_40[8] = 0;
  *(undefined4 *)(local_40 + 9) = 0;
  FUN_1410b2022(local_40,param_3);
  *(undefined4 *)(local_40 + 10) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = FUN_14144c10c(local_40);
  cVar2 = FUN_145a0f8ec(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x54) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 10) =
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
      FUN_145a0fa56(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0f8ec FUN_145a0f8ec body=133 status=ok
// SIG undefined FUN_145a0f8ec(void)

undefined8 FUN_145a0f8ec(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar2 = FUN_1470ab1b0(), iVar2 != -1)) {
    lVar1 = *param_1;
    lVar3 = (longlong)iVar2 * 0x58;
    *(undefined4 *)(lVar1 + 0x48 + lVar3) = 0;
    if (*(longlong *)(lVar1 + 0x40 + lVar3) != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4((void *)(lVar1 + lVar3));
    memmove((void *)(lVar1 + lVar3),param_3,0x50);
    FUN_1470ab234(param_1,*param_4);
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 145a0f972 FUN_145a0f972 body=227 status=ok
// SIG undefined FUN_145a0f972(void)

int * FUN_145a0f972(longlong *param_1,int *param_2)

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
      FUN_1403e7a24(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x58);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x58) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x58 + *param_1;
  return param_2;
}



// FUNCTION 145a0fa56 FUN_145a0fa56 body=450 status=ok
// SIG undefined FUN_145a0fa56(void)

void FUN_145a0fa56(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x58;
        iVar6 = FUN_14144c10c(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x54 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x50 + lVar10) =
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



// FUNCTION 145a0fc24 FUN_145a0fc24 body=280 status=ok
// SIG undefined FUN_145a0fc24(void)

undefined8 * FUN_145a0fc24(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_14ae3b700;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x1e;
  param_1[0x19] = 0x4008000000000000;
  param_1[0x1a] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x1b) = 0x1000100;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x101) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  local_18 = FUN_140902e46();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_145a0fd3e(param_1 + 0xc,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0fd3e FUN_145a0fd3e body=1 status=ok
// SIG undefined FUN_145a0fd3e(void)

void FUN_145a0fd3e(void)

{
  return;
}



// FUNCTION 145a0fd40 FUN_145a0fd40 body=158 status=ok
// SIG undefined FUN_145a0fd40(void)

bool FUN_145a0fd40(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0fde0 FUN_145a0fde0 body=463 status=ok
// SIG undefined FUN_145a0fde0(void)

void FUN_145a0fde0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x5d70) != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x5d68) + 4;
    lVar3 = (longlong)*(int *)(param_1 + 0x5d70) * 0xc;
    do {
      lVar2 = FUN_144a34e94(lVar5,1);
      if (lVar2 == param_2) {
        lVar3 = FUN_1447210f0(param_1);
        if (lVar3 != 0) {
          lVar3 = FUN_1447210f0(param_1);
          if (*(longlong *)(lVar3 + 0x1f0) == 0) {
            puVar4 = (undefined8 *)(lVar3 + 0x458);
          }
          else {
            puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
          }
          uVar1 = *puVar4;
          local_98 = (undefined8 *)0x0;
          local_90 = 0;
          FUN_1446efa72(&local_98,0,3,0x10);
          puVar4 = local_98;
          local_90 = 3;
          *local_98 = &PTR_LAB_14b95beb0;
          *(undefined2 *)(local_98 + 1) = *(undefined2 *)(lVar5 + -4);
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
          local_98[2] = lVar5;
          *local_98 = &PTR_FUN_14b95be40;
          local_98[3] = 0;
          FUN_14485c47a(local_98 + 3,param_1);
          *(undefined4 *)(puVar4 + 5) = 0;
          puVar4[4] = FUN_14586b43c;
          local_88 = 0;
          local_80 = 0;
          FUN_14487d8d8(&local_88,&local_98);
          local_48 = 1;
          FUN_14016fdb0(uVar1,local_a0,&local_88);
          (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
          FUN_1449db362(&local_98);
        }
        break;
      }
      lVar5 = lVar5 + 0xc;
      lVar3 = lVar3 + -0xc;
    } while (lVar3 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a0ffb0 FUN_145a0ffb0 body=106 status=ok
// SIG undefined FUN_145a0ffb0(void)

undefined8 FUN_145a0ffb0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x430) != 0) {
    lVar3 = FUN_1449db7f2();
    lVar1 = *(longlong *)(param_1 + 0x430);
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_145a10004;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar5 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar5 = lVar1;
        }
        goto LAB_145a10004;
      }
    }
  }
  lVar5 = 0;
LAB_145a10004:
  uVar4 = FUN_145a1001a(lVar5);
  return uVar4;
}



// FUNCTION 145a1001a FUN_145a1001a body=79 status=ok
// SIG undefined FUN_145a1001a(void)

longlong FUN_145a1001a(longlong param_1)

{
  longlong lVar1;
  
  if ((((param_1 == 0) || (*(longlong *)(param_1 + 0x78) == 0)) ||
      (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80) == 0)) ||
     (((lVar1 = FUN_145a1006a(), lVar1 == 0 || (*(longlong *)(lVar1 + 0xa0) == 0)) ||
      (lVar1 = FUN_148b55968(*(longlong *)(lVar1 + 0xa0),param_1), lVar1 == 0)))) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 145a1006a FUN_145a1006a body=105 status=ok
// SIG undefined FUN_145a1006a(void)

void FUN_145a1006a(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1458d5bf2();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_145a100d4(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a100d4 FUN_145a100d4 body=76 status=ok
// SIG undefined FUN_145a100d4(void)

void FUN_145a100d4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1458d5bf2();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_145a10111;
    }
  }
  lVar2 = 0;
LAB_145a10111:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 145a10120 FUN_145a10120 body=108 status=ok
// SIG undefined FUN_145a10120(void)

void FUN_145a10120(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x270) == param_2) {
          FUN_145a1018c(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x270 + *param_1 + 0x268);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 145a1018c FUN_145a1018c body=135 status=ok
// SIG undefined FUN_145a1018c(void)

void FUN_145a1018c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x270;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x26c + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x270 + 0x268);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x268);
  FUN_145cac218(*param_1 + lVar2 + 8);
  FUN_145a10214(param_1,param_2);
  return;
}



// FUNCTION 145a10214 FUN_145a10214 body=124 status=ok
// SIG undefined FUN_145a10214(void)

void FUN_145a10214(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x270) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x270) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x270 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 145a10290 FUN_145a10290 body=254 status=ok
// SIG undefined FUN_145a10290(void)

longlong *
FUN_145a10290(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

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
  FUN_145a10392(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_145a1040a(&local_30,plVar1);
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



// FUNCTION 145a10392 FUN_145a10392 body=120 status=ok
// SIG undefined FUN_145a10392(void)

undefined8 * FUN_145a10392(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b9a07d0;
  FUN_1404e4778(param_1 + 2,param_3);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[2] = &PTR_FUN_14b9a07f0;
  param_1[6] = &PTR_FUN_14b9a0830;
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



// FUNCTION 145a1040a FUN_145a1040a body=162 status=ok
// SIG undefined FUN_145a1040a(void)

void FUN_145a1040a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x48) == plVar2) goto LAB_145a10449;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x48) = plVar2;
      goto LAB_145a10449;
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
LAB_145a10449:
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
                    /* WARNING: Could not recover jumptable at 0x000145a104a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145a104ac FUN_145a104ac body=380 status=ok
// SIG undefined FUN_145a104ac(void)

undefined8 FUN_145a104ac(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == (int)param_2[1]) {
    if (1 < iVar1) {
      lVar5 = 0;
      while( true ) {
        uVar6 = *(ushort *)(*param_1 + lVar5);
        uVar7 = (ulonglong)uVar6;
        uVar3 = *(ushort *)(*param_2 + lVar5);
        if (uVar6 != uVar3) break;
        if (uVar6 == 0) goto LAB_145a10515;
LAB_145a104e8:
        lVar5 = lVar5 + 2;
      }
      if ((uVar3 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar4 = (ulonglong)uVar3;
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar4]) goto LAB_145a104e8;
      }
      if (uVar6 != uVar3) {
        return 0;
      }
    }
  }
  else if ((int)param_2[1] + iVar1 != 1) {
    return 0;
  }
LAB_145a10515:
  iVar1 = (int)param_1[3];
  if (iVar1 == (int)param_2[3]) {
    if (1 < iVar1) {
      lVar5 = 0;
      while( true ) {
        uVar6 = *(ushort *)(param_1[2] + lVar5);
        uVar7 = (ulonglong)uVar6;
        uVar3 = *(ushort *)(param_2[2] + lVar5);
        if (uVar6 != uVar3) break;
        if (uVar6 == 0) goto LAB_145a1057e;
LAB_145a10551:
        lVar5 = lVar5 + 2;
      }
      if ((uVar3 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar4 = (ulonglong)uVar3;
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar4]) goto LAB_145a10551;
      }
      if (uVar6 != uVar3) {
        return 0;
      }
    }
  }
  else if ((int)param_2[3] + iVar1 != 1) {
    return 0;
  }
LAB_145a1057e:
  iVar1 = (int)param_1[5];
  if (iVar1 == (int)param_2[5]) {
    if (1 < iVar1) {
      lVar5 = 0;
      while( true ) {
        uVar6 = *(ushort *)(param_1[4] + lVar5);
        uVar7 = (ulonglong)uVar6;
        uVar3 = *(ushort *)(param_2[4] + lVar5);
        if (uVar6 != uVar3) break;
        if (uVar6 == 0) goto LAB_145a105e3;
LAB_145a105ba:
        lVar5 = lVar5 + 2;
      }
      if ((uVar3 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar4 = (ulonglong)uVar3;
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar4]) goto LAB_145a105ba;
      }
      if (uVar6 != uVar3) {
        return 0;
      }
    }
  }
  else if ((int)param_2[5] + iVar1 != 1) {
    return 0;
  }
LAB_145a105e3:
  if ((int)param_1[7] != (int)param_2[7]) {
    return 0;
  }
  uVar2 = FUN_14144d729(param_1[6],param_2[6]);
  return uVar2;
}



// FUNCTION 145a10628 FUN_145a10628 body=154 status=ok
// SIG undefined FUN_145a10628(void)

bool FUN_145a10628(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a106c4 FUN_145a106c4 body=56 status=ok
// SIG undefined FUN_145a106c4(void)

void FUN_145a106c4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar1 = 0;
  }
  if (lVar1 == param_2) {
    FUN_14144d8ac(param_1);
    FUN_145a106fc(param_1);
    return;
  }
  return;
}



// FUNCTION 145a106fc FUN_145a106fc body=415 status=ok
// SIG undefined FUN_145a106fc(void)

void FUN_145a106fc(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = (**(code **)(*param_1 + 0x180))();
  lVar6 = FUN_1406f612e(uVar5);
  if ((((*(uint *)(param_1 + 1) & 0x10) == 0) && (lVar6 != 0)) && (param_1[4] != 0)) {
    uVar3 = FUN_1408966e4();
    cVar2 = FUN_140d174a2(lVar6,uVar3);
    if (cVar2 != '\0') {
      uVar5 = FUN_145a1089c(param_1);
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        lVar9 = param_1[4];
      }
      else {
        lVar9 = 0;
      }
      cVar2 = FUN_14125be1e(lVar9,uVar5);
      if ((longlong)(int)param_1[0x10] != 0) {
        puVar10 = (undefined8 *)param_1[0xf];
        lVar9 = (longlong)(int)param_1[0x10] * 0xe8;
        do {
          if (cVar2 == '\0') {
            uVar4 = 0;
          }
          else {
            if (puVar10[1] == 0) {
              uVar5 = FUN_141218768();
              uVar5 = FUN_14477b664(uVar5);
              puVar10[1] = uVar5;
            }
            lVar8 = param_1[0x12];
            if (lVar8 == 0) {
              lVar8 = FUN_141218768();
            }
            lVar1 = param_1[0x11];
            uVar7 = FUN_14477b664(lVar8);
            local_50 = lVar1;
            local_5c = FUN_144a7891a(uVar7);
            local_58 = *puVar10;
            uVar5 = puVar10[1];
            uVar4 = FUN_144a7891a(uVar5);
            local_70 = &local_50;
            local_78 = uVar7;
            uVar4 = FUN_144a789b8(uVar4,uVar5,&local_58,local_5c);
          }
          FUN_14144da4e(puVar10,uVar3,lVar6,uVar4);
          puVar10 = puVar10 + 0x1d;
          lVar9 = lVar9 + -0xe8;
        } while (lVar9 != 0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a1089c FUN_145a1089c body=175 status=ok
// SIG undefined FUN_145a1089c(void)

undefined8 FUN_145a1089c(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x90);
  if (lVar4 == 0) {
    uVar3 = FUN_141218768();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x90) = lVar4;
  }
  lVar5 = *(longlong *)(param_1 + 0x98);
  if (lVar5 == 0) {
    if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x88) != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 != '\0')) {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x88));
        *(longlong *)(param_1 + 0x98) = lVar5;
        if (lVar5 == 0) {
          return 0;
        }
        goto LAB_145a108be;
      }
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
    return 0;
  }
LAB_145a108be:
  uVar3 = FUN_14144d9c6(lVar5);
  return uVar3;
}



// FUNCTION 145a1094c FUN_145a1094c body=170 status=ok
// SIG undefined FUN_145a1094c(void)

int FUN_145a1094c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar7 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar7 + uVar3) == *param_2) {
        iVar2 = (int)(uVar3 >> 3) * -0x42108421;
        if (iVar2 != -1) {
          return iVar2;
        }
        break;
      }
      uVar3 = uVar3 + 0xf8;
    } while (lVar5 * 0xf8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145a109f6(param_1,iVar1);
    lVar7 = *param_1;
  }
  plVar6 = (longlong *)(lVar7 + lVar5 * 0xf8);
  *plVar6 = *param_2;
  FUN_1402c781e(plVar6 + 1,param_2 + 1);
  plVar6 = param_2 + 0x16;
  plVar8 = (longlong *)(lVar7 + 0xb0 + lVar5 * 0xf8);
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar8 = *plVar6;
    plVar6 = plVar6 + 1;
    plVar8 = plVar8 + 1;
  }
  return iVar1;
}



// FUNCTION 145a109f6 FUN_145a109f6 body=150 status=ok
// SIG undefined FUN_145a109f6(void)

void FUN_145a109f6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xf8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf8)) {
      uVar5 = uVar4 / 0xf8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145a10a92 FUN_145a10a92 body=228 status=ok
// SIG undefined FUN_145a10a92(void)

longlong FUN_145a10a92(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9ab7b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_1470f8dcf;
    local_40 = &LAB_145f8d8e4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0xa8;
    FUN_14081cfa3(L"/Script/GbxPhysics",L"GbxPhysicsSettings",&DAT_14c9ab7b8,&DAT_1470f8dce);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9ab7b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a10b84 FUN_145a10b84 body=228 status=ok
// SIG undefined FUN_145a10b84(void)

longlong FUN_145a10b84(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5ced8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a54d3a;
    local_38 = &LAB_148692799;
    local_40 = &LAB_145c0946a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x120;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryFODManagerCPU",&DAT_14cb5ced8,&DAT_148692798);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5ced8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a10c70 FUN_145a10c70 body=228 status=ok
// SIG undefined FUN_145a10c70(void)

longlong FUN_145a10c70(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb99ca8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_148aef613;
    local_40 = FUN_14659075d;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x98;
    FUN_14081cfa3(L"/Script/GbxDefaultLoadingScreen",L"GbxDefaultLoadingScreenSettings",
                  &DAT_14cb99ca8,&DAT_148aef612);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb99ca8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a10d5f FUN_145a10d5f body=103 status=ok
// SIG undefined FUN_145a10d5f(void)

void FUN_145a10d5f(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14479d2ce(param_1 + 0x1c);
  lVar2 = FUN_140f4df0c(uVar1);
  if (lVar2 != 0) {
    local_28 = *(undefined4 *)(param_1 + 0x28);
    uStack_24 = *(undefined4 *)(param_1 + 0x2c);
    uStack_20 = *(undefined4 *)(param_1 + 0x30);
    uStack_1c = *(undefined4 *)(param_1 + 0x34);
    FUN_145a10dc8(lVar2 + 0x28,local_30);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a10dc8 FUN_145a10dc8 body=231 status=ok
// SIG undefined FUN_145a10dc8(void)

undefined8 FUN_145a10dc8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b3e7260;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(local_38 + 1) = *param_3;
  *(undefined4 *)((longlong)local_38 + 0xc) = uVar1;
  *(undefined4 *)(local_38 + 2) = uVar2;
  *(undefined4 *)((longlong)local_38 + 0x14) = uVar3;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_38[3] = lVar5;
  *local_38 = &PTR_FUN_14b3e71f0;
  local_38[4] = FUN_145b2174b;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a10eb0 FUN_145a10eb0 body=24 status=ok
// SIG undefined FUN_145a10eb0(void)

void FUN_145a10eb0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145a10ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145a10ec8 FUN_145a10ec8 body=38 status=ok
// SIG undefined FUN_145a10ec8(void)

undefined8 FUN_145a10ec8(undefined8 param_1,int param_2)

{
  FUN_145a10eee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a10eee FUN_145a10eee body=86 status=ok
// SIG undefined FUN_145a10eee(void)

void FUN_145a10eee(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149e443a0;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149e443d0;
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a10f44 FUN_145a10f44 body=40 status=ok
// SIG undefined FUN_145a10f44(void)

undefined8 FUN_145a10f44(undefined8 param_1,int param_2)

{
  FUN_145a10f6c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a10f6c FUN_145a10f6c body=64 status=ok
// SIG undefined FUN_145a10f6c(void)

void FUN_145a10f6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3d5270;
  FUN_145a10fad(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a10fad FUN_145a10fad body=44 status=ok
// SIG undefined FUN_145a10fad(void)

void FUN_145a10fad(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      FUN_14102a02c(param_1);
      param_1 = param_1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145a10fda FUN_145a10fda body=40 status=ok
// SIG undefined FUN_145a10fda(void)

undefined8 FUN_145a10fda(undefined8 param_1,int param_2)

{
  FUN_145a11002();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a11002 FUN_145a11002 body=71 status=ok
// SIG undefined FUN_145a11002(void)

void FUN_145a11002(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b12a310;
  plVar3 = (longlong *)param_1[0xc];
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
  FUN_14117d048(param_1);
  return;
}



// FUNCTION 145a11054 FUN_145a11054 body=65 status=ok
// SIG undefined FUN_145a11054(void)

void FUN_145a11054(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4e4490;
  param_1[4] = &PTR_FUN_14b4e44b8;
  FUN_1449db362(param_1 + 0xc);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_145a11096(param_1);
  return;
}



// FUNCTION 145a11096 FUN_145a11096 body=74 status=ok
// SIG undefined FUN_145a11096(void)

void FUN_145a11096(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_14b4e44c0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1411ebbe4();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145a110dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145a110e0 FUN_145a110e0 body=40 status=ok
// SIG undefined FUN_145a110e0(void)

undefined8 FUN_145a110e0(undefined8 param_1,int param_2)

{
  FUN_145a11108();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a11108 FUN_145a11108 body=68 status=ok
// SIG undefined FUN_145a11108(void)

void FUN_145a11108(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcf3a10;
  FUN_144a76fd2(param_1 + 8);
  FUN_145a1114c(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a1114c FUN_145a1114c body=40 status=ok
// SIG undefined FUN_145a1114c(void)

void FUN_145a1114c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14948596a(param_1);
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 145a11174 FUN_145a11174 body=2053 status=ok
// SIG undefined FUN_145a11174(void)

void FUN_145a11174(longlong param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ushort *puVar9;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  uint local_110;
  int iStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  longlong local_f8;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  uint local_d0;
  int iStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong *local_c0;
  longlong *local_b8;
  undefined2 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  if ((longlong)*(int *)(param_1 + 0x520) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x518);
    lVar7 = (longlong)*(int *)(param_1 + 0x520) * 0x90 + lVar4;
    do {
      if (*(int *)(param_1 + 0x530) != *(int *)(param_1 + 0x55c)) {
        uVar1 = *(ushort *)(lVar4 + 0xc);
        lVar6 = *(longlong *)(param_1 + 0x568);
        if (*(longlong *)(param_1 + 0x568) == 0) {
          lVar6 = param_1 + 0x560;
        }
        iVar8 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x570) - 1U & (uint)uVar1) * 4);
        if (iVar8 != -1) {
          do {
            if (*(ushort *)(*(longlong *)(param_1 + 0x528) + (longlong)iVar8 * 0xc) == uVar1)
            goto LAB_145a114d6;
            iVar8 = *(int *)(*(longlong *)(param_1 + 0x528) + (longlong)iVar8 * 0xc + 4);
          } while (iVar8 != -1);
        }
      }
      FUN_14144e574(param_1,lVar4);
LAB_145a114d6:
      FUN_14144e376(&local_98,&local_e8,(ushort *)(lVar4 + 0xc));
      lVar4 = lVar4 + 0x90;
    } while (lVar4 != lVar7);
  }
  FUN_145a11a6c(param_1 + 0x528,&local_e8,&local_98);
  FUN_145a1197a(param_1 + 0x528,&local_e8);
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_14144e2c2(&local_e8);
  local_e8 = (longlong *)(param_1 + 0x578);
  local_118 = param_1 + 0x588;
  local_120 = 0x100000000;
  local_110 = 0xffffffff;
  iStack_10c = 0;
  local_108 = 0;
  if (*(int *)(param_1 + 0x5a0) != 0) {
    FUN_1449c0562(&local_120);
  }
  local_d0 = local_110;
  iStack_cc = iStack_10c;
  local_c8 = local_108;
  local_c4 = local_104;
  local_e0 = local_120;
  local_d8 = local_118;
  local_b0 = 0;
  local_c0 = local_e8;
  local_b8 = local_e8;
  if (iStack_10c < *(int *)(local_118 + 0x18)) {
    plVar3 = (longlong *)0x0;
    do {
      puVar9 = (ushort *)((longlong)iStack_cc * 0x40 + *local_e8);
      if ((int)uStack_90 != local_64) {
        puVar5 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar5 = local_60;
        }
        for (iVar8 = *(int *)(puVar5 + (ulonglong)(local_50 - 1U & (uint)*puVar9) * 4); iVar8 != -1;
            iVar8 = *(int *)(local_98 + (longlong)iVar8 * 0xc + 4)) {
          if (*(ushort *)(local_98 + (longlong)iVar8 * 0xc) == *puVar9) goto LAB_145a11598;
        }
      }
      if (plVar3 == (longlong *)0x0) {
        uVar2 = FUN_1447210f0(param_1);
        lVar4 = FUN_140149a73(uVar2,0);
        if ((lVar4 != 0) && (plVar3 = (longlong *)FUN_1401499e8(lVar4), plVar3 != (longlong *)0x0))
        goto LAB_145a1192c;
        plVar3 = (longlong *)0x0;
      }
      else {
LAB_145a1192c:
        FUN_1409c5062(&local_120,puVar9 + 8);
        (**(code **)(*plVar3 + 0x78))(plVar3,&local_120,*(undefined8 *)(puVar9 + 4));
        if (local_f8 != 0) {
          FUN_1400020a8();
        }
      }
      FUN_148955628(local_c0);
      local_b0 = CONCAT11(local_b0._1_1_,1);
LAB_145a11598:
      local_d0 = local_d0 & ~local_e0._4_4_;
      FUN_1449c0562(&local_e0);
    } while (iStack_cc < *(int *)(local_d8 + 0x18));
    if (((local_b0 & 1) != 0) && (local_b0._1_1_ == '\x01')) {
      FUN_148955446(local_b8,(int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34));
    }
  }
  plVar3 = (longlong *)(param_1 + 0x5c8);
  local_118 = param_1 + 0x5d8;
  local_120 = 0x100000000;
  local_110 = 0xffffffff;
  iStack_10c = 0;
  local_108 = 0;
  if (*(int *)(param_1 + 0x5f0) != 0) {
    FUN_1449c0562(&local_120);
  }
  local_d0 = local_110;
  iStack_cc = iStack_10c;
  local_c8 = local_108;
  local_c4 = local_104;
  local_e0 = local_120;
  local_d8 = local_118;
  local_b0 = 0;
  local_e8 = plVar3;
  local_c0 = plVar3;
  local_b8 = plVar3;
  if (iStack_10c < *(int *)(local_118 + 0x18)) {
    do {
      puVar9 = (ushort *)((longlong)iStack_cc * 0x20 + *local_e8);
      if ((int)uStack_90 != local_64) {
        puVar5 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar5 = local_60;
        }
        for (iVar8 = *(int *)(puVar5 + (ulonglong)(local_50 - 1U & (uint)*puVar9) * 4); iVar8 != -1;
            iVar8 = *(int *)(local_98 + (longlong)iVar8 * 0xc + 4)) {
          if (*(ushort *)(local_98 + (longlong)iVar8 * 0xc) == *puVar9) goto LAB_145a11688;
        }
      }
      lVar4 = FUN_14479d2ce(puVar9 + 8);
      if ((lVar4 != 0) && (*(longlong *)(puVar9 + 4) != 0)) {
        FUN_14480f766(lVar4 + 0x350);
      }
      FUN_1489558fc(local_c0,iStack_cc);
      local_b0 = CONCAT11(local_b0._1_1_,1);
LAB_145a11688:
      local_d0 = local_d0 & ~local_e0._4_4_;
      FUN_1449c0562(&local_e0);
    } while (iStack_cc < *(int *)(local_d8 + 0x18));
    if (((local_b0 & 1) != 0) && (local_b0._1_1_ == '\x01')) {
      FUN_14895571a(local_b8,(int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34));
    }
  }
  plVar3 = (longlong *)(param_1 + 0x618);
  local_118 = param_1 + 0x628;
  local_120 = 0x100000000;
  local_110 = 0xffffffff;
  iStack_10c = 0;
  local_108 = 0;
  if (*(int *)(param_1 + 0x640) != 0) {
    FUN_1449c0562(&local_120);
  }
  local_d0 = local_110;
  iStack_cc = iStack_10c;
  local_c8 = local_108;
  local_c4 = local_104;
  local_e0 = local_120;
  local_d8 = local_118;
  local_b0 = 0;
  local_e8 = plVar3;
  local_c0 = plVar3;
  local_b8 = plVar3;
  if (iStack_10c < *(int *)(local_118 + 0x18)) {
    do {
      lVar4 = *local_e8;
      if (*(int *)(param_1 + 0x620) != *(int *)(param_1 + 0x64c)) {
        uVar1 = *(ushort *)(lVar4 + (longlong)iStack_cc * 0x20);
        lVar7 = *(longlong *)(param_1 + 0x658);
        if (*(longlong *)(param_1 + 0x658) == 0) {
          lVar7 = param_1 + 0x650;
        }
        iVar8 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x660) - 1U & (uint)uVar1) * 4);
        if (iVar8 != -1) {
          do {
            if (*(ushort *)(*plVar3 + (longlong)iVar8 * 0x20) == uVar1) goto LAB_145a11780;
            iVar8 = *(int *)((longlong)iVar8 * 0x20 + *plVar3 + 0x18);
          } while (iVar8 != -1);
        }
      }
      lVar7 = (longlong)iStack_cc * 0x20;
      if (*(longlong *)(lVar4 + 8 + lVar7) != 0) {
        lVar4 = lVar4 + lVar7;
        if ((*(longlong *)(lVar4 + 0x10) != 0) && (0 < *(int *)(*(longlong *)(lVar4 + 0x10) + 8))) {
          FUN_1401cb356();
          local_130 = *(undefined8 *)(lVar4 + 8);
          local_128 = *(longlong *)(lVar4 + 0x10);
          if (local_128 != 0) {
            LOCK();
            *(int *)(local_128 + 0xc) = *(int *)(local_128 + 0xc) + 1;
            UNLOCK();
          }
          FUN_140d61352(&local_130);
        }
      }
      FUN_148955baa(local_c0,iStack_cc);
      local_b0 = CONCAT11(local_b0._1_1_,1);
LAB_145a11780:
      local_d0 = local_d0 & ~local_e0._4_4_;
      FUN_1449c0562(&local_e0);
    } while (iStack_cc < *(int *)(local_d8 + 0x18));
    if (((local_b0 & 1) != 0) && (local_b0._1_1_ == '\x01')) {
      FUN_1489559c8(local_b8,(int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34));
    }
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14144e2c2(&local_98);
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1197a FUN_145a1197a body=93 status=ok
// SIG undefined FUN_145a1197a(void)

longlong FUN_145a1197a(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_145a119d8(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 145a119d8 FUN_145a119d8 body=148 status=ok
// SIG undefined FUN_145a119d8(void)

longlong * FUN_145a119d8(longlong *param_1,longlong *param_2)

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



// FUNCTION 145a11a6c FUN_145a11a6c body=508 status=ok
// SIG undefined FUN_145a11a6c(void)

undefined8 * FUN_145a11a6c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
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
  plVar5 = param_3;
  if ((int)param_3[1] - *(int *)((longlong)param_3 + 0x34) <
      (int)param_1[1] - *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1;
    param_1 = param_3;
  }
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_145a11e0e(param_2,uVar4);
    iVar2 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar2)) {
      *(int *)(param_2 + 9) = iVar2;
      FUN_145a11c6a(param_2);
    }
  }
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
        uVar1 = *(ushort *)((longlong)iStack_5c * 0xc + *local_78);
        plVar3 = (longlong *)plVar5[8];
        if ((longlong *)plVar5[8] == (longlong *)0x0) {
          plVar3 = plVar5 + 7;
        }
        iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)plVar5[9] - 1U & (uint)uVar1) * 4);
        if (iVar2 != -1) {
          do {
            if (*(ushort *)(*plVar5 + (longlong)iVar2 * 0xc) == uVar1) {
              FUN_14144e376(param_2,&local_50);
              break;
            }
            iVar2 = *(int *)(*plVar5 + (longlong)iVar2 * 0xc + 4);
          } while (iVar2 != -1);
        }
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a11c6a FUN_145a11c6a body=419 status=ok
// SIG undefined FUN_145a11c6a(void)

void FUN_145a11c6a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar8 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar2 + lVar5 * 0xc);
        *(uint *)(lVar2 + 8 + lVar5 * 0xc) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 4 + lVar5 * 0xc) =
             *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 145a11e0e FUN_145a11e0e body=439 status=ok
// SIG undefined FUN_145a11e0e(void)

void FUN_145a11e0e(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1447a08a2(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1447cc1b4(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0xc + -8);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xc) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        uVar3 = 0xffffffff;
        if (0 < *(int *)((longlong)param_1 + 0x34)) {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -3;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 145a11fc6 FUN_145a11fc6 body=39 status=ok
// SIG undefined FUN_145a11fc6(void)

void FUN_145a11fc6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000145a11fe9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 145a11fee FUN_145a11fee body=40 status=ok
// SIG undefined FUN_145a11fee(void)

undefined8 FUN_145a11fee(undefined8 param_1,int param_2)

{
  FUN_145a12016();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a12016 FUN_145a12016 body=59 status=ok
// SIG undefined FUN_145a12016(void)

void FUN_145a12016(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3efe60;
  FUN_1408bc7be(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a12052 FUN_145a12052 body=40 status=ok
// SIG undefined FUN_145a12052(void)

undefined8 FUN_145a12052(undefined8 param_1,int param_2)

{
  FUN_145a1207a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a1207a FUN_145a1207a body=155 status=ok
// SIG undefined FUN_145a1207a(void)

void FUN_145a1207a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac8f3f0;
  param_1[5] = &PTR_FUN_14ac8f9d0;
  param_1[6] = &PTR_LAB_14ac8fa10;
  *(undefined4 *)(param_1 + 0x62) = 0;
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  FUN_145a12116(param_1 + 0x59);
  FUN_145a1214b(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 145a12116 FUN_145a12116 body=53 status=ok
// SIG undefined FUN_145a12116(void)

void FUN_145a12116(longlong *param_1)

{
  FUN_145a12186();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a1214b FUN_145a1214b body=58 status=ok
// SIG undefined FUN_145a1214b(void)

void FUN_145a1214b(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      FUN_144760d56(lVar1);
      FUN_1400020a8(lVar1);
    }
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 145a12186 FUN_145a12186 body=90 status=ok
// SIG undefined FUN_145a12186(void)

void FUN_145a12186(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 145a121e0 FUN_145a121e0 body=40 status=ok
// SIG undefined FUN_145a121e0(void)

undefined8 FUN_145a121e0(undefined8 param_1,int param_2)

{
  FUN_145a12208();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a12208 FUN_145a12208 body=59 status=ok
// SIG undefined FUN_145a12208(void)

void FUN_145a12208(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aeab700;
  if (param_1[8] != 0) {
    plVar1 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a1224e FUN_145a1224e body=88 status=ok
// SIG undefined FUN_145a1224e(void)

undefined8 * FUN_145a1224e(undefined8 *param_1)

{
  FUN_14599f580();
  *param_1 = &PTR_FUN_14b2d6eb0;
  FUN_1447715ec(param_1 + 5,&DAT_14cb7c320);
  FUN_1447715ec(param_1 + 10,&DAT_14cb7c348);
  param_1[0x10] = DAT_14cb7c318;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x41600000;
  return param_1;
}



// FUNCTION 145a122b2 FUN_145a122b2 body=88 status=ok
// SIG undefined FUN_145a122b2(void)

undefined8 * FUN_145a122b2(undefined8 *param_1)

{
  FUN_140eca8ca();
  *param_1 = &PTR_FUN_14b7be670;
  FUN_1447715ec(param_1 + 5,&DAT_14cbce308);
  FUN_1447715ec(param_1 + 10,&DAT_14cbce330);
  param_1[0x10] = DAT_14cbce300;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x3dcccccd;
  return param_1;
}



// FUNCTION 145a1230a FUN_145a1230a body=101 status=ok
// SIG undefined FUN_145a1230a(void)

void FUN_145a1230a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aae6850;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aae67e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 145a12370 FUN_145a12370 body=101 status=ok
// SIG undefined FUN_145a12370(void)

void FUN_145a12370(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aae6930;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aae68c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 145a123dc FUN_145a123dc body=57 status=ok
// SIG undefined FUN_145a123dc(void)

void FUN_145a123dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaaa40 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaaa40 = FUN_140002ddd(FUN_1465d95eb,uVar1,L"OakGameModeConfig");
  }
  return;
}



// FUNCTION 145a12416 FUN_145a12416 body=254 status=ok
// SIG undefined FUN_145a12416(void)

void FUN_145a12416(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined1 *)(param_1 + 0x23bc) = 0;
  FUN_14144f864(param_1,0,0);
  uVar6 = FUN_1447210f0(param_1);
  FUN_1410d53f0(&local_38,uVar6);
  if (plStack_30 != (longlong *)0x0) {
    iVar5 = (int)plStack_30[1];
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)plStack_30[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plStack_30 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar7 = plStack_30;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)plStack_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))();
    }
    lVar3 = local_38;
    if (plVar7 != (longlong *)0x0) {
      if (local_38 != 0) {
        local_38 = 0;
        plStack_30 = (longlong *)0x0;
        local_28 = 0;
        local_50 = 0;
        local_48 = 0x6000;
        local_40 = 0;
        local_58 = 0;
        local_60 = 0;
        local_68 = &local_38;
        FUN_14144f16e(lVar3,param_1,0);
      }
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
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a12516 FUN_145a12516 body=489 status=ok
// SIG undefined FUN_145a12516(void)

void FUN_145a12516(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((char)param_1[0x89] == '\0') &&
     (((*(char *)((longlong)param_1 + 0x4d9) == '\0' ||
       (cVar5 = (**(code **)(*param_1 + 0x498))(param_1), cVar5 == '\x03')) ||
      (cVar5 = (**(code **)(*param_1 + 0x498))(param_1), cVar5 == '\x05')))) {
    if (((param_1[0x8c] != 0) && (param_1[0x8d] != 0)) && (0 < *(int *)(param_1[0x8d] + 8))) {
      FUN_1401cb356();
      local_30 = param_1[0x8c];
      local_28 = param_1[0x8d];
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
        UNLOCK();
      }
      FUN_140d61352(&local_30);
      plVar2 = (longlong *)param_1[0x8d];
      param_1[0x8c] = 0;
      param_1[0x8d] = 0;
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
    uVar6 = FUN_1401cb356();
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,3,0x10);
    puVar3 = local_50;
    local_48 = 3;
    *local_50 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_50[2] = lVar7;
    *local_50 = &PTR_FUN_14b9716c0;
    local_50[3] = 0;
    FUN_14485c47a(local_50 + 3,param_1);
    puVar3[4] = param_1;
    local_58 = 0;
    FUN_1405f67fc(uVar6,local_40,&local_50,L"OakGameInstance.HideLoadingScreen");
    if (local_38 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    FUN_1449db362(&local_50);
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a12700 FUN_145a12700 body=190 status=ok
// SIG undefined FUN_145a12700(void)

void FUN_145a12700(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (*param_2 != 0) {
    cVar1 = FUN_145a127be(param_1,param_2);
    if ((cVar1 == '\0') &&
       ((((((double)param_2[9] != 0.0 || (NAN((double)param_2[9]))) || ((double)param_2[10] != 0.0))
         || ((NAN((double)param_2[10]) || ((double)param_2[0xb] != 0.0)))) ||
        (NAN((double)param_2[0xb]))))) {
      FUN_14144f7ce(*param_2,param_2 + 9);
    }
    cVar1 = FUN_14144f426(param_1);
    if ((cVar1 != '\0') && (cVar1 = FUN_1405a770c(*param_2), cVar1 != '\0')) {
      FUN_14144fcb6(*param_2,&DAT_14cbd3df8,1);
      return;
    }
    return;
  }
  lVar2 = FUN_14479d2ce(param_1 + 8);
  if (lVar2 == 0) {
    return;
  }
  lVar2 = FUN_144a86a6e(lVar2);
  if (lVar2 == 0) {
    return;
  }
  *(undefined1 *)((longlong)param_2 + 0x92) = 1;
  return;
}



// FUNCTION 145a127be FUN_145a127be body=401 status=ok
// SIG undefined FUN_145a127be(void)

ulonglong FUN_145a127be(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 unaff_RBX;
  longlong *plVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_2[3];
  bVar10 = (int)param_2[4] - 1U < 0xfffffffe;
  if ((bVar10 && lVar1 != 0) && (*param_2 != 0)) {
    if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x19c)) {
      uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
      uVar9 = (uint)lVar1 & 0xffff;
      lVar5 = param_1 + 0x1a0;
      if (*(longlong *)(param_1 + 0x1a8) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x1a8);
      }
      iVar6 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(param_1 + 0x1b0) - 1U &
                               (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar9) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar6 != -1) {
        do {
          plVar8 = (longlong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar6 * 0x18);
          if (*plVar8 == lVar1) {
            if (((plVar8 != (longlong *)0x0) && (plVar8 = plVar8 + 1, plVar8 != (longlong *)0x0)) &&
               (cVar3 = FUN_144729dda(plVar8), cVar3 != '\0')) {
              lVar5 = *param_2;
              lVar4 = FUN_14479d2ce(plVar8);
              lVar4 = *(longlong *)(lVar4 + 0x1c8);
              if (lVar4 == 0) {
                local_28 = DAT_14c8464f0;
                local_38 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                uStack_30 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              }
              else {
                local_38 = *(longlong *)(lVar4 + 0x260);
                uStack_30 = *(undefined8 *)(lVar4 + 0x268);
                local_28 = *(undefined8 *)(lVar4 + 0x270);
              }
              puVar7 = &local_38;
              goto LAB_145a128ed;
            }
            break;
          }
          iVar6 = (int)plVar8[2];
        } while (iVar6 != -1);
      }
    }
    lVar4 = param_2[5];
    if (lVar4 == 0) {
      local_38 = param_2[3];
      lVar4 = FUN_14050aea0();
      param_2[5] = lVar4;
      if (lVar4 == 0) goto LAB_145a128f2;
    }
    lVar5 = *param_2;
    puVar7 = (undefined8 *)(lVar4 + 0x68);
LAB_145a128ed:
    FUN_14144f7ce(lVar5,puVar7);
  }
LAB_145a128f2:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar10 && lVar1 != 0) & 0xffffffff;
}



// FUNCTION 145a12950 FUN_145a12950 body=135 status=ok
// SIG undefined FUN_145a12950(void)

void FUN_145a12950(longlong param_1)

{
  undefined2 *puVar1;
  char cVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_140254dde(param_1 + 0x90,0);
  }
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  cVar2 = FUN_144729dda(param_1 + 0x20);
  if ((cVar2 != '\0') && (plVar3 = (longlong *)FUN_1401b2724(param_1), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x990))(plVar3);
  }
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    puVar4 = *(undefined2 **)(param_1 + 0x50);
    puVar1 = puVar4 + (longlong)*(int *)(param_1 + 0x58) * 0xc;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 0xc;
    } while (puVar4 != puVar1);
  }
  return;
}



// FUNCTION 145a129d8 FUN_145a129d8 body=689 status=ok
// SIG undefined FUN_145a129d8(void)

void FUN_145a129d8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ushort uVar12;
  ulonglong uVar13;
  ushort uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_b8 [40];
  longlong local_90;
  int local_88;
  undefined1 local_80 [8];
  longlong local_78;
  int local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar9 = param_1 + 0x10;
  cVar4 = FUN_144729dda(lVar9);
  if (cVar4 == '\0') goto LAB_145a12a40;
  lVar6 = FUN_14479d2ce(lVar9);
  if (*(longlong *)(lVar6 + 0x30) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0x360);
  }
  lVar7 = FUN_14479d2ce(param_1 + 0x110);
  if (lVar7 == lVar6) {
    if ((*(byte *)(param_1 + 0x118) & 1) == 0) goto LAB_145a12a40;
  }
  else {
    *(undefined1 *)(param_1 + 0x118) = 1;
  }
  lVar6 = *(longlong *)(param_1 + 0x108);
  FUN_145a12c8a(param_1);
  if (*(longlong *)(param_1 + 0x108) == 0) {
LAB_145a12a88:
    bVar16 = false;
  }
  else {
    plVar2 = (longlong *)(param_1 + 0x108);
    lVar7 = FUN_14050aea0(plVar2);
    if (lVar7 == 0) goto LAB_145a12a88;
    lVar8 = FUN_14479d2ce(lVar9);
    if (*(longlong *)(lVar8 + 0x30) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(*(longlong *)(lVar8 + 0x30) + 0x360);
    }
    FUN_1410d53f0(&local_68,uVar10);
    if (local_60 == (longlong *)0x0) goto LAB_145a12a88;
    iVar5 = (int)local_60[1];
    do {
      if (iVar5 == 0) {
        plVar11 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_60[1];
      bVar16 = iVar5 == iVar3;
      if (bVar16) {
        *(int *)(local_60 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
      plVar11 = local_60;
    } while (!bVar16);
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
    if (plVar11 == (longlong *)0x0) goto LAB_145a12a88;
    if (local_68 == 0) {
      bVar16 = false;
    }
    else {
      lVar9 = FUN_14479d2ce(lVar9);
      if (*(longlong *)(lVar9 + 0x30) == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x30) + 0x360);
      }
      FUN_14145079c(local_68,&local_68,*plVar2);
      FUN_140902b70(*(undefined8 *)(lVar7 + 0x1b0),local_80);
      FUN_1400021e4(local_80,&local_78);
      local_50 = *(undefined8 *)(lVar9 + 0x18);
      FUN_1400021e4();
      if (local_70 == local_88) {
        if (1 < local_70) {
          lVar9 = 0;
          while( true ) {
            uVar12 = *(ushort *)(local_78 + lVar9);
            uVar13 = (ulonglong)uVar12;
            uVar14 = *(ushort *)(local_90 + lVar9);
            if (uVar12 != uVar14) break;
            if (uVar12 == 0) goto LAB_145a12bea;
LAB_145a12bba:
            lVar9 = lVar9 + 2;
          }
          if ((uVar14 | uVar12) < 0x80) {
            uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
            uVar15 = (ulonglong)uVar14;
            uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
            if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_145a12bba;
          }
          if (uVar12 != uVar14) goto LAB_145a12c83;
        }
LAB_145a12bea:
        cVar4 = FUN_145a13b08(local_68,&local_68);
        if (cVar4 == '\0') goto LAB_145a12c83;
        bVar16 = lVar6 != *plVar2;
      }
      else {
        if (local_88 + local_70 == 1) goto LAB_145a12bea;
LAB_145a12c83:
        bVar16 = true;
      }
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
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
  *(bool *)(param_1 + 0x118) = bVar16;
LAB_145a12a40:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a12c8a FUN_145a12c8a body=378 status=ok
// SIG undefined FUN_145a12c8a(void)

void FUN_145a12c8a(longlong param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar7 = param_1 + 0x10;
  cVar2 = FUN_144729dda(lVar7);
  if (cVar2 != '\0') {
    plVar4 = (longlong *)FUN_14479d2ce(lVar7);
    bVar3 = (**(code **)(*plVar4 + 0x498))(plVar4);
    if (bVar3 < 6) {
      lVar5 = FUN_14479d2ce(lVar7);
      if (*(longlong *)(lVar5 + 0x30) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(*(longlong *)(lVar5 + 0x30) + 0x360);
      }
      FUN_14485c47a(param_1 + 0x110,uVar8);
      FUN_145a12e06(param_1);
      lVar5 = FUN_14479d2ce(lVar7);
      lVar5 = *(longlong *)(lVar5 + 0x478);
      if (lVar5 != 0) {
        FUN_145a13404(param_1,lVar5);
      }
      lVar6 = FUN_14479d2ce(lVar7);
      iVar1 = *(int *)(lVar6 + 0x40);
      if ((longlong)iVar1 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x38);
        lVar9 = 0;
        do {
          if (*(longlong *)(lVar6 + lVar9) != lVar5) {
            FUN_145a13404(param_1);
          }
          lVar9 = lVar9 + 8;
        } while ((longlong)iVar1 * 8 != lVar9);
      }
      lVar7 = FUN_14479d2ce(lVar7);
      lVar7 = *(longlong *)(lVar7 + 0x48);
      if (lVar7 != 0) {
        lVar5 = FUN_140b6d0be();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          if (*(longlong *)(lVar7 + 0x598) == 0) {
            local_48 = 0;
            uStack_40 = 0;
          }
          else {
            FUN_14101ca58(*(longlong *)(lVar7 + 0x598),&local_48);
          }
          FUN_145a14ae4(param_1,&local_48);
          FUN_14101c9fb(local_48,uStack_40 & 0xffffffff);
          if (local_48 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a12e06 FUN_145a12e06 body=238 status=ok
// SIG undefined FUN_145a12e06(void)

void FUN_145a12e06(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar4 = FUN_144729dda(param_1 + 0x10);
  if (cVar4 != '\0') {
    lVar6 = FUN_14479d2ce(param_1 + 0x10);
    if (*(longlong *)(lVar6 + 0x30) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 0x30) + 0x360);
    }
    FUN_14132b09a(&local_28,uVar7);
    if (local_20 != (longlong *)0x0) {
      iVar5 = (int)local_20[1];
      do {
        if (iVar5 == 0) {
          plVar8 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_20[1];
        bVar9 = iVar5 == iVar3;
        if (bVar9) {
          *(int *)(local_20 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
        plVar8 = local_20;
      } while (!bVar9);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20 + 0x10))();
      }
      if (plVar8 != (longlong *)0x0) {
        if (local_28 != 0) {
          FUN_14132cab0();
          FUN_145a12ef6(param_1 + 0x20);
          FUN_145a12f40(param_1 + 0x70);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a12ef6 FUN_145a12ef6 body=73 status=ok
// SIG undefined FUN_145a12ef6(void)

void FUN_145a12ef6(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) == 0x10) {
    FUN_145a13174(param_1);
    FUN_145a12f8a(param_1,4);
    return;
  }
  FUN_145a12f8a(param_1,4);
  *(undefined4 *)(param_1 + 0x48) = 0x10;
  FUN_145a13ba0(param_1);
  return;
}



// FUNCTION 145a12f40 FUN_145a12f40 body=73 status=ok
// SIG undefined FUN_145a12f40(void)

void FUN_145a12f40(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) == 0x10) {
    FUN_145a132ac(param_1);
    FUN_145a12ff2(param_1,4);
    return;
  }
  FUN_145a12ff2(param_1,4);
  *(undefined4 *)(param_1 + 0x48) = 0x10;
  FUN_145a13d8a(param_1);
  return;
}



// FUNCTION 145a12f8a FUN_145a12f8a body=103 status=ok
// SIG undefined FUN_145a12f8a(void)

void FUN_145a12f8a(longlong param_1,int param_2)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)(param_2 + 0x1fU & 0xffffffe0) <= *(int *)(param_1 + 0x2c)) &&
     (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145a12ff2 FUN_145a12ff2 body=385 status=ok
// SIG undefined FUN_145a12ff2(void)

void FUN_145a12ff2(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_78 + 8 + (longlong)iStack_5c * 0x20);
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
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)(param_2 + 0x1fU & 0xffffffe0)) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a13174 FUN_145a13174 body=310 status=ok
// SIG undefined FUN_145a13174(void)

void FUN_145a13174(longlong *param_1)

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
        do {
          local_60 = uVar2;
          *(undefined4 *)
           ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
               0xffffffff;
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
          FUN_1449c0562(&local_70);
          iVar4 = local_60._4_4_;
          uVar2 = local_60;
        } while (local_60._4_4_ != iVar6);
      } while (((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1) || (local_78 != param_1));
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



// FUNCTION 145a132ac FUN_145a132ac body=342 status=ok
// SIG undefined FUN_145a132ac(void)

void FUN_145a132ac(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
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
    local_38 = 0;
    iVar6 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar2 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, local_48 != plVar1)) {
      do {
        do {
          local_60 = uVar2;
          *(undefined4 *)
           ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
               0xffffffff;
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
          FUN_1449c0562(&local_70);
          iVar4 = local_60._4_4_;
          uVar2 = local_60;
        } while (local_60._4_4_ != iVar6);
      } while ((local_68 != plVar1) || (local_78 != param_1));
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



// FUNCTION 145a13404 FUN_145a13404 body=325 status=ok
// SIG undefined FUN_145a13404(void)

void FUN_145a13404(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  int local_48;
  undefined1 local_44;
  longlong local_40;
  longlong *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  cVar1 = FUN_144729dda(param_1 + 0x10);
  if ((param_2 != 0) && (cVar1 != '\0')) {
    iVar2 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0xa4);
    local_48 = (iVar2 + *(int *)(param_1 + 0x28)) - *(int *)(param_1 + 0x54);
    local_30 = &local_48;
    local_44 = iVar2 == *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x28);
    local_38 = &local_40;
    FUN_145a1354a(param_1 + 0x20,local_24);
    lVar4 = local_40;
    lVar3 = FUN_14479d2ce(param_1 + 0x10);
    if (*(longlong *)(lVar3 + 0x30) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
    }
    lVar4 = FUN_140334a94(lVar4,uVar5);
    if (lVar4 != 0) {
      lVar3 = FUN_144a5dd5e();
      if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
         (*(longlong *)(lVar4 + 0x398) != 0)) {
        lVar3 = FUN_144a7b4ca();
        if (((*(longlong *)(lVar4 + 0x398) != 0) && (lVar3 != 0)) &&
           ((lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x398) + 0x10), lVar4 != 0 &&
            ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
              lVar3 + 0x30)))))) {
          FUN_145a13f8a(param_1,local_40);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1354a FUN_145a1354a body=323 status=ok
// SIG undefined FUN_145a1354a(void)

undefined4 * FUN_145a1354a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145a13710(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_145a1368e(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
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
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145a13ba0(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1368e FUN_145a1368e body=130 status=ok
// SIG undefined FUN_145a1368e(void)

undefined8 FUN_145a1368e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_148d37344((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145a13710 FUN_145a13710 body=240 status=ok
// SIG undefined FUN_145a13710(void)

int * FUN_145a13710(longlong *param_1,int *param_2)

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



// FUNCTION 145a13800 FUN_145a13800 body=326 status=ok
// SIG undefined FUN_145a13800(void)

longlong * FUN_145a13800(longlong param_1,longlong param_2)

{
  longlong *_Dst;
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((param_2 == 0) || (lVar8 = FUN_14479d2ce(param_1 + 8), lVar8 == 0)) {
    return (longlong *)0x0;
  }
  FUN_14144fccc(param_1,param_2,0);
  iVar1 = *(int *)(param_1 + 0x238);
  uVar7 = iVar1 + 1;
  *(uint *)(param_1 + 0x238) = uVar7;
  if (*(uint *)(param_1 + 0x23c) < uVar7) {
    FUN_145a13946(param_1 + 0x230);
  }
  lVar8 = (longlong)iVar1 * 0x98;
  _Dst = (longlong *)(*(longlong *)(param_1 + 0x230) + lVar8);
  lVar8 = *(longlong *)(param_1 + 0x230) + lVar8;
  memset(_Dst,0,0x98);
  *(undefined4 *)(lVar8 + 0x20) = 0x6000;
  *(undefined8 *)(lVar8 + 0x28) = 0;
  *(undefined8 *)(lVar8 + 0x30) = 0;
  *(undefined4 *)(lVar8 + 0x38) = 0x6000;
  uVar2 = DAT_14c8464e8;
  *(undefined8 *)(lVar8 + 0x48) = DAT_14c8464e0;
  *(undefined8 *)(lVar8 + 0x50) = uVar2;
  *(undefined8 *)(lVar8 + 0x58) = DAT_14c8464f0;
  *(undefined8 *)(lVar8 + 0x70) = DAT_14c846508;
  uVar5 = DAT_14c846500._4_4_;
  uVar4 = (undefined4)DAT_14c846500;
  uVar3 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(lVar8 + 0x60) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)(lVar8 + 100) = uVar3;
  *(undefined4 *)(lVar8 + 0x68) = uVar4;
  *(undefined4 *)(lVar8 + 0x6c) = uVar5;
  *(undefined8 *)(lVar8 + 0x85) = 0;
  *(undefined8 *)(lVar8 + 0x8d) = 0;
  *(undefined8 *)(lVar8 + 0x78) = 0;
  *(undefined8 *)(lVar8 + 0x80) = 0;
  FUN_14485c47a(lVar8 + 0x10,param_2);
  FUN_14144fe08(param_1,_Dst);
  cVar6 = FUN_14144f426(param_1);
  if (cVar6 != '\0') {
    return _Dst;
  }
  cVar6 = *(char *)(param_1 + 0x2a0);
  *(char *)(param_1 + 0x2a0) = cVar6 + '\x01';
  *(char *)(_Dst + 0x11) = cVar6;
  if (*(char *)(param_1 + 0x2a0) == '\0') {
    *(undefined1 *)(param_1 + 0x2a0) = 1;
  }
  if (*_Dst == 0) {
    return _Dst;
  }
  FUN_14144fcb6(*_Dst,&DAT_14cbd3e00,1);
  return _Dst;
}



// FUNCTION 145a13946 FUN_145a13946 body=146 status=ok
// SIG undefined FUN_145a13946(void)

void FUN_145a13946(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x98,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x98)) {
      uVar5 = uVar4 / 0x98 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x98,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145a139d8 FUN_145a139d8 body=62 status=ok
// SIG undefined FUN_145a139d8(void)

void FUN_145a139d8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145a13a16(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x98,8);
  }
  return;
}



// FUNCTION 145a13a16 FUN_145a13a16 body=109 status=ok
// SIG undefined FUN_145a13a16(void)

ulonglong FUN_145a13a16(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x98) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x98,8);
      uVar1 = uVar1 / 0x98;
    }
  }
  return uVar1;
}



// FUNCTION 145a13a84 FUN_145a13a84 body=131 status=ok
// SIG undefined FUN_145a13a84(void)

void FUN_145a13a84(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x98);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x98);
    memmove(_Dst,(void *)((longlong)_Dst + 0x98),(longlong)(int)(~param_2 + iVar5) * 0x98);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 145a13b08 FUN_145a13b08 body=152 status=ok
// SIG undefined FUN_145a13b08(void)

undefined8 FUN_145a13b08(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x19c)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar3 = param_1 + 0x1a0;
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1a8);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x1b0) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        bVar7 = *(longlong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar6 * 0x18) == lVar1;
        uVar4 = CONCAT71((int7)(int3)((uint)iVar6 >> 8),bVar7);
        if (bVar7) {
          return uVar4;
        }
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar6 * 0x18 + 0x10);
      } while (iVar6 != -1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 145a13ba0 FUN_145a13ba0 body=489 status=ok
// SIG undefined FUN_145a13ba0(void)

void FUN_145a13ba0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 145a13d8a FUN_145a13d8a body=510 status=ok
// SIG undefined FUN_145a13d8a(void)

void FUN_145a13d8a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar8 = (longlong)iVar12 * 0x20;
        plVar10 = *(longlong **)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar9 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar9;
        *(int *)(lVar4 + lVar8 + 0x1c) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + lVar8 + 0x18) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a13f8a FUN_145a13f8a body=1520 status=ok
// SIG undefined FUN_145a13f8a(void)

void FUN_145a13f8a(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined *puVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  ulonglong *puVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  bool bVar20;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  longlong local_160;
  longlong *local_158;
  undefined8 *local_150;
  undefined4 local_148;
  undefined8 *local_140;
  longlong local_138;
  undefined8 local_128;
  undefined1 local_120 [24];
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8 [12];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined8 uStack_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar1 = param_1 + 0x10;
  cVar4 = FUN_144729dda(lVar1);
  if (cVar4 == '\0') goto LAB_145a14429;
  lVar6 = FUN_14479d2ce(lVar1);
  if (*(longlong *)(lVar6 + 0x30) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(longlong *)(lVar6 + 0x30) + 0x360);
  }
  FUN_14132b09a(&local_108,uVar8);
  if (local_100 == (longlong *)0x0) goto LAB_145a14429;
  iVar5 = (int)local_100[1];
  do {
    if (iVar5 == 0) {
      plVar15 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar3 = (int)local_100[1];
    bVar20 = iVar5 == iVar3;
    if (bVar20) {
      *(int *)(local_100 + 1) = iVar5 + 1;
      iVar3 = iVar5;
    }
    iVar5 = iVar3;
    UNLOCK();
    plVar15 = local_100;
  } while (!bVar20);
  LOCK();
  piVar2 = (int *)((longlong)local_100 + 0xc);
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (*piVar2 == 0) {
    (**(code **)(*local_100 + 0x10))();
  }
  lVar6 = local_108;
  if (plVar15 == (longlong *)0x0) goto LAB_145a14429;
  if (local_108 != 0) {
    lVar7 = FUN_14479d2ce(lVar1);
    if (*(longlong *)(lVar7 + 0x30) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(*(longlong *)(lVar7 + 0x30) + 0x360);
    }
    local_168 = param_3;
    FUN_1410d53f0(&local_108,uVar8);
    if (local_100 != (longlong *)0x0) {
      iVar5 = (int)local_100[1];
      do {
        if (iVar5 == 0) {
          plVar19 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_100[1];
        bVar20 = iVar5 == iVar3;
        if (bVar20) {
          *(int *)(local_100 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
        plVar19 = local_100;
      } while (!bVar20);
      LOCK();
      piVar2 = (int *)((longlong)local_100 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_100 + 0x10))();
      }
      lVar7 = local_108;
      if (plVar19 != (longlong *)0x0) {
        local_160 = lVar6;
        if (local_108 != 0) {
          FUN_14145079c(local_108,local_120,*(undefined8 *)(param_1 + 0x108));
          lVar6 = FUN_141446784(lVar7,local_120);
          if (lVar6 == 0) {
LAB_145a14465:
            lVar6 = 0;
          }
          else {
            lVar7 = FUN_14099530a();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_145a14465;
          }
          local_128 = 0;
          FUN_14485c47a(&local_128,lVar6);
          cVar4 = FUN_144729dda(&local_128);
          if (cVar4 != '\0') {
            lVar7 = FUN_145a15566();
            lVar6 = *(longlong *)(lVar7 + 0x40);
            if (lVar6 == 0) {
              uVar8 = FUN_1458eaa58();
              lVar6 = FUN_14477b664(uVar8);
              *(longlong *)(lVar7 + 0x40) = lVar6;
            }
            plVar9 = *(longlong **)(lVar7 + 0x48);
            if (((plVar9 == (longlong *)0x0) && (plVar9 = (longlong *)0x0, lVar6 != 0)) &&
               (*(longlong *)(lVar7 + 0x38) != 0)) {
              plVar9 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar9 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar4 == '\0')) {
                plVar9 = (longlong *)0x0;
              }
              else {
                uVar8 = (**(code **)(*plVar9 + 0x110))(plVar9);
                plVar9 = (longlong *)FUN_144aff482(uVar8,(longlong *)(lVar7 + 0x38));
              }
              *(longlong **)(lVar7 + 0x48) = plVar9;
            }
            if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
              uVar11 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
              uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
              lVar6 = param_1 + 0x58;
              if (*(longlong *)(param_1 + 0x60) != 0) {
                lVar6 = *(longlong *)(param_1 + 0x60);
              }
              iVar5 = *(int *)(lVar6 + (ulonglong)
                                       (*(int *)(param_1 + 0x68) - 1U & (uVar11 >> 0x10 ^ uVar11)) *
                                       4);
              if (iVar5 != -1) {
                do {
                  puVar17 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar5 * 0x18);
                  if (*puVar17 == param_2) {
                    if ((puVar17 != (ulonglong *)0x0) &&
                       (puVar17 = puVar17 + 1, puVar17 != (ulonglong *)0x0)) {
                      local_f8 = 0;
                      puVar16 = &DAT_14c846480;
                      puVar18 = local_e8;
                      for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
                        *puVar18 = *puVar16;
                        puVar16 = puVar16 + 1;
                        puVar18 = puVar18 + 1;
                      }
                      local_88 = 0;
                      uStack_80 = 0;
                      local_78 = 0;
                      local_70 = 0;
                      uStack_68 = 0;
                      uStack_64 = 0;
                      local_60 = 0;
                      uStack_5c = 0;
                      puVar12 = &DAT_14cbcb028;
                      if (DAT_14cbcb048 != (undefined *)0x0) {
                        puVar12 = DAT_14cbcb048;
                      }
                      iVar5 = (int)*puVar17;
                      plVar13 = (longlong *)(puVar12 + (longlong)iVar5 * 8);
                      if (DAT_14cbcb050 <= iVar5) {
                        plVar13 = &DAT_14cbcb058;
                      }
                      if (iVar5 < 0) {
                        plVar13 = &DAT_14cbcb058;
                      }
                      local_108 = *plVar13;
                      local_f0 = local_168;
                      local_158 = plVar15;
                      local_100 = plVar9;
                      FUN_145a14650(local_168,&local_140);
                      if ((DAT_14c872bf2 == '\x01') &&
                         ((local_140 == (undefined8 *)0x0 || (local_140 == DAT_14cb71810)))) {
                        local_f0 = 0;
                        local_f8 = FUN_148d32638(param_1);
                        if (local_f8 == 0) {
                          puVar16 = (undefined8 *)0x0;
                        }
                        else {
                          puVar14 = &DAT_14c9485f0;
                          if (*(undefined4 **)(local_f8 + 8) != (undefined4 *)0x0) {
                            puVar14 = *(undefined4 **)(local_f8 + 8);
                          }
                          FUN_1447325ac(puVar14,&local_150,1);
                          puVar16 = local_150;
                        }
                      }
                      else {
                        FUN_1447715ec(&DAT_14cbca458,&DAT_14c9485f0);
                        puVar16 = local_140;
                      }
                      uVar8 = FUN_14479d2ce(&local_128);
                      FUN_145a145da(uVar8,local_e8,(int)*puVar17);
                      uVar8 = local_128;
                      if ((int)*puVar17 == 0) {
                        uVar10 = FUN_14479d2ce(lVar1);
                        local_150 = (undefined8 *)0x0;
                        local_148 = 0;
                        FUN_1446efa72(&local_150,0,3,0x10);
                        puVar18 = local_150;
                        local_148 = 3;
                        *local_150 = &PTR_LAB_14b40e8d0;
                        LOCK();
                        UNLOCK();
                        lVar6 = DAT_14c758608 + 1;
                        lVar1 = DAT_14c758608 + 1;
                        if (lVar6 == 0) {
                          LOCK();
                          UNLOCK();
                          lVar6 = DAT_14c758608 + 2;
                          lVar1 = DAT_14c758608 + 2;
                        }
                        DAT_14c758608 = lVar1;
                        local_150[2] = lVar6;
                        *local_150 = &PTR_FUN_14b971b10;
                        local_150[3] = 0;
                        FUN_14485c47a(local_150 + 3,uVar10);
                        puVar18[4] = uVar8;
                        puVar18[5] = puVar16;
                        FUN_144a450dc(&local_60,&local_150);
                        FUN_1449db362(&local_150);
                      }
                      FUN_145a14736(local_160,&local_108);
                      if (local_138 != 0) {
                        FUN_1400020a8();
                      }
                      FUN_145a1457c(&local_108);
                      plVar15 = local_158;
                    }
                    break;
                  }
                  iVar5 = (int)puVar17[2];
                } while (iVar5 != -1);
              }
            }
          }
        }
        LOCK();
        plVar9 = plVar19 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar2 = (int *)((longlong)plVar19 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
    }
  }
  LOCK();
  plVar19 = plVar15 + 1;
  *(int *)plVar19 = (int)*plVar19 + -1;
  UNLOCK();
  if ((int)*plVar19 == 0) {
    (**(code **)*plVar15)(plVar15);
    LOCK();
    piVar2 = (int *)((longlong)plVar15 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
LAB_145a14429:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a1457c FUN_145a1457c body=94 status=ok
// SIG undefined FUN_145a1457c(void)

void FUN_145a1457c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0xa8);
  plVar3 = *(longlong **)(param_1 + 0xa0);
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
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a145da FUN_145a145da body=118 status=ok
// SIG undefined FUN_145a145da(void)

undefined8 FUN_145a145da(longlong param_1,undefined8 *param_2,int param_3)

{
  float fVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (param_3 < *(int *)(param_1 + 0x2958)) {
    lVar3 = *(longlong *)(param_1 + 0x2950);
    lVar4 = *(longlong *)(lVar3 + (longlong)param_3 * 8);
    if (lVar4 != 0) {
      dVar2 = *(double *)(lVar4 + 0x290);
      fVar1 = *(float *)(lVar4 + 0x640);
      puVar7 = (undefined8 *)(lVar4 + 0x240);
      puVar8 = param_2;
      for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      auVar5._8_4_ = SUB84((double)param_2[5] + 0.0,0);
      auVar5._0_8_ = (double)param_2[4] + 0.0;
      auVar5._12_4_ = (int)((ulonglong)((double)param_2[5] + 0.0) >> 0x20);
      *(undefined1 (*) [16])(param_2 + 4) = auVar5;
      param_2[6] = (double)(-fVar1 * (float)dVar2) + (double)param_2[6];
      param_2[7] = (double)param_2[7] + 0.0;
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 145a14650 FUN_145a14650 body=228 status=ok
// SIG undefined FUN_145a14650(void)

undefined8 * FUN_145a14650(longlong param_1,undefined8 *param_2)

{
  void **ppvVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  ppvVar1 = (void **)(param_2 + 1);
  param_2[1] = 0;
  param_2[2] = 0;
  lVar2 = FUN_1403b0700();
  *param_2 = *(undefined8 *)(lVar2 + 0x38);
  FUN_14131c9ee(param_1 + 0xd50,&local_38,&DAT_14cbcfbd8);
  _Src = local_38;
  if (ppvVar1 == &local_38 || local_2c == -1) {
LAB_145a146b7:
    if (local_2c == -1) goto LAB_145a146bc;
  }
  else {
    *(int *)(param_2 + 2) = local_30;
    if ((longlong)local_30 != 0) {
      FUN_1446dd670(ppvVar1,local_30,0);
      memcpy(*ppvVar1,_Src,(longlong)local_30 * 2);
      goto LAB_145a146b7;
    }
    *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8(local_38);
  }
LAB_145a146bc:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145a14736 FUN_145a14736 body=658 status=ok
// SIG undefined FUN_145a14736(void)

void FUN_145a14736(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  code *local_188 [2];
  undefined8 *local_178;
  code *local_148 [2];
  undefined8 local_138;
  undefined **local_128;
  longlong local_120;
  longlong local_118;
  longlong local_108;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar3 = *param_2;
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar5 = (uint)lVar3 & 0xffff;
    uVar4 = (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar5) +
            (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar5 >> 4);
    lVar7 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x60);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x68) - 1U & uVar4) * 4);
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(param_1 + 0x20);
      do {
        lVar8 = lVar7 + (longlong)iVar6 * 0x20;
        if (*(longlong *)(lVar7 + (longlong)iVar6 * 0x20) == lVar3) {
          if ((lVar8 != 0) && (lVar8 = lVar8 + 8, lVar8 != 0)) {
            if (*(int *)(param_1 + 0x88) == *(int *)(param_1 + 0xb4)) goto LAB_145a14826;
            lVar7 = param_1 + 0xb8;
            if (*(longlong *)(param_1 + 0xc0) != 0) {
              lVar7 = *(longlong *)(param_1 + 0xc0);
            }
            iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 200) - 1U & uVar4) * 4);
            if (iVar6 == -1) goto LAB_145a14826;
            goto LAB_145a14965;
          }
          break;
        }
        iVar6 = *(int *)(lVar8 + 0x18);
      } while (iVar6 != -1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_1b8);
  while (iVar6 = *(int *)(lVar7 + 0xd0), iVar6 != -1) {
LAB_145a14965:
    lVar7 = *(longlong *)(param_1 + 0x80) + (longlong)iVar6 * 0xe0;
    if (*(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar6 * 0xe0) == lVar3) {
      if (lVar7 != -0x10 && lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_1b8);
      }
      break;
    }
  }
LAB_145a14826:
  local_108 = param_1;
  FUN_145a14a00(local_f8,param_2);
  local_118 = *param_2;
  local_138 = 0;
  local_128 = &PTR_LAB_14b40e720;
  local_148[0] = FUN_143d894ba;
  local_188[0] = (code *)0x0;
  local_120 = param_1;
  puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  *puVar2 = &PTR_FUN_14b40e700;
  puVar2[2] = local_108;
  local_178 = puVar2;
  FUN_145a14a00(puVar2 + 4,local_f8);
  if (puVar2 != (undefined8 *)&DAT_fffffffffffffff0) {
    local_188[0] = FUN_143d893c0;
  }
  local_198 = 0;
  cVar1 = FUN_145a163cc(param_1,lVar8,local_188,local_148);
  if (cVar1 == '\0') {
    FUN_1488b5df6((longlong *)(param_1 + 0x20),param_2);
    lVar3 = FUN_14479d2ce(lVar8);
    if (lVar3 != 0) {
      FUN_140aeefbc(lVar3,0,1);
    }
    FUN_14144ff90(param_1,param_2);
  }
  FUN_145a1457c(local_f8);
  if ((local_38 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a14a00 FUN_145a14a00 body=227 status=ok
// SIG undefined FUN_145a14a00(void)

undefined8 * FUN_145a14a00(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = param_2;
  puVar4 = param_1;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x10] = 0;
  iVar1 = *(int *)(param_2 + 0x11);
  _Src = (void *)param_2[0x10];
  *(int *)(param_1 + 0x11) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x10,iVar1,0);
    memcpy((void *)param_1[0x10],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  param_1[0x13] = param_2[0x13];
  lVar2 = param_2[0x14];
  param_1[0x14] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_145989806(param_1 + 0x15,param_2 + 0x15);
  return param_1;
}



// FUNCTION 145a14ae4 FUN_145a14ae4 body=2637 status=ok
// SIG undefined FUN_145a14ae4(void)

void FUN_145a14ae4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong ****pppplVar2;
  longlong ****pppplVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong ****pppplVar12;
  int iVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  longlong ****pppplVar16;
  longlong *plVar17;
  longlong *plVar18;
  byte bVar19;
  undefined8 *puVar20;
  longlong lVar21;
  byte *pbVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  longlong ****pppplVar28;
  bool bVar29;
  bool bVar30;
  undefined1 auStack_1d8 [40];
  longlong ***local_1b0;
  longlong ***local_1a8;
  longlong local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong ***local_188;
  longlong local_180;
  longlong *local_178;
  int local_170;
  undefined4 local_16c;
  undefined1 local_168 [28];
  undefined1 local_14c [4];
  longlong ***local_148;
  longlong local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong *local_128;
  undefined8 local_120;
  longlong lStack_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined2 local_f0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar10 = param_1 + 0x10;
  cVar6 = FUN_144729dda(lVar10);
  if (cVar6 == '\0') goto LAB_145a14d58;
  plVar8 = (longlong *)FUN_14479d2ce(lVar10);
  if (*(code **)(*plVar8 + 0x498) == (code *)&LAB_14015c36e) {
    cVar6 = (char)plVar8[0x42];
  }
  else {
    cVar6 = (**(code **)(*plVar8 + 0x498))(plVar8);
  }
  if (cVar6 == '\b') goto LAB_145a14d58;
  lVar9 = FUN_14479d2ce(lVar10);
  if (*(longlong *)(lVar9 + 0x30) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(*(longlong *)(lVar9 + 0x30) + 0x360);
  }
  FUN_14132b09a(&local_128,uVar11);
  if (local_120 == (longlong ****)0x0) goto LAB_145a14d58;
  iVar13 = *(int *)(local_120 + 1);
  do {
    if (iVar13 == 0) {
      pppplVar16 = (longlong ****)0x0;
      break;
    }
    LOCK();
    iVar4 = *(int *)(local_120 + 1);
    bVar29 = iVar13 == iVar4;
    if (bVar29) {
      *(int *)(local_120 + 1) = iVar13 + 1;
      iVar4 = iVar13;
    }
    iVar13 = iVar4;
    UNLOCK();
    pppplVar16 = local_120;
  } while (!bVar29);
  LOCK();
  piVar1 = (int *)((longlong)local_120 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (*(code *)(*local_120)[2])();
  }
  plVar8 = local_128;
  if (pppplVar16 == (longlong ****)0x0) goto LAB_145a14d58;
  if (local_128 != (longlong *)0x0) {
    lVar10 = FUN_14479d2ce(lVar10);
    if (*(longlong *)(lVar10 + 0x30) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(*(longlong *)(lVar10 + 0x30) + 0x360);
    }
    FUN_1410d53f0(&local_128,uVar11);
    if (local_120 != (longlong ****)0x0) {
      iVar13 = *(int *)(local_120 + 1);
      do {
        if (iVar13 == 0) {
          pppplVar28 = (longlong ****)0x0;
          break;
        }
        LOCK();
        iVar4 = *(int *)(local_120 + 1);
        bVar29 = iVar13 == iVar4;
        if (bVar29) {
          *(int *)(local_120 + 1) = iVar13 + 1;
          iVar4 = iVar13;
        }
        iVar13 = iVar4;
        UNLOCK();
        pppplVar28 = local_120;
      } while (!bVar29);
      LOCK();
      piVar1 = (int *)((longlong)local_120 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*local_120)[2])();
      }
      plVar18 = local_128;
      if (pppplVar28 != (longlong ****)0x0) {
        if (local_128 != (longlong *)0x0) {
          lVar9 = FUN_145a15566();
          lVar10 = *(longlong *)(lVar9 + 0x40);
          if (lVar10 == 0) {
            uVar11 = FUN_1458eaa58();
            lVar10 = FUN_14477b664(uVar11);
            *(longlong *)(lVar9 + 0x40) = lVar10;
          }
          pppplVar12 = *(longlong *****)(lVar9 + 0x48);
          if (pppplVar12 == (longlong ****)0x0) {
            if ((lVar10 != 0) && (*(longlong *)(lVar9 + 0x38) != 0)) {
              local_190 = plVar8;
              plVar8 = *(longlong **)(lVar10 + 0xb8);
              if ((plVar8 == (longlong *)0x0) ||
                 (cVar6 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar6 == '\0')) {
                *(undefined8 *)(lVar9 + 0x48) = 0;
              }
              else {
                uVar11 = (**(code **)(*plVar8 + 0x110))(plVar8);
                pppplVar12 = (longlong ****)FUN_144aff482(uVar11,(longlong *)(lVar9 + 0x38));
                *(longlong *****)(lVar9 + 0x48) = pppplVar12;
                plVar8 = local_190;
                if (pppplVar12 != (longlong ****)0x0) goto LAB_145a14c74;
              }
            }
          }
          else {
LAB_145a14c74:
            FUN_14145079c(plVar18,local_168,*(undefined8 *)(param_1 + 0x108));
            lVar10 = FUN_141446784(plVar18,local_168);
            if (lVar10 != 0) {
              lVar9 = FUN_14099530a();
              if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
                local_178 = (longlong *)0x0;
                iVar13 = *(int *)(param_2 + 1);
                uVar11 = *param_2;
                local_180 = lVar10;
                if (iVar13 == 0) {
                  local_16c = 0;
                  iVar23 = 0;
                }
                else {
                  local_1b0 = (longlong ***)pppplVar16;
                  local_1a8 = (longlong ***)pppplVar28;
                  local_1a0 = param_1;
                  local_190 = plVar8;
                  local_188 = (longlong ***)pppplVar12;
                  local_170 = iVar13;
                  FUN_145a156ea(&local_178,iVar13);
                  FUN_145a15537(local_178,uVar11,iVar13);
                  iVar4 = local_170;
                  plVar18 = local_178;
                  lVar10 = (longlong)local_170;
                  if (lVar10 == 0) {
                    iVar23 = 0;
                    pppplVar16 = (longlong ****)local_1b0;
                    plVar8 = local_190;
                    pppplVar12 = (longlong ****)local_188;
                    param_1 = local_1a0;
                    pppplVar28 = (longlong ****)local_1a8;
                    iVar13 = local_170;
                  }
                  else {
                    local_198 = local_178 + 9;
                    iVar23 = 0;
                    bVar19 = *(byte *)(local_178 + 2);
                    iVar25 = 0;
                    do {
                      lVar9 = (longlong)iVar25;
                      iVar13 = iVar25 + 1;
                      if (iVar25 + 1 < iVar4) {
                        iVar13 = iVar4;
                      }
                      pbVar22 = (byte *)(local_198 + lVar9 * 7);
                      iVar26 = iVar25;
                      lVar21 = lVar9;
                      do {
                        lVar21 = lVar21 + 1;
                        iVar27 = iVar13;
                        if (lVar10 <= lVar21) break;
                        iVar26 = iVar26 + 1;
                        bVar5 = *pbVar22;
                        pbVar22 = pbVar22 + 0x38;
                        iVar27 = iVar26;
                      } while ((bVar19 & 1) == bVar5);
                      iVar13 = iVar27 - iVar25;
                      if ((bVar19 & 1) == 0) {
                        if (iVar23 != iVar25) {
                          memmove(plVar18 + (longlong)iVar23 * 7,plVar18 + lVar9 * 7,
                                  (longlong)iVar13 * 0x38);
                        }
                        iVar23 = iVar23 + iVar13;
                      }
                      else {
                        FUN_14101c9fb(plVar18 + lVar9 * 7,iVar13);
                      }
                      pppplVar16 = (longlong ****)local_1b0;
                      plVar8 = local_190;
                      pppplVar12 = (longlong ****)local_188;
                      param_1 = local_1a0;
                      pppplVar28 = (longlong ****)local_1a8;
                      bVar19 = bVar19 ^ 1;
                      iVar25 = iVar27;
                      iVar13 = iVar23;
                    } while (lVar21 < lVar10);
                  }
                }
                local_170 = iVar13;
                plVar18 = (longlong *)(param_1 + 0x70);
                iVar13 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0xa4);
                uVar11 = local_110;
                if (iVar13 < iVar23) {
                  if (iVar23 != 0) {
                    lVar10 = (longlong)iVar23 * 0x38;
                    uVar24 = 0;
                    plVar17 = local_178;
                    local_198 = plVar18;
                    local_188 = (longlong ***)pppplVar12;
                    do {
                      plVar18 = local_198;
                      local_1b0 = (longlong ***)CONCAT44(local_1b0._4_4_,(int)uVar24);
                      local_128 = (longlong *)*plVar17;
                      pppplVar12 = (longlong ****)plVar17[1];
                      if (pppplVar12 == (longlong ****)0x0) {
                        local_120 = (longlong ****)0x0;
                      }
                      else {
                        LOCK();
                        *(int *)(pppplVar12 + 1) = *(int *)(pppplVar12 + 1) + 1;
                        UNLOCK();
                        LOCK();
                        *(int *)(pppplVar12 + 1) = *(int *)(pppplVar12 + 1) + 1;
                        UNLOCK();
                        local_120 = pppplVar12;
                      }
                      pppplVar2 = local_120;
                      local_1a0 = lVar10;
                      uVar7 = (**(code **)(*local_128 + 0x40))();
                      iVar13 = FUN_145a157e8(plVar18,uVar7,&local_128);
                      if (pppplVar2 != (longlong ****)0x0) {
                        LOCK();
                        pppplVar3 = pppplVar2 + 1;
                        *(int *)pppplVar3 = *(int *)pppplVar3 + -1;
                        UNLOCK();
                        if (*(int *)pppplVar3 == 0) {
                          (*(code *)**pppplVar2)(pppplVar2);
                          LOCK();
                          piVar1 = (int *)((longlong)pppplVar2 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 == 0) {
                            (*(code *)(*pppplVar2)[2])(pppplVar2);
                          }
                        }
                      }
                      if (pppplVar12 != (longlong ****)0x0) {
                        LOCK();
                        pppplVar2 = pppplVar12 + 1;
                        *(int *)pppplVar2 = *(int *)pppplVar2 + -1;
                        UNLOCK();
                        if (*(int *)pppplVar2 == 0) {
                          (*(code *)**pppplVar12)(pppplVar12);
                          LOCK();
                          piVar1 = (int *)((longlong)pppplVar12 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 == 0) {
                            (*(code *)(*pppplVar12)[2])(pppplVar12);
                          }
                        }
                      }
                      uVar24 = (ulonglong)local_1b0 & 0xffffffff;
                      if (iVar13 == -1) {
                        uVar24 = (ulonglong)
                                 CONCAT31((int3)((ulonglong)local_1b0 >> 8),
                                          (byte)local_1b0 | *(byte *)((longlong)plVar17 + 0x11));
                        local_148 = (longlong ***)
                                    (CONCAT44((int)((ulonglong)local_148 >> 0x20),
                                              (*(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x28))
                                              - (*(int *)(param_1 + 0xa4) + *(int *)(param_1 + 0x54)
                                                )) & 0xffffff00ffffffff);
                        local_120 = &local_148;
                        local_128 = plVar17;
                        FUN_145a15930(local_198,local_14c,&local_128);
                        lVar10 = FUN_145a158a4(plVar17 + 3);
                        if (lVar10 != 0) {
                          local_110 = 0;
                          puVar15 = &DAT_14c846480;
                          puVar20 = &local_108;
                          for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
                            *puVar20 = *puVar15;
                            puVar15 = puVar15 + 1;
                            puVar20 = puVar20 + 1;
                          }
                          local_a8 = 0;
                          uStack_a0 = 0;
                          local_98 = 0;
                          uStack_80 = 0;
                          uStack_7c = 0;
                          puVar14 = DAT_14cbcb048;
                          if (DAT_14cbcb048 == (undefined *)0x0) {
                            puVar14 = &DAT_14cbcb028;
                          }
                          puVar15 = (undefined8 *)(puVar14 + (longlong)(int)local_148 * 8);
                          if (DAT_14cbcb050 <= (int)local_148) {
                            puVar15 = &DAT_14cbcb058;
                          }
                          uStack_90 = 0;
                          uStack_88 = 0;
                          local_84 = 0;
                          if ((int)local_148 < 0) {
                            puVar15 = &DAT_14cbcb058;
                          }
                          local_128 = (longlong *)*puVar15;
                          local_120 = (longlong ****)local_188;
                          lStack_118 = lVar10;
                          FUN_145a145da(local_180,&local_108);
                          FUN_144a787a6(&local_a8,plVar17 + 4);
                          thunk_FUN_14144ff90(plVar8,&local_128);
                          FUN_145a1457c(&local_128);
                        }
                      }
                      plVar17 = plVar17 + 7;
                      lVar10 = local_1a0 + -0x38;
                    } while (lVar10 != 0);
                    uVar11 = local_110;
                    if ((uVar24 & 1) != 0) {
                      FUN_145a16102(param_1,&local_178);
                      uVar11 = local_110;
                    }
                  }
                }
                else if (iVar23 < iVar13) {
                  local_140 = param_1 + 0x80;
                  local_148 = (longlong ***)&DAT_100000000;
                  local_138 = 0xffffffff;
                  local_130 = 0;
                  local_1b0 = (longlong ***)pppplVar16;
                  local_1a8 = (longlong ***)pppplVar28;
                  if (*(int *)(param_1 + 0x98) != 0) {
                    FUN_1449c0562(&local_148);
                  }
                  local_120 = (longlong ****)local_148;
                  lStack_118 = local_140;
                  local_110 = local_138;
                  uVar11 = local_110;
                  local_108._0_4_ = local_130;
                  local_108._4_4_ = local_12c;
                  local_f0 = 0;
                  local_110._4_4_ = (int)((ulonglong)local_138 >> 0x20);
                  pppplVar16 = (longlong ****)local_1b0;
                  pppplVar28 = (longlong ****)local_1a8;
                  local_128 = plVar18;
                  local_100 = plVar18;
                  local_f8 = plVar18;
                  if (local_110._4_4_ < *(int *)(local_140 + 0x18)) {
                    bVar19 = 0;
                    bVar29 = false;
                    iVar13 = local_110._4_4_;
                    local_110 = uVar11;
                    do {
                      plVar8 = local_f8;
                      lVar10 = (longlong)local_170;
                      if (lVar10 == 0) {
                        bVar30 = false;
                        plVar18 = local_178;
                      }
                      else {
                        lVar9 = lVar10 * 0x38;
                        plVar17 = local_178;
                        do {
                          bVar30 = *(longlong *)(*local_128 + (longlong)iVar13 * 0x20) == *plVar17;
                          plVar18 = plVar17;
                          if (bVar30) break;
                          plVar17 = plVar17 + 7;
                          lVar9 = lVar9 + -0x38;
                          plVar18 = local_178 + lVar10 * 7;
                        } while (lVar9 != 0);
                      }
                      if (((local_f0 & 1) != 0) && ((local_f0 & 0x100) != 0)) {
                        FUN_148d37506(local_f8,(int)local_f8[1] -
                                               *(int *)((longlong)local_f8 + 0x34));
                        FUN_148d37506(plVar8,(int)plVar8[1] - *(int *)((longlong)plVar8 + 0x34));
                        FUN_148d37506(plVar8,(int)plVar8[1] - *(int *)((longlong)plVar8 + 0x34));
                      }
                      if (!(bool)(bVar30 & plVar18 != (longlong *)0x0)) {
                        lVar9 = (longlong)local_110._4_4_;
                        lVar10 = *local_128;
                        bVar19 = bVar19 | *(byte *)(lVar10 + 0x14 + lVar9 * 0x20);
                        iVar13 = *(int *)(param_1 + 200);
                        *(uint *)(param_1 + 200) = iVar13 + 1U;
                        if (*(uint *)(param_1 + 0xcc) < iVar13 + 1U) {
                          FUN_1446f48e2((longlong *)(param_1 + 0xc0),iVar13);
                        }
                        *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar13 * 4) =
                             *(undefined4 *)(lVar10 + lVar9 * 0x20 + 0x10);
                        FUN_148d3754c(local_100,local_110._4_4_);
                        local_f0 = CONCAT11(local_f0._1_1_,1);
                        bVar29 = true;
                      }
                      local_110 = CONCAT44(local_110._4_4_,(uint)local_110 & ~local_120._4_4_);
                      FUN_1449c0562(&local_120);
                      iVar13 = local_110._4_4_;
                    } while (local_110._4_4_ < *(int *)(lStack_118 + 0x18));
                    if (((local_f0 & 1) != 0) && (local_f0._1_1_ == '\x01')) {
                      FUN_148d37506(local_f8,(int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34))
                      ;
                    }
                    pppplVar28 = (longlong ****)local_1a8;
                    pppplVar16 = (longlong ****)local_1b0;
                    uVar11 = local_110;
                    if ((bVar29) && (FUN_148d329c2(param_1), uVar11 = local_110, (bVar19 & 1) != 0))
                    goto LAB_145a14e8a;
                  }
                }
                else if (iVar23 == 0 && *(int *)(param_2 + 1) != 0) {
LAB_145a14e8a:
                  FUN_145a15ce8(param_1);
                  uVar11 = local_110;
                }
                local_110 = uVar11;
                FUN_14101c9fb(local_178,local_170);
                if (local_178 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
          }
        }
        LOCK();
        pppplVar12 = pppplVar28 + 1;
        *(int *)pppplVar12 = *(int *)pppplVar12 + -1;
        UNLOCK();
        if (*(int *)pppplVar12 == 0) {
          (*(code *)**pppplVar28)(pppplVar28);
          LOCK();
          piVar1 = (int *)((longlong)pppplVar28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*pppplVar28)[2])(pppplVar28);
          }
        }
      }
    }
  }
  LOCK();
  pppplVar28 = pppplVar16 + 1;
  *(int *)pppplVar28 = *(int *)pppplVar28 + -1;
  UNLOCK();
  if (*(int *)pppplVar28 == 0) {
    (*(code *)**pppplVar16)(pppplVar16);
    LOCK();
    piVar1 = (int *)((longlong)pppplVar16 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (*(code *)(*pppplVar16)[2])(pppplVar16);
    }
  }
LAB_145a14d58:
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a15532 thunk_FUN_14144ff90 body=5 status=ok
// SIG undefined thunk_FUN_14144ff90(void)

longlong * thunk_FUN_14144ff90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  void *_Src;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  uint *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  undefined4 *puVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_258 [40];
  undefined8 uStack_230;
  undefined4 uStack_228;
  longlong lStack_220;
  longlong *plStack_218;
  longlong alStack_210 [5];
  undefined4 uStack_1e8;
  undefined1 uStack_1e4;
  undefined8 *puStack_1e0;
  int iStack_1d8;
  longlong lStack_1d0;
  ulonglong uStack_1c8;
  undefined4 uStack_1c0;
  longlong lStack_1b8;
  longlong *plStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined1 uStack_174;
  longlong lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  longlong lStack_158;
  longlong *plStack_148;
  longlong alStack_138 [4];
  undefined1 uStack_118;
  char cStack_116;
  longlong alStack_108 [12];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  longlong *plStack_70;
  ulonglong uStack_60;
  
  uStack_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if ((param_2[1] == 0) || (*(int *)(param_1 + 0xc) == 0)) {
LAB_14145007f:
    plVar9 = (longlong *)0x0;
    goto LAB_141450081;
  }
  uVar5 = *(uint *)(param_1 + 8);
  plVar9 = (longlong *)0x0;
  if (((int)uVar5 < 0) || (DAT_14c9647dc <= (int)uVar5)) goto LAB_141450081;
  plVar9 = (longlong *)
           ((ulonglong)((uVar5 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
  if ((((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != *(int *)(param_1 + 0xc))) ||
      ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) || (param_2[2] == 0 && param_2[3] == 0))
  goto LAB_14145007f;
  if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
    lVar16 = *plVar9;
  }
  else {
    lVar16 = 0;
  }
  if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
    lVar14 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar14);
      if (*(longlong *)(lVar3 + 0x360) == lVar16) {
        if ((lVar3 != 0) && (*(int *)(lVar3 + 0xa0) != 0)) goto LAB_14145007f;
        break;
      }
      lVar14 = lVar14 + 8;
    } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar14);
  }
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_178 = 0xffffffff;
  uStack_174 = 0;
  plStack_148 = (longlong *)0x0;
  uStack_118 = 0;
  cStack_116 = '\0';
  uStack_168 = 0;
  uStack_160 = 0;
  lStack_158 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  plStack_88 = (longlong *)0x0;
  uStack_80 = 0;
  uStack_78 = 0;
  plStack_70 = (longlong *)0x0;
  plVar9 = param_2 + 4;
  plVar8 = alStack_108;
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *plVar8 = *plVar9;
    plVar9 = plVar9 + 1;
    plVar8 = plVar8 + 1;
  }
  lVar14 = *param_2;
  lStack_170 = lVar16;
  if (lVar14 == DAT_14caa8578) {
LAB_14145011d:
    lStack_198 = 0;
    uStack_190 = 0;
    plVar9 = (longlong *)FUN_14655268c(param_2[1],&uStack_188);
    if (plVar9 != (longlong *)0x0) {
      lVar16 = *param_2;
      if (lVar16 == DAT_14caa8578) {
        uVar5 = *(uint *)((longlong)plVar9 + 0xc);
        if ((int)uVar5 < DAT_14c9647dc) {
          lVar16 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
        }
        else {
          lVar16 = 0;
        }
        iVar13 = *(int *)(lVar16 + 0x10);
        if (*(int *)(lVar16 + 0x10) == 0) {
          LOCK();
          iVar13 = DAT_14c964868 + 1;
          UNLOCK();
          iVar11 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar13;
          if (bVar17) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar11);
          }
          LOCK();
          iVar13 = *(int *)(lVar16 + 0x10);
          bVar17 = iVar13 == 0;
          if (bVar17) {
            *(int *)(lVar16 + 0x10) = iVar11;
            iVar13 = 0;
          }
          UNLOCK();
          if (bVar17) {
            iVar13 = iVar11;
          }
        }
        iVar11 = *(int *)(param_1 + 0x78);
        *(uint *)(param_1 + 0x78) = iVar11 + 1U;
        if (*(uint *)(param_1 + 0x7c) < iVar11 + 1U) {
          FUN_146552c3a((longlong *)(param_1 + 0x70),iVar11);
        }
        lVar16 = *(longlong *)(param_1 + 0x70);
        lVar14 = (longlong)iVar11 * 0x10;
        *(uint *)(lVar16 + lVar14) = uVar5;
        *(int *)(lVar16 + 4 + lVar14) = iVar13;
        *(undefined8 *)(lVar16 + 8 + lVar14) = 0;
      }
      else {
        uVar5 = (uint)((ulonglong)lVar16 >> 0x10);
        uVar12 = (uint)lVar16 & 0xffff;
        puVar7 = (uint *)FUN_145c2dd0c(param_1 + 0x20,
                                       ((uint)lVar16 << 0x10 | uVar12) +
                                       (int)((ulonglong)lVar16 >> 0x20) +
                                       (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar12 >> 4),param_2);
        uVar5 = *(uint *)((longlong)plVar9 + 0xc);
        *puVar7 = uVar5;
        if ((int)uVar5 < DAT_14c9647dc) {
          lVar16 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
        }
        else {
          lVar16 = 0;
        }
        uVar5 = *(uint *)(lVar16 + 0x10);
        if (*(uint *)(lVar16 + 0x10) == 0) {
          LOCK();
          iVar13 = DAT_14c964868 + 1;
          UNLOCK();
          uVar12 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar13;
          if (bVar17) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar12);
          }
          LOCK();
          uVar5 = *(uint *)(lVar16 + 0x10);
          bVar17 = uVar5 == 0;
          if (bVar17) {
            *(uint *)(lVar16 + 0x10) = uVar12;
            uVar5 = 0;
          }
          UNLOCK();
          if (bVar17) {
            uVar5 = uVar12;
          }
        }
        puVar7[1] = uVar5;
      }
      lVar16 = 0x638;
      if ((param_2[3] != 0) || (lVar16 = 0x640, param_2[2] != 0)) {
        (**(code **)(*plVar9 + lVar16))(plVar9);
      }
      uVar5 = *(uint *)(param_2 + 0x11);
      if (1 < (int)uVar5) {
        if (plVar9 + 0x80 != param_2 + 0x10) {
          _Src = (void *)param_2[0x10];
          *(uint *)(plVar9 + 0x81) = uVar5;
          FUN_1446dd670(plVar9 + 0x80,(ulonglong)uVar5,*(undefined4 *)((longlong)plVar9 + 0x40c));
          memcpy((void *)plVar9[0x80],_Src,(ulonglong)uVar5 * 2);
        }
      }
      if (*(char *)(param_2[1] + 0xa0) == '\x01') {
        *(undefined1 *)(plVar9 + 0x174) = 1;
      }
      lVar16 = param_2[0x13];
      if (((lVar16 == 0) || (*(char *)(lVar16 + 0x68) != '\x01')) ||
         ((*(char *)(lVar16 + 0x69) != '\x01' || (*(char *)(lVar16 + 0x6a) != '\x01')))) {
        if ((char)param_2[0x12] == '\x01') {
          alStack_210[0] = param_2[1];
          alStack_210[1] = 0;
          alStack_210[2] = 0;
          alStack_210[3] = 0;
          alStack_210[4] = 0;
          uStack_1e8 = 0x10000;
          uStack_1e4 = 0;
          puStack_1e0 = (undefined8 *)0x0;
          iStack_1d8 = 0;
          lStack_1d0 = 0;
          uStack_1c8 = 0;
          uStack_1c0 = 0;
          FUN_140fb04f0(alStack_210,plVar9);
          uStack_1e8._0_2_ = CONCAT11(1,(undefined1)uStack_1e8);
          uStack_1e8 = CONCAT13(1,(undefined3)uStack_1e8);
          FUN_140fb05f2(alStack_210,&lStack_1b8);
          FUN_140861e20(lStack_1d0,uStack_1c8 & 0xffffffff);
          if (lStack_1d0 != 0) {
            FUN_1400020a8();
          }
          if (iStack_1d8 == 0) {
LAB_14145041b:
            if (puStack_1e0 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (puStack_1e0 != (undefined8 *)0x0) {
            (**(code **)*puStack_1e0)(puStack_1e0,0);
            FUN_1446efa72(&puStack_1e0,0,0,0x10);
            iStack_1d8 = 0;
            goto LAB_14145041b;
          }
          uVar6 = (**(code **)(plVar9[0x72] + 0x28))(plVar9 + 0x72);
          lStack_220 = lStack_1b8;
          plStack_218 = plStack_1b0;
          if (plStack_1b0 == (longlong *)0x0) {
            plVar8 = &lStack_220;
            goto LAB_14145050d;
          }
          LOCK();
          *(int *)(plStack_1b0 + 1) = (int)plStack_1b0[1] + 1;
          UNLOCK();
          FUN_1405f862c(uVar6,&lStack_220);
          if (plStack_1b0 != (longlong *)0x0) {
            LOCK();
            plVar8 = plStack_1b0 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*plStack_1b0)(plStack_1b0);
              LOCK();
              piVar2 = (int *)((longlong)plStack_1b0 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
              }
            }
          }
        }
        else {
          uVar6 = (**(code **)(plVar9[0x72] + 0x28))(plVar9 + 0x72);
          puVar15 = &DAT_14c9485f0;
          if (*(undefined4 **)(param_2[1] + 8) != (undefined4 *)0x0) {
            puVar15 = *(undefined4 **)(param_2[1] + 8);
          }
          if (DAT_14c947fe0 == 0) {
            lVar16 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar16);
            DAT_14c947fe0 = lVar16;
          }
          FUN_140045924(DAT_14c947fe0,alStack_210,puVar15,1);
          FUN_1410674bc(uVar6,alStack_210,1);
        }
      }
      else {
        uVar6 = (**(code **)(plVar9[0x72] + 0x28))(plVar9 + 0x72);
        lStack_1a8 = param_2[0x13];
        lStack_1a0 = param_2[0x14];
        if (lStack_1a0 != 0) {
          LOCK();
          *(int *)(lStack_1a0 + 8) = *(int *)(lStack_1a0 + 8) + 1;
          UNLOCK();
        }
        plVar8 = &lStack_1a8;
LAB_14145050d:
        FUN_1405f862c(uVar6,plVar8);
      }
      if (((longlong *)param_2[0x15] != (longlong *)0x0 && (int)param_2[0x16] != 0) &&
         (cVar4 = (**(code **)(*(longlong *)param_2[0x15] + 0x30))(), cVar4 != '\0')) {
        uStack_230 = 0;
        uStack_228 = 0;
        FUN_145989806(&uStack_230,param_2 + 0x15);
        FUN_1459897bc(plVar9,&uStack_230);
      }
      if (lStack_198 != 0) {
        FUN_1400020a8();
      }
    }
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plStack_70 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_70 + 0x10))();
      }
    }
  }
  else {
    uVar5 = (uint)((ulonglong)lVar14 >> 0x10);
    uVar12 = (uint)lVar14 & 0xffff;
    puVar7 = (uint *)FUN_145c2dd0c(param_1 + 0x20,
                                   ((uint)lVar14 << 0x10 | uVar12) +
                                   (int)((ulonglong)lVar14 >> 0x20) +
                                   (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar12 >> 4),param_2);
    if (((puVar7[1] == 0) || (uVar5 = *puVar7, (int)uVar5 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar5 ||
        (((puVar10 = (undefined8 *)
                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
          puVar10 == (undefined8 *)0x0 || (*(uint *)(puVar10 + 2) != puVar7[1])) ||
         ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))))) goto LAB_14145011d;
    if ((*(uint *)(puVar10 + 1) & 0x10200000) == 0) {
      plVar9 = (longlong *)*puVar10;
    }
    else {
      plVar9 = (longlong *)0x0;
    }
  }
  plVar8 = plStack_88;
  if (plStack_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_88)(plStack_88);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (cStack_116 == '\x01') {
    cStack_116 = '\0';
  }
  if (lStack_158 != 0) {
    plVar8 = plStack_148;
    if (plStack_148 == (longlong *)0x0) {
      plVar8 = alStack_138;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
LAB_141450081:
  if ((uStack_60 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar9;
}



// FUNCTION 145a15537 FUN_145a15537 body=47 status=ok
// SIG undefined FUN_145a15537(void)

void FUN_145a15537(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_145a1574c(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 145a15566 FUN_145a15566 body=386 status=ok
// SIG undefined FUN_145a15566(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_145a15566(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cbcafa0 == (longlong *)0x0) {
    _DAT_14cbcb010 = 0;
    _DAT_14cbcb018 = 0;
    _DAT_14cbcb000 = 0;
    _DAT_14cbcb008 = 0;
    _DAT_14cbcaff0 = 0;
    _DAT_14cbcaff8 = 0;
    _DAT_14cbcafe0 = 0;
    _DAT_14cbcafe8 = 0;
    _DAT_14cbcafd0 = 0;
    _DAT_14cbcafd8 = 0;
    _DAT_14cbcafc0 = 0;
    _DAT_14cbcafc8 = 0;
    DAT_14cbcafb0 = 0;
    _DAT_14cbcafb8 = 0;
    _DAT_14cbcb020 = 0;
    _DAT_14cbcafa8 = &PTR_FUN_14a171dc0;
    FUN_144a319ae(&DAT_14cbcafb0);
    _DAT_14cbcafc0 = CONCAT44(DAT_14cbcafc0_4,0xffffffff);
    _DAT_14cbcafa8 = &PTR_FUN_14b7fe130;
    _DAT_14cbcafc8 = 0;
    _DAT_14cbcafd0 = 0;
    _DAT_14cbcafd8 = 0;
    _DAT_14cbcafe0 = 0;
    _DAT_14cbcafe8 = 0;
    _DAT_14cbcaff0 = 0;
    _DAT_14cbcaff8 = 0;
    _DAT_14cbcb000 = 0;
    _DAT_14cbcb008 = 0;
    _DAT_14cbcb010 = 0;
    _DAT_14cbcb018 = 0;
    _DAT_14cbcb020 = 0;
    DAT_14cbcafa0 = (longlong *)&DAT_14cbcafa8;
  }
  plVar1 = DAT_14cbcafa0;
  plVar3 = DAT_14cbcafa0 + 1;
  if ((char)DAT_14cbcafa0[2] == '\0') {
LAB_145a1559c:
    if (*plVar3 == 0) goto LAB_145a1569b;
    cVar2 = FUN_1449e3c20(DAT_14cbcafa0);
    if (cVar2 == '\0') goto LAB_145a155b6;
  }
  else {
    if ((char)DAT_14cbcafa0[2] == '\x02') {
      plVar3 = (longlong *)(*plVar3 + 0x30);
      goto LAB_145a1559c;
    }
LAB_145a1569b:
    lVar4 = FUN_140162146();
    if (lVar4 == 0) goto LAB_145a155b6;
    FUN_144a884d2(local_58,"def_globals_oak_stand_in",0);
    FUN_140024ada(local_58,plVar1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_145a155b6:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a156ea FUN_145a156ea body=98 status=ok
// SIG undefined FUN_145a156ea(void)

undefined8 FUN_145a156ea(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2 >> 3;
  uVar3 = SUB168(auVar1 * ZEXT816(0x2492492492492493),0);
  iVar4 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
  iVar5 = 0x7fffffff;
  if (param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,iVar5,0x38,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return uVar3;
}



// FUNCTION 145a1574c FUN_145a1574c body=156 status=ok
// SIG undefined FUN_145a1574c(void)

undefined8 * FUN_145a1574c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)((longlong)param_1 + 0x12) = *(undefined1 *)((longlong)param_2 + 0x12);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  param_1[3] = param_2[3];
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  _Src = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 145a157e8 FUN_145a157e8 body=187 status=ok
// SIG undefined FUN_145a157e8(void)

int FUN_145a157e8(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      lVar6 = *param_1;
      do {
        lVar8 = (longlong)iVar7 * 0x20;
        puVar3 = *(undefined8 **)(lVar6 + lVar8);
        plVar5 = *(longlong **)(lVar6 + 8 + lVar8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        cVar4 = '\x01';
        if (puVar3 != (undefined8 *)*param_3) {
          cVar4 = (**(code **)*puVar3)();
        }
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
        if (cVar4 != '\0') {
          return iVar7;
        }
        lVar6 = *param_1;
        iVar7 = *(int *)(lVar6 + 0x18 + lVar8);
      } while (iVar7 != -1);
    }
  }
  return -1;
}



// FUNCTION 145a158a4 FUN_145a158a4 body=138 status=ok
// SIG undefined FUN_145a158a4(void)

longlong * FUN_145a158a4(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcdd4(local_40,param_1);
  plVar1 = (longlong *)FUN_1400d6974(local_40);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1401548e0();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar4 = plVar1;
      }
      goto LAB_145a1590d;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_145a1590d:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a15930 FUN_145a15930 body=425 status=ok
// SIG undefined FUN_145a15930(void)

undefined4 * FUN_145a15930(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145a15ada(param_1,local_40);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  plVar9 = (longlong *)*puVar2;
  *local_38 = plVar9;
  lVar12 = puVar2[1];
  local_38[1] = lVar12;
  if (lVar12 == 0) {
    local_38[2] = *puVar3;
    *(undefined4 *)(local_38 + 3) = 0xffffffff;
  }
  else {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
    plVar9 = (longlong *)*local_38;
    plVar4 = (longlong *)local_38[1];
    local_38[2] = *puVar3;
    *(undefined4 *)(local_38 + 3) = 0xffffffff;
    local_44 = local_40[0];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      uVar7 = (**(code **)(*plVar9 + 0x40))();
      LOCK();
      plVar9 = plVar4 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      goto LAB_145a159c3;
    }
  }
  local_44 = local_40[0];
  uVar7 = (**(code **)(*plVar9 + 0x40))();
LAB_145a159c3:
  cVar6 = FUN_145a15bca(param_1,uVar7,local_38,&local_44);
  uVar5 = local_44;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar8) {
      uVar10 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_38 + 0x1c) = uVar7;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_145a13d8a(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a15ada FUN_145a15ada body=239 status=ok
// SIG undefined FUN_145a15ada(void)

int * FUN_145a15ada(longlong *param_1,int *param_2)

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



// FUNCTION 145a15bca FUN_145a15bca body=285 status=ok
// SIG undefined FUN_145a15bca(void)

undefined8 FUN_145a15bca(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar9 = FUN_145a157e8(param_1,param_2,&local_48);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar9 = FUN_145a157e8(param_1);
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
    if (iVar9 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
      plVar4 = *(longlong **)(*param_1 + 8 + (longlong)iVar9 * 0x20);
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
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(puVar3 + 4) = param_3[2];
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_148d37494(param_1,*param_4);
      *param_4 = iVar9;
      uVar10 = 1;
      goto LAB_145a15bf2;
    }
  }
  uVar10 = 0;
LAB_145a15bf2:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a15ce8 FUN_145a15ce8 body=1048 status=ok
// SIG undefined FUN_145a15ce8(void)

void FUN_145a15ce8(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar7 = param_1 + 0x10;
  cVar2 = FUN_144729dda(lVar7);
  if (cVar2 == '\0') goto LAB_145a15f74;
  plVar5 = (longlong *)FUN_14479d2ce(lVar7);
  bVar3 = (**(code **)(*plVar5 + 0x498))(plVar5);
  if (5 < bVar3) goto LAB_145a15f74;
  uVar6 = FUN_14479d2ce(lVar7);
  lVar7 = FUN_14119d4d6(uVar6);
  if (lVar7 == 0) goto LAB_145a15f74;
  iVar13 = 0;
  FUN_141237a6a(local_78,lVar7,0);
  lVar8 = FUN_1400f3ad8(local_78);
  if (lVar8 != 0) {
    lVar9 = FUN_144a5dd5e();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        == lVar9 + 0x30)) {
      local_a0 = *(longlong **)(lVar8 + 0x23d8);
      lVar9 = FUN_14050aea0();
      if ((lVar9 != 0) && (lVar9 = FUN_141450d48(lVar9), lVar9 != 0)) {
        lVar10 = *(longlong *)(lVar9 + 0x10);
        if (lVar10 == 0) {
          uVar6 = FUN_14050b070();
          lVar10 = FUN_14477b664(uVar6);
          *(longlong *)(lVar9 + 0x10) = lVar10;
        }
        plVar5 = (longlong *)(lVar9 + 8);
        lVar11 = *(longlong *)(lVar9 + 0x18);
        if (lVar11 == 0) {
          if ((lVar10 != 0) && (*plVar5 != 0)) {
            plVar1 = *(longlong **)(lVar10 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
              *(undefined8 *)(lVar9 + 0x18) = 0;
            }
            else {
              uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar11 = FUN_144aff482(uVar6,plVar5);
              *(longlong *)(lVar9 + 0x18) = lVar11;
              if (lVar11 != 0) {
                lVar10 = *(longlong *)(lVar9 + 0x10);
                goto LAB_145a15df8;
              }
            }
          }
          local_a0 = (longlong *)0x0;
        }
        else {
LAB_145a15df8:
          if (lVar10 == 0) {
            uVar6 = FUN_14050b070();
            lVar10 = FUN_14477b664(uVar6);
            *(longlong *)(lVar9 + 0x10) = lVar10;
            lVar11 = *(longlong *)(lVar9 + 0x18);
            if (((lVar11 == 0) && (lVar11 = 0, lVar10 != 0)) && (*plVar5 != 0)) {
              plVar1 = *(longlong **)(lVar10 + 0xb8);
              if ((plVar1 == (longlong *)0x0) ||
                 (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
                lVar11 = 0;
              }
              else {
                uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
                lVar11 = FUN_144aff482(uVar6,plVar5);
              }
              *(longlong *)(lVar9 + 0x18) = lVar11;
            }
          }
          puVar12 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar11 + 8) != (undefined4 *)0x0) {
            puVar12 = *(undefined4 **)(lVar11 + 8);
          }
          FUN_1447325ac(puVar12,&local_a0,1);
        }
        local_a8 = 0;
        FUN_1414b098c(param_1,lVar8,local_a0,0);
      }
    }
  }
  plVar5 = (longlong *)(param_1 + 0x20);
  lVar8 = param_1 + 0x30;
  local_68 = 0x100000000;
  local_58._0_4_ = 0xffffffff;
  local_58._4_4_ = 0;
  local_50 = 0;
  local_60 = lVar8;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_1449c0562(&local_68);
    iVar13 = *(int *)(param_1 + 0x48);
  }
  local_88._0_4_ = (uint)local_58;
  local_88._4_4_ = local_58._4_4_;
  local_80 = local_50;
  local_7c = local_4c;
  local_98 = local_68;
  local_90 = local_60;
  local_a0 = plVar5;
  if ((local_58._4_4_ != iVar13) || (local_60 != lVar8)) {
    do {
      do {
        *(bool *)(*local_a0 + 0xc + (longlong)local_88._4_4_ * 0x18) =
             *(longlong *)(*local_a0 + (longlong)local_88._4_4_ * 0x18) == lVar7;
        local_88._0_4_ = (uint)local_88 & ~local_98._4_4_;
        FUN_1449c0562(&local_98);
      } while (local_88._4_4_ != iVar13);
    } while ((local_90 != lVar8) || (local_a0 != plVar5));
  }
  plVar5 = (longlong *)(param_1 + 0x70);
  lVar7 = param_1 + 0x80;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  iVar13 = 0;
  local_60 = lVar7;
  if (*(int *)(param_1 + 0x98) != 0) {
    FUN_1449c0562(&local_68);
    iVar13 = *(int *)(param_1 + 0x98);
  }
  local_88 = local_58;
  uVar6 = local_88;
  local_80 = local_50;
  local_7c = local_4c;
  local_98 = local_68;
  local_90 = local_60;
  local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  iVar4 = local_88._4_4_;
  local_a0 = plVar5;
  if ((local_88._4_4_ != iVar13) || (local_88 = uVar6, local_60 != lVar7)) {
    do {
      do {
        local_88 = uVar6;
        *(undefined1 *)(*local_a0 + 0x14 + (longlong)iVar4 * 0x20) = 0;
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar4 = local_88._4_4_;
        uVar6 = local_88;
      } while (local_88._4_4_ != iVar13);
    } while ((local_90 != lVar7) || (local_a0 != plVar5));
  }
LAB_145a15f74:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a16102 FUN_145a16102 body=712 status=ok
// SIG undefined FUN_145a16102(void)

void FUN_145a16102(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
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
  cVar5 = FUN_144729dda(param_1 + 0x10);
  if (cVar5 != '\0') {
    plVar1 = (longlong *)(param_1 + 0x20);
    lVar10 = param_1 + 0x30;
    local_60 = (longlong *)0x100000000;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    uStack_48 = 0;
    uStack_58 = lVar10;
    if (*(int *)(param_1 + 0x48) == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar8 = *(int *)(param_1 + 0x48);
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70._0_4_ = (uint)local_50;
    local_70._4_4_ = local_50._4_4_;
    local_80._0_4_ = SUB84(local_60,0);
    local_80._4_4_ = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_88 = plVar1;
    if ((local_50._4_4_ != iVar8) || (uStack_58 != lVar10)) {
      do {
        do {
          *(undefined1 *)(*local_88 + 0xc + (longlong)local_70._4_4_ * 0x18) = 0;
          local_70._0_4_ = (uint)local_70 & ~local_80._4_4_;
          FUN_1449c0562(&local_80);
        } while (local_70._4_4_ != iVar8);
      } while ((CONCAT44(uStack_74,uStack_78) != lVar10) || (local_88 != plVar1));
    }
    plVar1 = (longlong *)(param_1 + 0x70);
    lVar10 = param_1 + 0x80;
    local_60 = (longlong *)&DAT_100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = lVar10;
    if (*(int *)(param_1 + 0x98) == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar8 = *(int *)(param_1 + 0x98);
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    uVar4 = local_70;
    local_80 = local_60;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = plVar1;
    if ((local_70._4_4_ != iVar8) || (local_70 = uVar4, uStack_58 != lVar10)) {
      do {
        local_70 = uVar4;
        *(undefined1 *)(*local_88 + 0x14 + (longlong)iVar6 * 0x20) = 0;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_88 != plVar1 ||
               (CONCAT44(uStack_74,uStack_78) != lVar10 || local_70._4_4_ != iVar8));
    }
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      plVar9 = (longlong *)*param_2;
      lVar10 = (longlong)*(int *)(param_2 + 1) * 0x38;
      do {
        if (*(char *)((longlong)plVar9 + 0x11) != '\0') {
          if (plVar9 != (longlong *)0x0) {
            local_88 = (longlong *)*plVar9;
            plVar9 = (longlong *)plVar9[1];
            if (plVar9 == (longlong *)0x0) {
              local_80 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              UNLOCK();
              local_80 = plVar9;
            }
            uVar7 = (**(code **)(*local_88 + 0x40))();
            iVar8 = FUN_145a157e8(plVar1,uVar7,&local_88);
            plVar3 = local_80;
            if (iVar8 == -1) {
              lVar10 = 0;
            }
            else {
              lVar10 = (longlong)iVar8 * 0x20 + *plVar1;
            }
            if (local_80 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_80)(local_80);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
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
            if (lVar10 != 0) {
              *(undefined1 *)(lVar10 + 0x14) = 1;
            }
          }
          break;
        }
        plVar9 = plVar9 + 7;
        lVar10 = lVar10 + -0x38;
      } while (lVar10 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a163cc FUN_145a163cc body=1618 status=ok
// SIG undefined FUN_145a163cc(void)

ulonglong FUN_145a163cc(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                       char param_5)

{
  int *piVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  float fVar14;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined4 local_130;
  longlong *local_120;
  undefined8 *local_118;
  undefined4 local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar5 = FUN_14479d2ce(param_2);
  param_1 = param_1 + 8;
  cVar4 = FUN_144729dda(param_1);
  uVar13 = 0;
  if ((cVar4 == '\0') || (lVar5 == 0)) goto LAB_145a166f8;
  plVar12 = (longlong *)(param_2 + 8);
  local_120 = plVar12;
  if (*(longlong *)(param_2 + 8) == 0) {
    uVar6 = (**(code **)(*(longlong *)(lVar5 + 0x3c0) + 0x50))(lVar5 + 0x3c0);
    if (*(longlong *)(lVar5 + 0x3f8) == 0) {
      uVar13 = 0;
      goto LAB_145a166f8;
    }
    local_98 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    uStack_90 = 0x8000000000;
    local_88 = 0xffffffff;
    uVar7 = FUN_141450dba(*(longlong *)(lVar5 + 0x3f8) + 0xd0);
    local_138 = &local_b8;
    FUN_14122243a(uVar6,&local_108,uVar7,1);
    plVar12 = local_100;
    plVar11 = local_108;
    local_108 = (longlong *)0x0;
    if (local_100 != (longlong *)0x0) {
      local_100 = (longlong *)0x0;
    }
    uStack_70 = uStack_70 & 0xffffffff00000000;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_140333f4e(&local_b8);
    if (plVar11 == (longlong *)0x0) {
LAB_145a1676c:
      uVar13 = 0;
    }
    else {
      pcVar2 = (code *)*param_3;
      plVar9 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar9 = (longlong *)param_3[2];
      }
      local_b8 = lVar5;
      uVar6 = (**(code **)(*plVar9 + 8))();
      (*pcVar2)(uVar6,&local_b8);
      fVar14 = (float)(**(code **)(*plVar11 + 0x28))(plVar11);
      if (fVar14 + -0.1 <= 0.0) goto LAB_145a1676c;
      uVar6 = FUN_14479d2ce(param_1);
      uVar6 = FUN_144a88394(uVar6);
      local_108 = (longlong *)*param_4;
      local_f8[0] = (longlong *)0x0;
      if (local_108 != (longlong *)0x0) {
        plVar11 = param_4 + 4;
        if ((longlong *)param_4[2] != (longlong *)0x0) {
          plVar11 = (longlong *)param_4[2];
        }
        (**(code **)*plVar11)(plVar11,local_f8);
      }
      local_118 = (undefined8 *)0x0;
      local_110 = 0;
      local_c8 = lVar5;
      FUN_1446efa72(&local_118,0,7,0x10);
      puVar3 = local_118;
      local_110 = 7;
      *local_118 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      local_118[2] = lVar10;
      *local_118 = &PTR_FUN_14b40e7f0;
      local_118[3] = 0;
      FUN_14485c47a(local_118 + 3,lVar5);
      puVar3[4] = local_108;
      puVar3[6] = local_f8[0];
      local_f8[0] = (longlong *)0x0;
      *(undefined4 *)(puVar3 + 10) = local_d8;
      *(undefined4 *)((longlong)puVar3 + 0x54) = uStack_d4;
      *(undefined4 *)(puVar3 + 0xb) = uStack_d0;
      *(undefined4 *)((longlong)puVar3 + 0x5c) = uStack_cc;
      *(undefined4 *)(puVar3 + 8) = local_e8;
      *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_e4;
      *(undefined4 *)(puVar3 + 9) = uStack_e0;
      *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_dc;
      if (local_108 != (longlong *)0x0) {
        local_108 = (longlong *)0x0;
      }
      puVar3[0xc] = local_c8;
      local_b8 = 0;
      uStack_b0 = uStack_b0 & 0xffffffff00000000;
      FUN_14487d8d8(&local_b8,&local_118);
      local_78 = CONCAT71(local_78._1_7_,1);
      local_130 = 0xbf800000;
      local_138 = (longlong *)((ulonglong)local_138 & 0xffffffffffffff00);
      FUN_1406f3fee(uVar6,local_120,&local_b8,fVar14 + -0.1);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_78 & 0xff])(&local_b8);
      FUN_1449db362(&local_118);
      if (local_108 != (longlong *)0x0) {
        plVar11 = local_f8[0];
        if (local_f8[0] == (longlong *)0x0) {
          plVar11 = (longlong *)&local_e8;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      uVar13 = CONCAT71((int7)((ulonglong)&local_b8 >> 8),1);
    }
    if (plVar12 == (longlong *)0x0) goto LAB_145a166f8;
    LOCK();
    plVar11 = plVar12 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 != 0) goto LAB_145a166f8;
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_145a166f8;
    lVar5 = *plVar12;
  }
  else {
    uVar6 = FUN_14479d2ce(param_1);
    uVar6 = FUN_144a88394(uVar6);
    local_b8 = *plVar12;
    uVar7 = FUN_144a61814(uVar6);
    fVar14 = (float)FUN_144a1f182(uVar6,uVar7);
    uVar13 = 1;
    if (param_5 != '\x01' || fVar14 <= 0.0) goto LAB_145a166f8;
    uVar6 = FUN_14479d2ce(param_1);
    uVar6 = FUN_144a88394(uVar6);
    lVar8 = FUN_144a61814(uVar6,local_120);
    if (lVar8 != 0) {
      FUN_1405a424c(uVar6,*local_120);
    }
    *local_120 = 0;
    uVar6 = FUN_14479d2ce(param_1);
    uVar6 = FUN_144a88394(uVar6);
    local_108 = (longlong *)*param_4;
    local_f8[0] = (longlong *)0x0;
    if (local_108 != (longlong *)0x0) {
      plVar12 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar12 = (longlong *)param_4[2];
      }
      (**(code **)*plVar12)(plVar12,local_f8);
    }
    local_118 = (undefined8 *)0x0;
    local_110 = 0;
    local_c8 = lVar5;
    FUN_1446efa72(&local_118,0,7,0x10);
    puVar3 = local_118;
    local_110 = 7;
    *local_118 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_118[2] = lVar10;
    *local_118 = &PTR_FUN_14b40e780;
    local_118[3] = 0;
    FUN_14485c47a(local_118 + 3,lVar5);
    puVar3[4] = local_108;
    puVar3[6] = local_f8[0];
    local_f8[0] = (longlong *)0x0;
    *(undefined4 *)(puVar3 + 10) = local_d8;
    *(undefined4 *)((longlong)puVar3 + 0x54) = uStack_d4;
    *(undefined4 *)(puVar3 + 0xb) = uStack_d0;
    *(undefined4 *)((longlong)puVar3 + 0x5c) = uStack_cc;
    *(undefined4 *)(puVar3 + 8) = local_e8;
    *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_e4;
    *(undefined4 *)(puVar3 + 9) = uStack_e0;
    *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_dc;
    if (local_108 != (longlong *)0x0) {
      local_108 = (longlong *)0x0;
    }
    puVar3[0xc] = local_c8;
    local_b8 = 0;
    uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
    FUN_14487d8d8(&local_b8,&local_118);
    local_78 = CONCAT71(local_78._1_7_,1);
    local_130 = 0xbf800000;
    local_138 = (longlong *)((ulonglong)local_138 & 0xffffffffffffff00);
    FUN_1406f3fee(uVar6,local_120,&local_b8,fVar14);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_78 & 0xff])(&local_b8);
    FUN_1449db362(&local_118);
    if (local_108 == (longlong *)0x0) goto LAB_145a166f8;
    plVar12 = local_f8[0];
    if (local_f8[0] == (longlong *)0x0) {
      plVar12 = (longlong *)&local_e8;
    }
    lVar5 = *plVar12;
  }
  (**(code **)(lVar5 + 0x10))(plVar12);
LAB_145a166f8:
  if (*param_3 != 0) {
    plVar12 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar12 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (*param_4 != 0) {
    plVar12 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar12 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar13 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a16a20 FUN_145a16a20 body=114 status=ok
// SIG undefined FUN_145a16a20(void)

longlong FUN_145a16a20(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  char local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x1d0))(param_1,&local_20);
  if (local_1c != '\x01') {
    local_20 = 1;
  }
  *(bool *)param_2 = local_1c == '\x01';
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x38) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145a16a94 FUN_145a16a94 body=157 status=ok
// SIG undefined FUN_145a16a94(void)

undefined4 * FUN_145a16a94(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5f39a(param_1,&local_30);
  if (local_30 != 0) {
    FUN_140a5f308((undefined4 *)(local_30 + 8));
    cVar3 = *(char *)(local_30 + 0xc);
    *(char *)(param_2 + 1) = cVar3;
    if (cVar3 == '\x01') {
      *param_2 = *(undefined4 *)(local_30 + 8);
    }
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
  if (local_30 == 0) {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a16b32 FUN_145a16b32 body=107 status=ok
// SIG undefined FUN_145a16b32(void)

void FUN_145a16b32(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145a16b9e(&local_28);
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x28)])(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = local_28;
  *(undefined4 *)(param_1 + 0x10) = local_20;
  *(undefined4 *)(param_1 + 0x14) = local_1c;
  *(undefined1 *)(param_1 + 0x28) = 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a16b9e FUN_145a16b9e body=33 status=ok
// SIG undefined FUN_145a16b9e(void)

undefined8 FUN_145a16b9e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a16bbf();
  FUN_140056680(param_1,uVar1);
  return param_1;
}



// FUNCTION 145a16bbf FUN_145a16bbf body=8 status=ok
// SIG undefined FUN_145a16bbf(void)

wchar_t * FUN_145a16bbf(void)

{
  return L"Oct 17 2026";
}



// FUNCTION 145a16bc8 FUN_145a16bc8 body=87 status=ok
// SIG undefined FUN_145a16bc8(void)

undefined8 FUN_145a16bc8(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x848))();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((param_2 != (longlong *)0x0) && ((*(byte *)((longlong)param_2 + 0x65) & 2) == 0)) &&
     ((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000145a16c16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_2 + 0xe08))();
    return uVar2;
  }
  return 0;
}



// FUNCTION 145a16c20 FUN_145a16c20 body=162 status=ok
// SIG undefined FUN_145a16c20(void)

void FUN_145a16c20(longlong *param_1,undefined8 param_2)

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
        goto LAB_145a16cad;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145a16cad:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145a16cc2 FUN_145a16cc2 body=42 status=ok
// SIG undefined FUN_145a16cc2(void)

void FUN_145a16cc2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_145a16cec(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 145a16cec FUN_145a16cec body=92 status=ok
// SIG undefined FUN_145a16cec(void)

void FUN_145a16cec(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_145a16d48(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 0x20);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145a16d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145a16d48 FUN_145a16d48 body=40 status=ok
// SIG undefined FUN_145a16d48(void)

void FUN_145a16d48(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145c98868(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 145a16d70 FUN_145a16d70 body=70 status=ok
// SIG undefined FUN_145a16d70(void)

undefined4 FUN_145a16d70(int *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if ((longlong)*param_1 != 0) {
    lVar3 = (longlong)*param_1 * 0x88;
    iVar1 = *(int *)(DAT_14c9a3d60 + -0x20 + lVar3);
    if (0 < iVar1) {
      lVar3 = DAT_14c9a3d60 + lVar3;
      lVar2 = *(longlong *)(lVar3 + -0x28);
      lVar3 = lVar3 + -0x88;
      if (lVar2 != 0) {
        lVar3 = lVar2;
      }
      uVar4 = *(undefined4 *)(lVar3 + 4 + (ulonglong)(iVar1 - 1) * 0xc);
    }
  }
  return uVar4;
}



// FUNCTION 145a16db6 FUN_145a16db6 body=174 status=ok
// SIG undefined FUN_145a16db6(void)

void FUN_145a16db6(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14479d2ce(param_3 + 0x18);
  if (lVar1 != 0) {
    lVar2 = FUN_140a3aef4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      FUN_145a16e66(param_1 + 0x90,local_2c,param_2);
      FUN_145a1740c(param_1,lVar1);
      goto LAB_145a16e2a;
    }
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  FUN_145a17884(param_1,param_3);
LAB_145a16e2a:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_145a1714e(param_1,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a16e66 FUN_145a16e66 body=295 status=ok
// SIG undefined FUN_145a16e66(void)

undefined4 * FUN_145a16e66(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145a1705e(param_1,local_48);
  *local_40 = *param_3;
  local_40[1] = param_3[1];
  *(undefined4 *)(local_40 + 2) = *(undefined4 *)(param_3 + 2);
  *(undefined1 *)((longlong)local_40 + 0x14) = *(undefined1 *)((longlong)param_3 + 0x14);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = FUN_140b95084(local_40);
  cVar2 = FUN_145a16f8e(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x1c) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_145a17bc4(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a16f8e FUN_145a16f8e body=93 status=ok
// SIG undefined FUN_145a16f8e(void)

undefined8 FUN_145a16f8e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_145a16fec(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_145a5c8c4(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 145a16fec FUN_145a16fec body=113 status=ok
// SIG undefined FUN_145a16fec(void)

int FUN_145a16fec(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2 * 0x20;
        if ((((*(longlong *)(lVar3 + lVar5) == *param_3) &&
             (lVar1 = lVar3 + lVar5, *(longlong *)(lVar1 + 8) == param_3[1])) &&
            (*(int *)(lVar1 + 0x10) == (int)param_3[2])) &&
           (*(char *)(lVar1 + 0x14) == *(char *)((longlong)param_3 + 0x14))) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x18 + lVar5);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 145a1705e FUN_145a1705e body=239 status=ok
// SIG undefined FUN_145a1705e(void)

int * FUN_145a1705e(longlong *param_1,int *param_2)

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
      FUN_1405b363e(param_1,iVar6);
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



// FUNCTION 145a1714e FUN_145a1714e body=700 status=ok
// SIG undefined FUN_145a1714e(void)

void FUN_145a1714e(longlong param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_1 + 0xe0) != 0) &&
      (plVar6 = *(longlong **)(param_1 + 0xe8), plVar6 != (longlong *)0x0)) && (0 < (int)plVar6[1]))
  {
    lVar11 = 0;
    iVar4 = (int)plVar6[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_145a171b9;
      }
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar13 = iVar3 == iVar4;
      if (bVar13) {
        *(int *)(plVar6 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar13);
    lVar11 = *(longlong *)(param_1 + 0xe0);
LAB_145a171b9:
    lVar12 = *(longlong *)(lVar11 + 0x20);
    if (lVar12 == 0) {
      uVar7 = FUN_145cd2a6e();
      lVar12 = FUN_14477b664(uVar7);
      *(longlong *)(lVar11 + 0x20) = lVar12;
    }
    lVar10 = *(longlong *)(lVar11 + 0x28);
    if (((lVar10 == 0) && (lVar10 = 0, lVar12 != 0)) && (*(longlong *)(lVar11 + 0x18) != 0)) {
      plVar8 = *(longlong **)(lVar12 + 0xb8);
      if ((plVar8 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar2 == '\0')) {
        lVar10 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar8 + 0x110))(plVar8);
        lVar10 = FUN_144aff482(uVar7,(longlong *)(lVar11 + 0x18));
      }
      *(longlong *)(lVar11 + 0x28) = lVar10;
    }
    if (iVar3 != 0) {
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
    if (lVar10 != 0) {
      iVar4 = *(int *)(param_1 + 0x38);
      if ((-1 < (longlong)iVar4) && (iVar4 < *(int *)(lVar10 + 0x20))) {
        lVar11 = *(longlong *)(lVar10 + 0x18);
        lVar12 = (longlong)iVar4 * 0xb8;
        if ((*(int *)(lVar11 + 0x88 + lVar12) != 0) &&
           (plVar6 = (longlong *)FUN_14479d2ce(param_2 + 0x18), plVar6 != (longlong *)0x0)) {
          uVar7 = FUN_140b040c0();
          plVar8 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar7);
          if (plVar8 != (longlong *)0x0) {
            uVar7 = FUN_140b040c0();
            plVar9 = (longlong *)FUN_144718840(plVar8,uVar7);
            if ((plVar9 != (longlong *)0x0 && plVar8 != plVar9) &&
               (lVar10 = (**(code **)(*plVar9 + 0x20))(plVar9), lVar10 != 0)) {
              lVar11 = lVar11 + lVar12;
              plVar8 = (longlong *)(lVar11 + 0x80);
              uVar5 = FUN_148e0167c(plVar8,plVar6);
              if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar11 + 0x88))) {
                uVar7 = FUN_14090a268();
                lVar11 = (**(code **)(*plVar6 + 0x288))(plVar6,uVar7);
                if (lVar11 != 0) {
                  uVar7 = FUN_14090a268();
                  lVar12 = FUN_144718840(lVar11,uVar7);
                  if (lVar12 != 0 && lVar11 != lVar12) {
                    uVar7 = FUN_14892a4dc(lVar12);
                    lVar11 = (ulonglong)uVar5 * 0x50;
                    FUN_14892b532(uVar7,*(undefined8 *)(*plVar8 + 0x40 + lVar11),
                                  *(undefined8 *)(*plVar8 + 0x48 + lVar11));
                  }
                }
                local_58 = 0;
                uStack_50 = 0;
                FUN_140b068ec(lVar10,2,*plVar8 + (ulonglong)uVar5 * 0x50 + 0x38,&local_58);
                FUN_1449db362(&local_58);
              }
            }
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a1740c FUN_145a1740c body=776 status=ok
// SIG undefined FUN_145a1740c(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_145a1740c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  longlong local_c0 [3];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar3 = *(longlong **)(param_1 + 0xe8);
  if (plVar3 == (longlong *)0x0) goto LAB_145a175b7;
  iVar8 = (int)plVar3[1];
  do {
    if (iVar8 == 0) goto LAB_145a175b7;
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar12 = iVar8 == iVar6;
    if (bVar12) {
      *(int *)(plVar3 + 1) = iVar8 + 1;
      iVar6 = iVar8;
    }
    iVar8 = iVar6;
    UNLOCK();
  } while (!bVar12);
  lVar4 = *(longlong *)(param_1 + 0xe0);
  if (lVar4 != 0) {
    lVar10 = *(longlong *)(lVar4 + 0x20);
    if (lVar10 == 0) {
      uVar9 = FUN_145cd2a6e();
      lVar10 = FUN_14477b664(uVar9);
      *(longlong *)(lVar4 + 0x20) = lVar10;
    }
    plVar1 = (longlong *)(lVar4 + 0x18);
    lVar11 = *(longlong *)(lVar4 + 0x28);
    if (lVar11 == 0) {
      if ((lVar10 != 0) && (*plVar1 != 0)) {
        plVar5 = *(longlong **)(lVar10 + 0xb8);
        if ((plVar5 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
          *(undefined8 *)(lVar4 + 0x28) = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar5 + 0x110))(plVar5);
          lVar11 = FUN_144aff482(uVar9,plVar1);
          *(longlong *)(lVar4 + 0x28) = lVar11;
          if (lVar11 != 0) {
            lVar10 = *(longlong *)(lVar4 + 0x20);
            goto LAB_145a17492;
          }
        }
      }
    }
    else {
LAB_145a17492:
      if (lVar10 == 0) {
        uVar9 = FUN_145cd2a6e();
        lVar10 = FUN_14477b664(uVar9);
        *(longlong *)(lVar4 + 0x20) = lVar10;
        lVar11 = *(longlong *)(lVar4 + 0x28);
        if (((lVar11 == 0) && (lVar11 = 0, lVar10 != 0)) && (*plVar1 != 0)) {
          plVar5 = *(longlong **)(lVar10 + 0xb8);
          if ((plVar5 == (longlong *)0x0) ||
             (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
            lVar11 = 0;
          }
          else {
            uVar9 = (**(code **)(*plVar5 + 0x110))(plVar5);
            lVar11 = FUN_144aff482(uVar9,plVar1);
          }
          *(longlong *)(lVar4 + 0x28) = lVar11;
        }
      }
      lVar4 = *(longlong *)(lVar11 + 0x30);
      uVar9 = FUN_14477b664(*(undefined8 *)(lVar11 + 0x38));
      FUN_14477b664(uVar9);
      if ((lVar4 != 0) && (lVar10 = FUN_145a1781c(param_2), lVar10 == 0)) {
        local_c0[1] = 0;
        local_c0[2] = 0;
        local_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_9c = 0x3ff00000;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0x3ff0000000000000;
        uStack_70 = 0x3ff0000000000000;
        local_68 = 0x3ff0000000000000;
        uStack_60 = 0;
        local_c0[0] = FUN_145a17736();
        if ((local_c0[0] != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(local_c0[0]);
        }
        local_c8 = 1;
        lVar10 = FUN_140fae5dc(param_2,local_c0,0,local_c0 + 1);
        if (lVar10 != 0) {
          lVar11 = FUN_145a17736();
          if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
            FUN_145a17716(lVar10,lVar4);
            local_c0[1] = 0;
            local_c0[2] = 0;
            local_a8 = 0;
            uStack_a4 = 0;
            uStack_a0 = 0;
            uStack_9c = 0x3ff00000;
            local_98 = 0;
            uStack_90 = 0;
            local_88 = 0;
            uStack_80 = 0;
            local_78 = 0x3ff0000000000000;
            uStack_70 = 0x3ff0000000000000;
            local_68 = 0x3ff0000000000000;
            uStack_60 = 0;
            FUN_141450f18(param_2,lVar10,0);
          }
        }
      }
    }
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
LAB_145a175b7:
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a17716 FUN_145a17716 body=32 status=ok
// SIG undefined FUN_145a17716(void)

void FUN_145a17716(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x620) != param_2) {
    *(longlong *)(param_1 + 0x620) = param_2;
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0x11);
    return;
  }
  return;
}



// FUNCTION 145a17736 FUN_145a17736 body=228 status=ok
// SIG undefined FUN_145a17736(void)

longlong FUN_145a17736(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb68c20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_148747977;
    local_40 = &LAB_1458980a4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x630;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxWallaProviderComponent",&DAT_14cb68c20,&DAT_148747976);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb68c20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1781c FUN_145a1781c body=102 status=ok
// SIG undefined FUN_145a1781c(void)

void FUN_145a1781c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145a17736();
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



// FUNCTION 145a17884 FUN_145a17884 body=425 status=ok
// SIG undefined FUN_145a17884(void)

void FUN_145a17884(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = *(longlong **)(param_1 + 0xe8);
  if (plVar2 == (longlong *)0x0) goto LAB_145a17971;
  iVar6 = (int)plVar2[1];
  do {
    if (iVar6 == 0) goto LAB_145a17971;
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar11 = iVar6 == iVar4;
    if (bVar11) {
      *(int *)(plVar2 + 1) = iVar6 + 1;
      iVar4 = iVar6;
    }
    iVar6 = iVar4;
    UNLOCK();
  } while (!bVar11);
  lVar8 = *(longlong *)(param_1 + 0xe0);
  if (lVar8 != 0) {
    lVar9 = *(longlong *)(lVar8 + 0x20);
    if (lVar9 == 0) {
      uVar7 = FUN_145cd2a6e();
      lVar9 = FUN_14477b664(uVar7);
      *(longlong *)(lVar8 + 0x20) = lVar9;
    }
    lVar10 = *(longlong *)(lVar8 + 0x28);
    if (lVar10 == 0) {
      if ((lVar9 != 0) && (*(longlong *)(lVar8 + 0x18) != 0)) {
        plVar3 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
          *(undefined8 *)(lVar8 + 0x28) = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar10 = FUN_144aff482(uVar7,(longlong *)(lVar8 + 0x18));
          *(longlong *)(lVar8 + 0x28) = lVar10;
          if (lVar10 != 0) goto LAB_145a178f0;
        }
      }
    }
    else {
LAB_145a178f0:
      lVar8 = *(longlong *)(lVar10 + 0x48);
      local_48 = lVar8;
      uVar7 = FUN_14477b664(*(undefined8 *)(lVar10 + 0x50));
      local_40 = FUN_14477b664(uVar7);
      local_38 = *(undefined8 *)(lVar10 + 0x58);
      if ((lVar8 != 0) && (lVar8 = FUN_14479d2ce(param_2 + 0x18), lVar8 != 0)) {
        lVar9 = FUN_14070cc62();
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
           ((*(longlong *)
              (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30 &&
            (*(longlong *)(lVar8 + 0x858) != 0)))) {
          FUN_145a17a2e(*(longlong *)(lVar8 + 0x858),&local_48);
        }
      }
    }
  }
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
LAB_145a17971:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a17a2e FUN_145a17a2e body=295 status=ok
// SIG undefined FUN_145a17a2e(void)

void FUN_145a17a2e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x1718) == 0) {
    uVar6 = FUN_1408fae60();
    uVar6 = FUN_14477b664(uVar6);
    *(undefined8 *)(param_1 + 0x1718) = uVar6;
  }
  lVar7 = param_2[1];
  if (lVar7 == 0) {
    lVar7 = FUN_1408fae60();
  }
  uVar6 = *param_2;
  uVar5 = FUN_14477b664(lVar7);
  local_48 = uVar6;
  uVar3 = FUN_144a7891a(uVar5);
  local_50 = *(undefined8 *)(param_1 + 0x1710);
  uVar6 = *(undefined8 *)(param_1 + 0x1718);
  uVar4 = FUN_144a7891a(uVar6);
  local_68 = uVar5;
  local_60 = &local_48;
  cVar2 = FUN_144a789b8(uVar4,uVar6,&local_50,uVar3);
  if (cVar2 == '\0') {
    FUN_145a17b6e(param_1 + 0x1710,param_2);
    cVar2 = FUN_144a61b4f();
    if (cVar2 != '\0') {
      lVar7 = *(longlong *)(param_1 + 0x1530);
      *(undefined8 *)(param_1 + 0x1528) = 0;
      *(undefined8 *)(param_1 + 0x1530) = 0;
      if (lVar7 != 0) {
        LOCK();
        piVar1 = (int *)(lVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a17b6e FUN_145a17b6e body=86 status=ok
// SIG undefined FUN_145a17b6e(void)

longlong * FUN_145a17b6e(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 145a17bc4 FUN_145a17bc4 body=453 status=ok
// SIG undefined FUN_145a17bc4(void)

void FUN_145a17bc4(longlong *param_1)

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
        iVar6 = FUN_140b95084(lVar3 + lVar10);
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



// FUNCTION 145a17d8a FUN_145a17d8a body=40 status=ok
// SIG undefined FUN_145a17d8a(void)

undefined8 FUN_145a17d8a(undefined8 param_1,int param_2)

{
  FUN_145a17db2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a17db2 FUN_145a17db2 body=119 status=ok
// SIG undefined FUN_145a17db2(void)

void FUN_145a17db2(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a5a57e0;
  param_1[5] = &PTR_FUN_14a5a5dc0;
  param_1[6] = &PTR_LAB_14a5a5e00;
  lVar1 = param_1[0x60];
  if (lVar1 != 0) {
    FUN_145a17e2a(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 145a17e2a FUN_145a17e2a body=169 status=ok
// SIG undefined FUN_145a17e2a(void)

void FUN_145a17e2a(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  FUN_145a17ed3(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_145a17ed3(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_145a17f84(param_1 + 0x18);
  FUN_145a17f20(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145a17ed3 FUN_145a17ed3 body=77 status=ok
// SIG undefined FUN_145a17ed3(void)

void FUN_145a17ed3(longlong param_1,int param_2)

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


