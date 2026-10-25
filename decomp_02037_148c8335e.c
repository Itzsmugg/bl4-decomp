// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148c8335e FUN_148c8335e body=95 status=ok
// SIG undefined FUN_148c8335e(void)

undefined8 * FUN_148c8335e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148c832e2(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c833be(param_1,iVar1);
      FUN_148c83430(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c833be FUN_148c833be body=114 status=ok
// SIG undefined FUN_148c833be(void)

void FUN_148c833be(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb0,8);
    iVar2 = (int)(uVar1 / 0xb0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xb0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c83430 FUN_148c83430 body=60 status=ok
// SIG undefined FUN_148c83430(void)

void FUN_148c83430(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c8346c(param_1,param_2);
    param_1 = param_1 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return;
}



// FUNCTION 148c8346c FUN_148c8346c body=274 status=ok
// SIG undefined FUN_148c8346c(void)

undefined8 * FUN_148c8346c(undefined8 *param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_144a787a6();
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_144a787a6(param_1 + 3,param_2 + 0x18);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_144a787a6(param_1 + 6,param_2 + 0x30);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_144a787a6(param_1 + 9,param_2 + 0x48);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_144a787a6(param_1 + 0xc,param_2 + 0x60);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_144a787a6(param_1 + 0xf,param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_144a787a6(param_1 + 0x12,param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0xa8);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  return param_1;
}



// FUNCTION 148c835c4 FUN_148c835c4 body=62 status=ok
// SIG undefined FUN_148c835c4(void)

undefined8 FUN_148c835c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 148c8362a FUN_148c8362a body=59 status=ok
// SIG undefined FUN_148c8362a(void)

undefined8 FUN_148c8362a(longlong *param_1)

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



// FUNCTION 148c83670 FUN_148c83670 body=37 status=ok
// SIG undefined FUN_148c83670(void)

void FUN_148c83670(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148c836e6 FUN_148c836e6 body=59 status=ok
// SIG undefined FUN_148c836e6(void)

void FUN_148c836e6(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xbf800000;
  *param_2 = &PTR_FUN_14b8b7650;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  return;
}



// FUNCTION 148c83722 FUN_148c83722 body=59 status=ok
// SIG undefined FUN_148c83722(void)

void FUN_148c83722(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xbf800000;
  *param_2 = &PTR_FUN_14b8b7650;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  return;
}



// FUNCTION 148c83782 FUN_148c83782 body=124 status=ok
// SIG undefined FUN_148c83782(void)

undefined1 FUN_148c83782(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    FUN_1489ff106(param_2 + 0xb0,param_3 + 0xb0);
    *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(param_3 + 0xc0);
    FUN_148c83922(param_2 + 200,param_3 + 200);
    param_2 = param_2 + 0xd8;
    param_3 = param_3 + 0xd8;
  }
  return 1;
}



// FUNCTION 148c83826 FUN_148c83826 body=59 status=ok
// SIG undefined FUN_148c83826(void)

undefined8 FUN_148c83826(longlong *param_1)

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



// FUNCTION 148c83872 FUN_148c83872 body=40 status=ok
// SIG undefined FUN_148c83872(void)

void FUN_148c83872(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_145b165fc(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 148c838e8 FUN_148c838e8 body=57 status=ok
// SIG undefined FUN_148c838e8(void)

void FUN_148c838e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba990 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba990 = FUN_140002ddd(FUN_146606ce5,uVar1,L"OakUIData_MenuDebugAITree");
  }
  return;
}



// FUNCTION 148c83922 FUN_148c83922 body=95 status=ok
// SIG undefined FUN_148c83922(void)

undefined8 * FUN_148c83922(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145b16640(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c83982(param_1,iVar1);
      FUN_148c839f5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c83982 FUN_148c83982 body=115 status=ok
// SIG undefined FUN_148c83982(void)

void FUN_148c83982(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c839f5 FUN_148c839f5 body=126 status=ok
// SIG undefined FUN_148c839f5(void)

void FUN_148c839f5(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = *(int *)(puVar2 + -1);
      _Src = (void *)puVar2[-2];
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      param_1[2] = *puVar2;
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c83a74 FUN_148c83a74 body=68 status=ok
// SIG undefined FUN_148c83a74(void)

void FUN_148c83a74(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,200);
  FUN_1408f3f9e(param_2);
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xbf800000;
  *param_2 = &PTR_FUN_14b8b77e0;
  return;
}



// FUNCTION 148c83ab8 FUN_148c83ab8 body=52 status=ok
// SIG undefined FUN_148c83ab8(void)

void FUN_148c83ab8(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xbf800000;
  *param_2 = &PTR_FUN_14b8b77e0;
  return;
}



// FUNCTION 148c83b10 FUN_148c83b10 body=101 status=ok
// SIG undefined FUN_148c83b10(void)

undefined1 FUN_148c83b10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    FUN_1489ff106(param_2 + 0xb0,param_3 + 0xb0);
    *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(param_3 + 0xc0);
    param_2 = param_2 + 200;
    param_3 = param_3 + 200;
  }
  return 1;
}



// FUNCTION 148c83b9e FUN_148c83b9e body=59 status=ok
// SIG undefined FUN_148c83b9e(void)

undefined8 FUN_148c83b9e(longlong *param_1)

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



// FUNCTION 148c83bea FUN_148c83bea body=38 status=ok
// SIG undefined FUN_148c83bea(void)

void FUN_148c83bea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_145a24368(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 148c83c5e FUN_148c83c5e body=38 status=ok
// SIG undefined FUN_148c83c5e(void)

undefined8 FUN_148c83c5e(undefined8 param_1,int param_2)

{
  FUN_145a24368();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c83c84 FUN_148c83c84 body=55 status=ok
// SIG undefined FUN_148c83c84(void)

void FUN_148c83c84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba9a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba9a8 = FUN_140002ddd(FUN_146606d77,uVar1,L"OakWidgetData_MenuDebugFontTesting");
  }
  return;
}



// FUNCTION 148c83cbc FUN_148c83cbc body=75 status=ok
// SIG undefined FUN_148c83cbc(void)

void FUN_148c83cbc(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd8);
  FUN_1408f3f9e(param_2);
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xbf800000;
  *param_2 = &PTR_FUN_14b8b7970;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  return;
}



// FUNCTION 148c83d08 FUN_148c83d08 body=59 status=ok
// SIG undefined FUN_148c83d08(void)

void FUN_148c83d08(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xbf800000;
  *param_2 = &PTR_FUN_14b8b7970;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  return;
}



// FUNCTION 148c83d68 FUN_148c83d68 body=124 status=ok
// SIG undefined FUN_148c83d68(void)

undefined1 FUN_148c83d68(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    FUN_1489ff106(param_2 + 0xb0,param_3 + 0xb0);
    *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(param_3 + 0xc0);
    FUN_144a787a6(param_2 + 200,param_3 + 200);
    param_2 = param_2 + 0xd8;
    param_3 = param_3 + 0xd8;
  }
  return 1;
}



// FUNCTION 148c83e0c FUN_148c83e0c body=59 status=ok
// SIG undefined FUN_148c83e0c(void)

undefined8 FUN_148c83e0c(longlong *param_1)

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



// FUNCTION 148c83e58 FUN_148c83e58 body=65 status=ok
// SIG undefined FUN_148c83e58(void)

void FUN_148c83e58(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1b) == '\x01') {
    *param_2 = &PTR_FUN_14b8b7970;
    if (param_2[0x19] != 0) {
      FUN_1400020a8();
    }
    FUN_145a24368(param_2);
    *(undefined1 *)(param_2 + 0x1b) = 0;
  }
  return;
}



// FUNCTION 148c83ee8 FUN_148c83ee8 body=57 status=ok
// SIG undefined FUN_148c83ee8(void)

void FUN_148c83ee8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba9c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba9c0 = FUN_140002ddd(FUN_146606e09,uVar1,L"OakUIData_MenuDebugGbxProgression");
  }
  return;
}



// FUNCTION 148c83f46 FUN_148c83f46 body=47 status=ok
// SIG undefined FUN_148c83f46(void)

