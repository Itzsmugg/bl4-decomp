// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1490bcb00 FUN_1490bcb00 body=149 status=ok
// SIG undefined FUN_1490bcb00(void)

void FUN_1490bcb00(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,&local_38);
  *puVar1 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab4600;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490bcb96 FUN_1490bcb96 body=149 status=ok
// SIG undefined FUN_1490bcb96(void)

void FUN_1490bcb96(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,&local_38);
  *puVar1 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab4670;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490bcc2c FUN_1490bcc2c body=149 status=ok
// SIG undefined FUN_1490bcc2c(void)

void FUN_1490bcc2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,&local_38);
  *puVar1 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab46e0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490bccc2 FUN_1490bccc2 body=149 status=ok
// SIG undefined FUN_1490bccc2(void)

void FUN_1490bccc2(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,&local_38);
  *puVar1 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab4750;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490bcd58 FUN_1490bcd58 body=42 status=ok
// SIG undefined FUN_1490bcd58(void)

void FUN_1490bcd58(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1490bcd8e FUN_1490bcd8e body=96 status=ok
// SIG undefined FUN_1490bcd8e(void)

undefined8 FUN_1490bcd8e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e69fd8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfdfd0,1);
  return uVar3;
}



// FUNCTION 1490bcdee FUN_1490bcdee body=52 status=ok
// SIG undefined FUN_1490bcdee(void)

void FUN_1490bcdee(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1490bce22 FUN_1490bce22 body=181 status=ok
// SIG undefined FUN_1490bce22(void)

void FUN_1490bce22(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = FUN_144b34998(param_2);
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar3 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x50);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x150;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x150) == lVar1) {
          if (lVar3 == -0x10 || lVar3 == 0) {
            return;
          }
          if ((*(byte *)param_2[4] & 1) == 0) {
            return;
          }
          FUN_144453f48(*param_2,*(undefined8 *)(lVar3 + 0x130),*(undefined8 *)(lVar3 + 0x138));
          return;
        }
        iVar2 = *(int *)(lVar3 + 0x140);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1490bcedc FUN_1490bcedc body=451 status=ok
// SIG undefined FUN_1490bcedc(void)

void FUN_1490bcedc(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_6f8 [32];
  undefined4 local_6d8;
  int local_6d0;
  undefined4 local_6c8;
  undefined8 *local_6c0;
  undefined8 local_6b8;
  longlong local_6b0;
  char local_6a8;
  undefined8 local_6a0;
  code *local_698;
  undefined8 **local_690;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_6f8;
  if (((*(int *)(param_1 + 0x38) != 0) && (*(int *)(param_1 + 0x3c) != 0)) &&
     (*(int *)(param_1 + 0x40) != 0)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cbfdd7c) {
      FUN_144b3d300(&DAT_14cbfdd7c);
      if (DAT_14cbfdd7c == -1) {
        DAT_14cbfdd78 = *(int *)(param_1 + 0x44);
        _Init_thread_footer(&DAT_14cbfdd7c);
      }
    }
    local_698 = FUN_140036a08;
    local_690 = &local_6c0;
    lVar1 = FUN_144a773aa(&local_698,&DAT_14c7585d0);
    local_6c0 = (undefined8 *)(lVar1 + 0x10);
    local_6b8 = *(undefined8 *)(lVar1 + 0x10);
    local_6b0 = *(longlong *)(lVar1 + 0x20);
    local_6a8 = '\0';
    local_6a0 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 ***)(lVar1 + 0x28) = &local_6c0;
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + 1;
    FUN_1407779ba(&local_698,&DAT_14ca85100);
    local_6d0 = (*(int *)(param_1 + 0x40) + 1) * (*(int *)(param_1 + 0x3c) + 1) *
                (*(int *)(param_1 + 0x38) + 1) * DAT_14cbfdd78;
    local_6c8 = 0;
    local_6d8 = 4;
    FUN_1481de234(param_1 + 0x10,&local_698,L"FNDIVelocityGridBuffer",0x1d);
    FUN_1481de412(param_1 + 0x10);
    FUN_140779360(&local_698);
    FUN_140778010(&local_698);
    if (local_6a8 == '\0') {
      local_6a8 = '\x01';
      *(int *)(local_6c0 + 4) = *(int *)(local_6c0 + 4) + -1;
      if (local_6b0 != local_6c0[2]) {
        FUN_14004673c();
      }
      *local_6c0 = local_6b8;
      local_6c0[3] = local_6a0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_6f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490bd0aa FUN_1490bd0aa body=90 status=ok
// SIG undefined FUN_1490bd0aa(void)

void FUN_1490bd0aa(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 4) == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x48);
    if (lVar1 != 0) {
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      *(undefined4 *)(lVar1 + 0x38) = *param_1;
      *(undefined4 *)(lVar1 + 0x3c) = uVar2;
      *(undefined4 *)(lVar1 + 0x40) = uVar3;
      *(undefined4 *)(lVar1 + 0x44) = uVar4;
      FUN_140308182(*(undefined8 *)(param_1 + 0x48),0);
    }
    lVar1 = *(longlong *)(param_1 + 0x4a);
    if (lVar1 != 0) {
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      *(undefined4 *)(lVar1 + 0x38) = *param_1;
      *(undefined4 *)(lVar1 + 0x3c) = uVar2;
      *(undefined4 *)(lVar1 + 0x40) = uVar3;
      *(undefined4 *)(lVar1 + 0x44) = uVar4;
      FUN_140308182(*(undefined8 *)(param_1 + 0x4a),0);
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 1490bd104 FUN_1490bd104 body=327 status=ok
// SIG undefined FUN_1490bd104(void)

void FUN_1490bd104(undefined8 *param_1,int *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *param_1 = &DAT_100000001;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)(param_1 + 2) = 1;
  puVar1 = &DAT_14c846400;
  puVar3 = param_1 + 0x14;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_1 + 4,&DAT_14c846400,0x80);
  if (((*param_2 != 0) && (param_2[1] != 0)) && (param_2[2] != 0)) {
    *(int *)(param_1 + 1) = param_2[2];
    *param_1 = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)param_1 + 0xc) = param_3;
    puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    FUN_144a7f8ec(puVar1);
    *puVar1 = &PTR_FUN_14bab4860;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    param_1[0x24] = puVar1;
    puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    FUN_144a7f8ec(puVar1);
    *puVar1 = &PTR_FUN_14bab4860;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    param_1[0x25] = puVar1;
    FUN_1490bd0aa(param_1);
    return;
  }
  return;
}



// FUNCTION 1490bd24c FUN_1490bd24c body=425 status=ok
// SIG undefined FUN_1490bd24c(void)

undefined8 FUN_1490bd24c(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  if (param_2 != 0) {
    dVar5 = *(double *)(param_3 + 0x50);
    dVar6 = *(double *)(param_3 + 0x58);
    dVar7 = *(double *)(param_3 + 0x60);
    uVar8 = *(undefined4 *)(param_3 + 0x70);
    uVar9 = *(undefined4 *)(param_3 + 0x74);
    uVar10 = *(undefined4 *)(param_3 + 0x78);
    uVar11 = *(undefined4 *)(param_3 + 0x7c);
    uVar12 = *(undefined8 *)(param_3 + 0x80);
    dVar20 = dVar6 + dVar6;
    dVar16 = dVar7 + dVar7;
    dVar2 = dVar5 * (dVar5 + dVar5);
    dVar13 = *(double *)(param_3 + 0x90);
    dVar14 = *(double *)(param_3 + 0x98);
    dVar15 = *(double *)(param_3 + 0xa0);
    dVar3 = *(double *)(param_3 + 0x50) * dVar16;
    dVar19 = *(double *)(param_3 + 0x68);
    dVar17 = dVar16 * dVar19;
    dVar18 = (dVar5 + dVar5) * *(double *)(param_3 + 0x68);
    dVar19 = dVar20 * dVar19;
    dVar4 = (dVar20 * dVar5 + dVar17) * dVar13;
    auVar1._8_4_ = SUB84(dVar4,0);
    auVar1._0_8_ = (1.0 - (dVar7 * dVar16 + dVar6 * dVar20)) * dVar13;
    auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 0x20) = auVar1;
    *(double *)(param_2 + 0x30) = (dVar3 - dVar19) * dVar13;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(double *)(param_2 + 0x40) = (dVar20 * dVar5 - dVar17) * dVar14;
    *(double *)(param_2 + 0x48) = (1.0 - (dVar7 * dVar16 + dVar2)) * dVar14;
    *(double *)(param_2 + 0x50) = (dVar16 * dVar6 + dVar18) * dVar14;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(double *)(param_2 + 0x60) = (dVar19 + dVar3) * dVar15;
    *(double *)(param_2 + 0x68) = (dVar16 * dVar6 - dVar18) * dVar15;
    *(double *)(param_2 + 0x70) = (1.0 - (dVar2 + dVar6 * dVar20)) * dVar15;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined4 *)(param_2 + 0x80) = uVar8;
    *(undefined4 *)(param_2 + 0x84) = uVar9;
    *(undefined4 *)(param_2 + 0x88) = uVar10;
    *(undefined4 *)(param_2 + 0x8c) = uVar11;
    *(undefined8 *)(param_2 + 0x90) = uVar12;
    *(undefined8 *)(param_2 + 0x98) = 0x3ff0000000000000;
    if (*(char *)(param_2 + 0x10) == '\x01') {
      FUN_1490bd0aa(param_2);
    }
  }
  return 0;
}



// FUNCTION 1490bd3f6 FUN_1490bd3f6 body=42 status=ok
// SIG undefined FUN_1490bd3f6(void)

void FUN_1490bd3f6(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1414db5a0();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 0x38);
  }
  return;
}



// FUNCTION 1490bd420 FUN_1490bd420 body=57 status=ok
// SIG undefined FUN_1490bd420(void)

undefined4 FUN_1490bd420(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1481192e4();
  if (((cVar1 == '\0') || (*(int *)(param_2 + 0x38) != *(int *)(param_1 + 0x38))) ||
     (*(int *)(param_2 + 0x3c) != *(int *)(param_1 + 0x3c))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)*(int *)(param_2 + 0x40) >> 8),
                     *(int *)(param_2 + 0x40) == *(int *)(param_1 + 0x40));
  }
  return uVar2;
}



// FUNCTION 1490bd45a FUN_1490bd45a body=149 status=ok
// SIG undefined FUN_1490bd45a(void)

void FUN_1490bd45a(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,&local_38);
  *puVar1 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab4890;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490bd4f0 FUN_1490bd4f0 body=149 status=ok
// SIG undefined FUN_1490bd4f0(void)

void FUN_1490bd4f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,&local_38);
  *puVar1 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab4900;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490bd586 FUN_1490bd586 body=149 status=ok
// SIG undefined FUN_1490bd586(void)

void FUN_1490bd586(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,&local_38);
  *puVar1 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab4970;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490bd61c FUN_1490bd61c body=149 status=ok
// SIG undefined FUN_1490bd61c(void)

void FUN_1490bd61c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,&local_38);
  *puVar1 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab49e0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490bd6b2 FUN_1490bd6b2 body=149 status=ok
// SIG undefined FUN_1490bd6b2(void)

void FUN_1490bd6b2(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,&local_38);
  *puVar1 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab4a50;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490bd748 FUN_1490bd748 body=356 status=ok
// SIG undefined FUN_1490bd748(void)

void FUN_1490bd748(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  int local_a0;
  float *local_98;
  undefined8 uStack_90;
  int local_88;
  float *local_78;
  undefined8 uStack_70;
  int local_68;
  float *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  int *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1490bd8ae(local_40,param_1);
  iVar7 = 0;
  local_48 = 0;
  local_58 = (float *)0x0;
  uStack_50 = 0;
  FUN_144a98dce(&local_58,param_1);
  local_68 = 0;
  local_78 = (float *)0x0;
  uStack_70 = 0;
  FUN_144a98dce(&local_78,param_1);
  local_88 = 0;
  local_98 = (float *)0x0;
  uStack_90 = 0;
  FUN_144a98dce(&local_98,param_1);
  FUN_1490bd942(&local_a8,param_1);
  piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar6 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar6) {
    do {
      pfVar1 = local_58 + local_48;
      pfVar2 = local_78 + local_68;
      pfVar3 = local_98 + local_88;
      fVar4 = *local_78;
      fVar5 = *local_98;
      *local_38 = (int)*local_58;
      local_38[1] = (int)fVar4;
      local_38[2] = (int)fVar5;
      *(undefined1 *)(local_38 + 4) = 1;
      puVar8 = local_a8 + local_a0;
      *local_a8 = 1;
      iVar7 = iVar7 + 1;
      piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar6 = (int *)(param_1 + 0x3c);
      }
      local_a8 = puVar8;
      local_98 = pfVar3;
      local_78 = pfVar2;
      local_58 = pfVar1;
    } while (iVar7 < *piVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490bd8ae FUN_1490bd8ae body=148 status=ok
// SIG undefined FUN_1490bd8ae(void)

void FUN_1490bd8ae(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 1490bd942 FUN_1490bd942 body=179 status=ok
// SIG undefined FUN_1490bd942(void)

void FUN_1490bd942(longlong *param_1,char *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  longlong lVar5;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*param_2 == '\x01') {
    *(uint *)(param_1 + 1) =
         (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)*(int *)(param_2 + 0x30));
    iVar2 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar2 + 1;
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar2 * 8);
    *param_1 = lVar5;
    *param_1 = (longlong)(int)param_1[1] * (longlong)*(int *)(param_2 + 0x44) + lVar5;
    return;
  }
  puVar3 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
  uVar1 = *puVar3;
  *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar3 + 1;
  uVar4 = uVar1 & 0x7fff;
  if (uVar4 == 0x7fff) {
    *param_1 = (longlong)param_1 + 0xc;
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  lVar5 = (ulonglong)(uVar4 * *(int *)(*(longlong *)(param_2 + 0x80) + 0x80)) +
          *(longlong *)(*(longlong *)(param_2 + 0x80) + 0x70);
  *param_1 = lVar5;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = *(int *)(*(longlong *)(param_2 + 0x80) + 0x4c) + lVar5;
  return;
}



// FUNCTION 1490bd9f6 FUN_1490bd9f6 body=1315 status=ok
// SIG undefined FUN_1490bd9f6(void)

