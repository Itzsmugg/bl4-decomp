// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148be7466 FUN_148be7466 body=122 status=ok
// SIG undefined FUN_148be7466(void)

undefined8 FUN_148be7466(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      if (*(char *)(param_3 + -8) == '\0') {
        *(undefined1 *)(param_2 + -8) = 0;
        *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      }
      FUN_1486c70ac(param_2,param_3);
      puVar2 = (undefined8 *)(param_3 + 0x10);
      puVar3 = (undefined8 *)(param_2 + 0x10);
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70);
      param_3 = param_3 + 0x90;
      param_2 = param_2 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148be7508 FUN_148be7508 body=59 status=ok
// SIG undefined FUN_148be7508(void)

undefined8 FUN_148be7508(longlong *param_1)

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



// FUNCTION 148be7554 FUN_148be7554 body=38 status=ok
// SIG undefined FUN_148be7554(void)

void FUN_148be7554(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_1412de796(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 148be75c8 FUN_148be75c8 body=57 status=ok
// SIG undefined FUN_148be75c8(void)

void FUN_148be75c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5fa0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5fa0 = FUN_140002ddd(FUN_1465c5dd9,uVar1,L"OakThumbnailSceneConfig");
  }
  return;
}



// FUNCTION 148be7602 FUN_148be7602 body=48 status=ok
// SIG undefined FUN_148be7602(void)

void FUN_148be7602(undefined8 param_1,longlong param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  FUN_140056680(param_2 + 0x10,&DAT_149dfb77a);
  return;
}



// FUNCTION 148be7632 FUN_148be7632 body=48 status=ok
// SIG undefined FUN_148be7632(void)

