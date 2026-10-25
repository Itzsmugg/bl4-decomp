// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147f22bf4 FUN_147f22bf4 body=45 status=ok
// SIG undefined FUN_147f22bf4(void)

longlong FUN_147f22bf4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f22c3a FUN_147f22c3a body=47 status=ok
// SIG undefined FUN_147f22c3a(void)

void FUN_147f22c3a(undefined8 param_1,longlong *param_2)

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



// FUNCTION 147f22c80 FUN_147f22c80 body=67 status=ok
// SIG undefined FUN_147f22c80(void)

undefined1 FUN_147f22c80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 147f22cec FUN_147f22cec body=59 status=ok
// SIG undefined FUN_147f22cec(void)

undefined8 FUN_147f22cec(longlong *param_1)

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



// FUNCTION 147f22d8a FUN_147f22d8a body=51 status=ok
// SIG undefined FUN_147f22d8a(void)

void FUN_147f22d8a(longlong *param_1)

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



// FUNCTION 147f22dbe FUN_147f22dbe body=111 status=ok
// SIG undefined FUN_147f22dbe(void)

void FUN_147f22dbe(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x118);
  FUN_1413493a6(param_2);
  *param_2 = &PTR_FUN_14ac52cf0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  *(undefined1 *)(param_2 + 0x19) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  return;
}



// FUNCTION 147f22e2e FUN_147f22e2e body=95 status=ok
// SIG undefined FUN_147f22e2e(void)

void FUN_147f22e2e(undefined8 param_1,undefined8 *param_2)

{
  FUN_1413493a6(param_2);
  *param_2 = &PTR_FUN_14ac52cf0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  *(undefined1 *)(param_2 + 0x19) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  return;
}



// FUNCTION 147f22ed2 FUN_147f22ed2 body=63 status=ok
// SIG undefined FUN_147f22ed2(void)

undefined1 FUN_147f22ed2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f23058(param_2,param_3);
    param_3 = param_3 + 0x118;
    param_2 = param_2 + 0x118;
  }
  return 1;
}



// FUNCTION 147f22f3a FUN_147f22f3a body=59 status=ok
// SIG undefined FUN_147f22f3a(void)

undefined8 FUN_147f22f3a(longlong *param_1)

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



// FUNCTION 147f22f86 FUN_147f22f86 body=38 status=ok
// SIG undefined FUN_147f22f86(void)

void FUN_147f22f86(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_14076bc70(param_2);
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  return;
}



// FUNCTION 147f22ffa FUN_147f22ffa body=38 status=ok
// SIG undefined FUN_147f22ffa(void)

undefined8 FUN_147f22ffa(undefined8 param_1,int param_2)

{
  FUN_14076bc70();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f23020 FUN_147f23020 body=55 status=ok
// SIG undefined FUN_147f23020(void)

void FUN_147f23020(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21a38 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21a38 = FUN_140002ddd(FUN_146435223,uVar1,L"GbxBrainGraphSettings");
  }
  return;
}



// FUNCTION 147f23058 FUN_147f23058 body=141 status=ok
// SIG undefined FUN_147f23058(void)

longlong FUN_147f23058(longlong param_1,longlong param_2)

{
  FUN_1470d0d20();
  FUN_144a787a6(param_1 + 0xa8,param_2 + 0xa8);
  FUN_144a787a6(param_1 + 0xb8,param_2 + 0xb8);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  FUN_1403de7ba(param_1 + 0xd8,param_2 + 0xd8);
  FUN_147f230e6(param_1 + 0xf8,param_2 + 0xf8);
  FUN_147f2313e(param_1 + 0x108,param_2 + 0x108);
  return param_1;
}



// FUNCTION 147f230e6 FUN_147f230e6 body=88 status=ok
// SIG undefined FUN_147f230e6(void)

undefined8 * FUN_147f230e6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f23196(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f2313e FUN_147f2313e body=88 status=ok
// SIG undefined FUN_147f2313e(void)

undefined8 * FUN_147f2313e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f231f8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f23196 FUN_147f23196 body=98 status=ok
// SIG undefined FUN_147f23196(void)

void FUN_147f23196(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147f231f8 FUN_147f231f8 body=98 status=ok
// SIG undefined FUN_147f231f8(void)

void FUN_147f231f8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147f23286 FUN_147f23286 body=63 status=ok
// SIG undefined FUN_147f23286(void)

undefined1 FUN_147f23286(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f23058(param_2,param_3);
    param_3 = param_3 + 0x118;
    param_2 = param_2 + 0x118;
  }
  return 1;
}



// FUNCTION 147f232ee FUN_147f232ee body=59 status=ok
// SIG undefined FUN_147f232ee(void)

undefined8 FUN_147f232ee(longlong *param_1)

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



// FUNCTION 147f2333a FUN_147f2333a body=38 status=ok
// SIG undefined FUN_147f2333a(void)

void FUN_147f2333a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_14076bc70(param_2);
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  return;
}



// FUNCTION 147f233ae FUN_147f233ae body=371 status=ok
// SIG undefined FUN_147f233ae(void)

undefined8 * FUN_147f233ae(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14a1b6c40;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_38 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_38[1] = (longlong)&DAT_100000001;
  *local_38 = (longlong)&PTR_FUN_14a1b6cc0;
  local_40 = local_38 + 2;
  local_38[2] = (longlong)&PTR_FUN_14a18e458;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  local_38[0xc] = 0;
  local_38[0xd] = 0;
  local_38[0xe] = 0;
  local_38[0xf] = 0;
  local_38[0x10] = 0;
  local_38[0x11] = 0;
  local_38[0x12] = 0;
  FUN_1404e24cc(&local_40);
  FUN_1404e256a(param_1 + 0xd,&local_40);
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc1) = 0;
  *param_1 = &PTR_FUN_14ac4d5d0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f236bc FUN_147f236bc body=59 status=ok
// SIG undefined FUN_147f236bc(void)

undefined8 FUN_147f236bc(longlong *param_1)

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



// FUNCTION 147f23708 FUN_147f23708 body=63 status=ok
// SIG undefined FUN_147f23708(void)

void FUN_147f23708(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x27) == '\x01') {
    *param_2 = &PTR_FUN_14ac52c10;
    if (param_2[8] != 0) {
      FUN_14387f5b2(param_2);
    }
    FUN_1403d7f26(param_2);
    *(undefined1 *)(param_2 + 0x27) = 0;
  }
  return;
}



// FUNCTION 147f23798 FUN_147f23798 body=66 status=ok
// SIG undefined FUN_147f23798(void)

undefined8 * FUN_147f23798(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac52c10;
  if (param_1[8] != 0) {
    FUN_14387f5b2(param_1);
  }
  FUN_1403d7f26(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f237da FUN_147f237da body=55 status=ok
// SIG undefined FUN_147f237da(void)

void FUN_147f237da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21a98 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21a98 = FUN_140002ddd(FUN_1464353ed,uVar1,L"GbxBrainGraphState");
  }
  return;
}



// FUNCTION 147f23872 FUN_147f23872 body=120 status=ok
// SIG undefined FUN_147f23872(void)

undefined8 FUN_147f23872(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0x18;
    do {
      uVar4 = *(undefined8 *)(param_3 + -0x10 + lVar10);
      lVar5 = *(longlong *)(param_3 + -8 + lVar10);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(param_2 + -8 + lVar10);
      *(undefined8 *)(param_2 + -0x10 + lVar10) = uVar4;
      *(longlong *)(param_2 + -8 + lVar10) = lVar5;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      *(undefined8 *)(param_2 + 0x10 + lVar10) = *(undefined8 *)(param_3 + 0x10 + lVar10);
      puVar2 = (undefined4 *)(param_3 + lVar10);
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar3 = (undefined4 *)(param_2 + lVar10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      lVar10 = lVar10 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f23912 FUN_147f23912 body=59 status=ok
// SIG undefined FUN_147f23912(void)

undefined8 FUN_147f23912(longlong *param_1)

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



// FUNCTION 147f23958 FUN_147f23958 body=55 status=ok
// SIG undefined FUN_147f23958(void)

void FUN_147f23958(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14ac53b20;
    plVar2 = (longlong *)param_2[2];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 147f239de FUN_147f239de body=64 status=ok
// SIG undefined FUN_147f239de(void)

undefined8 * FUN_147f239de(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ac53b20;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f23a1e FUN_147f23a1e body=55 status=ok
// SIG undefined FUN_147f23a1e(void)

void FUN_147f23a1e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21ae0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21ae0 = FUN_140002ddd(FUN_146435511,uVar1,L"GbxBrainService");
  }
  return;
}



// FUNCTION 147f23a56 FUN_147f23a56 body=92 status=ok
// SIG undefined FUN_147f23a56(void)

void FUN_147f23a56(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x1e) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  *param_2 = &PTR_FUN_14ac4dbf0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  return;
}



// FUNCTION 147f23ada FUN_147f23ada body=153 status=ok
// SIG undefined FUN_147f23ada(void)

undefined8 FUN_147f23ada(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + 8 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar10);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1470d00c2(param_2 + 0x28 + lVar10,param_3 + 0x28 + lVar10);
      FUN_144983130(param_2 + 0x38 + lVar10,param_3 + 0x38 + lVar10);
      *(undefined8 *)(param_2 + 0x70 + lVar10) = *(undefined8 *)(param_3 + 0x70 + lVar10);
      *(undefined1 *)(param_2 + 0x78 + lVar10) = *(undefined1 *)(param_3 + 0x78 + lVar10);
      lVar10 = lVar10 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f23b9c FUN_147f23b9c body=59 status=ok
// SIG undefined FUN_147f23b9c(void)

undefined8 FUN_147f23b9c(longlong *param_1)

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



// FUNCTION 147f23be8 FUN_147f23be8 body=57 status=ok
// SIG undefined FUN_147f23be8(void)

void FUN_147f23be8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_2 + 7);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 147f23c72 FUN_147f23c72 body=77 status=ok
// SIG undefined FUN_147f23c72(void)

void FUN_147f23c72(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac4dde0;
  param_2[0x23] = 0;
  param_2[0x24] = 0x800000000;
  param_2[0x25] = 0xbf80000000000000;
  return;
}



// FUNCTION 147f23ce4 FUN_147f23ce4 body=99 status=ok
// SIG undefined FUN_147f23ce4(void)

undefined8 FUN_147f23ce4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    FUN_147f23e54(param_2 + 0xd8,param_3 + 0xd8);
    *(undefined8 *)(param_2 + 0x128) = *(undefined8 *)(param_3 + 0x128);
    param_2 = param_2 + 0x130;
    param_3 = param_3 + 0x130;
  }
  return 1;
}



