// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148ac2c94 FUN_148ac2c94 body=20 status=ok
// SIG undefined FUN_148ac2c94(void)

undefined8 FUN_148ac2c94(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148ac2ca8 FUN_148ac2ca8 body=92 status=ok
// SIG undefined FUN_148ac2ca8(void)

undefined8
FUN_148ac2ca8(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_148ac2d18(param_2);
  uVar2 = (**(code **)(*param_1 + 0x80))(param_1,param_3);
  *param_4 = 0x10;
  *(undefined1 **)(param_4 + 2) = &LAB_148ac2d87;
  *(undefined1 **)(param_4 + 4) = &LAB_148ac2d8c;
  *(undefined8 *)(param_4 + 6) = uVar1;
  *(undefined8 *)(param_4 + 8) = uVar2;
  return 1;
}



// FUNCTION 148ac2d18 FUN_148ac2d18 body=111 status=ok
// SIG undefined FUN_148ac2d18(void)

undefined8 FUN_148ac2d18(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x88))();
    (**(code **)(*param_1 + 0x80))(param_1,4);
    (**(code **)(*param_1 + 0x28))(param_1);
    FUN_143f5dd80(0,param_1);
    (**(code **)(*param_1 + 0x48))(param_1,0);
    (**(code **)(*param_1 + 0x80))(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000148ac2d7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148ac2d97 FUN_148ac2d97 body=180 status=ok
// SIG undefined FUN_148ac2d97(void)

void FUN_148ac2d97(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x158))
                    (param_1,param_2,FUN_148ac2e5e,FUN_148ac2eb3,&LAB_148ac2d87,&LAB_148ac2e4b);
  if (cVar2 != '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x160))(param_1,(longlong)(int)param_2[1]);
  if (0 < (int)param_2[1]) {
    lVar4 = 0;
    iVar3 = 0;
    do {
      lVar1 = *param_2;
      (**(code **)(*param_1 + 0x28))(param_1);
      FUN_143f5dd80(lVar1 + lVar4,param_1);
      (**(code **)(*param_1 + 0x48))(param_1,lVar1 + lVar4);
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while (iVar3 < (int)param_2[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x000148ac2e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1);
  return;
}



// FUNCTION 148ac2e5e FUN_148ac2e5e body=85 status=ok
// SIG undefined FUN_148ac2e5e(void)

void FUN_148ac2e5e(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (longlong)param_3 * 0x20 + *param_2;
    (**(code **)(*param_1 + 0x28))(param_1);
    FUN_143f5dd80(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x000148ac2e9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1,lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148ac2eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))(param_1);
  return;
}



// FUNCTION 148ac2eb3 FUN_148ac2eb3 body=58 status=ok
// SIG undefined FUN_148ac2eb3(void)

void FUN_148ac2eb3(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 * 0x20 + *param_2;
  (**(code **)(*param_1 + 0x38))();
  FUN_143f5dd80(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x000148ac2eea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,lVar1);
  return;
}



// FUNCTION 148ac2eed FUN_148ac2eed body=160 status=ok
// SIG undefined FUN_148ac2eed(void)

void FUN_148ac2eed(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = (**(code **)(*param_1 + 0x250))();
  FUN_148ac2f8e(param_2,uVar1 & 0xffffffff);
  if (uVar1 != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      (**(code **)(*param_1 + 600))(param_1,uVar3);
      lVar4 = (lVar2 >> 0x1b) + *param_2;
      (**(code **)(*param_1 + 0x38))(param_1);
      FUN_143f5dd80(lVar4,param_1);
      (**(code **)(*param_1 + 0x48))(param_1,lVar4);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x100000000;
    } while (uVar1 != uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000148ac2f86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}



// FUNCTION 148ac2f8e FUN_148ac2f8e body=121 status=ok
// SIG undefined FUN_148ac2f8e(void)

void FUN_148ac2f8e(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148ac3046(param_1,iVar1);
    }
    FUN_148ac3008((longlong)iVar1 * 0x20 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148ac30cc(param_1,param_2,iVar1 - param_2);
    FUN_148ac3126(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148ac3008 FUN_148ac3008 body=62 status=ok
// SIG undefined FUN_148ac3008(void)

void FUN_148ac3008(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1400b22c2(param_1,&DAT_149e02088);
    FUN_1400b22c2(param_1 + 0x10,&DAT_149e02088);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 148ac3046 FUN_148ac3046 body=132 status=ok
// SIG undefined FUN_148ac3046(void)

void FUN_148ac3046(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148ac30cc FUN_148ac30cc body=89 status=ok
// SIG undefined FUN_148ac30cc(void)

void FUN_148ac30cc(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x20 + *param_1);
  FUN_148ac3164(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x20 + (longlong)_Dst),(longlong)iVar2 << 5);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148ac3126 FUN_148ac3126 body=62 status=ok
// SIG undefined FUN_148ac3126(void)

void FUN_148ac3126(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148ac31a2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 148ac3164 FUN_148ac3164 body=61 status=ok
// SIG undefined FUN_148ac3164(void)

void FUN_148ac3164(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148ac31a2 FUN_148ac31a2 body=93 status=ok
// SIG undefined FUN_148ac31a2(void)

ulonglong FUN_148ac31a2(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 148ac3200 FUN_148ac3200 body=40 status=ok
// SIG undefined FUN_148ac3200(void)

Property * FUN_148ac3200(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac3228 FUN_148ac3228 body=79 status=ok
// SIG undefined FUN_148ac3228(void)

longlong FUN_148ac3228(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 148ac3278 FUN_148ac3278 body=58 status=ok
// SIG undefined FUN_148ac3278(void)

longlong FUN_148ac3278(longlong param_1,longlong *param_2,longlong param_3)

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



// FUNCTION 148ac32b2 FUN_148ac32b2 body=149 status=ok
// SIG undefined FUN_148ac32b2(void)

longlong FUN_148ac32b2(longlong param_1,longlong *param_2,longlong param_3)

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



// FUNCTION 148ac3348 FUN_148ac3348 body=119 status=ok
// SIG undefined FUN_148ac3348(void)

longlong FUN_148ac3348(longlong param_1,longlong *param_2,longlong param_3)

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



// FUNCTION 148ac33c0 FUN_148ac33c0 body=65 status=ok
// SIG undefined FUN_148ac33c0(void)

void FUN_148ac33c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b503f40;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ac340e FUN_148ac340e body=40 status=ok
// SIG undefined FUN_148ac340e(void)

Property * FUN_148ac340e(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac3436 FUN_148ac3436 body=62 status=ok
// SIG undefined FUN_148ac3436(void)

longlong FUN_148ac3436(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  (**(code **)(*param_2 + 0x140))(param_2,*(undefined1 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148ac3474 FUN_148ac3474 body=41 status=ok
// SIG undefined FUN_148ac3474(void)

longlong FUN_148ac3474(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x140))(param_2,*(undefined1 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148ac349e FUN_148ac349e body=66 status=ok
// SIG undefined FUN_148ac349e(void)

longlong FUN_148ac349e(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x238))(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 148ac34e0 FUN_148ac34e0 body=40 status=ok
// SIG undefined FUN_148ac34e0(void)

longlong FUN_148ac34e0(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x238))(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148ac3508 FUN_148ac3508 body=65 status=ok
// SIG undefined FUN_148ac3508(void)

void FUN_148ac3508(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b503fd0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ac3556 FUN_148ac3556 body=40 status=ok
// SIG undefined FUN_148ac3556(void)

Property * FUN_148ac3556(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac357e FUN_148ac357e body=82 status=ok
// SIG undefined FUN_148ac357e(void)

longlong FUN_148ac357e(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  lVar1 = *(int *)(param_1 + 0x18) + param_3;
  (**(code **)(*param_2 + 0x28))(param_2);
  FUN_143f5e2a2(lVar1,param_2);
  (**(code **)(*param_2 + 0x48))(param_2,lVar1);
  return param_3;
}



// FUNCTION 148ac35d0 FUN_148ac35d0 body=63 status=ok
// SIG undefined FUN_148ac35d0(void)

longlong FUN_148ac35d0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = *(int *)(param_1 + 0x18) + param_3;
  (**(code **)(*param_2 + 0x28))(param_2);
  FUN_143f5e2a2(lVar1,param_2);
  (**(code **)(*param_2 + 0x48))(param_2,lVar1);
  return param_3;
}



// FUNCTION 148ac3610 FUN_148ac3610 body=86 status=ok
// SIG undefined FUN_148ac3610(void)

longlong FUN_148ac3610(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    lVar2 = *(int *)(param_1 + 0x18) + param_3;
    (**(code **)(*param_2 + 0x38))(param_2);
    FUN_143f5e2a2(lVar2,param_2);
    (**(code **)(*param_2 + 0x48))(param_2,lVar2);
  }
  return param_3;
}



// FUNCTION 148ac3666 FUN_148ac3666 body=63 status=ok
// SIG undefined FUN_148ac3666(void)

longlong FUN_148ac3666(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = *(int *)(param_1 + 0x18) + param_3;
  (**(code **)(*param_2 + 0x38))(param_2);
  FUN_143f5e2a2(lVar1,param_2);
  (**(code **)(*param_2 + 0x48))(param_2,lVar1);
  return param_3;
}



// FUNCTION 148ac36a6 FUN_148ac36a6 body=65 status=ok
// SIG undefined FUN_148ac36a6(void)

void FUN_148ac36a6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b504060;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ac36e8 FUN_148ac36e8 body=20 status=ok
// SIG undefined FUN_148ac36e8(void)

undefined8 FUN_148ac36e8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148ac36fc FUN_148ac36fc body=20 status=ok
// SIG undefined FUN_148ac36fc(void)

undefined8 FUN_148ac36fc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148ac3710 FUN_148ac3710 body=20 status=ok
// SIG undefined FUN_148ac3710(void)

undefined8 FUN_148ac3710(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148ac3724 FUN_148ac3724 body=20 status=ok
// SIG undefined FUN_148ac3724(void)

undefined8 FUN_148ac3724(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148ac3738 FUN_148ac3738 body=20 status=ok
// SIG undefined FUN_148ac3738(void)

undefined8 FUN_148ac3738(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148ac374c FUN_148ac374c body=20 status=ok
// SIG undefined FUN_148ac374c(void)

undefined8 FUN_148ac374c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148ac376c FUN_148ac376c body=70 status=ok
// SIG undefined FUN_148ac376c(void)

undefined8
FUN_148ac376c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_148ac37ba(param_2);
  uVar2 = (**(code **)(*param_1 + 0x80))(param_1,param_3);
  *param_4 = 0x10;
  *(undefined8 *)(param_4 + 2) = uVar1;
  *(undefined8 *)(param_4 + 4) = uVar2;
  return 1;
}



// FUNCTION 148ac37ba FUN_148ac37ba body=111 status=ok
// SIG undefined FUN_148ac37ba(void)

undefined8 FUN_148ac37ba(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x88))();
    (**(code **)(*param_1 + 0x80))(param_1,4);
    (**(code **)(*param_1 + 0x28))(param_1);
    FUN_143f5e2a2(0,param_1);
    (**(code **)(*param_1 + 0x48))(param_1,0);
    (**(code **)(*param_1 + 0x80))(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000148ac381c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148ac382a FUN_148ac382a body=53 status=ok
// SIG undefined FUN_148ac382a(void)

void FUN_148ac382a(void)

{
  FUN_148ac3860();
  if (DAT_14cb98a68 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb98a48 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148ac3860 FUN_148ac3860 body=344 status=ok
// SIG undefined FUN_148ac3860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148ac3860(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cb98a58;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cb98a70 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cb98a48;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14cb98a50 = 0;
  if (DAT_14cb98a54 != 0) {
    FUN_1446f4a44(&DAT_14cb98a48,0);
  }
  _DAT_14cb98a78 = 0xffffffff;
  DAT_14cb98a70 = 0;
  if (0x80 < DAT_14cb98a74) {
    DAT_14cb98a74 = 0x80;
    FUN_1446efbd8(&DAT_14cb98a58,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac39ba FUN_148ac39ba body=88 status=ok
// SIG undefined FUN_148ac39ba(void)

void FUN_148ac39ba(longlong param_1,int param_2)

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



// FUNCTION 148ac3a12 FUN_148ac3a12 body=113 status=ok
// SIG undefined FUN_148ac3a12(void)

void FUN_148ac3a12(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
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
  return;
}



// FUNCTION 148ac3a84 FUN_148ac3a84 body=88 status=ok
// SIG undefined FUN_148ac3a84(void)

void FUN_148ac3a84(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 5)) {
    uVar3 = uVar1 >> 5 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x20,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 148ac3adc FUN_148ac3adc body=47 status=ok
// SIG undefined FUN_148ac3adc(void)

void FUN_148ac3adc(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_148ac3b0c(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 148ac3b0c FUN_148ac3b0c body=156 status=ok
// SIG undefined FUN_148ac3b0c(void)

undefined8 * FUN_148ac3b0c(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148ac3ba8 FUN_148ac3ba8 body=40 status=ok
// SIG undefined FUN_148ac3ba8(void)

Property * FUN_148ac3ba8(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac3bd0 FUN_148ac3bd0 body=62 status=ok
// SIG undefined FUN_148ac3bd0(void)

longlong FUN_148ac3bd0(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  (**(code **)(*param_2 + 0x140))(param_2,*(undefined1 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148ac3c0e FUN_148ac3c0e body=41 status=ok
// SIG undefined FUN_148ac3c0e(void)

longlong FUN_148ac3c0e(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x140))(param_2,*(undefined1 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148ac3c38 FUN_148ac3c38 body=66 status=ok
// SIG undefined FUN_148ac3c38(void)

longlong FUN_148ac3c38(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x238))(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 148ac3c7a FUN_148ac3c7a body=40 status=ok
// SIG undefined FUN_148ac3c7a(void)

longlong FUN_148ac3c7a(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x238))(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148ac3ca2 FUN_148ac3ca2 body=65 status=ok
// SIG undefined FUN_148ac3ca2(void)

void FUN_148ac3ca2(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5041c0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ac3cf0 FUN_148ac3cf0 body=40 status=ok
// SIG undefined FUN_148ac3cf0(void)

Property * FUN_148ac3cf0(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac3d18 FUN_148ac3d18 body=79 status=ok
// SIG undefined FUN_148ac3d18(void)

longlong FUN_148ac3d18(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 148ac3d68 FUN_148ac3d68 body=58 status=ok
// SIG undefined FUN_148ac3d68(void)

longlong FUN_148ac3d68(longlong param_1,longlong *param_2,longlong param_3)

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



// FUNCTION 148ac3da2 FUN_148ac3da2 body=149 status=ok
// SIG undefined FUN_148ac3da2(void)

longlong FUN_148ac3da2(longlong param_1,longlong *param_2,longlong param_3)

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



// FUNCTION 148ac3e38 FUN_148ac3e38 body=119 status=ok
// SIG undefined FUN_148ac3e38(void)

longlong FUN_148ac3e38(longlong param_1,longlong *param_2,longlong param_3)

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



// FUNCTION 148ac3eb0 FUN_148ac3eb0 body=65 status=ok
// SIG undefined FUN_148ac3eb0(void)

void FUN_148ac3eb0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b504250;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ac3efe FUN_148ac3efe body=40 status=ok
// SIG undefined FUN_148ac3efe(void)

Property * FUN_148ac3efe(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac3f26 FUN_148ac3f26 body=79 status=ok
// SIG undefined FUN_148ac3f26(void)

longlong FUN_148ac3f26(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 148ac3f76 FUN_148ac3f76 body=58 status=ok
// SIG undefined FUN_148ac3f76(void)

longlong FUN_148ac3f76(longlong param_1,longlong *param_2,longlong param_3)

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



// FUNCTION 148ac3fb0 FUN_148ac3fb0 body=149 status=ok
// SIG undefined FUN_148ac3fb0(void)

longlong FUN_148ac3fb0(longlong param_1,longlong *param_2,longlong param_3)

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



// FUNCTION 148ac4046 FUN_148ac4046 body=119 status=ok
// SIG undefined FUN_148ac4046(void)

longlong FUN_148ac4046(longlong param_1,longlong *param_2,longlong param_3)

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



// FUNCTION 148ac40be FUN_148ac40be body=65 status=ok
// SIG undefined FUN_148ac40be(void)

void FUN_148ac40be(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b504300;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ac410c FUN_148ac410c body=40 status=ok
// SIG undefined FUN_148ac410c(void)

Property * FUN_148ac410c(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac4134 FUN_148ac4134 body=62 status=ok
// SIG undefined FUN_148ac4134(void)

longlong FUN_148ac4134(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  (**(code **)(*param_2 + 0x128))(param_2,*(undefined4 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148ac4172 FUN_148ac4172 body=41 status=ok
// SIG undefined FUN_148ac4172(void)

longlong FUN_148ac4172(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x128))(param_2,*(undefined4 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148ac419c FUN_148ac419c body=66 status=ok
// SIG undefined FUN_148ac419c(void)

longlong FUN_148ac419c(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x220))(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 148ac41de FUN_148ac41de body=40 status=ok
// SIG undefined FUN_148ac41de(void)

longlong FUN_148ac41de(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x220))(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148ac4206 FUN_148ac4206 body=65 status=ok
// SIG undefined FUN_148ac4206(void)

void FUN_148ac4206(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b504390;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ac4254 FUN_148ac4254 body=113 status=ok
// SIG undefined FUN_148ac4254(void)

undefined8 * FUN_148ac4254(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 148ac42c6 FUN_148ac42c6 body=42 status=ok
// SIG undefined FUN_148ac42c6(void)

Property * FUN_148ac42c6(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac42f0 FUN_148ac42f0 body=79 status=ok
// SIG undefined FUN_148ac42f0(void)

longlong FUN_148ac42f0(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 148ac4340 FUN_148ac4340 body=58 status=ok
// SIG undefined FUN_148ac4340(void)

longlong FUN_148ac4340(longlong param_1,longlong *param_2,longlong param_3)

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



// FUNCTION 148ac437a FUN_148ac437a body=149 status=ok
// SIG undefined FUN_148ac437a(void)

longlong FUN_148ac437a(longlong param_1,longlong *param_2,longlong param_3)

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



// FUNCTION 148ac4410 FUN_148ac4410 body=119 status=ok
// SIG undefined FUN_148ac4410(void)

longlong FUN_148ac4410(longlong param_1,longlong *param_2,longlong param_3)

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



// FUNCTION 148ac4488 FUN_148ac4488 body=65 status=ok
// SIG undefined FUN_148ac4488(void)

void FUN_148ac4488(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b504430;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ac44d6 FUN_148ac44d6 body=40 status=ok
// SIG undefined FUN_148ac44d6(void)

Property * FUN_148ac44d6(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac44fe FUN_148ac44fe body=79 status=ok
// SIG undefined FUN_148ac44fe(void)

longlong FUN_148ac44fe(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 148ac454e FUN_148ac454e body=58 status=ok
// SIG undefined FUN_148ac454e(void)

longlong FUN_148ac454e(longlong param_1,longlong *param_2,longlong param_3)

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



// FUNCTION 148ac4588 FUN_148ac4588 body=149 status=ok
// SIG undefined FUN_148ac4588(void)

longlong FUN_148ac4588(longlong param_1,longlong *param_2,longlong param_3)

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



// FUNCTION 148ac461e FUN_148ac461e body=119 status=ok
// SIG undefined FUN_148ac461e(void)

longlong FUN_148ac461e(longlong param_1,longlong *param_2,longlong param_3)

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



// FUNCTION 148ac4696 FUN_148ac4696 body=65 status=ok
// SIG undefined FUN_148ac4696(void)

void FUN_148ac4696(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5044c0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ac46e4 FUN_148ac46e4 body=40 status=ok
// SIG undefined FUN_148ac46e4(void)

Property * FUN_148ac46e4(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac470c FUN_148ac470c body=62 status=ok
// SIG undefined FUN_148ac470c(void)

longlong FUN_148ac470c(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  (**(code **)(*param_2 + 0x128))(param_2,*(undefined4 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148ac474a FUN_148ac474a body=41 status=ok
// SIG undefined FUN_148ac474a(void)

longlong FUN_148ac474a(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x128))(param_2,*(undefined4 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148ac4774 FUN_148ac4774 body=66 status=ok
// SIG undefined FUN_148ac4774(void)

longlong FUN_148ac4774(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x220))(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 148ac47b6 FUN_148ac47b6 body=40 status=ok
// SIG undefined FUN_148ac47b6(void)

longlong FUN_148ac47b6(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x220))(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148ac47de FUN_148ac47de body=65 status=ok
// SIG undefined FUN_148ac47de(void)

void FUN_148ac47de(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b504580;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ac482c FUN_148ac482c body=40 status=ok
// SIG undefined FUN_148ac482c(void)

Property * FUN_148ac482c(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac4854 FUN_148ac4854 body=79 status=ok
// SIG undefined FUN_148ac4854(void)

longlong FUN_148ac4854(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 148ac48a4 FUN_148ac48a4 body=58 status=ok
// SIG undefined FUN_148ac48a4(void)

longlong FUN_148ac48a4(longlong param_1,longlong *param_2,longlong param_3)

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



// FUNCTION 148ac48de FUN_148ac48de body=149 status=ok
// SIG undefined FUN_148ac48de(void)

longlong FUN_148ac48de(longlong param_1,longlong *param_2,longlong param_3)

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



// FUNCTION 148ac4974 FUN_148ac4974 body=119 status=ok
// SIG undefined FUN_148ac4974(void)

longlong FUN_148ac4974(longlong param_1,longlong *param_2,longlong param_3)

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



// FUNCTION 148ac49ec FUN_148ac49ec body=65 status=ok
// SIG undefined FUN_148ac49ec(void)

void FUN_148ac49ec(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b504610;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ac4a3a FUN_148ac4a3a body=40 status=ok
// SIG undefined FUN_148ac4a3a(void)

Property * FUN_148ac4a3a(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac4a62 FUN_148ac4a62 body=79 status=ok
// SIG undefined FUN_148ac4a62(void)

longlong FUN_148ac4a62(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 148ac4ab2 FUN_148ac4ab2 body=58 status=ok
// SIG undefined FUN_148ac4ab2(void)

longlong FUN_148ac4ab2(longlong param_1,longlong *param_2,longlong param_3)

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



// FUNCTION 148ac4aec FUN_148ac4aec body=149 status=ok
// SIG undefined FUN_148ac4aec(void)

longlong FUN_148ac4aec(longlong param_1,longlong *param_2,longlong param_3)

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



// FUNCTION 148ac4b82 FUN_148ac4b82 body=119 status=ok
// SIG undefined FUN_148ac4b82(void)

longlong FUN_148ac4b82(longlong param_1,longlong *param_2,longlong param_3)

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



// FUNCTION 148ac4bfa FUN_148ac4bfa body=65 status=ok
// SIG undefined FUN_148ac4bfa(void)

void FUN_148ac4bfa(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5046a0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ac4c6c FUN_148ac4c6c body=31 status=ok
// SIG undefined FUN_148ac4c6c(void)

undefined8 FUN_148ac4c6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ac4ca6 FUN_148ac4ca6 body=101 status=ok
// SIG undefined FUN_148ac4ca6(void)

void FUN_148ac4ca6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b504820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ac4d0c FUN_148ac4d0c body=101 status=ok
// SIG undefined FUN_148ac4d0c(void)

void FUN_148ac4d0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b504820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ac4d72 FUN_148ac4d72 body=134 status=ok
// SIG undefined FUN_148ac4d72(void)

void FUN_148ac4d72(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e063e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b504820;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ac4de9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ac4df8 FUN_148ac4df8 body=44 status=ok
// SIG undefined FUN_148ac4df8(void)

void FUN_148ac4df8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ac4e21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148ac4e24 FUN_148ac4e24 body=31 status=ok
// SIG undefined FUN_148ac4e24(void)

undefined8 FUN_148ac4e24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ac4e5e FUN_148ac4e5e body=101 status=ok
// SIG undefined FUN_148ac4e5e(void)

void FUN_148ac4e5e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b504890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ac4ec4 FUN_148ac4ec4 body=101 status=ok
// SIG undefined FUN_148ac4ec4(void)

void FUN_148ac4ec4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b504890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ac4f2a FUN_148ac4f2a body=134 status=ok
// SIG undefined FUN_148ac4f2a(void)

void FUN_148ac4f2a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b504890;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ac4fa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ac4fb0 FUN_148ac4fb0 body=44 status=ok
// SIG undefined FUN_148ac4fb0(void)

void FUN_148ac4fb0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ac4fd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148ac4fdc FUN_148ac4fdc body=31 status=ok
// SIG undefined FUN_148ac4fdc(void)

undefined8 FUN_148ac4fdc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ac5016 FUN_148ac5016 body=101 status=ok
// SIG undefined FUN_148ac5016(void)

void FUN_148ac5016(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b504900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ac507c FUN_148ac507c body=101 status=ok
// SIG undefined FUN_148ac507c(void)

void FUN_148ac507c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b504900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ac50e2 FUN_148ac50e2 body=134 status=ok
// SIG undefined FUN_148ac50e2(void)

void FUN_148ac50e2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b504900;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ac5159. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ac5168 FUN_148ac5168 body=39 status=ok
// SIG undefined FUN_148ac5168(void)

void FUN_148ac5168(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ac518b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148ac5190 FUN_148ac5190 body=106 status=ok
// SIG undefined FUN_148ac5190(void)

IViewListener * FUN_148ac5190(IViewListener *param_1)

{
  cohtml::IViewListener::IViewListener(param_1);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x28] = (IViewListener)0x0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined ***)param_1 = &PTR_FUN_14b504990;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  return param_1;
}



// FUNCTION 148ac51fa FUN_148ac51fa body=38 status=ok
// SIG undefined FUN_148ac51fa(void)

undefined8 FUN_148ac51fa(undefined8 param_1,int param_2)

{
  FUN_145c56ea4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ac5222 FUN_148ac5222 body=148 status=ok
// SIG undefined FUN_148ac5222(void)

void FUN_148ac5222(void)

{
  undefined2 *puVar1;
  undefined1 auStack_158 [32];
  undefined2 *local_138;
  int local_130;
  undefined1 local_128 [256];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_144a81018(local_128);
  FUN_140056680(&local_138,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  puVar1 = local_138;
  if (local_130 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_142855b70(puVar1);
  if (local_138 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ac52b8 FUN_148ac52b8 body=254 status=ok
// SIG undefined FUN_148ac52b8(void)

void FUN_148ac52b8(undefined8 param_1,undefined8 *param_2)

{
  size_t sVar1;
  wchar_t *_Str;
  int iVar2;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined8 uStack_d0;
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = (wchar_t *)0x0;
  uStack_d0 = 0;
  FUN_140d67490();
  iVar2 = (int)uStack_d0 + -1;
  if ((int)uStack_d0 == 0) {
    iVar2 = 0;
  }
  if (0 < iVar2) {
    _Str = local_d8;
    if ((int)uStack_d0 == 0) {
      _Str = L"";
    }
    local_40 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_38 = 0;
      local_30 = 0;
    }
    else {
      sVar1 = wcslen(_Str);
      FUN_1449b853c(local_c0,_Str,sVar1 & 0xffffffff,1);
    }
    (**(code **)*param_2)(param_2,local_38,iVar2);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_d8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ac53d6 FUN_148ac53d6 body=32 status=ok
// SIG undefined FUN_148ac53d6(void)

void * FUN_148ac53d6(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac5402 FUN_148ac5402 body=32 status=ok
// SIG undefined FUN_148ac5402(void)

void * FUN_148ac5402(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac542e FUN_148ac542e body=32 status=ok
// SIG undefined FUN_148ac542e(void)

void * FUN_148ac542e(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac545a FUN_148ac545a body=31 status=ok
// SIG undefined FUN_148ac545a(void)

undefined8 FUN_148ac545a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ac5494 FUN_148ac5494 body=29 status=ok
// SIG undefined FUN_148ac5494(void)

bool FUN_148ac5494(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ac54b2 FUN_148ac54b2 body=26 status=ok
// SIG undefined FUN_148ac54b2(void)

bool FUN_148ac54b2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ac54d8 FUN_148ac54d8 body=101 status=ok
// SIG undefined FUN_148ac54d8(void)

void FUN_148ac54d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b504de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b504d70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ac553e FUN_148ac553e body=101 status=ok
// SIG undefined FUN_148ac553e(void)

void FUN_148ac553e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b504de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b504d70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ac55a4 FUN_148ac55a4 body=134 status=ok
// SIG undefined FUN_148ac55a4(void)

void FUN_148ac55a4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b504de0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b504d70;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ac561b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ac562a FUN_148ac562a body=143 status=ok
// SIG undefined FUN_148ac562a(void)

bool FUN_148ac562a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac56bc FUN_148ac56bc body=115 status=ok
// SIG undefined FUN_148ac56bc(void)

void FUN_148ac56bc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 200,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 200)) {
      uVar2 = uVar1 / 200 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,200,8);
  }
  return;
}



// FUNCTION 148ac5730 FUN_148ac5730 body=503 status=ok
// SIG undefined FUN_148ac5730(void)

void FUN_148ac5730(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = 0;
  param_1[7] = param_2[7];
  param_2[7] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  param_2[8] = 0;
  param_1[9] = 0;
  param_1[9] = param_2[9];
  param_2[9] = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  param_2[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  param_1[0xc] = 0;
  param_1[0xc] = param_2[0xc];
  param_2[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  param_2[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xe] = param_2[0xe];
  param_2[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  param_2[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x10] = param_2[0x10];
  param_2[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  param_2[0x11] = 0;
  *(undefined1 *)((longlong)param_1 + 0x92) = *(undefined1 *)((longlong)param_2 + 0x92);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  param_1[0x13] = 0;
  param_1[0x13] = param_2[0x13];
  param_2[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
  param_2[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x15] = param_2[0x15];
  param_2[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
  param_2[0x16] = 0;
  uVar1 = param_2[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = uVar1;
  return;
}



// FUNCTION 148ac5928 FUN_148ac5928 body=150 status=ok
// SIG undefined FUN_148ac5928(void)

void FUN_148ac5928(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 200,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 200)) {
      uVar5 = uVar4 / 200 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,200,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148ac59d5 FUN_148ac59d5 body=88 status=ok
// SIG undefined FUN_148ac59d5(void)

void FUN_148ac59d5(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (longlong)param_3 * 200 + *param_2;
    (**(code **)(*param_1 + 0x28))(param_1);
    FUN_143f5df18(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x000148ac5a17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1,lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148ac5a26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))(param_1);
  return;
}



// FUNCTION 148ac5a32 FUN_148ac5a32 body=61 status=ok
// SIG undefined FUN_148ac5a32(void)

void FUN_148ac5a32(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 * 200 + *param_2;
  (**(code **)(*param_1 + 0x38))();
  FUN_143f5df18(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x000148ac5a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,lVar1);
  return;
}



// FUNCTION 148ac5a70 FUN_148ac5a70 body=29 status=ok
// SIG undefined FUN_148ac5a70(void)

undefined8 FUN_148ac5a70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ac5aaa FUN_148ac5aaa body=93 status=ok
// SIG undefined FUN_148ac5aaa(void)

void FUN_148ac5aaa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4392c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b504e70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ac5b08 FUN_148ac5b08 body=93 status=ok
// SIG undefined FUN_148ac5b08(void)

void FUN_148ac5b08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4392c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b504e70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ac5b66 FUN_148ac5b66 body=126 status=ok
// SIG undefined FUN_148ac5b66(void)

void FUN_148ac5b66(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4392c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b504e70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ac5bd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ac5bf2 FUN_148ac5bf2 body=31 status=ok
// SIG undefined FUN_148ac5bf2(void)

undefined8 FUN_148ac5bf2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148ac5c14 FUN_148ac5c14 body=32 status=ok
// SIG undefined FUN_148ac5c14(void)

void * FUN_148ac5c14(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac5c3a FUN_148ac5c3a body=32 status=ok
// SIG undefined FUN_148ac5c3a(void)

void * FUN_148ac5c3a(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac5c66 FUN_148ac5c66 body=266 status=ok
// SIG undefined FUN_148ac5c66(void)

void FUN_148ac5c66(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  int local_60;
  longlong local_58 [3];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[0] = 0;
  local_58[1] = 0;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_68 = (undefined2 *)0x0;
  local_40 = 0;
  (**(code **)(*plVar2 + 0x1c8))(plVar2,&local_40,&local_68);
  FUN_1409ee323(local_40,local_68,local_58);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 8))(&local_68,local_58);
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
    if (plVar2 != (longlong *)0x0) {
      puVar3 = local_68;
      if (local_60 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      (**(code **)(*plVar2 + 0xd0))(plVar2,puVar3);
      (**(code **)(*param_2 + 0x18))(param_2);
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ac5d72 FUN_148ac5d72 body=32 status=ok
// SIG undefined FUN_148ac5d72(void)

void * FUN_148ac5d72(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac5d9e FUN_148ac5d9e body=343 status=ok
// SIG undefined FUN_148ac5d9e(void)

void FUN_148ac5d9e(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  void *_Src;
  char cVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined2 *local_68;
  int local_60;
  void *local_58;
  ulonglong uStack_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_68 = (undefined2 *)0x0;
  local_40 = 0;
  (**(code **)(*plVar3 + 0x1c8))(plVar3,&local_40,&local_68);
  FUN_1409ee323(local_40,local_68,&local_58);
  cVar2 = (**(code **)(*param_2 + 0x30))(param_2);
  _Src = local_58;
  if (cVar2 == '\0') {
    pcVar1 = *(code **)(param_1 + 8);
    local_78 = (void *)0x0;
    lVar5 = (longlong)(int)uStack_50;
    local_70 = (int)uStack_50;
    if (lVar5 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,uStack_50 & 0xffffffff,0);
      memcpy(local_78,_Src,lVar5 * 2);
    }
    (*pcVar1)(&local_68,&local_78);
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
    if (plVar3 != (longlong *)0x0) {
      puVar4 = local_68;
      if (local_60 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      (**(code **)(*plVar3 + 0xd0))(plVar3,puVar4);
      (**(code **)(*param_2 + 0x18))(param_2);
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ac5ef6 FUN_148ac5ef6 body=32 status=ok
// SIG undefined FUN_148ac5ef6(void)

void * FUN_148ac5ef6(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac5f1c FUN_148ac5f1c body=32 status=ok
// SIG undefined FUN_148ac5f1c(void)

void * FUN_148ac5f1c(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac5f48 FUN_148ac5f48 body=186 status=ok
// SIG undefined FUN_148ac5f48(void)

void FUN_148ac5f48(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,0);
  FUN_148ac6003(uVar2,&local_38);
  plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  (**(code **)(*plVar3 + 0x238))(plVar3,&local_39);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 8))(&local_38,local_39);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  FUN_145da91ec(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac6003 FUN_148ac6003 body=167 status=ok
// SIG undefined FUN_148ac6003(void)

void FUN_148ac6003(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = (**(code **)(*param_1 + 0x250))();
  FUN_148ac60aa(param_2,uVar1 & 0xffffffff);
  if (uVar1 != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      (**(code **)(*param_1 + 600))(param_1,uVar3);
      lVar4 = (lVar2 >> 0x20) * 200 + *param_2;
      (**(code **)(*param_1 + 0x38))(param_1);
      FUN_143f5df18(lVar4,param_1);
      (**(code **)(*param_1 + 0x48))(param_1,lVar4);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x100000000;
    } while (uVar1 != uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000148ac60a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}



// FUNCTION 148ac60aa FUN_148ac60aa body=121 status=ok
// SIG undefined FUN_148ac60aa(void)

void FUN_148ac60aa(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148ac5928(param_1,iVar1);
    }
    FUN_148ac6124((longlong)iVar1 * 200 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148ac614e(param_1,param_2,iVar1 - param_2);
    FUN_148ac61b0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148ac6124 FUN_148ac6124 body=41 status=ok
// SIG undefined FUN_148ac6124(void)

void FUN_148ac6124(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148abf356(param_1);
    param_1 = param_1 + 200;
  }
  return;
}



// FUNCTION 148ac614e FUN_148ac614e body=98 status=ok
// SIG undefined FUN_148ac614e(void)

void FUN_148ac614e(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 200 + *param_1);
  FUN_145da91ec(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 200 + (longlong)_Dst),(longlong)iVar2 * 200);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148ac61b0 FUN_148ac61b0 body=62 status=ok
// SIG undefined FUN_148ac61b0(void)

void FUN_148ac61b0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148ac61ee(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,200,8);
  }
  return;
}



// FUNCTION 148ac61ee FUN_148ac61ee body=114 status=ok
// SIG undefined FUN_148ac61ee(void)

ulonglong FUN_148ac61ee(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 200) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148ac6227;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 200,8);
      param_2 = param_2 / 200;
    }
  }
LAB_148ac6227:
  return param_2 & 0xffffffff;
}



// FUNCTION 148ac6260 FUN_148ac6260 body=32 status=ok
// SIG undefined FUN_148ac6260(void)

void * FUN_148ac6260(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac628c FUN_148ac628c body=150 status=ok
// SIG undefined FUN_148ac628c(void)

void FUN_148ac628c(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,0);
  FUN_148ac6003(uVar2,&local_38);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 8))(&local_38);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  FUN_145da91ec(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac6324 FUN_148ac6324 body=32 status=ok
// SIG undefined FUN_148ac6324(void)

void * FUN_148ac6324(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac6350 FUN_148ac6350 body=266 status=ok
// SIG undefined FUN_148ac6350(void)

void FUN_148ac6350(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  void *_Src;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_40 = 0;
  local_48 = 0;
  (**(code **)(*plVar3 + 0x1c8))(plVar3,&local_48,&local_40);
  FUN_1409ee323(local_48,local_40,&local_58);
  cVar2 = (**(code **)(*param_2 + 0x30))(param_2);
  _Src = local_58;
  if (cVar2 == '\0') {
    pcVar1 = *(code **)(param_1 + 8);
    local_68 = (void *)0x0;
    lVar4 = (longlong)(int)uStack_50;
    local_60 = (int)uStack_50;
    if (lVar4 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,uStack_50 & 0xffffffff,0);
      memcpy(local_68,_Src,lVar4 * 2);
    }
    (*pcVar1)(&local_68);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac645c FUN_148ac645c body=32 status=ok
// SIG undefined FUN_148ac645c(void)

void * FUN_148ac645c(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac6488 FUN_148ac6488 body=206 status=ok
// SIG undefined FUN_148ac6488(void)

void FUN_148ac6488(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400b22c2(local_48,&DAT_149e02088);
  FUN_1400b22c2(local_38,&DAT_149e02088);
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x38))(plVar2);
  FUN_143f5e396(local_50,plVar2);
  (**(code **)(*plVar2 + 0x48))(plVar2,local_50);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 8))(local_50);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac6558 FUN_148ac6558 body=32 status=ok
// SIG undefined FUN_148ac6558(void)

void * FUN_148ac6558(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac6584 FUN_148ac6584 body=173 status=ok
// SIG undefined FUN_148ac6584(void)

void FUN_148ac6584(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [200];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_148abf356(local_f0);
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x38))(plVar2);
  FUN_143f5df18(local_f0,plVar2);
  (**(code **)(*plVar2 + 0x48))(plVar2,local_f0);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 8))(local_f0);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  FUN_148abf402(local_f0);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac6632 FUN_148ac6632 body=32 status=ok
// SIG undefined FUN_148ac6632(void)

void * FUN_148ac6632(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac665e FUN_148ac665e body=201 status=ok
// SIG undefined FUN_148ac665e(void)

void FUN_148ac665e(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [200];
  undefined1 local_f0 [200];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_148abf356(local_f0);
  plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar3 + 0x38))(plVar3);
  FUN_143f5df18(local_f0,plVar3);
  (**(code **)(*plVar3 + 0x48))(plVar3,local_f0);
  cVar2 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar2 == '\0') {
    pcVar1 = *(code **)(param_1 + 8);
    FUN_148abf86e(local_1b8,local_f0);
    (*pcVar1)(local_1b8);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  FUN_148abf402(local_f0);
  if ((local_28 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac6728 FUN_148ac6728 body=32 status=ok
// SIG undefined FUN_148ac6728(void)

void * FUN_148ac6728(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac6754 FUN_148ac6754 body=652 status=ok
// SIG undefined FUN_148ac6754(void)

void FUN_148ac6754(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  void *pvVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  ulonglong uStack_90;
  void *local_88;
  ulonglong uStack_80;
  void *local_78;
  ulonglong uStack_70;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  plVar4 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_88 = (void *)0x0;
  local_98 = (void *)0x0;
  (**(code **)(*plVar4 + 0x1c8))(plVar4,&local_98,&local_88);
  FUN_1409ee323(local_98,local_88,&local_78);
  local_88 = (void *)0x0;
  uStack_80 = 0;
  plVar4 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  local_98 = (void *)0x0;
  local_58 = 0;
  (**(code **)(*plVar4 + 0x1c8))(plVar4,&local_58,&local_98);
  FUN_1409ee323(local_58,local_98,&local_88);
  local_98 = (void *)0x0;
  uStack_90 = 0;
  plVar4 = (longlong *)(**(code **)(*param_2 + 8))(param_2,2);
  local_58 = 0;
  local_60 = 0;
  (**(code **)(*plVar4 + 0x1c8))(plVar4,&local_60,&local_58);
  FUN_1409ee323(local_60,local_58,&local_98);
  cVar3 = (**(code **)(*param_2 + 0x30))(param_2);
  pvVar2 = local_98;
  if (cVar3 == '\0') {
    pcVar1 = *(code **)(param_1 + 8);
    local_a8 = (void *)0x0;
    lVar5 = (longlong)(int)uStack_90;
    local_a0 = (int)uStack_90;
    if (lVar5 == 0) {
      local_9c = 0;
    }
    else {
      FUN_1446dd670(&local_a8,uStack_90 & 0xffffffff,0);
      memcpy(local_a8,pvVar2,lVar5 * 2);
    }
    pvVar2 = local_88;
    local_b8 = (void *)0x0;
    lVar5 = (longlong)(int)uStack_80;
    local_b0 = (int)uStack_80;
    if (lVar5 == 0) {
      local_ac = 0;
    }
    else {
      FUN_1446dd670(&local_b8,uStack_80 & 0xffffffff,0);
      memcpy(local_b8,pvVar2,lVar5 * 2);
    }
    pvVar2 = local_78;
    local_c8 = (void *)0x0;
    lVar5 = (longlong)(int)uStack_70;
    local_c0 = (int)uStack_70;
    if (lVar5 == 0) {
      local_bc = 0;
    }
    else {
      FUN_1446dd670(&local_c8,uStack_70 & 0xffffffff,0);
      memcpy(local_c8,pvVar2,lVar5 * 2);
    }
    (*pcVar1)(&local_c8,&local_b8,&local_a8);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac69e2 FUN_148ac69e2 body=32 status=ok
// SIG undefined FUN_148ac69e2(void)

void * FUN_148ac69e2(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac6a0e FUN_148ac6a0e body=189 status=ok
// SIG undefined FUN_148ac6a0e(void)

void FUN_148ac6a0e(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  
  local_58[4] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_58[1] = 0;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_58[3] = 0;
  local_58[2] = 0;
  (**(code **)(*plVar2 + 0x1c8))(plVar2,local_58 + 2,local_58 + 3);
  FUN_1409ee323(local_58[2],local_58[3],local_58);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 8))(local_58);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[4] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac6af6 FUN_148ac6af6 body=175 status=ok
// SIG undefined FUN_148ac6af6(void)

undefined4 * FUN_148ac6af6(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = 0;
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    *(undefined8 *)(param_2 + 4) = 0;
    if (*(longlong *)(param_1 + 6) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 6) = 0;
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    *(undefined8 *)(param_2 + 8) = 0;
    if (*(longlong *)(param_1 + 10) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_2 + 10) = 0;
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    *(undefined8 *)(param_2 + 0xc) = 0;
  }
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  return param_1;
}



// FUNCTION 148ac6ba5 FUN_148ac6ba5 body=40 status=ok
// SIG undefined FUN_148ac6ba5(void)

void FUN_148ac6ba5(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined2 *)(param_1 + 0xe) = 0x304;
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 148ac6bce FUN_148ac6bce body=89 status=ok
// SIG undefined FUN_148ac6bce(void)

void FUN_148ac6bce(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x40 + *param_1);
  FUN_141323308(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x40 + (longlong)_Dst),(longlong)iVar2 << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148ac6c28 FUN_148ac6c28 body=62 status=ok
// SIG undefined FUN_148ac6c28(void)

void FUN_148ac6c28(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148ac6c66(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 148ac6c66 FUN_148ac6c66 body=93 status=ok
// SIG undefined FUN_148ac6c66(void)

ulonglong FUN_148ac6c66(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,8);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 148ac6cc4 FUN_148ac6cc4 body=463 status=ok
// SIG undefined FUN_148ac6cc4(void)

void FUN_148ac6cc4(uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  
  iVar3 = DAT_14cb98a50;
  uVar9 = param_1 - DAT_14cb98a50;
  if (uVar9 != 0 && DAT_14cb98a50 <= (int)param_1) {
    iVar8 = DAT_14cb98a50;
    if (DAT_14cb98a54 < (int)param_1) {
      FUN_1446f4a44(&DAT_14cb98a48);
      iVar8 = DAT_14cb98a50;
    }
    DAT_14cb98a50 = iVar8 + uVar9;
    if ((uint)(DAT_14cb98a54 - iVar8) < uVar9) {
      FUN_1447711aa(&DAT_14cb98a48);
    }
    lVar2 = DAT_14cb98a48;
    if (iVar8 < (int)param_1) {
      piVar7 = (int *)((ulonglong)param_1 * 0x20 + DAT_14cb98a48 + -0x1c);
      uVar12 = (ulonglong)param_1;
      do {
        uVar1 = uVar12 - 1;
        if (DAT_14cb98a7c == 0) {
          iVar11 = (int)uVar12 + -1;
        }
        else {
          *(int *)(lVar2 + (longlong)DAT_14cb98a78 * 0x20) = (int)uVar12 + -1;
          iVar11 = (int)uVar1;
        }
        piVar7[-1] = -1;
        iVar13 = -1;
        if (0 < DAT_14cb98a7c) {
          iVar13 = DAT_14cb98a78;
        }
        *piVar7 = iVar13;
        DAT_14cb98a7c = DAT_14cb98a7c + 1;
        piVar7 = piVar7 + -8;
        uVar12 = uVar1;
        DAT_14cb98a78 = iVar11;
      } while ((longlong)iVar8 < (longlong)uVar1);
    }
    if (iVar3 == 0) {
      uVar10 = uVar9 + 0x1f >> 5;
      DAT_14cb98a70 = uVar9;
      if (DAT_14cb98a74 + 0x1f >> 5 < uVar10) {
        FUN_14499171c(&DAT_14cb98a58,0,uVar10,4);
        DAT_14cb98a74 = uVar9 + 0x1f & 0xffffffe0;
      }
      puVar6 = DAT_14cb98a68;
      if (DAT_14cb98a68 == (undefined *)0x0) {
        puVar6 = &DAT_14cb98a58;
      }
      if (uVar9 < 0x101) {
        uVar10 = uVar10 + (uVar10 == 0);
      }
      memset(puVar6,0,(ulonglong)(uVar10 << 2));
      uVar9 = DAT_14cb98a70 + 0x1f;
      if (-1 < (int)DAT_14cb98a70) {
        uVar9 = DAT_14cb98a70;
      }
      if ((int)DAT_14cb98a70 % 0x20 != 0) {
        puVar6 = &DAT_14cb98a58;
        if (DAT_14cb98a68 != (undefined *)0x0) {
          puVar6 = DAT_14cb98a68;
        }
        bVar5 = -(char)((int)DAT_14cb98a70 % 0x20);
        *(uint *)(puVar6 + (longlong)((int)uVar9 >> 5) * 4) =
             (uint)(*(int *)(puVar6 + (longlong)((int)uVar9 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else if (-1 < (int)uVar9) {
      uVar4 = FUN_144a54ea4(&DAT_14cb98a58,uVar9);
      FUN_1447c6044(&DAT_14cb98a58,uVar4,uVar9,0);
      return;
    }
  }
  return;
}



// FUNCTION 148ac6e94 FUN_148ac6e94 body=515 status=ok
// SIG undefined FUN_148ac6e94(void)

void FUN_148ac6e94(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  undefined *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cb98a88 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb98a88,0,0,4);
  }
  uVar2 = DAT_14cb98a90;
  uVar3 = local_70;
  if (DAT_14cb98a90 != 0) {
    uVar9 = 0;
    FUN_144a1cbf0(&DAT_14cb98a80,0,DAT_14cb98a90,4);
    if (0 < (int)uVar2) {
      do {
        puVar7 = DAT_14cb98a88;
        if (DAT_14cb98a88 == (undefined *)0x0) {
          puVar7 = &DAT_14cb98a80;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14cb98a90 + 0x7fffffff & uVar9) * 4) = 0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_60 = 0x100000000;
    local_58 = &DAT_14cb98a58;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (DAT_14cb98a70 != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = &DAT_14cb98a48;
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    if (local_70._4_4_ < *(int *)(local_58 + 0x18)) {
      iVar11 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar1 = *local_88;
        lVar10 = (longlong)iVar11 * 0x20;
        iVar4 = *(int *)(lVar1 + 8 + lVar10);
        puVar8 = &DAT_149dfb77a;
        iVar6 = 0;
        if (iVar4 != 0) {
          puVar8 = *(undefined2 **)(lVar1 + lVar10);
          iVar6 = iVar4 + -1;
        }
        iVar4 = FUN_144a49b4a(iVar6,puVar8);
        uVar5 = (longlong)iVar4 & (longlong)(int)DAT_14cb98a90 - 1U;
        iVar4 = (int)uVar5;
        *(int *)(lVar1 + 0x1c + lVar10) = iVar4;
        puVar7 = DAT_14cb98a88;
        if (DAT_14cb98a88 == (undefined *)0x0) {
          puVar7 = &DAT_14cb98a80;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar10) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14cb98a90 - 1U & uVar5) * 4);
        puVar7 = DAT_14cb98a88;
        if (DAT_14cb98a88 == (undefined *)0x0) {
          puVar7 = &DAT_14cb98a80;
        }
        *(int *)(puVar7 + ((longlong)iVar4 & (longlong)(int)DAT_14cb98a90 - 1U) * 4) = iVar11;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar11 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac7098 FUN_148ac7098 body=327 status=ok
// SIG undefined FUN_148ac7098(void)

undefined4 * FUN_148ac7098(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148ac71e0(local_40);
  FUN_148ac7362(param_2,local_38);
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  iVar9 = *(int *)(local_38 + 1);
  if (iVar9 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)*local_38;
  }
  iVar2 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar2 = 0;
  }
  uVar5 = FUN_144a49b4a(iVar2,puVar10);
  cVar4 = FUN_148ac72ee(uVar5,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar6 = DAT_14cb98a50 - DAT_14cb98a7c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb98a90)) {
      uVar5 = DAT_14cb98a90 - 1U & uVar5;
      *(uint *)((longlong)local_38 + 0x1c) = uVar5;
      puVar7 = DAT_14cb98a88;
      if (DAT_14cb98a88 == (undefined *)0x0) {
        puVar7 = &DAT_14cb98a80;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb98a90 - 1U & (longlong)(int)uVar5) * 4);
      puVar7 = DAT_14cb98a88;
      if (DAT_14cb98a88 == (undefined *)0x0) {
        puVar7 = &DAT_14cb98a80;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb98a90 - 1U & (longlong)(int)uVar5) * 4) = local_44
      ;
    }
    else {
      DAT_14cb98a90 = iVar9;
      FUN_148ac6e94();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac71e0 FUN_148ac71e0 body=269 status=ok
// SIG undefined FUN_148ac71e0(void)

int * FUN_148ac71e0(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb98a78;
  iVar4 = DAT_14cb98a50;
  if (DAT_14cb98a7c == 0) {
    iVar2 = DAT_14cb98a50 + 1;
    bVar7 = DAT_14cb98a54 == DAT_14cb98a50;
    DAT_14cb98a50 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cb98a48,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cb98a58,1);
    puVar3 = DAT_14cb98a68;
    if (DAT_14cb98a68 == (undefined *)0x0) {
      puVar3 = &DAT_14cb98a58;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cb98a78;
    DAT_14cb98a78 = *(int *)(DAT_14cb98a48 + 4 + lVar6 * 0x20);
    DAT_14cb98a7c = DAT_14cb98a7c + -1;
    iVar4 = iVar2;
    if (DAT_14cb98a7c != 0) {
      *(undefined4 *)(DAT_14cb98a48 + (longlong)DAT_14cb98a78 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cb98a58;
  if (DAT_14cb98a68 != (undefined *)0x0) {
    puVar3 = DAT_14cb98a68;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cb98a48;
  return param_1;
}



// FUNCTION 148ac72ee FUN_148ac72ee body=116 status=ok
// SIG undefined FUN_148ac72ee(void)

undefined8 FUN_148ac72ee(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if ((DAT_14cb98a50 - DAT_14cb98a7c != 1) && (iVar6 = FUN_148ac73c6(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(DAT_14cb98a48 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(DAT_14cb98a48 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_148ac74a2(*param_3);
    *param_3 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 148ac7362 FUN_148ac7362 body=99 status=ok
// SIG undefined FUN_148ac7362(void)

undefined8 * FUN_148ac7362(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_2 + 2) = *puVar3;
  return param_2;
}



// FUNCTION 148ac73c6 FUN_148ac73c6 body=220 status=ok
// SIG undefined FUN_148ac73c6(void)

int FUN_148ac73c6(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if (DAT_14cb98a50 != DAT_14cb98a7c) {
    puVar8 = &DAT_14cb98a80;
    if (DAT_14cb98a88 != (undefined *)0x0) {
      puVar8 = DAT_14cb98a88;
    }
    iVar1 = *(int *)(puVar8 + (ulonglong)(DAT_14cb98a90 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      iVar2 = (int)param_2[1];
LAB_148ac7420:
      lVar9 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(DAT_14cb98a48 + 8 + lVar9);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar4 = 0;
        do {
          uVar6 = *(ushort *)(*(longlong *)(DAT_14cb98a48 + lVar9) + lVar4);
          uVar7 = (ulonglong)uVar6;
          uVar5 = *(ushort *)(*param_2 + lVar4);
          if (uVar6 == uVar5) {
            if (uVar6 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar5 | uVar6)) goto LAB_148ac7497;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            uVar10 = (ulonglong)uVar5;
            uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar10]) goto LAB_148ac7497;
          }
          lVar4 = lVar4 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_148ac7488;
    }
  }
  return -1;
LAB_148ac7497:
  if (uVar6 == uVar5) {
    return iVar1;
  }
LAB_148ac7488:
  iVar1 = *(int *)(DAT_14cb98a48 + 0x18 + lVar9);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_148ac7420;
}



// FUNCTION 148ac74a2 FUN_148ac74a2 body=128 status=ok
// SIG undefined FUN_148ac74a2(void)

void FUN_148ac74a2(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb98a48;
  if (DAT_14cb98a7c != 0) {
    *(int *)(DAT_14cb98a48 + (longlong)DAT_14cb98a78 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb98a7c) {
    iVar4 = DAT_14cb98a78;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14cb98a7c = DAT_14cb98a7c + 1;
  puVar3 = &DAT_14cb98a58;
  if (DAT_14cb98a68 != (undefined *)0x0) {
    puVar3 = DAT_14cb98a68;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb98a78 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 148ac7522 FUN_148ac7522 body=99 status=ok
// SIG undefined FUN_148ac7522(void)

void FUN_148ac7522(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar2 + uVar1;
  if (*(int *)((longlong)param_1 + 0xc) - uVar2 < uVar1) {
    FUN_148ac5928(param_1,uVar2);
  }
  memmove((void *)((longlong)(int)uVar1 * 200 + (longlong)*param_1),(void *)*param_1,
          (ulonglong)uVar2 * 200);
  FUN_148ac7585(*param_1,*param_2,uVar1);
  return;
}



// FUNCTION 148ac7585 FUN_148ac7585 body=60 status=ok
// SIG undefined FUN_148ac7585(void)

void FUN_148ac7585(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148abf86e(param_1,param_2);
    param_1 = param_1 + 200;
    param_2 = param_2 + 200;
  }
  return;
}



// FUNCTION 148ac75c2 FUN_148ac75c2 body=29 status=ok
// SIG undefined FUN_148ac75c2(void)

undefined8 FUN_148ac75c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ac75fc FUN_148ac75fc body=93 status=ok
// SIG undefined FUN_148ac75fc(void)

void FUN_148ac75fc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5060c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ac765a FUN_148ac765a body=93 status=ok
// SIG undefined FUN_148ac765a(void)

void FUN_148ac765a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5060c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ac76b8 FUN_148ac76b8 body=126 status=ok
// SIG undefined FUN_148ac76b8(void)

void FUN_148ac76b8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5060c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ac7727. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ac7742 FUN_148ac7742 body=21 status=ok
// SIG undefined FUN_148ac7742(void)

undefined8 FUN_148ac7742(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148ac7758 FUN_148ac7758 body=279 status=ok
// SIG undefined FUN_148ac7758(void)

void FUN_148ac7758(longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar3 + 1;
  uVar7 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar7 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar3;
  }
  else {
    bVar8 = false;
    do {
      lVar10 = uVar7 * 0x10 + -8;
      uVar9 = uVar7;
      while ((*(int *)(*param_1 + lVar10) != 0 &&
             (plVar4 = *(longlong **)(*param_1 + -8 + lVar10), plVar4 != (longlong *)0x0))) {
        local_50 = *param_3;
        local_48 = param_3[1];
        if (local_48 != 0) {
          LOCK();
          *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
          UNLOCK();
        }
        cVar6 = (**(code **)(*plVar4 + 0x60))(plVar4,param_2,&local_50);
        if (cVar6 == '\0') break;
        lVar10 = lVar10 + -0x10;
        bVar5 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar5) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar8) goto LAB_148ac7815;
          goto LAB_148ac7824;
        }
      }
      uVar7 = uVar9 - 1;
      bVar8 = true;
    } while (1 < uVar9);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148ac7815:
    FUN_14474d06a(param_1,0);
  }
LAB_148ac7824:
  plVar4 = (longlong *)param_3[1];
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
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac7870 FUN_148ac7870 body=323 status=ok
// SIG undefined FUN_148ac7870(void)

undefined4 * FUN_148ac7870(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140ac5f02(param_1,local_48);
  FUN_140b805d2(param_3,local_40);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar6);
  local_58 = 0;
  cVar2 = FUN_140ac5e66(param_1,uVar3,local_40,&local_4c);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x24) = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_140b7fdd8(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac79c2 FUN_148ac79c2 body=118 status=ok
// SIG undefined FUN_148ac79c2(void)

void FUN_148ac79c2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148ac7a38 FUN_148ac7a38 body=38 status=ok
// SIG undefined FUN_148ac7a38(void)

undefined8 FUN_148ac7a38(undefined8 param_1,int param_2)

{
  FUN_145c56ff0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ac7a5e FUN_148ac7a5e body=38 status=ok
// SIG undefined FUN_148ac7a5e(void)

undefined8 FUN_148ac7a5e(undefined8 param_1,int param_2)

{
  FUN_145b21a70();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ac7a84 FUN_148ac7a84 body=31 status=ok
// SIG undefined FUN_148ac7a84(void)

undefined8 FUN_148ac7a84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ac7ac0 FUN_148ac7ac0 body=93 status=ok
// SIG undefined FUN_148ac7ac0(void)

void FUN_148ac7ac0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b506780;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ac7b1e FUN_148ac7b1e body=93 status=ok
// SIG undefined FUN_148ac7b1e(void)

void FUN_148ac7b1e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b506780;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ac7b7c FUN_148ac7b7c body=126 status=ok
// SIG undefined FUN_148ac7b7c(void)

void FUN_148ac7b7c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b506780;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ac7beb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ac7c06 FUN_148ac7c06 body=31 status=ok
// SIG undefined FUN_148ac7c06(void)

undefined8 FUN_148ac7c06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ac7c42 FUN_148ac7c42 body=93 status=ok
// SIG undefined FUN_148ac7c42(void)

void FUN_148ac7c42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b504de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5067f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ac7ca0 FUN_148ac7ca0 body=93 status=ok
// SIG undefined FUN_148ac7ca0(void)

void FUN_148ac7ca0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b504de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5067f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ac7cfe FUN_148ac7cfe body=126 status=ok
// SIG undefined FUN_148ac7cfe(void)

void FUN_148ac7cfe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b504de0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5067f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ac7d6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ac7d88 FUN_148ac7d88 body=21 status=ok
// SIG undefined FUN_148ac7d88(void)

undefined8 FUN_148ac7d88(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148ac7d9e FUN_148ac7d9e body=31 status=ok
// SIG undefined FUN_148ac7d9e(void)

undefined8 FUN_148ac7d9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ac7dda FUN_148ac7dda body=93 status=ok
// SIG undefined FUN_148ac7dda(void)

void FUN_148ac7dda(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b506860;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ac7e38 FUN_148ac7e38 body=126 status=ok
// SIG undefined FUN_148ac7e38(void)

void FUN_148ac7e38(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b506860;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ac7ea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ac7eb6 FUN_148ac7eb6 body=21 status=ok
// SIG undefined FUN_148ac7eb6(void)

undefined8 FUN_148ac7eb6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148ac7ecc FUN_148ac7ecc body=31 status=ok
// SIG undefined FUN_148ac7ecc(void)

undefined8 FUN_148ac7ecc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ac7f08 FUN_148ac7f08 body=93 status=ok
// SIG undefined FUN_148ac7f08(void)

void FUN_148ac7f08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5068d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ac7f66 FUN_148ac7f66 body=93 status=ok
// SIG undefined FUN_148ac7f66(void)

void FUN_148ac7f66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5068d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ac7fc4 FUN_148ac7fc4 body=126 status=ok
// SIG undefined FUN_148ac7fc4(void)

void FUN_148ac7fc4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5068d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ac8033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ac8050 FUN_148ac8050 body=31 status=ok
// SIG undefined FUN_148ac8050(void)

undefined8 FUN_148ac8050(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ac808c FUN_148ac808c body=93 status=ok
// SIG undefined FUN_148ac808c(void)

void FUN_148ac808c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b506940;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ac80ea FUN_148ac80ea body=93 status=ok
// SIG undefined FUN_148ac80ea(void)

void FUN_148ac80ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b506940;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ac8148 FUN_148ac8148 body=126 status=ok
// SIG undefined FUN_148ac8148(void)

void FUN_148ac8148(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b506940;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ac81b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ac81d4 FUN_148ac81d4 body=21 status=ok
// SIG undefined FUN_148ac81d4(void)

undefined8 FUN_148ac81d4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148ac81ea FUN_148ac81ea body=164 status=ok
// SIG undefined FUN_148ac81ea(void)

void FUN_148ac81ea(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148ac826a;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148ac826a:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148ac828e FUN_148ac828e body=69 status=ok
// SIG undefined FUN_148ac828e(void)

void FUN_148ac828e(void)

{
  if (1 < DAT_14cb98b10) {
    FUN_145c08366(&DAT_14cb98ac8,0);
    DAT_14cb98b10 = 1;
    FUN_148ac8442();
    return;
  }
  FUN_148ac82d4();
  FUN_145c08366(&DAT_14cb98ac8,0);
  return;
}



// FUNCTION 148ac82d4 FUN_148ac82d4 body=364 status=ok
// SIG undefined FUN_148ac82d4(void)

void FUN_148ac82d4(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar5 = &DAT_14cb98b00;
  if (DAT_14cb98b08 != (undefined *)0x0) {
    puVar5 = DAT_14cb98b08;
  }
  iVar4 = DAT_14cb98b10 + 3;
  if (-1 < DAT_14cb98b10) {
    iVar4 = DAT_14cb98b10;
  }
  if (DAT_14cb98ad0 - DAT_14cb98afc < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14cb98ad8;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14cb98af0 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14cb98af0;
    }
    local_78 = &DAT_14cb98ac8;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14cb98ad8)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar2 * 0x20) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14cb98ac8 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14cb98ad8 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14cb98b10) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14cb98b10);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ac8442 FUN_148ac8442 body=480 status=ok
// SIG undefined FUN_148ac8442(void)

void FUN_148ac8442(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb98b08 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb98b08,0,0,4);
  }
  uVar2 = DAT_14cb98b10;
  uVar3 = local_50;
  if (DAT_14cb98b10 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb98b00,0,DAT_14cb98b10,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14cb98b08;
        if (DAT_14cb98b08 == (undefined *)0x0) {
          puVar5 = &DAT_14cb98b00;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cb98b10 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb98ad8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb98af0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb98ac8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar9 = (longlong)
                (int)((uint)((ulonglong)*(undefined8 *)(lVar1 + lVar6) >> 0x20) ^
                     (uint)*(undefined8 *)(lVar1 + lVar6)) & (longlong)(int)DAT_14cb98b10 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar6) = iVar8;
        puVar5 = DAT_14cb98b08;
        if (DAT_14cb98b08 == (undefined *)0x0) {
          puVar5 = &DAT_14cb98b00;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cb98b10 - 1U & uVar9) * 4);
        puVar5 = DAT_14cb98b08;
        if (DAT_14cb98b08 == (undefined *)0x0) {
          puVar5 = &DAT_14cb98b00;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cb98b10 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ac8624 FUN_148ac8624 body=334 status=ok
// SIG undefined FUN_148ac8624(void)

undefined4 * FUN_148ac8624(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148ac8774(local_40);
  puVar1 = (undefined8 *)param_2[1];
  *local_38 = *(undefined8 *)*param_2;
  local_38[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_38 + 2) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_38 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar9 = (uint)((ulonglong)*local_38 >> 0x20) ^ (uint)*local_38;
  cVar4 = FUN_148ac8882(uVar9,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar5 = DAT_14cb98ad0 - DAT_14cb98afc;
    iVar8 = 1;
    if (3 < uVar5) {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= DAT_14cb98b10)) {
      uVar9 = DAT_14cb98b10 - 1U & uVar9;
      *(uint *)((longlong)local_38 + 0x1c) = uVar9;
      puVar6 = DAT_14cb98b08;
      if (DAT_14cb98b08 == (undefined *)0x0) {
        puVar6 = &DAT_14cb98b00;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)(puVar6 + ((longlong)DAT_14cb98b10 - 1U & (longlong)(int)uVar9) * 4);
      puVar6 = DAT_14cb98b08;
      if (DAT_14cb98b08 == (undefined *)0x0) {
        puVar6 = &DAT_14cb98b00;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14cb98b10 - 1U & (longlong)(int)uVar9) * 4) = local_44
      ;
    }
    else {
      DAT_14cb98b10 = iVar8;
      FUN_148ac8442();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac8774 FUN_148ac8774 body=269 status=ok
// SIG undefined FUN_148ac8774(void)

int * FUN_148ac8774(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb98af8;
  iVar4 = DAT_14cb98ad0;
  if (DAT_14cb98afc == 0) {
    iVar2 = DAT_14cb98ad0 + 1;
    bVar7 = DAT_14cb98ad4 == DAT_14cb98ad0;
    DAT_14cb98ad0 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cb98ac8,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cb98ad8,1);
    puVar3 = DAT_14cb98ae8;
    if (DAT_14cb98ae8 == (undefined *)0x0) {
      puVar3 = &DAT_14cb98ad8;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cb98af8;
    DAT_14cb98af8 = *(int *)(DAT_14cb98ac8 + 4 + lVar6 * 0x20);
    DAT_14cb98afc = DAT_14cb98afc + -1;
    iVar4 = iVar2;
    if (DAT_14cb98afc != 0) {
      *(undefined4 *)(DAT_14cb98ac8 + (longlong)DAT_14cb98af8 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cb98ad8;
  if (DAT_14cb98ae8 != (undefined *)0x0) {
    puVar3 = DAT_14cb98ae8;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cb98ac8;
  return param_1;
}



// FUNCTION 148ac8882 FUN_148ac8882 body=165 status=ok
// SIG undefined FUN_148ac8882(void)

undefined8 FUN_148ac8882(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb98ad0 - DAT_14cb98afc != 1) {
    local_30 = *param_2;
    iVar6 = FUN_148ac8928();
    if (iVar6 != -1) {
      puVar1 = (undefined4 *)(DAT_14cb98ac8 + (longlong)iVar6 * 0x20);
      if (*(longlong *)(DAT_14cb98ac8 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *(undefined4 *)param_2;
      uVar3 = *(undefined4 *)((longlong)param_2 + 4);
      uVar4 = *(undefined4 *)(param_2 + 1);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined8 *)(puVar1 + 4) = param_2[2];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_148ac89ee(*param_3);
      *param_3 = iVar6;
      uVar7 = 1;
      goto LAB_148ac88ad;
    }
  }
  uVar7 = 0;
LAB_148ac88ad:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac8928 FUN_148ac8928 body=196 status=ok
// SIG undefined FUN_148ac8928(void)

int FUN_148ac8928(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb98ad0 != DAT_14cb98afc) {
    puVar2 = &DAT_14cb98b00;
    if (DAT_14cb98b08 != (undefined *)0x0) {
      puVar2 = DAT_14cb98b08;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cb98b10 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cb98ac8 + (longlong)iVar3 * 0x20);
        cVar1 = FUN_148a63cee(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_148ac89c8;
        iVar3 = *(int *)(DAT_14cb98ac8 + 0x18 + (longlong)iVar3 * 0x20);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_148ac89c8:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac89ee FUN_148ac89ee body=128 status=ok
// SIG undefined FUN_148ac89ee(void)

void FUN_148ac89ee(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb98ac8;
  if (DAT_14cb98afc != 0) {
    *(int *)(DAT_14cb98ac8 + (longlong)DAT_14cb98af8 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb98afc) {
    iVar4 = DAT_14cb98af8;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14cb98afc = DAT_14cb98afc + 1;
  puVar3 = &DAT_14cb98ad8;
  if (DAT_14cb98ae8 != (undefined *)0x0) {
    puVar3 = DAT_14cb98ae8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb98af8 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 148ac8a8a FUN_148ac8a8a body=266 status=ok
// SIG undefined FUN_148ac8a8a(void)

void FUN_148ac8a8a(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  lVar1 = DAT_14cb98ac8;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb98ad0 != DAT_14cb98afc) {
    puVar4 = &DAT_14cb98b00;
    if (DAT_14cb98b08 != (undefined *)0x0) {
      puVar4 = DAT_14cb98b08;
    }
    uVar3 = (longlong)(int)((uint)((ulonglong)param_1 >> 0x20) ^ (uint)param_1) &
            (longlong)DAT_14cb98b10 - 1U;
    if ((longlong)*(int *)(puVar4 + uVar3 * 4) != -1) {
      lVar6 = (longlong)*(int *)(puVar4 + uVar3 * 4) * 0x20;
      local_38 = *(undefined8 *)(DAT_14cb98ac8 + lVar6);
      local_40 = param_1;
      cVar2 = FUN_148a63cee();
      if (cVar2 == '\0') {
        lVar1 = lVar1 + lVar6;
        do {
          lVar5 = lVar1;
          lVar6 = (longlong)*(int *)(lVar5 + 0x18);
          if (lVar6 == -1) goto LAB_148ac8aed;
          lVar6 = lVar6 * 0x20;
          lVar1 = DAT_14cb98ac8 + lVar6;
          local_38 = *(undefined8 *)(DAT_14cb98ac8 + lVar6);
          local_40 = param_1;
          cVar2 = FUN_148a63cee(&local_38,&local_40);
        } while (cVar2 == '\0');
        puVar7 = (undefined4 *)(lVar5 + 0x18);
      }
      else {
        puVar7 = (undefined4 *)(puVar4 + uVar3 * 4);
      }
      FUN_148ac8b96(*puVar7);
    }
  }
LAB_148ac8aed:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac8b96 FUN_148ac8b96 body=96 status=ok
// SIG undefined FUN_148ac8b96(void)

void FUN_148ac8b96(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  longlong lVar4;
  
  puVar3 = &DAT_14cb98b00;
  if (DAT_14cb98b08 != (undefined *)0x0) {
    puVar3 = DAT_14cb98b08;
  }
  lVar4 = (longlong)*(int *)(DAT_14cb98ac8 + 0x1c + (longlong)param_1 * 0x20);
  iVar2 = *(int *)(puVar3 + lVar4 * 4);
  if (iVar2 == param_1) {
    puVar1 = (undefined4 *)(puVar3 + lVar4 * 4);
  }
  else {
    do {
      lVar4 = (longlong)iVar2;
      iVar2 = *(int *)(DAT_14cb98ac8 + 0x18 + lVar4 * 0x20);
    } while (iVar2 != param_1);
    puVar1 = (undefined4 *)(DAT_14cb98ac8 + lVar4 * 0x20 + 0x18);
  }
  *puVar1 = *(undefined4 *)(DAT_14cb98ac8 + (longlong)param_1 * 0x20 + 0x18);
  FUN_148ac8bf6();
  return;
}



// FUNCTION 148ac8bf6 FUN_148ac8bf6 body=48 status=ok
// SIG undefined FUN_148ac8bf6(void)

void FUN_148ac8bf6(int param_1)

{
  if (*(longlong *)(DAT_14cb98ac8 + 8 + (longlong)param_1 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_148ac89ee(param_1);
  return;
}



// FUNCTION 148ac8c26 FUN_148ac8c26 body=76 status=ok
// SIG undefined FUN_148ac8c26(void)

void FUN_148ac8c26(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148ac8c72 FUN_148ac8c72 body=43 status=ok
// SIG undefined FUN_148ac8c72(void)

void FUN_148ac8c72(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148ac11f8(param_1);
    param_1 = param_1 + 0x90;
  }
  return;
}



// FUNCTION 148ac8c9d FUN_148ac8c9d body=193 status=ok
// SIG undefined FUN_148ac8c9d(void)

void FUN_148ac8c9d(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  cVar1 = (**(code **)(*param_1 + 0x158))
                    (param_1,&DAT_14cb98b30,FUN_148ac8d75,FUN_148ac8dd3,&LAB_148ac8dce,
                     &LAB_148ac8d5e);
  if (cVar1 != '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x160))(param_1,(longlong)DAT_14cb98b38);
  if (0 < DAT_14cb98b38) {
    lVar2 = 0;
    iVar3 = 0;
    do {
      lVar4 = DAT_14cb98b30 + lVar2;
      (**(code **)(*param_1 + 0x28))(param_1);
      FUN_148ac0be0(lVar4,param_1);
      (**(code **)(*param_1 + 0x48))(param_1,lVar4);
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 0x90;
    } while (iVar3 < DAT_14cb98b38);
  }
                    /* WARNING: Could not recover jumptable at 0x000148ac8d57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1);
  return;
}



// FUNCTION 148ac8d75 FUN_148ac8d75 body=89 status=ok
// SIG undefined FUN_148ac8d75(void)

void FUN_148ac8d75(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_2 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ac8d8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))(param_1);
    return;
  }
  lVar1 = (longlong)param_3 * 0x90 + *param_2;
  (**(code **)(*param_1 + 0x28))(param_1);
  FUN_148ac0be0(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x000148ac8dcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,lVar1);
  return;
}



// FUNCTION 148ac8dd3 FUN_148ac8dd3 body=62 status=ok
// SIG undefined FUN_148ac8dd3(void)

void FUN_148ac8dd3(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 * 0x90 + *param_2;
  (**(code **)(*param_1 + 0x38))();
  FUN_148ac0be0(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x000148ac8e0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,lVar1);
  return;
}



// FUNCTION 148ac8e14 FUN_148ac8e14 body=828 status=ok
// SIG undefined FUN_148ac8e14(void)

undefined4 * FUN_148ac8e14(undefined4 *param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  void *_Src;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *_Str;
  bool bVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 *local_88;
  undefined4 *local_80;
  wchar_t *local_78;
  int local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  memset(param_1 + 2,0,0x81);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  iVar3 = FUN_1403de9f2(param_3 + 8,&local_58,&DAT_149e06184,0);
  if (0 < iVar3) {
    iVar5 = *(int *)(local_58 + 1) + -1;
    if (*(int *)(local_58 + 1) == 0) {
      iVar5 = 0;
    }
    FUN_1402980a2(param_1 + 2,*local_58,iVar5);
    if (iVar3 != 1) {
      iVar3 = *(int *)(local_58 + 3) + -1;
      if (*(int *)(local_58 + 3) == 0) {
        iVar3 = 0;
      }
      FUN_1402980a2(param_1 + 6,local_58[2],iVar3);
    }
  }
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  uVar2 = uStack_50 >> 0x20;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    FUN_1408be2c4(&local_58,0);
  }
  uVar4 = FUN_1403de9f2(param_3 + 0x28,&local_58,&DAT_149e06184,0);
  if (0 < (int)uVar4) {
    iVar3 = *(int *)(local_58 + 1) + -1;
    if (*(int *)(local_58 + 1) == 0) {
      iVar3 = 0;
    }
    FUN_1402980a2(param_1 + 10,*local_58,iVar3);
    if (uVar4 != 1) {
      iVar3 = *(int *)(local_58 + 3) + -1;
      if (*(int *)(local_58 + 3) == 0) {
        iVar3 = 0;
      }
      FUN_1402980a2(param_1 + 0xe,local_58[2],iVar3);
      if (2 < uVar4) {
        iVar3 = *(int *)(local_58 + 5) + -1;
        if (*(int *)(local_58 + 5) == 0) {
          iVar3 = 0;
        }
        FUN_1402980a2(param_1 + 0x1a,local_58[4],iVar3);
      }
    }
  }
  *param_1 = param_2;
  local_88 = param_1;
  FUN_144a787a6(param_1 + 0x12,param_3 + 0x18);
  iVar3 = *(int *)(param_3 + 0x40);
  if ((longlong)iVar3 != 0) {
    local_80 = local_88 + 0x1e;
    lVar1 = *(longlong *)(param_3 + 0x38);
    lVar7 = 0;
    do {
      local_68 = (void *)0x0;
      local_60 = *(int *)(lVar1 + 8 + lVar7);
      lVar8 = (longlong)local_60;
      _Src = *(void **)(lVar1 + lVar7);
      if (lVar8 == 0) {
        local_5c = 0;
      }
      else {
        FUN_1446dd670(&local_68,local_60,0);
        memcpy(local_68,_Src,lVar8 * 2);
      }
      FUN_1400b22c2(&local_78,"url_learn_more_noloc");
      _Str = local_78;
      if (local_70 == 0) {
        _Str = L"";
      }
      if (_Str == (wchar_t *)0x0) {
        bVar9 = false;
      }
      else {
        sVar6 = wcslen(_Str);
        local_90 = 0xffffffff;
        local_98 = 0;
        iVar5 = FUN_1447ee042(&local_68,_Str,sVar6 & 0xffffffff,1);
        bVar9 = iVar5 != -1;
      }
      if (local_78 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (bVar9) {
        FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
        uVar2 = uStack_50 >> 0x20;
        uStack_50 = uStack_50 & 0xffffffff00000000;
        if ((int)uVar2 != 0) {
          FUN_1408be2c4(&local_58,0);
        }
        FUN_1403de9f2(&local_68,&local_58,&DAT_149e35204,0);
        iVar3 = *(int *)(local_58 + 5) + -1;
        if (*(int *)(local_58 + 5) == 0) {
          iVar3 = 0;
        }
        FUN_1402980a2(local_80,local_58[4],iVar3);
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      if (local_68 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar7);
  }
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_88;
}



// FUNCTION 148ac9152 FUN_148ac9152 body=325 status=ok
// SIG undefined FUN_148ac9152(void)

void FUN_148ac9152(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_2 + 10) = 0;
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_2 + 0xe) = 0;
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_2 + 0x12) = 0;
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_2 + 0x16) = 0;
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_2 + 0x1a) = 0;
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_2 + 0x1e) = 0;
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  return;
}



// FUNCTION 148ac9298 FUN_148ac9298 body=159 status=ok
// SIG undefined FUN_148ac9298(void)

void FUN_148ac9298(int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cb98b38;
  if (param_1 <= (int)DAT_14cb98b38) {
    if (DAT_14cb98b3c == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb98b38) {
        uVar2 = DAT_14cb98b38;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14cb98b38 * 3) >> 3) + (longlong)(int)DAT_14cb98b38 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x90,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    DAT_14cb98b3c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb98b30,param_1,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148ac9338 FUN_148ac9338 body=40 status=ok
// SIG undefined FUN_148ac9338(void)

void FUN_148ac9338(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148ac9360(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 148ac9360 FUN_148ac9360 body=61 status=ok
// SIG undefined FUN_148ac9360(void)

void FUN_148ac9360(longlong *param_1)

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



// FUNCTION 148ac939d FUN_148ac939d body=190 status=ok
// SIG undefined FUN_148ac939d(void)

void FUN_148ac939d(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  cVar1 = (**(code **)(*param_1 + 0x158))
                    (param_1,&DAT_14cb98b40,FUN_148ac9472,FUN_148ac94d0,&LAB_148ac94cb,
                     &LAB_148ac945b);
  if (cVar1 != '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x160))(param_1,(longlong)DAT_14cb98b48);
  if (0 < DAT_14cb98b48) {
    lVar2 = 0;
    iVar3 = 0;
    do {
      lVar4 = DAT_14cb98b40 + lVar2;
      (**(code **)(*param_1 + 0x28))(param_1);
      FUN_148ac127c(lVar4,param_1);
      (**(code **)(*param_1 + 0x48))(param_1,lVar4);
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 0x30;
    } while (iVar3 < DAT_14cb98b48);
  }
                    /* WARNING: Could not recover jumptable at 0x000148ac9454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1);
  return;
}



// FUNCTION 148ac9472 FUN_148ac9472 body=89 status=ok
// SIG undefined FUN_148ac9472(void)

void FUN_148ac9472(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_2 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ac948c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))(param_1);
    return;
  }
  lVar1 = (longlong)param_3 * 0x30 + *param_2;
  (**(code **)(*param_1 + 0x28))(param_1);
  FUN_148ac127c(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x000148ac94c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,lVar1);
  return;
}



// FUNCTION 148ac94d0 FUN_148ac94d0 body=62 status=ok
// SIG undefined FUN_148ac94d0(void)

void FUN_148ac94d0(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 * 0x30 + *param_2;
  (**(code **)(*param_1 + 0x38))();
  FUN_148ac127c(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x000148ac950b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,lVar1);
  return;
}



// FUNCTION 148ac950e FUN_148ac950e body=159 status=ok
// SIG undefined FUN_148ac950e(void)

void FUN_148ac950e(int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cb98b48;
  if (param_1 <= (int)DAT_14cb98b48) {
    if (DAT_14cb98b4c == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb98b48) {
        uVar2 = DAT_14cb98b48;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14cb98b48 * 3) >> 3) + (longlong)(int)DAT_14cb98b48 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    DAT_14cb98b4c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb98b40,param_1,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148ac95ae FUN_148ac95ae body=64 status=ok
// SIG undefined FUN_148ac95ae(void)

void FUN_148ac95ae(void)

{
  if (DAT_14cb98b4c != 0) {
    DAT_14cb98b4c = 0;
    FUN_1446f8d3c(&DAT_14cb98b40,DAT_14cb98b48,0,0x30,8);
  }
  return;
}



// FUNCTION 148ac95fc FUN_148ac95fc body=95 status=ok
// SIG undefined FUN_148ac95fc(void)

byte * FUN_148ac95fc(byte *param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = param_2;
  pbVar1 = param_1 + 0x28;
  if (param_2 != 0) {
    pbVar1 = param_1 + 8;
  }
  FUN_144a787a6(pbVar1,param_3);
  FUN_144a787a6(param_1 + (ulonglong)(param_2 ^ 1) * 0x20 + 0x18,param_4);
  return param_1;
}



// FUNCTION 148ac965c FUN_148ac965c body=31 status=ok
// SIG undefined FUN_148ac965c(void)

undefined8 FUN_148ac965c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ac9698 FUN_148ac9698 body=93 status=ok
// SIG undefined FUN_148ac9698(void)

void FUN_148ac9698(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b506fb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ac96f6 FUN_148ac96f6 body=93 status=ok
// SIG undefined FUN_148ac96f6(void)

void FUN_148ac96f6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b506fb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ac9754 FUN_148ac9754 body=126 status=ok
// SIG undefined FUN_148ac9754(void)

void FUN_148ac9754(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b506fb0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ac97c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ac97de FUN_148ac97de body=21 status=ok
// SIG undefined FUN_148ac97de(void)

undefined8 FUN_148ac97de(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148ac97f4 FUN_148ac97f4 body=32 status=ok
// SIG undefined FUN_148ac97f4(void)

void * FUN_148ac97f4(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}


