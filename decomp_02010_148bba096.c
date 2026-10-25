// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148bba096 FUN_148bba096 body=38 status=ok
// SIG undefined FUN_148bba096(void)

undefined8 FUN_148bba096(undefined8 param_1,int param_2)

{
  FUN_148bba0f4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bba0bc FUN_148bba0bc body=55 status=ok
// SIG undefined FUN_148bba0bc(void)

void FUN_148bba0bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2fb0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2fb0 = FUN_140002ddd(FUN_1465b7bb3,uVar1,L"GbxSkillComponent_ShotModifierEx");
  }
  return;
}



// FUNCTION 148bba0f4 FUN_148bba0f4 body=97 status=ok
// SIG undefined FUN_148bba0f4(void)

void FUN_148bba0f4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b6477b0;
  FUN_148bba155(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xb];
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
  FUN_140d8c2c6(param_1);
  return;
}



// FUNCTION 148bba155 FUN_148bba155 body=73 status=ok
// SIG undefined FUN_148bba155(void)

void FUN_148bba155(longlong param_1,int param_2)

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



// FUNCTION 148bba19e FUN_148bba19e body=116 status=ok
// SIG undefined FUN_148bba19e(void)

longlong FUN_148bba19e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_148704de0();
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  lVar4 = *(longlong *)(param_2 + 0x58);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(longlong *)(param_1 + 0x58) = lVar4;
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
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  FUN_148bba212(param_1 + 0x68,param_2 + 0x68);
  return param_1;
}



// FUNCTION 148bba212 FUN_148bba212 body=95 status=ok
// SIG undefined FUN_148bba212(void)