// FUNCTION 147f23d70 FUN_147f23d70 body=59 status=ok
// SIG undefined FUN_147f23d70(void)

undefined8 FUN_147f23d70(longlong *param_1)

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



// FUNCTION 147f23dbc FUN_147f23dbc body=65 status=ok
// SIG undefined FUN_147f23dbc(void)

void FUN_147f23dbc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x26) == '\x01') {
    *param_2 = &PTR_FUN_14ac4dde0;
    if (param_2[0x23] != 0) {
      FUN_1400020a8();
    }
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0x26) = 0;
  }
  return;
}



// FUNCTION 147f23e54 FUN_147f23e54 body=104 status=ok
// SIG undefined FUN_147f23e54(void)

void * FUN_147f23e54(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x40);
    if (*(void **)((longlong)param_2 + 0x40) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x48);
    *(int *)((longlong)param_1 + 0x48) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x4c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 8;
    }
    else {
      FUN_147f23ebc(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x40);
        if (*(void **)((longlong)param_1 + 0x40) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f23ebc FUN_147f23ebc body=101 status=ok
// SIG undefined FUN_147f23ebc(void)

void FUN_147f23ebc(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_145732d68(param_1,0,iVar3,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x4c) = param_3;
  return;
}



// FUNCTION 147f23f22 FUN_147f23f22 body=98 status=ok
// SIG undefined FUN_147f23f22(void)

void FUN_147f23f22(undefined8 param_1,undefined8 *param_2)

{
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  return;
}



// FUNCTION 147f23f84 FUN_147f23f84 body=78 status=ok
// SIG undefined FUN_147f23f84(void)

void FUN_147f23f84(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x1e) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  return;
}



// FUNCTION 147f24016 FUN_147f24016 body=99 status=ok
// SIG undefined FUN_147f24016(void)

undefined8 FUN_147f24016(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x30);
      uVar2 = *(undefined4 *)(param_3 + -0x2c);
      uVar3 = *(undefined4 *)(param_3 + -0x28);
      uVar4 = *(undefined4 *)(param_3 + -0x24);
      uVar5 = *(undefined4 *)(param_3 + -0x1c);
      uVar6 = *(undefined4 *)(param_3 + -0x18);
      uVar7 = *(undefined4 *)(param_3 + -0x14);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar5;
      *(undefined4 *)(param_2 + -0x18) = uVar6;
      *(undefined4 *)(param_2 + -0x14) = uVar7;
      *(undefined4 *)(param_2 + -0x30) = uVar1;
      *(undefined4 *)(param_2 + -0x2c) = uVar2;
      *(undefined4 *)(param_2 + -0x28) = uVar3;
      *(undefined4 *)(param_2 + -0x24) = uVar4;
      FUN_1470d00c2(param_2 + -0x10,param_3 + -0x10);
      FUN_144983130(param_2,param_3);
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
      param_3 = param_3 + 0x78;
      param_2 = param_2 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f240a2 FUN_147f240a2 body=59 status=ok
// SIG undefined FUN_147f240a2(void)

undefined8 FUN_147f240a2(longlong *param_1)

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



// FUNCTION 147f240e8 FUN_147f240e8 body=51 status=ok
// SIG undefined FUN_147f240e8(void)

void FUN_147f240e8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_2 + 7);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 147f2416c FUN_147f2416c body=37 status=ok
// SIG undefined FUN_147f2416c(void)

void FUN_147f2416c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xd8);
  FUN_140ecb986(param_2);
  return;
}



// FUNCTION 147f241be FUN_147f241be body=63 status=ok
// SIG undefined FUN_147f241be(void)

undefined1 FUN_147f241be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 147f24226 FUN_147f24226 body=59 status=ok
// SIG undefined FUN_147f24226(void)

undefined8 FUN_147f24226(longlong *param_1)

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



// FUNCTION 147f24272 FUN_147f24272 body=38 status=ok
// SIG undefined FUN_147f24272(void)

void FUN_147f24272(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 147f242e8 FUN_147f242e8 body=59 status=ok
// SIG undefined FUN_147f242e8(void)

void FUN_147f242e8(undefined8 param_1,undefined8 *param_2)

{
  FUN_147f24490(param_2);
  param_2[0x1a] = 0x3f0000003f000000;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  *param_2 = &PTR_FUN_14ac4e910;
  return;
}



// FUNCTION 147f2434c FUN_147f2434c body=63 status=ok
// SIG undefined FUN_147f2434c(void)

undefined1 FUN_147f2434c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f245ec(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 147f243b4 FUN_147f243b4 body=59 status=ok
// SIG undefined FUN_147f243b4(void)

undefined8 FUN_147f243b4(longlong *param_1)

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



// FUNCTION 147f24400 FUN_147f24400 body=65 status=ok
// SIG undefined FUN_147f24400(void)

void FUN_147f24400(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    *param_2 = &PTR_FUN_14ac4e9b0;
    if (param_2[0x1b] != 0) {
      FUN_1400020a8();
    }
    FUN_147f24566(param_2);
    *(undefined1 *)(param_2 + 0x1d) = 0;
  }
  return;
}



// FUNCTION 147f24490 FUN_147f24490 body=119 status=ok
// SIG undefined FUN_147f24490(void)

undefined8 * FUN_147f24490(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR_FUN_14ac4eaf0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x800000000;
  return param_1;
}



// FUNCTION 147f24508 FUN_147f24508 body=38 status=ok
// SIG undefined FUN_147f24508(void)

undefined8 FUN_147f24508(undefined8 param_1,int param_2)

{
  FUN_147f24566();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f2452e FUN_147f2452e body=55 status=ok
// SIG undefined FUN_147f2452e(void)

void FUN_147f2452e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21cd8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21cd8 = FUN_140002ddd(FUN_146435d4f,uVar1,L"GbxBrainTaskSettings_FlowControl");
  }
  return;
}



// FUNCTION 147f24566 FUN_147f24566 body=133 status=ok
// SIG undefined FUN_147f24566(void)

void FUN_147f24566(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac4eaf0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 147f245ec FUN_147f245ec body=129 status=ok
// SIG undefined FUN_147f245ec(void)

longlong FUN_147f245ec(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  FUN_147f246c6(param_1 + 0x80,param_2 + 0x80);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  FUN_147f2466e(param_1 + 0xd8,param_2 + 0xd8);
  return param_1;
}



// FUNCTION 147f2466e FUN_147f2466e body=88 status=ok
// SIG undefined FUN_147f2466e(void)

undefined8 * FUN_147f2466e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f24794(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f246c6 FUN_147f246c6 body=104 status=ok
// SIG undefined FUN_147f246c6(void)

void * FUN_147f246c6(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x40);
    if (*(void **)((longlong)param_2 + 0x40) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x48);
    *(int *)((longlong)param_1 + 0x48) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x4c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 8;
    }
    else {
      FUN_147f2472e(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x40);
        if (*(void **)((longlong)param_1 + 0x40) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f2472e FUN_147f2472e body=101 status=ok
// SIG undefined FUN_147f2472e(void)

void FUN_147f2472e(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_145766216(param_1,0,iVar3,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x4c) = param_3;
  return;
}



// FUNCTION 147f24794 FUN_147f24794 body=98 status=ok
// SIG undefined FUN_147f24794(void)

void FUN_147f24794(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,1);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,1);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147f247f8 FUN_147f247f8 body=136 status=ok
// SIG undefined FUN_147f247f8(void)

void FUN_147f247f8(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  param_2[0x23] = 0;
  param_2[0x24] = 0x800000000;
  param_2[0x25] = 0xbf80000000000000;
  param_2[0x36] = 0;
  param_2[0x37] = 0x800000000;
  *(undefined4 *)(param_2 + 0x38) = 0xffffffff;
  param_2[0x39] = 0xffffffff00000000;
  *(undefined4 *)(param_2 + 0x3a) = 0xff7fffff;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  *param_2 = &PTR_FUN_14ac4ecf0;
  return;
}



// FUNCTION 147f248a4 FUN_147f248a4 body=63 status=ok
// SIG undefined FUN_147f248a4(void)

undefined1 FUN_147f248a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f24a4e(param_2,param_3);
    param_3 = param_3 + 0x1e8;
    param_2 = param_2 + 0x1e8;
  }
  return 1;
}



// FUNCTION 147f2490c FUN_147f2490c body=59 status=ok
// SIG undefined FUN_147f2490c(void)

undefined8 FUN_147f2490c(longlong *param_1)

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



// FUNCTION 147f24958 FUN_147f24958 body=65 status=ok
// SIG undefined FUN_147f24958(void)

void FUN_147f24958(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3d) == '\x01') {
    *param_2 = &PTR_FUN_14ac4ee80;
    if (param_2[0x3b] != 0) {
      FUN_1400020a8();
    }
    FUN_145a35c02(param_2);
    *(undefined1 *)(param_2 + 0x3d) = 0;
  }
  return;
}