void FUN_148c83f46(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148c83f8c FUN_148c83f8c body=73 status=ok
// SIG undefined FUN_148c83f8c(void)

undefined8 FUN_148c83f8c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 148c83ffe FUN_148c83ffe body=59 status=ok
// SIG undefined FUN_148c83ffe(void)

undefined8 FUN_148c83ffe(longlong *param_1)

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



// FUNCTION 148c8409c FUN_148c8409c body=51 status=ok
// SIG undefined FUN_148c8409c(void)

void FUN_148c8409c(longlong *param_1)

{
  if ((char)param_1[5] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 148c840e0 FUN_148c840e0 body=47 status=ok
// SIG undefined FUN_148c840e0(void)

void FUN_148c840e0(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148c84126 FUN_148c84126 body=67 status=ok
// SIG undefined FUN_148c84126(void)

undefined1 FUN_148c84126(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148c84192 FUN_148c84192 body=59 status=ok
// SIG undefined FUN_148c84192(void)

undefined8 FUN_148c84192(longlong *param_1)

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



// FUNCTION 148c84230 FUN_148c84230 body=51 status=ok
// SIG undefined FUN_148c84230(void)

void FUN_148c84230(longlong *param_1)

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



// FUNCTION 148c84298 FUN_148c84298 body=63 status=ok
// SIG undefined FUN_148c84298(void)

undefined1 FUN_148c84298(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c843c2(param_2,param_3);
    param_3 = param_3 + 0x138;
    param_2 = param_2 + 0x138;
  }
  return 1;
}



// FUNCTION 148c84300 FUN_148c84300 body=59 status=ok
// SIG undefined FUN_148c84300(void)

undefined8 FUN_148c84300(longlong *param_1)

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



// FUNCTION 148c8434c FUN_148c8434c body=40 status=ok
// SIG undefined FUN_148c8434c(void)

void FUN_148c8434c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x138) == '\x01') {
    FUN_145c8fcf4(param_2);
    *(undefined1 *)(param_2 + 0x138) = 0;
  }
  return;
}



// FUNCTION 148c843c2 FUN_148c843c2 body=186 status=ok
// SIG undefined FUN_148c843c2(void)

longlong FUN_148c843c2(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  FUN_1489ff106(param_1 + 0xb0,param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  FUN_148c8447c(param_1 + 200,param_2 + 200);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  FUN_144a787a6(param_1 + 0xe0,param_2 + 0xe0);
  FUN_144a787a6(param_1 + 0xf0,param_2 + 0xf0);
  FUN_144a787a6(param_1 + 0x100,param_2 + 0x100);
  FUN_148c844dc(param_1 + 0x110,param_2 + 0x110);
  FUN_144a787a6(param_1 + 0x120,param_2 + 0x120);
  *(undefined1 *)(param_1 + 0x130) = *(undefined1 *)(param_2 + 0x130);
  return param_1;
}



// FUNCTION 148c8447c FUN_148c8447c body=95 status=ok
// SIG undefined FUN_148c8447c(void)

undefined8 * FUN_148c8447c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c8fde5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c8453c(param_1,iVar1);
      FUN_148c845af(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c844dc FUN_148c844dc body=95 status=ok
// SIG undefined FUN_148c844dc(void)

undefined8 * FUN_148c844dc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c8fda6(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c8468a(param_1,iVar1);
      FUN_148c846ec(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c8453c FUN_148c8453c body=115 status=ok
// SIG undefined FUN_148c8453c(void)

void FUN_148c8453c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c845af FUN_148c845af body=52 status=ok
// SIG undefined FUN_148c845af(void)

void FUN_148c845af(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c845e4(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 148c845e4 FUN_148c845e4 body=166 status=ok
// SIG undefined FUN_148c845e4(void)

undefined8 * FUN_148c845e4(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 148c8468a FUN_148c8468a body=98 status=ok
// SIG undefined FUN_148c8468a(void)

void FUN_148c8468a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c846ec FUN_148c846ec body=52 status=ok
// SIG undefined FUN_148c846ec(void)

void FUN_148c846ec(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c84720(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 148c84720 FUN_148c84720 body=156 status=ok
// SIG undefined FUN_148c84720(void)

undefined8 * FUN_148c84720(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148c847be FUN_148c847be body=57 status=ok
// SIG undefined FUN_148c847be(void)

void FUN_148c847be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbaa08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbaa08 = FUN_140002ddd(FUN_146606fbf,uVar1,L"OakUIData_MenuDebugGearBuilder");
  }
  return;
}



// FUNCTION 148c847f8 FUN_148c847f8 body=37 status=ok
// SIG undefined FUN_148c847f8(void)

void FUN_148c847f8(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x318);
  FUN_14163e816(param_2);
  return;
}



// FUNCTION 148c8484a FUN_148c8484a body=63 status=ok
// SIG undefined FUN_148c8484a(void)

undefined1 FUN_148c8484a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144080104(param_2,param_3);
    param_3 = param_3 + 0x318;
    param_2 = param_2 + 0x318;
  }
  return 1;
}



// FUNCTION 148c848b2 FUN_148c848b2 body=59 status=ok
// SIG undefined FUN_148c848b2(void)

undefined8 FUN_148c848b2(longlong *param_1)

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



// FUNCTION 148c848fe FUN_148c848fe body=38 status=ok
// SIG undefined FUN_148c848fe(void)

void FUN_148c848fe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x318) == '\x01') {
    FUN_1415565e6(param_2);
    *(undefined1 *)(param_2 + 0x318) = 0;
  }
  return;
}



// FUNCTION 148c84972 FUN_148c84972 body=38 status=ok
// SIG undefined FUN_148c84972(void)

undefined8 FUN_148c84972(undefined8 param_1,int param_2)

{
  FUN_1415c2420();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c8499e FUN_148c8499e body=1136 status=ok
// SIG undefined FUN_148c8499e(void)

longlong FUN_148c8499e(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  FUN_1489fdc6a(param_1 + 0xb0,param_2 + 0xb0);
  if (*(int *)(param_1 + 0x14c) != *(int *)(param_2 + 0x14c)) {
    *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(param_2 + 0x148);
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
  }
  if (*(int *)(param_1 + 0x154) != *(int *)(param_2 + 0x154)) {
    *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0x150);
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
  }
  if (*(int *)(param_1 + 0x15c) != *(int *)(param_2 + 0x15c)) {
    *(undefined1 *)(param_1 + 0x158) = *(undefined1 *)(param_2 + 0x158);
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
  }
  if (*(int *)(param_1 + 0x164) != *(int *)(param_2 + 0x164)) {
    *(undefined1 *)(param_1 + 0x160) = *(undefined1 *)(param_2 + 0x160);
    *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164);
  }
  if (*(int *)(param_1 + 0x16c) != *(int *)(param_2 + 0x16c)) {
    *(undefined1 *)(param_1 + 0x168) = *(undefined1 *)(param_2 + 0x168);
    *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_2 + 0x16c);
  }
  if (*(int *)(param_1 + 0x174) != *(int *)(param_2 + 0x174)) {
    *(undefined1 *)(param_1 + 0x170) = *(undefined1 *)(param_2 + 0x170);
    *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_2 + 0x174);
  }
  if (*(int *)(param_1 + 0x17c) != *(int *)(param_2 + 0x17c)) {
    *(undefined1 *)(param_1 + 0x178) = *(undefined1 *)(param_2 + 0x178);
    *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
  }
  if (*(int *)(param_1 + 0x184) != *(int *)(param_2 + 0x184)) {
    *(undefined1 *)(param_1 + 0x180) = *(undefined1 *)(param_2 + 0x180);
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x184);
  }
  if (*(int *)(param_1 + 0x18c) != *(int *)(param_2 + 0x18c)) {
    *(undefined1 *)(param_1 + 0x188) = *(undefined1 *)(param_2 + 0x188);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_2 + 0x18c);
  }
  if (*(int *)(param_1 + 0x194) != *(int *)(param_2 + 0x194)) {
    *(undefined1 *)(param_1 + 400) = *(undefined1 *)(param_2 + 400);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_2 + 0x194);
  }
  if (*(int *)(param_1 + 0x19c) != *(int *)(param_2 + 0x19c)) {
    *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_2 + 0x198);
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_2 + 0x19c);
  }
  if (*(int *)(param_1 + 0x1a4) != *(int *)(param_2 + 0x1a4)) {
    *(undefined1 *)(param_1 + 0x1a0) = *(undefined1 *)(param_2 + 0x1a0);
    *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_2 + 0x1a4);
  }
  if (*(int *)(param_1 + 0x1ac) != *(int *)(param_2 + 0x1ac)) {
    *(undefined1 *)(param_1 + 0x1a8) = *(undefined1 *)(param_2 + 0x1a8);
    *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
  }
  if (*(int *)(param_1 + 0x1b4) != *(int *)(param_2 + 0x1b4)) {
    *(undefined1 *)(param_1 + 0x1b0) = *(undefined1 *)(param_2 + 0x1b0);
    *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1b4);
  }
  if (*(int *)(param_1 + 0x1bc) != *(int *)(param_2 + 0x1bc)) {
    *(undefined1 *)(param_1 + 0x1b8) = *(undefined1 *)(param_2 + 0x1b8);
    *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0x1bc);
  }
  if (*(int *)(param_1 + 0x1c4) != *(int *)(param_2 + 0x1c4)) {
    *(undefined1 *)(param_1 + 0x1c0) = *(undefined1 *)(param_2 + 0x1c0);
    *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x1c4);
  }
  if (*(int *)(param_1 + 0x1cc) != *(int *)(param_2 + 0x1cc)) {
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
    *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
  }
  if (*(int *)(param_1 + 0x1d4) != *(int *)(param_2 + 0x1d4)) {
    *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
    *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
  }
  if (*(int *)(param_1 + 0x1e0) != *(int *)(param_2 + 0x1e0)) {
    *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_2 + 0x1d8);
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  }
  if (*(int *)(param_1 + 0x1ec) != *(int *)(param_2 + 0x1ec)) {
    *(undefined8 *)(param_1 + 0x1e4) = *(undefined8 *)(param_2 + 0x1e4);
    *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1ec);
  }
  if (*(int *)(param_1 + 0x1f8) != *(int *)(param_2 + 0x1f8)) {
    *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
  }
  if (*(int *)(param_1 + 0x204) != *(int *)(param_2 + 0x204)) {
    *(undefined8 *)(param_1 + 0x1fc) = *(undefined8 *)(param_2 + 0x1fc);
    *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_2 + 0x204);
  }
  *(undefined1 *)(param_1 + 0x20a) = *(undefined1 *)(param_2 + 0x20a);
  *(undefined2 *)(param_1 + 0x208) = *(undefined2 *)(param_2 + 0x208);
  FUN_140ae1244(param_1 + 0x210,param_2 + 0x210);
  FUN_148c84e0e(param_1 + 0x228,param_2 + 0x228);
  *(undefined2 *)(param_1 + 0x238) = *(undefined2 *)(param_2 + 0x238);
  if (*(int *)(param_1 + 0x240) != *(int *)(param_2 + 0x240)) {
    *(undefined1 *)(param_1 + 0x23c) = *(undefined1 *)(param_2 + 0x23c);
    *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x240);
  }
  if (*(int *)(param_1 + 600) != *(int *)(param_2 + 600)) {
    FUN_144a787a6(param_1 + 0x248,param_2 + 0x248);
    *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 600);
  }
  if (*(int *)(param_1 + 0x264) != *(int *)(param_2 + 0x264)) {
    *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x260);
    *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_2 + 0x264);
  }
  if (*(int *)(param_1 + 0x278) != *(int *)(param_2 + 0x278)) {
    FUN_144a787a6(param_1 + 0x268,param_2 + 0x268);
    *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x278);
  }
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x280);
  return param_1;
}



// FUNCTION 148c84e0e FUN_148c84e0e body=93 status=ok
// SIG undefined FUN_148c84e0e(void)

undefined8 * FUN_148c84e0e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1406435d7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c84e6c(param_1,iVar1);
      FUN_148c84ece(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c84e6c FUN_148c84e6c body=98 status=ok
// SIG undefined FUN_148c84e6c(void)

void FUN_148c84e6c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c84ece FUN_148c84ece body=52 status=ok
// SIG undefined FUN_148c84ece(void)

void FUN_148c84ece(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c84f02(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 148c84f02 FUN_148c84f02 body=114 status=ok
// SIG undefined FUN_148c84f02(void)

undefined8 * FUN_148c84f02(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  
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
  plVar2 = (longlong *)param_2[2];
  param_1[2] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return param_1;
}



// FUNCTION 148c84f76 FUN_148c84f76 body=55 status=ok
// SIG undefined FUN_148c84f76(void)

void FUN_148c84f76(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb8);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8b8110;
  *(undefined1 *)(param_2 + 0x16) = 0;
  return;
}



// FUNCTION 148c84fae FUN_148c84fae body=39 status=ok
// SIG undefined FUN_148c84fae(void)

void FUN_148c84fae(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8b8110;
  *(undefined1 *)(param_2 + 0x16) = 0;
  return;
}



// FUNCTION 148c84ffa FUN_148c84ffa body=74 status=ok
// SIG undefined FUN_148c84ffa(void)

undefined1 FUN_148c84ffa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    *(undefined1 *)(param_2 + 0xb0) = *(undefined1 *)(param_3 + 0xb0);
    param_2 = param_2 + 0xb8;
    param_3 = param_3 + 0xb8;
  }
  return 1;
}



// FUNCTION 148c8506c FUN_148c8506c body=59 status=ok
// SIG undefined FUN_148c8506c(void)

