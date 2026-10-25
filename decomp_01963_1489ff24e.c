// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1489ff24e FUN_1489ff24e body=62 status=ok
// SIG undefined FUN_1489ff24e(void)

undefined8 FUN_1489ff24e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 1489ff2b4 FUN_1489ff2b4 body=59 status=ok
// SIG undefined FUN_1489ff2b4(void)

undefined8 FUN_1489ff2b4(longlong *param_1)

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



// FUNCTION 1489ff2fa FUN_1489ff2fa body=37 status=ok
// SIG undefined FUN_1489ff2fa(void)

void FUN_1489ff2fa(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1489ff388 FUN_1489ff388 body=47 status=ok
// SIG undefined FUN_1489ff388(void)

void FUN_1489ff388(undefined8 param_1,longlong *param_2)

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



// FUNCTION 1489ff3ce FUN_1489ff3ce body=67 status=ok
// SIG undefined FUN_1489ff3ce(void)

undefined1 FUN_1489ff3ce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1489ff43a FUN_1489ff43a body=59 status=ok
// SIG undefined FUN_1489ff43a(void)

undefined8 FUN_1489ff43a(longlong *param_1)

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



// FUNCTION 1489ff4d8 FUN_1489ff4d8 body=51 status=ok
// SIG undefined FUN_1489ff4d8(void)

void FUN_1489ff4d8(longlong *param_1)

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



// FUNCTION 1489ff51c FUN_1489ff51c body=44 status=ok
// SIG undefined FUN_1489ff51c(void)

void FUN_1489ff51c(undefined8 param_1,longlong *param_2)

{
  FUN_1447a1747(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1489ff55e FUN_1489ff55e body=54 status=ok
// SIG undefined FUN_1489ff55e(void)

undefined1 FUN_1489ff55e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140bee9ec(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1489ff5bc FUN_1489ff5bc body=59 status=ok
// SIG undefined FUN_1489ff5bc(void)

undefined8 FUN_1489ff5bc(longlong *param_1)

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



// FUNCTION 1489ff65a FUN_1489ff65a body=48 status=ok
// SIG undefined FUN_1489ff65a(void)

void FUN_1489ff65a(longlong *param_1)

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



// FUNCTION 1489ff6a2 FUN_1489ff6a2 body=47 status=ok
// SIG undefined FUN_1489ff6a2(void)

void FUN_1489ff6a2(undefined8 param_1,longlong *param_2)

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



// FUNCTION 1489ff6e8 FUN_1489ff6e8 body=67 status=ok
// SIG undefined FUN_1489ff6e8(void)

undefined1 FUN_1489ff6e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_1406fa324(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1489ff754 FUN_1489ff754 body=59 status=ok
// SIG undefined FUN_1489ff754(void)

undefined8 FUN_1489ff754(longlong *param_1)

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



// FUNCTION 1489ff7f2 FUN_1489ff7f2 body=51 status=ok
// SIG undefined FUN_1489ff7f2(void)

void FUN_1489ff7f2(longlong *param_1)

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



// FUNCTION 1489ff826 FUN_1489ff826 body=96 status=ok
// SIG undefined FUN_1489ff826(void)

void FUN_1489ff826(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x100);
  FUN_1408f3f9e(param_2);
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xbf800000;
  *param_2 = &PTR_FUN_14b472f60;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  *(undefined1 *)(param_2 + 0x1f) = 0;
  return;
}



// FUNCTION 1489ff886 FUN_1489ff886 body=80 status=ok
// SIG undefined FUN_1489ff886(void)

void FUN_1489ff886(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xbf800000;
  *param_2 = &PTR_FUN_14b472f60;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  *(undefined1 *)(param_2 + 0x1f) = 0;
  return;
}



// FUNCTION 1489ff8fa FUN_1489ff8fa body=63 status=ok
// SIG undefined FUN_1489ff8fa(void)

undefined1 FUN_1489ff8fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489ffa5e(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 1489ff962 FUN_1489ff962 body=59 status=ok
// SIG undefined FUN_1489ff962(void)

undefined8 FUN_1489ff962(longlong *param_1)

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



// FUNCTION 1489ff9ae FUN_1489ff9ae body=40 status=ok
// SIG undefined FUN_1489ff9ae(void)

void FUN_1489ff9ae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_145a242dc(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 1489ffa24 FUN_1489ffa24 body=57 status=ok
// SIG undefined FUN_1489ffa24(void)

void FUN_1489ffa24(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb92500 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb92500 = FUN_140002ddd(FUN_14656d28f,uVar1,L"GbxUIData_MenuDebugUI");
  }
  return;
}



// FUNCTION 1489ffa5e FUN_1489ffa5e body=123 status=ok
// SIG undefined FUN_1489ffa5e(void)

longlong FUN_1489ffa5e(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  FUN_1489ff106(param_1 + 0xb0,param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  FUN_1489ffada(param_1 + 200,param_2 + 200);
  FUN_1489ffb3a(param_1 + 0xd8,param_2 + 0xd8);
  FUN_1489ffb9a(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
  return param_1;
}



// FUNCTION 1489ffada FUN_1489ffada body=95 status=ok
// SIG undefined FUN_1489ffada(void)

undefined8 * FUN_1489ffada(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145a243ac(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1489ffbfa(param_1,iVar1);
      FUN_1489ffc6d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489ffb3a FUN_1489ffb3a body=95 status=ok
// SIG undefined FUN_1489ffb3a(void)

undefined8 * FUN_1489ffb3a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145a24416(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1489ffcec(param_1,iVar1);
      FUN_1489ffd4e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489ffb9a FUN_1489ffb9a body=95 status=ok
// SIG undefined FUN_1489ffb9a(void)

undefined8 * FUN_1489ffb9a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145a243d7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1489ffe1e(param_1,iVar1);
      FUN_1489ffe80(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489ffbfa FUN_1489ffbfa body=115 status=ok
// SIG undefined FUN_1489ffbfa(void)

void FUN_1489ffbfa(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1489ffc6d FUN_1489ffc6d body=126 status=ok
// SIG undefined FUN_1489ffc6d(void)

void FUN_1489ffc6d(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined2 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = *(int *)(puVar2 + -4);
      _Src = *(void **)(puVar2 + -8);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      *(undefined2 *)(param_1 + 2) = *puVar2;
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1489ffcec FUN_1489ffcec body=98 status=ok
// SIG undefined FUN_1489ffcec(void)

void FUN_1489ffcec(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1489ffd4e FUN_1489ffd4e body=52 status=ok
// SIG undefined FUN_1489ffd4e(void)

void FUN_1489ffd4e(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1489ffd82(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 1489ffd82 FUN_1489ffd82 body=156 status=ok
// SIG undefined FUN_1489ffd82(void)

undefined8 * FUN_1489ffd82(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1489ffe1e FUN_1489ffe1e body=98 status=ok
// SIG undefined FUN_1489ffe1e(void)

void FUN_1489ffe1e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1489ffe80 FUN_1489ffe80 body=52 status=ok
// SIG undefined FUN_1489ffe80(void)

void FUN_1489ffe80(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1489ffeb4(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 1489ffeb4 FUN_1489ffeb4 body=157 status=ok
// SIG undefined FUN_1489ffeb4(void)

undefined8 * FUN_1489ffeb4(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1401b309e(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 1489fff66 FUN_1489fff66 body=262 status=ok
// SIG undefined FUN_1489fff66(void)

void FUN_1489fff66(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
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
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148a07fa6(local_20,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a00070 FUN_148a00070 body=97 status=ok
// SIG undefined FUN_148a00070(void)

void FUN_148a00070(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_3[1];
  }
  local_20 = *param_2;
  local_18 = *(undefined4 *)(param_2 + 1);
  local_10 = 0;
  FUN_145815ce0(param_1,&local_20,lVar1,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a000d2 FUN_148a000d2 body=148 status=ok
// SIG undefined FUN_148a000d2(void)

undefined8 FUN_148a000d2(undefined8 param_1)

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
  uVar1 = FUN_14594c5c0();
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



// FUNCTION 148a00168 FUN_148a00168 body=147 status=ok
// SIG undefined FUN_148a00168(void)

int * FUN_148a00168(longlong param_1,int *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x30));
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar2);
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0xb0) == param_3)) {
        *param_2 = param_3;
        lVar2 = *(longlong *)(lVar1 + 0xb8);
        *(longlong *)(param_2 + 2) = lVar2;
        if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
          FUN_1456cec3c();
        }
        goto LAB_148a001c3;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x40) * 8 != lVar2);
  }
  *param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
LAB_148a001c3:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x30));
  return param_2;
}



// FUNCTION 148a001fc FUN_148a001fc body=223 status=ok
// SIG undefined FUN_148a001fc(void)

void FUN_148a001fc(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  wchar_t *_Str;
  undefined1 auStack_48 [32];
  undefined4 local_28 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    if (0 < (int)param_1[1]) {
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)*param_1;
      }
      iVar1 = _wtoi(_Str);
      if (iVar1 != -1) {
        local_28[0] = 0;
        local_20 = 0;
        FUN_143eb0b3d(iVar1,param_2,local_28);
        lVar2 = FUN_144a8c772(local_28);
        if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x28), lVar2 != 0)) {
          *(bool *)(lVar2 + 0x208) = (*(byte *)(lVar2 + 0x39) & 0x19) != 0;
          FUN_140fe1f54();
        }
        goto LAB_148a002a5;
      }
    }
    if (*(longlong *)(param_2 + 0x1f0) != 0) {
      lVar2 = FUN_1458485da();
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
LAB_148a002a5:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a00356 FUN_148a00356 body=125 status=ok
// SIG undefined FUN_148a00356(void)

void FUN_148a00356(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x30));
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x28), lVar3 != 0)) {
        if (((*(byte *)(lVar3 + 0x39) & 0x19) == 0) == (bool)param_2) {
          *(bool *)(lVar3 + 0x208) = (*(byte *)(lVar3 + 0x39) & 0x19) != 0;
          FUN_140fe1f54();
        }
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000148a003bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x30));
  return;
}



// FUNCTION 148a003d4 FUN_148a003d4 body=5 status=ok
// SIG undefined FUN_148a003d4(void)

undefined8 FUN_148a003d4(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// FUNCTION 148a003da FUN_148a003da body=159 status=ok
// SIG undefined FUN_148a003da(void)

void FUN_148a003da(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined1 param_7)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 *local_70;
  undefined1 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = *param_6;
  local_28 = param_6[1];
  local_70 = &local_38;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = *(undefined8 *)(param_2 + 4);
  local_68 = param_7;
  local_78 = param_5;
  local_30 = local_38;
  local_20 = local_28;
  FUN_140962b5a(local_58,&local_58);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0047a FUN_148a0047a body=143 status=ok
// SIG undefined FUN_148a0047a(void)

void FUN_148a0047a(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 *local_60;
  undefined1 local_58;
  undefined1 local_49;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = *(undefined8 *)(param_2 + 4);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_60 = &local_28;
  local_28 = 0x3f947ae140000000;
  local_20 = 0x3f947ae140000000;
  local_18 = 0x3f947ae140000000;
  local_10 = 0x3f947ae140000000;
  local_58 = param_5;
  local_68 = &local_49;
  FUN_140962b5a(local_48,&local_48);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0050a FUN_148a0050a body=27 status=ok
// SIG undefined FUN_148a0050a(void)

bool FUN_148a0050a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x598) == 0) {
    return false;
  }
  return *(char *)(*(longlong *)(param_1 + 0x598) + 0x28) != '\0';
}



// FUNCTION 148a0051d FUN_148a0051d body=242 status=ok
// SIG undefined FUN_148a0051d(void)

void FUN_148a0051d(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined **local_48 [3];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x10))(param_1,&local_58,"FOakUIMaterialAnimationEventObject",param_2);
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    cohtml::Property::Property((Property *)local_48,"MaterialEvent",true);
    local_48[0] = &PTR_FUN_14b478260;
    local_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_50,(Property *)local_48);
    cohtml::Property::~Property((Property *)local_48);
    cohtml::Property::Property((Property *)local_48,"Params",true);
    local_48[0] = &PTR_FUN_14b4782f0;
    local_30 = 8;
    (**(code **)(*local_58 + 0x18))(local_58,local_50,(Property *)local_48);
    cohtml::Property::~Property((Property *)local_48);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_58);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a00610 FUN_148a00610 body=283 status=ok
