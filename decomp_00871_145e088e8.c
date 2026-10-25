// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145e088e8 FUN_145e088e8 body=141 status=ok
// SIG undefined FUN_145e088e8(void)

void FUN_145e088e8(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_140ef0aba(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_14583ce1e(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145e08976(param_1);
  return;
}



// FUNCTION 145e08976 FUN_145e08976 body=53 status=ok
// SIG undefined FUN_145e08976(void)

void FUN_145e08976(longlong *param_1)

{
  FUN_145e089ac();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e089ac FUN_145e089ac body=359 status=ok
// SIG undefined FUN_145e089ac(void)

void FUN_145e089ac(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      if (lVar2 != 0) {
        (*(code *)(&PTR_LAB_14a1c87a0)[*(byte *)(lVar2 + 0x50)])(lVar2 + 0x10);
        FUN_1400020a8(lVar2);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e08b14 FUN_145e08b14 body=406 status=ok
// SIG undefined FUN_145e08b14(void)

void FUN_145e08b14(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_1d;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_1d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d);
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  FUN_145e08cac(local_18,local_1c,local_1d);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e08cac FUN_145e08cac body=290 status=ok
// SIG undefined FUN_145e08cac(void)

void FUN_145e08cac(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  int local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_145e08dcf(&local_50,param_1,param_2);
  if ((local_50 == 0) || (0xfffffffd < local_48 - 1U)) goto LAB_145e08d8b;
  if (param_1 == 0 || DAT_14c950c29 != 1) {
    if (param_1 != 0) goto LAB_145e08d25;
    local_80 = 0;
  }
  else {
    FUN_1456cec3c(param_1);
LAB_145e08d25:
    uVar1 = FUN_1403c7982();
    local_80 = FUN_144718840(param_1,uVar1);
  }
  local_60 = *param_4;
  local_58 = param_4[1];
  local_78 = local_50;
  local_70 = local_48;
  local_68 = 0;
  local_88 = param_1;
  if ((param_1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_1);
  }
  FUN_14156752a(&local_88,&local_78,param_3,&local_60);
LAB_145e08d8b:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e08dcf FUN_145e08dcf body=140 status=ok
// SIG undefined FUN_145e08dcf(void)

undefined8 * FUN_145e08dcf(undefined8 *param_1,longlong param_2,uint param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    uVar1 = FUN_144a7b040();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      if (((-1 < (int)param_3) && (lVar3 != 0)) && ((int)param_3 < *(int *)(lVar3 + 0x40))) {
        lVar3 = FUN_145e08e5c((ulonglong)param_3 * 0x88 + *(longlong *)(lVar3 + 0x38));
        if (lVar3 != 0) {
          *param_1 = *(undefined8 *)(lVar3 + 0x18);
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar3 + 0x20);
          goto LAB_145e08e38;
        }
      }
    }
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xb;
LAB_145e08e38:
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 145e08e5c FUN_145e08e5c body=57 status=ok
// SIG undefined FUN_145e08e5c(void)

longlong FUN_145e08e5c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 == 0) {
    cVar1 = FUN_1403ae288(param_1 + 0x30);
    if (cVar1 == '\0') {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_140280ec4(param_1 + 0x30);
      lVar2 = *(longlong *)(lVar2 + 0x10);
    }
  }
  return lVar2;
}



// FUNCTION 145e08e96 FUN_145e08e96 body=223 status=ok
// SIG undefined FUN_145e08e96(void)

void FUN_145e08e96(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar1 = param_1 + 0x311;
  lVar4 = FUN_14479d2ce(plVar1);
  if (lVar4 != 0) {
    FUN_1401c4d5c(param_1 + 8,lVar4,lVar4 + 0x40);
  }
  FUN_14485c47a(plVar1,param_2);
  cVar2 = FUN_144729dda(plVar1);
  if (cVar2 != '\0') {
    lVar4 = FUN_14479d2ce(plVar1);
    uVar5 = FUN_14479d2ce(plVar1);
    FUN_14082bc44(param_1 + 8,uVar5,lVar4 + 0x40);
    plVar6 = (longlong *)FUN_14479d2ce(plVar1);
    uVar3 = (**(code **)(*plVar6 + 0x3b8))(plVar6);
    (**(code **)(*param_1 + 0x3b0))(param_1,uVar3);
  }
  lVar4 = param_1[0x15d];
  if (lVar4 != 0) {
    lVar7 = FUN_140a87838();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      *(longlong *)(lVar4 + 0x570) = *plVar1;
    }
  }
  return;
}



// FUNCTION 145e08f76 FUN_145e08f76 body=82 status=ok
// SIG undefined FUN_145e08f76(void)

void FUN_145e08f76(void)

{
  DAT_14c9ac100 = 0;
  if (DAT_14c9ac0f8 != 0) {
    FUN_1400020a8();
  }
  FUN_145e08ff0();
  FUN_145e08fc8(DAT_14c9ac0a8,DAT_14c9ac0b0);
  if (DAT_14c9ac0a8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e08fc8 FUN_145e08fc8 body=40 status=ok
// SIG undefined FUN_145e08fc8(void)

void FUN_145e08fc8(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14712564a(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 145e08ff0 FUN_145e08ff0 body=54 status=ok
// SIG undefined FUN_145e08ff0(void)

void FUN_145e08ff0(void)

{
  FUN_145e09026();
  if (DAT_14c9ac0d8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9ac0b8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e09026 FUN_145e09026 body=378 status=ok
// SIG undefined FUN_145e09026(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e09026(void)

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
  local_28 = &DAT_14c9ac0c8;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c9ac0e0 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c9ac0b8;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + 8 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14c9ac0c0 = 0;
  if (DAT_14c9ac0c4 != 0) {
    FUN_1446f4a44(&DAT_14c9ac0b8,0);
  }
  _DAT_14c9ac0e8 = 0xffffffff;
  DAT_14c9ac0e0 = 0;
  if (0x80 < DAT_14c9ac0e4) {
    DAT_14c9ac0e4 = 0x80;
    FUN_1446efbd8(&DAT_14c9ac0c8,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e091a2 FUN_145e091a2 body=226 status=ok
// SIG undefined FUN_145e091a2(void)

longlong * FUN_145e091a2(longlong *param_1)

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
  pcVar13 = FUN_1462d6774;
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



// FUNCTION 145e0928a FUN_145e0928a body=140 status=ok
// SIG undefined FUN_145e0928a(void)

undefined1 * FUN_145e0928a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144a8da38();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb1e;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDeferredLightPS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc22;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9ea828;
  return &LAB_145e09286;
}



// FUNCTION 145e09316 FUN_145e09316 body=9 status=ok
// SIG undefined FUN_145e09316(void)

void FUN_145e09316(longlong param_1)

{
  FUN_145e09320(param_1 + 0x10);
  return;
}



// FUNCTION 145e09320 FUN_145e09320 body=176 status=ok
// SIG undefined FUN_145e09320(void)

void FUN_145e09320(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f1c2b0;
  plVar3 = (longlong *)param_1[0x57];
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
  plVar3 = (longlong *)param_1[0x52];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x50];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x4e];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 145e093d0 FUN_145e093d0 body=40 status=ok
// SIG undefined FUN_145e093d0(void)

undefined8 FUN_145e093d0(undefined8 param_1,int param_2)

{
  FUN_145e093f8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e093f8 FUN_145e093f8 body=145 status=ok
// SIG undefined FUN_145e093f8(void)

void FUN_145e093f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a61fae0;
  param_1[6] = &PTR_FUN_14a61fd80;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0xc);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145e09494 FUN_145e09494 body=194 status=ok
// SIG undefined FUN_145e09494(void)

undefined8 * FUN_145e09494(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a658bc0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb518) {
    FUN_144b3d300(&DAT_14caeb518);
    if (DAT_14caeb518 == -1) {
      FUN_141567ae6();
      atexit((_func_5014 *)&LAB_14356e146);
      _Init_thread_footer(&DAT_14caeb518);
    }
  }
  param_1[0x1b] = 0x3f0000003f800000;
  return param_1;
}



// FUNCTION 145e09562 FUN_145e09562 body=174 status=ok
// SIG undefined FUN_145e09562(void)

undefined8 * FUN_145e09562(undefined8 *param_1)

{
  FUN_144805d84();
  *param_1 = &PTR_FUN_14abc51a0;
  param_1[5] = &PTR_FUN_14abc5620;
  param_1[6] = &PTR_LAB_14abc5660;
  param_1[0x22] = &PTR_FUN_14abc56b0;
  param_1[0x23] = &PTR_FUN_14abc5700;
  *(undefined8 *)((longlong)param_1 + 0x126) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x136) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x146) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x156) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x166) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x176) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17e) = 0;
  *(undefined2 *)((longlong)param_1 + 0x186) = 0;
  *(undefined1 *)(param_1 + 9) = 2;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xf9 | 2;
  FUN_140b967fa(param_1,1);
  *(byte *)((longlong)param_1 + 0x124) = *(byte *)((longlong)param_1 + 0x124) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0x125) = 0;
  return param_1;
}



// FUNCTION 145e0961c FUN_145e0961c body=207 status=ok
// SIG undefined FUN_145e0961c(void)