undefined8 FUN_148c8506c(longlong *param_1)

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



// FUNCTION 148c850b8 FUN_148c850b8 body=38 status=ok
// SIG undefined FUN_148c850b8(void)

void FUN_148c850b8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_140fe7f26(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 148c8512c FUN_148c8512c body=38 status=ok
// SIG undefined FUN_148c8512c(void)

undefined8 FUN_148c8512c(undefined8 param_1,int param_2)

{
  FUN_140fe7f26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c85152 FUN_148c85152 body=55 status=ok
// SIG undefined FUN_148c85152(void)

void FUN_148c85152(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbaa98 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbaa98 = FUN_140002ddd(FUN_1466070e3,uVar1,L"OakWidgetData_MenuTitlePicker");
  }
  return;
}



// FUNCTION 148c8518a FUN_148c8518a body=37 status=ok
// SIG undefined FUN_148c8518a(void)

void FUN_148c8518a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x178);
  FUN_1461083ca(param_2);
  return;
}



// FUNCTION 148c851dc FUN_148c851dc body=63 status=ok
// SIG undefined FUN_148c851dc(void)

undefined1 FUN_148c851dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c85340(param_2,param_3);
    param_3 = param_3 + 0x178;
    param_2 = param_2 + 0x178;
  }
  return 1;
}



// FUNCTION 148c85244 FUN_148c85244 body=59 status=ok
// SIG undefined FUN_148c85244(void)

undefined8 FUN_148c85244(longlong *param_1)

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



// FUNCTION 148c85290 FUN_148c85290 body=40 status=ok
// SIG undefined FUN_148c85290(void)

void FUN_148c85290(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x178) == '\x01') {
    FUN_146175342(param_2);
    *(undefined1 *)(param_2 + 0x178) = 0;
  }
  return;
}



// FUNCTION 148c85306 FUN_148c85306 body=57 status=ok
// SIG undefined FUN_148c85306(void)

void FUN_148c85306(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbaab0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbaab0 = FUN_140002ddd(FUN_146607175,uVar1,L"OakUIData_MenuTutorialSequence");
  }
  return;
}



// FUNCTION 148c85340 FUN_148c85340 body=342 status=ok
// SIG undefined FUN_148c85340(void)

longlong FUN_148c85340(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1489fb7d2();
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  plVar1 = *(longlong **)(param_2 + 0xb8);
  plVar2 = *(longlong **)(param_1 + 0xb8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xb8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  plVar1 = *(longlong **)(param_2 + 200);
  plVar2 = *(longlong **)(param_1 + 200);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 200) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  FUN_144a787a6(param_1 + 0xd8,param_2 + 0xd8);
  FUN_144a787a6(param_1 + 0xe8,param_2 + 0xe8);
  FUN_1407b2780(param_1 + 0xf8,param_2 + 0xf8);
  FUN_1407b2780(param_1 + 0x108,param_2 + 0x108);
  FUN_140bee9ec(param_1 + 0x118,param_2 + 0x118);
  FUN_140bee9ec(param_1 + 0x128,param_2 + 0x128);
  FUN_144a787a6(param_1 + 0x138,param_2 + 0x138);
  FUN_144a787a6(param_1 + 0x148,param_2 + 0x148);
  FUN_144a787a6(param_1 + 0x158,param_2 + 0x158);
  FUN_144a787a6(param_1 + 0x168,param_2 + 0x168);
  return param_1;
}



// FUNCTION 148c85498 FUN_148c85498 body=64 status=ok
// SIG undefined FUN_148c85498(void)

void FUN_148c85498(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb8);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8b8430;
  *(undefined2 *)(param_2 + 0x16) = 0;
  *(undefined1 *)((longlong)param_2 + 0xb2) = 0;
  return;
}



// FUNCTION 148c854d8 FUN_148c854d8 body=48 status=ok
// SIG undefined FUN_148c854d8(void)

void FUN_148c854d8(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8b8430;
  *(undefined2 *)(param_2 + 0x16) = 0;
  *(undefined1 *)((longlong)param_2 + 0xb2) = 0;
  return;
}



// FUNCTION 148c8552c FUN_148c8552c body=88 status=ok
// SIG undefined FUN_148c8552c(void)

undefined8 FUN_148c8552c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    *(undefined2 *)(param_2 + 0xb0) = *(undefined2 *)(param_3 + 0xb0);
    *(undefined1 *)(param_2 + 0xb2) = *(undefined1 *)(param_3 + 0xb2);
    param_2 = param_2 + 0xb8;
    param_3 = param_3 + 0xb8;
  }
  return 1;
}



// FUNCTION 148c855ac FUN_148c855ac body=59 status=ok
// SIG undefined FUN_148c855ac(void)

undefined8 FUN_148c855ac(longlong *param_1)

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



// FUNCTION 148c855f8 FUN_148c855f8 body=38 status=ok
// SIG undefined FUN_148c855f8(void)

void FUN_148c855f8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_140fe7f26(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 148c8566c FUN_148c8566c body=38 status=ok
// SIG undefined FUN_148c8566c(void)

undefined8 FUN_148c8566c(undefined8 param_1,int param_2)

{
  FUN_140fe7f26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c85692 FUN_148c85692 body=55 status=ok
// SIG undefined FUN_148c85692(void)

void FUN_148c85692(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbaac8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbaac8 = FUN_140002ddd(FUN_146607207,uVar1,L"OakWidgetData_ChallengePips");
  }
  return;
}



// FUNCTION 148c856fe FUN_148c856fe body=63 status=ok
// SIG undefined FUN_148c856fe(void)

undefined1 FUN_148c856fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c85828(param_2,param_3);
    param_3 = param_3 + 0x248;
    param_2 = param_2 + 0x248;
  }
  return 1;
}



// FUNCTION 148c85766 FUN_148c85766 body=59 status=ok
// SIG undefined FUN_148c85766(void)

undefined8 FUN_148c85766(longlong *param_1)

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



// FUNCTION 148c857b2 FUN_148c857b2 body=40 status=ok
// SIG undefined FUN_148c857b2(void)

void FUN_148c857b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x248) == '\x01') {
    FUN_145cbd160(param_2);
    *(undefined1 *)(param_2 + 0x248) = 0;
  }
  return;
}



// FUNCTION 148c85828 FUN_148c85828 body=865 status=ok
// SIG undefined FUN_148c85828(void)

longlong FUN_148c85828(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1489fb7d2();
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  plVar1 = *(longlong **)(param_2 + 0xb8);
  plVar2 = *(longlong **)(param_1 + 0xb8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xb8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  plVar1 = *(longlong **)(param_2 + 200);
  plVar2 = *(longlong **)(param_1 + 200);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 200) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  plVar1 = *(longlong **)(param_2 + 0xd8);
  plVar2 = *(longlong **)(param_1 + 0xd8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xd8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  plVar1 = *(longlong **)(param_2 + 0xe8);
  plVar2 = *(longlong **)(param_1 + 0xe8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xe8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  plVar1 = *(longlong **)(param_2 + 0xf8);
  plVar2 = *(longlong **)(param_1 + 0xf8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xf8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  FUN_144a787a6(param_1 + 0x110,param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  FUN_144a787a6(param_1 + 0x128,param_2 + 0x128);
  FUN_144a787a6(param_1 + 0x138,param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  plVar1 = *(longlong **)(param_2 + 0x158);
  plVar2 = *(longlong **)(param_1 + 0x158);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x158) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
  plVar1 = *(longlong **)(param_2 + 0x168);
  plVar2 = *(longlong **)(param_1 + 0x168);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x168) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  FUN_144a787a6(param_1 + 0x178,param_2 + 0x178);
  FUN_144a787a6(param_1 + 0x188,param_2 + 0x188);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  FUN_148c85b8a(param_1 + 0x1a0,param_2 + 0x1a0);
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) & 0xfe | *(byte *)(param_2 + 0x1b0) & 1;
  FUN_144a787a6(param_1 + 0x1b8,param_2 + 0x1b8);
  FUN_144a787a6(param_1 + 0x1c8,param_2 + 0x1c8);
  FUN_144a787a6(param_1 + 0x1d8,param_2 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
  FUN_148c85cc2(param_1 + 0x1f8,param_2 + 0x1f8);
  return param_1;
}



// FUNCTION 148c85b8a FUN_148c85b8a body=93 status=ok
// SIG undefined FUN_148c85b8a(void)

undefined8 * FUN_148c85b8a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141197972(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c85be8(param_1,iVar1);
      FUN_148c85c5d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c85be8 FUN_148c85be8 body=117 status=ok
// SIG undefined FUN_148c85be8(void)

void FUN_148c85be8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb8,8);
    iVar2 = (int)(uVar1 / 0xb8);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xb8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c85c5d FUN_148c85c5d body=100 status=ok
// SIG undefined FUN_148c85c5d(void)

void FUN_148c85c5d(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14042a9ce(param_1,param_2);
    *param_1 = &PTR_FUN_14b8b8430;
    *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_2 + 0xb0);
    *(undefined1 *)((longlong)param_1 + 0xb2) = *(undefined1 *)(param_2 + 0xb2);
    param_1 = param_1 + 0x17;
    param_2 = param_2 + 0xb8;
  }
  return;
}



// FUNCTION 148c85cc2 FUN_148c85cc2 body=122 status=ok
// SIG undefined FUN_148c85cc2(void)

longlong FUN_148c85cc2(longlong param_1,longlong param_2)

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
    FUN_148c85d3c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c85d3c FUN_148c85d3c body=119 status=ok
// SIG undefined FUN_148c85d3c(void)

undefined8 * FUN_148c85d3c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140e90f30(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140171ad2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x14);
    }
  }
  return param_1;
}



// FUNCTION 148c85db4 FUN_148c85db4 body=65 status=ok
// SIG undefined FUN_148c85db4(void)

void FUN_148c85db4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,200);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8b8750;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined1 *)(param_2 + 0x18) = 1;
  return;
}



// FUNCTION 148c85df6 FUN_148c85df6 body=49 status=ok
// SIG undefined FUN_148c85df6(void)

void FUN_148c85df6(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8b8750;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined1 *)(param_2 + 0x18) = 1;
  return;
}



// FUNCTION 148c85e4c FUN_148c85e4c body=97 status=ok
// SIG undefined FUN_148c85e4c(void)

undefined1 FUN_148c85e4c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    FUN_144a787a6(param_2 + 0xb0,param_3 + 0xb0);
    *(undefined1 *)(param_2 + 0xc0) = *(undefined1 *)(param_3 + 0xc0);
    param_2 = param_2 + 200;
    param_3 = param_3 + 200;
  }
  return 1;
}



// FUNCTION 148c85ed6 FUN_148c85ed6 body=59 status=ok
// SIG undefined FUN_148c85ed6(void)

undefined8 FUN_148c85ed6(longlong *param_1)

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