void FUN_148be7632(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148be7678 FUN_148be7678 body=67 status=ok
// SIG undefined FUN_148be7678(void)

undefined1 FUN_148be7678(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148be76e4 FUN_148be76e4 body=59 status=ok
// SIG undefined FUN_148be76e4(void)

undefined8 FUN_148be76e4(longlong *param_1)

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



// FUNCTION 148be7782 FUN_148be7782 body=51 status=ok
// SIG undefined FUN_148be7782(void)

void FUN_148be7782(longlong *param_1)

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



// FUNCTION 148be77d4 FUN_148be77d4 body=63 status=ok
// SIG undefined FUN_148be77d4(void)

undefined1 FUN_148be77d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148be7902(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 148be783c FUN_148be783c body=59 status=ok
// SIG undefined FUN_148be783c(void)

undefined8 FUN_148be783c(longlong *param_1)

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



// FUNCTION 148be7888 FUN_148be7888 body=40 status=ok
// SIG undefined FUN_148be7888(void)

void FUN_148be7888(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_1458246ce(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 148be7902 FUN_148be7902 body=520 status=ok
// SIG undefined FUN_148be7902(void)

longlong FUN_148be7902(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  plVar1 = *(longlong **)(param_2 + 0x48);
  plVar2 = *(longlong **)(param_1 + 0x48);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x48) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  plVar1 = *(longlong **)(param_2 + 0x58);
  plVar2 = *(longlong **)(param_1 + 0x58);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x58) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  plVar1 = *(longlong **)(param_2 + 0x68);
  plVar2 = *(longlong **)(param_1 + 0x68);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x68) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  plVar1 = *(longlong **)(param_2 + 0x78);
  plVar2 = *(longlong **)(param_1 + 0x78);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x78) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  plVar1 = *(longlong **)(param_2 + 0x88);
  plVar2 = *(longlong **)(param_1 + 0x88);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x88) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  FUN_148be7b0a(param_1 + 0x98,param_2 + 0x98);
  *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  if ((*(longlong *)(param_1 + 0xb0) != *(longlong *)(param_2 + 0xb0)) ||
     (*(int *)(param_1 + 0xb8) != *(int *)(param_2 + 0xb8))) {
    *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
  return param_1;
}



// FUNCTION 148be7b0a FUN_148be7b0a body=93 status=ok
// SIG undefined FUN_148be7b0a(void)

undefined8 * FUN_148be7b0a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145824796(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148be7b68(param_1,iVar1);
      FUN_148be7bca(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148be7b68 FUN_148be7b68 body=98 status=ok
// SIG undefined FUN_148be7b68(void)

void FUN_148be7b68(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148be7bca FUN_148be7bca body=52 status=ok
// SIG undefined FUN_148be7bca(void)

void FUN_148be7bca(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148be7bfe(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 148be7bfe FUN_148be7bfe body=156 status=ok
// SIG undefined FUN_148be7bfe(void)

undefined8 * FUN_148be7bfe(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148be7c9c FUN_148be7c9c body=104 status=ok
// SIG undefined FUN_148be7c9c(void)

undefined8 FUN_148be7c9c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_148ee93d0(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148be7d06 FUN_148be7d06 body=28 status=ok
// SIG undefined FUN_148be7d06(void)

undefined8 FUN_148be7d06(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148be7d34 FUN_148be7d34 body=59 status=ok
// SIG undefined FUN_148be7d34(void)

void FUN_148be7d34(undefined8 param_1,longlong *param_2)

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
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 1;
  return;
}



// FUNCTION 148be7d86 FUN_148be7d86 body=121 status=ok
// SIG undefined FUN_148be7d86(void)

undefined8 FUN_148be7d86(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(param_3 + lVar4);
      plVar3 = *(longlong **)(param_2 + lVar4);
      if (plVar3 != plVar2) {
        *(longlong **)(param_2 + lVar4) = plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      lVar1 = param_3 + lVar4;
      *(undefined4 *)(param_2 + 8 + lVar4) = *(undefined4 *)(lVar1 + 8);
      *(undefined8 *)(param_2 + 0x10 + lVar4) = *(undefined8 *)(lVar1 + 0x10);
      *(undefined1 *)(param_2 + 0x18 + lVar4) = *(undefined1 *)(lVar1 + 0x18);
      lVar4 = lVar4 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148be7e28 FUN_148be7e28 body=59 status=ok
// SIG undefined FUN_148be7e28(void)

undefined8 FUN_148be7e28(longlong *param_1)

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



// FUNCTION 148be7e6e FUN_148be7e6e body=38 status=ok
// SIG undefined FUN_148be7e6e(void)

void FUN_148be7e6e(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[4] == '\x01') {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 148be7ef6 FUN_148be7ef6 body=63 status=ok
// SIG undefined FUN_148be7ef6(void)

undefined1 FUN_148be7ef6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148be80cc(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 148be7f5e FUN_148be7f5e body=59 status=ok
// SIG undefined FUN_148be7f5e(void)

undefined8 FUN_148be7f5e(longlong *param_1)

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



// FUNCTION 148be7faa FUN_148be7faa body=38 status=ok
// SIG undefined FUN_148be7faa(void)

void FUN_148be7faa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_140e00572(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148be8016 FUN_148be8016 body=182 status=ok
// SIG undefined FUN_148be8016(void)

undefined8 * FUN_148be8016(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b4677f0;
  FUN_144a5dc74(param_1 + 3);
  *param_1 = &PTR_FUN_14b4677d0;
  FUN_144a5dc74(param_1 + 5);
  *param_1 = &PTR_FUN_14b6bced0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x76) = 0;
  FUN_144a5dc74(param_1 + 0x10);
  FUN_1400b22c2(param_1 + 0x12,&DAT_149e02088);
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_1446ddc76((longlong)param_1 + 0xa4,&DAT_14b6bcef8,1);
  *(undefined2 *)((longlong)param_1 + 0xac) = 1;
  *(undefined1 *)((longlong)param_1 + 0xae) = 0;
  return param_1;
}



// FUNCTION 148be80cc FUN_148be80cc body=195 status=ok
// SIG undefined FUN_148be80cc(void)

longlong FUN_148be80cc(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_1489f8246();
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  uVar4 = *(undefined4 *)(param_2 + 0x44);
  uVar5 = *(undefined4 *)(param_2 + 0x48);
  uVar6 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  FUN_145be4752(param_1 + 0x60,param_2 + 0x60);
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x76) = *(undefined8 *)(param_2 + 0x76);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  plVar2 = *(longlong **)(param_2 + 0x80);
  plVar3 = *(longlong **)(param_1 + 0x80);
  if (plVar3 != plVar2) {
    *(longlong **)(param_1 + 0x80) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  FUN_144a787a6(param_1 + 0x90,param_2 + 0x90);
  uVar1 = *(undefined8 *)(param_2 + 0xa7);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa7) = uVar1;
  return param_1;
}



// FUNCTION 148be81ae FUN_148be81ae body=63 status=ok
// SIG undefined FUN_148be81ae(void)

undefined1 FUN_148be81ae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148be82c2(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 148be8216 FUN_148be8216 body=59 status=ok
// SIG undefined FUN_148be8216(void)

undefined8 FUN_148be8216(longlong *param_1)

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



// FUNCTION 148be8262 FUN_148be8262 body=38 status=ok
// SIG undefined FUN_148be8262(void)

void FUN_148be8262(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_140c3ad3e(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 148be82c2 FUN_148be82c2 body=249 status=ok
// SIG undefined FUN_148be82c2(void)

longlong FUN_148be82c2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  FUN_1489f8246();
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x38) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 0x7c);
  uVar4 = *(undefined4 *)(param_2 + 0x80);
  uVar5 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  *(undefined4 *)(param_1 + 0x80) = uVar4;
  *(undefined4 *)(param_1 + 0x84) = uVar5;
  FUN_144a787a6(param_1 + 0x88,param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  FUN_1489fc572(param_1 + 0xa0,param_2 + 0xa0);
  FUN_144a787a6(param_1 + 0xb8,param_2 + 0xb8);
  FUN_144a787a6(param_1 + 200,param_2 + 200);
  uVar6 = *(undefined8 *)(param_2 + 0xe0);
  uVar7 = *(undefined8 *)(param_2 + 0xe4);
  uVar8 = *(undefined8 *)(param_2 + 0xec);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = uVar6;
  *(undefined8 *)(param_1 + 0xe4) = uVar7;
  *(undefined8 *)(param_1 + 0xec) = uVar8;
  return param_1;
}



// FUNCTION 148be83da FUN_148be83da body=109 status=ok
// SIG undefined FUN_148be83da(void)

undefined8 FUN_148be83da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
    do {
      FUN_148be82c2(param_2 + -0xf8,param_3 + -0xf8);
      FUN_148be82c2(param_2,param_3);
      *(undefined1 *)(param_2 + 0xf8) = *(undefined1 *)(param_3 + 0xf8);
      param_3 = param_3 + 0x1f8;
      param_2 = param_2 + 0x1f8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148be8470 FUN_148be8470 body=59 status=ok
// SIG undefined FUN_148be8470(void)

undefined8 FUN_148be8470(longlong *param_1)

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



// FUNCTION 148be84bc FUN_148be84bc body=50 status=ok
// SIG undefined FUN_148be84bc(void)

void FUN_148be84bc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1f8) == '\x01') {
    FUN_140c3ad3e(param_2 + 0xf8);
    FUN_140c3ad3e(param_2);
    *(undefined1 *)(param_2 + 0x1f8) = 0;
  }
  return;
}



// FUNCTION 148be8550 FUN_148be8550 body=96 status=ok
// SIG undefined FUN_148be8550(void)

undefined8 FUN_148be8550(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489f8246(param_2,param_3);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
    uVar1 = *(undefined4 *)(param_3 + 0x44);
    uVar2 = *(undefined4 *)(param_3 + 0x48);
    uVar3 = *(undefined4 *)(param_3 + 0x4c);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_3 + 0x40);
    *(undefined4 *)(param_2 + 0x44) = uVar1;
    *(undefined4 *)(param_2 + 0x48) = uVar2;
    *(undefined4 *)(param_2 + 0x4c) = uVar3;
    FUN_144a787a6(param_2 + 0x50,param_3 + 0x50);
    FUN_144a787a6(param_2 + 0x60,param_3 + 0x60);
    param_2 = param_2 + 0x70;
    param_3 = param_3 + 0x70;
  }
  return 1;
}



// FUNCTION 148be85d8 FUN_148be85d8 body=59 status=ok
// SIG undefined FUN_148be85d8(void)

undefined8 FUN_148be85d8(longlong *param_1)

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



// FUNCTION 148be861e FUN_148be861e body=32 status=ok
// SIG undefined FUN_148be861e(void)

void FUN_148be861e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_148be8728(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148be8684 FUN_148be8684 body=108 status=ok
// SIG undefined FUN_148be8684(void)

undefined8 * FUN_148be8684(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b4677f0;
  FUN_144a5dc74(param_1 + 3);
  *param_1 = &PTR_FUN_14b4677d0;
  FUN_144a5dc74(param_1 + 5);
  *param_1 = &PTR_FUN_14b6bd390;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_140056680(param_1 + 0xc,&DAT_149dfb77a);
  return param_1;
}



// FUNCTION 148be86f0 FUN_148be86f0 body=55 status=ok
// SIG undefined FUN_148be86f0(void)

void FUN_148be86f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba61f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba61f0 = FUN_140002ddd(FUN_1465c629d,uVar1,L"MenuTutorialMessageDef");
  }
  return;
}



// FUNCTION 148be8728 FUN_148be8728 body=127 status=ok
// SIG undefined FUN_148be8728(void)

void FUN_148be8728(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6bd390;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b4677d0;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  *param_1 = &PTR_FUN_14b4677f0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148be87de FUN_148be87de body=88 status=ok
// SIG undefined FUN_148be87de(void)

undefined8 FUN_148be87de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      if (*(char *)(param_3 + -8) == '\0') {
        *(undefined1 *)(param_2 + -8) = 0;
        *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      }
      FUN_148be8946(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148be885e FUN_148be885e body=59 status=ok
// SIG undefined FUN_148be885e(void)

undefined8 FUN_148be885e(longlong *param_1)

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



// FUNCTION 148be88a4 FUN_148be88a4 body=32 status=ok
// SIG undefined FUN_148be88a4(void)

void FUN_148be88a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_148be88fe(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148be88fe FUN_148be88fe body=71 status=ok
// SIG undefined FUN_148be88fe(void)

void FUN_148be88fe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6bd510;
  FUN_1410e2756(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148be8946 FUN_148be8946 body=93 status=ok
// SIG undefined FUN_148be8946(void)

undefined8 * FUN_148be8946(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1410e2756(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148be89a4(param_1,iVar1);
      FUN_148be8a13(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148be89a4 FUN_148be89a4 body=111 status=ok
// SIG undefined FUN_148be89a4(void)

void FUN_148be89a4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148be8a13 FUN_148be8a13 body=52 status=ok
// SIG undefined FUN_148be8a13(void)

void FUN_148be8a13(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148be8a48(param_1,param_2);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return;
}



// FUNCTION 148be8a48 FUN_148be8a48 body=197 status=ok
// SIG undefined FUN_148be8a48(void)

undefined8 * FUN_148be8a48(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_148be8b0e();
  *param_1 = &PTR_FUN_14b6bd390;
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  uVar4 = *(undefined4 *)(param_2 + 0x48);
  uVar5 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 9) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0x58);
  pvVar2 = *(void **)(param_2 + 0x50);
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0x68);
  pvVar2 = *(void **)(param_2 + 0x60);
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148be8b0e FUN_148be8b0e body=128 status=ok
// SIG undefined FUN_148be8b0e(void)

undefined8 * FUN_148be8b0e(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 0x10) == '\0') {
    param_1[1] = *(undefined8 *)(param_2 + 8);
  }
  *param_1 = &PTR_FUN_14b4677f0;
  plVar1 = *(longlong **)(param_2 + 0x18);
  param_1[3] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *param_1 = &PTR_FUN_14b4677d0;
  plVar1 = *(longlong **)(param_2 + 0x28);
  param_1[5] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  return param_1;
}



// FUNCTION 148be8bae FUN_148be8bae body=54 status=ok
// SIG undefined FUN_148be8bae(void)

undefined1 FUN_148be8bae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148be8cfc(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148be8c0c FUN_148be8c0c body=59 status=ok
// SIG undefined FUN_148be8c0c(void)

undefined8 FUN_148be8c0c(longlong *param_1)

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



// FUNCTION 148be8c52 FUN_148be8c52 body=34 status=ok
// SIG undefined FUN_148be8c52(void)

void FUN_148be8c52(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_14583781c(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148be8cc2 FUN_148be8cc2 body=57 status=ok
// SIG undefined FUN_148be8cc2(void)

void FUN_148be8cc2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6220 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6220 = FUN_140002ddd(FUN_1465c6392,uVar1,L"GbxProfileDefaultsDisplayDataDef");
  }
  return;
}



// FUNCTION 148be8cfc FUN_148be8cfc body=154 status=ok
// SIG undefined FUN_148be8cfc(void)

longlong FUN_148be8cfc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  plVar1 = *(longlong **)(param_2 + 0x18);
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
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  plVar1 = *(longlong **)(param_2 + 0x28);
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x28) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  return param_1;
}



// FUNCTION 148be8d98 FUN_148be8d98 body=520 status=ok
// SIG undefined FUN_148be8d98(void)

undefined1 * FUN_148be8d98(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  pvVar2 = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x20,iVar1,0);
    memcpy(*(void **)(param_1 + 0x20),pvVar2,(longlong)iVar1 * 2);
  }
  FUN_1412bd664(param_1 + 0x30,param_2 + 0x30);
  *(undefined ***)(param_1 + 0x60) = &PTR_FUN_14b023b08;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)(param_2 + 0x80);
  FUN_1401f3da4(param_1 + 0x88,param_2 + 0x88);
  FUN_143c7bde4(param_1 + 0xa0,param_2 + 0xa0);
  param_1[200] = param_2[200];
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  FUN_1418c6390(param_1 + 0xf8,param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  uVar3 = *(undefined4 *)(param_2 + 0x11c);
  uVar4 = *(undefined4 *)(param_2 + 0x120);
  uVar5 = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = uVar3;
  *(undefined4 *)(param_1 + 0x120) = uVar4;
  *(undefined4 *)(param_1 + 0x124) = uVar5;
  *(undefined8 *)(param_1 + 0x128) = 0;
  iVar1 = *(int *)(param_2 + 0x130);
  pvVar2 = *(void **)(param_2 + 0x128);
  *(int *)(param_1 + 0x130) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x128,iVar1,0);
    memcpy(*(void **)(param_1 + 0x128),pvVar2,(longlong)iVar1 * 2);
  }
  puVar7 = (undefined8 *)(param_2 + 0x138);
  puVar8 = (undefined8 *)(param_1 + 0x138);
  for (lVar6 = 0xb; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  FUN_14007b350(param_1 + 0x1b0,param_2 + 0x1b0);
  return param_1;
}



// FUNCTION 148be8fe0 FUN_148be8fe0 body=59 status=ok
// SIG undefined FUN_148be8fe0(void)

undefined8 FUN_148be8fe0(longlong *param_1)

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



// FUNCTION 148be902c FUN_148be902c body=38 status=ok
// SIG undefined FUN_148be902c(void)

void FUN_148be902c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_1418c657a(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 148be90c0 FUN_148be90c0 body=63 status=ok
// SIG undefined FUN_148be90c0(void)

undefined1 FUN_148be90c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14140cdf2(param_2,param_3);
    param_3 = param_3 + 0x310;
    param_2 = param_2 + 0x310;
  }
  return 1;
}



// FUNCTION 148be9128 FUN_148be9128 body=59 status=ok
// SIG undefined FUN_148be9128(void)

undefined8 FUN_148be9128(longlong *param_1)

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



// FUNCTION 148be9174 FUN_148be9174 body=38 status=ok
// SIG undefined FUN_148be9174(void)

void FUN_148be9174(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x310) == '\x01') {
    FUN_140d97376(param_2);
    *(undefined1 *)(param_2 + 0x310) = 0;
  }
  return;
}



// FUNCTION 148be91de FUN_148be91de body=80 status=ok
// SIG undefined FUN_148be91de(void)

void FUN_148be91de(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x340);
  FUN_144007dae(param_2);
  *(undefined1 *)((longlong)param_2 + 0x310) = 0;
  *(undefined8 *)((longlong)param_2 + 0x314) = 0;
  *(undefined8 *)((longlong)param_2 + 0x319) = 0;
  *(undefined8 *)((longlong)param_2 + 0x328) = 0;
  *(undefined8 *)((longlong)param_2 + 0x330) = 0;
  *(undefined8 *)((longlong)param_2 + 0x338) = 0;
  return;
}



// FUNCTION 148be922e FUN_148be922e body=62 status=ok
// SIG undefined FUN_148be922e(void)

void FUN_148be922e(undefined8 param_1,longlong param_2)

{
  FUN_144007dae(param_2);
  *(undefined1 *)(param_2 + 0x310) = 0;
  *(undefined8 *)(param_2 + 0x314) = 0;
  *(undefined8 *)(param_2 + 0x319) = 0;
  *(undefined8 *)(param_2 + 0x328) = 0;
  *(undefined8 *)(param_2 + 0x330) = 0;
  *(undefined8 *)(param_2 + 0x338) = 0;
  return;
}



// FUNCTION 148be928a FUN_148be928a body=111 status=ok
// SIG undefined FUN_148be928a(void)

undefined1 FUN_148be928a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14140cdf2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x314);
    uVar2 = *(undefined4 *)(param_3 + 0x318);
    uVar3 = *(undefined4 *)(param_3 + 0x31c);
    *(undefined4 *)(param_2 + 0x310) = *(undefined4 *)(param_3 + 0x310);
    *(undefined4 *)(param_2 + 0x314) = uVar1;
    *(undefined4 *)(param_2 + 0x318) = uVar2;
    *(undefined4 *)(param_2 + 0x31c) = uVar3;
    *(undefined1 *)(param_2 + 800) = *(undefined1 *)(param_3 + 800);
    FUN_145a39a7c(param_2 + 0x328,param_3 + 0x328);
    param_2 = param_2 + 0x340;
    param_3 = param_3 + 0x340;
  }
  return 1;
}