undefined8 * FUN_145e0961c(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30 [3];
  
  local_30[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1458e07b2();
  *param_1 = &PTR_FUN_14abf0590;
  param_1[5] = &PTR_FUN_14abf08c0;
  local_30[1] = 0;
  FUN_145e096ec(param_1 + 0x12);
  FUN_14020fad6(param_1 + 6,L"Is BlackBoard value of given Class");
  local_30[0] = FUN_1446f8646();
  if ((local_30[0] != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_30[0]);
  }
  FUN_1446f470e(&local_38,L"BlackboardKey",1);
  FUN_1458b8c86(param_1 + 0xd,param_1,local_38,local_30);
  if ((local_30[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e096ec FUN_145e096ec body=151 status=ok
// SIG undefined FUN_145e096ec(void)

undefined8 * FUN_145e096ec(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = FUN_1446f8646();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30) {
        lVar1 = *param_2;
      }
      else {
        lVar1 = 0;
      }
      param_1[2] = lVar1;
      if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      goto LAB_145e09713;
    }
  }
  param_1[2] = 0;
LAB_145e09713:
  lVar1 = FUN_1446f8646();
  param_1[3] = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_1;
}



// FUNCTION 145e0978e FUN_145e0978e body=173 status=ok
// SIG undefined FUN_145e0978e(void)

undefined8 * FUN_145e0978e(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145c0fbea();
  *param_1 = &PTR_FUN_14abf86b0;
  param_1[5] = &PTR_FUN_14abf89e0;
  param_1[0xe] = 0;
  FUN_1400b22c2(&local_28,"Push PawnAction");
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0983c FUN_145e0983c body=40 status=ok
// SIG undefined FUN_145e0983c(void)

undefined8 FUN_145e0983c(undefined8 param_1,int param_2)

{
  FUN_145e09864();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e09864 FUN_145e09864 body=329 status=ok
// SIG undefined FUN_145e09864(void)

void FUN_145e09864(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ad6c6f0;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_14017ae7a(param_1 + 0x2f);
  FUN_1404dc22f(param_1[0x2d],*(undefined4 *)(param_1 + 0x2e));
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_145e099ad(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[6];
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



// FUNCTION 145e099ad FUN_145e099ad body=1 status=ok
// SIG undefined FUN_145e099ad(void)

void FUN_145e099ad(void)

{
  return;
}



// FUNCTION 145e099ae FUN_145e099ae body=40 status=ok
// SIG undefined FUN_145e099ae(void)

undefined8 FUN_145e099ae(undefined8 param_1,int param_2)

{
  FUN_145e099d6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e099d6 FUN_145e099d6 body=145 status=ok
// SIG undefined FUN_145e099d6(void)

void FUN_145e099d6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aee3f80;
  param_1[5] = &PTR_FUN_14aee4220;
  FUN_145c21604(param_1 + 0x28);
  if (param_1[0x14] != 0) {
    plVar3 = param_1 + 0x18;
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x16];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = (longlong *)param_1[0x12];
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
  FUN_145a22d80(param_1 + 7);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145e09a70 FUN_145e09a70 body=176 status=ok
// SIG undefined FUN_145e09a70(void)

undefined8 * FUN_145e09a70(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14afa5b50;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  FUN_1446f470e(&local_20,L"DynamicWindComponent0",1);
  uVar1 = FUN_14595c46e();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  param_1[0x72] = lVar2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e09b21 FUN_145e09b21 body=79 status=ok
// SIG undefined FUN_145e09b21(void)

void FUN_145e09b21(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145e09b70(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b566d10;
  puVar1[5] = &PTR_LAB_14b567040;
  puVar1[0x49] = &PTR_LAB_14b567080;
  puVar1[0x4f] = 0;
  puVar1[0x50] = 0;
  *(undefined2 *)(puVar1 + 0x51) = 1;
  return;
}



// FUNCTION 145e09b70 FUN_145e09b70 body=106 status=ok
// SIG undefined FUN_145e09b70(void)

undefined8 * FUN_145e09b70(undefined8 *param_1)

{
  FUN_14595f48a();
  FUN_1409e1656(param_1 + 0x49);
  *param_1 = &PTR_FUN_14ae63b40;
  param_1[5] = &PTR_FUN_14ae63e70;
  param_1[0x49] = &PTR_LAB_14ae63eb0;
  param_1[0x4a] = 0;
  *(undefined2 *)(param_1 + 0x4b) = 0x101;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  return param_1;
}



// FUNCTION 145e09be6 FUN_145e09be6 body=174 status=ok
// SIG undefined FUN_145e09be6(void)

undefined8 * FUN_145e09be6(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_145907800();
  *param_1 = &PTR_FUN_14b68de50;
  param_1[5] = &PTR_FUN_14b68e860;
  param_1[6] = &PTR_LAB_14b68e8a0;
  param_1[0x55] = &PTR_FUN_14b68e8f0;
  param_1[0x56] = &PTR_FUN_14b68e970;
  param_1[0x57] = &PTR_FUN_14b68e980;
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) | 8;
  *(byte *)((longlong)param_1 + 0x2de) = *(byte *)((longlong)param_1 + 0x2de) | 0x10;
  if (((*(byte *)((longlong)param_1 + 0x2d3) & 8) != 0) &&
     (*(byte *)((longlong)param_1 + 0x2d3) = *(byte *)((longlong)param_1 + 0x2d3) & 0xf7,
     puVar2 = param_1, DAT_14c76142c == 1)) {
    do {
      if ((*(byte *)(puVar2 + 0x3f) & 2) == 0) {
        return param_1;
      }
      *(byte *)(puVar2 + 0x3f) = *(byte *)(puVar2 + 0x3f) & 0xfd;
      plVar1 = puVar2 + 0x24;
      puVar2 = (undefined8 *)*plVar1;
    } while ((undefined8 *)*plVar1 != (undefined8 *)0x0);
  }
  return param_1;
}



// FUNCTION 145e09ca0 FUN_145e09ca0 body=174 status=ok
// SIG undefined FUN_145e09ca0(void)

undefined8 * FUN_145e09ca0(undefined8 *param_1)

{
  FUN_140b96638();
  *param_1 = &PTR_FUN_14b6c70a0;
  param_1[5] = &PTR_FUN_14b6c7710;
  param_1[6] = &PTR_LAB_14b6c7750;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined2 *)(param_1 + 0x79) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x3ca) = 0;
  param_1[0x7a] = 0;
  FUN_14112fbd2(param_1 + 0x7b);
  param_1[200] = 0;
  param_1[0xc9] = 0;
  FUN_14112fbd2(param_1 + 0xca);
  param_1[0x117] = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) | 2;
  *(undefined1 *)((longlong)param_1 + 0x391) = 0;
  return param_1;
}



// FUNCTION 145e09d5a FUN_145e09d5a body=173 status=ok
// SIG undefined FUN_145e09d5a(void)

undefined8 * FUN_145e09d5a(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14b7dd4c0;
  FUN_1446f470e(&local_20,L"RootComponent",1);
  uVar1 = FUN_144a799b0();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x39] = lVar2;
  *(undefined1 *)(lVar2 + 0x1fb) = 0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e09e08 FUN_145e09e08 body=40 status=ok
// SIG undefined FUN_145e09e08(void)

undefined8 FUN_145e09e08(undefined8 param_1,int param_2)

{
  FUN_145e09e30();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e09e30 FUN_145e09e30 body=145 status=ok
// SIG undefined FUN_145e09e30(void)

void FUN_145e09e30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba131a0;
  param_1[5] = &PTR_FUN_14ba135b0;
  param_1[0x13] = &PTR_FUN_14ba135d0;
  param_1[0x17] = &PTR_FUN_14ba13600;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_145850673(param_1[0x23],*(undefined4 *)(param_1 + 0x24));
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_1458506c0(param_1);
  return;
}



// FUNCTION 145e09ec2 FUN_145e09ec2 body=40 status=ok
// SIG undefined FUN_145e09ec2(void)

undefined8 FUN_145e09ec2(undefined8 param_1,int param_2)

{
  FUN_145e09eea();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e09eea FUN_145e09eea body=145 status=ok
// SIG undefined FUN_145e09eea(void)

void FUN_145e09eea(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba2d8f0;
  param_1[5] = &PTR_FUN_14ba2dc90;
  param_1[0x13] = &PTR_FUN_14ba2dcb0;
  param_1[0x17] = &PTR_FUN_14ba2dce0;
  FUN_145850673(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1411412a8(param_1);
  return;
}



// FUNCTION 145e09f7c FUN_145e09f7c body=40 status=ok
// SIG undefined FUN_145e09f7c(void)

undefined8 FUN_145e09f7c(undefined8 param_1,int param_2)

{
  FUN_145e09fa4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e09fa4 FUN_145e09fa4 body=145 status=ok
// SIG undefined FUN_145e09fa4(void)

void FUN_145e09fa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bdb3b50;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145e0a036 FUN_145e0a036 body=40 status=ok
// SIG undefined FUN_145e0a036(void)

undefined8 FUN_145e0a036(undefined8 param_1,int param_2)

{
  FUN_145e0a05e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e0a05e FUN_145e0a05e body=145 status=ok
// SIG undefined FUN_145e0a05e(void)

void FUN_145e0a05e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bdd7590;
  param_1[5] = &PTR_FUN_14bdd7960;
  param_1[0x13] = &PTR_FUN_14bdd7980;
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x2a);
  plVar3 = (longlong *)param_1[0x29];
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
  FUN_145865dac(param_1);
  return;
}



// FUNCTION 145e0a0f0 FUN_145e0a0f0 body=146 status=ok
// SIG undefined FUN_145e0a0f0(void)

code * FUN_145e0a0f0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e0a182();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"cbInpaintingPyramid";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FFXInpaintingPyramidParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000005c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cc2bd20;
  return FUN_145eee134;
}



// FUNCTION 145e0a182 FUN_145e0a182 body=278 status=ok
// SIG undefined FUN_145e0a182(void)

undefined * FUN_145e0a182(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2bda0) {
    FUN_144b3d300(&DAT_14cc2bda0);
    if (DAT_14cc2bda0 == -1) {
      FUN_145e0a29a(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"cbInpaintingPyramid";
      local_78 = L"FFXInpaintingPyramidParameters";
      local_50 = 0x10;
      local_58 = 0x4a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc2bd20,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14465d60f);
      _Init_thread_footer(&DAT_14cc2bda0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cc2bd20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0a29a FUN_145e0a29a body=226 status=ok
// SIG undefined FUN_145e0a29a(void)

longlong * FUN_145e0a29a(longlong *param_1)

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
  pcVar13 = FUN_146763212;
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



// FUNCTION 145e0a382 FUN_145e0a382 body=132 status=ok
// SIG undefined FUN_145e0a382(void)

undefined1 * FUN_145e0a382(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"mips";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e0a37e;
}



// FUNCTION 145e0a406 FUN_145e0a406 body=138 status=ok
// SIG undefined FUN_145e0a406(void)

code * FUN_145e0a406(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"numWorkGroups";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000004c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e0a382;
}



// FUNCTION 145e0a490 FUN_145e0a490 body=146 status=ok
// SIG undefined FUN_145e0a490(void)

code * FUN_145e0a490(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e0a522();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"cbOF_SPD";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FFXOpticalFlowSPDParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cc2c668;
  return FUN_145e0a830;
}



// FUNCTION 145e0a522 FUN_145e0a522 body=278 status=ok
// SIG undefined FUN_145e0a522(void)

undefined * FUN_145e0a522(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2c6e8) {
    FUN_144b3d300(&DAT_14cc2c6e8);
    if (DAT_14cc2c6e8 == -1) {
      FUN_145e0a63a(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"cbOF_SPD";
      local_78 = L"FFXOpticalFlowSPDParameters";
      local_50 = 0x10;
      local_58 = 0x35;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc2c668,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14465d86b);
      _Init_thread_footer(&DAT_14cc2c6e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cc2c668;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0a63a FUN_145e0a63a body=226 status=ok
// SIG undefined FUN_145e0a63a(void)

longlong * FUN_145e0a63a(longlong *param_1)

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
  pcVar13 = FUN_1467634ba;
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



// FUNCTION 145e0a722 FUN_145e0a722 body=132 status=ok
// SIG undefined FUN_145e0a722(void)

undefined1 * FUN_145e0a722(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"mips";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x36;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e0a71e;
}



// FUNCTION 145e0a7a6 FUN_145e0a7a6 body=138 status=ok
// SIG undefined FUN_145e0a7a6(void)

code * FUN_145e0a7a6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"numworkGroups";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000037;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e0a722;
}



// FUNCTION 145e0a830 FUN_145e0a830 body=140 status=ok
// SIG undefined FUN_145e0a830(void)

undefined1 * FUN_145e0a830(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e0a8bc();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"cbOF";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FFXOpticalFlowParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x46;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cc2c5d0;
  return &LAB_14982e636;
}



// FUNCTION 145e0a8bc FUN_145e0a8bc body=278 status=ok
// SIG undefined FUN_145e0a8bc(void)

undefined * FUN_145e0a8bc(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2c650) {
    FUN_144b3d300(&DAT_14cc2c650);
    if (DAT_14cc2c650 == -1) {
      FUN_145e0a9d4(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"cbOF";
      local_78 = L"FFXOpticalFlowParameters";
      local_50 = 0x20;
      local_58 = 0x29;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc2c5d0,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14465d85f);
      _Init_thread_footer(&DAT_14cc2c650);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cc2c5d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0a9d4 FUN_145e0a9d4 body=226 status=ok
// SIG undefined FUN_145e0a9d4(void)

longlong * FUN_145e0a9d4(longlong *param_1)

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
  pcVar13 = FUN_1467633aa;
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



// FUNCTION 145e0aabc FUN_145e0aabc body=138 status=ok
// SIG undefined FUN_145e0aabc(void)

code * FUN_145e0aabc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"iFrameIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982eaaa;
}



// FUNCTION 145e0ab46 FUN_145e0ab46 body=138 status=ok
// SIG undefined FUN_145e0ab46(void)

code * FUN_145e0ab46(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"backbufferTransferFunction";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x140000002e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e0aabc;
}



// FUNCTION 145e0abd0 FUN_145e0abd0 body=205 status=ok
// SIG undefined FUN_145e0abd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e0abd0(void)

{
  if ((DAT_14c9c63f7 & 2) == 0) {
    DAT_14c9c63f7 = DAT_14c9c63f7 | 2;
    _DAT_14c9c6398 = L"FObjectCullVS";
    _DAT_14c9c63b0 = FUN_146826540;
    _DAT_14c9c63b8 = FUN_146825d77;
    _DAT_14c9c63c0 = FUN_146825fd6;
    _DAT_14c9c63c8 = FUN_1407e02ea;
    _DAT_14c9c63d0 = FUN_146826273;
    _DAT_14c9c63a8 = FUN_14714ed8e;
    _DAT_14c9c63e8 = 0xffffffff000000e0;
    _DAT_14c9c63f0 = 8;
    DAT_14c9c63f4 = 0;
    _DAT_14c9c63d8 = &LAB_14714edb8;
    FUN_145e0ac9e();
    FUN_1407e00cc(&DAT_14c9c6390);
    return;
  }
  return;
}



// FUNCTION 145e0ac9e FUN_145e0ac9e body=123 status=ok
// SIG undefined FUN_145e0ac9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e0ac9e(void)

{
  _DAT_14c9c9510 = L"BASE";
  DAT_14c9c953a = 4;
  _DAT_14c9c9518 = FUN_140b35ae4();
  _DAT_14c9c9520 = DAT_14c9c63a0;
  _DAT_14c9c9528 = &LAB_14682652b;
  DAT_14c9c63a0 = &DAT_14c9c9510;
  DAT_14c9c63f5 = DAT_14c9c63f5 + '\x01';
  _DAT_14c9c9530 = 0x100000000;
  if (*(char *)(_DAT_14c9c9518 + 100) != '\0') {
    DAT_14c9c63f6 = DAT_14c9c63f6 + '\x01';
  }
  return;
}



// FUNCTION 145e0ad1a FUN_145e0ad1a body=226 status=ok
// SIG undefined FUN_145e0ad1a(void)

longlong * FUN_145e0ad1a(longlong *param_1)

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
  pcVar13 = FUN_1462bf1ee;
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



// FUNCTION 145e0ae02 FUN_145e0ae02 body=138 status=ok
// SIG undefined FUN_145e0ae02(void)

undefined1 * FUN_145e0ae02(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x9b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e0adfe;
}



// FUNCTION 145e0ae8c FUN_145e0ae8c body=144 status=ok
// SIG undefined FUN_145e0ae8c(void)

code * FUN_145e0ae8c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145aa7ee0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"AOParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FAOParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1200000009f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462bf276;
}



// FUNCTION 145e0af1c FUN_145e0af1c body=103 status=ok
// SIG undefined FUN_145e0af1c(void)

ulonglong FUN_145e0af1c(longlong param_1)

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
LAB_145e0af66:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145e0af66;
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



// FUNCTION 145e0af84 FUN_145e0af84 body=592 status=ok
// SIG undefined FUN_145e0af84(void)

void FUN_145e0af84(longlong param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  longlong *local_50;
  int local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1415bf0d0(&local_50);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x78))(local_50,param_1 + 0x30);
  }
  plVar4 = (longlong *)CONCAT44(uStack_44,local_48);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  local_50 = (longlong *)0x0;
  iVar2 = *(int *)(param_1 + 0x48);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  local_48 = iVar2;
  if (iVar2 == 0) {
    uStack_44 = 0;
    uVar6 = 0;
  }
  else {
    FUN_141567ecc(&local_50,iVar2);
    FUN_141567e40(local_50,uVar8,iVar2);
    uVar6 = *(undefined4 *)(param_1 + 0x48);
    uVar8 = *(undefined8 *)(param_1 + 0x40);
  }
  FUN_141567db1(uVar8,uVar6);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_141567e10(param_1 + 0x40);
  }
  if (*(uint *)(param_1 + 0x50) != param_3) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb970a0) {
      FUN_144b3d300(&DAT_14cb970a0);
      if (DAT_14cb970a0 == -1) {
        if (param_3 < 3) {
          local_58 = (undefined2 *)(&PTR_u_Unknown_14b4e4f08)[param_3];
        }
        else {
          local_58 = &DAT_149dfb77a;
        }
        DAT_14cb97098 = FUN_145e0b1d6(0x72);
        _Init_thread_footer(&DAT_14cb970a0);
      }
    }
    cVar5 = FUN_141567e7e(DAT_14cb97098,0);
    if (cVar5 != '\0') {
      if (param_3 < 3) {
        local_58 = (undefined2 *)(&PTR_u_Unknown_14b4e4f08)[param_3];
      }
      else {
        local_58 = &DAT_149dfb77a;
      }
      FUN_1415680c4(DAT_14cb97098);
    }
  }
  plVar4 = local_50;
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = param_3;
  lVar9 = (longlong)local_48;
  if (lVar9 != 0) {
    lVar7 = 0;
    do {
      if ((*(int *)((longlong)plVar4 + lVar7 + 8) != 0) &&
         (plVar3 = *(longlong **)((longlong)plVar4 + lVar7), plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x60))(plVar3,param_3 != 2,param_2);
      }
      lVar7 = lVar7 + 0x10;
    } while (lVar9 * 0x10 != lVar7);
  }
  if ((iVar2 != 2) != (param_3 != 2)) {
    FUN_140898514(param_1 + 0x18,param_3 != 2);
  }
  FUN_141567db1(local_50,local_48);
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0b1d6 FUN_145e0b1d6 body=113 status=ok
// SIG undefined FUN_145e0b1d6(void)

longlong FUN_145e0b1d6(undefined4 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_145a2e204(0x18,L"app_session");
  lVar2 = FUN_141567fa2(0x18,param_2);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(lVar1 + 8) = lVar2;
  FUN_145a2e1a4(lVar1,1);
  FUN_145a2e1a2(lVar1,
                ".\\../Plugins/Gearbox/GbxOnline/Source/GbxOnline/Private/GbxGameLicenseManager.cpp"
                ,param_1);
  return lVar1;
}



// FUNCTION 145e0b248 FUN_145e0b248 body=89 status=ok
// SIG undefined FUN_145e0b248(void)

void FUN_145e0b248(void)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_145e0b2a2(0,"build_access_method",local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0b2a2 FUN_145e0b2a2 body=201 status=ok
// SIG undefined FUN_145e0b2a2(void)

void FUN_145e0b2a2(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
  uVar2 = FUN_144a49f24();
  FUN_14145874c(puVar1,0,uVar2);
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e71720;
  FUN_1446ddc76(local_28,param_2,1);
  local_30 = (ulonglong)param_1 | 1;
  if ((((ulonglong)param_1 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  FUN_140daffce(puVar1,&local_30,local_28,0);
  (**(code **)(*param_1 + 0x2a0))(param_1,puVar1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0b36c FUN_145e0b36c body=162 status=ok
// SIG undefined FUN_145e0b36c(void)

undefined8 FUN_145e0b36c(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9491c8) {
    FUN_144b3d300(&DAT_14c9491c8);
    if (DAT_14c9491c8 == -1) {
      FUN_1446f470e(&local_18,L"DateTime",1);
      DAT_14c9491c0 = FUN_141473ad5(local_18);
      _Init_thread_footer(&DAT_14c9491c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return DAT_14c9491c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0b410 FUN_145e0b410 body=242 status=ok
// SIG undefined FUN_145e0b410(void)

void FUN_145e0b410(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar2 = FUN_1446dcc8c();
  FUN_14145874c(puVar1,0,uVar2);
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_LAB_149e71fe0;
  FUN_1446ddc76(local_30,param_2,1);
  local_38 = (ulonglong)param_1 | 1;
  if ((((ulonglong)param_1 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  FUN_1403a697c(puVar1,&local_38,local_30,0);
  *(undefined4 *)(puVar1 + 6) = 1;
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  puVar1[0xe] = param_3;
  (**(code **)(*param_1 + 0x2a0))(param_1,puVar1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0b504 FUN_145e0b504 body=138 status=ok
// SIG undefined FUN_145e0b504(void)

undefined1 * FUN_145e0b504(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x13;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14729b232;
}



// FUNCTION 145e0b58e FUN_145e0b58e body=144 status=ok
// SIG undefined FUN_145e0b58e(void)

code * FUN_145e0b58e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145e0ba38();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"PostProcessInput";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureSliceInput";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000000018;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 5;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462fb7e0;
}



// FUNCTION 145e0b61e FUN_145e0b61e body=146 status=ok
// SIG undefined FUN_145e0b61e(void)

code * FUN_145e0b61e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e0b6b0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NeuralPostProcessParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FNeuralPostProcessShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000016;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca32040;
  return FUN_1462fb8f8;
}



// FUNCTION 145e0b6b0 FUN_145e0b6b0 body=261 status=ok
// SIG undefined FUN_145e0b6b0(void)

void FUN_145e0b6b0(void)

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
              0x110) < DAT_14ca320c0) {
    FUN_144b3d300(&DAT_14ca320c0);
    if (DAT_14ca320c0 == -1) {
      FUN_145e0b7b6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FNeuralPostProcessShaderParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 10;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca32040,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13b33);
      _Init_thread_footer(&DAT_14ca320c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0b7b6 FUN_145e0b7b6 body=226 status=ok
// SIG undefined FUN_145e0b7b6(void)

longlong * FUN_145e0b7b6(longlong *param_1)

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
  pcVar13 = FUN_1462fb988;
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



// FUNCTION 145e0b89a FUN_145e0b89a body=138 status=ok
// SIG undefined FUN_145e0b89a(void)

code * FUN_145e0b89a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NeuralTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729b1aa;
}



// FUNCTION 145e0b924 FUN_145e0b924 body=138 status=ok
// SIG undefined FUN_145e0b924(void)

code * FUN_145e0b924(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputNeuralBufferDimension";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000010;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729b120;
}



// FUNCTION 145e0b9ae FUN_145e0b9ae body=138 status=ok
// SIG undefined FUN_145e0b9ae(void)

code * FUN_145e0b9ae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NeuralSourceType";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000000e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462fba10;
}



// FUNCTION 145e0ba38 FUN_145e0ba38 body=268 status=ok
// SIG undefined FUN_145e0ba38(void)

undefined * FUN_145e0ba38(void)

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
              0x110) < DAT_14ca35068) {
    FUN_144b3d300(&DAT_14ca35068);
    if (DAT_14ca35068 == -1) {
      FUN_145e0bb46(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FScreenPassTextureSliceInput";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x16c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca34fe8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13b27);
      _Init_thread_footer(&DAT_14ca35068);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca34fe8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0bb46 FUN_145e0bb46 body=226 status=ok
// SIG undefined FUN_145e0bb46(void)

longlong * FUN_145e0bb46(longlong *param_1)

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
  pcVar13 = FUN_1462fb870;
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



// FUNCTION 145e0bc2e FUN_145e0bc2e body=138 status=ok
// SIG undefined FUN_145e0bc2e(void)

code * FUN_145e0bc2e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000016e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e0bcb8;
}



// FUNCTION 145e0bcb8 FUN_145e0bcb8 body=138 status=ok
// SIG undefined FUN_145e0bcb8(void)

undefined1 * FUN_145e0bcb8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Viewport";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x16d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e0bc2a;
}



// FUNCTION 145e0bd42 FUN_145e0bd42 body=140 status=ok
// SIG undefined FUN_145e0bd42(void)

undefined1 * FUN_145e0bd42(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14156854e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SubsurfaceUniformParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSubsurfaceUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca2fb10;
  return &LAB_145e5a74e;
}



// FUNCTION 145e0bdce FUN_145e0bdce body=226 status=ok
// SIG undefined FUN_145e0bdce(void)

longlong * FUN_145e0bdce(longlong *param_1)

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
  pcVar13 = FUN_1462fde20;
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



// FUNCTION 145e0beb6 FUN_145e0beb6 body=132 status=ok
// SIG undefined FUN_145e0beb6(void)

undefined1 * FUN_145e0beb6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxGroupCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e0beb2;
}



// FUNCTION 145e0bf3a FUN_145e0bf3a body=205 status=ok
// SIG undefined FUN_145e0bf3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e0bf3a(void)

{
  if ((DAT_14c9caaf7 & 2) == 0) {
    DAT_14c9caaf7 = DAT_14c9caaf7 | 2;
    _DAT_14c9caa98 = L"FHeightFogVS";
    _DAT_14c9caab0 = FUN_146826540;
    _DAT_14c9caab8 = FUN_146825d77;
    _DAT_14c9caac0 = FUN_146825fd6;
    _DAT_14c9caac8 = FUN_1407e02ea;
    _DAT_14c9caad0 = FUN_146826273;
    _DAT_14c9caaa8 = FUN_1471593b2;
    _DAT_14c9caae8 = 0xffffffff000000e0;
    _DAT_14c9caaf0 = 8;
    DAT_14c9caaf4 = 0;
    _DAT_14c9caad8 = &LAB_1471593dc;
    FUN_145e0c008();
    FUN_1407e00cc(&DAT_14c9caa90);
    return;
  }
  return;
}



// FUNCTION 145e0c008 FUN_145e0c008 body=123 status=ok
// SIG undefined FUN_145e0c008(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e0c008(void)

{
  _DAT_14c9cf0e0 = L"BASE";
  DAT_14c9cf10a = 4;
  _DAT_14c9cf0e8 = FUN_140b35ae4();
  _DAT_14c9cf0f0 = DAT_14c9caaa0;
  _DAT_14c9cf0f8 = &LAB_14682652b;
  DAT_14c9caaa0 = &DAT_14c9cf0e0;
  DAT_14c9caaf5 = DAT_14c9caaf5 + '\x01';
  _DAT_14c9cf100 = 0x100000000;
  if (*(char *)(_DAT_14c9cf0e8 + 100) != '\0') {
    DAT_14c9caaf6 = DAT_14c9caaf6 + '\x01';
  }
  return;
}



// FUNCTION 145e0c084 FUN_145e0c084 body=232 status=ok
// SIG undefined FUN_145e0c084(void)

longlong * FUN_145e0c084(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1462c3082;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145e0c172 FUN_145e0c172 body=142 status=ok
// SIG undefined FUN_145e0c172(void)

code * FUN_145e0c172(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a8f66a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"PrimitiveUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FPrimitiveUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x6000000045;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e7ec1c;
}



// FUNCTION 145e0c200 FUN_145e0c200 body=136 status=ok
// SIG undefined FUN_145e0c200(void)

code * FUN_145e0c200(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreSkinnedLocalBoundsMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1e000000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf5282;
}



// FUNCTION 145e0c288 FUN_145e0c288 body=138 status=ok
// SIG undefined FUN_145e0c288(void)

code * FUN_145e0c288(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstancePayloadExtensionSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2300000003e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf4da8;
}



// FUNCTION 145e0c312 FUN_145e0c312 body=138 status=ok
// SIG undefined FUN_145e0c312(void)

code * FUN_145e0c312(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceWPODisableDistanceSquared";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x25000000043;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf4b80;
}



// FUNCTION 145e0c39c FUN_145e0c39c body=35 status=ok
// SIG undefined FUN_145e0c39c(void)

void FUN_145e0c39c(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000145e0c3bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 145e0c3c0 FUN_145e0c3c0 body=197 status=ok
// SIG undefined FUN_145e0c3c0(void)

void FUN_145e0c3c0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  
  param_1[0x26] = 0;
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    iVar1 = *(int *)((longlong)param_1 + 0x10c);
    iVar5 = (**(code **)(*param_1 + 0x2c0))();
    if (iVar1 < iVar5) {
      cVar4 = FUN_14022747e(lVar2);
      if (cVar4 == '\0') {
        iVar5 = (**(code **)(*param_1 + 0x2c0))(param_1);
        iVar1 = *(int *)((longlong)param_1 + 0x10c);
        lVar3 = param_1[0x20];
        *(int *)((longlong)param_1 + 0x11c) = iVar1;
        *(int *)(param_1 + 0x20) = iVar1;
        if ((int)lVar3 != iVar1) {
          FUN_140a429bc(param_1);
        }
        FUN_1447f69b6(param_1 + 8);
        if ((*(byte *)(param_1 + 5) & 1) == 0) {
          cVar4 = (**(code **)(*param_1 + 0x3d8))(param_1);
          if (cVar4 != '\0') {
            FUN_14107507c(param_1,1);
          }
        }
        if (iVar5 != 0) {
          cVar4 = FUN_1406f1180(lVar2);
          if (cVar4 != '\0') {
            FUN_140e3bfdc(lVar2,1);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 145e0c486 FUN_145e0c486 body=161 status=ok
// SIG undefined FUN_145e0c486(void)

void FUN_145e0c486(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined **local_68;
  undefined2 local_60;
  undefined2 local_58;
  longlong local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_14009d2a0();
  lVar2 = FUN_14038fb82();
  local_60 = *(undefined2 *)(lVar2 + 0xa8);
  local_50 = param_1 + 8;
  local_58 = *(undefined2 *)(lVar1 + 0xba);
  local_48 = 1;
  local_40 = 0;
  local_68 = &PTR_FUN_14a4c77a0;
  local_38 = local_60;
  FUN_145e0c528(&local_68,param_1 + -0xf8,param_3,param_4);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0c528 FUN_145e0c528 body=560 status=ok
// SIG undefined FUN_145e0c528(void)

void FUN_145e0c528(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 in_R10;
  int iVar8;
  int iVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined **local_b0;
  undefined2 local_a8;
  undefined2 local_a0;
  undefined8 local_98;
  char local_90;
  uint local_88;
  int local_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 local_74;
  undefined1 local_70;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined1 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  piVar1 = *(int **)(param_3 + 8);
  if (piVar1 == (int *)0x0) {
    iVar6 = 0;
    iVar8 = 0;
    iVar9 = 0;
    iVar7 = 0;
  }
  else {
    iVar6 = *piVar1;
    iVar8 = piVar1[1];
    iVar9 = piVar1[2];
    iVar7 = piVar1[3];
  }
  local_b8 = param_4;
  lVar4 = FUN_14009d2a0();
  FUN_14038fb82();
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (lVar2 != 0) {
    lVar5 = FUN_140bc7f26();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      if (*(int *)(param_3 + 0x10) == 0) {
        local_a8 = *(undefined2 *)(param_1 + 8);
        local_a0 = *(undefined2 *)(param_1 + 0x10);
        local_90 = *(char *)(param_1 + 0x20);
        if (local_90 == '\x01') {
          in_R10 = *(undefined8 *)(param_1 + 0x18);
        }
        local_50 = *(undefined1 *)(param_1 + 0x28);
        if (local_90 != '\0') {
          local_98 = in_R10;
        }
        local_88 = CONCAT22(local_88._2_2_,*(undefined2 *)(lVar4 + 0x62));
        local_70 = 1;
        local_84 = *(int *)(lVar2 + 0x100);
        iStack_80 = *(int *)(lVar2 + 0x104);
        iStack_7c = *(int *)(lVar2 + 0x108);
        iStack_78 = *(int *)(lVar2 + 0x10c);
        local_74 = *(undefined4 *)(lVar2 + 0x110);
        local_6c = (uint)CONCAT12((iVar9 != 0 || iVar7 != 0) || (iVar8 != 0 || iVar6 != 0),
                                  *(undefined2 *)(lVar4 + 100));
        local_58 = 1;
        local_b0 = &PTR_FUN_14a4c77c0;
        local_68 = iVar6;
        local_64 = iVar8;
        local_60 = iVar9;
        local_5c = iVar7;
        FUN_145e0c782(local_b8);
      }
      else {
        cVar3 = FUN_145e0c77a(param_3);
        if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
        }
      }
      goto LAB_145e0c672;
    }
  }
  local_70 = *(undefined1 *)(param_1 + 0x28);
  local_a8 = *(undefined2 *)(param_1 + 8);
  local_a0 = *(undefined2 *)(param_1 + 0x10);
  local_90 = *(char *)(param_1 + 0x20);
  if (local_90 == '\x01') {
    local_98 = *(undefined8 *)(param_1 + 0x18);
  }
  local_88 = (uint)CONCAT12((iVar9 != 0 || iVar7 != 0) || (iVar8 != 0 || iVar6 != 0),
                            *(undefined2 *)(lVar4 + 100));
  local_74 = CONCAT31(local_74._1_3_,1);
  local_b0 = &PTR_FUN_14a4c7800;
  local_84 = iVar6;
  iStack_80 = iVar8;
  iStack_7c = iVar9;
  iStack_78 = iVar7;
  FUN_147651bd0(local_b8);
LAB_145e0c672:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e0c77a FUN_145e0c77a body=8 status=ok
// SIG undefined FUN_145e0c77a(void)

bool FUN_145e0c77a(longlong param_1)

{
  return *(int *)(param_1 + 0x10) == 1;
}



// FUNCTION 145e0c782 FUN_145e0c782 body=213 status=ok
// SIG undefined FUN_145e0c782(void)

void FUN_145e0c782(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar3 = (undefined8 *)FUN_14001cc68(0x68,8);
  FUN_145e0c858(puVar3,param_2);
  *puVar3 = &PTR_FUN_14a4c77c0;
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar4 = param_1;
  }
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = (*(byte *)(puVar1 + 8) & 0xfc) + 1;
  *puVar1 = puVar3;
  *(undefined4 *)(puVar1 + 1) = local_60;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_5c;
  *(undefined4 *)(puVar1 + 2) = uStack_58;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_54;
  *(undefined4 *)(puVar1 + 3) = local_50;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_4c;
  *(undefined4 *)(puVar1 + 4) = uStack_48;
  *(undefined4 *)((longlong)puVar1 + 0x24) = uStack_44;
  *(undefined4 *)(puVar1 + 5) = local_40;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_3c;
  *(undefined4 *)(puVar1 + 6) = uStack_38;
  *(undefined4 *)((longlong)puVar1 + 0x34) = uStack_34;
  puVar1[7] = local_30;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0c858 FUN_145e0c858 body=113 status=ok
// SIG undefined FUN_145e0c858(void)

void FUN_145e0c858(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14a4c77e0;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 0x10);
  cVar1 = *(char *)(param_2 + 0x20);
  *(char *)(param_1 + 4) = cVar1;
  if (cVar1 == '\x01') {
    param_1[3] = *(undefined8 *)(param_2 + 0x18);
  }
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 0x28);
  cVar1 = *(char *)(param_2 + 0x40);
  *(char *)(param_1 + 8) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    uVar2 = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)((longlong)param_1 + 0x34) = uVar2;
  }
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  cVar1 = *(char *)(param_2 + 0x58);
  *(char *)(param_1 + 0xb) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    param_1[9] = *(undefined8 *)(param_2 + 0x48);
    param_1[10] = uVar2;
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0x60);
  return;
}



// FUNCTION 145e0cc6a FUN_145e0cc6a body=173 status=ok
// SIG undefined FUN_145e0cc6a(void)

undefined8 *
FUN_145e0cc6a(longlong param_1,undefined8 *param_2,undefined2 param_3,longlong *param_4)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = *param_4;
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar3);
  }
  if ((lVar3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(lVar3);
  }
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 8);
  cVar2 = *(char *)(param_1 + 0xb);
  *(char *)((longlong)param_2 + 0xb) = cVar2;
  if (cVar2 == '\x01') {
    *(undefined1 *)((longlong)param_2 + 10) = *(undefined1 *)(param_1 + 10);
  }
  *(undefined2 *)(param_2 + 2) = param_3;
  *(undefined1 *)(param_2 + 4) = 1;
  param_2[3] = lVar3;
  if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(lVar3);
  }
  *(undefined1 *)(param_2 + 5) = uVar1;
  *param_2 = &PTR_FUN_14a4ec290;
  return param_2;
}



// FUNCTION 145e0cd18 FUN_145e0cd18 body=209 status=ok
// SIG undefined FUN_145e0cd18(void)

undefined8 FUN_145e0cd18(undefined8 param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_2;
  FUN_1400021e4(&local_28,&local_38);
  FUN_1400b22c2(&local_48,&DAT_149e430b6);
  iVar2 = local_40 + -1;
  puVar1 = local_48;
  if (local_40 == 0) {
    puVar1 = &DAT_149dfb77a;
    iVar2 = 0;
  }
  FUN_140c540b4(&local_38,puVar1,iVar2,0);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar1 = local_38;
  if (local_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_1,puVar1,1);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0cdea FUN_145e0cdea body=268 status=ok
// SIG undefined FUN_145e0cdea(void)

void FUN_145e0cdea(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_145e0cef8(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0cef8 FUN_145e0cef8 body=98 status=ok
// SIG undefined FUN_145e0cef8(void)

void FUN_145e0cef8(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x68,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4ec040;
  FUN_145e0cf5a(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0x60);
  *param_1 = &PTR_FUN_14a4ec2b0;
  return;
}



// FUNCTION 145e0cf5a FUN_145e0cf5a body=157 status=ok
// SIG undefined FUN_145e0cf5a(void)

undefined2 * FUN_145e0cf5a(undefined2 *param_1,undefined2 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  cVar1 = *(char *)((longlong)param_2 + 3);
  *(char *)((longlong)param_1 + 3) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  }
  param_1[4] = param_2[4];
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    lVar2 = *(longlong *)(param_2 + 8);
    *(longlong *)(param_1 + 8) = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
    }
  }
  param_1[0x10] = param_2[0x10];
  cVar1 = *(char *)(param_2 + 0x1c);
  *(char *)(param_1 + 0x1c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
    uVar3 = *(undefined8 *)(param_2 + 0x16);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0x16) = uVar3;
  }
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
  cVar1 = *(char *)(param_2 + 0x28);
  *(char *)(param_1 + 0x28) = cVar1;
  if (cVar1 == '\x01') {
    uVar3 = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x24) = uVar3;
  }
  param_1[0x2a] = param_2[0x2a];
  return param_1;
}



// FUNCTION 145e0cff8 FUN_145e0cff8 body=314 status=ok
// SIG undefined FUN_145e0cff8(void)

void FUN_145e0cff8(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1410c2f26();
  lVar1 = FUN_140391552(param_1);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x368) == 0) {
      local_38 = (code *)&LAB_14588808a;
      local_30 = 0;
      FUN_145e0d134(local_48,param_1);
      FUN_1446ddc76(&local_50,"FOakUIEvent_StartMenuActiveStatusChanged",1);
      FUN_140391af6(lVar1,&local_38,local_50,local_48);
      *(code **)(param_1 + 0x368) = local_38;
      FUN_1449db362(local_48);
    }
    if (*(longlong *)(param_1 + 0x378) == 0) {
      local_38 = FUN_14588827c;
      local_30 = 0;
      FUN_145e0d134(local_48,param_1);
      FUN_1446ddc76(&local_58,"FOakUIEvent_SpecialNavMenuActiveStatusChanged",1);
      FUN_140391af6(lVar1,&local_38,local_58,local_48);
      *(code **)(param_1 + 0x378) = local_38;
      FUN_1449db362(local_48);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0d134 FUN_145e0d134 body=428 status=ok
// SIG undefined FUN_145e0d134(void)

longlong * FUN_145e0d134(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145e0d214:
    *puVar5 = &PTR_LAB_14b4665f0;
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
    *puVar5 = &PTR_FUN_14b9cc880;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145e0d214;
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
    *puVar5 = &PTR_LAB_14b4665f0;
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
    *puVar5 = &PTR_FUN_14b9cc880;
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



// FUNCTION 145e0d2e0 FUN_145e0d2e0 body=1126 status=ok
// SIG undefined FUN_145e0d2e0(void)

void FUN_145e0d2e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *param_2;
  uVar4 = FUN_14477b664(param_2[1]);
  local_40 = FUN_14477b664(uVar4);
  local_38 = param_2[2];
  FUN_141568a00(param_1,&local_48);
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar4 = FUN_145c42884();
    lVar6 = FUN_14477b664(uVar4);
    param_2[1] = lVar6;
  }
  lVar7 = param_2[2];
  if (lVar7 == 0) {
    if ((lVar6 == 0) || (*param_2 == 0)) goto LAB_145e0d467;
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
      param_2[2] = 0;
      goto LAB_145e0d467;
    }
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar7 = FUN_144aff482(uVar4,param_2);
    param_2[2] = lVar7;
    if (lVar7 == 0) goto LAB_145e0d467;
    lVar6 = param_2[1];
  }
  if (lVar6 == 0) {
    uVar4 = FUN_145c42884();
    lVar6 = FUN_14477b664(uVar4);
    param_2[1] = lVar6;
    lVar7 = param_2[2];
    if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*param_2 != 0)) {
      plVar1 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
        lVar7 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar7 = FUN_144aff482(uVar4,param_2);
      }
      param_2[2] = lVar7;
    }
  }
  uVar4 = FUN_145e0d748();
  cVar3 = FUN_1448093f4(lVar7,uVar4);
  if (cVar3 == '\0') {
    lVar7 = 0;
  }
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  uVar4 = FUN_145e0d748();
  lStack_60 = FUN_14477b664(uVar4);
  uVar4 = FUN_145e0d748();
  uVar5 = FUN_145e0d748();
  FUN_1402d1bfa(&local_30,uVar5,lVar7);
  if (local_68 != local_30) {
    local_58 = 0;
  }
  local_68 = local_30;
  uVar5 = FUN_145e0d748();
  lVar6 = FUN_141459e9e(uVar4,uVar5);
  if (lStack_60 != lVar6) {
    local_58 = 0;
  }
  uVar4 = FUN_14477b664(lVar6);
  lStack_60 = FUN_14477b664(uVar4);
  if (((local_30 == 0) || (lStack_60 == 0)) && (lVar7 = local_58, lStack_60 == 0)) {
    uVar4 = FUN_145e0d748();
    lStack_60 = FUN_14477b664(uVar4);
    lVar7 = local_58;
  }
  local_58 = lVar7;
  if (local_58 == 0) {
    local_58 = 0;
    if ((((local_30 == 0) || (lStack_60 == 0)) ||
        (plVar1 = *(longlong **)(lStack_60 + 0xb8), plVar1 == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) goto LAB_145e0d467;
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    local_58 = FUN_144aff482(uVar4,&local_68);
    if (local_58 == 0) goto LAB_145e0d467;
  }
  plVar1 = (longlong *)(param_1 + 0x80);
  FUN_145e0d782(plVar1,&local_68);
  lVar6 = *(longlong *)(param_1 + 0x88);
  if (lVar6 == 0) {
    uVar4 = FUN_145e0d748();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x88) = lVar6;
  }
  lVar7 = *(longlong *)(param_1 + 0x90);
  if (lVar7 == 0) {
    uVar8 = 0;
    if ((lVar6 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0x90) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar7 = FUN_144aff482(uVar4,plVar1);
        *(longlong *)(param_1 + 0x90) = lVar7;
        if (lVar7 != 0) {
          lVar6 = *(longlong *)(param_1 + 0x88);
          goto LAB_145e0d447;
        }
      }
    }
  }
  else {
LAB_145e0d447:
    if (lVar6 == 0) {
      uVar4 = FUN_145e0d748();
      lVar6 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x88) = lVar6;
      lVar7 = *(longlong *)(param_1 + 0x90);
      if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          lVar7 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar7 = FUN_144aff482(uVar4,plVar1);
        }
        *(longlong *)(param_1 + 0x90) = lVar7;
      }
    }
    uVar8 = *(undefined4 *)(lVar7 + 0xa8);
  }
  FUN_145e0d7d6(param_1 + 0x98,uVar8);
LAB_145e0d467:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e0d748 FUN_145e0d748 body=57 status=ok
// SIG undefined FUN_145e0d748(void)

void FUN_145e0d748(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf330 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf330 = FUN_140002ddd(FUN_1465eecfb,uVar1,L"OakSymphonicAmbientAudioDef");
  }
  return;
}