// SIG undefined FUN_148a00610(void)

undefined8 FUN_148a00610(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 auStack_8a8 [40];
  longlong local_880;
  int local_878;
  undefined1 *local_870;
  undefined1 *local_868;
  undefined1 *local_860;
  char local_858;
  undefined1 local_850 [2070];
  undefined1 local_3a [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_8a8;
  local_880 = *param_3;
  local_870 = local_850;
  local_858 = '\0';
  local_860 = local_3a;
  local_868 = local_870;
  FUN_14005eb5c(&local_880,&local_870);
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar3 = (undefined4 *)*param_1;
    lVar4 = (longlong)*(int *)(param_1 + 1) * 0x78;
    do {
      cVar2 = FUN_144a846f6(*puVar3);
      if (cVar2 != '\0') {
        FUN_1400021e4(puVar3,&local_880);
        iVar1 = local_878 + -1;
        if (local_878 == 0) {
          iVar1 = 0;
        }
        FUN_1449668a2(&local_870,local_880,iVar1);
        if (local_880 != 0) {
          FUN_1400020a8();
        }
      }
      puVar3 = puVar3 + 0x1e;
      lVar4 = lVar4 + -0x78;
    } while (lVar4 != 0);
  }
  FUN_1446f82e2(param_2,(ulonglong)((longlong)local_868 - (longlong)local_870) >> 1,local_870,1);
  if (local_858 == '\x01') {
    FUN_1400020a8(local_870);
  }
  if ((local_38 ^ (ulonglong)auStack_8a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0072c FUN_148a0072c body=298 status=ok
// SIG undefined FUN_148a0072c(void)

void FUN_148a0072c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x378);
  plVar1 = (longlong *)(lVar3 + 0xb0);
  lVar2 = lVar3 + 0xc0;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar4 = 0;
  local_48 = lVar2;
  if (*(int *)(lVar3 + 0xd8) != 0) {
    FUN_1449c0562(&local_50);
    iVar4 = *(int *)(lVar3 + 0xd8);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = plVar1;
  if ((iStack_3c != iVar4) || (local_48 != lVar2)) {
    do {
      do {
        FUN_14573e226(*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x14),
                      *(undefined4 *)(*local_78 + 8 + (longlong)iStack_5c * 0x14));
        local_60 = local_60 & ~local_70._4_4_;
        FUN_1449c0562(&local_70);
      } while (iStack_5c != iVar4);
    } while ((local_68 != lVar2) || (local_78 != plVar1));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a00866 FUN_148a00866 body=144 status=ok
// SIG undefined FUN_148a00866(void)

void FUN_148a00866(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  uVar4 = DAT_14c98e618;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (lVar3 != 0) {
    local_18 = *(longlong **)(param_1 + 0x48);
    if (local_18 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = (int)local_18[1] + 1;
      UNLOCK();
    }
    local_20 = lVar3;
    FUN_140d673ae(uVar4,&local_20,2);
    plVar5 = local_18;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a008f8 FUN_148a008f8 body=67 status=ok
// SIG undefined FUN_148a008f8(void)

void FUN_148a008f8(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x408);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x400);
    lVar3 = 0;
    do {
      FUN_148a0093c(*(undefined8 *)(lVar2 + lVar3),param_2);
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
  }
  return;
}



// FUNCTION 148a0093c FUN_148a0093c body=319 status=ok
// SIG undefined FUN_148a0093c(void)

void FUN_148a0093c(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined1 auStack_208 [40];
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  char local_1c8;
  undefined1 local_1c0 [256];
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_208;
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x281) != param_2)) {
    *(char *)(param_1 + 0x281) = param_2;
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    local_1e0 = local_1c0;
    local_1c8 = '\0';
    local_1d0 = local_c0;
    local_1d8 = local_1e0;
    _Str = (wchar_t *)FUN_140c7f682(param_1,L"OnToggleUI",&local_1e0);
    local_40 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_38 = 0;
      local_30 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1446fe5a4(local_c0,_Str,sVar3 & 0xffffffff,1);
    }
    FUN_140755a72(uVar2,local_38,param_1 + 0x281);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_1c8 == '\x01') {
      FUN_1400020a8(local_1e0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a00a8e FUN_148a00a8e body=52 status=ok
// SIG undefined FUN_148a00a8e(void)

void FUN_148a00a8e(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x80);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x80);
    FUN_145aa37a0(uVar1);
    return;
  }
  return;
}



// FUNCTION 148a00ac4 FUN_148a00ac4 body=244 status=ok
// SIG undefined FUN_148a00ac4(void)

undefined8 FUN_148a00ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14ac8b3b0;
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
  *local_38 = &PTR_FUN_14b478b90;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &DAT_148a00ac2;
  FUN_14577a226(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a00c7c FUN_148a00c7c body=77 status=ok
// SIG undefined FUN_148a00c7c(void)

undefined8 * FUN_148a00c7c(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b4750f0;
  FUN_144a5dc74(param_1 + 3);
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  FUN_144a5dc74(param_1 + 6);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 148a00cca FUN_148a00cca body=129 status=ok
// SIG undefined FUN_148a00cca(void)

void FUN_148a00cca(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = (longlong *)FUN_140489acc();
  if (plVar3 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar3 + 0x410))(plVar3);
    uVar1 = DAT_14c98e618;
    if (cVar2 != '\0') {
      local_28 = *param_1;
      local_20 = param_1[1];
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      FUN_1428f5168(uVar1,1,param_2,&local_28);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a00d4c FUN_148a00d4c body=167 status=ok
// SIG undefined FUN_148a00d4c(void)

void FUN_148a00d4c(longlong param_1,longlong *param_2,undefined4 param_3,undefined1 *param_4,
                  longlong *param_5,undefined1 param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x18) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x20) = (int)param_2[1];
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined1 *)(param_1 + 0x2c) = *param_4;
  plVar1 = (longlong *)*param_5;
  plVar2 = *(longlong **)(param_1 + 0x30);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x30) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x38) = (int)param_5[1];
  *(undefined1 *)(param_1 + 0x40) = param_6;
  return;
}



// FUNCTION 148a00df4 FUN_148a00df4 body=116 status=ok
// SIG undefined FUN_148a00df4(void)

void FUN_148a00df4(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x18) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x20) = (int)param_2[1];
  if ((*(int *)(param_1 + 0x50) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x48), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148a00e5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 148a00e68 FUN_148a00e68 body=15 status=ok
// SIG undefined FUN_148a00e68(void)

void FUN_148a00e68(longlong param_1,uint param_2,char param_3)

{
  if (param_3 != '\0') {
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | param_2;
    return;
  }
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & ~param_2;
  return;
}



// FUNCTION 148a00e78 FUN_148a00e78 body=59 status=ok
// SIG undefined FUN_148a00e78(void)

void FUN_148a00e78(undefined8 param_1,longlong param_2)

{
  FUN_1408caf7a(param_1,param_2,param_2 + 8,0);
  *(undefined4 *)(param_2 + 0x50) = 0;
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_2 + 8);
  return;
}