void FUN_1490bd9f6(char *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  double *pdVar5;
  undefined8 *puVar6;
  double *pdVar7;
  undefined8 *puVar8;
  undefined1 auStack_3a8 [32];
  undefined1 *local_388;
  int local_380;
  float *local_378;
  undefined8 uStack_370;
  int local_368;
  float *local_358;
  undefined8 uStack_350;
  int local_348;
  float *local_338;
  undefined8 uStack_330;
  int local_328;
  float *local_318;
  undefined8 uStack_310;
  int local_308;
  float *local_2f8;
  undefined8 uStack_2f0;
  int local_2e8;
  float *local_2d8;
  undefined8 uStack_2d0;
  int local_2c8;
  float *local_2b8;
  undefined8 uStack_2b0;
  int local_2a8;
  float *local_298;
  undefined8 uStack_290;
  int local_288;
  float *local_278;
  undefined8 uStack_270;
  int local_268;
  float *local_258;
  undefined8 uStack_250;
  int local_248;
  float *local_238;
  undefined8 uStack_230;
  int local_228;
  float *local_218;
  undefined8 uStack_210;
  int local_208;
  float *local_1f8;
  undefined8 uStack_1f0;
  int local_1e8;
  float *local_1d8;
  undefined8 uStack_1d0;
  int local_1c8;
  float *local_1b8;
  undefined8 uStack_1b0;
  int local_1a8;
  float *local_198;
  undefined8 uStack_190;
  int local_188;
  undefined1 local_178 [8];
  longlong local_170;
  undefined8 local_168 [16];
  double local_e8 [4];
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  FUN_1490bd8ae(local_178,param_1);
  iVar4 = 0;
  local_188 = 0;
  local_198 = (float *)0x0;
  uStack_190 = 0;
  FUN_144a98dce(&local_198,param_1);
  local_1a8 = 0;
  local_1b8 = (float *)0x0;
  uStack_1b0 = 0;
  FUN_144a98dce(&local_1b8,param_1);
  local_1c8 = 0;
  local_1d8 = (float *)0x0;
  uStack_1d0 = 0;
  FUN_144a98dce(&local_1d8,param_1);
  local_1e8 = 0;
  local_1f8 = (float *)0x0;
  uStack_1f0 = 0;
  FUN_144a98dce(&local_1f8,param_1);
  local_208 = 0;
  local_218 = (float *)0x0;
  uStack_210 = 0;
  FUN_144a98dce(&local_218,param_1);
  local_228 = 0;
  local_238 = (float *)0x0;
  uStack_230 = 0;
  FUN_144a98dce(&local_238,param_1);
  local_248 = 0;
  local_258 = (float *)0x0;
  uStack_250 = 0;
  FUN_144a98dce(&local_258,param_1);
  local_268 = 0;
  local_278 = (float *)0x0;
  uStack_270 = 0;
  FUN_144a98dce(&local_278,param_1);
  local_288 = 0;
  local_298 = (float *)0x0;
  uStack_290 = 0;
  FUN_144a98dce(&local_298,param_1);
  local_2a8 = 0;
  local_2b8 = (float *)0x0;
  uStack_2b0 = 0;
  FUN_144a98dce(&local_2b8,param_1);
  local_2c8 = 0;
  local_2d8 = (float *)0x0;
  uStack_2d0 = 0;
  FUN_144a98dce(&local_2d8,param_1);
  local_2e8 = 0;
  local_2f8 = (float *)0x0;
  uStack_2f0 = 0;
  FUN_144a98dce(&local_2f8,param_1);
  local_308 = 0;
  local_318 = (float *)0x0;
  uStack_310 = 0;
  FUN_144a98dce(&local_318,param_1);
  local_328 = 0;
  local_338 = (float *)0x0;
  uStack_330 = 0;
  FUN_144a98dce(&local_338,param_1);
  local_348 = 0;
  local_358 = (float *)0x0;
  uStack_350 = 0;
  FUN_144a98dce(&local_358,param_1);
  local_368 = 0;
  local_378 = (float *)0x0;
  uStack_370 = 0;
  FUN_144a98dce(&local_378,param_1);
  FUN_1490bd942(&local_388,param_1);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar1 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar1) {
    do {
      local_e8[0] = (double)*local_198;
      local_e8[1] = (double)*local_1b8;
      local_e8[2] = (double)*local_1d8;
      local_e8[3] = (double)*local_1f8;
      local_c8 = (double)*local_218;
      local_c0 = (double)*local_238;
      local_b8 = (double)*local_258;
      local_b0 = (double)*local_278;
      local_a8 = (double)*local_298;
      local_a0 = (double)*local_2b8;
      local_98 = (double)*local_2d8;
      local_90 = (double)*local_2f8;
      local_88 = (double)*local_318;
      local_80 = (double)*local_338;
      local_78 = (double)*local_358;
      local_70 = (double)*local_378;
      pdVar5 = local_e8;
      pdVar7 = (double *)(local_170 + 0x20);
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *pdVar7 = *pdVar5;
        pdVar5 = pdVar5 + 1;
        pdVar7 = pdVar7 + 1;
      }
      local_378 = local_378 + local_368;
      local_358 = local_358 + local_348;
      local_338 = local_338 + local_328;
      local_318 = local_318 + local_308;
      local_2f8 = local_2f8 + local_2e8;
      local_2d8 = local_2d8 + local_2c8;
      local_2b8 = local_2b8 + local_2a8;
      local_298 = local_298 + local_288;
      local_278 = local_278 + local_268;
      local_258 = local_258 + local_248;
      local_238 = local_238 + local_228;
      local_218 = local_218 + local_208;
      local_1f8 = local_1f8 + local_1e8;
      local_1d8 = local_1d8 + local_1c8;
      local_1b8 = local_1b8 + local_1a8;
      local_198 = local_198 + local_188;
      FUN_14494412e(local_e8,local_168);
      puVar6 = local_168;
      puVar8 = (undefined8 *)(local_170 + 0xa0);
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar3 = local_388 + local_380;
      *local_388 = 1;
      iVar4 = iVar4 + 1;
      piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar1 = (int *)(param_1 + 0x3c);
      }
      local_388 = puVar3;
    } while (iVar4 < *piVar1);
  }
  if ((local_60 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490bdf3c FUN_1490bdf3c body=592 status=ok
// SIG undefined FUN_1490bdf3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1490bdf3c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_2[9];
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar2 = *(longlong *)(param_2[2] + 0x10);
    lVar11 = lVar1 + 0x48;
    if (*(longlong *)(lVar1 + 0x50) != 0) {
      lVar11 = *(longlong *)(lVar1 + 0x50);
    }
    iVar8 = *(int *)(lVar11 + (ulonglong)
                              (*(int *)(lVar1 + 0x58) - 1U &
                              (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      do {
        lVar11 = *(longlong *)(lVar1 + 0x10) + (longlong)iVar8 * 0x150;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar8 * 0x150) == lVar2)
        goto LAB_1490bdfaa;
        iVar8 = *(int *)(lVar11 + 0x140);
      } while (iVar8 != -1);
    }
  }
  lVar11 = 0;
LAB_1490bdfaa:
  uVar7 = *param_2;
  uVar9 = *(int *)(param_2 + 10) + 0xfU & 0xfffffff0;
  FUN_1490c06e4();
  puVar10 = (undefined8 *)((ulonglong)uVar9 + param_2[7]);
  *(uint *)(param_2 + 10) = DAT_14cbfe1e4 + uVar9;
  if ((((lVar11 == 0) || (*(longlong *)(lVar11 + 0x130) == 0)) ||
      (*(longlong *)(lVar11 + 0x138) == 0)) ||
     ((*(int *)(*(longlong *)(lVar11 + 0x130) + 8) == -1 ||
      (*(int *)(*(longlong *)(lVar11 + 0x138) + 8) == -1)))) {
    *(undefined4 *)(puVar10 + 0x11) = DAT_14c9a52a0;
    puVar10[0x10] = DAT_14c9a5298;
    uVar6 = CONCAT44(DAT_14c84628c,DAT_14c846288);
    puVar10[6] = CONCAT44(DAT_14c846284,DAT_14c846280);
    puVar10[7] = uVar6;
    uVar6 = _DAT_14c846278;
    puVar10[4] = _DAT_14c846270;
    puVar10[5] = uVar6;
    uVar6 = _DAT_14c846268;
    puVar10[2] = _DAT_14c846260;
    puVar10[3] = uVar6;
    uVar6 = DAT_14c846258;
    *puVar10 = _DAT_14c846250;
    puVar10[1] = uVar6;
    uVar6 = _DAT_14c846278;
    puVar10[0xc] = _DAT_14c846270;
    puVar10[0xd] = uVar6;
    uVar6 = DAT_14c846258;
    puVar10[8] = _DAT_14c846250;
    puVar10[9] = uVar6;
    uVar6 = _DAT_14c846268;
    puVar10[10] = _DAT_14c846260;
    puVar10[0xb] = uVar6;
    uVar5 = DAT_14c84628c;
    uVar4 = DAT_14c846288;
    uVar3 = DAT_14c846284;
    *(undefined4 *)(puVar10 + 0xe) = DAT_14c846280;
    *(undefined4 *)((longlong)puVar10 + 0x74) = uVar3;
    *(undefined4 *)(puVar10 + 0xf) = uVar4;
    *(undefined4 *)((longlong)puVar10 + 0x7c) = uVar5;
    uVar6 = FUN_1481c8850(param_2[1],uVar7,0x1d);
    puVar10[0x12] = uVar6;
    uVar7 = FUN_14573eae0(param_2[1],uVar7,0x1d);
  }
  else {
    *(undefined4 *)(puVar10 + 0x11) = *(undefined4 *)(lVar11 + 0x18);
    puVar10[0x10] = *(undefined8 *)(lVar11 + 0x10);
    FUN_144a928e2(&local_68,lVar11 + 0x30);
    *(undefined4 *)puVar10 = local_68;
    *(undefined4 *)((longlong)puVar10 + 4) = uStack_64;
    *(undefined4 *)(puVar10 + 1) = uStack_60;
    *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_5c;
    *(undefined4 *)(puVar10 + 2) = local_58;
    *(undefined4 *)((longlong)puVar10 + 0x14) = uStack_54;
    *(undefined4 *)(puVar10 + 3) = uStack_50;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_4c;
    *(undefined4 *)(puVar10 + 4) = local_48;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uStack_44;
    *(undefined4 *)(puVar10 + 5) = uStack_40;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = uStack_3c;
    *(undefined4 *)(puVar10 + 6) = local_38;
    *(undefined4 *)((longlong)puVar10 + 0x34) = uStack_34;
    *(undefined4 *)(puVar10 + 7) = uStack_30;
    *(undefined4 *)((longlong)puVar10 + 0x3c) = uStack_2c;
    FUN_144a928e2(&local_68,lVar11 + 0xb0);
    *(undefined4 *)(puVar10 + 8) = local_68;
    *(undefined4 *)((longlong)puVar10 + 0x44) = uStack_64;
    *(undefined4 *)(puVar10 + 9) = uStack_60;
    *(undefined4 *)((longlong)puVar10 + 0x4c) = uStack_5c;
    *(undefined4 *)(puVar10 + 10) = local_58;
    *(undefined4 *)((longlong)puVar10 + 0x54) = uStack_54;
    *(undefined4 *)(puVar10 + 0xb) = uStack_50;
    *(undefined4 *)((longlong)puVar10 + 0x5c) = uStack_4c;
    *(undefined4 *)(puVar10 + 0xc) = local_48;
    *(undefined4 *)((longlong)puVar10 + 100) = uStack_44;
    *(undefined4 *)(puVar10 + 0xd) = uStack_40;
    *(undefined4 *)((longlong)puVar10 + 0x6c) = uStack_3c;
    *(undefined4 *)(puVar10 + 0xe) = local_38;
    *(undefined4 *)((longlong)puVar10 + 0x74) = uStack_34;
    *(undefined4 *)(puVar10 + 0xf) = uStack_30;
    *(undefined4 *)((longlong)puVar10 + 0x7c) = uStack_2c;
    uVar6 = FUN_1481de2c4(*(longlong *)(lVar11 + 0x130) + 0x10,uVar7);
    puVar10[0x12] = uVar6;
    uVar7 = FUN_1481de36c(*(longlong *)(lVar11 + 0x138) + 0x10,uVar7);
  }
  puVar10[0x13] = uVar7;
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490be18e FUN_1490be18e body=82 status=ok
// SIG undefined FUN_1490be18e(void)

void FUN_1490be18e(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = param_3 + 4;
  puVar3 = param_2 + 4;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_3 + 0x14;
  puVar3 = param_2 + 0x14;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x24] = param_3[0x24];
  param_2[0x25] = param_3[0x25];
  *param_2 = *param_3;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
  return;
}



// FUNCTION 1490be1e0 FUN_1490be1e0 body=42 status=ok
// SIG undefined FUN_1490be1e0(void)

void FUN_1490be1e0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1490be216 FUN_1490be216 body=96 status=ok
// SIG undefined FUN_1490be216(void)

undefined8 FUN_1490be216(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ed6730();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfe058,1);
  return uVar3;
}



// FUNCTION 1490be276 FUN_1490be276 body=52 status=ok
// SIG undefined FUN_1490be276(void)

void FUN_1490be276(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1490be2aa FUN_1490be2aa body=42 status=ok
// SIG undefined FUN_1490be2aa(void)

void FUN_1490be2aa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1490be2e0 FUN_1490be2e0 body=96 status=ok
// SIG undefined FUN_1490be2e0(void)

undefined8 FUN_1490be2e0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e6a542();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfe0e0,1);
  return uVar3;
}



// FUNCTION 1490be340 FUN_1490be340 body=52 status=ok
// SIG undefined FUN_1490be340(void)

void FUN_1490be340(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1490be374 FUN_1490be374 body=174 status=ok
// SIG undefined FUN_1490be374(void)

void FUN_1490be374(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = FUN_144b34998(param_2);
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar3 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x50);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x150;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x150) == lVar1) {
          if (lVar3 == -0x10 || lVar3 == 0) {
            return;
          }
          if ((*(byte *)param_2[4] & 1) == 0) {
            return;
          }
          FUN_144455082(*param_2,*(undefined8 *)(lVar3 + 0x138));
          return;
        }
        iVar2 = *(int *)(lVar3 + 0x140);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1490be422 FUN_1490be422 body=185 status=ok
// SIG undefined FUN_1490be422(void)

void FUN_1490be422(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = FUN_144b34998(param_2);
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar3 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x50);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x150;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x150) == lVar1) {
          if (lVar3 + 0x10 == 0 || lVar3 == 0) {
            return;
          }
          FUN_144455232(*param_2,*(undefined4 *)(param_2[1] + 0x24),*(undefined8 *)(lVar3 + 0x138),
                        *(undefined8 *)(lVar3 + 0x130),lVar3 + 0x10);
          return;
        }
        iVar2 = *(int *)(lVar3 + 0x140);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1490be4dc FUN_1490be4dc body=189 status=ok
// SIG undefined FUN_1490be4dc(void)

void FUN_1490be4dc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if ((*(char *)(param_2 + 0x18) == '\x01') &&
     (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44))) {
    lVar1 = *(longlong *)(param_2 + 0x10);
    lVar3 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x50);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x150;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x150) == lVar1) {
          if ((lVar3 + 0x10U & 0xffffffffffffffef) == 0) {
            return;
          }
          if (*(longlong *)(*(longlong *)(lVar3 + 0x130) + 0x10) != 0) {
            FUN_1481de412(*(longlong *)(lVar3 + 0x130) + 0x10);
          }
          if (*(longlong *)(*(longlong *)(lVar3 + 0x138) + 0x10) == 0) {
            return;
          }
          FUN_1481de412(*(longlong *)(lVar3 + 0x138) + 0x10);
          return;
        }
        iVar2 = *(int *)(lVar3 + 0x140);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1490be59a FUN_1490be59a body=209 status=ok
// SIG undefined FUN_1490be59a(void)

void FUN_1490be59a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar2 = param_2[2];
    lVar3 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x50);
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 0x150;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 0x150) == lVar2) {
          lVar2 = lVar3 + 0x10;
          if (lVar2 == 0 || lVar3 == 0) {
            return;
          }
          if (*(longlong *)(lVar3 + 0x138) == 0) {
            return;
          }
          if (*(longlong *)(lVar3 + 0x130) == 0) {
            return;
          }
          FUN_144455082(*param_2,*(longlong *)(lVar3 + 0x138),lVar2);
          FUN_144455082(*param_2,*(undefined8 *)(lVar3 + 0x130),lVar2);
          return;
        }
        iVar1 = *(int *)(lVar3 + 0x140);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1490be66c FUN_1490be66c body=227 status=ok
// SIG undefined FUN_1490be66c(void)

void FUN_1490be66c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [36];
  int local_14;
  int local_10;
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar1 = *(longlong *)(param_2 + 0x10);
    lVar3 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x50);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x150;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x150) == lVar1) {
          if ((lVar3 + 0x10U & 0xffffffffffffffef) != 0) {
            local_c = *(int *)(lVar3 + 0x18) + 1;
            local_10 = *(int *)(lVar3 + 0x14) + 1;
            local_14 = *(int *)(lVar3 + 0x10) + 1;
            FUN_143a5e2ca(param_2,&local_14,0xffffffff);
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x140);
      } while (iVar2 != -1);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490be768 FUN_1490be768 body=29 status=ok
// SIG undefined FUN_1490be768(void)