// FUNCTION 145e0d782 FUN_145e0d782 body=84 status=ok
// SIG undefined FUN_145e0d782(void)

longlong * FUN_145e0d782(longlong *param_1,longlong *param_2)

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



// FUNCTION 145e0d7d6 FUN_145e0d7d6 body=132 status=ok
// SIG undefined FUN_145e0d7d6(void)

void FUN_145e0d7d6(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_145e0d85c(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(ulonglong)uVar2 << 4);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (iVar1 <= param_2) {
    return;
  }
  FUN_148cf86dc(param_1,param_2,iVar1 - param_2);
  return;
}



// FUNCTION 145e0d85c FUN_145e0d85c body=132 status=ok
// SIG undefined FUN_145e0d85c(void)

void FUN_145e0d85c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145e0d8e0 FUN_145e0d8e0 body=200 status=ok
// SIG undefined FUN_145e0d8e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e0d8e0(void)

{
  if ((DAT_14ca892c7 & 2) != 0) {
    return;
  }
  DAT_14ca892c7 = DAT_14ca892c7 | 2;
  _DAT_14ca89268 = L"FScreenVertexShaderVS";
  _DAT_14ca89280 = FUN_146826540;
  _DAT_14ca89288 = FUN_146825d77;
  _DAT_14ca89290 = FUN_146825fd6;
  _DAT_14ca89298 = FUN_1407e02ea;
  _DAT_14ca892a0 = FUN_146826273;
  _DAT_14ca89278 = FUN_147419350;
  _DAT_14ca892b8 = 0xffffffff000000e0;
  _DAT_14ca892c0 = 8;
  DAT_14ca892c4 = 0;
  _DAT_14ca892a8 = &LAB_14741937c;
  FUN_145e0d9a8();
  FUN_1407e00cc(&DAT_14ca89260);
  return;
}



