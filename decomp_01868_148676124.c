// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148676124 FUN_148676124 body=40 status=ok
// SIG undefined FUN_148676124(void)

void FUN_148676124(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_1486761fe(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 14867619a FUN_14867619a body=43 status=ok
// SIG undefined FUN_14867619a(void)

undefined8 FUN_14867619a(undefined8 param_1,int param_2)

{
  FUN_1486761fe();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1486761c6 FUN_1486761c6 body=55 status=ok
// SIG undefined FUN_1486761c6(void)

void FUN_1486761c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5af48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5af48 = FUN_140002ddd(FUN_1464cd58f,uVar1,L"GbxBrainService_LeadFollow");
  }
  return;
}



// FUNCTION 1486761fe FUN_1486761fe body=156 status=ok
// SIG undefined FUN_1486761fe(void)

void FUN_1486761fe(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b0d30c0;
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    *(undefined1 *)(param_1 + 0x1f) = 0;
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x14) == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  plVar2 = (longlong *)param_1[0x10];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[0xe];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_14ac53b20;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014867628f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14867629a FUN_14867629a body=473 status=ok
// SIG undefined FUN_14867629a(void)

longlong FUN_14867629a(longlong param_1,longlong param_2)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 uVar18;
  
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
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  uVar5 = *(undefined4 *)(param_2 + 0x30);
  uVar6 = *(undefined4 *)(param_2 + 0x34);
  uVar7 = *(undefined4 *)(param_2 + 0x38);
  uVar8 = *(undefined4 *)(param_2 + 0x3c);
  uVar9 = *(undefined4 *)(param_2 + 0x40);
  uVar10 = *(undefined4 *)(param_2 + 0x44);
  uVar11 = *(undefined4 *)(param_2 + 0x48);
  uVar12 = *(undefined4 *)(param_2 + 0x4c);
  uVar13 = *(undefined4 *)(param_2 + 0x54);
  uVar14 = *(undefined4 *)(param_2 + 0x58);
  uVar15 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar13;
  *(undefined4 *)(param_1 + 0x58) = uVar14;
  *(undefined4 *)(param_1 + 0x5c) = uVar15;
  *(undefined4 *)(param_1 + 0x40) = uVar9;
  *(undefined4 *)(param_1 + 0x44) = uVar10;
  *(undefined4 *)(param_1 + 0x48) = uVar11;
  *(undefined4 *)(param_1 + 0x4c) = uVar12;
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  *(undefined4 *)(param_1 + 0x38) = uVar7;
  *(undefined4 *)(param_1 + 0x3c) = uVar8;
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  lVar3 = *(longlong *)(param_2 + 0x70);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(longlong *)(param_1 + 0x70) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  lVar3 = *(longlong *)(param_2 + 0x80);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  *(longlong *)(param_1 + 0x80) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if (param_2 == param_1) {
    FUN_1405b70a4(param_1 + 0xa8,param_2 + 0xa8);
    uVar2 = *(undefined8 *)(param_2 + 0xc0);
    uVar16 = *(undefined8 *)(param_2 + 200);
    uVar17 = *(undefined8 *)(param_2 + 0xd0);
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
    *(undefined8 *)(param_1 + 200) = uVar16;
    *(undefined8 *)(param_1 + 0xd0) = uVar17;
    *(undefined8 *)(param_1 + 0xd5) = *(undefined8 *)(param_2 + 0xd5);
    return param_1;
  }
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
    uVar5 = *(undefined4 *)(param_2 + 0x8c);
    uVar6 = *(undefined4 *)(param_2 + 0x90);
    uVar7 = *(undefined4 *)(param_2 + 0x94);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
    *(undefined4 *)(param_1 + 0x8c) = uVar5;
    *(undefined4 *)(param_1 + 0x90) = uVar6;
    *(undefined4 *)(param_1 + 0x94) = uVar7;
    uVar18 = 1;
  }
  else {
    if (*(char *)(param_1 + 0xa0) == '\0') goto LAB_14867639f;
    uVar18 = 0;
  }
  *(undefined1 *)(param_1 + 0xa0) = uVar18;
LAB_14867639f:
  FUN_1405b70a4(param_1 + 0xa8,param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xd5) = *(undefined8 *)(param_2 + 0xd5);
  uVar2 = *(undefined8 *)(param_2 + 0xb8);
  uVar16 = *(undefined8 *)(param_2 + 0xc0);
  uVar17 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar17;
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined8 *)(param_1 + 0xc0) = uVar16;
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
    uVar2 = *(undefined8 *)(param_2 + 0xe8);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
    *(undefined8 *)(param_1 + 0xe8) = uVar2;
    *(undefined1 *)(param_1 + 0xf8) = 1;
  }
  else if (*(char *)(param_1 + 0xf8) == '\x01') {
    *(undefined1 *)(param_1 + 0xf8) = 0;
  }
  return param_1;
}



// FUNCTION 148676474 FUN_148676474 body=37 status=ok
// SIG undefined FUN_148676474(void)

void FUN_148676474(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1748);
  FUN_143c4b580(param_2);
  return;
}



// FUNCTION 1486764c6 FUN_1486764c6 body=63 status=ok
// SIG undefined FUN_1486764c6(void)

undefined1 FUN_1486764c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14867661a(param_2,param_3);
    param_3 = param_3 + 0x1748;
    param_2 = param_2 + 0x1748;
  }
  return 1;
}



// FUNCTION 14867652e FUN_14867652e body=59 status=ok
// SIG undefined FUN_14867652e(void)

undefined8 FUN_14867652e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867657a FUN_14867657a body=38 status=ok
// SIG undefined FUN_14867657a(void)

void FUN_14867657a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1748) == '\x01') {
    FUN_140cc5e0e(param_2);
    *(undefined1 *)(param_2 + 0x1748) = 0;
  }
  return;
}



// FUNCTION 1486765ee FUN_1486765ee body=43 status=ok
// SIG undefined FUN_1486765ee(void)

undefined8 FUN_1486765ee(undefined8 param_1,int param_2)

{
  FUN_140cc5e0e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1748);
  }
  return param_1;
}



// FUNCTION 14867661a FUN_14867661a body=402 status=ok
// SIG undefined FUN_14867661a(void)

longlong FUN_14867661a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  longlong lVar18;
  
  uVar5 = *(undefined8 *)(param_2 + 8);
  lVar18 = *(longlong *)(param_2 + 0x10);
  if (lVar18 != 0) {
    LOCK();
    *(int *)(lVar18 + 0xc) = *(int *)(lVar18 + 0xc) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar5;
  *(longlong *)(param_1 + 0x10) = lVar18;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar7 = *(undefined4 *)(param_2 + 0x1c);
  uVar8 = *(undefined4 *)(param_2 + 0x20);
  uVar9 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  *(undefined4 *)(param_1 + 0x20) = uVar8;
  *(undefined4 *)(param_1 + 0x24) = uVar9;
  lVar18 = 0;
  do {
    lVar3 = param_1 + lVar18;
    lVar4 = param_2 + lVar18;
    FUN_1486767ac(lVar3 + 0x30,lVar4 + 0x30);
    *(undefined8 *)(lVar3 + 0xb40) = *(undefined8 *)(lVar4 + 0xb40);
    *(undefined4 *)(lVar3 + 0xb48) = *(undefined4 *)(lVar4 + 0xb48);
    uVar7 = *(undefined4 *)(lVar4 + 0xb54);
    uVar8 = *(undefined4 *)(lVar4 + 0xb58);
    uVar9 = *(undefined4 *)(lVar4 + 0xb5c);
    uVar10 = *(undefined4 *)(lVar4 + 0xb60);
    uVar11 = *(undefined4 *)(lVar4 + 0xb64);
    uVar12 = *(undefined4 *)(lVar4 + 0xb68);
    uVar13 = *(undefined4 *)(lVar4 + 0xb6c);
    uVar14 = *(undefined4 *)(lVar4 + 0xb70);
    uVar15 = *(undefined4 *)(lVar4 + 0xb74);
    uVar16 = *(undefined4 *)(lVar4 + 0xb78);
    uVar17 = *(undefined4 *)(lVar4 + 0xb7c);
    *(undefined4 *)(lVar3 + 0xb50) = *(undefined4 *)(lVar4 + 0xb50);
    *(undefined4 *)(lVar3 + 0xb54) = uVar7;
    *(undefined4 *)(lVar3 + 0xb58) = uVar8;
    *(undefined4 *)(lVar3 + 0xb5c) = uVar9;
    *(undefined4 *)(lVar3 + 0xb60) = uVar10;
    *(undefined4 *)(lVar3 + 0xb64) = uVar11;
    *(undefined4 *)(lVar3 + 0xb68) = uVar12;
    *(undefined4 *)(lVar3 + 0xb6c) = uVar13;
    *(undefined4 *)(lVar3 + 0xb70) = uVar14;
    *(undefined4 *)(lVar3 + 0xb74) = uVar15;
    *(undefined4 *)(lVar3 + 0xb78) = uVar16;
    *(undefined4 *)(lVar3 + 0xb7c) = uVar17;
    FUN_14488c2fc(param_1 + lVar18 + 0xb80,param_2 + lVar18 + 0xb80);
    *(undefined2 *)(lVar3 + 0xb98) = *(undefined2 *)(lVar4 + 0xb98);
    lVar18 = lVar18 + 0xb70;
  } while (lVar18 != 0x16e0);
  *(undefined8 *)(param_1 + 0x1730) = *(undefined8 *)(param_2 + 0x1730);
  uVar7 = *(undefined4 *)(param_2 + 0x1710);
  uVar8 = *(undefined4 *)(param_2 + 0x1714);
  uVar9 = *(undefined4 *)(param_2 + 0x1718);
  uVar10 = *(undefined4 *)(param_2 + 0x171c);
  uVar11 = *(undefined4 *)(param_2 + 0x1724);
  uVar12 = *(undefined4 *)(param_2 + 0x1728);
  uVar13 = *(undefined4 *)(param_2 + 0x172c);
  *(undefined4 *)(param_1 + 0x1720) = *(undefined4 *)(param_2 + 0x1720);
  *(undefined4 *)(param_1 + 0x1724) = uVar11;
  *(undefined4 *)(param_1 + 0x1728) = uVar12;
  *(undefined4 *)(param_1 + 0x172c) = uVar13;
  *(undefined4 *)(param_1 + 0x1710) = uVar7;
  *(undefined4 *)(param_1 + 0x1714) = uVar8;
  *(undefined4 *)(param_1 + 0x1718) = uVar9;
  *(undefined4 *)(param_1 + 0x171c) = uVar10;
  uVar5 = *(undefined8 *)(param_2 + 0x1738);
  lVar18 = *(longlong *)(param_2 + 0x1740);
  if (lVar18 != 0) {
    LOCK();
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0x1740);
  *(undefined8 *)(param_1 + 0x1738) = uVar5;
  *(longlong *)(param_1 + 0x1740) = lVar18;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  return param_1;
}



// FUNCTION 1486767ac FUN_1486767ac body=90 status=ok
// SIG undefined FUN_1486767ac(void)

longlong FUN_1486767ac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_1 + 0xb00);
    if (*(longlong *)(param_1 + 0xb00) == 0) {
      lVar1 = param_1;
    }
    FUN_1401823d6(lVar1,*(undefined4 *)(param_1 + 0xb08));
    lVar1 = *(longlong *)(param_2 + 0xb00);
    if (*(longlong *)(param_2 + 0xb00) == 0) {
      lVar1 = param_2;
    }
    FUN_148676806(param_1,lVar1,*(undefined4 *)(param_2 + 0xb08),*(undefined4 *)(param_1 + 0xb0c));
  }
  return param_1;
}



// FUNCTION 148676806 FUN_148676806 body=95 status=ok
// SIG undefined FUN_148676806(void)

