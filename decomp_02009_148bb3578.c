// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148bb3578 FUN_148bb3578 body=112 status=ok
// SIG undefined FUN_148bb3578(void)

undefined1 FUN_148bb3578(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(param_3 + lVar4);
      if ((bVar2 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_3 + lVar4);
          bVar2 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar4);
      *plVar1 = lVar3;
      plVar1[1] = *(longlong *)(param_3 + 8 + lVar4);
      *(undefined2 *)(plVar1 + 2) = *(undefined2 *)(param_3 + 0x10 + lVar4);
      lVar4 = lVar4 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bb3610 FUN_148bb3610 body=59 status=ok
// SIG undefined FUN_148bb3610(void)

undefined8 FUN_148bb3610(longlong *param_1)

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



// FUNCTION 148bb36b2 FUN_148bb36b2 body=69 status=ok
// SIG undefined FUN_148bb36b2(void)

void FUN_148bb36b2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x180);
  FUN_145c42fa8(param_2);
  *param_2 = &PTR_FUN_14b63efe0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  return;
}



// FUNCTION 148bb36f8 FUN_148bb36f8 body=53 status=ok
// SIG undefined FUN_148bb36f8(void)

void FUN_148bb36f8(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c42fa8(param_2);
  *param_2 = &PTR_FUN_14b63efe0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  return;
}



// FUNCTION 148bb3752 FUN_148bb3752 body=90 status=ok
// SIG undefined FUN_148bb3752(void)

undefined8 FUN_148bb3752(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba78fa(param_2,param_3);
    *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)(param_3 + 0x168);
    uVar1 = *(undefined4 *)(param_3 + 0x174);
    uVar2 = *(undefined4 *)(param_3 + 0x178);
    uVar3 = *(undefined4 *)(param_3 + 0x17c);
    *(undefined4 *)(param_2 + 0x170) = *(undefined4 *)(param_3 + 0x170);
    *(undefined4 *)(param_2 + 0x174) = uVar1;
    *(undefined4 *)(param_2 + 0x178) = uVar2;
    *(undefined4 *)(param_2 + 0x17c) = uVar3;
    param_2 = param_2 + 0x180;
    param_3 = param_3 + 0x180;
  }
  return 1;
}



// FUNCTION 148bb37d4 FUN_148bb37d4 body=59 status=ok
// SIG undefined FUN_148bb37d4(void)

undefined8 FUN_148bb37d4(longlong *param_1)

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



// FUNCTION 148bb3820 FUN_148bb3820 body=40 status=ok
// SIG undefined FUN_148bb3820(void)

void FUN_148bb3820(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x180) == '\x01') {
    FUN_145a38fa8(param_2);
    *(undefined1 *)(param_2 + 0x180) = 0;
  }
  return;
}



// FUNCTION 148bb3896 FUN_148bb3896 body=38 status=ok
// SIG undefined FUN_148bb3896(void)

undefined8 FUN_148bb3896(undefined8 param_1,int param_2)

{
  FUN_145a38fa8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb38bc FUN_148bb38bc body=55 status=ok
// SIG undefined FUN_148bb38bc(void)

void FUN_148bb38bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2748 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2748 = FUN_140002ddd(FUN_1465b51e9,uVar1,L"GbxSkillComponent_ActionSkill_Paladin");
  }
  return;
}



// FUNCTION 148bb38f6 FUN_148bb38f6 body=97 status=ok
// SIG undefined FUN_148bb38f6(void)

void FUN_148bb38f6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1b8);
  FUN_145c42fa8(param_2);
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  *param_2 = &PTR_FUN_14b63f090;
  *(undefined1 *)((longlong)param_2 + 0x1a4) = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 148bb3958 FUN_148bb3958 body=81 status=ok
// SIG undefined FUN_148bb3958(void)

void FUN_148bb3958(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c42fa8(param_2);
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  *param_2 = &PTR_FUN_14b63f090;
  *(undefined1 *)((longlong)param_2 + 0x1a4) = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 148bb39ce FUN_148bb39ce body=63 status=ok
// SIG undefined FUN_148bb39ce(void)

undefined1 FUN_148bb39ce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bb3b58(param_2,param_3);
    param_3 = param_3 + 0x1b8;
    param_2 = param_2 + 0x1b8;
  }
  return 1;
}



// FUNCTION 148bb3a36 FUN_148bb3a36 body=59 status=ok
// SIG undefined FUN_148bb3a36(void)

undefined8 FUN_148bb3a36(longlong *param_1)

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



// FUNCTION 148bb3a82 FUN_148bb3a82 body=40 status=ok
// SIG undefined FUN_148bb3a82(void)

void FUN_148bb3a82(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_146015f6c(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 148bb3af8 FUN_148bb3af8 body=38 status=ok
// SIG undefined FUN_148bb3af8(void)

undefined8 FUN_148bb3af8(undefined8 param_1,int param_2)

{
  FUN_146015f6c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb3b1e FUN_148bb3b1e body=57 status=ok
// SIG undefined FUN_148bb3b1e(void)

void FUN_148bb3b1e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2760 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2760 =
         FUN_140002ddd(FUN_1465b5281,uVar1,L"GbxSkillComponent_ActionSkill_Paladin_Onslaught");
  }
  return;
}



// FUNCTION 148bb3b58 FUN_148bb3b58 body=338 status=ok
// SIG undefined FUN_148bb3b58(void)

longlong FUN_148bb3b58(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  
  FUN_148ba78fa();
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  uVar6 = *(undefined4 *)(param_2 + 0x174);
  uVar7 = *(undefined4 *)(param_2 + 0x178);
  uVar8 = *(undefined4 *)(param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x174) = uVar6;
  *(undefined4 *)(param_1 + 0x178) = uVar7;
  *(undefined4 *)(param_1 + 0x17c) = uVar8;
  uVar3 = *(undefined8 *)(param_2 + 0x180);
  lVar4 = *(longlong *)(param_2 + 0x188);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x180) = uVar3;
  *(longlong *)(param_1 + 0x188) = lVar4;
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
  uVar3 = *(undefined8 *)(param_2 + 400);
  lVar4 = *(longlong *)(param_2 + 0x198);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 400) = uVar3;
  *(longlong *)(param_1 + 0x198) = lVar4;
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
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x1a4) == '\x01') {
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
      uVar9 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x1a4) != '\x01') goto LAB_148bb3c44;
      uVar9 = 0;
    }
    *(undefined1 *)(param_1 + 0x1a4) = uVar9;
  }
LAB_148bb3c44:
  uVar3 = *(undefined8 *)(param_2 + 0x1a8);
  lVar4 = *(longlong *)(param_2 + 0x1b0);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  *(longlong *)(param_1 + 0x1b0) = lVar4;
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
  return param_1;
}



// FUNCTION 148bb3cac FUN_148bb3cac body=83 status=ok
// SIG undefined FUN_148bb3cac(void)

void FUN_148bb3cac(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1a0);
  FUN_145c42fa8(param_2);
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  *param_2 = &PTR_FUN_14b63f140;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 148bb3d00 FUN_148bb3d00 body=67 status=ok
// SIG undefined FUN_148bb3d00(void)

void FUN_148bb3d00(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c42fa8(param_2);
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  *param_2 = &PTR_FUN_14b63f140;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 148bb3d68 FUN_148bb3d68 body=63 status=ok
// SIG undefined FUN_148bb3d68(void)

undefined1 FUN_148bb3d68(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bb3ef2(param_2,param_3);
    param_3 = param_3 + 0x1a0;
    param_2 = param_2 + 0x1a0;
  }
  return 1;
}



// FUNCTION 148bb3dd0 FUN_148bb3dd0 body=59 status=ok
// SIG undefined FUN_148bb3dd0(void)

undefined8 FUN_148bb3dd0(longlong *param_1)

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



// FUNCTION 148bb3e1c FUN_148bb3e1c body=40 status=ok
// SIG undefined FUN_148bb3e1c(void)

void FUN_148bb3e1c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_145dcabc0(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 148bb3e92 FUN_148bb3e92 body=38 status=ok
// SIG undefined FUN_148bb3e92(void)

undefined8 FUN_148bb3e92(undefined8 param_1,int param_2)

{
  FUN_145dcabc0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb3eb8 FUN_148bb3eb8 body=57 status=ok
// SIG undefined FUN_148bb3eb8(void)

void FUN_148bb3eb8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2778 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2778 =
         FUN_140002ddd(FUN_1465b5317,uVar1,L"GbxSkillComponent_ActionSkill_Paladin_Scourge");
  }
  return;
}



// FUNCTION 148bb3ef2 FUN_148bb3ef2 body=213 status=ok
// SIG undefined FUN_148bb3ef2(void)