undefined8 * FUN_148bba212(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148bba155(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148bba272(param_1,iVar1);
      FUN_148bba2d4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bba272 FUN_148bba272 body=98 status=ok
// SIG undefined FUN_148bba272(void)

void FUN_148bba272(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148bba2d4 FUN_148bba2d4 body=45 status=ok
// SIG undefined FUN_148bba2d4(void)

void FUN_148bba2d4(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 148bba37a FUN_148bba37a body=54 status=ok
// SIG undefined FUN_148bba37a(void)

undefined1 FUN_148bba37a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bba574(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148bba3d8 FUN_148bba3d8 body=59 status=ok
// SIG undefined FUN_148bba3d8(void)

undefined8 FUN_148bba3d8(longlong *param_1)

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



// FUNCTION 148bba41e FUN_148bba41e body=34 status=ok
// SIG undefined FUN_148bba41e(void)

void FUN_148bba41e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_148bba4ec(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148bba48e FUN_148bba48e body=38 status=ok
// SIG undefined FUN_148bba48e(void)

undefined8 FUN_148bba48e(undefined8 param_1,int param_2)

{
  FUN_148bba4ec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bba4b4 FUN_148bba4b4 body=55 status=ok
// SIG undefined FUN_148bba4b4(void)

void FUN_148bba4b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2fc8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2fc8 = FUN_140002ddd(FUN_1465b7c49,uVar1,L"GbxSkillComponentDataItem_ShotModifierEx");
  }
  return;
}



// FUNCTION 148bba4ec FUN_148bba4ec body=135 status=ok
// SIG undefined FUN_148bba4ec(void)

void FUN_148bba4ec(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b647960;
  FUN_140b47c46(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[8];
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
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b23dd30;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148bba574 FUN_148bba574 body=85 status=ok
// SIG undefined FUN_148bba574(void)

longlong FUN_148bba574(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  FUN_148bba5ca(param_1 + 0x28,param_2 + 0x28);
  FUN_1401f3db8(param_1 + 0x38,param_2 + 0x38);
  FUN_148707dde(param_1 + 0x50,param_2 + 0x50);
  return param_1;
}



// FUNCTION 148bba5ca FUN_148bba5ca body=79 status=ok
// SIG undefined FUN_148bba5ca(void)

undefined8 * FUN_148bba5ca(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148bba61a(param_1,iVar1);
      FUN_148bba68d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bba61a FUN_148bba61a body=115 status=ok
// SIG undefined FUN_148bba61a(void)

void FUN_148bba61a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148bba68d FUN_148bba68d body=44 status=ok
// SIG undefined FUN_148bba68d(void)

void FUN_148bba68d(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      *(undefined4 *)(param_1 + 8 + lVar1) = *(undefined4 *)(param_2 + 8 + lVar1);
      *(undefined8 *)(param_1 + 0x10 + lVar1) = 0;
      lVar1 = lVar1 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148bba6ba FUN_148bba6ba body=158 status=ok
// SIG undefined FUN_148bba6ba(void)

void FUN_148bba6ba(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[0xc] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *param_2 = &PTR_FUN_14b647ad0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bba75a FUN_148bba75a body=142 status=ok
// SIG undefined FUN_148bba75a(void)

void FUN_148bba75a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *param_2 = &PTR_FUN_14b647ad0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bba80e FUN_148bba80e body=54 status=ok
// SIG undefined FUN_148bba80e(void)

undefined1 FUN_148bba80e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bbaa20(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 148bba86c FUN_148bba86c body=59 status=ok
// SIG undefined FUN_148bba86c(void)

undefined8 FUN_148bba86c(longlong *param_1)

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



// FUNCTION 148bba8b2 FUN_148bba8b2 body=34 status=ok
// SIG undefined FUN_148bba8b2(void)

void FUN_148bba8b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_148bba980(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148bba922 FUN_148bba922 body=38 status=ok
// SIG undefined FUN_148bba922(void)

undefined8 FUN_148bba922(undefined8 param_1,int param_2)

{
  FUN_148bba980();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bba948 FUN_148bba948 body=55 status=ok
// SIG undefined FUN_148bba948(void)

void FUN_148bba948(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2fe0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2fe0 = FUN_140002ddd(FUN_1465b7cdf,uVar1,L"GbxSkillComponentData_ShotModifierEx");
  }
  return;
}



// FUNCTION 148bba980 FUN_148bba980 body=121 status=ok
// SIG undefined FUN_148bba980(void)

void FUN_148bba980(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b647ad0;
  FUN_148bba9f9(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140b47c46(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x000148bba9ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148bba9f9 FUN_148bba9f9 body=38 status=ok
// SIG undefined FUN_148bba9f9(void)

void FUN_148bba9f9(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148bba4ec(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 148bbaa20 FUN_148bbaa20 body=85 status=ok
// SIG undefined FUN_148bbaa20(void)

longlong FUN_148bbaa20(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_146130eee(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  FUN_1401f3db8(param_1 + 0x30,param_2 + 0x30);
  FUN_148707dde(param_1 + 0x48,param_2 + 0x48);
  FUN_148bbaa76(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



// FUNCTION 148bbaa76 FUN_148bbaa76 body=95 status=ok
// SIG undefined FUN_148bbaa76(void)

undefined8 * FUN_148bbaa76(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148bba9f9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148bbaad6(param_1,iVar1);
      FUN_148bbab49(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bbaad6 FUN_148bbaad6 body=115 status=ok
// SIG undefined FUN_148bbaad6(void)

void FUN_148bbaad6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,8);
    iVar2 = (int)(uVar1 / 0x60);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x60,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148bbab49 FUN_148bbab49 body=52 status=ok
// SIG undefined FUN_148bbab49(void)

void FUN_148bbab49(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148bbab7e(param_1,param_2);
    param_1 = param_1 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return;
}



// FUNCTION 148bbab7e FUN_148bbab7e body=277 status=ok
// SIG undefined FUN_148bbab7e(void)

undefined8 * FUN_148bbab7e(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = &PTR_FUN_14b23dd30;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  uVar5 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  *param_1 = &PTR_FUN_14b647960;
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_148bba61a(param_1 + 5,iVar1,0);
    FUN_148bba68d(param_1[5],uVar2,iVar1);
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_1401f3db8(param_1 + 7,param_2 + 0x38);
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(int *)(param_1 + 0xb) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_148707e3c(param_1 + 10,iVar1,0);
    FUN_1404e37a8(param_1[10],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148bbac94 FUN_148bbac94 body=111 status=ok
// SIG undefined FUN_148bbac94(void)

void FUN_148bbac94(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xc0);
  FUN_145c43014(param_2);
  *(undefined4 *)(param_2 + 0xf) = 0;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *param_2 = &PTR_FUN_14b647c60;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  return;
}



// FUNCTION 148bbad04 FUN_148bbad04 body=91 status=ok
// SIG undefined FUN_148bbad04(void)

void FUN_148bbad04(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c43014(param_2);
  *(undefined4 *)(param_2 + 0xf) = 0;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *param_2 = &PTR_FUN_14b647c60;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  return;
}



// FUNCTION 148bbad84 FUN_148bbad84 body=63 status=ok
// SIG undefined FUN_148bbad84(void)

undefined1 FUN_148bbad84(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bbaf56(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 148bbadec FUN_148bbadec body=59 status=ok
// SIG undefined FUN_148bbadec(void)

undefined8 FUN_148bbadec(longlong *param_1)

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



// FUNCTION 148bbae38 FUN_148bbae38 body=40 status=ok
// SIG undefined FUN_148bbae38(void)

void FUN_148bbae38(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_148bbaf0c(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 148bbaeae FUN_148bbaeae body=38 status=ok
// SIG undefined FUN_148bbaeae(void)

undefined8 FUN_148bbaeae(undefined8 param_1,int param_2)

{
  FUN_148bbaf0c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bbaed4 FUN_148bbaed4 body=55 status=ok
// SIG undefined FUN_148bbaed4(void)

void FUN_148bbaed4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2ff8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2ff8 = FUN_140002ddd(FUN_1465b7d75,uVar1,L"GbxSkillComponent_ShotModifier");
  }
  return;
}



// FUNCTION 148bbaf0c FUN_148bbaf0c body=74 status=ok
// SIG undefined FUN_148bbaf0c(void)

void FUN_148bbaf0c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b647c60;
  plVar3 = (longlong *)param_1[0x16];
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
  FUN_145c3a550(param_1);
  return;
}



// FUNCTION 148bbaf56 FUN_148bbaf56 body=157 status=ok
// SIG undefined FUN_148bbaf56(void)

longlong FUN_148bbaf56(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_148704de0();
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  FUN_1487089fc(param_1 + 0x58,param_2 + 0x58);
  FUN_148709f4a(param_1 + 0x98,param_2 + 0x98);
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  lVar4 = *(longlong *)(param_2 + 0xb0);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  *(longlong *)(param_1 + 0xb0) = lVar4;
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
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  return param_1;
}



// FUNCTION 148bbb054 FUN_148bbb054 body=133 status=ok
// SIG undefined FUN_148bbb054(void)

undefined1 FUN_148bbb054(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_144a787a6(lVar1 + 8,lVar2 + 8);
      uVar3 = *(undefined4 *)(lVar2 + 0x1c);
      uVar4 = *(undefined4 *)(lVar2 + 0x20);
      uVar5 = *(undefined4 *)(lVar2 + 0x24);
      *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined4 *)(lVar1 + 0x1c) = uVar3;
      *(undefined4 *)(lVar1 + 0x20) = uVar4;
      *(undefined4 *)(lVar1 + 0x24) = uVar5;
      FUN_148707dde(param_2 + lVar6 + 0x28,param_3 + lVar6 + 0x28);
      FUN_148bba5ca(param_2 + lVar6 + 0x38,param_3 + lVar6 + 0x38);
      lVar6 = lVar6 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bbb102 FUN_148bbb102 body=59 status=ok
// SIG undefined FUN_148bbb102(void)

undefined8 FUN_148bbb102(longlong *param_1)

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



// FUNCTION 148bbb148 FUN_148bbb148 body=58 status=ok
// SIG undefined FUN_148bbb148(void)

void FUN_148bbb148(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 9) == '\x01') {
    *param_2 = &PTR_FUN_14b647e40;
    if (param_2[7] != 0) {
      FUN_1400020a8();
    }
    FUN_1457f72cc(param_2);
    *(undefined1 *)(param_2 + 9) = 0;
  }
  return;
}



// FUNCTION 148bbb1d0 FUN_148bbb1d0 body=65 status=ok
// SIG undefined FUN_148bbb1d0(void)

undefined8 * FUN_148bbb1d0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b647e40;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1457f72cc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bbb212 FUN_148bbb212 body=55 status=ok
// SIG undefined FUN_148bbb212(void)

void FUN_148bbb212(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3010 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3010 = FUN_140002ddd(FUN_1465b7e0b,uVar1,L"GbxSkillComponentDataItem_ShotModifier");
  }
  return;
}



// FUNCTION 148bbb24a FUN_148bbb24a body=162 status=ok
// SIG undefined FUN_148bbb24a(void)

void FUN_148bbb24a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *param_2 = &PTR_FUN_14b647fb0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bbb2ee FUN_148bbb2ee body=146 status=ok
// SIG undefined FUN_148bbb2ee(void)

void FUN_148bbb2ee(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *param_2 = &PTR_FUN_14b647fb0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bbb3a6 FUN_148bbb3a6 body=54 status=ok
// SIG undefined FUN_148bbb3a6(void)

undefined1 FUN_148bbb3a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bbb592(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148bbb404 FUN_148bbb404 body=59 status=ok
// SIG undefined FUN_148bbb404(void)

undefined8 FUN_148bbb404(longlong *param_1)

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



// FUNCTION 148bbb44a FUN_148bbb44a body=34 status=ok
// SIG undefined FUN_148bbb44a(void)

void FUN_148bbb44a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_148bbb518(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148bbb4ba FUN_148bbb4ba body=38 status=ok
// SIG undefined FUN_148bbb4ba(void)

undefined8 FUN_148bbb4ba(undefined8 param_1,int param_2)

{
  FUN_148bbb518();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bbb4e0 FUN_148bbb4e0 body=55 status=ok
// SIG undefined FUN_148bbb4e0(void)

void FUN_148bbb4e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3028 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3028 = FUN_140002ddd(FUN_1465b7ea1,uVar1,L"GbxSkillComponentData_ShotModifier");
  }
  return;
}



// FUNCTION 148bbb518 FUN_148bbb518 body=57 status=ok
// SIG undefined FUN_148bbb518(void)

void FUN_148bbb518(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b647fb0;
  FUN_148bbb551(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1457f7294(param_1);
  return;
}



// FUNCTION 148bbb551 FUN_148bbb551 body=64 status=ok
// SIG undefined FUN_148bbb551(void)

void FUN_148bbb551(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b647e40;
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    FUN_1457f72cc(param_1);
    param_1 = param_1 + 9;
  }
  return;
}



// FUNCTION 148bbb592 FUN_148bbb592 body=91 status=ok
// SIG undefined FUN_148bbb592(void)

longlong FUN_148bbb592(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_146130eee(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  FUN_145c43818(param_1 + 0x38,param_2 + 0x38);
  FUN_148707dde(param_1 + 0x50,param_2 + 0x50);
  FUN_148bbb5ee(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 148bbb5ee FUN_148bbb5ee body=95 status=ok
// SIG undefined FUN_148bbb5ee(void)

undefined8 * FUN_148bbb5ee(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148bbb551(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148bbb64e(param_1,iVar1);
      FUN_148bbb6c1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bbb64e FUN_148bbb64e body=115 status=ok
// SIG undefined FUN_148bbb64e(void)

void FUN_148bbb64e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148bbb6c1 FUN_148bbb6c1 body=52 status=ok
// SIG undefined FUN_148bbb6c1(void)

void FUN_148bbb6c1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148bbb6f6(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 148bbb6f6 FUN_148bbb6f6 body=105 status=ok
// SIG undefined FUN_148bbb6f6(void)

undefined8 * FUN_148bbb6f6(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_148709076();
  *param_1 = &PTR_FUN_14b647e40;
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_148bba61a(param_1 + 7,iVar1,0);
    FUN_148bba68d(param_1[7],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148bbb828 FUN_148bbb828 body=59 status=ok
// SIG undefined FUN_148bbb828(void)

undefined8 FUN_148bbb828(longlong *param_1)

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



// FUNCTION 148bbb8c8 FUN_148bbb8c8 body=31 status=ok
// SIG undefined FUN_148bbb8c8(void)

undefined8 FUN_148bbb8c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bbb9a0 FUN_148bbb9a0 body=136 status=ok
// SIG undefined FUN_148bbb9a0(void)

undefined8 FUN_148bbb9a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_4 != 0) {
    lVar9 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar9);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x14);
      uVar4 = *(undefined4 *)(puVar1 + 3);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x1c);
      lVar2 = param_2 + 0x38 + lVar9;
      *(undefined4 *)(lVar2 + -0x28) = *(undefined4 *)(puVar1 + 2);
      *(undefined4 *)(lVar2 + -0x24) = uVar3;
      *(undefined4 *)(lVar2 + -0x20) = uVar4;
      *(undefined4 *)(lVar2 + -0x1c) = uVar5;
      *(undefined8 *)(lVar2 + -0x38) = uVar6;
      *(undefined8 *)(lVar2 + -0x30) = uVar7;
      *(undefined8 *)(lVar2 + -0x18) = puVar1[4];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x2c);
      uVar4 = *(undefined4 *)(puVar1 + 6);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x34);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 5);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 7);
      uVar6 = puVar1[10];
      uVar7 = puVar1[0xb];
      uVar8 = puVar1[0xc];
      *(undefined8 *)(lVar2 + 0x10) = puVar1[9];
      *(undefined8 *)(lVar2 + 0x18) = uVar6;
      *(undefined8 *)(lVar2 + 0x20) = uVar7;
      *(undefined8 *)(lVar2 + 0x28) = uVar8;
      lVar9 = lVar9 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bbba50 FUN_148bbba50 body=59 status=ok
// SIG undefined FUN_148bbba50(void)

undefined8 FUN_148bbba50(longlong *param_1)

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



// FUNCTION 148bbba96 FUN_148bbba96 body=38 status=ok
// SIG undefined FUN_148bbba96(void)

void FUN_148bbba96(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    if (*(longlong *)(param_2 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148bbbb2a FUN_148bbbb2a body=63 status=ok
// SIG undefined FUN_148bbbb2a(void)

undefined1 FUN_148bbbb2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bbbc64(param_2,param_3);
    param_3 = param_3 + 0x348;
    param_2 = param_2 + 0x348;
  }
  return 1;
}



// FUNCTION 148bbbb92 FUN_148bbbb92 body=59 status=ok
// SIG undefined FUN_148bbbb92(void)

undefined8 FUN_148bbbb92(longlong *param_1)

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



// FUNCTION 148bbbbde FUN_148bbbbde body=56 status=ok
// SIG undefined FUN_148bbbbde(void)

void FUN_148bbbbde(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x348) == '\x01') {
    if (*(longlong *)(param_2 + 0x280) != 0) {
      FUN_1400020a8();
    }
    FUN_14076ba26(param_2 + 8);
    *(undefined1 *)(param_2 + 0x348) = 0;
  }
  return;
}



// FUNCTION 148bbbc64 FUN_148bbbc64 body=130 status=ok
// SIG undefined FUN_148bbbc64(void)

undefined2 * FUN_148bbbc64(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  FUN_14054d68c(param_1 + 4,param_2 + 4);
  FUN_1407f1ff6(param_1 + 0x140,param_2 + 0x140);
  *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(param_2 + 0x148);
  FUN_140d02432(param_1 + 0x14c,param_2 + 0x14c);
  FUN_140d02432(param_1 + 0x174,param_2 + 0x174);
  *(undefined8 *)(param_1 + 0x19c) = *(undefined8 *)(param_2 + 0x19c);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  return param_1;
}



// FUNCTION 148bbbd1c FUN_148bbbd1c body=63 status=ok
// SIG undefined FUN_148bbbd1c(void)

undefined1 FUN_148bbbd1c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bbbe46(param_2,param_3);
    param_3 = param_3 + 0x518;
    param_2 = param_2 + 0x518;
  }
  return 1;
}



// FUNCTION 148bbbd84 FUN_148bbbd84 body=59 status=ok
// SIG undefined FUN_148bbbd84(void)

undefined8 FUN_148bbbd84(longlong *param_1)

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



// FUNCTION 148bbbdd0 FUN_148bbbdd0 body=40 status=ok
// SIG undefined FUN_148bbbdd0(void)

void FUN_148bbbdd0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x518) == '\x01') {
    FUN_14614248a(param_2);
    *(undefined1 *)(param_2 + 0x518) = 0;
  }
  return;
}



// FUNCTION 148bbbe46 FUN_148bbbe46 body=798 status=ok
// SIG undefined FUN_148bbbe46(void)

longlong FUN_148bbbe46(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  longlong lVar13;
  
  FUN_14870ff88();
  FUN_148707448(param_1 + 0x70,param_2 + 0x70);
  lVar13 = *(longlong *)(param_2 + 0xa0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar13 = *(longlong *)(param_2 + 0xa0);
    }
  }
  *(longlong *)(param_1 + 0xa0) = lVar13;
  FUN_148bbc164(param_1 + 0xa8,param_2 + 0xa8);
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
  lVar13 = *(longlong *)(param_2 + 0xc0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar13 = *(longlong *)(param_2 + 0xc0);
    }
  }
  *(longlong *)(param_1 + 0xc0) = lVar13;
  FUN_14117bcd8(param_1 + 200,param_2 + 200);
  FUN_14117bcd8(param_1 + 0xd4,param_2 + 0xd4);
  FUN_148bbbc64(param_1 + 0xe0,param_2 + 0xe0);
  lVar13 = *(longlong *)(param_2 + 0x428);
  if (DAT_14c950c29 == '\x01') {
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar13 = *(longlong *)(param_2 + 0x428);
    }
  }
  *(longlong *)(param_1 + 0x428) = lVar13;
  uVar3 = *(undefined8 *)(param_2 + 0x430);
  lVar13 = *(longlong *)(param_2 + 0x438);
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x438);
  *(undefined8 *)(param_1 + 0x430) = uVar3;
  *(longlong *)(param_1 + 0x438) = lVar13;
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
  uVar3 = *(undefined8 *)(param_2 + 0x440);
  lVar13 = *(longlong *)(param_2 + 0x448);
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x448);
  *(undefined8 *)(param_1 + 0x440) = uVar3;
  *(longlong *)(param_1 + 0x448) = lVar13;
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
  *(undefined2 *)(param_1 + 0x450) = *(undefined2 *)(param_2 + 0x450);
  FUN_140311eb6(param_1 + 0x458,param_2 + 0x458);
  FUN_140311eb6(param_1 + 0x468,param_2 + 0x468);
  FUN_140311eb6(param_1 + 0x478,param_2 + 0x478);
  FUN_140311eb6(param_1 + 0x488,param_2 + 0x488);
  uVar3 = *(undefined8 *)(param_2 + 0x498);
  lVar13 = *(longlong *)(param_2 + 0x4a0);
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x4a0);
  *(undefined8 *)(param_1 + 0x498) = uVar3;
  *(longlong *)(param_1 + 0x4a0) = lVar13;
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
  *(undefined8 *)(param_1 + 0x4b8) = *(undefined8 *)(param_2 + 0x4b8);
  uVar5 = *(undefined4 *)(param_2 + 0x4ac);
  uVar6 = *(undefined4 *)(param_2 + 0x4b0);
  uVar7 = *(undefined4 *)(param_2 + 0x4b4);
  *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_2 + 0x4a8);
  *(undefined4 *)(param_1 + 0x4ac) = uVar5;
  *(undefined4 *)(param_1 + 0x4b0) = uVar6;
  *(undefined4 *)(param_1 + 0x4b4) = uVar7;
  uVar3 = *(undefined8 *)(param_2 + 0x4c0);
  lVar13 = *(longlong *)(param_2 + 0x4c8);
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 0xc) = *(int *)(lVar13 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x4c8);
  *(undefined8 *)(param_1 + 0x4c0) = uVar3;
  *(longlong *)(param_1 + 0x4c8) = lVar13;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x500) = *(undefined8 *)(param_2 + 0x500);
  uVar3 = *(undefined8 *)(param_2 + 0x4d0);
  uVar8 = *(undefined8 *)(param_2 + 0x4d8);
  uVar9 = *(undefined8 *)(param_2 + 0x4e0);
  uVar10 = *(undefined8 *)(param_2 + 0x4e8);
  uVar11 = *(undefined8 *)(param_2 + 0x4f8);
  *(undefined8 *)(param_1 + 0x4f0) = *(undefined8 *)(param_2 + 0x4f0);
  *(undefined8 *)(param_1 + 0x4f8) = uVar11;
  *(undefined8 *)(param_1 + 0x4e0) = uVar9;
  *(undefined8 *)(param_1 + 0x4e8) = uVar10;
  *(undefined8 *)(param_1 + 0x4d0) = uVar3;
  *(undefined8 *)(param_1 + 0x4d8) = uVar8;
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x50c) == '\x01') {
      *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_2 + 0x508);
      uVar12 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x50c) != '\x01') goto LAB_148bbc122;
      uVar12 = 0;
    }
    *(undefined1 *)(param_1 + 0x50c) = uVar12;
  }
LAB_148bbc122:
  *(byte *)(param_1 + 0x510) = *(byte *)(param_1 + 0x510) & 0xfe | *(byte *)(param_2 + 0x510) & 1;
  return param_1;
}



// FUNCTION 148bbc164 FUN_148bbc164 body=89 status=ok
// SIG undefined FUN_148bbc164(void)

undefined8 * FUN_148bbc164(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148bbc1be(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 148bbc1be FUN_148bbc1be body=115 status=ok
// SIG undefined FUN_148bbc1be(void)

void FUN_148bbc1be(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148bbc232 FUN_148bbc232 body=38 status=ok
// SIG undefined FUN_148bbc232(void)

undefined8 FUN_148bbc232(undefined8 param_1,int param_2)

{
  FUN_14614248a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bbc258 FUN_148bbc258 body=57 status=ok
// SIG undefined FUN_148bbc258(void)

void FUN_148bbc258(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3128 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3128 = FUN_140002ddd(FUN_1465b826d,uVar1,L"GbxSkillComponent_Turret");
  }
  return;
}



// FUNCTION 148bbc292 FUN_148bbc292 body=32 status=ok
// SIG undefined FUN_148bbc292(void)

undefined8 FUN_148bbc292(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxSkillComponent_Turret");
  return param_2;
}



// FUNCTION 148bbc2b2 FUN_148bbc2b2 body=173 status=ok
// SIG undefined FUN_148bbc2b2(void)

void FUN_148bbc2b2(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[0xe] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *param_2 = &PTR_FUN_14b648c50;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 10;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  *(undefined1 *)(param_2 + 0xe) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bbc360 FUN_148bbc360 body=153 status=ok
// SIG undefined FUN_148bbc360(void)

void FUN_148bbc360(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *param_2 = &PTR_FUN_14b648c50;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 10;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  *(undefined1 *)(param_2 + 0xe) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bbc41e FUN_148bbc41e body=54 status=ok
// SIG undefined FUN_148bbc41e(void)

undefined1 FUN_148bbc41e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bbc56c(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 148bbc47c FUN_148bbc47c body=59 status=ok
// SIG undefined FUN_148bbc47c(void)

undefined8 FUN_148bbc47c(longlong *param_1)

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



// FUNCTION 148bbc4c2 FUN_148bbc4c2 body=34 status=ok
// SIG undefined FUN_148bbc4c2(void)

void FUN_148bbc4c2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_145aba862(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148bbc532 FUN_148bbc532 body=57 status=ok
// SIG undefined FUN_148bbc532(void)

void FUN_148bbc532(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3140 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3140 = FUN_140002ddd(FUN_1465b8303,uVar1,L"GbxSkillComponentData_Turret");
  }
  return;
}



// FUNCTION 148bbc56c FUN_148bbc56c body=111 status=ok
// SIG undefined FUN_148bbc56c(void)

longlong FUN_148bbc56c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_146130eee(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  FUN_148bbc5dc(param_1 + 0x30,param_2 + 0x30);
  if ((*(longlong *)(param_1 + 0x40) != *(longlong *)(param_2 + 0x40)) ||
     (*(int *)(param_1 + 0x48) != *(int *)(param_2 + 0x48))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  FUN_1401f3db8(param_1 + 0x58,param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  return param_1;
}



// FUNCTION 148bbc5dc FUN_148bbc5dc body=95 status=ok
// SIG undefined FUN_148bbc5dc(void)

undefined8 * FUN_148bbc5dc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145aba8c3(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148bbc63c(param_1,iVar1);
      FUN_148bbc6ab(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bbc63c FUN_148bbc63c body=111 status=ok
// SIG undefined FUN_148bbc63c(void)

void FUN_148bbc63c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    iVar2 = (int)(uVar1 / 0x68);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x68,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148bbc6ab FUN_148bbc6ab body=52 status=ok
// SIG undefined FUN_148bbc6ab(void)

void FUN_148bbc6ab(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148bbc6e0(param_1,param_2);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return;
}



// FUNCTION 148bbc6e0 FUN_148bbc6e0 body=145 status=ok
// SIG undefined FUN_148bbc6e0(void)

undefined8 * FUN_148bbc6e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[4] = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 6);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 6) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar4;
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  _Src = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 * 2);
  }
  uVar5 = param_2[9];
  uVar6 = param_2[10];
  uVar7 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar7;
  param_1[9] = uVar5;
  param_1[10] = uVar6;
  return param_1;
}



// FUNCTION 148bbc7ca FUN_148bbc7ca body=62 status=ok
// SIG undefined FUN_148bbc7ca(void)

undefined1 FUN_148bbc7ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_146130eee(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bbc830 FUN_148bbc830 body=59 status=ok
// SIG undefined FUN_148bbc830(void)

undefined8 FUN_148bbc830(longlong *param_1)

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



// FUNCTION 148bbc8d0 FUN_148bbc8d0 body=31 status=ok
// SIG undefined FUN_148bbc8d0(void)

undefined8 FUN_148bbc8d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bbc8f0 FUN_148bbc8f0 body=57 status=ok
// SIG undefined FUN_148bbc8f0(void)

void FUN_148bbc8f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3178 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3178 = FUN_140002ddd(FUN_1465b843d,uVar1,L"GbxSkillLatentAction_SpawnTroubleBadass");
  }
  return;
}



// FUNCTION 148bbc96c FUN_148bbc96c body=282 status=ok
// SIG undefined FUN_148bbc96c(void)

void FUN_148bbc96c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  local_38 = 0x10019100;
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
  uVar1 = FUN_1442247a2(local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bbca88 FUN_148bbca88 body=280 status=ok
// SIG undefined FUN_148bbca88(void)

void FUN_148bbca88(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  local_38 = 0x10019100;
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
  uVar1 = FUN_14422458c(local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bbcba2 FUN_148bbcba2 body=273 status=ok
// SIG undefined FUN_148bbcba2(void)

void FUN_148bbcba2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  local_30 = 0x10019100;
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
  local_50 = local_38;
  local_48 = local_30;
  local_40 = 0;
  FUN_1442249c8(local_20);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bbcda8 FUN_148bbcda8 body=63 status=ok
// SIG undefined FUN_148bbcda8(void)

undefined1 FUN_148bbcda8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bbcfea(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 148bbce10 FUN_148bbce10 body=59 status=ok
// SIG undefined FUN_148bbce10(void)

undefined8 FUN_148bbce10(longlong *param_1)

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



// FUNCTION 148bbce5c FUN_148bbce5c body=40 status=ok
// SIG undefined FUN_148bbce5c(void)

void FUN_148bbce5c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_148bbced2(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 148bbced2 FUN_148bbced2 body=95 status=ok
// SIG undefined FUN_148bbced2(void)

void FUN_148bbced2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_148bbcf32(param_1 + 0x30);
  return;
}



// FUNCTION 148bbcf32 FUN_148bbcf32 body=54 status=ok
// SIG undefined FUN_148bbcf32(void)

void FUN_148bbcf32(longlong *param_1)

{
  FUN_148bbcf68(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148bbcf68 FUN_148bbcf68 body=128 status=ok
// SIG undefined FUN_148bbcf68(void)

void FUN_148bbcf68(longlong param_1,int param_2)

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



// FUNCTION 148bbcfea FUN_148bbcfea body=252 status=ok
// SIG undefined FUN_148bbcfea(void)

undefined8 * FUN_148bbcfea(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_2 != param_1) {
    *param_1 = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
  }
  param_1[2] = param_2[2];
  lVar2 = param_2[3];
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[3];
    }
  }
  param_1[3] = lVar2;
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  FUN_148bbd13e(param_1 + 6,param_2 + 6);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x82);
  if (param_2 == param_1) goto LAB_148bbd06e;
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
    uVar1 = 1;
LAB_148bbd0a3:
    *(undefined1 *)(param_1 + 0x11) = uVar1;
  }
  else if (*(char *)(param_1 + 0x11) == '\x01') {
    uVar1 = 0;
    goto LAB_148bbd0a3;
  }
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  else if (*(char *)(param_1 + 0x12) == '\x01') {
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
LAB_148bbd06e:
  FUN_148bbd0e6(param_1 + 0x13,param_2 + 0x13);
  return param_1;
}



// FUNCTION 148bbd0e6 FUN_148bbd0e6 body=88 status=ok
// SIG undefined FUN_148bbd0e6(void)

undefined8 * FUN_148bbd0e6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148bbd2a8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 148bbd13e FUN_148bbd13e body=122 status=ok
// SIG undefined FUN_148bbd13e(void)

longlong FUN_148bbd13e(longlong param_1,longlong param_2)

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
    FUN_148bbd1b8(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148bbd1b8 FUN_148bbd1b8 body=239 status=ok
// SIG undefined FUN_148bbd1b8(void)

longlong * FUN_148bbd1b8(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_148bbcf68(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar2 + lVar7);
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar2 + 4 + lVar7);
        }
        else {
          *(undefined1 *)(lVar4 + lVar7) = *(undefined1 *)(lVar2 + lVar7);
          lVar3 = *(longlong *)(lVar2 + 8 + lVar7);
          *(longlong *)(lVar4 + 8 + lVar7) = lVar3;
          if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
            FUN_1456cec3c();
          }
          *(undefined8 *)(lVar4 + 0x10 + lVar7) = *(undefined8 *)(lVar2 + 0x10 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x18;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 148bbd2a8 FUN_148bbd2a8 body=98 status=ok
// SIG undefined FUN_148bbd2a8(void)

void FUN_148bbd2a8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148bbd30c FUN_148bbd30c body=46 status=ok
// SIG undefined FUN_148bbd30c(void)

void FUN_148bbd30c(undefined8 param_1,longlong param_2)

{
  FUN_140f23ff6(param_2);
  *(undefined1 *)(param_2 + 0x130) = 0;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x119) = 0;
  *(undefined8 *)(param_2 + 0x121) = 0;
  return;
}



// FUNCTION 148bbd37c FUN_148bbd37c body=59 status=ok
// SIG undefined FUN_148bbd37c(void)

undefined8 FUN_148bbd37c(longlong *param_1)

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



// FUNCTION 148bbd3c8 FUN_148bbd3c8 body=40 status=ok
// SIG undefined FUN_148bbd3c8(void)

void FUN_148bbd3c8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x138) == '\x01') {
    FUN_145a367da(param_2);
    *(undefined1 *)(param_2 + 0x138) = 0;
  }
  return;
}



// FUNCTION 148bbd43e FUN_148bbd43e body=62 status=ok
// SIG undefined FUN_148bbd43e(void)

longlong FUN_148bbd43e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148bbd57a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xa8 + *param_1;
  FUN_148bbd515(lVar2);
  return lVar2;
}



// FUNCTION 148bbd4aa FUN_148bbd4aa body=107 status=ok
// SIG undefined FUN_148bbd4aa(void)

void FUN_148bbd4aa(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((ulonglong)param_2 * 0xa8 + lVar1);
  FUN_148bbced2(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0xa8),(longlong)iVar3 * 0xa8);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 148bbd515 FUN_148bbd515 body=100 status=ok
// SIG undefined FUN_148bbd515(void)

void FUN_148bbd515(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return;
}



// FUNCTION 148bbd57a FUN_148bbd57a body=146 status=ok
// SIG undefined FUN_148bbd57a(void)

void FUN_148bbd57a(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0xa8,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xa8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148bbd60e FUN_148bbd60e body=114 status=ok
// SIG undefined FUN_148bbd60e(void)

void FUN_148bbd60e(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xa8,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0xc30c30c30c30c31),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xa8,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148bbd680 FUN_148bbd680 body=60 status=ok
// SIG undefined FUN_148bbd680(void)

void FUN_148bbd680(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148bbd6bc(param_1,param_2);
    param_1 = param_1 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return;
}



// FUNCTION 148bbd6bc FUN_148bbd6bc body=314 status=ok
// SIG undefined FUN_148bbd6bc(void)

undefined8 * FUN_148bbd6bc(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  lVar3 = *(longlong *)(param_2 + 0x18);
  param_1[3] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_148bbd13e(param_1 + 6,param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x80);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)(param_2 + 0x82);
  cVar1 = *(char *)(param_2 + 0x88);
  *(char *)(param_1 + 0x11) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  }
  cVar1 = *(char *)(param_2 + 0x90);
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  }
  param_1[0x13] = 0;
  iVar2 = *(int *)(param_2 + 0xa0);
  _Src = *(void **)(param_2 + 0x98);
  *(int *)(param_1 + 0x14) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  }
  else {
    FUN_148bbd2a8(param_1 + 0x13,iVar2,0);
    memcpy((void *)param_1[0x13],_Src,(longlong)iVar2 << 4);
  }
  return param_1;
}



// FUNCTION 148bbd860 FUN_148bbd860 body=122 status=ok
// SIG undefined FUN_148bbd860(void)

undefined8 FUN_148bbd860(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined8 *)(lVar2 + -0x18) = *puVar1;
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar4 = *(undefined4 *)(puVar1 + 2);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6();
      FUN_145c56af0(param_2 + lVar6 + 0x28,param_3 + lVar6 + 0x28);
      FUN_144983130(param_2 + lVar6 + 0x40,param_3 + lVar6 + 0x40);
      lVar6 = lVar6 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bbd902 FUN_148bbd902 body=59 status=ok
// SIG undefined FUN_148bbd902(void)

undefined8 FUN_148bbd902(longlong *param_1)

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



// FUNCTION 148bbd948 FUN_148bbd948 body=47 status=ok
// SIG undefined FUN_148bbd948(void)

void FUN_148bbd948(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_144a2da94(param_2 + 0x40);
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148bbda52 FUN_148bbda52 body=59 status=ok
// SIG undefined FUN_148bbda52(void)

undefined8 FUN_148bbda52(longlong *param_1)

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



// FUNCTION 148bbdaf2 FUN_148bbdaf2 body=29 status=ok
// SIG undefined FUN_148bbdaf2(void)

undefined8 FUN_148bbdaf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bbdb10 FUN_148bbdb10 body=55 status=ok
// SIG undefined FUN_148bbdb10(void)

void FUN_148bbdb10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba32c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba32c8 = FUN_140002ddd(FUN_1465b8bf1,uVar1,L"GbxSkillStateConditionData_BusyInMenu");
  }
  return;
}



// FUNCTION 148bbdbd2 FUN_148bbdbd2 body=59 status=ok
// SIG undefined FUN_148bbdbd2(void)

undefined8 FUN_148bbdbd2(longlong *param_1)

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



// FUNCTION 148bbdc6e FUN_148bbdc6e body=55 status=ok
// SIG undefined FUN_148bbdc6e(void)

void FUN_148bbdc6e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba32f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba32f8 =
         FUN_140002ddd(FUN_1465b8cb7,uVar1,L"GbxSkillStateConditionData_IsUsingInventory");
  }
  return;
}