// FUNCTION 147f249f0 FUN_147f249f0 body=38 status=ok
// SIG undefined FUN_147f249f0(void)

undefined8 FUN_147f249f0(undefined8 param_1,int param_2)

{
  FUN_145a35c02();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f24a16 FUN_147f24a16 body=55 status=ok
// SIG undefined FUN_147f24a16(void)

void FUN_147f24a16(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21cf0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21cf0 = FUN_140002ddd(FUN_146435de5,uVar1,L"GbxBrainTask_FlowControl");
  }
  return;
}



// FUNCTION 147f24a4e FUN_147f24a4e body=133 status=ok
// SIG undefined FUN_147f24a4e(void)

longlong FUN_147f24a4e(longlong param_1,longlong param_2)

{
  FUN_147f186d8();
  FUN_147f23e54(param_1 + 0xd8,param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  FUN_147f24ad4(param_1 + 0x130,param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  FUN_144a67f5c(param_1 + 0x1d8,param_2 + 0x1d8);
  return param_1;
}



// FUNCTION 147f24ad4 FUN_147f24ad4 body=122 status=ok
// SIG undefined FUN_147f24ad4(void)

void * FUN_147f24ad4(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x80);
    if (*(void **)((longlong)param_2 + 0x80) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x88);
    *(int *)((longlong)param_1 + 0x88) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x8c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
    }
    else {
      FUN_147f24b4e(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x80);
        if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f24b4e FUN_147f24b4e body=104 status=ok
// SIG undefined FUN_147f24b4e(void)

void FUN_147f24b4e(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_14573edc0(param_1,0,iVar3,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x8c) = param_3;
  return;
}



// FUNCTION 147f24c0c FUN_147f24c0c body=178 status=ok
// SIG undefined FUN_147f24c0c(void)

undefined8 FUN_147f24c0c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + lVar10;
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      FUN_1470d00c2();
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_144983130(lVar1 + 0x38,lVar2 + 0x38);
      *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar2 + 0x70);
      *(undefined1 *)(lVar1 + 0x78) = *(undefined1 *)(lVar2 + 0x78);
      FUN_147f23058(param_2 + lVar10 + 0x80,param_3 + lVar10 + 0x80);
      lVar10 = lVar10 + 0x198;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f24ce6 FUN_147f24ce6 body=59 status=ok
// SIG undefined FUN_147f24ce6(void)

undefined8 FUN_147f24ce6(longlong *param_1)

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



// FUNCTION 147f24d8a FUN_147f24d8a body=79 status=ok
// SIG undefined FUN_147f24d8a(void)

void FUN_147f24d8a(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x33) == '\x01') {
    *param_1 = &PTR_FUN_14ac52c60;
    FUN_14076bc70(param_1 + 0x10);
    *param_1 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_1 + 7);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x33) = 0;
  }
  return;
}



// FUNCTION 147f24dda FUN_147f24dda body=82 status=ok
// SIG undefined FUN_147f24dda(void)

undefined8 * FUN_147f24dda(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac52c60;
  FUN_14076bc70(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f24e2c FUN_147f24e2c body=55 status=ok
// SIG undefined FUN_147f24e2c(void)

void FUN_147f24e2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21c48 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21c48 = FUN_140002ddd(FUN_146435a2e,uVar1,L"GbxBrainTaskSettings_Composite");
  }
  return;
}



// FUNCTION 147f24e64 FUN_147f24e64 body=262 status=ok
// SIG undefined FUN_147f24e64(void)

void FUN_147f24e64(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  param_2[0x23] = 0;
  param_2[0x24] = 0x800000000;
  param_2[0x25] = 0xbf80000000000000;
  *param_2 = &PTR_FUN_14ac4f5c0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  *(undefined4 *)(param_2 + 0x2d) = 2;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_2 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x174) = 0;
  *(undefined8 *)((longlong)param_2 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x184) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x194) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x204) = 0;
  param_2[0x42] = 0;
  *(undefined4 *)(param_2 + 0x43) = 0;
  *(undefined8 *)((longlong)param_2 + 0x22d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x235) = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x26] = &PTR_FUN_14ac52c10;
  param_2[0x4c] = 0;
  return;
}



// FUNCTION 147f24fba FUN_147f24fba body=59 status=ok
// SIG undefined FUN_147f24fba(void)

undefined8 FUN_147f24fba(longlong *param_1)

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



// FUNCTION 147f25006 FUN_147f25006 body=38 status=ok
// SIG undefined FUN_147f25006(void)

void FUN_147f25006(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_1411d7298(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 147f2507e FUN_147f2507e body=48 status=ok
// SIG undefined FUN_147f2507e(void)

void FUN_147f2507e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x198);
  FUN_140c2310e(param_2);
  *param_2 = &PTR_FUN_14ac4f850;
  return;
}



// FUNCTION 147f250ae FUN_147f250ae body=32 status=ok
// SIG undefined FUN_147f250ae(void)

void FUN_147f250ae(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c2310e(param_2);
  *param_2 = &PTR_FUN_14ac4f850;
  return;
}



// FUNCTION 147f25112 FUN_147f25112 body=178 status=ok
// SIG undefined FUN_147f25112(void)

undefined8 FUN_147f25112(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + lVar10;
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      FUN_1470d00c2();
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_144983130(lVar1 + 0x38,lVar2 + 0x38);
      *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar2 + 0x70);
      *(undefined1 *)(lVar1 + 0x78) = *(undefined1 *)(lVar2 + 0x78);
      FUN_147f23058(param_2 + lVar10 + 0x80,param_3 + lVar10 + 0x80);
      lVar10 = lVar10 + 0x198;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f251ec FUN_147f251ec body=59 status=ok
// SIG undefined FUN_147f251ec(void)

undefined8 FUN_147f251ec(longlong *param_1)

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



// FUNCTION 147f2528e FUN_147f2528e body=82 status=ok
// SIG undefined FUN_147f2528e(void)

undefined8 * FUN_147f2528e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac52c60;
  FUN_14076bc70(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f252e0 FUN_147f252e0 body=55 status=ok
// SIG undefined FUN_147f252e0(void)

void FUN_147f252e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21c78 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21c78 = FUN_140002ddd(FUN_146435b29,uVar1,L"GbxBrainTaskSettings_CompositeQuery");
  }
  return;
}



// FUNCTION 147f2531a FUN_147f2531a body=79 status=ok
// SIG undefined FUN_147f2531a(void)

void FUN_147f2531a(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x33) == '\x01') {
    *param_1 = &PTR_FUN_14ac52c60;
    FUN_14076bc70(param_1 + 0x10);
    *param_1 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_1 + 7);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x33) = 0;
  }
  return;
}



// FUNCTION 147f2539a FUN_147f2539a body=63 status=ok
// SIG undefined FUN_147f2539a(void)

undefined1 FUN_147f2539a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f255d2(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 147f25402 FUN_147f25402 body=59 status=ok
// SIG undefined FUN_147f25402(void)

undefined8 FUN_147f25402(longlong *param_1)

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



// FUNCTION 147f2544e FUN_147f2544e body=38 status=ok
// SIG undefined FUN_147f2544e(void)

void FUN_147f2544e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_147f2553a(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 147f254c2 FUN_147f254c2 body=119 status=ok
// SIG undefined FUN_147f254c2(void)

undefined8 * FUN_147f254c2(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR_FUN_14ac4fa50;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return param_1;
}



// FUNCTION 147f2553a FUN_147f2553a body=151 status=ok
// SIG undefined FUN_147f2553a(void)

void FUN_147f2553a(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac4fa50;
  FUN_1403d8100(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 147f255d2 FUN_147f255d2 body=142 status=ok
// SIG undefined FUN_147f255d2(void)

longlong FUN_147f255d2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  lVar8 = *(longlong *)(param_2 + 0x80);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x80);
    }
  }
  *(longlong *)(param_1 + 0x80) = lVar8;
  FUN_140b57998(param_1 + 0x88,param_2 + 0x88);
  return param_1;
}



// FUNCTION 147f25662 FUN_147f25662 body=242 status=ok
// SIG undefined FUN_147f25662(void)

void FUN_147f25662(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  param_2[0x23] = 0;
  param_2[0x24] = 0x800000000;
  param_2[0x25] = 0xbf80000000000000;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  *(undefined4 *)(param_2 + 0x2d) = 2;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_2 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x174) = 0;
  *(undefined8 *)((longlong)param_2 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x184) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x194) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x204) = 0;
  param_2[0x42] = 0;
  *(undefined4 *)(param_2 + 0x43) = 0;
  *(undefined8 *)((longlong)param_2 + 0x22d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x235) = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x26] = &PTR_FUN_14ac52c10;
  param_2[0x4c] = 0;
  *param_2 = &PTR_FUN_14ac4fc40;
  return;
}



// FUNCTION 147f257a4 FUN_147f257a4 body=59 status=ok
// SIG undefined FUN_147f257a4(void)

undefined8 FUN_147f257a4(longlong *param_1)

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



// FUNCTION 147f257f0 FUN_147f257f0 body=38 status=ok
// SIG undefined FUN_147f257f0(void)