// FUNCTION 148c85f22 FUN_148c85f22 body=65 status=ok
// SIG undefined FUN_148c85f22(void)

void FUN_148c85f22(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x19) == '\x01') {
    *param_2 = &PTR_FUN_14b8b8750;
    if (param_2[0x16] != 0) {
      FUN_1400020a8();
    }
    FUN_140fe7f26(param_2);
    *(undefined1 *)(param_2 + 0x19) = 0;
  }
  return;
}



// FUNCTION 148c85fb2 FUN_148c85fb2 body=68 status=ok
// SIG undefined FUN_148c85fb2(void)

undefined8 * FUN_148c85fb2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b8b8750;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c85ff6 FUN_148c85ff6 body=55 status=ok
// SIG undefined FUN_148c85ff6(void)

void FUN_148c85ff6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbaaf8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbaaf8 = FUN_140002ddd(FUN_14660732b,uVar1,L"OakWidgetData_MissionRequirement");
  }
  return;
}



// FUNCTION 148c86062 FUN_148c86062 body=54 status=ok
// SIG undefined FUN_148c86062(void)

undefined1 FUN_148c86062(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148c860c0 FUN_148c860c0 body=59 status=ok
// SIG undefined FUN_148c860c0(void)

undefined8 FUN_148c860c0(longlong *param_1)

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



// FUNCTION 148c86106 FUN_148c86106 body=37 status=ok
// SIG undefined FUN_148c86106(void)

void FUN_148c86106(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148c8617c FUN_148c8617c body=93 status=ok
// SIG undefined FUN_148c8617c(void)

void FUN_148c8617c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,200);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8b8a40;
  FUN_1400b22c2(param_2 + 0x16,"side_mission");
  *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_2 + 0xc6) = 0;
  return;
}



// FUNCTION 148c861da FUN_148c861da body=77 status=ok
// SIG undefined FUN_148c861da(void)

void FUN_148c861da(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8b8a40;
  FUN_1400b22c2(param_2 + 0x16,"side_mission");
  *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_2 + 0xc6) = 0;
  return;
}



// FUNCTION 148c8624c FUN_148c8624c body=109 status=ok
// SIG undefined FUN_148c8624c(void)

undefined8 FUN_148c8624c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    FUN_144a787a6(param_2 + 0xb0,param_3 + 0xb0);
    uVar1 = *(undefined4 *)(param_3 + 0xc3);
    *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(param_3 + 0xc0);
    *(undefined4 *)(param_2 + 0xc3) = uVar1;
    param_2 = param_2 + 200;
    param_3 = param_3 + 200;
  }
  return 1;
}



// FUNCTION 148c862e2 FUN_148c862e2 body=59 status=ok
// SIG undefined FUN_148c862e2(void)

undefined8 FUN_148c862e2(longlong *param_1)

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



// FUNCTION 148c8632e FUN_148c8632e body=65 status=ok
// SIG undefined FUN_148c8632e(void)

void FUN_148c8632e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x19) == '\x01') {
    *param_2 = &PTR_FUN_14b8b8a40;
    if (param_2[0x16] != 0) {
      FUN_1400020a8();
    }
    FUN_140fe7f26(param_2);
    *(undefined1 *)(param_2 + 0x19) = 0;
  }
  return;
}



// FUNCTION 148c863be FUN_148c863be body=68 status=ok
// SIG undefined FUN_148c863be(void)

undefined8 * FUN_148c863be(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b8b8a40;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c86402 FUN_148c86402 body=55 status=ok
// SIG undefined FUN_148c86402(void)

void FUN_148c86402(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbab28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbab28 = FUN_140002ddd(FUN_146607451,uVar1,L"OakWidgetData_MissionPip");
  }
  return;
}



// FUNCTION 148c8643a FUN_148c8643a body=37 status=ok
// SIG undefined FUN_148c8643a(void)

void FUN_148c8643a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1f0);
  FUN_146124490(param_2);
  return;
}



// FUNCTION 148c8648c FUN_148c8648c body=63 status=ok
// SIG undefined FUN_148c8648c(void)

undefined1 FUN_148c8648c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c865f0(param_2,param_3);
    param_3 = param_3 + 0x1f0;
    param_2 = param_2 + 0x1f0;
  }
  return 1;
}



// FUNCTION 148c864f4 FUN_148c864f4 body=59 status=ok
// SIG undefined FUN_148c864f4(void)

undefined8 FUN_148c864f4(longlong *param_1)

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



// FUNCTION 148c86540 FUN_148c86540 body=40 status=ok
// SIG undefined FUN_148c86540(void)

void FUN_148c86540(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1f0) == '\x01') {
    FUN_145c81230(param_2);
    *(undefined1 *)(param_2 + 0x1f0) = 0;
  }
  return;
}



// FUNCTION 148c865b6 FUN_148c865b6 body=57 status=ok
// SIG undefined FUN_148c865b6(void)

void FUN_148c865b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbab40 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbab40 = FUN_140002ddd(FUN_1466074e3,uVar1,L"OakWidgetData_MissionAccept");
  }
  return;
}



// FUNCTION 148c865f0 FUN_148c865f0 body=341 status=ok
// SIG undefined FUN_148c865f0(void)

longlong FUN_148c865f0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_1489fb7d2();
  *(undefined2 *)(param_1 + 0xb0) = *(undefined2 *)(param_2 + 0xb0);
  FUN_144a787a6(param_1 + 0xb8,param_2 + 0xb8);
  FUN_144a787a6(param_1 + 200,param_2 + 200);
  FUN_144a787a6(param_1 + 0xd8,param_2 + 0xd8);
  FUN_144a787a6(param_1 + 0xe8,param_2 + 0xe8);
  FUN_144a787a6(param_1 + 0xf8,param_2 + 0xf8);
  FUN_144a787a6(param_1 + 0x108,param_2 + 0x108);
  FUN_144a787a6(param_1 + 0x118,param_2 + 0x118);
  FUN_144a787a6(param_1 + 0x128,param_2 + 0x128);
  uVar1 = *(undefined4 *)(param_2 + 0x13c);
  uVar2 = *(undefined4 *)(param_2 + 0x140);
  uVar3 = *(undefined4 *)(param_2 + 0x144);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x13c) = uVar1;
  *(undefined4 *)(param_1 + 0x140) = uVar2;
  *(undefined4 *)(param_1 + 0x144) = uVar3;
  *(undefined8 *)(param_1 + 0x147) = *(undefined8 *)(param_2 + 0x147);
  FUN_144a787a6(param_1 + 0x150,param_2 + 0x150);
  FUN_148c86746(param_1 + 0x160,param_2 + 0x160);
  *(undefined1 *)(param_1 + 0x170) = *(undefined1 *)(param_2 + 0x170);
  FUN_145a03282(param_1 + 0x178,param_2 + 0x178);
  *(undefined1 *)(param_1 + 0x188) = *(undefined1 *)(param_2 + 0x188);
  FUN_145a0339c(param_1 + 400,param_2 + 400);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined1 *)(param_1 + 0x1dc) = *(undefined1 *)(param_2 + 0x1dc);
  FUN_148c867a6(param_1 + 0x1e0,param_2 + 0x1e0);
  return param_1;
}



// FUNCTION 148c86746 FUN_148c86746 body=95 status=ok
// SIG undefined FUN_148c86746(void)

undefined8 * FUN_148c86746(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c813ba(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c86806(param_1,iVar1);
      FUN_148c8687c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c867a6 FUN_148c867a6 body=95 status=ok
// SIG undefined FUN_148c867a6(void)

undefined8 * FUN_148c867a6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c8138d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c869fa(param_1,iVar1);
      FUN_148c86a5c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c86806 FUN_148c86806 body=118 status=ok
// SIG undefined FUN_148c86806(void)

void FUN_148c86806(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 200,8);
    iVar2 = (int)(uVar1 / 200);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,200,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c8687c FUN_148c8687c body=60 status=ok
// SIG undefined FUN_148c8687c(void)

void FUN_148c8687c(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1461cf6be(param_1,param_2);
    param_1 = param_1 + 200;
    param_2 = param_2 + 200;
  }
  return;
}



// FUNCTION 148c868b8 FUN_148c868b8 body=118 status=ok
// SIG undefined FUN_148c868b8(void)

void FUN_148c868b8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 200,8);
    iVar2 = (int)(uVar1 / 200);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,200,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c8692e FUN_148c8692e body=60 status=ok
// SIG undefined FUN_148c8692e(void)

void FUN_148c8692e(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c8696a(param_1,param_2);
    param_1 = param_1 + 200;
    param_2 = param_2 + 200;
  }
  return;
}



// FUNCTION 148c8696a FUN_148c8696a body=144 status=ok
// SIG undefined FUN_148c8696a(void)

undefined8 * FUN_148c8696a(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  FUN_14042a9ce();
  *param_1 = &PTR_FUN_14b8b8750;
  param_1[0x16] = 0;
  iVar1 = *(int *)(param_2 + 0xb8);
  _Src = *(void **)(param_2 + 0xb0);
  *(int *)(param_1 + 0x17) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x16,iVar1,0);
    memcpy((void *)param_1[0x16],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0xc0);
  return param_1;
}



// FUNCTION 148c869fa FUN_148c869fa body=98 status=ok
// SIG undefined FUN_148c869fa(void)

void FUN_148c869fa(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c86a5c FUN_148c86a5c body=118 status=ok
// SIG undefined FUN_148c86a5c(void)

void FUN_148c86a5c(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c86af8 FUN_148c86af8 body=47 status=ok
// SIG undefined FUN_148c86af8(void)

void FUN_148c86af8(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148c86b3e FUN_148c86b3e body=73 status=ok
// SIG undefined FUN_148c86b3e(void)

undefined1 FUN_148c86b3e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    FUN_1406fa324(param_2 + 0x10,param_3 + 0x10);
    *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 148c86bb0 FUN_148c86bb0 body=59 status=ok
// SIG undefined FUN_148c86bb0(void)

undefined8 FUN_148c86bb0(longlong *param_1)

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



// FUNCTION 148c86c4e FUN_148c86c4e body=51 status=ok
// SIG undefined FUN_148c86c4e(void)

void FUN_148c86c4e(longlong *param_1)

{
  if ((char)param_1[5] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 148c86cc6 FUN_148c86cc6 body=54 status=ok
// SIG undefined FUN_148c86cc6(void)

undefined1 FUN_148c86cc6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148c86d24 FUN_148c86d24 body=59 status=ok
// SIG undefined FUN_148c86d24(void)

undefined8 FUN_148c86d24(longlong *param_1)

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



// FUNCTION 148c86d6a FUN_148c86d6a body=37 status=ok
// SIG undefined FUN_148c86d6a(void)

void FUN_148c86d6a(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148c86de0 FUN_148c86de0 body=37 status=ok
// SIG undefined FUN_148c86de0(void)

void FUN_148c86de0(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x138);
  FUN_145a02f58(param_2);
  return;
}



// FUNCTION 148c86e2c FUN_148c86e2c body=63 status=ok
// SIG undefined FUN_148c86e2c(void)

undefined1 FUN_148c86e2c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145a03150(param_2,param_3);
    param_3 = param_3 + 0x138;
    param_2 = param_2 + 0x138;
  }
  return 1;
}



// FUNCTION 148c86e94 FUN_148c86e94 body=59 status=ok
// SIG undefined FUN_148c86e94(void)

undefined8 FUN_148c86e94(longlong *param_1)

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



// FUNCTION 148c86ee0 FUN_148c86ee0 body=40 status=ok
// SIG undefined FUN_148c86ee0(void)

void FUN_148c86ee0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x138) == '\x01') {
    FUN_1458d813a(param_2);
    *(undefined1 *)(param_2 + 0x138) = 0;
  }
  return;
}