longlong FUN_148bb3ef2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_148ba78fa();
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  uVar6 = *(undefined4 *)(param_2 + 0x174);
  uVar7 = *(undefined4 *)(param_2 + 0x178);
  uVar8 = *(undefined4 *)(param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x174) = uVar6;
  *(undefined4 *)(param_1 + 0x178) = uVar7;
  *(undefined4 *)(param_1 + 0x17c) = uVar8;
  uVar3 = *(undefined8 *)(param_2 + 0x180);
  lVar4 = *(longlong *)(param_2 + 0x188);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x180) = uVar3;
  *(longlong *)(param_1 + 0x188) = lVar4;
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
  uVar3 = *(undefined8 *)(param_2 + 400);
  lVar4 = *(longlong *)(param_2 + 0x198);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 400) = uVar3;
  *(longlong *)(param_1 + 0x198) = lVar4;
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
  return param_1;
}



// FUNCTION 148bb3fc8 FUN_148bb3fc8 body=83 status=ok
// SIG undefined FUN_148bb3fc8(void)

void FUN_148bb3fc8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1a0);
  FUN_145c42fa8(param_2);
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  *param_2 = &PTR_FUN_14b63f1f0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 148bb401c FUN_148bb401c body=67 status=ok
// SIG undefined FUN_148bb401c(void)

void FUN_148bb401c(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c42fa8(param_2);
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  *param_2 = &PTR_FUN_14b63f1f0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 148bb4084 FUN_148bb4084 body=63 status=ok
// SIG undefined FUN_148bb4084(void)

undefined1 FUN_148bb4084(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bb420e(param_2,param_3);
    param_3 = param_3 + 0x1a0;
    param_2 = param_2 + 0x1a0;
  }
  return 1;
}



// FUNCTION 148bb40ec FUN_148bb40ec body=59 status=ok
// SIG undefined FUN_148bb40ec(void)

undefined8 FUN_148bb40ec(longlong *param_1)

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



// FUNCTION 148bb4138 FUN_148bb4138 body=40 status=ok
// SIG undefined FUN_148bb4138(void)

void FUN_148bb4138(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_145dcac42(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 148bb41ae FUN_148bb41ae body=38 status=ok
// SIG undefined FUN_148bb41ae(void)

undefined8 FUN_148bb41ae(undefined8 param_1,int param_2)

{
  FUN_145dcac42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb41d4 FUN_148bb41d4 body=57 status=ok
// SIG undefined FUN_148bb41d4(void)

void FUN_148bb41d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2790 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2790 =
         FUN_140002ddd(FUN_1465b53ad,uVar1,L"GbxSkillComponent_ActionSkill_Paladin_Warforge");
  }
  return;
}



// FUNCTION 148bb420e FUN_148bb420e body=213 status=ok
// SIG undefined FUN_148bb420e(void)

longlong FUN_148bb420e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_148ba78fa();
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  uVar6 = *(undefined4 *)(param_2 + 0x174);
  uVar7 = *(undefined4 *)(param_2 + 0x178);
  uVar8 = *(undefined4 *)(param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x174) = uVar6;
  *(undefined4 *)(param_1 + 0x178) = uVar7;
  *(undefined4 *)(param_1 + 0x17c) = uVar8;
  uVar3 = *(undefined8 *)(param_2 + 0x180);
  lVar4 = *(longlong *)(param_2 + 0x188);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x180) = uVar3;
  *(longlong *)(param_1 + 0x188) = lVar4;
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
  uVar3 = *(undefined8 *)(param_2 + 400);
  lVar4 = *(longlong *)(param_2 + 0x198);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 400) = uVar3;
  *(longlong *)(param_1 + 0x198) = lVar4;
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
  return param_1;
}



// FUNCTION 148bb4318 FUN_148bb4318 body=63 status=ok
// SIG undefined FUN_148bb4318(void)

undefined1 FUN_148bb4318(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba82e4(param_2,param_3);
    param_3 = param_3 + 400;
    param_2 = param_2 + 400;
  }
  return 1;
}



// FUNCTION 148bb4380 FUN_148bb4380 body=59 status=ok
// SIG undefined FUN_148bb4380(void)

undefined8 FUN_148bb4380(longlong *param_1)

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



// FUNCTION 148bb43cc FUN_148bb43cc body=40 status=ok
// SIG undefined FUN_148bb43cc(void)

void FUN_148bb43cc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 400) == '\x01') {
    FUN_1458888c8(param_2);
    *(undefined1 *)(param_2 + 400) = 0;
  }
  return;
}



// FUNCTION 148bb4444 FUN_148bb4444 body=107 status=ok
// SIG undefined FUN_148bb4444(void)

void FUN_148bb4444(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c9269c(param_2);
  *param_2 = &PTR_FUN_14b63c960;
  memset(param_2 + 0x36,0,0x81);
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  *(undefined4 *)(param_2 + 0x4f) = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  *(undefined8 *)((longlong)param_2 + 0x199) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a1) = 0;
  return;
}



// FUNCTION 148bb44d4 FUN_148bb44d4 body=108 status=ok
// SIG undefined FUN_148bb44d4(void)

undefined1 FUN_148bb44d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba82e4(param_2,param_3);
    FUN_1401f3db8(param_2 + 400,param_3 + 400);
    FUN_148ba84c4(param_2 + 0x1a8,param_3 + 0x1a8);
    param_2 = param_2 + 0x280;
    param_3 = param_3 + 0x280;
  }
  return 1;
}



// FUNCTION 148bb4568 FUN_148bb4568 body=59 status=ok
// SIG undefined FUN_148bb4568(void)

undefined8 FUN_148bb4568(longlong *param_1)

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



// FUNCTION 148bb45b4 FUN_148bb45b4 body=40 status=ok
// SIG undefined FUN_148bb45b4(void)

void FUN_148bb45b4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x280) == '\x01') {
    FUN_145dbe052(param_2);
    *(undefined1 *)(param_2 + 0x280) = 0;
  }
  return;
}



// FUNCTION 148bb462a FUN_148bb462a body=57 status=ok
// SIG undefined FUN_148bb462a(void)

void FUN_148bb462a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba27c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba27c0 =
         FUN_140002ddd(FUN_1465b54db,uVar1,L"GbxSkillComponentData_ActionSkill_Paladin_Onslaught");
  }
  return;
}



// FUNCTION 148bb4664 FUN_148bb4664 body=100 status=ok
// SIG undefined FUN_148bb4664(void)

void FUN_148bb4664(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c9269c(param_2);
  *param_2 = &PTR_FUN_14b63cb00;
  *(undefined1 *)(param_2 + 0x32) = 0;
  memset(param_2 + 0x33,0,0x81);
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  return;
}



// FUNCTION 148bb46ec FUN_148bb46ec body=85 status=ok
// SIG undefined FUN_148bb46ec(void)

undefined1 FUN_148bb46ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba82e4(param_2,param_3);
    FUN_148ba84c4(param_2 + 400,param_3 + 400);
    param_2 = param_2 + 0x268;
    param_3 = param_3 + 0x268;
  }
  return 1;
}



// FUNCTION 148bb476a FUN_148bb476a body=59 status=ok
// SIG undefined FUN_148bb476a(void)

undefined8 FUN_148bb476a(longlong *param_1)

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



// FUNCTION 148bb47b6 FUN_148bb47b6 body=62 status=ok
// SIG undefined FUN_148bb47b6(void)

void FUN_148bb47b6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4d) == '\x01') {
    *param_2 = &PTR_FUN_14b63cb00;
    FUN_14588898c(param_2 + 0x32);
    FUN_1458888c8(param_2);
    *(undefined1 *)(param_2 + 0x4d) = 0;
  }
  return;
}



// FUNCTION 148bb4842 FUN_148bb4842 body=57 status=ok
// SIG undefined FUN_148bb4842(void)

void FUN_148bb4842(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba27d8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba27d8 =
         FUN_140002ddd(FUN_1465b5571,uVar1,L"GbxSkillComponentData_ActionSkill_Paladin_Scourge");
  }
  return;
}



// FUNCTION 148bb487c FUN_148bb487c body=100 status=ok
// SIG undefined FUN_148bb487c(void)

void FUN_148bb487c(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c9269c(param_2);
  *param_2 = &PTR_FUN_14b63cca0;
  *(undefined1 *)(param_2 + 0x32) = 0;
  memset(param_2 + 0x33,0,0x81);
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  return;
}



// FUNCTION 148bb4904 FUN_148bb4904 body=85 status=ok
// SIG undefined FUN_148bb4904(void)

undefined1 FUN_148bb4904(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba82e4(param_2,param_3);
    FUN_148ba84c4(param_2 + 400,param_3 + 400);
    param_2 = param_2 + 0x268;
    param_3 = param_3 + 0x268;
  }
  return 1;
}



// FUNCTION 148bb4982 FUN_148bb4982 body=59 status=ok
// SIG undefined FUN_148bb4982(void)

undefined8 FUN_148bb4982(longlong *param_1)

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



// FUNCTION 148bb49ce FUN_148bb49ce body=62 status=ok
// SIG undefined FUN_148bb49ce(void)

void FUN_148bb49ce(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4d) == '\x01') {
    *param_2 = &PTR_FUN_14b63cca0;
    FUN_14588898c(param_2 + 0x32);
    FUN_1458888c8(param_2);
    *(undefined1 *)(param_2 + 0x4d) = 0;
  }
  return;
}



// FUNCTION 148bb4a5a FUN_148bb4a5a body=57 status=ok
// SIG undefined FUN_148bb4a5a(void)