void FUN_148676806(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0xb08) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0xb0c) = 0x20;
    return;
  }
  FUN_148676866(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0xb00);
  if (*(longlong *)(param_1 + 0xb00) == 0) {
    lVar1 = param_1;
  }
  FUN_1486768d9(lVar1,param_2,param_3);
  return;
}



// FUNCTION 148676866 FUN_148676866 body=115 status=ok
// SIG undefined FUN_148676866(void)

void FUN_148676866(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x20;
    if (0x20 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x58,0);
      iVar2 = (int)(uVar1 / 0x58);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_144b39528(param_1,0,iVar3,0x58);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xb0c) = param_3;
  return;
}



// FUNCTION 1486768d9 FUN_1486768d9 body=111 status=ok
// SIG undefined FUN_1486768d9(void)

void FUN_1486768d9(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = 0;
    do {
      *(undefined4 *)(param_1 + 8 + lVar9) = *(undefined4 *)(param_2 + 8 + lVar9);
      *(undefined8 *)(param_1 + lVar9) = *(undefined8 *)(param_2 + lVar9);
      puVar1 = (undefined8 *)(param_2 + 0x10 + lVar9);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 0x20 + lVar9);
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      puVar2 = (undefined8 *)(param_2 + 0x30 + lVar9);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      puVar2 = (undefined8 *)(param_1 + 0x10 + lVar9);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar1 = (undefined8 *)(param_1 + 0x20 + lVar9);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1 = (undefined8 *)(param_1 + 0x30 + lVar9);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      *(undefined8 *)(param_1 + 0x40 + lVar9) = *(undefined8 *)(param_2 + 0x40 + lVar9);
      lVar3 = *(longlong *)(param_2 + 0x48 + lVar9);
      *(longlong *)(param_1 + 0x48 + lVar9) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      *(undefined4 *)(param_1 + lVar9 + 0x50) = *(undefined4 *)(param_2 + lVar9 + 0x50);
      lVar9 = lVar9 + 0x58;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14867697a FUN_14867697a body=63 status=ok
// SIG undefined FUN_14867697a(void)

undefined1 FUN_14867697a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148676aa2(param_2,param_3);
    param_3 = param_3 + 0x2d0;
    param_2 = param_2 + 0x2d0;
  }
  return 1;
}



// FUNCTION 1486769e2 FUN_1486769e2 body=59 status=ok
// SIG undefined FUN_1486769e2(void)

undefined8 FUN_1486769e2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148676a2e FUN_148676a2e body=38 status=ok
// SIG undefined FUN_148676a2e(void)

void FUN_148676a2e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2d0) == '\x01') {
    FUN_141239cbc(param_2);
    *(undefined1 *)(param_2 + 0x2d0) = 0;
  }
  return;
}



// FUNCTION 148676aa2 FUN_148676aa2 body=264 status=ok
// SIG undefined FUN_148676aa2(void)

longlong FUN_148676aa2(longlong param_1,longlong param_2)

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
  FUN_147f23058(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0x198,param_2 + 0x198);
  FUN_144983130(param_1 + 0x1d0,param_2 + 0x1d0);
  FUN_144983130(param_1 + 0x208,param_2 + 0x208);
  lVar8 = *(longlong *)(param_2 + 0x240);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x240);
    }
  }
  *(longlong *)(param_1 + 0x240) = lVar8;
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0x250);
  FUN_144983130(param_1 + 600,param_2 + 600);
  FUN_144983130(param_1 + 0x290,param_2 + 0x290);
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x2c8);
  return param_1;
}



// FUNCTION 148676bac FUN_148676bac body=99 status=ok
// SIG undefined FUN_148676bac(void)

void FUN_148676bac(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  param_2[0x23] = 0;
  param_2[0x24] = 0x800000000;
  param_2[0x25] = 0xbf80000000000000;
  *param_2 = &PTR_FUN_14ac4f5c0;
  FUN_141321d98(param_2 + 0x26);
  *param_2 = &PTR_FUN_14b0d29b0;
  return;
}



// FUNCTION 148676c60 FUN_148676c60 body=59 status=ok
// SIG undefined FUN_148676c60(void)

undefined8 FUN_148676c60(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148676cac FUN_148676cac body=38 status=ok
// SIG undefined FUN_148676cac(void)

void FUN_148676cac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_1411d7298(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 148676d20 FUN_148676d20 body=57 status=ok
// SIG undefined FUN_148676d20(void)

void FUN_148676d20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5afa8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5afa8 = FUN_140002ddd(FUN_1464cd6d5,uVar1,L"GbxBrainTask_AOEAttack");
  }
  return;
}



// FUNCTION 148676d8a FUN_148676d8a body=63 status=ok
// SIG undefined FUN_148676d8a(void)

undefined1 FUN_148676d8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148676eb2(param_2,param_3);
    param_3 = param_3 + 0xb48;
    param_2 = param_2 + 0xb48;
  }
  return 1;
}



// FUNCTION 148676df2 FUN_148676df2 body=59 status=ok
// SIG undefined FUN_148676df2(void)

undefined8 FUN_148676df2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148676e3e FUN_148676e3e body=38 status=ok
// SIG undefined FUN_148676e3e(void)

void FUN_148676e3e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb48) == '\x01') {
    FUN_14122be10(param_2);
    *(undefined1 *)(param_2 + 0xb48) = 0;
  }
  return;
}



// FUNCTION 148676eb2 FUN_148676eb2 body=473 status=ok
// SIG undefined FUN_148676eb2(void)

longlong FUN_148676eb2(longlong param_1,longlong param_2)

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
  FUN_147f23058(param_1 + 0x80,param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_2 + 0x198);
  FUN_144983130(param_1 + 0x1a0,param_2 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_2 + 0x1d8);
  FUN_14054d68c(param_1 + 0x1e0,param_2 + 0x1e0);
  FUN_14054d68c(param_1 + 0x458,param_2 + 0x458);
  FUN_14054d68c(param_1 + 0x6d0,param_2 + 0x6d0);
  lVar8 = *(longlong *)(param_2 + 0x948);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x948);
    }
  }
  *(longlong *)(param_1 + 0x948) = lVar8;
  *(undefined2 *)(param_1 + 0x950) = *(undefined2 *)(param_2 + 0x950);
  FUN_144983130(param_1 + 0x958,param_2 + 0x958);
  FUN_1411157dc(param_1 + 0x990,param_2 + 0x990);
  FUN_144983130(param_1 + 0x9a0,param_2 + 0x9a0);
  FUN_144983130(param_1 + 0x9d8,param_2 + 0x9d8);
  *(undefined2 *)(param_1 + 0xa10) = *(undefined2 *)(param_2 + 0xa10);
  FUN_144983130(param_1 + 0xa18,param_2 + 0xa18);
  FUN_144983130(param_1 + 0xa50,param_2 + 0xa50);
  *(undefined1 *)(param_1 + 0xa88) = *(undefined1 *)(param_2 + 0xa88);
  FUN_144983130(param_1 + 0xa90,param_2 + 0xa90);
  *(undefined2 *)(param_1 + 0xac8) = *(undefined2 *)(param_2 + 0xac8);
  FUN_144983130(param_1 + 0xad0,param_2 + 0xad0);
  FUN_144983130(param_1 + 0xb08,param_2 + 0xb08);
  *(undefined2 *)(param_1 + 0xb40) = *(undefined2 *)(param_2 + 0xb40);
  *(undefined1 *)(param_1 + 0xb42) = *(undefined1 *)(param_2 + 0xb42);
  return param_1;
}



// FUNCTION 148677184 FUN_148677184 body=55 status=ok
// SIG undefined FUN_148677184(void)

void FUN_148677184(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b170 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b170 = FUN_14171c317(FUN_1464ce5e6,uVar1,L"EGbxViewTargetRotationUpdateMethod");
  }
  return;
}



// FUNCTION 14867721a FUN_14867721a body=57 status=ok
// SIG undefined FUN_14867721a(void)

void FUN_14867721a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b290 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b290 = FUN_14171c317(FUN_1464ce9a4,uVar1,L"ECharacterDeathType");
  }
  return;
}



// FUNCTION 148677258 FUN_148677258 body=41 status=ok
// SIG undefined FUN_148677258(void)

void FUN_148677258(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x998))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1486772cc FUN_1486772cc body=50 status=ok
// SIG undefined FUN_1486772cc(void)

void FUN_1486772cc(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x1128) + 0x10))(param_1 + 0x1128);
  *param_3 = uVar1;
  return;
}



// FUNCTION 148677302 FUN_148677302 body=37 status=ok
// SIG undefined FUN_148677302(void)