// FUNCTION 148bbdcd6 FUN_148bbdcd6 body=74 status=ok
// SIG undefined FUN_148bbdcd6(void)

undefined1 FUN_148bbdcd6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined1 *)(param_2 + -0x10) = *(undefined1 *)(param_3 + -0x10);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_148bbde38(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bbdd48 FUN_148bbdd48 body=59 status=ok
// SIG undefined FUN_148bbdd48(void)

undefined8 FUN_148bbdd48(longlong *param_1)

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



// FUNCTION 148bbdd8e FUN_148bbdd8e body=48 status=ok
// SIG undefined FUN_148bbdd8e(void)

void FUN_148bbdd8e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14b64f4a0;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 148bbde00 FUN_148bbde00 body=55 status=ok
// SIG undefined FUN_148bbde00(void)

void FUN_148bbde00(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3310 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3310 = FUN_140002ddd(FUN_1465b8d4d,uVar1,L"GbxSkillStateConditionData_FFYL");
  }
  return;
}



// FUNCTION 148bbde38 FUN_148bbde38 body=84 status=ok
// SIG undefined FUN_148bbde38(void)

undefined8 * FUN_148bbde38(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148bbde8c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 148bbde8c FUN_148bbde8c body=90 status=ok
// SIG undefined FUN_148bbde8c(void)

void FUN_148bbde8c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148bbdf78 FUN_148bbdf78 body=59 status=ok
// SIG undefined FUN_148bbdf78(void)

undefined8 FUN_148bbdf78(longlong *param_1)

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



// FUNCTION 148bbe018 FUN_148bbe018 body=55 status=ok
// SIG undefined FUN_148bbe018(void)

void FUN_148bbe018(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3328 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3328 = FUN_140002ddd(FUN_1465b8de3,uVar1,L"GbxSkillStateCondition_IsUsingInteractible")
    ;
  }
  return;
}