// FUNCTION 148c86f56 FUN_148c86f56 body=114 status=ok
// SIG undefined FUN_148c86f56(void)

void FUN_148c86f56(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xe8,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x8d3dcb08d3dcb09),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xe8,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c86fc8 FUN_148c86fc8 body=60 status=ok
// SIG undefined FUN_148c86fc8(void)

void FUN_148c86fc8(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c87004(param_1,param_2);
    param_1 = param_1 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return;
}



// FUNCTION 148c87004 FUN_148c87004 body=585 status=ok
// SIG undefined FUN_148c87004(void)

undefined8 * FUN_148c87004(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *param_1 = *param_2;
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
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  pvVar2 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  pvVar2 = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[9] = param_2[9];
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  pvVar2 = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  param_1[0xd] = param_2[0xd];
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_148c8724e(param_1 + 0xf,param_2 + 0xf);
  param_1[0x19] = 0;
  iVar1 = *(int *)(param_2 + 0x1a);
  pvVar2 = (void *)param_2[0x19];
  *(int *)(param_1 + 0x1a) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x19,iVar1,0);
    memcpy((void *)param_1[0x19],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x1b] = 0;
  iVar1 = *(int *)(param_2 + 0x1c);
  pvVar2 = (void *)param_2[0x1b];
  *(int *)(param_1 + 0x1c) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1b,iVar1,0);
    memcpy((void *)param_1[0x1b],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148c8724e FUN_148c8724e body=122 status=ok
// SIG undefined FUN_148c8724e(void)

longlong FUN_148c8724e(longlong param_1,longlong param_2)

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
    FUN_148c872c8(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c872c8 FUN_148c872c8 body=211 status=ok
// SIG undefined FUN_148c872c8(void)

undefined8 * FUN_148c872c8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140d9f81c(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
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
          FUN_148c8739c(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar4 + 8);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 10;
        puVar6 = puVar6 + 10;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148c8739c FUN_148c8739c body=156 status=ok
// SIG undefined FUN_148c8739c(void)

undefined8 * FUN_148c8739c(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148c87438 FUN_148c87438 body=98 status=ok
// SIG undefined FUN_148c87438(void)

void FUN_148c87438(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c8749a FUN_148c8749a body=118 status=ok
// SIG undefined FUN_148c8749a(void)

void FUN_148c8749a(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c87512 FUN_148c87512 body=53 status=ok
// SIG undefined FUN_148c87512(void)

void FUN_148c87512(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1400b22c2(param_2,&DAT_149e02088);
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



// FUNCTION 148c87548 FUN_148c87548 body=36 status=ok
// SIG undefined FUN_148c87548(void)

void FUN_148c87548(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



// FUNCTION 148c8758a FUN_148c8758a body=87 status=ok
// SIG undefined FUN_148c8758a(void)

undefined1 FUN_148c8758a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_148c876c0(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 148c8760a FUN_148c8760a body=59 status=ok
// SIG undefined FUN_148c8760a(void)

undefined8 FUN_148c8760a(longlong *param_1)

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



// FUNCTION 148c87650 FUN_148c87650 body=34 status=ok
// SIG undefined FUN_148c87650(void)

void FUN_148c87650(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1458d80d6(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148c876c0 FUN_148c876c0 body=95 status=ok
// SIG undefined FUN_148c876c0(void)

undefined8 * FUN_148c876c0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458d8111(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c87720(param_1,iVar1);
      FUN_148c87795(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c87720 FUN_148c87720 body=117 status=ok
// SIG undefined FUN_148c87720(void)

void FUN_148c87720(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x138,8);
    iVar2 = (int)(uVar1 / 0x138);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x138,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c87795 FUN_148c87795 body=60 status=ok
// SIG undefined FUN_148c87795(void)

void FUN_148c87795(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_145a03b7c(param_1,param_2);
    param_1 = param_1 + 0x138;
    param_2 = param_2 + 0x138;
  }
  return;
}



// FUNCTION 148c877d2 FUN_148c877d2 body=37 status=ok
// SIG undefined FUN_148c877d2(void)

void FUN_148c877d2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x388);
  FUN_14600d25a(param_2);
  return;
}



// FUNCTION 148c87824 FUN_148c87824 body=63 status=ok
// SIG undefined FUN_148c87824(void)

undefined1 FUN_148c87824(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c87988(param_2,param_3);
    param_3 = param_3 + 0x388;
    param_2 = param_2 + 0x388;
  }
  return 1;
}



// FUNCTION 148c8788c FUN_148c8788c body=59 status=ok
// SIG undefined FUN_148c8788c(void)

undefined8 FUN_148c8788c(longlong *param_1)

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



// FUNCTION 148c878d8 FUN_148c878d8 body=40 status=ok
// SIG undefined FUN_148c878d8(void)

void FUN_148c878d8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x388) == '\x01') {
    FUN_1458d7fa0(param_2);
    *(undefined1 *)(param_2 + 0x388) = 0;
  }
  return;
}



// FUNCTION 148c8794e FUN_148c8794e body=57 status=ok
// SIG undefined FUN_148c8794e(void)

void FUN_148c8794e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbac50 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbac50 = FUN_140002ddd(FUN_146607819,uVar1,L"OakWidgetData_MissionLog");
  }
  return;
}



// FUNCTION 148c87988 FUN_148c87988 body=326 status=ok
// SIG undefined FUN_148c87988(void)

longlong FUN_148c87988(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1489fb7d2();
  FUN_148c87ace(param_1 + 0xb0,param_2 + 0xb0);
  FUN_148c87ace(param_1 + 0xc0,param_2 + 0xc0);
  FUN_1457fd360(param_1 + 0xd0,param_2 + 0xd0);
  FUN_1457fd360(param_1 + 0x150,param_2 + 0x150);
  FUN_145a03150(param_1 + 0x1d0,param_2 + 0x1d0);
  FUN_144a787a6(param_1 + 0x308,param_2 + 0x308);
  plVar1 = *(longlong **)(param_2 + 0x318);
  plVar2 = *(longlong **)(param_1 + 0x318);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x318) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_2 + 800);
  FUN_144a787a6(param_1 + 0x328,param_2 + 0x328);
  *(undefined2 *)(param_1 + 0x338) = *(undefined2 *)(param_2 + 0x338);
  *(undefined1 *)(param_1 + 0x33a) = *(undefined1 *)(param_2 + 0x33a);
  FUN_144a787a6(param_1 + 0x340,param_2 + 0x340);
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_2 + 0x350);
  FUN_1406fa324(param_1 + 0x358,param_2 + 0x358);
  FUN_1406fa324(param_1 + 0x368,param_2 + 0x368);
  *(undefined1 *)(param_1 + 0x378) = *(undefined1 *)(param_2 + 0x378);
  *(undefined1 *)(param_1 + 0x380) = *(undefined1 *)(param_2 + 0x380);
  return param_1;
}



// FUNCTION 148c87ace FUN_148c87ace body=95 status=ok
// SIG undefined FUN_148c87ace(void)

undefined8 * FUN_148c87ace(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458d80ad(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c87b2e(param_1,iVar1);
      FUN_148c87b90(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c87b2e FUN_148c87b2e body=98 status=ok
// SIG undefined FUN_148c87b2e(void)

void FUN_148c87b2e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c87b90 FUN_148c87b90 body=52 status=ok
// SIG undefined FUN_148c87b90(void)

void FUN_148c87b90(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_145a035f0(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 148c87bc6 FUN_148c87bc6 body=43 status=ok
// SIG undefined FUN_148c87bc6(void)

void FUN_148c87bc6(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_144a5dc74(param_2);
  *(undefined4 *)(param_2 + 2) = 0;
  return;
}



// FUNCTION 148c87bf2 FUN_148c87bf2 body=29 status=ok
// SIG undefined FUN_148c87bf2(void)

void FUN_148c87bf2(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  *(undefined4 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 148c87c36 FUN_148c87c36 body=112 status=ok
// SIG undefined FUN_148c87c36(void)

undefined8 FUN_148c87c36(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(param_3 + lVar3);
      plVar2 = *(longlong **)(param_2 + lVar3);
      if (plVar2 != plVar1) {
        *(longlong **)(param_2 + lVar3) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      *(undefined4 *)(param_2 + 0x10 + lVar3) = *(undefined4 *)(param_3 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c87cce FUN_148c87cce body=59 status=ok
// SIG undefined FUN_148c87cce(void)

undefined8 FUN_148c87cce(longlong *param_1)

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



// FUNCTION 148c87d14 FUN_148c87d14 body=38 status=ok
// SIG undefined FUN_148c87d14(void)

void FUN_148c87d14(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148c87d8a FUN_148c87d8a body=91 status=ok
// SIG undefined FUN_148c87d8a(void)

void FUN_148c87d8a(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  *param_2 = 0;
  iVar1 = DAT_14cbbab80;
  _Src = DAT_14cbbab78;
  lVar2 = (longlong)DAT_14cbbab80;
  *(int *)(param_2 + 1) = DAT_14cbbab80;
  if (lVar2 != 0) {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,lVar2 * 2);
    return;
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  return;
}



// FUNCTION 148c87de6 FUN_148c87de6 body=91 status=ok
// SIG undefined FUN_148c87de6(void)

void FUN_148c87de6(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  *param_2 = 0;
  iVar1 = DAT_14cbbab80;
  _Src = DAT_14cbbab78;
  lVar2 = (longlong)DAT_14cbbab80;
  *(int *)(param_2 + 1) = DAT_14cbbab80;
  if (lVar2 != 0) {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,lVar2 * 2);
    return;
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  return;
}



// FUNCTION 148c87e66 FUN_148c87e66 body=54 status=ok
// SIG undefined FUN_148c87e66(void)

undefined1 FUN_148c87e66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148c87ec4 FUN_148c87ec4 body=59 status=ok
// SIG undefined FUN_148c87ec4(void)

undefined8 FUN_148c87ec4(longlong *param_1)

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



// FUNCTION 148c87f0a FUN_148c87f0a body=37 status=ok
// SIG undefined FUN_148c87f0a(void)

void FUN_148c87f0a(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148c87f80 FUN_148c87f80 body=94 status=ok
// SIG undefined FUN_148c87f80(void)

void FUN_148c87f80(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  *param_2 = 0;
  iVar1 = DAT_14cbbab90;
  _Src = DAT_14cbbab88;
  lVar2 = (longlong)DAT_14cbbab90;
  *(int *)(param_2 + 1) = DAT_14cbbab90;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,lVar2 * 2);
  }
  param_2[2] = 0;
  return;
}



// FUNCTION 148c87fde FUN_148c87fde body=94 status=ok
// SIG undefined FUN_148c87fde(void)

void FUN_148c87fde(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  *param_2 = 0;
  iVar1 = DAT_14cbbab90;
  _Src = DAT_14cbbab88;
  lVar2 = (longlong)DAT_14cbbab90;
  *(int *)(param_2 + 1) = DAT_14cbbab90;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,lVar2 * 2);
  }
  param_2[2] = 0;
  return;
}



// FUNCTION 148c88060 FUN_148c88060 body=62 status=ok
// SIG undefined FUN_148c88060(void)

undefined8 FUN_148c88060(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 148c880c6 FUN_148c880c6 body=59 status=ok
// SIG undefined FUN_148c880c6(void)

undefined8 FUN_148c880c6(longlong *param_1)

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



// FUNCTION 148c8810c FUN_148c8810c body=37 status=ok
// SIG undefined FUN_148c8810c(void)

void FUN_148c8810c(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148c88192 FUN_148c88192 body=47 status=ok
// SIG undefined FUN_148c88192(void)

void FUN_148c88192(undefined8 param_1,longlong *param_2)

{
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c881d8 FUN_148c881d8 body=75 status=ok
// SIG undefined FUN_148c881d8(void)

undefined8 FUN_148c881d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    FUN_144a787a6(param_2 + 0x18,param_3 + 0x18);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 148c8824c FUN_148c8824c body=59 status=ok
// SIG undefined FUN_148c8824c(void)

undefined8 FUN_148c8824c(longlong *param_1)

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



// FUNCTION 148c882e8 FUN_148c882e8 body=113 status=ok
// SIG undefined FUN_148c882e8(void)

undefined8 * FUN_148c882e8(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  *param_1 = 0;
  iVar1 = DAT_14cbbaba0;
  _Src = DAT_14cbbab98;
  lVar2 = (longlong)DAT_14cbbaba0;
  *(int *)(param_1 + 1) = DAT_14cbbaba0;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,lVar2 * 2);
  }
  param_1[2] = 0;
  FUN_1400b22c2(param_1 + 3,&DAT_149e02088);
  return param_1;
}



// FUNCTION 148c8835a FUN_148c8835a body=51 status=ok
// SIG undefined FUN_148c8835a(void)

void FUN_148c8835a(longlong *param_1)

{
  if ((char)param_1[5] == '\x01') {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 148c883bc FUN_148c883bc body=63 status=ok
// SIG undefined FUN_148c883bc(void)

undefined1 FUN_148c883bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c885ac(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 148c88424 FUN_148c88424 body=59 status=ok
// SIG undefined FUN_148c88424(void)

undefined8 FUN_148c88424(longlong *param_1)

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



// FUNCTION 148c88470 FUN_148c88470 body=38 status=ok
// SIG undefined FUN_148c88470(void)

void FUN_148c88470(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_140d9f6ca(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148c884e4 FUN_148c884e4 body=200 status=ok
// SIG undefined FUN_148c884e4(void)

undefined8 * FUN_148c884e4(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_140056680(param_1 + 5,&DAT_149dfb77a);
  FUN_1400b22c2(param_1 + 7,"Incomplete");
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  FUN_1400b22c2(param_1 + 0xb,&DAT_149e02088);
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_1400b22c2(param_1 + 0x19,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x1b,&DAT_149e02088);
  return param_1;
}



// FUNCTION 148c885ac FUN_148c885ac body=172 status=ok
// SIG undefined FUN_148c885ac(void)

undefined8 * FUN_148c885ac(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 2,param_2 + 2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  FUN_144a787a6(param_1 + 5,param_2 + 5);
  FUN_144a787a6(param_1 + 7,param_2 + 7);
  param_1[9] = param_2[9];
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  FUN_144a787a6(param_1 + 0xb,param_2 + 0xb);
  param_1[0xd] = param_2[0xd];
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  FUN_148c8724e(param_1 + 0xf,param_2 + 0xf);
  FUN_144a787a6(param_1 + 0x19,param_2 + 0x19);
  FUN_144a787a6(param_1 + 0x1b,param_2 + 0x1b);
  return param_1;
}



// FUNCTION 148c88688 FUN_148c88688 body=54 status=ok
// SIG undefined FUN_148c88688(void)

undefined1 FUN_148c88688(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c8879c(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148c886e6 FUN_148c886e6 body=59 status=ok
// SIG undefined FUN_148c886e6(void)

undefined8 FUN_148c886e6(longlong *param_1)

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



// FUNCTION 148c8872c FUN_148c8872c body=34 status=ok
// SIG undefined FUN_148c8872c(void)

void FUN_148c8872c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_145abc56e(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148c8879c FUN_148c8879c body=93 status=ok
// SIG undefined FUN_148c8879c(void)

longlong FUN_148c8879c(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  FUN_145a032e0(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  return param_1;
}



// FUNCTION 148c887fa FUN_148c887fa body=37 status=ok
// SIG undefined FUN_148c887fa(void)

void FUN_148c887fa(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1e8);
  FUN_145c49564(param_2);
  return;
}



// FUNCTION 148c8884c FUN_148c8884c body=63 status=ok
// SIG undefined FUN_148c8884c(void)

undefined1 FUN_148c8884c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144080514(param_2,param_3);
    param_3 = param_3 + 0x1e8;
    param_2 = param_2 + 0x1e8;
  }
  return 1;
}



// FUNCTION 148c888b4 FUN_148c888b4 body=59 status=ok
// SIG undefined FUN_148c888b4(void)

undefined8 FUN_148c888b4(longlong *param_1)

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



// FUNCTION 148c88958 FUN_148c88958 body=86 status=ok
// SIG undefined FUN_148c88958(void)

void FUN_148c88958(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x3d) == '\x01') {
    *param_1 = &PTR_FUN_14b8b9df0;
    FUN_145abc56e(param_1 + 0x30);
    FUN_145abc56e(param_1 + 0x24);
    FUN_145abc56e(param_1 + 0x18);
    FUN_140fe7f26(param_1);
    *(undefined1 *)(param_1 + 0x3d) = 0;
  }
  return;
}



// FUNCTION 148c88e48 FUN_148c88e48 body=73 status=ok
// SIG undefined FUN_148c88e48(void)

undefined8 FUN_148c88e48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + lVar1) = *(undefined4 *)(param_3 + lVar1);
      FUN_144a787a6();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c88eba FUN_148c88eba body=59 status=ok
// SIG undefined FUN_148c88eba(void)

undefined8 FUN_148c88eba(longlong *param_1)

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



// FUNCTION 148c88f00 FUN_148c88f00 body=38 status=ok
// SIG undefined FUN_148c88f00(void)

void FUN_148c88f00(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148c88fe0 FUN_148c88fe0 body=92 status=ok
// SIG undefined FUN_148c88fe0(void)

undefined8 FUN_148c88fe0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    if (*(int *)(param_2 + 0x14) != *(int *)(param_3 + 0x14)) {
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_3 + 0x14);
    }
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    puVar1 = (undefined8 *)(param_3 + 0x18);
    param_3 = param_3 + 0x28;
    *(undefined8 *)(param_2 + 0x18) = *puVar1;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 148c89064 FUN_148c89064 body=59 status=ok
// SIG undefined FUN_148c89064(void)

undefined8 FUN_148c89064(longlong *param_1)

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



// FUNCTION 148c890aa FUN_148c890aa body=37 status=ok
// SIG undefined FUN_148c890aa(void)

void FUN_148c890aa(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[5] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 148c89120 FUN_148c89120 body=37 status=ok
// SIG undefined FUN_148c89120(void)

void FUN_148c89120(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1d0);
  FUN_1460dd832(param_2);
  return;
}



// FUNCTION 148c89172 FUN_148c89172 body=63 status=ok
// SIG undefined FUN_148c89172(void)

undefined1 FUN_148c89172(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c8929c(param_2,param_3);
    param_3 = param_3 + 0x1d0;
    param_2 = param_2 + 0x1d0;
  }
  return 1;
}



// FUNCTION 148c891da FUN_148c891da body=59 status=ok
// SIG undefined FUN_148c891da(void)

undefined8 FUN_148c891da(longlong *param_1)

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



// FUNCTION 148c89226 FUN_148c89226 body=40 status=ok
// SIG undefined FUN_148c89226(void)

void FUN_148c89226(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    FUN_145fd9d24(param_2);
    *(undefined1 *)(param_2 + 0x1d0) = 0;
  }
  return;
}



// FUNCTION 148c8929c FUN_148c8929c body=538 status=ok
// SIG undefined FUN_148c8929c(void)

longlong FUN_148c8929c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_1489fb7d2();
  FUN_144a787a6(param_1 + 0xb0,param_2 + 0xb0);
  if (*(int *)(param_1 + 0xc4) != *(int *)(param_2 + 0xc4)) {
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  }
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  FUN_144a787a6(param_1 + 0xd8,param_2 + 0xd8);
  if (*(int *)(param_1 + 0xec) != *(int *)(param_2 + 0xec)) {
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  }
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  FUN_144a787a6(param_1 + 0x100,param_2 + 0x100);
  if (*(int *)(param_1 + 0x114) != *(int *)(param_2 + 0x114)) {
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
  }
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  uVar1 = *(undefined4 *)(param_2 + 299);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 299) = uVar1;
  FUN_144a787a6(param_1 + 0x130,param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  FUN_144a787a6(param_1 + 0x148,param_2 + 0x148);
  *(undefined2 *)(param_1 + 0x158) = *(undefined2 *)(param_2 + 0x158);
  *(undefined1 *)(param_1 + 0x15a) = *(undefined1 *)(param_2 + 0x15a);
  FUN_144a787a6(param_1 + 0x160,param_2 + 0x160);
  FUN_144a787a6(param_1 + 0x170,param_2 + 0x170);
  *(undefined2 *)(param_1 + 0x180) = *(undefined2 *)(param_2 + 0x180);
  FUN_144a787a6(param_1 + 0x188,param_2 + 0x188);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x19f) = *(undefined4 *)(param_2 + 0x19f);
  FUN_144a787a6(param_1 + 0x1a8,param_2 + 0x1a8);
  uVar2 = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1c0) = uVar2;
  if (*(int *)(param_1 + 0x1cc) != *(int *)(param_2 + 0x1cc)) {
    *(undefined1 *)(param_1 + 0x1c8) = *(undefined1 *)(param_2 + 0x1c8);
    *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
  }
  return param_1;
}



// FUNCTION 148c894ec FUN_148c894ec body=63 status=ok
// SIG undefined FUN_148c894ec(void)

undefined1 FUN_148c894ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c89616(param_2,param_3);
    param_3 = param_3 + 0x238;
    param_2 = param_2 + 0x238;
  }
  return 1;
}



// FUNCTION 148c89554 FUN_148c89554 body=59 status=ok
// SIG undefined FUN_148c89554(void)

undefined8 FUN_148c89554(longlong *param_1)

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



// FUNCTION 148c895a0 FUN_148c895a0 body=40 status=ok
// SIG undefined FUN_148c895a0(void)

void FUN_148c895a0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x238) == '\x01') {
    FUN_1457deb6c(param_2);
    *(undefined1 *)(param_2 + 0x238) = 0;
  }
  return;
}



// FUNCTION 148c89616 FUN_148c89616 body=135 status=ok
// SIG undefined FUN_148c89616(void)

longlong FUN_148c89616(longlong param_1,longlong param_2)

{
  FUN_1489fdb7c();
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  FUN_1407161be(param_1 + 0x1a8,param_2 + 0x1a8);
  FUN_144a787a6(param_1 + 0x1b8,param_2 + 0x1b8);
  FUN_140b855d0(param_1 + 0x1c8,param_2 + 0x1c8);
  FUN_140bee9ec(param_1 + 0x218,param_2 + 0x218);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x228);
  *(undefined2 *)(param_1 + 0x230) = *(undefined2 *)(param_2 + 0x230);
  return param_1;
}



// FUNCTION 148c896f2 FUN_148c896f2 body=54 status=ok
// SIG undefined FUN_148c896f2(void)

undefined1 FUN_148c896f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c89806(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 148c89750 FUN_148c89750 body=59 status=ok
// SIG undefined FUN_148c89750(void)

undefined8 FUN_148c89750(longlong *param_1)

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



// FUNCTION 148c89796 FUN_148c89796 body=34 status=ok
// SIG undefined FUN_148c89796(void)

void FUN_148c89796(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_145b05e10(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148c89806 FUN_148c89806 body=270 status=ok
// SIG undefined FUN_148c89806(void)

undefined8 * FUN_148c89806(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 1,param_2 + 1);
  FUN_144a787a6(param_1 + 3,param_2 + 3);
  param_1[5] = param_2[5];
  plVar1 = (longlong *)param_2[6];
  plVar2 = (longlong *)param_1[6];
  if (plVar2 != plVar1) {
    param_1[6] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  plVar1 = (longlong *)param_2[8];
  plVar2 = (longlong *)param_1[8];
  if (plVar2 != plVar1) {
    param_1[8] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  plVar1 = (longlong *)param_2[10];
  plVar2 = (longlong *)param_1[10];
  if (plVar2 != plVar1) {
    param_1[10] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  plVar1 = (longlong *)param_2[0xc];
  plVar2 = (longlong *)param_1[0xc];
  if (plVar2 != plVar1) {
    param_1[0xc] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  *(undefined1 *)((longlong)param_1 + 0x72) = *(undefined1 *)((longlong)param_2 + 0x72);
  return param_1;
}



// FUNCTION 148c89916 FUN_148c89916 body=37 status=ok
// SIG undefined FUN_148c89916(void)

void FUN_148c89916(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x208);
  FUN_14612305a(param_2);
  return;
}



// FUNCTION 148c89968 FUN_148c89968 body=63 status=ok
// SIG undefined FUN_148c89968(void)

undefined1 FUN_148c89968(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c89a92(param_2,param_3);
    param_3 = param_3 + 0x208;
    param_2 = param_2 + 0x208;
  }
  return 1;
}



// FUNCTION 148c899d0 FUN_148c899d0 body=59 status=ok
// SIG undefined FUN_148c899d0(void)

undefined8 FUN_148c899d0(longlong *param_1)

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



// FUNCTION 148c89a1c FUN_148c89a1c body=40 status=ok
// SIG undefined FUN_148c89a1c(void)

void FUN_148c89a1c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x208) == '\x01') {
    FUN_145ecde80(param_2);
    *(undefined1 *)(param_2 + 0x208) = 0;
  }
  return;
}



// FUNCTION 148c89a92 FUN_148c89a92 body=381 status=ok
// SIG undefined FUN_148c89a92(void)

longlong FUN_148c89a92(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1489fb7d2();
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined1 *)(param_1 + 0xb4) = *(undefined1 *)(param_2 + 0xb4);
  FUN_144a787a6(param_1 + 0xb8,param_2 + 0xb8);
  plVar1 = *(longlong **)(param_2 + 200);
  plVar2 = *(longlong **)(param_1 + 200);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 200) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  plVar1 = *(longlong **)(param_2 + 0xd8);
  plVar2 = *(longlong **)(param_1 + 0xd8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xd8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  plVar1 = *(longlong **)(param_2 + 0xe8);
  plVar2 = *(longlong **)(param_1 + 0xe8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xe8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  FUN_148c89c10(param_1 + 0xf8,param_2 + 0xf8);
  FUN_140b855d0(param_1 + 0x108,param_2 + 0x108);
  FUN_140bee9ec(param_1 + 0x158,param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  FUN_1489fdc6a(param_1 + 0x170,param_2 + 0x170);
  return param_1;
}



// FUNCTION 148c89c10 FUN_148c89c10 body=95 status=ok
// SIG undefined FUN_148c89c10(void)

undefined8 * FUN_148c89c10(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145b05dea(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c89c70(param_1,iVar1);
      FUN_148c89cdf(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c89c70 FUN_148c89c70 body=111 status=ok
// SIG undefined FUN_148c89c70(void)

void FUN_148c89c70(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x78,8);
    iVar2 = (int)(uVar1 / 0x78);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x78,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c89cdf FUN_148c89cdf body=52 status=ok
// SIG undefined FUN_148c89cdf(void)

void FUN_148c89cdf(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c89d14(param_1,param_2);
    param_1 = param_1 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return;
}



// FUNCTION 148c89d14 FUN_148c89d14 body=308 status=ok
// SIG undefined FUN_148c89d14(void)

undefined8 * FUN_148c89d14(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[5] = param_2[5];
  plVar3 = (longlong *)param_2[6];
  param_1[6] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  plVar3 = (longlong *)param_2[8];
  param_1[8] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  plVar3 = (longlong *)param_2[10];
  param_1[10] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  plVar3 = (longlong *)param_2[0xc];
  param_1[0xc] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  *(undefined1 *)((longlong)param_1 + 0x72) = *(undefined1 *)((longlong)param_2 + 0x72);
  return param_1;
}



// FUNCTION 148c89e4a FUN_148c89e4a body=37 status=ok
// SIG undefined FUN_148c89e4a(void)

void FUN_148c89e4a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x248);
  FUN_14603b26e(param_2);
  return;
}



// FUNCTION 148c89e9c FUN_148c89e9c body=63 status=ok
// SIG undefined FUN_148c89e9c(void)

undefined1 FUN_148c89e9c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144082f7a(param_2,param_3);
    param_3 = param_3 + 0x248;
    param_2 = param_2 + 0x248;
  }
  return 1;
}



// FUNCTION 148c89f04 FUN_148c89f04 body=59 status=ok
// SIG undefined FUN_148c89f04(void)

undefined8 FUN_148c89f04(longlong *param_1)

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



// FUNCTION 148c89f50 FUN_148c89f50 body=40 status=ok
// SIG undefined FUN_148c89f50(void)

void FUN_148c89f50(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x248) == '\x01') {
    FUN_145da8380(param_2);
    *(undefined1 *)(param_2 + 0x248) = 0;
  }
  return;
}



// FUNCTION 148c89fc8 FUN_148c89fc8 body=37 status=ok
// SIG undefined FUN_148c89fc8(void)

void FUN_148c89fc8(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x708);
  FUN_146164f5a(param_2);
  return;
}