void FUN_148677302(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_143c98922();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148677330 FUN_148677330 body=37 status=ok
// SIG undefined FUN_148677330(void)

void FUN_148677330(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_143c98270();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14867738a FUN_14867738a body=168 status=ok
// SIG undefined FUN_14867738a(void)

void FUN_14867738a(longlong param_1,longlong param_2)

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
  (**(code **)(*(longlong *)(param_1 + 0x1130) + 0x10))(param_1 + 0x1130,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148677434 FUN_148677434 body=197 status=ok
// SIG undefined FUN_148677434(void)

void FUN_148677434(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140be4ae0();
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
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_30 = uStack_20;
  FUN_1487bcd3e(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486774fe FUN_1486774fe body=158 status=ok
// SIG undefined FUN_1486774fe(void)

void FUN_1486774fe(undefined8 param_1,longlong param_2)

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
  FUN_1487bcdf4(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486775a2 FUN_1486775a2 body=41 status=ok
// SIG undefined FUN_1486775a2(void)

void FUN_1486775a2(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x9a0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1486775e2 FUN_1486775e2 body=52 status=ok
// SIG undefined FUN_1486775e2(void)

undefined8 * FUN_1486775e2(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_14b0dd050;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 148677636 FUN_148677636 body=48 status=ok
// SIG undefined FUN_148677636(void)

longlong FUN_148677636(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x860;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14867766e FUN_14867766e body=48 status=ok
// SIG undefined FUN_14867766e(void)

longlong FUN_14867766e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x868;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14867769e FUN_14867769e body=48 status=ok
// SIG undefined FUN_14867769e(void)

longlong FUN_14867769e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x870;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486776ce FUN_1486776ce body=48 status=ok
// SIG undefined FUN_1486776ce(void)

longlong FUN_1486776ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10a0;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14867770a FUN_14867770a body=48 status=ok
// SIG undefined FUN_14867770a(void)

longlong FUN_14867770a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10a8;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148677742 FUN_148677742 body=48 status=ok
// SIG undefined FUN_148677742(void)

longlong FUN_148677742(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10b0;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148677772 FUN_148677772 body=48 status=ok
// SIG undefined FUN_148677772(void)

longlong FUN_148677772(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10b8;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486777aa FUN_1486777aa body=48 status=ok
// SIG undefined FUN_1486777aa(void)

longlong FUN_1486777aa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10c0;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486777e2 FUN_1486777e2 body=45 status=ok
// SIG undefined FUN_1486777e2(void)

undefined8 FUN_1486777e2(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\Balance/BalancedActor.h",
                0x20,L"Pure virtual not implemented (%s)",L"IBalancedActor::GetExperienceLevel");
  return 1;
}



// FUNCTION 148677810 FUN_148677810 body=42 status=ok
// SIG undefined FUN_148677810(void)

undefined8 FUN_148677810(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\Balance/BalancedActor.h",
                0x2c,L"Pure virtual not implemented (%s)",L"IBalancedActor::GetBalancedActorData");
  return 0;
}



// FUNCTION 14867783a FUN_14867783a body=48 status=ok
// SIG undefined FUN_14867783a(void)

longlong FUN_14867783a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10c8;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148677872 FUN_148677872 body=42 status=ok
// SIG undefined FUN_148677872(void)

undefined8 FUN_148677872(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\GbxBody/GbxBodyOwner.h",
                0x1c,L"Pure virtual not implemented (%s)",L"IGbxBodyOwner::GetBodyState");
  return 0;
}



// FUNCTION 14867789c FUN_14867789c body=48 status=ok
// SIG undefined FUN_14867789c(void)

longlong FUN_14867789c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10d0;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486778cc FUN_1486778cc body=26 status=ok
// SIG undefined FUN_1486778cc(void)

undefined8 FUN_1486778cc(longlong param_1,undefined8 param_2)

{
  FUN_1487bcae6(param_1 + -8);
  return param_2;
}



// FUNCTION 1486778e6 FUN_1486778e6 body=48 status=ok
// SIG undefined FUN_1486778e6(void)

longlong FUN_1486778e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10d8;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14867791e FUN_14867791e body=48 status=ok
// SIG undefined FUN_14867791e(void)

longlong FUN_14867791e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10e0;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148677956 FUN_148677956 body=48 status=ok
// SIG undefined FUN_148677956(void)

longlong FUN_148677956(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10e8;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14867798e FUN_14867798e body=48 status=ok
// SIG undefined FUN_14867798e(void)

longlong FUN_14867798e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10f0;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486779be FUN_1486779be body=48 status=ok
// SIG undefined FUN_1486779be(void)

longlong FUN_1486779be(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10f8;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486779f6 FUN_1486779f6 body=48 status=ok
// SIG undefined FUN_1486779f6(void)

longlong FUN_1486779f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1110;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148677a36 FUN_148677a36 body=157 status=ok
// SIG undefined FUN_148677a36(void)

undefined8 FUN_148677a36(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406c9d00(param_1 + 400,&local_58);
  if (local_50 == 0) {
    local_50 = FUN_140927942();
  }
  uVar1 = FUN_14477b664(local_50);
  local_40 = local_58;
  uVar1 = FUN_14477b664(uVar1);
  local_38 = FUN_14477b664(uVar1);
  local_30 = local_48;
  FUN_1411f1bdc(param_2,&local_40);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148677ade FUN_148677ade body=54 status=ok
// SIG undefined FUN_148677ade(void)

undefined8 * FUN_148677ade(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\Gearbox\\GbxAudio\\Public\\GbxAudioImplementer.h",0x17,
                L"Pure virtual not implemented (%s)",L"IGbxAudioImplementer::GetAudioProvider");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148677b14 FUN_148677b14 body=41 status=ok
// SIG undefined FUN_148677b14(void)

void FUN_148677b14(void)

{
  FUN_140033559("Runtime\\Gearbox\\GbxAudio\\Public\\GbxAudioImplementer.h",0x18,
                L"Pure virtual not implemented (%s)",L"IGbxAudioImplementer::InitializeEmitter");
  return;
}



// FUNCTION 148677b3e FUN_148677b3e body=41 status=ok
// SIG undefined FUN_148677b3e(void)

void FUN_148677b3e(void)

{
  FUN_140033559("Runtime\\Gearbox\\GbxAudio\\Public\\GbxAudioImplementer.h",0x19,
                L"Pure virtual not implemented (%s)",L"IGbxAudioImplementer::UpdateEmitter");
  return;
}



// FUNCTION 148677b68 FUN_148677b68 body=99 status=ok
// SIG undefined FUN_148677b68(void)

undefined8 * FUN_148677b68(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\Gearbox\\GbxAudio\\Public\\GbxAudioImplementer.h",0x1a,
                L"Pure virtual not implemented (%s)",L"IGbxAudioImplementer::GetAudioTransform");
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0x3ff0000000000000;
  param_2[9] = 0x3ff0000000000000;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0;
  return param_2;
}



// FUNCTION 148677bcc FUN_148677bcc body=42 status=ok
// SIG undefined FUN_148677bcc(void)

undefined8 FUN_148677bcc(void)

{
  FUN_140033559("Runtime\\Gearbox\\GbxAudio\\Public\\GbxAudioImplementer.h",0x1b,
                L"Pure virtual not implemented (%s)",L"IGbxAudioImplementer::GetAudioInstigator");
  return 0;
}



// FUNCTION 148677c3c FUN_148677c3c body=63 status=ok
// SIG undefined FUN_148677c3c(void)

undefined1 FUN_148677c3c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148677d64(param_2,param_3);
    param_3 = param_3 + 0x468;
    param_2 = param_2 + 0x468;
  }
  return 1;
}



// FUNCTION 148677ca4 FUN_148677ca4 body=59 status=ok
// SIG undefined FUN_148677ca4(void)

undefined8 FUN_148677ca4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148677cf0 FUN_148677cf0 body=38 status=ok
// SIG undefined FUN_148677cf0(void)

void FUN_148677cf0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x468) == '\x01') {
    FUN_140f4555e(param_2);
    *(undefined1 *)(param_2 + 0x468) = 0;
  }
  return;
}



// FUNCTION 148677d64 FUN_148677d64 body=466 status=ok
// SIG undefined FUN_148677d64(void)

longlong FUN_148677d64(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)(param_2 + 0x14);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  uVar8 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  FUN_147f23058(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0x198,param_2 + 0x198);
  FUN_144983130(param_1 + 0x1d0,param_2 + 0x1d0);
  FUN_144983130(param_1 + 0x208,param_2 + 0x208);
  FUN_144983130(param_1 + 0x240,param_2 + 0x240);
  *(undefined2 *)(param_1 + 0x278) = *(undefined2 *)(param_2 + 0x278);
  FUN_144983130(param_1 + 0x280,param_2 + 0x280);
  *(undefined1 *)(param_1 + 0x2c0) = *(undefined1 *)(param_2 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_2 + 0x2b8);
  lVar9 = *(longlong *)(param_2 + 0x2c8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x2c8);
    }
  }
  *(longlong *)(param_1 + 0x2c8) = lVar9;
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_2 + 0x2d0);
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_2 + 0x2d8);
  FUN_144983130(param_1 + 0x2e0,param_2 + 0x2e0);
  FUN_144983130(param_1 + 0x318,param_2 + 0x318);
  *(undefined1 *)(param_1 + 0x350) = *(undefined1 *)(param_2 + 0x350);
  FUN_144983130(param_1 + 0x358,param_2 + 0x358);
  FUN_144983130(param_1 + 0x390,param_2 + 0x390);
  *(undefined2 *)(param_1 + 0x3c8) = *(undefined2 *)(param_2 + 0x3c8);
  FUN_144983130(param_1 + 0x3d0,param_2 + 0x3d0);
  FUN_144983130(param_1 + 0x408,param_2 + 0x408);
  uVar1 = *(undefined8 *)(param_2 + 0x447);
  *(undefined8 *)(param_1 + 0x440) = *(undefined8 *)(param_2 + 0x440);
  *(undefined8 *)(param_1 + 0x447) = uVar1;
  FUN_1457892b8(param_1 + 0x450,param_2 + 0x450);
  return param_1;
}



// FUNCTION 148677f38 FUN_148677f38 body=249 status=ok
// SIG undefined FUN_148677f38(void)

void FUN_148677f38(undefined8 param_1,undefined8 *param_2)

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
  *param_2 = &PTR_FUN_14b0d9600;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  return;
}



// FUNCTION 148678082 FUN_148678082 body=59 status=ok
// SIG undefined FUN_148678082(void)

undefined8 FUN_148678082(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486780ce FUN_1486780ce body=38 status=ok
// SIG undefined FUN_1486780ce(void)

void FUN_1486780ce(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_1411d7298(param_2);
    *(undefined1 *)(param_2 + 0x278) = 0;
  }
  return;
}



// FUNCTION 148678198 FUN_148678198 body=63 status=ok
// SIG undefined FUN_148678198(void)

undefined1 FUN_148678198(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486782c2(param_2,param_3);
    param_3 = param_3 + 0x2f0;
    param_2 = param_2 + 0x2f0;
  }
  return 1;
}



// FUNCTION 148678200 FUN_148678200 body=59 status=ok
// SIG undefined FUN_148678200(void)

undefined8 FUN_148678200(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867824c FUN_14867824c body=40 status=ok
// SIG undefined FUN_14867824c(void)

void FUN_14867824c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2f0) == '\x01') {
    FUN_148678946(param_2);
    *(undefined1 *)(param_2 + 0x2f0) = 0;
  }
  return;
}



// FUNCTION 1486782c2 FUN_1486782c2 body=256 status=ok
// SIG undefined FUN_1486782c2(void)

longlong FUN_1486782c2(longlong param_1,longlong param_2)

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
  FUN_147f23058(param_1 + 0x80,param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  FUN_141689bc8(param_1 + 0x1a0,param_2 + 0x1a0);
  lVar8 = *(longlong *)(param_2 + 600);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 600);
    }
  }
  *(longlong *)(param_1 + 600) = lVar8;
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_2 + 0x260);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x268);
  FUN_144983130(param_1 + 0x270,param_2 + 0x270);
  FUN_144983130(param_1 + 0x2a8,param_2 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_2 + 0x2e0);
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_2 + 0x2e8);
  return param_1;
}



// FUNCTION 1486783c4 FUN_1486783c4 body=38 status=ok
// SIG undefined FUN_1486783c4(void)

undefined8 FUN_1486783c4(undefined8 param_1,int param_2)

{
  FUN_148678946();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486783ea FUN_1486783ea body=55 status=ok
// SIG undefined FUN_1486783ea(void)

void FUN_1486783ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b040 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b040 = FUN_140002ddd(FUN_1464ce10d,uVar1,L"GbxBrainTaskSettings_OnAggro");
  }
  return;
}



// FUNCTION 148678422 FUN_148678422 body=291 status=ok
// SIG undefined FUN_148678422(void)

void FUN_148678422(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x288);
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
  *param_2 = &PTR_FUN_14b0d9a00;
  param_2[0x4d] = 0xbf80000040000000;
  *(undefined1 *)(param_2 + 0x4e) = 0;
  param_2[0x4f] = 0;
  param_2[0x50] = 0;
  return;
}



// FUNCTION 148678546 FUN_148678546 body=273 status=ok
// SIG undefined FUN_148678546(void)

void FUN_148678546(undefined8 param_1,undefined8 *param_2)

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
  *param_2 = &PTR_FUN_14b0d9a00;
  param_2[0x4d] = 0xbf80000040000000;
  *(undefined1 *)(param_2 + 0x4e) = 0;
  param_2[0x4f] = 0;
  param_2[0x50] = 0;
  return;
}



// FUNCTION 1486786a8 FUN_1486786a8 body=59 status=ok
// SIG undefined FUN_1486786a8(void)

undefined8 FUN_1486786a8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486786f4 FUN_1486786f4 body=38 status=ok
// SIG undefined FUN_1486786f4(void)

void FUN_1486786f4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x288) == '\x01') {
    FUN_1411d7298(param_2);
    *(undefined1 *)(param_2 + 0x288) = 0;
  }
  return;
}



// FUNCTION 148678768 FUN_148678768 body=38 status=ok
// SIG undefined FUN_148678768(void)

undefined8 FUN_148678768(undefined8 param_1,int param_2)

{
  FUN_1411d7298();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14867878e FUN_14867878e body=55 status=ok
// SIG undefined FUN_14867878e(void)

void FUN_14867878e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b058 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b058 = FUN_140002ddd(FUN_1464ce1a3,uVar1,L"GbxBrainTask_OnAggro");
  }
  return;
}



// FUNCTION 14867881a FUN_14867881a body=63 status=ok
// SIG undefined FUN_14867881a(void)

undefined1 FUN_14867881a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486782c2(param_2,param_3);
    param_3 = param_3 + 0x2f0;
    param_2 = param_2 + 0x2f0;
  }
  return 1;
}