void FUN_147f257f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_147f2886e(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 147f25870 FUN_147f25870 body=38 status=ok
// SIG undefined FUN_147f25870(void)

undefined8 FUN_147f25870(undefined8 param_1,int param_2)

{
  FUN_147f2886e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f25896 FUN_147f25896 body=55 status=ok
// SIG undefined FUN_147f25896(void)

void FUN_147f25896(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21cc0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21cc0 = FUN_140002ddd(FUN_146435c4f,uVar1,L"GbxBrainTask_ExternalBase");
  }
  return;
}



// FUNCTION 147f258ce FUN_147f258ce body=42 status=ok
// SIG undefined FUN_147f258ce(void)

undefined8 FUN_147f258ce(void)

{
  FUN_140033559("Runtime\\Gearbox\\GbxAI\\Public\\GbxBrain/Tasks/GbxBrainTask_ExternalBase.h",0x12,
                L"Pure virtual not implemented (%s)",
                L"FGbxBrainTask_ExternalBase::GetExternalTaskData");
  return 0;
}



// FUNCTION 147f258fa FUN_147f258fa body=280 status=ok
// SIG undefined FUN_147f258fa(void)

void FUN_147f258fa(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x268);
  FUN_140ecb986(param_2);
  param_2[0x23] = 0;
  param_2[0x24] = 0x800000000;
  param_2[0x25] = 0xbf80000000000000;
  *param_2 = &PTR_FUN_14ac4fd80;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  *(undefined4 *)(param_2 + 0x2d) = 2;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_2 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x174) = 0;
  *(undefined8 *)((longlong)param_2 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x184) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x194) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x204) = 0;
  param_2[0x42] = 0;
  *(undefined4 *)(param_2 + 0x43) = 0;
  *(undefined8 *)((longlong)param_2 + 0x22d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x235) = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x26] = &PTR_FUN_14ac52c10;
  param_2[0x4c] = 0;
  return;
}



// FUNCTION 147f25a12 FUN_147f25a12 body=262 status=ok
// SIG undefined FUN_147f25a12(void)

void FUN_147f25a12(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  param_2[0x23] = 0;
  param_2[0x24] = 0x800000000;
  param_2[0x25] = 0xbf80000000000000;
  *param_2 = &PTR_FUN_14ac4fd80;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  *(undefined4 *)(param_2 + 0x2d) = 2;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_2 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x174) = 0;
  *(undefined8 *)((longlong)param_2 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x184) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x194) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x204) = 0;
  param_2[0x42] = 0;
  *(undefined4 *)(param_2 + 0x43) = 0;
  *(undefined8 *)((longlong)param_2 + 0x22d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x235) = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x26] = &PTR_FUN_14ac52c10;
  param_2[0x4c] = 0;
  return;
}



// FUNCTION 147f25b68 FUN_147f25b68 body=59 status=ok
// SIG undefined FUN_147f25b68(void)

undefined8 FUN_147f25b68(longlong *param_1)

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



// FUNCTION 147f25bb4 FUN_147f25bb4 body=38 status=ok
// SIG undefined FUN_147f25bb4(void)

void FUN_147f25bb4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_147f2886e(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 147f25c2a FUN_147f25c2a body=37 status=ok
// SIG undefined FUN_147f25c2a(void)

void FUN_147f25c2a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xd0);
  FUN_147f24490(param_2);
  return;
}



// FUNCTION 147f25c9c FUN_147f25c9c body=178 status=ok
// SIG undefined FUN_147f25c9c(void)

undefined8 FUN_147f25c9c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + lVar10;
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      FUN_1470d00c2();
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_144983130(lVar1 + 0x38,lVar2 + 0x38);
      *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar2 + 0x70);
      *(undefined1 *)(lVar1 + 0x78) = *(undefined1 *)(lVar2 + 0x78);
      FUN_147f246c6(param_2 + lVar10 + 0x80,param_3 + lVar10 + 0x80);
      lVar10 = lVar10 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f25d76 FUN_147f25d76 body=59 status=ok
// SIG undefined FUN_147f25d76(void)

undefined8 FUN_147f25d76(longlong *param_1)

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



// FUNCTION 147f25dc2 FUN_147f25dc2 body=38 status=ok
// SIG undefined FUN_147f25dc2(void)

void FUN_147f25dc2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_147f24566(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 147f25e38 FUN_147f25e38 body=120 status=ok
// SIG undefined FUN_147f25e38(void)

void FUN_147f25e38(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1c0);
  FUN_140ecb986(param_2);
  param_2[0x23] = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x124) = 8;
  param_2[0x25] = 0xbf80000000000000;
  *param_2 = &PTR_FUN_14ac4f1a0;
  param_2[0x36] = 0;
  param_2[0x37] = 0x800000000;
  return;
}



// FUNCTION 147f25eb0 FUN_147f25eb0 body=102 status=ok
// SIG undefined FUN_147f25eb0(void)

void FUN_147f25eb0(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  param_2[0x23] = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x124) = 8;
  param_2[0x25] = 0xbf80000000000000;
  *param_2 = &PTR_FUN_14ac4f1a0;
  param_2[0x36] = 0;
  param_2[0x37] = 0x800000000;
  return;
}



// FUNCTION 147f25f3a FUN_147f25f3a body=122 status=ok
// SIG undefined FUN_147f25f3a(void)

undefined8 FUN_147f25f3a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    FUN_147f23e54(param_2 + 0xd8,param_3 + 0xd8);
    *(undefined8 *)(param_2 + 0x128) = *(undefined8 *)(param_3 + 0x128);
    FUN_147f24ad4(param_2 + 0x130,param_3 + 0x130);
    param_2 = param_2 + 0x1c0;
    param_3 = param_3 + 0x1c0;
  }
  return 1;
}



// FUNCTION 147f25fdc FUN_147f25fdc body=59 status=ok
// SIG undefined FUN_147f25fdc(void)

undefined8 FUN_147f25fdc(longlong *param_1)

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



// FUNCTION 147f26028 FUN_147f26028 body=38 status=ok
// SIG undefined FUN_147f26028(void)

void FUN_147f26028(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c0) == '\x01') {
    FUN_145a35c02(param_2);
    *(undefined1 *)(param_2 + 0x1c0) = 0;
  }
  return;
}



// FUNCTION 147f26102 FUN_147f26102 body=59 status=ok
// SIG undefined FUN_147f26102(void)

undefined8 FUN_147f26102(longlong *param_1)

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



// FUNCTION 147f261a4 FUN_147f261a4 body=59 status=ok
// SIG undefined FUN_147f261a4(void)

void FUN_147f261a4(undefined8 param_1,undefined8 *param_2)

{
  FUN_147f24490(param_2);
  *param_2 = &PTR_FUN_14ac506c0;
  *(undefined4 *)(param_2 + 0x1a) = 0;
  *(undefined1 *)((longlong)param_2 + 0xd4) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 147f26208 FUN_147f26208 body=63 status=ok
// SIG undefined FUN_147f26208(void)

undefined1 FUN_147f26208(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2634c(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 147f26270 FUN_147f26270 body=59 status=ok
// SIG undefined FUN_147f26270(void)

undefined8 FUN_147f26270(longlong *param_1)

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



// FUNCTION 147f262bc FUN_147f262bc body=65 status=ok
// SIG undefined FUN_147f262bc(void)

void FUN_147f262bc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    *param_2 = &PTR_FUN_14ac506c0;
    if (param_2[0x1b] != 0) {
      FUN_1400020a8();
    }
    FUN_147f24566(param_2);
    *(undefined1 *)(param_2 + 0x1d) = 0;
  }
  return;
}



// FUNCTION 147f2634c FUN_147f2634c body=139 status=ok
// SIG undefined FUN_147f2634c(void)

longlong FUN_147f2634c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  FUN_147f246c6(param_1 + 0x80,param_2 + 0x80);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0xd4) = *(undefined1 *)(param_2 + 0xd4);
  FUN_147f263d8(param_1 + 0xd8,param_2 + 0xd8);
  return param_1;
}



// FUNCTION 147f263d8 FUN_147f263d8 body=88 status=ok
// SIG undefined FUN_147f263d8(void)

undefined8 * FUN_147f263d8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f26430(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f26430 FUN_147f26430 body=98 status=ok
// SIG undefined FUN_147f26430(void)

void FUN_147f26430(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,1);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,1);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147f26494 FUN_147f26494 body=79 status=ok
// SIG undefined FUN_147f26494(void)

void FUN_147f26494(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  param_2[0x23] = 0;
  param_2[0x24] = 0x800000000;
  param_2[0x25] = 0xbf80000000000000;
  param_2[0x36] = 0;
  param_2[0x37] = 0x800000000;
  *param_2 = &PTR_FUN_14ac508c0;
  return;
}



// FUNCTION 147f26508 FUN_147f26508 body=122 status=ok
// SIG undefined FUN_147f26508(void)

undefined8 FUN_147f26508(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    FUN_147f23e54(param_2 + 0xd8,param_3 + 0xd8);
    *(undefined8 *)(param_2 + 0x128) = *(undefined8 *)(param_3 + 0x128);
    FUN_147f24ad4(param_2 + 0x130,param_3 + 0x130);
    param_2 = param_2 + 0x1c0;
    param_3 = param_3 + 0x1c0;
  }
  return 1;
}



// FUNCTION 147f265aa FUN_147f265aa body=59 status=ok
// SIG undefined FUN_147f265aa(void)

undefined8 FUN_147f265aa(longlong *param_1)

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



// FUNCTION 147f265f6 FUN_147f265f6 body=38 status=ok
// SIG undefined FUN_147f265f6(void)

void FUN_147f265f6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c0) == '\x01') {
    FUN_145a35c02(param_2);
    *(undefined1 *)(param_2 + 0x1c0) = 0;
  }
  return;
}



// FUNCTION 147f266d0 FUN_147f266d0 body=59 status=ok
// SIG undefined FUN_147f266d0(void)

undefined8 FUN_147f266d0(longlong *param_1)

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



// FUNCTION 147f26772 FUN_147f26772 body=59 status=ok
// SIG undefined FUN_147f26772(void)

void FUN_147f26772(undefined8 param_1,undefined8 *param_2)