// FUNCTION 148c8a01a FUN_148c8a01a body=63 status=ok
// SIG undefined FUN_148c8a01a(void)

undefined1 FUN_148c8a01a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c8a144(param_2,param_3);
    param_3 = param_3 + 0x708;
    param_2 = param_2 + 0x708;
  }
  return 1;
}



// FUNCTION 148c8a082 FUN_148c8a082 body=59 status=ok
// SIG undefined FUN_148c8a082(void)

undefined8 FUN_148c8a082(longlong *param_1)

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



// FUNCTION 148c8a0ce FUN_148c8a0ce body=40 status=ok
// SIG undefined FUN_148c8a0ce(void)

void FUN_148c8a0ce(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x708) == '\x01') {
    FUN_14602c336(param_2);
    *(undefined1 *)(param_2 + 0x708) = 0;
  }
  return;
}



// FUNCTION 148c8a144 FUN_148c8a144 body=542 status=ok
// SIG undefined FUN_148c8a144(void)

longlong FUN_148c8a144(longlong param_1,longlong param_2)

{
  FUN_148c8499e();
  *(undefined1 *)(param_1 + 0x288) = *(undefined1 *)(param_2 + 0x288);
  *(undefined1 *)(param_1 + 0x290) = *(undefined1 *)(param_2 + 0x290);
  FUN_144a787a6(param_1 + 0x298,param_2 + 0x298);
  FUN_144a787a6(param_1 + 0x2a8,param_2 + 0x2a8);
  *(undefined1 *)(param_1 + 0x2b8) = *(undefined1 *)(param_2 + 0x2b8);
  *(undefined1 *)(param_1 + 0x2c0) = *(undefined1 *)(param_2 + 0x2c0);
  FUN_144a787a6(param_1 + 0x2c8,param_2 + 0x2c8);
  FUN_144a787a6(param_1 + 0x2d8,param_2 + 0x2d8);
  *(undefined1 *)(param_1 + 0x2e8) = *(undefined1 *)(param_2 + 0x2e8);
  FUN_144a787a6(param_1 + 0x2f0,param_2 + 0x2f0);
  FUN_144a787a6(param_1 + 0x300,param_2 + 0x300);
  *(undefined1 *)(param_1 + 0x310) = *(undefined1 *)(param_2 + 0x310);
  FUN_144a787a6(param_1 + 0x318,param_2 + 0x318);
  FUN_144a787a6(param_1 + 0x328,param_2 + 0x328);
  if (*(int *)(param_1 + 0x33c) != *(int *)(param_2 + 0x33c)) {
    *(undefined1 *)(param_1 + 0x338) = *(undefined1 *)(param_2 + 0x338);
    *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_2 + 0x33c);
  }
  if (*(int *)(param_1 + 0x344) != *(int *)(param_2 + 0x344)) {
    *(undefined1 *)(param_1 + 0x340) = *(undefined1 *)(param_2 + 0x340);
    *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_2 + 0x344);
  }
  if (*(int *)(param_1 + 0x34c) != *(int *)(param_2 + 0x34c)) {
    *(undefined1 *)(param_1 + 0x348) = *(undefined1 *)(param_2 + 0x348);
    *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_2 + 0x34c);
  }
  if (*(int *)(param_1 + 0x354) != *(int *)(param_2 + 0x354)) {
    *(undefined1 *)(param_1 + 0x350) = *(undefined1 *)(param_2 + 0x350);
    *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(param_2 + 0x354);
  }
  *(undefined1 *)(param_1 + 0x358) = *(undefined1 *)(param_2 + 0x358);
  FUN_144a787a6(param_1 + 0x360,param_2 + 0x360);
  FUN_144a787a6(param_1 + 0x370,param_2 + 0x370);
  if (*(int *)(param_1 + 0x688) != *(int *)(param_2 + 0x688)) {
    FUN_1415c1204(param_1 + 0x380,param_2 + 0x380);
    *(undefined4 *)(param_1 + 0x688) = *(undefined4 *)(param_2 + 0x688);
  }
  FUN_140b855d0(param_1 + 0x690,param_2 + 0x690);
  FUN_140bee9ec(param_1 + 0x6e0,param_2 + 0x6e0);
  *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(param_2 + 0x6f0);
  FUN_1489fde4e(param_1 + 0x6f8,param_2 + 0x6f8);
  return param_1;
}