// FUNCTION 148bbe0d0 FUN_148bbe0d0 body=59 status=ok
// SIG undefined FUN_148bbe0d0(void)

undefined8 FUN_148bbe0d0(longlong *param_1)

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



// FUNCTION 148bbe170 FUN_148bbe170 body=55 status=ok
// SIG undefined FUN_148bbe170(void)

void FUN_148bbe170(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3340 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3340 = FUN_140002ddd(FUN_1465b8e79,uVar1,L"GbxSkillStateConditionData_LoadingScreen");
  }
  return;
}



// FUNCTION 148bbe224 FUN_148bbe224 body=59 status=ok
// SIG undefined FUN_148bbe224(void)

undefined8 FUN_148bbe224(longlong *param_1)

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



// FUNCTION 148bbe2b8 FUN_148bbe2b8 body=55 status=ok
// SIG undefined FUN_148bbe2b8(void)

void FUN_148bbe2b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3370 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3370 = FUN_140002ddd(FUN_1465b8f3f,uVar1,L"GbxSkillStateConditionData_OakCharacter");
  }
  return;
}



// FUNCTION 148bbe37a FUN_148bbe37a body=59 status=ok
// SIG undefined FUN_148bbe37a(void)

undefined8 FUN_148bbe37a(longlong *param_1)

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