// FUNCTION 148a00eb4 FUN_148a00eb4 body=382 status=ok
// SIG undefined FUN_148a00eb4(void)

void FUN_148a00eb4(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  longlong *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = *param_3;
  LOCK();
  DAT_14cb91660 = DAT_14cb91660 + 1;
  UNLOCK();
  local_68 = (undefined8 *)FUN_14063ee1a(DAT_14cb91658);
  local_60 = &DAT_14cb91658;
  LOCK();
  DAT_14cb91660 = DAT_14cb91660 + 1;
  UNLOCK();
  local_58 = &local_70;
  while ((local_68 != (undefined8 *)0x0 && (*(longlong *)(local_68[2] + 0x78) != *local_58))) {
    local_68 = (undefined8 *)FUN_14063ee1a(*local_68);
  }
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  local_50 = (undefined8 *)0x0;
  local_48 = &DAT_14cb91658;
  LOCK();
  DAT_14cb91660 = DAT_14cb91660 + 1;
  UNLOCK();
  local_40 = &local_70;
  while ((puVar4 = local_48, puVar3 = local_50, plVar2 = local_58, puVar1 = local_60,
         local_50 != (undefined8 *)0x0 && (*(longlong *)(local_50[2] + 0x78) != *local_40))) {
    local_50 = (undefined8 *)FUN_14063ee1a(*local_50);
  }
  LOCK();
  DAT_14cb91660 = DAT_14cb91660 + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_60 + 1) = *(int *)(local_60 + 1) + 1;
  UNLOCK();
  LOCK();
  *(int *)(local_48 + 1) = *(int *)(local_48 + 1) + 1;
  UNLOCK();
  puVar5 = local_68;
LAB_148a00fb1:
  do {
    if (puVar5 == puVar3) {
      LOCK();
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + -1;
      UNLOCK();
      LOCK();
      *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_48 + 1) = *(int *)(local_48 + 1) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_60 + 1) = *(int *)(local_60 + 1) + -1;
      UNLOCK();
      if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_1411a33e2(param_1);
    for (puVar5 = (undefined8 *)FUN_14063ee1a(*puVar5); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)FUN_14063ee1a(*puVar5)) {
      if (*(longlong *)(puVar5[2] + 0x78) == *plVar2) goto LAB_148a00fb1;
    }
    puVar5 = (undefined8 *)0x0;
  } while( true );
}



// FUNCTION 148a0105a FUN_148a0105a body=68 status=ok
// SIG undefined FUN_148a0105a(void)

void FUN_148a0105a(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  lVar1 = FUN_140391552();
  if (lVar1 != 0) {
    FUN_14039144e(lVar1,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148a0109b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_2)(param_2,1);
  return;
}



// FUNCTION 148a0109e FUN_148a0109e body=240 status=ok
// SIG undefined FUN_148a0109e(void)

void FUN_148a0109e(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  
  param_1 = param_1 + 0x30;
  cVar2 = FUN_144729dda(param_1);
  if (cVar2 != '\0') {
    lVar4 = FUN_14479d2ce(param_1);
    cVar2 = FUN_144729dda(lVar4 + 900);
    if ((cVar2 != '\0') && (param_3 != (longlong *)0x0 && param_2 != (longlong *)0x0)) {
      iVar3 = (int)param_2[1];
      if (0 < iVar3) {
        lVar4 = 0;
        iVar7 = 0;
        do {
          lVar1 = *param_2;
          if (*(longlong *)(lVar1 + lVar4) != 0) {
            lVar5 = FUN_14479d2ce(param_1);
            uVar6 = FUN_14479d2ce(lVar5 + 900);
            FUN_14129c566(uVar6,lVar1 + lVar4);
            iVar3 = (int)param_2[1];
          }
          iVar7 = iVar7 + 1;
          lVar4 = lVar4 + 8;
        } while (iVar7 < iVar3);
      }
      iVar3 = (int)param_3[1];
      if (0 < iVar3) {
        lVar4 = 0;
        iVar7 = 0;
        do {
          lVar1 = *param_3;
          if (*(longlong *)(lVar1 + lVar4) != 0) {
            lVar5 = FUN_14479d2ce(param_1);
            uVar6 = FUN_14479d2ce(lVar5 + 900);
            FUN_14129c610(uVar6,lVar1 + lVar4);
            iVar3 = (int)param_3[1];
          }
          iVar7 = iVar7 + 1;
          lVar4 = lVar4 + 8;
        } while (iVar7 < iVar3);
      }
    }
  }
  return;
}



// FUNCTION 148a0118e FUN_148a0118e body=194 status=ok
// SIG undefined FUN_148a0118e(void)

bool FUN_148a0118e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  lVar3 = FUN_14063edce(&DAT_14cb91658);
  if ((lVar3 == 0) || ((longlong)*(int *)(param_1 + 0xd0) == 0)) {
    bVar7 = false;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 200);
    lVar1 = lVar6 + (longlong)*(int *)(param_1 + 0xd0) * 8;
    do {
      cVar2 = FUN_144729dda(lVar6);
      if (cVar2 != '\0') {
        lVar4 = FUN_14479d2ce(lVar6);
        if ((longlong)*(int *)(lVar4 + 0x38) != 0) {
          lVar5 = *(longlong *)(lVar4 + 0x30);
          lVar4 = (longlong)*(int *)(lVar4 + 0x38) * 0x50;
          do {
            if (*(longlong *)(lVar5 + 0x20) == lVar3) {
              if (lVar5 != 0) goto LAB_148a01228;
              break;
            }
            lVar5 = lVar5 + 0x50;
            lVar4 = lVar4 + -0x50;
          } while (lVar4 != 0);
        }
      }
      lVar6 = lVar6 + 8;
    } while (lVar6 != lVar1);
    lVar6 = 0;
LAB_148a01228:
    bVar7 = lVar6 != 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar7;
}



// FUNCTION 148a01252 FUN_148a01252 body=97 status=ok
// SIG undefined FUN_148a01252(void)

void FUN_148a01252(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = FUN_14479d2ce(*param_2 + 0x30);
  FUN_14485c47a(param_1 + 0x54,uVar3);
  *(longlong *)(param_1 + 0x60) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar4 = *(longlong **)(param_1 + 0x68);
  if (plVar4 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x68);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x68) = plVar2;
  }
  return;
}



// FUNCTION 148a012b4 FUN_148a012b4 body=135 status=ok
// SIG undefined FUN_148a012b4(void)

void FUN_148a012b4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar3 = *param_2;
  plVar4 = *(longlong **)(param_1 + 0x68);
  if (plVar4 == (longlong *)0x0) {
    lVar7 = 0;
  }
  else {
    iVar6 = (int)plVar4[1];
    lVar7 = 0;
    do {
      if (iVar6 == 0) goto LAB_148a01306;
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
    lVar7 = *(longlong *)(param_1 + 0x60);
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
LAB_148a01306:
  if (lVar3 == lVar7) {
    plVar4 = *(longlong **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    *(undefined8 *)(param_1 + 0x54) = 0;
  }
  return;
}



// FUNCTION 148a0133c FUN_148a0133c body=22 status=ok
// SIG undefined FUN_148a0133c(void)

longlong FUN_148a0133c(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (DAT_14cb92fb8 == 0) {
    return 0;
  }
  lVar1 = FUN_144837462(DAT_14cb92fb8,param_1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(char *)(lVar1 + 0x18) != '\0') {
      lVar2 = lVar1;
    }
  }
  return lVar2;
}



// FUNCTION 148a01352 FUN_148a01352 body=86 status=ok
// SIG undefined FUN_148a01352(void)

void FUN_148a01352(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((param_2 != 0) && (lVar3 = FUN_14479d2ce(param_1 + 4), lVar3 != 0)) &&
     ((longlong)*(int *)(param_1 + 0x20) != 0)) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar3);
      if (*(longlong *)(lVar2 + 0x18) == param_2) {
        pbVar1 = (byte *)(lVar2 + 0x8c);
        *pbVar1 = *pbVar1 | 8;
        return;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x20) * 0x10 != lVar3);
  }
  return;
}



// FUNCTION 148a013a8 FUN_148a013a8 body=61 status=ok
// SIG undefined FUN_148a013a8(void)

void FUN_148a013a8(longlong *param_1)

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



// FUNCTION 148a013e6 FUN_148a013e6 body=416 status=ok
// SIG undefined FUN_148a013e6(void)

