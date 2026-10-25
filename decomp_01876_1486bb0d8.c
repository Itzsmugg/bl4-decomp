// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1486bb0d8 FUN_1486bb0d8 body=59 status=ok
// SIG undefined FUN_1486bb0d8(void)

undefined8 FUN_1486bb0d8(longlong *param_1)

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



// FUNCTION 1486bb11e FUN_1486bb11e body=34 status=ok
// SIG undefined FUN_1486bb11e(void)

void FUN_1486bb11e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1486bbcd6(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1486bb18e FUN_1486bb18e body=38 status=ok
// SIG undefined FUN_1486bb18e(void)

undefined8 FUN_1486bb18e(undefined8 param_1,int param_2)

{
  FUN_1486bbcd6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486bb1b4 FUN_1486bb1b4 body=55 status=ok
// SIG undefined FUN_1486bb1b4(void)

void FUN_1486bb1b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f868 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f868 = FUN_140002ddd(FUN_1464e7ae1,uVar1,L"GbxInputEventSchema_Axis_Basic");
  }
  return;
}



// FUNCTION 1486bb1ec FUN_1486bb1ec body=115 status=ok
// SIG undefined FUN_1486bb1ec(void)

longlong * FUN_1486bb1ec(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14494321d(0x88);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b18a810;
  FUN_148891aaa(plVar3 + 2);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 1486bb260 FUN_1486bb260 body=38 status=ok
// SIG undefined FUN_1486bb260(void)

undefined8 FUN_1486bb260(undefined8 param_1,int param_2)

{
  FUN_1486bbcd6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486bb286 FUN_1486bb286 body=55 status=ok
// SIG undefined FUN_1486bb286(void)

void FUN_1486bb286(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f898 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f898 = FUN_140002ddd(FUN_1464e7b10,uVar1,L"GbxInputEventSchema_Axis_Core");
  }
  return;
}



// FUNCTION 1486bb2be FUN_1486bb2be body=29 status=ok
// SIG undefined FUN_1486bb2be(void)

undefined8 FUN_1486bb2be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486bb2dc FUN_1486bb2dc body=55 status=ok
// SIG undefined FUN_1486bb2dc(void)

void FUN_1486bb2dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5fbc8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5fbc8 = FUN_140002ddd(FUN_1464e7c07,uVar1,L"GbxInputEventSchema");
  }
  return;
}



// FUNCTION 1486bb314 FUN_1486bb314 body=9 status=ok
// SIG undefined FUN_1486bb314(void)

void FUN_1486bb314(longlong param_1)

{
  FUN_1486bb9f8(param_1 + 0x10);
  return;
}



// FUNCTION 1486bb31e FUN_1486bb31e body=29 status=ok
// SIG undefined FUN_1486bb31e(void)

undefined8 FUN_1486bb31e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486bb33c FUN_1486bb33c body=102 status=ok
// SIG undefined FUN_1486bb33c(void)