{
  FUN_147f24490(param_2);
  *param_2 = &PTR_FUN_14ac4e9b0;
  param_2[0x1a] = 0x3f0000003f000000;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 147f267d6 FUN_147f267d6 body=63 status=ok
// SIG undefined FUN_147f267d6(void)

undefined1 FUN_147f267d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f245ec(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 147f2683e FUN_147f2683e body=59 status=ok
// SIG undefined FUN_147f2683e(void)

undefined8 FUN_147f2683e(longlong *param_1)

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



// FUNCTION 147f2688a FUN_147f2688a body=65 status=ok
// SIG undefined FUN_147f2688a(void)

void FUN_147f2688a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    *param_2 = &PTR_FUN_14ac4e9b0;
    if (param_2[0x1b] != 0) {
      FUN_1400020a8();
    }
    FUN_147f24566(param_2);
    *(undefined1 *)(param_2 + 0x1d) = 0;
  }
  return;
}



// FUNCTION 147f2691c FUN_147f2691c body=126 status=ok
// SIG undefined FUN_147f2691c(void)

void FUN_147f2691c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  param_2[0x23] = 0;
  param_2[0x24] = 0x800000000;
  param_2[0x25] = 0xbf80000000000000;
  param_2[0x36] = 0;
  param_2[0x37] = 0x800000000;
  *(undefined4 *)(param_2 + 0x38) = 0xffffffff;
  *param_2 = &PTR_FUN_14ac4ee80;
  param_2[0x39] = 0xffffffff00000000;
  *(undefined4 *)(param_2 + 0x3a) = 0xff7fffff;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  return;
}



// FUNCTION 147f269be FUN_147f269be body=63 status=ok
// SIG undefined FUN_147f269be(void)

undefined1 FUN_147f269be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f24a4e(param_2,param_3);
    param_3 = param_3 + 0x1e8;
    param_2 = param_2 + 0x1e8;
  }
  return 1;
}



// FUNCTION 147f26a26 FUN_147f26a26 body=59 status=ok
// SIG undefined FUN_147f26a26(void)

undefined8 FUN_147f26a26(longlong *param_1)

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



// FUNCTION 147f26a72 FUN_147f26a72 body=65 status=ok
// SIG undefined FUN_147f26a72(void)

void FUN_147f26a72(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3d) == '\x01') {
    *param_2 = &PTR_FUN_14ac4ee80;
    if (param_2[0x3b] != 0) {
      FUN_1400020a8();
    }
    FUN_145a35c02(param_2);
    *(undefined1 *)(param_2 + 0x3d) = 0;
  }
  return;
}



// FUNCTION 147f26b58 FUN_147f26b58 body=66 status=ok
// SIG undefined FUN_147f26b58(void)

undefined8 FUN_147f26b58(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144983130(param_2,param_3);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
    *(undefined1 *)(param_2 + 0x3c) = *(undefined1 *)(param_3 + 0x3c);
    param_2 = param_2 + 0x40;
    param_3 = param_3 + 0x40;
  }
  return 1;
}



// FUNCTION 147f26bc2 FUN_147f26bc2 body=59 status=ok
// SIG undefined FUN_147f26bc2(void)

undefined8 FUN_147f26bc2(longlong *param_1)

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



// FUNCTION 147f26c08 FUN_147f26c08 body=32 status=ok
// SIG undefined FUN_147f26c08(void)

void FUN_147f26c08(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_144a2da94(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147f26c78 FUN_147f26c78 body=59 status=ok
// SIG undefined FUN_147f26c78(void)

void FUN_147f26c78(undefined8 param_1,undefined8 *param_2)

{
  FUN_147f24490(param_2);
  *param_2 = &PTR_FUN_14ac51100;
  *(undefined1 *)(param_2 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_2 + 0xd4) = 0x3f400000;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 147f26cdc FUN_147f26cdc body=63 status=ok
// SIG undefined FUN_147f26cdc(void)

undefined1 FUN_147f26cdc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f26eb6(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 147f26d44 FUN_147f26d44 body=59 status=ok
// SIG undefined FUN_147f26d44(void)

undefined8 FUN_147f26d44(longlong *param_1)

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



// FUNCTION 147f26d90 FUN_147f26d90 body=38 status=ok
// SIG undefined FUN_147f26d90(void)

void FUN_147f26d90(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_147f26e04(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 147f26e04 FUN_147f26e04 body=178 status=ok
// SIG undefined FUN_147f26e04(void)

void FUN_147f26e04(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac51100;
  FUN_140e8bc40(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac4eaf0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 147f26eb6 FUN_147f26eb6 body=129 status=ok
// SIG undefined FUN_147f26eb6(void)

longlong FUN_147f26eb6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  FUN_147f246c6(param_1 + 0x80,param_2 + 0x80);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  FUN_147f26f38(param_1 + 0xd8,param_2 + 0xd8);
  return param_1;
}



// FUNCTION 147f26f38 FUN_147f26f38 body=93 status=ok
// SIG undefined FUN_147f26f38(void)

undefined8 * FUN_147f26f38(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e8bc40(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147f26f96(param_1,iVar1);
      FUN_147f26ff8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147f26f96 FUN_147f26f96 body=98 status=ok
// SIG undefined FUN_147f26f96(void)

void FUN_147f26f96(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147f26ff8 FUN_147f26ff8 body=64 status=ok
// SIG undefined FUN_147f26ff8(void)

void FUN_147f26ff8(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14034cca6(param_1,param_2);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 147f270a6 FUN_147f270a6 body=59 status=ok
// SIG undefined FUN_147f270a6(void)

undefined8 FUN_147f270a6(longlong *param_1)

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



// FUNCTION 147f27148 FUN_147f27148 body=99 status=ok
// SIG undefined FUN_147f27148(void)

void FUN_147f27148(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  param_2[0x23] = 0;
  param_2[0x24] = 0x800000000;
  param_2[0x25] = 0xbf80000000000000;
  param_2[0x36] = 0;
  param_2[0x37] = 0x800000000;
  *(undefined4 *)(param_2 + 0x38) = 0xffffffff;
  *param_2 = &PTR_FUN_14ac51460;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  return;
}



// FUNCTION 147f271d0 FUN_147f271d0 body=63 status=ok
// SIG undefined FUN_147f271d0(void)

undefined1 FUN_147f271d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f27314(param_2,param_3);
    param_3 = param_3 + 0x1d8;
    param_2 = param_2 + 0x1d8;
  }
  return 1;
}



// FUNCTION 147f27238 FUN_147f27238 body=59 status=ok
// SIG undefined FUN_147f27238(void)

undefined8 FUN_147f27238(longlong *param_1)

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



// FUNCTION 147f27284 FUN_147f27284 body=65 status=ok
// SIG undefined FUN_147f27284(void)

void FUN_147f27284(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3b) == '\x01') {
    *param_2 = &PTR_FUN_14ac51460;
    if (param_2[0x39] != 0) {
      FUN_1400020a8();
    }
    FUN_145a35c02(param_2);
    *(undefined1 *)(param_2 + 0x3b) = 0;
  }
  return;
}



// FUNCTION 147f27314 FUN_147f27314 body=107 status=ok
// SIG undefined FUN_147f27314(void)

longlong FUN_147f27314(longlong param_1,longlong param_2)

{
  FUN_147f186d8();
  FUN_147f23e54(param_1 + 0xd8,param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  FUN_147f24ad4(param_1 + 0x130,param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
  FUN_147f27380(param_1 + 0x1c8,param_2 + 0x1c8);
  return param_1;
}



// FUNCTION 147f27380 FUN_147f27380 body=88 status=ok
// SIG undefined FUN_147f27380(void)

undefined8 * FUN_147f27380(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f273d8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f273d8 FUN_147f273d8 body=98 status=ok
// SIG undefined FUN_147f273d8(void)

void FUN_147f273d8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147f2743c FUN_147f2743c body=32 status=ok
// SIG undefined FUN_147f2743c(void)

void FUN_147f2743c(undefined8 param_1,undefined8 *param_2)

{
  FUN_147f24490(param_2);
  *param_2 = &PTR_FUN_14ac4ea50;
  return;
}



// FUNCTION 147f27484 FUN_147f27484 body=178 status=ok
// SIG undefined FUN_147f27484(void)

undefined8 FUN_147f27484(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + lVar10;
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      FUN_1470d00c2();
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_144983130(lVar1 + 0x38,lVar2 + 0x38);
      *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar2 + 0x70);
      *(undefined1 *)(lVar1 + 0x78) = *(undefined1 *)(lVar2 + 0x78);
      FUN_147f246c6(param_2 + lVar10 + 0x80,param_3 + lVar10 + 0x80);
      lVar10 = lVar10 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f2755e FUN_147f2755e body=59 status=ok
// SIG undefined FUN_147f2755e(void)

undefined8 FUN_147f2755e(longlong *param_1)

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



// FUNCTION 147f275aa FUN_147f275aa body=38 status=ok
// SIG undefined FUN_147f275aa(void)

void FUN_147f275aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_147f24566(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 147f27620 FUN_147f27620 body=89 status=ok
// SIG undefined FUN_147f27620(void)

void FUN_147f27620(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  param_2[0x23] = 0;
  param_2[0x24] = 0x800000000;
  param_2[0x25] = 0xbf80000000000000;
  param_2[0x36] = 0;
  param_2[0x37] = 0x800000000;
  *param_2 = &PTR_FUN_14ac4f010;
  *(undefined4 *)(param_2 + 0x38) = 0xffffffff;
  return;
}



// FUNCTION 147f2769e FUN_147f2769e body=134 status=ok
// SIG undefined FUN_147f2769e(void)

undefined8 FUN_147f2769e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    FUN_147f23e54(param_2 + 0xd8,param_3 + 0xd8);
    *(undefined8 *)(param_2 + 0x128) = *(undefined8 *)(param_3 + 0x128);
    FUN_147f24ad4(param_2 + 0x130,param_3 + 0x130);
    *(undefined4 *)(param_2 + 0x1c0) = *(undefined4 *)(param_3 + 0x1c0);
    param_2 = param_2 + 0x1c8;
    param_3 = param_3 + 0x1c8;
  }
  return 1;
}



// FUNCTION 147f2774c FUN_147f2774c body=59 status=ok
// SIG undefined FUN_147f2774c(void)

undefined8 FUN_147f2774c(longlong *param_1)

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



// FUNCTION 147f27798 FUN_147f27798 body=38 status=ok
// SIG undefined FUN_147f27798(void)

void FUN_147f27798(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_145a35c02(param_2);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 147f2780e FUN_147f2780e body=48 status=ok
// SIG undefined FUN_147f2780e(void)

void FUN_147f2780e(undefined8 param_1,undefined8 *param_2)

{
  FUN_147f24490(param_2);
  *param_2 = &PTR_FUN_14ac51ac0;
  *(undefined2 *)(param_2 + 0x1a) = 0x100;
  *(undefined1 *)(param_2 + 0x1b) = 0;
  return;
}



// FUNCTION 147f27866 FUN_147f27866 body=63 status=ok
// SIG undefined FUN_147f27866(void)

undefined1 FUN_147f27866(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f279a8(param_2,param_3);
    param_3 = param_3 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return 1;
}



// FUNCTION 147f278ce FUN_147f278ce body=59 status=ok
// SIG undefined FUN_147f278ce(void)

undefined8 FUN_147f278ce(longlong *param_1)

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



// FUNCTION 147f2791a FUN_147f2791a body=64 status=ok
// SIG undefined FUN_147f2791a(void)

void FUN_147f2791a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1c) == '\x01') {
    *param_2 = &PTR_FUN_14ac51ac0;
    if (*(char *)(param_2 + 0x1b) == '\x01') {
      *(undefined1 *)(param_2 + 0x1b) = 0;
    }
    FUN_147f24566(param_2);
    *(undefined1 *)(param_2 + 0x1c) = 0;
  }
  return;
}



// FUNCTION 147f279a8 FUN_147f279a8 body=156 status=ok
// SIG undefined FUN_147f279a8(void)

longlong FUN_147f279a8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  FUN_147f246c6(param_1 + 0x80,param_2 + 0x80);
  *(undefined2 *)(param_1 + 0xd0) = *(undefined2 *)(param_2 + 0xd0);
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0xd8) == '\x01') {
      *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
      uVar8 = 1;
    }
    else {
      if (*(char *)(param_1 + 0xd8) != '\x01') {
        return param_1;
      }
      uVar8 = 0;
    }
    *(undefined1 *)(param_1 + 0xd8) = uVar8;
  }
  return param_1;
}



// FUNCTION 147f27a46 FUN_147f27a46 body=89 status=ok
// SIG undefined FUN_147f27a46(void)

void FUN_147f27a46(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  param_2[0x23] = 0;
  param_2[0x24] = 0x800000000;
  param_2[0x25] = 0xbf80000000000000;
  param_2[0x36] = 0;
  param_2[0x37] = 0x800000000;
  *(undefined4 *)(param_2 + 0x38) = 0xffffffff;
  *param_2 = &PTR_FUN_14ac51cc0;
  return;
}



// FUNCTION 147f27ac4 FUN_147f27ac4 body=134 status=ok
// SIG undefined FUN_147f27ac4(void)

undefined8 FUN_147f27ac4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    FUN_147f23e54(param_2 + 0xd8,param_3 + 0xd8);
    *(undefined8 *)(param_2 + 0x128) = *(undefined8 *)(param_3 + 0x128);
    FUN_147f24ad4(param_2 + 0x130,param_3 + 0x130);
    *(undefined4 *)(param_2 + 0x1c0) = *(undefined4 *)(param_3 + 0x1c0);
    param_2 = param_2 + 0x1c8;
    param_3 = param_3 + 0x1c8;
  }
  return 1;
}



// FUNCTION 147f27b72 FUN_147f27b72 body=59 status=ok
// SIG undefined FUN_147f27b72(void)

undefined8 FUN_147f27b72(longlong *param_1)

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



// FUNCTION 147f27bbe FUN_147f27bbe body=38 status=ok
// SIG undefined FUN_147f27bbe(void)

void FUN_147f27bbe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_145a35c02(param_2);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 147f27c98 FUN_147f27c98 body=59 status=ok
// SIG undefined FUN_147f27c98(void)

undefined8 FUN_147f27c98(longlong *param_1)

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



// FUNCTION 147f27d3a FUN_147f27d3a body=42 status=ok
// SIG undefined FUN_147f27d3a(void)

void FUN_147f27d3a(undefined8 param_1,undefined8 *param_2)

{
  FUN_147f24490(param_2);
  *param_2 = &PTR_FUN_14ac52110;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  return;
}



// FUNCTION 147f27d8c FUN_147f27d8c body=63 status=ok
// SIG undefined FUN_147f27d8c(void)

undefined1 FUN_147f27d8c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f27ed0(param_2,param_3);
    param_3 = param_3 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return 1;
}



