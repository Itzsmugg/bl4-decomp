// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145cbccdc FUN_145cbccdc body=114 status=ok
// SIG undefined FUN_145cbccdc(void)

undefined8 * FUN_145cbccdc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140ffc8f2();
  *param_1 = &PTR_FUN_14a6e7fe0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar1;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0x10] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464e0;
  param_1[0xf] = uVar1;
  param_1[0x11] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 3;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 7;
  return param_1;
}



// FUNCTION 145cbcd5a FUN_145cbcd5a body=114 status=ok
// SIG undefined FUN_145cbcd5a(void)

undefined8 * FUN_145cbcd5a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140ffc8f2();
  *param_1 = &PTR_FUN_14a6e8570;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar1;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0x10] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464e0;
  param_1[0xf] = uVar1;
  param_1[0x11] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 3;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 7;
  return param_1;
}



// FUNCTION 145cbcdcc FUN_145cbcdcc body=40 status=ok
// SIG undefined FUN_145cbcdcc(void)

undefined8 FUN_145cbcdcc(undefined8 param_1,int param_2)

{
  FUN_145cbcdf4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbcdf4 FUN_145cbcdf4 body=85 status=ok
// SIG undefined FUN_145cbcdf4(void)

void FUN_145cbcdf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6e0dd0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cbce54 FUN_145cbce54 body=114 status=ok
// SIG undefined FUN_145cbce54(void)

undefined8 * FUN_145cbce54(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140ffc8f2();
  *param_1 = &PTR_FUN_14a6f6140;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xc] = DAT_14c8464e0;
  param_1[0xd] = uVar1;
  param_1[0xe] = DAT_14c8464f0;
  param_1[0x11] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xf] = DAT_14c8464e0;
  param_1[0x10] = uVar1;
  param_1[0x12] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 3;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xfe;
  return param_1;
}



// FUNCTION 145cbcecc FUN_145cbcecc body=120 status=ok
// SIG undefined FUN_145cbcecc(void)

void FUN_145cbcecc(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (DAT_14cb28af0 == '\x01') {
    lVar1 = FUN_14038fb82();
    lVar2 = FUN_1458cbe84();
    lVar3 = (longlong)*(int *)(lVar1 + 0xd60);
    if (0 < lVar3) {
      uVar4 = lVar3 + 1;
      lVar3 = lVar3 * 0x28;
      do {
        lVar3 = lVar3 + -0x28;
        lVar5 = *(longlong *)(lVar1 + 0xd58);
        if (*(longlong *)(lVar1 + 0xd58) == 0) {
          lVar5 = lVar1 + 0xd30;
        }
        if (*(longlong *)(lVar5 + lVar3) == lVar2) {
          *(undefined8 *)(lVar5 + lVar3) = 0;
          ((undefined8 *)(lVar5 + lVar3))[1] = 0;
        }
        uVar4 = uVar4 - 1;
      } while (1 < uVar4);
    }
    DAT_14cb28af0 = '\0';
  }
  return;
}



// FUNCTION 145cbcf44 FUN_145cbcf44 body=40 status=ok
// SIG undefined FUN_145cbcf44(void)

undefined8 FUN_145cbcf44(undefined8 param_1,int param_2)

{
  FUN_145cbcf6c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbcf6c FUN_145cbcf6c body=85 status=ok
// SIG undefined FUN_145cbcf6c(void)

void FUN_145cbcf6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad93350;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ad92a20;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cbcfc2 FUN_145cbcfc2 body=201 status=ok
// SIG undefined FUN_145cbcfc2(void)

void FUN_145cbcfc2(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x78);
  uVar2 = 0;
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    puVar1 = puVar3 + (longlong)*(int *)(param_1 + 0x80) * 3;
    do {
      (**(code **)(*(longlong *)*puVar3 + 0x2f0))((longlong *)*puVar3,puVar3[1],1);
      puVar3 = puVar3 + 3;
    } while (puVar3 != puVar1);
    uVar2 = *(undefined4 *)(param_1 + 0x80);
    puVar3 = *(undefined8 **)(param_1 + 0x78);
  }
  FUN_145cbd08b(puVar3,uVar2);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_1489d984e(param_1 + 0x78);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_1489d987e(param_1 + 0x88);
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_1489d98ae(param_1 + 0xa8);
  }
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 145cbd08b FUN_145cbd08b body=49 status=ok
// SIG undefined FUN_145cbd08b(void)

void FUN_145cbd08b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145cbd0c2 FUN_145cbd0c2 body=120 status=ok
// SIG undefined FUN_145cbd0c2(void)

