// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1487215a2 FUN_1487215a2 body=55 status=ok
// SIG undefined FUN_1487215a2(void)

void FUN_1487215a2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001487215d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1487215f0 FUN_1487215f0 body=67 status=ok
// SIG undefined FUN_1487215f0(void)

undefined1 FUN_1487215f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1401f3db8(param_2,param_3);
    FUN_1486f89f0(param_2 + 0x18,param_3 + 0x18);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 14872165c FUN_14872165c body=59 status=ok
// SIG undefined FUN_14872165c(void)

undefined8 FUN_14872165c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487216a2 FUN_1487216a2 body=64 status=ok
// SIG undefined FUN_1487216a2(void)

void FUN_1487216a2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 8);
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
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148721780 FUN_148721780 body=80 status=ok
// SIG undefined FUN_148721780(void)

undefined1 FUN_148721780(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14871d932(param_2,param_3);
    FUN_1487218ae(param_2 + 0x18,param_3 + 0x18);
    FUN_14650d0fe(param_2 + 0x28,param_3 + 0x28);
    param_2 = param_2 + 0x38;
    param_3 = param_3 + 0x38;
  }
  return 1;
}



// FUNCTION 1487217f8 FUN_1487217f8 body=59 status=ok
// SIG undefined FUN_1487217f8(void)

undefined8 FUN_1487217f8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14872183e FUN_14872183e body=34 status=ok
// SIG undefined FUN_14872183e(void)

void FUN_14872183e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14583f52e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1487218ae FUN_1487218ae body=79 status=ok
// SIG undefined FUN_1487218ae(void)