// FUNCTION 148be9322 FUN_148be9322 body=59 status=ok
// SIG undefined FUN_148be9322(void)

undefined8 FUN_148be9322(longlong *param_1)

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



// FUNCTION 148be936e FUN_148be936e body=38 status=ok
// SIG undefined FUN_148be936e(void)

void FUN_148be936e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x340) == '\x01') {
    FUN_140d97376(param_2);
    *(undefined1 *)(param_2 + 0x340) = 0;
  }
  return;
}



// FUNCTION 148be93e4 FUN_148be93e4 body=138 status=ok
// SIG undefined FUN_148be93e4(void)

void FUN_148be93e4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xc0);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *param_2 = &PTR_FUN_14b6bf670;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
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
  FUN_1446f470e(param_2 + 0x12,L"R_Hand_Object",1);
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  return;
}



// FUNCTION 148be946e FUN_148be946e body=133 status=ok
// SIG undefined FUN_148be946e(void)

void FUN_148be946e(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *param_2 = &PTR_FUN_14b6bf670;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
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
  FUN_1446f470e(param_2 + 0x12,L"R_Hand_Object",1);
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  return;
}



// FUNCTION 148be9518 FUN_148be9518 body=63 status=ok
// SIG undefined FUN_148be9518(void)

undefined1 FUN_148be9518(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148be96ec(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 148be9580 FUN_148be9580 body=59 status=ok
// SIG undefined FUN_148be9580(void)

undefined8 FUN_148be9580(longlong *param_1)

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



// FUNCTION 148be95cc FUN_148be95cc body=40 status=ok
// SIG undefined FUN_148be95cc(void)

void FUN_148be95cc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_148be96a0(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 148be9642 FUN_148be9642 body=38 status=ok
// SIG undefined FUN_148be9642(void)

undefined8 FUN_148be9642(undefined8 param_1,int param_2)

{
  FUN_148be96a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148be9668 FUN_148be9668 body=55 status=ok
// SIG undefined FUN_148be9668(void)

void FUN_148be9668(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6350 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6350 = FUN_140002ddd(FUN_1465c6855,uVar1,L"NPCInteractionGlobals");
  }
  return;
}



// FUNCTION 148be96a0 FUN_148be96a0 body=76 status=ok
// SIG undefined FUN_148be96a0(void)

void FUN_148be96a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6bf670;
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



// FUNCTION 148be96ec FUN_148be96ec body=175 status=ok
// SIG undefined FUN_148be96ec(void)

longlong FUN_148be96ec(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  uVar2 = *(undefined4 *)(param_2 + 0x34);
  uVar3 = *(undefined4 *)(param_2 + 0x38);
  uVar4 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x4c);
  uVar2 = *(undefined4 *)(param_2 + 0x50);
  uVar3 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  FUN_144a787a6(param_1 + 0x58,param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  uVar1 = *(undefined4 *)(param_2 + 0x74);
  uVar2 = *(undefined4 *)(param_2 + 0x78);
  uVar3 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  FUN_144a787a6(param_1 + 0x80,param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  FUN_14185cc4c(param_1 + 0x98,param_2 + 0x98);
  FUN_14185cc4c(param_1 + 0xb0,param_2 + 0xb0);
  return param_1;
}



// FUNCTION 148be983a FUN_148be983a body=59 status=ok
// SIG undefined FUN_148be983a(void)

undefined8 FUN_148be983a(longlong *param_1)

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



// FUNCTION 148be9880 FUN_148be9880 body=43 status=ok
// SIG undefined FUN_148be9880(void)

void FUN_148be9880(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 148be98e8 FUN_148be98e8 body=28 status=ok
// SIG undefined FUN_148be98e8(void)

undefined8 FUN_148be98e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148be9970 FUN_148be9970 body=59 status=ok
// SIG undefined FUN_148be9970(void)

undefined8 FUN_148be9970(longlong *param_1)

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



// FUNCTION 148be9a10 FUN_148be9a10 body=55 status=ok
// SIG undefined FUN_148be9a10(void)

void FUN_148be9a10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba63f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba63f0 = FUN_140002ddd(FUN_1465c69df,uVar1,L"OakActionSkillResolver");
  }
  return;
}



// FUNCTION 148be9ac8 FUN_148be9ac8 body=59 status=ok
// SIG undefined FUN_148be9ac8(void)

undefined8 FUN_148be9ac8(longlong *param_1)

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



// FUNCTION 148be9b68 FUN_148be9b68 body=55 status=ok
// SIG undefined FUN_148be9b68(void)

void FUN_148be9b68(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6408 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6408 = FUN_140002ddd(FUN_1465c6a75,uVar1,L"OakActionSkillResourcePoolResolver");
  }
  return;
}



// FUNCTION 148be9be6 FUN_148be9be6 body=91 status=ok
// SIG undefined FUN_148be9be6(void)

undefined8 FUN_148be9be6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      FUN_1401f3db8(param_2 + -0x30,param_3 + -0x30);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148be9c6a FUN_148be9c6a body=59 status=ok
// SIG undefined FUN_148be9c6a(void)

undefined8 FUN_148be9c6a(longlong *param_1)

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



// FUNCTION 148be9cb0 FUN_148be9cb0 body=34 status=ok
// SIG undefined FUN_148be9cb0(void)

void FUN_148be9cb0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_145888a4e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148be9d76 FUN_148be9d76 body=101 status=ok
// SIG undefined FUN_148be9d76(void)

undefined8 FUN_148be9d76(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      FUN_1401f3db8(param_2 + -0x30,param_3 + -0x30);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148be9e04 FUN_148be9e04 body=59 status=ok
// SIG undefined FUN_148be9e04(void)

undefined8 FUN_148be9e04(longlong *param_1)

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



// FUNCTION 148be9e4a FUN_148be9e4a body=34 status=ok
// SIG undefined FUN_148be9e4a(void)

void FUN_148be9e4a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_145888a4e(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148be9ecc FUN_148be9ecc body=75 status=ok
// SIG undefined FUN_148be9ecc(void)

void FUN_148be9ecc(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  memset(param_2 + 8,0,0x81);
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_2 + 200) = 0;
  *(undefined4 *)(param_2 + 0xd0) = 0;
  return;
}



// FUNCTION 148be9f36 FUN_148be9f36 body=63 status=ok
// SIG undefined FUN_148be9f36(void)

undefined1 FUN_148be9f36(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba84c4(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 148be9f9e FUN_148be9f9e body=59 status=ok
// SIG undefined FUN_148be9f9e(void)

undefined8 FUN_148be9f9e(longlong *param_1)

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



// FUNCTION 148be9fea FUN_148be9fea body=40 status=ok
// SIG undefined FUN_148be9fea(void)

void FUN_148be9fea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_14588898c(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 148bea0c2 FUN_148bea0c2 body=59 status=ok
// SIG undefined FUN_148bea0c2(void)

undefined8 FUN_148bea0c2(longlong *param_1)

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



// FUNCTION 148bea10e FUN_148bea10e body=38 status=ok
// SIG undefined FUN_148bea10e(void)

void FUN_148bea10e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x210) == '\x01') {
    FUN_140e7b284(param_2);
    *(undefined1 *)(param_2 + 0x210) = 0;
  }
  return;
}



// FUNCTION 148bea1ec FUN_148bea1ec body=107 status=ok
// SIG undefined FUN_148bea1ec(void)

undefined8 FUN_148bea1ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      *(undefined8 *)(param_2 + -0x40) = *(undefined8 *)(param_3 + -0x40);
      uVar1 = *(undefined4 *)(param_3 + -0x34);
      uVar2 = *(undefined4 *)(param_3 + -0x30);
      uVar3 = *(undefined4 *)(param_3 + -0x2c);
      *(undefined4 *)(param_2 + -0x38) = *(undefined4 *)(param_3 + -0x38);
      *(undefined4 *)(param_2 + -0x34) = uVar1;
      *(undefined4 *)(param_2 + -0x30) = uVar2;
      *(undefined4 *)(param_2 + -0x2c) = uVar3;
      FUN_144a787a6(param_2 + -0x28,param_3 + -0x28);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bea280 FUN_148bea280 body=59 status=ok
// SIG undefined FUN_148bea280(void)

undefined8 FUN_148bea280(longlong *param_1)

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



// FUNCTION 148bea2c6 FUN_148bea2c6 body=34 status=ok
// SIG undefined FUN_148bea2c6(void)

void FUN_148bea2c6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_148bea394(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148bea336 FUN_148bea336 body=38 status=ok
// SIG undefined FUN_148bea336(void)

undefined8 FUN_148bea336(undefined8 param_1,int param_2)

{
  FUN_148bea394();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bea35c FUN_148bea35c body=55 status=ok
// SIG undefined FUN_148bea35c(void)

void FUN_148bea35c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba64e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba64e8 = FUN_140002ddd(FUN_1465c6e31,uVar1,L"OakActivityAreaStampLayoutSwitchOzone");
  }
  return;
}



// FUNCTION 148bea394 FUN_148bea394 body=58 status=ok
// SIG undefined FUN_148bea394(void)

void FUN_148bea394(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6be970;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148bea45e FUN_148bea45e body=59 status=ok
// SIG undefined FUN_148bea45e(void)

undefined8 FUN_148bea45e(longlong *param_1)

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



// FUNCTION 148bea4fe FUN_148bea4fe body=29 status=ok
// SIG undefined FUN_148bea4fe(void)

undefined8 FUN_148bea4fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bea51c FUN_148bea51c body=55 status=ok
// SIG undefined FUN_148bea51c(void)

void FUN_148bea51c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6500 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6500 = FUN_140002ddd(FUN_1465c6ec7,uVar1,L"GbxCondition_IsOzone");
  }
  return;
}



// FUNCTION 148bea5dc FUN_148bea5dc body=62 status=ok
// SIG undefined FUN_148bea5dc(void)

undefined1 FUN_148bea5dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_148bea85a(param_2,param_3);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bea642 FUN_148bea642 body=59 status=ok
// SIG undefined FUN_148bea642(void)

undefined8 FUN_148bea642(longlong *param_1)

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



// FUNCTION 148bea688 FUN_148bea688 body=34 status=ok
// SIG undefined FUN_148bea688(void)

void FUN_148bea688(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_148bea76a(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148bea6f8 FUN_148bea6f8 body=38 status=ok
// SIG undefined FUN_148bea6f8(void)

undefined8 FUN_148bea6f8(undefined8 param_1,int param_2)

{
  FUN_148bea76a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bea71e FUN_148bea71e body=55 status=ok
// SIG undefined FUN_148bea71e(void)

void FUN_148bea71e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6530 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6530 = FUN_140002ddd(FUN_1465c6f5d,uVar1,L"OakActorDefAmountToSpawnResolver");
  }
  return;
}



// FUNCTION 148bea76a FUN_148bea76a body=56 status=ok
// SIG undefined FUN_148bea76a(void)

void FUN_148bea76a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6bedb0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_148bea7a2(param_1 + 1);
  return;
}



// FUNCTION 148bea7a2 FUN_148bea7a2 body=54 status=ok
// SIG undefined FUN_148bea7a2(void)

void FUN_148bea7a2(longlong *param_1)

{
  FUN_148bea7d8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148bea7d8 FUN_148bea7d8 body=128 status=ok
// SIG undefined FUN_148bea7d8(void)

void FUN_148bea7d8(longlong param_1,int param_2)

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
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 148bea85a FUN_148bea85a body=122 status=ok
// SIG undefined FUN_148bea85a(void)

longlong FUN_148bea85a(longlong param_1,longlong param_2)

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
    FUN_148bea8d4(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148bea8d4 FUN_148bea8d4 body=219 status=ok
// SIG undefined FUN_148bea8d4(void)

undefined8 * FUN_148bea8d4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_148bea7d8(param_1,(ulonglong)uVar1);
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
          FUN_14151bf7c(puVar6,puVar4);
          puVar6[6] = puVar4[6];
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



// FUNCTION 148bea9e4 FUN_148bea9e4 body=54 status=ok
// SIG undefined FUN_148bea9e4(void)

undefined1 FUN_148bea9e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148beaa42 FUN_148beaa42 body=59 status=ok
// SIG undefined FUN_148beaa42(void)

undefined8 FUN_148beaa42(longlong *param_1)

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



// FUNCTION 148beaa88 FUN_148beaa88 body=37 status=ok
// SIG undefined FUN_148beaa88(void)

void FUN_148beaa88(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148beab4a FUN_148beab4a body=54 status=ok
// SIG undefined FUN_148beab4a(void)

undefined1 FUN_148beab4a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148beac48(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 148beaba8 FUN_148beaba8 body=59 status=ok
// SIG undefined FUN_148beaba8(void)

undefined8 FUN_148beaba8(longlong *param_1)

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



// FUNCTION 148beac48 FUN_148beac48 body=106 status=ok
// SIG undefined FUN_148beac48(void)

undefined4 * FUN_148beac48(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong lVar5;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  lVar5 = *(longlong *)(param_2 + 4);
  if (DAT_14c950c29 == 1) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(param_2 + 4);
    }
  }
  bVar4 = DAT_14c950c29;
  *(longlong *)(param_1 + 4) = lVar5;
  lVar5 = *(longlong *)(param_2 + 6);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(param_2 + 6);
    }
  }
  *(longlong *)(param_1 + 6) = lVar5;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}



// FUNCTION 148beacb4 FUN_148beacb4 body=133 status=ok
// SIG undefined FUN_148beacb4(void)

void FUN_148beacb4(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  
  memset(param_2,0,0xb8);
  *(undefined4 *)((longlong)param_2 + 0x38) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x50) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0x40) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0x48) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x68) = DAT_14c846508;
  uVar1 = DAT_14c846500;
  *(undefined8 *)((longlong)param_2 + 0x58) = DAT_14c8464f8;
  *(undefined8 *)((longlong)param_2 + 0x60) = uVar1;
  uVar1 = DAT_14c846500;
  *(undefined8 *)((longlong)param_2 + 0x70) = DAT_14c8464f8;
  *(undefined8 *)((longlong)param_2 + 0x78) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x80) = DAT_14c846508;
  *(undefined4 *)((longlong)param_2 + 0x94) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa9) = 0;
  return;
}