void FUN_145cbd0c2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458d76ca(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b4cf350;
  puVar1[5] = &PTR_FUN_14b4cf970;
  puVar1[6] = &PTR_LAB_14b4cf9b0;
  puVar1[0x125] = 0;
  puVar1[0x122] = 0;
  puVar1[0x123] = 0;
  *(undefined4 *)(puVar1 + 0x124) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 0x126));
                    /* WARNING: Could not recover jumptable at 0x000145cbd133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 0x126),4000);
  return;
}



// FUNCTION 145cbd13a FUN_145cbd13a body=38 status=ok
// SIG undefined FUN_145cbd13a(void)

undefined8 FUN_145cbd13a(undefined8 param_1,int param_2)

{
  FUN_145cbd160();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbd160 FUN_145cbd160 body=462 status=ok
// SIG undefined FUN_145cbd160(void)

void FUN_145cbd160(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8b85c0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  FUN_140e90ec0(param_1 + 0x3f);
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_141197972(param_1[0x34],*(undefined4 *)(param_1 + 0x35));
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x2d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2d] + 0x10))();
  }
  if ((longlong *)param_1[0x2b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2b] + 0x10))();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x1f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1f] + 0x10))();
  }
  if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1d] + 0x10))();
  }
  if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1b] + 0x10))();
  }
  if ((longlong *)param_1[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x19] + 0x10))();
  }
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145cbd32e FUN_145cbd32e body=75 status=ok
// SIG undefined FUN_145cbd32e(void)

undefined8 * FUN_145cbd32e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9e0f00;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145cbd37a(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbd37a FUN_145cbd37a body=53 status=ok
// SIG undefined FUN_145cbd37a(void)

void FUN_145cbd37a(longlong *param_1)

{
  FUN_145cbd3b0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cbd3b0 FUN_145cbd3b0 body=371 status=ok
// SIG undefined FUN_145cbd3b0(void)

void FUN_145cbd3b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar2 = *local_70 + (longlong)iStack_54 * 0x30;
      lVar3 = lVar2 + 0x10;
      *(undefined4 *)(lVar2 + 8) = 0;
      FUN_14011fb0c(lVar3);
      FUN_140038ae8(lVar3);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cbd530 FUN_145cbd530 body=114 status=ok
// SIG undefined FUN_145cbd530(void)

undefined8 * FUN_145cbd530(undefined8 *param_1)

{
  FUN_140198756();
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_14babafb0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 145cbd5a2 FUN_145cbd5a2 body=34 status=ok
// SIG undefined FUN_145cbd5a2(void)

undefined4 FUN_145cbd5a2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x608))();
  return CONCAT31((int3)((uint)(int)param_1[0x139] >> 8),(int)param_1[0x139] == 0);
}



// FUNCTION 145cbd5c4 FUN_145cbd5c4 body=91 status=ok
// SIG undefined FUN_145cbd5c4(void)

void FUN_145cbd5c4(longlong param_1)

{
  if (*(char *)(param_1 + 0x9b6) == '\x01') {
    FUN_14954916e(param_1 + 0x918);
    *(undefined1 *)(param_1 + 0x9b6) = 0;
    LOCK();
    *(undefined4 *)(param_1 + 0x9c8) = 0;
    UNLOCK();
    *(undefined4 *)(param_1 + 0x9a8) = 0;
    if (*(int *)(param_1 + 0x9ac) != 0) {
      FUN_14482f6fa(param_1 + 0x9a0,0);
      return;
    }
  }
  return;
}



// FUNCTION 145cbd620 FUN_145cbd620 body=40 status=ok
// SIG undefined FUN_145cbd620(void)

undefined8 FUN_145cbd620(undefined8 param_1,int param_2)

{
  FUN_145cbd648();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbd648 FUN_145cbd648 body=85 status=ok
// SIG undefined FUN_145cbd648(void)

void FUN_145cbd648(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd7d0c0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145cbd69e FUN_145cbd69e body=40 status=ok
// SIG undefined FUN_145cbd69e(void)

undefined8 FUN_145cbd69e(undefined8 param_1,int param_2)

{
  FUN_145cbd6c6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbd6c6 FUN_145cbd6c6 body=206 status=ok
// SIG undefined FUN_145cbd6c6(void)

void FUN_145cbd6c6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad656b0;
  FUN_145cbd794(param_1[0x24],*(undefined4 *)(param_1 + 0x25));
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_145cbd7c2(param_1 + 0x12);
  FUN_1401b9920(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cbd794 FUN_145cbd794 body=45 status=ok
// SIG undefined FUN_145cbd794(void)

void FUN_145cbd794(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 145cbd7c2 FUN_145cbd7c2 body=55 status=ok
// SIG undefined FUN_145cbd7c2(void)

void FUN_145cbd7c2(longlong *param_1)

{
  FUN_141521b8e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cbd7fa FUN_145cbd7fa body=40 status=ok
// SIG undefined FUN_145cbd7fa(void)

undefined8 FUN_145cbd7fa(undefined8 param_1,int param_2)

{
  FUN_145cbd822();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbd822 FUN_145cbd822 body=331 status=ok
// SIG undefined FUN_145cbd822(void)

void FUN_145cbd822(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a796540;
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x29);
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_145cbd96d(param_1[0x23],*(undefined4 *)(param_1 + 0x24));
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_145cbd99e(param_1 + 0x16);
  FUN_1447a1747(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145cbd9d3(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cbd96d FUN_145cbd96d body=49 status=ok
// SIG undefined FUN_145cbd96d(void)

void FUN_145cbd96d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145cbd99e FUN_145cbd99e body=53 status=ok
// SIG undefined FUN_145cbd99e(void)

void FUN_145cbd99e(longlong *param_1)

{
  FUN_145cbda12();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cbd9d3 FUN_145cbd9d3 body=63 status=ok
// SIG undefined FUN_145cbd9d3(void)

void FUN_145cbd9d3(longlong param_1,int param_2)

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



// FUNCTION 145cbda12 FUN_145cbda12 body=90 status=ok
// SIG undefined FUN_145cbda12(void)

void FUN_145cbda12(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145cbda6c FUN_145cbda6c body=103 status=ok
// SIG undefined FUN_145cbda6c(void)

ulonglong FUN_145cbda6c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145cbdab6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145cbdab6;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145cbdad4 FUN_145cbdad4 body=139 status=ok
// SIG undefined FUN_145cbdad4(void)

void FUN_145cbdad4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(lVar3 + 0x598) != 0) {
    *(undefined8 *)(lVar3 + 0x598) = 0;
    plVar4 = *(longlong **)(lVar3 + 0x5a0);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(lVar3 + 0x5a0) = 0;
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
  }
  FUN_1447f69b6(*(longlong *)(param_1 + 0x20) + 0x1e0);
  FUN_141521da0(*(undefined8 *)(param_1 + 0x20));
  FUN_141521eca(*(undefined8 *)(param_1 + 0x20),1);
  FUN_145cbdfe6(param_1);
  return;
}



// FUNCTION 145cbdb60 FUN_145cbdb60 body=9 status=ok
// SIG undefined FUN_145cbdb60(void)

void FUN_145cbdb60(longlong param_1)

{
  FUN_145cbdb6a(param_1 + 0x10);
  return;
}



// FUNCTION 145cbdb6a FUN_145cbdb6a body=125 status=ok
// SIG undefined FUN_145cbdb6a(void)

void FUN_145cbdb6a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b983950;
  FUN_145cbdc62(param_1 + 0x3f);
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x34);
  FUN_145cbdbe8(param_1 + 0x30);
  plVar2 = (longlong *)param_1[0x2f];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_145cbde4a(param_1);
  return;
}



// FUNCTION 145cbdbe8 FUN_145cbdbe8 body=45 status=ok
// SIG undefined FUN_145cbdbe8(void)

void FUN_145cbdbe8(longlong param_1)

{
  FUN_145cbdc15(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cbdc15 FUN_145cbdc15 body=77 status=ok
// SIG undefined FUN_145cbdc15(void)

void FUN_145cbdc15(longlong param_1,int param_2)

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



// FUNCTION 145cbdc62 FUN_145cbdc62 body=118 status=ok
// SIG undefined FUN_145cbdc62(void)

void FUN_145cbdc62(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_145cbdcd8(param_1 + 9);
  FUN_145c2b2ac(param_1[7],(int)param_1[8]);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cbdcd8 FUN_145cbdcd8 body=53 status=ok
// SIG undefined FUN_145cbdcd8(void)

void FUN_145cbdcd8(longlong *param_1)

{
  FUN_145cbdd0e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cbdd0e FUN_145cbdd0e body=315 status=ok
// SIG undefined FUN_145cbdd0e(void)

void FUN_145cbdd0e(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_145dd6f6a((longlong)iStack_4c * 0x28 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cbde4a FUN_145cbde4a body=412 status=ok
// SIG undefined FUN_145cbde4a(void)

void FUN_145cbde4a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b4e5b60;
  FUN_1411ebbe4(param_1[0xe]);
  param_1[0xe] = 0;
  FUN_1449db362(param_1 + 0x2a);
  FUN_1449db362(param_1 + 0x27);
  FUN_1449db362(param_1 + 0x23);
  FUN_1449db362(param_1 + 0x20);
  FUN_1449db362(param_1 + 0x1d);
  FUN_1449db362(param_1 + 0x19);
  plVar3 = (longlong *)param_1[0x18];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1449db362(param_1 + 0x14);
  FUN_1449db362(param_1 + 0x12);
  plVar3 = (longlong *)param_1[0x10];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (*(int *)((longlong)param_1 + 0x6c) != -1) {
    if (param_1[0xc] != 0) {
      FUN_1400020a8();
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0xffffffff00000000;
  }
  plVar3 = (longlong *)param_1[0xb];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_1[9];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145cbdfe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145cbdfe6 FUN_145cbdfe6 body=464 status=ok
// SIG undefined FUN_145cbdfe6(void)

void FUN_145cbdfe6(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (*(char *)(lVar3 + 0x5b8) == '\x01') {
    *(undefined1 *)(lVar3 + 0x5b8) = 0;
    lVar3 = *(longlong *)(param_1 + 0x20);
  }
  if ((*(int *)(lVar3 + 0x5c4) == -1) && (*(char *)(lVar3 + 0x6f0) == '\x01')) {
    FUN_14124efea(lVar3 + 0x5d0);
    *(undefined1 *)(lVar3 + 0x6f0) = 0;
    lVar3 = *(longlong *)(param_1 + 0x20);
  }
  FUN_140b6c454(*(undefined8 *)(lVar3 + 0x6f8));
  *(undefined4 *)(lVar3 + 0x700) = 0;
  if (*(int *)(lVar3 + 0x704) != 0) {
    FUN_148da09ea(lVar3 + 0x6f8);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x8e0) = 0;
  if (((*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x900) != 0) &&
      (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x908), lVar3 != 0)) &&
     (0 < *(int *)(lVar3 + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x900);
    local_20 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x908);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    lVar3 = *(longlong *)(param_1 + 0x20);
    *(undefined8 *)(lVar3 + 0x900) = 0;
    plVar2 = *(longlong **)(lVar3 + 0x908);
    *(undefined8 *)(lVar3 + 0x908) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x180))();
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_14583d3ae();
    if (lVar3 != 0) {
      FUN_145cbe1b8(lVar3 + 0xd8);
    }
  }
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x180))();
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_141060562();
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) != 0)) {
      FUN_14152209c();
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cbe1b8 FUN_145cbe1b8 body=67 status=ok
// SIG undefined FUN_145cbe1b8(void)

void FUN_145cbe1b8(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145cbe1fc(param_1);
    FUN_145a9f278(param_1,0);
    return;
  }
  FUN_145a9f278(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_148d9dc62(param_1);
  return;
}



// FUNCTION 145cbe1fc FUN_145cbe1fc body=335 status=ok
// SIG undefined FUN_145cbe1fc(void)

void FUN_145cbe1fc(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
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
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cbe358 FUN_145cbe358 body=239 status=ok
// SIG undefined FUN_145cbe358(void)

undefined8 * FUN_145cbe358(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b9f8();
  *param_1 = &PTR_FUN_14b3914c0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 1;
  *(undefined4 *)(param_1 + 0x16) = 0x83713d01;
  param_1[0x17] = "impact_response";
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,"parent",0);
  FUN_1404e49fa(param_1 + 0x5a,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_58,"Effects.Impact Response Template");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)((longlong)param_1 + 0xc9) = 1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cbe448 FUN_145cbe448 body=508 status=ok
// SIG undefined FUN_145cbe448(void)

void FUN_145cbe448(void)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_158 [32];
  undefined2 *local_138;
  int local_130;
  undefined2 *local_128;
  int local_120;
  undefined **local_118;
  ulonglong uStack_110;
  char local_108;
  undefined1 local_f8 [216];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1408e76da(local_f8);
  FUN_145cbe6c2(&local_128,L"Manifest.ini");
  cVar1 = FUN_1415258a0(&local_128);
  if (cVar1 == '\0') {
    FUN_140bee914(&local_138,&local_128);
    puVar5 = local_138;
    if (local_130 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    plVar3 = (longlong *)FUN_1400dbadc();
    plVar4 = (longlong *)*plVar3;
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)FUN_140e92164();
      *plVar3 = (longlong)plVar4;
    }
    uStack_110 = uStack_110 & 0xffffffffffffff00;
    local_118 = &PTR_FUN_149e2f880;
    local_108 = '\0';
    (**(code **)(*plVar4 + 0x130))(plVar4,puVar5,&local_118);
    cVar1 = local_108;
    if (local_138 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (cVar1 == '\0') {
      FUN_14277d5f1();
    }
  }
  cVar1 = FUN_1415258a0(&local_128);
  if (cVar1 == '\0') {
    uVar6 = 0;
  }
  else {
    puVar5 = local_128;
    if (local_120 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_140056680(&local_118,puVar5);
    uVar6 = 0;
    FUN_140fa61d5(local_f8,&local_118,0);
    if (local_118 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    local_118 = (undefined **)0x0;
    cVar1 = FUN_145cbe646(local_f8,L"Manifest",L"Version");
    if (((cVar1 != '\0') && ((longlong)local_118 < 3)) &&
       (uVar6 = (ulonglong)local_118 & 0xffffffff, (int)local_118 == 2)) goto LAB_145cbe51f;
  }
  uVar2 = FUN_14680d782(uVar6);
  FUN_14680343e(local_f8,L"Manifest",L"Version",uVar2);
  local_118 = (undefined **)0x0;
  uStack_110 = 0;
  FUN_14577b4ea(local_f8,&local_128,1,&local_118);
  if (local_118 != (undefined **)0x0) {
    FUN_1400020a8();
  }
LAB_145cbe51f:
  if (local_128 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1409263a6(local_f8);
  if ((local_20 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cbe646 FUN_145cbe646 body=123 status=ok
// SIG undefined FUN_145cbe646(void)

undefined4 FUN_145cbe646(void)

{
  undefined4 uVar1;
  longlong lVar2;
  wchar_t *_Str;
  longlong *in_R9;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (wchar_t *)0x0;
  uStack_20 = 0;
  uVar1 = FUN_1412734f2();
  if ((char)uVar1 != '\0') {
    _Str = local_28;
    if ((int)uStack_20 == 0) {
      _Str = L"";
    }
    lVar2 = _wtoi64(_Str);
    *in_R9 = lVar2;
  }
  if (local_28 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 145cbe6c2 FUN_145cbe6c2 body=381 status=ok
// SIG undefined FUN_145cbe6c2(void)

undefined8 FUN_145cbe6c2(undefined8 param_1,wchar_t *param_2)

{
  size_t sVar1;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  int local_180;
  longlong local_178;
  int local_170;
  longlong local_168;
  int local_160;
  undefined1 local_158 [256];
  longlong local_58;
  wchar_t *local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_144a81018(local_158,"Windows");
  FUN_145cbe840(&local_188);
  FUN_1412cfe60(&local_178,&local_188,(local_180 == 0) + '\a');
  FUN_1401aebe8(&local_178,L"Config",6);
  sVar1 = wcslen(local_50);
  FUN_1412cfe60(&local_168,&local_178,(int)sVar1 + (uint)((int)sVar1 != -1 && local_170 == 0) + 1);
  FUN_1401aebe8(&local_168,local_50,sVar1 & 0xffffffff);
  sVar1 = wcslen(param_2);
  FUN_1412cfe60(param_1,&local_168,(int)sVar1 + (uint)((int)sVar1 != -1 && local_160 == 0) + 1);
  FUN_1401aebe8(param_1,param_2,sVar1 & 0xffffffff);
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cbe840 FUN_145cbe840 body=22 status=ok
// SIG undefined FUN_145cbe840(void)

undefined8 FUN_145cbe840(undefined8 param_1)

{
  FUN_145cbe856();
  return param_1;
}



// FUNCTION 145cbe856 FUN_145cbe856 body=245 status=ok
// SIG undefined FUN_145cbe856(void)

undefined8 * FUN_145cbe856(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_1401aee1c();
  if (*(char *)(lVar2 + 0x11a) == '\0') {
    FUN_145cbe94c(&local_30);
    if ((longlong *)(lVar2 + 0x58) == &local_30) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar2 + 0x58) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar2 + 0x58) = local_30;
      local_30 = 0;
      *(undefined4 *)(lVar2 + 0x60) = local_28;
      *(undefined4 *)(lVar2 + 100) = local_24;
    }
    *(undefined1 *)(lVar2 + 0x11a) = 1;
  }
  *param_1 = 0;
  iVar1 = *(int *)(lVar2 + 0x60);
  _Src = *(void **)(lVar2 + 0x58);
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cbe94c FUN_145cbe94c body=100 status=ok
// SIG undefined FUN_145cbe94c(void)

undefined8 FUN_145cbe94c(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145cbe9b2(local_28);
  FUN_145715888(param_1,local_28,L"-enginesaveddirsuffix=");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cbe9b2 FUN_145cbe9b2 body=374 status=ok
// SIG undefined FUN_145cbe9b2(void)

undefined8 FUN_145cbe9b2(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  size_t sVar3;
  wchar_t *_Str;
  wchar_t *_Str_00;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  int local_80;
  wchar_t *local_78;
  int local_70;
  longlong local_68 [2];
  wchar_t *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = FUN_145c83bac();
  if (cVar1 == '\0') {
    cVar1 = FUN_145cbeb2e();
    if (cVar1 == '\0') {
      uVar2 = FUN_140d6ac5a();
      FUN_140056680(param_1,uVar2);
      if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  uVar2 = FUN_144a8b586();
  FUN_14626b538(uVar2,&local_78,1);
  _Str_00 = L"";
  if (local_70 != 0) {
    _Str_00 = local_78;
  }
  FUN_1468001d2(&local_88);
  _Str = L"";
  if (local_80 != 0) {
    _Str = local_88;
  }
  local_58 = (wchar_t *)FUN_140d69f9e();
  local_40 = 0;
  local_50 = 0;
  if (local_58 != (wchar_t *)0x0) {
    sVar3 = wcslen(local_58);
    local_50 = (int)sVar3;
  }
  local_48 = _Str;
  if (_Str != (wchar_t *)0x0) {
    sVar3 = wcslen(_Str);
    local_40 = (int)sVar3;
  }
  local_38 = _Str_00;
  if (_Str_00 == (wchar_t *)0x0) {
    local_30 = 0;
  }
  else {
    sVar3 = wcslen(_Str_00);
    local_30 = (int)sVar3;
  }
  FUN_140bee87a(local_68,&local_58,3);
  FUN_144a882a8(param_1,local_68,&DAT_149e065c6);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
}



// FUNCTION 145cbeb2e FUN_145cbeb2e body=387 status=ok
// SIG undefined FUN_145cbeb2e(void)

undefined8 FUN_145cbeb2e(void)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = (ulonglong)DAT_14c75907c;
  if (DAT_14c75907c == 0xffffffff) {
    bVar1 = FUN_1415258d2();
    uVar4 = FUN_1401af3ae();
    FUN_140056680(&local_40,uVar4);
    FUN_1412cfe60(&local_30,&local_40,(local_38 == 0) + ' ');
    FUN_1401aebe8(&local_30,L"Engine/Build/InstalledBuild.txt",0x1f);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    FUN_1448097c4(&local_30,&DAT_149e01f64,&DAT_149e065c6,0);
    plVar5 = (longlong *)FUN_14054d1d4();
    puVar6 = local_30;
    if (local_28 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    bVar2 = (**(code **)(*plVar5 + 0x48))(plVar5,puVar6);
    if ((bVar1 | bVar2) == 1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar1 = FUN_14054d46e(&DAT_14c846b20,L"NotInstalledEngine");
      bVar1 = bVar1 ^ 1;
    }
    else {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar1 = FUN_14054d46e(&DAT_14c846b20,L"InstalledEngine");
    }
    uVar3 = (ulonglong)bVar1;
    DAT_14c75907c = (uint)bVar1;
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
      uVar3 = (ulonglong)DAT_14c75907c;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar3 >> 8),(int)uVar3 == 1);
}



// FUNCTION 145cbecb2 FUN_145cbecb2 body=129 status=ok
// SIG undefined FUN_145cbecb2(void)

void FUN_145cbecb2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 1;
  local_30 = 0;
  uStack_28 = 0;
  *(undefined1 *)(param_1 + 0x98) = 1;
  *(undefined8 *)(param_1 + 0x90) = param_2;
  local_40 = param_2;
  FUN_144a450dc(param_1 + 0xa0,&local_30);
  FUN_1449db362(&local_30);
  FUN_145cbed34(*(undefined8 *)(param_1 + 0xd0),param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cbed34 FUN_145cbed34 body=362 status=ok
// SIG undefined FUN_145cbed34(void)

void FUN_145cbed34(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *plStack_70;
  longlong local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)(param_1 + 0x1e0);
  plVar3 = (longlong *)(param_1 + 0x1f0);
  if (((*(int *)(param_1 + 0x1f8) == 0) || ((longlong *)*plVar3 == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(*(longlong *)*plVar3 + 0x30))(), cVar6 == '\0')) {
    lVar8 = *plVar2;
  }
  else {
    if (*(int *)(param_1 + 0x1f8) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)*plVar3;
    }
    lVar8 = (**(code **)(*plVar9 + 0x58))();
    *plVar2 = lVar8;
  }
  if (lVar8 != 0) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_145cbeea0();
  }
  local_60 = 1;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined1 *)(param_1 + 0x1e8) = 1;
  *plVar2 = param_2;
  local_68 = param_2;
  FUN_144a450dc(plVar3,&local_58);
  FUN_1449db362(&local_58);
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x10);
    if (plVar2 == (longlong *)0x0) {
LAB_145cbee51:
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      FUN_145cbeea0(param_2);
    }
    else {
      iVar7 = (int)plVar2[1];
      do {
        if (iVar7 == 0) goto LAB_145cbee51;
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar10 = iVar7 == iVar5;
        if (bVar10) {
          *(int *)(plVar2 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar10);
      uVar4 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar2 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      local_78 = uVar4;
      plStack_70 = plVar2;
      FUN_145cbeea0(param_2);
      LOCK();
      plVar3 = plVar2 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cbeea0 FUN_145cbeea0 body=135 status=ok
// SIG undefined FUN_145cbeea0(void)

void FUN_145cbeea0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 600) = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar2 = *(longlong **)(param_1 + 0x260);
  if (plVar2 != plVar3) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar2 = *(longlong **)(param_1 + 0x260);
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x260) = plVar3;
    plVar3 = (longlong *)param_2[1];
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145cbef23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145cbef32 FUN_145cbef32 body=145 status=ok
// SIG undefined FUN_145cbef32(void)

longlong * FUN_145cbef32(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14142570c();
  *param_1 = (longlong)&PTR_FUN_14b212eb0;
  param_1[0x1f] = (longlong)&PTR_LAB_14b213220;
  param_1[0x20] = (longlong)&PTR_LAB_14b213250;
  FUN_145cbefc4(param_1 + 0x22);
  local_20 = 2;
  local_18 = 2;
  (**(code **)(*param_1 + 0x2a0))(param_1);
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) | 2;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cbefc4 FUN_145cbefc4 body=157 status=ok
// SIG undefined FUN_145cbefc4(void)

void FUN_145cbefc4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 2;
  *param_1 = &PTR_FUN_14b2132a0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  return;
}



// FUNCTION 145cbf062 FUN_145cbf062 body=103 status=ok
// SIG undefined FUN_145cbf062(void)

ulonglong FUN_145cbf062(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145cbf0ac:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145cbf0ac;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145cbf0ca FUN_145cbf0ca body=38 status=ok
// SIG undefined FUN_145cbf0ca(void)

undefined8 FUN_145cbf0ca(undefined8 param_1,int param_2)

{
  FUN_145cbf0f0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbf0f0 FUN_145cbf0f0 body=397 status=ok
// SIG undefined FUN_145cbf0f0(void)

void FUN_145cbf0f0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14b451ce0;
  param_1[1] = &PTR_FUN_14b451da0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3b));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3b));
  lVar3 = param_1[0x48];
  if (lVar3 != 0) {
    FUN_145cbf440(lVar3);
    FUN_1400020a8(lVar3);
  }
  plVar4 = (longlong *)param_1[0x47];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_1449db362(param_1 + 0x44);
  plVar4 = (longlong *)param_1[0x43];
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
  FUN_145cbf32c(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_145cbf2f4(param_1 + 0x22);
  FUN_141525a7e(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_145cbf288(param_1 + 0x16);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145cbf2be(param_1 + 2);
  cohtml::IAsyncResourceHandler::~IAsyncResourceHandler((IAsyncResourceHandler *)(param_1 + 1));
  FUN_140af926c(param_1);
  return;
}



// FUNCTION 145cbf288 FUN_145cbf288 body=53 status=ok
// SIG undefined FUN_145cbf288(void)

void FUN_145cbf288(longlong *param_1)

{
  FUN_145cbf57e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cbf2be FUN_145cbf2be body=53 status=ok
// SIG undefined FUN_145cbf2be(void)

void FUN_145cbf2be(longlong *param_1)

{
  FUN_145cbf6c4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cbf2f4 FUN_145cbf2f4 body=55 status=ok
// SIG undefined FUN_145cbf2f4(void)

void FUN_145cbf2f4(longlong *param_1)

{
  FUN_141525ade(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cbf32c FUN_145cbf32c body=99 status=ok
// SIG undefined FUN_145cbf32c(void)

void FUN_145cbf32c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0xa8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  *(undefined ***)(param_1 + 0x50) = &PTR_FUN_14b452940;
  FUN_145cbf3c6(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145cbf390(param_1);
  return;
}



// FUNCTION 145cbf390 FUN_145cbf390 body=53 status=ok
// SIG undefined FUN_145cbf390(void)

void FUN_145cbf390(longlong *param_1)

{
  FUN_145cbf824();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cbf3c6 FUN_145cbf3c6 body=118 status=ok
// SIG undefined FUN_145cbf3c6(void)

void FUN_145cbf3c6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = param_1[1];
  while (lVar5 != 0) {
    plVar3 = *(longlong **)(lVar5 + 8);
    lVar4 = *(longlong *)(lVar5 + 0x10);
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
    FUN_1400020a8(lVar5);
    param_1[1] = lVar4;
    lVar5 = lVar4;
  }
  param_1[1] = 0;
  param_1[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x000145cbf3ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,0);
  return;
}



// FUNCTION 145cbf440 FUN_145cbf440 body=130 status=ok
// SIG undefined FUN_145cbf440(void)

void FUN_145cbf440(longlong *param_1)

{
  FUN_145965e23(param_1[0xc],(int)param_1[0xd]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 145cbf4c2 FUN_145cbf4c2 body=133 status=ok
// SIG undefined FUN_145cbf4c2(void)

void FUN_145cbf4c2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_141525aa6(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_145cbf548(param_1 + 0x20);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145cbf543. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145cbf548 FUN_145cbf548 body=53 status=ok
// SIG undefined FUN_145cbf548(void)

void FUN_145cbf548(longlong *param_1)

{
  FUN_145cbf9a0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cbf57e FUN_145cbf57e body=325 status=ok
// SIG undefined FUN_145cbf57e(void)

void FUN_145cbf57e(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_1418b57ca(*local_68 + (longlong)iStack_4c * 0x88 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144a544ac(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cbf6c4 FUN_145cbf6c4 body=351 status=ok
// SIG undefined FUN_145cbf6c4(void)

void FUN_145cbf6c4(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cbf824 FUN_145cbf824 body=378 status=ok
// SIG undefined FUN_145cbf824(void)

void FUN_145cbf824(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cbf9a0 FUN_145cbf9a0 body=378 status=ok
// SIG undefined FUN_145cbf9a0(void)

void FUN_145cbf9a0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cbfb1c FUN_145cbfb1c body=40 status=ok
// SIG undefined FUN_145cbfb1c(void)

undefined8 FUN_145cbfb1c(undefined8 param_1,int param_2)

{
  FUN_145cbfb44();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbfb44 FUN_145cbfb44 body=519 status=ok
// SIG undefined FUN_145cbfb44(void)

void FUN_145cbfb44(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba1d010;
  param_1[5] = &PTR_FUN_14ba1d3f0;
  param_1[0x13] = &PTR_FUN_14ba1d410;
  param_1[0x24] = &PTR_FUN_14ba1d440;
  param_1[0x25] = &PTR_FUN_14ba1d460;
  param_1[0x26] = &PTR_FUN_14ba1d480;
  if (param_1[0x118] != 0) {
    plVar3 = param_1 + 0x11c;
    if ((longlong *)param_1[0x11a] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x11a];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FUN_145cbfe42(param_1 + 0xb7);
  FUN_145cbfd4b(param_1[0xb4],*(undefined4 *)(param_1 + 0xb5));
  if (param_1[0xb4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xac] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x58] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x58] + 0x10))();
  }
  plVar3 = (longlong *)param_1[0x52];
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
  plVar3 = (longlong *)param_1[0x50];
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
  plVar3 = (longlong *)param_1[0x4e];
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
  *(undefined4 *)(param_1 + 0x4b) = 0;
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  FUN_145cbfd7c(param_1 + 0x42);
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  FUN_145cbfdb2(param_1 + 0x38);
  FUN_145865dac(param_1);
  return;
}



// FUNCTION 145cbfd4b FUN_145cbfd4b body=49 status=ok
// SIG undefined FUN_145cbfd4b(void)

void FUN_145cbfd4b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145cbfd7c FUN_145cbfd7c body=53 status=ok
// SIG undefined FUN_145cbfd7c(void)

void FUN_145cbfd7c(longlong *param_1)

{
  FUN_145cbfde8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cbfdb2 FUN_145cbfdb2 body=53 status=ok
// SIG undefined FUN_145cbfdb2(void)

void FUN_145cbfdb2(longlong *param_1)

{
  FUN_145cc019e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cbfde8 FUN_145cbfde8 body=90 status=ok
// SIG undefined FUN_145cbfde8(void)

void FUN_145cbfde8(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145cbfe42 FUN_145cbfe42 body=651 status=ok
// SIG undefined FUN_145cbfe42(void)

void FUN_145cbfe42(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14af17ce0;
  FUN_145cc0126(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_145cc00f9(param_1[0x5b],*(undefined4 *)(param_1 + 0x5c));
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  FUN_145cc015e(param_1[0x59],*(undefined4 *)(param_1 + 0x5a));
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  FUN_145cc00cd(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x56) = 0;
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x4d);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x43);
  *(undefined4 *)(param_1 + 0x42) = 0;
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x39);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x2f);
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x25);
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 7);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cc00cd FUN_145cc00cd body=44 status=ok
// SIG undefined FUN_145cc00cd(void)

void FUN_145cc00cd(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_146c7d752(param_1);
      param_1 = param_1 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145cc00f9 FUN_145cc00f9 body=45 status=ok
// SIG undefined FUN_145cc00f9(void)

void FUN_145cc00f9(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145cc0126 FUN_145cc0126 body=56 status=ok
// SIG undefined FUN_145cc0126(void)

void FUN_145cc0126(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148307efa(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145cc015e FUN_145cc015e body=63 status=ok
// SIG undefined FUN_145cc015e(void)

void FUN_145cc015e(longlong param_1,int param_2)

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



// FUNCTION 145cc019e FUN_145cc019e body=347 status=ok
// SIG undefined FUN_145cc019e(void)

void FUN_145cc019e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      plVar2 = *(longlong **)(*local_68 + 8 + (longlong)iStack_4c * 0x20);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cc02fa FUN_145cc02fa body=40 status=ok
// SIG undefined FUN_145cc02fa(void)

undefined8 FUN_145cc02fa(undefined8 param_1,int param_2)

{
  FUN_145cc0322();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc0322 FUN_145cc0322 body=188 status=ok
// SIG undefined FUN_145cc0322(void)

void FUN_145cc0322(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b573d90;
  param_1[5] = &PTR_FUN_14b5740c0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  FUN_145cc042c(param_1 + 0x5d);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  FUN_145cc0462(param_1 + 0x53);
  FUN_145cc03de(param_1[0x51],*(undefined4 *)(param_1 + 0x52));
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_145977296(param_1);
  return;
}



// FUNCTION 145cc03de FUN_145cc03de body=77 status=ok
// SIG undefined FUN_145cc03de(void)

void FUN_145cc03de(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145cc042c FUN_145cc042c body=53 status=ok
// SIG undefined FUN_145cc042c(void)

void FUN_145cc042c(longlong *param_1)

{
  FUN_145cc0498();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cc0462 FUN_145cc0462 body=53 status=ok
// SIG undefined FUN_145cc0462(void)

void FUN_145cc0462(longlong *param_1)

{
  FUN_145cc04f2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cc0498 FUN_145cc0498 body=90 status=ok
// SIG undefined FUN_145cc0498(void)

void FUN_145cc0498(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145cc04f2 FUN_145cc04f2 body=378 status=ok
// SIG undefined FUN_145cc04f2(void)

void FUN_145cc04f2(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x28);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cc066e FUN_145cc066e body=630 status=ok
// SIG undefined FUN_145cc066e(void)

void FUN_145cc066e(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = *(longlong *)(param_1 + 0x210);
  if (lVar5 != 0) {
    FUN_141085fe4(param_1,&local_48);
    plVar3 = local_40;
    if (local_40 == (longlong *)0x0) {
      local_38 = local_48 + 0x168;
      if (local_48 == 0) {
        local_38 = local_48;
      }
      local_30 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      local_38 = local_48 + 0x168;
      if (local_48 == 0) {
        local_38 = local_48;
      }
      local_30 = local_40;
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    FUN_145cc0932(lVar5,&DAT_14cbd2980,&local_38);
    plVar2 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar4 = (int *)((longlong)plVar2 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar4 = (int *)((longlong)plVar3 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar4 = (int *)((longlong)plVar3 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0x210);
    FUN_141085fe4(param_1,&local_48);
    plVar3 = local_40;
    if (local_40 == (longlong *)0x0) {
      local_38 = local_48 + 0x168;
      if (local_48 == 0) {
        local_38 = local_48;
      }
      local_30 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      local_38 = local_48 + 0x168;
      if (local_48 == 0) {
        local_38 = local_48;
      }
      local_30 = local_40;
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    FUN_145cc0932(uVar6,&DAT_14cbd29a8,&local_38);
    plVar2 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar4 = (int *)((longlong)plVar2 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar4 = (int *)((longlong)plVar3 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar4 = (int *)((longlong)local_40 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
  }
  FUN_145cc08e6(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc08e6 FUN_145cc08e6 body=69 status=ok
// SIG undefined FUN_145cc08e6(void)

void FUN_145cc08e6(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  thunk_FUN_1412d7b64();
  cVar1 = FUN_144729dda(param_1 + 0xe0);
  if (cVar1 == '\0') {
    return;
  }
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xe0);
                    /* WARNING: Could not recover jumptable at 0x000145cc0928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x420))(plVar2,0,*(code **)(*plVar2 + 0x420));
  return;
}



// FUNCTION 145cc092c thunk_FUN_1412d7b64 body=5 status=ok
// SIG undefined thunk_FUN_1412d7b64(void)

void thunk_FUN_1412d7b64(longlong *param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  byte bVar5;
  
  uVar1 = *(uint *)(param_1 + 10);
  bVar2 = (byte)uVar1;
  bVar5 = bVar2 * '\x02' & -(*(byte *)(param_1 + 6) & 1) & 2;
  *(byte *)(param_1 + 10) = bVar2 & 0xfd | bVar5;
  if ((bool)(bVar5 >> 1) == ((uVar1 >> 1 & 1) != 0)) {
    return;
  }
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    cVar3 = (**(code **)(*param_1 + 0x60))(param_1,0);
    if (cVar3 == '\0') {
      return;
    }
    lVar4 = 0x58;
  }
  else {
    lVar4 = (ulonglong)(bVar5 == 0) * 8 + 0x50;
  }
                    /* WARNING: Could not recover jumptable at 0x0001412d7bc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar4))(param_1);
  return;
}



// FUNCTION 145cc0932 FUN_145cc0932 body=155 status=ok
// SIG undefined FUN_145cc0932(void)

undefined8 FUN_145cc0932(longlong param_1,uint *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar3 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x68);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & *param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 0x50;
        if (*(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 0x50) == *param_2) {
          if (lVar3 == 0) {
            return 0;
          }
          if ((longlong *)(lVar3 + 0x28) == (longlong *)0x0) {
            return 0;
          }
          if (*(longlong *)(lVar3 + 0x38) == 0) {
            return 0;
          }
          if (*(longlong *)(lVar3 + 0x38) != *param_3) {
            return 0;
          }
          plVar1 = *(longlong **)(lVar3 + 0x28);
          if (plVar1 == (longlong *)0x0) {
            return 0;
          }
          plVar1 = (longlong *)(**(code **)(*plVar1 + 0x18))();
          if (plVar1 == (longlong *)0x0) {
            return 0;
          }
          (**(code **)(*plVar1 + 0x18))(plVar1,param_3);
          return 0;
        }
        iVar2 = *(int *)(lVar3 + 0x48);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 145cc09ce FUN_145cc09ce body=460 status=ok
// SIG undefined FUN_145cc09ce(void)

ulonglong FUN_145cc09ce(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 unaff_RBX;
  bool bVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *plStack_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar4 = *(longlong **)(param_1 + 8);
  param_2 = (longlong *)*param_2;
  if (plVar4 == param_2 && plVar4 != (longlong *)0x0) {
    plStack_80 = *(longlong **)(param_1 + -0x58);
    if (plStack_80 == (longlong *)0x0) {
LAB_145cc0b08:
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      bVar9 = true;
    }
    else {
      iVar8 = (int)plStack_80[1];
      do {
        if (iVar8 == 0) goto LAB_145cc0b08;
        LOCK();
        iVar7 = (int)plStack_80[1];
        bVar9 = iVar8 == iVar7;
        if (bVar9) {
          *(int *)(plStack_80 + 1) = iVar8 + 1;
          iVar7 = iVar8;
        }
        iVar8 = iVar7;
        UNLOCK();
      } while (!bVar9);
      lVar5 = *(longlong *)(param_1 + -0x60);
      LOCK();
      *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
      UNLOCK();
      local_88 = lVar5 + 0x68;
      if (lVar5 == 0) {
        local_88 = 0;
      }
      LOCK();
      *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
      UNLOCK();
      bVar9 = false;
    }
    plVar6 = plStack_80;
    (**(code **)(*plVar4 + 0x20))(plVar4,param_1 + -0x38,&local_88);
    plVar2 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (!bVar9) {
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    local_68 = 0;
    local_58 = &PTR_LAB_14b42bf20;
    local_78 = &LAB_14898d7ea;
    local_50 = param_1 + -0x68;
    (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),param_1 + -0x38);
    *(undefined8 *)(param_1 + 8) = 0;
    plVar6 = *(longlong **)(param_1 + 0x10);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),plVar4 == param_2 && plVar4 != (longlong *)0x0)
         & 0xffffffff;
}



// FUNCTION 145cc0b9c FUN_145cc0b9c body=38 status=ok
// SIG undefined FUN_145cc0b9c(void)

undefined8 FUN_145cc0b9c(undefined8 param_1,int param_2)

{
  FUN_145cc0bc2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc0bc2 FUN_145cc0bc2 body=97 status=ok
// SIG undefined FUN_145cc0bc2(void)

void FUN_145cc0bc2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ba42c80;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_145cc0c24(param_1 + 0xf);
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
  FUN_145cc0c5a(param_1);
  return;
}



// FUNCTION 145cc0c24 FUN_145cc0c24 body=53 status=ok
// SIG undefined FUN_145cc0c24(void)

void FUN_145cc0c24(longlong *param_1)

{
  FUN_145cc0ce2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cc0c5a FUN_145cc0c5a body=135 status=ok
// SIG undefined FUN_145cc0c5a(void)

void FUN_145cc0c5a(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14ba45090;
  FUN_144760e21(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cc0ce2 FUN_145cc0ce2 body=309 status=ok
// SIG undefined FUN_145cc0ce2(void)

void FUN_145cc0ce2(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_145cc0e18((longlong)iStack_4c * 0x28 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc0e18 FUN_145cc0e18 body=59 status=ok
// SIG undefined FUN_145cc0e18(void)

void FUN_145cc0e18(longlong *param_1)

{
  FUN_145842369(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145cc0e54 FUN_145cc0e54 body=79 status=ok
// SIG undefined FUN_145cc0e54(void)

void FUN_145cc0e54(longlong param_1,int param_2)

{
  if ((param_2 == 0 && *(int *)(param_1 + 0x914) != -1) && (*(longlong *)(param_1 + 0x8f8) != 0)) {
    (**(code **)(*(longlong *)(param_1 + 0x8c0) + 0x18))(param_1 + 0x8c0);
  }
  FUN_140f0695c(param_1,param_2);
  return;
}



// FUNCTION 145cc0ea4 FUN_145cc0ea4 body=163 status=ok
// SIG undefined FUN_145cc0ea4(void)

void FUN_145cc0ea4(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x54) == param_3) {
    *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_145cc0f48(param_1);
      if (*(char *)(param_1 + -0x748) == '\x03') {
        if (*(longlong *)(param_1 + 0x28) != 0) {
          FUN_145ac621c(param_1 + 0x10);
        }
        lVar4 = FUN_14011c349();
        iVar1 = *(int *)(param_1 + 0x20);
        if ((longlong)iVar1 != 0) {
          lVar2 = *(longlong *)(param_1 + 0x18);
          lVar5 = 0;
          do {
            plVar3 = *(longlong **)(lVar2 + lVar5);
            if ((plVar3 != (longlong *)0x0) && (plVar3[0x59] == *(longlong *)(lVar4 + 0xe0))) {
              (**(code **)(*plVar3 + 0x20))(plVar3,*(undefined8 *)(param_1 + 0x38));
            }
            lVar5 = lVar5 + 8;
          } while ((longlong)iVar1 * 8 != lVar5);
        }
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
  }
  return;
}



// FUNCTION 145cc0f48 FUN_145cc0f48 body=73 status=ok
// SIG undefined FUN_145cc0f48(void)

void FUN_145cc0f48(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 8))();
  (**(code **)(*plVar1 + 0x6a0))(plVar1,param_2);
  if (param_2 != 0) {
    FUN_140f065f6(param_2,param_1,param_3);
    return;
  }
  return;
}



// FUNCTION 145cc0f92 FUN_145cc0f92 body=38 status=ok
// SIG undefined FUN_145cc0f92(void)

void FUN_145cc0f92(longlong param_1)

{
  FUN_141525cfa();
  FUN_140355e94(param_1 + 0x2f8);
  *(undefined1 *)(param_1 + 0x388) = 0;
  return;
}



// FUNCTION 145cc0fb8 FUN_145cc0fb8 body=40 status=ok
// SIG undefined FUN_145cc0fb8(void)

undefined8 FUN_145cc0fb8(undefined8 param_1,int param_2)

{
  FUN_145cc0fe0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc0fe0 FUN_145cc0fe0 body=412 status=ok
// SIG undefined FUN_145cc0fe0(void)

void FUN_145cc0fe0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b5e33f0;
  param_1[0x72] = &PTR_FUN_14b5e3ac0;
  param_1[0x73] = &PTR_FUN_14b5e3b40;
  param_1[0x74] = &PTR_FUN_14b5e3bb0;
  param_1[0x75] = &PTR_FUN_14b5e3bd8;
  param_1[0x76] = &PTR_FUN_14b5e3bf0;
  param_1[0xa4] = &PTR_FUN_14b5e3c20;
  param_1[0xa5] = &PTR_FUN_14b5e3c70;
  param_1[0xa6] = &PTR_FUN_14b5e3ca0;
  param_1[0xa7] = &PTR_FUN_14b5e3cd0;
  param_1[0xa8] = &PTR_FUN_14b5e3ce8;
  param_1[0x118] = &PTR_FUN_14b5e3d00;
  param_1[0x119] = &PTR_FUN_14b5e3d30;
  param_1[0x11a] = &PTR_FUN_14b5e3d60;
  if (param_1[0x129] != 0) {
    FUN_1400020a8();
  }
  FUN_145cc117c(param_1[0x124],*(undefined4 *)(param_1 + 0x125));
  if (param_1[0x124] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x122] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[0x121];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140368c45(param_1[0x11f],*(undefined4 *)(param_1 + 0x120));
  if (param_1[0x11f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11d] != 0) {
    FUN_1400020a8();
  }
  FUN_140ef6a7a(param_1[0x11b],*(undefined4 *)(param_1 + 0x11c));
  if (param_1[0x11b] != 0) {
    FUN_1400020a8();
  }
  FUN_140ef7316(param_1);
  return;
}



// FUNCTION 145cc117c FUN_145cc117c body=43 status=ok
// SIG undefined FUN_145cc117c(void)

void FUN_145cc117c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145cc11a8(param_1);
    param_1 = param_1 + 0x90;
  }
  return;
}



// FUNCTION 145cc11a8 FUN_145cc11a8 body=47 status=ok
// SIG undefined FUN_145cc11a8(void)

void FUN_145cc11a8(longlong param_1)

{
  FUN_145cc11d8();
  FUN_144a2da94(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cc11d8 FUN_145cc11d8 body=109 status=ok
// SIG undefined FUN_145cc11d8(void)

void FUN_145cc11d8(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x78);
    if (((cVar1 != '\0') && (*(longlong **)(param_1 + 0x80) != (longlong *)0x0)) &&
       (*(longlong *)(param_1 + 0x88) != 0)) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x10))();
      uVar3 = FUN_1461e8814(param_1);
      FUN_145cc1246(uVar2,uVar3,param_1 + 0x88);
      return;
    }
  }
  return;
}



// FUNCTION 145cc1246 FUN_145cc1246 body=199 status=ok
// SIG undefined FUN_145cc1246(void)

byte FUN_145cc1246(longlong param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  
  uVar4 = (ulonglong)*(uint *)(param_1 + 0xb0);
  if (*(uint *)(param_1 + 0xb0) != *(uint *)(param_1 + 0xdc)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = param_1 + 0xe0;
    if (*(ulonglong *)(param_1 + 0xe8) != 0) {
      uVar4 = *(ulonglong *)(param_1 + 0xe8);
    }
    iVar2 = *(int *)(uVar4 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar2 != -1) {
      uVar4 = *(ulonglong *)(param_1 + 0xa8);
      do {
        puVar1 = (ulonglong *)(uVar4 + (longlong)iVar2 * 0x28);
        if (*puVar1 == param_2) {
          bVar5 = 0;
          if (puVar1 != (ulonglong *)0x0) {
            if (puVar1 != (ulonglong *)&DAT_fffffffffffffff8) {
              bVar5 = 1;
              if (*param_3 == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = FUN_14480f766();
              }
            }
            goto LAB_145cc12fe;
          }
          break;
        }
        iVar2 = (int)puVar1[4];
      } while (iVar2 != -1);
    }
  }
  bVar5 = 0;
LAB_145cc12fe:
  return bVar5 & (byte)uVar4;
}



// FUNCTION 145cc130e FUN_145cc130e body=116 status=ok
// SIG undefined FUN_145cc130e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc130e(longlong param_1)

{
  longlong lVar1;
  
  _DAT_14ca56858 = L"BASE";
  DAT_14ca56882 = 4;
  lVar1 = FUN_145cc1382();
  _DAT_14ca56870 = &LAB_14682652b;
  _DAT_14ca56878 = 0x100000000;
  _DAT_14ca56868 = *(undefined8 *)(param_1 + 0x10);
  _DAT_14ca56860 = lVar1;
  *(undefined **)(param_1 + 0x10) = &DAT_14ca56858;
  *(char *)(param_1 + 0x65) = *(char *)(param_1 + 0x65) + '\x01';
  if (*(char *)(lVar1 + 100) != '\0') {
    *(char *)(param_1 + 0x66) = *(char *)(param_1 + 0x66) + '\x01';
  }
  return;
}



// FUNCTION 145cc1382 FUN_145cc1382 body=207 status=ok
// SIG undefined FUN_145cc1382(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145cc1382(void)

{
  if ((DAT_14ca97fdf & 2) == 0) {
    DAT_14ca97fdf = DAT_14ca97fdf | 2;
    _DAT_14ca97f80 = L"FShader";
    _DAT_14ca97f98 = FUN_146826540;
    _DAT_14ca97fa0 = FUN_146825d77;
    _DAT_14ca97fa8 = FUN_146825fd6;
    _DAT_14ca97fb0 = FUN_1407e02ea;
    _DAT_14ca97fb8 = FUN_146826273;
    _DAT_14ca97f90 = FUN_147432290;
    _DAT_14ca97fd0 = 0xffffffff000000e0;
    _DAT_14ca97fd8 = 8;
    DAT_14ca97fdc = 0;
    _DAT_14ca97fc0 = &LAB_1474322bc;
    FUN_145cc1452();
    FUN_1407e00cc(&DAT_14ca97f78);
  }
  return &DAT_14ca97f78;
}



// FUNCTION 145cc1452 FUN_145cc1452 body=128 status=ok
// SIG undefined FUN_145cc1452(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc1452(void)

{
  FUN_145cc14d2();
  _DAT_14ca98bb8 = L"Bindings";
  DAT_14ca98be2 = FUN_140850cc5();
  FUN_145cc1552();
  _DAT_14ca98bc0 = &DAT_14ca97fe8;
  _DAT_14ca98bd0 = &LAB_14682652b;
  _DAT_14ca98bd8 = 0x100000000;
  _DAT_14ca98be0 = 0;
  _DAT_14ca98bc8 = DAT_14ca97f88;
  DAT_14ca97f88 = &DAT_14ca98bb8;
  return;
}



// FUNCTION 145cc14d2 FUN_145cc14d2 body=128 status=ok
// SIG undefined FUN_145cc14d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc14d2(void)

{
  FUN_145cc1c0e();
  _DAT_14ca98be8 = L"ParameterMapInfo";
  DAT_14ca98c12 = FUN_140850cc5();
  FUN_145cc1620();
  _DAT_14ca98bf0 = &DAT_14ca98368;
  _DAT_14ca98c00 = &LAB_14682652b;
  _DAT_14ca98c08 = 0x100000058;
  _DAT_14ca98c10 = 0;
  _DAT_14ca98bf8 = DAT_14ca97f88;
  DAT_14ca97f88 = &DAT_14ca98be8;
  return;
}



// FUNCTION 145cc1552 FUN_145cc1552 body=205 status=ok
// SIG undefined FUN_145cc1552(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc1552(void)

{
  if ((DAT_14ca9804f & 2) == 0) {
    DAT_14ca9804f = DAT_14ca9804f | 2;
    _DAT_14ca97ff0 = L"FShaderParameterBindings";
    _DAT_14ca98008 = FUN_146826540;
    _DAT_14ca98010 = FUN_146825d77;
    _DAT_14ca98018 = FUN_146825fd6;
    _DAT_14ca98020 = FUN_1407e02ea;
    _DAT_14ca98028 = FUN_146826273;
    _DAT_14ca98000 = FUN_1474322c0;
    _DAT_14ca98040 = 0xffffffff00000058;
    _DAT_14ca98048 = 8;
    DAT_14ca9804c = 0;
    _DAT_14ca98030 = &LAB_147432306;
    FUN_145cc18d2();
    FUN_1407e00cc(&DAT_14ca97fe8);
    return;
  }
  return;
}



// FUNCTION 145cc1620 FUN_145cc1620 body=205 status=ok
// SIG undefined FUN_145cc1620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc1620(void)

{
  if ((DAT_14ca983cf & 2) == 0) {
    DAT_14ca983cf = DAT_14ca983cf | 2;
    _DAT_14ca98370 = L"FShaderParameterMapInfo";
    _DAT_14ca98388 = FUN_146826540;
    _DAT_14ca98390 = FUN_146825d77;
    _DAT_14ca98398 = FUN_146825fd6;
    _DAT_14ca983a0 = FUN_1407e02ea;
    _DAT_14ca983a8 = FUN_146826273;
    _DAT_14ca98380 = FUN_1474323f6;
    _DAT_14ca983c0 = 0xffffffff00000048;
    _DAT_14ca983c8 = 8;
    DAT_14ca983cc = 0;
    _DAT_14ca983b0 = &LAB_147432452;
    FUN_145cc1afa();
    FUN_1407e00cc(&DAT_14ca98368);
    return;
  }
  return;
}



// FUNCTION 145cc16ee FUN_145cc16ee body=274 status=ok
// SIG undefined FUN_145cc16ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc16ee(longlong param_1)

{
  FUN_145cc1800();
  _DAT_14ca55b68 = L"ParameterCollectionUniformBuffers";
  DAT_14ca55b92 = FUN_140850cc5();
  if ((DAT_14ca5afef & 2) == 0) {
    DAT_14ca5afef = DAT_14ca5afef | 3;
    _DAT_14ca5af90 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca5afa8 = &LAB_1472f58bc;
    _DAT_14ca5afb0 = FUN_1472f58ca;
    _DAT_14ca5afb8 = &LAB_1472f58ea;
    _DAT_14ca5afc0 = &LAB_1472f58f8;
    _DAT_14ca5afc8 = FUN_1472f5906;
    _DAT_14ca5afa0 = FUN_1472f594c;
    _DAT_14ca5afe0 = 0x1000000010;
    _DAT_14ca5afe8 = 8;
    DAT_14ca5afec = 0;
  }
  _DAT_14ca55b70 = &DAT_14ca5af88;
  _DAT_14ca55b80 = &LAB_14682652b;
  _DAT_14ca55b88 = 0x1000000e0;
  _DAT_14ca55b90 = 0;
  _DAT_14ca55b78 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = &DAT_14ca55b68;
  return;
}



// FUNCTION 145cc1800 FUN_145cc1800 body=209 status=ok
// SIG undefined FUN_145cc1800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc1800(longlong param_1)

{
  _DAT_14ca55bc8 = L"VTFeedbackBuffer";
  DAT_14ca55bf2 = FUN_140850cc5();
  _DAT_14ca55bd0 = FUN_140fb78d0();
  _DAT_14ca55be0 = &LAB_14682652b;
  _DAT_14ca55be8 = 0x1000000f2;
  _DAT_14ca55bf0 = 0;
  _DAT_14ca55bd8 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = &DAT_14ca55bc8;
  _DAT_14ca55b98 = L"MaterialUniformBuffer";
  DAT_14ca55bc2 = FUN_140850cc5();
  _DAT_14ca55ba0 = FUN_14106a12a();
  _DAT_14ca55bb0 = &LAB_14682652b;
  _DAT_14ca55bb8 = 0x1000000f0;
  _DAT_14ca55bc0 = 0;
  _DAT_14ca55ba8 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = &DAT_14ca55b98;
  return;
}



// FUNCTION 145cc18d2 FUN_145cc18d2 body=275 status=ok
// SIG undefined FUN_145cc18d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc18d2(void)

{
  FUN_145cc19e6();
  _DAT_14ca98e68 = L"Parameters";
  DAT_14ca98e92 = FUN_140850cc5();
  if ((DAT_14ca9940f & 2) == 0) {
    DAT_14ca9940f = DAT_14ca9940f | 3;
    _DAT_14ca993b0 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca993c8 = &LAB_1474365a6;
    _DAT_14ca993d0 = FUN_1474365b4;
    _DAT_14ca993d8 = &LAB_1474365d4;
    _DAT_14ca993e0 = &LAB_14322d68a;
    _DAT_14ca993e8 = FUN_1474365e2;
    _DAT_14ca993c0 = FUN_14743662c;
    _DAT_14ca99400 = 0x1000000010;
    _DAT_14ca99408 = 8;
    DAT_14ca9940c = 0;
  }
  _DAT_14ca98e70 = &DAT_14ca993a8;
  _DAT_14ca98e80 = &LAB_14682652b;
  _DAT_14ca98e88 = 0x100000000;
  _DAT_14ca98e90 = 0;
  _DAT_14ca98e78 = DAT_14ca97ff8;
  DAT_14ca97ff8 = &DAT_14ca98e68;
  return;
}



// FUNCTION 145cc19e6 FUN_145cc19e6 body=275 status=ok
// SIG undefined FUN_145cc19e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc19e6(void)

{
  FUN_145cc1d22();
  _DAT_14ca98e98 = L"ResourceParameters";
  DAT_14ca98ec2 = FUN_140850cc5();
  if ((DAT_14ca992af & 2) == 0) {
    DAT_14ca992af = DAT_14ca992af | 3;
    _DAT_14ca99250 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca99268 = &LAB_147435e66;
    _DAT_14ca99270 = FUN_147435e74;
    _DAT_14ca99278 = &LAB_147435e94;
    _DAT_14ca99280 = &LAB_147435ea2;
    _DAT_14ca99288 = FUN_147435eb0;
    _DAT_14ca99260 = FUN_147435efa;
    _DAT_14ca992a0 = 0x1000000010;
    _DAT_14ca992a8 = 8;
    DAT_14ca992ac = 0;
  }
  _DAT_14ca98ea0 = &DAT_14ca99248;
  _DAT_14ca98eb0 = &LAB_14682652b;
  _DAT_14ca98eb8 = &DAT_100000010;
  _DAT_14ca98ec0 = 0;
  _DAT_14ca98ea8 = DAT_14ca97ff8;
  DAT_14ca97ff8 = &DAT_14ca98e98;
  return;
}



// FUNCTION 145cc1afa FUN_145cc1afa body=275 status=ok
// SIG undefined FUN_145cc1afa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc1afa(void)

{
  FUN_145cc1e36();
  _DAT_14ca99c00 = L"UniformBuffers";
  DAT_14ca99c2a = FUN_140850cc5();
  if ((DAT_14ca99e27 & 2) == 0) {
    DAT_14ca99e27 = DAT_14ca99e27 | 3;
    _DAT_14ca99dc8 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca99de0 = &LAB_1474391ee;
    _DAT_14ca99de8 = FUN_1474391fc;
    _DAT_14ca99df0 = &LAB_14743921c;
    _DAT_14ca99df8 = &LAB_14743922a;
    _DAT_14ca99e00 = FUN_147439238;
    _DAT_14ca99dd8 = FUN_147439282;
    _DAT_14ca99e18 = 0x1000000010;
    _DAT_14ca99e20 = 8;
    DAT_14ca99e24 = 0;
  }
  _DAT_14ca99c08 = &DAT_14ca99dc0;
  _DAT_14ca99c18 = &LAB_14682652b;
  _DAT_14ca99c20 = 0x100000000;
  _DAT_14ca99c28 = 0;
  _DAT_14ca99c10 = DAT_14ca98378;
  DAT_14ca98378 = &DAT_14ca99c00;
  return;
}



// FUNCTION 145cc1c0e FUN_145cc1c0e body=275 status=ok
// SIG undefined FUN_145cc1c0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc1c0e(void)

{
  FUN_145cc2280();
  _DAT_14ca98c18 = L"UniformBufferParameterStructs";
  DAT_14ca98c42 = FUN_140850cc5();
  if ((DAT_14ca98e67 & 2) == 0) {
    DAT_14ca98e67 = DAT_14ca98e67 | 3;
    _DAT_14ca98e08 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca98e20 = &LAB_147434da6;
    _DAT_14ca98e28 = FUN_147434db4;
    _DAT_14ca98e30 = &LAB_147434dd4;
    _DAT_14ca98e38 = &LAB_147434de2;
    _DAT_14ca98e40 = FUN_147434df0;
    _DAT_14ca98e18 = FUN_147434e36;
    _DAT_14ca98e58 = 0x1000000010;
    _DAT_14ca98e60 = 8;
    DAT_14ca98e64 = 0;
  }
  _DAT_14ca98c20 = &DAT_14ca98e00;
  _DAT_14ca98c30 = &LAB_14682652b;
  _DAT_14ca98c38 = 0x1000000a0;
  _DAT_14ca98c40 = 0;
  _DAT_14ca98c28 = DAT_14ca97f88;
  DAT_14ca97f88 = &DAT_14ca98c18;
  return;
}



// FUNCTION 145cc1d22 FUN_145cc1d22 body=275 status=ok
// SIG undefined FUN_145cc1d22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc1d22(void)

{
  FUN_145cc2a06();
  _DAT_14ca98ec8 = L"BindlessResourceParameters";
  DAT_14ca98ef2 = FUN_140850cc5();
  if ((DAT_14ca9914f & 2) == 0) {
    DAT_14ca9914f = DAT_14ca9914f | 3;
    _DAT_14ca990f0 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca99108 = &LAB_1474356fc;
    _DAT_14ca99110 = FUN_14743570a;
    _DAT_14ca99118 = &LAB_14743572a;
    _DAT_14ca99120 = &LAB_147435738;
    _DAT_14ca99128 = FUN_147435746;
    _DAT_14ca99100 = FUN_147435790;
    _DAT_14ca99140 = 0x1000000010;
    _DAT_14ca99148 = 8;
    DAT_14ca9914c = 0;
  }
  _DAT_14ca98ed0 = &DAT_14ca990e8;
  _DAT_14ca98ee0 = &LAB_14682652b;
  _DAT_14ca98ee8 = &DAT_100000020;
  _DAT_14ca98ef0 = 0;
  _DAT_14ca98ed8 = DAT_14ca97ff8;
  DAT_14ca97ff8 = &DAT_14ca98ec8;
  return;
}



// FUNCTION 145cc1e36 FUN_145cc1e36 body=276 status=ok
// SIG undefined FUN_145cc1e36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc1e36(void)

{
  FUN_145cc1f4a();
  _DAT_14ca99c30 = L"TextureSamplers";
  DAT_14ca99c5a = FUN_140850cc5();
  if ((DAT_14ca99dbf & 2) == 0) {
    DAT_14ca99dbf = DAT_14ca99dbf | 3;
    _DAT_14ca99d60 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca99d78 = &LAB_147438eb8;
    _DAT_14ca99d80 = FUN_147438ec6;
    _DAT_14ca99d88 = &LAB_147438ee6;
    _DAT_14ca99d90 = &LAB_147438ef4;
    _DAT_14ca99d98 = FUN_147438f02;
    _DAT_14ca99d70 = FUN_147438f4c;
    _DAT_14ca99db0 = 0x1000000010;
    _DAT_14ca99db8 = 8;
    DAT_14ca99dbc = 0;
  }
  _DAT_14ca99c38 = &DAT_14ca99d58;
  _DAT_14ca99c48 = &LAB_14682652b;
  _DAT_14ca99c50 = &DAT_100000010;
  _DAT_14ca99c58 = 0;
  _DAT_14ca99c40 = DAT_14ca98378;
  DAT_14ca98378 = &DAT_14ca99c30;
  return;
}



// FUNCTION 145cc1f4a FUN_145cc1f4a body=275 status=ok
// SIG undefined FUN_145cc1f4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc1f4a(void)

{
  FUN_145cc205e();
  _DAT_14ca99c60 = L"SRVs";
  DAT_14ca99c8a = FUN_140850cc5();
  if ((DAT_14ca99dbf & 2) == 0) {
    DAT_14ca99dbf = DAT_14ca99dbf | 3;
    _DAT_14ca99d60 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca99d78 = &LAB_147438eb8;
    _DAT_14ca99d80 = FUN_147438ec6;
    _DAT_14ca99d88 = &LAB_147438ee6;
    _DAT_14ca99d90 = &LAB_147438ef4;
    _DAT_14ca99d98 = FUN_147438f02;
    _DAT_14ca99d70 = FUN_147438f4c;
    _DAT_14ca99db0 = 0x1000000010;
    _DAT_14ca99db8 = 8;
    DAT_14ca99dbc = 0;
  }
  _DAT_14ca99c68 = &DAT_14ca99d58;
  _DAT_14ca99c78 = &LAB_14682652b;
  _DAT_14ca99c80 = &DAT_100000020;
  _DAT_14ca99c88 = 0;
  _DAT_14ca99c70 = DAT_14ca98378;
  DAT_14ca98378 = &DAT_14ca99c60;
  return;
}



// FUNCTION 145cc205e FUN_145cc205e body=275 status=ok
// SIG undefined FUN_145cc205e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc205e(void)

{
  FUN_145cc2172();
  _DAT_14ca99c90 = L"LooseParameterBuffers";
  DAT_14ca99cba = FUN_140850cc5();
  if ((DAT_14ca99d57 & 2) == 0) {
    DAT_14ca99d57 = DAT_14ca99d57 | 3;
    _DAT_14ca99cf8 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca99d10 = &LAB_147438a7a;
    _DAT_14ca99d18 = FUN_147438a88;
    _DAT_14ca99d20 = &LAB_147438aa8;
    _DAT_14ca99d28 = &LAB_147438ab6;
    _DAT_14ca99d30 = FUN_147438ac4;
    _DAT_14ca99d08 = FUN_147438b0e;
    _DAT_14ca99d48 = 0x1000000010;
    _DAT_14ca99d50 = 8;
    DAT_14ca99d54 = 0;
  }
  _DAT_14ca99c98 = &DAT_14ca99cf0;
  _DAT_14ca99ca8 = &LAB_14682652b;
  _DAT_14ca99cb0 = &DAT_100000030;
  _DAT_14ca99cb8 = 0;
  _DAT_14ca99ca0 = DAT_14ca98378;
  DAT_14ca98378 = &DAT_14ca99c90;
  return;
}



// FUNCTION 145cc2172 FUN_145cc2172 body=270 status=ok
// SIG undefined FUN_145cc2172(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc2172(void)

{
  _DAT_14ca99cc0 = &DAT_149e385f8;
  DAT_14ca99cea = FUN_140850cc5();
  if ((DAT_14c87e707 & 2) == 0) {
    DAT_14c87e707 = DAT_14c87e707 | 3;
    _DAT_14c87e6a8 = L"unsigned long long";
    _DAT_14c87e6c0 = FUN_146828f6a;
    _DAT_14c87e6c8 = &LAB_146828f9c;
    _DAT_14c87e6d0 = &LAB_146828fa8;
    _DAT_14c87e6d8 = &LAB_146828fae;
    _DAT_14c87e6e0 = FUN_146828fb2;
    _DAT_14c87e6b8 = &LAB_146828fce;
    _DAT_14c87e6f8 = 0x800000008;
    _DAT_14c87e700 = 8;
    DAT_14c87e704 = 0;
  }
  _DAT_14ca99cc8 = &DAT_14c87e6a0;
  _DAT_14ca99cd8 = &LAB_14682652b;
  _DAT_14ca99ce0 = 0x100000040;
  _DAT_14ca99ce8 = 0;
  _DAT_14ca99cd0 = DAT_14ca98378;
  DAT_14ca98378 = &DAT_14ca99cc0;
  return;
}



// FUNCTION 145cc2280 FUN_145cc2280 body=276 status=ok
// SIG undefined FUN_145cc2280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc2280(void)

{
  FUN_145cc2394();
  _DAT_14ca98c48 = L"UniformBufferParameters";
  DAT_14ca98c72 = FUN_140850cc5();
  if ((DAT_14ca5afef & 2) == 0) {
    DAT_14ca5afef = DAT_14ca5afef | 3;
    _DAT_14ca5af90 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca5afa8 = &LAB_1472f58bc;
    _DAT_14ca5afb0 = FUN_1472f58ca;
    _DAT_14ca5afb8 = &LAB_1472f58ea;
    _DAT_14ca5afc0 = &LAB_1472f58f8;
    _DAT_14ca5afc8 = FUN_1472f5906;
    _DAT_14ca5afa0 = FUN_1472f594c;
    _DAT_14ca5afe0 = 0x1000000010;
    _DAT_14ca5afe8 = 8;
    DAT_14ca5afec = 0;
  }
  _DAT_14ca98c50 = &DAT_14ca5af88;
  _DAT_14ca98c60 = &LAB_14682652b;
  _DAT_14ca98c68 = 0x1000000b0;
  _DAT_14ca98c70 = 0;
  _DAT_14ca98c58 = DAT_14ca97f88;
  DAT_14ca97f88 = &DAT_14ca98c48;
  return;
}



// FUNCTION 145cc2394 FUN_145cc2394 body=275 status=ok
// SIG undefined FUN_145cc2394(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc2394(void)

{
  FUN_145cc24a8();
  _DAT_14ca98c78 = L"Type";
  DAT_14ca98ca2 = FUN_140850cc5();
  if ((DAT_14ca9843f & 2) == 0) {
    DAT_14ca9843f = DAT_14ca9843f | 3;
    _DAT_14ca983e0 = L"TIndexedPtr<FShaderType>";
    _DAT_14ca983f8 = &LAB_147432660;
    _DAT_14ca98400 = FUN_147432702;
    _DAT_14ca98408 = &LAB_147432726;
    _DAT_14ca98410 = &LAB_147432734;
    _DAT_14ca98418 = &LAB_147432742;
    _DAT_14ca983f0 = &LAB_14743274a;
    _DAT_14ca98430 = 0x800000008;
    _DAT_14ca98438 = 8;
    DAT_14ca9843c = 0;
  }
  _DAT_14ca98c80 = &DAT_14ca983d8;
  _DAT_14ca98c90 = &LAB_14682652b;
  _DAT_14ca98c98 = 0x1000000c0;
  _DAT_14ca98ca0 = 0;
  _DAT_14ca98c88 = DAT_14ca97f88;
  DAT_14ca97f88 = &DAT_14ca98c78;
  return;
}



// FUNCTION 145cc24a8 FUN_145cc24a8 body=275 status=ok
// SIG undefined FUN_145cc24a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc24a8(void)

{
  FUN_145cc25bc();
  _DAT_14ca98ca8 = L"VFType";
  DAT_14ca98cd2 = FUN_140850cc5();
  if ((DAT_14ca984a7 & 2) == 0) {
    DAT_14ca984a7 = DAT_14ca984a7 | 3;
    _DAT_14ca98448 = L"TIndexedPtr<FVertexFactoryType>";
    _DAT_14ca98460 = &LAB_147432758;
    _DAT_14ca98468 = FUN_1474327fa;
    _DAT_14ca98470 = &LAB_14743281e;
    _DAT_14ca98478 = &LAB_14743282c;
    _DAT_14ca98480 = &LAB_14743283a;
    _DAT_14ca98458 = &LAB_147432842;
    _DAT_14ca98498 = 0x800000008;
    _DAT_14ca984a0 = 8;
    DAT_14ca984a4 = 0;
  }
  _DAT_14ca98cb0 = &DAT_14ca98440;
  _DAT_14ca98cc0 = &LAB_14682652b;
  _DAT_14ca98cc8 = 0x1000000c8;
  _DAT_14ca98cd0 = 0;
  _DAT_14ca98cb8 = DAT_14ca97f88;
  DAT_14ca97f88 = &DAT_14ca98ca8;
  return;
}



// FUNCTION 145cc25bc FUN_145cc25bc body=275 status=ok
// SIG undefined FUN_145cc25bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc25bc(void)

{
  FUN_145cc26d0();
  _DAT_14ca98cd8 = L"Target";
  DAT_14ca98d02 = FUN_140850cc5();
  if ((DAT_14ca98dff & 2) == 0) {
    DAT_14ca98dff = DAT_14ca98dff | 3;
    _DAT_14ca98da0 = L"FShaderTarget";
    _DAT_14ca98db8 = &LAB_147434d76;
    _DAT_14ca98dc0 = &LAB_147434d82;
    _DAT_14ca98dc8 = &LAB_147434d8e;
    _DAT_14ca98dd0 = &LAB_147434d94;
    _DAT_14ca98dd8 = &LAB_147434d98;
    _DAT_14ca98db0 = &LAB_147434d9e;
    _DAT_14ca98df0 = 0x400000004;
    _DAT_14ca98df8 = 4;
    DAT_14ca98dfc = 0;
  }
  _DAT_14ca98ce0 = &DAT_14ca98d98;
  _DAT_14ca98cf0 = &LAB_14682652b;
  _DAT_14ca98cf8 = 0x1000000d0;
  _DAT_14ca98d00 = 0;
  _DAT_14ca98ce8 = DAT_14ca97f88;
  DAT_14ca97f88 = &DAT_14ca98cd8;
  return;
}



// FUNCTION 145cc26d0 FUN_145cc26d0 body=275 status=ok
// SIG undefined FUN_145cc26d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc26d0(void)

{
  FUN_145cc27e4();
  _DAT_14ca98d08 = L"ResourceIndex";
  DAT_14ca98d32 = FUN_140850cc5();
  if ((DAT_14c951c5f & 2) == 0) {
    DAT_14c951c5f = DAT_14c951c5f | 3;
    _DAT_14c951c00 = &DAT_149e97ffe;
    _DAT_14c951c18 = &LAB_1468cb2bc;
    _DAT_14c951c20 = &LAB_1468cb2c8;
    _DAT_14c951c28 = &LAB_1468cb2d4;
    _DAT_14c951c30 = &LAB_14280d956;
    _DAT_14c951c38 = &LAB_1468cb2da;
    _DAT_14c951c10 = &LAB_1468cb2e2;
    _DAT_14c951c50 = 0x400000004;
    _DAT_14c951c58 = 4;
    DAT_14c951c5c = 0;
  }
  _DAT_14ca98d10 = &DAT_14c951bf8;
  _DAT_14ca98d20 = &LAB_14682652b;
  _DAT_14ca98d28 = 0x1000000d4;
  _DAT_14ca98d30 = 0;
  _DAT_14ca98d18 = DAT_14ca97f88;
  DAT_14ca97f88 = &DAT_14ca98d08;
  return;
}



// FUNCTION 145cc27e4 FUN_145cc27e4 body=276 status=ok
// SIG undefined FUN_145cc27e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc27e4(void)

{
  FUN_145cc28f8();
  _DAT_14ca98d38 = L"NumInstructions";
  DAT_14ca98d62 = FUN_140850cc5();
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  _DAT_14ca98d40 = &DAT_14c87e638;
  _DAT_14ca98d50 = &LAB_14682652b;
  _DAT_14ca98d58 = 0x1000000d8;
  _DAT_14ca98d60 = 0;
  _DAT_14ca98d48 = DAT_14ca97f88;
  DAT_14ca97f88 = &DAT_14ca98d38;
  return;
}



// FUNCTION 145cc28f8 FUN_145cc28f8 body=270 status=ok
// SIG undefined FUN_145cc28f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc28f8(void)

{
  _DAT_14ca98d68 = L"SortKey";
  DAT_14ca98d92 = FUN_140850cc5();
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  _DAT_14ca98d70 = &DAT_14c87e638;
  _DAT_14ca98d80 = &LAB_14682652b;
  _DAT_14ca98d88 = 0x1000000dc;
  _DAT_14ca98d90 = 0;
  _DAT_14ca98d78 = DAT_14ca97f88;
  DAT_14ca97f88 = &DAT_14ca98d68;
  return;
}



// FUNCTION 145cc2a06 FUN_145cc2a06 body=276 status=ok
// SIG undefined FUN_145cc2a06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc2a06(void)

{
  FUN_145cc2b1a();
  _DAT_14ca98ef8 = L"GraphUniformBuffers";
  DAT_14ca98f22 = FUN_140850cc5();
  if ((DAT_14ca9901f & 2) == 0) {
    DAT_14ca9901f = DAT_14ca9901f | 3;
    _DAT_14ca98fc0 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca98fd8 = &LAB_1474350d0;
    _DAT_14ca98fe0 = FUN_1474350de;
    _DAT_14ca98fe8 = &LAB_1474350fe;
    _DAT_14ca98ff0 = &LAB_14743510c;
    _DAT_14ca98ff8 = FUN_14743511a;
    _DAT_14ca98fd0 = FUN_147435164;
    _DAT_14ca99010 = 0x1000000010;
    _DAT_14ca99018 = 8;
    DAT_14ca9901c = 0;
  }
  _DAT_14ca98f00 = &DAT_14ca98fb8;
  _DAT_14ca98f10 = &LAB_14682652b;
  _DAT_14ca98f18 = &DAT_100000030;
  _DAT_14ca98f20 = 0;
  _DAT_14ca98f08 = DAT_14ca97ff8;
  DAT_14ca97ff8 = &DAT_14ca98ef8;
  return;
}



// FUNCTION 145cc2b1a FUN_145cc2b1a body=275 status=ok
// SIG undefined FUN_145cc2b1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc2b1a(void)

{
  FUN_145cc2c2e();
  _DAT_14ca98f28 = L"ParameterReferences";
  DAT_14ca98f52 = FUN_140850cc5();
  if ((DAT_14ca9901f & 2) == 0) {
    DAT_14ca9901f = DAT_14ca9901f | 3;
    _DAT_14ca98fc0 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca98fd8 = &LAB_1474350d0;
    _DAT_14ca98fe0 = FUN_1474350de;
    _DAT_14ca98fe8 = &LAB_1474350fe;
    _DAT_14ca98ff0 = &LAB_14743510c;
    _DAT_14ca98ff8 = FUN_14743511a;
    _DAT_14ca98fd0 = FUN_147435164;
    _DAT_14ca99010 = 0x1000000010;
    _DAT_14ca99018 = 8;
    DAT_14ca9901c = 0;
  }
  _DAT_14ca98f30 = &DAT_14ca98fb8;
  _DAT_14ca98f40 = &LAB_14682652b;
  _DAT_14ca98f48 = 0x100000040;
  _DAT_14ca98f50 = 0;
  _DAT_14ca98f38 = DAT_14ca97ff8;
  DAT_14ca97ff8 = &DAT_14ca98f28;
  return;
}



// FUNCTION 145cc2c2e FUN_145cc2c2e body=276 status=ok
// SIG undefined FUN_145cc2c2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc2c2e(void)

{
  FUN_145cc2d42();
  _DAT_14ca98f58 = L"StructureLayoutHash";
  DAT_14ca98f82 = FUN_140850cc5();
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  _DAT_14ca98f60 = &DAT_14c87e638;
  _DAT_14ca98f70 = &LAB_14682652b;
  _DAT_14ca98f78 = 0x100000050;
  _DAT_14ca98f80 = 0;
  _DAT_14ca98f68 = DAT_14ca97ff8;
  DAT_14ca97ff8 = &DAT_14ca98f58;
  return;
}



// FUNCTION 145cc2d42 FUN_145cc2d42 body=271 status=ok
// SIG undefined FUN_145cc2d42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc2d42(void)

{
  _DAT_14ca98f88 = L"RootParameterBufferIndex";
  DAT_14ca98fb2 = FUN_140850cc5();
  if ((DAT_14ca84d17 & 2) == 0) {
    DAT_14ca84d17 = DAT_14ca84d17 | 3;
    _DAT_14ca84cb8 = L"unsigned short";
    _DAT_14ca84cd0 = &LAB_147413ebe;
    _DAT_14ca84cd8 = &LAB_147413eca;
    _DAT_14ca84ce0 = &LAB_147413ed8;
    _DAT_14ca84ce8 = &LAB_1431edfe0;
    _DAT_14ca84cf0 = &LAB_147413ede;
    _DAT_14ca84cc8 = &LAB_147413ee6;
    _DAT_14ca84d08 = &DAT_200000002;
    _DAT_14ca84d10 = 2;
    DAT_14ca84d14 = 0;
  }
  _DAT_14ca98f90 = &DAT_14ca84cb0;
  _DAT_14ca98fa0 = &LAB_14682652b;
  _DAT_14ca98fa8 = 0x100000054;
  _DAT_14ca98fb0 = 0;
  _DAT_14ca98f98 = DAT_14ca97ff8;
  DAT_14ca97ff8 = &DAT_14ca98f88;
  return;
}



// FUNCTION 145cc2e52 FUN_145cc2e52 body=43 status=ok
// SIG undefined FUN_145cc2e52(void)

undefined8 FUN_145cc2e52(undefined8 param_1,int param_2)

{
  FUN_145cc2e7e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 145cc2e7e FUN_145cc2e7e body=83 status=ok
// SIG undefined FUN_145cc2e7e(void)

void FUN_145cc2e7e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a162f50;
  param_1[1] = &PTR_FUN_14a162fb0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 2);
  FUN_1410c966c(param_1 + 1);
  return;
}



// FUNCTION 145cc2ed2 FUN_145cc2ed2 body=63 status=ok
// SIG undefined FUN_145cc2ed2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc2ed2(void)

{
  _DAT_14cafb348 = 0;
  if (DAT_14cafb340 != 0) {
    FUN_1400020a8();
  }
  FUN_145cc2f12();
  if (DAT_14cafb2f0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145cc2f12 FUN_145cc2f12 body=63 status=ok
// SIG undefined FUN_145cc2f12(void)

void FUN_145cc2f12(void)

{
  FUN_140d96d14(&DAT_14cafb300,0);
  if (DAT_14cafb320 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cafb300 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cc2f5c FUN_145cc2f5c body=241 status=ok
// SIG undefined FUN_145cc2f5c(void)

undefined8 * FUN_145cc2f5c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  FUN_140edf546();
  *param_1 = &PTR_FUN_14ab7e830;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[8] = DAT_14cb1cc68;
  puVar2 = param_1;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      plVar1 = param_1 + 0xe;
      param_1[0x11] = &DAT_14cb1c8a0;
      param_1[0x10] = param_1;
      lVar3 = DAT_14cb1c8a0;
      while( true ) {
        param_1[0xe] = lVar3;
        LOCK();
        lVar4 = *(longlong *)param_1[0x11];
        bVar5 = lVar3 == lVar4;
        if (bVar5) {
          *(longlong *)param_1[0x11] = (longlong)plVar1;
          lVar4 = lVar3;
        }
        UNLOCK();
        if (bVar5) break;
        param_1[0xe] = lVar4;
        lVar3 = *(longlong *)param_1[0x11];
      }
      if (*plVar1 != 0) {
        *(longlong **)(*plVar1 + 8) = plVar1;
      }
      return param_1;
    }
    if ((*(uint *)(puVar2 + 1) & 0x30) != 0) break;
    puVar2 = (undefined8 *)puVar2[4];
  }
  return param_1;
}



// FUNCTION 145cc3058 FUN_145cc3058 body=115 status=ok
// SIG undefined FUN_145cc3058(void)

undefined8 * FUN_145cc3058(undefined8 *param_1)

{
  FUN_144805d84();
  *param_1 = &PTR_FUN_14abfce80;
  param_1[5] = &PTR_FUN_14abfd350;
  param_1[6] = &PTR_LAB_14abfd390;
  param_1[0x22] = &PTR_FUN_14abfd3e0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  FUN_1458cb0f0(param_1 + 0x29);
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xfe;
  return param_1;
}



// FUNCTION 145cc30cc FUN_145cc30cc body=40 status=ok
// SIG undefined FUN_145cc30cc(void)

undefined8 FUN_145cc30cc(undefined8 param_1,int param_2)

{
  FUN_145cc30f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc30f4 FUN_145cc30f4 body=167 status=ok
// SIG undefined FUN_145cc30f4(void)

void FUN_145cc30f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acc0800;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_145cc319b(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cc319b FUN_145cc319b body=45 status=ok
// SIG undefined FUN_145cc319b(void)

void FUN_145cc319b(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145cc31d0 FUN_145cc31d0 body=118 status=ok
// SIG undefined FUN_145cc31d0(void)

undefined8 * FUN_145cc31d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ad92e60;
  FUN_140056680(param_1 + 7,L"{AssetFolder}/{AssetName}_SimCache_{OutputName}");
  *(undefined1 *)(param_1 + 9) = 0;
  *(uint *)((longlong)param_1 + 0x4c) = *(uint *)((longlong)param_1 + 0x4c) & 0xffffffc0 | 0x13;
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
  return param_1;
}



// FUNCTION 145cc3246 FUN_145cc3246 body=81 status=ok
// SIG undefined FUN_145cc3246(void)

longlong FUN_145cc3246(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    FUN_144a2da94(param_1 + 0x80);
    FUN_144a2da94(param_1 + 0x40);
    FUN_144a2da94(param_1 + 8);
  }
  FUN_145cc3298(param_1,param_2);
  *(undefined1 *)(param_1 + 0xb8) = 1;
  return param_1;
}



// FUNCTION 145cc3298 FUN_145cc3298 body=108 status=ok
// SIG undefined FUN_145cc3298(void)

longlong * FUN_145cc3298(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_14034cca6(param_1 + 1,param_2 + 1);
  FUN_14034cca6(param_1 + 8,param_2 + 8);
  *(short *)(param_1 + 0xf) = (short)param_2[0xf];
  *(undefined1 *)((longlong)param_1 + 0x7a) = *(undefined1 *)((longlong)param_2 + 0x7a);
  FUN_14034cca6(param_1 + 0x10,param_2 + 0x10);
  return param_1;
}



// FUNCTION 145cc3304 FUN_145cc3304 body=95 status=ok
// SIG undefined FUN_145cc3304(void)

ulonglong FUN_145cc3304(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145cc3346:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_145cc3346;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
    }
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 145cc336a FUN_145cc336a body=89 status=ok
// SIG undefined FUN_145cc336a(void)

void FUN_145cc336a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140f7f1be();
  lVar2 = FUN_140f7f142(param_1);
  if (((lVar1 != 0) && (lVar2 != 0)) && (*(int *)(lVar1 + 0x80) != 0)) {
    if (*(int *)(param_1 + 0x168) != 0) {
      FUN_14620697c(param_1);
    }
    FUN_146176ad6(param_1,lVar1 + 0x78);
    return;
  }
  return;
}



// FUNCTION 145cc33c4 FUN_145cc33c4 body=26 status=ok
// SIG undefined FUN_145cc33c4(void)

void FUN_145cc33c4(undefined8 param_1)

{
  FUN_145cc33de();
  FUN_1413d8c86(param_1);
  return;
}



// FUNCTION 145cc33de FUN_145cc33de body=37 status=ok
// SIG undefined FUN_145cc33de(void)

void FUN_145cc33de(longlong *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x440))();
  uVar1 = FUN_141348de4();
  FUN_141348e90(param_1,uVar1);
  return;
}



// FUNCTION 145cc3404 FUN_145cc3404 body=78 status=ok
// SIG undefined FUN_145cc3404(void)

undefined8 * FUN_145cc3404(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_145cc348e(param_2,iVar1,0);
    FUN_145cc3452(*param_2,uVar2,iVar1);
  }
  return param_2;
}



// FUNCTION 145cc3452 FUN_145cc3452 body=60 status=ok
// SIG undefined FUN_145cc3452(void)

void FUN_145cc3452(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1411769de(param_1,param_2);
    param_1 = param_1 + 0x168;
    param_2 = param_2 + 0x168;
  }
  return;
}



// FUNCTION 145cc348e FUN_145cc348e body=114 status=ok
// SIG undefined FUN_145cc348e(void)

void FUN_145cc348e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x168,8);
    iVar2 = (int)(uVar1 / 0x168);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x168,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145cc350c FUN_145cc350c body=115 status=ok
// SIG undefined FUN_145cc350c(void)

undefined8 * FUN_145cc350c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xc0);
  memset(puVar1 + 2,0,0x90);
  *puVar1 = &PTR_FUN_14b504110;
  puVar1[1] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x51) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x59) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 2;
  *(undefined8 *)((longlong)puVar1 + 0x7c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x84) = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  return puVar1;
}



// FUNCTION 145cc3580 FUN_145cc3580 body=40 status=ok
// SIG undefined FUN_145cc3580(void)

undefined8 FUN_145cc3580(undefined8 param_1,int param_2)

{
  FUN_145cc35a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc35a8 FUN_145cc35a8 body=86 status=ok
// SIG undefined FUN_145cc35a8(void)

void FUN_145cc35a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b722d60;
  param_1[0x8a] = &PTR_FUN_14b72b330;
  FUN_140280878(param_1 + 0x19f);
  FUN_14064e066(param_1 + 0x8a);
  FUN_1449db362(param_1 + 0x87);
  FUN_14064ee12(param_1);
  return;
}



// FUNCTION 145cc35fe FUN_145cc35fe body=101 status=ok
// SIG undefined FUN_145cc35fe(void)

void FUN_145cc35fe(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_1415260e0(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145cc3613. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  puVar2 = (undefined8 *)FUN_1414bc928();
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  *puVar2 = &PTR_FUN_14b9622b0;
  *(undefined4 *)(puVar2 + 3) = 0;
  *(undefined2 *)((longlong)puVar2 + 0x1c) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x1e) = 0x1010101;
  *(undefined2 *)((longlong)puVar2 + 0x22) = 0x101;
  *(undefined1 *)((longlong)puVar2 + 0x24) = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  return;
}



// FUNCTION 145cc3664 FUN_145cc3664 body=80 status=ok
// SIG undefined FUN_145cc3664(void)

void FUN_145cc3664(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1414bc928();
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14b9622b0;
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1e) = 0x1010101;
  *(undefined2 *)((longlong)puVar1 + 0x22) = 0x101;
  *(undefined1 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 145cc36b4 FUN_145cc36b4 body=25 status=ok
// SIG undefined FUN_145cc36b4(void)

void FUN_145cc36b4(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145cc36c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 145cc36ce FUN_145cc36ce body=38 status=ok
// SIG undefined FUN_145cc36ce(void)

undefined8 FUN_145cc36ce(undefined8 param_1,int param_2)

{
  FUN_1459159d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc36fc FUN_145cc36fc body=118 status=ok
// SIG undefined FUN_145cc36fc(void)

undefined8 * FUN_145cc36fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  
  uVar1 = FUN_14007ca06();
  FUN_145981c3a(param_1,uVar1);
  *param_1 = &PTR_FUN_14bcbadb0;
  *(undefined4 *)(param_1 + 5) = 7;
  *(undefined8 *)((longlong)param_1 + 0x2c) = DAT_14cbfea60;
  puVar2 = DAT_14cbfe9e0;
  if (DAT_14cbfe9e8 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_1446f470e((longlong)param_1 + 0x34,puVar2,1);
  *(undefined2 *)((longlong)param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 8) = 0x3c23d70a;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  return param_1;
}



// FUNCTION 145cc3772 FUN_145cc3772 body=40 status=ok
// SIG undefined FUN_145cc3772(void)

undefined8 FUN_145cc3772(undefined8 param_1,int param_2)

{
  FUN_145cc379a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc379a FUN_145cc379a body=86 status=ok
// SIG undefined FUN_145cc379a(void)

void FUN_145cc379a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcf30e0;
  param_1[5] = &PTR_FUN_14bcf3390;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145834761(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cc37f8 FUN_145cc37f8 body=117 status=ok
// SIG undefined FUN_145cc37f8(void)

undefined8 * FUN_145cc37f8(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bd20590;
  param_1[5] = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6511c(param_1 + 6);
  param_1[0xc] = 0;
  FUN_140e6507e(param_1 + 0xd);
  param_1[0x15] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc386e FUN_145cc386e body=237 status=ok
// SIG undefined FUN_145cc386e(void)

void FUN_145cc386e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1415261a6(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc395c FUN_145cc395c body=389 status=ok
// SIG undefined FUN_145cc395c(void)

undefined1 *
FUN_145cc395c(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_145cc3ae8(param_4);
  if (lVar4 != 0) {
LAB_145cc3a0f:
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined1 **)(param_2 + 0x38) = &DAT_100000001;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    FUN_1456bb102(param_2,lVar4);
    if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  lVar4 = FUN_1400e8a68(param_4);
  if (((((lVar4 != 0) && (uVar3 = FUN_141526213(), -1 < (int)uVar3)) &&
       ((int)uVar3 < *(int *)(lVar4 + 0x78f0))) &&
      ((lVar4 = (ulonglong)uVar3 * 0x48 + *(longlong *)(lVar4 + 0x78e8), lVar4 != 0 &&
       (*(longlong *)(lVar4 + 0x20) != 0)))) &&
     ((*(longlong **)(lVar4 + 0x28) != (longlong *)0x0 &&
      (lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x28) + 8))(), lVar4 != 0)))) {
    lVar5 = FUN_14593f3c6();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) goto LAB_145cc3a0f;
  }
  FUN_140232ee4(param_4,&local_30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x100000000;
  if (local_30 != 0) {
    *(undefined4 *)(param_2 + 0x38) = 1;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    FUN_1408403ca(param_2,&local_30);
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 145cc3ae8 FUN_145cc3ae8 body=61 status=ok
// SIG undefined FUN_145cc3ae8(void)

longlong FUN_145cc3ae8(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    lVar2 = FUN_14593f3c6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 145cc3b2c FUN_145cc3b2c body=342 status=ok
// SIG undefined FUN_145cc3b2c(void)

longlong * FUN_145cc3b2c(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)FUN_14122506a();
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_145abfb9a(param_1,param_2);
      (**(code **)(*(longlong *)*plVar1 + 0x420))((longlong *)*plVar1,0);
    }
    if (*(int *)((longlong)plVar1 + 0x4c) < (int)plVar1[4]) {
      FUN_14005eae2(plVar1 + 3);
    }
    if ((((param_2 != (longlong *)0x0) && ((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0)) &&
        (param_2[0xa1] != 0)) && ((*(uint *)(param_2[0xa1] + 8) >> 0x1e & 1) == 0)) {
      uVar2 = (**(code **)(*param_1 + 0x78))(param_1);
      plVar3 = (longlong *)FUN_141262cc4(DAT_14c951640,uVar2,0,0,0,0,0,0);
      if (plVar3 == (longlong *)0x0) {
        return (longlong *)0x0;
      }
      *(undefined4 *)(plVar3 + 0x32) = param_3;
      lVar4 = FUN_1407f4df8();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        (**(code **)(*plVar3 + 0x4a0))(plVar3,param_2);
      }
      if ((longlong *)*plVar1 != plVar3) {
        if ((longlong *)*plVar1 != (longlong *)0x0) {
          FUN_140113f3a();
        }
        FUN_1401924dc(plVar3);
        *plVar1 = (longlong)plVar3;
      }
      (**(code **)(*param_2 + 0xce0))(param_2,plVar3);
      return plVar3;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 145cc3c8a FUN_145cc3c8a body=611 status=ok
// SIG undefined FUN_145cc3c8a(void)

undefined8 * FUN_145cc3c8a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  longlong *local_68;
  longlong *local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140e3421a();
  *param_1 = &PTR_FUN_14ae650b0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined8 *)((longlong)param_1 + 0x37) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x47) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x57) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x67) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x77) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x87) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x97) = 0;
  plVar6 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ae6b390;
  plVar1 = plVar6 + 2;
  FUN_145cc3eee(plVar1,param_1);
  plVar6[2] = (longlong)&PTR_FUN_14ae6b3b0;
  local_68 = plVar1;
  local_60 = plVar6;
  FUN_145cc3f2e(&local_68,plVar1);
  plVar5 = local_60;
  param_1[0x13] = plVar1;
  param_1[0x14] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
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
  FUN_1400b22c2(&local_68,&DAT_149e3cc88);
  uVar3 = (ulonglong)(DAT_14c762a5c + -1 + (uint)(DAT_14c762a5c == 0)) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_145cc3fd0(param_1 + 0x16,&local_68,1 << ((byte)lVar4 & 0x1f));
  *(int *)(param_1 + 0x15) = *(int *)(param_1 + 0x17) + -1;
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 2;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0x200000000;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    FUN_148259d52(&local_68,param_1);
    FUN_14109bcee(&DAT_14cae4848,local_70,&local_68);
    FUN_1401cb1ee(&local_68);
    FUN_14824006c(&local_68,param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc3eee FUN_145cc3eee body=64 status=ok
// SIG undefined FUN_145cc3eee(void)

undefined8 * FUN_145cc3eee(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14ae6bab0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_14485c47a(param_1 + 5);
  param_1[6] = 0xffffffff;
  return param_1;
}



// FUNCTION 145cc3f2e FUN_145cc3f2e body=162 status=ok
// SIG undefined FUN_145cc3f2e(void)

void FUN_145cc3f2e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145cc3f6d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145cc3f6d;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145cc3f6d:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145cc3fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145cc3fd0 FUN_145cc3fd0 body=164 status=ok
// SIG undefined FUN_145cc3fd0(void)

void FUN_145cc3fd0(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  
  FUN_1408be27e(param_1,param_3);
  if (0 < param_3) {
    do {
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1447a1bd6(param_1,iVar2);
      }
      lVar3 = *param_1;
      lVar4 = (longlong)iVar2 * 0x10;
      puVar1 = (undefined8 *)(lVar3 + lVar4);
      *(undefined8 *)(lVar3 + lVar4) = 0;
      iVar2 = *(int *)(param_2 + 1);
      _Src = (void *)*param_2;
      *(int *)(lVar3 + 8 + lVar4) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar2,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145cc4074 FUN_145cc4074 body=162 status=ok
// SIG undefined FUN_145cc4074(void)

undefined8 * FUN_145cc4074(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_145cc4118(&local_38,param_3);
  FUN_145cc4196(param_1 + 0x1e8,local_40,&local_38);
  FUN_1449db362(&local_38);
  if (((int)param_3[1] == 0) || (param_3 = (longlong *)*param_3, param_3 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*param_3 + 0x38))(param_3,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc4118 FUN_145cc4118 body=124 status=ok
// SIG undefined FUN_145cc4118(void)

void FUN_145cc4118(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
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



// FUNCTION 145cc4196 FUN_145cc4196 body=216 status=ok
// SIG undefined FUN_145cc4196(void)

undefined8 * FUN_145cc4196(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc427e FUN_145cc427e body=40 status=ok
// SIG undefined FUN_145cc427e(void)

undefined8 FUN_145cc427e(undefined8 param_1,int param_2)

{
  FUN_141526302();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc42be FUN_145cc42be body=43 status=ok
// SIG undefined FUN_145cc42be(void)

undefined8 FUN_145cc42be(undefined8 param_1,int param_2)

{
  FUN_145cc42ea();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe08);
  }
  return param_1;
}



// FUNCTION 145cc42ea FUN_145cc42ea body=124 status=ok
// SIG undefined FUN_145cc42ea(void)

void FUN_145cc42ea(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14be8bc70;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if (param_1[0x1bf] != 0) {
    FUN_1400020a8();
  }
  FUN_145cc4366(param_1 + 0x1b7);
  FUN_145cc439c(param_1 + 3);
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
                    /* WARNING: Could not recover jumptable at 0x000145cc4362. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145cc4366 FUN_145cc4366 body=53 status=ok
// SIG undefined FUN_145cc4366(void)

void FUN_145cc4366(longlong *param_1)

{
  FUN_145cc4406();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cc439c FUN_145cc439c body=105 status=ok
// SIG undefined FUN_145cc439c(void)

void FUN_145cc439c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14be8be60;
  if (0 < *(int *)(param_1 + 2)) {
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(param_1 + 2) = 0;
  }
  FUN_144b4ad10();
  plVar3 = (longlong *)param_1[0x164];
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
                    /* WARNING: Could not recover jumptable at 0x000145cc4401. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145cc4406 FUN_145cc4406 body=378 status=ok
// SIG undefined FUN_145cc4406(void)

void FUN_145cc4406(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cc4582 FUN_145cc4582 body=40 status=ok
// SIG undefined FUN_145cc4582(void)

undefined8 FUN_145cc4582(undefined8 param_1,int param_2)

{
  FUN_145cc45aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc45aa FUN_145cc45aa body=94 status=ok
// SIG undefined FUN_145cc45aa(void)

void FUN_145cc45aa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b56e960;
  FUN_145cc463f(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145cc4608(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cc4608 FUN_145cc4608 body=55 status=ok
// SIG undefined FUN_145cc4608(void)

void FUN_145cc4608(longlong *param_1)

{
  FUN_145cc4678(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cc463f FUN_145cc463f body=57 status=ok
// SIG undefined FUN_145cc463f(void)

void FUN_145cc463f(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_140113f3a();
        *(undefined8 *)(param_1 + lVar1 * 8) = 0;
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 145cc4678 FUN_145cc4678 body=385 status=ok
// SIG undefined FUN_145cc4678(void)

void FUN_145cc4678(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_148b4ef4a(*local_70 + (longlong)iStack_54 * 0x50 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140e9549c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cc4806 FUN_145cc4806 body=241 status=ok
// SIG undefined FUN_145cc4806(void)

undefined8 * FUN_145cc4806(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1413f708e();
  *param_1 = &PTR_FUN_14abfa790;
  param_1[5] = &PTR_FUN_14abfaab0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined2 *)(param_1 + 0x11) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  FUN_1400b22c2(&local_28,&DAT_14abfab28);
  if (param_1 + 6 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_28;
    *(undefined4 *)(param_1 + 7) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_1c;
  }
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x40a00000;
  *(byte *)((longlong)param_1 + 0x6c) = *(byte *)((longlong)param_1 + 0x6c) | 1;
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) & 0xfffffff9 | 2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc4904 FUN_145cc4904 body=242 status=ok
// SIG undefined FUN_145cc4904(void)

undefined8 * FUN_145cc4904(undefined8 *param_1)

{
  FUN_144a0768c();
  FUN_1409e1656(param_1 + 5);
  *param_1 = &PTR_FUN_14b915280;
  param_1[5] = &PTR_FUN_14b915520;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0xbff0000000000000;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    FUN_1449db8d8(param_1 + 5);
  }
  return param_1;
}



// FUNCTION 145cc49f6 FUN_145cc49f6 body=154 status=ok
// SIG undefined FUN_145cc49f6(void)

void FUN_145cc49f6(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_1 + 0x48) = 0;
  local_48 = FUN_14147c852;
  local_40 = 0;
  FUN_145cc4d3e(local_38,param_1,&local_48);
  local_48 = *(code **)(param_1 + 0x30);
  local_58 = local_38;
  FUN_145cc4a92(param_1 + 0x20,&local_48,
                (longlong)*(int *)(param_1 + 0x48) * 0x10 + *(longlong *)(param_1 + 0x38),
                param_1 + 0x50);
  FUN_1449db362(local_38);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc4a92 FUN_145cc4a92 body=340 status=ok
// SIG undefined FUN_145cc4a92(void)

void FUN_145cc4a92(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  longlong **local_78;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)FUN_14001cc68(0x150,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4f2960;
  plVar1 = plVar3 + 2;
  local_58 = (longlong *)*param_5;
  local_78 = &local_58;
  *param_5 = 0;
  local_50 = (longlong *)CONCAT44(local_50._4_4_,*(undefined4 *)(param_5 + 1));
  *(undefined4 *)(param_5 + 1) = 0;
  FUN_145cc4c8a(plVar1,*param_2,param_3,param_4);
  local_68 = plVar1;
  local_60 = plVar3;
  FUN_145cc4be8(&local_68,plVar1);
  local_58 = plVar1;
  local_50 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145944280(param_1,&local_58);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145944280(param_1);
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
  }
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc4be8 FUN_145cc4be8 body=162 status=ok
// SIG undefined FUN_145cc4be8(void)

void FUN_145cc4be8(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145cc4c27;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145cc4c27;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145cc4c27:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145cc4c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145cc4c8a FUN_145cc4c8a body=180 status=ok
// SIG undefined FUN_145cc4c8a(void)

undefined8 *
FUN_145cc4c8a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar2 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar2;
  param_1[5] = 0;
  param_1[6] = param_2;
  *param_1 = &PTR_FUN_14b4f2980;
  param_1[4] = &PTR_FUN_14b4f29a8;
  param_1[7] = *param_3;
  lVar1 = param_3[1];
  param_1[8] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FUN_1412c5ebc(param_1 + 9,param_4);
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  FUN_14114e6dc(param_1 + 0x25,param_5);
  param_1[0x27] = 0;
  FUN_1449db362(param_5);
  return param_1;
}



// FUNCTION 145cc4d3e FUN_145cc4d3e body=428 status=ok
// SIG undefined FUN_145cc4d3e(void)

longlong * FUN_145cc4d3e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145cc4e1e:
    *puVar5 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4f2a60;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145cc4e1e;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4f2a60;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 145cc4ef2 FUN_145cc4ef2 body=52 status=ok
// SIG undefined FUN_145cc4ef2(void)

void FUN_145cc4ef2(longlong param_1)

{
  FUN_1407cbe30();
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FUN_145cc4f26(*(longlong *)(param_1 + 0x288),param_1 + 0x160);
    return;
  }
  return;
}



// FUNCTION 145cc4f26 FUN_145cc4f26 body=244 status=ok
// SIG undefined FUN_145cc4f26(void)

void FUN_145cc4f26(longlong param_1,undefined8 param_2)

{
  ushort *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_144a06846(param_2,&DAT_14cbe3f30);
  FUN_145cc505e(param_1 + 0x2a8,uVar4);
  uVar4 = FUN_144a06846(param_2,&DAT_14cbe3f08);
  FUN_145cc505e(param_1 + 0x2b3,uVar4);
  uVar4 = FUN_144a06846(param_2,&DAT_14cbe3f58);
  FUN_145cc505e(param_1 + 0x2be,uVar4);
  bVar2 = FUN_145cc501a(param_1 + 0x2a8);
  *(byte *)(param_1 + 0x300) = bVar2 ^ 1;
  *(undefined1 *)(param_1 + 0x301) = 1;
  uVar4 = FUN_144a06846(param_2,&DAT_14cbe3ee0);
  bVar2 = FUN_1410c4486(uVar4,0);
  *(byte *)(param_1 + 0x302) = bVar2 ^ 1;
  *(undefined1 *)(param_1 + 0x303) = 1;
  uVar4 = FUN_144a06846(param_2,&DAT_14cbe3fd0);
  uVar3 = FUN_1410c4486(uVar4,0);
  *(undefined1 *)(param_1 + 0x304) = uVar3;
  puVar1 = *(ushort **)(param_1 + 0x80);
  if (puVar1 != (ushort *)0x0) {
    *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 145cc501a FUN_145cc501a body=67 status=ok
// SIG undefined FUN_145cc501a(void)

byte FUN_145cc501a(char *param_1)

{
  byte bVar1;
  
  bVar1 = 1;
  if ((((((*param_1 == '\x01') && (param_1[1] == '\x01')) && (param_1[2] == '\x01')) &&
       ((param_1[5] == '\x01' && (param_1[6] == '\x01')))) &&
      ((param_1[3] == '\x01' && ((param_1[4] == '\x01' && (param_1[7] == '\x01')))))) &&
     ((param_1[8] == '\x01' && (param_1[9] == '\x01')))) {
    bVar1 = param_1[10] ^ 1;
  }
  return bVar1;
}



// FUNCTION 145cc505e FUN_145cc505e body=905 status=ok
// SIG undefined FUN_145cc505e(void)

void FUN_145cc505e(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_2f8 [32];
  undefined1 local_2d8 [640];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  *param_1 = 0x101010101010101;
  *(undefined4 *)((longlong)param_1 + 7) = 0x1010101;
  cVar3 = FUN_144a79b3c(param_2);
  if (cVar3 == '\0') goto LAB_145cc50a9;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  plVar5 = (longlong *)FUN_1407cbaec(param_2);
  if ((longlong)(int)plVar5[2] == 0) {
LAB_145cc53c9:
    *param_1 = 0x101010101010101;
    *(undefined2 *)(param_1 + 1) = 0x101;
    bVar11 = true;
  }
  else {
    lVar9 = *plVar5;
    lVar8 = (longlong)(int)plVar5[2] << 4;
    do {
      uVar6 = FUN_140625082(lVar9,&DAT_14c9a12e0);
      uVar2 = local_50;
      lVar10 = (longlong)(int)local_50;
      uVar4 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,uVar4);
      if (local_50._4_4_ < uVar4) {
        FUN_148eee946(local_2d8,uVar2 & 0xffffffff);
      }
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_2d8;
      }
      FUN_1447a97f4(puVar7 + lVar10 * 0x28,uVar6);
      lVar9 = lVar9 + 0x10;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
    lVar9 = (longlong)(int)local_50;
    puVar7 = local_2d8;
    if (local_58 != (undefined1 *)0x0) {
      puVar7 = local_58;
    }
    if (lVar9 == 0) goto LAB_145cc53c9;
    lVar8 = lVar9 * 0x28;
    lVar10 = 0;
    do {
      if (*(int *)(puVar7 + lVar10) == DAT_14cbe3d50) {
        bVar11 = false;
        goto LAB_145cc51ec;
      }
      lVar10 = lVar10 + 0x28;
    } while (lVar8 != lVar10);
    lVar10 = 0;
    do {
      piVar1 = (int *)(puVar7 + lVar10);
      if (*piVar1 == DAT_14cbe3d78) break;
      bVar11 = lVar9 * 0x28 + -0x28 != lVar10;
      lVar10 = lVar10 + 0x28;
    } while (bVar11);
    bVar11 = *piVar1 != DAT_14cbe3d78;
LAB_145cc51ec:
    *(bool *)param_1 = bVar11;
    lVar10 = 0;
    do {
      if (*(int *)(puVar7 + lVar10) == DAT_14cbe3d50) {
        bVar11 = false;
        goto LAB_145cc523a;
      }
      lVar10 = lVar10 + 0x28;
    } while (lVar8 != lVar10);
    lVar10 = 0;
    do {
      piVar1 = (int *)(puVar7 + lVar10);
      if (*piVar1 == DAT_14cbe3da0) break;
      bVar11 = lVar9 * 0x28 + -0x28 != lVar10;
      lVar10 = lVar10 + 0x28;
    } while (bVar11);
    bVar11 = *piVar1 != DAT_14cbe3da0;
LAB_145cc523a:
    *(bool *)((longlong)param_1 + 1) = bVar11;
    lVar10 = 0;
    do {
      if (*(int *)(puVar7 + lVar10) == DAT_14cbe3d50) {
        bVar11 = false;
        goto LAB_145cc5289;
      }
      lVar10 = lVar10 + 0x28;
    } while (lVar8 != lVar10);
    lVar8 = 0;
    do {
      piVar1 = (int *)(puVar7 + lVar8);
      if (*piVar1 == DAT_14cbe3dc8) break;
      bVar11 = lVar9 * 0x28 + -0x28 != lVar8;
      lVar8 = lVar8 + 0x28;
    } while (bVar11);
    bVar11 = *piVar1 != DAT_14cbe3dc8;
LAB_145cc5289:
    *(bool *)((longlong)param_1 + 2) = bVar11;
    lVar9 = lVar9 * 0x28 + -0x28;
    lVar8 = 0;
    do {
      piVar1 = (int *)(puVar7 + lVar8);
      if (*piVar1 == DAT_14cbe3e40) break;
      bVar11 = lVar9 != lVar8;
      lVar8 = lVar8 + 0x28;
    } while (bVar11);
    *(bool *)((longlong)param_1 + 5) = *piVar1 != DAT_14cbe3e40;
    lVar8 = 0;
    do {
      piVar1 = (int *)(puVar7 + lVar8);
      if (*piVar1 == DAT_14cbe3e68) break;
      bVar11 = lVar9 != lVar8;
      lVar8 = lVar8 + 0x28;
    } while (bVar11);
    *(bool *)((longlong)param_1 + 6) = *piVar1 != DAT_14cbe3e68;
    lVar8 = 0;
    do {
      piVar1 = (int *)(puVar7 + lVar8);
      if (*piVar1 == DAT_14cbe3df0) break;
      bVar11 = lVar9 != lVar8;
      lVar8 = lVar8 + 0x28;
    } while (bVar11);
    *(bool *)((longlong)param_1 + 3) = *piVar1 != DAT_14cbe3df0;
    lVar8 = 0;
    do {
      piVar1 = (int *)(puVar7 + lVar8);
      if (*piVar1 == DAT_14cbe3e18) break;
      bVar11 = lVar9 != lVar8;
      lVar8 = lVar8 + 0x28;
    } while (bVar11);
    *(bool *)((longlong)param_1 + 4) = *piVar1 != DAT_14cbe3e18;
    lVar8 = 0;
    do {
      piVar1 = (int *)(puVar7 + lVar8);
      if (*piVar1 == DAT_14cbe3e90) break;
      bVar11 = lVar9 != lVar8;
      lVar8 = lVar8 + 0x28;
    } while (bVar11);
    *(bool *)((longlong)param_1 + 7) = *piVar1 != DAT_14cbe3e90;
    lVar8 = 0;
    do {
      piVar1 = (int *)(puVar7 + lVar8);
      if (*piVar1 == DAT_14cbe3eb8) break;
      bVar11 = lVar9 != lVar8;
      lVar8 = lVar8 + 0x28;
    } while (bVar11);
    *(bool *)(param_1 + 1) = *piVar1 != DAT_14cbe3eb8;
    lVar8 = 0;
    do {
      piVar1 = (int *)(puVar7 + lVar8);
      if (*piVar1 == DAT_14cbe3f80) break;
      bVar11 = lVar9 != lVar8;
      lVar8 = lVar8 + 0x28;
    } while (bVar11);
    *(bool *)((longlong)param_1 + 9) = *piVar1 != DAT_14cbe3f80;
    lVar8 = 0;
    do {
      piVar1 = (int *)(puVar7 + lVar8);
      if (*piVar1 == DAT_14cbe3fa8) break;
      bVar11 = lVar9 != lVar8;
      lVar8 = lVar8 + 0x28;
    } while (bVar11);
    bVar11 = *piVar1 != DAT_14cbe3fa8;
  }
  *(bool *)((longlong)param_1 + 10) = bVar11;
  FUN_145cc53e8(local_2d8);
LAB_145cc50a9:
  if ((local_48 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc53e8 FUN_145cc53e8 body=61 status=ok
// SIG undefined FUN_145cc53e8(void)

void FUN_145cc53e8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x280);
  if (*(longlong *)(param_1 + 0x280) == 0) {
    lVar1 = param_1;
  }
  FUN_1456d172d(lVar1,*(undefined4 *)(param_1 + 0x288));
  if (*(longlong *)(param_1 + 0x280) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cc5438 FUN_145cc5438 body=399 status=ok
// SIG undefined FUN_145cc5438(void)

void FUN_145cc5438(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*(longlong *)param_1[2] + 0x60))((longlong *)param_1[2],&local_38);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((char)param_1[5] == '\0') {
    (**(code **)(*param_1 + 0x40))(param_1);
    *(undefined1 *)(param_1 + 5) = 1;
    if (*(int *)(local_38 + 0xa8) != 3) {
      FUN_1446efa72((longlong *)(local_38 + 0xa0),0,3,0x10);
      *(undefined4 *)(local_38 + 0xa8) = 3;
    }
    puVar5 = *(undefined8 **)(local_38 + 0xa0);
    *puVar5 = &PTR_LAB_14ba44f00;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    puVar5[2] = lVar6;
    *puVar5 = &PTR_FUN_14ba44e90;
    puVar5[3] = param_1;
    puVar5[4] = FUN_145a59f78;
    puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c7648b0);
    cVar4 = (**(code **)(*(longlong *)*puVar5 + 0x50))();
    if (cVar4 == '\0') {
      FUN_145a59f78(param_1,3);
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc55d4 FUN_145cc55d4 body=71 status=ok
// SIG undefined FUN_145cc55d4(void)

undefined8 * FUN_145cc55d4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 extraout_XMM0_Da;
  
  lVar1 = FUN_140e44844();
  if ((lVar1 != 0) && (lVar1 = FUN_141526668(lVar1), lVar1 != 0)) {
    FUN_1414c6652(extraout_XMM0_Da,param_2,lVar1,param_1 + 0x28);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 145cc561c FUN_145cc561c body=40 status=ok
// SIG undefined FUN_145cc561c(void)

undefined8 FUN_145cc561c(undefined8 param_1,int param_2)

{
  FUN_145cc5644();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc5644 FUN_145cc5644 body=262 status=ok
// SIG undefined FUN_145cc5644(void)

void FUN_145cc5644(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b366cc0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_145cc57a0(param_1 + 0x18);
  FUN_145cc57d5(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_145cc574a(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_145cc580c(param_1 + 10);
  FUN_145cc5775(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cc574a FUN_145cc574a body=43 status=ok
// SIG undefined FUN_145cc574a(void)

void FUN_145cc574a(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14878e9e0(param_1,*param_1);
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 145cc5775 FUN_145cc5775 body=43 status=ok
// SIG undefined FUN_145cc5775(void)

void FUN_145cc5775(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14878e9a6(param_1,*param_1);
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 145cc57a0 FUN_145cc57a0 body=53 status=ok
// SIG undefined FUN_145cc57a0(void)

void FUN_145cc57a0(longlong *param_1)

{
  FUN_145cc5844();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cc57d5 FUN_145cc57d5 body=54 status=ok
// SIG undefined FUN_145cc57d5(void)

void FUN_145cc57d5(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 145cc580c FUN_145cc580c body=55 status=ok
// SIG undefined FUN_145cc580c(void)

void FUN_145cc580c(longlong *param_1)

{
  FUN_145cc589e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cc5844 FUN_145cc5844 body=90 status=ok
// SIG undefined FUN_145cc5844(void)

void FUN_145cc5844(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1407f13e6(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145cc589e FUN_145cc589e body=374 status=ok
// SIG undefined FUN_145cc589e(void)

void FUN_145cc589e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_14878d922((longlong)iStack_54 * 0x38 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cc5a15 FUN_145cc5a15 body=177 status=ok
// SIG undefined FUN_145cc5a15(void)

void FUN_145cc5a15(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145cc5ac8();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9cea68,param_4);
  local_78 = &DAT_14c9cea68;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_145cc5bcc(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc5ac8 FUN_145cc5ac8 body=258 status=ok
// SIG undefined FUN_145cc5ac8(void)

void FUN_145cc5ac8(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ceae8) {
    FUN_144b3d300(&DAT_14c9ceae8);
    if (DAT_14c9ceae8 == -1) {
      FUN_145cc5d58(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x6e9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9cea68,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1e264);
      _Init_thread_footer(&DAT_14c9ceae8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc5bcc FUN_145cc5bcc body=395 status=ok
// SIG undefined FUN_145cc5bcc(void)

void FUN_145cc5bcc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14c9ceab0;
  if (DAT_14c9ceab0 != 0) {
    LOCK();
    *(int *)(DAT_14c9ceab0 + 8) = *(int *)(DAT_14c9ceab0 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9cea68;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2173c0;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc5d58 FUN_145cc5d58 body=226 status=ok
// SIG undefined FUN_145cc5d58(void)

longlong * FUN_145cc5d58(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c4ada;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc5e40 FUN_145cc5e40 body=132 status=ok
// SIG undefined FUN_145cc5e40(void)

undefined1 * FUN_145cc5e40(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWPageFreeListBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6ea;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145cc5e3c;
}



// FUNCTION 145cc5ec4 FUN_145cc5ec4 body=138 status=ok
// SIG undefined FUN_145cc5ec4(void)

code * FUN_145cc5ec4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWPageFreeListAllocatorBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<int";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000006eb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145cc5e40;
}



// FUNCTION 145cc5f4e FUN_145cc5f4e body=40 status=ok
// SIG undefined FUN_145cc5f4e(void)

undefined8 FUN_145cc5f4e(undefined8 param_1,int param_2)

{
  FUN_145cc5f76();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc5f76 FUN_145cc5f76 body=87 status=ok
// SIG undefined FUN_145cc5f76(void)

void FUN_145cc5f76(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a60aee0;
  FUN_1447a1747(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cc5fd8 FUN_145cc5fd8 body=243 status=ok
// SIG undefined FUN_145cc5fd8(void)

undefined8 * FUN_145cc5fd8(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_145902de4();
  *param_1 = &PTR_FUN_14a70dae0;
  param_1[5] = &PTR_LAB_14a70e0e0;
  param_1[6] = &PTR_LAB_14a70e120;
  param_1[0x71] = 0;
  FUN_144a78564(param_1 + 0x78);
  *(undefined1 *)((longlong)param_1 + 0x3bc) = 1;
  *(byte *)((longlong)param_1 + 0x2aa) = *(byte *)((longlong)param_1 + 0x2aa) | 1;
  *(undefined1 *)(param_1 + 9) = 2;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xf5 | 2;
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) | 0x80;
  param_1[0x7a] = 0;
  param_1[0x72] = 0x3c23d70a43fa0000;
  param_1[0x73] = 0x32461c4000;
  *(undefined8 *)((longlong)param_1 + 0x3a4) = 0x4416000043c80000;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0x42c8000042700000;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0x41f0000041a00000;
  puVar2 = &DAT_14c846400;
  puVar3 = param_1 + 0x7c;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846400;
  puVar3 = param_1 + 0x8c;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(byte *)((longlong)param_1 + 0x329) = *(byte *)((longlong)param_1 + 0x329) & 0x7f;
  *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) & 0x5f;
  DAT_14cad2368 = DAT_14cad2368 + 1;
  *(int *)(param_1 + 0x9c) = DAT_14cad2368;
  return param_1;
}



// FUNCTION 145cc60cc FUN_145cc60cc body=40 status=ok
// SIG undefined FUN_145cc60cc(void)

undefined8 FUN_145cc60cc(undefined8 param_1,int param_2)

{
  FUN_145cc60f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc60f4 FUN_145cc60f4 body=87 status=ok
// SIG undefined FUN_145cc60f4(void)

void FUN_145cc60f4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aa95c40;
  param_1[6] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x1a];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cc6156 FUN_145cc6156 body=116 status=ok
// SIG undefined FUN_145cc6156(void)

undefined8 * FUN_145cc6156(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aa9c310;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 6) = 0x469c4000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  param_1[7] = 0;
  param_1[8] = 0;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0x80 | 0x40;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  FUN_1458d7850(param_1 + 10);
  *(undefined2 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  return param_1;
}



// FUNCTION 145cc61ca FUN_145cc61ca body=104 status=ok
// SIG undefined FUN_145cc61ca(void)

undefined8 FUN_145cc61ca(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_145cc6234(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc6234 FUN_145cc6234 body=22 status=ok
// SIG undefined FUN_145cc6234(void)

undefined8 FUN_145cc6234(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb1cce0;
  if (DAT_14cb1cce0 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb1cce0 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb1cce0 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb1cce0[0x3a] <= *(int *)((longlong)DAT_14cb1cce0 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb1cce0 + 0x300))(DAT_14cb1cce0);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 145cc6256 FUN_145cc6256 body=116 status=ok
// SIG undefined FUN_145cc6256(void)

undefined8 * FUN_145cc6256(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffffff5f | 0x20;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  *param_1 = &PTR_FUN_14abd82c0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 145cc62d6 FUN_145cc62d6 body=116 status=ok
// SIG undefined FUN_145cc62d6(void)

undefined8 * FUN_145cc62d6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *puVar1 = &PTR_LAB_14acd0860;
  FUN_1409e1656(puVar1 + 1);
  *puVar1 = &PTR_FUN_14acd07c0;
  puVar1[1] = &PTR_FUN_14acd0810;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0xffffffffffffffff;
  return puVar1;
}



// FUNCTION 145cc634a FUN_145cc634a body=40 status=ok
// SIG undefined FUN_145cc634a(void)

undefined8 FUN_145cc634a(undefined8 param_1,int param_2)

{
  FUN_145cc6372();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc6372 FUN_145cc6372 body=87 status=ok
// SIG undefined FUN_145cc6372(void)

void FUN_145cc6372(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae437b0;
  param_1[6] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x1a];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cc63d4 FUN_145cc63d4 body=116 status=ok
// SIG undefined FUN_145cc63d4(void)

undefined8 * FUN_145cc63d4(undefined8 *param_1)

{
  FUN_140d2f8ee();
  *param_1 = &PTR_FUN_14aeffed0;
  *(undefined2 *)(param_1 + 0x15) = 1;
  *(undefined4 *)((longlong)param_1 + 0xaa) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0xae) = 1;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xfff50f0fff808080;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xff8080f0fff0a00f;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xff2ecc71ff40f0f0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return param_1;
}



// FUNCTION 145cc6448 FUN_145cc6448 body=40 status=ok
// SIG undefined FUN_145cc6448(void)

undefined8 FUN_145cc6448(undefined8 param_1,int param_2)

{
  FUN_145cc6470();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc6470 FUN_145cc6470 body=87 status=ok
// SIG undefined FUN_145cc6470(void)

void FUN_145cc6470(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14af13df0;
  FUN_1447a1747(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145cc64c8 FUN_145cc64c8 body=104 status=ok
// SIG undefined FUN_145cc64c8(void)

undefined8 FUN_145cc64c8(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_145cc6532(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc6532 FUN_145cc6532 body=22 status=ok
// SIG undefined FUN_145cc6532(void)

undefined8 FUN_145cc6532(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb78520;
  if (DAT_14cb78520 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb78520 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb78520 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb78520[0x3a] <= *(int *)((longlong)DAT_14cb78520 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb78520 + 0x300))(DAT_14cb78520);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 145cc6548 FUN_145cc6548 body=104 status=ok
// SIG undefined FUN_145cc6548(void)

undefined8 FUN_145cc6548(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_145cc65b2(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc65b2 FUN_145cc65b2 body=22 status=ok
// SIG undefined FUN_145cc65b2(void)

undefined8 FUN_145cc65b2(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb78670;
  if (DAT_14cb78670 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb78670 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb78670 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb78670[0x3a] <= *(int *)((longlong)DAT_14cb78670 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb78670 + 0x300))(DAT_14cb78670);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 145cc65c8 FUN_145cc65c8 body=104 status=ok
// SIG undefined FUN_145cc65c8(void)

undefined8 FUN_145cc65c8(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_145cc6632(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc6632 FUN_145cc6632 body=22 status=ok
// SIG undefined FUN_145cc6632(void)

undefined8 FUN_145cc6632(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb78aa0;
  if (DAT_14cb78aa0 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb78aa0 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb78aa0 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb78aa0[0x3a] <= *(int *)((longlong)DAT_14cb78aa0 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb78aa0 + 0x300))(DAT_14cb78aa0);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 145cc6648 FUN_145cc6648 body=104 status=ok
// SIG undefined FUN_145cc6648(void)

undefined8 FUN_145cc6648(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_145cc66b2(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc66b2 FUN_145cc66b2 body=22 status=ok
// SIG undefined FUN_145cc66b2(void)

undefined8 FUN_145cc66b2(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb78ac0;
  if (DAT_14cb78ac0 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb78ac0 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb78ac0 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb78ac0[0x3a] <= *(int *)((longlong)DAT_14cb78ac0 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb78ac0 + 0x300))(DAT_14cb78ac0);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 145cc66c8 FUN_145cc66c8 body=40 status=ok
// SIG undefined FUN_145cc66c8(void)

undefined8 FUN_145cc66c8(undefined8 param_1,int param_2)

{
  FUN_145cc66f0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc66f0 FUN_145cc66f0 body=87 status=ok
// SIG undefined FUN_145cc66f0(void)

void FUN_145cc66f0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b52ad20;
  param_1[5] = &PTR_FUN_14b52b040;
  plVar3 = (longlong *)param_1[0x32];
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
  FUN_14110c0da(param_1);
  return;
}



// FUNCTION 145cc6748 FUN_145cc6748 body=40 status=ok
// SIG undefined FUN_145cc6748(void)

undefined8 FUN_145cc6748(undefined8 param_1,int param_2)

{
  FUN_145cc6770();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc6770 FUN_145cc6770 body=87 status=ok
// SIG undefined FUN_145cc6770(void)

void FUN_145cc6770(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5480b0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x27],*(undefined4 *)(param_1 + 0x28));
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_140ee3dc0(param_1);
  return;
}