// FUNCTION 148678882 FUN_148678882 body=59 status=ok
// SIG undefined FUN_148678882(void)

undefined8 FUN_148678882(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486788ce FUN_1486788ce body=40 status=ok
// SIG undefined FUN_1486788ce(void)

void FUN_1486788ce(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2f0) == '\x01') {
    FUN_148678946(param_2);
    *(undefined1 *)(param_2 + 0x2f0) = 0;
  }
  return;
}



// FUNCTION 148678946 FUN_148678946 body=132 status=ok
// SIG undefined FUN_148678946(void)

void FUN_148678946(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0db8d0;
  FUN_144a2da94(param_1 + 0x55);
  FUN_144a2da94(param_1 + 0x4e);
  FUN_144a2da94(param_1 + 0x44);
  FUN_144a2da94(param_1 + 0x3c);
  FUN_144a2da94(param_1 + 0x35);
  *param_1 = &PTR_FUN_14ac52c60;
  FUN_14076bc70(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1486789fa FUN_1486789fa body=63 status=ok
// SIG undefined FUN_1486789fa(void)

undefined1 FUN_1486789fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148678b22(param_2,param_3);
    param_3 = param_3 + 0x430;
    param_2 = param_2 + 0x430;
  }
  return 1;
}



// FUNCTION 148678a62 FUN_148678a62 body=59 status=ok
// SIG undefined FUN_148678a62(void)

undefined8 FUN_148678a62(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148678aae FUN_148678aae body=38 status=ok
// SIG undefined FUN_148678aae(void)

void FUN_148678aae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x430) == '\x01') {
    FUN_140fb9a60(param_2);
    *(undefined1 *)(param_2 + 0x430) = 0;
  }
  return;
}



// FUNCTION 148678b22 FUN_148678b22 body=157 status=ok
// SIG undefined FUN_148678b22(void)

longlong FUN_148678b22(longlong param_1,longlong param_2)

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
  FUN_147f23058(param_1 + 0x80,param_2 + 0x80);
  FUN_141490570(param_1 + 0x198,param_2 + 0x198);
  *(undefined2 *)(param_1 + 1000) = *(undefined2 *)(param_2 + 1000);
  FUN_144983130(param_1 + 0x3f0,param_2 + 0x3f0);
  *(undefined8 *)(param_1 + 0x428) = *(undefined8 *)(param_2 + 0x428);
  return param_1;
}



// FUNCTION 148678bf0 FUN_148678bf0 body=63 status=ok
// SIG undefined FUN_148678bf0(void)

undefined1 FUN_148678bf0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148678d18(param_2,param_3);
    param_3 = param_3 + 0x7e8;
    param_2 = param_2 + 0x7e8;
  }
  return 1;
}



// FUNCTION 148678c58 FUN_148678c58 body=59 status=ok
// SIG undefined FUN_148678c58(void)

undefined8 FUN_148678c58(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148678ca4 FUN_148678ca4 body=38 status=ok
// SIG undefined FUN_148678ca4(void)

void FUN_148678ca4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x7e8) == '\x01') {
    FUN_141448d04(param_2);
    *(undefined1 *)(param_2 + 0x7e8) = 0;
  }
  return;
}



// FUNCTION 148678d18 FUN_148678d18 body=274 status=ok
// SIG undefined FUN_148678d18(void)

longlong FUN_148678d18(longlong param_1,longlong param_2)

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
  FUN_147f23058(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0x198,param_2 + 0x198);
  FUN_144983130(param_1 + 0x1d0,param_2 + 0x1d0);
  FUN_144983130(param_1 + 0x208,param_2 + 0x208);
  FUN_144983130(param_1 + 0x240,param_2 + 0x240);
  FUN_144983130(param_1 + 0x278,param_2 + 0x278);
  *(undefined2 *)(param_1 + 0x2b0) = *(undefined2 *)(param_2 + 0x2b0);
  *(undefined1 *)(param_1 + 0x2b2) = *(undefined1 *)(param_2 + 0x2b2);
  FUN_144983130(param_1 + 0x2b8,param_2 + 0x2b8);
  *(undefined2 *)(param_1 + 0x2f0) = *(undefined2 *)(param_2 + 0x2f0);
  FUN_14054d68c(param_1 + 0x2f8,param_2 + 0x2f8);
  FUN_14054d68c(param_1 + 0x570,param_2 + 0x570);
  return param_1;
}



// FUNCTION 148678e80 FUN_148678e80 body=63 status=ok
// SIG undefined FUN_148678e80(void)

undefined1 FUN_148678e80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148678faa(param_2,param_3);
    param_3 = param_3 + 0x418;
    param_2 = param_2 + 0x418;
  }
  return 1;
}



// FUNCTION 148678ee8 FUN_148678ee8 body=59 status=ok
// SIG undefined FUN_148678ee8(void)

undefined8 FUN_148678ee8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148678f34 FUN_148678f34 body=40 status=ok
// SIG undefined FUN_148678f34(void)

void FUN_148678f34(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x418) == '\x01') {
    FUN_14867902a(param_2);
    *(undefined1 *)(param_2 + 0x418) = 0;
  }
  return;
}



// FUNCTION 148678faa FUN_148678faa body=126 status=ok
// SIG undefined FUN_148678faa(void)

longlong FUN_148678faa(longlong param_1,longlong param_2)

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
  FUN_147f23058(param_1 + 0x80,param_2 + 0x80);
  FUN_14054d68c(param_1 + 0x198,param_2 + 0x198);
  *(undefined2 *)(param_1 + 0x410) = *(undefined2 *)(param_2 + 0x410);
  return param_1;
}



// FUNCTION 14867902a FUN_14867902a body=95 status=ok
// SIG undefined FUN_14867902a(void)

void FUN_14867902a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0db9f0;
  param_1[0x33] = 0;
  FUN_14076ba36(param_1 + 0x34);
  *param_1 = &PTR_FUN_14ac52c60;
  FUN_14076bc70(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 14867908a FUN_14867908a body=38 status=ok
// SIG undefined FUN_14867908a(void)

undefined8 FUN_14867908a(undefined8 param_1,int param_2)

{
  FUN_14867902a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486790b0 FUN_1486790b0 body=55 status=ok
// SIG undefined FUN_1486790b0(void)

void FUN_1486790b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b128 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b128 = FUN_140002ddd(FUN_1464ce45b,uVar1,L"GbxBrainTaskSettings_Perch");
  }
  return;
}



// FUNCTION 148679118 FUN_148679118 body=63 status=ok
// SIG undefined FUN_148679118(void)

undefined1 FUN_148679118(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148679240(param_2,param_3);
    param_3 = param_3 + 0x770;
    param_2 = param_2 + 0x770;
  }
  return 1;
}



// FUNCTION 148679180 FUN_148679180 body=59 status=ok
// SIG undefined FUN_148679180(void)

undefined8 FUN_148679180(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486791cc FUN_1486791cc body=38 status=ok
// SIG undefined FUN_1486791cc(void)

void FUN_1486791cc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x770) == '\x01') {
    FUN_140fea076(param_2);
    *(undefined1 *)(param_2 + 0x770) = 0;
  }
  return;
}



// FUNCTION 148679240 FUN_148679240 body=528 status=ok
// SIG undefined FUN_148679240(void)

longlong FUN_148679240(longlong param_1,longlong param_2)

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
  FUN_147f23058(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0x198,param_2 + 0x198);
  FUN_14054d68c(param_1 + 0x1d0,param_2 + 0x1d0);
  *(undefined2 *)(param_1 + 0x448) = *(undefined2 *)(param_2 + 0x448);
  lVar8 = *(longlong *)(param_2 + 0x450);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x450);
    }
  }
  *(longlong *)(param_1 + 0x450) = lVar8;
  *(undefined8 *)(param_1 + 0x458) = *(undefined8 *)(param_2 + 0x458);
  *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_2 + 0x460);
  FUN_144983130(param_1 + 0x468,param_2 + 0x468);
  FUN_144983130(param_1 + 0x4a0,param_2 + 0x4a0);
  *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_2 + 0x4d8);
  *(undefined1 *)(param_1 + 0x4dc) = *(undefined1 *)(param_2 + 0x4dc);
  FUN_144983130(param_1 + 0x4e0,param_2 + 0x4e0);
  FUN_144983130(param_1 + 0x518,param_2 + 0x518);
  *(undefined1 *)(param_1 + 0x550) = *(undefined1 *)(param_2 + 0x550);
  FUN_144983130(param_1 + 0x558,param_2 + 0x558);
  *(undefined2 *)(param_1 + 0x590) = *(undefined2 *)(param_2 + 0x590);
  *(undefined1 *)(param_1 + 0x592) = *(undefined1 *)(param_2 + 0x592);
  FUN_143c4a622(param_1 + 0x598,param_2 + 0x598);
  *(undefined1 *)(param_1 + 0x690) = *(undefined1 *)(param_2 + 0x690);
  FUN_1411157dc(param_1 + 0x698,param_2 + 0x698);
  *(undefined8 *)(param_1 + 0x6a8) = *(undefined8 *)(param_2 + 0x6a8);
  *(undefined1 *)(param_1 + 0x6b0) = *(undefined1 *)(param_2 + 0x6b0);
  FUN_144983130(param_1 + 0x6b8,param_2 + 0x6b8);
  *(undefined1 *)(param_1 + 0x6f0) = *(undefined1 *)(param_2 + 0x6f0);
  FUN_144983130(param_1 + 0x6f8,param_2 + 0x6f8);
  FUN_144983130(param_1 + 0x730,param_2 + 0x730);
  *(undefined2 *)(param_1 + 0x768) = *(undefined2 *)(param_2 + 0x768);
  *(undefined1 *)(param_1 + 0x76a) = *(undefined1 *)(param_2 + 0x76a);
  return param_1;
}



// FUNCTION 148679482 FUN_148679482 body=63 status=ok
// SIG undefined FUN_148679482(void)

undefined1 FUN_148679482(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486795aa(param_2,param_3);
    param_3 = param_3 + 0x228;
    param_2 = param_2 + 0x228;
  }
  return 1;
}



// FUNCTION 1486794ea FUN_1486794ea body=59 status=ok
// SIG undefined FUN_1486794ea(void)

undefined8 FUN_1486794ea(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148679536 FUN_148679536 body=38 status=ok
// SIG undefined FUN_148679536(void)

void FUN_148679536(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_140eaad3c(param_2);
    *(undefined1 *)(param_2 + 0x228) = 0;
  }
  return;
}



// FUNCTION 1486795aa FUN_1486795aa body=211 status=ok
// SIG undefined FUN_1486795aa(void)

longlong FUN_1486795aa(longlong param_1,longlong param_2)

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
  FUN_147f23058(param_1 + 0x80,param_2 + 0x80);
  lVar8 = *(longlong *)(param_2 + 0x198);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x198);
    }
  }
  *(longlong *)(param_1 + 0x198) = lVar8;
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
  FUN_144983130(param_1 + 0x1b0,param_2 + 0x1b0);
  FUN_144983130(param_1 + 0x1e8,param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 0x220);
  return param_1;
}



// FUNCTION 1486796c0 FUN_1486796c0 body=89 status=ok
// SIG undefined FUN_1486796c0(void)