// FUNCTION 148bbe41a FUN_148bbe41a body=55 status=ok
// SIG undefined FUN_148bbe41a(void)

void FUN_148bbe41a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3508 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3508 =
         FUN_140002ddd(FUN_1465b8fd5,uVar1,L"GbxSkillStateConditionData_OakCharacterHealth");
  }
  return;
}



// FUNCTION 148bbe4de FUN_148bbe4de body=59 status=ok
// SIG undefined FUN_148bbe4de(void)

undefined8 FUN_148bbe4de(longlong *param_1)

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



// FUNCTION 148bbe572 FUN_148bbe572 body=55 status=ok
// SIG undefined FUN_148bbe572(void)

void FUN_148bbe572(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3538 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3538 =
         FUN_140002ddd(FUN_1465b909b,uVar1,L"GbxSkillStateConditionData_OakCharacterMovement");
  }
  return;
}



// FUNCTION 148bbe62a FUN_148bbe62a body=59 status=ok
// SIG undefined FUN_148bbe62a(void)

undefined8 FUN_148bbe62a(longlong *param_1)

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



// FUNCTION 148bbe6ca FUN_148bbe6ca body=55 status=ok
// SIG undefined FUN_148bbe6ca(void)

void FUN_148bbe6ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3550 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3550 = FUN_140002ddd(FUN_1465b9131,uVar1,L"GbxSkillStateConditionData_OakCinematic");
  }
  return;
}



// FUNCTION 148bbe74a FUN_148bbe74a body=76 status=ok
// SIG undefined FUN_148bbe74a(void)