void FUN_148a013e6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  byte *pbVar2;
  longlong lVar3;
  void *pvVar4;
  void *_Src;
  int iVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [40];
  longlong *local_60;
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < (int)param_1[2]) {
    lVar11 = 0;
    lVar9 = 0;
    local_60 = param_1;
    do {
      puVar7 = &DAT_14c9a12e0;
      if (*(longlong *)(*param_1 + lVar11) != 0) {
        puVar7 = (undefined4 *)FUN_140625092(*(longlong *)(*param_1 + lVar11),&DAT_14c9a12e0);
      }
      FUN_1447325ac(puVar7,&local_58,1);
      pvVar4 = local_58;
      if (local_58 != (void *)0x0) {
        puVar6 = &DAT_14c9a1308;
        if (*(longlong *)(*param_1 + lVar11) != 0) {
          puVar6 = (undefined8 *)FUN_1446e60f4(*(longlong *)(*param_1 + lVar11),&DAT_14cb929e8);
        }
        pbVar2 = (byte *)*puVar6;
        if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined8 *)(pbVar2 + 8);
        }
        FUN_1400b22c2(&local_58,uVar8);
        iVar5 = local_50;
        _Src = local_58;
        iVar1 = (int)param_2[1];
        lVar10 = (longlong)iVar1;
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_140ea5e86(param_2,iVar1);
        }
        lVar3 = *param_2;
        *(void **)(lVar3 + lVar10 * 0x18) = pvVar4;
        *(undefined8 *)(lVar3 + 8 + lVar10 * 0x18) = 0;
        *(int *)(lVar3 + 0x10 + lVar10 * 0x18) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)(lVar3 + lVar10 * 0x18 + 0x14) = 0;
        }
        else {
          puVar6 = (undefined8 *)(lVar3 + lVar10 * 0x18 + 8);
          FUN_1446dd670(puVar6,iVar5,0);
          memcpy((void *)*puVar6,_Src,(longlong)iVar5 * 2);
        }
        param_1 = local_60;
        if (_Src != (void *)0x0) {
          FUN_1400020a8(_Src);
        }
      }
      lVar9 = lVar9 + 1;
      lVar11 = lVar11 + 0x10;
    } while (lVar9 < (int)param_1[2]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a015a4 FUN_148a015a4 body=792 status=ok
// SIG undefined FUN_148a015a4(void)

void FUN_148a015a4(longlong param_1)

{
  int iVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  longlong *local_158;
  longlong local_150;
  longlong *local_148;
  undefined8 local_140;
  undefined4 local_134;
  longlong local_a8 [3];
  undefined4 local_90;
  undefined8 local_8c;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  lVar4 = DAT_14c9a1ab0;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (DAT_14c9a1ab0 != 0) {
    if (*(longlong *)(param_1 + 0x160) == 0) {
      puVar9 = &DAT_14c9a1308;
    }
    else {
      puVar9 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cb92950);
    }
    pbVar2 = (byte *)*puVar9;
    plVar11 = &DAT_14c9a1270;
    if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 2) != 0)) {
      plVar11 = *(longlong **)(pbVar2 + 8);
    }
    if (0 < (int)plVar11[2]) {
      FUN_14574688c();
      if (0 < (int)plVar11[2]) {
        lVar13 = 0;
        local_160 = (longlong *)(param_1 + 0x2b0);
        local_158 = plVar11;
        local_150 = param_1;
        do {
          local_90 = 0xffffffff;
          local_8c = 0;
          local_70 = 0;
          uStack_68 = 0;
          local_80 = 0;
          uStack_78 = 0;
          lVar12 = *plVar11;
          lVar3 = *(longlong *)(lVar12 + lVar13 * 0x10);
          puVar10 = &DAT_14c9a12e0;
          local_168 = lVar13;
          if (lVar3 != 0) {
            puVar10 = (undefined4 *)FUN_140625092(lVar3);
          }
          plVar11 = (longlong *)(lVar12 + lVar13 * 0x10);
          FUN_1447325ac(puVar10,&local_140,1);
          local_8c = local_140;
          local_90 = (undefined4)local_168;
          puVar9 = &DAT_14c9a1308;
          local_148 = plVar11;
          if (*plVar11 != 0) {
            puVar9 = (undefined8 *)FUN_1446e60f4(*plVar11,&DAT_14cb92958);
          }
          pbVar2 = (byte *)*puVar9;
          puVar9 = &DAT_14c9a1270;
          if ((pbVar2 != (byte *)0x0) && (puVar9 = &DAT_14c9a1270, (*pbVar2 & 2) != 0)) {
            puVar9 = *(undefined8 **)(pbVar2 + 8);
          }
          if (0 < *(int *)(puVar9 + 2)) {
            lVar13 = 0;
            do {
              FUN_1415a78b6(&local_140);
              local_134 = (undefined4)lVar13;
              FUN_143eb659a();
              if ((local_a8[0] == 0) || (cVar7 = FUN_145cc8dbe(lVar4,local_a8), cVar7 != '\0')) {
                uVar6 = uStack_78;
                lVar12 = (longlong)(int)uStack_78;
                uVar8 = (int)uStack_78 + 1;
                uStack_78 = CONCAT44(uStack_78._4_4_,uVar8);
                if (uStack_78._4_4_ < uVar8) {
                  FUN_1407cce00(&local_80,uVar6 & 0xffffffff);
                }
                FUN_140716340(lVar12 * 0xb0 + local_80,&local_140);
              }
              FUN_140716244(&local_140);
              lVar13 = lVar13 + 1;
            } while (lVar13 < *(int *)(puVar9 + 2));
          }
          puVar9 = &DAT_14c9a1308;
          if (*local_148 != 0) {
            puVar9 = (undefined8 *)FUN_1446e60f4(*local_148,&DAT_14cb929c0);
          }
          lVar13 = local_150;
          plVar11 = local_158;
          plVar5 = local_160;
          pbVar2 = (byte *)*puVar9;
          puVar9 = &DAT_14c9a1270;
          if ((pbVar2 != (byte *)0x0) && (puVar9 = &DAT_14c9a1270, (*pbVar2 & 2) != 0)) {
            puVar9 = *(undefined8 **)(pbVar2 + 8);
          }
          FUN_148a013e6(puVar9,&local_70);
          iVar1 = *(int *)(lVar13 + 0x2b8);
          *(uint *)(lVar13 + 0x2b8) = iVar1 + 1U;
          if (*(uint *)(lVar13 + 700) < iVar1 + 1U) {
            FUN_148a071a6(plVar5,iVar1);
          }
          FUN_145746904((longlong)iVar1 * 0x30 + *plVar5,&local_90);
          FUN_1407ccd86(&local_90);
          lVar13 = local_168 + 1;
        } while (lVar13 < (int)plVar11[2]);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a018be FUN_148a018be body=96 status=ok
// SIG undefined FUN_148a018be(void)

void FUN_148a018be(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  cVar2 = FUN_144729dda(param_1 + 0x30);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x30);
    lVar3 = FUN_140391a3c(uVar1);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar4 = &PTR_FUN_14b477988;
      FUN_14039144e(lVar3,puVar4);
      return;
    }
  }
  return;
}



// FUNCTION 148a0191e FUN_148a0191e body=179 status=ok
// SIG undefined FUN_148a0191e(void)