undefined8 FUN_1486796c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_141289ada(param_2 + -0x20,param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_148679834(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148679742 FUN_148679742 body=59 status=ok
// SIG undefined FUN_148679742(void)

undefined8 FUN_148679742(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148679788 FUN_148679788 body=32 status=ok
// SIG undefined FUN_148679788(void)

void FUN_148679788(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1486797ec(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1486797ec FUN_1486797ec body=71 status=ok
// SIG undefined FUN_1486797ec(void)

void FUN_1486797ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0dd3c0;
  FUN_140f0eac8(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148679834 FUN_148679834 body=93 status=ok
// SIG undefined FUN_148679834(void)

undefined8 * FUN_148679834(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140f0eac8(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148679892(param_1,iVar1);
      FUN_148679905(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148679892 FUN_148679892 body=115 status=ok
// SIG undefined FUN_148679892(void)

void FUN_148679892(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148679905 FUN_148679905 body=52 status=ok
// SIG undefined FUN_148679905(void)

void FUN_148679905(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14867993a FUN_14867993a body=28 status=ok
// SIG undefined FUN_14867993a(void)

undefined8 FUN_14867993a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148679a1c FUN_148679a1c body=59 status=ok
// SIG undefined FUN_148679a1c(void)

undefined8 FUN_148679a1c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148679ad4 FUN_148679ad4 body=29 status=ok
// SIG undefined FUN_148679ad4(void)

undefined8 FUN_148679ad4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148679af2 FUN_148679af2 body=55 status=ok
// SIG undefined FUN_148679af2(void)

void FUN_148679af2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b1a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b1a0 = FUN_140002ddd(FUN_1464ce676,uVar1,L"GbxCameraModeTransition");
  }
  return;
}



// FUNCTION 148679b88 FUN_148679b88 body=75 status=ok
// SIG undefined FUN_148679b88(void)

undefined1 FUN_148679b88(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148679bfc FUN_148679bfc body=59 status=ok
// SIG undefined FUN_148679bfc(void)

undefined8 FUN_148679bfc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148679c42 FUN_148679c42 body=34 status=ok
// SIG undefined FUN_148679c42(void)

void FUN_148679c42(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_145812dc0(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148679cb4 FUN_148679cb4 body=57 status=ok
// SIG undefined FUN_148679cb4(void)

void FUN_148679cb4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b1b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b1b8 = FUN_140002ddd(FUN_1464ce6d8,uVar1,L"CameraTransitionDef");
  }
  return;
}



// FUNCTION 148679cee FUN_148679cee body=104 status=ok
// SIG undefined FUN_148679cee(void)

undefined8 FUN_148679cee(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_148802d52(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148679d58 FUN_148679d58 body=28 status=ok
// SIG undefined FUN_148679d58(void)

undefined8 FUN_148679d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148679da4 FUN_148679da4 body=119 status=ok
// SIG undefined FUN_148679da4(void)

undefined1 FUN_148679da4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined1 *)(param_2 + 0x90 + lVar2) = *(undefined1 *)(param_3 + 0x90 + lVar2);
      lVar2 = lVar2 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148679e44 FUN_148679e44 body=59 status=ok
// SIG undefined FUN_148679e44(void)

undefined8 FUN_148679e44(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148679e90 FUN_148679e90 body=38 status=ok
// SIG undefined FUN_148679e90(void)

void FUN_148679e90(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_1458f55d6(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 148679f62 FUN_148679f62 body=59 status=ok
// SIG undefined FUN_148679f62(void)

undefined8 FUN_148679f62(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867a002 FUN_14867a002 body=29 status=ok
// SIG undefined FUN_14867a002(void)

undefined8 FUN_14867a002(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14867a020 FUN_14867a020 body=55 status=ok
// SIG undefined FUN_14867a020(void)

void FUN_14867a020(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b260 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b260 = FUN_140002ddd(FUN_1464ce8e3,uVar1,L"GbxCapitalGameData");
  }
  return;
}



// FUNCTION 14867a058 FUN_14867a058 body=72 status=ok
// SIG undefined FUN_14867a058(void)

void FUN_14867a058(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b0dd450;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  FUN_144a5dc74(param_2 + 6);
  *(undefined2 *)(param_2 + 8) = 0;
  return;
}



// FUNCTION 14867a0a0 FUN_14867a0a0 body=60 status=ok
// SIG undefined FUN_14867a0a0(void)

void FUN_14867a0a0(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b0dd450;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  FUN_144a5dc74(param_2 + 6);
  *(undefined2 *)(param_2 + 8) = 0;
  return;
}



// FUNCTION 14867a100 FUN_14867a100 body=54 status=ok
// SIG undefined FUN_14867a100(void)

undefined1 FUN_14867a100(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14867a274(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 14867a15e FUN_14867a15e body=59 status=ok
// SIG undefined FUN_14867a15e(void)

undefined8 FUN_14867a15e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867a1a4 FUN_14867a1a4 body=32 status=ok
// SIG undefined FUN_14867a1a4(void)

void FUN_14867a1a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1411f306c(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14867a216 FUN_14867a216 body=38 status=ok
// SIG undefined FUN_14867a216(void)

undefined8 FUN_14867a216(undefined8 param_1,int param_2)

{
  FUN_1411f306c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14867a23c FUN_14867a23c body=55 status=ok
// SIG undefined FUN_14867a23c(void)

void FUN_14867a23c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b278 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b278 = FUN_140002ddd(FUN_1464ce942,uVar1,L"GbxCapitalDef");
  }
  return;
}



// FUNCTION 14867a274 FUN_14867a274 body=106 status=ok
// SIG undefined FUN_14867a274(void)

longlong FUN_14867a274(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_1401f3db8(param_1 + 0x18,param_2 + 0x18);
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
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_2 + 0x40);
  return param_1;
}



// FUNCTION 14867a2ec FUN_14867a2ec body=83 status=ok
// SIG undefined FUN_14867a2ec(void)

undefined8 * FUN_14867a2ec(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0db260;
  plVar3 = (longlong *)param_1[2];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14867a344 FUN_14867a344 body=42 status=ok
// SIG undefined FUN_14867a344(void)

undefined8 FUN_14867a344(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxFaceFX\\Source\\GbxFaceFX\\Public\\FaceFXOwner.h",0x1d,
                L"Pure virtual not implemented (%s)",L"IFaceFXOwner::GetFaceFXComponent");
  return 0;
}



// FUNCTION 14867a36e FUN_14867a36e body=42 status=ok
// SIG undefined FUN_14867a36e(void)

undefined8 FUN_14867a36e(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxFaceFX\\Source\\GbxFaceFX\\Public\\FaceFXOwner.h",0x20,
                L"Pure virtual not implemented (%s)",L"IFaceFXOwner::GetFaceFXMeshComponent");
  return 0;
}



// FUNCTION 14867a398 FUN_14867a398 body=42 status=ok
// SIG undefined FUN_14867a398(void)

undefined8 FUN_14867a398(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxFaceFX\\Source\\GbxFaceFX\\Public\\FaceFXOwner.h",0x23,
                L"Pure virtual not implemented (%s)",L"IFaceFXOwner::GetFaceFXActor");
  return 0;
}



// FUNCTION 14867a3c8 FUN_14867a3c8 body=29 status=ok
// SIG undefined FUN_14867a3c8(void)

undefined8 FUN_14867a3c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14867a484 FUN_14867a484 body=75 status=ok
// SIG undefined FUN_14867a484(void)

void FUN_14867a484(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1418662bc(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867a55c FUN_14867a55c body=219 status=ok
// SIG undefined FUN_14867a55c(void)

void FUN_14867a55c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
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
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1487c1f2e(local_18,local_19);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867a638 FUN_14867a638 body=155 status=ok
// SIG undefined FUN_14867a638(void)

void FUN_14867a638(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_1487c1e92(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867a6da FUN_14867a6da body=155 status=ok
// SIG undefined FUN_14867a6da(void)

void FUN_14867a6da(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1487c1ee0(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867a77c FUN_14867a77c body=155 status=ok
// SIG undefined FUN_14867a77c(void)

void FUN_14867a77c(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1487c1e44(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867a846 FUN_14867a846 body=45 status=ok
// SIG undefined FUN_14867a846(void)

longlong FUN_14867a846(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14867a874 FUN_14867a874 body=45 status=ok
// SIG undefined FUN_14867a874(void)

longlong FUN_14867a874(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14867a8a2 FUN_14867a8a2 body=45 status=ok
// SIG undefined FUN_14867a8a2(void)

longlong FUN_14867a8a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14867a8e4 FUN_14867a8e4 body=37 status=ok
// SIG undefined FUN_14867a8e4(void)

void FUN_14867a8e4(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xc00);
  FUN_14157fc58(param_2);
  return;
}



// FUNCTION 14867a936 FUN_14867a936 body=63 status=ok
// SIG undefined FUN_14867a936(void)

undefined1 FUN_14867a936(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14114f8a8(param_2,param_3);
    param_3 = param_3 + 0xc00;
    param_2 = param_2 + 0xc00;
  }
  return 1;
}



// FUNCTION 14867a99e FUN_14867a99e body=59 status=ok
// SIG undefined FUN_14867a99e(void)

undefined8 FUN_14867a99e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867a9ea FUN_14867a9ea body=38 status=ok
// SIG undefined FUN_14867a9ea(void)

void FUN_14867a9ea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc00) == '\x01') {
    FUN_14152d9c8(param_2);
    *(undefined1 *)(param_2 + 0xc00) = 0;
  }
  return;
}



// FUNCTION 14867aab8 FUN_14867aab8 body=63 status=ok
// SIG undefined FUN_14867aab8(void)

undefined1 FUN_14867aab8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14867abe0(param_2,param_3);
    param_3 = param_3 + 0x278;
    param_2 = param_2 + 0x278;
  }
  return 1;
}



// FUNCTION 14867ab20 FUN_14867ab20 body=59 status=ok
// SIG undefined FUN_14867ab20(void)

undefined8 FUN_14867ab20(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867ab6c FUN_14867ab6c body=38 status=ok
// SIG undefined FUN_14867ab6c(void)

void FUN_14867ab6c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_140d2194c(param_2);
    *(undefined1 *)(param_2 + 0x278) = 0;
  }
  return;
}



// FUNCTION 14867abe0 FUN_14867abe0 body=315 status=ok
// SIG undefined FUN_14867abe0(void)

longlong FUN_14867abe0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong lVar9;
  
  FUN_14862f10e();
  *(undefined2 *)(param_1 + 0x228) = *(undefined2 *)(param_2 + 0x228);
  lVar9 = *(longlong *)(param_2 + 0x230);
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_14689c22e();
      lVar9 = *(longlong *)(param_2 + 0x230);
    }
  }
  bVar8 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x230) = lVar9;
  lVar9 = *(longlong *)(param_2 + 0x238);
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_14689c22e();
      lVar9 = *(longlong *)(param_2 + 0x238);
      bVar8 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x238) = lVar9;
  lVar9 = *(longlong *)(param_2 + 0x240);
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_14689c22e();
      lVar9 = *(longlong *)(param_2 + 0x240);
      bVar8 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x240) = lVar9;
  uVar1 = *(undefined4 *)(param_2 + 0x248);
  uVar2 = *(undefined4 *)(param_2 + 0x24c);
  uVar3 = *(undefined4 *)(param_2 + 0x250);
  uVar4 = *(undefined4 *)(param_2 + 0x254);
  uVar5 = *(undefined4 *)(param_2 + 600);
  uVar6 = *(undefined4 *)(param_2 + 0x25c);
  uVar7 = *(undefined4 *)(param_2 + 0x260);
  *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_2 + 0x254);
  *(undefined4 *)(param_1 + 600) = uVar5;
  *(undefined4 *)(param_1 + 0x25c) = uVar6;
  *(undefined4 *)(param_1 + 0x260) = uVar7;
  *(undefined4 *)(param_1 + 0x248) = uVar1;
  *(undefined4 *)(param_1 + 0x24c) = uVar2;
  *(undefined4 *)(param_1 + 0x250) = uVar3;
  *(undefined4 *)(param_1 + 0x254) = uVar4;
  lVar9 = *(longlong *)(param_2 + 0x268);
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_14689c22e();
      lVar9 = *(longlong *)(param_2 + 0x268);
      bVar8 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x268) = lVar9;
  lVar9 = *(longlong *)(param_2 + 0x270);
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_14689c22e();
      lVar9 = *(longlong *)(param_2 + 0x270);
    }
  }
  *(longlong *)(param_1 + 0x270) = lVar9;
  return param_1;
}



// FUNCTION 14867ad90 FUN_14867ad90 body=59 status=ok
// SIG undefined FUN_14867ad90(void)

undefined8 FUN_14867ad90(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867addc FUN_14867addc body=63 status=ok
// SIG undefined FUN_14867addc(void)

void FUN_14867addc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14b0e70a0;
    if (param_2[8] != 0) {
      FUN_140872868(param_2);
    }
    FUN_1403d7c6c(param_2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 14867ae6c FUN_14867ae6c body=66 status=ok
// SIG undefined FUN_14867ae6c(void)

undefined8 * FUN_14867ae6c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0e70a0;
  if (param_1[8] != 0) {
    FUN_140872868(param_1);
  }
  FUN_1403d7c6c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14867aeae FUN_14867aeae body=55 status=ok
// SIG undefined FUN_14867aeae(void)

void FUN_14867aeae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b518 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b518 = FUN_140002ddd(FUN_1464cf7cb,uVar1,L"GbxCharacterBodyState");
  }
  return;
}



// FUNCTION 14867aee6 FUN_14867aee6 body=55 status=ok
// SIG undefined FUN_14867aee6(void)

void FUN_14867aee6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b4e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b4e8 = FUN_140002ddd(FUN_1464cf6b6,uVar1,L"GbxCharacterBodySettings");
  }
  return;
}



// FUNCTION 14867af8e FUN_14867af8e body=54 status=ok
// SIG undefined FUN_14867af8e(void)

undefined1 FUN_14867af8e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14867b0a6(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 14867afec FUN_14867afec body=59 status=ok
// SIG undefined FUN_14867afec(void)

undefined8 FUN_14867afec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867b032 FUN_14867b032 body=38 status=ok
// SIG undefined FUN_14867b032(void)

void FUN_14867b032(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14867b0a6 FUN_14867b0a6 body=135 status=ok
// SIG undefined FUN_14867b0a6(void)

undefined1 * FUN_14867b0a6(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  FUN_14867b12e(param_1 + 8,param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0x18);
  if (DAT_14c950c29 == 1) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = *(longlong *)(param_2 + 0x18);
    }
  }
  bVar2 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x18) = lVar3;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  lVar3 = *(longlong *)(param_2 + 0x28);
  if ((bVar2 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = *(longlong *)(param_2 + 0x28);
    }
  }
  *(longlong *)(param_1 + 0x28) = lVar3;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return param_1;
}



// FUNCTION 14867b12e FUN_14867b12e body=79 status=ok
// SIG undefined FUN_14867b12e(void)

undefined8 * FUN_14867b12e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14867b17e(param_1,iVar1);
      FUN_14867b1e0(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14867b17e FUN_14867b17e body=98 status=ok
// SIG undefined FUN_14867b17e(void)

void FUN_14867b17e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14867b1e0 FUN_14867b1e0 body=92 status=ok
// SIG undefined FUN_14867b1e0(void)

void FUN_14867b1e0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3);
      *(longlong *)(param_1 + lVar3) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      *(undefined8 *)(param_1 + 8 + lVar3) = *(undefined8 *)(param_2 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14867b284 FUN_14867b284 body=59 status=ok
// SIG undefined FUN_14867b284(void)

undefined8 FUN_14867b284(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867b326 FUN_14867b326 body=67 status=ok
// SIG undefined FUN_14867b326(void)

void FUN_14867b326(undefined8 param_1,void *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  memset(param_2,0,0x90);
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)((longlong)param_2 + 0x10);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined1 *)((longlong)param_2 + 0x80) = 0;
  return;
}



// FUNCTION 14867b36a FUN_14867b36a body=41 status=ok
// SIG undefined FUN_14867b36a(void)

void FUN_14867b36a(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x10);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x80] = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  return;
}



// FUNCTION 14867b394 FUN_14867b394 body=56 status=ok
// SIG undefined FUN_14867b394(void)

void FUN_14867b394(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x78);
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
                    /* WARNING: Could not recover jumptable at 0x00014867b3c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14867b3e2 FUN_14867b3e2 body=63 status=ok
// SIG undefined FUN_14867b3e2(void)

undefined1 FUN_14867b3e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14867b52a(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 14867b44a FUN_14867b44a body=59 status=ok
// SIG undefined FUN_14867b44a(void)

undefined8 FUN_14867b44a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867b496 FUN_14867b496 body=70 status=ok
// SIG undefined FUN_14867b496(void)

void FUN_14867b496(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x90) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x78);
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
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 14867b52a FUN_14867b52a body=118 status=ok
// SIG undefined FUN_14867b52a(void)

undefined8 * FUN_14867b52a(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = param_2;
  puVar7 = param_1;
  for (lVar5 = 0xe; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar3 = param_2[0xe];
  lVar5 = param_2[0xf];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[0xf];
  param_1[0xe] = uVar3;
  param_1[0xf] = lVar5;
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
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  return param_1;
}



// FUNCTION 14867b5ba FUN_14867b5ba body=33 status=ok
// SIG undefined FUN_14867b5ba(void)

void FUN_14867b5ba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_1449db362(param_2 + 8);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14867b5f2 FUN_14867b5f2 body=75 status=ok
// SIG undefined FUN_14867b5f2(void)

undefined8 FUN_14867b5f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_1403ed422();
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14867b666 FUN_14867b666 body=59 status=ok
// SIG undefined FUN_14867b666(void)

undefined8 FUN_14867b666(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867b6ac FUN_14867b6ac body=43 status=ok
// SIG undefined FUN_14867b6ac(void)

void FUN_14867b6ac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(char *)(param_2 + 0x18) == '\x01') {
      FUN_1449db362(param_2 + 8);
      *(undefined1 *)(param_2 + 0x18) = 0;
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14867b726 FUN_14867b726 body=130 status=ok
// SIG undefined FUN_14867b726(void)

void FUN_14867b726(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867b812 FUN_14867b812 body=35 status=ok
// SIG undefined FUN_14867b812(void)

void FUN_14867b812(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_1449db362(param_2 + 8);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14867b874 FUN_14867b874 body=59 status=ok
// SIG undefined FUN_14867b874(void)

undefined8 FUN_14867b874(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867b8ba FUN_14867b8ba body=43 status=ok
// SIG undefined FUN_14867b8ba(void)

void FUN_14867b8ba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    if (*(char *)(param_2 + 0x18) == '\x01') {
      FUN_1449db362(param_2 + 8);
      *(undefined1 *)(param_2 + 0x18) = 0;
    }
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 14867b9f2 FUN_14867b9f2 body=59 status=ok
// SIG undefined FUN_14867b9f2(void)

undefined8 FUN_14867b9f2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867bb1c FUN_14867bb1c body=59 status=ok
// SIG undefined FUN_14867bb1c(void)

undefined8 FUN_14867bb1c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867bb68 FUN_14867bb68 body=49 status=ok
// SIG undefined FUN_14867bb68(void)

void FUN_14867bb68(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    if (*(char *)(param_2 + 0x20) == '\x01') {
      FUN_1449db362(param_2 + 0x10);
      *(undefined1 *)(param_2 + 0x20) = 0;
    }
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 14867bc3e FUN_14867bc3e body=59 status=ok
// SIG undefined FUN_14867bc3e(void)

undefined8 FUN_14867bc3e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867bc84 FUN_14867bc84 body=43 status=ok
// SIG undefined FUN_14867bc84(void)

void FUN_14867bc84(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(char *)(param_2 + 0x18) == '\x01') {
      FUN_1449db362(param_2 + 8);
      *(undefined1 *)(param_2 + 0x18) = 0;
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14867bd34 FUN_14867bd34 body=63 status=ok
// SIG undefined FUN_14867bd34(void)

undefined1 FUN_14867bd34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14867be74(param_2,param_3);
    param_3 = param_3 + 0x668;
    param_2 = param_2 + 0x668;
  }
  return 1;
}



// FUNCTION 14867bd9c FUN_14867bd9c body=59 status=ok
// SIG undefined FUN_14867bd9c(void)

undefined8 FUN_14867bd9c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867bde8 FUN_14867bde8 body=38 status=ok
// SIG undefined FUN_14867bde8(void)

void FUN_14867bde8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x668) == '\x01') {
    FUN_14096d1ae(param_2);
    *(undefined1 *)(param_2 + 0x668) = 0;
  }
  return;
}



// FUNCTION 14867be74 FUN_14867be74 body=1432 status=ok
// SIG undefined FUN_14867be74(void)

longlong FUN_14867be74(longlong param_1,longlong param_2)

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
  
  FUN_147e2f5aa();
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  uVar1 = *(undefined4 *)(param_2 + 0x134);
  uVar2 = *(undefined4 *)(param_2 + 0x138);
  uVar3 = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = uVar1;
  *(undefined4 *)(param_1 + 0x138) = uVar2;
  *(undefined4 *)(param_1 + 0x13c) = uVar3;
  FUN_144a787a6(param_1 + 0x140,param_2 + 0x140);
  FUN_14867c55e(param_1 + 0x150,param_2 + 0x150);
  if ((*(longlong *)(param_1 + 0x1a0) != *(longlong *)(param_2 + 0x1a0)) ||
     (*(int *)(param_1 + 0x1a8) != *(int *)(param_2 + 0x1a8))) {
    *(longlong *)(param_1 + 0x1a0) = *(longlong *)(param_2 + 0x1a0);
    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
  }
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  FUN_14867c40c(param_1 + 0x1c0,param_2 + 0x1c0);
  *(undefined2 *)(param_1 + 0x1d8) = *(undefined2 *)(param_2 + 0x1d8);
  *(undefined1 *)(param_1 + 0x1da) = *(undefined1 *)(param_2 + 0x1da);
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e0);
  uVar1 = *(undefined4 *)(param_2 + 0x1ec);
  uVar2 = *(undefined4 *)(param_2 + 0x1f0);
  uVar3 = *(undefined4 *)(param_2 + 500);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1ec) = uVar1;
  *(undefined4 *)(param_1 + 0x1f0) = uVar2;
  *(undefined4 *)(param_1 + 500) = uVar3;
  FUN_144a787a6(param_1 + 0x1f8,param_2 + 0x1f8);
  FUN_14862f9ea(param_1 + 0x208,param_2 + 0x208);
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  uVar1 = *(undefined4 *)(param_2 + 0x224);
  uVar2 = *(undefined4 *)(param_2 + 0x228);
  uVar3 = *(undefined4 *)(param_2 + 0x22c);
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x224) = uVar1;
  *(undefined4 *)(param_1 + 0x228) = uVar2;
  *(undefined4 *)(param_1 + 0x22c) = uVar3;
  FUN_144a787a6(param_1 + 0x230,param_2 + 0x230);
  FUN_14862fb42(param_1 + 0x240,param_2 + 0x240);
  FUN_14099a466(param_1 + 0x250,param_2 + 0x250);
  FUN_14054d9c0(param_1 + 0x260,param_2 + 0x260);
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_2 + 0x2b0);
  uVar1 = *(undefined4 *)(param_2 + 700);
  uVar2 = *(undefined4 *)(param_2 + 0x2c0);
  uVar3 = *(undefined4 *)(param_2 + 0x2c4);
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_2 + 0x2b8);
  *(undefined4 *)(param_1 + 700) = uVar1;
  *(undefined4 *)(param_1 + 0x2c0) = uVar2;
  *(undefined4 *)(param_1 + 0x2c4) = uVar3;
  FUN_144a787a6(param_1 + 0x2c8,param_2 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_2 + 0x2d8);
  *(undefined1 *)(param_1 + 0x2e0) = *(undefined1 *)(param_2 + 0x2e0);
  if ((*(longlong *)(param_1 + 0x2e8) != *(longlong *)(param_2 + 0x2e8)) ||
     (*(int *)(param_1 + 0x2f0) != *(int *)(param_2 + 0x2f0))) {
    *(longlong *)(param_1 + 0x2e8) = *(longlong *)(param_2 + 0x2e8);
    *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x2f0);
    *(undefined8 *)(param_1 + 0x2f8) = 0;
  }
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_2 + 0x300);
  uVar1 = *(undefined4 *)(param_2 + 0x30c);
  uVar2 = *(undefined4 *)(param_2 + 0x310);
  uVar3 = *(undefined4 *)(param_2 + 0x314);
  *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_2 + 0x308);
  *(undefined4 *)(param_1 + 0x30c) = uVar1;
  *(undefined4 *)(param_1 + 0x310) = uVar2;
  *(undefined4 *)(param_1 + 0x314) = uVar3;
  FUN_144a787a6(param_1 + 0x318,param_2 + 0x318);
  FUN_148615fc0(param_1 + 0x328,param_2 + 0x328);
  if ((*(longlong *)(param_1 + 0x338) != *(longlong *)(param_2 + 0x338)) ||
     (*(int *)(param_1 + 0x340) != *(int *)(param_2 + 0x340))) {
    *(longlong *)(param_1 + 0x338) = *(longlong *)(param_2 + 0x338);
    *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_2 + 0x340);
    *(undefined8 *)(param_1 + 0x348) = 0;
  }
  *(undefined2 *)(param_1 + 0x350) = *(undefined2 *)(param_2 + 0x350);
  FUN_14867c460(param_1 + 0x358,param_2 + 0x358);
  if ((*(longlong *)(param_1 + 0x368) != *(longlong *)(param_2 + 0x368)) ||
     (*(int *)(param_1 + 0x370) != *(int *)(param_2 + 0x370))) {
    *(longlong *)(param_1 + 0x368) = *(longlong *)(param_2 + 0x368);
    *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_2 + 0x370);
    *(undefined8 *)(param_1 + 0x378) = 0;
  }
  *(undefined1 *)(param_1 + 0x380) = *(undefined1 *)(param_2 + 0x380);
  if ((*(longlong *)(param_1 + 0x388) != *(longlong *)(param_2 + 0x388)) ||
     (*(int *)(param_1 + 0x390) != *(int *)(param_2 + 0x390))) {
    *(longlong *)(param_1 + 0x388) = *(longlong *)(param_2 + 0x388);
    *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_2 + 0x390);
    *(undefined8 *)(param_1 + 0x398) = 0;
  }
  uVar12 = *(undefined8 *)(param_2 + 0x3a8);
  *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(param_2 + 0x3a0);
  *(undefined8 *)(param_1 + 0x3a8) = uVar12;
  if ((*(longlong *)(param_1 + 0x3b0) != *(longlong *)(param_2 + 0x3b0)) ||
     (*(int *)(param_1 + 0x3b8) != *(int *)(param_2 + 0x3b8))) {
    *(longlong *)(param_1 + 0x3b0) = *(longlong *)(param_2 + 0x3b0);
    *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(param_2 + 0x3b8);
    *(undefined8 *)(param_1 + 0x3c0) = 0;
  }
  *(undefined1 *)(param_1 + 0x3d0) = *(undefined1 *)(param_2 + 0x3d0);
  *(undefined8 *)(param_1 + 0x3d8) = *(undefined8 *)(param_2 + 0x3d8);
  uVar1 = *(undefined4 *)(param_2 + 0x3e4);
  uVar2 = *(undefined4 *)(param_2 + 1000);
  uVar3 = *(undefined4 *)(param_2 + 0x3ec);
  *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_2 + 0x3e0);
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 1000) = uVar2;
  *(undefined4 *)(param_1 + 0x3ec) = uVar3;
  FUN_144a787a6(param_1 + 0x3f0,param_2 + 0x3f0);
  FUN_147f22736(param_1 + 0x400,param_2 + 0x400);
  *(undefined1 *)(param_1 + 0x450) = *(undefined1 *)(param_2 + 0x450);
  FUN_144983130(param_1 + 0x458,param_2 + 0x458);
  *(undefined1 *)(param_1 + 0x490) = *(undefined1 *)(param_2 + 0x490);
  *(undefined8 *)(param_1 + 0x498) = *(undefined8 *)(param_2 + 0x498);
  uVar1 = *(undefined4 *)(param_2 + 0x4a4);
  uVar2 = *(undefined4 *)(param_2 + 0x4a8);
  uVar3 = *(undefined4 *)(param_2 + 0x4ac);
  *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_2 + 0x4a0);
  *(undefined4 *)(param_1 + 0x4a4) = uVar1;
  *(undefined4 *)(param_1 + 0x4a8) = uVar2;
  *(undefined4 *)(param_1 + 0x4ac) = uVar3;
  FUN_144a787a6(param_1 + 0x4b0,param_2 + 0x4b0);
  *(undefined1 *)(param_1 + 0x4c0) = *(undefined1 *)(param_2 + 0x4c0);
  *(undefined8 *)(param_1 + 0x4c8) = *(undefined8 *)(param_2 + 0x4c8);
  uVar1 = *(undefined4 *)(param_2 + 0x4d4);
  uVar2 = *(undefined4 *)(param_2 + 0x4d8);
  uVar3 = *(undefined4 *)(param_2 + 0x4dc);
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_2 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d4) = uVar1;
  *(undefined4 *)(param_1 + 0x4d8) = uVar2;
  *(undefined4 *)(param_1 + 0x4dc) = uVar3;
  FUN_144a787a6(param_1 + 0x4e0,param_2 + 0x4e0);
  if ((*(longlong *)(param_1 + 0x4f0) != *(longlong *)(param_2 + 0x4f0)) ||
     (*(int *)(param_1 + 0x4f8) != *(int *)(param_2 + 0x4f8))) {
    *(longlong *)(param_1 + 0x4f0) = *(longlong *)(param_2 + 0x4f0);
    *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_2 + 0x4f8);
    *(undefined8 *)(param_1 + 0x500) = 0;
  }
  *(undefined2 *)(param_1 + 0x538) = *(undefined2 *)(param_2 + 0x538);
  uVar1 = *(undefined4 *)(param_2 + 0x508);
  uVar2 = *(undefined4 *)(param_2 + 0x50c);
  uVar3 = *(undefined4 *)(param_2 + 0x510);
  uVar4 = *(undefined4 *)(param_2 + 0x514);
  uVar5 = *(undefined4 *)(param_2 + 0x518);
  uVar6 = *(undefined4 *)(param_2 + 0x51c);
  uVar7 = *(undefined4 *)(param_2 + 0x520);
  uVar8 = *(undefined4 *)(param_2 + 0x524);
  uVar9 = *(undefined4 *)(param_2 + 0x52c);
  uVar10 = *(undefined4 *)(param_2 + 0x530);
  uVar11 = *(undefined4 *)(param_2 + 0x534);
  *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_2 + 0x528);
  *(undefined4 *)(param_1 + 0x52c) = uVar9;
  *(undefined4 *)(param_1 + 0x530) = uVar10;
  *(undefined4 *)(param_1 + 0x534) = uVar11;
  *(undefined4 *)(param_1 + 0x518) = uVar5;
  *(undefined4 *)(param_1 + 0x51c) = uVar6;
  *(undefined4 *)(param_1 + 0x520) = uVar7;
  *(undefined4 *)(param_1 + 0x524) = uVar8;
  *(undefined4 *)(param_1 + 0x508) = uVar1;
  *(undefined4 *)(param_1 + 0x50c) = uVar2;
  *(undefined4 *)(param_1 + 0x510) = uVar3;
  *(undefined4 *)(param_1 + 0x514) = uVar4;
  FUN_14867c4ba(param_1 + 0x540,param_2 + 0x540);
  FUN_14867c50e(param_1 + 0x558,param_2 + 0x558);
  FUN_141414bf6(param_1 + 0x568,param_2 + 0x568);
  *(undefined2 *)(param_1 + 0x580) = *(undefined2 *)(param_2 + 0x580);
  *(undefined1 *)(param_1 + 0x582) = *(undefined1 *)(param_2 + 0x582);
  *(undefined1 *)(param_1 + 0x590) = *(undefined1 *)(param_2 + 0x590);
  FUN_1418444fa(param_1 + 0x598,param_2 + 0x598);
  FUN_148621b46(param_1 + 0x5b0,param_2 + 0x5b0);
  FUN_1457d161e(param_1 + 0x5c0,param_2 + 0x5c0);
  FUN_141471d82(param_1 + 0x5d0,param_2 + 0x5d0);
  FUN_14867c804(param_1 + 0x5e8,param_2 + 0x5e8);
  *(undefined8 *)(param_1 + 0x638) = *(undefined8 *)(param_2 + 0x638);
  uVar1 = *(undefined4 *)(param_2 + 0x644);
  uVar2 = *(undefined4 *)(param_2 + 0x648);
  uVar3 = *(undefined4 *)(param_2 + 0x64c);
  *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(param_2 + 0x640);
  *(undefined4 *)(param_1 + 0x644) = uVar1;
  *(undefined4 *)(param_1 + 0x648) = uVar2;
  *(undefined4 *)(param_1 + 0x64c) = uVar3;
  FUN_144a787a6(param_1 + 0x650,param_2 + 0x650);
  *(undefined1 *)(param_1 + 0x660) = *(undefined1 *)(param_2 + 0x660);
  return param_1;
}



// FUNCTION 14867c40c FUN_14867c40c body=84 status=ok
// SIG undefined FUN_14867c40c(void)

longlong * FUN_14867c40c(longlong *param_1,longlong *param_2)

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



// FUNCTION 14867c460 FUN_14867c460 body=89 status=ok
// SIG undefined FUN_14867c460(void)

undefined8 * FUN_14867c460(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14867c6f0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 14867c4ba FUN_14867c4ba body=84 status=ok
// SIG undefined FUN_14867c4ba(void)

longlong * FUN_14867c4ba(longlong *param_1,longlong *param_2)

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



// FUNCTION 14867c50e FUN_14867c50e body=79 status=ok
// SIG undefined FUN_14867c50e(void)

undefined8 * FUN_14867c50e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14867c764(param_1,iVar1);
      FUN_14867c7c6(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14867c55e FUN_14867c55e body=122 status=ok
// SIG undefined FUN_14867c55e(void)

longlong FUN_14867c55e(longlong param_1,longlong param_2)

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
    FUN_14867c5d8(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14867c5d8 FUN_14867c5d8 body=279 status=ok
// SIG undefined FUN_14867c5d8(void)

longlong * FUN_14867c5d8(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1403c42da(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_1457f50c2(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar3 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          FUN_1402c8234(lVar5 + lVar3 + 8,lVar2 + 8 + lVar5);
          *(undefined8 *)(lVar3 + 0x1e8 + lVar5) = *(undefined8 *)(lVar2 + 0x1e8 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x1f0;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 14867c6f0 FUN_14867c6f0 body=115 status=ok
// SIG undefined FUN_14867c6f0(void)

void FUN_14867c6f0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14867c764 FUN_14867c764 body=98 status=ok
// SIG undefined FUN_14867c764(void)

void FUN_14867c764(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14867c7c6 FUN_14867c7c6 body=62 status=ok
// SIG undefined FUN_14867c7c6(void)

void FUN_14867c7c6(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14184d02c(param_1,param_2);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 14867c804 FUN_14867c804 body=122 status=ok
// SIG undefined FUN_14867c804(void)

longlong FUN_14867c804(longlong param_1,longlong param_2)

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
    FUN_14867c87e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14867c87e FUN_14867c87e body=257 status=ok
// SIG undefined FUN_14867c87e(void)

longlong * FUN_14867c87e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14096d592(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar3 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          FUN_14107d9f8(lVar5 + lVar3 + 8,lVar2 + 8 + lVar5);
          *(undefined8 *)(lVar3 + 0x20 + lVar5) = *(undefined8 *)(lVar2 + 0x20 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x28;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 14867c980 FUN_14867c980 body=38 status=ok
// SIG undefined FUN_14867c980(void)

undefined8 FUN_14867c980(undefined8 param_1,int param_2)

{
  FUN_14096d1ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14867c9a6 FUN_14867c9a6 body=55 status=ok
// SIG undefined FUN_14867c9a6(void)

void FUN_14867c9a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b668 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b668 = FUN_140002ddd(FUN_1464cfd9d,uVar1,L"GbxCharacterDef");
  }
  return;
}



// FUNCTION 14867ca80 FUN_14867ca80 body=59 status=ok
// SIG undefined FUN_14867ca80(void)

undefined8 FUN_14867ca80(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867cb42 FUN_14867cb42 body=38 status=ok
// SIG undefined FUN_14867cb42(void)

undefined8 FUN_14867cb42(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined4 *)(param_3 + lVar1);
      puVar4 = (undefined4 *)(param_2 + lVar1);
      for (lVar2 = 0x16; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14867cb90 FUN_14867cb90 body=59 status=ok
// SIG undefined FUN_14867cb90(void)

undefined8 FUN_14867cb90(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867ccaa FUN_14867ccaa body=59 status=ok
// SIG undefined FUN_14867ccaa(void)

undefined8 FUN_14867ccaa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867ce2c FUN_14867ce2c body=39 status=ok
// SIG undefined FUN_14867ce2c(void)

undefined8 FUN_14867ce2c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14867ce7c FUN_14867ce7c body=59 status=ok
// SIG undefined FUN_14867ce7c(void)

undefined8 FUN_14867ce7c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867cf46 FUN_14867cf46 body=68 status=ok
// SIG undefined FUN_14867cf46(void)

undefined8 FUN_14867cf46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x158);
      lVar1 = lVar1 + 0x158;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14867cfb2 FUN_14867cfb2 body=59 status=ok
// SIG undefined FUN_14867cfb2(void)

undefined8 FUN_14867cfb2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867d060 FUN_14867d060 body=29 status=ok
// SIG undefined FUN_14867d060(void)

void FUN_14867d060(undefined8 param_1,longlong param_2)

{
  FUN_140e6f666(param_2);
  *(undefined1 *)(param_2 + 0x158) = 0;
  return;
}



// FUNCTION 14867d07e FUN_14867d07e body=29 status=ok
// SIG undefined FUN_14867d07e(void)

void FUN_14867d07e(undefined8 param_1,longlong param_2)

{
  FUN_140e6f666(param_2);
  *(undefined1 *)(param_2 + 0x158) = 0;
  return;
}



// FUNCTION 14867d0b4 FUN_14867d0b4 body=68 status=ok
// SIG undefined FUN_14867d0b4(void)

undefined8 FUN_14867d0b4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x160);
      lVar1 = lVar1 + 0x160;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14867d120 FUN_14867d120 body=59 status=ok
// SIG undefined FUN_14867d120(void)

undefined8 FUN_14867d120(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867d1f6 FUN_14867d1f6 body=68 status=ok
// SIG undefined FUN_14867d1f6(void)

undefined8 FUN_14867d1f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x3d0);
      lVar1 = lVar1 + 0x3d0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14867d262 FUN_14867d262 body=59 status=ok
// SIG undefined FUN_14867d262(void)

undefined8 FUN_14867d262(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867d35c FUN_14867d35c body=59 status=ok
// SIG undefined FUN_14867d35c(void)

undefined8 FUN_14867d35c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867d462 FUN_14867d462 body=121 status=ok
// SIG undefined FUN_14867d462(void)

undefined1 FUN_14867d462(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (param_4 != 0) {
    lVar12 = 0;
    bVar10 = DAT_14c950c29;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar12);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x10 + lVar12);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x10 + lVar12);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + lVar12);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      lVar11 = *(longlong *)(param_3 + 0x20 + lVar12);
      if ((bVar10 & 1) != 0) {
        if (lVar11 == 0) {
          lVar11 = 0;
        }
        else {
          FUN_14689c22e();
          lVar11 = *(longlong *)(param_3 + 0x20 + lVar12);
          bVar10 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar12 + 0x20) = lVar11;
      lVar12 = lVar12 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14867d504 FUN_14867d504 body=59 status=ok
// SIG undefined FUN_14867d504(void)

undefined8 FUN_14867d504(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867d606 FUN_14867d606 body=131 status=ok
// SIG undefined FUN_14867d606(void)

undefined1 FUN_14867d606(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (param_4 != 0) {
    lVar12 = 0;
    bVar10 = DAT_14c950c29;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar12);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x10 + lVar12);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x10 + lVar12);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + lVar12);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      lVar11 = *(longlong *)(param_3 + 0x20 + lVar12);
      if ((bVar10 & 1) != 0) {
        if (lVar11 == 0) {
          lVar11 = 0;
        }
        else {
          FUN_14689c22e();
          lVar11 = *(longlong *)(param_3 + 0x20 + lVar12);
          bVar10 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar12 + 0x20) = lVar11;
      *(undefined8 *)(param_2 + lVar12 + 0x28) = *(undefined8 *)(param_3 + 0x28 + lVar12);
      lVar12 = lVar12 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14867d6b2 FUN_14867d6b2 body=59 status=ok
// SIG undefined FUN_14867d6b2(void)

undefined8 FUN_14867d6b2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867d774 FUN_14867d774 body=59 status=ok
// SIG undefined FUN_14867d774(void)

void FUN_14867d774(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x90);
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
                    /* WARNING: Could not recover jumptable at 0x00014867d7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14867d7c6 FUN_14867d7c6 body=63 status=ok
// SIG undefined FUN_14867d7c6(void)

undefined1 FUN_14867d7c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14867d912(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 14867d82e FUN_14867d82e body=59 status=ok
// SIG undefined FUN_14867d82e(void)

undefined8 FUN_14867d82e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867d87a FUN_14867d87a body=73 status=ok
// SIG undefined FUN_14867d87a(void)

void FUN_14867d87a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x98) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x90);
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
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 14867d912 FUN_14867d912 body=224 status=ok
// SIG undefined FUN_14867d912(void)

undefined8 * FUN_14867d912(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar7 = param_2;
  puVar8 = param_1;
  for (lVar6 = 0xd; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_2 + 0xd);
  lVar6 = param_2[0xe];
  if (DAT_14c950c29 == 1) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_14689c22e();
      lVar6 = param_2[0xe];
    }
  }
  bVar5 = DAT_14c950c29;
  param_1[0xe] = lVar6;
  param_1[0xf] = param_2[0xf];
  lVar6 = param_2[0x10];
  if ((bVar5 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_14689c22e();
      lVar6 = param_2[0x10];
    }
  }
  param_1[0x10] = lVar6;
  uVar3 = param_2[0x11];
  lVar6 = param_2[0x12];
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[0x12];
  param_1[0x11] = uVar3;
  param_1[0x12] = lVar6;
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
  return param_1;
}



// FUNCTION 14867d9f4 FUN_14867d9f4 body=54 status=ok
// SIG undefined FUN_14867d9f4(void)

void FUN_14867d9f4(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x470);
  FUN_140e6f50a((longlong)param_2 + 0x98);
  *(undefined1 *)((longlong)param_2 + 0x468) = 0;
  return;
}



// FUNCTION 14867da2a FUN_14867da2a body=54 status=ok
// SIG undefined FUN_14867da2a(void)

void FUN_14867da2a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x98);
  FUN_140e6f50a((longlong)param_2 + 0x98);
  *(undefined1 *)((longlong)param_2 + 0x468) = 0;
  return;
}



// FUNCTION 14867da60 FUN_14867da60 body=59 status=ok
// SIG undefined FUN_14867da60(void)

void FUN_14867da60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x90);
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
                    /* WARNING: Could not recover jumptable at 0x00014867da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14867dab2 FUN_14867dab2 body=111 status=ok
// SIG undefined FUN_14867dab2(void)

undefined8 FUN_14867dab2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14867d912(param_2,param_3);
    memcpy((void *)(param_2 + 0x98),(void *)(param_3 + 0x98),0x3d1);
    param_3 = param_3 + 0x470;
    param_2 = param_2 + 0x470;
  }
  return 1;
}



// FUNCTION 14867db4a FUN_14867db4a body=59 status=ok
// SIG undefined FUN_14867db4a(void)

undefined8 FUN_14867db4a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867db96 FUN_14867db96 body=73 status=ok
// SIG undefined FUN_14867db96(void)

void FUN_14867db96(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x470) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x90);
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
    *(undefined1 *)(param_2 + 0x470) = 0;
  }
  return;
}



// FUNCTION 14867dc40 FUN_14867dc40 body=59 status=ok
// SIG undefined FUN_14867dc40(void)

void FUN_14867dc40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x8a8);
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
                    /* WARNING: Could not recover jumptable at 0x00014867dc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14867dc92 FUN_14867dc92 body=63 status=ok
// SIG undefined FUN_14867dc92(void)

undefined1 FUN_14867dc92(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14867ddde(param_2,param_3);
    param_3 = param_3 + 0xc88;
    param_2 = param_2 + 0xc88;
  }
  return 1;
}



// FUNCTION 14867dcfa FUN_14867dcfa body=59 status=ok
// SIG undefined FUN_14867dcfa(void)

undefined8 FUN_14867dcfa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867dd46 FUN_14867dd46 body=73 status=ok
// SIG undefined FUN_14867dd46(void)

void FUN_14867dd46(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0xc88) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x8a8);
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
    *(undefined1 *)(param_2 + 0xc88) = 0;
  }
  return;
}



// FUNCTION 14867ddde FUN_14867ddde body=191 status=ok
// SIG undefined FUN_14867ddde(void)

longlong * FUN_14867ddde(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  
  lVar8 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *param_2;
    }
  }
  bVar7 = DAT_14c950c29;
  *param_1 = lVar8;
  *(char *)(param_1 + 2) = (char)param_2[2];
  param_1[1] = param_2[1];
  lVar8 = param_2[3];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar5 = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  lVar6 = param_2[6];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x34);
  *(int *)(param_1 + 5) = (int)param_2[5];
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  *(int *)(param_1 + 6) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar4;
  *(int *)(param_1 + 3) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(int *)(param_1 + 4) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  lVar8 = param_2[7];
  if ((bVar7 & 1) != 0) {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = param_2[7];
    }
  }
  param_1[7] = lVar8;
  param_1[8] = param_2[8];
  memcpy(param_1 + 9,param_2 + 9,0x7c9);
  FUN_14867d912(param_1 + 0x103,param_2 + 0x103);
  memcpy(param_1 + 0x116,param_2 + 0x116,0x3d1);
  return param_1;
}



// FUNCTION 14867dea6 FUN_14867dea6 body=55 status=ok
// SIG undefined FUN_14867dea6(void)

void FUN_14867dea6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b8b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b8b0 = FUN_14171c317(FUN_1464d0c53,uVar1,L"EGrantedMovementType");
  }
  return;
}



// FUNCTION 14867dee8 FUN_14867dee8 body=44 status=ok
// SIG undefined FUN_14867dee8(void)

void FUN_14867dee8(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14022753c(param_1 + 0x1f08);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14867df18 FUN_14867df18 body=44 status=ok
// SIG undefined FUN_14867df18(void)

void FUN_14867df18(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1456facfe(param_1 + 0x1f08);
  *param_3 = uVar1;
  return;
}