undefined8 FUN_148bbe74a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined1 *)(param_2 + -0x10) = *(undefined1 *)(param_3 + -0x10);
      *(undefined2 *)(param_2 + -8) = *(undefined2 *)(param_3 + -8);
      FUN_148bbe8ba(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bbe7be FUN_148bbe7be body=59 status=ok
// SIG undefined FUN_148bbe7be(void)

undefined8 FUN_148bbe7be(longlong *param_1)

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



// FUNCTION 148bbe804 FUN_148bbe804 body=48 status=ok
// SIG undefined FUN_148bbe804(void)

void FUN_148bbe804(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14b650200;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 148bbe882 FUN_148bbe882 body=55 status=ok
// SIG undefined FUN_148bbe882(void)

void FUN_148bbe882(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3568 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3568 = FUN_140002ddd(FUN_1465b91c7,uVar1,L"GbxSkillStateConditionData_WeaponEquipped");
  }
  return;
}



// FUNCTION 148bbe8ba FUN_148bbe8ba body=79 status=ok
// SIG undefined FUN_148bbe8ba(void)

undefined8 * FUN_148bbe8ba(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148bbe90a(param_1,iVar1);
      FUN_148bbe97d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bbe90a FUN_148bbe90a body=115 status=ok
// SIG undefined FUN_148bbe90a(void)

void FUN_148bbe90a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148bbe97d FUN_148bbe97d body=52 status=ok
// SIG undefined FUN_148bbe97d(void)

void FUN_148bbe97d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486b96c2(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148bbea3c FUN_148bbea3c body=59 status=ok
// SIG undefined FUN_148bbea3c(void)

undefined8 FUN_148bbea3c(longlong *param_1)

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



// FUNCTION 148bbeadc FUN_148bbeadc body=55 status=ok
// SIG undefined FUN_148bbeadc(void)

void FUN_148bbeadc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3598 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3598 = FUN_140002ddd(FUN_1465b928d,uVar1,L"GbxSkillStateConditionData_WeaponAmmo");
  }
  return;
}



// FUNCTION 148bbebb0 FUN_148bbebb0 body=59 status=ok
// SIG undefined FUN_148bbebb0(void)

undefined8 FUN_148bbebb0(longlong *param_1)

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



// FUNCTION 148bbec50 FUN_148bbec50 body=57 status=ok
// SIG undefined FUN_148bbec50(void)

void FUN_148bbec50(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba35b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba35b0 = FUN_140002ddd(FUN_1465b9323,uVar1,L"GbxSkillStateConditionData_WeaponAction");
  }
  return;
}



// FUNCTION 148bbed0a FUN_148bbed0a body=59 status=ok
// SIG undefined FUN_148bbed0a(void)

undefined8 FUN_148bbed0a(longlong *param_1)

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



// FUNCTION 148bbedaa FUN_148bbedaa body=55 status=ok
// SIG undefined FUN_148bbedaa(void)

void FUN_148bbedaa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba35c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba35c8 =
         FUN_140002ddd(FUN_1465b93b9,uVar1,L"GbxSkillStateConditionData_UsingUnderbarrel");
  }
  return;
}



// FUNCTION 148bbee62 FUN_148bbee62 body=59 status=ok
// SIG undefined FUN_148bbee62(void)

undefined8 FUN_148bbee62(longlong *param_1)

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



// FUNCTION 148bbef02 FUN_148bbef02 body=55 status=ok
// SIG undefined FUN_148bbef02(void)

void FUN_148bbef02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba35e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba35e0 = FUN_140002ddd(FUN_1465b944f,uVar1,L"GbxSkillStateConditionData_OffhandLocked");
  }
  return;
}



// FUNCTION 148bbefba FUN_148bbefba body=59 status=ok
// SIG undefined FUN_148bbefba(void)

undefined8 FUN_148bbefba(longlong *param_1)

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



// FUNCTION 148bbf05a FUN_148bbf05a body=55 status=ok
// SIG undefined FUN_148bbf05a(void)

void FUN_148bbf05a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba35f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba35f8 =
         FUN_140002ddd(FUN_1465b94e5,uVar1,L"GbxSkillStateConditionData_ActionSkillLocked");
  }
  return;
}



// FUNCTION 148bbf112 FUN_148bbf112 body=59 status=ok
// SIG undefined FUN_148bbf112(void)

undefined8 FUN_148bbf112(longlong *param_1)

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



// FUNCTION 148bbf1b2 FUN_148bbf1b2 body=55 status=ok
// SIG undefined FUN_148bbf1b2(void)

void FUN_148bbf1b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3610 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3610 = FUN_140002ddd(FUN_1465b957b,uVar1,L"GbxSkillStateConditionData_SeamlessTravel");
  }
  return;
}



// FUNCTION 148bbf26a FUN_148bbf26a body=59 status=ok
// SIG undefined FUN_148bbf26a(void)

undefined8 FUN_148bbf26a(longlong *param_1)

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



// FUNCTION 148bbf30a FUN_148bbf30a body=55 status=ok
// SIG undefined FUN_148bbf30a(void)

void FUN_148bbf30a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3628 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3628 = FUN_140002ddd(FUN_1465b9611,uVar1,L"GbxSkillStateConditionData_Teleporting");
  }
  return;
}



// FUNCTION 148bbf37a FUN_148bbf37a body=95 status=ok
// SIG undefined FUN_148bbf37a(void)

undefined8 FUN_148bbf37a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + 8 + lVar1) = *(undefined1 *)(param_3 + 8 + lVar1);
      FUN_145c6a9b8(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      *(undefined8 *)(param_2 + 0x28 + lVar1) = *(undefined8 *)(param_3 + 0x28 + lVar1);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bbf402 FUN_148bbf402 body=59 status=ok
// SIG undefined FUN_148bbf402(void)

undefined8 FUN_148bbf402(longlong *param_1)

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



// FUNCTION 148bbf496 FUN_148bbf496 body=55 status=ok
// SIG undefined FUN_148bbf496(void)

void FUN_148bbf496(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3640 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3640 = FUN_140002ddd(FUN_1465b96a7,uVar1,L"GbxSkillStateConditionData_TokenStack");
  }
  return;
}



// FUNCTION 148bbf546 FUN_148bbf546 body=59 status=ok
// SIG undefined FUN_148bbf546(void)

undefined8 FUN_148bbf546(longlong *param_1)

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



// FUNCTION 148bbf5da FUN_148bbf5da body=55 status=ok
// SIG undefined FUN_148bbf5da(void)

void FUN_148bbf5da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3658 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3658 = FUN_140002ddd(FUN_1465b976f,uVar1,L"GbxSkillStateConditionData_Vehicle");
  }
  return;
}



// FUNCTION 148bbf6e6 FUN_148bbf6e6 body=59 status=ok
// SIG undefined FUN_148bbf6e6(void)

undefined8 FUN_148bbf6e6(longlong *param_1)

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



// FUNCTION 148bbf792 FUN_148bbf792 body=55 status=ok
// SIG undefined FUN_148bbf792(void)

void FUN_148bbf792(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3670 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3670 =
         FUN_140002ddd(FUN_1465b9805,uVar1,L"GbxSkillStateMachineStateAction_AddRemoveCharges");
  }
  return;
}



// FUNCTION 148bbf82a FUN_148bbf82a body=93 status=ok
// SIG undefined FUN_148bbf82a(void)

undefined1 FUN_148bbf82a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      FUN_146130eee(param_2 + 8 + lVar6,param_3 + 8 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x20 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x20 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bbf8b0 FUN_148bbf8b0 body=59 status=ok
// SIG undefined FUN_148bbf8b0(void)

undefined8 FUN_148bbf8b0(longlong *param_1)

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



// FUNCTION 148bbf950 FUN_148bbf950 body=29 status=ok
// SIG undefined FUN_148bbf950(void)

undefined8 FUN_148bbf950(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bbf96e FUN_148bbf96e body=55 status=ok
// SIG undefined FUN_148bbf96e(void)

void FUN_148bbf96e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3688 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3688 =
         FUN_140002ddd(FUN_1465b989b,uVar1,L"GbxSkillStateMachineStateAction_ResetCharges");
  }
  return;
}



// FUNCTION 148bbfa00 FUN_148bbfa00 body=59 status=ok
// SIG undefined FUN_148bbfa00(void)

undefined8 FUN_148bbfa00(longlong *param_1)

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



// FUNCTION 148bbfaa0 FUN_148bbfaa0 body=57 status=ok
// SIG undefined FUN_148bbfaa0(void)

void FUN_148bbfaa0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba36a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba36a0 = FUN_140002ddd(FUN_1465b9931,uVar1,L"GbxSkillTargetResolutionStrategy_Allies");
  }
  return;
}



// FUNCTION 148bbfb42 FUN_148bbfb42 body=59 status=ok
// SIG undefined FUN_148bbfb42(void)

undefined8 FUN_148bbfb42(longlong *param_1)

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



// FUNCTION 148bbfbe2 FUN_148bbfbe2 body=31 status=ok
// SIG undefined FUN_148bbfbe2(void)

undefined8 FUN_148bbfbe2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bbfc02 FUN_148bbfc02 body=57 status=ok
// SIG undefined FUN_148bbfc02(void)

void FUN_148bbfc02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba36b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba36b8 =
         FUN_140002ddd(FUN_1465b99c7,uVar1,L"GbxSkillTargetResolutionStrategy_Companions");
  }
  return;
}