// FUNCTION 145e0d9a8 FUN_145e0d9a8 body=133 status=ok
// SIG undefined FUN_145e0d9a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e0d9a8(void)

{
  _DAT_14ca93c50 = L"BASE";
  DAT_14ca93c7a = 4;
  FUN_140b35ae4();
  _DAT_14ca93c60 = DAT_14ca89270;
  _DAT_14ca93c58 = &DAT_14ca8c6c8;
  _DAT_14ca93c68 = &LAB_14682652b;
  DAT_14ca89270 = &DAT_14ca93c50;
  DAT_14ca892c5 = DAT_14ca892c5 + '\x01';
  _DAT_14ca93c70 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca892c6 = DAT_14ca892c6 + '\x01';
  }
  return;
}



// FUNCTION 145e0da2e FUN_145e0da2e body=263 status=ok
// SIG undefined FUN_145e0da2e(void)

void FUN_145e0da2e(void)

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
              0x110) < DAT_14ca91260) {
    FUN_144b3d300(&DAT_14ca91260);
    if (DAT_14ca91260 == -1) {
      FUN_145e0db36(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x73;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca911e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f8782);
      _Init_thread_footer(&DAT_14ca91260);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0db36 FUN_145e0db36 body=228 status=ok
// SIG undefined FUN_145e0db36(void)

longlong * FUN_145e0db36(longlong *param_1)

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
  pcVar13 = FUN_147422b34;
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
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145e0dc1c FUN_145e0dc1c body=9 status=ok
// SIG undefined FUN_145e0dc1c(void)

void FUN_145e0dc1c(longlong param_1)

{
  FUN_145e0dc26(param_1 + 0x10);
  return;
}



// FUNCTION 145e0dc26 FUN_145e0dc26 body=153 status=ok
// SIG undefined FUN_145e0dc26(void)

void FUN_145e0dc26(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_145e0e078(param_1,0);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  FUN_145e0dcc0(param_1 + 0x98);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_145e0dcf8(param_1 + 0x20);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145e0dcbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145e0dcc0 FUN_145e0dcc0 body=55 status=ok
// SIG undefined FUN_145e0dcc0(void)

void FUN_145e0dcc0(longlong *param_1)

{
  FUN_145e0ded2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e0dcf8 FUN_145e0dcf8 body=55 status=ok
// SIG undefined FUN_145e0dcf8(void)

void FUN_145e0dcf8(longlong *param_1)

{
  FUN_145e0dd30(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e0dd30 FUN_145e0dd30 body=416 status=ok
// SIG undefined FUN_145e0dd30(void)

void FUN_145e0dd30(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      plVar4 = *(longlong **)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20);
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
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar6 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar6) {
      uVar5 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e0ded2 FUN_145e0ded2 body=420 status=ok
// SIG undefined FUN_145e0ded2(void)

void FUN_145e0ded2(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_140bb2a1a(lVar2 + lVar5 + 8);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e0e078 FUN_145e0e078 body=354 status=ok
// SIG undefined FUN_145e0e078(void)

void FUN_145e0e078(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  plVar1 = (longlong *)(param_1 + 0x20);
  lVar2 = param_1 + 0x30;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar6 = 0;
  local_58 = lVar2;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0x48);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = plVar1;
  if ((iStack_4c != iVar6) || (local_58 != lVar2)) {
    do {
      puVar4 = *(undefined8 **)(*local_88 + 8 + (longlong)iStack_6c * 0x20);
      *puVar4 = 0;
      plVar5 = (longlong *)puVar4[1];
      puVar4[1] = 0;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (((iStack_6c != iVar6) || (local_78 != lVar2)) || (local_88 != plVar1));
  }
  FUN_145e0e21a(plVar1,param_2);
  FUN_145e0e1dc(param_1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e0e1dc FUN_145e0e1dc body=62 status=ok
// SIG undefined FUN_145e0e1dc(void)

void FUN_145e0e1dc(longlong param_1,undefined4 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  FUN_145e0e286(param_1 + 0x98,param_2);
                    /* WARNING: Could not recover jumptable at 0x000145e0e213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  return;
}



// FUNCTION 145e0e21a FUN_145e0e21a body=107 status=ok
// SIG undefined FUN_145e0e21a(void)

void FUN_145e0e21a(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145e0e269:
      FUN_145e0dd30(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1467dadee(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145e0e269;
  FUN_145e0e2f2(param_1);
  FUN_145e0dd30(param_1,param_2);
  return;
}



// FUNCTION 145e0e286 FUN_145e0e286 body=107 status=ok
// SIG undefined FUN_145e0e286(void)

void FUN_145e0e286(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145e0e2d5:
      FUN_145e0ded2(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1467db1c8(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145e0e2d5;
  FUN_145e0e442(param_1);
  FUN_145e0ded2(param_1,param_2);
  return;
}



// FUNCTION 145e0e2f2 FUN_145e0e2f2 body=335 status=ok
// SIG undefined FUN_145e0e2f2(void)

void FUN_145e0e2f2(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 145e0e442 FUN_145e0e442 body=339 status=ok
// SIG undefined FUN_145e0e442(void)

void FUN_145e0e442(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
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



// FUNCTION 145e0e596 FUN_145e0e596 body=9 status=ok
// SIG undefined FUN_145e0e596(void)

void FUN_145e0e596(longlong param_1)

{
  FUN_145e0e5a0(param_1 + 0x10);
  return;
}



// FUNCTION 145e0e5a0 FUN_145e0e5a0 body=549 status=ok
// SIG undefined FUN_145e0e5a0(void)

void FUN_145e0e5a0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ee36c0;
  param_1[0x2a6] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x2ba];
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
  param_1[0x290] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x2a4];
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
  param_1[0x276] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x28a];
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
  param_1[0x25c] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x270];
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
  param_1[0x242] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x256];
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
  param_1[0x22c] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x240];
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
  param_1[0x216] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x22a];
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
  FUN_140e9e952(param_1 + 0x1ba);
  FUN_140ffd6b6(param_1 + 0x14c);
  FUN_140ffd6b6(param_1 + 0xde);
  FUN_140ffd6b6(param_1 + 0x70);
  FUN_140ffd6b6(param_1 + 2);
  return;
}



// FUNCTION 145e0e7c6 FUN_145e0e7c6 body=40 status=ok
// SIG undefined FUN_145e0e7c6(void)

undefined8 FUN_145e0e7c6(undefined8 param_1,int param_2)

{
  FUN_145e0e7ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e0e7ee FUN_145e0e7ee body=146 status=ok
// SIG undefined FUN_145e0e7ee(void)

void FUN_145e0e7ee(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a535a20;
  param_1[5] = &PTR_FUN_14a535d40;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x33];
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
  *param_1 = &PTR_FUN_14a520560;
  param_1[5] = &PTR_LAB_14a520880;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145e0e88c FUN_145e0e88c body=175 status=ok
// SIG undefined FUN_145e0e88c(void)

undefined8 * FUN_145e0e88c(undefined8 *param_1)

{
  FUN_144805d84();
  *param_1 = &PTR_FUN_14a851840;
  param_1[5] = &PTR_FUN_14a851cc0;
  param_1[6] = &PTR_LAB_14a851d00;
  param_1[0x22] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) | 0x80;
  *(undefined1 *)(param_1 + 9) = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  return param_1;
}



// FUNCTION 145e0e946 FUN_145e0e946 body=175 status=ok
// SIG undefined FUN_145e0e946(void)

undefined8 * FUN_145e0e946(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b366cc0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  return param_1;
}



// FUNCTION 145e0e9f6 FUN_145e0e9f6 body=54 status=ok
// SIG undefined FUN_145e0e9f6(void)

undefined1 FUN_145e0e9f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145e0ea2c(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 145e0ea2c FUN_145e0ea2c body=132 status=ok
// SIG undefined FUN_145e0ea2c(void)

undefined1 * FUN_145e0ea2c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  if ((*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) ||
     (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10))) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *(longlong *)(param_2 + 0x20);
    }
  }
  *(longlong *)(param_1 + 0x20) = lVar2;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  FUN_1447715ec(param_1 + 0x30,param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  return param_1;
}



// FUNCTION 145e0eab0 FUN_145e0eab0 body=40 status=ok
// SIG undefined FUN_145e0eab0(void)

undefined8 FUN_145e0eab0(undefined8 param_1,int param_2)

{
  FUN_145e0ead8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e0ead8 FUN_145e0ead8 body=146 status=ok
// SIG undefined FUN_145e0ead8(void)

void FUN_145e0ead8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b83ad40;
  param_1[6] = &PTR_FUN_14b83b000;
  param_1[7] = &PTR_FUN_14b83b090;
  FUN_144760e21(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140e3eae6(param_1);
  return;
}



// FUNCTION 145e0eb76 FUN_145e0eb76 body=81 status=ok
// SIG undefined FUN_145e0eb76(void)

void FUN_145e0eb76(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14583d3ae();
    if (lVar1 != 0) {
      uVar2 = FUN_140e82300();
      FUN_1458d9546(lVar1,uVar2,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 145e0ebc8 FUN_145e0ebc8 body=68 status=ok
// SIG undefined FUN_145e0ebc8(void)

void FUN_145e0ebc8(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x348);
  memset(_Dst,0,0x348);
  FUN_145e0ec0c(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 145e0ec0c FUN_145e0ec0c body=489 status=ok
// SIG undefined FUN_145e0ec0c(void)

undefined8 * FUN_145e0ec0c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8c1c90;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  plVar5 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar5;
  param_1[0x18] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x19) = (int)plVar5[1];
  *(undefined1 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe7) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf3) = 0x1000100000000;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0;
  FUN_1400b22c2(&local_50,"#FFFFFF");
  param_1[0x20] = local_50;
  *(undefined4 *)(param_1 + 0x21) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x10c) = local_44;
  *(undefined4 *)(param_1 + 0x22) = 0;
  FUN_1400b22c2(&local_50,"#FFFFFF");
  param_1[0x23] = local_50;
  *(undefined4 *)(param_1 + 0x24) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x124) = local_44;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0x3f800000;
  FUN_1400b22c2(&local_50,"#000000");
  param_1[0x27] = local_50;
  *(undefined4 *)(param_1 + 0x28) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x144) = local_44;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 1;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  uVar4 = DAT_14c846328._4_4_;
  uVar3 = (undefined4)DAT_14c846328;
  uVar2 = DAT_14c846320._4_4_;
  *(undefined4 *)(param_1 + 0x2c) = (undefined4)DAT_14c846320;
  *(undefined4 *)((longlong)param_1 + 0x164) = uVar2;
  *(undefined4 *)(param_1 + 0x2d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x16c) = uVar4;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  FUN_1457ba0d4(param_1 + 0x2f);
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  plVar5 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar5;
  param_1[0x67] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x68) = (int)plVar5[1];
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0edfe FUN_145e0edfe body=178 status=ok
// SIG undefined FUN_145e0edfe(void)

undefined8 * FUN_145e0edfe(undefined8 *param_1)

{
  FUN_1412c18ae();
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *param_1 = &PTR_FUN_14ba145b0;
  param_1[5] = &PTR_FUN_14ba149c0;
  param_1[0x13] = &PTR_FUN_14ba149e0;
  param_1[0x17] = &PTR_FUN_14ba14a10;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_1411b354a(param_1 + 0x2c,0,0,0,0);
  return param_1;
}



// FUNCTION 145e0eeb0 FUN_145e0eeb0 body=146 status=ok
// SIG undefined FUN_145e0eeb0(void)

code * FUN_145e0eeb0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e0ef42();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"cbGenerateReactive";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FFXGenerateReactiveParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000078;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cc2a210;
  return FUN_145eedd0e;
}



// FUNCTION 145e0ef42 FUN_145e0ef42 body=278 status=ok
// SIG undefined FUN_145e0ef42(void)

undefined * FUN_145e0ef42(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2a290) {
    FUN_144b3d300(&DAT_14cc2a290);
    if (DAT_14cc2a290 == -1) {
      FUN_145e0f05a(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"cbGenerateReactive";
      local_78 = L"FFXGenerateReactiveParameters";
      local_50 = 0x10;
      local_58 = 99;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc2a210,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144655d0f);
      _Init_thread_footer(&DAT_14cc2a290);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cc2a210;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0f05a FUN_145e0f05a body=226 status=ok
// SIG undefined FUN_145e0f05a(void)

longlong * FUN_145e0f05a(longlong *param_1)

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
  pcVar13 = FUN_146762ba6;
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



// FUNCTION 145e0f142 FUN_145e0f142 body=138 status=ok
// SIG undefined FUN_145e0f142(void)

code * FUN_145e0f142(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"threshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000065;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149821bc2;
}



// FUNCTION 145e0f1cc FUN_145e0f1cc body=138 status=ok
// SIG undefined FUN_145e0f1cc(void)

code * FUN_145e0f1cc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"binaryValue";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000066;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e0f142;
}



// FUNCTION 145e0f256 FUN_145e0f256 body=433 status=ok
// SIG undefined FUN_145e0f256(void)

void FUN_145e0f256(char param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c98e618 != 0) {
    FUN_1447f69b6(DAT_14c98e618 + 0x580);
    uVar5 = FUN_145937b82();
    FUN_1446f470e(&local_28,L"Slate",1);
    FUN_1459385a0(uVar5,local_28);
    FUN_145e0f45e(DAT_14c98e618);
    if (*(longlong **)(DAT_14c98e618 + 0x20) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(DAT_14c98e618 + 0x20) + 0x28))();
    }
    lVar4 = DAT_14c98e618;
    *(undefined8 *)(DAT_14c98e618 + 0x20) = 0;
    plVar3 = *(longlong **)(lVar4 + 0x28);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(lVar4 + 0x28) = 0;
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
    if (param_1 != '\0') {
      (**(code **)(*DAT_14c968088 + 0xd8))();
    }
    plVar3 = DAT_14c968090;
    DAT_14c968088 = (longlong *)0x0;
    if (DAT_14c968090 != (longlong *)0x0) {
      DAT_14c968090 = (longlong *)0x0;
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
    plVar3 = DAT_14c98e620;
    DAT_14c98e618 = 0;
    if (DAT_14c98e620 != (longlong *)0x0) {
      DAT_14c98e620 = (longlong *)0x0;
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
    plVar3 = DAT_14c9680a0;
    DAT_14c968098 = 0;
    if (DAT_14c9680a0 != (longlong *)0x0) {
      DAT_14c9680a0 = (longlong *)0x0;
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
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0f408 FUN_145e0f408 body=24 status=ok
// SIG undefined FUN_145e0f408(void)

void FUN_145e0f408(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145e0f41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145e0f420 FUN_145e0f420 body=24 status=ok
// SIG undefined FUN_145e0f420(void)

void FUN_145e0f420(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145e0f434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145e0f438 FUN_145e0f438 body=38 status=ok
// SIG undefined FUN_145e0f438(void)

undefined8 FUN_145e0f438(undefined8 param_1,int param_2)

{
  FUN_145e0ff26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e0f45e FUN_145e0f45e body=230 status=ok
// SIG undefined FUN_145e0f45e(void)

void FUN_145e0f45e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = param_1[99];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = param_1[0x62];
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar5);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x20) != 0)) {
        FUN_145e0f546(lVar2);
        FUN_145e0f596(lVar2);
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar5);
  }
  lVar3 = (longlong)(int)param_1[0x37];
  if (0 < lVar3) {
    uVar4 = lVar3 + 1;
    lVar3 = lVar3 * 0x10 + -8;
    do {
      local_40 = *(undefined8 *)(param_1[0x36] + -8 + lVar3);
      local_38 = *(longlong *)(param_1[0x36] + lVar3);
      if (local_38 != 0) {
        LOCK();
        *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*param_1 + 0x140))(param_1,&local_40);
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + -0x10;
    } while (1 < uVar4);
  }
  FUN_145e0f62e(param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0f546 FUN_145e0f546 body=80 status=ok
// SIG undefined FUN_145e0f546(void)

void FUN_145e0f546(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1f0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1f0) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145e0f592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145e0f596 FUN_145e0f596 body=152 status=ok
// SIG undefined FUN_145e0f596(void)

void FUN_145e0f596(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x288) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x290), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1])
     ) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_14698158e(0);
        goto LAB_145e0f605;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    FUN_14698158e(*(undefined8 *)(param_1 + 0x288));
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
LAB_145e0f605:
    plVar3 = *(longlong **)(param_1 + 0x290);
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined8 *)(param_1 + 0x290) = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145e0f62a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145e0f62e FUN_145e0f62e body=676 status=ok
// SIG undefined FUN_145e0f62e(void)

void FUN_145e0f62e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 ****ppppuVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined7 uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_a8 [40];
  undefined8 ***local_80;
  longlong *local_78;
  undefined8 ***local_70;
  longlong *local_68;
  undefined8 ***local_60;
  longlong *local_58;
  undefined8 ***local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = (longlong *)(param_1 + 0x1f0);
  if (0 < *(int *)(param_1 + 0x1f8)) {
    do {
      local_60 = *(undefined8 ****)*plVar3;
      local_58 = (longlong *)((undefined8 *)*plVar3)[1];
      if (local_58 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
      }
      local_70 = &local_60;
      FUN_14112e7e4(plVar3,&local_70);
      if (0 < (longlong)*(int *)(param_1 + 0x1e8)) {
        lVar10 = 0;
        do {
          ppppuVar4 = *(undefined8 *****)(*(longlong *)(param_1 + 0x1e0) + lVar10);
          if (ppppuVar4 == (undefined8 ****)local_60 && ppppuVar4 != (undefined8 ****)0x0) {
            local_70 = local_60;
            local_68 = local_58;
            if (local_58 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_58 + 1) = (int)local_58[1] + 1;
              UNLOCK();
            }
            local_50 = &local_70;
            FUN_1469b626a((longlong *)(param_1 + 0x1e0));
            plVar6 = local_68;
            if (local_68 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_68 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_68)(local_68);
                LOCK();
                piVar2 = (int *)((longlong)plVar6 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
            }
            if ((longlong)*(int *)(param_1 + 0x1e8) < 1) {
              if (0 < *(int *)(param_1 + 0x1b8)) {
                lVar10 = 0;
                iVar9 = 0;
                do {
                  FUN_14698196c(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + lVar10),1);
                  iVar9 = iVar9 + 1;
                  lVar10 = lVar10 + 0x10;
                } while (iVar9 < *(int *)(param_1 + 0x1b8));
              }
              if ((*(int *)(param_1 + 0x4a0) != 0) &&
                 (*(longlong **)(param_1 + 0x498) != (longlong *)0x0)) {
                (**(code **)(**(longlong **)(param_1 + 0x498) + 0x60))();
              }
            }
            else {
              lVar10 = *(longlong *)(param_1 + 0x1e0);
              lVar7 = (longlong)*(int *)(param_1 + 0x1e8) * 0x10;
              uVar5 = *(undefined8 *)(lVar10 + -0x10 + lVar7);
              plVar6 = *(longlong **)(lVar10 + -8 + lVar7);
              uVar8 = (undefined7)((ulonglong)lVar10 >> 8);
              if (plVar6 == (longlong *)0x0) {
                FUN_14698196c(uVar5,CONCAT71(uVar8,1));
              }
              else {
                LOCK();
                *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                UNLOCK();
                FUN_14698196c(uVar5,CONCAT71(uVar8,1));
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
            }
            break;
          }
          lVar10 = lVar10 + 0x10;
        } while ((longlong)*(int *)(param_1 + 0x1e8) * 0x10 != lVar10);
      }
      local_80 = local_60;
      local_78 = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
      }
      FUN_145e0fb70(param_1 + 0x200,&local_80);
      FUN_145e0f904(param_1,&local_60);
      plVar6 = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    } while (0 < *(int *)(param_1 + 0x1f8));
  }
  FUN_1401b439d(*(undefined8 *)(param_1 + 0x1f0));
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (*(int *)(param_1 + 0x1fc) != 0) {
    FUN_145e0f8d4(plVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e0f8d4 FUN_145e0f8d4 body=48 status=ok
// SIG undefined FUN_145e0f8d4(void)

void FUN_145e0f8d4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 145e0f904 FUN_145e0f904 body=300 status=ok
// SIG undefined FUN_145e0f904(void)

void FUN_145e0f904(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  FUN_145e0face(param_1 + 0x5b0,*param_2);
  FUN_141569046(*param_2);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0xa8))(*(longlong **)(param_1 + 0x20),param_2);
  FUN_145e0fa30(*param_2);
  FUN_145e0fa44((longlong *)(param_1 + 0x1b0),param_2);
  if (0 < *(int *)(param_1 + 0x1b8)) {
    iVar6 = 0;
    lVar7 = 8;
    do {
      lVar3 = *(longlong *)(param_1 + 0x1b0);
      lVar4 = *(longlong *)(lVar3 + -8 + lVar7);
      plVar5 = *(longlong **)(lVar3 + lVar7);
      if (plVar5 == (longlong *)0x0) {
        if ((((*(byte *)(lVar4 + 0x368) & 2) == 0) && (*(int *)(lVar4 + 0x304) != 2)) &&
           (*(int *)(lVar4 + 0x304) != 4)) {
          return;
        }
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        if ((*(byte *)(lVar4 + 0x368) & 2) == 0) {
          bVar8 = (*(int *)(lVar4 + 0x304) - 2U & 0xfffffffd) != 0;
        }
        else {
          bVar8 = false;
        }
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
        if (bVar8) {
          return;
        }
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (iVar6 < *(int *)(param_1 + 0x1b8));
  }
  if ((*(int *)(param_1 + 0x400) != 0) && (*(longlong **)(param_1 + 0x3f8) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145e0fa1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x3f8) + 0x60))();
    return;
  }
  return;
}



// FUNCTION 145e0fa30 FUN_145e0fa30 body=20 status=ok
// SIG undefined FUN_145e0fa30(void)

void FUN_145e0fa30(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x510) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145e0fa3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x510) + 0x30))();
    return;
  }
  return;
}



// FUNCTION 145e0fa44 FUN_145e0fa44 body=136 status=ok
// SIG undefined FUN_145e0fa44(void)

void FUN_145e0fa44(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  iVar1 = FUN_14112e7e4();
  if ((iVar1 == 0) && (0 < (int)param_1[1])) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      FUN_145e0fa44(*(longlong *)(*param_1 + lVar2) + 0x600,param_2);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (lVar3 < (int)param_1[1]);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e0face FUN_145e0face body=162 status=ok
// SIG undefined FUN_145e0face(void)

void FUN_145e0face(longlong *param_1,undefined8 param_2)

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
        goto LAB_145e0fb5b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145e0fb5b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145e0fb70 FUN_145e0fb70 body=433 status=ok
// SIG undefined FUN_145e0fb70(void)

void FUN_145e0fb70(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_1c8 [40];
  undefined1 local_1a0 [8];
  longlong *local_198;
  longlong local_190;
  longlong local_188;
  undefined1 local_180;
  undefined7 uStack_17f;
  longlong *local_178;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar3 = *param_2;
  if (*(longlong *)(param_1 + 0x20) == lVar3 && *(longlong *)(param_1 + 0x20) != 0) {
    FUN_145e11887(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_1469b4c94(param_1 + 0x60);
    }
    FUN_1469b4cc4(param_1 + 0x70);
    local_180 = DAT_14c96b238;
    local_58 = 0;
    local_50 = 0x400000000;
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1469a5f2c(param_1,&local_180);
    FUN_1447fa21a(&local_180);
  }
  else {
    local_188 = param_2[1];
    if (local_188 != 0) {
      LOCK();
      *(int *)(local_188 + 8) = *(int *)(local_188 + 8) + 1;
      UNLOCK();
    }
    local_190 = lVar3;
    FUN_145e0fd22(param_1,&local_180,&local_190);
    if (CONCAT71(uStack_17f,local_180) != 0) {
      local_198 = local_178;
      if (local_178 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_178 + 1) = (int)local_178[1] + 1;
        UNLOCK();
      }
      FUN_1469a6ee6(param_1,local_1a0);
    }
    if (local_178 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_178 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_178)(local_178);
        LOCK();
        piVar2 = (int *)((longlong)local_178 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_178 + 0x10))(local_178);
        }
      }
    }
  }
  plVar4 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0fd22 FUN_145e0fd22 body=515 status=ok
// SIG undefined FUN_145e0fd22(void)

undefined8 * FUN_145e0fd22(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  lVar10 = (longlong)*(int *)(param_1 + 0x68);
  bVar7 = true;
  puVar8 = puVar9;
  if (lVar10 != 0) {
    lVar11 = lVar10 * 0x10;
    local_68 = puVar9 + lVar10 * 2;
    do {
      plVar5 = (longlong *)*puVar9;
      plVar6 = (longlong *)puVar9[1];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
      plVar5 = local_50;
      local_60 = local_58;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_50 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar6 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
      bVar7 = local_60 != lVar3 || local_60 == 0;
      puVar8 = puVar9;
      if (local_60 == lVar3 && local_60 != 0) break;
      puVar9 = puVar9 + 2;
      lVar11 = lVar11 + -0x10;
      puVar8 = local_68;
    } while (lVar11 != 0);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((bool)(bVar7 | puVar8 == (undefined8 *)0x0)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = *puVar8;
    lVar3 = puVar8[1];
    param_2[1] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145e0ff26 FUN_145e0ff26 body=1552 status=ok
// SIG undefined FUN_145e0ff26(void)

void FUN_145e0ff26(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_149efb0a0;
  param_1[0x29] = &PTR_FUN_149efb290;
  FUN_145e10736();
  FUN_145e10a50();
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar4 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"Slate.EnableGlobalInvalidation",1);
  if (plVar4 != (longlong *)0x0) {
    local_28 = 0;
    uStack_20 = 0;
    (**(code **)(*plVar4 + 200))(plVar4,&local_28);
    FUN_1449db362(&local_28);
  }
  plVar4 = (longlong *)param_1[0xe5];
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
  FUN_145e1067a(param_1 + 0xc9);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc2));
  FUN_144760e21(param_1[0xbf],*(undefined4 *)(param_1 + 0xc0));
  if (param_1[0xbf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xbc],*(undefined4 *)(param_1 + 0xbd));
  if (param_1[0xbc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xb9],*(undefined4 *)(param_1 + 0xba));
  if (param_1[0xb9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xb6],*(undefined4 *)(param_1 + 0xb7));
  if (param_1[0xb6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xb3],*(undefined4 *)(param_1 + 0xb4));
  if (param_1[0xb3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xb0],*(undefined4 *)(param_1 + 0xb1));
  if (param_1[0xb0] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xad],*(undefined4 *)(param_1 + 0xae));
  if (param_1[0xad] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xaa],*(undefined4 *)(param_1 + 0xab));
  if (param_1[0xaa] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa8] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0xa5];
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
  FUN_144760e21(param_1[0x9f],*(undefined4 *)(param_1 + 0xa0));
  if (param_1[0x9f] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x9b);
  FUN_1449db362(param_1 + 0x99);
  puVar3 = (undefined8 *)param_1[0x97];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  FUN_1449db362(param_1 + 0x93);
  FUN_1449db362(param_1 + 0x91);
  FUN_1449db362(param_1 + 0x8f);
  FUN_145e10543(param_1[0x8a],*(undefined4 *)(param_1 + 0x8b));
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x87);
  FUN_1449db362(param_1 + 0x85);
  FUN_1449db362(param_1 + 0x83);
  plVar4 = (longlong *)param_1[0x82];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_1449db362(param_1 + 0x7f);
  plVar4 = (longlong *)param_1[0x7b];
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
  plVar4 = (longlong *)param_1[0x79];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (longlong *)param_1[0x77];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_145e105a3(param_1[0x74],*(undefined4 *)(param_1 + 0x75));
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x70],*(undefined4 *)(param_1 + 0x71));
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x6c];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (longlong *)param_1[0x6a];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (longlong *)param_1[0x67];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_145e1056b(param_1[100],*(undefined4 *)(param_1 + 0x65));
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  FUN_145e105e4(param_1[0x62],*(undefined4 *)(param_1 + 99));
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  FUN_145e1164e(param_1 + 0x40);
  FUN_1401b439d(param_1[0x3e],*(undefined4 *)(param_1 + 0x3f));
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_145e1062d(param_1[0x3c],*(undefined4 *)(param_1 + 0x3d));
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x3b];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_1401b439d(param_1[0x38],*(undefined4 *)(param_1 + 0x39));
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b439d(param_1[0x36],*(undefined4 *)(param_1 + 0x37));
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_1405535a6(param_1 + 0x2a);
  FUN_145e10b4a(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e10538 FUN_145e10538 body=1 status=ok
// SIG undefined FUN_145e10538(void)

void FUN_145e10538(void)

{
  return;
}



// FUNCTION 145e10543 FUN_145e10543 body=40 status=ok
// SIG undefined FUN_145e10543(void)

void FUN_145e10543(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449db362(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 145e1056b FUN_145e1056b body=56 status=ok
// SIG undefined FUN_145e1056b(void)

void FUN_145e1056b(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145e105a3 FUN_145e105a3 body=65 status=ok
// SIG undefined FUN_145e105a3(void)

void FUN_145e105a3(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      FUN_1449db362(param_1);
      plVar2 = *(longlong **)(param_1 + -8);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      param_1 = param_1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145e105e4 FUN_145e105e4 body=73 status=ok
// SIG undefined FUN_145e105e4(void)

void FUN_145e105e4(longlong param_1,int param_2)

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



// FUNCTION 145e1062d FUN_145e1062d body=77 status=ok
// SIG undefined FUN_145e1062d(void)

void FUN_145e1062d(longlong param_1,int param_2)

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



// FUNCTION 145e1067a FUN_145e1067a body=130 status=ok
// SIG undefined FUN_145e1067a(void)

void FUN_145e1067a(longlong param_1)

{
  FUN_1402c4dfe(*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0));
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  FUN_1402c4db1(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0));
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_1402c4db1(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_145e106fc(param_1);
  return;
}



// FUNCTION 145e106fc FUN_145e106fc body=57 status=ok
// SIG undefined FUN_145e106fc(void)

void FUN_145e106fc(longlong param_1)

{
  FUN_145e110ee();
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e10736 FUN_145e10736 body=187 status=ok
// SIG undefined FUN_145e10736(void)

void FUN_145e10736(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  plVar6 = DAT_14c98e600;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((DAT_14c98e5f8 != 0) && (DAT_14c98e600 != (longlong *)0x0)) && (0 < (int)DAT_14c98e600[1])) {
    iVar4 = (int)DAT_14c98e600[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    lVar7 = 0;
    if (plVar6 != (longlong *)0x0) {
      lVar7 = DAT_14c98e5f8;
    }
    uVar5 = FUN_145939d0e();
    local_20 = *(undefined8 *)(lVar7 + 0x18);
    FUN_145e107f2(uVar5);
    FUN_145939d74(lVar7 + 8);
    if (plVar6 != (longlong *)0x0) {
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e107f2 FUN_145e107f2 body=15 status=ok
// SIG undefined FUN_145e107f2(void)

void FUN_145e107f2(longlong param_1,undefined8 *param_2)

{
  FUN_145e10840(param_1 + 0x88,*param_2);
  return;
}



// FUNCTION 145e10802 FUN_145e10802 body=24 status=ok
// SIG undefined FUN_145e10802(void)

void FUN_145e10802(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145e10816. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145e1081a FUN_145e1081a body=38 status=ok
// SIG undefined FUN_145e1081a(void)

undefined8 FUN_145e1081a(undefined8 param_1,int param_2)

{
  FUN_145e109b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e10840 FUN_145e10840 body=132 status=ok
// SIG undefined FUN_145e10840(void)

void FUN_145e10840(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x80) == param_2) {
          FUN_145e108c4(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x80 + *param_1 + 0x78);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 145e108c4 FUN_145e108c4 body=123 status=ok
// SIG undefined FUN_145e108c4(void)

void FUN_145e108c4(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x80;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x7c + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x80 + 0x78);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x78);
  FUN_14582c2d6(*param_1 + lVar2 + 8);
  FUN_145e10940(param_1,param_2);
  return;
}



// FUNCTION 145e10940 FUN_145e10940 body=112 status=ok
// SIG undefined FUN_145e10940(void)

void FUN_145e10940(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x80) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x80) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x80 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 145e109b0 FUN_145e109b0 body=160 status=ok
// SIG undefined FUN_145e109b0(void)

void FUN_145e109b0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149efd878;
  plVar3 = (longlong *)param_1[0x17];
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
  plVar3 = (longlong *)param_1[0x15];
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
  plVar3 = (longlong *)param_1[0x13];
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
  FUN_145e115ec(param_1 + 1);
  return;
}



// FUNCTION 145e10a50 FUN_145e10a50 body=187 status=ok
// SIG undefined FUN_145e10a50(void)

void FUN_145e10a50(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  plVar6 = DAT_14c98e610;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((DAT_14c98e608 != 0) && (DAT_14c98e610 != (longlong *)0x0)) && (0 < (int)DAT_14c98e610[1])) {
    iVar4 = (int)DAT_14c98e610[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    lVar7 = 0;
    if (plVar6 != (longlong *)0x0) {
      lVar7 = DAT_14c98e608;
    }
    uVar5 = FUN_145939d0e();
    local_20 = *(undefined8 *)(lVar7 + 0x18);
    FUN_145e107f2(uVar5);
    FUN_145939d74(lVar7 + 8);
    if (plVar6 != (longlong *)0x0) {
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e10b0c FUN_145e10b0c body=24 status=ok
// SIG undefined FUN_145e10b0c(void)

void FUN_145e10b0c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145e10b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145e10b24 FUN_145e10b24 body=38 status=ok
// SIG undefined FUN_145e10b24(void)

undefined8 FUN_145e10b24(undefined8 param_1,int param_2)

{
  FUN_145e11456();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e10b4a FUN_145e10b4a body=247 status=ok
// SIG undefined FUN_145e10b4a(void)

void FUN_145e10b4a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149ed0670;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x21));
  FUN_144760e21(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
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
  FUN_140ecb711(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[5];
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
  FUN_145e10c41(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e10c41 FUN_145e10c41 body=56 status=ok
// SIG undefined FUN_145e10c41(void)

void FUN_145e10c41(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145e10c7a FUN_145e10c7a body=266 status=ok
// SIG undefined FUN_145e10c7a(void)

void FUN_145e10c7a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ef9ff0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_145e10d84(param_1 + 0x1f);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_145e10dba(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145e10df0(param_1 + 0xb);
  plVar3 = (longlong *)param_1[10];
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
  plVar3 = (longlong *)param_1[7];
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
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145e10d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145e10d84 FUN_145e10d84 body=53 status=ok
// SIG undefined FUN_145e10d84(void)

void FUN_145e10d84(longlong *param_1)

{
  FUN_145e112a0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e10dba FUN_145e10dba body=53 status=ok
// SIG undefined FUN_145e10dba(void)

void FUN_145e10dba(longlong *param_1)

{
  FUN_145e10e26();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e10df0 FUN_145e10df0 body=53 status=ok
// SIG undefined FUN_145e10df0(void)

void FUN_145e10df0(longlong *param_1)

{
  FUN_145e10f8a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e10e26 FUN_145e10e26 body=354 status=ok
// SIG undefined FUN_145e10e26(void)

void FUN_145e10e26(longlong *param_1)

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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e10f8a FUN_145e10f8a body=354 status=ok
// SIG undefined FUN_145e10f8a(void)

void FUN_145e10f8a(longlong *param_1)

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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e110ee FUN_145e110ee body=358 status=ok
// SIG undefined FUN_145e110ee(void)

void FUN_145e110ee(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x80;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = lVar1;
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_144a81a4c(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < *(int *)(local_48 + 0x10)) {
    do {
      lVar2 = *(longlong *)(local_78 + 0x70);
      if (*(longlong *)(local_78 + 0x70) == 0) {
        lVar2 = local_78;
      }
      lVar3 = (longlong)iStack_5c * 0x10;
      FUN_1402c4db1(*(undefined8 *)(lVar2 + lVar3),*(undefined4 *)(lVar2 + 8 + lVar3));
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_144a81a4c(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_145e11256(param_1);
  }
  *(undefined8 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (0x20 < *(uint *)(param_1 + 0x94)) {
    *(undefined4 *)(param_1 + 0x94) = 0x20;
    FUN_14008f53c(lVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e11256 FUN_145e11256 body=74 status=ok
// SIG undefined FUN_145e11256(void)

void FUN_145e11256(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
    if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x70),
              (longlong)*(int *)((longlong)param_1 + 0x78) << 4);
      FUN_1446efa72((longlong)param_1 + 0x70,0,0,0x10);
      return;
    }
  }
  return;
}



// FUNCTION 145e112a0 FUN_145e112a0 body=382 status=ok
// SIG undefined FUN_145e112a0(void)

void FUN_145e112a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_145e11420(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e11420 FUN_145e11420 body=53 status=ok
// SIG undefined FUN_145e11420(void)

void FUN_145e11420(longlong *param_1)

{
  FUN_145e11a26();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e11456 FUN_145e11456 body=406 status=ok
// SIG undefined FUN_145e11456(void)

void FUN_145e11456(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149efd7e8;
  plVar3 = (longlong *)param_1[0x23];
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
  plVar3 = (longlong *)param_1[0x21];
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
  plVar3 = (longlong *)param_1[0x1f];
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
  plVar3 = (longlong *)param_1[0x1d];
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
  plVar3 = (longlong *)param_1[0x1b];
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
  plVar3 = (longlong *)param_1[0x19];
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
  plVar3 = (longlong *)param_1[0x17];
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
  plVar3 = (longlong *)param_1[0x15];
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
  plVar3 = (longlong *)param_1[0x13];
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
  FUN_145e115ec(param_1 + 1);
  return;
}



// FUNCTION 145e115ec FUN_145e115ec body=97 status=ok
// SIG undefined FUN_145e115ec(void)

void FUN_145e115ec(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_140fb3a5c(param_1 + 0x38);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145e11649. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145e1164e FUN_145e1164e body=515 status=ok
// SIG undefined FUN_145e1164e(void)

void FUN_145e1164e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_144760e21(*(undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8));
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0xe0);
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
  plVar3 = *(longlong **)(param_1 + 0xd0);
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
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_145e11852(param_1 + 0x70);
  FUN_145e11887(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x58);
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
  plVar3 = *(longlong **)(param_1 + 0x48);
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
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
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
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000145e1184d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145e11852 FUN_145e11852 body=53 status=ok
// SIG undefined FUN_145e11852(void)

void FUN_145e11852(longlong *param_1)

{
  FUN_145e118d4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e11887 FUN_145e11887 body=77 status=ok
// SIG undefined FUN_145e11887(void)

void FUN_145e11887(longlong param_1,int param_2)

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



// FUNCTION 145e118d4 FUN_145e118d4 body=336 status=ok
// SIG undefined FUN_145e118d4(void)

void FUN_145e118d4(longlong *param_1)

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
      FUN_1469b1dba((longlong)iStack_4c * 0x28 + *local_68);
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



// FUNCTION 145e11a26 FUN_145e11a26 body=350 status=ok
// SIG undefined FUN_145e11a26(void)

void FUN_145e11a26(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x38);
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
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e11b86 FUN_145e11b86 body=1045 status=ok
// SIG undefined FUN_145e11b86(void)

undefined8 * FUN_145e11b86(undefined8 *param_1)

{
  char cVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined8 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145e11f9c();
  FUN_1400b22c2(local_68,"E1B72EA109BB4C2A995F0F65E5BD353D");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e730;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"32D02EF867C74B71A0D4E0FA41392732");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e760;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"0E6202C151DE402CA451802671AE9347");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e770;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"DB3ECDFAF27A4344ACB6B1967C21148D");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e780;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"C417A50271B3427D98785388266E3B66");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e790;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"F8D995224324470E97ED718D33939A0E");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e7a0;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"B9AEAA3EE7AC4FCFB3860E8F3E06DD75");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e7c0;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"3231A08A87A248A09D959335B0F4060A");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e7d0;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"C260AF26228241889456439BE5F5AF51");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e7e0;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e11f9c FUN_145e11f9c body=89 status=ok
// SIG undefined FUN_145e11f9c(void)

undefined * FUN_145e11f9c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c87e7f0) {
    FUN_144b3d300(&DAT_14c87e7f0);
    if (DAT_14c87e7f0 == -1) {
      FUN_145e11ff6();
      _Init_thread_footer(&DAT_14c87e7f0);
    }
  }
  return &DAT_14c87e730;
}



// FUNCTION 145e11ff6 FUN_145e11ff6 body=169 status=ok
// SIG undefined FUN_145e11ff6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e11ff6(void)

{
  _DAT_14c87e730 = 0xac4e46f37bb10a3c;
  uRam000000014c87e738 = 0xefb3e34fac78f4c1;
  _DAT_14c87e740 = 0xc574c7b30769e53;
  uRam000000014c87e748 = 0x24a64e32a15c56f2;
  _DAT_14c87e750 = 0x4edf4db78d2064fa;
  uRam000000014c87e758 = 0xa79a8b7999b33838;
  _DAT_14c87e760 = 0xd6b64e0d0e9adf72;
  uRam000000014c87e768 = 0x81a37ab81c4a92b;
  _DAT_14c87e770 = 0xa448491b5421f350;
  uRam000000014c87e778 = 0xb105837c95422d86;
  _DAT_14c87e780 = 0x70e4ecabeb0226a;
  uRam000000014c87e788 = 0xd8599e68972c1e7d;
  _DAT_14c87e790 = 0xc1554d207bbd9913;
  uRam000000014c87e798 = 0xb006299eadae9f17;
  _DAT_14c87e7a0 = 0x909fca7e6d32b8ee;
  uRam000000014c87e7a8 = 0x66a5f25a5ce4f17;
  _DAT_14c87e7b0 = 0x807a4cc0389117e4;
  uRam000000014c87e7b8 = 0xd808a78d9f37c2e6;
  _DAT_14c87e7c0 = 0x76d7481c9b5f4544;
  uRam000000014c87e7c8 = 0xa6c079049ad3f614;
  _DAT_14c87e7d0 = 0x2edf47b32c6c400c;
  uRam000000014c87e7d8 = 0x7b77b2089bd36689;
  _DAT_14c87e7e0 = 0xc10245c5628d9afc;
  uRam000000014c87e7e8 = 0xad52e88786967652;
  return;
}



// FUNCTION 145e120a0 FUN_145e120a0 body=1867 status=ok
// SIG undefined FUN_145e120a0(void)

void FUN_145e120a0(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined8 *local_d8;
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined4 local_b8;
  uint local_b0 [6];
  longlong local_98;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((*(char *)(param_1 + 0xf40) == '\0') && ((byte *)*param_2 != (byte *)0x0)) &&
     ((*(byte *)*param_2 & 0x6b) == 3)) {
    local_b8 = DAT_14cbd05f0;
    local_c0 = DAT_14cbd05e8;
    FUN_1448075d0(local_b0);
    uVar4 = FUN_144a06846(param_2,local_b0);
    uVar3 = FUN_140e1edd4(uVar4,0xffffffff);
    *(undefined4 *)(param_1 + 0xf70) = uVar3;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    pbVar1 = (byte *)*param_2;
    plVar13 = &DAT_14c9a1288;
    if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
      plVar13 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    local_f0 = (longlong *)(param_1 + 0xf30);
    FUN_14036924e(*(undefined8 *)(param_1 + 0xf30),*(undefined4 *)(param_1 + 0xf38));
    *(undefined4 *)(param_1 + 0xf38) = 0;
    if (*(int *)(param_1 + 0xf3c) != 0) {
      FUN_1457048a4(local_f0,0);
    }
    local_b8 = DAT_14cbd0500;
    local_c0 = DAT_14cbd04f8;
    FUN_1448075d0(local_b0);
    local_e8 = param_1;
    local_e0 = plVar13;
    local_d8 = param_2;
    if ((int)plVar13[2] != *(int *)((longlong)plVar13 + 0x3c)) {
      plVar9 = plVar13 + 8;
      if ((longlong *)plVar13[9] != (longlong *)0x0) {
        plVar9 = (longlong *)plVar13[9];
      }
      iVar12 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar13[10] - 1U & local_b0[0]) * 4);
      if (iVar12 != -1) {
LAB_145e121f7:
        if (*(uint *)(*plVar13 + (longlong)iVar12 * 0x40) != local_b0[0]) goto LAB_145e12795;
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        local_b8 = DAT_14cbd0500;
        local_c0 = DAT_14cbd04f8;
        FUN_1448075d0(local_b0);
        puVar5 = (undefined8 *)FUN_144a06846(param_2,local_b0);
        pbVar1 = (byte *)*puVar5;
        plVar13 = &DAT_14c9a1270;
        if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
          plVar13 = *(longlong **)(pbVar1 + 8);
        }
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if ((longlong)(int)plVar13[2] != 0) {
          lVar16 = *plVar13;
          lVar15 = (longlong)(int)plVar13[2] << 4;
          do {
            local_b8 = DAT_14cbd0518;
            local_c0 = DAT_14cbd0510;
            FUN_1448075d0(local_b0,&local_c0);
            puVar5 = (undefined8 *)FUN_144a06846(lVar16,local_b0);
            pbVar1 = (byte *)*puVar5;
            if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(undefined8 *)(pbVar1 + 8);
            }
            FUN_1446ddc76(local_c8,uVar4,1);
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            local_b8 = DAT_14cbd0530;
            local_c0 = DAT_14cbd0528;
            FUN_1448075d0(local_b0,&local_c0);
            puVar5 = (undefined8 *)FUN_144a06846(lVar16,local_b0);
            pbVar1 = (byte *)*puVar5;
            if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(undefined8 *)(pbVar1 + 8);
            }
            FUN_1446ddc76(local_d0,uVar4,1);
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            local_b8 = DAT_14cbd0548;
            local_c0 = DAT_14cbd0540;
            FUN_1448075d0(local_b0,&local_c0);
            uVar4 = FUN_144a06846(lVar16,local_b0);
            uVar3 = FUN_140e1edd4(uVar4,0);
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            FUN_1446dcdd4(local_b0,local_c8);
            lVar6 = thunk_FUN_140cde312(local_b0);
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            FUN_1446dcdd4(local_b0,local_d0);
            lVar7 = thunk_FUN_14005f05e(local_b0);
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            if ((lVar6 != 0) && (lVar7 != 0)) {
              FUN_145e127ec(local_b0,uVar3,lVar6,lVar7);
              iVar12 = *(int *)(local_e8 + 0xf38);
              *(uint *)(local_e8 + 0xf38) = iVar12 + 1U;
              if (*(uint *)(local_e8 + 0xf3c) < iVar12 + 1U) {
                FUN_140372f76(local_f0,iVar12);
              }
              FUN_140372eb8((longlong)iVar12 * 0x68 + *local_f0,local_b0);
              FUN_140372a38(local_b0);
            }
            lVar16 = lVar16 + 0x10;
            lVar15 = lVar15 + -0x10;
            param_1 = local_e8;
          } while (lVar15 != 0);
        }
        FUN_14036924e(0,0);
        goto LAB_145e1249a;
      }
    }
LAB_145e127a4:
    if (local_98 != 0) {
      FUN_1400020a8();
      param_1 = local_e8;
    }
LAB_145e1249a:
    local_b8 = DAT_14cbd0560;
    local_c0 = DAT_14cbd0558;
    FUN_1448075d0(local_b0);
    puVar5 = local_d8;
    plVar13 = (longlong *)FUN_144a06846(local_d8,local_b0);
    if (*plVar13 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_14000584e(*plVar13,0);
    }
    plVar13 = local_e0;
    *(undefined1 *)(param_1 + 0xf28) = uVar2;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    local_b8 = DAT_14cbd0578;
    local_c0 = DAT_14cbd0570;
    FUN_1448075d0(local_b0);
    if ((int)plVar13[2] != *(int *)((longlong)plVar13 + 0x3c)) {
      plVar9 = plVar13 + 8;
      if ((longlong *)plVar13[9] != (longlong *)0x0) {
        plVar9 = (longlong *)plVar13[9];
      }
      iVar12 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar13[10] - 1U & local_b0[0]) * 4);
      if (iVar12 != -1) {
        do {
          if (*(uint *)(*plVar13 + (longlong)iVar12 * 0x40) == local_b0[0]) {
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            local_b8 = DAT_14cbd0578;
            local_c0 = DAT_14cbd0570;
            FUN_1448075d0(local_b0);
            puVar5 = (undefined8 *)FUN_144a06846(puVar5,local_b0);
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            pbVar1 = (byte *)*puVar5;
            if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 2)) {
              lVar16 = param_1 + 0xf48;
              *(undefined4 *)(param_1 + 0xf60) = 0;
              uVar3 = FUN_144a54ea4(lVar16,0x40);
              uVar11 = 0;
              FUN_1447c6044(lVar16,uVar3,0x40,0);
              uVar8 = FUN_140dddb1a(puVar5,0);
              do {
                uVar10 = 1 << ((byte)uVar11 & 0x1f);
                lVar15 = *(longlong *)(param_1 + 0xf58);
                if (*(longlong *)(param_1 + 0xf58) == 0) {
                  lVar15 = lVar16;
                }
                uVar14 = uVar11 >> 5 & 0x7ffffff;
                if ((uVar8 >> (uVar11 & 0x3f) & 1) == 0) {
                  uVar10 = ~uVar10 & *(uint *)(lVar15 + uVar14 * 4);
                }
                else {
                  uVar10 = uVar10 | *(uint *)(lVar15 + uVar14 * 4);
                }
                *(uint *)(lVar15 + uVar14 * 4) = uVar10;
                uVar11 = uVar11 + 1;
              } while (uVar11 != 0x40);
            }
            else {
              lVar16 = (longlong)(int)(*(longlong **)(pbVar1 + 8))[2];
              if (lVar16 != 0) {
                lVar6 = **(longlong **)(pbVar1 + 8);
                lVar15 = param_1 + 0xf48;
                lVar16 = lVar16 << 4;
                iVar12 = 0;
                do {
                  local_b0[0] = FUN_1410451c0(lVar6,0);
                  iVar17 = (iVar12 - *(int *)(param_1 + 0xf60)) + 0x20;
                  if (0 < iVar17) {
                    uVar3 = FUN_144a54ea4(lVar15,iVar17);
                    FUN_1447c6044(lVar15,uVar3,iVar17,0);
                  }
                  lVar7 = *(longlong *)(param_1 + 0xf58);
                  if (*(longlong *)(param_1 + 0xf58) == 0) {
                    lVar7 = lVar15;
                  }
                  local_f8 = 0x20;
                  FUN_14493566c(lVar7,iVar12,local_b0);
                  lVar6 = lVar6 + 0x10;
                  iVar12 = iVar12 + 0x20;
                  lVar16 = lVar16 + -0x10;
                } while (lVar16 != 0);
              }
            }
            goto LAB_145e12662;
          }
          iVar12 = *(int *)((longlong)iVar12 * 0x40 + *plVar13 + 0x38);
        } while (iVar12 != -1);
      }
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
LAB_145e12662:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_145e12795:
  iVar12 = *(int *)((longlong)iVar12 * 0x40 + *plVar13 + 0x38);
  if (iVar12 == -1) goto LAB_145e127a4;
  goto LAB_145e121f7;
}



// FUNCTION 145e127ec FUN_145e127ec body=83 status=ok
// SIG undefined FUN_145e127ec(void)

undefined4 *
FUN_145e127ec(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 4) = param_4;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  FUN_140265f12();
  *(undefined **)(param_1 + 0x10) = &DAT_14cb83310;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined ***)(param_1 + 0xe) = &PTR_FUN_14b1828b0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 145e1284a FUN_145e1284a body=197 status=ok
// SIG undefined FUN_145e1284a(void)

undefined8 * FUN_145e1284a(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a656d40;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0x12;
  *(byte *)((longlong)param_1 + 0xdc) = *(byte *)((longlong)param_1 + 0xdc) & 0xfc;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb460) {
    FUN_144b3d300(&DAT_14caeb460);
    if (DAT_14caeb460 == -1) {
      FUN_1415691d8();
      atexit((_func_5014 *)&LAB_14356e09b);
      _Init_thread_footer(&DAT_14caeb460);
    }
  }
  return param_1;
}



// FUNCTION 145e1291a FUN_145e1291a body=197 status=ok
// SIG undefined FUN_145e1291a(void)

undefined8 * FUN_145e1291a(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a677990;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb310) {
    FUN_144b3d300(&DAT_14caeb310);
    if (DAT_14caeb310 == -1) {
      FUN_14156927e();
      atexit((_func_5014 *)&LAB_14356df83);
      _Init_thread_footer(&DAT_14caeb310);
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0x40000000;
  return param_1;
}



// FUNCTION 145e129e0 FUN_145e129e0 body=36 status=ok
// SIG undefined FUN_145e129e0(void)

void FUN_145e129e0(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x308))();
  FUN_14594f39e(param_1,param_2);
  return;
}



// FUNCTION 145e12a04 FUN_145e12a04 body=221 status=ok
// SIG undefined FUN_145e12a04(void)

void FUN_145e12a04(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_145e12ae2(param_1 + 0x2e8);
  uVar3 = 0;
  FUN_145e12b26(param_1,0);
  if (*(int *)(param_1 + 0x2a0) != *(int *)(param_1 + 0x2cc)) {
    FUN_148b6ed90(param_1 + 0x298);
    FUN_148b6eed4(param_1 + 0x298);
  }
  lVar5 = *(longlong *)(param_1 + 0x288);
  if ((longlong)*(int *)(param_1 + 0x290) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x290) * 0x18;
    do {
      lVar2 = FUN_14479d2ce(lVar5);
      if (lVar2 != 0) {
        FUN_143fd68c6(lVar2,lVar5);
      }
      lVar5 = lVar5 + 0x18;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
    uVar3 = *(undefined4 *)(param_1 + 0x290);
    lVar5 = *(longlong *)(param_1 + 0x288);
  }
  iVar1 = *(int *)(param_1 + 0x294);
  FUN_145cc03de(lVar5,uVar3);
  *(undefined4 *)(param_1 + 0x290) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x294) != 0)) {
    FUN_148b6f00c(param_1 + 0x288);
    return;
  }
  return;
}



// FUNCTION 145e12ae2 FUN_145e12ae2 body=68 status=ok
// SIG undefined FUN_145e12ae2(void)

void FUN_145e12ae2(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_148b6ec4c();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 145e12b26 FUN_145e12b26 body=235 status=ok
// SIG undefined FUN_145e12b26(void)

void FUN_145e12b26(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_145a052b4(param_1 + 0x1c0);
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    switch(*(undefined1 *)(param_1 + 0x188)) {
    case 0:
    case 1:
      plVar3 = *(longlong **)(param_1 + 0x1b8);
      if (plVar3 == (longlong *)0x0) {
        FUN_146977a00();
        return;
      }
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      FUN_146977a00();
      break;
    case 2:
    case 3:
      plVar3 = *(longlong **)(param_1 + 0x1b8);
      if (plVar3 == (longlong *)0x0) {
        FUN_146aa3eec();
        return;
      }
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      FUN_146aa3eec();
      break;
    case 4:
      plVar3 = *(longlong **)(param_1 + 0x1b8);
      if (plVar3 == (longlong *)0x0) {
        FUN_146a90602();
        return;
      }
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      FUN_146a90602();
      break;
    case 5:
      plVar3 = *(longlong **)(param_1 + 0x1b8);
      if (plVar3 == (longlong *)0x0) {
        FUN_145794688();
        return;
      }
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      FUN_145794688();
      break;
    default:
      goto switchD_145e12b67_default;
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
                    /* WARNING: Could not recover jumptable at 0x000145e12bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
switchD_145e12b67_default:
  return;
}



// FUNCTION 145e12c12 FUN_145e12c12 body=205 status=ok
// SIG undefined FUN_145e12c12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e12c12(void)

{
  if ((DAT_14ca6494f & 2) == 0) {
    DAT_14ca6494f = DAT_14ca6494f | 2;
    _DAT_14ca648f0 = L"FGeneratePageFlagsFromPixelsCS";
    _DAT_14ca64908 = FUN_146826540;
    _DAT_14ca64910 = FUN_146825d77;
    _DAT_14ca64918 = FUN_146825fd6;
    _DAT_14ca64920 = FUN_1407e02ea;
    _DAT_14ca64928 = FUN_146826273;
    _DAT_14ca64900 = FUN_14732aebc;
    _DAT_14ca64940 = 0xffffffff000000e0;
    _DAT_14ca64948 = 8;
    DAT_14ca6494c = 0;
    _DAT_14ca64930 = &LAB_14732aee6;
    FUN_145e12ce0();
    FUN_1407e00cc(&DAT_14ca648e8);
    return;
  }
  return;
}



// FUNCTION 145e12ce0 FUN_145e12ce0 body=123 status=ok
// SIG undefined FUN_145e12ce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e12ce0(void)

{
  _DAT_14ca68b40 = L"BASE";
  DAT_14ca68b6a = 4;
  _DAT_14ca68b48 = FUN_140b35ae4();
  _DAT_14ca68b50 = DAT_14ca648f8;
  _DAT_14ca68b58 = &LAB_14682652b;
  DAT_14ca648f8 = &DAT_14ca68b40;
  DAT_14ca6494d = DAT_14ca6494d + '\x01';
  _DAT_14ca68b60 = 0x100000000;
  if (*(char *)(_DAT_14ca68b48 + 100) != '\0') {
    DAT_14ca6494e = DAT_14ca6494e + '\x01';
  }
  return;
}



// FUNCTION 145e12d5c FUN_145e12d5c body=226 status=ok
// SIG undefined FUN_145e12d5c(void)

longlong * FUN_145e12d5c(longlong *param_1)

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
  pcVar13 = FUN_146310cf8;
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



// FUNCTION 145e12e40 FUN_145e12e40 body=138 status=ok
// SIG undefined FUN_145e12e40(void)

code * FUN_145e12e40(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SingleLayerWaterTileMask";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x98000003a7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e12eca;
}



// FUNCTION 145e12eca FUN_145e12eca body=138 status=ok
// SIG undefined FUN_145e12eca(void)

code * FUN_145e12eca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SingleLayerWaterDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000003a6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146310e08;
}



// FUNCTION 145e12f54 FUN_145e12f54 body=140 status=ok
// SIG undefined FUN_145e12f54(void)

undefined1 * FUN_145e12f54(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e12fe0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Base";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FBaseGeneratePageFlagsParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3a3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca675c8;
  return &LAB_14732ef1c;
}



// FUNCTION 145e12fe0 FUN_145e12fe0 body=261 status=ok
// SIG undefined FUN_145e12fe0(void)

void FUN_145e12fe0(void)

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
              0x110) < DAT_14ca67648) {
    FUN_144b3d300(&DAT_14ca67648);
    if (DAT_14ca67648 == -1) {
      FUN_145e130e6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FBaseGeneratePageFlagsParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x37f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca675c8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e5427);
      _Init_thread_footer(&DAT_14ca67648);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e130e6 FUN_145e130e6 body=226 status=ok
// SIG undefined FUN_145e130e6(void)

longlong * FUN_145e130e6(longlong *param_1)

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
  pcVar13 = FUN_146310e98;
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



// FUNCTION 145e131ca FUN_145e131ca body=138 status=ok
// SIG undefined FUN_145e131ca(void)

code * FUN_145e131ca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutPageRequestFlags";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000384;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e132de;
}



// FUNCTION 145e13254 FUN_145e13254 body=138 status=ok
// SIG undefined FUN_145e13254(void)

code * FUN_145e13254(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bCullBackfacingPixels";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6800000389;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732efaa;
}



// FUNCTION 145e132de FUN_145e132de body=144 status=ok
// SIG undefined FUN_145e132de(void)

code * FUN_145e132de(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a12b9e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ForwardLightData";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FForwardLightData";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3000000383;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146311038;
}



// FUNCTION 145e1336e FUN_145e1336e body=327 status=ok
// SIG undefined FUN_145e1336e(void)

longlong FUN_145e1336e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145ad316c(param_2);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined2 *)(param_2 + 0x15) = 0x101;
  *(undefined1 *)(param_2 + 0x11) = 1;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  FUN_14156954a(&local_58,*(undefined4 *)(param_1 + 0x58));
  local_38 = 0;
  local_34 = 0xffffffff;
  FUN_1446f470e(&local_60,L"CUSTOMSEARCHINT1",1);
  FUN_145b2079c(param_2,local_60,&local_58);
  FUN_140c3a2ac(&local_58);
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FUN_144a79464();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (local_68 = *(longlong *)(lVar1 + 0x358), local_68 != 0)) {
      FUN_1400021e4(&local_68,&local_58);
      FUN_1446f470e(&local_70,L"CUSTOMSEARCHINT2",1);
      FUN_145cba9f8(param_2,local_70,&local_58,2);
      if (CONCAT71(uStack_57,local_58) != 0) {
        FUN_1400020a8();
      }
    }
  }
  FUN_145e134b6(param_2,*(undefined4 *)(param_1 + 0x50));
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e134b6 FUN_145e134b6 body=110 status=ok
// SIG undefined FUN_145e134b6(void)

byte FUN_145e134b6(longlong param_1,int param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  if (param_2 == 1) {
    cVar1 = *(char *)(param_1 + 0x17);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x17) = 1;
    }
    cVar2 = *(char *)(param_1 + 0x18);
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    bVar3 = cVar1 == '\0' || cVar2 == '\0';
  }
  else {
    if (param_2 == 0) {
      cVar1 = *(char *)(param_1 + 0x17);
      if (cVar1 == '\0') {
        *(undefined1 *)(param_1 + 0x17) = 1;
      }
      bVar4 = *(byte *)(param_1 + 0x18);
      if (bVar4 != 0) {
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      bVar3 = cVar1 == '\0';
    }
    else {
      if (param_2 != 2) {
        return 0;
      }
      bVar4 = *(byte *)(param_1 + 0x17);
      if (bVar4 != 0) {
        *(undefined1 *)(param_1 + 0x17) = 0;
      }
      bVar3 = *(byte *)(param_1 + 0x18);
      if (bVar3 != 0) {
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
    }
    bVar3 = bVar3 | bVar4;
  }
  return bVar3;
}



// FUNCTION 145e13524 FUN_145e13524 body=207 status=ok
// SIG undefined FUN_145e13524(void)

void FUN_145e13524(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145e135f4();
  lVar1 = FUN_1400b465c(param_1);
  if (lVar1 != 0) {
    lVar2 = FUN_144a79464();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_145e13816(lVar1 + 0x2a8,&local_20,param_1);
    }
  }
  FUN_145e13636(&local_20,param_1);
  *(undefined8 *)(param_1 + 0x30) = local_20;
  FUN_145e13726(&local_20,param_1);
  *(undefined8 *)(param_1 + 0x38) = local_20;
  lVar1 = FUN_144a2383e();
  if (lVar1 != 0) {
    FUN_145e1390c(lVar1 + 0x598,&local_20,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e135f4 FUN_145e135f4 body=65 status=ok
// SIG undefined FUN_145e135f4(void)

void FUN_145e135f4(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = DAT_14cb70a28;
  if (DAT_14cb70a28 == 0) {
    lVar2 = FUN_145a54b78();
    lVar1 = *(longlong *)(lVar2 + 0x110);
    if (*(longlong *)(lVar2 + 0x110) == 0) {
      FUN_140aa6c08(lVar2);
      lVar1 = *(longlong *)(lVar2 + 0x110);
    }
  }
  DAT_14cb70a28 = lVar1;
  return;
}



// FUNCTION 145e13636 FUN_145e13636 body=239 status=ok
// SIG undefined FUN_145e13636(void)

undefined8 FUN_145e13636(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a90a240;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b3e5bc0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = &LAB_1487b0c1c;
  FUN_1406baa38(&DAT_14cb10920,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e13726 FUN_145e13726 body=239 status=ok
// SIG undefined FUN_145e13726(void)

undefined8 FUN_145e13726(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a1ca5b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b3e5c30;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = &LAB_145ac9042;
  FUN_14123f6f0(&DAT_14cb10980,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e13816 FUN_145e13816 body=244 status=ok
// SIG undefined FUN_145e13816(void)

undefined8 FUN_145e13816(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b3e62a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b3e5b50;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_1459366b2;
  FUN_141285884(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e1390c FUN_145e1390c body=244 status=ok
// SIG undefined FUN_145e1390c(void)

undefined8 FUN_145e1390c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b3e5d10;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b3e5ca0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_145ad9934;
  FUN_145e13a02(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e13a02 FUN_145e13a02 body=216 status=ok
// SIG undefined FUN_145e13a02(void)

undefined8 * FUN_145e13a02(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145e13ae8 FUN_145e13ae8 body=24 status=ok
// SIG undefined FUN_145e13ae8(void)

bool FUN_145e13ae8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145e13b0c FUN_145e13b0c body=879 status=ok
// SIG undefined FUN_145e13b0c(void)

undefined8 * FUN_145e13b0c(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 **local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400ead26();
  param_1[0x55] = &PTR_LAB_14a83a1d0;
  FUN_145e13e7c(param_1 + 0x56);
  *param_1 = &PTR_FUN_14a826a60;
  param_1[5] = &PTR_FUN_14a827070;
  param_1[6] = &PTR_LAB_14a8270b0;
  param_1[0x55] = &PTR_FUN_14a827100;
  param_1[0x56] = &PTR_FUN_14a8271c0;
  param_1[0x57] = &PTR_FUN_14a8271e8;
  param_1[0x58] = &PTR_FUN_14a8271f8;
  param_1[0x59] = &PTR_FUN_14a827208;
  uVar2 = 0;
  param_1[0x93] = 0;
  param_1[0x99] = 0;
  param_1[0x9c] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  FUN_1458d791c(param_1 + 0x9d);
  param_1[0x11c] = 0;
  *(undefined4 *)(param_1 + 0x11d) = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8f4) = 0;
  param_1[0x120] = 0;
  *(undefined4 *)(param_1 + 0x121) = 0;
  FUN_1458d7830(param_1 + 0x124);
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  *(undefined4 *)(param_1 + 0x155) = 2;
  *(undefined8 *)((longlong)param_1 + 0xaac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xab4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xabc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xacc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xad4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xadc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xae4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xaec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xaf4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xafc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb04) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb1c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xb24) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb34) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb44) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0xb6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb64) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb54) = 0;
  *(undefined4 *)(param_1 + 0x16e) = 2;
  *(undefined4 *)(param_1 + 0x176) = 0;
  param_1[0x185] = 0;
  *(undefined4 *)(param_1 + 0x186) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb74) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb84) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb94) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xba4) = 0;
  param_1[0x181] = 0;
  param_1[0x182] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc3c) = 0;
  param_1[0x189] = 0;
  *(undefined4 *)(param_1 + 0x18a) = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  *(undefined1 *)(param_1 + 0x18d) = 0;
  param_1[0x18e] = 0;
  param_1[399] = 0;
  param_1[400] = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) | 0x20;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 0xd;
  *(byte *)((longlong)param_1 + 0x1fa) = *(byte *)((longlong)param_1 + 0x1fa) | 8;
  *(undefined4 *)(param_1 + 0x96) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x492) = *(byte *)((longlong)param_1 + 0x492) & 0x67;
  *(undefined8 *)((longlong)param_1 + 0x4bc) = 0x461c40003f800000;
  *(undefined4 *)(param_1 + 0x9a) = 0x3f800000;
  param_1[0x95] = &DAT_3f8000003f800000;
  param_1[0x94] = &DAT_3f8000003f800000;
  *(byte *)(param_1 + 0x92) = *(byte *)(param_1 + 0x92) & 0x54 | 10;
  *(byte *)((longlong)param_1 + 0x491) = *(byte *)((longlong)param_1 + 0x491) & 0xe4;
  *(undefined8 *)((longlong)param_1 + 0x4d4) = 0x41a00000469c4000;
  *(undefined4 *)(param_1 + 0x122) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4b4) = 0x640000000a;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0xffffffff;
  LOCK();
  UNLOCK();
  lVar1 = DAT_14cad04f8 + 1;
  local_48 = param_1 + 0x175;
  DAT_14cad04f8 = DAT_14cad04f8 + 1;
  param_1[0x175] = lVar1;
  if (DAT_14c846538 == '\x01') {
    uVar2 = param_1[3];
  }
  FUN_140e70c9e(param_1 + 0x192,uVar2);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad0550);
  local_40 = &local_50;
  local_50 = param_1;
  FUN_145e13ef4(local_34);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad0550);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e13e7c FUN_145e13e7c body=119 status=ok
// SIG undefined FUN_145e13e7c(void)

undefined8 * FUN_145e13e7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a77d6b0;
  param_1[1] = &PTR_FUN_14a77d6d8;
  param_1[2] = &PTR_FUN_14a77d6e8;
  param_1[3] = &PTR_FUN_14a77d6f8;
  memset(param_1 + 4,0,0x148);
  *(undefined1 *)(param_1 + 0x2d) = 1;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  return param_1;
}



// FUNCTION 145e13ef4 FUN_145e13ef4 body=319 status=ok
// SIG undefined FUN_145e13ef4(void)

undefined4 * FUN_145e13ef4(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145e140c6(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar5 = FUN_145e14034(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cad0508 - DAT_14cad0534;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cad0548)) {
      uVar10 = DAT_14cad0548 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cad0540;
      if (DAT_14cad0540 == (undefined *)0x0) {
        puVar7 = &DAT_14cad0538;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cad0548 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cad0540;
      if (DAT_14cad0540 == (undefined *)0x0) {
        puVar7 = &DAT_14cad0538;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cad0548 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cad0548 = iVar9;
      FUN_145e141d4();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e14034 FUN_145e14034 body=145 status=ok
// SIG undefined FUN_145e14034(void)

undefined8 FUN_145e14034(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cad0508 - DAT_14cad0534 != 1) && (DAT_14cad0508 != DAT_14cad0534)) {
    puVar6 = &DAT_14cad0538;
    if (DAT_14cad0540 != (undefined *)0x0) {
      puVar6 = DAT_14cad0540;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cad0548 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cad0500 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145bf6ffe(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145e140c6 FUN_145e140c6 body=270 status=ok
// SIG undefined FUN_145e140c6(void)

int * FUN_145e140c6(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cad0530;
  iVar3 = DAT_14cad0508;
  if (DAT_14cad0534 == 0) {
    iVar2 = DAT_14cad0508 + 1;
    bVar7 = DAT_14cad050c == DAT_14cad0508;
    DAT_14cad0508 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cad0500,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cad0510,1);
    puVar4 = DAT_14cad0520;
    if (DAT_14cad0520 == (undefined *)0x0) {
      puVar4 = &DAT_14cad0510;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cad0530;
    DAT_14cad0530 = *(int *)(DAT_14cad0500 + 4 + lVar6 * 0x18);
    DAT_14cad0534 = DAT_14cad0534 + -1;
    if (DAT_14cad0534 != 0) {
      *(undefined4 *)(DAT_14cad0500 + (longlong)DAT_14cad0530 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cad0510;
  if (DAT_14cad0520 != (undefined *)0x0) {
    puVar4 = DAT_14cad0520;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cad0500;
  return param_1;
}



// FUNCTION 145e141d4 FUN_145e141d4 body=497 status=ok
// SIG undefined FUN_145e141d4(void)

void FUN_145e141d4(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
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
  if (DAT_14cad0540 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cad0540,0,0,4);
  }
  uVar3 = DAT_14cad0548;
  uVar2 = local_50;
  if (DAT_14cad0548 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cad0538,0,DAT_14cad0548,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cad0540;
        if (DAT_14cad0540 == (undefined *)0x0) {
          puVar6 = &DAT_14cad0538;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cad0548 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cad0510;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cad0528 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cad0500;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar9 = (longlong)((int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2) &
                (longlong)(int)DAT_14cad0548 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cad0540;
        if (DAT_14cad0540 == (undefined *)0x0) {
          puVar6 = &DAT_14cad0538;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cad0548 - 1U & uVar9) * 4);
        puVar6 = DAT_14cad0540;
        if (DAT_14cad0540 == (undefined *)0x0) {
          puVar6 = &DAT_14cad0538;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cad0548 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e143c6 FUN_145e143c6 body=95 status=ok
// SIG undefined FUN_145e143c6(void)

void FUN_145e143c6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ab44de0;
  FUN_145e14426(param_1 + 0xc);
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
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e14426 FUN_145e14426 body=92 status=ok
// SIG undefined FUN_145e14426(void)

void FUN_145e14426(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x40);
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
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e1448e FUN_145e1448e body=175 status=ok
// SIG undefined FUN_145e1448e(void)

undefined8 * FUN_145e1448e(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14130c032();
  *param_1 = &PTR_FUN_14abf16b0;
  param_1[5] = &PTR_LAB_14abf19e0;
  FUN_1400b22c2(&local_28,"Reached move goal");
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
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xf8;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e1454a FUN_145e1454a body=175 status=ok
// SIG undefined FUN_145e1454a(void)

undefined8 * FUN_145e1454a(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1413f708e();
  *param_1 = &PTR_FUN_14abf90a0;
  param_1[5] = &PTR_FUN_14abf93c0;
  param_1[0xe] = 0;
  FUN_1400b22c2(&local_28,"Run Behavior");
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e14606 FUN_145e14606 body=176 status=ok
// SIG undefined FUN_145e14606(void)

undefined8 * FUN_145e14606(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14add78a0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined4 *)((longlong)param_1 + 0x69) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6d) = 0;
  *(undefined4 *)(param_1 + 0xe) = 100;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14addc6a0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
  *(undefined4 *)(puVar2 + 8) = 0xffffffff;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar2) && (param_1[5] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 145e146b6 FUN_145e146b6 body=40 status=ok
// SIG undefined FUN_145e146b6(void)

undefined8 FUN_145e146b6(undefined8 param_1,int param_2)

{
  FUN_145e146de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e146de FUN_145e146de body=147 status=ok
// SIG undefined FUN_145e146de(void)

void FUN_145e146de(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aec8430;
  param_1[5] = &PTR_FUN_14aec86d0;
  if (param_1[0x16] != 0) {
    plVar1 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0xe] != 0) {
    plVar1 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145e14772 FUN_145e14772 body=40 status=ok
// SIG undefined FUN_145e14772(void)

undefined8 FUN_145e14772(undefined8 param_1,int param_2)

{
  FUN_145e1479a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e1479a FUN_145e1479a body=147 status=ok
// SIG undefined FUN_145e1479a(void)

void FUN_145e1479a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6c2c10;
  param_1[5] = &PTR_FUN_14b6c2f10;
  param_1[6] = &PTR_FUN_14b6c2f40;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_145aa5a03(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14042c3da(param_1);
  return;
}



// FUNCTION 145e1482e FUN_145e1482e body=132 status=ok
// SIG undefined FUN_145e1482e(void)

void FUN_145e1482e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e148b2();
  if (*(longlong *)(param_1 + 0x398) != 0) {
    lVar2 = FUN_144a7b4ca();
    lVar3 = *(longlong *)(param_1 + 0x398);
    if ((((lVar3 != 0) && (lVar2 != 0)) && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) &&
       ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)))) {
      FUN_140b9fa66(lVar3,0);
    }
  }
  lVar3 = FUN_144a7ba4c(param_1);
  if (lVar3 != 0) {
    lVar3 = FUN_1403ca91c(lVar3);
    if (lVar3 != 0) {
      FUN_14596363e(lVar3);
      return;
    }
  }
  return;
}



// FUNCTION 145e148b2 FUN_145e148b2 body=26 status=ok
// SIG undefined FUN_145e148b2(void)

void FUN_145e148b2(undefined8 param_1)

{
  FUN_145e148cc();
  FUN_145bd04ee(param_1);
  return;
}



// FUNCTION 145e148cc FUN_145e148cc body=29 status=ok
// SIG undefined FUN_145e148cc(void)

void FUN_145e148cc(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x398);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145e148e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x668))(plVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 145e148f2 FUN_145e148f2 body=179 status=ok
// SIG undefined FUN_145e148f2(void)

undefined8 * FUN_145e148f2(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bc15a40;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x10000ea60;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  if ((*(uint *)(param_1 + 1) & 0x30) == 0) {
    lVar1 = FUN_145b146ec();
    lVar2 = *(longlong *)(lVar1 + 0x110);
    if (lVar2 == 0) {
      FUN_140aa6c08(lVar1);
      lVar2 = *(longlong *)(lVar1 + 0x110);
    }
    *(undefined1 *)((longlong)param_1 + 0x69) = *(undefined1 *)(lVar2 + 0x28);
    lVar1 = FUN_145b146ec();
    lVar2 = *(longlong *)(lVar1 + 0x110);
    if (lVar2 == 0) {
      FUN_140aa6c08(lVar1);
      lVar2 = *(longlong *)(lVar1 + 0x110);
    }
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(lVar2 + 0x29);
  }
  return param_1;
}