longlong FUN_1486bb33c(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) ||
     (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10))) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  FUN_1486ba45a(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



// FUNCTION 1486bb3a4 FUN_1486bb3a4 body=95 status=ok
// SIG undefined FUN_1486bb3a4(void)

void FUN_1486bb3a4(undefined8 param_1,undefined8 *param_2)

{
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[0xe] = 0;
  FUN_14888e72c(param_2);
  *param_2 = &PTR_FUN_14b18a5d0;
  param_2[0xc] = &PTR_FUN_14b189ef0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  return;
}



// FUNCTION 1486bb404 FUN_1486bb404 body=50 status=ok
// SIG undefined FUN_1486bb404(void)

void FUN_1486bb404(undefined8 param_1,undefined8 *param_2)

{
  FUN_14888e72c(param_2);
  *param_2 = &PTR_FUN_14b18a5d0;
  param_2[0xc] = &PTR_FUN_14b189ef0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  return;
}



// FUNCTION 1486bb45a FUN_1486bb45a body=87 status=ok
// SIG undefined FUN_1486bb45a(void)

undefined1 FUN_1486bb45a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486bab6e(param_2,param_3);
    FUN_1486ba45a(param_2 + 0x68,param_3 + 0x68);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 1486bb4da FUN_1486bb4da body=59 status=ok
// SIG undefined FUN_1486bb4da(void)

undefined8 FUN_1486bb4da(longlong *param_1)

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



// FUNCTION 1486bb520 FUN_1486bb520 body=34 status=ok
// SIG undefined FUN_1486bb520(void)

void FUN_1486bb520(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1486bb9f8(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1486bb628 FUN_1486bb628 body=54 status=ok
// SIG undefined FUN_1486bb628(void)

undefined1 FUN_1486bb628(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486bb33c(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1486bb686 FUN_1486bb686 body=59 status=ok
// SIG undefined FUN_1486bb686(void)

undefined8 FUN_1486bb686(longlong *param_1)

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



// FUNCTION 1486bb6cc FUN_1486bb6cc body=34 status=ok
// SIG undefined FUN_1486bb6cc(void)

void FUN_1486bb6cc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1486bbcd6(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1486bb73e FUN_1486bb73e body=88 status=ok
// SIG undefined FUN_1486bb73e(void)

void FUN_1486bb73e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd8);
  FUN_14888e72c(param_2);
  param_2[0xc] = &PTR_FUN_14b189ef0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  *param_2 = &PTR_FUN_14b18ac50;
  param_2[0xf] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  return;
}



// FUNCTION 1486bb796 FUN_1486bb796 body=70 status=ok
// SIG undefined FUN_1486bb796(void)

void FUN_1486bb796(undefined8 param_1,undefined8 *param_2)

{
  FUN_14888e72c(param_2);
  param_2[0xc] = &PTR_FUN_14b189ef0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  *param_2 = &PTR_FUN_14b18ac50;
  param_2[0xf] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  return;
}



// FUNCTION 1486bb800 FUN_1486bb800 body=107 status=ok
// SIG undefined FUN_1486bb800(void)

undefined1 FUN_1486bb800(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
    do {
      FUN_1486bab6e(param_2 + -0x68,param_3 + -0x68);
      FUN_1486ba45a(param_2,param_3);
      puVar2 = (undefined8 *)(param_3 + 0x10);
      puVar3 = (undefined8 *)(param_2 + 0x10);
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      param_3 = param_3 + 0xd8;
      param_2 = param_2 + 0xd8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486bb894 FUN_1486bb894 body=59 status=ok
// SIG undefined FUN_1486bb894(void)

undefined8 FUN_1486bb894(longlong *param_1)

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



// FUNCTION 1486bb8e0 FUN_1486bb8e0 body=40 status=ok
// SIG undefined FUN_1486bb8e0(void)

void FUN_1486bb8e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_1486bb9f8(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 1486bb956 FUN_1486bb956 body=38 status=ok
// SIG undefined FUN_1486bb956(void)

undefined8 FUN_1486bb956(undefined8 param_1,int param_2)

{
  FUN_1486bb9f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486bb97c FUN_1486bb97c body=55 status=ok
// SIG undefined FUN_1486bb97c(void)

void FUN_1486bb97c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f8b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f8b0 = FUN_140002ddd(FUN_1464e7c9b,uVar1,L"GbxInputEvent_Axis_Vector");
  }
  return;
}



// FUNCTION 1486bb9f8 FUN_1486bb9f8 body=68 status=ok
// SIG undefined FUN_1486bb9f8(void)

void FUN_1486bb9f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b18a5d0;
  param_1[0xc] = &PTR_FUN_14b189ef0;
  FUN_1486ba411(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1486bad0a(param_1);
  return;
}



// FUNCTION 1486bbaf4 FUN_1486bbaf4 body=90 status=ok
// SIG undefined FUN_1486bbaf4(void)

undefined8 FUN_1486bbaf4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486bb33c(param_2,param_3);
    if ((*(longlong *)(param_2 + 0x50) != *(longlong *)(param_3 + 0x50)) ||
       (*(int *)(param_2 + 0x58) != *(int *)(param_3 + 0x58))) {
      *(longlong *)(param_2 + 0x50) = *(longlong *)(param_3 + 0x50);
      *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
      *(undefined8 *)(param_2 + 0x60) = 0;
    }
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 1486bbb76 FUN_1486bbb76 body=59 status=ok
// SIG undefined FUN_1486bbb76(void)

undefined8 FUN_1486bbb76(longlong *param_1)

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



// FUNCTION 1486bbbbc FUN_1486bbbbc body=34 status=ok
// SIG undefined FUN_1486bbbbc(void)

void FUN_1486bbbbc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_1486bbcd6(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 1486bbc2c FUN_1486bbc2c body=38 status=ok
// SIG undefined FUN_1486bbc2c(void)

undefined8 FUN_1486bbc2c(undefined8 param_1,int param_2)

{
  FUN_1486bbcd6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486bbc52 FUN_1486bbc52 body=55 status=ok
// SIG undefined FUN_1486bbc52(void)

void FUN_1486bbc52(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f8c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f8c8 = FUN_140002ddd(FUN_1464e7d2d,uVar1,L"GbxInputEventSchema_Axis_Vector");
  }
  return;
}



// FUNCTION 1486bbc8a FUN_1486bbc8a body=76 status=ok
// SIG undefined FUN_1486bbc8a(void)

undefined8 * FUN_1486bbc8a(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_1486bbd19();
  *param_2 = plVar3 + 2;
  param_2[1] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 1486bbcd6 FUN_1486bbcd6 body=67 status=ok
// SIG undefined FUN_1486bbcd6(void)

void FUN_1486bbcd6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b18a7d0;
  param_1[7] = &PTR_FUN_14b189ef0;
  FUN_1486ba411(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1486bbd19 FUN_1486bbd19 body=135 status=ok
// SIG undefined FUN_1486bbd19(void)

undefined8 * FUN_1486bbd19(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0xe8);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b18aea0;
  memset(puVar1 + 2,0,0xd8);
  FUN_14888e72c(puVar1 + 2);
  puVar1[0xe] = &PTR_FUN_14b189ef0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[2] = &PTR_FUN_14b18ac50;
  puVar1[0x11] = 0;
  puVar1[0x15] = 0;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  return puVar1;
}



// FUNCTION 1486bbdaa FUN_1486bbdaa body=29 status=ok
// SIG undefined FUN_1486bbdaa(void)

undefined8 FUN_1486bbdaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486bbdc8 FUN_1486bbdc8 body=115 status=ok
// SIG undefined FUN_1486bbdc8(void)

void FUN_1486bbdc8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x100);
  FUN_14888e72c(param_2);
  *param_2 = &PTR_FUN_14b18b020;
  param_2[0xc] = 0;
  param_2[0xe] = 0;
  param_2[0x14] = 0;
  param_2[0x16] = 0;
  param_2[0x1c] = &PTR_FUN_14b18a090;
  *(undefined4 *)((longlong)param_2 + 0xfc) = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  *(undefined1 *)(param_2 + 0x1f) = 0;
  return;
}



// FUNCTION 1486bbe3c FUN_1486bbe3c body=97 status=ok
// SIG undefined FUN_1486bbe3c(void)

void FUN_1486bbe3c(undefined8 param_1,undefined8 *param_2)

{
  FUN_14888e72c(param_2);
  *param_2 = &PTR_FUN_14b18b020;
  param_2[0xc] = 0;
  param_2[0xe] = 0;
  param_2[0x14] = 0;
  param_2[0x16] = 0;
  param_2[0x1c] = &PTR_FUN_14b18a090;
  *(undefined4 *)((longlong)param_2 + 0xfc) = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  *(undefined1 *)(param_2 + 0x1f) = 0;
  return;
}



// FUNCTION 1486bbec2 FUN_1486bbec2 body=63 status=ok
// SIG undefined FUN_1486bbec2(void)

undefined1 FUN_1486bbec2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486bc05a(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 1486bbf2a FUN_1486bbf2a body=59 status=ok
// SIG undefined FUN_1486bbf2a(void)

undefined8 FUN_1486bbf2a(longlong *param_1)

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



// FUNCTION 1486bbf76 FUN_1486bbf76 body=40 status=ok
// SIG undefined FUN_1486bbf76(void)

void FUN_1486bbf76(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_1486bda76(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 1486bbfec FUN_1486bbfec body=38 status=ok
// SIG undefined FUN_1486bbfec(void)

undefined8 FUN_1486bbfec(undefined8 param_1,int param_2)

{
  FUN_1486bda76();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486bc012 FUN_1486bc012 body=55 status=ok
// SIG undefined FUN_1486bc012(void)

void FUN_1486bc012(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f8e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f8e0 = FUN_140002ddd(FUN_1464e7dbf,uVar1,L"GbxInputEvent_Button_Core");
  }
  return;
}



// FUNCTION 1486bc05a FUN_1486bc05a body=88 status=ok
// SIG undefined FUN_1486bc05a(void)

longlong FUN_1486bc05a(longlong param_1,longlong param_2)

{
  FUN_1486bab6e();
  FUN_1486bc0b2(param_1 + 0x60,param_2 + 0x60);
  FUN_1486bc0b2(param_1 + 0xa0,param_2 + 0xa0);
  FUN_146a6959c(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  return param_1;
}



// FUNCTION 1486bc0b2 FUN_1486bc0b2 body=290 status=ok
// SIG undefined FUN_1486bc0b2(void)

longlong * FUN_1486bc0b2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486bc20a FUN_1486bc20a body=54 status=ok
// SIG undefined FUN_1486bc20a(void)

undefined1 FUN_1486bc20a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486bc31e(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 1486bc268 FUN_1486bc268 body=59 status=ok
// SIG undefined FUN_1486bc268(void)

undefined8 FUN_1486bc268(longlong *param_1)

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



// FUNCTION 1486bc2ae FUN_1486bc2ae body=34 status=ok
// SIG undefined FUN_1486bc2ae(void)

void FUN_1486bc2ae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1457deef4(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1486bc31e FUN_1486bc31e body=87 status=ok
// SIG undefined FUN_1486bc31e(void)

longlong FUN_1486bc31e(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) ||
     (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10))) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  FUN_146a6959c(param_1 + 0x28,param_2 + 0x28);
  FUN_1486bc376(param_1 + 0x38,param_2 + 0x38);
  return param_1;
}



// FUNCTION 1486bc376 FUN_1486bc376 body=93 status=ok
// SIG undefined FUN_1486bc376(void)

undefined8 * FUN_1486bc376(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140fea6e0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486bc3d4(param_1,iVar1);
      FUN_1486bc447(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486bc3d4 FUN_1486bc3d4 body=115 status=ok
// SIG undefined FUN_1486bc3d4(void)

void FUN_1486bc3d4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486bc447 FUN_1486bc447 body=52 status=ok
// SIG undefined FUN_1486bc447(void)

void FUN_1486bc447(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486bc47c(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 1486bc47c FUN_1486bc47c body=100 status=ok
// SIG undefined FUN_1486bc47c(void)

undefined8 * FUN_1486bc47c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = 0;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  uVar2 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1486bc4e0(param_1 + 4,iVar1,0);
    FUN_1486bc553(param_1[4],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1486bc4e0 FUN_1486bc4e0 body=115 status=ok
// SIG undefined FUN_1486bc4e0(void)

void FUN_1486bc4e0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486bc553 FUN_1486bc553 body=52 status=ok
// SIG undefined FUN_1486bc553(void)

void FUN_1486bc553(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1486bc588 FUN_1486bc588 body=38 status=ok
// SIG undefined FUN_1486bc588(void)

undefined8 FUN_1486bc588(undefined8 param_1,int param_2)

{
  FUN_1457deef4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486bc5ae FUN_1486bc5ae body=55 status=ok
// SIG undefined FUN_1486bc5ae(void)

void FUN_1486bc5ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f8f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f8f8 = FUN_140002ddd(FUN_1464e7e53,uVar1,L"GbxInputEventSchema_Button_Core");
  }
  return;
}



// FUNCTION 1486bc61a FUN_1486bc61a body=150 status=ok
// SIG undefined FUN_1486bc61a(void)

undefined8 FUN_1486bc61a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      FUN_1486bab6e(param_2 + lVar6,param_3 + lVar6);
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_146a6959c(lVar1 + 0x68,lVar2 + 0x68);
      FUN_1486ba45a(param_2 + lVar6 + 0x80,param_3 + lVar6 + 0x80);
      uVar3 = *(undefined4 *)(lVar2 + 0x94);
      uVar4 = *(undefined4 *)(lVar2 + 0x98);
      uVar5 = *(undefined4 *)(lVar2 + 0x9c);
      *(undefined4 *)(lVar1 + 0x90) = *(undefined4 *)(lVar2 + 0x90);
      *(undefined4 *)(lVar1 + 0x94) = uVar3;
      *(undefined4 *)(lVar1 + 0x98) = uVar4;
      *(undefined4 *)(lVar1 + 0x9c) = uVar5;
      *(undefined8 *)(lVar1 + 0xa0) = *(undefined8 *)(lVar2 + 0xa0);
      lVar6 = lVar6 + 0xa8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486bc6d8 FUN_1486bc6d8 body=59 status=ok
// SIG undefined FUN_1486bc6d8(void)

undefined8 FUN_1486bc6d8(longlong *param_1)

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



// FUNCTION 1486bc724 FUN_1486bc724 body=40 status=ok
// SIG undefined FUN_1486bc724(void)

void FUN_1486bc724(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_1486bd056(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 1486bc79c FUN_1486bc79c body=38 status=ok
// SIG undefined FUN_1486bc79c(void)

undefined8 FUN_1486bc79c(undefined8 param_1,int param_2)

{
  FUN_1486bd056();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486bc7c2 FUN_1486bc7c2 body=55 status=ok
// SIG undefined FUN_1486bc7c2(void)

void FUN_1486bc7c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f910 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f910 = FUN_140002ddd(FUN_1464e7f19,uVar1,L"GbxInputEvent_Button_DoubleTap");
  }
  return;
}



// FUNCTION 1486bc8e6 FUN_1486bc8e6 body=54 status=ok
// SIG undefined FUN_1486bc8e6(void)

undefined1 FUN_1486bc8e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486bca58(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 1486bc944 FUN_1486bc944 body=59 status=ok
// SIG undefined FUN_1486bc944(void)

undefined8 FUN_1486bc944(longlong *param_1)

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



// FUNCTION 1486bc98a FUN_1486bc98a body=34 status=ok
// SIG undefined FUN_1486bc98a(void)

void FUN_1486bc98a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1486bd214(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1486bc9fa FUN_1486bc9fa body=38 status=ok
// SIG undefined FUN_1486bc9fa(void)

undefined8 FUN_1486bc9fa(undefined8 param_1,int param_2)

{
  FUN_1486bd214();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486bca20 FUN_1486bca20 body=55 status=ok
// SIG undefined FUN_1486bca20(void)

void FUN_1486bca20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f928 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f928 = FUN_140002ddd(FUN_1464e7fab,uVar1,L"GbxInputEventSchema_Button_DoubleTap");
  }
  return;
}



// FUNCTION 1486bca58 FUN_1486bca58 body=136 status=ok
// SIG undefined FUN_1486bca58(void)

longlong FUN_1486bca58(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) ||
     (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10))) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  FUN_146a6959c(param_1 + 0x28,param_2 + 0x28);
  FUN_1486ba45a(param_1 + 0x40,param_2 + 0x40);
  if ((*(longlong *)(param_1 + 0x50) != *(longlong *)(param_2 + 0x50)) ||
     (*(int *)(param_1 + 0x58) != *(int *)(param_2 + 0x58))) {
    *(longlong *)(param_1 + 0x50) = *(longlong *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  FUN_1486bc376(param_1 + 0x68,param_2 + 0x68);
  return param_1;
}



// FUNCTION 1486bcb16 FUN_1486bcb16 body=150 status=ok
// SIG undefined FUN_1486bcb16(void)

undefined8 FUN_1486bcb16(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      FUN_1486bab6e(param_2 + lVar6,param_3 + lVar6);
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_146a6959c(lVar1 + 0x68,lVar2 + 0x68);
      FUN_1486ba45a(param_2 + lVar6 + 0x80,param_3 + lVar6 + 0x80);
      uVar3 = *(undefined4 *)(lVar2 + 0x94);
      uVar4 = *(undefined4 *)(lVar2 + 0x98);
      uVar5 = *(undefined4 *)(lVar2 + 0x9c);
      *(undefined4 *)(lVar1 + 0x90) = *(undefined4 *)(lVar2 + 0x90);
      *(undefined4 *)(lVar1 + 0x94) = uVar3;
      *(undefined4 *)(lVar1 + 0x98) = uVar4;
      *(undefined4 *)(lVar1 + 0x9c) = uVar5;
      *(undefined8 *)(lVar1 + 0xa0) = *(undefined8 *)(lVar2 + 0xa0);
      lVar6 = lVar6 + 0xa8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486bcbd4 FUN_1486bcbd4 body=59 status=ok
// SIG undefined FUN_1486bcbd4(void)

undefined8 FUN_1486bcbd4(longlong *param_1)

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



// FUNCTION 1486bcc20 FUN_1486bcc20 body=40 status=ok
// SIG undefined FUN_1486bcc20(void)

void FUN_1486bcc20(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_1486bd056(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 1486bcccc FUN_1486bcccc body=54 status=ok
// SIG undefined FUN_1486bcccc(void)

undefined1 FUN_1486bcccc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486bca58(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 1486bcd2a FUN_1486bcd2a body=59 status=ok
// SIG undefined FUN_1486bcd2a(void)

undefined8 FUN_1486bcd2a(longlong *param_1)

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



// FUNCTION 1486bcd70 FUN_1486bcd70 body=34 status=ok
// SIG undefined FUN_1486bcd70(void)

void FUN_1486bcd70(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1486bd214(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1486bcde2 FUN_1486bcde2 body=59 status=ok
// SIG undefined FUN_1486bcde2(void)

void FUN_1486bcde2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb0);
  FUN_148893df4(param_2);
  *param_2 = &PTR_FUN_14b18b9d0;
  param_2[0x15] = 0;
  return;
}



// FUNCTION 1486bce1e FUN_1486bce1e body=43 status=ok
// SIG undefined FUN_1486bce1e(void)

void FUN_1486bce1e(undefined8 param_1,undefined8 *param_2)

{
  FUN_148893df4(param_2);
  *param_2 = &PTR_FUN_14b18b9d0;
  param_2[0x15] = 0;
  return;
}



// FUNCTION 1486bce6e FUN_1486bce6e body=159 status=ok
// SIG undefined FUN_1486bce6e(void)

undefined8 FUN_1486bce6e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      FUN_1486bab6e(param_2 + lVar6,param_3 + lVar6);
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_146a6959c(lVar1 + 0x68,lVar2 + 0x68);
      FUN_1486ba45a(param_2 + lVar6 + 0x80,param_3 + lVar6 + 0x80);
      uVar3 = *(undefined4 *)(lVar2 + 0x94);
      uVar4 = *(undefined4 *)(lVar2 + 0x98);
      uVar5 = *(undefined4 *)(lVar2 + 0x9c);
      *(undefined4 *)(lVar1 + 0x90) = *(undefined4 *)(lVar2 + 0x90);
      *(undefined4 *)(lVar1 + 0x94) = uVar3;
      *(undefined4 *)(lVar1 + 0x98) = uVar4;
      *(undefined4 *)(lVar1 + 0x9c) = uVar5;
      *(undefined8 *)(lVar1 + 0xa0) = *(undefined8 *)(lVar2 + 0xa0);
      *(undefined8 *)(lVar1 + 0xa8) = *(undefined8 *)(lVar2 + 0xa8);
      lVar6 = lVar6 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486bcf36 FUN_1486bcf36 body=59 status=ok
// SIG undefined FUN_1486bcf36(void)

undefined8 FUN_1486bcf36(longlong *param_1)

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



// FUNCTION 1486bcf82 FUN_1486bcf82 body=40 status=ok
// SIG undefined FUN_1486bcf82(void)

void FUN_1486bcf82(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_1486bd056(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 1486bcff8 FUN_1486bcff8 body=38 status=ok
// SIG undefined FUN_1486bcff8(void)

undefined8 FUN_1486bcff8(undefined8 param_1,int param_2)

{
  FUN_1486bd056();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486bd01e FUN_1486bd01e body=55 status=ok
// SIG undefined FUN_1486bd01e(void)

void FUN_1486bd01e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f970 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f970 =
         FUN_140002ddd(FUN_1464e8161,uVar1,L"GbxInputEvent_Button_DoubleTap_WithDirection");
  }
  return;
}



// FUNCTION 1486bd056 FUN_1486bd056 body=114 status=ok
// SIG undefined FUN_1486bd056(void)

void FUN_1486bd056(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b18b390;
  param_1[0xf] = &PTR_FUN_14b189ef0;
  FUN_1486ba411(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  param_1[0xc] = &PTR_FUN_14b18a090;
  FUN_144a65a1e(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1486bad0a(param_1);
  return;
}



// FUNCTION 1486bd0fe FUN_1486bd0fe body=54 status=ok
// SIG undefined FUN_1486bd0fe(void)

undefined1 FUN_1486bd0fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486bca58(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 1486bd15c FUN_1486bd15c body=59 status=ok
// SIG undefined FUN_1486bd15c(void)

undefined8 FUN_1486bd15c(longlong *param_1)

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



// FUNCTION 1486bd1a2 FUN_1486bd1a2 body=34 status=ok
// SIG undefined FUN_1486bd1a2(void)

void FUN_1486bd1a2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1486bd214(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1486bd214 FUN_1486bd214 body=130 status=ok
// SIG undefined FUN_1486bd214(void)

void FUN_1486bd214(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b18b590;
  FUN_140fea6e0(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  param_1[7] = &PTR_FUN_14b189ef0;
  FUN_1486ba411(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[4] = &PTR_FUN_14b18a090;
  FUN_144a65a1e(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1486bd2ca FUN_1486bd2ca body=105 status=ok
// SIG undefined FUN_1486bd2ca(void)

undefined8 FUN_1486bd2ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
    do {
      FUN_1486bc05a(param_2 + -0x100,param_3 + -0x100);
      FUN_1486bc0b2(param_2,param_3);
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_3 + 0x40);
      param_3 = param_3 + 0x150;
      param_2 = param_2 + 0x150;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486bd35c FUN_1486bd35c body=59 status=ok
// SIG undefined FUN_1486bd35c(void)

undefined8 FUN_1486bd35c(longlong *param_1)

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



// FUNCTION 1486bd3a8 FUN_1486bd3a8 body=87 status=ok
// SIG undefined FUN_1486bd3a8(void)

void FUN_1486bd3a8(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x2a) == '\x01') {
    *param_2 = &PTR_FUN_14b18bd30;
    if (param_2[0x20] != 0) {
      plVar1 = param_2 + 0x24;
      if ((longlong *)param_2[0x22] != (longlong *)0x0) {
        plVar1 = (longlong *)param_2[0x22];
      }
      (**(code **)(*plVar1 + 0x10))();
    }
    FUN_1486bda76(param_2);
    *(undefined1 *)(param_2 + 0x2a) = 0;
  }
  return;
}



// FUNCTION 1486bd450 FUN_1486bd450 body=88 status=ok
// SIG undefined FUN_1486bd450(void)

undefined8 * FUN_1486bd450(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b18bd30;
  if (param_1[0x20] != 0) {
    plVar1 = param_1 + 0x24;
    if ((longlong *)param_1[0x22] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x22];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1486bda76(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486bd4a8 FUN_1486bd4a8 body=55 status=ok
// SIG undefined FUN_1486bd4a8(void)

void FUN_1486bd4a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f9a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f9a0 = FUN_140002ddd(FUN_1464e8285,uVar1,L"GbxInputEvent_Button_PressHoldRelease");
  }
  return;
}



// FUNCTION 1486bd514 FUN_1486bd514 body=78 status=ok
// SIG undefined FUN_1486bd514(void)

undefined1 FUN_1486bd514(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486bc31e(param_2,param_3);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_3 + 0x48);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1486bd58a FUN_1486bd58a body=59 status=ok
// SIG undefined FUN_1486bd58a(void)

undefined8 FUN_1486bd58a(longlong *param_1)

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



// FUNCTION 1486bd5d0 FUN_1486bd5d0 body=34 status=ok
// SIG undefined FUN_1486bd5d0(void)

void FUN_1486bd5d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1457deef4(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1486bd676 FUN_1486bd676 body=106 status=ok
// SIG undefined FUN_1486bd676(void)

undefined1 FUN_1486bd676(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486bc05a(param_2,param_3);
    uVar4 = *(undefined8 *)(param_3 + 0x108);
    *(undefined8 *)(param_2 + 0x100) = *(undefined8 *)(param_3 + 0x100);
    *(undefined8 *)(param_2 + 0x108) = uVar4;
    uVar1 = *(undefined4 *)(param_3 + 0x110);
    uVar2 = *(undefined4 *)(param_3 + 0x114);
    uVar3 = *(undefined4 *)(param_3 + 0x118);
    *(undefined4 *)(param_2 + 0x10c) = *(undefined4 *)(param_3 + 0x10c);
    *(undefined4 *)(param_2 + 0x110) = uVar1;
    *(undefined4 *)(param_2 + 0x114) = uVar2;
    *(undefined4 *)(param_2 + 0x118) = uVar3;
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 1486bd708 FUN_1486bd708 body=59 status=ok
// SIG undefined FUN_1486bd708(void)

undefined8 FUN_1486bd708(longlong *param_1)

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



// FUNCTION 1486bd754 FUN_1486bd754 body=40 status=ok
// SIG undefined FUN_1486bd754(void)

void FUN_1486bd754(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_1486bda76(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 1486bd800 FUN_1486bd800 body=54 status=ok
// SIG undefined FUN_1486bd800(void)

undefined1 FUN_1486bd800(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486bc31e(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 1486bd85e FUN_1486bd85e body=59 status=ok
// SIG undefined FUN_1486bd85e(void)

undefined8 FUN_1486bd85e(longlong *param_1)

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



// FUNCTION 1486bd8a4 FUN_1486bd8a4 body=34 status=ok
// SIG undefined FUN_1486bd8a4(void)

void FUN_1486bd8a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1457deef4(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1486bd94a FUN_1486bd94a body=63 status=ok
// SIG undefined FUN_1486bd94a(void)

undefined1 FUN_1486bd94a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486bc05a(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 1486bd9b2 FUN_1486bd9b2 body=59 status=ok
// SIG undefined FUN_1486bd9b2(void)

undefined8 FUN_1486bd9b2(longlong *param_1)

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



// FUNCTION 1486bd9fe FUN_1486bd9fe body=40 status=ok
// SIG undefined FUN_1486bd9fe(void)

void FUN_1486bd9fe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_1486bda76(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 1486bda76 FUN_1486bda76 body=148 status=ok
// SIG undefined FUN_1486bda76(void)

void FUN_1486bda76(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b18b020;
  param_1[0x1c] = &PTR_FUN_14b18a090;
  FUN_144a65a1e(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    plVar1 = param_1 + 0x18;
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x16];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0xc] != 0) {
    plVar1 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1486bad0a(param_1);
  return;
}



// FUNCTION 1486bdb0a FUN_1486bdb0a body=32 status=ok
// SIG undefined FUN_1486bdb0a(void)

void FUN_1486bdb0a(undefined8 param_1,undefined8 *param_2)

{
  FUN_14581f086(param_2);
  *param_2 = &PTR_FUN_14b18c4a0;
  return;
}



// FUNCTION 1486bdb40 FUN_1486bdb40 body=54 status=ok
// SIG undefined FUN_1486bdb40(void)

undefined1 FUN_1486bdb40(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486bc31e(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 1486bdb9e FUN_1486bdb9e body=59 status=ok
// SIG undefined FUN_1486bdb9e(void)

undefined8 FUN_1486bdb9e(longlong *param_1)

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



// FUNCTION 1486bdbe4 FUN_1486bdbe4 body=34 status=ok
// SIG undefined FUN_1486bdbe4(void)

void FUN_1486bdbe4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1457deef4(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1486bdc54 FUN_1486bdc54 body=55 status=ok
// SIG undefined FUN_1486bdc54(void)

void FUN_1486bdc54(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5fa18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5fa18 = FUN_140002ddd(FUN_1464e855f,uVar1,L"GbxInputEventSchema_Button_PressRelease");
  }
  return;
}



// FUNCTION 1486bdc8c FUN_1486bdc8c body=115 status=ok
// SIG undefined FUN_1486bdc8c(void)

longlong * FUN_1486bdc8c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14494321d(0x110);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b18c4c0;
  FUN_148894e76(plVar3 + 2);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 1486bdd00 FUN_1486bdd00 body=9 status=ok
// SIG undefined FUN_1486bdd00(void)

void FUN_1486bdd00(longlong param_1)

{
  FUN_1486bda76(param_1 + 0x10);
  return;
}



// FUNCTION 1486bdd0a FUN_1486bdd0a body=29 status=ok
// SIG undefined FUN_1486bdd0a(void)

undefined8 FUN_1486bdd0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486bdd28 FUN_1486bdd28 body=50 status=ok
// SIG undefined FUN_1486bdd28(void)

void FUN_1486bdd28(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b18c640;
  return;
}



// FUNCTION 1486bdd5a FUN_1486bdd5a body=43 status=ok
// SIG undefined FUN_1486bdd5a(void)

void FUN_1486bdd5a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b18c640;
  return;
}



// FUNCTION 1486bddaa FUN_1486bddaa body=62 status=ok
// SIG undefined FUN_1486bddaa(void)

undefined1 FUN_1486bddaa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_141289ada(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486bde10 FUN_1486bde10 body=59 status=ok
// SIG undefined FUN_1486bde10(void)

undefined8 FUN_1486bde10(longlong *param_1)

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



// FUNCTION 1486bde56 FUN_1486bde56 body=43 status=ok
// SIG undefined FUN_1486bde56(void)

void FUN_1486bde56(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1486bded0 FUN_1486bded0 body=52 status=ok
// SIG undefined FUN_1486bded0(void)

undefined8 * FUN_1486bded0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486bdf04 FUN_1486bdf04 body=55 status=ok
// SIG undefined FUN_1486bdf04(void)

void FUN_1486bdf04(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5fa30 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5fa30 = FUN_140002ddd(FUN_1464e85b9,uVar1,L"GbxInputFeelDef");
  }
  return;
}



// FUNCTION 1486bdf3e FUN_1486bdf3e body=72 status=ok
// SIG undefined FUN_1486bdf3e(void)

void FUN_1486bdf3e(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b18c7d0;
  param_2[3] = 0x3f0000003f000000;
  return;
}



// FUNCTION 1486bdf86 FUN_1486bdf86 body=57 status=ok
// SIG undefined FUN_1486bdf86(void)

void FUN_1486bdf86(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b18c7d0;
  param_2[3] = 0x3f0000003f000000;
  return;
}



// FUNCTION 1486bdfe4 FUN_1486bdfe4 body=85 status=ok
// SIG undefined FUN_1486bdfe4(void)

undefined8 FUN_1486bdfe4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x18 + lVar1) = *(undefined8 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486be062 FUN_1486be062 body=59 status=ok
// SIG undefined FUN_1486be062(void)

undefined8 FUN_1486be062(longlong *param_1)

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



// FUNCTION 1486be0a8 FUN_1486be0a8 body=43 status=ok
// SIG undefined FUN_1486be0a8(void)

void FUN_1486be0a8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 1486be122 FUN_1486be122 body=52 status=ok
// SIG undefined FUN_1486be122(void)

undefined8 * FUN_1486be122(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486be156 FUN_1486be156 body=55 status=ok
// SIG undefined FUN_1486be156(void)

void FUN_1486be156(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5fa48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5fa48 = FUN_140002ddd(FUN_1464e864b,uVar1,L"GbxInputFeelDef_DoubleTap");
  }
  return;
}



// FUNCTION 1486be18e FUN_1486be18e body=37 status=ok
// SIG undefined FUN_1486be18e(void)

void FUN_1486be18e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb0);
  FUN_1486be2ec(param_2);
  return;
}



// FUNCTION 1486be1d4 FUN_1486be1d4 body=68 status=ok
// SIG undefined FUN_1486be1d4(void)

undefined8 FUN_1486be1d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xb0);
      lVar1 = lVar1 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486be240 FUN_1486be240 body=59 status=ok
// SIG undefined FUN_1486be240(void)

undefined8 FUN_1486be240(longlong *param_1)

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



// FUNCTION 1486be2ec FUN_1486be2ec body=145 status=ok
// SIG undefined FUN_1486be2ec(void)

void FUN_1486be2ec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3f80000000000000;
  param_1[3] = 0x3f800000;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0x3ff0000000000000;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  uVar1 = DAT_14c846518;
  param_1[10] = DAT_14c846510;
  param_1[0xb] = uVar1;
  param_1[0xc] = DAT_14c846520;
  param_1[0xd] = 0x3ff0000000000000;
  param_1[0xe] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x13] = 0x3ff0000000000000;
  param_1[0x14] = 0x3ff0000000000000;
  param_1[0x15] = 0;
  return;
}



// FUNCTION 1486be37e FUN_1486be37e body=38 status=ok
// SIG undefined FUN_1486be37e(void)

void FUN_1486be37e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb8);
  FUN_1486be2ec((longlong)param_2 + 8);
  return;
}



// FUNCTION 1486be3cc FUN_1486be3cc body=68 status=ok
// SIG undefined FUN_1486be3cc(void)

undefined8 FUN_1486be3cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xb8);
      lVar1 = lVar1 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486be438 FUN_1486be438 body=59 status=ok
// SIG undefined FUN_1486be438(void)

undefined8 FUN_1486be438(longlong *param_1)

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



// FUNCTION 1486be4e6 FUN_1486be4e6 body=83 status=ok
// SIG undefined FUN_1486be4e6(void)

void FUN_1486be4e6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xd0);
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b18cc20;
  FUN_1486be2ec(param_2 + 3);
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  return;
}



// FUNCTION 1486be53a FUN_1486be53a body=62 status=ok
// SIG undefined FUN_1486be53a(void)

void FUN_1486be53a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b18cc20;
  FUN_1486be2ec(param_2 + 3);
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  return;
}



// FUNCTION 1486be59c FUN_1486be59c body=127 status=ok
// SIG undefined FUN_1486be59c(void)

undefined8 FUN_1486be59c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
    do {
      FUN_141289ada(param_2 + -0xc0,param_3 + -0xc0);
      memcpy((void *)(param_2 + -0xb0),(void *)(param_3 + -0xb0),0xb0);
      FUN_1486be7a2(param_2,param_3);
      param_3 = param_3 + 0xd8;
      param_2 = param_2 + 0xd8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486be644 FUN_1486be644 body=59 status=ok
// SIG undefined FUN_1486be644(void)

undefined8 FUN_1486be644(longlong *param_1)

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



// FUNCTION 1486be690 FUN_1486be690 body=40 status=ok
// SIG undefined FUN_1486be690(void)

void FUN_1486be690(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_1486be764(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 1486be706 FUN_1486be706 body=38 status=ok
// SIG undefined FUN_1486be706(void)

undefined8 FUN_1486be706(undefined8 param_1,int param_2)

{
  FUN_1486be764();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486be72c FUN_1486be72c body=55 status=ok
// SIG undefined FUN_1486be72c(void)

void FUN_1486be72c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5fa90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5fa90 = FUN_140002ddd(FUN_1464e8803,uVar1,L"GbxInputFeelDef_VectorAxis");
  }
  return;
}



// FUNCTION 1486be764 FUN_1486be764 body=62 status=ok
// SIG undefined FUN_1486be764(void)

void FUN_1486be764(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b18cc20;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1486be7a2 FUN_1486be7a2 body=88 status=ok
// SIG undefined FUN_1486be7a2(void)

undefined8 * FUN_1486be7a2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486be7fa(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xb8);
      }
    }
  }
  return param_1;
}



// FUNCTION 1486be7fa FUN_1486be7fa body=117 status=ok
// SIG undefined FUN_1486be7fa(void)

void FUN_1486be7fa(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486be8b8 FUN_1486be8b8 body=59 status=ok
// SIG undefined FUN_1486be8b8(void)

undefined8 FUN_1486be8b8(longlong *param_1)

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



// FUNCTION 1486be9c2 FUN_1486be9c2 body=59 status=ok
// SIG undefined FUN_1486be9c2(void)

undefined8 FUN_1486be9c2(longlong *param_1)

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



// FUNCTION 1486bea64 FUN_1486bea64 body=43 status=ok
// SIG undefined FUN_1486bea64(void)

void FUN_1486bea64(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b18d080;
  return;
}



// FUNCTION 1486beaa6 FUN_1486beaa6 body=62 status=ok
// SIG undefined FUN_1486beaa6(void)

undefined1 FUN_1486beaa6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_141289ada(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486beb0c FUN_1486beb0c body=59 status=ok
// SIG undefined FUN_1486beb0c(void)

undefined8 FUN_1486beb0c(longlong *param_1)

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



// FUNCTION 1486beb52 FUN_1486beb52 body=43 status=ok
// SIG undefined FUN_1486beb52(void)

void FUN_1486beb52(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1486bec2e FUN_1486bec2e body=101 status=ok
// SIG undefined FUN_1486bec2e(void)

undefined8 FUN_1486bec2e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  
  if (param_4 != 0) {
    piVar1 = (int *)(param_3 + 8);
    param_2 = param_2 + 0x20;
    do {
      if ((*(longlong *)(param_2 + -0x20) != *(longlong *)(piVar1 + -2)) ||
         (*(int *)(param_2 + -0x18) != *piVar1)) {
        *(longlong *)(param_2 + -0x20) = *(longlong *)(piVar1 + -2);
        *(int *)(param_2 + -0x18) = *piVar1;
        *(undefined8 *)(param_2 + -0x10) = 0;
      }
      FUN_146a6959c(param_2,piVar1 + 6);
      piVar1 = piVar1 + 0xc;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486becbc FUN_1486becbc body=59 status=ok
// SIG undefined FUN_1486becbc(void)

undefined8 FUN_1486becbc(longlong *param_1)

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



// FUNCTION 1486bed5a FUN_1486bed5a body=61 status=ok
// SIG undefined FUN_1486bed5a(void)

void FUN_1486bed5a(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined ***)(param_1 + 0x18) = &PTR_FUN_14b18a090;
    FUN_144a65a1e(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1486bede2 FUN_1486bede2 body=57 status=ok
// SIG undefined FUN_1486bede2(void)

void FUN_1486bede2(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x18) = &PTR_FUN_14b189ef0;
  FUN_1486ba411(*(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28));
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1486bee32 FUN_1486bee32 body=101 status=ok
// SIG undefined FUN_1486bee32(void)

undefined8 FUN_1486bee32(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  
  if (param_4 != 0) {
    piVar1 = (int *)(param_3 + 8);
    param_2 = param_2 + 0x20;
    do {
      if ((*(longlong *)(param_2 + -0x20) != *(longlong *)(piVar1 + -2)) ||
         (*(int *)(param_2 + -0x18) != *piVar1)) {
        *(longlong *)(param_2 + -0x20) = *(longlong *)(piVar1 + -2);
        *(int *)(param_2 + -0x18) = *piVar1;
        *(undefined8 *)(param_2 + -0x10) = 0;
      }
      FUN_1486ba45a(param_2,piVar1 + 6);
      piVar1 = piVar1 + 0xc;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486beec0 FUN_1486beec0 body=59 status=ok
// SIG undefined FUN_1486beec0(void)

undefined8 FUN_1486beec0(longlong *param_1)

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



// FUNCTION 1486bef5e FUN_1486bef5e body=63 status=ok
// SIG undefined FUN_1486bef5e(void)

void FUN_1486bef5e(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined ***)(param_1 + 0x18) = &PTR_FUN_14b189ef0;
    FUN_1486ba411(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1486bef9e FUN_1486bef9e body=90 status=ok
// SIG undefined FUN_1486bef9e(void)

void FUN_1486bef9e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b18d4d0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0xa004;
  param_2[5] = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0xa001;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  return;
}



// FUNCTION 1486bf00e FUN_1486bf00e body=54 status=ok
// SIG undefined FUN_1486bf00e(void)

undefined1 FUN_1486bf00e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486bf15c(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1486bf06c FUN_1486bf06c body=59 status=ok
// SIG undefined FUN_1486bf06c(void)

undefined8 FUN_1486bf06c(longlong *param_1)

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



// FUNCTION 1486bf0b2 FUN_1486bf0b2 body=34 status=ok
// SIG undefined FUN_1486bf0b2(void)

void FUN_1486bf0b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_145891840(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1486bf122 FUN_1486bf122 body=57 status=ok
// SIG undefined FUN_1486bf122(void)

void FUN_1486bf122(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5fb38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5fb38 = FUN_140002ddd(FUN_1464e8aff,uVar1,L"GbxInputRebindContextDef");
  }
  return;
}



// FUNCTION 1486bf15c FUN_1486bf15c body=142 status=ok
// SIG undefined FUN_1486bf15c(void)

longlong FUN_1486bf15c(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  if ((*(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18)) ||
     (*(int *)(param_1 + 0x20) != *(int *)(param_2 + 0x20))) {
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  if ((*(longlong *)(param_1 + 0x38) != *(longlong *)(param_2 + 0x38)) ||
     (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40))) {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  FUN_1486bf1ea(param_1 + 0x50,param_2 + 0x50);
  FUN_1486bf24a(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 1486bf1ea FUN_1486bf1ea body=95 status=ok
// SIG undefined FUN_1486bf1ea(void)

undefined8 * FUN_1486bf1ea(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458918a3(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486bf2aa(param_1,iVar1);
      FUN_1486bf31d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486bf24a FUN_1486bf24a body=95 status=ok
// SIG undefined FUN_1486bf24a(void)

undefined8 * FUN_1486bf24a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458918eb(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486bf3d2(param_1,iVar1);
      FUN_1486bf445(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486bf2aa FUN_1486bf2aa body=115 status=ok
// SIG undefined FUN_1486bf2aa(void)

void FUN_1486bf2aa(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486bf31d FUN_1486bf31d body=82 status=ok
// SIG undefined FUN_1486bf31d(void)

void FUN_1486bf31d(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined8 *)(param_1 + -0x18) = *(undefined8 *)(param_2 + -0x18);
      *(undefined4 *)(param_1 + -0x10) = *(undefined4 *)(param_2 + -0x10);
      *(undefined8 *)(param_1 + -8) = 0;
      FUN_1486bf370(param_1,param_2);
      param_1 = param_1 + 0x30;
      param_2 = param_2 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1486bf370 FUN_1486bf370 body=97 status=ok
// SIG undefined FUN_1486bf370(void)

undefined8 * FUN_1486bf370(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14b18a090;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_145732088(param_1 + 1,iVar1,0);
    FUN_14573204f(param_1[1],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1486bf3d2 FUN_1486bf3d2 body=115 status=ok
// SIG undefined FUN_1486bf3d2(void)

void FUN_1486bf3d2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486bf445 FUN_1486bf445 body=82 status=ok
// SIG undefined FUN_1486bf445(void)

void FUN_1486bf445(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined8 *)(param_1 + -0x18) = *(undefined8 *)(param_2 + -0x18);
      *(undefined4 *)(param_1 + -0x10) = *(undefined4 *)(param_2 + -0x10);
      *(undefined8 *)(param_1 + -8) = 0;
      FUN_1486bf498(param_1,param_2);
      param_1 = param_1 + 0x30;
      param_2 = param_2 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1486bf498 FUN_1486bf498 body=97 status=ok
// SIG undefined FUN_1486bf498(void)

undefined8 * FUN_1486bf498(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14b189ef0;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1486ba4ba(param_1 + 1,iVar1,0);
    FUN_1486ba52d(param_1[1],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1486bf4fa FUN_1486bf4fa body=50 status=ok
// SIG undefined FUN_1486bf4fa(void)

void FUN_1486bf4fa(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b18d660;
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}



// FUNCTION 1486bf542 FUN_1486bf542 body=75 status=ok
// SIG undefined FUN_1486bf542(void)

undefined1 FUN_1486bf542(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_1486bf6a6(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486bf5b6 FUN_1486bf5b6 body=59 status=ok
// SIG undefined FUN_1486bf5b6(void)

undefined8 FUN_1486bf5b6(longlong *param_1)

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



// FUNCTION 1486bf5fc FUN_1486bf5fc body=34 status=ok
// SIG undefined FUN_1486bf5fc(void)

void FUN_1486bf5fc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_14587b24c(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1486bf66c FUN_1486bf66c body=57 status=ok
// SIG undefined FUN_1486bf66c(void)

void FUN_1486bf66c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5fb68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5fb68 = FUN_140002ddd(FUN_1464e8bb0,uVar1,L"GbxInputSchemaDef");
  }
  return;
}



// FUNCTION 1486bf6a6 FUN_1486bf6a6 body=95 status=ok
// SIG undefined FUN_1486bf6a6(void)

undefined8 * FUN_1486bf6a6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14587b293(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486bf706(param_1,iVar1);
      FUN_1486bf779(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486bf706 FUN_1486bf706 body=115 status=ok
// SIG undefined FUN_1486bf706(void)

void FUN_1486bf706(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486bf779 FUN_1486bf779 body=52 status=ok
// SIG undefined FUN_1486bf779(void)

void FUN_1486bf779(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1486bf88a FUN_1486bf88a body=59 status=ok
// SIG undefined FUN_1486bf88a(void)

undefined8 FUN_1486bf88a(longlong *param_1)

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



// FUNCTION 1486bf95c FUN_1486bf95c body=54 status=ok
// SIG undefined FUN_1486bf95c(void)

undefined1 FUN_1486bf95c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486bfa52(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 1486bf9ba FUN_1486bf9ba body=59 status=ok
// SIG undefined FUN_1486bf9ba(void)

undefined8 FUN_1486bf9ba(longlong *param_1)

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



// FUNCTION 1486bfa52 FUN_1486bfa52 body=72 status=ok
// SIG undefined FUN_1486bfa52(void)

undefined8 * FUN_1486bfa52(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  if ((param_1[1] != param_2[1]) || (*(int *)(param_1 + 2) != *(int *)(param_2 + 2))) {
    param_1[1] = param_2[1];
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    param_1[3] = 0;
  }
  FUN_1486bfa9a(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 1486bfa9a FUN_1486bfa9a body=93 status=ok
// SIG undefined FUN_1486bfa9a(void)

undefined8 * FUN_1486bfa9a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140fea71c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486bc4e0(param_1,iVar1);
      FUN_1486bc553(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486bfaf8 FUN_1486bfaf8 body=50 status=ok
// SIG undefined FUN_1486bfaf8(void)

void FUN_1486bfaf8(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_140fea71c(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1486bfb50 FUN_1486bfb50 body=54 status=ok
// SIG undefined FUN_1486bfb50(void)

undefined1 FUN_1486bfb50(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486bc376(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1486bfbae FUN_1486bfbae body=59 status=ok
// SIG undefined FUN_1486bfbae(void)

undefined8 FUN_1486bfbae(longlong *param_1)

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



// FUNCTION 1486bfc4c FUN_1486bfc4c body=48 status=ok
// SIG undefined FUN_1486bfc4c(void)

void FUN_1486bfc4c(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_140fea6e0(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1486bfd44 FUN_1486bfd44 body=59 status=ok
// SIG undefined FUN_1486bfd44(void)

undefined8 FUN_1486bfd44(longlong *param_1)

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



// FUNCTION 1486bfe28 FUN_1486bfe28 body=59 status=ok
// SIG undefined FUN_1486bfe28(void)

undefined8 FUN_1486bfe28(longlong *param_1)

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



// FUNCTION 1486bfe74 FUN_1486bfe74 body=58 status=ok
// SIG undefined FUN_1486bfe74(void)

void FUN_1486bfe74(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x178) == '\x01') {
    if (*(longlong *)(param_2 + 0x150) != 0) {
      FUN_1400020a8();
    }
    FUN_140368b56(param_2 + 0x50);
    *(undefined1 *)(param_2 + 0x178) = 0;
  }
  return;
}



// FUNCTION 1486bfefe FUN_1486bfefe body=104 status=ok
// SIG undefined FUN_1486bfefe(void)

void FUN_1486bfefe(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xe0);
  *(undefined4 *)((longlong)param_2 + 0x74) = 0x80;
  *(undefined4 *)((longlong)param_2 + 0x78) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0xf;
  *(undefined1 *)((longlong)param_2 + 200) = 1;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe0) = 0;
  return;
}



// FUNCTION 1486bffd6 FUN_1486bffd6 body=47 status=ok
// SIG undefined FUN_1486bffd6(void)

void FUN_1486bffd6(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140368b56(param_2 + 8);
  return;
}



// FUNCTION 1486c001c FUN_1486c001c body=76 status=ok
// SIG undefined FUN_1486c001c(void)

undefined8 FUN_1486c001c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + lVar1) = *(undefined4 *)(param_3 + lVar1);
      FUN_1407b25f0();
      lVar1 = lVar1 + 0xe8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486c0090 FUN_1486c0090 body=59 status=ok
// SIG undefined FUN_1486c0090(void)

undefined8 FUN_1486c0090(longlong *param_1)

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



// FUNCTION 1486c00dc FUN_1486c00dc body=61 status=ok
// SIG undefined FUN_1486c00dc(void)

void FUN_1486c00dc(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    puVar1 = *(undefined8 **)(param_2 + 0xe0);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    FUN_140368b56(param_2 + 8);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 1486c01e0 FUN_1486c01e0 body=59 status=ok
// SIG undefined FUN_1486c01e0(void)

undefined8 FUN_1486c01e0(longlong *param_1)

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



// FUNCTION 1486c0336 FUN_1486c0336 body=59 status=ok
// SIG undefined FUN_1486c0336(void)

undefined8 FUN_1486c0336(longlong *param_1)

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



// FUNCTION 1486c0382 FUN_1486c0382 body=61 status=ok
// SIG undefined FUN_1486c0382(void)

void FUN_1486c0382(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    puVar1 = *(undefined8 **)(param_2 + 0xe0);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    FUN_140368b56(param_2 + 8);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 1486c0410 FUN_1486c0410 body=68 status=ok
// SIG undefined FUN_1486c0410(void)

void FUN_1486c0410(undefined8 param_1,undefined8 *param_2)

{
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b18fbe0;
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}



// FUNCTION 1486c0454 FUN_1486c0454 body=50 status=ok
// SIG undefined FUN_1486c0454(void)

void FUN_1486c0454(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b18fbe0;
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}



// FUNCTION 1486c04aa FUN_1486c04aa body=75 status=ok
// SIG undefined FUN_1486c04aa(void)

undefined1 FUN_1486c04aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_1486c066e(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486c051e FUN_1486c051e body=59 status=ok
// SIG undefined FUN_1486c051e(void)

undefined8 FUN_1486c051e(longlong *param_1)

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



// FUNCTION 1486c0564 FUN_1486c0564 body=34 status=ok
// SIG undefined FUN_1486c0564(void)

void FUN_1486c0564(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1486c0632(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1486c05d4 FUN_1486c05d4 body=38 status=ok
// SIG undefined FUN_1486c05d4(void)

undefined8 FUN_1486c05d4(undefined8 param_1,int param_2)

{
  FUN_1486c0632();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c05fa FUN_1486c05fa body=55 status=ok
// SIG undefined FUN_1486c05fa(void)

void FUN_1486c05fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5fd20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5fd20 = FUN_140002ddd(FUN_1464e929f,uVar1,L"GbxItemBreakDownDef");
  }
  return;
}



// FUNCTION 1486c0632 FUN_1486c0632 body=59 status=ok
// SIG undefined FUN_1486c0632(void)

void FUN_1486c0632(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b18fbe0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1486c066e FUN_1486c066e body=79 status=ok
// SIG undefined FUN_1486c066e(void)

undefined8 * FUN_1486c066e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486c06be(param_1,iVar1);
      FUN_1486c0730(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486c06be FUN_1486c06be body=114 status=ok
// SIG undefined FUN_1486c06be(void)

void FUN_1486c06be(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xf0,8);
    iVar2 = (int)(uVar1 / 0xf0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xf0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1486c0730 FUN_1486c0730 body=60 status=ok
// SIG undefined FUN_1486c0730(void)

void FUN_1486c0730(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486c076c(param_1,param_2);
    param_1 = param_1 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return;
}



// FUNCTION 1486c076c FUN_1486c076c body=259 status=ok
// SIG undefined FUN_1486c076c(void)

undefined1 * FUN_1486c076c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  FUN_144a7f96e(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  FUN_144a7f96e(param_1 + 0x78,param_2 + 0x78);
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return param_1;
}



// FUNCTION 1486c0896 FUN_1486c0896 body=137 status=ok
// SIG undefined FUN_1486c0896(void)

undefined8 FUN_1486c0896(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      *param_2 = 0xffffffffffffffff;
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
    }
    FUN_1488cbebc(param_2 + 2,param_3 + 2);
    FUN_1447715ec(param_2 + 0x22,param_3 + 0x22);
    uVar1 = *(undefined4 *)((longlong)param_3 + 0x13c);
    uVar2 = *(undefined4 *)(param_3 + 0x28);
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x144);
    *(undefined4 *)(param_2 + 0x27) = *(undefined4 *)(param_3 + 0x27);
    *(undefined4 *)((longlong)param_2 + 0x13c) = uVar1;
    *(undefined4 *)(param_2 + 0x28) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0x144) = uVar3;
    *(undefined4 *)(param_2 + 0x29) = *(undefined4 *)(param_3 + 0x29);
    param_3 = param_3 + 0x2a;
    param_2 = param_2 + 0x2a;
  }
  return 1;
}



// FUNCTION 1486c0948 FUN_1486c0948 body=59 status=ok
// SIG undefined FUN_1486c0948(void)

undefined8 FUN_1486c0948(longlong *param_1)

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



// FUNCTION 1486c0994 FUN_1486c0994 body=38 status=ok
// SIG undefined FUN_1486c0994(void)

void FUN_1486c0994(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x150) == '\x01') {
    FUN_1486c0a08(param_2);
    *(undefined1 *)(param_2 + 0x150) = 0;
  }
  return;
}



// FUNCTION 1486c0a08 FUN_1486c0a08 body=68 status=ok
// SIG undefined FUN_1486c0a08(void)

void FUN_1486c0a08(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  puVar1 = *(undefined8 **)(param_1 + 0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140368b56(param_1 + 0x18);
  return;
}



// FUNCTION 1486c0ad2 FUN_1486c0ad2 body=59 status=ok
// SIG undefined FUN_1486c0ad2(void)

undefined8 FUN_1486c0ad2(longlong *param_1)

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



// FUNCTION 1486c0b74 FUN_1486c0b74 body=43 status=ok
// SIG undefined FUN_1486c0b74(void)

void FUN_1486c0b74(undefined8 param_1,longlong param_2)

{
  FUN_140f23ff6(param_2);
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  return;
}



// FUNCTION 1486c0bda FUN_1486c0bda body=59 status=ok
// SIG undefined FUN_1486c0bda(void)

undefined8 FUN_1486c0bda(longlong *param_1)

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



// FUNCTION 1486c0c26 FUN_1486c0c26 body=40 status=ok
// SIG undefined FUN_1486c0c26(void)

void FUN_1486c0c26(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x128) == '\x01') {
    FUN_1457e6256(param_2);
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return;
}



// FUNCTION 1486c0ce4 FUN_1486c0ce4 body=59 status=ok
// SIG undefined FUN_1486c0ce4(void)

undefined8 FUN_1486c0ce4(longlong *param_1)

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



// FUNCTION 1486c0d30 FUN_1486c0d30 body=40 status=ok
// SIG undefined FUN_1486c0d30(void)

void FUN_1486c0d30(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x160) == '\x01') {
    FUN_1457e6316(param_2);
    *(undefined1 *)(param_2 + 0x160) = 0;
  }
  return;
}



// FUNCTION 1486c0da8 FUN_1486c0da8 body=98 status=ok
// SIG undefined FUN_1486c0da8(void)

void FUN_1486c0da8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x50);
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
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_14b18a090;
  FUN_144a65a1e(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_1486c0e0a(param_1);
  return;
}



// FUNCTION 1486c0e0a FUN_1486c0e0a body=68 status=ok
// SIG undefined FUN_1486c0e0a(void)

void FUN_1486c0e0a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_144a65a1e(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001486c0e43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1486c0e4e FUN_1486c0e4e body=58 status=ok
// SIG undefined FUN_1486c0e4e(void)

void FUN_1486c0e4e(longlong param_1)

{
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_14b189ef0;
  FUN_1486ba411(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_1486c0e0a(param_1);
  return;
}



// FUNCTION 1486c0eae FUN_1486c0eae body=341 status=ok
// SIG undefined FUN_1486c0eae(void)

void FUN_1486c0eae(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  int local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
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
  FUN_1487d5ec0(local_20,iVar1 != 0,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486c1100 FUN_1486c1100 body=849 status=ok
// SIG undefined FUN_1486c1100(void)

void FUN_1486c1100(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  longlong *local_110;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_90 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_98 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0x100;
  local_b4 = 0x3f800000;
  local_b0 = 0;
  local_a8 = 0;
  local_a4 = 2;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  puVar2 = &local_c8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_e0 = 0;
  local_d8 = 0xc3769d17;
  local_d0 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar4 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_e8 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  plVar3 = &local_e8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_100 = local_e0;
  local_f8 = local_d8;
  local_f0 = 0;
  local_118 = puVar4;
  local_110 = plVar3;
  uVar1 = FUN_148951ae6(local_90,local_98,puVar2);
  *param_3 = uVar1;
  if ((DAT_14c950c29 == '\x01') && (*plVar3 != 0)) {
    FUN_14689c22e();
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1486c4ca8(&local_88);
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486c1462 FUN_1486c1462 body=48 status=ok
// SIG undefined FUN_1486c1462(void)

longlong FUN_1486c1462(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c1492 FUN_1486c1492 body=48 status=ok
// SIG undefined FUN_1486c1492(void)

longlong FUN_1486c1492(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c14c2 FUN_1486c14c2 body=48 status=ok
// SIG undefined FUN_1486c14c2(void)

longlong FUN_1486c14c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c14f2 FUN_1486c14f2 body=48 status=ok
// SIG undefined FUN_1486c14f2(void)

longlong FUN_1486c14f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c1522 FUN_1486c1522 body=48 status=ok
// SIG undefined FUN_1486c1522(void)

longlong FUN_1486c1522(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c1552 FUN_1486c1552 body=48 status=ok
// SIG undefined FUN_1486c1552(void)

longlong FUN_1486c1552(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c1582 FUN_1486c1582 body=48 status=ok
// SIG undefined FUN_1486c1582(void)

longlong FUN_1486c1582(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c15b2 FUN_1486c15b2 body=48 status=ok
// SIG undefined FUN_1486c15b2(void)

longlong FUN_1486c15b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c15e2 FUN_1486c15e2 body=48 status=ok
// SIG undefined FUN_1486c15e2(void)

longlong FUN_1486c15e2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c1612 FUN_1486c1612 body=48 status=ok
// SIG undefined FUN_1486c1612(void)

longlong FUN_1486c1612(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c1642 FUN_1486c1642 body=48 status=ok
// SIG undefined FUN_1486c1642(void)

longlong FUN_1486c1642(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c1672 FUN_1486c1672 body=48 status=ok
// SIG undefined FUN_1486c1672(void)

longlong FUN_1486c1672(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c16a2 FUN_1486c16a2 body=48 status=ok
// SIG undefined FUN_1486c16a2(void)

longlong FUN_1486c16a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c16d2 FUN_1486c16d2 body=48 status=ok
// SIG undefined FUN_1486c16d2(void)

longlong FUN_1486c16d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c1702 FUN_1486c1702 body=48 status=ok
// SIG undefined FUN_1486c1702(void)

longlong FUN_1486c1702(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c1732 FUN_1486c1732 body=48 status=ok
// SIG undefined FUN_1486c1732(void)

longlong FUN_1486c1732(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c1762 FUN_1486c1762 body=48 status=ok
// SIG undefined FUN_1486c1762(void)

longlong FUN_1486c1762(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c1792 FUN_1486c1792 body=48 status=ok
// SIG undefined FUN_1486c1792(void)

longlong FUN_1486c1792(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c17c2 FUN_1486c17c2 body=48 status=ok
// SIG undefined FUN_1486c17c2(void)

longlong FUN_1486c17c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c17f2 FUN_1486c17f2 body=48 status=ok
// SIG undefined FUN_1486c17f2(void)

longlong FUN_1486c17f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c1822 FUN_1486c1822 body=48 status=ok
// SIG undefined FUN_1486c1822(void)

longlong FUN_1486c1822(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c1852 FUN_1486c1852 body=48 status=ok
// SIG undefined FUN_1486c1852(void)

longlong FUN_1486c1852(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c1882 FUN_1486c1882 body=48 status=ok
// SIG undefined FUN_1486c1882(void)

longlong FUN_1486c1882(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a60;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c18b2 FUN_1486c18b2 body=45 status=ok
// SIG undefined FUN_1486c18b2(void)

longlong FUN_1486c18b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