// FUNCTION 148bbfca4 FUN_148bbfca4 body=59 status=ok
// SIG undefined FUN_148bbfca4(void)

undefined8 FUN_148bbfca4(longlong *param_1)

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



// FUNCTION 148bbfd44 FUN_148bbfd44 body=29 status=ok
// SIG undefined FUN_148bbfd44(void)

undefined8 FUN_148bbfd44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bbfd62 FUN_148bbfd62 body=55 status=ok
// SIG undefined FUN_148bbfd62(void)

void FUN_148bbfd62(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba36d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba36d0 =
         FUN_140002ddd(FUN_1465b9a5d,uVar1,L"GbxSkillTargetResolutionStrategy_ExoMarkedTargets");
  }
  return;
}



// FUNCTION 148bbfdf4 FUN_148bbfdf4 body=59 status=ok
// SIG undefined FUN_148bbfdf4(void)

undefined8 FUN_148bbfdf4(longlong *param_1)

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



// FUNCTION 148bbfe94 FUN_148bbfe94 body=57 status=ok
// SIG undefined FUN_148bbfe94(void)

void FUN_148bbfe94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba36e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba36e8 =
         FUN_140002ddd(FUN_1465b9af3,uVar1,L"GbxSkillTargetResolutionStrategy_VHETargets");
  }
  return;
}



// FUNCTION 148bbfeec FUN_148bbfeec body=63 status=ok
// SIG undefined FUN_148bbfeec(void)

undefined1 FUN_148bbfeec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bc0114(param_2,param_3);
    param_3 = param_3 + 0x118;
    param_2 = param_2 + 0x118;
  }
  return 1;
}



// FUNCTION 148bbff54 FUN_148bbff54 body=59 status=ok
// SIG undefined FUN_148bbff54(void)

undefined8 FUN_148bbff54(longlong *param_1)

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



// FUNCTION 148bbffa0 FUN_148bbffa0 body=38 status=ok
// SIG undefined FUN_148bbffa0(void)

void FUN_148bbffa0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_148bc009c(param_2);
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  return;
}



// FUNCTION 148bc0000 FUN_148bc0000 body=156 status=ok
// SIG undefined FUN_148bc0000(void)

void FUN_148bc0000(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b6538b0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xf00000d0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xf00000d0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x101) = 0;
  *(undefined8 *)((longlong)param_1 + 0x109) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  return;
}



// FUNCTION 148bc009c FUN_148bc009c body=119 status=ok
// SIG undefined FUN_148bc009c(void)

