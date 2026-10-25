// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148c62f74 FUN_148c62f74 body=48 status=ok
// SIG undefined FUN_148c62f74(void)

void FUN_148c62f74(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong *)(param_2 + 0x28) != 0) {
      FUN_1400020a8();
    }
    if (*(char *)(param_2 + 8) == '\x01') {
      *(undefined1 *)(param_2 + 8) = 0;
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148c6300e FUN_148c6300e body=54 status=ok
// SIG undefined FUN_148c6300e(void)

undefined1 FUN_148c6300e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c63122(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 148c6306c FUN_148c6306c body=59 status=ok
// SIG undefined FUN_148c6306c(void)

undefined8 FUN_148c6306c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c630b2 FUN_148c630b2 body=34 status=ok
// SIG undefined FUN_148c630b2(void)

void FUN_148c630b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_14587d704(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148c63122 FUN_148c63122 body=154 status=ok
// SIG undefined FUN_148c63122(void)

undefined8 * FUN_148c63122(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  
  if (param_2 != param_1) {
    *param_1 = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
  }
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
  FUN_141332d0e(param_1 + 2,param_2 + 2);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar6 = *(undefined4 *)(param_2 + 10);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 10) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar7;
  param_1[0xb] = param_2[0xb];
  if (param_2 != param_1) {
    if (*(char *)((longlong)param_2 + 100) == '\x01') {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      uVar8 = 1;
    }
    else {
      if (*(char *)((longlong)param_1 + 100) != '\x01') goto LAB_148c6317a;
      uVar8 = 0;
    }
    *(undefined1 *)((longlong)param_1 + 100) = uVar8;
  }
LAB_148c6317a:
  uVar2 = param_2[0xd];
  lVar3 = param_2[0xe];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[0xe];
  param_1[0xd] = uVar2;
  param_1[0xe] = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 148c631be FUN_148c631be body=64 status=ok
// SIG undefined FUN_148c631be(void)

void FUN_148c631be(undefined8 param_1,longlong param_2)

{
  FUN_140f23ff6(param_2);
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(undefined8 *)(param_2 + 0x130) = 0;
  *(undefined8 *)(param_2 + 0x138) = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  *(undefined8 *)(param_2 + 0x150) = 0;
  return;
}



// FUNCTION 148c63238 FUN_148c63238 body=59 status=ok
// SIG undefined FUN_148c63238(void)

undefined8 FUN_148c63238(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c63284 FUN_148c63284 body=40 status=ok
// SIG undefined FUN_148c63284(void)

void FUN_148c63284(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x158) == '\x01') {
    FUN_14587d628(param_2);
    *(undefined1 *)(param_2 + 0x158) = 0;
  }
  return;
}



// FUNCTION 148c63310 FUN_148c63310 body=111 status=ok
// SIG undefined FUN_148c63310(void)

void FUN_148c63310(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c6337f FUN_148c6337f body=52 status=ok
// SIG undefined FUN_148c6337f(void)

void FUN_148c6337f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c633b4(param_1,param_2);
    param_1 = param_1 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return;
}



// FUNCTION 148c633b4 FUN_148c633b4 body=112 status=ok
// SIG undefined FUN_148c633b4(void)

undefined8 * FUN_148c633b4(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  FUN_14604a01e(param_1 + 2,param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  param_1[10] = uVar3;
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  cVar1 = *(char *)(param_2 + 100);
  *(char *)((longlong)param_1 + 100) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  }
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  lVar2 = *(longlong *)(param_2 + 0x70);
  param_1[0xe] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 148c63424 FUN_148c63424 body=98 status=ok
// SIG undefined FUN_148c63424(void)

void FUN_148c63424(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c63486 FUN_148c63486 body=45 status=ok
// SIG undefined FUN_148c63486(void)

void FUN_148c63486(longlong param_1,longlong param_2,int param_3)

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
        *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c6353a FUN_148c6353a body=73 status=ok
// SIG undefined FUN_148c6353a(void)

undefined8 FUN_148c6353a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140b855d0(param_2,param_3);
    FUN_140bee9ec(param_2 + 0x50,param_3 + 0x50);
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_3 + 0x60);
    param_2 = param_2 + 0x68;
    param_3 = param_3 + 0x68;
  }
  return 1;
}



// FUNCTION 148c635ac FUN_148c635ac body=59 status=ok
// SIG undefined FUN_148c635ac(void)

undefined8 FUN_148c635ac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c635f2 FUN_148c635f2 body=32 status=ok
// SIG undefined FUN_148c635f2(void)

void FUN_148c635f2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_140fe7ede(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148c6371e FUN_148c6371e body=172 status=ok
// SIG undefined FUN_148c6371e(void)

void FUN_148c6371e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_28;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148eef8a6(plVar1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c637cc FUN_148c637cc body=406 status=ok
// SIG undefined FUN_148c637cc(void)

void FUN_148c637cc(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [6];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_58[2];
  uVar1 = FUN_14477b664(local_58[3]);
  local_68 = FUN_14477b664(uVar1);
  local_60 = local_58[4];
  FUN_148eefa1c(local_28,&local_70,plVar2);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c639fa FUN_148c639fa body=59 status=ok
// SIG undefined FUN_148c639fa(void)

undefined8 FUN_148c639fa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c63b4e FUN_148c63b4e body=59 status=ok
// SIG undefined FUN_148c63b4e(void)

undefined8 FUN_148c63b4e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c63c76 FUN_148c63c76 body=59 status=ok
// SIG undefined FUN_148c63c76(void)

undefined8 FUN_148c63c76(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c63d6e FUN_148c63d6e body=110 status=ok
// SIG undefined FUN_148c63d6e(void)

undefined1 FUN_148c63d6e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489f94a2(param_2,param_3);
    FUN_148c63f42(param_2 + 0x60,param_3 + 0x60);
    FUN_148c63f92(param_2 + 0x70,param_3 + 0x70);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 148c63e04 FUN_148c63e04 body=59 status=ok
// SIG undefined FUN_148c63e04(void)

undefined8 FUN_148c63e04(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c63e50 FUN_148c63e50 body=38 status=ok
// SIG undefined FUN_148c63e50(void)

void FUN_148c63e50(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_148c63ec4(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 148c63ec4 FUN_148c63ec4 body=125 status=ok
// SIG undefined FUN_148c63ec4(void)

void FUN_148c63ec4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b87caf0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b46fec0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148c63f42 FUN_148c63f42 body=79 status=ok
// SIG undefined FUN_148c63f42(void)

undefined8 * FUN_148c63f42(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c63fec(param_1,iVar1);
      FUN_148c6405f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c63f92 FUN_148c63f92 body=89 status=ok
// SIG undefined FUN_148c63f92(void)

undefined8 * FUN_148c63f92(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c640a2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 148c63fec FUN_148c63fec body=115 status=ok
// SIG undefined FUN_148c63fec(void)

void FUN_148c63fec(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c6405f FUN_148c6405f body=66 status=ok
// SIG undefined FUN_148c6405f(void)

void FUN_148c6405f(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      *(undefined8 *)(param_1 + 8 + lVar1) = *(undefined8 *)(param_2 + 8 + lVar1);
      *(undefined4 *)(param_1 + 0x10 + lVar1) = *(undefined4 *)(param_2 + 0x10 + lVar1);
      *(undefined8 *)(param_1 + 0x18 + lVar1) = 0;
      *(undefined2 *)(param_1 + 0x20 + lVar1) = *(undefined2 *)(param_2 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c640a2 FUN_148c640a2 body=115 status=ok
// SIG undefined FUN_148c640a2(void)

void FUN_148c640a2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,4);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c64162 FUN_148c64162 body=83 status=ok
// SIG undefined FUN_148c64162(void)

undefined8 FUN_148c64162(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c64294(param_2,param_3);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    uVar1 = *(undefined4 *)(param_3 + 0x24);
    uVar2 = *(undefined4 *)(param_3 + 0x28);
    uVar3 = *(undefined4 *)(param_3 + 0x2c);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(param_2 + 0x24) = uVar1;
    *(undefined4 *)(param_2 + 0x28) = uVar2;
    *(undefined4 *)(param_2 + 0x2c) = uVar3;
    FUN_144a787a6(param_2 + 0x30,param_3 + 0x30);
    param_2 = param_2 + 0x40;
    param_3 = param_3 + 0x40;
  }
  return 1;
}



// FUNCTION 148c641de FUN_148c641de body=59 status=ok
// SIG undefined FUN_148c641de(void)

undefined8 FUN_148c641de(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c64224 FUN_148c64224 body=38 status=ok
// SIG undefined FUN_148c64224(void)

void FUN_148c64224(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148c64294 FUN_148c64294 body=84 status=ok
// SIG undefined FUN_148c64294(void)

longlong * FUN_148c64294(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c6434e FUN_148c6434e body=96 status=ok
// SIG undefined FUN_148c6434e(void)

undefined8 FUN_148c6434e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c64294(param_2,param_3);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    uVar1 = *(undefined4 *)(param_3 + 0x24);
    uVar2 = *(undefined4 *)(param_3 + 0x28);
    uVar3 = *(undefined4 *)(param_3 + 0x2c);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(param_2 + 0x24) = uVar1;
    *(undefined4 *)(param_2 + 0x28) = uVar2;
    *(undefined4 *)(param_2 + 0x2c) = uVar3;
    FUN_144a787a6(param_2 + 0x30,param_3 + 0x30);
    FUN_148c64294(param_2 + 0x40,param_3 + 0x40);
    param_2 = param_2 + 0x58;
    param_3 = param_3 + 0x58;
  }
  return 1;
}



// FUNCTION 148c643d6 FUN_148c643d6 body=59 status=ok
// SIG undefined FUN_148c643d6(void)

undefined8 FUN_148c643d6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c6441c FUN_148c6441c body=38 status=ok
// SIG undefined FUN_148c6441c(void)

void FUN_148c6441c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148c644b2 FUN_148c644b2 body=51 status=ok
// SIG undefined FUN_148c644b2(void)

void FUN_148c644b2(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c644fc FUN_148c644fc body=63 status=ok
// SIG undefined FUN_148c644fc(void)

undefined1 FUN_148c644fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c645fa(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 148c64564 FUN_148c64564 body=59 status=ok
// SIG undefined FUN_148c64564(void)

undefined8 FUN_148c64564(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c645fa FUN_148c645fa body=149 status=ok
// SIG undefined FUN_148c645fa(void)

undefined8 * FUN_148c645fa(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 4,param_2 + 4);
  FUN_148c64294(param_1 + 6,param_2 + 6);
  FUN_148c64294(param_1 + 9,param_2 + 9);
  param_1[0xc] = param_2[0xc];
  FUN_148c64294(param_1 + 0xd,param_2 + 0xd);
  param_1[0x10] = param_2[0x10];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x12);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x12) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
  FUN_144a787a6(param_1 + 0x13,param_2 + 0x13);
  return param_1;
}



// FUNCTION 148c64690 FUN_148c64690 body=61 status=ok
// SIG undefined FUN_148c64690(void)

void FUN_148c64690(longlong param_1)

{
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    if (*(longlong *)(param_1 + 0x98) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 148c64700 FUN_148c64700 body=63 status=ok
// SIG undefined FUN_148c64700(void)

undefined1 FUN_148c64700(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c647fe(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 148c64768 FUN_148c64768 body=59 status=ok
// SIG undefined FUN_148c64768(void)

undefined8 FUN_148c64768(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c647fe FUN_148c647fe body=136 status=ok
// SIG undefined FUN_148c647fe(void)

undefined8 * FUN_148c647fe(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  FUN_144a787a6(param_1 + 5,param_2 + 5);
  FUN_148c64294(param_1 + 7,param_2 + 7);
  FUN_148c64294(param_1 + 10,param_2 + 10);
  param_1[0xd] = param_2[0xd];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x74);
  uVar2 = *(undefined4 *)(param_2 + 0xf);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0xf) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar3;
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  param_1[0x12] = param_2[0x12];
  return param_1;
}



// FUNCTION 148c64888 FUN_148c64888 body=61 status=ok
// SIG undefined FUN_148c64888(void)

void FUN_148c64888(longlong param_1)

{
  if (*(char *)(param_1 + 0x98) == '\x01') {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  return;
}



// FUNCTION 148c648e4 FUN_148c648e4 body=54 status=ok
// SIG undefined FUN_148c648e4(void)

undefined1 FUN_148c648e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c649d2(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148c64942 FUN_148c64942 body=59 status=ok
// SIG undefined FUN_148c64942(void)

undefined8 FUN_148c64942(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c649d2 FUN_148c649d2 body=93 status=ok
// SIG undefined FUN_148c649d2(void)

undefined8 * FUN_148c649d2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140b55689(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c64a30(param_1,iVar1);
      FUN_148c64aa2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c64a30 FUN_148c64a30 body=114 status=ok
// SIG undefined FUN_148c64a30(void)

void FUN_148c64a30(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c64aa2 FUN_148c64aa2 body=60 status=ok
// SIG undefined FUN_148c64aa2(void)

void FUN_148c64aa2(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c64ade(param_1,param_2);
    param_1 = param_1 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return;
}



// FUNCTION 148c64ade FUN_148c64ade body=167 status=ok
// SIG undefined FUN_148c64ade(void)

undefined8 * FUN_148c64ade(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  _Src = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],_Src,(longlong)iVar1 * 2);
  }
  FUN_148c64b86(param_1 + 7,param_2 + 7);
  FUN_148c64bce(param_1 + 10,param_2 + 10);
  param_1[0x12] = param_2[0x12];
  return param_1;
}



// FUNCTION 148c64b86 FUN_148c64b86 body=71 status=ok
// SIG undefined FUN_148c64b86(void)

undefined8 * FUN_148c64b86(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148c64bce FUN_148c64bce body=116 status=ok
// SIG undefined FUN_148c64bce(void)

longlong FUN_148c64bce(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_148c64b86();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  uVar4 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = 0;
  iVar1 = *(int *)(param_2 + 0x38);
  _Src = *(void **)(param_2 + 0x30);
  *(int *)(param_1 + 0x38) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x30),iVar1,0);
    memcpy(*(void **)(param_1 + 0x30),_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148c64c44 FUN_148c64c44 body=48 status=ok
// SIG undefined FUN_148c64c44(void)

void FUN_148c64c44(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_140b55689(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 148c64c9e FUN_148c64c9e body=87 status=ok
// SIG undefined FUN_148c64c9e(void)

undefined1 FUN_148c64c9e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1418557ae(param_2,param_3);
    FUN_148c64dae(param_2 + 0x18,param_3 + 0x18);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 148c64d1e FUN_148c64d1e body=59 status=ok
// SIG undefined FUN_148c64d1e(void)

undefined8 FUN_148c64d1e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c64dae FUN_148c64dae body=93 status=ok
// SIG undefined FUN_148c64dae(void)

undefined8 * FUN_148c64dae(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d47599(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c64e0c(param_1,iVar1);
      FUN_148c64e6e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c64e0c FUN_148c64e0c body=98 status=ok
// SIG undefined FUN_148c64e0c(void)

void FUN_148c64e0c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c64e6e FUN_148c64e6e body=52 status=ok
// SIG undefined FUN_148c64e6e(void)

void FUN_148c64e6e(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c64ea2(param_1,param_2);
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return;
}



// FUNCTION 148c64ea2 FUN_148c64ea2 body=77 status=ok
// SIG undefined FUN_148c64ea2(void)

undefined8 * FUN_148c64ea2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_148c64a30(param_1,iVar1,0);
    FUN_148c64aa2(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148c64ef0 FUN_148c64ef0 body=50 status=ok
// SIG undefined FUN_148c64ef0(void)

void FUN_148c64ef0(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_140d47599(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148c64f22 FUN_148c64f22 body=45 status=ok
// SIG undefined FUN_148c64f22(void)

void FUN_148c64f22(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  *(undefined1 *)(param_2 + 0x10) = 0;
  memset((void *)(param_2 + 0x18),0,0xd0);
  return;
}



// FUNCTION 148c64f66 FUN_148c64f66 body=63 status=ok
// SIG undefined FUN_148c64f66(void)

undefined1 FUN_148c64f66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c650ea(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 148c64fce FUN_148c64fce body=59 status=ok
// SIG undefined FUN_148c64fce(void)

undefined8 FUN_148c64fce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c6501a FUN_148c6501a body=38 status=ok
// SIG undefined FUN_148c6501a(void)

void FUN_148c6501a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_148c65082(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148c65082 FUN_148c65082 body=104 status=ok
// SIG undefined FUN_148c65082(void)

void FUN_148c65082(longlong *param_1)

{
  FUN_14107a460(param_1[0x1b],(int)param_1[0x1c]);
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c650d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148c650ea FUN_148c650ea body=127 status=ok
// SIG undefined FUN_148c650ea(void)

longlong * FUN_148c650ea(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(char *)(param_1 + 2) = (char)param_2[2];
  FUN_148c645fa(param_1 + 3,param_2 + 3);
  FUN_1418557ae(param_1 + 0x18,param_2 + 0x18);
  FUN_148c6516a(param_1 + 0x1b,param_2 + 0x1b);
  return param_1;
}



// FUNCTION 148c6516a FUN_148c6516a body=93 status=ok
// SIG undefined FUN_148c6516a(void)

undefined8 * FUN_148c6516a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14107a460(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c651c8(param_1,iVar1);
      FUN_148c6523b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c651c8 FUN_148c651c8 body=115 status=ok
// SIG undefined FUN_148c651c8(void)

void FUN_148c651c8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c6523b FUN_148c6523b body=52 status=ok
// SIG undefined FUN_148c6523b(void)

void FUN_148c6523b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c65270(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 148c65270 FUN_148c65270 body=95 status=ok
// SIG undefined FUN_148c65270(void)

longlong FUN_148c65270(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_141855aec();
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    FUN_148c64e0c((undefined8 *)(param_1 + 0x18),iVar1,0);
    FUN_148c64e6e(*(undefined8 *)(param_1 + 0x18),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148c65330 FUN_148c65330 body=63 status=ok
// SIG undefined FUN_148c65330(void)

undefined1 FUN_148c65330(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c65450(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 148c65398 FUN_148c65398 body=59 status=ok
// SIG undefined FUN_148c65398(void)

undefined8 FUN_148c65398(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c653e4 FUN_148c653e4 body=38 status=ok
// SIG undefined FUN_148c653e4(void)

void FUN_148c653e4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_1411b55a2(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 148c65450 FUN_148c65450 body=145 status=ok
// SIG undefined FUN_148c65450(void)

longlong FUN_148c65450(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  FUN_1418557ae(param_1 + 0x28,param_2 + 0x28);
  FUN_148c64294(param_1 + 0x40,param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar1 = *(undefined4 *)(param_2 + 100);
  uVar2 = *(undefined4 *)(param_2 + 0x68);
  uVar3 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  FUN_144a787a6(param_1 + 0x70,param_2 + 0x70);
  FUN_148c64294(param_1 + 0x80,param_2 + 0x80);
  FUN_148c654e2(param_1 + 0x98,param_2 + 0x98);
  return param_1;
}



// FUNCTION 148c654e2 FUN_148c654e2 body=93 status=ok
// SIG undefined FUN_148c654e2(void)

undefined8 * FUN_148c654e2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1418d1663(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c65540(param_1,iVar1);
      FUN_148c655b2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c65540 FUN_148c65540 body=114 status=ok
// SIG undefined FUN_148c65540(void)

void FUN_148c65540(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c655b2 FUN_148c655b2 body=60 status=ok
// SIG undefined FUN_148c655b2(void)

void FUN_148c655b2(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c655ee(param_1,param_2);
    param_1 = param_1 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return;
}



// FUNCTION 148c655ee FUN_148c655ee body=167 status=ok
// SIG undefined FUN_148c655ee(void)

longlong * FUN_148c655ee(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)*param_2;
  *param_1 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(char *)(param_1 + 2) = (char)param_2[2];
  FUN_148c65696(param_1 + 3,param_2 + 3);
  FUN_141855aec(param_1 + 0x18,param_2 + 0x18);
  param_1[0x1b] = 0;
  iVar1 = (int)param_2[0x1c];
  lVar3 = param_2[0x1b];
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  }
  else {
    FUN_148c651c8(param_1 + 0x1b,iVar1,0);
    FUN_148c6523b(param_1[0x1b],lVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 148c65696 FUN_148c65696 body=171 status=ok
// SIG undefined FUN_148c65696(void)

undefined8 * FUN_148c65696(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  _Src = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  FUN_148c64b86(param_1 + 6,param_2 + 6);
  FUN_148c64b86(param_1 + 9,param_2 + 9);
  param_1[0xc] = param_2[0xc];
  FUN_148c64bce(param_1 + 0xd,param_2 + 0xd);
  return param_1;
}



// FUNCTION 148c65742 FUN_148c65742 body=28 status=ok
// SIG undefined FUN_148c65742(void)

undefined8 FUN_148c65742(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148c65770 FUN_148c65770 body=172 status=ok
// SIG undefined FUN_148c65770(void)

void FUN_148c65770(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_28;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148eeff20(plVar1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c6581e FUN_148c6581e body=406 status=ok
// SIG undefined FUN_148c6581e(void)

void FUN_148c6581e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [6];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_58[2];
  uVar1 = FUN_14477b664(local_58[3]);
  local_68 = FUN_14477b664(uVar1);
  local_60 = local_58[4];
  FUN_148ef0096(local_28,&local_70,plVar2);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c65a6c FUN_148c65a6c body=99 status=ok
// SIG undefined FUN_148c65a6c(void)

undefined8 FUN_148c65a6c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      FUN_148c64294(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c65af8 FUN_148c65af8 body=59 status=ok
// SIG undefined FUN_148c65af8(void)

undefined8 FUN_148c65af8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c65b3e FUN_148c65b3e body=48 status=ok
// SIG undefined FUN_148c65b3e(void)

void FUN_148c65b3e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14b887ef0;
    if (param_2[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 148c65bb0 FUN_148c65bb0 body=55 status=ok
// SIG undefined FUN_148c65bb0(void)

void FUN_148c65bb0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5c60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5c60 = FUN_140002ddd(FUN_146600857,uVar1,L"OakUISpecializationDef_Node");
  }
  return;
}



// FUNCTION 148c65c3e FUN_148c65c3e body=112 status=ok
// SIG undefined FUN_148c65c3e(void)

undefined8 FUN_148c65c3e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      *(undefined8 *)(param_2 + -0x48) = *(undefined8 *)(param_3 + -0x48);
      *(undefined8 *)(param_2 + -0x40) = *(undefined8 *)(param_3 + -0x40);
      uVar1 = *(undefined4 *)(param_3 + -0x34);
      uVar2 = *(undefined4 *)(param_3 + -0x30);
      uVar3 = *(undefined4 *)(param_3 + -0x2c);
      *(undefined4 *)(param_2 + -0x38) = *(undefined4 *)(param_3 + -0x38);
      *(undefined4 *)(param_2 + -0x34) = uVar1;
      *(undefined4 *)(param_2 + -0x30) = uVar2;
      *(undefined4 *)(param_2 + -0x2c) = uVar3;
      FUN_144a787a6(param_2 + -0x28,param_3 + -0x28);
      FUN_148c64294(param_2 + -0x18,param_3 + -0x18);
      FUN_148c65d8c(param_2,param_3);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c65cd6 FUN_148c65cd6 body=59 status=ok
// SIG undefined FUN_148c65cd6(void)

undefined8 FUN_148c65cd6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c65d1c FUN_148c65d1c body=34 status=ok
// SIG undefined FUN_148c65d1c(void)

void FUN_148c65d1c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_1457e766e(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148c65d8c FUN_148c65d8c body=93 status=ok
// SIG undefined FUN_148c65d8c(void)

undefined8 * FUN_148c65d8c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141076822(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c65dea(param_1,iVar1);
      FUN_148c65e5d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c65dea FUN_148c65dea body=115 status=ok
// SIG undefined FUN_148c65dea(void)

void FUN_148c65dea(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c65e5d FUN_148c65e5d body=52 status=ok
// SIG undefined FUN_148c65e5d(void)

void FUN_148c65e5d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c65e92(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 148c65e92 FUN_148c65e92 body=149 status=ok
// SIG undefined FUN_148c65e92(void)

undefined8 * FUN_148c65e92(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = &PTR_FUN_14b887ef0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  _Src = *(void **)(param_2 + 0x28);
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],_Src,(longlong)iVar1 * 2);
  }
  FUN_148c64b86(param_1 + 7,param_2 + 0x38);
  return param_1;
}



// FUNCTION 148c65f6e FUN_148c65f6e body=54 status=ok
// SIG undefined FUN_148c65f6e(void)

undefined1 FUN_148c65f6e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c66082(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148c65fcc FUN_148c65fcc body=59 status=ok
// SIG undefined FUN_148c65fcc(void)

undefined8 FUN_148c65fcc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c66012 FUN_148c66012 body=34 status=ok
// SIG undefined FUN_148c66012(void)

void FUN_148c66012(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1458ce302(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148c66082 FUN_148c66082 body=69 status=ok
// SIG undefined FUN_148c66082(void)

longlong FUN_148c66082(longlong param_1,longlong param_2)

{
  FUN_14054c6c4();
  FUN_1418557ae(param_1 + 0x10,param_2 + 0x10);
  FUN_1418557ae(param_1 + 0x28,param_2 + 0x28);
  FUN_148c660c8(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



// FUNCTION 148c660c8 FUN_148c660c8 body=95 status=ok
// SIG undefined FUN_148c660c8(void)

undefined8 * FUN_148c660c8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458ce33c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c66128(param_1,iVar1);
      FUN_148c66197(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c66128 FUN_148c66128 body=111 status=ok
// SIG undefined FUN_148c66128(void)

void FUN_148c66128(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    iVar2 = (int)(uVar1 / 0x58);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x58,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c66197 FUN_148c66197 body=52 status=ok
// SIG undefined FUN_148c66197(void)

void FUN_148c66197(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c661cc(param_1,param_2);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 148c661cc FUN_148c661cc body=196 status=ok
// SIG undefined FUN_148c661cc(void)

undefined8 * FUN_148c661cc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 3);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  _Src = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  FUN_148c64b86(param_1 + 6,param_2 + 6);
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  uVar2 = param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_148c65dea(param_1 + 9,iVar1,0);
    FUN_148c65e5d(param_1[9],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148c662fc FUN_148c662fc body=80 status=ok
// SIG undefined FUN_148c662fc(void)

undefined8 FUN_148c662fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      if (*(char *)(param_3 + -8) == '\0') {
        *(undefined1 *)(param_2 + -8) = 0;
        *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      }
      FUN_148c66082(param_2,param_3);
      param_3 = param_3 + 0x68;
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c66374 FUN_148c66374 body=59 status=ok
// SIG undefined FUN_148c66374(void)

undefined8 FUN_148c66374(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c66408 FUN_148c66408 body=57 status=ok
// SIG undefined FUN_148c66408(void)

void FUN_148c66408(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5cd0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5cd0 = FUN_140002ddd(FUN_146600a92,uVar1,L"OakUISpecializationsDef");
  }
  return;
}



// FUNCTION 148c66442 FUN_148c66442 body=64 status=ok
// SIG undefined FUN_148c66442(void)

void FUN_148c66442(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *param_1 = &PTR_FUN_14b888320;
    FUN_1458ce302(param_1 + 3);
    *param_1 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_1 + 1);
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  return;
}



// FUNCTION 148c66482 FUN_148c66482 body=28 status=ok
// SIG undefined FUN_148c66482(void)

undefined8 FUN_148c66482(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148c664b0 FUN_148c664b0 body=63 status=ok
// SIG undefined FUN_148c664b0(void)

void FUN_148c664b0(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(param_2 + 6,&DAT_149dfb77a);
  FUN_140056680(param_2 + 8,&DAT_149dfb77a);
  return;
}



// FUNCTION 148c66506 FUN_148c66506 body=54 status=ok
// SIG undefined FUN_148c66506(void)

undefined1 FUN_148c66506(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c6668c(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148c66564 FUN_148c66564 body=59 status=ok
// SIG undefined FUN_148c66564(void)

undefined8 FUN_148c66564(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c665aa FUN_148c665aa body=32 status=ok
// SIG undefined FUN_148c665aa(void)

void FUN_148c665aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_148c6660c(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148c6660c FUN_148c6660c body=128 status=ok
// SIG undefined FUN_148c6660c(void)

void FUN_148c6660c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000148c66680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148c6668c FUN_148c6668c body=69 status=ok
// SIG undefined FUN_148c6668c(void)

longlong FUN_148c6668c(longlong param_1,longlong param_2)

{
  FUN_1401f3db8();
  FUN_1401f3db8(param_1 + 0x18,param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



// FUNCTION 148c666d2 FUN_148c666d2 body=54 status=ok
// SIG undefined FUN_148c666d2(void)

void FUN_148c666d2(undefined8 param_1,longlong *param_2)

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
  param_2[3] = 0;
  return;
}



// FUNCTION 148c6671e FUN_148c6671e body=54 status=ok
// SIG undefined FUN_148c6671e(void)

undefined1 FUN_148c6671e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c66830(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 148c6677c FUN_148c6677c body=59 status=ok
// SIG undefined FUN_148c6677c(void)

undefined8 FUN_148c6677c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c667c2 FUN_148c667c2 body=32 status=ok
// SIG undefined FUN_148c667c2(void)

void FUN_148c667c2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_14583db8c(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148c66830 FUN_148c66830 body=87 status=ok
// SIG undefined FUN_148c66830(void)

longlong * FUN_148c66830(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  FUN_148c66888(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 148c66888 FUN_148c66888 body=93 status=ok
// SIG undefined FUN_148c66888(void)

undefined8 * FUN_148c66888(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1412dd7ac(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1458b9860(param_1,iVar1);
      FUN_1412dd837(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c668e6 FUN_148c668e6 body=54 status=ok
// SIG undefined FUN_148c668e6(void)

void FUN_148c668e6(undefined8 param_1,longlong *param_2)

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
  param_2[3] = 0;
  return;
}



// FUNCTION 148c66932 FUN_148c66932 body=54 status=ok
// SIG undefined FUN_148c66932(void)

undefined1 FUN_148c66932(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c66a46(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 148c66990 FUN_148c66990 body=59 status=ok
// SIG undefined FUN_148c66990(void)

undefined8 FUN_148c66990(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c669d6 FUN_148c669d6 body=34 status=ok
// SIG undefined FUN_148c669d6(void)

void FUN_148c669d6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1458b9674(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148c66a46 FUN_148c66a46 body=87 status=ok
// SIG undefined FUN_148c66a46(void)

longlong * FUN_148c66a46(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  FUN_148c66a9e(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 148c66a9e FUN_148c66a9e body=93 status=ok
// SIG undefined FUN_148c66a9e(void)

undefined8 * FUN_148c66a9e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1412dd762(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1458b98d4(param_1,iVar1);
      FUN_1458b97b9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c66b46 FUN_148c66b46 body=80 status=ok
// SIG undefined FUN_148c66b46(void)

undefined8 FUN_148c66b46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      if (*(char *)(param_3 + -8) == '\0') {
        *(undefined1 *)(param_2 + -8) = 0;
        *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      }
      FUN_1458b95ee(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c66bbe FUN_148c66bbe body=59 status=ok
// SIG undefined FUN_148c66bbe(void)

undefined8 FUN_148c66bbe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c66c04 FUN_148c66c04 body=34 status=ok
// SIG undefined FUN_148c66c04(void)

void FUN_148c66c04(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_14586aa18(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148c66c78 FUN_148c66c78 body=57 status=ok
// SIG undefined FUN_148c66c78(void)

void FUN_148c66c78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5d48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5d48 = FUN_140002ddd(FUN_146600ce6,uVar1,L"GbxUIDisplayDataDef_StatPanel");
  }
  return;
}



// FUNCTION 148c66d34 FUN_148c66d34 body=54 status=ok
// SIG undefined FUN_148c66d34(void)

undefined1 FUN_148c66d34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c66e48(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148c66d92 FUN_148c66d92 body=59 status=ok
// SIG undefined FUN_148c66d92(void)

undefined8 FUN_148c66d92(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c66dd8 FUN_148c66dd8 body=34 status=ok
// SIG undefined FUN_148c66dd8(void)

void FUN_148c66dd8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_146601832(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148c66e48 FUN_148c66e48 body=170 status=ok
// SIG undefined FUN_148c66e48(void)

undefined4 * FUN_148c66e48(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  uVar3 = *(undefined8 *)(param_2 + 6);
  lVar8 = *(longlong *)(param_2 + 8);
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 8);
  *(undefined8 *)(param_1 + 6) = uVar3;
  *(longlong *)(param_1 + 8) = lVar8;
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
  lVar8 = *(longlong *)(param_2 + 10);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 10);
    }
  }
  *(longlong *)(param_1 + 10) = lVar8;
  if (param_2 != param_1) {
    FUN_1401b31d8(param_1 + 0xc,param_2 + 0xc);
    FUN_1401b31d8(param_1 + 0x12,param_2 + 0x12);
  }
  return param_1;
}



// FUNCTION 148c66ef4 FUN_148c66ef4 body=62 status=ok
// SIG undefined FUN_148c66ef4(void)

void FUN_148c66ef4(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b4677f0;
  FUN_144a5dc74(param_2 + 3);
  *param_2 = &PTR_FUN_14b888ea0;
  *(undefined4 *)(param_2 + 5) = 0x40000000;
  return;
}



// FUNCTION 148c66f48 FUN_148c66f48 body=64 status=ok
// SIG undefined FUN_148c66f48(void)

undefined1 FUN_148c66f48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489f8080(param_2,param_3);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 148c66fb0 FUN_148c66fb0 body=59 status=ok
// SIG undefined FUN_148c66fb0(void)

undefined8 FUN_148c66fb0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c66ff6 FUN_148c66ff6 body=32 status=ok
// SIG undefined FUN_148c66ff6(void)

void FUN_148c66ff6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_140f4522c(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148c670a6 FUN_148c670a6 body=54 status=ok
// SIG undefined FUN_148c670a6(void)

undefined1 FUN_148c670a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c671f2(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148c67104 FUN_148c67104 body=59 status=ok
// SIG undefined FUN_148c67104(void)

undefined8 FUN_148c67104(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c6714a FUN_148c6714a body=32 status=ok
// SIG undefined FUN_148c6714a(void)

void FUN_148c6714a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_148c671a4(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148c671a4 FUN_148c671a4 body=77 status=ok
// SIG undefined FUN_148c671a4(void)

void FUN_148c671a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8890e0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148c671f2 FUN_148c671f2 body=109 status=ok
// SIG undefined FUN_148c671f2(void)

longlong FUN_148c671f2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 148c672cc FUN_148c672cc body=59 status=ok
// SIG undefined FUN_148c672cc(void)

undefined8 FUN_148c672cc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c673f4 FUN_148c673f4 body=59 status=ok
// SIG undefined FUN_148c673f4(void)

undefined8 FUN_148c673f4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c67496 FUN_148c67496 body=40 status=ok
// SIG undefined FUN_148c67496(void)

void FUN_148c67496(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_144a5dc74(param_2);
  *(undefined1 *)(param_2 + 2) = 0;
  return;
}



// FUNCTION 148c674be FUN_148c674be body=26 status=ok
// SIG undefined FUN_148c674be(void)

void FUN_148c674be(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  *(undefined1 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 148c674fe FUN_148c674fe body=112 status=ok
// SIG undefined FUN_148c674fe(void)

undefined8 FUN_148c674fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 148c67596 FUN_148c67596 body=59 status=ok
// SIG undefined FUN_148c67596(void)

undefined8 FUN_148c67596(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c675dc FUN_148c675dc body=38 status=ok
// SIG undefined FUN_148c675dc(void)

void FUN_148c675dc(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148c67652 FUN_148c67652 body=40 status=ok
// SIG undefined FUN_148c67652(void)

void FUN_148c67652(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_144a5dc74(param_2);
  *(undefined1 *)(param_2 + 2) = 0;
  return;
}



// FUNCTION 148c6767a FUN_148c6767a body=26 status=ok
// SIG undefined FUN_148c6767a(void)

void FUN_148c6767a(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  *(undefined1 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 148c676ba FUN_148c676ba body=112 status=ok
// SIG undefined FUN_148c676ba(void)

undefined8 FUN_148c676ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 148c67752 FUN_148c67752 body=59 status=ok
// SIG undefined FUN_148c67752(void)

undefined8 FUN_148c67752(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c67798 FUN_148c67798 body=38 status=ok
// SIG undefined FUN_148c67798(void)

void FUN_148c67798(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148c6784e FUN_148c6784e body=60 status=ok
// SIG undefined FUN_148c6784e(void)

undefined1 FUN_148c6784e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 148c678b2 FUN_148c678b2 body=59 status=ok
// SIG undefined FUN_148c678b2(void)

undefined8 FUN_148c678b2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c678f8 FUN_148c678f8 body=37 status=ok
// SIG undefined FUN_148c678f8(void)

void FUN_148c678f8(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148c6796e FUN_148c6796e body=33 status=ok
// SIG undefined FUN_148c6796e(void)

void FUN_148c6796e(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,"noelement");
  *(undefined1 *)(param_2 + 0x10) = 1;
  return;
}



// FUNCTION 148c67990 FUN_148c67990 body=33 status=ok
// SIG undefined FUN_148c67990(void)

void FUN_148c67990(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,"noelement");
  *(undefined1 *)(param_2 + 0x10) = 1;
  return;
}



// FUNCTION 148c679d6 FUN_148c679d6 body=60 status=ok
// SIG undefined FUN_148c679d6(void)

undefined1 FUN_148c679d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 148c67a3a FUN_148c67a3a body=59 status=ok
// SIG undefined FUN_148c67a3a(void)

undefined8 FUN_148c67a3a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c67a80 FUN_148c67a80 body=37 status=ok
// SIG undefined FUN_148c67a80(void)

void FUN_148c67a80(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148c67af6 FUN_148c67af6 body=73 status=ok
// SIG undefined FUN_148c67af6(void)

void FUN_148c67af6(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_2[2] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 3) = (int)plVar2[1];
  *(undefined4 *)(param_2 + 4) = 0;
  return;
}



// FUNCTION 148c67b40 FUN_148c67b40 body=66 status=ok
// SIG undefined FUN_148c67b40(void)

void FUN_148c67b40(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_2[2] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 3) = (int)plVar2[1];
  *(undefined4 *)(param_2 + 4) = 0;
  return;
}



// FUNCTION 148c67baa FUN_148c67baa body=78 status=ok
// SIG undefined FUN_148c67baa(void)

undefined8 FUN_148c67baa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined1 *)(lVar1 + -8) = *(undefined1 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_140ae1244();
      lVar2 = lVar2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c67c20 FUN_148c67c20 body=59 status=ok
// SIG undefined FUN_148c67c20(void)

undefined8 FUN_148c67c20(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c67c66 FUN_148c67c66 body=39 status=ok
// SIG undefined FUN_148c67c66(void)

void FUN_148c67c66(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148c67cde FUN_148c67cde body=37 status=ok
// SIG undefined FUN_148c67cde(void)

void FUN_148c67cde(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1e8);
  FUN_14148c8dc(param_2);
  return;
}



// FUNCTION 148c67d2a FUN_148c67d2a body=63 status=ok
// SIG undefined FUN_148c67d2a(void)

undefined1 FUN_148c67d2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c67e52(param_2,param_3);
    param_3 = param_3 + 0x1e8;
    param_2 = param_2 + 0x1e8;
  }
  return 1;
}



// FUNCTION 148c67d92 FUN_148c67d92 body=59 status=ok
// SIG undefined FUN_148c67d92(void)

undefined8 FUN_148c67d92(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c67dde FUN_148c67dde body=38 status=ok
// SIG undefined FUN_148c67dde(void)

void FUN_148c67dde(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e8) == '\x01') {
    FUN_140d46ff6(param_2);
    *(undefined1 *)(param_2 + 0x1e8) = 0;
  }
  return;
}



// FUNCTION 148c67e52 FUN_148c67e52 body=464 status=ok
// SIG undefined FUN_148c67e52(void)

longlong FUN_148c67e52(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_140ae1244();
  FUN_140ae1244(param_1 + 0x18,param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined4 *)(param_2 + 0x3c);
  uVar3 = *(undefined4 *)(param_2 + 0x40);
  uVar4 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x65);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x65) = uVar1;
  FUN_140ae1244(param_1 + 0x70,param_2 + 0x70);
  uVar2 = *(undefined4 *)(param_2 + 0x8c);
  uVar3 = *(undefined4 *)(param_2 + 0x90);
  uVar4 = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar2;
  *(undefined4 *)(param_1 + 0x90) = uVar3;
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  FUN_148c68022(param_1 + 0x98,param_2 + 0x98);
  FUN_144a787a6(param_1 + 0xa8,param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  FUN_144a787a6(param_1 + 0xc0,param_2 + 0xc0);
  FUN_1457fd360(param_1 + 0xd0,param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *(undefined2 *)(param_1 + 0x158) = *(undefined2 *)(param_2 + 0x158);
  FUN_144a787a6(param_1 + 0x160,param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  FUN_144a787a6(param_1 + 0x178,param_2 + 0x178);
  FUN_144a787a6(param_1 + 0x188,param_2 + 0x188);
  *(undefined2 *)(param_1 + 0x198) = *(undefined2 *)(param_2 + 0x198);
  *(undefined1 *)(param_1 + 0x19a) = *(undefined1 *)(param_2 + 0x19a);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined1 *)(param_1 + 0x1a8) = *(undefined1 *)(param_2 + 0x1a8);
  FUN_140ae1244(param_1 + 0x1b0,param_2 + 0x1b0);
  if (*(int *)(param_1 + 0x1cc) != *(int *)(param_2 + 0x1cc)) {
    *(undefined1 *)(param_1 + 0x1c8) = *(undefined1 *)(param_2 + 0x1c8);
    *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
  }
  if (*(int *)(param_1 + 0x1d4) != *(int *)(param_2 + 0x1d4)) {
    *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(param_2 + 0x1d0);
    *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1dd) = *(undefined8 *)(param_2 + 0x1dd);
  *(undefined8 *)(param_1 + 0x1d8) = uVar1;
  return param_1;
}



// FUNCTION 148c68022 FUN_148c68022 body=93 status=ok
// SIG undefined FUN_148c68022(void)

undefined8 * FUN_148c68022(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14110cecd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145d333d4(param_1,iVar1);
      FUN_14153c61c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c68488 FUN_148c68488 body=77 status=ok
// SIG undefined FUN_148c68488(void)

undefined1 FUN_148c68488(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 148c684fe FUN_148c684fe body=59 status=ok
// SIG undefined FUN_148c684fe(void)

undefined8 FUN_148c684fe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c68544 FUN_148c68544 body=38 status=ok
// SIG undefined FUN_148c68544(void)

void FUN_148c68544(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148c685ba FUN_148c685ba body=71 status=ok
// SIG undefined FUN_148c685ba(void)

void FUN_148c685ba(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(param_2 + 1,&DAT_149dfb77a);
  FUN_140056680(param_2 + 3,&DAT_149dfb77a);
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined1 *)((longlong)param_2 + 0x2a) = 0;
  return;
}



// FUNCTION 148c68602 FUN_148c68602 body=64 status=ok
// SIG undefined FUN_148c68602(void)

void FUN_148c68602(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_140056680(param_2 + 1,&DAT_149dfb77a);
  FUN_140056680(param_2 + 3,&DAT_149dfb77a);
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined1 *)((longlong)param_2 + 0x2a) = 0;
  return;
}



// FUNCTION 148c68642 FUN_148c68642 body=48 status=ok
// SIG undefined FUN_148c68642(void)

void FUN_148c68642(undefined8 param_1,longlong param_2)

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



// FUNCTION 148c68688 FUN_148c68688 body=128 status=ok
// SIG undefined FUN_148c68688(void)

undefined8 FUN_148c68688(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      FUN_144a787a6();
      lVar1 = param_3 + lVar3;
      lVar2 = param_2 + lVar3;
      FUN_144a787a6(lVar2 + 0x18,lVar1 + 0x18);
      *(undefined2 *)(lVar2 + 0x28) = *(undefined2 *)(lVar1 + 0x28);
      *(undefined1 *)(lVar2 + 0x2a) = *(undefined1 *)(lVar1 + 0x2a);
      lVar3 = lVar3 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c68730 FUN_148c68730 body=59 status=ok
// SIG undefined FUN_148c68730(void)

undefined8 FUN_148c68730(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c687ce FUN_148c687ce body=52 status=ok
// SIG undefined FUN_148c687ce(void)

void FUN_148c687ce(longlong param_1)

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



// FUNCTION 148c68802 FUN_148c68802 body=37 status=ok
// SIG undefined FUN_148c68802(void)

void FUN_148c68802(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xd8);
  FUN_140c5455a(param_2);
  return;
}



// FUNCTION 148c6884e FUN_148c6884e body=63 status=ok
// SIG undefined FUN_148c6884e(void)

undefined1 FUN_148c6884e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1413511f6(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 148c688b6 FUN_148c688b6 body=59 status=ok
// SIG undefined FUN_148c688b6(void)

undefined8 FUN_148c688b6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c68902 FUN_148c68902 body=38 status=ok
// SIG undefined FUN_148c68902(void)

void FUN_148c68902(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_1407dde54(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 148c68978 FUN_148c68978 body=61 status=ok
// SIG undefined FUN_148c68978(void)

void FUN_148c68978(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  *(undefined4 *)(param_2 + 0x10) = 8;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(byte *)(param_2 + 0x38) = *(byte *)(param_2 + 0x38) & 0xf8 | 5;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(undefined1 *)(param_2 + 0x40) = 1;
  return;
}



// FUNCTION 148c689b6 FUN_148c689b6 body=61 status=ok
// SIG undefined FUN_148c689b6(void)

void FUN_148c689b6(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  *(undefined4 *)(param_2 + 0x10) = 8;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(byte *)(param_2 + 0x38) = *(byte *)(param_2 + 0x38) & 0xf8 | 5;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(undefined1 *)(param_2 + 0x40) = 1;
  return;
}



// FUNCTION 148c68a12 FUN_148c68a12 body=54 status=ok
// SIG undefined FUN_148c68a12(void)

undefined1 FUN_148c68a12(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145a0339c(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148c68a70 FUN_148c68a70 body=59 status=ok
// SIG undefined FUN_148c68a70(void)

undefined8 FUN_148c68a70(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c68ab6 FUN_148c68ab6 body=32 status=ok
// SIG undefined FUN_148c68ab6(void)

void FUN_148c68ab6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1458d82dc(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148c68b78 FUN_148c68b78 body=62 status=ok
// SIG undefined FUN_148c68b78(void)

undefined1 FUN_148c68b78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148c68bde FUN_148c68bde body=59 status=ok
// SIG undefined FUN_148c68bde(void)

undefined8 FUN_148c68bde(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c68c24 FUN_148c68c24 body=37 status=ok
// SIG undefined FUN_148c68c24(void)

void FUN_148c68c24(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[4] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 148c68cd6 FUN_148c68cd6 body=102 status=ok
// SIG undefined FUN_148c68cd6(void)

undefined8 FUN_148c68cd6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c68d64 FUN_148c68d64 body=59 status=ok
// SIG undefined FUN_148c68d64(void)

undefined8 FUN_148c68d64(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c68daa FUN_148c68daa body=38 status=ok
// SIG undefined FUN_148c68daa(void)

void FUN_148c68daa(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148c68e20 FUN_148c68e20 body=37 status=ok
// SIG undefined FUN_148c68e20(void)

void FUN_148c68e20(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xe8);
  FUN_145ff3448(param_2);
  return;
}



// FUNCTION 148c68e6c FUN_148c68e6c body=63 status=ok
// SIG undefined FUN_148c68e6c(void)

undefined1 FUN_148c68e6c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c68f96(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 148c68ed4 FUN_148c68ed4 body=59 status=ok
// SIG undefined FUN_148c68ed4(void)

undefined8 FUN_148c68ed4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c68f20 FUN_148c68f20 body=40 status=ok
// SIG undefined FUN_148c68f20(void)

void FUN_148c68f20(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_146602ffc(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148c68f96 FUN_148c68f96 body=500 status=ok
// SIG undefined FUN_148c68f96(void)

undefined8 * FUN_148c68f96(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = param_2;
  puVar5 = param_1;
  for (lVar3 = 8; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  FUN_144a787a6(param_1 + 9,param_2 + 9);
  FUN_144a787a6(param_1 + 0xb,param_2 + 0xb);
  FUN_144a787a6(param_1 + 0xd,param_2 + 0xd);
  plVar1 = (longlong *)param_2[0xf];
  plVar2 = (longlong *)param_1[0xf];
  if (plVar2 != plVar1) {
    param_1[0xf] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  plVar1 = (longlong *)param_2[0x11];
  plVar2 = (longlong *)param_1[0x11];
  if (plVar2 != plVar1) {
    param_1[0x11] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  plVar1 = (longlong *)param_2[0x13];
  plVar2 = (longlong *)param_1[0x13];
  if (plVar2 != plVar1) {
    param_1[0x13] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  plVar1 = (longlong *)param_2[0x15];
  plVar2 = (longlong *)param_1[0x15];
  if (plVar2 != plVar1) {
    param_1[0x15] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  plVar1 = (longlong *)param_2[0x17];
  plVar2 = (longlong *)param_1[0x17];
  if (plVar2 != plVar1) {
    param_1[0x17] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_148c6918a(param_1 + 0x19,param_2 + 0x19);
  FUN_1489fde4e(param_1 + 0x1b,param_2 + 0x1b);
  return param_1;
}



// FUNCTION 148c6918a FUN_148c6918a body=93 status=ok
// SIG undefined FUN_148c6918a(void)

undefined8 * FUN_148c6918a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140f9c06b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c691e8(param_1,iVar1);
      FUN_148c6924a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c691e8 FUN_148c691e8 body=98 status=ok
// SIG undefined FUN_148c691e8(void)

void FUN_148c691e8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c6924a FUN_148c6924a body=73 status=ok
// SIG undefined FUN_148c6924a(void)

void FUN_148c6924a(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_2 + lVar2);
      *(longlong **)(param_1 + lVar2) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 8 + lVar2) = *(undefined4 *)(param_2 + 8 + lVar2);
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c69294 FUN_148c69294 body=37 status=ok
// SIG undefined FUN_148c69294(void)

void FUN_148c69294(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x338);
  FUN_145ff3332(param_2);
  return;
}



// FUNCTION 148c692e6 FUN_148c692e6 body=63 status=ok
// SIG undefined FUN_148c692e6(void)

undefined1 FUN_148c692e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c6940e(param_2,param_3);
    param_3 = param_3 + 0x338;
    param_2 = param_2 + 0x338;
  }
  return 1;
}



// FUNCTION 148c6934e FUN_148c6934e body=59 status=ok
// SIG undefined FUN_148c6934e(void)

undefined8 FUN_148c6934e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c6939a FUN_148c6939a body=38 status=ok
// SIG undefined FUN_148c6939a(void)

void FUN_148c6939a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x338) == '\x01') {
    FUN_1415d1ec2(param_2);
    *(undefined1 *)(param_2 + 0x338) = 0;
  }
  return;
}



// FUNCTION 148c6940e FUN_148c6940e body=540 status=ok
// SIG undefined FUN_148c6940e(void)

longlong FUN_148c6940e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  FUN_1489fb7d2();
  if (*(int *)(param_1 + 0xc0) != *(int *)(param_2 + 0xc0)) {
    FUN_144a787a6(param_1 + 0xb0,param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  }
  if (*(int *)(param_1 + 0xcc) != *(int *)(param_2 + 0xcc)) {
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  }
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  FUN_1457d76be(param_1 + 0xd8,param_2 + 0xd8);
  FUN_144a787a6(param_1 + 0x1a0,param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  if (*(int *)(param_1 + 0x1c8) != *(int *)(param_2 + 0x1c8) || *(int *)(param_1 + 0x1c8) == 0) {
    *(int *)(param_1 + 0x1c8) = *(int *)(param_2 + 0x1c8);
    FUN_140f9a5ac(param_1 + 0x1b8,param_2 + 0x1b8);
  }
  FUN_148c68f96(param_1 + 0x1d0,param_2 + 0x1d0);
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_2 + 0x2b8);
  FUN_144a787a6(param_1 + 0x2c0,param_2 + 0x2c0);
  if (*(int *)(param_1 + 0x2d4) != *(int *)(param_2 + 0x2d4)) {
    *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_2 + 0x2d0);
    *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_2 + 0x2d4);
  }
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_2 + 0x2d8);
  plVar1 = *(longlong **)(param_2 + 0x2e0);
  plVar2 = *(longlong **)(param_1 + 0x2e0);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x2e0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_2 + 0x2e8);
  *(undefined2 *)(param_1 + 0x2f4) = *(undefined2 *)(param_2 + 0x2f4);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x2f0);
  if (*(int *)(param_1 + 0x2fc) != *(int *)(param_2 + 0x2fc)) {
    *(undefined1 *)(param_1 + 0x2f8) = *(undefined1 *)(param_2 + 0x2f8);
    *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_2 + 0x2fc);
  }
  if (*(int *)(param_1 + 0x304) != *(int *)(param_2 + 0x304)) {
    *(undefined1 *)(param_1 + 0x300) = *(undefined1 *)(param_2 + 0x300);
    *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_2 + 0x304);
  }
  *(undefined1 *)(param_1 + 0x308) = *(undefined1 *)(param_2 + 0x308);
  FUN_144a787a6(param_1 + 0x310,param_2 + 0x310);
  uVar3 = *(undefined8 *)(param_2 + 0x328);
  *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_2 + 800);
  *(undefined8 *)(param_1 + 0x328) = uVar3;
  *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_2 + 0x330);
  return param_1;
}



// FUNCTION 148c6962c FUN_148c6962c body=66 status=ok
// SIG undefined FUN_148c6962c(void)

void FUN_148c6962c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xc0);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b894bf0;
  param_2[0x16] = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  return;
}



// FUNCTION 148c6966e FUN_148c6966e body=50 status=ok
// SIG undefined FUN_148c6966e(void)

void FUN_148c6966e(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b894bf0;
  param_2[0x16] = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  return;
}



// FUNCTION 148c696c4 FUN_148c696c4 body=112 status=ok
// SIG undefined FUN_148c696c4(void)

undefined8 FUN_148c696c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    if (*(int *)(param_2 + 0xb4) != *(int *)(param_3 + 0xb4)) {
      *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_3 + 0xb0);
      *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(param_3 + 0xb4);
    }
    puVar1 = (undefined1 *)(param_3 + 0xb8);
    param_3 = param_3 + 0xc0;
    *(undefined1 *)(param_2 + 0xb8) = *puVar1;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 148c6975c FUN_148c6975c body=59 status=ok
// SIG undefined FUN_148c6975c(void)

undefined8 FUN_148c6975c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c697a8 FUN_148c697a8 body=38 status=ok
// SIG undefined FUN_148c697a8(void)

void FUN_148c697a8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_140fe7f26(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 148c6981c FUN_148c6981c body=38 status=ok
// SIG undefined FUN_148c6981c(void)

undefined8 FUN_148c6981c(undefined8 param_1,int param_2)

{
  FUN_140fe7f26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c69842 FUN_148c69842 body=55 status=ok
// SIG undefined FUN_148c69842(void)

void FUN_148c69842(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb64b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb64b0 = FUN_140002ddd(FUN_146601e9f,uVar1,L"OakUIWidgetData_SkillsHeader");
  }
  return;
}



// FUNCTION 148c698a0 FUN_148c698a0 body=49 status=ok
// SIG undefined FUN_148c698a0(void)

void FUN_148c698a0(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x38) + 0x10))();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c698e8 FUN_148c698e8 body=133 status=ok
// SIG undefined FUN_148c698e8(void)

undefined8 FUN_148c698e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar7);
      lVar2 = param_2 + 0x18 + lVar7;
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(puVar1 + 4);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *(undefined4 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0x14) = uVar4;
      *(undefined4 *)(lVar2 + -0x10) = uVar5;
      *(undefined4 *)(lVar2 + -0xc) = uVar6;
      FUN_144a787a6(lVar2,puVar1 + 6);
      uVar3 = *(undefined8 *)((longlong)puVar1 + 0x2d);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(puVar1 + 10);
      *(undefined8 *)(lVar2 + 0x15) = uVar3;
      FUN_140ae1244(param_2 + lVar7 + 0x38,param_3 + lVar7 + 0x38);
      lVar7 = lVar7 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c69996 FUN_148c69996 body=59 status=ok
// SIG undefined FUN_148c69996(void)

undefined8 FUN_148c69996(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c699dc FUN_148c699dc body=53 status=ok
// SIG undefined FUN_148c699dc(void)

void FUN_148c699dc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x38) + 0x10))();
    }
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148c69a62 FUN_148c69a62 body=65 status=ok
// SIG undefined FUN_148c69a62(void)

void FUN_148c69a62(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_2[1] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 2) = (int)plVar2[1];
  *(undefined4 *)(param_2 + 3) = 0;
  return;
}



// FUNCTION 148c69aa4 FUN_148c69aa4 body=62 status=ok
// SIG undefined FUN_148c69aa4(void)

void FUN_148c69aa4(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_2 = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_2[1] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 2) = (int)plVar2[1];
  *(undefined4 *)(param_2 + 3) = 0;
  return;
}



// FUNCTION 148c69b0a FUN_148c69b0a body=75 status=ok
// SIG undefined FUN_148c69b0a(void)

undefined8 FUN_148c69b0a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_140ae1244();
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c69b7e FUN_148c69b7e body=59 status=ok
// SIG undefined FUN_148c69b7e(void)

undefined8 FUN_148c69b7e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c69bc4 FUN_148c69bc4 body=39 status=ok
// SIG undefined FUN_148c69bc4(void)

void FUN_148c69bc4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 8) + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148c69c3c FUN_148c69c3c body=82 status=ok
// SIG undefined FUN_148c69c3c(void)

void FUN_148c69c3c(undefined8 param_1,undefined8 *param_2)

{
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[8] = 0;
  FUN_140056680(param_2 + 4,&DAT_149dfb77a);
  *(undefined4 *)(param_2 + 6) = 0x10001;
  FUN_140056680(param_2 + 7,&DAT_149dfb77a);
  return;
}



// FUNCTION 148c69c8e FUN_148c69c8e body=66 status=ok
// SIG undefined FUN_148c69c8e(void)

void FUN_148c69c8e(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(param_2 + 4,&DAT_149dfb77a);
  *(undefined4 *)(param_2 + 6) = 0x10001;
  FUN_140056680(param_2 + 7,&DAT_149dfb77a);
  return;
}



// FUNCTION 148c69cee FUN_148c69cee body=139 status=ok
// SIG undefined FUN_148c69cee(void)

undefined8 FUN_148c69cee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_148c68022();
      FUN_144a787a6(param_2 + lVar6 + 0x20,param_3 + lVar6 + 0x20);
      *(undefined4 *)(param_2 + lVar6 + 0x30) = *(undefined4 *)(param_3 + lVar6 + 0x30);
      FUN_144a787a6(param_2 + lVar6 + 0x38,param_3 + lVar6 + 0x38);
      lVar6 = lVar6 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c69da2 FUN_148c69da2 body=59 status=ok
// SIG undefined FUN_148c69da2(void)

undefined8 FUN_148c69da2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c69de8 FUN_148c69de8 body=32 status=ok
// SIG undefined FUN_148c69de8(void)

void FUN_148c69de8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_14110ce80(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148c69e58 FUN_148c69e58 body=48 status=ok
// SIG undefined FUN_148c69e58(void)

void FUN_148c69e58(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_144a5dc74(param_2 + 3);
  *(undefined4 *)(param_2 + 5) = 100;
  *(undefined1 *)((longlong)param_2 + 0x2c) = 0;
  return;
}



// FUNCTION 148c69e88 FUN_148c69e88 body=48 status=ok
// SIG undefined FUN_148c69e88(void)

void FUN_148c69e88(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_144a5dc74(param_2 + 3);
  *(undefined4 *)(param_2 + 5) = 100;
  *(undefined1 *)((longlong)param_2 + 0x2c) = 0;
  return;
}



// FUNCTION 148c69eb8 FUN_148c69eb8 body=49 status=ok
// SIG undefined FUN_148c69eb8(void)

void FUN_148c69eb8(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x18) + 0x10))();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c69f00 FUN_148c69f00 body=54 status=ok
// SIG undefined FUN_148c69f00(void)

undefined1 FUN_148c69f00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c6a028(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 148c69f5e FUN_148c69f5e body=59 status=ok
// SIG undefined FUN_148c69f5e(void)

undefined8 FUN_148c69f5e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c69fa4 FUN_148c69fa4 body=53 status=ok
// SIG undefined FUN_148c69fa4(void)

void FUN_148c69fa4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong **)(param_2 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x18) + 0x10))();
    }
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148c6a028 FUN_148c6a028 body=103 status=ok
// SIG undefined FUN_148c6a028(void)

undefined8 * FUN_148c6a028(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 1,param_2 + 1);
  plVar1 = (longlong *)param_2[3];
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != plVar1) {
    param_1[3] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x2c);
  return param_1;
}



// FUNCTION 148c6a0ec FUN_148c6a0ec body=80 status=ok
// SIG undefined FUN_148c6a0ec(void)

undefined8 FUN_148c6a0ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined2 *)(lVar1 + -8) = *(undefined2 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_144a787a6();
      lVar2 = lVar2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c6a164 FUN_148c6a164 body=59 status=ok
// SIG undefined FUN_148c6a164(void)

undefined8 FUN_148c6a164(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c6a1aa FUN_148c6a1aa body=38 status=ok
// SIG undefined FUN_148c6a1aa(void)

void FUN_148c6a1aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148c6a220 FUN_148c6a220 body=76 status=ok
// SIG undefined FUN_148c6a220(void)

void FUN_148c6a220(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  FUN_144a5dc74(param_2);
  FUN_144a5dc74(param_2 + 2);
  FUN_144a5dc74(param_2 + 4);
  *(undefined1 *)(param_2 + 6) = 1;
  return;
}



// FUNCTION 148c6a26c FUN_148c6a26c body=44 status=ok
// SIG undefined FUN_148c6a26c(void)

void FUN_148c6a26c(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  FUN_144a5dc74(param_2 + 0x10);
  FUN_144a5dc74(param_2 + 0x20);
  *(undefined1 *)(param_2 + 0x30) = 1;
  return;
}



// FUNCTION 148c6a298 FUN_148c6a298 body=65 status=ok
// SIG undefined FUN_148c6a298(void)

void FUN_148c6a298(undefined8 param_1,longlong *param_2)

{
  if ((longlong *)param_2[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_2[4] + 0x10))();
  }
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_2[2] + 0x10))();
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c6a2ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_2 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148c6a2f0 FUN_148c6a2f0 body=54 status=ok
// SIG undefined FUN_148c6a2f0(void)

undefined1 FUN_148c6a2f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c6a3ea(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 148c6a34e FUN_148c6a34e body=59 status=ok
// SIG undefined FUN_148c6a34e(void)

undefined8 FUN_148c6a34e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c6a3ea FUN_148c6a3ea body=171 status=ok
// SIG undefined FUN_148c6a3ea(void)

longlong * FUN_148c6a3ea(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  plVar1 = (longlong *)param_2[2];
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != plVar1) {
    param_1[2] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  plVar1 = (longlong *)param_2[4];
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != plVar1) {
    param_1[4] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  *(char *)(param_1 + 6) = (char)param_2[6];
  return param_1;
}



// FUNCTION 148c6a496 FUN_148c6a496 body=68 status=ok
// SIG undefined FUN_148c6a496(void)

void FUN_148c6a496(longlong *param_1)

{
  if ((char)param_1[7] == '\x01') {
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[4] + 0x10))();
    }
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[2] + 0x10))();
    }
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return;
}



// FUNCTION 148c6a4da FUN_148c6a4da body=37 status=ok
// SIG undefined FUN_148c6a4da(void)

void FUN_148c6a4da(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x6e8);
  FUN_1461de2b2(param_2);
  return;
}