// FUNCTION 148beade8 FUN_148beade8 body=63 status=ok
// SIG undefined FUN_148beade8(void)

undefined1 FUN_148beade8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148beaf28(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 148beae28 FUN_148beae28 body=31 status=ok
// SIG undefined FUN_148beae28(void)

undefined1
FUN_148beae28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_148cc6934(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 148beae64 FUN_148beae64 body=59 status=ok
// SIG undefined FUN_148beae64(void)

undefined8 FUN_148beae64(longlong *param_1)

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



// FUNCTION 148beaeb0 FUN_148beaeb0 body=41 status=ok
// SIG undefined FUN_148beaeb0(void)

void FUN_148beaeb0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_145c25522(param_2 + 8);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 148beaf28 FUN_148beaf28 body=119 status=ok
// SIG undefined FUN_148beaf28(void)

undefined2 * FUN_148beaf28(undefined2 *param_1,undefined2 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = *param_2;
  FUN_148bcbf6a(param_1 + 4,param_2 + 4);
  FUN_1405b70a4(param_1 + 0xc,param_2 + 0xc);
  FUN_1405b70a4(param_1 + 0x14,param_2 + 0x14);
  puVar2 = (undefined8 *)(param_2 + 0x1c);
  puVar3 = (undefined8 *)(param_1 + 0x1c);
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x44);
  FUN_148beac48(param_1 + 0x48,param_2 + 0x48);
  return param_1;
}



// FUNCTION 148beafa0 FUN_148beafa0 body=102 status=ok
// SIG undefined FUN_148beafa0(void)

undefined4 * FUN_148beafa0(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  lVar1 = *(longlong *)(param_2 + 4);
  *(longlong *)(param_1 + 4) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar5 = DAT_14c950c29;
  lVar1 = *(longlong *)(param_2 + 6);
  *(longlong *)(param_1 + 6) = lVar1;
  if ((lVar1 != 0 & bVar5) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}



// FUNCTION 148beb006 FUN_148beb006 body=7 status=ok
// SIG undefined FUN_148beb006(void)

void FUN_148beb006(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 148beb00e FUN_148beb00e body=156 status=ok
// SIG undefined FUN_148beb00e(void)

void FUN_148beb00e(undefined8 param_1,longlong param_2)

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
  FUN_148cf0cd8(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148beb0b0 FUN_148beb0b0 body=37 status=ok
// SIG undefined FUN_148beb0b0(void)

void FUN_148beb0b0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148cef998();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148beb0d6 FUN_148beb0d6 body=156 status=ok
// SIG undefined FUN_148beb0d6(void)

void FUN_148beb0d6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148cf0314(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148beb17e FUN_148beb17e body=165 status=ok
// SIG undefined FUN_148beb17e(void)

void FUN_148beb17e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_148cef436(param_1,local_24 != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148beb27e FUN_148beb27e body=155 status=ok
// SIG undefined FUN_148beb27e(void)

void FUN_148beb27e(undefined8 param_1,longlong param_2)

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
  FUN_148cc736c(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148beb31e FUN_148beb31e body=104 status=ok
// SIG undefined FUN_148beb31e(void)

void FUN_148beb31e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba6708) {
    FUN_144b3d300(&DAT_14cba6708);
    if (DAT_14cba6708 == -1) {
      FUN_1446f470e(&DAT_14cba6700,L"BellColor",1);
      _Init_thread_footer(&DAT_14cba6708);
      return;
    }
  }
  return;
}



// FUNCTION 148beb38a FUN_148beb38a body=7 status=ok
// SIG undefined FUN_148beb38a(void)

void FUN_148beb38a(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 148beb391 FUN_148beb391 body=7 status=ok
// SIG undefined FUN_148beb391(void)

void FUN_148beb391(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 148beb398 FUN_148beb398 body=7 status=ok
// SIG undefined FUN_148beb398(void)

void FUN_148beb398(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 148beb3b6 FUN_148beb3b6 body=38 status=ok
// SIG undefined FUN_148beb3b6(void)

void FUN_148beb3b6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148ccbf9e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148beb3f8 FUN_148beb3f8 body=96 status=ok
// SIG undefined FUN_148beb3f8(void)

void FUN_148beb3f8(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_1406fa324(local_28);
  FUN_1447cd2ec(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148beb488 FUN_148beb488 body=104 status=ok
// SIG undefined FUN_148beb488(void)

void FUN_148beb488(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba67c8) {
    FUN_144b3d300(&DAT_14cba67c8);
    if (DAT_14cba67c8 == -1) {
      FUN_1446f470e(&DAT_14cba67c0,L"ArmorToRegenerate",1);
      _Init_thread_footer(&DAT_14cba67c8);
      return;
    }
  }
  return;
}



// FUNCTION 148beb4f0 FUN_148beb4f0 body=7 status=ok
// SIG undefined FUN_148beb4f0(void)

void FUN_148beb4f0(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 148beb528 FUN_148beb528 body=55 status=ok
// SIG undefined FUN_148beb528(void)

void FUN_148beb528(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6808 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6808 = FUN_14171c317(FUN_1465c838a,uVar1,L"EOakChargeDirectionType");
  }
  return;
}



// FUNCTION 148beb58c FUN_148beb58c body=148 status=ok
// SIG undefined FUN_148beb58c(void)

void FUN_148beb58c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148cd7c36(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148beb62e FUN_148beb62e body=324 status=ok
// SIG undefined FUN_148beb62e(void)

void FUN_148beb62e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_148cd7c9c(local_18,local_20,local_24 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148beb81e FUN_148beb81e body=238 status=ok
// SIG undefined FUN_148beb81e(void)

void FUN_148beb81e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148d6ccda(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148beb948 FUN_148beb948 body=45 status=ok
// SIG undefined FUN_148beb948(void)

longlong FUN_148beb948(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145fdedca(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148beb976 FUN_148beb976 body=45 status=ok
// SIG undefined FUN_148beb976(void)

longlong FUN_148beb976(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145fdedca(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148beb9b8 FUN_148beb9b8 body=45 status=ok
// SIG undefined FUN_148beb9b8(void)

longlong FUN_148beb9b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14042c3da(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148beb9e6 FUN_148beb9e6 body=45 status=ok
// SIG undefined FUN_148beb9e6(void)

longlong FUN_148beb9e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14042c3da(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148beba14 FUN_148beba14 body=45 status=ok
// SIG undefined FUN_148beba14(void)

longlong FUN_148beba14(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145aabf72(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148beba42 FUN_148beba42 body=45 status=ok
// SIG undefined FUN_148beba42(void)

longlong FUN_148beba42(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145aabf72(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148beba84 FUN_148beba84 body=45 status=ok
// SIG undefined FUN_148beba84(void)

longlong FUN_148beba84(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145cddd76(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bebab2 FUN_148bebab2 body=45 status=ok
// SIG undefined FUN_148bebab2(void)

longlong FUN_148bebab2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145cddd76(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bebae0 FUN_148bebae0 body=45 status=ok
// SIG undefined FUN_148bebae0(void)

longlong FUN_148bebae0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145e1479a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bebb0e FUN_148bebb0e body=45 status=ok
// SIG undefined FUN_148bebb0e(void)

longlong FUN_148bebb0e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145e1479a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bebb3c FUN_148bebb3c body=45 status=ok
// SIG undefined FUN_148bebb3c(void)

longlong FUN_148bebb3c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d8669a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bebb6a FUN_148bebb6a body=45 status=ok
// SIG undefined FUN_148bebb6a(void)

longlong FUN_148bebb6a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1418b9f84(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bebc04 FUN_148bebc04 body=59 status=ok
// SIG undefined FUN_148bebc04(void)

undefined8 FUN_148bebc04(longlong *param_1)

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



// FUNCTION 148bebcc4 FUN_148bebcc4 body=63 status=ok
// SIG undefined FUN_148bebcc4(void)

undefined1 FUN_148bebcc4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14036fd5a(param_2,param_3);
    param_3 = param_3 + 0x128;
    param_2 = param_2 + 0x128;
  }
  return 1;
}



// FUNCTION 148bebd2c FUN_148bebd2c body=59 status=ok
// SIG undefined FUN_148bebd2c(void)

undefined8 FUN_148bebd2c(longlong *param_1)

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



// FUNCTION 148bebd78 FUN_148bebd78 body=38 status=ok
// SIG undefined FUN_148bebd78(void)

void FUN_148bebd78(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x128) == '\x01') {
    FUN_140670012(param_2);
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return;
}



// FUNCTION 148bebe0e FUN_148bebe0e body=94 status=ok
// SIG undefined FUN_148bebe0e(void)

undefined1 FUN_148bebe0e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      *(undefined1 *)(param_2 + lVar2) = *(undefined1 *)(param_3 + lVar2);
      lVar1 = *(longlong *)(param_3 + 8 + lVar2);
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar1 = *(longlong *)(param_3 + 8 + lVar2);
        }
      }
      *(longlong *)(param_2 + 8 + lVar2) = lVar1;
      lVar2 = lVar2 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bebe94 FUN_148bebe94 body=59 status=ok
// SIG undefined FUN_148bebe94(void)

undefined8 FUN_148bebe94(longlong *param_1)

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



// FUNCTION 148bebf7c FUN_148bebf7c body=59 status=ok
// SIG undefined FUN_148bebf7c(void)

undefined8 FUN_148bebf7c(longlong *param_1)

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



// FUNCTION 148bebfc8 FUN_148bebfc8 body=38 status=ok
// SIG undefined FUN_148bebfc8(void)

void FUN_148bebfc8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x240) == '\x01') {
    FUN_140f5123e(param_2);
    *(undefined1 *)(param_2 + 0x240) = 0;
  }
  return;
}



// FUNCTION 148bec03c FUN_148bec03c body=98 status=ok
// SIG undefined FUN_148bec03c(void)

void FUN_148bec03c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148bec09e FUN_148bec09e body=85 status=ok
// SIG undefined FUN_148bec09e(void)

void FUN_148bec09e(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined1 *)(param_1 + lVar2) = *(undefined1 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
        FUN_1456cec3c();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148bec174 FUN_148bec174 body=59 status=ok
// SIG undefined FUN_148bec174(void)

undefined8 FUN_148bec174(longlong *param_1)

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



// FUNCTION 148bec214 FUN_148bec214 body=55 status=ok
// SIG undefined FUN_148bec214(void)

void FUN_148bec214(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba69c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba69c0 = FUN_140002ddd(FUN_1465c8969,uVar1,L"OakAICloakValueResolver");
  }
  return;
}



// FUNCTION 148bec274 FUN_148bec274 body=44 status=ok
// SIG undefined FUN_148bec274(void)

void FUN_148bec274(undefined8 param_1,longlong *param_2)

{
  FUN_148bec3b0(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148bec2b6 FUN_148bec2b6 body=54 status=ok
// SIG undefined FUN_148bec2b6(void)

undefined1 FUN_148bec2b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bec3fe(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148bec314 FUN_148bec314 body=59 status=ok
// SIG undefined FUN_148bec314(void)

undefined8 FUN_148bec314(longlong *param_1)

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



// FUNCTION 148bec3b0 FUN_148bec3b0 body=77 status=ok
// SIG undefined FUN_148bec3b0(void)

void FUN_148bec3b0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x20);
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
      plVar4 = plVar4 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148bec3fe FUN_148bec3fe body=95 status=ok
// SIG undefined FUN_148bec3fe(void)

undefined8 * FUN_148bec3fe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148bec3b0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148bec45e(param_1,iVar1);
      FUN_148bec4d1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bec45e FUN_148bec45e body=115 status=ok
// SIG undefined FUN_148bec45e(void)

void FUN_148bec45e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148bec4d1 FUN_148bec4d1 body=81 status=ok
// SIG undefined FUN_148bec4d1(void)

void FUN_148bec4d1(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(param_1 + 0x10 + lVar3) = *(undefined8 *)(param_2 + 0x10 + lVar3);
      uVar2 = ((undefined8 *)(param_2 + lVar3))[1];
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      ((undefined8 *)(param_1 + lVar3))[1] = uVar2;
      *(undefined8 *)(param_1 + 0x18 + lVar3) = *(undefined8 *)(param_2 + 0x18 + lVar3);
      lVar1 = *(longlong *)(param_2 + 0x20 + lVar3);
      *(longlong *)(param_1 + 0x20 + lVar3) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      *(undefined1 *)(param_1 + lVar3 + 0x28) = *(undefined1 *)(param_2 + lVar3 + 0x28);
      lVar3 = lVar3 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148bec524 FUN_148bec524 body=50 status=ok
// SIG undefined FUN_148bec524(void)

void FUN_148bec524(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_148bec3b0(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 148bec574 FUN_148bec574 body=119 status=ok
// SIG undefined FUN_148bec574(void)

undefined8 FUN_148bec574(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar2,param_3 + 8 + lVar2);
      puVar3 = (undefined8 *)(param_3 + 0x18 + lVar2);
      puVar4 = (undefined8 *)(param_2 + 0x18 + lVar2);
      for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined4 *)(param_2 + 0x88 + lVar2) = *(undefined4 *)(param_3 + 0x88 + lVar2);
      lVar2 = lVar2 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bec614 FUN_148bec614 body=59 status=ok
// SIG undefined FUN_148bec614(void)

undefined8 FUN_148bec614(longlong *param_1)

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



// FUNCTION 148bec660 FUN_148bec660 body=49 status=ok
// SIG undefined FUN_148bec660(void)

void FUN_148bec660(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 148bec6d8 FUN_148bec6d8 body=145 status=ok
// SIG undefined FUN_148bec6d8(void)

void FUN_148bec6d8(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b6c9250;
  param_1[3] = 0x3f0000003f000000;
  param_1[4] = 0x43c800003f000000;
  param_1[5] = 0x404000003fc00000;
  param_1[6] = 0x461c400000000000;
  param_1[7] = 0x457a000044fa0000;
  param_1[8] = 0x42c8000043c80000;
  param_1[9] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 10) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0x4000000040800000;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
  param_1[0xd] = 0x4076800000000000;
  param_1[0xe] = 0x4076800000000000;
  param_1[0xf] = 0x4010000040800000;
  param_1[0x10] = 0x4000000041f00000;
  *(undefined4 *)(param_1 + 0x11) = 0x3f000000;
  return;
}



// FUNCTION 148bec776 FUN_148bec776 body=75 status=ok
// SIG undefined FUN_148bec776(void)

void FUN_148bec776(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_140921afa(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bec7d8 FUN_148bec7d8 body=156 status=ok
// SIG undefined FUN_148bec7d8(void)

void FUN_148bec7d8(undefined8 param_1,longlong param_2)

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
  FUN_14422f9e6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bec8c6 FUN_148bec8c6 body=403 status=ok
// SIG undefined FUN_148bec8c6(void)

void FUN_148bec8c6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined **local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d8 = &PTR_FUN_14b6d4c90;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0xf00000d0;
  local_90 = 0;
  local_88 = 0x3f800000;
  local_80 = 0x3f800000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0xf00000d0;
  local_40 = 0;
  local_38 = 0x3f800000;
  local_30 = 0;
  uStack_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  pppuVar1 = &local_d8;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (*(code *)(*pppuVar1)[4])(pppuVar1,&local_e8);
  if (&local_e8 == param_3) {
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_e8;
    local_e8 = 0;
    *(undefined4 *)(param_3 + 1) = local_e0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_dc;
  }
  local_d8 = &PTR_FUN_14b6d4c90;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148beca5a FUN_148beca5a body=411 status=ok
// SIG undefined FUN_148beca5a(void)

void FUN_148beca5a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_108 [40];
  longlong local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined **local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0xf00000d0;
  local_88 = 0;
  local_80 = 0x3f800000;
  local_78 = 0x3f800000;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0xf00000d0;
  local_38 = 0;
  local_30 = 0x3f800000;
  local_28 = 0;
  uStack_20 = 0;
  local_d0 = &PTR_FUN_14b6d4cc0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  pppuVar1 = &local_d0;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (*(code *)(*pppuVar1)[4])(pppuVar1,&local_e0);
  if (&local_e0 == param_3) {
    if (local_e0 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_e0;
    local_e0 = 0;
    *(undefined4 *)(param_3 + 1) = local_d8;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_d4;
  }
  local_d0 = &PTR_FUN_14b6d4c90;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148becbfa FUN_148becbfa body=48 status=ok
// SIG undefined FUN_148becbfa(void)

longlong FUN_148becbfa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_1409f2bb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148becc2a FUN_148becc2a body=48 status=ok
// SIG undefined FUN_148becc2a(void)

longlong FUN_148becc2a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_1409f2bb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148becc5a FUN_148becc5a body=45 status=ok
// SIG undefined FUN_148becc5a(void)

longlong FUN_148becc5a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140b21360(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148becc88 FUN_148becc88 body=48 status=ok
// SIG undefined FUN_148becc88(void)

longlong FUN_148becc88(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140b21360(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148beccb8 FUN_148beccb8 body=48 status=ok
// SIG undefined FUN_148beccb8(void)

longlong FUN_148beccb8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140b21360(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148becce8 FUN_148becce8 body=48 status=ok
// SIG undefined FUN_148becce8(void)

longlong FUN_148becce8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140b21360(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148becd18 FUN_148becd18 body=48 status=ok
// SIG undefined FUN_148becd18(void)

longlong FUN_148becd18(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x690;
  FUN_140b21360(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148becd48 FUN_148becd48 body=48 status=ok
// SIG undefined FUN_148becd48(void)

longlong FUN_148becd48(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x698;
  FUN_140b21360(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148becd78 FUN_148becd78 body=48 status=ok
// SIG undefined FUN_148becd78(void)

longlong FUN_148becd78(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x6a0;
  FUN_140b21360(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148becde6 FUN_148becde6 body=68 status=ok
// SIG undefined FUN_148becde6(void)

undefined8 FUN_148becde6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xf8);
      lVar1 = lVar1 + 0xf8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bece52 FUN_148bece52 body=59 status=ok
// SIG undefined FUN_148bece52(void)

undefined8 FUN_148bece52(longlong *param_1)

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



// FUNCTION 148becf44 FUN_148becf44 body=54 status=ok
// SIG undefined FUN_148becf44(void)

undefined1 FUN_148becf44(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bed042(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 148becfa2 FUN_148becfa2 body=59 status=ok
// SIG undefined FUN_148becfa2(void)

undefined8 FUN_148becfa2(longlong *param_1)

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



// FUNCTION 148bed042 FUN_148bed042 body=242 status=ok
// SIG undefined FUN_148bed042(void)

undefined1 * FUN_148bed042(undefined1 *param_1,undefined1 *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  lVar2 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 8);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 8) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x10);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x10);
      bVar1 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x18);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x18);
      bVar1 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x18) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x20);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x20);
      bVar1 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x20) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x28);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x28);
      bVar1 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x28) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x30);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x30);
    }
  }
  *(longlong *)(param_1 + 0x30) = lVar2;
  return param_1;
}



// FUNCTION 148bed1b6 FUN_148bed1b6 body=59 status=ok
// SIG undefined FUN_148bed1b6(void)

undefined8 FUN_148bed1b6(longlong *param_1)

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



// FUNCTION 148bed256 FUN_148bed256 body=55 status=ok
// SIG undefined FUN_148bed256(void)

void FUN_148bed256(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6b88 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6b88 = FUN_140002ddd(FUN_1465c90b7,uVar1,L"OakAIWeaponStateValueResolver");
  }
  return;
}



// FUNCTION 148bed30a FUN_148bed30a body=59 status=ok
// SIG undefined FUN_148bed30a(void)

undefined8 FUN_148bed30a(longlong *param_1)

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



// FUNCTION 148bed428 FUN_148bed428 body=59 status=ok
// SIG undefined FUN_148bed428(void)

undefined8 FUN_148bed428(longlong *param_1)

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



// FUNCTION 148bed4c4 FUN_148bed4c4 body=55 status=ok
// SIG undefined FUN_148bed4c4(void)

void FUN_148bed4c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6c10 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6c10 = FUN_140002ddd(FUN_1465c9317,uVar1,L"OakAmmoValueResolver");
  }
  return;
}



// FUNCTION 148bed578 FUN_148bed578 body=59 status=ok
// SIG undefined FUN_148bed578(void)

undefined8 FUN_148bed578(longlong *param_1)

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



// FUNCTION 148bed614 FUN_148bed614 body=55 status=ok
// SIG undefined FUN_148bed614(void)

void FUN_148bed614(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6c40 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6c40 = FUN_140002ddd(FUN_1465c93dd,uVar1,L"OakAmmoStateResolver");
  }
  return;
}



// FUNCTION 148bed66a FUN_148bed66a body=63 status=ok
// SIG undefined FUN_148bed66a(void)

undefined1 FUN_148bed66a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bed7ca(param_2,param_3);
    param_3 = param_3 + 0x1a0;
    param_2 = param_2 + 0x1a0;
  }
  return 1;
}



// FUNCTION 148bed6d2 FUN_148bed6d2 body=59 status=ok
// SIG undefined FUN_148bed6d2(void)

undefined8 FUN_148bed6d2(longlong *param_1)

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



// FUNCTION 148bed77e FUN_148bed77e body=55 status=ok
// SIG undefined FUN_148bed77e(void)

void FUN_148bed77e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6c58 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6c58 = FUN_140002ddd(FUN_1465c9473,uVar1,L"OakAmmoWeightResolver");
  }
  return;
}



// FUNCTION 148bed7ca FUN_148bed7ca body=108 status=ok
// SIG undefined FUN_148bed7ca(void)

longlong FUN_148bed7ca(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  FUN_140d02432(param_1 + 0x10,param_2 + 0x10);
  FUN_140d02432(param_1 + 0x60,param_2 + 0x60);
  FUN_140d02432(param_1 + 0xb0,param_2 + 0xb0);
  FUN_140d02432(param_1 + 0x100,param_2 + 0x100);
  FUN_140d02432(param_1 + 0x150,param_2 + 0x150);
  return param_1;
}



// FUNCTION 148bed838 FUN_148bed838 body=37 status=ok
// SIG undefined FUN_148bed838(void)

void FUN_148bed838(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x490);
  FUN_140e47d48(param_2);
  return;
}



// FUNCTION 148bed8b6 FUN_148bed8b6 body=59 status=ok
// SIG undefined FUN_148bed8b6(void)

undefined8 FUN_148bed8b6(longlong *param_1)

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



// FUNCTION 148bed998 FUN_148bed998 body=59 status=ok
// SIG undefined FUN_148bed998(void)

undefined8 FUN_148bed998(longlong *param_1)

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



// FUNCTION 148bed9e4 FUN_148bed9e4 body=38 status=ok
// SIG undefined FUN_148bed9e4(void)

void FUN_148bed9e4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa50) == '\x01') {
    FUN_144032af6(param_2);
    *(undefined1 *)(param_2 + 0xa50) = 0;
  }
  return;
}



// FUNCTION 148beda96 FUN_148beda96 body=63 status=ok
// SIG undefined FUN_148beda96(void)

undefined1 FUN_148beda96(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bedbc0(param_2,param_3);
    param_3 = param_3 + 0x118;
    param_2 = param_2 + 0x118;
  }
  return 1;
}



// FUNCTION 148bedafe FUN_148bedafe body=59 status=ok
// SIG undefined FUN_148bedafe(void)

undefined8 FUN_148bedafe(longlong *param_1)

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



// FUNCTION 148bedb4a FUN_148bedb4a body=40 status=ok
// SIG undefined FUN_148bedb4a(void)

void FUN_148bedb4a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_148bedcec(param_2);
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  return;
}



// FUNCTION 148bedbc0 FUN_148bedbc0 body=299 status=ok
// SIG undefined FUN_148bedbc0(void)

longlong FUN_148bedbc0(longlong param_1,longlong param_2)

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
  undefined8 uVar12;
  undefined1 uVar13;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_14123bd80(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  uVar6 = *(undefined4 *)(param_2 + 0xa0);
  uVar7 = *(undefined4 *)(param_2 + 0xa4);
  uVar8 = *(undefined4 *)(param_2 + 0xa8);
  uVar9 = *(undefined4 *)(param_2 + 0xac);
  uVar10 = *(undefined4 *)(param_2 + 0xb0);
  uVar11 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar4;
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  *(undefined4 *)(param_1 + 0xa4) = uVar7;
  *(undefined4 *)(param_1 + 0xa8) = uVar8;
  *(undefined4 *)(param_1 + 0xac) = uVar9;
  *(undefined4 *)(param_1 + 0xb0) = uVar10;
  *(undefined4 *)(param_1 + 0xb4) = uVar11;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_140d2c6ac(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  uVar12 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = uVar12;
  if (param_2 == param_1) {
    return param_1;
  }
  if (*(char *)(param_2 + 0x108) == '\x01') {
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
    uVar12 = *(undefined8 *)(param_2 + 0xf8);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
    *(undefined8 *)(param_1 + 0xf8) = uVar12;
    uVar13 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x108) != '\x01') goto LAB_148bedca2;
    uVar13 = 0;
  }
  *(undefined1 *)(param_1 + 0x108) = uVar13;
LAB_148bedca2:
  if (*(char *)(param_2 + 0x114) == '\x01') {
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
    *(undefined1 *)(param_1 + 0x114) = 1;
  }
  else if (*(char *)(param_1 + 0x114) == '\x01') {
    *(undefined1 *)(param_1 + 0x114) = 0;
  }
  return param_1;
}



// FUNCTION 148bedcec FUN_148bedcec body=59 status=ok
// SIG undefined FUN_148bedcec(void)

void FUN_148bedcec(undefined8 *param_1)

{
  longlong lVar1;
  
  if (*(char *)((longlong)param_1 + 0x114) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x114) = 0;
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    *(undefined1 *)(param_1 + 0x21) = 0;
  }
  *param_1 = &PTR_FUN_14a42dce0;
  lVar1 = param_1[0x18];
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



// FUNCTION 148bedd28 FUN_148bedd28 body=42 status=ok
// SIG undefined FUN_148bedd28(void)

void FUN_148bedd28(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14b6d2450;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 148bedd90 FUN_148bedd90 body=59 status=ok
// SIG undefined FUN_148bedd90(void)

undefined8 FUN_148bedd90(longlong *param_1)

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



// FUNCTION 148bedddc FUN_148bedddc body=40 status=ok
// SIG undefined FUN_148bedddc(void)

void FUN_148bedddc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_1458bac5c(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148bede52 FUN_148bede52 body=57 status=ok
// SIG undefined FUN_148bede52(void)

void FUN_148bede52(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6cd0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6cd0 = FUN_140002ddd(FUN_1465c96fd,uVar1,L"OakAnimNode_FirstPerson");
  }
  return;
}



// FUNCTION 148bede8c FUN_148bede8c body=65 status=ok
// SIG undefined FUN_148bede8c(void)

void FUN_148bede8c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x2d0);
  FUN_140e47e4e(param_2);
  *param_2 = &PTR_FUN_14b6d6970;
  *(undefined4 *)(param_2 + 0x59) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0x2cc) = 0;
  return;
}



// FUNCTION 148bedece FUN_148bedece body=49 status=ok
// SIG undefined FUN_148bedece(void)

void FUN_148bedece(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e47e4e(param_2);
  *param_2 = &PTR_FUN_14b6d6970;
  *(undefined4 *)(param_2 + 0x59) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0x2cc) = 0;
  return;
}



// FUNCTION 148bedf24 FUN_148bedf24 body=106 status=ok
// SIG undefined FUN_148bedf24(void)

undefined8 FUN_148bedf24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x2c8;
    do {
      memcpy((void *)(param_2 + lVar1 + -0x2b8),(void *)(param_3 + lVar1 + -0x2b8),0x2b4);
      *(undefined4 *)(param_2 + lVar1) = *(undefined4 *)(param_3 + lVar1);
      *(undefined1 *)(param_2 + 4 + lVar1) = *(undefined1 *)(param_3 + 4 + lVar1);
      lVar1 = lVar1 + 0x2d0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bedfb6 FUN_148bedfb6 body=59 status=ok
// SIG undefined FUN_148bedfb6(void)

undefined8 FUN_148bedfb6(longlong *param_1)

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



// FUNCTION 148bee098 FUN_148bee098 body=59 status=ok
// SIG undefined FUN_148bee098(void)

undefined8 FUN_148bee098(longlong *param_1)

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



// FUNCTION 148bee0e4 FUN_148bee0e4 body=38 status=ok
// SIG undefined FUN_148bee0e4(void)

void FUN_148bee0e4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x6b0) == '\x01') {
    FUN_141238f76(param_2);
    *(undefined1 *)(param_2 + 0x6b0) = 0;
  }
  return;
}