// FUNCTION 147f27df4 FUN_147f27df4 body=59 status=ok
// SIG undefined FUN_147f27df4(void)

undefined8 FUN_147f27df4(longlong *param_1)

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



// FUNCTION 147f27e40 FUN_147f27e40 body=65 status=ok
// SIG undefined FUN_147f27e40(void)

void FUN_147f27e40(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1c) == '\x01') {
    *param_2 = &PTR_FUN_14ac52110;
    if (param_2[0x1a] != 0) {
      FUN_1400020a8();
    }
    FUN_147f24566(param_2);
    *(undefined1 *)(param_2 + 0x1c) = 0;
  }
  return;
}



// FUNCTION 147f27ed0 FUN_147f27ed0 body=115 status=ok
// SIG undefined FUN_147f27ed0(void)

longlong FUN_147f27ed0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  FUN_147f246c6(param_1 + 0x80,param_2 + 0x80);
  FUN_147f27f44(param_1 + 0xd0,param_2 + 0xd0);
  return param_1;
}



// FUNCTION 147f27f44 FUN_147f27f44 body=88 status=ok
// SIG undefined FUN_147f27f44(void)

undefined8 * FUN_147f27f44(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f27f9c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f27f9c FUN_147f27f9c body=98 status=ok
// SIG undefined FUN_147f27f9c(void)

void FUN_147f27f9c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f28064 FUN_147f28064 body=59 status=ok
// SIG undefined FUN_147f28064(void)

undefined8 FUN_147f28064(longlong *param_1)

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



// FUNCTION 147f28106 FUN_147f28106 body=99 status=ok
// SIG undefined FUN_147f28106(void)

void FUN_147f28106(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  param_2[0x23] = 0;
  param_2[0x24] = 0x800000000;
  param_2[0x25] = 0xbf80000000000000;
  param_2[0x36] = 0;
  param_2[0x37] = 0x800000000;
  *(undefined4 *)(param_2 + 0x38) = 0xffffffff;
  *param_2 = &PTR_FUN_14ac52490;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  return;
}



// FUNCTION 147f2818e FUN_147f2818e body=63 status=ok
// SIG undefined FUN_147f2818e(void)

undefined1 FUN_147f2818e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2830c(param_2,param_3);
    param_3 = param_3 + 0x1d8;
    param_2 = param_2 + 0x1d8;
  }
  return 1;
}



// FUNCTION 147f281f6 FUN_147f281f6 body=59 status=ok
// SIG undefined FUN_147f281f6(void)

undefined8 FUN_147f281f6(longlong *param_1)

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



// FUNCTION 147f28242 FUN_147f28242 body=65 status=ok
// SIG undefined FUN_147f28242(void)

void FUN_147f28242(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3b) == '\x01') {
    *param_2 = &PTR_FUN_14ac52490;
    if (param_2[0x39] != 0) {
      FUN_1400020a8();
    }
    FUN_145a35c02(param_2);
    *(undefined1 *)(param_2 + 0x3b) = 0;
  }
  return;
}



// FUNCTION 147f282d2 FUN_147f282d2 body=57 status=ok
// SIG undefined FUN_147f282d2(void)

void FUN_147f282d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21ed0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21ed0 = FUN_140002ddd(FUN_14643668c,uVar1,L"GbxBrainTask_StateMachine");
  }
  return;
}



// FUNCTION 147f2830c FUN_147f2830c body=107 status=ok
// SIG undefined FUN_147f2830c(void)

longlong FUN_147f2830c(longlong param_1,longlong param_2)

{
  FUN_147f186d8();
  FUN_147f23e54(param_1 + 0xd8,param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  FUN_147f24ad4(param_1 + 0x130,param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
  FUN_147f28378(param_1 + 0x1c8,param_2 + 0x1c8);
  return param_1;
}



// FUNCTION 147f28378 FUN_147f28378 body=84 status=ok
// SIG undefined FUN_147f28378(void)

undefined8 * FUN_147f28378(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f283cc(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f283cc FUN_147f283cc body=90 status=ok
// SIG undefined FUN_147f283cc(void)

void FUN_147f283cc(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (param_3 < iVar2) {
    FUN_1446f8d3c(param_1,0,iVar2,1,1);
    param_3 = iVar2;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147f28458 FUN_147f28458 body=175 status=ok
// SIG undefined FUN_147f28458(void)

undefined8 FUN_147f28458(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + 8 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar10);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1470d00c2(param_2 + 0x28 + lVar10,param_3 + 0x28 + lVar10);
      FUN_144983130(param_2 + 0x38 + lVar10,param_3 + 0x38 + lVar10);
      *(undefined8 *)(param_2 + 0x70 + lVar10) = *(undefined8 *)(param_3 + 0x70 + lVar10);
      *(undefined1 *)(param_2 + 0x78 + lVar10) = *(undefined1 *)(param_3 + 0x78 + lVar10);
      *(undefined8 *)(param_2 + 0x80 + lVar10) = *(undefined8 *)(param_3 + 0x80 + lVar10);
      lVar10 = lVar10 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f28530 FUN_147f28530 body=59 status=ok
// SIG undefined FUN_147f28530(void)

undefined8 FUN_147f28530(longlong *param_1)

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



// FUNCTION 147f2857c FUN_147f2857c body=57 status=ok
// SIG undefined FUN_147f2857c(void)

void FUN_147f2857c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *param_2 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_2 + 7);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x11) = 0;
  }
  return;
}



// FUNCTION 147f28604 FUN_147f28604 body=102 status=ok
// SIG undefined FUN_147f28604(void)

undefined8 * FUN_147f28604(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR_FUN_14ac52790;
  param_1[0x10] = 0;
  return param_1;
}



// FUNCTION 147f2866c FUN_147f2866c body=242 status=ok
// SIG undefined FUN_147f2866c(void)

void FUN_147f2866c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  param_2[0x23] = 0;
  param_2[0x24] = 0x800000000;
  param_2[0x25] = 0xbf80000000000000;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  *(undefined4 *)(param_2 + 0x2d) = 2;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_2 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x174) = 0;
  *(undefined8 *)((longlong)param_2 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x184) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x194) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x204) = 0;
  param_2[0x42] = 0;
  *(undefined4 *)(param_2 + 0x43) = 0;
  *(undefined8 *)((longlong)param_2 + 0x22d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x235) = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x26] = &PTR_FUN_14ac52c10;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  *param_2 = &PTR_FUN_14ac52990;
  return;
}