undefined8 FUN_1490be768(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490be79a FUN_1490be79a body=60 status=ok
// SIG undefined FUN_1490be79a(void)

void FUN_1490be79a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab43d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490be7d6 FUN_1490be7d6 body=60 status=ok
// SIG undefined FUN_1490be7d6(void)

void FUN_1490be7d6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab43d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490be812 FUN_1490be812 body=100 status=ok
// SIG undefined FUN_1490be812(void)

void FUN_1490be812(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 *puVar1;
  
  EnterCriticalSection(param_2);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_2 + 1);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab43d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490be867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1490be87c FUN_1490be87c body=29 status=ok
// SIG undefined FUN_1490be87c(void)

undefined8 FUN_1490be87c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490be8ae FUN_1490be8ae body=60 status=ok
// SIG undefined FUN_1490be8ae(void)

void FUN_1490be8ae(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4440;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490be8ea FUN_1490be8ea body=60 status=ok
// SIG undefined FUN_1490be8ea(void)

void FUN_1490be8ea(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4440;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490be926 FUN_1490be926 body=100 status=ok
// SIG undefined FUN_1490be926(void)

void FUN_1490be926(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 *puVar1;
  
  EnterCriticalSection(param_2);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_2 + 1);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4440;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490be97b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1490be990 FUN_1490be990 body=29 status=ok
// SIG undefined FUN_1490be990(void)

undefined8 FUN_1490be990(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490be9c2 FUN_1490be9c2 body=60 status=ok
// SIG undefined FUN_1490be9c2(void)

void FUN_1490be9c2(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab44b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490be9fe FUN_1490be9fe body=60 status=ok
// SIG undefined FUN_1490be9fe(void)

void FUN_1490be9fe(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab44b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490bea3a FUN_1490bea3a body=100 status=ok
// SIG undefined FUN_1490bea3a(void)

void FUN_1490bea3a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 *puVar1;
  
  EnterCriticalSection(param_2);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_2 + 1);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab44b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490bea8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1490beaa4 FUN_1490beaa4 body=29 status=ok
// SIG undefined FUN_1490beaa4(void)

undefined8 FUN_1490beaa4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490bead6 FUN_1490bead6 body=60 status=ok
// SIG undefined FUN_1490bead6(void)

void FUN_1490bead6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4520;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490beb12 FUN_1490beb12 body=60 status=ok
// SIG undefined FUN_1490beb12(void)

void FUN_1490beb12(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4520;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490beb4e FUN_1490beb4e body=100 status=ok
// SIG undefined FUN_1490beb4e(void)

void FUN_1490beb4e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 *puVar1;
  
  EnterCriticalSection(param_2);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_2 + 1);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4520;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490beba3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1490bebb8 FUN_1490bebb8 body=29 status=ok
// SIG undefined FUN_1490bebb8(void)

undefined8 FUN_1490bebb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490bebea FUN_1490bebea body=60 status=ok
// SIG undefined FUN_1490bebea(void)

void FUN_1490bebea(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4590;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490bec26 FUN_1490bec26 body=60 status=ok
// SIG undefined FUN_1490bec26(void)

void FUN_1490bec26(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4590;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490bec62 FUN_1490bec62 body=100 status=ok
// SIG undefined FUN_1490bec62(void)

void FUN_1490bec62(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 *puVar1;
  
  EnterCriticalSection(param_2);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_2 + 1);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4590;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490becb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1490beccc FUN_1490beccc body=29 status=ok
// SIG undefined FUN_1490beccc(void)

undefined8 FUN_1490beccc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490becfe FUN_1490becfe body=60 status=ok
// SIG undefined FUN_1490becfe(void)

void FUN_1490becfe(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4600;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490bed3a FUN_1490bed3a body=60 status=ok
// SIG undefined FUN_1490bed3a(void)

void FUN_1490bed3a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4600;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490bed76 FUN_1490bed76 body=100 status=ok
// SIG undefined FUN_1490bed76(void)

void FUN_1490bed76(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 *puVar1;
  
  EnterCriticalSection(param_2);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_2 + 1);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4600;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490bedcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1490bede0 FUN_1490bede0 body=29 status=ok
// SIG undefined FUN_1490bede0(void)

undefined8 FUN_1490bede0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490bee12 FUN_1490bee12 body=60 status=ok
// SIG undefined FUN_1490bee12(void)

void FUN_1490bee12(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4670;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490bee4e FUN_1490bee4e body=60 status=ok
// SIG undefined FUN_1490bee4e(void)

void FUN_1490bee4e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4670;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490bee8a FUN_1490bee8a body=100 status=ok
// SIG undefined FUN_1490bee8a(void)

void FUN_1490bee8a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 *puVar1;
  
  EnterCriticalSection(param_2);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_2 + 1);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4670;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490beedf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1490beef4 FUN_1490beef4 body=29 status=ok
// SIG undefined FUN_1490beef4(void)

undefined8 FUN_1490beef4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490bef26 FUN_1490bef26 body=60 status=ok
// SIG undefined FUN_1490bef26(void)

void FUN_1490bef26(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab46e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490bef62 FUN_1490bef62 body=60 status=ok
// SIG undefined FUN_1490bef62(void)

void FUN_1490bef62(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab46e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490bef9e FUN_1490bef9e body=100 status=ok
// SIG undefined FUN_1490bef9e(void)

void FUN_1490bef9e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 *puVar1;
  
  EnterCriticalSection(param_2);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_2 + 1);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab46e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490beff3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1490bf008 FUN_1490bf008 body=29 status=ok
// SIG undefined FUN_1490bf008(void)

undefined8 FUN_1490bf008(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490bf03a FUN_1490bf03a body=60 status=ok
// SIG undefined FUN_1490bf03a(void)

void FUN_1490bf03a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4750;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490bf076 FUN_1490bf076 body=60 status=ok
// SIG undefined FUN_1490bf076(void)

void FUN_1490bf076(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4750;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490bf0b2 FUN_1490bf0b2 body=100 status=ok
// SIG undefined FUN_1490bf0b2(void)

void FUN_1490bf0b2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 *puVar1;
  
  EnterCriticalSection(param_2);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_2 + 1);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4750;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490bf107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1490bf11c FUN_1490bf11c body=138 status=ok
// SIG undefined FUN_1490bf11c(void)

code * FUN_1490bf11c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GridCurrentBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000180;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e6a24a;
}



// FUNCTION 1490bf1a6 FUN_1490bf1a6 body=177 status=ok
// SIG undefined FUN_1490bf1a6(void)

void FUN_1490bf1a6(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e69fd8();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cbfdfd0,param_4);
  local_78 = &DAT_14cbfdfd0;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1490bf276(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490bf258 FUN_1490bf258 body=29 status=ok
// SIG undefined FUN_1490bf258(void)

undefined8 FUN_1490bf258(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490bf276 FUN_1490bf276 body=344 status=ok
// SIG undefined FUN_1490bf276(void)

void FUN_1490bf276(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar14 = FUN_14321180c(param_2);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar13 = FUN_144a8b328(uVar14,2);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar15;
  local_50 = DAT_14cbfe018;
  if (DAT_14cbfe018 != 0) {
    LOCK();
    *(int *)(DAT_14cbfe018 + 8) = *(int *)(DAT_14cbfe018 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cbfdfd0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar13);
  *puVar16 = &PTR_FUN_14bab4840;
  uVar13 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar13;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar16);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490bf3d0 FUN_1490bf3d0 body=38 status=ok
// SIG undefined FUN_1490bf3d0(void)

undefined8 FUN_1490bf3d0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490bf3f6 FUN_1490bf3f6 body=163 status=ok
// SIG undefined FUN_1490bf3f6(void)

void FUN_1490bf3f6(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_14445561a();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_144455702(param_1,param_2);
  return;
}



// FUNCTION 1490bf499 FUN_1490bf499 body=374 status=ok
// SIG undefined FUN_1490bf499(void)

void FUN_1490bf499(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1490bf610 FUN_1490bf610 body=38 status=ok
// SIG undefined FUN_1490bf610(void)

undefined8 FUN_1490bf610(undefined8 param_1,int param_2)

{
  FUN_1490bf656();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490bf636 FUN_1490bf636 body=32 status=ok
// SIG undefined FUN_1490bf636(void)

undefined8 FUN_1490bf636(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FNDIVelocityGridBuffer");
  return param_2;
}



// FUNCTION 1490bf656 FUN_1490bf656 body=65 status=ok
// SIG undefined FUN_1490bf656(void)

void FUN_1490bf656(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14bab4860;
  FUN_143abafa4(param_1 + 2);
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1490bf698 FUN_1490bf698 body=29 status=ok
// SIG undefined FUN_1490bf698(void)

undefined8 FUN_1490bf698(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490bf6ca FUN_1490bf6ca body=60 status=ok
// SIG undefined FUN_1490bf6ca(void)

void FUN_1490bf6ca(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4890;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490bf706 FUN_1490bf706 body=60 status=ok
// SIG undefined FUN_1490bf706(void)

void FUN_1490bf706(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4890;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490bf742 FUN_1490bf742 body=100 status=ok
// SIG undefined FUN_1490bf742(void)

void FUN_1490bf742(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 *puVar1;
  
  EnterCriticalSection(param_2);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_2 + 1);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4890;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490bf797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1490bf7ac FUN_1490bf7ac body=29 status=ok
// SIG undefined FUN_1490bf7ac(void)

undefined8 FUN_1490bf7ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490bf7de FUN_1490bf7de body=60 status=ok
// SIG undefined FUN_1490bf7de(void)

void FUN_1490bf7de(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4900;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490bf81a FUN_1490bf81a body=60 status=ok
// SIG undefined FUN_1490bf81a(void)

void FUN_1490bf81a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4900;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490bf856 FUN_1490bf856 body=100 status=ok
// SIG undefined FUN_1490bf856(void)

void FUN_1490bf856(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 *puVar1;
  
  EnterCriticalSection(param_2);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_2 + 1);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4900;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490bf8ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1490bf8c0 FUN_1490bf8c0 body=29 status=ok
// SIG undefined FUN_1490bf8c0(void)

undefined8 FUN_1490bf8c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490bf8f2 FUN_1490bf8f2 body=60 status=ok
// SIG undefined FUN_1490bf8f2(void)

void FUN_1490bf8f2(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4970;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490bf92e FUN_1490bf92e body=60 status=ok
// SIG undefined FUN_1490bf92e(void)

void FUN_1490bf92e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4970;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490bf96a FUN_1490bf96a body=100 status=ok
// SIG undefined FUN_1490bf96a(void)

void FUN_1490bf96a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 *puVar1;
  
  EnterCriticalSection(param_2);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_2 + 1);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4970;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490bf9bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1490bf9d4 FUN_1490bf9d4 body=29 status=ok
// SIG undefined FUN_1490bf9d4(void)

undefined8 FUN_1490bf9d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490bfa06 FUN_1490bfa06 body=60 status=ok
// SIG undefined FUN_1490bfa06(void)

void FUN_1490bfa06(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab49e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490bfa42 FUN_1490bfa42 body=60 status=ok
// SIG undefined FUN_1490bfa42(void)

void FUN_1490bfa42(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab49e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490bfa7e FUN_1490bfa7e body=100 status=ok
// SIG undefined FUN_1490bfa7e(void)

void FUN_1490bfa7e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 *puVar1;
  
  EnterCriticalSection(param_2);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_2 + 1);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab49e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490bfad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1490bfaea FUN_1490bfaea body=19 status=ok
// SIG undefined FUN_1490bfaea(void)

undefined1 FUN_1490bfaea(undefined8 param_1,undefined8 param_2)

{
  FUN_1490bd9f6(param_2);
  return 1;
}



// FUNCTION 1490bfafe FUN_1490bfafe body=29 status=ok
// SIG undefined FUN_1490bfafe(void)

undefined8 FUN_1490bfafe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490bfb30 FUN_1490bfb30 body=60 status=ok
// SIG undefined FUN_1490bfb30(void)

void FUN_1490bfb30(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4a50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490bfb6c FUN_1490bfb6c body=60 status=ok
// SIG undefined FUN_1490bfb6c(void)

void FUN_1490bfb6c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4a50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1490bfba8 FUN_1490bfba8 body=100 status=ok
// SIG undefined FUN_1490bfba8(void)

void FUN_1490bfba8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 *puVar1;
  
  EnterCriticalSection(param_2);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_2 + 1);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bab4a50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490bfbfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1490bfc14 FUN_1490bfc14 body=19 status=ok
// SIG undefined FUN_1490bfc14(void)

undefined1 FUN_1490bfc14(undefined8 param_1,undefined8 param_2)

{
  FUN_1490bd748(param_2);
  return 1;
}



// FUNCTION 1490bfc27 FUN_1490bfc27 body=177 status=ok
// SIG undefined FUN_1490bfc27(void)

void FUN_1490bfc27(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145ed6730();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cbfe058,param_4);
  local_78 = &DAT_14cbfe058;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1490bfcf8(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490bfcda FUN_1490bfcda body=29 status=ok
// SIG undefined FUN_1490bfcda(void)

undefined8 FUN_1490bfcda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490bfcf8 FUN_1490bfcf8 body=344 status=ok
// SIG undefined FUN_1490bfcf8(void)

void FUN_1490bfcf8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar14 = FUN_14321180c(param_2);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar13 = FUN_144a8b328(uVar14,2);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar15;
  local_50 = DAT_14cbfe0a0;
  if (DAT_14cbfe0a0 != 0) {
    LOCK();
    *(int *)(DAT_14cbfe0a0 + 8) = *(int *)(DAT_14cbfe0a0 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cbfe058;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar13);
  *puVar16 = &PTR_FUN_14bab4ac0;
  uVar13 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar13;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar16);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490bfe52 FUN_1490bfe52 body=38 status=ok
// SIG undefined FUN_1490bfe52(void)

undefined8 FUN_1490bfe52(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490bfe78 FUN_1490bfe78 body=163 status=ok
// SIG undefined FUN_1490bfe78(void)

void FUN_1490bfe78(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_14445594e();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_144455a36(param_1,param_2);
  return;
}



// FUNCTION 1490bff1b FUN_1490bff1b body=374 status=ok
// SIG undefined FUN_1490bff1b(void)

void FUN_1490bff1b(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1490c0091 FUN_1490c0091 body=177 status=ok
// SIG undefined FUN_1490c0091(void)

void FUN_1490c0091(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e6a542();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cbfe0e0,param_4);
  local_78 = &DAT_14cbfe0e0;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1490c0162(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c0144 FUN_1490c0144 body=29 status=ok
// SIG undefined FUN_1490c0144(void)

undefined8 FUN_1490c0144(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490c0162 FUN_1490c0162 body=344 status=ok
// SIG undefined FUN_1490c0162(void)

void FUN_1490c0162(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar14 = FUN_14321180c(param_2);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar13 = FUN_144a8b328(uVar14,2);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar15;
  local_50 = DAT_14cbfe128;
  if (DAT_14cbfe128 != 0) {
    LOCK();
    *(int *)(DAT_14cbfe128 + 8) = *(int *)(DAT_14cbfe128 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cbfe0e0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar13);
  *puVar16 = &PTR_FUN_14bab4ae0;
  uVar13 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar13;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar16);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c02bc FUN_1490c02bc body=38 status=ok
// SIG undefined FUN_1490c02bc(void)

undefined8 FUN_1490c02bc(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490c02e2 FUN_1490c02e2 body=163 status=ok
// SIG undefined FUN_1490c02e2(void)

void FUN_1490c02e2(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_144455c6a();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_144455d52(param_1,param_2);
  return;
}



// FUNCTION 1490c0385 FUN_1490c0385 body=374 status=ok
// SIG undefined FUN_1490c0385(void)

void FUN_1490c0385(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1490c04fc FUN_1490c04fc body=108 status=ok
// SIG undefined FUN_1490c04fc(void)

void FUN_1490c04fc(longlong *param_1,longlong param_2)

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
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x150) == param_2) {
          FUN_1490c0568(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x150 + *param_1 + 0x140);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1490c0568 FUN_1490c0568 body=104 status=ok
// SIG undefined FUN_1490c0568(void)

void FUN_1490c0568(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x144 + (longlong)param_2 * 0x150);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x140 + lVar5 * 0x150);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x150 + 0x140);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x150 + 0x140);
  FUN_1490c05d0();
  return;
}



// FUNCTION 1490c05d0 FUN_1490c05d0 body=122 status=ok
// SIG undefined FUN_1490c05d0(void)

void FUN_1490c05d0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x150) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x150) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x150 + 4) = uVar5;
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



// FUNCTION 1490c064a FUN_1490c064a body=154 status=ok
// SIG undefined FUN_1490c064a(void)

void FUN_1490c064a(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1490c06e4();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cbfe1a8;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0xa0;
  return;
}



// FUNCTION 1490c06e4 FUN_1490c06e4 body=258 status=ok
// SIG undefined FUN_1490c06e4(void)

void FUN_1490c06e4(void)

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
              0x110) < DAT_14cbfe228) {
    FUN_144b3d300(&DAT_14cbfe228);
    if (DAT_14cbfe228 == -1) {
      FUN_1490c07e8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0x1d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfe1a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144456369);
      _Init_thread_footer(&DAT_14cbfe228);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c07e8 FUN_1490c07e8 body=226 status=ok
// SIG undefined FUN_1490c07e8(void)

longlong * FUN_1490c07e8(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1490c08cc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c08cc FUN_1490c08cc body=136 status=ok
// SIG undefined FUN_1490c08cc(void)

code * FUN_1490c08cc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GridDestinationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9800000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490c0954;
}



// FUNCTION 1490c0954 FUN_1490c0954 body=136 status=ok
// SIG undefined FUN_1490c0954(void)

code * FUN_1490c0954(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GridCurrentBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490c09dc;
}



// FUNCTION 1490c09dc FUN_1490c09dc body=136 status=ok
// SIG undefined FUN_1490c09dc(void)

code * FUN_1490c09dc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GridSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490c0a64;
}



// FUNCTION 1490c0a64 FUN_1490c0a64 body=136 status=ok
// SIG undefined FUN_1490c0a64(void)

code * FUN_1490c0a64(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WorldInverse";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000001f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490c0aec;
}



// FUNCTION 1490c0aec FUN_1490c0aec body=130 status=ok
// SIG undefined FUN_1490c0aec(void)

undefined1 * FUN_1490c0aec(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WorldTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1490c0b6e;
}



// FUNCTION 1490c0b72 FUN_1490c0b72 body=189 status=ok
// SIG undefined FUN_1490c0b72(void)

longlong FUN_1490c0b72(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x150;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x150) == *param_3) {
          if (lVar3 != 0) goto LAB_1490c0c12;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x140);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1490c0c30(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x150 + *param_1;
LAB_1490c0c12:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 0x10;
}



// FUNCTION 1490c0c30 FUN_1490c0c30 body=296 status=ok
// SIG undefined FUN_1490c0c30(void)

undefined4 * FUN_1490c0c30(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_1490c0d5a();
  *local_40 = *(undefined8 *)*param_4;
  memset(local_40 + 2,0,0x130);
  *(undefined4 *)(local_40 + 0x28) = 0xffffffff;
  cVar1 = FUN_1490c0e46(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x144) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x28) =
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
      FUN_1490c0ede(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c0d5a FUN_1490c0d5a body=235 status=ok
// SIG undefined FUN_1490c0d5a(void)

int * FUN_1490c0d5a(longlong *param_1,int *param_2)

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
      FUN_140c1d76c(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x150);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x150) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x150 + *param_1;
  return param_2;
}



// FUNCTION 1490c0e46 FUN_1490c0e46 body=151 status=ok
// SIG undefined FUN_1490c0e46(void)

undefined8 FUN_1490c0e46(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x150);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x150) == *param_3) {
          memmove(_Dst,param_3,0x140);
          FUN_1490c05d0(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x140);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1490c0ede FUN_1490c0ede body=456 status=ok
// SIG undefined FUN_1490c0ede(void)

void FUN_1490c0ede(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x150;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x144 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x140 + lVar7) =
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



// FUNCTION 1490c10b4 FUN_1490c10b4 body=75 status=ok
// SIG undefined FUN_1490c10b4(void)

void FUN_1490c10b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1490c4a80(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c1106 FUN_1490c1106 body=245 status=ok
// SIG undefined FUN_1490c1106(void)

void FUN_1490c1106(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1490c7cfe(param_1,local_28,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c11fc FUN_1490c11fc body=344 status=ok
// SIG undefined FUN_1490c11fc(void)

void FUN_1490c11fc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144456d7c(param_1,local_28,local_30,local_38);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c135c FUN_1490c135c body=178 status=ok
// SIG undefined FUN_1490c135c(void)

void FUN_1490c135c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1490c62c8(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c1410 FUN_1490c1410 body=117 status=ok
// SIG undefined FUN_1490c1410(void)

void FUN_1490c1410(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1490c8338(param_1,&local_28);
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c1486 FUN_1490c1486 body=117 status=ok
// SIG undefined FUN_1490c1486(void)

void FUN_1490c1486(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1490c8588(param_1,&local_28);
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c14fc FUN_1490c14fc body=139 status=ok
// SIG undefined FUN_1490c14fc(void)

void FUN_1490c14fc(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1490c841c(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c1588 FUN_1490c1588 body=179 status=ok
// SIG undefined FUN_1490c1588(void)

void FUN_1490c1588(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_144457738(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c163c FUN_1490c163c body=229 status=ok
// SIG undefined FUN_1490c163c(void)

void FUN_1490c163c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_1490c7e04(param_1,&local_38,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c1722 FUN_1490c1722 body=37 status=ok
// SIG undefined FUN_1490c1722(void)

void FUN_1490c1722(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1490c832a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1490c174e FUN_1490c174e body=178 status=ok
// SIG undefined FUN_1490c174e(void)

void FUN_1490c174e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1490c7cc0(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c181e FUN_1490c181e body=163 status=ok
// SIG undefined FUN_1490c181e(void)

void FUN_1490c181e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1490c7d46(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c18c2 FUN_1490c18c2 body=179 status=ok
// SIG undefined FUN_1490c18c2(void)

void FUN_1490c18c2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1490c680c(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c197c FUN_1490c197c body=245 status=ok
// SIG undefined FUN_1490c197c(void)

void FUN_1490c197c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_144458372(param_1,local_28,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c1a8e FUN_1490c1a8e body=245 status=ok
// SIG undefined FUN_1490c1a8e(void)

void FUN_1490c1a8e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1490c7bf8(param_1,local_28,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c1b88 FUN_1490c1b88 body=75 status=ok
// SIG undefined FUN_1490c1b88(void)

void FUN_1490c1b88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14445a684(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c1bda FUN_1490c1bda body=245 status=ok
// SIG undefined FUN_1490c1bda(void)

void FUN_1490c1bda(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1490ca746(param_1,local_28,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c1cd0 FUN_1490c1cd0 body=377 status=ok
// SIG undefined FUN_1490c1cd0(void)

void FUN_1490c1cd0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar1 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1490c9bd2(param_1,local_38,puVar1,local_60);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c1e4e FUN_1490c1e4e body=158 status=ok
// SIG undefined FUN_1490c1e4e(void)

void FUN_1490c1e4e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14445ca98(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c1f04 FUN_1490c1f04 body=124 status=ok
// SIG undefined FUN_1490c1f04(void)

void FUN_1490c1f04(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1490ca4f0(param_1,local_68);
  FUN_14613f54a(param_3,local_68);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_140ba05b6(local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c1f82 FUN_1490c1f82 body=179 status=ok
// SIG undefined FUN_1490c1f82(void)

void FUN_1490c1f82(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1490c9f40(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c2036 FUN_1490c2036 body=268 status=ok
// SIG undefined FUN_1490c2036(void)

void FUN_1490c2036(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1490ca08a(param_1,&local_58,local_38);
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  if (&local_58 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_3 + 4) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_3 + 4) = local_48;
    local_48 = 0;
    param_3[6] = local_40;
    param_3[7] = local_3c;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c2144 FUN_1490c2144 body=271 status=ok
// SIG undefined FUN_1490c2144(void)

void FUN_1490c2144(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1490ca200(param_1,&local_58,puVar1);
  if (&local_58 == param_3) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_58;
    local_58 = 0;
    *(undefined4 *)(param_3 + 1) = local_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_4c;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c2254 FUN_1490c2254 body=37 status=ok
// SIG undefined FUN_1490c2254(void)

void FUN_1490c2254(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1490ca4bc();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1490c2280 FUN_1490c2280 body=652 status=ok
// SIG undefined FUN_1490c2280(void)

void FUN_1490c2280(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined1 local_5d;
  undefined4 local_5c;
  longlong local_58 [3];
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_5c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  local_5d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5d);
  }
  puVar2 = &local_5d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_68;
  local_88 = local_5c;
  local_80 = puVar2;
  uVar1 = FUN_1490c916a(param_1,local_38,local_40,local_58);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c2514 FUN_1490c2514 body=163 status=ok
// SIG undefined FUN_1490c2514(void)

void FUN_1490c2514(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1490cb1a2(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c25be FUN_1490c25be body=195 status=ok
// SIG undefined FUN_1490c25be(void)

void FUN_1490c25be(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1490ca3b0(param_1,puVar2);
  *param_3 = uVar1;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c2682 FUN_1490c2682 body=124 status=ok
// SIG undefined FUN_1490c2682(void)

void FUN_1490c2682(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1490ca558(param_1,local_68);
  FUN_1490c3538(param_3,local_68);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_147a8b2a2(local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c2704 FUN_1490c2704 body=37 status=ok
// SIG undefined FUN_1490c2704(void)

void FUN_1490c2704(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1490cb04e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1490c2730 FUN_1490c2730 body=163 status=ok
// SIG undefined FUN_1490c2730(void)

void FUN_1490c2730(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1490caeac(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c27da FUN_1490c27da body=163 status=ok
// SIG undefined FUN_1490c27da(void)

void FUN_1490c27da(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1490cad16(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c2884 FUN_1490c2884 body=245 status=ok
// SIG undefined FUN_1490c2884(void)

void FUN_1490c2884(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1490caa4a(param_1,local_28,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c2996 FUN_1490c2996 body=241 status=ok
// SIG undefined FUN_1490c2996(void)

void FUN_1490c2996(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1490cb0e6(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c2a88 FUN_1490c2a88 body=268 status=ok
// SIG undefined FUN_1490c2a88(void)

void FUN_1490c2a88(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1490c9efa(param_1,&local_58,local_38);
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  if (&local_58 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_3 + 4) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_3 + 4) = local_48;
    local_48 = 0;
    param_3[6] = local_40;
    param_3[7] = local_3c;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c2ba6 FUN_1490c2ba6 body=75 status=ok
// SIG undefined FUN_1490c2ba6(void)

void FUN_1490c2ba6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1490cb828(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c2c1a FUN_1490c2c1a body=162 status=ok
// SIG undefined FUN_1490c2c1a(void)

void FUN_1490c2c1a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1490cc06e(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c2cbe FUN_1490c2cbe body=155 status=ok
// SIG undefined FUN_1490c2cbe(void)

void FUN_1490c2cbe(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_1490cbe66(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c2d5a FUN_1490c2d5a body=160 status=ok
// SIG undefined FUN_1490c2d5a(void)

void FUN_1490c2d5a(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1490cbe40(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c2dfc FUN_1490c2dfc body=160 status=ok
// SIG undefined FUN_1490c2dfc(void)

void FUN_1490c2dfc(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1490cbe26(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c2e9e FUN_1490c2e9e body=154 status=ok
// SIG undefined FUN_1490c2e9e(void)

void FUN_1490c2e9e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1490cbe76(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c2f3a FUN_1490c2f3a body=156 status=ok
// SIG undefined FUN_1490c2f3a(void)

void FUN_1490c2f3a(undefined8 param_1,longlong param_2)

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
  FUN_1490cbf78(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c2fd8 FUN_1490c2fd8 body=156 status=ok
// SIG undefined FUN_1490c2fd8(void)

void FUN_1490c2fd8(undefined8 param_1,longlong param_2)

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
  FUN_1490cbe82(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c3076 FUN_1490c3076 body=156 status=ok
// SIG undefined FUN_1490c3076(void)

void FUN_1490c3076(undefined8 param_1,longlong param_2)

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
  FUN_1490cbfca(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c3114 FUN_1490c3114 body=156 status=ok
// SIG undefined FUN_1490c3114(void)

void FUN_1490c3114(undefined8 param_1,longlong param_2)

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
  FUN_1490cbed4(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c31b2 FUN_1490c31b2 body=156 status=ok
// SIG undefined FUN_1490c31b2(void)

void FUN_1490c31b2(undefined8 param_1,longlong param_2)

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
  FUN_1490cc01c(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c3250 FUN_1490c3250 body=156 status=ok
// SIG undefined FUN_1490c3250(void)

void FUN_1490c3250(undefined8 param_1,longlong param_2)

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
  FUN_1490cbf26(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c32ee FUN_1490c32ee body=154 status=ok
// SIG undefined FUN_1490c32ee(void)

void FUN_1490c32ee(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1490cbe5a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c338a FUN_1490c338a body=236 status=ok
// SIG undefined FUN_1490c338a(void)

void FUN_1490c338a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
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
  FUN_1490cc0c2(param_1,local_1c,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c347a FUN_1490c347a body=45 status=ok
// SIG undefined FUN_1490c347a(void)

longlong FUN_1490c347a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d3dd42(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490c34a8 FUN_1490c34a8 body=48 status=ok
// SIG undefined FUN_1490c34a8(void)

longlong FUN_1490c34a8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145d3dd42(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490c34d8 FUN_1490c34d8 body=48 status=ok
// SIG undefined FUN_1490c34d8(void)

longlong FUN_1490c34d8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145d3dd42(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490c3508 FUN_1490c3508 body=48 status=ok
// SIG undefined FUN_1490c3508(void)

longlong FUN_1490c3508(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145d3dd42(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490c3538 FUN_1490c3538 body=93 status=ok
// SIG undefined FUN_1490c3538(void)

longlong FUN_1490c3538(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1490c3596(param_1);
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



// FUNCTION 1490c3596 FUN_1490c3596 body=388 status=ok
// SIG undefined FUN_1490c3596(void)

longlong * FUN_1490c3596(longlong *param_1,longlong *param_2)

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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + (longlong)iVar6 * 0x20) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar7));
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c371c FUN_1490c371c body=69 status=ok
// SIG undefined FUN_1490c371c(void)

void FUN_1490c371c(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1490c3762(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490c3762 FUN_1490c3762 body=54 status=ok
// SIG undefined FUN_1490c3762(void)

void FUN_1490c3762(longlong *param_1)

{
  FUN_1490c3798(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490c3798 FUN_1490c3798 body=346 status=ok
// SIG undefined FUN_1490c3798(void)

void FUN_1490c3798(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_1490c38f4((longlong)iStack_54 * 0x68 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_14059f004(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1490c38f4 FUN_1490c38f4 body=69 status=ok
// SIG undefined FUN_1490c38f4(void)

void FUN_1490c38f4(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1490c393a(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490c393a FUN_1490c393a body=54 status=ok
// SIG undefined FUN_1490c393a(void)

void FUN_1490c393a(longlong *param_1)

{
  FUN_1490c3970(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490c3970 FUN_1490c3970 body=346 status=ok
// SIG undefined FUN_1490c3970(void)

void FUN_1490c3970(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_1490c3acc((longlong)iStack_54 * 0x38 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_144748838(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1490c3acc FUN_1490c3acc body=61 status=ok
// SIG undefined FUN_1490c3acc(void)

void FUN_1490c3acc(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490c3b1a FUN_1490c3b1a body=44 status=ok
// SIG undefined FUN_1490c3b1a(void)

void FUN_1490c3b1a(undefined8 param_1,longlong *param_2)

{
  FUN_1447a1747(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490c3b5c FUN_1490c3b5c body=54 status=ok
// SIG undefined FUN_1490c3b5c(void)

undefined1 FUN_1490c3b5c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140bee9ec(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1490c3bba FUN_1490c3bba body=59 status=ok
// SIG undefined FUN_1490c3bba(void)

undefined8 FUN_1490c3bba(longlong *param_1)

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



// FUNCTION 1490c3c58 FUN_1490c3c58 body=48 status=ok
// SIG undefined FUN_1490c3c58(void)

void FUN_1490c3c58(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1447a1747(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1490c3ca0 FUN_1490c3ca0 body=47 status=ok
// SIG undefined FUN_1490c3ca0(void)

void FUN_1490c3ca0(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490c3ce6 FUN_1490c3ce6 body=67 status=ok
// SIG undefined FUN_1490c3ce6(void)

undefined1 FUN_1490c3ce6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1490c3d52 FUN_1490c3d52 body=59 status=ok
// SIG undefined FUN_1490c3d52(void)

undefined8 FUN_1490c3d52(longlong *param_1)

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



// FUNCTION 1490c3df0 FUN_1490c3df0 body=51 status=ok
// SIG undefined FUN_1490c3df0(void)

void FUN_1490c3df0(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 1490c3e72 FUN_1490c3e72 body=42 status=ok
// SIG undefined FUN_1490c3e72(void)

void FUN_1490c3e72(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1490c393a(param_2);
  return;
}



// FUNCTION 1490c3eb2 FUN_1490c3eb2 body=54 status=ok
// SIG undefined FUN_1490c3eb2(void)

undefined1 FUN_1490c3eb2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1490c3fdc(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1490c3f10 FUN_1490c3f10 body=59 status=ok
// SIG undefined FUN_1490c3f10(void)

undefined8 FUN_1490c3f10(longlong *param_1)

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



// FUNCTION 1490c3f56 FUN_1490c3f56 body=55 status=ok
// SIG undefined FUN_1490c3f56(void)

void FUN_1490c3f56(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1490c393a(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1490c3fdc FUN_1490c3fdc body=122 status=ok
// SIG undefined FUN_1490c3fdc(void)

longlong FUN_1490c3fdc(longlong param_1,longlong param_2)

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
    FUN_1490c4056(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1490c4056 FUN_1490c4056 body=210 status=ok
// SIG undefined FUN_1490c4056(void)

undefined8 * FUN_1490c4056(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1490c3970(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447030e2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_1490c4128(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0xc) = *(undefined8 *)(puVar4 + 0xc);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0xe;
        puVar6 = puVar6 + 0xe;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1490c4128 FUN_1490c4128 body=105 status=ok
// SIG undefined FUN_1490c4128(void)

undefined8 * FUN_1490c4128(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
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
  FUN_1490c4192(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 1490c4192 FUN_1490c4192 body=156 status=ok
// SIG undefined FUN_1490c4192(void)

undefined8 * FUN_1490c4192(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1490c427e FUN_1490c427e body=42 status=ok
// SIG undefined FUN_1490c427e(void)

void FUN_1490c427e(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1490c3762(param_2);
  return;
}



// FUNCTION 1490c42be FUN_1490c42be body=54 status=ok
// SIG undefined FUN_1490c42be(void)

undefined1 FUN_1490c42be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1490c43e8(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1490c431c FUN_1490c431c body=59 status=ok
// SIG undefined FUN_1490c431c(void)

undefined8 FUN_1490c431c(longlong *param_1)

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



// FUNCTION 1490c4362 FUN_1490c4362 body=55 status=ok
// SIG undefined FUN_1490c4362(void)

void FUN_1490c4362(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1490c3762(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1490c43e8 FUN_1490c43e8 body=122 status=ok
// SIG undefined FUN_1490c43e8(void)

longlong FUN_1490c43e8(longlong param_1,longlong param_2)

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
    FUN_1490c4462(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1490c4462 FUN_1490c4462 body=210 status=ok
// SIG undefined FUN_1490c4462(void)

undefined8 * FUN_1490c4462(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1490c3798(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406a7630(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_1490c4534(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0x18) = *(undefined8 *)(puVar4 + 0x18);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x1a;
        puVar6 = puVar6 + 0x1a;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1490c4534 FUN_1490c4534 body=145 status=ok
// SIG undefined FUN_1490c4534(void)

undefined8 * FUN_1490c4534(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
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
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_1490c3fdc(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 1490c45c6 FUN_1490c45c6 body=199 status=ok
// SIG undefined FUN_1490c45c6(void)

void FUN_1490c45c6(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_14584f2f0(param_1 + 0x25);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_144a1c8ac(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_144a1c8ac(param_1 + 0x10);
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14102a02c(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490c468e FUN_1490c468e body=820 status=ok
// SIG undefined FUN_1490c468e(void)

void FUN_1490c468e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar15 = *(uint *)(param_1 + 9);
  if (uVar15 != 0) {
    plVar1 = param_1 + 7;
    uVar14 = 0;
    FUN_144a1cbf0(plVar1,0,uVar15,4);
    if (0 < (int)uVar15) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar14) * 4)
             = 0xffffffff;
        uVar14 = uVar14 + 1;
      } while (uVar15 != uVar14);
    }
    uStack_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = (undefined2 *)&DAT_ffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_a8 = local_68;
    local_a0 = uStack_60;
    local_98 = local_58;
    local_90 = local_50;
    local_8c = local_4c;
    local_b0 = param_1;
    while (iVar4 = local_98._4_4_, local_98._4_4_ < (int)local_a0[3]) {
      lVar13 = *local_b0;
      lVar17 = (longlong)local_98._4_4_;
      puVar2 = *(undefined8 **)(lVar13 + lVar17 * 0x10);
      local_88 = *(undefined4 *)puVar2;
      uStack_84 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_80 = (undefined4)puVar2[1];
      uStack_7c = *(undefined4 *)((longlong)puVar2 + 0xc);
      local_78 = (void *)0x0;
      local_70 = *(int *)(puVar2 + 3);
      lVar16 = (longlong)local_70;
      pvVar3 = (void *)puVar2[2];
      if (lVar16 == 0) {
        local_6c = 0;
        local_50 = 0;
        local_68 = *puVar2;
        uStack_60 = (longlong *)puVar2[1];
LAB_1490c4885:
        local_58 = (undefined2 *)0x0;
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_78,local_70,0);
        memcpy(local_78,pvVar3,lVar16 * 2);
        pvVar3 = local_78;
        lVar16 = (longlong)local_70;
        local_68 = CONCAT44(uStack_84,local_88);
        uStack_60 = (longlong *)CONCAT44(uStack_7c,uStack_80);
        local_58 = (undefined2 *)0x0;
        local_50 = local_70;
        if (lVar16 == 0) goto LAB_1490c4885;
        FUN_1446dd670(&local_58,local_70,0);
        memcpy(local_58,pvVar3,lVar16 * 2);
      }
      plVar10 = uStack_60;
      iVar6 = FUN_144a788f7();
      uVar5 = local_68;
      iVar7 = FUN_144a788f7();
      uVar15 = (int)((ulonglong)uVar5 >> 0x20) + iVar7;
      uVar8 = FUN_144a78877(0,(uVar15 >> 2) +
                              iVar6 + (int)((ulonglong)plVar10 >> 0x20) + uVar15 * 0x40 + 0x9e3779b9
                              ^ uVar15);
      puVar12 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar12 = local_58;
      }
      iVar6 = local_50 + -1;
      if (local_50 == 0) {
        iVar6 = 0;
      }
      uVar9 = FUN_144a49b4a(iVar6,puVar12);
      iVar6 = FUN_144a78877(uVar8,uVar9);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar13 = lVar13 + lVar17 * 0x10;
      uVar11 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
      iVar6 = (int)uVar11;
      *(int *)(lVar13 + 0xc) = iVar6;
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar1;
      }
      *(undefined4 *)(lVar13 + 8) =
           *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar1;
      }
      *(int *)((longlong)plVar10 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
      local_98 = (undefined2 *)CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
      FUN_1449c0562(&local_a8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490c4a3c FUN_1490c4a3c body=68 status=ok
// SIG undefined FUN_1490c4a3c(void)

void FUN_1490c4a3c(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146880606();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1490c4a80 FUN_1490c4a80 body=174 status=ok
// SIG undefined FUN_1490c4a80(void)

void FUN_1490c4a80(longlong param_1,longlong param_2)

{
  undefined1 auStack_1d8 [40];
  undefined **local_1b0;
  longlong local_1a8;
  undefined ***local_1a0;
  undefined8 **local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1a8 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  if ((*(byte *)(param_2 + 0x36) & 0x40) != 0) {
    FUN_1490cef24(param_2,param_1 + 0x28);
    FUN_1490cf234(param_2,param_1 + 0x170);
  }
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001490c4b02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c4b2f FUN_1490c4b2f body=103 status=ok
// SIG undefined FUN_1490c4b2f(void)

longlong FUN_1490c4b2f(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_144a797b2();
  lVar2 = FUN_140277cc4(uVar1,param_1,0,3,L"USDAssetCache2");
  if (lVar2 == 0) {
    uVar1 = FUN_140007dea();
    lVar2 = 0;
    lVar3 = FUN_140277cc4(uVar1,param_1,0,3,L"USDAssetCache2");
    if (lVar3 != 0) {
      lVar2 = *(longlong *)(lVar3 + 0x28);
    }
  }
  return lVar2;
}



// FUNCTION 1490c4b96 FUN_1490c4b96 body=335 status=ok
// SIG undefined FUN_1490c4b96(void)

undefined8 FUN_1490c4b96(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  if ((param_1 != 0) && (lVar3 = FUN_1490c4b2f(), lVar3 != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbfe730) && (FUN_144b3d300(&DAT_14cbfe730), DAT_14cbfe730 == -1)) {
      uVar4 = FUN_144a79692();
      uVar5 = FUN_1402d2740();
      uVar6 = FUN_1406d0862();
      uVar7 = FUN_140654dc2();
      uVar8 = FUN_140f5e1c2();
      uVar9 = FUN_144a85a6c();
      DAT_14cbfe720 = (undefined8 *)0x0;
      DAT_14cbfe728 = 6;
      FUN_1484d6e40(&DAT_14cbfe720,6);
      puVar2 = DAT_14cbfe720;
      *DAT_14cbfe720 = uVar4;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      puVar2[4] = uVar8;
      puVar2[5] = uVar9;
      atexit((_func_5014 *)&LAB_144456956);
      _Init_thread_footer(&DAT_14cbfe730);
    }
    if ((longlong)DAT_14cbfe728 != 0) {
      lVar10 = 0;
      while (((lVar1 = *(longlong *)((longlong)DAT_14cbfe720 + lVar10), lVar1 == 0 ||
              (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
              lVar1 + 0x30))) {
        lVar10 = lVar10 + 8;
        if ((longlong)DAT_14cbfe728 * 8 == lVar10) {
          return 0;
        }
      }
      return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 1490c4ce5 FUN_1490c4ce5 body=218 status=ok
// SIG undefined FUN_1490c4ce5(void)

undefined8 FUN_1490c4ce5(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_138 [32];
  undefined1 local_118 [248];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_144a79692();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar1 = FUN_14142e422(param_1);
      if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_138);
      }
    }
    FUN_14278f036(local_118,1);
    (**(code **)(*param_1 + 400))(param_1,local_118);
    uVar2 = FUN_140209a84(local_118);
    FUN_1400fd2aa(local_118);
  }
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c4ddd FUN_1490c4ddd body=2844 status=ok
// SIG undefined FUN_1490c4ddd(void)

void FUN_1490c4ddd(undefined **param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  byte bVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_448 [32];
  undefined4 local_428;
  undefined **local_418;
  undefined **local_410;
  undefined4 local_404;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined1 *local_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined **local_3d8;
  undefined8 uStack_3d0;
  undefined **local_3c0;
  ulonglong *local_3b8;
  byte local_396;
  byte local_395;
  longlong local_358;
  longlong *local_330;
  undefined2 local_328;
  undefined1 local_320 [168];
  undefined1 *local_278;
  undefined1 *puStack_270;
  ulonglong local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined *local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  undefined8 local_238;
  int local_230;
  undefined8 local_22c;
  undefined4 local_224;
  longlong local_218;
  int local_210;
  undefined **local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  ulonglong uStack_1e8;
  undefined **local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_128;
  undefined4 local_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  int local_e4;
  undefined1 local_e0 [8];
  undefined1 *local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_448;
  if (param_1 != (undefined **)0x0) {
    puVar12 = local_320;
    FUN_1490c58fc(puVar12);
    FUN_140713482(&local_3c0,puVar12);
    local_328 = 0;
    local_3c0 = &PTR_FUN_14bac19a0;
    if (param_3[0xd] != 0) {
      local_358 = param_3[0xd];
    }
    uVar15 = CONCAT71((int7)((ulonglong)puVar12 >> 8),*(undefined1 *)((longlong)param_3 + 0x2b)) &
             0xffffffffffffff20;
    bVar13 = (byte)uVar15;
    local_395 = local_395 & 0xdf | bVar13;
    (**(code **)(*local_330 + 0x70))(local_330,CONCAT71((int7)(uVar15 >> 8),bVar13 >> 5));
    FUN_1447a7b14(&local_3c0,param_3[8]);
    FUN_1447a7b10(&local_3c0,(int)param_3[9]);
    uVar11 = (**(code **)(*param_3 + 0x58))(param_3);
    (**(code **)(*local_330 + 0x60))(local_330,uVar11);
    (**(code **)(*param_1 + 0x120))(param_1);
    local_3d8 = (undefined **)0x0;
    uStack_3d0 = 0;
    local_428 = 0;
    FUN_14086ecde(param_1,&local_3d8,1,0);
    local_a8 = 0;
    local_a0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_9c = 0xffffffff00000080;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    local_208 = local_3d8;
    uStack_200._0_4_ = (uint)uStack_3d0;
    FUN_14688038e(&local_c8);
    local_f8 = 0;
    local_f0 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_ec = 0xffffffff00000080;
    local_e4 = 0;
    local_d8 = (undefined1 *)0x0;
    local_d0 = 0;
    FUN_144869430(&local_208);
    local_208 = &PTR_FUN_14bac1c00;
    local_148 = 0;
    local_140 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_13c = 0xffffffff00000080;
    local_134 = 0;
    local_128 = 0;
    local_120 = 0;
    local_418 = param_1;
    local_178 = param_1;
    local_170 = &local_c8;
    (**(code **)(*param_1 + 0xd8))(param_1,&local_208);
    FUN_1490c5982(&local_118,&local_168);
    FUN_144456968(&local_208);
    local_238 = 0;
    local_230 = 0;
    local_258 = (undefined *)0x0;
    uStack_250 = 0;
    local_22c = 0xffffffff00000080;
    local_224 = 0;
    local_218 = 0;
    local_210 = 0;
    uVar9 = (uint)uStack_3d0;
    if ((longlong)(int)(uint)uStack_3d0 != 0) {
      if ((int)(uint)uStack_3d0 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)(uint)uStack_3d0);
      }
      FUN_1490cf4fa(&local_258,uStack_3d0 & 0xffffffff);
      iVar16 = 1;
      if (3 < uVar9) {
        uVar9 = (uVar9 | 1) + 0xe;
        iVar16 = 0x1f;
        if (uVar9 != 0) {
          for (; uVar9 >> iVar16 == 0; iVar16 = iVar16 + -1) {
          }
        }
        iVar16 = 1 << ((byte)iVar16 & 0x1f);
      }
      if ((local_210 == 0) || (local_210 < iVar16)) {
        local_210 = iVar16;
        FUN_1490cf694();
      }
      lVar14 = (longlong)(int)(uint)uStack_3d0;
      if (lVar14 != 0) {
        local_410 = local_3d8;
        lVar17 = 0;
        do {
          ppuVar3 = *(undefined ***)((longlong)local_410 + lVar17);
          local_400 = ppuVar3;
          FUN_144869430(&local_208);
          local_208 = &PTR_FUN_14bac1c00;
          local_148 = 0;
          local_140 = 0;
          local_168 = 0;
          uStack_160 = 0;
          local_13c = 0xffffffff00000080;
          local_134 = 0;
          local_128 = 0;
          local_120 = 0;
          local_178 = ppuVar3;
          local_170 = &local_c8;
          (**(code **)(*local_400 + 0xd8))(local_400,&local_208);
          uVar9 = ((uint)((ulonglong)local_400 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_400 >> 4)
                  ) * -0x7a143595;
          uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
          uVar11 = FUN_1490cf874(&local_258,uVar9 >> 0x10 ^ uVar9,&local_400);
          FUN_1490c5982(uVar11,&local_168);
          FUN_1490c5982(&local_118,&local_168);
          FUN_144456968(&local_208);
          lVar17 = lVar17 + 8;
        } while (lVar14 * 8 != lVar17);
      }
    }
    iVar16 = (int)uStack_110 - local_e4;
    if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar16);
    }
    uVar15 = uStack_3d0 >> 0x20;
    uStack_3d0 = uStack_3d0 & 0xffffffff00000000;
    iVar8 = 0;
    if ((int)uVar15 != iVar16) {
      FUN_14079e7a6(&local_3d8,iVar16);
      iVar8 = (uint)uStack_3d0;
    }
    if (iVar16 != iVar8) {
LAB_1490c5383:
      local_400 = (undefined **)&DAT_100000000;
      local_3f0 = &DAT_ffffffff;
      uStack_3e8 = uStack_3e8 & 0xffffffff00000000;
      uStack_3f8 = local_248;
      if (local_230 == 0) {
        iVar8 = 0;
      }
      else {
        FUN_1449c0562(&local_400);
        iVar8 = local_230;
      }
      local_1f0 = local_3f0;
      puVar12 = local_1f0;
      uStack_1e8 = uStack_3e8;
      uStack_200._0_4_ = (int)local_400;
      uStack_200._4_4_ = local_400._4_4_;
      local_1f8 = (undefined4)uStack_3f8;
      uStack_1f4 = uStack_3f8._4_4_;
      local_208 = &local_258;
      local_1f0._4_4_ = (int)((ulonglong)local_3f0 >> 0x20);
      iVar10 = local_1f0._4_4_;
      if ((local_1f0._4_4_ != iVar8) || (local_1f0 = puVar12, uStack_3f8 != local_248)) {
        do {
          local_1f0 = puVar12;
          puVar5 = *local_208;
          lVar14 = (longlong)iVar10 * 0x60;
          if (*(int *)(puVar5 + lVar14 + 0x10) == *(int *)(puVar5 + lVar14 + 0x3c)) {
            puVar5 = *(undefined **)(puVar5 + lVar14);
            FUN_1490cfe10(&local_258,puVar5);
            uVar15 = uStack_3d0;
            if ((int)uStack_110 == local_e4) goto LAB_1490c547e;
            uVar9 = ((uint)((ulonglong)puVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar5 >> 4)) *
                    -0x7a143595;
            uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
            puVar12 = local_d8;
            if (local_d8 == (undefined1 *)0x0) {
              puVar12 = local_e0;
            }
            iVar8 = *(int *)(puVar12 + (ulonglong)(local_d0 - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
            goto joined_r0x0001490c55b3;
          }
          local_1f0 = (undefined1 *)CONCAT44(local_1f0._4_4_,(uint)local_1f0 & ~uStack_200._4_4_);
          FUN_1449c0562(&uStack_200);
          iVar10 = local_1f0._4_4_;
          puVar12 = local_1f0;
        } while (local_208 != &local_258 ||
                 ((undefined1 *)CONCAT44(uStack_1f4,local_1f8) != local_248 ||
                 local_1f0._4_4_ != iVar8));
      }
      goto LAB_1490c53e5;
    }
LAB_1490c507d:
    local_210 = 0;
    if (local_218 != 0) {
      FUN_1400020a8();
    }
    FUN_1490ccefe(&local_258);
    ppuVar3 = local_418;
    local_208 = (undefined **)0x0;
    uStack_200 = 0;
    if ((int)(uint)uStack_3d0 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uStack_3d0 & 0xffffffff);
    }
    if ((uStack_3d0 & 0xffffffff) != 0) {
      FUN_14079e7a6(&local_208);
      ppuVar6 = local_3d8;
      lVar14 = (longlong)(int)(uint)uStack_3d0;
      if (lVar14 != 0) {
        lVar17 = 0;
        do {
          plVar2 = *(longlong **)((longlong)ppuVar6 + lVar17);
          if (((plVar2 != (longlong *)0x0) && ((*(uint *)(plVar2 + 1) >> 0x12 & 1) == 0)) &&
             ((cVar7 = (**(code **)(*plVar2 + 0x120))(plVar2), uVar15 = uStack_200, cVar7 == '\0' ||
              ((local_358 == 0 || (*(longlong *)(local_358 + 0x10) == 0)))))) {
            lVar18 = (longlong)(int)uStack_200;
            uVar9 = (int)uStack_200 + 1;
            uStack_200 = CONCAT44(uStack_200._4_4_,uVar9);
            if (uStack_200._4_4_ < uVar9) {
              FUN_1447f76d2(&local_208,uVar15 & 0xffffffff);
            }
            local_208[lVar18] = (undefined *)plVar2;
          }
          lVar17 = lVar17 + 8;
        } while (lVar14 * 8 != lVar17);
      }
    }
    ppuVar6 = local_3d8;
    uVar15 = uStack_3d0;
    uStack_3d0 = uStack_200;
    bVar19 = local_3d8 != (undefined **)0x0;
    local_3d8 = local_208;
    local_208 = ppuVar6;
    uStack_200 = uVar15;
    if (bVar19) {
      FUN_1400020a8();
    }
    local_404 = (uint)uStack_3d0;
    puVar1 = (undefined4 *)*local_3b8 + 1;
    if ((undefined4 *)local_3b8[1] < puVar1) {
      if ((local_396 & 2) == 0) {
        (*(code *)local_3c0[0x2e])(&local_3c0,&local_404,4);
      }
      else {
        FUN_14572512c(&local_3c0,&local_404);
      }
    }
    else {
      local_404 = *(undefined4 *)*local_3b8;
      *local_3b8 = (ulonglong)puVar1;
    }
    if (0 < (longlong)(int)(uint)uStack_3d0) {
      uVar15 = (longlong)(int)(uint)uStack_3d0 + 1;
      do {
        puVar5 = local_3d8[uVar15 - 2];
        local_208 = (undefined **)0x0;
        uStack_200 = 0;
        FUN_1401031ac(*(undefined8 *)(puVar5 + 0x10),0,&local_208);
        FUN_14021219d(&local_3c0);
        local_258 = (undefined *)CONCAT44(local_258._4_4_,*(undefined4 *)(puVar5 + 8));
        if (local_3b8[1] < *local_3b8 + 4) {
          if ((local_396 & 2) == 0) {
            (*(code *)local_3c0[0x2e])(&local_3c0,&local_258,4);
          }
          else {
            FUN_14572512c(&local_3c0);
          }
        }
        else {
          *local_3b8 = *local_3b8 + 4;
        }
        if (local_208 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        uVar15 = uVar15 - 1;
      } while (1 < uVar15);
      if (0 < (longlong)(int)(uint)uStack_3d0) {
        uVar15 = (longlong)(int)(uint)uStack_3d0 + 1;
        do {
          puVar5 = local_3d8[uVar15 - 2];
          FUN_1400bbfc4(&local_208,*(undefined8 *)(puVar5 + 0x20));
          FUN_14475cc44(&local_208,&local_258);
          FUN_14021219d(&local_3c0,&local_258);
          local_278 = *(undefined1 **)(puVar5 + 0x18);
          FUN_1400021e4(&local_278,&local_400);
          FUN_14021219d(&local_3c0,&local_400);
          if (local_400 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          if (local_258 != (undefined *)0x0) {
            FUN_1400020a8();
          }
          if (CONCAT44(uStack_1f4,local_1f8) != 0) {
            FUN_1400020a8();
          }
          uVar15 = uVar15 - 1;
        } while (1 < uVar15);
      }
    }
    ppuVar6 = local_3d8;
    if ((uint)uStack_3d0 != 0) {
      lVar14 = (longlong)(int)(uint)uStack_3d0;
      lVar17 = 0;
      do {
        plVar2 = *(longlong **)((longlong)ppuVar6 + lVar17);
        FUN_14472eae2(plVar2,0x40);
        FUN_144757f48(plVar2,1);
        (**(code **)(*plVar2 + 0xd8))(plVar2,&local_3c0);
        FUN_144757f48(plVar2,0x40);
        lVar17 = lVar17 + 8;
      } while (lVar14 * 8 != lVar17);
    }
    FUN_14472eae2(ppuVar3,0x40);
    FUN_144757f48(ppuVar3,1);
    (**(code **)(*ppuVar3 + 0xd8))(ppuVar3,&local_3c0);
    FUN_144757f48(ppuVar3,0x40);
    local_d0 = 0;
    if (local_d8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140603fbe(&local_118);
    local_80 = 0;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    FUN_140603fbe(&local_c8);
    if (local_3d8 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    FUN_14041e0ea(&local_3c0);
    FUN_144a7fc42(local_320);
  }
  if ((local_60 ^ (ulonglong)auStack_448) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
joined_r0x0001490c55b3:
  if (iVar8 == -1) goto LAB_1490c547e;
  if (*(undefined **)(local_118 + (longlong)iVar8 * 0x10) == puVar5) {
    lVar14 = (longlong)(int)(uint)uStack_3d0;
    uVar9 = (uint)uStack_3d0 + 1;
    uStack_3d0 = CONCAT44(uStack_3d0._4_4_,uVar9);
    if (uStack_3d0._4_4_ < uVar9) {
      FUN_1447f76d2(&local_3d8,uVar15 & 0xffffffff);
    }
    local_3d8[lVar14] = puVar5;
    goto LAB_1490c547e;
  }
  iVar8 = *(int *)((longlong)iVar8 * 0x10 + local_118 + 8);
  goto joined_r0x0001490c55b3;
LAB_1490c547e:
  local_278 = &DAT_100000000;
  local_268 = 0xffffffff;
  uStack_260 = 0;
  puStack_270 = local_248;
  if (local_230 == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_278);
    iVar8 = local_230;
  }
  uStack_3e0 = CONCAT44(uStack_25c,uStack_260);
  uStack_3e8 = local_268;
  uVar15 = uStack_3e8;
  uStack_3f8 = local_278;
  local_3f0 = puStack_270;
  uStack_3e8._4_4_ = (int)(local_268 >> 0x20);
  iVar10 = uStack_3e8._4_4_;
  local_400 = &local_258;
  if ((uStack_3e8._4_4_ != iVar8) || (uStack_3e8 = uVar15, puStack_270 != local_248)) {
    do {
      uStack_3e8 = uVar15;
      puVar4 = *local_400;
      lVar14 = (longlong)iVar10 * 0x60;
      if (*(int *)(puVar4 + lVar14 + 0x3c) < *(int *)(puVar4 + lVar14 + 0x10)) {
        FUN_14686281e(puVar4 + lVar14 + 8,puVar5);
      }
      uStack_3e8 = CONCAT44(uStack_3e8._4_4_,(uint)uStack_3e8 & ~uStack_3f8._4_4_);
      FUN_1449c0562(&uStack_3f8);
      iVar10 = uStack_3e8._4_4_;
      uVar15 = uStack_3e8;
    } while (local_400 != &local_258 || (local_3f0 != local_248 || uStack_3e8._4_4_ != iVar8));
  }
LAB_1490c53e5:
  if (iVar16 == (uint)uStack_3d0) goto LAB_1490c507d;
  goto LAB_1490c5383;
}



// FUNCTION 1490c58fc FUN_1490c58fc body=134 status=ok
// SIG undefined FUN_1490c58fc(void)

longlong * FUN_1490c58fc(longlong *param_1,longlong param_2)

{
  memset(param_1,0,0x90);
  FUN_144869430(param_1);
  param_1[0x12] = 0;
  *param_1 = (longlong)&PTR_FUN_149e1e590;
  param_1[0x13] = param_2;
  param_1[0x14] = 0;
  FUN_144a69558(param_1,1);
  (**(code **)(*param_1 + 0xf0))(param_1,0);
  *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) & 0x7b;
  *param_1 = (longlong)&PTR_FUN_14bac1740;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
  FUN_144a69558(param_1,1);
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 1;
  return param_1;
}



// FUNCTION 1490c5982 FUN_1490c5982 body=356 status=ok
// SIG undefined FUN_1490c5982(void)

void FUN_1490c5982(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_146880458(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1457b1594(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      FUN_1457b12ce(param_1,&local_50,(longlong)iStack_5c * 0x10 + *local_78,0);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c5ae8 FUN_1490c5ae8 body=1622 status=ok
// SIG undefined FUN_1490c5ae8(void)

void FUN_1490c5ae8(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  undefined1 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined2 *local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b0;
  undefined2 *local_2a8;
  undefined8 uStack_2a0;
  longlong local_298 [3];
  undefined8 uStack_280;
  int local_274;
  undefined **local_270;
  ulonglong *local_268;
  byte local_246;
  longlong *local_1e0;
  undefined2 local_1d8;
  undefined1 local_1d0 [160];
  longlong local_130;
  undefined2 *local_128;
  int local_120;
  undefined2 *local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_308;
  if (param_1 != (longlong *)0x0) {
    FUN_1444569fa();
    FUN_1490c6140(local_1d0,param_2);
    FUN_140713482(&local_270,local_1d0);
    local_270 = &PTR_FUN_14bac19a0;
    local_1d8 = 1;
    local_274 = 0;
    piVar1 = (int *)*local_268 + 1;
    if ((int *)local_268[1] < piVar1) {
      if ((local_246 & 2) == 0) {
        (**(code **)(*local_1e0 + 0x170))(local_1e0,&local_274,4);
      }
      else {
        FUN_14572512c(&local_270,&local_274);
      }
    }
    else {
      local_274 = *(int *)*local_268;
      *local_268 = (ulonglong)piVar1;
    }
    local_298[2] = 0;
    uStack_280 = 0;
    FUN_1490c61a2(local_298 + 2,local_274);
    FUN_1412e3d1e(&local_118);
    local_298[0] = 0;
    local_298[1] = 0;
    FUN_1407c869a(&local_118,local_298,0);
    if (0 < (longlong)local_274) {
      uVar9 = (longlong)local_274;
      do {
        local_118 = (undefined2 *)0x0;
        uStack_110 = 0;
        FUN_14021219d(&local_270,&local_118);
        puVar8 = &DAT_149dfb77a;
        if ((int)uStack_110 != 0) {
          puVar8 = local_118;
        }
        uVar6 = FUN_1490c4b2f(puVar8);
        puVar2 = (undefined4 *)*local_268 + 1;
        if ((undefined4 *)local_268[1] < puVar2) {
          if ((local_246 & 2) == 0) {
            (*(code *)local_270[0x2e])(&local_270,&local_2c8,4);
          }
          else {
            FUN_14572512c(&local_270,&local_2c8);
          }
        }
        else {
          local_2c8 = (undefined2 *)CONCAT44(local_2c8._4_4_,*(undefined4 *)*local_268);
          *local_268 = (ulonglong)puVar2;
        }
        local_2a8 = (undefined2 *)0x0;
        uStack_2a0 = 0;
        FUN_144a83b10(&local_2a8,(int)uVar9 + -1);
        FUN_1407ec8fc(&local_128,local_298,&local_2a8);
        if (local_2a8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        puVar8 = &DAT_149dfb77a;
        if (local_120 != 0) {
          puVar8 = local_128;
        }
        FUN_1446f470e(&local_2b0,puVar8,1);
        local_2d8 = 0;
        uStack_2d0 = 0;
        local_2e0 = 0;
        local_2e8 = 0;
        uVar6 = FUN_140584627(param_1,uVar6,local_2b0);
        *(undefined8 *)(local_298[2] + -8 + uVar9 * 8) = uVar6;
        FUN_1444569fa(uVar6);
        if (local_128 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_118 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        bVar4 = 1 < uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar4);
    }
    if (0 < (longlong)(int)uStack_280) {
      uVar9 = (longlong)(int)uStack_280;
      do {
        local_2a8 = (undefined2 *)0x0;
        uStack_2a0 = 0;
        FUN_14021219d(&local_270,&local_2a8);
        local_2c8 = (undefined2 *)0x0;
        uStack_2c0 = 0;
        FUN_14021219d(&local_270,&local_2c8);
        local_118 = (undefined2 *)0x0;
        uStack_110 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_128 = local_2a8;
        local_120 = (int)uStack_2a0 + -1;
        if ((int)uStack_2a0 == 0) {
          local_120 = 0;
        }
        FUN_14475bf92(&local_118,&local_128);
        lVar7 = FUN_140007850(&local_118);
        plVar3 = *(longlong **)(local_298[2] + -8 + uVar9 * 8);
        if (plVar3 != (longlong *)0x0) {
          if (lVar7 != plVar3[4]) {
            (**(code **)(*plVar3 + 0x170))(plVar3,0,lVar7);
          }
          local_130 = plVar3[3];
          FUN_1400021e4(&local_130,&local_128);
          if ((int)uStack_2c0 == local_120) {
            if (1 < (int)uStack_2c0) {
              lVar7 = 0;
              while( true ) {
                uVar10 = *(ushort *)((longlong)local_2c8 + lVar7);
                uVar11 = (ulonglong)uVar10;
                uVar12 = *(ushort *)((longlong)local_128 + lVar7);
                if (uVar10 != uVar12) break;
                if (uVar10 == 0) goto LAB_1490c5f0a;
LAB_1490c5ec6:
                lVar7 = lVar7 + 2;
              }
              if ((uVar12 | uVar10) < 0x80) {
                uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                uVar13 = (ulonglong)uVar12;
                uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_1490c5ec6;
              }
              if (uVar10 != uVar12) goto LAB_1490c5f5f;
            }
          }
          else if (local_120 + (int)uStack_2c0 != 1) {
LAB_1490c5f5f:
            puVar8 = local_2c8;
            if ((int)uStack_2c0 == 0) {
              puVar8 = &DAT_149dfb77a;
            }
            cVar5 = (**(code **)(*plVar3 + 0x170))(plVar3,puVar8,0);
            if (local_128 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (cVar5 != '\0') {
              puVar8 = &DAT_149dfb77a;
              if ((int)uStack_2c0 != 0) {
                puVar8 = local_2c8;
              }
              (**(code **)(*plVar3 + 0x170))(plVar3,puVar8);
            }
            goto LAB_1490c5f14;
          }
LAB_1490c5f0a:
          if (local_128 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
LAB_1490c5f14:
        if (local_108 != 0) {
          FUN_1400020a8();
        }
        if (local_2c8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_2a8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        bVar4 = 1 < uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar4);
    }
    lVar7 = local_298[2];
    if ((int)uStack_280 != 0) {
      lVar15 = (longlong)(int)uStack_280;
      lVar14 = 0;
      do {
        plVar3 = *(longlong **)(lVar7 + lVar14);
        (**(code **)(*plVar3 + 0xd8))(plVar3,&local_270);
        FUN_144757f48(plVar3,0x41);
        lVar14 = lVar14 + 8;
      } while (lVar15 * 8 != lVar14);
    }
    (**(code **)(*param_1 + 0xd8))(param_1,&local_270);
    FUN_144757f48(param_1,0x41);
    lVar7 = FUN_144a7937e();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
        lVar7 + 0x30)) {
      (**(code **)(*param_1 + 0x318))(param_1);
    }
    lVar7 = FUN_1402d2740();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
        lVar7 + 0x30)) {
      FUN_147bbe2c2(&local_118,6,DAT_14ca85550);
      FUN_147bbe49a(&local_118,param_1);
      FUN_143577b66(&local_118);
    }
    if (local_298[0] != 0) {
      FUN_1400020a8();
    }
    if (local_298[2] != 0) {
      FUN_1400020a8();
    }
    FUN_14041e0ea(&local_270);
    FUN_144a7fc42(local_1d0);
  }
  if ((local_60 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c6140 FUN_1490c6140 body=97 status=ok
// SIG undefined FUN_1490c6140(void)

undefined8 * FUN_1490c6140(undefined8 *param_1,undefined8 param_2)

{
  memset(param_1,0,0x90);
  FUN_144869430(param_1);
  param_1[0x12] = 0;
  param_1[0x13] = param_2;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xfe;
  *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) & 0x7b;
  *param_1 = &PTR_FUN_14bac1e60;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  FUN_144a69558(param_1,0);
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 1;
  return param_1;
}



// FUNCTION 1490c61a2 FUN_1490c61a2 body=117 status=ok
// SIG undefined FUN_1490c61a2(void)

void FUN_1490c61a2(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1447f76d2(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
      FUN_1404559b4(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1490c6218 FUN_1490c6218 body=174 status=ok
// SIG undefined FUN_1490c6218(void)

void FUN_1490c6218(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    local_58[0] = param_2;
    FUN_146862646(param_1 + 0x140,local_34,local_58,0);
    FUN_1400bbfc4(local_58,param_2);
    FUN_1490c88f6(param_1 + 0xd8,local_58);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (param_3 != 0) {
      FUN_144457f2c(param_1,param_2,param_3);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c62c8 FUN_1490c62c8 body=1346 status=ok
// SIG undefined FUN_1490c62c8(void)

ulonglong FUN_1490c62c8(longlong param_1,undefined8 *param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  undefined7 uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *local_98;
  int local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 400));
  iVar4 = *(int *)(param_2 + 1);
  if (iVar4 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)*param_2;
  }
  iVar2 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar10);
  iVar4 = FUN_1490cdef6((longlong *)(param_1 + 0x38),uVar3,param_2);
  if ((iVar4 == -1) || (lVar8 = (longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x38), lVar8 == 0))
  {
LAB_1490c6348:
    iVar4 = *(int *)(param_2 + 1);
    if (iVar4 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = (undefined2 *)*param_2;
    }
    iVar2 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar2 = 0;
    }
    uVar3 = FUN_144a49b4a(iVar2,puVar10);
    iVar4 = FUN_1490d10fe((longlong *)(param_1 + 0x88),uVar3,param_2);
    uVar11 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    if (iVar4 == -1) goto LAB_1490c63a1;
    lVar8 = (longlong)iVar4 * 0x38 + *(longlong *)(param_1 + 0x88);
    puVar15 = (undefined8 *)(lVar8 + 0x10);
    if (puVar15 == (undefined8 *)0x0 || lVar8 == 0) goto LAB_1490c63a1;
    local_88 = *(undefined4 *)puVar15;
    uStack_84 = *(undefined4 *)(lVar8 + 0x14);
    local_68 = *puVar15;
    uStack_80 = *(undefined4 *)(lVar8 + 0x18);
    uStack_7c = *(undefined4 *)(lVar8 + 0x1c);
    uStack_60 = *(undefined8 *)(lVar8 + 0x18);
    local_78 = (void *)0x0;
    local_70 = *(int *)(lVar8 + 0x28);
    lVar16 = (longlong)local_70;
    pvVar1 = *(void **)(lVar8 + 0x20);
    if (lVar16 == 0) {
      local_6c = 0;
      local_50 = 0;
LAB_1490c6673:
      local_58 = (undefined2 *)0x0;
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_70,0);
      memcpy(local_78,pvVar1,lVar16 * 2);
      pvVar1 = local_78;
      local_50 = local_70;
      lVar8 = (longlong)local_70;
      local_68 = CONCAT44(uStack_84,local_88);
      uStack_60 = CONCAT44(uStack_7c,uStack_80);
      local_58 = (undefined2 *)0x0;
      if (lVar8 == 0) goto LAB_1490c6673;
      FUN_1446dd670(&local_58,local_70,0);
      memcpy(local_58,pvVar1,lVar8 * 2);
    }
    uVar5 = (uint)((ulonglong)uStack_60 >> 0x10);
    uVar14 = (uint)uStack_60 & 0xffff;
    uVar6 = (uint)((ulonglong)local_68 >> 0x10);
    uVar13 = (uint)local_68 & 0xffff;
    uVar6 = ((uint)local_68 << 0x10 | uVar13) + (int)((ulonglong)local_68 >> 0x20) +
            (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar13 >> 4);
    uVar3 = FUN_144a78877(0,(uVar6 >> 2) +
                            ((uint)uStack_60 << 0x10 | uVar14) + (int)((ulonglong)uStack_60 >> 0x20)
                            + (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar14 >> 4) + uVar6 * 0x40 +
                            0x9e3779b9 ^ uVar6);
    iVar4 = local_50 + -1;
    puVar10 = local_58;
    if (local_50 == 0) {
      iVar4 = 0;
      puVar10 = &DAT_149dfb77a;
    }
    uVar7 = FUN_144a49b4a(iVar4,puVar10);
    uVar3 = FUN_144a78877(uVar3,uVar7);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    iVar4 = FUN_1490d0238((longlong *)(param_1 + 0xd8),uVar3,puVar15);
    if ((iVar4 == -1) ||
       (plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0xd8)),
       plVar9 == (longlong *)0x0)) goto LAB_1490c63a1;
    lVar8 = *plVar9 + 0x30;
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 0x10);
    if ((DAT_14c950c29 == '\x01') && (lVar8 != 0)) {
      FUN_1456cec3c(lVar8);
    }
    else if (lVar8 == 0) goto LAB_1490c6348;
    FUN_1400bbfc4(&local_a8,lVar8);
    pvVar1 = local_98;
    local_88 = local_a8;
    uStack_84 = uStack_a4;
    uStack_80 = uStack_a0;
    uStack_7c = uStack_9c;
    local_78 = (void *)0x0;
    local_70 = local_90;
    if ((longlong)local_90 == 0) {
      local_6c = 0;
      local_68 = CONCAT44(uStack_a4,local_a8);
      uStack_60 = CONCAT44(uStack_9c,uStack_a0);
      local_50 = 0;
LAB_1490c6450:
      local_58 = (undefined2 *)0x0;
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_90,0);
      memcpy(local_78,pvVar1,(longlong)local_90 * 2);
      pvVar1 = local_78;
      local_50 = local_70;
      lVar8 = (longlong)local_70;
      local_68 = CONCAT44(uStack_84,local_88);
      uStack_60 = CONCAT44(uStack_7c,uStack_80);
      local_58 = (undefined2 *)0x0;
      if (lVar8 == 0) goto LAB_1490c6450;
      FUN_1446dd670(&local_58,local_70,0);
      memcpy(local_58,pvVar1,lVar8 * 2);
    }
    uVar5 = (uint)((ulonglong)uStack_60 >> 0x10);
    uVar14 = (uint)uStack_60 & 0xffff;
    uVar6 = (uint)((ulonglong)local_68 >> 0x10);
    uVar13 = (uint)local_68 & 0xffff;
    uVar6 = ((uint)local_68 << 0x10 | uVar13) + (int)((ulonglong)local_68 >> 0x20) +
            (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar13 >> 4);
    uVar3 = FUN_144a78877(0,(uVar6 >> 2) +
                            ((uint)uStack_60 << 0x10 | uVar14) + (int)((ulonglong)uStack_60 >> 0x20)
                            + (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar14 >> 4) + uVar6 * 0x40 +
                            0x9e3779b9 ^ uVar6);
    iVar4 = local_50 + -1;
    puVar10 = local_58;
    if (local_50 == 0) {
      iVar4 = 0;
      puVar10 = &DAT_149dfb77a;
    }
    uVar7 = FUN_144a49b4a(iVar4,puVar10);
    uVar5 = FUN_144a78877(uVar3,uVar7);
    uVar11 = (ulonglong)uVar5;
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    iVar4 = FUN_1490d0238((longlong *)(param_1 + 0xd8),uVar11,&local_a8);
    if ((iVar4 == -1) ||
       (plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0xd8)),
       plVar9 == (longlong *)0x0)) {
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar9 + 0x30;
    }
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar12 = (undefined7)(uVar11 >> 8);
  if (lVar8 == 0) {
    uVar11 = CONCAT71(uVar12,1);
  }
  else if (*(int *)(lVar8 + 0x15c) < *(int *)(lVar8 + 0x130)) {
    uVar11 = 0;
  }
  else {
    uVar11 = CONCAT71(uVar12,*(int *)(lVar8 + 0xd8) <= *(int *)(lVar8 + 0x104));
  }
LAB_1490c63a1:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 400));
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c680c FUN_1490c680c body=1972 status=ok
// SIG undefined FUN_1490c680c(void)

longlong FUN_1490c680c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  PSRWLOCK SRWLock;
  undefined8 *puVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong **pplVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  int local_ec;
  longlong local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  undefined4 local_b4;
  longlong local_b0;
  longlong *local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_98 = (longlong *)0x0;
  uStack_90 = (undefined2 *)0x0;
  local_a8 = (longlong *)0x0;
  plStack_a0 = (longlong *)0x0;
  local_b0 = 0;
  SRWLock = (PSRWLOCK)(param_1 + 400);
  AcquireSRWLockExclusive(SRWLock);
  plVar1 = (longlong *)(param_1 + 0x38);
  iVar6 = *(int *)(param_2 + 1);
  if (iVar6 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  else {
    puVar12 = (undefined2 *)*param_2;
  }
  iVar9 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar9 = 0;
  }
  uVar5 = FUN_144a49b4a(iVar9,puVar12);
  iVar6 = FUN_1490cdef6(plVar1,uVar5,param_2);
  if (iVar6 == -1) {
    plVar1 = (longlong *)(param_1 + 0x88);
    iVar6 = *(int *)(param_2 + 1);
    if (iVar6 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = (undefined2 *)*param_2;
    }
    iVar9 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar9 = 0;
    }
    uVar5 = FUN_144a49b4a(iVar9,puVar12);
    iVar6 = FUN_1490d10fe(plVar1,uVar5,param_2);
    if (iVar6 != -1) {
      lVar14 = *plVar1;
      lVar13 = (longlong)iVar6 * 0x38;
      pplVar16 = (longlong **)(lVar14 + lVar13 + 0x10);
      local_a8 = *pplVar16;
      plStack_a0 = *(longlong **)(lVar14 + lVar13 + 0x18);
      if (pplVar16 != &local_a8) {
        local_98 = *(longlong **)(lVar14 + 0x20 + lVar13);
        *(undefined8 *)(lVar14 + 0x20 + lVar13) = 0;
        uStack_90 = (undefined2 *)
                    CONCAT44(*(undefined4 *)(lVar14 + 0x2c + lVar13),
                             *(undefined4 *)(lVar14 + 0x28 + lVar13));
        *(undefined8 *)(lVar14 + 0x28 + lVar13) = 0;
      }
      FUN_1490d11ca(plVar1,iVar6);
    }
  }
  else {
    lVar14 = *plVar1;
    lVar13 = *(longlong *)(lVar14 + 0x10 + (longlong)iVar6 * 0x20);
    if (DAT_14c950c29 == '\x01') {
      if (lVar13 == 0) {
        lVar13 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar13 = *(longlong *)(lVar14 + (longlong)iVar6 * 0x20 + 0x10);
      }
    }
    local_b0 = lVar13;
    FUN_1490cec34(plVar1,iVar6);
    FUN_14785f2bc(&local_d8,&local_b0);
    local_a8 = local_d8;
    plStack_a0 = uStack_d0;
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_98 = local_c8;
    uStack_90 = uStack_c0;
    FUN_14686281e(param_1 + 0x140,local_b0);
  }
  ReleaseSRWLockExclusive(SRWLock);
  if (local_a8 == (longlong *)0x0) goto LAB_1490c69e1;
  AcquireSRWLockExclusive(SRWLock);
  plVar1 = local_98;
  local_68 = local_a8;
  uStack_60 = plStack_a0;
  local_58 = (undefined2 *)0x0;
  lVar14 = (longlong)(int)uStack_90;
  local_50 = (int)uStack_90;
  if (lVar14 == 0) {
    local_4c = 0;
    uStack_c0 = (undefined2 *)0x0;
LAB_1490c6a8b:
    local_c8 = (longlong *)0x0;
    uStack_c0 = (undefined2 *)((ulonglong)uStack_c0 & 0xffffffff);
    local_d8 = local_68;
    uStack_d0 = uStack_60;
  }
  else {
    FUN_1446dd670(&local_58,(ulonglong)uStack_90 & 0xffffffff,0);
    memcpy(local_58,plVar1,lVar14 * 2);
    puVar12 = local_58;
    lVar14 = (longlong)local_50;
    local_d8 = local_68;
    uStack_d0 = uStack_60;
    local_c8 = (longlong *)0x0;
    uStack_c0 = (undefined2 *)CONCAT44(uStack_c0._4_4_,local_50);
    if (lVar14 == 0) goto LAB_1490c6a8b;
    FUN_1446dd670(&local_c8,local_50,0);
    memcpy(local_c8,puVar12,lVar14 * 2);
  }
  uVar4 = (uint)((ulonglong)uStack_d0 >> 0x10);
  uVar18 = (uint)uStack_d0 & 0xffff;
  uVar7 = (uint)((ulonglong)local_d8 >> 0x10);
  uVar17 = (uint)local_d8 & 0xffff;
  uVar7 = ((uint)local_d8 << 0x10 | uVar17) + (int)((ulonglong)local_d8 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar17 >> 4);
  uVar5 = FUN_144a78877(0,(uVar7 >> 2) +
                          ((uint)uStack_d0 << 0x10 | uVar18) + (int)((ulonglong)uStack_d0 >> 0x20) +
                          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar18 >> 4) + uVar7 * 0x40 +
                          0x9e3779b9 ^ uVar7);
  iVar6 = (uint)uStack_c0 + -1;
  plVar1 = local_c8;
  if ((uint)uStack_c0 == 0) {
    iVar6 = 0;
    plVar1 = (longlong *)&DAT_149dfb77a;
  }
  uVar8 = FUN_144a49b4a(iVar6,plVar1);
  uVar5 = FUN_144a78877(uVar5,uVar8);
  if (local_c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 0xd8);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  iVar6 = FUN_1490d0238(plVar1,uVar5);
  if ((iVar6 != -1) &&
     (plVar10 = (longlong *)((longlong)iVar6 * 0x10 + *plVar1), plVar10 != (longlong *)0x0)) {
    lVar14 = *plVar10;
    if (lVar14 + 0x30 != 0) {
      local_f8 = (longlong *)(lVar14 + 0xb0);
      local_e0 = (longlong *)(lVar14 + 0xc0);
      local_68 = (longlong *)&DAT_100000000;
      local_58 = (undefined2 *)&DAT_ffffffff;
      local_50 = 0;
      iVar6 = 0;
      local_e8 = lVar14;
      uStack_60 = local_e0;
      if (*(int *)(lVar14 + 0xd8) != 0) {
        FUN_1449c0562(&local_68);
        iVar6 = *(int *)(local_e8 + 0xd8);
      }
      uStack_c0 = local_58;
      puVar12 = uStack_c0;
      local_b8 = local_50;
      local_b4 = local_4c;
      uStack_d0 = local_68;
      local_c8 = uStack_60;
      local_d8 = local_f8;
      uStack_c0._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar9 = uStack_c0._4_4_;
      if ((uStack_c0._4_4_ != iVar6) || (uStack_c0 = puVar12, uStack_60 != local_e0)) {
        do {
          uStack_c0 = puVar12;
          local_ec = iVar6;
          lVar13 = *local_d8;
          lVar11 = (longlong)iVar9;
          puVar2 = (undefined8 *)(lVar13 + lVar11 * 0x28);
          local_88 = *(undefined4 *)puVar2;
          uStack_84 = *(undefined4 *)((longlong)puVar2 + 4);
          uStack_80 = *(undefined4 *)(puVar2 + 1);
          uStack_7c = *(undefined4 *)((longlong)puVar2 + 0xc);
          local_78 = (void *)0x0;
          local_70 = *(int *)(lVar13 + 0x18 + lVar11 * 0x28);
          lVar15 = (longlong)local_70;
          pvVar3 = *(void **)(lVar13 + 0x10 + lVar11 * 0x28);
          if (lVar15 == 0) {
            local_6c = 0;
            local_50 = 0;
            local_68 = (longlong *)*puVar2;
            uStack_60 = (longlong *)puVar2[1];
LAB_1490c6db0:
            local_58 = (undefined2 *)0x0;
            local_4c = 0;
          }
          else {
            FUN_1446dd670(&local_78,local_70,0);
            memcpy(local_78,pvVar3,lVar15 * 2);
            pvVar3 = local_78;
            local_50 = local_70;
            lVar15 = (longlong)local_70;
            local_68 = (longlong *)CONCAT44(uStack_84,local_88);
            uStack_60 = (longlong *)CONCAT44(uStack_7c,uStack_80);
            local_58 = (undefined2 *)0x0;
            if (lVar15 == 0) goto LAB_1490c6db0;
            FUN_1446dd670(&local_58,local_70,0);
            memcpy(local_58,pvVar3,lVar15 * 2);
          }
          uVar4 = (uint)((ulonglong)uStack_60 >> 0x10);
          uVar18 = (uint)uStack_60 & 0xffff;
          uVar7 = (uint)((ulonglong)local_68 >> 0x10);
          uVar17 = (uint)local_68 & 0xffff;
          uVar7 = ((uint)local_68 << 0x10 | uVar17) + (int)((ulonglong)local_68 >> 0x20) +
                  (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar17 >> 4);
          uVar5 = FUN_144a78877(0,(uVar7 >> 2) +
                                  ((uint)uStack_60 << 0x10 | uVar18) +
                                  (int)((ulonglong)uStack_60 >> 0x20) +
                                  (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar18 >> 4) + uVar7 * 0x40 +
                                  0x9e3779b9 ^ uVar7);
          puVar12 = &DAT_149dfb77a;
          if (local_50 != 0) {
            puVar12 = local_58;
          }
          iVar6 = local_50 + -1;
          if (local_50 == 0) {
            iVar6 = 0;
          }
          uVar8 = FUN_144a49b4a(iVar6,puVar12);
          uVar5 = FUN_144a78877(uVar5,uVar8);
          if (local_58 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_78 != (void *)0x0) {
            FUN_1400020a8();
          }
          iVar6 = FUN_1490d0238(plVar1,uVar5,lVar13 + lVar11 * 0x28);
          if (((iVar6 != -1) &&
              (plVar10 = (longlong *)((longlong)iVar6 * 0x10 + *plVar1), plVar10 != (longlong *)0x0)
              ) && (lVar13 = *plVar10, lVar13 != -0x30)) {
            FUN_147008394(lVar13 + 0x100,&local_a8);
          }
          uStack_c0 = (undefined2 *)CONCAT44(uStack_c0._4_4_,(uint)uStack_c0 & ~uStack_d0._4_4_);
          FUN_1449c0562(&uStack_d0);
          iVar9 = uStack_c0._4_4_;
          iVar6 = local_ec;
          puVar12 = uStack_c0;
        } while (local_d8 != local_f8 || (local_c8 != local_e0 || uStack_c0._4_4_ != local_ec));
      }
      FUN_14124560e(local_f8,0);
      FUN_1490c73fa(param_1,lVar14 + 0x30);
      lVar14 = local_e8;
      *(undefined4 *)(local_e8 + 0x48) = 0;
      *(undefined1 *)(local_e8 + 0x4c) = 0;
      FUN_1400ea36e(local_e8 + 0x40,local_e8 + 0x40);
      *(byte *)(lVar14 + 0x56) = *(byte *)(lVar14 + 0x56) & 0xfb;
      FUN_1490c798a(plVar1,&local_a8);
    }
  }
  ReleaseSRWLockExclusive(SRWLock);
LAB_1490c69e1:
  lVar14 = local_b0;
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return lVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c6fc2 FUN_1490c6fc2 body=222 status=ok
// SIG undefined FUN_1490c6fc2(void)

void FUN_1490c6fc2(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x21) = 0xff;
  param_1[5] = DAT_14c845dbc;
  *(undefined4 *)(param_1 + 6) = DAT_14c845dc4;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  return;
}



// FUNCTION 1490c70a0 FUN_1490c70a0 body=856 status=ok
// SIG undefined FUN_1490c70a0(void)

void FUN_1490c70a0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  void *pvVar1;
  longlong lVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = (undefined4)*param_2;
  uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_80 = (undefined4)param_2[1];
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_78 = (void *)0x0;
  local_70 = (int)param_2[3];
  lVar13 = (longlong)local_70;
  pvVar1 = (void *)param_2[2];
  if (lVar13 == 0) {
    local_6c = 0;
    local_68 = *param_2;
    uStack_60 = param_2[1];
    local_50 = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar1,lVar13 * 2);
    pvVar1 = local_78;
    local_50 = local_70;
    lVar13 = (longlong)local_70;
    local_68 = CONCAT44(uStack_84,local_88);
    uStack_60 = CONCAT44(uStack_7c,uStack_80);
    local_58 = (undefined2 *)0x0;
    if (lVar13 != 0) {
      FUN_1446dd670(&local_58,local_70,0);
      memcpy(local_58,pvVar1,lVar13 * 2);
      goto LAB_1490c7110;
    }
  }
  local_58 = (undefined2 *)0x0;
  local_4c = 0;
LAB_1490c7110:
  uVar3 = (uint)((ulonglong)uStack_60 >> 0x10);
  uVar12 = (uint)uStack_60 & 0xffff;
  uVar5 = (uint)((ulonglong)local_68 >> 0x10);
  uVar11 = (uint)local_68 & 0xffff;
  uVar5 = ((uint)local_68 << 0x10 | uVar11) + (int)((ulonglong)local_68 >> 0x20) +
          (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar11 >> 4);
  uVar6 = FUN_144a78877(0,(uVar5 >> 2) +
                          ((uint)uStack_60 << 0x10 | uVar12) + (int)((ulonglong)uStack_60 >> 0x20) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar12 >> 4) + uVar5 * 0x40 +
                          0x9e3779b9 ^ uVar5);
  iVar8 = local_50 + -1;
  puVar4 = local_58;
  if (local_50 == 0) {
    iVar8 = 0;
    puVar4 = &DAT_149dfb77a;
  }
  uVar7 = FUN_144a49b4a(iVar8,puVar4);
  uVar6 = FUN_144a78877(uVar6,uVar7);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  iVar8 = FUN_1490d0238(param_1,uVar6,param_2);
  if ((iVar8 == -1) ||
     (plVar9 = (longlong *)((longlong)iVar8 * 0x10 + *param_1), plVar9 == (longlong *)0x0)) {
    if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == (int)param_1[0xc]) &&
       (lVar13 = param_1[10], lVar13 != 0)) {
      FUN_1490d05d8(param_1,lVar13);
      if (param_1[10] == lVar13) {
        param_1[10] = *(longlong *)(lVar13 + 0x28);
      }
      lVar10 = *(longlong *)(lVar13 + 0x20);
      if (param_1[0xb] == lVar13) {
        param_1[0xb] = lVar10;
      }
      lVar2 = *(longlong *)(lVar13 + 0x28);
      if (lVar10 != 0) {
        *(longlong *)(lVar10 + 0x28) = lVar2;
      }
      if (lVar2 != 0) {
        *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar13 + 0x20);
      }
      *(undefined8 *)(lVar13 + 0x20) = 0;
      *(undefined8 *)(lVar13 + 0x28) = 0;
      FUN_1490c45c6(lVar13 + 0x30);
      if (*(longlong *)(lVar13 + 0x10) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar13);
    }
    lVar10 = FUN_14001cc68(0x1a8,0x10);
    FUN_1490d055c(lVar10,param_2,param_3);
    lVar13 = param_1[0xb];
    *(longlong *)(lVar10 + 0x20) = lVar13;
    if (lVar13 != 0) {
      *(longlong *)(lVar13 + 0x28) = lVar10;
    }
    param_1[0xb] = lVar10;
    if (param_1[10] == 0) {
      param_1[10] = lVar10;
    }
    local_68 = lVar10;
    FUN_1490d0cee(param_1,&local_88,&local_68);
  }
  else {
    lVar13 = *plVar9;
    FUN_1490d04c0(lVar13 + 0x30,param_3);
    if ((param_1[10] == lVar13) && (lVar10 = *(longlong *)(param_1[10] + 0x28), lVar10 != 0)) {
      param_1[10] = lVar10;
    }
    if (param_1[0xb] != lVar13) {
      lVar10 = *(longlong *)(lVar13 + 0x28);
      if (*(longlong *)(lVar13 + 0x20) != 0) {
        *(longlong *)(*(longlong *)(lVar13 + 0x20) + 0x28) = lVar10;
      }
      plVar9 = (longlong *)(lVar13 + 0x20);
      if (lVar10 != 0) {
        *(longlong *)(lVar10 + 0x20) = *plVar9;
      }
      *plVar9 = 0;
      *(undefined8 *)(lVar13 + 0x28) = 0;
      lVar10 = param_1[0xb];
      *plVar9 = lVar10;
      if (lVar10 != 0) {
        *(longlong *)(lVar10 + 0x28) = lVar13;
      }
      param_1[0xb] = lVar13;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c73fa FUN_1490c73fa body=1422 status=ok
// SIG undefined FUN_1490c73fa(void)

undefined8 FUN_1490c73fa(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong **local_b0;
  undefined8 local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((DAT_14c764a34 == '\x01') && (cVar6 = FUN_1427d88d4(param_2 + 2), cVar6 != '\0')) &&
     (*(int *)(param_2 + 0x26) == *(int *)((longlong)param_2 + 0x15c))) {
    plVar13 = (longlong *)(param_1 + 0x38);
    iVar8 = *(int *)(param_2 + 1);
    if (iVar8 == 0) {
      puVar14 = &DAT_149dfb77a;
    }
    else {
      puVar14 = (undefined2 *)*param_2;
    }
    iVar4 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar4 = 0;
    }
    uVar7 = FUN_144a49b4a(iVar4,puVar14);
    iVar8 = FUN_1490cdef6(plVar13,uVar7,param_2);
    if ((iVar8 != -1) && (lVar11 = (longlong)iVar8 * 0x20 + *plVar13, lVar11 != 0)) {
      local_90 = *(longlong **)(lVar11 + 0x10);
      if ((DAT_14c950c29 == '\x01') && (local_90 != (longlong *)0x0)) {
        FUN_1456cec3c();
      }
      else if (local_90 == (longlong *)0x0) goto LAB_1490c7449;
      plVar1 = param_2 + 0x1a;
      uStack_60 = (longlong **)(param_2 + 0x1c);
      local_68 = (undefined8 *)&DAT_100000000;
      local_58 = (undefined2 *)&DAT_ffffffff;
      local_50 = 0;
      local_c8 = plVar13;
      if (*(int *)(param_2 + 0x1f) != 0) {
        FUN_1449c0562(&local_68);
      }
      local_a8 = local_58;
      puVar14 = local_a8;
      local_a0 = local_50;
      local_9c = local_4c;
      local_b8 = local_68;
      local_b0 = uStack_60;
      local_a8._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_c0 = plVar1;
      local_98 = plVar1;
      if (local_a8._4_4_ < *(int *)(uStack_60 + 3)) {
        iVar8 = local_a8._4_4_;
        local_a8 = puVar14;
        do {
          lVar11 = *local_c0;
          lVar12 = (longlong)iVar8;
          puVar2 = (undefined8 *)(lVar11 + lVar12 * 0x28);
          local_88 = *(undefined4 *)puVar2;
          uStack_84 = *(undefined4 *)((longlong)puVar2 + 4);
          uStack_80 = *(undefined4 *)(puVar2 + 1);
          uStack_7c = *(undefined4 *)((longlong)puVar2 + 0xc);
          local_78 = (void *)0x0;
          local_70 = *(int *)(lVar11 + 0x18 + lVar12 * 0x28);
          lVar17 = (longlong)local_70;
          pvVar3 = *(void **)(lVar11 + 0x10 + lVar12 * 0x28);
          if (lVar17 == 0) {
            local_6c = 0;
            local_50 = 0;
            local_68 = (undefined8 *)*puVar2;
            uStack_60 = (longlong **)puVar2[1];
LAB_1490c75fb:
            local_58 = (undefined2 *)0x0;
            local_4c = 0;
          }
          else {
            FUN_1446dd670(&local_78,local_70,0);
            memcpy(local_78,pvVar3,lVar17 * 2);
            pvVar3 = local_78;
            local_50 = local_70;
            lVar11 = (longlong)local_70;
            local_68 = (undefined8 *)CONCAT44(uStack_84,local_88);
            uStack_60 = (longlong **)CONCAT44(uStack_7c,uStack_80);
            local_58 = (undefined2 *)0x0;
            if (lVar11 == 0) goto LAB_1490c75fb;
            FUN_1446dd670(&local_58,local_70,0);
            memcpy(local_58,pvVar3,lVar11 * 2);
          }
          uVar5 = (uint)((ulonglong)uStack_60 >> 0x10);
          uVar16 = (uint)uStack_60 & 0xffff;
          uVar9 = (uint)((ulonglong)local_68 >> 0x10);
          uVar15 = (uint)local_68 & 0xffff;
          uVar9 = ((uint)local_68 << 0x10 | uVar15) + (int)((ulonglong)local_68 >> 0x20) +
                  (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar15 >> 4);
          uVar7 = FUN_144a78877(0,(uVar9 >> 2) +
                                  ((uint)uStack_60 << 0x10 | uVar16) +
                                  (int)((ulonglong)uStack_60 >> 0x20) +
                                  (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar16 >> 4) + uVar9 * 0x40 +
                                  0x9e3779b9 ^ uVar9);
          puVar14 = &DAT_149dfb77a;
          if (local_50 != 0) {
            puVar14 = local_58;
          }
          iVar8 = local_50 + -1;
          if (local_50 == 0) {
            iVar8 = 0;
          }
          uVar10 = FUN_144a49b4a(iVar8,puVar14);
          uVar7 = FUN_144a78877(uVar7,uVar10);
          if (local_58 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_78 != (void *)0x0) {
            FUN_1400020a8();
          }
          iVar8 = FUN_1490d0238((longlong *)(param_1 + 0xd8),uVar7);
          if ((iVar8 == -1) ||
             (plVar13 = (longlong *)((longlong)iVar8 * 0x10 + *(longlong *)(param_1 + 0xd8)),
             plVar13 == (longlong *)0x0)) {
LAB_1490c7726:
            FUN_147008506(local_98,local_a8._4_4_);
          }
          else {
            lVar11 = *plVar13;
            lVar12 = lVar11 + 0x30;
            if (lVar12 == 0) goto LAB_1490c7726;
            FUN_14785f2bc(&local_68,&local_90);
            uVar5 = (uint)((ulonglong)uStack_60 >> 0x10);
            uVar16 = (uint)uStack_60 & 0xffff;
            uVar9 = (uint)((ulonglong)local_68 >> 0x10);
            uVar15 = (uint)local_68 & 0xffff;
            uVar9 = ((uint)local_68 << 0x10 | uVar15) + (int)((ulonglong)local_68 >> 0x20) +
                    (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar15 >> 4);
            uVar7 = FUN_144a78877(0,(uVar9 >> 2) +
                                    ((uint)uStack_60 << 0x10 | uVar16) +
                                    (int)((ulonglong)uStack_60 >> 0x20) +
                                    (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar16 >> 4) + uVar9 * 0x40
                                    + 0x9e3779b9 ^ uVar9);
            puVar14 = &DAT_149dfb77a;
            if (local_50 != 0) {
              puVar14 = local_58;
            }
            iVar8 = local_50 + -1;
            if (local_50 == 0) {
              iVar8 = 0;
            }
            uVar10 = FUN_144a49b4a(iVar8,puVar14);
            uVar7 = FUN_144a78877(uVar7,uVar10);
            FUN_1403af82c(lVar11 + 0xb0,uVar7);
            if (local_58 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            cVar6 = FUN_1490c73fa(param_1,lVar12);
            if (cVar6 == '\0') goto LAB_1490c7449;
          }
          local_a8 = (undefined2 *)CONCAT44(local_a8._4_4_,(uint)local_a8 & ~local_b8._4_4_);
          FUN_1449c0562(&local_b8);
          iVar8 = local_a8._4_4_;
          puVar14 = local_a8;
        } while (local_a8._4_4_ < *(int *)(local_b0 + 3));
      }
      local_a8 = puVar14;
      FUN_14785f2bc(&local_c0,&local_90);
      local_68 = param_2;
      uStack_60 = &local_c0;
      FUN_1490d1f04(param_1 + 0x88,&local_88,&local_68,0);
      if (local_b0 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      FUN_1490ceb36(local_c8,param_2);
      (**(code **)(*local_90 + 0x170))(local_90,0,DAT_14c951640,0x30);
    }
  }
LAB_1490c7449:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1490c798a FUN_1490c798a body=620 status=ok
// SIG undefined FUN_1490c798a(void)

void FUN_1490c798a(longlong *param_1,undefined8 *param_2)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = *(undefined4 *)param_2;
  uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_70 = *(undefined4 *)(param_2 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_68 = (void *)0x0;
  local_60 = *(int *)(param_2 + 3);
  lVar11 = (longlong)local_60;
  pvVar1 = (void *)param_2[2];
  if (lVar11 == 0) {
    local_5c = 0;
    local_58 = *param_2;
    uStack_50 = param_2[1];
    local_40 = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_60,0);
    memcpy(local_68,pvVar1,lVar11 * 2);
    pvVar1 = local_68;
    local_40 = local_60;
    lVar11 = (longlong)local_60;
    local_58 = CONCAT44(uStack_74,local_78);
    uStack_50 = CONCAT44(uStack_6c,uStack_70);
    local_48 = (undefined2 *)0x0;
    if (lVar11 != 0) {
      FUN_1446dd670(&local_48,local_60,0);
      memcpy(local_48,pvVar1,lVar11 * 2);
      goto LAB_1490c79f4;
    }
  }
  local_48 = (undefined2 *)0x0;
  local_3c = 0;
LAB_1490c79f4:
  uVar4 = (uint)((ulonglong)uStack_50 >> 0x10);
  uVar13 = (uint)uStack_50 & 0xffff;
  uVar6 = (uint)((ulonglong)local_58 >> 0x10);
  uVar12 = (uint)local_58 & 0xffff;
  uVar6 = ((uint)local_58 << 0x10 | uVar12) + (int)((ulonglong)local_58 >> 0x20) +
          (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar12 >> 4);
  uVar7 = FUN_144a78877(0,(uVar6 >> 2) +
                          ((uint)uStack_50 << 0x10 | uVar13) + (int)((ulonglong)uStack_50 >> 0x20) +
                          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar13 >> 4) + uVar6 * 0x40 +
                          0x9e3779b9 ^ uVar6);
  iVar9 = local_40 + -1;
  puVar5 = local_48;
  if (local_40 == 0) {
    iVar9 = 0;
    puVar5 = &DAT_149dfb77a;
  }
  uVar8 = FUN_144a49b4a(iVar9,puVar5);
  uVar7 = FUN_144a78877(uVar7,uVar8);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  iVar9 = FUN_1490d0238(param_1,uVar7,param_2);
  if (((iVar9 != -1) &&
      (plVar10 = (longlong *)((longlong)iVar9 * 0x10 + *param_1), plVar10 != (longlong *)0x0)) &&
     (lVar11 = *plVar10, lVar11 != 0)) {
    FUN_1490d05d8(param_1,lVar11);
    if (param_1[10] == lVar11) {
      param_1[10] = *(longlong *)(lVar11 + 0x28);
    }
    lVar2 = *(longlong *)(lVar11 + 0x20);
    if (param_1[0xb] == lVar11) {
      param_1[0xb] = lVar2;
    }
    lVar3 = *(longlong *)(lVar11 + 0x28);
    if (lVar2 != 0) {
      *(longlong *)(lVar2 + 0x28) = lVar3;
    }
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar11 + 0x20);
    }
    *(undefined8 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    FUN_1490c45c6(lVar11 + 0x30);
    if (*(longlong *)(lVar11 + 0x10) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar11);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c7bf8 FUN_1490c7bf8 body=198 status=ok
// SIG undefined FUN_1490c7bf8(void)

undefined8 FUN_1490c7bf8(longlong param_1,longlong param_2,undefined8 param_3)

{
  PSRWLOCK SRWLock;
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_1401031ac(param_2,0,local_48);
    SRWLock = (PSRWLOCK)(param_1 + 400);
    AcquireSRWLockShared(SRWLock);
    cVar1 = FUN_1490c80e0(param_1,local_48);
    ReleaseSRWLockShared(SRWLock);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar1 != '\0') {
      AcquireSRWLockExclusive(SRWLock);
      FUN_1490c6218(param_1,param_2,param_3);
      ReleaseSRWLockExclusive(SRWLock);
      uVar2 = 1;
      goto LAB_1490c7c1a;
    }
  }
  uVar2 = 0;
LAB_1490c7c1a:
  if ((local_48[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c7cc0 FUN_1490c7cc0 body=61 status=ok
// SIG undefined FUN_1490c7cc0(void)

undefined4 FUN_1490c7cc0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 400));
  uVar1 = FUN_1490c80e0(param_1,param_2);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 400));
  return uVar1;
}



// FUNCTION 1490c7cfe FUN_1490c7cfe body=71 status=ok
// SIG undefined FUN_1490c7cfe(void)

undefined4 FUN_1490c7cfe(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 400));
  uVar1 = FUN_144457f2c(param_1,param_2,param_3);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 400));
  return uVar1;
}



// FUNCTION 1490c7d46 FUN_1490c7d46 body=188 status=ok
// SIG undefined FUN_1490c7d46(void)

byte FUN_1490c7d46(longlong param_1,longlong param_2)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    bVar2 = 0;
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 400));
    local_30 = 0;
    FUN_14485c47a(&local_30,param_2);
    local_38 = local_30;
    lVar3 = *(longlong *)(param_1 + 0x130);
    bVar2 = 0;
    if (lVar3 != 0) {
      do {
        iVar1 = FUN_147db66f0(lVar3 + 0x158,&local_38);
        bVar2 = bVar2 | 0 < iVar1;
        lVar3 = *(longlong *)(lVar3 + 0x20);
      } while (lVar3 != 0);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 400));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c7e04 FUN_1490c7e04 body=731 status=ok
// SIG undefined FUN_1490c7e04(void)

undefined8 * FUN_1490c7e04(longlong param_1,undefined8 *param_2,longlong param_3)

{
  void *pvVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *local_98;
  int local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_c8);
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 400));
  FUN_1400bbfc4(&local_a8,param_3);
  pvVar1 = local_98;
  local_88 = local_a8;
  uStack_84 = uStack_a4;
  uStack_80 = uStack_a0;
  uStack_7c = uStack_9c;
  local_78 = (void *)0x0;
  local_70 = local_90;
  if ((longlong)local_90 == 0) {
    local_6c = 0;
    local_68 = CONCAT44(uStack_a4,local_a8);
    uStack_60 = CONCAT44(uStack_9c,uStack_a0);
    local_50 = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_90,0);
    memcpy(local_78,pvVar1,(longlong)local_90 * 2);
    pvVar1 = local_78;
    local_50 = local_70;
    lVar11 = (longlong)local_70;
    local_68 = CONCAT44(uStack_84,local_88);
    uStack_60 = CONCAT44(uStack_7c,uStack_80);
    local_58 = (undefined2 *)0x0;
    if (lVar11 != 0) {
      FUN_1446dd670(&local_58,local_70,0);
      memcpy(local_58,pvVar1,lVar11 * 2);
      goto LAB_1490c7ecd;
    }
  }
  local_58 = (undefined2 *)0x0;
  local_4c = 0;
LAB_1490c7ecd:
  uVar2 = (uint)((ulonglong)uStack_60 >> 0x10);
  uVar10 = (uint)uStack_60 & 0xffff;
  uVar4 = (uint)((ulonglong)local_68 >> 0x10);
  uVar9 = (uint)local_68 & 0xffff;
  uVar4 = ((uint)local_68 << 0x10 | uVar9) + (int)((ulonglong)local_68 >> 0x20) +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4);
  uVar5 = FUN_144a78877(0,(uVar4 >> 2) +
                          ((uint)uStack_60 << 0x10 | uVar10) + (int)((ulonglong)uStack_60 >> 0x20) +
                          (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar10 >> 4) + uVar4 * 0x40 +
                          0x9e3779b9 ^ uVar4);
  iVar7 = local_50 + -1;
  puVar3 = local_58;
  if (local_50 == 0) {
    iVar7 = 0;
    puVar3 = &DAT_149dfb77a;
  }
  uVar6 = FUN_144a49b4a(iVar7,puVar3);
  uVar5 = FUN_144a78877(uVar5,uVar6);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  iVar7 = FUN_1490d0238((longlong *)(param_1 + 0xd8),uVar5,&local_a8);
  if ((iVar7 == -1) ||
     (plVar8 = (longlong *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0xd8)),
     plVar8 == (longlong *)0x0)) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    puVar12 = (undefined8 *)(*plVar8 + 0x30);
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (puVar12 == (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    iVar7 = *(int *)(puVar12 + 1);
    pvVar1 = (void *)*puVar12;
    *(int *)(param_2 + 1) = iVar7;
    if ((longlong)iVar7 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar7,0);
      memcpy((void *)*param_2,pvVar1,(longlong)iVar7 * 2);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 400));
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1490c80e0 FUN_1490c80e0 body=584 status=ok
// SIG undefined FUN_1490c80e0(void)

ulonglong FUN_1490c80e0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_2 + 1) < 2) {
    uVar8 = 0;
    goto LAB_1490c8108;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  local_48 = *param_2;
  uStack_40 = CONCAT44(uStack_40._4_4_,*(int *)(param_2 + 1) + -1);
  FUN_14475bf92(&local_88);
  pvVar3 = local_78;
  local_68 = (undefined4)local_88;
  uStack_64 = local_88._4_4_;
  uStack_60 = (undefined4)uStack_80;
  uStack_5c = uStack_80._4_4_;
  local_58 = (void *)0x0;
  lVar9 = (longlong)(int)uStack_70;
  local_50 = (int)uStack_70;
  if (lVar9 == 0) {
    local_4c = 0;
    local_48 = local_88;
    uStack_40 = uStack_80;
    local_30 = 0;
LAB_1490c819e:
    local_38 = (undefined2 *)0x0;
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_58,uStack_70 & 0xffffffff,0);
    memcpy(local_58,pvVar3,lVar9 * 2);
    pvVar3 = local_58;
    local_30 = local_50;
    lVar9 = (longlong)local_50;
    local_48 = CONCAT44(uStack_64,local_68);
    uStack_40 = CONCAT44(uStack_5c,uStack_60);
    local_38 = (undefined2 *)0x0;
    if (lVar9 == 0) goto LAB_1490c819e;
    FUN_1446dd670(&local_38,local_50,0);
    memcpy(local_38,pvVar3,lVar9 * 2);
  }
  uVar1 = (uint)((ulonglong)uStack_40 >> 0x10);
  uVar11 = (uint)uStack_40 & 0xffff;
  uVar4 = (uint)((ulonglong)local_48 >> 0x10);
  uVar10 = (uint)local_48 & 0xffff;
  uVar4 = ((uint)local_48 << 0x10 | uVar10) + (int)((ulonglong)local_48 >> 0x20) +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar10 >> 4);
  uVar5 = FUN_144a78877(0,(uVar4 >> 2) +
                          ((uint)uStack_40 << 0x10 | uVar11) + (int)((ulonglong)uStack_40 >> 0x20) +
                          (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar11 >> 4) + uVar4 * 0x40 +
                          0x9e3779b9 ^ uVar4);
  iVar7 = local_30 + -1;
  puVar2 = local_38;
  if (local_30 == 0) {
    iVar7 = 0;
    puVar2 = &DAT_149dfb77a;
  }
  uVar6 = FUN_144a49b4a(iVar7,puVar2);
  uVar5 = FUN_144a78877(uVar5,uVar6);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  iVar7 = FUN_1490d0238(param_1 + 0xd8,uVar5,&local_88);
  uVar8 = CONCAT71((int7)((ulonglong)(param_1 + 0xd8) >> 8),iVar7 != -1);
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1490c8108:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c832a FUN_1490c832a body=13 status=ok
// SIG undefined FUN_1490c832a(void)

int FUN_1490c832a(longlong param_1)

{
  return *(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0x10c);
}



// FUNCTION 1490c8338 FUN_1490c8338 body=227 status=ok
// SIG undefined FUN_1490c8338(void)

longlong * FUN_1490c8338(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *_Src;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 400));
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = *(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0x10c);
  if (-1 < iVar3) {
    if (iVar3 != 0) {
      FUN_1408be2c4(param_2);
    }
    for (lVar5 = *(longlong *)(param_1 + 0x130); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x20)) {
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447a1bd6(param_2,iVar3);
      }
      lVar2 = *param_2;
      lVar4 = (longlong)iVar3 * 0x10;
      puVar1 = (undefined8 *)(lVar2 + lVar4);
      *(undefined8 *)(lVar2 + lVar4) = 0;
      iVar3 = *(int *)(lVar5 + 0x38);
      _Src = *(void **)(lVar5 + 0x30);
      *(int *)(lVar2 + 8 + lVar4) = iVar3;
      if ((longlong)iVar3 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar3,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar3 * 2);
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 400));
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 1490c841c FUN_1490c841c body=361 status=ok
// SIG undefined FUN_1490c841c(void)

longlong * FUN_1490c841c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
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
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 400));
  plVar1 = (longlong *)(param_1 + 0x38);
  *param_2 = 0;
  param_2[1] = 0;
  iVar5 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x6c);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (iVar5 != 0) {
    FUN_14079e7a6(param_2);
  }
  lVar2 = param_1 + 0x48;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0x60);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar5) || (uStack_60 != lVar2)) {
    do {
      uVar4 = *(undefined8 *)(*local_90 + 0x10 + (longlong)iStack_74 * 0x20);
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447f76d2(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar4;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar5));
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 400));
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c8588 FUN_1490c8588 body=269 status=ok
// SIG undefined FUN_1490c8588(void)

/* WARNING: Removing unreachable block (ram,0x0001490c8650) */

longlong * FUN_1490c8588(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 400));
  *param_2 = 0;
  param_2[1] = 0;
  iVar4 = *(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0x10c);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iVar4 != 0) {
    FUN_1408be2c4(param_2);
  }
  lVar5 = *(longlong *)(param_1 + 0x130);
  if (lVar5 != 0) {
    uVar2 = local_48;
    uVar3 = local_40;
    do {
      local_40 = uVar3;
      local_48 = uVar2;
      FUN_14475cc44(lVar5,&local_48);
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_1447a1bd6(param_2,iVar4);
      }
      lVar1 = *param_2;
      lVar6 = (longlong)iVar4 * 0x10;
      *(undefined8 *)(lVar1 + lVar6) = 0;
      *(undefined8 *)(lVar1 + lVar6) = local_48;
      local_48 = 0;
      uVar2 = local_48;
      *(undefined4 *)(lVar1 + 8 + lVar6) = (undefined4)local_40;
      *(undefined4 *)(lVar1 + 0xc + lVar6) = local_40._4_4_;
      local_40 = 0;
      uVar3 = local_40;
      local_40 = 0;
      local_48 = 0;
      lVar5 = *(longlong *)(lVar5 + 0x20);
    } while (lVar5 != 0);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 400));
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1490c8698 FUN_1490c8698 body=194 status=ok
// SIG undefined FUN_1490c8698(void)

void FUN_1490c8698(longlong param_1)

{
  longlong lVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 400));
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    FUN_1490cecc2(param_1 + 0x38);
    FUN_1490cee06(param_1 + 0x38);
  }
  FUN_1490c4a3c(param_1 + 0x140);
  for (lVar1 = *(longlong *)(param_1 + 0x130); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
    *(undefined1 *)(lVar1 + 0x4c) = 0;
    *(undefined4 *)(lVar1 + 0x48) = 0;
    FUN_1400ea36e(lVar1 + 0x40,lVar1 + 0x40);
    *(byte *)(lVar1 + 0x56) = *(byte *)(lVar1 + 0x56) & 0xfb;
  }
  FUN_145c4ceaa(param_1 + 0xd8,0xffffffff);
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    FUN_1490d13f8(param_1 + 0x88);
    FUN_1490d153c(param_1 + 0x88);
  }
                    /* WARNING: Could not recover jumptable at 0x0001490c873a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 400));
  return;
}



// FUNCTION 1490c875a FUN_1490c875a body=411 status=ok
// SIG undefined FUN_1490c875a(void)

void FUN_1490c875a(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88 [2];
  undefined1 local_78 [16];
  undefined8 local_68;
  int local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1446e0b6e();
  if (DAT_14c764a34 == '\0') {
    local_68 = 0;
    local_60 = 0;
    local_88[0] = 0;
    local_88[1] = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_1490cd0b6(local_88,param_1 + 0x88);
    local_a8 = 0x100000000;
    local_98 = 0xffffffff;
    local_90 = 0;
    iVar3 = 0;
    local_a0 = local_78;
    if (local_60 != 0) {
      FUN_1449c0562(&local_a8);
      iVar3 = local_60;
    }
    local_b8 = local_98;
    uVar1 = local_b8;
    local_b0 = local_90;
    local_ac = local_8c;
    local_c8 = local_a8;
    local_c0 = local_a0;
    local_b8._4_4_ = (int)((ulonglong)local_98 >> 0x20);
    local_d0 = local_88;
    if ((local_b8._4_4_ != iVar3) || (local_a0 != local_78)) {
      iVar2 = local_b8._4_4_;
      local_b8 = uVar1;
      do {
        FUN_144457738(param_1,(longlong)iVar2 * 0x38 + *local_d0);
        local_b8 = CONCAT44(local_b8._4_4_,(uint)local_b8 & ~local_c8._4_4_);
        FUN_1449c0562(&local_c8);
        iVar2 = local_b8._4_4_;
        uVar1 = local_b8;
      } while (local_d0 != local_88 || (local_c0 != local_78 || local_b8._4_4_ != iVar3));
    }
    local_b8 = uVar1;
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140ba05b6(local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c88f6 FUN_1490c88f6 body=594 status=ok
// SIG undefined FUN_1490c88f6(void)

void FUN_1490c88f6(longlong *param_1,undefined8 *param_2)

{
  void *pvVar1;
  longlong lVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = *(undefined4 *)param_2;
  uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_70 = *(undefined4 *)(param_2 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_68 = (void *)0x0;
  local_60 = *(int *)(param_2 + 3);
  lVar10 = (longlong)local_60;
  pvVar1 = (void *)param_2[2];
  if (lVar10 == 0) {
    local_5c = 0;
    local_58 = *param_2;
    uStack_50 = param_2[1];
    local_40 = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_60,0);
    memcpy(local_68,pvVar1,lVar10 * 2);
    pvVar1 = local_68;
    local_40 = local_60;
    lVar10 = (longlong)local_60;
    local_58 = CONCAT44(uStack_74,local_78);
    uStack_50 = CONCAT44(uStack_6c,uStack_70);
    local_48 = (undefined2 *)0x0;
    if (lVar10 != 0) {
      FUN_1446dd670(&local_48,local_60,0);
      memcpy(local_48,pvVar1,lVar10 * 2);
      goto LAB_1490c8960;
    }
  }
  local_48 = (undefined2 *)0x0;
  local_3c = 0;
LAB_1490c8960:
  uVar3 = (uint)((ulonglong)uStack_50 >> 0x10);
  uVar12 = (uint)uStack_50 & 0xffff;
  uVar5 = (uint)((ulonglong)local_58 >> 0x10);
  uVar11 = (uint)local_58 & 0xffff;
  uVar5 = ((uint)local_58 << 0x10 | uVar11) + (int)((ulonglong)local_58 >> 0x20) +
          (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar11 >> 4);
  uVar6 = FUN_144a78877(0,(uVar5 >> 2) +
                          ((uint)uStack_50 << 0x10 | uVar12) + (int)((ulonglong)uStack_50 >> 0x20) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar12 >> 4) + uVar5 * 0x40 +
                          0x9e3779b9 ^ uVar5);
  iVar8 = local_40 + -1;
  puVar4 = local_48;
  if (local_40 == 0) {
    iVar8 = 0;
    puVar4 = &DAT_149dfb77a;
  }
  uVar7 = FUN_144a49b4a(iVar8,puVar4);
  uVar6 = FUN_144a78877(uVar6,uVar7);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  iVar8 = FUN_1490d0238(param_1,uVar6,param_2);
  if ((iVar8 != -1) &&
     (plVar9 = (longlong *)((longlong)iVar8 * 0x10 + *param_1), plVar9 != (longlong *)0x0)) {
    lVar10 = *plVar9;
    if ((param_1[10] == lVar10) && (lVar2 = *(longlong *)(param_1[10] + 0x28), lVar2 != 0)) {
      param_1[10] = lVar2;
    }
    if (param_1[0xb] != lVar10) {
      lVar2 = *(longlong *)(lVar10 + 0x28);
      if (*(longlong *)(lVar10 + 0x20) != 0) {
        *(longlong *)(*(longlong *)(lVar10 + 0x20) + 0x28) = lVar2;
      }
      plVar9 = (longlong *)(lVar10 + 0x20);
      if (lVar2 != 0) {
        *(longlong *)(lVar2 + 0x20) = *plVar9;
      }
      *plVar9 = 0;
      *(undefined8 *)(lVar10 + 0x28) = 0;
      lVar2 = param_1[0xb];
      *plVar9 = lVar2;
      if (lVar2 != 0) {
        *(longlong *)(lVar2 + 0x28) = lVar10;
      }
      param_1[0xb] = lVar10;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c8b4a FUN_1490c8b4a body=666 status=ok
// SIG undefined FUN_1490c8b4a(void)

undefined8 * FUN_1490c8b4a(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined2 *puVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar13 = param_3;
  if ((int)param_3[1] - *(int *)((longlong)param_3 + 0x34) <
      (int)param_1[1] - *(int *)((longlong)param_1 + 0x34)) {
    plVar13 = param_1;
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
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar11 != 0) {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar11);
    }
    FUN_1414db28a(param_2,uVar11);
    iVar8 = 1;
    if (3 < uVar11) {
      uVar11 = (uVar11 | 1) + 0xe;
      iVar8 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      iVar8 = 1 << ((byte)iVar8 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar8)) {
      *(int *)(param_2 + 9) = iVar8;
      FUN_1403afb7e(param_2);
    }
  }
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = param_1;
  if (iStack_54 < (int)local_60[3]) {
    do {
      lVar1 = *local_90;
      lVar9 = (longlong)iStack_74;
      uVar2 = *(undefined8 *)(lVar1 + lVar9 * 0x28);
      uVar3 = *(undefined8 *)(lVar1 + 8 + lVar9 * 0x28);
      uVar11 = (uint)((ulonglong)uVar3 >> 0x10);
      uVar14 = (uint)uVar3 & 0xffff;
      uVar5 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar12 = (uint)uVar2 & 0xffff;
      uVar5 = ((uint)uVar2 << 0x10 | uVar12) + (int)((ulonglong)uVar2 >> 0x20) +
              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar12 >> 4);
      uVar6 = FUN_144a78877(0,(uVar5 >> 2) +
                              ((uint)uVar3 << 0x10 | uVar14) + (int)((ulonglong)uVar3 >> 0x20) +
                              (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar14 >> 4) + uVar5 * 0x40 +
                              0x9e3779b9 ^ uVar5);
      iVar8 = *(int *)(lVar1 + 0x18 + lVar9 * 0x28);
      puVar10 = &DAT_149dfb77a;
      if (iVar8 != 0) {
        puVar10 = *(undefined2 **)(lVar1 + 0x10 + lVar9 * 0x28);
      }
      iVar4 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar4 = 0;
      }
      uVar7 = FUN_144a49b4a(iVar4,puVar10);
      uVar6 = FUN_144a78877(uVar6,uVar7);
      iVar8 = FUN_1403af82c(plVar13,uVar6,lVar1 + lVar9 * 0x28);
      if (iVar8 != -1) {
        FUN_1449774fc(param_2,&local_68,(longlong)iStack_74 * 0x28 + *local_90,0);
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < (int)local_80[3]);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