// FUNCTION 148c8a364 FUN_148c8a364 body=65 status=ok
// SIG undefined FUN_148c8a364(void)

void FUN_148c8a364(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar2[1];
  *(undefined1 *)(param_2 + 2) = 0;
  return;
}



// FUNCTION 148c8a3a6 FUN_148c8a3a6 body=51 status=ok
// SIG undefined FUN_148c8a3a6(void)

void FUN_148c8a3a6(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar2[1];
  *(undefined1 *)(param_2 + 2) = 0;
  return;
}



// FUNCTION 148c8a400 FUN_148c8a400 body=112 status=ok
// SIG undefined FUN_148c8a400(void)

undefined8 FUN_148c8a400(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(param_3 + lVar3);
      plVar2 = *(longlong **)(param_2 + lVar3);
      if (plVar2 != plVar1) {
        *(longlong **)(param_2 + lVar3) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      *(undefined1 *)(param_2 + 0x10 + lVar3) = *(undefined1 *)(param_3 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c8a498 FUN_148c8a498 body=59 status=ok
// SIG undefined FUN_148c8a498(void)

undefined8 FUN_148c8a498(longlong *param_1)

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



// FUNCTION 148c8a4de FUN_148c8a4de body=38 status=ok
// SIG undefined FUN_148c8a4de(void)

void FUN_148c8a4de(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148c8a554 FUN_148c8a554 body=37 status=ok
// SIG undefined FUN_148c8a554(void)

void FUN_148c8a554(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1b0);
  FUN_1457ba0d4(param_2);
  return;
}



// FUNCTION 148c8a5a0 FUN_148c8a5a0 body=63 status=ok
// SIG undefined FUN_148c8a5a0(void)

undefined1 FUN_148c8a5a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145aa24d2(param_2,param_3);
    param_3 = param_3 + 0x1b0;
    param_2 = param_2 + 0x1b0;
  }
  return 1;
}



// FUNCTION 148c8a608 FUN_148c8a608 body=59 status=ok
// SIG undefined FUN_148c8a608(void)

undefined8 FUN_148c8a608(longlong *param_1)

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



// FUNCTION 148c8a654 FUN_148c8a654 body=40 status=ok
// SIG undefined FUN_148c8a654(void)

void FUN_148c8a654(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_145927bde(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 148c8a6cc FUN_148c8a6cc body=37 status=ok
// SIG undefined FUN_148c8a6cc(void)

void FUN_148c8a6cc(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x348);
  FUN_145e0ec0c(param_2);
  return;
}



// FUNCTION 148c8a71e FUN_148c8a71e body=63 status=ok
// SIG undefined FUN_148c8a71e(void)

undefined1 FUN_148c8a71e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c8a848(param_2,param_3);
    param_3 = param_3 + 0x348;
    param_2 = param_2 + 0x348;
  }
  return 1;
}