// FUNCTION 147f287ae FUN_147f287ae body=59 status=ok
// SIG undefined FUN_147f287ae(void)

undefined8 FUN_147f287ae(longlong *param_1)

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



// FUNCTION 147f287fa FUN_147f287fa body=38 status=ok
// SIG undefined FUN_147f287fa(void)

void FUN_147f287fa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x270) == '\x01') {
    FUN_147f2886e(param_2);
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
  return;
}



// FUNCTION 147f2886e FUN_147f2886e body=111 status=ok
// SIG undefined FUN_147f2886e(void)

void FUN_147f2886e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac4fd80;
  param_1[0x26] = &PTR_FUN_14ac52c10;
  if (param_1[0x2e] != 0) {
    FUN_14387f5b2(param_1 + 0x26);
  }
  FUN_1403d7f26(param_1 + 0x26);
  *param_1 = &PTR_FUN_14ac4dde0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_14049e650(param_1);
  return;
}



// FUNCTION 147f28938 FUN_147f28938 body=148 status=ok
// SIG undefined FUN_147f28938(void)

void FUN_147f28938(undefined8 param_1,longlong param_2)

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
  FUN_143897ab4(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f289ce FUN_147f289ce body=156 status=ok
// SIG undefined FUN_147f289ce(void)

void FUN_147f289ce(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_143897cb0(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f28a72 FUN_147f28a72 body=324 status=ok
// SIG undefined FUN_147f28a72(void)

void FUN_147f28a72(undefined8 param_1,longlong param_2)

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
  FUN_143897214(local_18,local_20,local_24 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f28bb8 FUN_147f28bb8 body=148 status=ok
// SIG undefined FUN_147f28bb8(void)

void FUN_147f28bb8(undefined8 param_1,longlong param_2)

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
  FUN_143898a34(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f28c4e FUN_147f28c4e body=230 status=ok
// SIG undefined FUN_147f28c4e(void)

void FUN_147f28c4e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  FUN_143898a9a(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f28d36 FUN_147f28d36 body=155 status=ok
// SIG undefined FUN_147f28d36(void)

void FUN_147f28d36(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_143897ede(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f28de4 FUN_147f28de4 body=390 status=ok
// SIG undefined FUN_147f28de4(void)

void FUN_147f28de4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar1 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143897f44(local_28,plVar1,plVar2);
  if ((DAT_14c950c29 == '\x01') && (*plVar1 != 0)) {
    FUN_14689c22e();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f28f6c FUN_147f28f6c body=221 status=ok
// SIG undefined FUN_147f28f6c(void)

void FUN_147f28f6c(undefined8 param_1,longlong param_2,longlong *param_3)

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
  FUN_1438982e2(&local_30,local_20);
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



// FUNCTION 147f29050 FUN_147f29050 body=332 status=ok
// SIG undefined FUN_147f29050(void)

void FUN_147f29050(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar2 = local_40;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1438985d0(local_20,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f291a4 FUN_147f291a4 body=324 status=ok
// SIG undefined FUN_147f291a4(void)

void FUN_147f291a4(undefined8 param_1,longlong param_2)

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
  FUN_1438987a0(local_18,local_20,local_24 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f292f6 FUN_147f292f6 body=331 status=ok
// SIG undefined FUN_147f292f6(void)

void FUN_147f292f6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
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
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1438986a4(local_20,local_28,local_2c != 0);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f29454 FUN_147f29454 body=413 status=ok
// SIG undefined FUN_147f29454(void)

void FUN_147f29454(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  int local_30;
  int local_2c;
  undefined8 local_28;
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
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar1 = local_2c;
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143898700(local_20,local_28,iVar1 != 0,local_30 != 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f295fe FUN_147f295fe body=413 status=ok
// SIG undefined FUN_147f295fe(void)

void FUN_147f295fe(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  int local_30;
  int local_2c;
  undefined8 local_28;
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
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar1 = local_2c;
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143898642(local_20,local_28,iVar1 != 0,local_30 != 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f2979c FUN_147f2979c body=148 status=ok
// SIG undefined FUN_147f2979c(void)

void FUN_147f2979c(undefined8 param_1,longlong param_2)

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
  FUN_143898844(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f29838 FUN_147f29838 body=324 status=ok
// SIG undefined FUN_147f29838(void)

void FUN_147f29838(undefined8 param_1,longlong param_2)

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
  thunk_FUN_1438987a0(local_18,local_20,local_24 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f2998e FUN_147f2998e body=319 status=ok
// SIG undefined FUN_147f2998e(void)

void FUN_147f2998e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined2 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined2 local_58;
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = 0;
  local_58 = 0xffff;
  local_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_60;
  local_80 = local_58;
  local_78 = local_50;
  FUN_146441ddc(&local_88,local_48,0);
  FUN_141710b0e(local_48,&local_70,1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (&local_70 == param_3) {
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_70;
    *(undefined4 *)(param_3 + 1) = local_68;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_64;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f29ace FUN_147f29ace body=201 status=ok
// SIG undefined FUN_147f29ace(void)

void FUN_147f29ace(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
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
  FUN_140d0d668(&local_38,local_20);
  if ((*param_3 != local_38) || ((int)param_3[1] != local_30)) {
    *param_3 = local_38;
    *(int *)(param_3 + 1) = local_30;
    param_3[2] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f29b98 FUN_147f29b98 body=240 status=ok
// SIG undefined FUN_147f29b98(void)

void FUN_147f29b98(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong local_50;
  int local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  local_30 = 0x4000;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  local_60 = local_30;
  local_58 = 0;
  FUN_14389a1fa(&local_50);
  if ((*param_3 != local_50) || ((int)param_3[1] != local_48)) {
    *param_3 = local_50;
    *(int *)(param_3 + 1) = local_48;
    param_3[2] = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f29c90 FUN_147f29c90 body=280 status=ok
// SIG undefined FUN_147f29c90(void)

void FUN_147f29c90(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_40 = 0;
  local_38 = 0xf;
  local_30 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  local_50 = local_38;
  local_48 = 0;
  uVar1 = FUN_14389a284(local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f29db0 FUN_147f29db0 body=335 status=ok
// SIG undefined FUN_147f29db0(void)

void FUN_147f29db0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined2 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined2 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  local_30 = 0xffff;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_50 = 0;
  local_48 = 0xffff;
  local_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_50;
  local_60 = local_48;
  local_58 = local_40;
  local_80 = local_38;
  local_78 = local_30;
  local_70 = local_28;
  uVar1 = FUN_14389a1a0();
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f29f00 FUN_147f29f00 body=230 status=ok
// SIG undefined FUN_147f29f00(void)

void FUN_147f29f00(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  FUN_147f5e5ca(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f29fee FUN_147f29fee body=50 status=ok
// SIG undefined FUN_147f29fee(void)

void FUN_147f29fee(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x390) + 0x10))(param_1 + 0x390);
  *param_3 = uVar1;
  return;
}



// FUNCTION 147f2a028 FUN_147f2a028 body=75 status=ok
// SIG undefined FUN_147f2a028(void)

void FUN_147f2a028(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_141814202(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f2a07c FUN_147f2a07c body=45 status=ok
// SIG undefined FUN_147f2a07c(void)

longlong FUN_147f2a07c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1407600ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f2a0b0 FUN_147f2a0b0 body=48 status=ok
// SIG undefined FUN_147f2a0b0(void)

longlong FUN_147f2a0b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_1407600ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f2a0e8 FUN_147f2a0e8 body=48 status=ok
// SIG undefined FUN_147f2a0e8(void)

longlong FUN_147f2a0e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_1407600ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f2a120 FUN_147f2a120 body=48 status=ok
// SIG undefined FUN_147f2a120(void)

longlong FUN_147f2a120(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_1407600ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f2a1d8 FUN_147f2a1d8 body=59 status=ok
// SIG undefined FUN_147f2a1d8(void)

undefined8 FUN_147f2a1d8(longlong *param_1)

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



// FUNCTION 147f2a278 FUN_147f2a278 body=55 status=ok
// SIG undefined FUN_147f2a278(void)

void FUN_147f2a278(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22018 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22018 = FUN_140002ddd(FUN_1464373a3,uVar1,L"GbxCondition_IsInCover");
  }
  return;
}



// FUNCTION 147f2a2e4 FUN_147f2a2e4 body=63 status=ok
// SIG undefined FUN_147f2a2e4(void)

undefined1 FUN_147f2a2e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2a412(param_2,param_3);
    param_3 = param_3 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return 1;
}



// FUNCTION 147f2a34c FUN_147f2a34c body=59 status=ok
// SIG undefined FUN_147f2a34c(void)

undefined8 FUN_147f2a34c(longlong *param_1)

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



// FUNCTION 147f2a398 FUN_147f2a398 body=40 status=ok
// SIG undefined FUN_147f2a398(void)

void FUN_147f2a398(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_1456c3050(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 147f2a412 FUN_147f2a412 body=179 status=ok
// SIG undefined FUN_147f2a412(void)

longlong FUN_147f2a412(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar3 = *(longlong *)(param_2 + 0x28);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(longlong *)(param_1 + 0x28) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  uVar5 = *(undefined4 *)(param_2 + 0x34);
  uVar6 = *(undefined4 *)(param_2 + 0x38);
  uVar7 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  *(undefined4 *)(param_1 + 0x3c) = uVar7;
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  uVar5 = *(undefined4 *)(param_2 + 0x84);
  uVar6 = *(undefined4 *)(param_2 + 0x88);
  uVar7 = *(undefined4 *)(param_2 + 0x8c);
  uVar8 = *(undefined4 *)(param_2 + 0x90);
  uVar9 = *(undefined4 *)(param_2 + 0x94);
  uVar10 = *(undefined4 *)(param_2 + 0x98);
  uVar11 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = uVar5;
  *(undefined4 *)(param_1 + 0x88) = uVar6;
  *(undefined4 *)(param_1 + 0x8c) = uVar7;
  *(undefined4 *)(param_1 + 0x90) = uVar8;
  *(undefined4 *)(param_1 + 0x94) = uVar9;
  *(undefined4 *)(param_1 + 0x98) = uVar10;
  *(undefined4 *)(param_1 + 0x9c) = uVar11;
  FUN_144983130(param_1 + 0xa0,param_2 + 0xa0);
  FUN_144983130(param_1 + 0xd8,param_2 + 0xd8);
  return param_1;
}



// FUNCTION 147f2a4c6 FUN_147f2a4c6 body=38 status=ok
// SIG undefined FUN_147f2a4c6(void)

undefined8 FUN_147f2a4c6(undefined8 param_1,int param_2)

{
  FUN_1456c3050();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f2a4ec FUN_147f2a4ec body=55 status=ok
// SIG undefined FUN_147f2a4ec(void)

void FUN_147f2a4ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22030 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22030 = FUN_140002ddd(FUN_146437439,uVar1,L"GbxGlobalsAI");
  }
  return;
}



// FUNCTION 147f2a528 FUN_147f2a528 body=28 status=ok
// SIG undefined FUN_147f2a528(void)

undefined8 FUN_147f2a528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 147f2a5d6 FUN_147f2a5d6 body=59 status=ok
// SIG undefined FUN_147f2a5d6(void)

undefined8 FUN_147f2a5d6(longlong *param_1)

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



// FUNCTION 147f2a6ec FUN_147f2a6ec body=54 status=ok
// SIG undefined FUN_147f2a6ec(void)

undefined1 FUN_147f2a6ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2a800(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 147f2a74a FUN_147f2a74a body=59 status=ok
// SIG undefined FUN_147f2a74a(void)

undefined8 FUN_147f2a74a(longlong *param_1)

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



// FUNCTION 147f2a790 FUN_147f2a790 body=34 status=ok
// SIG undefined FUN_147f2a790(void)

void FUN_147f2a790(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_145bdad54(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 147f2a800 FUN_147f2a800 body=311 status=ok
// SIG undefined FUN_147f2a800(void)

longlong * FUN_147f2a800(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    param_1[2] = 0;
  }
  lVar7 = param_2[3];
  if (DAT_14c950c29 == 1) {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_14689c22e();
      lVar7 = param_2[3];
    }
  }
  bVar6 = DAT_14c950c29;
  param_1[3] = lVar7;
  lVar7 = param_2[4];
  if ((bVar6 & 1) != 0) {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_14689c22e();
      lVar7 = param_2[4];
      bVar6 = DAT_14c950c29;
    }
  }
  param_1[4] = lVar7;
  lVar7 = param_2[5];
  if ((bVar6 & 1) != 0) {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_14689c22e();
      lVar7 = param_2[5];
    }
  }
  param_1[5] = lVar7;
  lVar7 = param_2[6];
  lVar3 = param_2[7];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[7];
  param_1[6] = lVar7;
  param_1[7] = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  lVar7 = param_2[8];
  lVar3 = param_2[9];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[9];
  param_1[8] = lVar7;
  param_1[9] = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  lVar7 = param_2[10];
  lVar3 = param_2[0xb];
  lVar5 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = lVar5;
  param_1[10] = lVar7;
  param_1[0xb] = lVar3;
  return param_1;
}



// FUNCTION 147f2a938 FUN_147f2a938 body=37 status=ok
// SIG undefined FUN_147f2a938(void)

void FUN_147f2a938(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x128);
  FUN_1411237f4(param_2);
  return;
}



// FUNCTION 147f2a984 FUN_147f2a984 body=63 status=ok
// SIG undefined FUN_147f2a984(void)

undefined1 FUN_147f2a984(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2aaac(param_2,param_3);
    param_3 = param_3 + 0x128;
    param_2 = param_2 + 0x128;
  }
  return 1;
}



// FUNCTION 147f2a9ec FUN_147f2a9ec body=59 status=ok
// SIG undefined FUN_147f2a9ec(void)

undefined8 FUN_147f2a9ec(longlong *param_1)

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



// FUNCTION 147f2aa38 FUN_147f2aa38 body=38 status=ok
// SIG undefined FUN_147f2aa38(void)

void FUN_147f2aa38(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x128) == '\x01') {
    FUN_140cbb40e(param_2);
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return;
}



// FUNCTION 147f2aaac FUN_147f2aaac body=141 status=ok
// SIG undefined FUN_147f2aaac(void)

longlong FUN_147f2aaac(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != param_1) {
    FUN_147f2ab3a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  FUN_1447a0e5a(param_1 + 0x50,param_2 + 0x50);
  *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(param_2 + 0xa0);
  FUN_144aebb94(param_1 + 0xa8,param_2 + 0xa8);
  *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
  FUN_140b177d4(param_1 + 0x100,param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  return param_1;
}



// FUNCTION 147f2ab3a FUN_147f2ab3a body=304 status=ok
// SIG undefined FUN_147f2ab3a(void)

void FUN_147f2ab3a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f2acf8 FUN_147f2acf8 body=59 status=ok
// SIG undefined FUN_147f2acf8(void)

undefined8 FUN_147f2acf8(longlong *param_1)

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



// FUNCTION 147f2adac FUN_147f2adac body=107 status=ok
// SIG undefined FUN_147f2adac(void)

undefined1 FUN_147f2adac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      FUN_141289ada(param_2 + -0x30,param_3 + -0x30);
      uVar1 = *(undefined4 *)(param_3 + -0x1c);
      uVar2 = *(undefined4 *)(param_3 + -0x18);
      uVar3 = *(undefined4 *)(param_3 + -0x14);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0x10);
      uVar6 = *(undefined4 *)(param_3 + -0xc);
      uVar7 = *(undefined4 *)(param_3 + -8);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar1;
      *(undefined4 *)(param_2 + -0x18) = uVar2;
      *(undefined4 *)(param_2 + -0x14) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      *(undefined4 *)(param_2 + -0x10) = uVar5;
      *(undefined4 *)(param_2 + -0xc) = uVar6;
      *(undefined4 *)(param_2 + -8) = uVar7;
      FUN_147f194d2(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      uVar3 = *(undefined4 *)(param_3 + 0x1c);
      uVar4 = *(undefined4 *)(param_3 + 0x1c);
      uVar5 = *(undefined4 *)(param_3 + 0x20);
      uVar6 = *(undefined4 *)(param_3 + 0x24);
      uVar7 = *(undefined4 *)(param_3 + 0x28);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = uVar1;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
      *(undefined4 *)(param_2 + 0x1c) = uVar4;
      *(undefined4 *)(param_2 + 0x20) = uVar5;
      *(undefined4 *)(param_2 + 0x24) = uVar6;
      *(undefined4 *)(param_2 + 0x28) = uVar7;
      param_3 = param_3 + 0x68;
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f2ae40 FUN_147f2ae40 body=59 status=ok
// SIG undefined FUN_147f2ae40(void)

undefined8 FUN_147f2ae40(longlong *param_1)

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



// FUNCTION 147f2ae86 FUN_147f2ae86 body=32 status=ok
// SIG undefined FUN_147f2ae86(void)

void FUN_147f2ae86(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_147f2af48(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 147f2af48 FUN_147f2af48 body=61 status=ok
// SIG undefined FUN_147f2af48(void)

void FUN_147f2af48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac5b3a0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 147f2b004 FUN_147f2b004 body=59 status=ok
// SIG undefined FUN_147f2b004(void)

undefined8 FUN_147f2b004(longlong *param_1)

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



// FUNCTION 147f2b0d4 FUN_147f2b0d4 body=63 status=ok
// SIG undefined FUN_147f2b0d4(void)

undefined1 FUN_147f2b0d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2b1fc(param_2,param_3);
    param_3 = param_3 + 0x1c8;
    param_2 = param_2 + 0x1c8;
  }
  return 1;
}



// FUNCTION 147f2b13c FUN_147f2b13c body=59 status=ok
// SIG undefined FUN_147f2b13c(void)

undefined8 FUN_147f2b13c(longlong *param_1)

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



// FUNCTION 147f2b188 FUN_147f2b188 body=38 status=ok
// SIG undefined FUN_147f2b188(void)

void FUN_147f2b188(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_14063a842(param_2);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}