// FUNCTION 148bee15a FUN_148bee15a body=57 status=ok
// SIG undefined FUN_148bee15a(void)

void FUN_148bee15a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6d00 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6d00 = FUN_140002ddd(FUN_1465c982b,uVar1,L"OakAnimNode_LegIK");
  }
  return;
}



// FUNCTION 148bee220 FUN_148bee220 body=59 status=ok
// SIG undefined FUN_148bee220(void)

undefined8 FUN_148bee220(longlong *param_1)

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



// FUNCTION 148bee310 FUN_148bee310 body=86 status=ok
// SIG undefined FUN_148bee310(void)

undefined1 FUN_148bee310(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x30);
      uVar2 = *(undefined4 *)(param_3 + -0x2c);
      uVar3 = *(undefined4 *)(param_3 + -0x28);
      uVar4 = *(undefined4 *)(param_3 + -0x24);
      uVar5 = *(undefined4 *)(param_3 + -0x20);
      uVar6 = *(undefined4 *)(param_3 + -0x1c);
      uVar7 = *(undefined4 *)(param_3 + -0x18);
      uVar8 = *(undefined4 *)(param_3 + -0x14);
      uVar9 = *(undefined4 *)(param_3 + -0x13);
      uVar10 = *(undefined4 *)(param_3 + -0xf);
      uVar11 = *(undefined4 *)(param_3 + -0xb);
      *(undefined4 *)(param_2 + -0x17) = *(undefined4 *)(param_3 + -0x17);
      *(undefined4 *)(param_2 + -0x13) = uVar9;
      *(undefined4 *)(param_2 + -0xf) = uVar10;
      *(undefined4 *)(param_2 + -0xb) = uVar11;
      *(undefined4 *)(param_2 + -0x20) = uVar5;
      *(undefined4 *)(param_2 + -0x1c) = uVar6;
      *(undefined4 *)(param_2 + -0x18) = uVar7;
      *(undefined4 *)(param_2 + -0x14) = uVar8;
      *(undefined4 *)(param_2 + -0x30) = uVar1;
      *(undefined4 *)(param_2 + -0x2c) = uVar2;
      *(undefined4 *)(param_2 + -0x28) = uVar3;
      *(undefined4 *)(param_2 + -0x24) = uVar4;
      FUN_148bee448(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bee38e FUN_148bee38e body=59 status=ok
// SIG undefined FUN_148bee38e(void)

undefined8 FUN_148bee38e(longlong *param_1)

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



// FUNCTION 148bee3d4 FUN_148bee3d4 body=38 status=ok
// SIG undefined FUN_148bee3d4(void)

void FUN_148bee3d4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148bee448 FUN_148bee448 body=89 status=ok
// SIG undefined FUN_148bee448(void)

undefined8 * FUN_148bee448(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1412405aa(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 148bee4e8 FUN_148bee4e8 body=59 status=ok
// SIG undefined FUN_148bee4e8(void)

undefined8 FUN_148bee4e8(longlong *param_1)

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



// FUNCTION 148bee52e FUN_148bee52e body=34 status=ok
// SIG undefined FUN_148bee52e(void)

void FUN_148bee52e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1457e5c9c(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148bee5a0 FUN_148bee5a0 body=55 status=ok
// SIG undefined FUN_148bee5a0(void)

void FUN_148bee5a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6d48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6d48 = FUN_140002ddd(FUN_1465c99ed,uVar1,L"OakAnimNode_LimbTwist");
  }
  return;
}



// FUNCTION 148bee65c FUN_148bee65c body=54 status=ok
// SIG undefined FUN_148bee65c(void)

undefined1 FUN_148bee65c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bee864(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148bee6ba FUN_148bee6ba body=59 status=ok
// SIG undefined FUN_148bee6ba(void)

undefined8 FUN_148bee6ba(longlong *param_1)

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



// FUNCTION 148bee700 FUN_148bee700 body=32 status=ok
// SIG undefined FUN_148bee700(void)

void FUN_148bee700(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_148bee7cc(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148bee76e FUN_148bee76e body=38 status=ok
// SIG undefined FUN_148bee76e(void)

undefined8 FUN_148bee76e(undefined8 param_1,int param_2)

{
  FUN_148bee7cc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bee794 FUN_148bee794 body=55 status=ok
// SIG undefined FUN_148bee794(void)

void FUN_148bee794(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6d60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6d60 = FUN_140002ddd(FUN_1465c9a83,uVar1,L"AnimNode_OrderRewind_Pose");
  }
  return;
}



// FUNCTION 148bee7cc FUN_148bee7cc body=151 status=ok
// SIG undefined FUN_148bee7cc(void)

void FUN_148bee7cc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b6d2dc0;
  plVar3 = (longlong *)param_1[9];
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
  plVar3 = (longlong *)param_1[7];
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
  plVar3 = (longlong *)param_1[4];
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
                    /* WARNING: Could not recover jumptable at 0x000148bee85f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148bee864 FUN_148bee864 body=123 status=ok
// SIG undefined FUN_148bee864(void)

longlong FUN_148bee864(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar4 = *(longlong *)(param_2 + 0x20);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(longlong *)(param_1 + 0x20) = lVar4;
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
  FUN_144032d02(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}



// FUNCTION 148bee926 FUN_148bee926 body=59 status=ok
// SIG undefined FUN_148bee926(void)

undefined8 FUN_148bee926(longlong *param_1)

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



// FUNCTION 148bee972 FUN_148bee972 body=38 status=ok
// SIG undefined FUN_148bee972(void)

void FUN_148bee972(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2b8) == '\x01') {
    FUN_140e2905e(param_2);
    *(undefined1 *)(param_2 + 0x2b8) = 0;
  }
  return;
}



// FUNCTION 148beeb0e FUN_148beeb0e body=98 status=ok
// SIG undefined FUN_148beeb0e(void)

void FUN_148beeb0e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148beeb70 FUN_148beeb70 body=45 status=ok
// SIG undefined FUN_148beeb70(void)

void FUN_148beeb70(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148beebd2 FUN_148beebd2 body=63 status=ok
// SIG undefined FUN_148beebd2(void)

undefined1 FUN_148beebd2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148beed04(param_2,param_3);
    param_3 = param_3 + 0xb20;
    param_2 = param_2 + 0xb20;
  }
  return 1;
}



// FUNCTION 148beec3a FUN_148beec3a body=59 status=ok
// SIG undefined FUN_148beec3a(void)

undefined8 FUN_148beec3a(longlong *param_1)

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