// FUNCTION 148c8a786 FUN_148c8a786 body=59 status=ok
// SIG undefined FUN_148c8a786(void)

undefined8 FUN_148c8a786(longlong *param_1)

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



// FUNCTION 148c8a7d2 FUN_148c8a7d2 body=40 status=ok
// SIG undefined FUN_148c8a7d2(void)

void FUN_148c8a7d2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x348) == '\x01') {
    FUN_145aefe0c(param_2);
    *(undefined1 *)(param_2 + 0x348) = 0;
  }
  return;
}



// FUNCTION 148c8a848 FUN_148c8a848 body=671 status=ok
// SIG undefined FUN_148c8a848(void)

longlong FUN_148c8a848(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_1489fb7d2();
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_2 + 0xb8)) {
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  }
  plVar1 = *(longlong **)(param_2 + 0xc0);
  plVar2 = *(longlong **)(param_1 + 0xc0);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xc0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  FUN_148c72620(param_1 + 0xd0,param_2 + 0xd0);
  if (*(int *)(param_1 + 0xe4) != *(int *)(param_2 + 0xe4)) {
    *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  }
  *(undefined1 *)(param_1 + 0xea) = *(undefined1 *)(param_2 + 0xea);
  *(undefined2 *)(param_1 + 0xe8) = *(undefined2 *)(param_2 + 0xe8);
  if (*(int *)(param_1 + 0xf0) != *(int *)(param_2 + 0xf0)) {
    *(undefined1 *)(param_1 + 0xec) = *(undefined1 *)(param_2 + 0xec);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  }
  *(undefined1 *)(param_1 + 0xfc) = *(undefined1 *)(param_2 + 0xfc);
  *(undefined8 *)(param_1 + 0xf4) = *(undefined8 *)(param_2 + 0xf4);
  if (*(int *)(param_1 + 0x110) != *(int *)(param_2 + 0x110)) {
    FUN_144a787a6(param_1 + 0x100,param_2 + 0x100);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  }
  if (*(int *)(param_1 + 0x128) != *(int *)(param_2 + 0x128)) {
    FUN_144a787a6(param_1 + 0x118,param_2 + 0x118);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  }
  if (*(int *)(param_1 + 0x134) != *(int *)(param_2 + 0x134)) {
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  }
  if (*(int *)(param_1 + 0x148) != *(int *)(param_2 + 0x148)) {
    FUN_144a787a6(param_1 + 0x138,param_2 + 0x138);
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  }
  if (*(int *)(param_1 + 0x154) != *(int *)(param_2 + 0x154)) {
    *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0x150);
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
  }
  if (*(int *)(param_1 + 0x15c) != *(int *)(param_2 + 0x15c)) {
    *(undefined1 *)(param_1 + 0x158) = *(undefined1 *)(param_2 + 0x158);
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
  }
  if (*(int *)(param_1 + 0x170) != *(int *)(param_2 + 0x170)) {
    uVar3 = *(undefined4 *)(param_2 + 0x164);
    uVar4 = *(undefined4 *)(param_2 + 0x168);
    uVar5 = *(undefined4 *)(param_2 + 0x16c);
    *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
    *(undefined4 *)(param_1 + 0x164) = uVar3;
    *(undefined4 *)(param_1 + 0x168) = uVar4;
    *(undefined4 *)(param_1 + 0x16c) = uVar5;
    *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  }
  FUN_145aa24d2(param_1 + 0x178,param_2 + 0x178);
  uVar3 = *(undefined4 *)(param_2 + 0x32c);
  uVar4 = *(undefined4 *)(param_2 + 0x330);
  uVar5 = *(undefined4 *)(param_2 + 0x334);
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_2 + 0x328);
  *(undefined4 *)(param_1 + 0x32c) = uVar3;
  *(undefined4 *)(param_1 + 0x330) = uVar4;
  *(undefined4 *)(param_1 + 0x334) = uVar5;
  plVar1 = *(longlong **)(param_2 + 0x338);
  plVar2 = *(longlong **)(param_1 + 0x338);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x338) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_2 + 0x340);
  return param_1;
}



// FUNCTION 148c8aae8 FUN_148c8aae8 body=48 status=ok
// SIG undefined FUN_148c8aae8(void)

void FUN_148c8aae8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x238);
  FUN_1459653a2(param_2);
  *param_2 = &PTR_FUN_14b8c1e30;
  return;
}



// FUNCTION 148c8ab18 FUN_148c8ab18 body=32 status=ok
// SIG undefined FUN_148c8ab18(void)

void FUN_148c8ab18(undefined8 param_1,undefined8 *param_2)

{
  FUN_1459653a2(param_2);
  *param_2 = &PTR_FUN_14b8c1e30;
  return;
}



// FUNCTION 148c8ab5c FUN_148c8ab5c body=63 status=ok
// SIG undefined FUN_148c8ab5c(void)

undefined1 FUN_148c8ab5c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c89616(param_2,param_3);
    param_3 = param_3 + 0x238;
    param_2 = param_2 + 0x238;
  }
  return 1;
}



// FUNCTION 148c8abc4 FUN_148c8abc4 body=59 status=ok
// SIG undefined FUN_148c8abc4(void)

undefined8 FUN_148c8abc4(longlong *param_1)

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



// FUNCTION 148c8ac10 FUN_148c8ac10 body=40 status=ok
// SIG undefined FUN_148c8ac10(void)

void FUN_148c8ac10(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x238) == '\x01') {
    FUN_1457deb6c(param_2);
    *(undefined1 *)(param_2 + 0x238) = 0;
  }
  return;
}



// FUNCTION 148c8ac86 FUN_148c8ac86 body=57 status=ok
// SIG undefined FUN_148c8ac86(void)

void FUN_148c8ac86(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb028 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb028 = FUN_140002ddd(FUN_14660875f,uVar1,L"OakWidgetData_OptionsMenuNavBar");
  }
  return;
}



// FUNCTION 148c8acc0 FUN_148c8acc0 body=37 status=ok
// SIG undefined FUN_148c8acc0(void)

void FUN_148c8acc0(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1a8);
  FUN_1456e6b64(param_2);
  return;
}



// FUNCTION 148c8ad0c FUN_148c8ad0c body=63 status=ok
// SIG undefined FUN_148c8ad0c(void)

undefined1 FUN_148c8ad0c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c8ae36(param_2,param_3);
    param_3 = param_3 + 0x1a8;
    param_2 = param_2 + 0x1a8;
  }
  return 1;
}



// FUNCTION 148c8ad74 FUN_148c8ad74 body=59 status=ok
// SIG undefined FUN_148c8ad74(void)

undefined8 FUN_148c8ad74(longlong *param_1)

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