void FUN_148bc009c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6538b0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  FUN_140b3f63a(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148bc0114 FUN_148bc0114 body=127 status=ok
// SIG undefined FUN_148bc0114(void)

longlong FUN_148bc0114(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_140d02432(param_1 + 0x18,param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  FUN_140d02432(param_1 + 0x70,param_2 + 0x70);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_2 + 0xc0);
  FUN_148bc0194(param_1 + 200,param_2 + 200);
  FUN_141332d0e(param_1 + 0xd8,param_2 + 0xd8);
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
  return param_1;
}



// FUNCTION 148bc0194 FUN_148bc0194 body=93 status=ok
// SIG undefined FUN_148bc0194(void)

undefined8 * FUN_148bc0194(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140b3f63a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148bc01f2(param_1,iVar1);
      FUN_148bc0265(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bc01f2 FUN_148bc01f2 body=115 status=ok
// SIG undefined FUN_148bc01f2(void)

void FUN_148bc01f2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148bc0265 FUN_148bc0265 body=134 status=ok
// SIG undefined FUN_148bc0265(void)

void FUN_148bc0265(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148bc02fe FUN_148bc02fe body=73 status=ok
// SIG undefined FUN_148bc02fe(void)

void FUN_148bc02fe(undefined8 param_1,undefined8 *param_2)

{
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *param_2 = &PTR_FUN_14b6538e0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  FUN_1412df474(param_2 + 8);
  FUN_141028572((longlong)param_2 + 0x4c);
  return;
}



// FUNCTION 148bc0348 FUN_148bc0348 body=67 status=ok
// SIG undefined FUN_148bc0348(void)

void FUN_148bc0348(undefined8 param_1,undefined8 *param_2)

{
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14b6538e0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  FUN_1412df474(param_2 + 8);
  FUN_141028572((longlong)param_2 + 0x4c);
  return;
}



// FUNCTION 148bc03b0 FUN_148bc03b0 body=54 status=ok
// SIG undefined FUN_148bc03b0(void)

undefined1 FUN_148bc03b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bc04ea(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 148bc040e FUN_148bc040e body=59 status=ok
// SIG undefined FUN_148bc040e(void)

undefined8 FUN_148bc040e(longlong *param_1)

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



// FUNCTION 148bc0454 FUN_148bc0454 body=34 status=ok
// SIG undefined FUN_148bc0454(void)

void FUN_148bc0454(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_1459e25a4(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148bc04c4 FUN_148bc04c4 body=38 status=ok
// SIG undefined FUN_148bc04c4(void)

undefined8 FUN_148bc04c4(undefined8 param_1,int param_2)

{
  FUN_1459e25a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc04ea FUN_148bc04ea body=126 status=ok
// SIG undefined FUN_148bc04ea(void)

longlong FUN_148bc04ea(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0x10);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(longlong *)(param_1 + 0x10) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  FUN_148bc0568(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_140841e06(param_1 + 0x40,param_2 + 0x40);
  FUN_14117bcd8(param_1 + 0x4c,param_2 + 0x4c);
  return param_1;
}



// FUNCTION 148bc0568 FUN_148bc0568 body=95 status=ok
// SIG undefined FUN_148bc0568(void)

undefined8 * FUN_148bc0568(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459e260d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148bc05c8(param_1,iVar1);
      FUN_148bc062a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bc05c8 FUN_148bc05c8 body=98 status=ok
// SIG undefined FUN_148bc05c8(void)

void FUN_148bc05c8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148bc062a FUN_148bc062a body=45 status=ok
// SIG undefined FUN_148bc062a(void)

void FUN_148bc062a(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 148bc0684 FUN_148bc0684 body=85 status=ok
// SIG undefined FUN_148bc0684(void)

undefined1 FUN_148bc0684(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_145c6a9b8(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined1 *)(param_2 + 0x20 + lVar1) = *(undefined1 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bc0702 FUN_148bc0702 body=59 status=ok
// SIG undefined FUN_148bc0702(void)

undefined8 FUN_148bc0702(longlong *param_1)

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



// FUNCTION 148bc0796 FUN_148bc0796 body=55 status=ok
// SIG undefined FUN_148bc0796(void)

void FUN_148bc0796(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3810 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3810 = FUN_140002ddd(FUN_1465b9ed1,uVar1,L"GbxSkillTokenStackValueResolver");
  }
  return;
}



// FUNCTION 148bc0852 FUN_148bc0852 body=59 status=ok
// SIG undefined FUN_148bc0852(void)

undefined8 FUN_148bc0852(longlong *param_1)

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



// FUNCTION 148bc08f2 FUN_148bc08f2 body=55 status=ok
// SIG undefined FUN_148bc08f2(void)

void FUN_148bc08f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3828 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3828 = FUN_140002ddd(FUN_1465b9f67,uVar1,L"GbxSkillTokenStackAttrChannelResolver");
  }
  return;
}



// FUNCTION 148bc09ec FUN_148bc09ec body=42 status=ok
// SIG undefined FUN_148bc09ec(void)

undefined8 FUN_148bc09ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bc0a3e FUN_148bc0a3e body=59 status=ok
// SIG undefined FUN_148bc0a3e(void)

undefined8 FUN_148bc0a3e(longlong *param_1)

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



// FUNCTION 148bc0ae0 FUN_148bc0ae0 body=68 status=ok
// SIG undefined FUN_148bc0ae0(void)

void FUN_148bc0ae0(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  FUN_14899da2c(param_2);
  *param_2 = &PTR_FUN_14b653960;
  param_2[5] = 0;
  param_2[6] = 0;
  return;
}



// FUNCTION 148bc0b24 FUN_148bc0b24 body=39 status=ok
// SIG undefined FUN_148bc0b24(void)

void FUN_148bc0b24(undefined8 param_1,undefined8 *param_2)

{
  FUN_14899da2c(param_2);
  *param_2 = &PTR_FUN_14b653960;
  param_2[5] = 0;
  param_2[6] = 0;
  return;
}



// FUNCTION 148bc0b70 FUN_148bc0b70 body=78 status=ok
// SIG undefined FUN_148bc0b70(void)

undefined1 FUN_148bc0b70(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      uVar4 = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar4;
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bc0be6 FUN_148bc0be6 body=59 status=ok
// SIG undefined FUN_148bc0be6(void)

undefined8 FUN_148bc0be6(longlong *param_1)

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



// FUNCTION 148bc0c2c FUN_148bc0c2c body=48 status=ok
// SIG undefined FUN_148bc0c2c(void)

void FUN_148bc0c2c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14b2841e0;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 148bc0caa FUN_148bc0caa body=57 status=ok
// SIG undefined FUN_148bc0caa(void)

undefined8 * FUN_148bc0caa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2841e0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc0ce4 FUN_148bc0ce4 body=55 status=ok
// SIG undefined FUN_148bc0ce4(void)

void FUN_148bc0ce4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3870 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3870 =
         FUN_140002ddd(FUN_1465ba08d,uVar1,L"GbxStatusEffectAspectData_CharacterLocksItem");
  }
  return;
}



// FUNCTION 148bc0d1c FUN_148bc0d1c body=32 status=ok
// SIG undefined FUN_148bc0d1c(void)

undefined8 FUN_148bc0d1c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Character Locks");
  return param_2;
}



// FUNCTION 148bc0d72 FUN_148bc0d72 body=167 status=ok
// SIG undefined FUN_148bc0d72(void)

undefined8 FUN_148bc0d72(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      lVar1 = param_3 + lVar7;
      lVar2 = param_2 + 0x10 + lVar7;
      *(undefined2 *)(lVar2 + -8) = *(undefined2 *)(lVar1 + 8);
      FUN_1401f3db8(lVar2,lVar1 + 0x10);
      uVar6 = *(undefined8 *)(lVar1 + 0x30);
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar2 + 0x20) = uVar6;
      uVar3 = *(undefined4 *)(lVar1 + 0x44);
      uVar4 = *(undefined4 *)(lVar1 + 0x48);
      uVar5 = *(undefined4 *)(lVar1 + 0x4c);
      *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(lVar1 + 0x40);
      *(undefined4 *)(lVar2 + 0x34) = uVar3;
      *(undefined4 *)(lVar2 + 0x38) = uVar4;
      *(undefined4 *)(lVar2 + 0x3c) = uVar5;
      lVar2 = param_2 + 0x50 + lVar7;
      lVar1 = param_3 + lVar7;
      FUN_144a787a6(lVar2,lVar1 + 0x50);
      uVar3 = *(undefined4 *)(lVar1 + 100);
      uVar4 = *(undefined4 *)(lVar1 + 0x68);
      uVar5 = *(undefined4 *)(lVar1 + 0x6c);
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar1 + 0x60);
      *(undefined4 *)(lVar2 + 0x14) = uVar3;
      *(undefined4 *)(lVar2 + 0x18) = uVar4;
      *(undefined4 *)(lVar2 + 0x1c) = uVar5;
      FUN_148bc0f04(param_2 + lVar7 + 0x70,param_3 + lVar7 + 0x70);
      lVar7 = lVar7 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bc0e42 FUN_148bc0e42 body=59 status=ok
// SIG undefined FUN_148bc0e42(void)

undefined8 FUN_148bc0e42(longlong *param_1)

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



// FUNCTION 148bc0e8e FUN_148bc0e8e body=40 status=ok
// SIG undefined FUN_148bc0e8e(void)

void FUN_148bc0e8e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_148bc10c8(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 148bc0f04 FUN_148bc0f04 body=95 status=ok
// SIG undefined FUN_148bc0f04(void)

undefined8 * FUN_148bc0f04(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148bc0f63(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148bc0f9c(param_1,iVar1);
      FUN_148bc100b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bc0f63 FUN_148bc0f63 body=56 status=ok
// SIG undefined FUN_148bc0f63(void)

void FUN_148bc0f63(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b2841e0;
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 7;
  }
  return;
}



// FUNCTION 148bc0f9c FUN_148bc0f9c body=111 status=ok
// SIG undefined FUN_148bc0f9c(void)

void FUN_148bc0f9c(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148bc100b FUN_148bc100b body=52 status=ok
// SIG undefined FUN_148bc100b(void)

void FUN_148bc100b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148bc1040(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 148bc1040 FUN_148bc1040 body=135 status=ok
// SIG undefined FUN_148bc1040(void)

undefined8 * FUN_148bc1040(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_14b2841e0;
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  *param_1 = &PTR_FUN_14b653960;
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar5;
  return param_1;
}



// FUNCTION 148bc10c8 FUN_148bc10c8 body=82 status=ok
// SIG undefined FUN_148bc10c8(void)

void FUN_148bc10c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b653920;
  FUN_148bc0f63(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  param_1[7] = &PTR_FUN_14b2841e0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14584efb0(param_1);
  return;
}



// FUNCTION 148bc111a FUN_148bc111a body=38 status=ok
// SIG undefined FUN_148bc111a(void)

undefined8 FUN_148bc111a(undefined8 param_1,int param_2)

{
  FUN_148bc10c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc1140 FUN_148bc1140 body=55 status=ok
// SIG undefined FUN_148bc1140(void)

void FUN_148bc1140(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3888 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3888 = FUN_140002ddd(FUN_1465ba125,uVar1,L"GbxStatusEffectAspectData_CharacterLocks");
  }
  return;
}



// FUNCTION 148bc1178 FUN_148bc1178 body=143 status=ok
// SIG undefined FUN_148bc1178(void)

void FUN_148bc1178(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x70);
    lVar6 = (longlong)*(int *)(param_1 + 0x78) * 0x38;
    do {
      lVar6 = lVar6 + -0x38;
      pcVar1 = (code *)*param_2;
      plVar4 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar4 = param_2 + 4;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,lVar5);
    } while ((cVar2 != '\0') && (lVar5 = lVar5 + 0x38, lVar6 != 0));
  }
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000148bc11f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 148bc1208 FUN_148bc1208 body=55 status=ok
// SIG undefined FUN_148bc1208(void)

void FUN_148bc1208(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3870 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3870 =
         FUN_140002ddd(FUN_1465ba08d,uVar1,L"GbxStatusEffectAspectData_CharacterLocksItem");
  }
  return;
}



// FUNCTION 148bc1256 FUN_148bc1256 body=92 status=ok
// SIG undefined FUN_148bc1256(void)

void FUN_148bc1256(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba3950);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc12b4 FUN_148bc12b4 body=92 status=ok
// SIG undefined FUN_148bc12b4(void)

void FUN_148bc12b4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba3960);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc1312 FUN_148bc1312 body=92 status=ok
// SIG undefined FUN_148bc1312(void)

void FUN_148bc1312(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba3990);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc1370 FUN_148bc1370 body=92 status=ok
// SIG undefined FUN_148bc1370(void)

void FUN_148bc1370(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba39a0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc13ce FUN_148bc13ce body=92 status=ok
// SIG undefined FUN_148bc13ce(void)

void FUN_148bc13ce(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba39b0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc142c FUN_148bc142c body=92 status=ok
// SIG undefined FUN_148bc142c(void)

void FUN_148bc142c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba39c0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc148a FUN_148bc148a body=92 status=ok
// SIG undefined FUN_148bc148a(void)

void FUN_148bc148a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba39d0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc14e8 FUN_148bc14e8 body=92 status=ok
// SIG undefined FUN_148bc14e8(void)

void FUN_148bc14e8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba39e0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc1546 FUN_148bc1546 body=92 status=ok
// SIG undefined FUN_148bc1546(void)

void FUN_148bc1546(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba39f0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc15a4 FUN_148bc15a4 body=92 status=ok
// SIG undefined FUN_148bc15a4(void)

void FUN_148bc15a4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba3a00);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc165c FUN_148bc165c body=102 status=ok
// SIG undefined FUN_148bc165c(void)

void FUN_148bc165c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc16c3 FUN_148bc16c3 body=102 status=ok
// SIG undefined FUN_148bc16c3(void)

void FUN_148bc16c3(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc1740 FUN_148bc1740 body=160 status=ok
// SIG undefined FUN_148bc1740(void)

void FUN_148bc1740(undefined8 param_1,longlong param_2)

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
  FUN_148e1a726(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc17e2 FUN_148bc17e2 body=47 status=ok
// SIG undefined FUN_148bc17e2(void)

void FUN_148bc17e2(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cba3be8);
                    /* WARNING: Could not recover jumptable at 0x000148bc180e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148bc1812 FUN_148bc1812 body=164 status=ok
// SIG undefined FUN_148bc1812(void)

void FUN_148bc1812(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_20;
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  FUN_148e1a680(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc18ee FUN_148bc18ee body=148 status=ok
// SIG undefined FUN_148bc18ee(void)

void FUN_148bc18ee(undefined8 param_1,longlong param_2)

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
  FUN_148e1a568(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc1984 FUN_148bc1984 body=335 status=ok
// SIG undefined FUN_148bc1984(void)

void FUN_148bc1984(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [24];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
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
  puVar2 = local_38;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_48;
  uStack_54 = local_48._4_4_;
  uStack_50 = (undefined4)uStack_40;
  uStack_4c = uStack_40._4_4_;
  FUN_148e1a3ae(local_20,puVar2);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc1ad4 FUN_148bc1ad4 body=410 status=ok
// SIG undefined FUN_148bc1ad4(void)

void FUN_148bc1ad4(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [36];
  undefined4 local_44;
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
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar2 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148e1a310(local_20,local_28,puVar2,local_44);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