void FUN_148a0191e(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[0x5b];
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1[0x5a] + (longlong)(iVar1 + -1) * 4);
    if ((int)uVar2 < 0) {
      return;
    }
  }
  if ((int)uVar2 < (int)param_1[0x57]) {
    lVar4 = (longlong)*(int *)(param_1[0x56] + 0x28 + (ulonglong)uVar2 * 0x30);
    if (lVar4 != 0) {
      lVar3 = *(longlong *)(param_1[0x56] + 0x20 + (ulonglong)uVar2 * 0x30);
      lVar4 = lVar3 + lVar4 * 0x18;
      do {
        (**(code **)(*param_1 + 0x100))(param_1,lVar3,lVar3 + 8);
        lVar3 = lVar3 + 0x18;
      } while (lVar3 != lVar4);
      iVar1 = (int)param_1[0x5b];
    }
    if (1 < iVar1) {
      *(int *)(param_1 + 0x5b) = iVar1 + -1;
      FUN_14479f406(param_1 + 0x5a);
                    /* WARNING: Could not recover jumptable at 0x000148a019ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x180))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148a019f0 FUN_148a019f0 body=315 status=ok
// SIG undefined FUN_148a019f0(void)

void FUN_148a019f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  wchar_t *_Str;
  size_t sVar5;
  undefined1 auStack_208 [40];
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  char local_1c8;
  undefined1 local_1c0 [256];
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_208;
  cVar3 = FUN_144729dda(param_1 + 0x30);
  if (cVar3 != '\0') {
    uVar4 = FUN_14479d2ce(param_1 + 0x30);
    iVar1 = *(int *)(param_1 + 0x2a8);
    lVar2 = *(longlong *)(param_1 + 0x2a0);
    local_1e0 = local_1c0;
    local_1c8 = '\0';
    local_1d0 = local_c0;
    local_1d8 = local_1e0;
    _Str = (wchar_t *)FUN_140c7f682(param_1,L"TriggerCohEscapeInput",&local_1e0);
    local_40 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_38 = 0;
      local_30 = 0;
    }
    else {
      sVar5 = wcslen(_Str);
      FUN_1446fe5a4(local_c0,_Str,sVar5 & 0xffffffff,1);
    }
    FUN_145d33556(uVar4,local_38,lVar2 + (longlong)iVar1 * 8 + -8);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_1c8 == '\x01') {
      FUN_1400020a8(local_1e0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a01b2c FUN_148a01b2c body=66 status=ok
// SIG undefined FUN_148a01b2c(void)

void FUN_148a01b2c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2a8);
  *(uint *)(param_1 + 0x2a8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2ac) < iVar1 + 1U) {
    FUN_1446f84a2((longlong *)(param_1 + 0x2a0),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 148a01b6e FUN_148a01b6e body=74 status=ok
// SIG undefined FUN_148a01b6e(void)

void FUN_148a01b6e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = &local_18;
  local_18 = param_2;
  FUN_1408ff3be(param_1 + 0x2a0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a01bba FUN_148a01bba body=1 status=ok
// SIG undefined FUN_148a01bba(void)

void FUN_148a01bba(void)

{
  return;
}



// FUNCTION 148a01bbc FUN_148a01bbc body=10 status=ok
// SIG undefined FUN_148a01bbc(void)

void FUN_148a01bbc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148a01bbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x128))();
  return;
}



// FUNCTION 148a01bc6 FUN_148a01bc6 body=29 status=ok
// SIG undefined FUN_148a01bc6(void)

undefined8 FUN_148a01bc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a01be4 FUN_148a01be4 body=38 status=ok
// SIG undefined FUN_148a01be4(void)

undefined8 FUN_148a01be4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGbxUICohtmlEvent",1);
  return param_2;
}



// FUNCTION 148a01c0c FUN_148a01c0c body=38 status=ok
// SIG undefined FUN_148a01c0c(void)

undefined8 FUN_148a01c0c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGbxUIEvent_SelfContained",1);
  return param_2;
}



// FUNCTION 148a01c32 FUN_148a01c32 body=38 status=ok
// SIG undefined FUN_148a01c32(void)

undefined8 FUN_148a01c32(undefined8 param_1,int param_2)

{
  FUN_148a07b68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a01c5a FUN_148a01c5a body=46 status=ok
// SIG undefined FUN_148a01c5a(void)

longlong * FUN_148a01c5a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x20);
  return param_2;
}



// FUNCTION 148a01c8c FUN_148a01c8c body=46 status=ok
// SIG undefined FUN_148a01c8c(void)

longlong * FUN_148a01c8c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x38);
  return param_2;
}



// FUNCTION 148a01cd4 FUN_148a01cd4 body=58 status=ok
// SIG undefined FUN_148a01cd4(void)

void FUN_148a01cd4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xc0);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b4773c0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  return;
}



// FUNCTION 148a01d0e FUN_148a01d0e body=42 status=ok
// SIG undefined FUN_148a01d0e(void)

void FUN_148a01d0e(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b4773c0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  return;
}



// FUNCTION 148a01d5c FUN_148a01d5c body=85 status=ok
// SIG undefined FUN_148a01d5c(void)

undefined1 FUN_148a01d5c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    FUN_144a787a6(param_2 + 0xb0,param_3 + 0xb0);
    param_2 = param_2 + 0xc0;
    param_3 = param_3 + 0xc0;
  }
  return 1;
}



// FUNCTION 148a01dda FUN_148a01dda body=59 status=ok
// SIG undefined FUN_148a01dda(void)

undefined8 FUN_148a01dda(longlong *param_1)

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



// FUNCTION 148a01e26 FUN_148a01e26 body=65 status=ok
// SIG undefined FUN_148a01e26(void)

void FUN_148a01e26(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *param_2 = &PTR_FUN_14b4773c0;
    if (param_2[0x16] != 0) {
      FUN_1400020a8();
    }
    FUN_140fe7f26(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148a01eb6 FUN_148a01eb6 body=68 status=ok
// SIG undefined FUN_148a01eb6(void)

undefined8 * FUN_148a01eb6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4773c0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a01efa FUN_148a01efa body=55 status=ok
// SIG undefined FUN_148a01efa(void)

void FUN_148a01efa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb92530 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb92530 = FUN_140002ddd(FUN_14656d973,uVar1,L"OakUIData_TestingWidget");
  }
  return;
}



// FUNCTION 148a01f32 FUN_148a01f32 body=44 status=ok
// SIG undefined FUN_148a01f32(void)

void FUN_148a01f32(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



// FUNCTION 148a01f74 FUN_148a01f74 body=67 status=ok
// SIG undefined FUN_148a01f74(void)

undefined1 FUN_148a01f74(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_1489fc572(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 148a01fe0 FUN_148a01fe0 body=59 status=ok
// SIG undefined FUN_148a01fe0(void)

undefined8 FUN_148a01fe0(longlong *param_1)

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



// FUNCTION 148a02026 FUN_148a02026 body=37 status=ok
// SIG undefined FUN_148a02026(void)

void FUN_148a02026(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[5] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 148a020ae FUN_148a020ae body=63 status=ok
// SIG undefined FUN_148a020ae(void)

undefined1 FUN_148a020ae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a021ca(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 148a02116 FUN_148a02116 body=59 status=ok
// SIG undefined FUN_148a02116(void)

undefined8 FUN_148a02116(longlong *param_1)

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



// FUNCTION 148a02162 FUN_148a02162 body=38 status=ok
// SIG undefined FUN_148a02162(void)

void FUN_148a02162(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_1408d57a6(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 148a021ca FUN_148a021ca body=335 status=ok
// SIG undefined FUN_148a021ca(void)

longlong FUN_148a021ca(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  plVar1 = *(longlong **)(param_2 + 0x20);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x20) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  plVar1 = *(longlong **)(param_2 + 0x30);
  plVar2 = *(longlong **)(param_1 + 0x30);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x30) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  plVar1 = *(longlong **)(param_2 + 0x40);
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x40) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  plVar1 = *(longlong **)(param_2 + 0x50);
  plVar2 = *(longlong **)(param_1 + 0x50);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x50) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  uVar3 = *(undefined4 *)(param_2 + 0x6c);
  uVar4 = *(undefined4 *)(param_2 + 0x70);
  uVar5 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  *(undefined4 *)(param_1 + 0x74) = uVar5;
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  FUN_148a0231a(param_1 + 0x88,param_2 + 0x88);
  return param_1;
}



// FUNCTION 148a0231a FUN_148a0231a body=93 status=ok
// SIG undefined FUN_148a0231a(void)

undefined8 * FUN_148a0231a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1408d5896(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148a02378(param_1,iVar1);
      FUN_148a023eb(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148a02378 FUN_148a02378 body=115 status=ok
// SIG undefined FUN_148a02378(void)

void FUN_148a02378(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148a023eb FUN_148a023eb body=52 status=ok
// SIG undefined FUN_148a023eb(void)

void FUN_148a023eb(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148a02420(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 148a02420 FUN_148a02420 body=105 status=ok
// SIG undefined FUN_148a02420(void)

undefined8 * FUN_148a02420(undefined8 *param_1,undefined8 *param_2)

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
  FUN_14593ec7a(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 148a0249e FUN_148a0249e body=29 status=ok
// SIG undefined FUN_148a0249e(void)

undefined8 FUN_148a0249e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a024bc FUN_148a024bc body=38 status=ok
// SIG undefined FUN_148a024bc(void)

undefined8 FUN_148a024bc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGbxUIEvent_QuitGame",1);
  return param_2;
}



// FUNCTION 148a024e2 FUN_148a024e2 body=31 status=ok
// SIG undefined FUN_148a024e2(void)

undefined8 FUN_148a024e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a02524 FUN_148a02524 body=93 status=ok
// SIG undefined FUN_148a02524(void)

void FUN_148a02524(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b477a80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b477a10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148a02582 FUN_148a02582 body=93 status=ok
// SIG undefined FUN_148a02582(void)

void FUN_148a02582(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b477a80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b477a10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148a025e0 FUN_148a025e0 body=126 status=ok
// SIG undefined FUN_148a025e0(void)

void FUN_148a025e0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b477a80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b477a10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a0264f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a0265e FUN_148a0265e body=14 status=ok
// SIG undefined FUN_148a0265e(void)

undefined1 FUN_148a0265e(longlong param_1)

{
  (**(code **)(param_1 + 0x18))();
  return 1;
}



// FUNCTION 148a0266e FUN_148a0266e body=31 status=ok
// SIG undefined FUN_148a0266e(void)

undefined8 FUN_148a0266e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a026aa FUN_148a026aa body=93 status=ok
// SIG undefined FUN_148a026aa(void)

void FUN_148a026aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b477af0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a02708 FUN_148a02708 body=93 status=ok
// SIG undefined FUN_148a02708(void)

void FUN_148a02708(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b477af0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a02766 FUN_148a02766 body=126 status=ok
// SIG undefined FUN_148a02766(void)

void FUN_148a02766(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b477af0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a027d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a027f0 FUN_148a027f0 body=31 status=ok
// SIG undefined FUN_148a027f0(void)

undefined8 FUN_148a027f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a0282c FUN_148a0282c body=93 status=ok
// SIG undefined FUN_148a0282c(void)

void FUN_148a0282c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b477bd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a0288a FUN_148a0288a body=126 status=ok
// SIG undefined FUN_148a0288a(void)

void FUN_148a0288a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b477bd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a028f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a02908 FUN_148a02908 body=21 status=ok
// SIG undefined FUN_148a02908(void)

undefined8 FUN_148a02908(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148a0291e FUN_148a0291e body=42 status=ok
// SIG undefined FUN_148a0291e(void)

Property * FUN_148a0291e(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148a02948 FUN_148a02948 body=58 status=ok
// SIG undefined FUN_148a02948(void)

longlong FUN_148a02948(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 148a02982 FUN_148a02982 body=149 status=ok
// SIG undefined FUN_148a02982(void)

longlong FUN_148a02982(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x18);
    local_38 = 0;
    local_40 = 0;
    (**(code **)(*param_2 + 0x1c8))(param_2,&local_40,&local_38);
    FUN_1409ee323(local_40,local_38,iVar1 + param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a02a18 FUN_148a02a18 body=119 status=ok
// SIG undefined FUN_148a02a18(void)

longlong FUN_148a02a18(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x18);
  local_30 = 0;
  local_38 = 0;
  (**(code **)(*param_2 + 0x1c8))(param_2,&local_38,&local_30);
  FUN_1409ee323(local_38,local_30,iVar1 + param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a02a90 FUN_148a02a90 body=65 status=ok
// SIG undefined FUN_148a02a90(void)

void FUN_148a02a90(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b477c80;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148a02ad2 FUN_148a02ad2 body=20 status=ok
// SIG undefined FUN_148a02ad2(void)

undefined8 FUN_148a02ad2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a02ae6 FUN_148a02ae6 body=20 status=ok
// SIG undefined FUN_148a02ae6(void)

undefined8 FUN_148a02ae6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a02afa FUN_148a02afa body=20 status=ok
// SIG undefined FUN_148a02afa(void)

undefined8 FUN_148a02afa(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a02b0e FUN_148a02b0e body=41 status=ok
// SIG undefined FUN_148a02b0e(void)

void FUN_148a02b0e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x80))();
  FUN_144936510(uVar1,param_3,param_4);
  return;
}



// FUNCTION 148a02b38 FUN_148a02b38 body=20 status=ok
// SIG undefined FUN_148a02b38(void)

undefined8 FUN_148a02b38(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a02b4c FUN_148a02b4c body=20 status=ok
// SIG undefined FUN_148a02b4c(void)

undefined8 FUN_148a02b4c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a02b78 FUN_148a02b78 body=42 status=ok
// SIG undefined FUN_148a02b78(void)

Property * FUN_148a02b78(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148a02ba2 FUN_148a02ba2 body=41 status=ok
// SIG undefined FUN_148a02ba2(void)

longlong FUN_148a02ba2(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x128))(param_2,*(undefined4 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148a02bcc FUN_148a02bcc body=66 status=ok
// SIG undefined FUN_148a02bcc(void)

longlong FUN_148a02bcc(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x220))(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 148a02c0e FUN_148a02c0e body=40 status=ok
// SIG undefined FUN_148a02c0e(void)

longlong FUN_148a02c0e(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x220))(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148a02c36 FUN_148a02c36 body=65 status=ok
// SIG undefined FUN_148a02c36(void)

void FUN_148a02c36(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b477d10;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148a02c78 FUN_148a02c78 body=31 status=ok
// SIG undefined FUN_148a02c78(void)

undefined8 FUN_148a02c78(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x80))();
  *(bool *)param_3 = *piVar1 != 0;
  return 1;
}



// FUNCTION 148a02c98 FUN_148a02c98 body=33 status=ok
// SIG undefined FUN_148a02c98(void)

undefined8 FUN_148a02c98(longlong *param_1,undefined8 param_2,double *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x80))();
  *param_3 = (double)*piVar1;
  return 1;
}



// FUNCTION 148a02cba FUN_148a02cba body=33 status=ok
// SIG undefined FUN_148a02cba(void)

undefined8 FUN_148a02cba(longlong *param_1,undefined8 param_2,float *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x80))();
  *param_3 = (float)*piVar1;
  return 1;
}



// FUNCTION 148a02cdc FUN_148a02cdc body=42 status=ok
// SIG undefined FUN_148a02cdc(void)

void FUN_148a02cdc(longlong *param_1,undefined8 param_2,char *param_3,__uint64 *param_4)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x80))();
                    /* WARNING: Could not recover jumptable at 0x000148a02cff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cohtml::CoherentToString<int>::Invoke(*piVar1,param_3,param_4);
  return;
}



// FUNCTION 148a02d06 FUN_148a02d06 body=118 status=ok
// SIG undefined FUN_148a02d06(void)

undefined8 FUN_148a02d06(longlong *param_1,undefined8 param_2,float *param_3)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(**(code **)(*param_1 + 0x80))();
  uVar1 = *puVar2;
  param_3[3] = (float)(uVar1 >> 0x18) / 255.0;
  param_3[2] = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
  param_3[1] = (float)(uVar1 >> 8 & 0xff) / 255.0;
  *param_3 = (float)(uVar1 & 0xff) / 255.0;
  return 1;
}



// FUNCTION 148a02d7c FUN_148a02d7c body=20 status=ok
// SIG undefined FUN_148a02d7c(void)

undefined8 FUN_148a02d7c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a02da8 FUN_148a02da8 body=42 status=ok
// SIG undefined FUN_148a02da8(void)

Property * FUN_148a02da8(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148a02dd2 FUN_148a02dd2 body=58 status=ok
// SIG undefined FUN_148a02dd2(void)

longlong FUN_148a02dd2(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 148a02e0c FUN_148a02e0c body=149 status=ok
// SIG undefined FUN_148a02e0c(void)

longlong FUN_148a02e0c(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x18);
    local_38 = 0;
    local_40 = 0;
    (**(code **)(*param_2 + 0x1c8))(param_2,&local_40,&local_38);
    FUN_1409ee323(local_40,local_38,iVar1 + param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a02ea2 FUN_148a02ea2 body=119 status=ok
// SIG undefined FUN_148a02ea2(void)

longlong FUN_148a02ea2(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x18);
  local_30 = 0;
  local_38 = 0;
  (**(code **)(*param_2 + 0x1c8))(param_2,&local_38,&local_30);
  FUN_1409ee323(local_38,local_30,iVar1 + param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a02f1a FUN_148a02f1a body=65 status=ok
// SIG undefined FUN_148a02f1a(void)

void FUN_148a02f1a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b477da0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148a02f68 FUN_148a02f68 body=211 status=ok
// SIG undefined FUN_148a02f68(void)

void FUN_148a02f68(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar8 = false;
  do {
    lVar6 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar6) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar6), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar8) {
          return;
        }
        goto LAB_148a0300d;
      }
    }
    uVar5 = uVar7 - 1;
    bVar8 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148a0300d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148a0303c FUN_148a0303c body=42 status=ok
// SIG undefined FUN_148a0303c(void)

Property * FUN_148a0303c(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148a03066 FUN_148a03066 body=58 status=ok
// SIG undefined FUN_148a03066(void)

longlong FUN_148a03066(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 148a030a0 FUN_148a030a0 body=149 status=ok
// SIG undefined FUN_148a030a0(void)

longlong FUN_148a030a0(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x18);
    local_38 = 0;
    local_40 = 0;
    (**(code **)(*param_2 + 0x1c8))(param_2,&local_40,&local_38);
    FUN_1409ee323(local_40,local_38,iVar1 + param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a03136 FUN_148a03136 body=119 status=ok
// SIG undefined FUN_148a03136(void)

longlong FUN_148a03136(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x18);
  local_30 = 0;
  local_38 = 0;
  (**(code **)(*param_2 + 0x1c8))(param_2,&local_38,&local_30);
  FUN_1409ee323(local_38,local_30,iVar1 + param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a031ae FUN_148a031ae body=65 status=ok
// SIG undefined FUN_148a031ae(void)

void FUN_148a031ae(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b477e30;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148a031fc FUN_148a031fc body=42 status=ok
// SIG undefined FUN_148a031fc(void)

Property * FUN_148a031fc(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148a03226 FUN_148a03226 body=41 status=ok
// SIG undefined FUN_148a03226(void)

longlong FUN_148a03226(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x140))(param_2,*(undefined1 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148a03250 FUN_148a03250 body=66 status=ok
// SIG undefined FUN_148a03250(void)

longlong FUN_148a03250(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x238))(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 148a03292 FUN_148a03292 body=40 status=ok
// SIG undefined FUN_148a03292(void)

longlong FUN_148a03292(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x238))(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148a032ba FUN_148a032ba body=65 status=ok
// SIG undefined FUN_148a032ba(void)

void FUN_148a032ba(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b477ec0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148a032fc FUN_148a032fc body=29 status=ok
// SIG undefined FUN_148a032fc(void)

undefined8 FUN_148a032fc(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(**(code **)(*param_1 + 0x80))();
  *param_3 = *puVar1;
  return 1;
}



// FUNCTION 148a0331a FUN_148a0331a body=20 status=ok
// SIG undefined FUN_148a0331a(void)

undefined8 FUN_148a0331a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a0332e FUN_148a0332e body=20 status=ok
// SIG undefined FUN_148a0332e(void)

undefined8 FUN_148a0332e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a03342 FUN_148a03342 body=42 status=ok
// SIG undefined FUN_148a03342(void)

void FUN_148a03342(longlong *param_1,undefined8 param_2,char *param_3,__uint64 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x80))();
                    /* WARNING: Could not recover jumptable at 0x000148a03365. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cohtml::CoherentToString<bool>::Invoke(*(bool *)uVar1,param_3,param_4);
  return;
}



// FUNCTION 148a0336c FUN_148a0336c body=20 status=ok
// SIG undefined FUN_148a0336c(void)

undefined8 FUN_148a0336c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a03380 FUN_148a03380 body=20 status=ok
// SIG undefined FUN_148a03380(void)

undefined8 FUN_148a03380(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a033ac FUN_148a033ac body=42 status=ok
// SIG undefined FUN_148a033ac(void)

Property * FUN_148a033ac(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148a033d6 FUN_148a033d6 body=39 status=ok
// SIG undefined FUN_148a033d6(void)

longlong FUN_148a033d6(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xe8))(param_2,*(undefined4 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148a033fe FUN_148a033fe body=66 status=ok
// SIG undefined FUN_148a033fe(void)

longlong FUN_148a033fe(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1d8))(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 148a03440 FUN_148a03440 body=40 status=ok
// SIG undefined FUN_148a03440(void)

longlong FUN_148a03440(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x1d8))(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148a03468 FUN_148a03468 body=65 status=ok
// SIG undefined FUN_148a03468(void)

void FUN_148a03468(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b477f50;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148a034aa FUN_148a034aa body=41 status=ok
// SIG undefined FUN_148a034aa(void)

undefined8 FUN_148a034aa(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  float *pfVar1;
  
  pfVar1 = (float *)(**(code **)(*param_1 + 0x80))();
  *(bool *)param_3 = *pfVar1 != 0.0;
  return 1;
}



// FUNCTION 148a034d4 FUN_148a034d4 body=33 status=ok
// SIG undefined FUN_148a034d4(void)

undefined8 FUN_148a034d4(longlong *param_1,undefined8 param_2,double *param_3)

{
  float *pfVar1;
  
  pfVar1 = (float *)(**(code **)(*param_1 + 0x80))();
  *param_3 = (double)*pfVar1;
  return 1;
}



// FUNCTION 148a034f6 FUN_148a034f6 body=33 status=ok
// SIG undefined FUN_148a034f6(void)

undefined8 FUN_148a034f6(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x80))();
  *param_3 = *puVar1;
  return 1;
}



// FUNCTION 148a03518 FUN_148a03518 body=44 status=ok
// SIG undefined FUN_148a03518(void)

void FUN_148a03518(longlong *param_1,undefined8 param_2,char *param_3,__uint64 *param_4)

{
  float *pfVar1;
  
  pfVar1 = (float *)(**(code **)(*param_1 + 0x80))();
                    /* WARNING: Could not recover jumptable at 0x000148a0353d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cohtml::CoherentToString<float>::Invoke(*pfVar1,param_3,param_4);
  return;
}



// FUNCTION 148a03544 FUN_148a03544 body=20 status=ok
// SIG undefined FUN_148a03544(void)

undefined8 FUN_148a03544(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a03558 FUN_148a03558 body=20 status=ok
// SIG undefined FUN_148a03558(void)

undefined8 FUN_148a03558(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a03584 FUN_148a03584 body=42 status=ok
// SIG undefined FUN_148a03584(void)

Property * FUN_148a03584(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148a035ae FUN_148a035ae body=58 status=ok
// SIG undefined FUN_148a035ae(void)

longlong FUN_148a035ae(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 148a035e8 FUN_148a035e8 body=149 status=ok
// SIG undefined FUN_148a035e8(void)

longlong FUN_148a035e8(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x18);
    local_38 = 0;
    local_40 = 0;
    (**(code **)(*param_2 + 0x1c8))(param_2,&local_40,&local_38);
    FUN_1409ee323(local_40,local_38,iVar1 + param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0367e FUN_148a0367e body=119 status=ok
// SIG undefined FUN_148a0367e(void)

longlong FUN_148a0367e(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x18);
  local_30 = 0;
  local_38 = 0;
  (**(code **)(*param_2 + 0x1c8))(param_2,&local_38,&local_30);
  FUN_1409ee323(local_38,local_30,iVar1 + param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a036f6 FUN_148a036f6 body=65 status=ok
// SIG undefined FUN_148a036f6(void)

void FUN_148a036f6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b477fe0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148a03744 FUN_148a03744 body=42 status=ok
// SIG undefined FUN_148a03744(void)

Property * FUN_148a03744(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148a0376e FUN_148a0376e body=35 status=ok
// SIG undefined FUN_148a0376e(void)

longlong FUN_148a0376e(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_140ba31e2(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148a03792 FUN_148a03792 body=64 status=ok
// SIG undefined FUN_148a03792(void)

longlong FUN_148a03792(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    FUN_148a03a51(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 148a037d2 FUN_148a037d2 body=35 status=ok
// SIG undefined FUN_148a037d2(void)

longlong FUN_148a037d2(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_148a03a51(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148a037f6 FUN_148a037f6 body=65 status=ok
// SIG undefined FUN_148a037f6(void)

void FUN_148a037f6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b478070;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148a03838 FUN_148a03838 body=20 status=ok
// SIG undefined FUN_148a03838(void)

undefined8 FUN_148a03838(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a0384c FUN_148a0384c body=20 status=ok
// SIG undefined FUN_148a0384c(void)

undefined8 FUN_148a0384c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a03860 FUN_148a03860 body=20 status=ok
// SIG undefined FUN_148a03860(void)

undefined8 FUN_148a03860(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a03874 FUN_148a03874 body=20 status=ok
// SIG undefined FUN_148a03874(void)

undefined8 FUN_148a03874(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a03888 FUN_148a03888 body=20 status=ok
// SIG undefined FUN_148a03888(void)

undefined8 FUN_148a03888(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a0389c FUN_148a0389c body=20 status=ok
// SIG undefined FUN_148a0389c(void)

undefined8 FUN_148a0389c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a038b0 FUN_148a038b0 body=92 status=ok
// SIG undefined FUN_148a038b0(void)

undefined8
FUN_148a038b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_148a03920(param_2);
  uVar2 = (**(code **)(*param_1 + 0x80))(param_1,param_3);
  *param_4 = 0x10;
  *(undefined1 **)(param_4 + 2) = &LAB_148a0398f;
  *(undefined1 **)(param_4 + 4) = &LAB_148a03994;
  *(undefined8 *)(param_4 + 6) = uVar1;
  *(undefined8 *)(param_4 + 8) = uVar2;
  return 1;
}



// FUNCTION 148a03920 FUN_148a03920 body=111 status=ok
// SIG undefined FUN_148a03920(void)

undefined8 FUN_148a03920(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x88))();
    (**(code **)(*param_1 + 0x80))(param_1,4);
    (**(code **)(*param_1 + 0x28))(param_1);
    FUN_140ba3297(param_1,0);
    (**(code **)(*param_1 + 0x48))(param_1,0);
    (**(code **)(*param_1 + 0x80))(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000148a03982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148a039ba FUN_148a039ba body=89 status=ok
// SIG undefined FUN_148a039ba(void)

void FUN_148a039ba(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (longlong)param_3 * 0x18 + *param_2;
    (**(code **)(*param_1 + 0x28))(param_1);
    FUN_140ba3297(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000148a039fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1,lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148a03a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))(param_1);
  return;
}



// FUNCTION 148a03a13 FUN_148a03a13 body=62 status=ok
// SIG undefined FUN_148a03a13(void)

void FUN_148a03a13(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 * 0x18 + *param_2;
  (**(code **)(*param_1 + 0x38))();
  FUN_140ba3297(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000148a03a4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,lVar1);
  return;
}



// FUNCTION 148a03a51 FUN_148a03a51 body=168 status=ok
// SIG undefined FUN_148a03a51(void)

void FUN_148a03a51(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = (**(code **)(*param_1 + 0x250))();
  FUN_148a03afa(param_2,uVar1 & 0xffffffff);
  if (uVar1 != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      (**(code **)(*param_1 + 600))(param_1,uVar3);
      lVar4 = (lVar2 >> 0x20) * 0x18 + *param_2;
      (**(code **)(*param_1 + 0x38))(param_1);
      FUN_140ba3297(param_1,lVar4);
      (**(code **)(*param_1 + 0x48))(param_1,lVar4);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x100000000;
    } while (uVar1 != uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000148a03af2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}



// FUNCTION 148a03afa FUN_148a03afa body=122 status=ok
// SIG undefined FUN_148a03afa(void)

void FUN_148a03afa(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14041b1f4(param_1,iVar1);
    }
    FUN_148a03b75((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148a03bb2(param_1,param_2,iVar1 - param_2);
    FUN_148a03c14(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148a03b75 FUN_148a03b75 body=61 status=ok
// SIG undefined FUN_148a03b75(void)

void FUN_148a03b75(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140056680(param_1,&DAT_149dfb77a);
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 148a03bb2 FUN_148a03bb2 body=98 status=ok
// SIG undefined FUN_148a03bb2(void)

void FUN_148a03bb2(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x18 + *param_1);
  FUN_1403e75f6(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148a03c14 FUN_148a03c14 body=62 status=ok
// SIG undefined FUN_148a03c14(void)

void FUN_148a03c14(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148a03c52(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 148a03c52 FUN_148a03c52 body=112 status=ok
// SIG undefined FUN_148a03c52(void)

ulonglong FUN_148a03c52(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148a03c8c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_148a03c8c:
  return param_2 & 0xffffffff;
}



// FUNCTION 148a03cc2 FUN_148a03cc2 body=42 status=ok
// SIG undefined FUN_148a03cc2(void)

Property * FUN_148a03cc2(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148a03cec FUN_148a03cec body=41 status=ok
// SIG undefined FUN_148a03cec(void)

longlong FUN_148a03cec(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x140))(param_2,*(undefined1 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148a03d16 FUN_148a03d16 body=66 status=ok
// SIG undefined FUN_148a03d16(void)

longlong FUN_148a03d16(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x238))(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 148a03d58 FUN_148a03d58 body=40 status=ok
// SIG undefined FUN_148a03d58(void)

longlong FUN_148a03d58(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x238))(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148a03d80 FUN_148a03d80 body=65 status=ok
// SIG undefined FUN_148a03d80(void)

void FUN_148a03d80(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b478100;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148a03dce FUN_148a03dce body=42 status=ok
// SIG undefined FUN_148a03dce(void)

Property * FUN_148a03dce(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148a03df8 FUN_148a03df8 body=39 status=ok
// SIG undefined FUN_148a03df8(void)

longlong FUN_148a03df8(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xe8))(param_2,*(undefined4 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148a03e20 FUN_148a03e20 body=66 status=ok
// SIG undefined FUN_148a03e20(void)

longlong FUN_148a03e20(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1d8))(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 148a03e62 FUN_148a03e62 body=40 status=ok
// SIG undefined FUN_148a03e62(void)

longlong FUN_148a03e62(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x1d8))(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148a03e8a FUN_148a03e8a body=65 status=ok
// SIG undefined FUN_148a03e8a(void)

void FUN_148a03e8a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b478190;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148a03ed8 FUN_148a03ed8 body=30 status=ok
// SIG undefined FUN_148a03ed8(void)

void * FUN_148a03ed8(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148a03efc FUN_148a03efc body=62 status=ok
// SIG undefined FUN_148a03efc(void)

void FUN_148a03efc(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b478240;
  FUN_148a03f3a(puVar1 + 1,param_1 + 8);
  return;
}



// FUNCTION 148a03f3a FUN_148a03f3a body=148 status=ok
// SIG undefined FUN_148a03f3a(void)

undefined8 * FUN_148a03f3a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
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
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1418b8abe(param_1 + 2,iVar1);
    FUN_140af8cf5(param_1[2],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148a03fe1 FUN_148a03fe1 body=85 status=ok
// SIG undefined FUN_148a03fe1(void)

void FUN_148a03fe1(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (longlong)param_3 * 0x40 + *param_2;
    (**(code **)(*param_1 + 0x28))(param_1);
    FUN_140f087b9(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000148a04020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1,lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148a0402f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))(param_1);
  return;
}



// FUNCTION 148a0403b FUN_148a0403b body=58 status=ok
// SIG undefined FUN_148a0403b(void)

void FUN_148a0403b(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 * 0x40 + *param_2;
  (**(code **)(*param_1 + 0x38))();
  FUN_140f087b9(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000148a04072. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,lVar1);
  return;
}



// FUNCTION 148a04076 FUN_148a04076 body=96 status=ok
// SIG undefined FUN_148a04076(void)

undefined8 * FUN_148a04076(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b47b0c0;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  return puVar1;
}



// FUNCTION 148a040d6 FUN_148a040d6 body=40 status=ok
// SIG undefined FUN_148a040d6(void)

Property * FUN_148a040d6(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148a040fe FUN_148a040fe body=58 status=ok
// SIG undefined FUN_148a040fe(void)

longlong FUN_148a040fe(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  FUN_1489e9619(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148a04138 FUN_148a04138 body=35 status=ok
// SIG undefined FUN_148a04138(void)

longlong FUN_148a04138(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_1489e9619(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148a0415c FUN_148a0415c body=62 status=ok
// SIG undefined FUN_148a0415c(void)

longlong FUN_148a0415c(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    FUN_140f67fee(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 148a0419a FUN_148a0419a body=35 status=ok
// SIG undefined FUN_148a0419a(void)

longlong FUN_148a0419a(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_140f67fee(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148a041be FUN_148a041be body=65 status=ok
// SIG undefined FUN_148a041be(void)

void FUN_148a041be(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b478260;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148a04200 FUN_148a04200 body=20 status=ok
// SIG undefined FUN_148a04200(void)

undefined8 FUN_148a04200(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a04214 FUN_148a04214 body=20 status=ok
// SIG undefined FUN_148a04214(void)

undefined8 FUN_148a04214(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a04228 FUN_148a04228 body=20 status=ok
// SIG undefined FUN_148a04228(void)

undefined8 FUN_148a04228(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a0423c FUN_148a0423c body=41 status=ok
// SIG undefined FUN_148a0423c(void)

void FUN_148a0423c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x80))();
  FUN_148a042a6(uVar1,param_3,param_4);
  return;
}



// FUNCTION 148a04266 FUN_148a04266 body=20 status=ok
// SIG undefined FUN_148a04266(void)

undefined8 FUN_148a04266(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a0427a FUN_148a0427a body=20 status=ok
// SIG undefined FUN_148a0427a(void)

undefined8 FUN_148a0427a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a042a6 FUN_148a042a6 body=106 status=ok
// SIG undefined FUN_148a042a6(void)

undefined4 FUN_148a042a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(param_1,local_38);
  uVar1 = FUN_144936510(local_38,param_2,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a04312 FUN_148a04312 body=40 status=ok
// SIG undefined FUN_148a04312(void)

Property * FUN_148a04312(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148a0433a FUN_148a0433a body=58 status=ok
// SIG undefined FUN_148a0433a(void)

longlong FUN_148a0433a(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  FUN_148a0450c(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148a04374 FUN_148a04374 body=35 status=ok
// SIG undefined FUN_148a04374(void)

longlong FUN_148a04374(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_148a0450c(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148a04398 FUN_148a04398 body=64 status=ok
// SIG undefined FUN_148a04398(void)

longlong FUN_148a04398(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    FUN_148a04697(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 148a043d8 FUN_148a043d8 body=35 status=ok
// SIG undefined FUN_148a043d8(void)

longlong FUN_148a043d8(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_148a04697(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148a043fc FUN_148a043fc body=65 status=ok
// SIG undefined FUN_148a043fc(void)

void FUN_148a043fc(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4782f0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148a0443e FUN_148a0443e body=20 status=ok
// SIG undefined FUN_148a0443e(void)

undefined8 FUN_148a0443e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a04452 FUN_148a04452 body=20 status=ok
// SIG undefined FUN_148a04452(void)

undefined8 FUN_148a04452(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a04466 FUN_148a04466 body=20 status=ok
// SIG undefined FUN_148a04466(void)

undefined8 FUN_148a04466(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a0447a FUN_148a0447a body=20 status=ok
// SIG undefined FUN_148a0447a(void)

undefined8 FUN_148a0447a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a0448e FUN_148a0448e body=20 status=ok
// SIG undefined FUN_148a0448e(void)

undefined8 FUN_148a0448e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a044a2 FUN_148a044a2 body=20 status=ok
// SIG undefined FUN_148a044a2(void)

undefined8 FUN_148a044a2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148a044be FUN_148a044be body=66 status=ok
// SIG undefined FUN_148a044be(void)

bool FUN_148a044be(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x80))(param_1,param_3);
  if (lVar1 != 0) {
    *param_4 = 9;
    *(code **)(param_4 + 2) = FUN_148a048ba;
    *(undefined8 *)(param_4 + 4) = 0;
    *(longlong *)(param_4 + 6) = lVar1;
  }
  return lVar1 != 0;
}



// FUNCTION 148a0450c FUN_148a0450c body=282 status=ok
// SIG undefined FUN_148a0450c(void)

void FUN_148a0450c(longlong *param_1,longlong *param_2)

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
  (**(code **)(*param_1 + 0x170))
            (param_1,(longlong)(int)param_2[1] - (longlong)*(int *)((longlong)param_2 + 0x34));
  local_30 = param_2 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_58 = local_38;
  local_50 = local_30;
  local_60 = param_2;
  if (iStack_24 < (int)local_30[3]) {
    do {
      FUN_148a04627(param_1,*local_60 + (longlong)iStack_44 * 0x14,
                    *local_60 + (longlong)iStack_44 * 0x14 + 8);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  (**(code **)(*param_1 + 0x178))(param_1);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a04627 FUN_148a04627 body=112 status=ok
// SIG undefined FUN_148a04627(void)

void FUN_148a04627(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x88))();
  if (iVar1 == 2) {
    (**(code **)(*param_1 + 0x80))(param_1,3);
  }
  FUN_14140a72a(param_1,param_2);
  (**(code **)(*param_1 + 0x80))(param_1,iVar1);
  (**(code **)(*param_1 + 0xe8))(param_1,*param_3);
                    /* WARNING: Could not recover jumptable at 0x000148a04690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}



// FUNCTION 148a04697 FUN_148a04697 body=199 status=ok
// SIG undefined FUN_148a04697(void)

void FUN_148a04697(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [36];
  undefined1 local_64 [4];
  undefined8 local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_1 + 0x268))();
  if (lVar1 != 0) {
    do {
      local_60 = 0;
      (**(code **)(*param_1 + 0x270))(param_1);
      FUN_140f67fee(param_1,&local_60);
      (**(code **)(*param_1 + 0x1d8))(param_1,local_64);
      local_58 = &local_60;
      local_50 = local_64;
      FUN_148a04760(param_2,local_44,&local_58);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  (**(code **)(*param_1 + 0x278))(param_1);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a04760 FUN_148a04760 body=345 status=ok
// SIG undefined FUN_148a04760(void)

undefined4 * FUN_148a04760(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1408cb62c(param_1,local_40);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_38 = uVar2;
  *(undefined4 *)(local_38 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_38 + 0xc) = 0xffffffff;
  local_44 = local_40[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = 0;
  cVar3 = FUN_1417b4c5a(param_1,uVar8,local_38);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)(local_38 + 2) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_38 + 0xc) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1408cb1a2(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a048ba FUN_148a048ba body=192 status=ok
// SIG undefined FUN_148a048ba(void)

longlong * FUN_148a048ba(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446ddc76(&local_18,param_2,1);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)local_18 >> 0x10);
    uVar4 = (uint)local_18 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)local_18 >> 0x20) + ((uint)local_18 << 0x10 | uVar4) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x14);
        if (*plVar3 == local_18) goto LAB_148a048eb;
        iVar2 = *(int *)((longlong)plVar3 + 0xc);
      } while (iVar2 != -1);
    }
  }
  plVar3 = (longlong *)0x0;
LAB_148a048eb:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3 + 1;
}



// FUNCTION 148a0497c FUN_148a0497c body=31 status=ok
// SIG undefined FUN_148a0497c(void)

undefined8 FUN_148a0497c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a049b6 FUN_148a049b6 body=29 status=ok
// SIG undefined FUN_148a049b6(void)

bool FUN_148a049b6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a049d4 FUN_148a049d4 body=26 status=ok
// SIG undefined FUN_148a049d4(void)

bool FUN_148a049d4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a049ee FUN_148a049ee body=24 status=ok
// SIG undefined FUN_148a049ee(void)

bool FUN_148a049ee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148a04a06 FUN_148a04a06 body=93 status=ok
// SIG undefined FUN_148a04a06(void)

void FUN_148a04a06(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b478380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a04a64 FUN_148a04a64 body=93 status=ok
// SIG undefined FUN_148a04a64(void)

void FUN_148a04a64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b478380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a04ac2 FUN_148a04ac2 body=126 status=ok
// SIG undefined FUN_148a04ac2(void)

void FUN_148a04ac2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b478380;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a04b31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}