void FUN_148bb4a5a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba27f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba27f0 =
         FUN_140002ddd(FUN_1465b5607,uVar1,L"GbxSkillComponentData_ActionSkill_Paladin_Warforge");
  }
  return;
}



// FUNCTION 148bb4aa4 FUN_148bb4aa4 body=48 status=ok
// SIG undefined FUN_148bb4aa4(void)

void FUN_148bb4aa4(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148bb4aea FUN_148bb4aea body=91 status=ok
// SIG undefined FUN_148bb4aea(void)

undefined8 FUN_148bb4aea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined2 *)(param_2 + -0x18) = *(undefined2 *)(param_3 + -0x18);
      FUN_148bb4c0a(param_2 + -0x10,param_3 + -0x10);
      FUN_148bb4c5a(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bb4b6e FUN_148bb4b6e body=59 status=ok
// SIG undefined FUN_148bb4b6e(void)

undefined8 FUN_148bb4b6e(longlong *param_1)

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



// FUNCTION 148bb4c0a FUN_148bb4c0a body=79 status=ok
// SIG undefined FUN_148bb4c0a(void)

undefined8 * FUN_148bb4c0a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148bb4caa(param_1,iVar1);
      FUN_148bb4d1d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bb4c5a FUN_148bb4c5a body=79 status=ok
// SIG undefined FUN_148bb4c5a(void)

undefined8 * FUN_148bb4c5a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148bb4d4a(param_1,iVar1);
      FUN_148bb4dbd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bb4caa FUN_148bb4caa body=115 status=ok
// SIG undefined FUN_148bb4caa(void)

void FUN_148bb4caa(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148bb4d1d FUN_148bb4d1d body=44 status=ok
// SIG undefined FUN_148bb4d1d(void)

void FUN_148bb4d1d(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 148bb4d4a FUN_148bb4d4a body=115 status=ok
// SIG undefined FUN_148bb4d4a(void)

void FUN_148bb4d4a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148bb4dbd FUN_148bb4dbd body=44 status=ok
// SIG undefined FUN_148bb4dbd(void)

void FUN_148bb4dbd(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 148bb4dea FUN_148bb4dea body=52 status=ok
// SIG undefined FUN_148bb4dea(void)

void FUN_148bb4dea(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148bb4e96 FUN_148bb4e96 body=54 status=ok
// SIG undefined FUN_148bb4e96(void)

undefined1 FUN_148bb4e96(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bb505c(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148bb4ef4 FUN_148bb4ef4 body=59 status=ok
// SIG undefined FUN_148bb4ef4(void)

undefined8 FUN_148bb4ef4(longlong *param_1)

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



// FUNCTION 148bb4f3a FUN_148bb4f3a body=34 status=ok
// SIG undefined FUN_148bb4f3a(void)

void FUN_148bb4f3a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_148bb5008(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148bb4faa FUN_148bb4faa body=38 status=ok
// SIG undefined FUN_148bb4faa(void)

undefined8 FUN_148bb4faa(undefined8 param_1,int param_2)

{
  FUN_148bb5008();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb4fd0 FUN_148bb4fd0 body=55 status=ok
// SIG undefined FUN_148bb4fd0(void)

void FUN_148bb4fd0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2948 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2948 =
         FUN_140002ddd(FUN_1465b58f3,uVar1,L"GbxSkillComponentDataItem_CharacterLockProfile");
  }
  return;
}



// FUNCTION 148bb5008 FUN_148bb5008 body=83 status=ok
// SIG undefined FUN_148bb5008(void)

void FUN_148bb5008(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b63dc40;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b23dd30;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  FUN_144a659aa(param_1);
  return;
}



// FUNCTION 148bb505c FUN_148bb505c body=91 status=ok
// SIG undefined FUN_148bb505c(void)

longlong FUN_148bb505c(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(param_2 + 0x30);
  FUN_148bb4c0a(param_1 + 0x38,param_2 + 0x38);
  FUN_148bb4c5a(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  return param_1;
}



// FUNCTION 148bb50b8 FUN_148bb50b8 body=84 status=ok
// SIG undefined FUN_148bb50b8(void)

void FUN_148bb50b8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xc0);
  FUN_145c43014(param_2);
  *param_2 = &PTR_FUN_14b63f480;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  FUN_148ddc5f6(param_2 + 0x11);
  *(undefined2 *)(param_2 + 0x17) = 0;
  return;
}



// FUNCTION 148bb510c FUN_148bb510c body=68 status=ok
// SIG undefined FUN_148bb510c(void)

void FUN_148bb510c(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c43014(param_2);
  *param_2 = &PTR_FUN_14b63f480;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  FUN_148ddc5f6(param_2 + 0x11);
  *(undefined2 *)(param_2 + 0x17) = 0;
  return;
}



// FUNCTION 148bb5174 FUN_148bb5174 body=63 status=ok
// SIG undefined FUN_148bb5174(void)

undefined1 FUN_148bb5174(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bb538e(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 148bb51dc FUN_148bb51dc body=59 status=ok
// SIG undefined FUN_148bb51dc(void)

undefined8 FUN_148bb51dc(longlong *param_1)

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



// FUNCTION 148bb5228 FUN_148bb5228 body=40 status=ok
// SIG undefined FUN_148bb5228(void)

void FUN_148bb5228(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_148bb52fc(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 148bb529e FUN_148bb529e body=38 status=ok
// SIG undefined FUN_148bb529e(void)

undefined8 FUN_148bb529e(undefined8 param_1,int param_2)

{
  FUN_148bb52fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb52c4 FUN_148bb52c4 body=55 status=ok
// SIG undefined FUN_148bb52c4(void)

void FUN_148bb52c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2960 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2960 = FUN_140002ddd(FUN_1465b5989,uVar1,L"GbxSkillComponent_CharacterLocks");
  }
  return;
}



// FUNCTION 148bb52fc FUN_148bb52fc body=146 status=ok
// SIG undefined FUN_148bb52fc(void)

void FUN_148bb52fc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b63f480;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x10];
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
  FUN_140d8c2c6(param_1);
  return;
}



// FUNCTION 148bb538e FUN_148bb538e body=254 status=ok
// SIG undefined FUN_148bb538e(void)

longlong FUN_148bb538e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_148704de0();
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  lVar4 = *(longlong *)(param_2 + 0x60);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(longlong *)(param_1 + 0x60) = lVar4;
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
  uVar6 = *(undefined4 *)(param_2 + 0x6c);
  uVar7 = *(undefined4 *)(param_2 + 0x70);
  uVar8 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = uVar6;
  *(undefined4 *)(param_1 + 0x70) = uVar7;
  *(undefined4 *)(param_1 + 0x74) = uVar8;
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  lVar4 = *(longlong *)(param_2 + 0x80);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(longlong *)(param_1 + 0x80) = lVar4;
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
  *(undefined2 *)(param_1 + 0x88) = *(undefined2 *)(param_2 + 0x88);
  FUN_148bb4c0a(param_1 + 0x90,param_2 + 0x90);
  FUN_148bb4c5a(param_1 + 0xa0,param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(param_2 + 0xb8);
  return param_1;
}



// FUNCTION 148bb548e FUN_148bb548e body=154 status=ok
// SIG undefined FUN_148bb548e(void)

void FUN_148bb548e(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  *param_2 = &PTR_FUN_14b63df10;
  param_2[10] = 0;
  param_2[0xb] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bb552a FUN_148bb552a body=142 status=ok
// SIG undefined FUN_148bb552a(void)

void FUN_148bb552a(undefined8 param_1,undefined8 *param_2)

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
  *param_2 = &PTR_FUN_14b63df10;
  param_2[10] = 0;
  param_2[0xb] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bb55de FUN_148bb55de body=141 status=ok
// SIG undefined FUN_148bb55de(void)

undefined1 FUN_148bb55de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_146130eee(lVar1 + 8,lVar2 + 8);
      uVar3 = *(undefined4 *)(lVar2 + 0x24);
      uVar4 = *(undefined4 *)(lVar2 + 0x28);
      uVar5 = *(undefined4 *)(lVar2 + 0x2c);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
      *(undefined4 *)(lVar1 + 0x24) = uVar3;
      *(undefined4 *)(lVar1 + 0x28) = uVar4;
      *(undefined4 *)(lVar1 + 0x2c) = uVar5;
      *(undefined1 *)(lVar1 + 0x30) = *(undefined1 *)(lVar2 + 0x30);
      FUN_145c43818(param_2 + lVar6 + 0x38,param_3 + lVar6 + 0x38);
      FUN_148bb5808(param_2 + lVar6 + 0x50,param_3 + lVar6 + 0x50);
      lVar6 = lVar6 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bb5694 FUN_148bb5694 body=59 status=ok
// SIG undefined FUN_148bb5694(void)

undefined8 FUN_148bb5694(longlong *param_1)

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



// FUNCTION 148bb56da FUN_148bb56da body=34 status=ok
// SIG undefined FUN_148bb56da(void)

void FUN_148bb56da(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_148bb57a8(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148bb574a FUN_148bb574a body=38 status=ok
// SIG undefined FUN_148bb574a(void)

undefined8 FUN_148bb574a(undefined8 param_1,int param_2)

{
  FUN_148bb57a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb5770 FUN_148bb5770 body=55 status=ok
// SIG undefined FUN_148bb5770(void)

void FUN_148bb5770(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2978 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2978 = FUN_140002ddd(FUN_1465b5a1f,uVar1,L"GbxSkillComponentData_CharacterLocks");
  }
  return;
}



// FUNCTION 148bb57a8 FUN_148bb57a8 body=57 status=ok
// SIG undefined FUN_148bb57a8(void)

void FUN_148bb57a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b63df10;
  FUN_148bb57e1(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144a659aa(param_1);
  return;
}



// FUNCTION 148bb57e1 FUN_148bb57e1 body=38 status=ok
// SIG undefined FUN_148bb57e1(void)

void FUN_148bb57e1(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148bb5008(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 148bb5808 FUN_148bb5808 body=95 status=ok
// SIG undefined FUN_148bb5808(void)

undefined8 * FUN_148bb5808(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148bb57e1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148bb5868(param_1,iVar1);
      FUN_148bb58db(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bb5868 FUN_148bb5868 body=115 status=ok
// SIG undefined FUN_148bb5868(void)

void FUN_148bb5868(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148bb58db FUN_148bb58db body=52 status=ok
// SIG undefined FUN_148bb58db(void)

void FUN_148bb58db(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148bb5910(param_1,param_2);
    param_1 = param_1 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return;
}



// FUNCTION 148bb5910 FUN_148bb5910 body=149 status=ok
// SIG undefined FUN_148bb5910(void)

undefined8 * FUN_148bb5910(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
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
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  *param_1 = &PTR_FUN_14b63dc40;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x28);
  FUN_148bb59a6(param_1 + 6,param_2 + 0x30);
  return param_1;
}



// FUNCTION 148bb59a6 FUN_148bb59a6 body=170 status=ok
// SIG undefined FUN_148bb59a6(void)

undefined2 * FUN_148bb59a6(undefined2 *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 4);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 10) = 0;
  }
  else {
    FUN_148bb4caa(param_1 + 4,iVar1,0);
    FUN_148bb4d1d(*(undefined8 *)(param_1 + 4),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0xc) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
  else {
    FUN_148bb4d4a(param_1 + 0xc,iVar1,0);
    FUN_148bb4dbd(*(undefined8 *)(param_1 + 0xc),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  return param_1;
}



// FUNCTION 148bb5ac6 FUN_148bb5ac6 body=59 status=ok
// SIG undefined FUN_148bb5ac6(void)

undefined8 FUN_148bb5ac6(longlong *param_1)

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



// FUNCTION 148bb5bb6 FUN_148bb5bb6 body=97 status=ok
// SIG undefined FUN_148bb5bb6(void)

undefined8 FUN_148bb5bb6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_144a787a6(param_2 + -0x20,param_3 + -0x20);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_1401f3db8(param_2,param_3);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bb5c40 FUN_148bb5c40 body=59 status=ok
// SIG undefined FUN_148bb5c40(void)

undefined8 FUN_148bb5c40(longlong *param_1)

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



// FUNCTION 148bb5c86 FUN_148bb5c86 body=34 status=ok
// SIG undefined FUN_148bb5c86(void)

void FUN_148bb5c86(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1458e29aa(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148bb5cf6 FUN_148bb5cf6 body=38 status=ok
// SIG undefined FUN_148bb5cf6(void)

undefined8 FUN_148bb5cf6(undefined8 param_1,int param_2)

{
  FUN_1458e29aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb5d1c FUN_148bb5d1c body=55 status=ok
// SIG undefined FUN_148bb5d1c(void)

void FUN_148bb5d1c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba29d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba29d0 = FUN_140002ddd(FUN_1465b5c1f,uVar1,L"GbxSkillComponentData_CharacterLockItemEx");
  }
  return;
}



// FUNCTION 148bb5d54 FUN_148bb5d54 body=37 status=ok
// SIG undefined FUN_148bb5d54(void)

void FUN_148bb5d54(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa8);
  FUN_148bb5eea(param_2);
  return;
}



// FUNCTION 148bb5da6 FUN_148bb5da6 body=90 status=ok
// SIG undefined FUN_148bb5da6(void)

undefined1 FUN_148bb5da6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148706f40(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x8c);
    uVar2 = *(undefined4 *)(param_3 + 0x90);
    uVar3 = *(undefined4 *)(param_3 + 0x94);
    uVar4 = *(undefined4 *)(param_3 + 0x94);
    uVar5 = *(undefined4 *)(param_3 + 0x98);
    uVar6 = *(undefined4 *)(param_3 + 0x9c);
    uVar7 = *(undefined4 *)(param_3 + 0xa0);
    *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_3 + 0x88);
    *(undefined4 *)(param_2 + 0x8c) = uVar1;
    *(undefined4 *)(param_2 + 0x90) = uVar2;
    *(undefined4 *)(param_2 + 0x94) = uVar3;
    *(undefined4 *)(param_2 + 0x94) = uVar4;
    *(undefined4 *)(param_2 + 0x98) = uVar5;
    *(undefined4 *)(param_2 + 0x9c) = uVar6;
    *(undefined4 *)(param_2 + 0xa0) = uVar7;
    param_2 = param_2 + 0xa8;
    param_3 = param_3 + 0xa8;
  }
  return 1;
}



// FUNCTION 148bb5e28 FUN_148bb5e28 body=59 status=ok
// SIG undefined FUN_148bb5e28(void)

undefined8 FUN_148bb5e28(longlong *param_1)

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



// FUNCTION 148bb5e74 FUN_148bb5e74 body=40 status=ok
// SIG undefined FUN_148bb5e74(void)

void FUN_148bb5e74(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_1459b3c46(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 148bb5eea FUN_148bb5eea body=81 status=ok
// SIG undefined FUN_148bb5eea(void)

undefined8 * FUN_148bb5eea(undefined8 *param_1)

{
  FUN_1413ea01e();
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = &PTR_FUN_14b63f4f0;
  param_1[10] = &PTR_FUN_14b63f550;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_145882810(param_1 + 0x13);
  return param_1;
}



// FUNCTION 148bb5f3c FUN_148bb5f3c body=38 status=ok
// SIG undefined FUN_148bb5f3c(void)

undefined8 FUN_148bb5f3c(undefined8 param_1,int param_2)

{
  FUN_1459b3c46();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb5f62 FUN_148bb5f62 body=57 status=ok
// SIG undefined FUN_148bb5f62(void)

void FUN_148bb5f62(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba29e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba29e8 = FUN_140002ddd(FUN_1465b5cb5,uVar1,L"GbxSkillComponent_CharacterLocksEx");
  }
  return;
}



// FUNCTION 148bb5f9c FUN_148bb5f9c body=134 status=ok
// SIG undefined FUN_148bb5f9c(void)

void FUN_148bb5f9c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  *param_2 = &PTR_FUN_14b63e4e0;
  param_2[6] = 0;
  param_2[7] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bb6024 FUN_148bb6024 body=130 status=ok
// SIG undefined FUN_148bb6024(void)

void FUN_148bb6024(undefined8 param_1,undefined8 *param_2)

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
  *param_2 = &PTR_FUN_14b63e4e0;
  param_2[6] = 0;
  param_2[7] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bb60cc FUN_148bb60cc body=83 status=ok
// SIG undefined FUN_148bb60cc(void)

undefined1 FUN_148bb60cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      FUN_146130eee(param_2 + -0x28,param_3 + -0x28);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_148bb623c(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bb6148 FUN_148bb6148 body=59 status=ok
// SIG undefined FUN_148bb6148(void)

undefined8 FUN_148bb6148(longlong *param_1)

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



// FUNCTION 148bb618e FUN_148bb618e body=34 status=ok
// SIG undefined FUN_148bb618e(void)

void FUN_148bb618e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1458e294a(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148bb61fe FUN_148bb61fe body=57 status=ok
// SIG undefined FUN_148bb61fe(void)

void FUN_148bb61fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2a00 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2a00 = FUN_140002ddd(FUN_1465b5d4b,uVar1,L"GbxSkillComponentData_CharacterLocksEx");
  }
  return;
}



// FUNCTION 148bb623c FUN_148bb623c body=95 status=ok
// SIG undefined FUN_148bb623c(void)

undefined8 * FUN_148bb623c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458e2983(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148bb629c(param_1,iVar1);
      FUN_148bb630f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bb629c FUN_148bb629c body=115 status=ok
// SIG undefined FUN_148bb629c(void)

void FUN_148bb629c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148bb630f FUN_148bb630f body=80 status=ok
// SIG undefined FUN_148bb630f(void)

void FUN_148bb630f(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148bb6360(param_1,param_2);
    *param_1 = &PTR_FUN_14b63e210;
    param_1[8] = *(undefined8 *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
    param_1 = param_1 + 10;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 148bb6360 FUN_148bb6360 body=143 status=ok
// SIG undefined FUN_148bb6360(void)

undefined8 * FUN_148bb6360(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
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
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  *param_1 = &PTR_FUN_14b23f4f0;
  FUN_1401f3da4(param_1 + 5,param_2 + 0x28);
  return param_1;
}



// FUNCTION 148bb63f0 FUN_148bb63f0 body=37 status=ok
// SIG undefined FUN_148bb63f0(void)

void FUN_148bb63f0(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf8);
  FUN_1465b683e(param_2);
  return;
}



// FUNCTION 148bb6442 FUN_148bb6442 body=63 status=ok
// SIG undefined FUN_148bb6442(void)

undefined1 FUN_148bb6442(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bb65cc(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 148bb64aa FUN_148bb64aa body=59 status=ok
// SIG undefined FUN_148bb64aa(void)

undefined8 FUN_148bb64aa(longlong *param_1)

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



// FUNCTION 148bb64f6 FUN_148bb64f6 body=40 status=ok
// SIG undefined FUN_148bb64f6(void)

void FUN_148bb64f6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_1458a0950(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 148bb656c FUN_148bb656c body=38 status=ok
// SIG undefined FUN_148bb656c(void)

undefined8 FUN_148bb656c(undefined8 param_1,int param_2)

{
  FUN_1458a0950();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb6592 FUN_148bb6592 body=57 status=ok
// SIG undefined FUN_148bb6592(void)

void FUN_148bb6592(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2a20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2a20 = FUN_140002ddd(FUN_1465b5dd9,uVar1,L"GbxSkillComponent_Charges");
  }
  return;
}



// FUNCTION 148bb65cc FUN_148bb65cc body=169 status=ok
// SIG undefined FUN_148bb65cc(void)

longlong FUN_148bb65cc(longlong param_1,longlong param_2)

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
  
  FUN_14870ff88();
  FUN_140311eb6(param_1 + 0x70,param_2 + 0x70);
  if (param_2 != param_1) {
    FUN_148bb6676(param_1 + 0x80,param_2 + 0x80);
    FUN_148bb6676(param_1 + 0x98,param_2 + 0x98);
  }
  uVar1 = *(undefined4 *)(param_2 + 0xb0);
  uVar2 = *(undefined4 *)(param_2 + 0xb4);
  uVar3 = *(undefined4 *)(param_2 + 0xb8);
  uVar4 = *(undefined4 *)(param_2 + 0xbc);
  uVar5 = *(undefined4 *)(param_2 + 0xc0);
  uVar6 = *(undefined4 *)(param_2 + 0xc4);
  uVar7 = *(undefined4 *)(param_2 + 200);
  uVar8 = *(undefined4 *)(param_2 + 0xcc);
  uVar9 = *(undefined4 *)(param_2 + 0xd4);
  uVar10 = *(undefined4 *)(param_2 + 0xd8);
  uVar11 = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = uVar9;
  *(undefined4 *)(param_1 + 0xd8) = uVar10;
  *(undefined4 *)(param_1 + 0xdc) = uVar11;
  *(undefined4 *)(param_1 + 0xc0) = uVar5;
  *(undefined4 *)(param_1 + 0xc4) = uVar6;
  *(undefined4 *)(param_1 + 200) = uVar7;
  *(undefined4 *)(param_1 + 0xcc) = uVar8;
  *(undefined4 *)(param_1 + 0xb0) = uVar1;
  *(undefined4 *)(param_1 + 0xb4) = uVar2;
  *(undefined4 *)(param_1 + 0xb8) = uVar3;
  *(undefined4 *)(param_1 + 0xbc) = uVar4;
  FUN_140841e06(param_1 + 0xe0,param_2 + 0xe0);
  *(undefined2 *)(param_1 + 0xf0) = *(undefined2 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  return param_1;
}



// FUNCTION 148bb6676 FUN_148bb6676 body=304 status=ok
// SIG undefined FUN_148bb6676(void)

void FUN_148bb6676(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148bb67a8 FUN_148bb67a8 body=225 status=ok
// SIG undefined FUN_148bb67a8(void)

void FUN_148bb67a8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  memset(param_2 + 6,0,0x88);
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
  *param_2 = &PTR_FUN_14b63e7e0;
  *(undefined4 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined4 *)(param_2 + 0xd) = 0xf00000d0;
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0xf) = 0x3f800000;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 10;
  param_2[0x12] = 0;
  *(undefined1 *)(param_2 + 0x13) = 1;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bb688a FUN_148bb688a body=208 status=ok
// SIG undefined FUN_148bb688a(void)

void FUN_148bb688a(undefined8 param_1,undefined8 *param_2)

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
  *param_2 = &PTR_FUN_14b63e7e0;
  *(undefined4 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined4 *)(param_2 + 0xd) = 0xf00000d0;
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0xf) = 0x3f800000;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 10;
  param_2[0x12] = 0;
  *(undefined1 *)(param_2 + 0x13) = 1;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bb6980 FUN_148bb6980 body=63 status=ok
// SIG undefined FUN_148bb6980(void)

undefined1 FUN_148bb6980(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bb6aa8(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 148bb69e8 FUN_148bb69e8 body=59 status=ok
// SIG undefined FUN_148bb69e8(void)

undefined8 FUN_148bb69e8(longlong *param_1)

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



// FUNCTION 148bb6a34 FUN_148bb6a34 body=38 status=ok
// SIG undefined FUN_148bb6a34(void)

void FUN_148bb6a34(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_144a659aa(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 148bb6aa8 FUN_148bb6aa8 body=148 status=ok
// SIG undefined FUN_148bb6aa8(void)

longlong FUN_148bb6aa8(longlong param_1,longlong param_2)

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
  FUN_140d02432(param_1 + 0x30,param_2 + 0x30);
  if ((*(longlong *)(param_1 + 0x80) != *(longlong *)(param_2 + 0x80)) ||
     (*(int *)(param_1 + 0x88) != *(int *)(param_2 + 0x88))) {
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_2 + 0x80);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  FUN_145c43818(param_1 + 0xa0,param_2 + 0xa0);
  return param_1;
}



// FUNCTION 148bb6bd0 FUN_148bb6bd0 body=59 status=ok
// SIG undefined FUN_148bb6bd0(void)

undefined8 FUN_148bb6bd0(longlong *param_1)

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



// FUNCTION 148bb6c16 FUN_148bb6c16 body=32 status=ok
// SIG undefined FUN_148bb6c16(void)

void FUN_148bb6c16(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_144a659aa(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 148bb6c84 FUN_148bb6c84 body=57 status=ok
// SIG undefined FUN_148bb6c84(void)

void FUN_148bb6c84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2ab0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2ab0 =
         FUN_140002ddd(FUN_1465b6123,uVar1,
                       L"GbxSkillComponentData_DelegateData_AppliedElementalEffect");
  }
  return;
}



// FUNCTION 148bb6d26 FUN_148bb6d26 body=59 status=ok
// SIG undefined FUN_148bb6d26(void)

undefined8 FUN_148bb6d26(longlong *param_1)

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



// FUNCTION 148bb6d6c FUN_148bb6d6c body=32 status=ok
// SIG undefined FUN_148bb6d6c(void)

void FUN_148bb6d6c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    FUN_144a659aa(param_2);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 148bb6dda FUN_148bb6dda body=57 status=ok
// SIG undefined FUN_148bb6dda(void)

void FUN_148bb6dda(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2c50 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2c50 =
         FUN_140002ddd(FUN_1465b61e9,uVar1,L"GbxSkillComponentData_DelegateData_CausedFreeze");
  }
  return;
}



// FUNCTION 148bb6e7c FUN_148bb6e7c body=59 status=ok
// SIG undefined FUN_148bb6e7c(void)

undefined8 FUN_148bb6e7c(longlong *param_1)

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



// FUNCTION 148bb6ec2 FUN_148bb6ec2 body=32 status=ok
// SIG undefined FUN_148bb6ec2(void)

void FUN_148bb6ec2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    FUN_144a659aa(param_2);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 148bb6f30 FUN_148bb6f30 body=38 status=ok
// SIG undefined FUN_148bb6f30(void)

undefined8 FUN_148bb6f30(undefined8 param_1,int param_2)

{
  FUN_144a659aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb6f56 FUN_148bb6f56 body=55 status=ok
// SIG undefined FUN_148bb6f56(void)

void FUN_148bb6f56(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2c70 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2c70 =
         FUN_140002ddd(FUN_1465b62af,uVar1,L"GbxSkillComponentData_DelegateData_CausedPlayerDeath");
  }
  return;
}



// FUNCTION 148bb6ff6 FUN_148bb6ff6 body=59 status=ok
// SIG undefined FUN_148bb6ff6(void)

undefined8 FUN_148bb6ff6(longlong *param_1)

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



// FUNCTION 148bb703c FUN_148bb703c body=32 status=ok
// SIG undefined FUN_148bb703c(void)

void FUN_148bb703c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    FUN_144a659aa(param_2);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 148bb70b0 FUN_148bb70b0 body=61 status=ok
// SIG undefined FUN_148bb70b0(void)

void FUN_148bb70b0(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bb70ee FUN_148bb70ee body=62 status=ok
// SIG undefined FUN_148bb70ee(void)

void FUN_148bb70ee(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bb712d FUN_148bb712d body=62 status=ok
// SIG undefined FUN_148bb712d(void)

void FUN_148bb712d(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bb7171 FUN_148bb7171 body=66 status=ok
// SIG undefined FUN_148bb7171(void)

void FUN_148bb7171(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bb71b4 FUN_148bb71b4 body=83 status=ok
// SIG undefined FUN_148bb71b4(void)

void FUN_148bb71b4(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  local_30 = param_2;
  local_10 = param_4;
  FUN_1447cd2ec(local_28,&local_30);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bb7208 FUN_148bb7208 body=108 status=ok
// SIG undefined FUN_148bb7208(void)

void FUN_148bb7208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_4;
  uStack_24 = param_4[1];
  uStack_20 = param_4[2];
  uStack_1c = param_4[3];
  local_18 = *(undefined8 *)(param_4 + 4);
  local_10 = param_5;
  local_c = param_6;
  local_38 = param_2;
  local_30 = param_3;
  FUN_1447cd2ec(param_5,&local_38);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bb728f FUN_148bb728f body=66 status=ok
// SIG undefined FUN_148bb728f(void)

void FUN_148bb728f(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bb72d2 FUN_148bb72d2 body=61 status=ok
// SIG undefined FUN_148bb72d2(void)

void FUN_148bb72d2(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bb7310 FUN_148bb7310 body=65 status=ok
// SIG undefined FUN_148bb7310(void)

void FUN_148bb7310(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18[0] = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bb7352 FUN_148bb7352 body=62 status=ok
// SIG undefined FUN_148bb7352(void)

void FUN_148bb7352(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bb739e FUN_148bb739e body=349 status=ok
// SIG undefined FUN_148bb739e(void)

void FUN_148bb739e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_708 [40];
  longlong local_6e0;
  undefined4 local_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  longlong local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined1 local_6a8 [840];
  undefined1 local_360 [8];
  undefined1 local_358 [632];
  longlong local_e0;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_708;
  local_6c8 = 0;
  uStack_6c0 = 0;
  local_6b8 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c8);
  }
  FUN_145926a7c(local_360);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_360);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_360);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148bb74fc(local_6a8,local_360);
  local_6e0 = local_6c8;
  if ((local_6c8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_6d8 = (undefined4)uStack_6c0;
  uStack_6d4 = uStack_6c0._4_4_;
  uStack_6d0 = (undefined4)local_6b8;
  uStack_6cc = local_6b8._4_4_;
  FUN_148de0ad6(&local_6e0,local_6a8);
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  FUN_14076ba26(local_358);
  if ((local_18 ^ (ulonglong)auStack_708) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bb74fc FUN_148bb74fc body=370 status=ok
// SIG undefined FUN_148bb74fc(void)

undefined2 * FUN_148bb74fc(undefined2 *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  FUN_140ff1a6a(param_1 + 4,param_2 + 4);
  *(undefined8 *)(param_1 + 0x140) = 0;
  iVar1 = *(int *)(param_2 + 0x144);
  uVar2 = *(undefined8 *)(param_2 + 0x140);
  *(int *)(param_1 + 0x144) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x146) = 0;
  }
  else {
    FUN_1407f2096(param_1 + 0x140,iVar1,0);
    FUN_1407f2045(*(undefined8 *)(param_1 + 0x140),uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
  FUN_144a7f96e(param_1 + 0x150,param_2 + 0x150);
  uVar2 = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x15c) = *(undefined8 *)(param_2 + 0x15c);
  *(undefined8 *)(param_1 + 0x160) = uVar2;
  *(undefined8 *)(param_1 + 0x164) = *(undefined8 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_2 + 0x174);
  FUN_144a7f96e(param_1 + 0x178,param_2 + 0x178);
  uVar2 = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(param_1 + 0x184) = *(undefined8 *)(param_2 + 0x184);
  *(undefined8 *)(param_1 + 0x188) = uVar2;
  *(undefined8 *)(param_1 + 0x18c) = *(undefined8 *)(param_2 + 0x18c);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_1 + 0x19c) = *(undefined8 *)(param_2 + 0x19c);
  return param_1;
}



// FUNCTION 148bb768c FUN_148bb768c body=45 status=ok
// SIG undefined FUN_148bb768c(void)

longlong FUN_148bb768c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145b06f62(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb7722 FUN_148bb7722 body=59 status=ok
// SIG undefined FUN_148bb7722(void)

undefined8 FUN_148bb7722(longlong *param_1)

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



// FUNCTION 148bb77c2 FUN_148bb77c2 body=31 status=ok
// SIG undefined FUN_148bb77c2(void)

undefined8 FUN_148bb77c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb77e2 FUN_148bb77e2 body=57 status=ok
// SIG undefined FUN_148bb77e2(void)

void FUN_148bb77e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2cb0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2cb0 =
         FUN_140002ddd(FUN_1465b6a45,uVar1,L"GbxSkillComponentData_DelegateData_CharacterDowned");
  }
  return;
}



// FUNCTION 148bb7884 FUN_148bb7884 body=59 status=ok
// SIG undefined FUN_148bb7884(void)

undefined8 FUN_148bb7884(longlong *param_1)

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



// FUNCTION 148bb7924 FUN_148bb7924 body=31 status=ok
// SIG undefined FUN_148bb7924(void)

undefined8 FUN_148bb7924(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb79ac FUN_148bb79ac body=59 status=ok
// SIG undefined FUN_148bb79ac(void)

undefined8 FUN_148bb79ac(longlong *param_1)

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



// FUNCTION 148bb7a4c FUN_148bb7a4c body=29 status=ok
// SIG undefined FUN_148bb7a4c(void)

undefined8 FUN_148bb7a4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb7a6a FUN_148bb7a6a body=55 status=ok
// SIG undefined FUN_148bb7a6a(void)

void FUN_148bb7a6a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2cf0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2cf0 =
         FUN_140002ddd(FUN_1465b6bd1,uVar1,L"GbxSkillComponentData_DelegateData_CharacterMoving");
  }
  return;
}



// FUNCTION 148bb7b0a FUN_148bb7b0a body=59 status=ok
// SIG undefined FUN_148bb7b0a(void)

undefined8 FUN_148bb7b0a(longlong *param_1)

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



// FUNCTION 148bb7baa FUN_148bb7baa body=29 status=ok
// SIG undefined FUN_148bb7baa(void)

undefined8 FUN_148bb7baa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb7bc8 FUN_148bb7bc8 body=55 status=ok
// SIG undefined FUN_148bb7bc8(void)

void FUN_148bb7bc8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2d10 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2d10 =
         FUN_140002ddd(FUN_1465b6c97,uVar1,L"GbxSkillComponentData_DelegateData_CharacterRespawned")
    ;
  }
  return;
}



// FUNCTION 148bb7c48 FUN_148bb7c48 body=62 status=ok
// SIG undefined FUN_148bb7c48(void)

undefined1 FUN_148bb7c48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_148bb7de4(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bb7cae FUN_148bb7cae body=59 status=ok
// SIG undefined FUN_148bb7cae(void)

undefined8 FUN_148bb7cae(longlong *param_1)

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



// FUNCTION 148bb7cf4 FUN_148bb7cf4 body=48 status=ok
// SIG undefined FUN_148bb7cf4(void)

void FUN_148bb7cf4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14b645790;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148bb7d72 FUN_148bb7d72 body=57 status=ok
// SIG undefined FUN_148bb7d72(void)

undefined8 * FUN_148bb7d72(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b645790;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb7dac FUN_148bb7dac body=55 status=ok
// SIG undefined FUN_148bb7dac(void)

void FUN_148bb7dac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2d30 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2d30 =
         FUN_140002ddd(FUN_1465b6d5d,uVar1,L"GbxSkillComponentData_DelegateData_CharacterRevived");
  }
  return;
}



// FUNCTION 148bb7de4 FUN_148bb7de4 body=84 status=ok
// SIG undefined FUN_148bb7de4(void)

undefined8 * FUN_148bb7de4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148bb7e38(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 148bb7e38 FUN_148bb7e38 body=90 status=ok
// SIG undefined FUN_148bb7e38(void)

void FUN_148bb7e38(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148bb7efc FUN_148bb7efc body=59 status=ok
// SIG undefined FUN_148bb7efc(void)

undefined8 FUN_148bb7efc(longlong *param_1)

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



// FUNCTION 148bb7f9c FUN_148bb7f9c body=29 status=ok
// SIG undefined FUN_148bb7f9c(void)

undefined8 FUN_148bb7f9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb7fba FUN_148bb7fba body=55 status=ok
// SIG undefined FUN_148bb7fba(void)

void FUN_148bb7fba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2d70 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2d70 =
         FUN_140002ddd(FUN_1465b6e23,uVar1,L"GbxSkillComponentData_DelegateData_EndedWeaponReload");
  }
  return;
}



// FUNCTION 148bb805a FUN_148bb805a body=59 status=ok
// SIG undefined FUN_148bb805a(void)

undefined8 FUN_148bb805a(longlong *param_1)

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



// FUNCTION 148bb80fa FUN_148bb80fa body=31 status=ok
// SIG undefined FUN_148bb80fa(void)

undefined8 FUN_148bb80fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb811a FUN_148bb811a body=57 status=ok
// SIG undefined FUN_148bb811a(void)

void FUN_148bb811a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2d90 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2d90 =
         FUN_140002ddd(FUN_1465b6ee9,uVar1,L"GbxSkillComponentData_DelegateData_KillSkillTrigger");
  }
  return;
}



// FUNCTION 148bb81e2 FUN_148bb81e2 body=59 status=ok
// SIG undefined FUN_148bb81e2(void)

undefined8 FUN_148bb81e2(longlong *param_1)

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



// FUNCTION 148bb8282 FUN_148bb8282 body=31 status=ok
// SIG undefined FUN_148bb8282(void)

undefined8 FUN_148bb8282(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb82a2 FUN_148bb82a2 body=57 status=ok
// SIG undefined FUN_148bb82a2(void)

void FUN_148bb82a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2dc8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2dc8 = FUN_140002ddd(FUN_1465b6fdd,uVar1,L"GbxSkillComponentData_DelegateData_Ping");
  }
  return;
}



// FUNCTION 148bb8344 FUN_148bb8344 body=59 status=ok
// SIG undefined FUN_148bb8344(void)

undefined8 FUN_148bb8344(longlong *param_1)

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



// FUNCTION 148bb83e4 FUN_148bb83e4 body=29 status=ok
// SIG undefined FUN_148bb83e4(void)

undefined8 FUN_148bb83e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb8402 FUN_148bb8402 body=55 status=ok
// SIG undefined FUN_148bb8402(void)

void FUN_148bb8402(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2de8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2de8 =
         FUN_140002ddd(FUN_1465b70a3,uVar1,
                       L"GbxSkillComponentData_DelegateData_RepairKitCooldownEnded");
  }
  return;
}



// FUNCTION 148bb84a2 FUN_148bb84a2 body=59 status=ok
// SIG undefined FUN_148bb84a2(void)

undefined8 FUN_148bb84a2(longlong *param_1)

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



// FUNCTION 148bb8542 FUN_148bb8542 body=29 status=ok
// SIG undefined FUN_148bb8542(void)

undefined8 FUN_148bb8542(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb8560 FUN_148bb8560 body=55 status=ok
// SIG undefined FUN_148bb8560(void)

void FUN_148bb8560(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2e08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2e08 =
         FUN_140002ddd(FUN_1465b7169,uVar1,
                       L"GbxSkillComponentData_DelegateData_RepairKitHealingEnded");
  }
  return;
}



// FUNCTION 148bb8600 FUN_148bb8600 body=59 status=ok
// SIG undefined FUN_148bb8600(void)

undefined8 FUN_148bb8600(longlong *param_1)

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



// FUNCTION 148bb86a0 FUN_148bb86a0 body=29 status=ok
// SIG undefined FUN_148bb86a0(void)

undefined8 FUN_148bb86a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb86be FUN_148bb86be body=55 status=ok
// SIG undefined FUN_148bb86be(void)

void FUN_148bb86be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2e28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2e28 =
         FUN_140002ddd(FUN_1465b722f,uVar1,
                       L"GbxSkillComponentData_DelegateData_RepairKitHealingStarted");
  }
  return;
}



// FUNCTION 148bb875e FUN_148bb875e body=59 status=ok
// SIG undefined FUN_148bb875e(void)

undefined8 FUN_148bb875e(longlong *param_1)

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



// FUNCTION 148bb87fe FUN_148bb87fe body=29 status=ok
// SIG undefined FUN_148bb87fe(void)

undefined8 FUN_148bb87fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb881c FUN_148bb881c body=55 status=ok
// SIG undefined FUN_148bb881c(void)

void FUN_148bb881c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2e48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2e48 =
         FUN_140002ddd(FUN_1465b72f5,uVar1,L"GbxSkillComponentData_DelegateData_StartedWeaponReload"
                      );
  }
  return;
}



// FUNCTION 148bb88bc FUN_148bb88bc body=59 status=ok
// SIG undefined FUN_148bb88bc(void)

undefined8 FUN_148bb88bc(longlong *param_1)

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



// FUNCTION 148bb895c FUN_148bb895c body=31 status=ok
// SIG undefined FUN_148bb895c(void)

undefined8 FUN_148bb895c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb897c FUN_148bb897c body=57 status=ok
// SIG undefined FUN_148bb897c(void)

void FUN_148bb897c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2e68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2e68 =
         FUN_140002ddd(FUN_1465b73bb,uVar1,L"GbxSkillComponentData_DelegateData_SwappedWeapon");
  }
  return;
}



// FUNCTION 148bb8a1e FUN_148bb8a1e body=59 status=ok
// SIG undefined FUN_148bb8a1e(void)

undefined8 FUN_148bb8a1e(longlong *param_1)

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



// FUNCTION 148bb8abe FUN_148bb8abe body=31 status=ok
// SIG undefined FUN_148bb8abe(void)

undefined8 FUN_148bb8abe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb8ade FUN_148bb8ade body=57 status=ok
// SIG undefined FUN_148bb8ade(void)

void FUN_148bb8ade(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2e88 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2e88 = FUN_140002ddd(FUN_1465b7481,uVar1,L"GbxSkillComponentData_DelegateData_Travel");
  }
  return;
}



// FUNCTION 148bb8b80 FUN_148bb8b80 body=59 status=ok
// SIG undefined FUN_148bb8b80(void)

undefined8 FUN_148bb8b80(longlong *param_1)

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



// FUNCTION 148bb8c20 FUN_148bb8c20 body=31 status=ok
// SIG undefined FUN_148bb8c20(void)

undefined8 FUN_148bb8c20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb8c40 FUN_148bb8c40 body=57 status=ok
// SIG undefined FUN_148bb8c40(void)

void FUN_148bb8c40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2ea8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2ea8 =
         FUN_140002ddd(FUN_1465b7547,uVar1,L"GbxSkillComponentData_DelegateData_UsedGadget");
  }
  return;
}



// FUNCTION 148bb8ce2 FUN_148bb8ce2 body=59 status=ok
// SIG undefined FUN_148bb8ce2(void)

undefined8 FUN_148bb8ce2(longlong *param_1)

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



// FUNCTION 148bb8d82 FUN_148bb8d82 body=29 status=ok
// SIG undefined FUN_148bb8d82(void)

undefined8 FUN_148bb8d82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb8da0 FUN_148bb8da0 body=55 status=ok
// SIG undefined FUN_148bb8da0(void)

void FUN_148bb8da0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2ec0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2ec0 =
         FUN_140002ddd(FUN_1465b75dd,uVar1,L"GbxSkillComponentData_DelegateData_ForcedGrenadeUse");
  }
  return;
}



// FUNCTION 148bb8e40 FUN_148bb8e40 body=59 status=ok
// SIG undefined FUN_148bb8e40(void)

undefined8 FUN_148bb8e40(longlong *param_1)

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



// FUNCTION 148bb8ee0 FUN_148bb8ee0 body=31 status=ok
// SIG undefined FUN_148bb8ee0(void)

undefined8 FUN_148bb8ee0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb8f00 FUN_148bb8f00 body=57 status=ok
// SIG undefined FUN_148bb8f00(void)

void FUN_148bb8f00(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2ed8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2ed8 =
         FUN_140002ddd(FUN_1465b7673,uVar1,L"GbxSkillComponentData_DelegateData_UsedWeapon");
  }
  return;
}



// FUNCTION 148bb8fa2 FUN_148bb8fa2 body=59 status=ok
// SIG undefined FUN_148bb8fa2(void)

undefined8 FUN_148bb8fa2(longlong *param_1)

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



// FUNCTION 148bb9042 FUN_148bb9042 body=31 status=ok
// SIG undefined FUN_148bb9042(void)

undefined8 FUN_148bb9042(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb9062 FUN_148bb9062 body=57 status=ok
// SIG undefined FUN_148bb9062(void)

void FUN_148bb9062(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2ef8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2ef8 = FUN_140002ddd(FUN_1465b7739,uVar1,L"GbxSkillComponentData_DelegateData_VHE");
  }
  return;
}



// FUNCTION 148bb9104 FUN_148bb9104 body=59 status=ok
// SIG undefined FUN_148bb9104(void)

undefined8 FUN_148bb9104(longlong *param_1)

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



// FUNCTION 148bb91a4 FUN_148bb91a4 body=31 status=ok
// SIG undefined FUN_148bb91a4(void)

undefined8 FUN_148bb91a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb91c4 FUN_148bb91c4 body=57 status=ok
// SIG undefined FUN_148bb91c4(void)

void FUN_148bb91c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2f18 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2f18 =
         FUN_140002ddd(FUN_1465b77ff,uVar1,L"GbxSkillComponentData_DelegateData_WeaponMode");
  }
  return;
}



// FUNCTION 148bb925a FUN_148bb925a body=63 status=ok
// SIG undefined FUN_148bb925a(void)

undefined1 FUN_148bb925a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bb93b6(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 148bb92c2 FUN_148bb92c2 body=59 status=ok
// SIG undefined FUN_148bb92c2(void)

undefined8 FUN_148bb92c2(longlong *param_1)

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



// FUNCTION 148bb930e FUN_148bb930e body=38 status=ok
// SIG undefined FUN_148bb930e(void)

void FUN_148bb930e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_140febf64(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 148bb937e FUN_148bb937e body=55 status=ok
// SIG undefined FUN_148bb937e(void)

void FUN_148bb937e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2f30 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2f30 = FUN_140002ddd(FUN_1465b7895,uVar1,L"GbxSkillComponentData_HUDIconItem");
  }
  return;
}



// FUNCTION 148bb93b6 FUN_148bb93b6 body=118 status=ok
// SIG undefined FUN_148bb93b6(void)

longlong FUN_148bb93b6(longlong param_1,longlong param_2)

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
  FUN_141332d0e(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  if ((*(longlong *)(param_1 + 0x68) != *(longlong *)(param_2 + 0x68)) ||
     (*(int *)(param_1 + 0x70) != *(int *)(param_2 + 0x70))) {
    *(longlong *)(param_1 + 0x68) = *(longlong *)(param_2 + 0x68);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  FUN_1401f3db8(param_1 + 0x80,param_2 + 0x80);
  return param_1;
}



// FUNCTION 148bb942e FUN_148bb942e body=72 status=ok
// SIG undefined FUN_148bb942e(void)

void FUN_148bb942e(undefined8 param_1,undefined8 *param_2)

{
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
  FUN_1413ea01e(param_2);
  *param_2 = &PTR_FUN_14b647170;
  param_2[10] = 0;
  param_2[0xb] = 0;
  return;
}



// FUNCTION 148bb9476 FUN_148bb9476 body=39 status=ok
// SIG undefined FUN_148bb9476(void)

void FUN_148bb9476(undefined8 param_1,undefined8 *param_2)

{
  FUN_1413ea01e(param_2);
  *param_2 = &PTR_FUN_14b647170;
  param_2[10] = 0;
  param_2[0xb] = 0;
  return;
}



// FUNCTION 148bb94c2 FUN_148bb94c2 body=87 status=ok
// SIG undefined FUN_148bb94c2(void)

undefined1 FUN_148bb94c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148704de0(param_2,param_3);
    FUN_148bb9658(param_2 + 0x50,param_3 + 0x50);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148bb9542 FUN_148bb9542 body=59 status=ok
// SIG undefined FUN_148bb9542(void)

undefined8 FUN_148bb9542(longlong *param_1)

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



// FUNCTION 148bb9588 FUN_148bb9588 body=34 status=ok
// SIG undefined FUN_148bb9588(void)

void FUN_148bb9588(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1459a2d70(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148bb95f8 FUN_148bb95f8 body=38 status=ok
// SIG undefined FUN_148bb95f8(void)

undefined8 FUN_148bb95f8(undefined8 param_1,int param_2)

{
  FUN_1459a2d70();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bb961e FUN_148bb961e body=57 status=ok
// SIG undefined FUN_148bb961e(void)

void FUN_148bb961e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2f48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2f48 = FUN_140002ddd(FUN_1465b792b,uVar1,L"GbxSkillComponent_HUDIcons");
  }
  return;
}



// FUNCTION 148bb9658 FUN_148bb9658 body=95 status=ok
// SIG undefined FUN_148bb9658(void)

undefined8 * FUN_148bb9658(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459a2da9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148bb96b8(param_1,iVar1);
      FUN_148bb971a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bb96b8 FUN_148bb96b8 body=98 status=ok
// SIG undefined FUN_148bb96b8(void)

void FUN_148bb96b8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148bb971a FUN_148bb971a body=45 status=ok
// SIG undefined FUN_148bb971a(void)

void FUN_148bb971a(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 148bb9748 FUN_148bb9748 body=130 status=ok
// SIG undefined FUN_148bb9748(void)

void FUN_148bb9748(undefined8 param_1,undefined8 *param_2)

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
  *param_2 = &PTR_FUN_14b647320;
  param_2[6] = 0;
  param_2[7] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bb97e2 FUN_148bb97e2 body=83 status=ok
// SIG undefined FUN_148bb97e2(void)

undefined1 FUN_148bb97e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      FUN_146130eee(param_2 + -0x28,param_3 + -0x28);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_148bb9980(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bb985e FUN_148bb985e body=59 status=ok
// SIG undefined FUN_148bb985e(void)

undefined8 FUN_148bb985e(longlong *param_1)

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



// FUNCTION 148bb98a4 FUN_148bb98a4 body=32 status=ok
// SIG undefined FUN_148bb98a4(void)

void FUN_148bb98a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148bb9948(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148bb990e FUN_148bb990e body=57 status=ok
// SIG undefined FUN_148bb990e(void)

void FUN_148bb990e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2f60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2f60 = FUN_140002ddd(FUN_1465b79c1,uVar1,L"GbxSkillComponentData_HUDIcons");
  }
  return;
}



// FUNCTION 148bb9948 FUN_148bb9948 body=56 status=ok
// SIG undefined FUN_148bb9948(void)

void FUN_148bb9948(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b647320;
  FUN_140febf3b(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148bb9980 FUN_148bb9980 body=93 status=ok
// SIG undefined FUN_148bb9980(void)

undefined8 * FUN_148bb9980(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140febf3b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148bb99de(param_1,iVar1);
      FUN_148bb9a50(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bb99de FUN_148bb99de body=114 status=ok
// SIG undefined FUN_148bb99de(void)

void FUN_148bb99de(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x98,8);
    iVar2 = (int)(uVar1 / 0x98);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x98,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148bb9a50 FUN_148bb9a50 body=60 status=ok
// SIG undefined FUN_148bb9a50(void)

void FUN_148bb9a50(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148bb9a8c(param_1,param_2);
    param_1 = param_1 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return;
}



// FUNCTION 148bb9a8c FUN_148bb9a8c body=191 status=ok
// SIG undefined FUN_148bb9a8c(void)

undefined8 * FUN_148bb9a8c(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
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
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  *param_1 = &PTR_FUN_14b647000;
  FUN_14604a01e(param_1 + 5,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0x60);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_1401f3db8(param_1 + 0x10,param_2 + 0x80);
  return param_1;
}



// FUNCTION 148bb9b88 FUN_148bb9b88 body=103 status=ok
// SIG undefined FUN_148bb9b88(void)

undefined1 FUN_148bb9b88(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 8;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined1 *)(param_2 + 8 + lVar3) = *(undefined1 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bb9c18 FUN_148bb9c18 body=59 status=ok
// SIG undefined FUN_148bb9c18(void)

undefined8 FUN_148bb9c18(longlong *param_1)

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



// FUNCTION 148bb9d22 FUN_148bb9d22 body=54 status=ok
// SIG undefined FUN_148bb9d22(void)

undefined1 FUN_148bb9d22(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bb9e70(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148bb9d80 FUN_148bb9d80 body=59 status=ok
// SIG undefined FUN_148bb9d80(void)

undefined8 FUN_148bb9d80(longlong *param_1)

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



// FUNCTION 148bb9dc6 FUN_148bb9dc6 body=34 status=ok
// SIG undefined FUN_148bb9dc6(void)

void FUN_148bb9dc6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_145ebb30a(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148bb9e36 FUN_148bb9e36 body=57 status=ok
// SIG undefined FUN_148bb9e36(void)

void FUN_148bb9e36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2f98 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2f98 =
         FUN_140002ddd(FUN_1465b7b1d,uVar1,
                       L"GbxSkillComponentInputHandler_EnhancedInput_NativeTrigger");
  }
  return;
}



// FUNCTION 148bb9e70 FUN_148bb9e70 body=92 status=ok
// SIG undefined FUN_148bb9e70(void)

longlong FUN_148bb9e70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 8);
    }
  }
  *(longlong *)(param_1 + 8) = lVar1;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  FUN_1401f3db8(param_1 + 0x18,param_2 + 0x18);
  FUN_1401f3db8(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 148bb9ece FUN_148bb9ece body=92 status=ok
// SIG undefined FUN_148bb9ece(void)

void FUN_148bb9ece(undefined8 param_1,undefined8 *param_2)

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
  FUN_1413ea01e(param_2);
  *param_2 = &PTR_FUN_14b6477b0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  return;
}



// FUNCTION 148bb9f2a FUN_148bb9f2a body=51 status=ok
// SIG undefined FUN_148bb9f2a(void)

void FUN_148bb9f2a(undefined8 param_1,undefined8 *param_2)

{
  FUN_1413ea01e(param_2);
  *param_2 = &PTR_FUN_14b6477b0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  return;
}



// FUNCTION 148bb9f82 FUN_148bb9f82 body=54 status=ok
// SIG undefined FUN_148bb9f82(void)

undefined1 FUN_148bb9f82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bba19e(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 148bb9fe0 FUN_148bb9fe0 body=59 status=ok
// SIG undefined FUN_148bb9fe0(void)

undefined8 FUN_148bb9fe0(longlong *param_1)

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



// FUNCTION 148bba026 FUN_148bba026 body=34 status=ok
// SIG undefined FUN_148bba026(void)

void FUN_148bba026(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_148bba0f4(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}