undefined8 * FUN_1487218ae(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1487218fe(param_1,iVar1);
      FUN_148721960(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487218fe FUN_1487218fe body=98 status=ok
// SIG undefined FUN_1487218fe(void)

void FUN_1487218fe(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148721960 FUN_148721960 body=66 status=ok
// SIG undefined FUN_148721960(void)

void FUN_148721960(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined1 *)(param_1 + -8) = *(undefined1 *)(param_2 + -8);
      FUN_141858964(param_1,param_2);
      param_1 = param_1 + 0x20;
      param_2 = param_2 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1487219ea FUN_1487219ea body=54 status=ok
// SIG undefined FUN_1487219ea(void)

undefined1 FUN_1487219ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148721afe(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148721a48 FUN_148721a48 body=59 status=ok
// SIG undefined FUN_148721a48(void)

undefined8 FUN_148721a48(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148721a8e FUN_148721a8e body=34 status=ok
// SIG undefined FUN_148721a8e(void)

void FUN_148721a8e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_14583f52e(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148721afe FUN_148721afe body=69 status=ok
// SIG undefined FUN_148721afe(void)

longlong FUN_148721afe(longlong param_1,longlong param_2)

{
  FUN_14871d932();
  FUN_1487218ae(param_1 + 0x18,param_2 + 0x18);
  FUN_14650d0fe(param_1 + 0x28,param_2 + 0x28);
  FUN_14871d932(param_1 + 0x38,param_2 + 0x38);
  return param_1;
}



// FUNCTION 148721ba2 FUN_148721ba2 body=54 status=ok
// SIG undefined FUN_148721ba2(void)

undefined1 FUN_148721ba2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148721cb6(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 148721c00 FUN_148721c00 body=59 status=ok
// SIG undefined FUN_148721c00(void)

undefined8 FUN_148721c00(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148721c46 FUN_148721c46 body=34 status=ok
// SIG undefined FUN_148721c46(void)

void FUN_148721c46(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_14583f4dc(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148721cb6 FUN_148721cb6 body=95 status=ok
// SIG undefined FUN_148721cb6(void)

longlong FUN_148721cb6(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_1411ef922(param_1 + 0x10,param_2 + 0x10);
  FUN_148721d16(param_1 + 0x20,param_2 + 0x20);
  FUN_14871d932(param_1 + 0x30,param_2 + 0x30);
  FUN_1487218ae(param_1 + 0x48,param_2 + 0x48);
  FUN_14650d0fe(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



// FUNCTION 148721d16 FUN_148721d16 body=95 status=ok
// SIG undefined FUN_148721d16(void)

undefined8 * FUN_148721d16(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14583f56b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148721d76(param_1,iVar1);
      FUN_148721de9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148721d76 FUN_148721d76 body=115 status=ok
// SIG undefined FUN_148721d76(void)

void FUN_148721d76(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148721de9 FUN_148721de9 body=65 status=ok
// SIG undefined FUN_148721de9(void)

void FUN_148721de9(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148721e2a(param_1,param_2);
    FUN_148721ecc(param_1 + 0x38,param_2 + 0x38);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 148721e2a FUN_148721e2a body=161 status=ok
// SIG undefined FUN_148721e2a(void)

longlong FUN_148721e2a(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_148721ecc();
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    FUN_1487218fe((undefined8 *)(param_1 + 0x18),iVar1,0);
    FUN_148721960(*(undefined8 *)(param_1 + 0x18),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(int *)(param_1 + 0x30) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    FUN_1456e31aa((undefined8 *)(param_1 + 0x28),iVar1,0);
    FUN_1456e3175(*(undefined8 *)(param_1 + 0x28),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148721ecc FUN_148721ecc body=71 status=ok
// SIG undefined FUN_148721ecc(void)

undefined8 * FUN_148721ecc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148721f4a FUN_148721f4a body=96 status=ok
// SIG undefined FUN_148721f4a(void)

undefined8 FUN_148721f4a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_1401f3db8();
      FUN_14650d0fe(param_2 + lVar1 + 0x20,param_3 + lVar1 + 0x20);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148721fd2 FUN_148721fd2 body=59 status=ok
// SIG undefined FUN_148721fd2(void)

undefined8 FUN_148721fd2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148722018 FUN_148722018 body=34 status=ok
// SIG undefined FUN_148722018(void)

void FUN_148722018(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_145809462(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1487220f6 FUN_1487220f6 body=63 status=ok
// SIG undefined FUN_1487220f6(void)

undefined1 FUN_1487220f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148722252(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 14872215e FUN_14872215e body=59 status=ok
// SIG undefined FUN_14872215e(void)

undefined8 FUN_14872215e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487221aa FUN_1487221aa body=40 status=ok
// SIG undefined FUN_1487221aa(void)

void FUN_1487221aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_145809308(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 148722218 FUN_148722218 body=57 status=ok
// SIG undefined FUN_148722218(void)

void FUN_148722218(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65a80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65a80 = FUN_140002ddd(FUN_14650bfd9,uVar1,L"GbxSkillStateMachineDef");
  }
  return;
}



// FUNCTION 148722252 FUN_148722252 body=160 status=ok
// SIG undefined FUN_148722252(void)

longlong FUN_148722252(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  FUN_14871d932(param_1 + 0x20,param_2 + 0x20);
  FUN_1401f3db8(param_1 + 0x38,param_2 + 0x38);
  FUN_145c43818(param_1 + 0x50,param_2 + 0x50);
  FUN_1487222f2(param_1 + 0x68,param_2 + 0x68);
  FUN_148722342(param_1 + 0x78,param_2 + 0x78);
  FUN_148722392(param_1 + 0x88,param_2 + 0x88);
  FUN_1487223f0(param_1 + 0x98,param_2 + 0x98);
  FUN_14872244e(param_1 + 0xa8,param_2 + 0xa8);
  return param_1;
}



// FUNCTION 1487222f2 FUN_1487222f2 body=79 status=ok
// SIG undefined FUN_1487222f2(void)

undefined8 * FUN_1487222f2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1487224ac(param_1,iVar1);
      FUN_14872251f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148722342 FUN_148722342 body=79 status=ok
// SIG undefined FUN_148722342(void)

undefined8 * FUN_148722342(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148722554(param_1,iVar1);
      FUN_1487225c7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148722392 FUN_148722392 body=93 status=ok
// SIG undefined FUN_148722392(void)

undefined8 * FUN_148722392(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145809416(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1487225fc(param_1,iVar1);
      FUN_14872266f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487223f0 FUN_1487223f0 body=93 status=ok
// SIG undefined FUN_1487223f0(void)

undefined8 * FUN_1487223f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458093ee(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1487226b0(param_1,iVar1);
      FUN_14872271f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14872244e FUN_14872244e body=93 status=ok
// SIG undefined FUN_14872244e(void)

undefined8 * FUN_14872244e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141116a9c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14650d1f4(param_1,iVar1);
      FUN_1456e30d3(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487224ac FUN_1487224ac body=115 status=ok
// SIG undefined FUN_1487224ac(void)

void FUN_1487224ac(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14872251f FUN_14872251f body=52 status=ok
// SIG undefined FUN_14872251f(void)

void FUN_14872251f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148721ecc(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148722554 FUN_148722554 body=115 status=ok
// SIG undefined FUN_148722554(void)

void FUN_148722554(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1487225c7 FUN_1487225c7 body=52 status=ok
// SIG undefined FUN_1487225c7(void)

void FUN_1487225c7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_141857172(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1487225fc FUN_1487225fc body=115 status=ok
// SIG undefined FUN_1487225fc(void)

void FUN_1487225fc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14872266f FUN_14872266f body=65 status=ok
// SIG undefined FUN_14872266f(void)

void FUN_14872266f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    FUN_141858964(param_1 + 0x18,param_2 + 0x18);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 1487226b0 FUN_1487226b0 body=111 status=ok
// SIG undefined FUN_1487226b0(void)

void FUN_1487226b0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14872271f FUN_14872271f body=52 status=ok
// SIG undefined FUN_14872271f(void)

void FUN_14872271f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148722754(param_1,param_2);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return;
}



// FUNCTION 148722754 FUN_148722754 body=233 status=ok
// SIG undefined FUN_148722754(void)

undefined8 * FUN_148722754(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1411ef9e2(param_1 + 2,iVar1,0);
    FUN_1411ef971(param_1[2],uVar2,iVar1);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  uVar2 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_148721d76(param_1 + 4,iVar1,0);
    FUN_148721de9(param_1[4],uVar2,iVar1);
  }
  FUN_148721e2a(param_1 + 6,param_2 + 6);
  return param_1;
}



// FUNCTION 148722890 FUN_148722890 body=62 status=ok
// SIG undefined FUN_148722890(void)

undefined1 FUN_148722890(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1487228f6 FUN_1487228f6 body=59 status=ok
// SIG undefined FUN_1487228f6(void)

undefined8 FUN_1487228f6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14872293c FUN_14872293c body=43 status=ok
// SIG undefined FUN_14872293c(void)

void FUN_14872293c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1487229ae FUN_1487229ae body=57 status=ok
// SIG undefined FUN_1487229ae(void)

void FUN_1487229ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65a98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65a98 = FUN_140002ddd(FUN_141858932,uVar1,L"GbxSkillStateMachineRegisterDef");
  }
  return;
}



// FUNCTION 1487229e8 FUN_1487229e8 body=28 status=ok
// SIG undefined FUN_1487229e8(void)

undefined8 FUN_1487229e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148722a2e FUN_148722a2e body=56 status=ok
// SIG undefined FUN_148722a2e(void)

void FUN_148722a2e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000148722a5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148722a7c FUN_148722a7c body=60 status=ok
// SIG undefined FUN_148722a7c(void)

undefined1 FUN_148722a7c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1401f3db8(param_2,param_3);
    *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148722ae0 FUN_148722ae0 body=59 status=ok
// SIG undefined FUN_148722ae0(void)

undefined8 FUN_148722ae0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148722b26 FUN_148722b26 body=64 status=ok
// SIG undefined FUN_148722b26(void)

void FUN_148722b26(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x20) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 8);
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
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148722c64 FUN_148722c64 body=95 status=ok
// SIG undefined FUN_148722c64(void)

undefined1 FUN_148722c64(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (param_4 != 0) {
    puVar2 = (undefined1 *)(param_3 + 0x78);
    puVar1 = (undefined1 *)(param_2 + 0x78);
    do {
      FUN_140d02432(puVar1 + -0x70,puVar2 + -0x70);
      puVar1[-0x20] = puVar2[-0x20];
      FUN_1401f3db8(puVar1 + -0x18,puVar2 + -0x18);
      *puVar1 = *puVar2;
      puVar2 = puVar2 + 0x80;
      puVar1 = puVar1 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148722cec FUN_148722cec body=59 status=ok
// SIG undefined FUN_148722cec(void)

undefined8 FUN_148722cec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148722d38 FUN_148722d38 body=40 status=ok
// SIG undefined FUN_148722d38(void)

void FUN_148722d38(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_14588e0fe(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 148722dae FUN_148722dae body=55 status=ok
// SIG undefined FUN_148722dae(void)

void FUN_148722dae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65ae0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65ae0 = FUN_140002ddd(FUN_14650c165,uVar1,L"GbxSkillStateMachineStateAssurance_TimeOut")
    ;
  }
  return;
}



// FUNCTION 148722de6 FUN_148722de6 body=149 status=ok
// SIG undefined FUN_148722de6(void)

undefined8 FUN_148722de6(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  wchar_t *pwVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pwVar2 = L"Conditional";
  if (*(char *)(param_1 + 0x58) == '\0') {
    pwVar2 = L"";
  }
  FUN_14624635c(param_1 + 8,&local_38);
  puVar1 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar1 = local_38;
  }
  FUN_140002266(param_2,L"[Timeout] (%s) %s",puVar1,pwVar2);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148722e7c FUN_148722e7c body=34 status=ok
// SIG undefined FUN_148722e7c(void)

undefined8 FUN_148722e7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 148722e9e FUN_148722e9e body=55 status=ok
// SIG undefined FUN_148722e9e(void)

void FUN_148722e9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65b10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65b10 = FUN_140002ddd(FUN_14650c194,uVar1,L"GbxSkillStateMachineStateAssurance");
  }
  return;
}



// FUNCTION 148722ed6 FUN_148722ed6 body=54 status=ok
// SIG undefined FUN_148722ed6(void)

undefined8 * FUN_148722ed6(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\Skills/StateMachine/GbxSkillStateMachineStateDef.h"
                ,0x2f,L"Pure virtual not implemented (%s)",
                L"FGbxSkillStateMachineStateAssurance::CreateNew");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148722f0c FUN_148722f0c body=63 status=ok
// SIG undefined FUN_148722f0c(void)

undefined8 FUN_148722f0c(undefined8 param_1,undefined8 param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\Skills/StateMachine/GbxSkillStateMachineStateDef.h"
                ,0x30,L"Pure virtual not implemented (%s)",
                L"FGbxSkillStateMachineStateAssurance::ToString");
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 148722fb4 FUN_148722fb4 body=59 status=ok
// SIG undefined FUN_148722fb4(void)

undefined8 FUN_148722fb4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487230be FUN_1487230be body=59 status=ok
// SIG undefined FUN_1487230be(void)

undefined8 FUN_1487230be(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14872319e FUN_14872319e body=67 status=ok
// SIG undefined FUN_14872319e(void)

undefined1 FUN_14872319e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1401f3db8(param_2,param_3);
    FUN_14650d0fe(param_2 + 0x18,param_3 + 0x18);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 14872320a FUN_14872320a body=59 status=ok
// SIG undefined FUN_14872320a(void)

undefined8 FUN_14872320a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148723250 FUN_148723250 body=34 status=ok
// SIG undefined FUN_148723250(void)

void FUN_148723250(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1458afd38(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1487232f8 FUN_1487232f8 body=54 status=ok
// SIG undefined FUN_1487232f8(void)

undefined1 FUN_1487232f8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148723484(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148723356 FUN_148723356 body=59 status=ok
// SIG undefined FUN_148723356(void)

undefined8 FUN_148723356(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14872339c FUN_14872339c body=32 status=ok
// SIG undefined FUN_14872339c(void)

void FUN_14872339c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1487233fe(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1487233fe FUN_1487233fe body=133 status=ok
// SIG undefined FUN_1487233fe(void)

void FUN_1487233fe(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140e81e1c(param_1[0xc],(int)param_1[0xd]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
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
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148723484 FUN_148723484 body=95 status=ok
// SIG undefined FUN_148723484(void)

longlong FUN_148723484(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_14871d932(param_1 + 0x10,param_2 + 0x10);
  FUN_1411ef922(param_1 + 0x28,param_2 + 0x28);
  FUN_1401f3db8(param_1 + 0x38,param_2 + 0x38);
  FUN_1487218ae(param_1 + 0x50,param_2 + 0x50);
  FUN_14650d0fe(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 148723510 FUN_148723510 body=73 status=ok
// SIG undefined FUN_148723510(void)

undefined1 FUN_148723510(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_145c43818();
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148723582 FUN_148723582 body=59 status=ok
// SIG undefined FUN_148723582(void)

undefined8 FUN_148723582(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148723664 FUN_148723664 body=68 status=ok
// SIG undefined FUN_148723664(void)

undefined1 FUN_148723664(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_148723786(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487236d0 FUN_1487236d0 body=59 status=ok
// SIG undefined FUN_1487236d0(void)

undefined8 FUN_1487236d0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148723716 FUN_148723716 body=38 status=ok
// SIG undefined FUN_148723716(void)

void FUN_148723716(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148723786 FUN_148723786 body=79 status=ok
// SIG undefined FUN_148723786(void)

undefined8 * FUN_148723786(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1487237d6(param_1,iVar1);
      FUN_148723838(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487237d6 FUN_1487237d6 body=98 status=ok
// SIG undefined FUN_1487237d6(void)

void FUN_1487237d6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148723838 FUN_148723838 body=66 status=ok
// SIG undefined FUN_148723838(void)

void FUN_148723838(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined1 *)(param_1 + -8) = *(undefined1 *)(param_2 + -8);
      FUN_141857172(param_1,param_2);
      param_1 = param_1 + 0x20;
      param_2 = param_2 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1487238e2 FUN_1487238e2 body=63 status=ok
// SIG undefined FUN_1487238e2(void)

undefined1 FUN_1487238e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487239f6(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 14872394a FUN_14872394a body=59 status=ok
// SIG undefined FUN_14872394a(void)

undefined8 FUN_14872394a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148723996 FUN_148723996 body=38 status=ok
// SIG undefined FUN_148723996(void)

void FUN_148723996(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_140e81cd8(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 1487239f6 FUN_1487239f6 body=170 status=ok
// SIG undefined FUN_1487239f6(void)

longlong FUN_1487239f6(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_145c43818(param_1 + 0x18,param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  FUN_148723786(param_1 + 0x38,param_2 + 0x38);
  FUN_148723aa0(param_1 + 0x48,param_2 + 0x48);
  FUN_148723afe(param_1 + 0x58,param_2 + 0x58);
  FUN_14650d0fe(param_1 + 0x68,param_2 + 0x68);
  FUN_14650d0fe(param_1 + 0x78,param_2 + 0x78);
  *(undefined2 *)(param_1 + 0x88) = *(undefined2 *)(param_2 + 0x88);
  FUN_1487218ae(param_1 + 0x90,param_2 + 0x90);
  FUN_1487218ae(param_1 + 0xa0,param_2 + 0xa0);
  return param_1;
}



// FUNCTION 148723aa0 FUN_148723aa0 body=93 status=ok
// SIG undefined FUN_148723aa0(void)

undefined8 * FUN_148723aa0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e81e8f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148723b5c(param_1,iVar1);
      FUN_148723bcb(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148723afe FUN_148723afe body=93 status=ok
// SIG undefined FUN_148723afe(void)

undefined8 * FUN_148723afe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e81e67(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148723d32(param_1,iVar1);
      FUN_148723da5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148723b5c FUN_148723b5c body=111 status=ok
// SIG undefined FUN_148723b5c(void)

void FUN_148723b5c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148723bcb FUN_148723bcb body=52 status=ok
// SIG undefined FUN_148723bcb(void)

void FUN_148723bcb(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148723c00(param_1,param_2);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return;
}



// FUNCTION 148723c00 FUN_148723c00 body=305 status=ok
// SIG undefined FUN_148723c00(void)

undefined8 * FUN_148723c00(undefined8 *param_1,undefined8 *param_2)

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
  FUN_148721ecc(param_1 + 2,param_2 + 2);
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  uVar2 = param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1411ef9e2(param_1 + 5,iVar1,0);
    FUN_1411ef971(param_1[5],uVar2,iVar1);
  }
  FUN_1401f3da4(param_1 + 7,param_2 + 7);
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  uVar2 = param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1487218fe(param_1 + 10,iVar1,0);
    FUN_148721960(param_1[10],uVar2,iVar1);
  }
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  uVar2 = param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1456e31aa(param_1 + 0xc,iVar1,0);
    FUN_1456e3175(param_1[0xc],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148723d32 FUN_148723d32 body=115 status=ok
// SIG undefined FUN_148723d32(void)

void FUN_148723d32(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148723da5 FUN_148723da5 body=52 status=ok
// SIG undefined FUN_148723da5(void)

void FUN_148723da5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148723dda(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 148723dda FUN_148723dda body=95 status=ok
// SIG undefined FUN_148723dda(void)

longlong FUN_148723dda(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_1401f3da4();
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    FUN_1456e31aa((undefined8 *)(param_1 + 0x18),iVar1,0);
    FUN_1456e3175(*(undefined8 *)(param_1 + 0x18),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148723e3a FUN_148723e3a body=28 status=ok
// SIG undefined FUN_148723e3a(void)

undefined8 FUN_148723e3a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148723e94 FUN_148723e94 body=73 status=ok
// SIG undefined FUN_148723e94(void)

undefined1 FUN_148723e94(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_1486f89f0();
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148723f06 FUN_148723f06 body=59 status=ok
// SIG undefined FUN_148723f06(void)

undefined8 FUN_148723f06(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148724010 FUN_148724010 body=59 status=ok
// SIG undefined FUN_148724010(void)

undefined8 FUN_148724010(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487240b0 FUN_1487240b0 body=34 status=ok
// SIG undefined FUN_1487240b0(void)

undefined8 FUN_1487240b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1487240d2 FUN_1487240d2 body=55 status=ok
// SIG undefined FUN_1487240d2(void)

void FUN_1487240d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65c70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65c70 = FUN_140002ddd(FUN_14650c92f,uVar1,L"GbxSkillStreamingAsset");
  }
  return;
}



// FUNCTION 14872410a FUN_14872410a body=41 status=ok
// SIG undefined FUN_14872410a(void)

void FUN_14872410a(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Skills/GbxSkillStreamingAsset.h"
                ,0x19,L"Pure virtual not implemented (%s)",L"FGbxSkillStreamingAsset::Register");
  return;
}



// FUNCTION 14872417c FUN_14872417c body=62 status=ok
// SIG undefined FUN_14872417c(void)

undefined1 FUN_14872417c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1487242a6(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487241e2 FUN_1487241e2 body=59 status=ok
// SIG undefined FUN_1487241e2(void)

undefined8 FUN_1487241e2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148724228 FUN_148724228 body=48 status=ok
// SIG undefined FUN_148724228(void)

void FUN_148724228(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14b26ab20;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1487242a6 FUN_1487242a6 body=79 status=ok
// SIG undefined FUN_1487242a6(void)

undefined8 * FUN_1487242a6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1487242f6(param_1,iVar1);
      FUN_148724369(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487242f6 FUN_1487242f6 body=115 status=ok
// SIG undefined FUN_1487242f6(void)

void FUN_1487242f6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148724369 FUN_148724369 body=44 status=ok
// SIG undefined FUN_148724369(void)

void FUN_148724369(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1487243cc FUN_1487243cc body=62 status=ok
// SIG undefined FUN_1487243cc(void)

undefined1 FUN_1487243cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_14591fc3c(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148724432 FUN_148724432 body=59 status=ok
// SIG undefined FUN_148724432(void)

undefined8 FUN_148724432(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148724478 FUN_148724478 body=32 status=ok
// SIG undefined FUN_148724478(void)

void FUN_148724478(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_1487244e6(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1487244e6 FUN_1487244e6 body=56 status=ok
// SIG undefined FUN_1487244e6(void)

void FUN_1487244e6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b26aca0;
  FUN_140861e20(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148724550 FUN_148724550 body=62 status=ok
// SIG undefined FUN_148724550(void)

undefined1 FUN_148724550(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_14870773e(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487245b6 FUN_1487245b6 body=59 status=ok
// SIG undefined FUN_1487245b6(void)

undefined8 FUN_1487245b6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148724652 FUN_148724652 body=55 status=ok
// SIG undefined FUN_148724652(void)

void FUN_148724652(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65cb8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65cb8 = FUN_140002ddd(FUN_14650caf3,uVar1,L"GbxSkillTargetListCountResolver");
  }
  return;
}



// FUNCTION 1487246d8 FUN_1487246d8 body=62 status=ok
// SIG undefined FUN_1487246d8(void)

undefined1 FUN_1487246d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14872473e FUN_14872473e body=59 status=ok
// SIG undefined FUN_14872473e(void)

undefined8 FUN_14872473e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148724784 FUN_148724784 body=43 status=ok
// SIG undefined FUN_148724784(void)

void FUN_148724784(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1487247ec FUN_1487247ec body=28 status=ok
// SIG undefined FUN_1487247ec(void)

undefined8 FUN_1487247ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148724872 FUN_148724872 body=54 status=ok
// SIG undefined FUN_148724872(void)

undefined1 FUN_148724872(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487249b2(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 1487248d0 FUN_1487248d0 body=59 status=ok
// SIG undefined FUN_1487248d0(void)

undefined8 FUN_1487248d0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148724916 FUN_148724916 body=34 status=ok
// SIG undefined FUN_148724916(void)

void FUN_148724916(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_145926e10(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148724986 FUN_148724986 body=43 status=ok
// SIG undefined FUN_148724986(void)

undefined8 FUN_148724986(undefined8 param_1,int param_2)

{
  FUN_145926e10();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1487249b2 FUN_1487249b2 body=92 status=ok
// SIG undefined FUN_1487249b2(void)

longlong FUN_1487249b2(longlong param_1,longlong param_2)

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
  FUN_148724a0e(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}



// FUNCTION 148724a0e FUN_148724a0e body=95 status=ok
// SIG undefined FUN_148724a0e(void)

undefined8 * FUN_148724a0e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145926e67(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148724a6e(param_1,iVar1);
      FUN_148724ae1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148724a6e FUN_148724a6e body=115 status=ok
// SIG undefined FUN_148724a6e(void)

void FUN_148724a6e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148724ae1 FUN_148724ae1 body=52 status=ok
// SIG undefined FUN_148724ae1(void)

void FUN_148724ae1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148724b16(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148724b16 FUN_148724b16 body=141 status=ok
// SIG undefined FUN_148724b16(void)

undefined8 * FUN_148724b16(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_148724ba4(param_1 + 1,iVar1);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 << 4);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 2;
  if (param_2 != param_1) {
    FUN_148724bfc(param_1 + 3,param_2 + 3);
  }
  return param_1;
}



// FUNCTION 148724ba4 FUN_148724ba4 body=88 status=ok
// SIG undefined FUN_148724ba4(void)

void FUN_148724ba4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 148724bfc FUN_148724bfc body=304 status=ok
// SIG undefined FUN_148724bfc(void)

void FUN_148724bfc(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148724dc6 FUN_148724dc6 body=54 status=ok
// SIG undefined FUN_148724dc6(void)

undefined1 FUN_148724dc6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148724f40(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 148724e24 FUN_148724e24 body=59 status=ok
// SIG undefined FUN_148724e24(void)

undefined8 FUN_148724e24(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148724e6a FUN_148724e6a body=34 status=ok
// SIG undefined FUN_148724e6a(void)

void FUN_148724e6a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_145b013ca(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148724eda FUN_148724eda body=43 status=ok
// SIG undefined FUN_148724eda(void)

undefined8 FUN_148724eda(undefined8 param_1,int param_2)

{
  FUN_145b013ca();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 148724f06 FUN_148724f06 body=57 status=ok
// SIG undefined FUN_148724f06(void)

void FUN_148724f06(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65d60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65d60 = FUN_140002ddd(FUN_14650cd7e,uVar1,L"TargetResolutionStrategyProvider");
  }
  return;
}



// FUNCTION 148724f40 FUN_148724f40 body=92 status=ok
// SIG undefined FUN_148724f40(void)

longlong FUN_148724f40(longlong param_1,longlong param_2)

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
  FUN_148724f9c(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}



// FUNCTION 148724f9c FUN_148724f9c body=122 status=ok
// SIG undefined FUN_148724f9c(void)

longlong FUN_148724f9c(longlong param_1,longlong param_2)

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
    FUN_148725016(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148725016 FUN_148725016 body=201 status=ok
// SIG undefined FUN_148725016(void)

undefined8 * FUN_148725016(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145b01464(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406fba42(param_1);
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
          FUN_1487250e0(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x14;
        puVar6 = puVar6 + 0x14;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1487250e0 FUN_1487250e0 body=85 status=ok
// SIG undefined FUN_1487250e0(void)

longlong FUN_1487250e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_1447a97f4();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  lVar1 = *(longlong *)(param_2 + 0x30);
  *(longlong *)(param_1 + 0x30) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  lVar1 = *(longlong *)(param_2 + 0x40);
  *(longlong *)(param_1 + 0x40) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  return param_1;
}



// FUNCTION 14872519e FUN_14872519e body=59 status=ok
// SIG undefined FUN_14872519e(void)

undefined8 FUN_14872519e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14872523e FUN_14872523e body=34 status=ok
// SIG undefined FUN_14872523e(void)

undefined8 FUN_14872523e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 148725260 FUN_148725260 body=55 status=ok
// SIG undefined FUN_148725260(void)

void FUN_148725260(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65d78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65d78 = FUN_140002ddd(FUN_1418589dc,uVar1,L"GbxSkillTargetResolutionStrategy");
  }
  return;
}



// FUNCTION 148725298 FUN_148725298 body=32 status=ok
// SIG undefined FUN_148725298(void)

undefined8 FUN_148725298(undefined8 param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,&DAT_14c9485f0);
  return param_2;
}



// FUNCTION 148725322 FUN_148725322 body=59 status=ok
// SIG undefined FUN_148725322(void)

undefined8 FUN_148725322(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487253c2 FUN_1487253c2 body=34 status=ok
// SIG undefined FUN_1487253c2(void)

undefined8 FUN_1487253c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1487253e4 FUN_1487253e4 body=55 status=ok
// SIG undefined FUN_1487253e4(void)

void FUN_1487253e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65d90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65d90 = FUN_140002ddd(FUN_14650ce7d,uVar1,L"GbxSkillTargetResolutionStrategyAdapter");
  }
  return;
}



// FUNCTION 14872541c FUN_14872541c body=55 status=ok
// SIG undefined FUN_14872541c(void)

void FUN_14872541c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65fa8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65fa8 = FUN_14171c317(FUN_14650dbf8,uVar1,L"EGbxSkillComparisonOp");
  }
  return;
}



// FUNCTION 148725453 FUN_148725453 body=55 status=ok
// SIG undefined FUN_148725453(void)

void FUN_148725453(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66008 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66008 = FUN_14171c317(FUN_14650dd20,uVar1,L"EGbxSkillParamSpace");
  }
  return;
}



// FUNCTION 14872549c FUN_14872549c body=187 status=ok
// SIG undefined FUN_14872549c(void)

void FUN_14872549c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148994c9a(param_1,&local_50,puVar1);
  *(undefined8 *)(param_3 + 4) = local_40;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148725558 FUN_148725558 body=187 status=ok
// SIG undefined FUN_148725558(void)

void FUN_148725558(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148994cbe(param_1,&local_50,puVar1);
  *(undefined8 *)(param_3 + 4) = local_40;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148725614 FUN_148725614 body=39 status=ok
// SIG undefined FUN_148725614(void)

void FUN_148725614(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148994d0c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148725648 FUN_148725648 body=412 status=ok
// SIG undefined FUN_148725648(void)

void FUN_148725648(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98 [12];
  int local_34;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar1 = local_30;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = local_34 != 0;
  FUN_148994ce2(param_1,local_98,local_2c,iVar1 != 0);
  puVar3 = local_98;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14872580e FUN_14872580e body=322 status=ok
// SIG undefined FUN_14872580e(void)

void FUN_14872580e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143e40f66(param_1,&local_38,local_24,local_28 != 0);
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



// FUNCTION 148725958 FUN_148725958 body=167 status=ok
// SIG undefined FUN_148725958(void)

void FUN_148725958(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148994e96(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148725a06 FUN_148725a06 body=167 status=ok
// SIG undefined FUN_148725a06(void)

void FUN_148725a06(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14899513c(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148725aca FUN_148725aca body=45 status=ok
// SIG undefined FUN_148725aca(void)

longlong FUN_148725aca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148725b0c FUN_148725b0c body=47 status=ok
// SIG undefined FUN_148725b0c(void)

void FUN_148725b0c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = &DAT_14c846480;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
  }
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



// FUNCTION 148725b3c FUN_148725b3c body=26 status=ok
// SIG undefined FUN_148725b3c(void)

void FUN_148725b3c(undefined8 param_1,undefined8 param_2)

{
  FUN_1413d4c10(param_1,param_2,0,0,0);
  return;
}



// FUNCTION 148725b56 FUN_148725b56 body=26 status=ok
// SIG undefined FUN_148725b56(void)

void FUN_148725b56(undefined8 param_1,undefined8 param_2)

{
  FUN_1478c1024(param_1,param_2,0,0,0);
  return;
}



// FUNCTION 148725b82 FUN_148725b82 body=48 status=ok
// SIG undefined FUN_148725b82(void)

longlong FUN_148725b82(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148725bc2 FUN_148725bc2 body=48 status=ok
// SIG undefined FUN_148725bc2(void)

longlong FUN_148725bc2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148725c02 FUN_148725c02 body=48 status=ok
// SIG undefined FUN_148725c02(void)

longlong FUN_148725c02(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148725c3a FUN_148725c3a body=26 status=ok
// SIG undefined FUN_148725c3a(void)

undefined8 FUN_148725c3a(longlong param_1,undefined8 param_2)

{
  FUN_1488ae290(param_1 + -8);
  return param_2;
}



// FUNCTION 148725c54 FUN_148725c54 body=48 status=ok
// SIG undefined FUN_148725c54(void)

longlong FUN_148725c54(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148725c94 FUN_148725c94 body=48 status=ok
// SIG undefined FUN_148725c94(void)

longlong FUN_148725c94(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148725ccc FUN_148725ccc body=48 status=ok
// SIG undefined FUN_148725ccc(void)

longlong FUN_148725ccc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148725d04 FUN_148725d04 body=48 status=ok
// SIG undefined FUN_148725d04(void)

longlong FUN_148725d04(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148725d3c FUN_148725d3c body=48 status=ok
// SIG undefined FUN_148725d3c(void)

longlong FUN_148725d3c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d8;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148725d74 FUN_148725d74 body=48 status=ok
// SIG undefined FUN_148725d74(void)

longlong FUN_148725d74(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3e0;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148725e08 FUN_148725e08 body=80 status=ok
// SIG undefined FUN_148725e08(void)

undefined8 FUN_148725e08(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      if (*(char *)(param_3 + -8) == '\0') {
        *(undefined1 *)(param_2 + -8) = 0;
        *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      }
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148725e80 FUN_148725e80 body=59 status=ok
// SIG undefined FUN_148725e80(void)

undefined8 FUN_148725e80(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148725ec6 FUN_148725ec6 body=34 status=ok
// SIG undefined FUN_148725ec6(void)

void FUN_148725ec6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14583e5a4(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148725f2e FUN_148725f2e body=57 status=ok
// SIG undefined FUN_148725f2e(void)

void FUN_148725f2e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65dd8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65dd8 = FUN_140002ddd(FUN_14650d624,uVar1,L"GbxSkillTargetResolutionStrategyDef");
  }
  return;
}



// FUNCTION 148725f68 FUN_148725f68 body=104 status=ok
// SIG undefined FUN_148725f68(void)

undefined8 FUN_148725f68(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_14899382e(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148725fd2 FUN_148725fd2 body=28 status=ok
// SIG undefined FUN_148725fd2(void)

undefined8 FUN_148725fd2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14872605a FUN_14872605a body=59 status=ok
// SIG undefined FUN_14872605a(void)

undefined8 FUN_14872605a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487260fa FUN_1487260fa body=55 status=ok
// SIG undefined FUN_1487260fa(void)

void FUN_1487260fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65df0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65df0 = FUN_140002ddd(FUN_14650d6bb,uVar1,L"GbxSkillTargetResolutionStrategy_Owner");
  }
  return;
}



// FUNCTION 14872617c FUN_14872617c body=59 status=ok
// SIG undefined FUN_14872617c(void)

undefined8 FUN_14872617c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14872626c FUN_14872626c body=59 status=ok
// SIG undefined FUN_14872626c(void)

undefined8 FUN_14872626c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487263a4 FUN_1487263a4 body=63 status=ok
// SIG undefined FUN_1487263a4(void)

undefined1 FUN_1487263a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487264f2(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 14872640c FUN_14872640c body=59 status=ok
// SIG undefined FUN_14872640c(void)

undefined8 FUN_14872640c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148726458 FUN_148726458 body=38 status=ok
// SIG undefined FUN_148726458(void)

void FUN_148726458(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_140fbfa34(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 1487264cc FUN_1487264cc body=38 status=ok
// SIG undefined FUN_1487264cc(void)

undefined8 FUN_1487264cc(undefined8 param_1,int param_2)

{
  FUN_140fbfa34();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487264f2 FUN_1487264f2 body=151 status=ok
// SIG undefined FUN_1487264f2(void)

longlong FUN_1487264f2(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar5 = *(undefined4 *)(param_2 + 0x34);
  uVar6 = *(undefined4 *)(param_2 + 0x38);
  uVar7 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  *(undefined4 *)(param_1 + 0x3c) = uVar7;
  FUN_14872658a(param_1 + 0x40,param_2 + 0x40);
  FUN_1487265e8(param_1 + 0x50,param_2 + 0x50);
  FUN_148726642(param_1 + 0x60,param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  return param_1;
}



// FUNCTION 14872658a FUN_14872658a body=93 status=ok
// SIG undefined FUN_14872658a(void)

undefined8 * FUN_14872658a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140fbfaa9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14872669c(param_1,iVar1);
      FUN_1487266fe(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487265e8 FUN_1487265e8 body=89 status=ok
// SIG undefined FUN_1487265e8(void)

undefined8 * FUN_1487265e8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148726740(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 148726642 FUN_148726642 body=89 status=ok
// SIG undefined FUN_148726642(void)

undefined8 * FUN_148726642(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1487267b4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 14872669c FUN_14872669c body=98 status=ok
// SIG undefined FUN_14872669c(void)

void FUN_14872669c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1487266fe FUN_1487266fe body=65 status=ok
// SIG undefined FUN_1487266fe(void)

void FUN_1487266fe(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 8 + lVar2) = *(undefined8 *)(param_2 + 8 + lVar2);
      lVar1 = *(longlong *)(param_2 + 0x10 + lVar2);
      *(longlong *)(param_1 + 0x10 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      *(undefined8 *)(param_1 + 0x18 + lVar2) = *(undefined8 *)(param_2 + 0x18 + lVar2);
      lVar2 = lVar2 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148726740 FUN_148726740 body=115 status=ok
// SIG undefined FUN_148726740(void)

void FUN_148726740(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1487267b4 FUN_1487267b4 body=115 status=ok
// SIG undefined FUN_1487267b4(void)

void FUN_1487267b4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148726890 FUN_148726890 body=54 status=ok
// SIG undefined FUN_148726890(void)

undefined1 FUN_148726890(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487269ca(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 1487268ee FUN_1487268ee body=59 status=ok
// SIG undefined FUN_1487268ee(void)

undefined8 FUN_1487268ee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148726934 FUN_148726934 body=34 status=ok
// SIG undefined FUN_148726934(void)

void FUN_148726934(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_145970912(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1487269a4 FUN_1487269a4 body=38 status=ok
// SIG undefined FUN_1487269a4(void)

undefined8 FUN_1487269a4(undefined8 param_1,int param_2)

{
  FUN_145970912();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487269ca FUN_1487269ca body=99 status=ok
// SIG undefined FUN_1487269ca(void)

longlong FUN_1487269ca(longlong param_1,longlong param_2)

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
  if (param_2 != param_1) {
    FUN_148726a2e(param_1 + 0x28,param_2 + 0x28);
  }
  return param_1;
}



// FUNCTION 148726a2e FUN_148726a2e body=304 status=ok
// SIG undefined FUN_148726a2e(void)

void FUN_148726a2e(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148726ba8 FUN_148726ba8 body=59 status=ok
// SIG undefined FUN_148726ba8(void)

undefined8 FUN_148726ba8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148726ccc FUN_148726ccc body=59 status=ok
// SIG undefined FUN_148726ccc(void)

undefined8 FUN_148726ccc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148726e26 FUN_148726e26 body=59 status=ok
// SIG undefined FUN_148726e26(void)

undefined8 FUN_148726e26(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148726ef4 FUN_148726ef4 body=68 status=ok
// SIG undefined FUN_148726ef4(void)

undefined8 FUN_148726ef4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486fe934(param_2,param_3);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 148726f60 FUN_148726f60 body=59 status=ok
// SIG undefined FUN_148726f60(void)

undefined8 FUN_148726f60(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14872703a FUN_14872703a body=73 status=ok
// SIG undefined FUN_14872703a(void)

undefined1 FUN_14872703a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_145c43818();
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487270ac FUN_1487270ac body=59 status=ok
// SIG undefined FUN_1487270ac(void)

undefined8 FUN_1487270ac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487271ba FUN_1487271ba body=59 status=ok
// SIG undefined FUN_1487271ba(void)

undefined8 FUN_1487271ba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487272a6 FUN_1487272a6 body=59 status=ok
// SIG undefined FUN_1487272a6(void)

undefined8 FUN_1487272a6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487272ec FUN_1487272ec body=38 status=ok
// SIG undefined FUN_1487272ec(void)

void FUN_1487272ec(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148727392 FUN_148727392 body=54 status=ok
// SIG undefined FUN_148727392(void)

undefined1 FUN_148727392(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148727490(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 1487273f0 FUN_1487273f0 body=59 status=ok
// SIG undefined FUN_1487273f0(void)

undefined8 FUN_1487273f0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148727490 FUN_148727490 body=97 status=ok
// SIG undefined FUN_148727490(void)

longlong * FUN_148727490(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  *(char *)(param_1 + 2) = (char)param_2[2];
  return param_1;
}



// FUNCTION 1487274f2 FUN_1487274f2 body=75 status=ok
// SIG undefined FUN_1487274f2(void)

void FUN_1487274f2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1b0);
  *(undefined4 *)((longlong)param_2 + 0x148) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x7c) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0x11c) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x180) = 0;
  *(undefined8 *)((longlong)param_2 + 0x188) = 0;
  *(undefined8 *)((longlong)param_2 + 400) = 0;
  return;
}



// FUNCTION 14872753e FUN_14872753e body=136 status=ok
// SIG undefined FUN_14872753e(void)

void FUN_14872753e(undefined8 param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_2 + 0xe) = 0;
  memset(param_2 + 0xf,0,0x100);
  *(undefined4 *)(param_2 + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x7c) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0x11c) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x2f) = 0;
  param_2[0x34] = 0;
  *(undefined4 *)(param_2 + 0x35) = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  return;
}



// FUNCTION 1487275e4 FUN_1487275e4 body=63 status=ok
// SIG undefined FUN_1487275e4(void)

undefined1 FUN_1487275e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14872770c(param_2,param_3);
    param_3 = param_3 + 0x1b0;
    param_2 = param_2 + 0x1b0;
  }
  return 1;
}



// FUNCTION 14872764c FUN_14872764c body=59 status=ok
// SIG undefined FUN_14872764c(void)

undefined8 FUN_14872764c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148727698 FUN_148727698 body=38 status=ok
// SIG undefined FUN_148727698(void)

void FUN_148727698(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_141858bf8(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 14872770c FUN_14872770c body=230 status=ok
// SIG undefined FUN_14872770c(void)

undefined8 * FUN_14872770c(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  uVar2 = *param_2;
  lVar7 = param_2[1];
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[1];
  *param_1 = uVar2;
  param_1[1] = lVar7;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 3);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 3) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
  FUN_141818ba6(param_1 + 4,param_2 + 4);
  lVar7 = param_2[7];
  if (DAT_14c950c29 == '\x01') {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar7 = param_2[7];
    }
  }
  param_1[7] = lVar7;
  FUN_144a7bb84(param_1 + 8,param_2 + 8);
  FUN_144a7bb84(param_1 + 0xb,param_2 + 0xb);
  memcpy(param_1 + 0xe,param_2 + 0xe,0x10c);
  FUN_1487277f2(param_1 + 0x30,param_2 + 0x30);
  param_1[0x32] = param_2[0x32];
  *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(param_2 + 0x33);
  FUN_144af6996(param_1 + 0x34,param_2 + 0x34);
  return param_1;
}



// FUNCTION 1487277f2 FUN_1487277f2 body=79 status=ok
// SIG undefined FUN_1487277f2(void)

undefined8 * FUN_1487277f2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148727842(param_1,iVar1);
      FUN_1487278b5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148727842 FUN_148727842 body=115 status=ok
// SIG undefined FUN_148727842(void)

void FUN_148727842(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1487278b5 FUN_1487278b5 body=52 status=ok
// SIG undefined FUN_1487278b5(void)

void FUN_1487278b5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1487278ea(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1487278ea FUN_1487278ea body=94 status=ok
// SIG undefined FUN_1487278ea(void)

longlong * FUN_1487278ea(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  *(char *)(param_1 + 2) = (char)param_2[2];
  return param_1;
}



// FUNCTION 14872794a FUN_14872794a body=37 status=ok
// SIG undefined FUN_14872794a(void)

void FUN_14872794a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1f0);
  FUN_143c4bffc(param_2);
  return;
}



// FUNCTION 148727996 FUN_148727996 body=63 status=ok
// SIG undefined FUN_148727996(void)

undefined1 FUN_148727996(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148727abe(param_2,param_3);
    param_3 = param_3 + 0x1f0;
    param_2 = param_2 + 0x1f0;
  }
  return 1;
}



// FUNCTION 1487279fe FUN_1487279fe body=59 status=ok
// SIG undefined FUN_1487279fe(void)

undefined8 FUN_1487279fe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148727a4a FUN_148727a4a body=38 status=ok
// SIG undefined FUN_148727a4a(void)

void FUN_148727a4a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1f0) == '\x01') {
    FUN_141858c84(param_2);
    *(undefined1 *)(param_2 + 0x1f0) = 0;
  }
  return;
}



// FUNCTION 148727abe FUN_148727abe body=269 status=ok
// SIG undefined FUN_148727abe(void)

undefined8 * FUN_148727abe(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = param_2;
  puVar4 = param_1;
  for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  lVar2 = param_2[0xe];
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0xe];
    }
  }
  bVar1 = DAT_14c950c29;
  param_1[0xe] = lVar2;
  param_1[0xf] = param_2[0xf];
  lVar2 = param_2[0x10];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0x10];
    }
  }
  param_1[0x10] = lVar2;
  FUN_148727bcc(param_1 + 0x11,param_2 + 0x11);
  puVar3 = param_2 + 0x13;
  puVar4 = param_1 + 0x13;
  for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)(param_1 + 0x1b) = *(undefined2 *)(param_2 + 0x1b);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  FUN_140b177d4(param_1 + 0x1d,param_2 + 0x1d);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  FUN_140b177d4(param_1 + 0x22,param_2 + 0x22);
  memcpy(param_1 + 0x26,param_2 + 0x26,0xc0);
  return param_1;
}



// FUNCTION 148727bcc FUN_148727bcc body=93 status=ok
// SIG undefined FUN_148727bcc(void)

undefined8 * FUN_148727bcc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d24ce3(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148727c2a(param_1,iVar1);
      FUN_148727c9f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148727c2a FUN_148727c2a body=117 status=ok
// SIG undefined FUN_148727c2a(void)

void FUN_148727c2a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148727c9f FUN_148727c9f body=304 status=ok
// SIG undefined FUN_148727c9f(void)

void FUN_148727c9f(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  
  if (param_3 != 0) {
    lVar14 = 0x118;
    do {
      lVar1 = param_1 + lVar14;
      lVar2 = param_2 + lVar14;
      puVar12 = (undefined8 *)(lVar2 + -0x118);
      puVar13 = (undefined8 *)(lVar1 + -0x118);
      for (lVar11 = 0xd; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      cVar3 = *(char *)(param_2 + -0x70 + lVar14);
      *(char *)(param_1 + -0x70 + lVar14) = cVar3;
      if (cVar3 == '\x01') {
        puVar12 = (undefined8 *)(param_2 + -0xb0 + lVar14);
        uVar4 = *puVar12;
        uVar5 = puVar12[1];
        puVar12 = (undefined8 *)(param_2 + -0xa0 + lVar14);
        uVar6 = *puVar12;
        uVar7 = puVar12[1];
        puVar12 = (undefined8 *)(param_2 + -0x90 + lVar14);
        uVar8 = *puVar12;
        uVar9 = puVar12[1];
        puVar12 = (undefined8 *)(param_2 + -0x80 + lVar14);
        uVar10 = puVar12[1];
        puVar13 = (undefined8 *)(param_1 + -0x80 + lVar14);
        *puVar13 = *puVar12;
        puVar13[1] = uVar10;
        puVar12 = (undefined8 *)(param_1 + -0x90 + lVar14);
        *puVar12 = uVar8;
        puVar12[1] = uVar9;
        puVar12 = (undefined8 *)(param_1 + -0xa0 + lVar14);
        *puVar12 = uVar6;
        puVar12[1] = uVar7;
        puVar12 = (undefined8 *)(param_1 + -0xb0 + lVar14);
        *puVar12 = uVar4;
        puVar12[1] = uVar5;
      }
      cVar3 = *(char *)(lVar2 + -0x28);
      *(char *)(lVar1 + -0x28) = cVar3;
      if (cVar3 == '\x01') {
        puVar12 = (undefined8 *)(param_2 + -0x68 + lVar14);
        uVar4 = *puVar12;
        uVar5 = puVar12[1];
        puVar12 = (undefined8 *)(param_2 + -0x58 + lVar14);
        uVar6 = *puVar12;
        uVar7 = puVar12[1];
        puVar12 = (undefined8 *)(param_2 + -0x48 + lVar14);
        uVar8 = *puVar12;
        uVar9 = puVar12[1];
        puVar12 = (undefined8 *)(param_2 + -0x38 + lVar14);
        uVar10 = puVar12[1];
        puVar13 = (undefined8 *)(param_1 + -0x38 + lVar14);
        *puVar13 = *puVar12;
        puVar13[1] = uVar10;
        puVar12 = (undefined8 *)(param_1 + -0x48 + lVar14);
        *puVar12 = uVar8;
        puVar12[1] = uVar9;
        puVar12 = (undefined8 *)(param_1 + -0x58 + lVar14);
        *puVar12 = uVar6;
        puVar12[1] = uVar7;
        puVar12 = (undefined8 *)(param_1 + -0x68 + lVar14);
        *puVar12 = uVar4;
        puVar12[1] = uVar5;
      }
      cVar3 = *(char *)(lVar2 + -8);
      *(char *)(lVar1 + -8) = cVar3;
      if (cVar3 == '\x01') {
        *(undefined8 *)(param_1 + -0x10 + lVar14) = *(undefined8 *)(param_2 + -0x10 + lVar14);
        puVar12 = (undefined8 *)(param_2 + -0x20 + lVar14);
        uVar4 = puVar12[1];
        puVar13 = (undefined8 *)(param_1 + -0x20 + lVar14);
        *puVar13 = *puVar12;
        puVar13[1] = uVar4;
      }
      cVar3 = *(char *)(lVar2 + 0x18);
      *(char *)(lVar1 + 0x18) = cVar3;
      if (cVar3 == '\x01') {
        *(undefined8 *)(param_1 + 0x10 + lVar14) = *(undefined8 *)(param_2 + 0x10 + lVar14);
        uVar4 = ((undefined8 *)(param_2 + lVar14))[1];
        *(undefined8 *)(param_1 + lVar14) = *(undefined8 *)(param_2 + lVar14);
        ((undefined8 *)(param_1 + lVar14))[1] = uVar4;
      }
      lVar14 = lVar14 + 0x138;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148727dd0 FUN_148727dd0 body=84 status=ok
// SIG undefined FUN_148727dd0(void)

longlong * FUN_148727dd0(longlong *param_1,longlong *param_2)

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



// FUNCTION 148727e90 FUN_148727e90 body=59 status=ok
// SIG undefined FUN_148727e90(void)

undefined8 FUN_148727e90(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148727fde FUN_148727fde body=39 status=ok
// SIG undefined FUN_148727fde(void)

undefined8 FUN_148727fde(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14872802e FUN_14872802e body=59 status=ok
// SIG undefined FUN_14872802e(void)

undefined8 FUN_14872802e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487280d0 FUN_1487280d0 body=38 status=ok
// SIG undefined FUN_1487280d0(void)

undefined8 FUN_1487280d0(undefined8 param_1,int param_2)

{
  FUN_1458d67e2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14872819e FUN_14872819e body=102 status=ok
// SIG undefined FUN_14872819e(void)

void FUN_14872819e(longlong param_1,undefined8 param_2)

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



// FUNCTION 148728206 FUN_148728206 body=888 status=ok
// SIG undefined FUN_148728206(void)

void FUN_148728206(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined4 *local_1a0;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178 [13];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0x3ff00000;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  local_e8 = 0;
  uStack_e0 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = (undefined4)local_e8;
  uStack_f4 = local_e8._4_4_;
  uStack_f0 = (undefined4)uStack_e0;
  uStack_ec = uStack_e0._4_4_;
  local_110 = local_d8;
  uVar1 = FUN_14477b664(uStack_d0);
  local_108 = FUN_14477b664(uVar1);
  local_100 = local_c8;
  puVar3 = local_b8;
  puVar4 = local_178;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_190 = local_58;
  uVar1 = FUN_14477b664(uStack_50);
  local_188 = FUN_14477b664(uVar1);
  local_180 = local_48;
  local_1a8 = &local_110;
  local_1a0 = &local_f8;
  FUN_143d84ace(local_38,local_40,&local_190,local_178);
  if ((local_30 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148728580 FUN_148728580 body=230 status=ok
// SIG undefined FUN_148728580(void)

void FUN_148728580(undefined8 param_1,longlong param_2)

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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143d85280(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487286ae FUN_1487286ae body=45 status=ok
// SIG undefined FUN_1487286ae(void)

longlong FUN_1487286ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14581171a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487286e2 FUN_1487286e2 body=45 status=ok
// SIG undefined FUN_1487286e2(void)

longlong FUN_1487286e2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14103b090(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148728710 FUN_148728710 body=37 status=ok
// SIG undefined FUN_148728710(void)

void FUN_148728710(undefined8 param_1,void *param_2)

{
  memset(param_2,0,800);
  FUN_1458ef296(param_2);
  return;
}



// FUNCTION 148728798 FUN_148728798 body=59 status=ok
// SIG undefined FUN_148728798(void)

undefined8 FUN_148728798(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487287e4 FUN_1487287e4 body=40 status=ok
// SIG undefined FUN_1487287e4(void)

void FUN_1487287e4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 800) == '\x01') {
    FUN_1458d67e2(param_2);
    *(undefined1 *)(param_2 + 800) = 0;
  }
  return;
}



// FUNCTION 1487288de FUN_1487288de body=59 status=ok
// SIG undefined FUN_1487288de(void)

undefined8 FUN_1487288de(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148728972 FUN_148728972 body=57 status=ok
// SIG undefined FUN_148728972(void)

void FUN_148728972(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66420 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66420 = FUN_140002ddd(FUN_14650ec7b,uVar1,L"GbxStandInBodyNode");
  }
  return;
}



// FUNCTION 148728a3a FUN_148728a3a body=59 status=ok
// SIG undefined FUN_148728a3a(void)

undefined8 FUN_148728a3a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148728b32 FUN_148728b32 body=63 status=ok
// SIG undefined FUN_148728b32(void)

undefined1 FUN_148728b32(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148728d04(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 148728b9a FUN_148728b9a body=59 status=ok
// SIG undefined FUN_148728b9a(void)

undefined8 FUN_148728b9a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148728be6 FUN_148728be6 body=38 status=ok
// SIG undefined FUN_148728be6(void)

void FUN_148728be6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_148728c88(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 148728c4e FUN_148728c4e body=57 status=ok
// SIG undefined FUN_148728c4e(void)

void FUN_148728c4e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66450 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66450 = FUN_140002ddd(FUN_14650ed3c,uVar1,L"GbxStandInBodyNode_SkeletalMeshComponent");
  }
  return;
}



// FUNCTION 148728c88 FUN_148728c88 body=124 status=ok
// SIG undefined FUN_148728c88(void)

void FUN_148728c88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b27f810;
  FUN_140f1eff2(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_140890760(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148728d04 FUN_148728d04 body=160 status=ok
// SIG undefined FUN_148728d04(void)

longlong FUN_148728d04(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  FUN_140c19cf6(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x4c);
  uVar2 = *(undefined4 *)(param_2 + 0x50);
  uVar3 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  FUN_144a787a6(param_1 + 0x58,param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  FUN_147e370ba(param_1 + 0x70,param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  FUN_148728da4(param_1 + 0x88,param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  return param_1;
}



// FUNCTION 148728da4 FUN_148728da4 body=93 status=ok
// SIG undefined FUN_148728da4(void)

undefined8 * FUN_148728da4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140f1eff2(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148728e02(param_1,iVar1);
      FUN_148728e75(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148728e02 FUN_148728e02 body=115 status=ok
// SIG undefined FUN_148728e02(void)

void FUN_148728e02(longlong param_1,int param_2,int param_3)

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


