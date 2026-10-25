// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145d3026a FUN_145d3026a body=216 status=ok
// SIG undefined FUN_145d3026a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d3026a(void)

{
  _DAT_14caf5348 = L"CurveTextureSampler";
  DAT_14caf5372 = FUN_140850cc5();
  _DAT_14caf5350 = FUN_140fb78d0();
  _DAT_14caf5360 = &LAB_14682652b;
  _DAT_14caf5368 = &DAT_100000030;
  _DAT_14caf5370 = 0;
  _DAT_14caf5358 = DAT_14caf3f30;
  DAT_14caf3f30 = &DAT_14caf5348;
  _DAT_14caf5318 = L"CurveTexture";
  DAT_14caf5342 = FUN_140850cc5();
  _DAT_14caf5320 = FUN_140fb78d0();
  _DAT_14caf5330 = &LAB_14682652b;
  _DAT_14caf5338 = &DAT_10000002c;
  _DAT_14caf5340 = 0;
  _DAT_14caf5328 = DAT_14caf3f30;
  DAT_14caf3f30 = &DAT_14caf5318;
  return;
}



// FUNCTION 145d30342 FUN_145d30342 body=40 status=ok
// SIG undefined FUN_145d30342(void)

undefined8 FUN_145d30342(undefined8 param_1,int param_2)

{
  FUN_145d3036a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d3036a FUN_145d3036a body=298 status=ok
// SIG undefined FUN_145d3036a(void)

void FUN_145d3036a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb58330;
  param_1[5] = &PTR_FUN_14bb587b0;
  param_1[0x4f] = &PTR_FUN_14bb587f0;
  param_1[0x50] = &PTR_FUN_14bb58810;
  *(undefined4 *)(param_1 + 0x18d) = 0;
  if (param_1[0x18c] != 0) {
    FUN_1400020a8();
  }
  FUN_145d304ec(param_1 + 0x184);
  *(undefined4 *)(param_1 + 0x183) = 0;
  if (param_1[0x182] != 0) {
    FUN_1400020a8();
  }
  FUN_145d30522(param_1 + 0x17a);
  FUN_145d304bf(param_1[0x177],*(undefined4 *)(param_1 + 0x178));
  if (param_1[0x177] != 0) {
    FUN_1400020a8();
  }
  FUN_145d30558(param_1 + 0x161);
  if (param_1[0x15e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15c] != 0) {
    FUN_1400020a8();
  }
  FUN_145d30494(param_1[0x15a],*(undefined4 *)(param_1 + 0x15b));
  if (param_1[0x15a] != 0) {
    FUN_1400020a8();
  }
  FUN_1456e3f36(param_1);
  return;
}



// FUNCTION 145d30494 FUN_145d30494 body=43 status=ok
// SIG undefined FUN_145d30494(void)

void FUN_145d30494(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_149190e08(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 145d304bf FUN_145d304bf body=45 status=ok
// SIG undefined FUN_145d304bf(void)

void FUN_145d304bf(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 145d304ec FUN_145d304ec body=53 status=ok
// SIG undefined FUN_145d304ec(void)

void FUN_145d304ec(longlong *param_1)

{
  FUN_145d307e0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d30522 FUN_145d30522 body=53 status=ok
// SIG undefined FUN_145d30522(void)

void FUN_145d30522(longlong *param_1)

{
  FUN_145d30686();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d30558 FUN_145d30558 body=133 status=ok
// SIG undefined FUN_145d30558(void)

void FUN_145d30558(longlong *param_1)

{
  FUN_1447a1747(param_1[0x14],(int)param_1[0x15]);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145d30608(param_1 + 6);
  FUN_145d305dd(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_145d305dd(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d305dd FUN_145d305dd body=43 status=ok
// SIG undefined FUN_145d305dd(void)

void FUN_145d305dd(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1491912a0(param_1);
    param_1 = param_1 + 0x170;
  }
  return;
}



// FUNCTION 145d30608 FUN_145d30608 body=70 status=ok
// SIG undefined FUN_145d30608(void)

void FUN_145d30608(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145d3064e(param_1 + 2);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d3064e FUN_145d3064e body=55 status=ok
// SIG undefined FUN_145d3064e(void)

void FUN_145d3064e(longlong *param_1)

{
  FUN_145d30954(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d30686 FUN_145d30686 body=345 status=ok
// SIG undefined FUN_145d30686(void)

void FUN_145d30686(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
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



// FUNCTION 145d307e0 FUN_145d307e0 body=371 status=ok
// SIG undefined FUN_145d307e0(void)

void FUN_145d307e0(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c;
      if (*(longlong *)(lVar2 + 0x20 + lVar3 * 0x38) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x38 + 0x10) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d30954 FUN_145d30954 body=384 status=ok
// SIG undefined FUN_145d30954(void)

void FUN_145d30954(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 0x10 + (longlong)iStack_54 * 0x28) != 0) {
        FUN_1400020a8();
      }
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
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 145d30ad6 FUN_145d30ad6 body=76 status=ok
// SIG undefined FUN_145d30ad6(void)

void FUN_145d30ad6(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145d30b23(&local_20,param_1);
  *(undefined8 *)(param_1 + 8) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d30b23 FUN_145d30b23 body=216 status=ok
// SIG undefined FUN_145d30b23(void)

undefined8 * FUN_145d30b23(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_28,L"WINDOWS",1);
  plVar2 = (longlong *)FUN_145d30bfc();
  local_38 = 0;
  uStack_30 = 0;
  cVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  if (cVar1 == '\0') {
    if (DAT_14c990938 != (longlong *)0x0) {
      (**(code **)(*DAT_14c990938 + 0x10))();
      if (DAT_14c990938 != (longlong *)0x0) {
        (**(code **)*DAT_14c990938)(DAT_14c990938,1);
      }
      DAT_14c990938 = (longlong *)0x0;
    }
    local_28 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x50))(param_2,local_28,plVar2,0);
  }
  *param_1 = local_28;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d30bfc FUN_145d30bfc body=145 status=ok
// SIG undefined FUN_145d30bfc(void)

undefined8 * FUN_145d30bfc(void)

{
  undefined8 *puVar1;
  
  if (DAT_14c990938 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x88,0x10);
    *puVar1 = &PTR_LAB_149f218e0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 1));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 1),4000);
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *puVar1 = &PTR_FUN_149f221c0;
    *(undefined1 *)(puVar1 + 0x10) = 0;
    DAT_14c990938 = puVar1;
  }
  return DAT_14c990938;
}



// FUNCTION 145d30c8e FUN_145d30c8e body=235 status=ok
// SIG undefined FUN_145d30c8e(void)

void FUN_145d30c8e(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  undefined8 *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_3;
  local_38 = param_2;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar3 = (uint)param_2 & 0xffff;
    lVar2 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x50);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar3) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar4 * 0x18) == param_2) goto LAB_145d30d4f;
        iVar4 = *(int *)(lVar2 + (longlong)iVar4 * 0x18 + 0x10);
      } while (iVar4 != -1);
    }
  }
  local_30 = &local_38;
  local_28 = &local_40;
  FUN_145d30d7a((longlong *)(param_1 + 0x10),local_1c);
LAB_145d30d4f:
  if (param_4 != '\0') {
    *(longlong *)(param_1 + 8) = local_38;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d30d7a FUN_145d30d7a body=332 status=ok
// SIG undefined FUN_145d30d7a(void)

undefined4 * FUN_145d30d7a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145d30f4a(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_145d30ec8(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145d31032(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d30ec8 FUN_145d30ec8 body=130 status=ok
// SIG undefined FUN_145d30ec8(void)

undefined8 FUN_145d30ec8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_145c0f5b4((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145d30f4a FUN_145d30f4a body=231 status=ok
// SIG undefined FUN_145d30f4a(void)

int * FUN_145d30f4a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 145d31032 FUN_145d31032 body=482 status=ok
// SIG undefined FUN_145d31032(void)

void FUN_145d31032(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d31216 FUN_145d31216 body=21 status=ok
// SIG undefined FUN_145d31216(void)

undefined8 FUN_145d31216(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145d3122c FUN_145d3122c body=128 status=ok
// SIG undefined FUN_145d3122c(void)

void FUN_145d3122c(longlong param_1)

{
  FUN_140457ffc(&DAT_14c8673d8,param_1);
  FUN_145bd8744(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_146a4732c(param_1 + 0x18);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  FUN_145bd877c(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_146a4735c(param_1 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x000145d3128c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return;
}



// FUNCTION 145d312ac FUN_145d312ac body=40 status=ok
// SIG undefined FUN_145d312ac(void)

undefined8 FUN_145d312ac(undefined8 param_1,int param_2)

{
  FUN_1415397a4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d312d4 FUN_145d312d4 body=29 status=ok
// SIG undefined FUN_145d312d4(void)

undefined8 FUN_145d312d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d312f2 FUN_145d312f2 body=58 status=ok
// SIG undefined FUN_145d312f2(void)

void FUN_145d312f2(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_147062a3a(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145d31334 FUN_145d31334 body=141 status=ok
// SIG undefined FUN_145d31334(void)

undefined8 * FUN_145d31334(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144805d84(param_1,uVar1);
  *param_1 = &PTR_FUN_14a3f8250;
  param_1[5] = &PTR_FUN_14a3f86e0;
  param_1[6] = &PTR_LAB_14a3f8720;
  param_1[0x22] = 0x3f800000;
  param_1[0x23] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x2b) = 1;
  return param_1;
}



// FUNCTION 145d313cc FUN_145d313cc body=122 status=ok
// SIG undefined FUN_145d313cc(void)

undefined8 * FUN_145d313cc(undefined8 *param_1)

{
  FUN_145891bee();
  *param_1 = &PTR_FUN_14a6a6450;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeab90) {
    FUN_144b3d300(&DAT_14caeab90);
    if (DAT_14caeab90 == -1) {
      FUN_1415398e4();
      atexit((_func_5014 *)&LAB_14356d64a);
      _Init_thread_footer(&DAT_14caeab90);
    }
  }
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) | 1;
  return param_1;
}



// FUNCTION 145d31446 FUN_145d31446 body=26 status=ok
// SIG undefined FUN_145d31446(void)

void FUN_145d31446(undefined8 param_1)

{
  FUN_140872622();
  FUN_145d31460(param_1);
  return;
}



// FUNCTION 145d31460 FUN_145d31460 body=123 status=ok
// SIG undefined FUN_145d31460(void)

void FUN_145d31460(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x3d0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x3c8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x420))(plVar3,0);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  if (*(int *)(param_1 + 0x3d4) < 0) {
    FUN_1481d801c(param_1 + 0x3c8);
  }
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  return;
}



// FUNCTION 145d314dc FUN_145d314dc body=141 status=ok
// SIG undefined FUN_145d314dc(void)

undefined8 * FUN_145d314dc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b081f40;
  param_1[5] = &PTR_LAB_14b082940;
  param_1[6] = &PTR_LAB_14b082980;
  param_1[0x55] = &PTR_LAB_14b0829d0;
  param_1[0x56] = &PTR_LAB_14b082a50;
  param_1[0x57] = &PTR_LAB_14b082a60;
  FUN_145d3156a(param_1 + 0xd0);
  FUN_14125d002(param_1 + 0xc4);
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d3156a FUN_145d3156a body=108 status=ok
// SIG undefined FUN_145d3156a(void)

void FUN_145d3156a(longlong *param_1)

{
  FUN_145d315d6(param_1[8],(int)param_1[9]);
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
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d315d6 FUN_145d315d6 body=49 status=ok
// SIG undefined FUN_145d315d6(void)

void FUN_145d315d6(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145d31608 FUN_145d31608 body=40 status=ok
// SIG undefined FUN_145d31608(void)

undefined8 FUN_145d31608(undefined8 param_1,int param_2)

{
  FUN_145d31630();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d31630 FUN_145d31630 body=109 status=ok
// SIG undefined FUN_145d31630(void)

void FUN_145d31630(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2175a0;
  param_1[0x1f] = &PTR_FUN_14b217910;
  param_1[0x20] = &PTR_FUN_14b217940;
  FUN_144a2da94(param_1 + 0x2a);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_1404db908(param_1);
  return;
}



// FUNCTION 145d3169e FUN_145d3169e body=40 status=ok
// SIG undefined FUN_145d3169e(void)

undefined8 FUN_145d3169e(undefined8 param_1,int param_2)

{
  FUN_145d316c6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d316c6 FUN_145d316c6 body=109 status=ok
// SIG undefined FUN_145d316c6(void)

void FUN_145d316c6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4691b0;
  FUN_140cc83f7(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140cc83f7(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140861e20(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d31734 FUN_145d31734 body=38 status=ok
// SIG undefined FUN_145d31734(void)

undefined8 FUN_145d31734(undefined8 param_1,int param_2)

{
  FUN_145d3175a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d3175a FUN_145d3175a body=111 status=ok
// SIG undefined FUN_145d3175a(void)

void FUN_145d3175a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b477c40;
  plVar3 = (longlong *)param_1[4];
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
                    /* WARNING: Could not recover jumptable at 0x000145d317c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d317ca FUN_145d317ca body=9 status=ok
// SIG undefined FUN_145d317ca(void)

void FUN_145d317ca(longlong param_1)

{
  FUN_145d317d4(param_1 + 0x10);
  return;
}



// FUNCTION 145d317d4 FUN_145d317d4 body=438 status=ok
// SIG undefined FUN_145d317d4(void)

void FUN_145d317d4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  param_1[0x6c] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x80];
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
  param_1[0x56] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x6a];
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
  if (param_1[0x54] != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    param_1[0x54] = 0;
  }
  if (param_1[0x53] != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    param_1[0x53] = 0;
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
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 145d3198a FUN_145d3198a body=40 status=ok
// SIG undefined FUN_145d3198a(void)

undefined8 FUN_145d3198a(undefined8 param_1,int param_2)

{
  FUN_145d319b2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d319b2 FUN_145d319b2 body=109 status=ok
// SIG undefined FUN_145d319b2(void)

void FUN_145d319b2(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14bca4900;
  param_1[7] = &PTR_FUN_14bca4bf0;
  param_1[8] = &PTR_FUN_14bca4c30;
  param_1[9] = &PTR_FUN_14bca4c50;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    FUN_1493b9574(lVar1);
    FUN_1400020a8(lVar1);
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d31a2a FUN_145d31a2a body=138 status=ok
// SIG undefined FUN_145d31a2a(void)

undefined8 * FUN_145d31a2a(undefined8 *param_1)

{
  FUN_1410ab700();
  *param_1 = &PTR_FUN_14bce5ca0;
  param_1[5] = &PTR_FUN_14bce5f50;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xff00ff00;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 145d31ab4 FUN_145d31ab4 body=40 status=ok
// SIG undefined FUN_145d31ab4(void)

undefined8 FUN_145d31ab4(undefined8 param_1,int param_2)

{
  FUN_145d31adc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d31adc FUN_145d31adc body=109 status=ok
// SIG undefined FUN_145d31adc(void)

void FUN_145d31adc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd01660;
  param_1[0x10] = &PTR_FUN_14bd01910;
  plVar3 = (longlong *)param_1[0x14];
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
  *param_1 = &PTR_FUN_14bd00f80;
  FUN_14121c54c(param_1 + 7);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d31b4a FUN_145d31b4a body=40 status=ok
// SIG undefined FUN_145d31b4a(void)

undefined8 FUN_145d31b4a(undefined8 param_1,int param_2)

{
  FUN_145d31b72();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d31b72 FUN_145d31b72 body=109 status=ok
// SIG undefined FUN_145d31b72(void)

void FUN_145d31b72(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd019f0;
  param_1[0x10] = &PTR_FUN_14bd01ca0;
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
  *param_1 = &PTR_FUN_14bd00f80;
  FUN_14121c54c(param_1 + 7);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d31be4 FUN_145d31be4 body=144 status=ok
// SIG undefined FUN_145d31be4(void)

void FUN_145d31be4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd71d50;
  *(undefined4 *)(puVar1 + 0x15) = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0x100;
  *(undefined4 *)(puVar1 + 0x19) = 1;
  puVar1[0x21] = 0;
  *(undefined4 *)(puVar1 + 0x22) = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x11c) = 0;
  puVar1[0x25] = 0;
  *(undefined4 *)(puVar1 + 0x26) = 0;
  return;
}



// FUNCTION 145d31c7a FUN_145d31c7a body=144 status=ok
// SIG undefined FUN_145d31c7a(void)

void FUN_145d31c7a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd76b10;
  *(undefined4 *)(puVar1 + 0x15) = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0x100;
  *(undefined4 *)(puVar1 + 0x19) = 1;
  puVar1[0x21] = 0;
  *(undefined4 *)(puVar1 + 0x22) = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x11c) = 0;
  puVar1[0x25] = 0;
  *(undefined4 *)(puVar1 + 0x26) = 0;
  return;
}



// FUNCTION 145d31d0a FUN_145d31d0a body=26 status=ok
// SIG undefined FUN_145d31d0a(void)

undefined8 FUN_145d31d0a(longlong param_1,undefined8 param_2)

{
  FUN_145d31d24(param_1 + 0x18);
  return param_2;
}



// FUNCTION 145d31d24 FUN_145d31d24 body=422 status=ok
// SIG undefined FUN_145d31d24(void)

longlong * FUN_145d31d24(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cbc1a20 != (longlong *)0x0 && DAT_14cbc1a28 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cbc1a20 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cbc1a20;
    if (DAT_14cbc1a28 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    goto LAB_145d31df5;
  }
  lVar3 = FUN_14001cc68(0x70,0x10);
  FUN_145d31ecc(lVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b959e90;
  plVar4[2] = lVar3;
  local_30 = plVar4;
  if (lVar3 == 0) {
    local_38 = 0;
    goto LAB_145d31df5;
  }
  local_38 = lVar3;
  if (((*(longlong *)(lVar3 + 0x10) != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar3 + 0x18) + 8))) goto LAB_145d31df5;
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 0x10) = lVar3;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    if (plVar5 != (longlong *)0x0) {
LAB_145d31e70:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(lVar3 + 0x18) = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_145d31deb;
    }
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong *)(lVar3 + 0x10) = lVar3;
    if (*(longlong **)(lVar3 + 0x18) != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(lVar3 + 0x18);
      if (plVar5 != (longlong *)0x0) goto LAB_145d31e70;
      *(longlong **)(lVar3 + 0x18) = plVar4;
    }
LAB_145d31deb:
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
LAB_145d31df5:
  *param_2 = local_38;
  param_2[1] = (longlong)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145d31ecc FUN_145d31ecc body=73 status=ok
// SIG undefined FUN_145d31ecc(void)

void FUN_145d31ecc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b9e0e90;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 2;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  return;
}



// FUNCTION 145d31f16 FUN_145d31f16 body=340 status=ok
// SIG undefined FUN_145d31f16(void)

void FUN_145d31f16(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar2 = local_2c;
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
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145d3206c(param_1,iVar2 != 0,iVar1 != 0,local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3206c FUN_145d3206c body=553 status=ok
// SIG undefined FUN_145d3206c(void)

void FUN_145d3206c(longlong param_1,undefined8 param_2,char param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == '\0') goto LAB_145d321e1;
  lVar5 = FUN_1400d7050(param_1 + 0x30);
  if (lVar5 == 0) {
LAB_145d32206:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_144a5dd5e();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_145d32206;
  }
  if (param_4 == 0) {
LAB_145d3220d:
    lVar8 = 0;
  }
  else {
    lVar6 = FUN_144a2f878();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (lVar8 = param_4,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
       != lVar6 + 0x30)) goto LAB_145d3220d;
  }
  if (lVar5 != 0) {
    FUN_1403ca8ec(lVar5 + 0xd98,&DAT_14cbd95d8);
  }
  FUN_1449027d0(param_1,&local_48);
  pcVar3 = *(char **)(local_48 + 0x100);
  AcquireSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x58));
  *(int *)(pcVar3 + 0x50) = *(int *)(pcVar3 + 0x50) + 1;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if (pcVar3[0x10] == '\0') {
    iVar4 = *(int *)(pcVar3 + 0x14) + 1;
LAB_145d32173:
    pcVar3[0x10] = '\x01';
    *(int *)(pcVar3 + 0x14) = iVar4;
  }
  else if (*(int *)(pcVar3 + 0x14) == 0) {
    iVar4 = 1;
    goto LAB_145d32173;
  }
  if ((lVar8 == 0) || ((*(byte *)(lVar8 + 0x73e9) & 1) == 0)) {
    pcVar7 = pcVar3 + 0x18;
    if (pcVar3[0x18] == '\0') {
      iVar4 = *(int *)(pcVar3 + 0x1c) + 1;
LAB_145d321a5:
      lVar5 = 0x1c;
      goto LAB_145d321aa;
    }
    if (*(int *)(pcVar3 + 0x1c) == 0) {
      iVar4 = 1;
      goto LAB_145d321a5;
    }
  }
  else {
    pcVar7 = pcVar3 + 0x20;
    if (pcVar3[0x20] == '\0') {
      iVar4 = *(int *)(pcVar3 + 0x24) + 1;
    }
    else {
      if (*(int *)(pcVar3 + 0x24) != 0) goto LAB_145d321b1;
      iVar4 = 1;
    }
    lVar5 = 0x24;
LAB_145d321aa:
    *pcVar7 = '\x01';
    *(int *)(pcVar3 + lVar5) = iVar4;
  }
LAB_145d321b1:
  FUN_14485c47a(param_1 + 0x54,param_4);
  if (*pcVar3 == '\0') {
    iVar4 = *(int *)(pcVar3 + 4) + 1;
LAB_145d321d0:
    *pcVar3 = '\x01';
    *(int *)(pcVar3 + 4) = iVar4;
  }
  else if (*(int *)(pcVar3 + 4) == 0) {
    iVar4 = 1;
    goto LAB_145d321d0;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x58));
LAB_145d321e1:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d32296 FUN_145d32296 body=265 status=ok
// SIG undefined FUN_145d32296(void)

void FUN_145d32296(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (DAT_14ca9a530 != 0) {
    uVar2 = FUN_1411d204e();
    if (DAT_14ca9a530 != 0) {
      FUN_141092d32(uVar2);
    }
    DAT_14ca9a530 = 0;
  }
  if (DAT_14ca9a538 != 0) {
    plVar3 = (longlong *)FUN_144a8054c();
    uVar2 = (**(code **)(*plVar3 + 0x118))(plVar3);
    if (DAT_14ca9a538 != 0) {
      FUN_14480f766(uVar2);
    }
    DAT_14ca9a538 = 0;
  }
  if (DAT_14ca9a540 != 0) {
    plVar3 = (longlong *)FUN_144a8054c();
    uVar2 = (**(code **)(*plVar3 + 0x130))(plVar3);
    if (DAT_14ca9a540 != 0) {
      FUN_14480f766(uVar2);
    }
    DAT_14ca9a540 = 0;
  }
  FUN_145d323a0(&DAT_14ca9a548,0);
  lVar1 = DAT_14ca9a668;
  if (DAT_14ca9a668 != 0) {
    FUN_14153998a(DAT_14ca9a668);
    FUN_1400020a8(lVar1);
    DAT_14ca9a668 = 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca9a600);
  FUN_145d3240c(&DAT_14ca9a5b0,0);
                    /* WARNING: Could not recover jumptable at 0x000145d32398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca9a600);
  return;
}



// FUNCTION 145d323a0 FUN_145d323a0 body=107 status=ok
// SIG undefined FUN_145d323a0(void)

void FUN_145d323a0(longlong param_1,uint param_2)

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
LAB_145d323ef:
      FUN_144a40be0(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_14482b9e8(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145d323ef;
  FUN_141539c3e(param_1);
  FUN_144a40be0(param_1,param_2);
  return;
}



// FUNCTION 145d3240c FUN_145d3240c body=107 status=ok
// SIG undefined FUN_145d3240c(void)

void FUN_145d3240c(longlong param_1,uint param_2)

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
    if (*(int *)(param_1 + 0x48) <= iVar3) {
LAB_145d3245e:
      FUN_14743f3c4(param_1);
      FUN_141539a3e(param_1,param_2);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) == iVar3) goto LAB_145d3245e;
  FUN_141539a3e(param_1,param_2);
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_141539d76(param_1);
  return;
}



// FUNCTION 145d32478 FUN_145d32478 body=21 status=ok
// SIG undefined FUN_145d32478(void)

undefined8 FUN_145d32478(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145d3248e FUN_145d3248e body=437 status=ok
// SIG undefined FUN_145d3248e(void)

void FUN_145d3248e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined2 local_e0 [2];
  undefined4 local_dc;
  undefined1 *local_d8 [2];
  undefined ***local_c8;
  undefined **local_b8;
  undefined1 *local_b0;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 != 0) {
    lVar2 = FUN_1447210f0(param_2);
    if (lVar2 != 0) {
      lVar2 = FUN_1457fadf6(param_1,lVar2,1);
      if (lVar2 != 0) {
        local_c8 = (undefined ***)0x0;
        local_b8 = &PTR_LAB_14b3ebfb0;
        local_b0 = &LAB_145c669ac;
        local_d8[0] = &LAB_145c669a2;
        FUN_146024696(lVar2);
        lVar3 = FUN_14479d2ce(lVar2 + 8);
        if (*(longlong *)(lVar3 + 0x1f0) == 0) {
          puVar4 = (undefined8 *)(lVar3 + 0x458);
        }
        else {
          puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
        }
        uVar1 = *puVar4;
        local_f0 = 0;
        local_e8 = 0;
        FUN_1446efa72(&local_f0,0,8,0x10);
        local_e8 = 8;
        FUN_145d3284c(local_f0,param_1,lVar2 + 0x78,local_d8);
        local_98 = 0;
        local_90 = 0;
        FUN_14487d8d8(&local_98,&local_f0);
        local_58 = 1;
        local_f8 = local_e0;
        local_e0[0] = 0;
        local_dc = 0xbf800000;
        FUN_1406f4044(uVar1,lVar2 + 0xc0,&local_98,0x40a00000);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
        FUN_1449db362(&local_f0);
        if (local_d8[0] != (undefined1 *)0x0) {
          pppuVar5 = local_c8;
          if (local_c8 == (undefined ***)0x0) {
            pppuVar5 = &local_b8;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d32644 FUN_145d32644 body=518 status=ok
// SIG undefined FUN_145d32644(void)

void FUN_145d32644(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined1 auStack_2c8 [32];
  byte *local_2a8;
  byte local_2a0 [32];
  undefined1 local_280;
  byte local_278 [32];
  byte local_258 [32];
  byte abStack_238 [120];
  undefined1 local_1c0 [32];
  undefined1 local_1a0;
  undefined1 local_198 [16];
  longlong local_188;
  undefined1 local_178 [32];
  byte local_158;
  undefined1 local_150 [144];
  char local_c0 [8];
  undefined1 local_b8 [144];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if (param_2 != 0) {
    lVar2 = FUN_1447210f0(param_2);
    if (lVar2 != 0) {
      lVar2 = FUN_1457fadf6(param_1,lVar2,0);
      if (lVar2 != 0) {
        FUN_146024696(lVar2);
        local_1a0 = 0;
        FUN_14101bd16(local_1c0,&DAT_149dfb77a);
        local_2a8 = local_1c0;
        FUN_140d767d6(local_198,&DAT_14cb71db0,2,L"PlayerRemoved");
        cVar1 = FUN_140e27f2c(local_198);
        if (cVar1 == '\0') {
          local_280 = 0;
          FUN_14101bd16(local_2a0,&DAT_149dfb77a);
          pbVar4 = local_278;
          local_2a8 = local_2a0;
        }
        else {
          abStack_238[0x28] = 0;
          FUN_14101bd16(abStack_238 + 8,&DAT_149dfb77a);
          pbVar4 = abStack_238 + 0x30;
          local_2a8 = abStack_238 + 8;
        }
        FUN_140d767d6(pbVar4,&DAT_14cb71db0,2,L"PlayerRemoved");
        FUN_140d76846(local_150,pbVar4);
        FUN_14027c224(local_c0,local_150);
        uVar3 = FUN_14479d2ce(lVar2);
        if (local_c0[0] == '\x01') {
          FUN_140f3f840(local_b8,uVar3);
        }
        FUN_14027c198(local_c0);
        FUN_1404eeb8e(local_150);
        if (cVar1 == '\0') {
          pbVar4 = local_258;
        }
        else {
          pbVar4 = abStack_238 + 0x50;
        }
        (*(code *)(&PTR_FUN_14a1842f0)[pbVar4[0x20]])(pbVar4);
        if (*(longlong *)(pbVar4 + -0x10) != 0) {
          FUN_1400020a8();
        }
        (*(code *)(&PTR_FUN_14a1842f0)[local_158])(local_178);
        if (local_188 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3284c FUN_145d3284c body=155 status=ok
// SIG undefined FUN_145d3284c(void)

undefined8 *
FUN_145d3284c(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b3ec630;
  *(undefined4 *)(param_1 + 2) = *param_3;
  lVar1 = *param_4;
  param_1[4] = lVar1;
  param_1[6] = 0;
  if (lVar1 != 0) {
    plVar3 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_4[2];
    }
    (**(code **)*plVar3)(plVar3,param_1 + 6);
  }
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  param_1[0xc] = lVar2;
  *param_1 = &PTR_FUN_14b3ec5c0;
  param_1[0xd] = param_2;
  param_1[0xe] = FUN_145c6686a;
  return param_1;
}



// FUNCTION 145d32900 FUN_145d32900 body=40 status=ok
// SIG undefined FUN_145d32900(void)

undefined8 FUN_145d32900(undefined8 param_1,int param_2)

{
  FUN_145d32928();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d32928 FUN_145d32928 body=262 status=ok
// SIG undefined FUN_145d32928(void)

void FUN_145d32928(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b107370;
  param_1[0x72] = &PTR_FUN_14b1079b0;
  param_1[0x73] = &PTR_FUN_14b107a20;
  param_1[0x74] = &PTR_FUN_14b107a50;
  param_1[0x75] = &PTR_FUN_14b107a80;
  param_1[0x76] = &PTR_FUN_14b107af0;
  param_1[0x77] = &PTR_FUN_14b107b20;
  param_1[0x78] = &PTR_FUN_14b107b60;
  param_1[0x79] = &PTR_FUN_14b107b78;
  param_1[0x7a] = &PTR_FUN_14b107b90;
  param_1[0x7b] = &PTR_FUN_14b107be0;
  param_1[0x7c] = &PTR_FUN_14b107c00;
  param_1[0x7d] = &PTR_FUN_14b107ca0;
  param_1[0x26b] = &PTR_FUN_14b107cc0;
  FUN_145d32a2e(param_1[0x2b3],*(undefined4 *)(param_1 + 0x2b4));
  if (param_1[0x2b3] != 0) {
    FUN_1400020a8();
  }
  FUN_145d32a6e(param_1 + 0x26e);
  FUN_1457417a8(param_1);
  return;
}



// FUNCTION 145d32a2e FUN_145d32a2e body=63 status=ok
// SIG undefined FUN_145d32a2e(void)

void FUN_145d32a2e(longlong param_1,int param_2)

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



// FUNCTION 145d32a6e FUN_145d32a6e body=83 status=ok
// SIG undefined FUN_145d32a6e(void)

void FUN_145d32a6e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b10dd20;
  if (param_1[8] == 0) {
    *param_1 = &PTR_FUN_14b105b00;
  }
  else {
    FUN_140872868(param_1);
    *param_1 = &PTR_FUN_14b105b00;
    if (param_1[8] != 0) {
      FUN_140872868(param_1);
    }
  }
  FUN_1403d7c6c(param_1);
  return;
}



// FUNCTION 145d32ac2 FUN_145d32ac2 body=160 status=ok
// SIG undefined FUN_145d32ac2(void)

void FUN_145d32ac2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [40];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_20 = 0;
  lVar1 = FUN_14124a572(param_2,&DAT_14cbd2d08);
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_145d32b25;
  }
  lVar1 = 0;
LAB_145d32b25:
  FUN_145d32b63(param_1 + 0x98,lVar1);
  FUN_144a5ac3a(local_48);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d32b63 FUN_145d32b63 body=62 status=ok
// SIG undefined FUN_145d32b63(void)

void FUN_145d32b63(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 145d32ba2 FUN_145d32ba2 body=610 status=ok
// SIG undefined FUN_145d32ba2(void)

void FUN_145d32ba2(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + -0x30;
  lVar5 = FUN_140495e96();
  if (lVar5 != 0) {
    lVar6 = FUN_14030d4a0();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      FUN_140457ffc(lVar5 + 0x418,lVar1);
    }
  }
  lVar5 = FUN_1400d7050(param_1);
  if (lVar5 != 0) {
    lVar6 = FUN_144a5dd5e();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      FUN_140457ffc(lVar5 + 0x2338,lVar1);
      FUN_1407934de(&local_40,lVar5);
      if (local_40 != 0) {
        FUN_140457ffc(local_40 + 0x18,lVar1);
        FUN_140457ffc(local_40 + 0x30,lVar1);
        FUN_140457ffc(local_40 + 0x48,lVar1);
        FUN_140457ffc(local_40 + 0x90,lVar1);
        FUN_140457ffc(local_40 + 0xa8,lVar1);
        FUN_140457ffc(local_40 + 0xc0,lVar1);
        FUN_140457ffc(local_40 + 0x360,lVar1);
      }
      lVar5 = FUN_1402a1246(lVar5);
      if (lVar5 != 0) {
        FUN_140457ffc(lVar5 + 0xdd0,lVar1);
      }
      plVar2 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_38 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar4 = (int *)((longlong)plVar2 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
  }
  FUN_145d32e06(param_1 + 0x120);
  FUN_140457ffc(&DAT_14c9647a0,lVar1);
  FUN_1449027d0(lVar1,&local_40);
  lVar5 = *(longlong *)(local_40 + 0x240);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0xa0));
  *(int *)(lVar5 + 0x98) = *(int *)(lVar5 + 0x98) + 1;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar4 = (int *)((longlong)local_38 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  FUN_145d32e4a(lVar5 + 0x48);
  FUN_145736670(lVar1);
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  FUN_14142540c(lVar1);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0xa0));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d32e06 FUN_145d32e06 body=68 status=ok
// SIG undefined FUN_145d32e06(void)

void FUN_145d32e06(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_145cc8632();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 145d32e4a FUN_145d32e4a body=68 status=ok
// SIG undefined FUN_145d32e4a(void)

void FUN_145d32e4a(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_148e33d24();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140e91948(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 145d32e8e FUN_145d32e8e body=38 status=ok
// SIG undefined FUN_145d32e8e(void)

void FUN_145d32e8e(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145813a62(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 145d32eb4 FUN_145d32eb4 body=55 status=ok
// SIG undefined FUN_145d32eb4(void)

void FUN_145d32eb4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb0e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb0e8 = FUN_140002ddd(FUN_146608b1b,uVar1,L"DefaultPhotoModeSettings");
  }
  return;
}



// FUNCTION 145d32eec FUN_145d32eec body=61 status=ok
// SIG undefined FUN_145d32eec(void)

void FUN_145d32eec(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_145d32f2a(param_1);
    return;
  }
  FUN_1458074be(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 145d32f2a FUN_145d32f2a body=58 status=ok
// SIG undefined FUN_145d32f2a(void)

void FUN_145d32f2a(undefined8 *param_1,int param_2)

{
  FUN_1458074be(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_145d32f64(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145d32f64 FUN_145d32f64 body=112 status=ok
// SIG undefined FUN_145d32f64(void)

void FUN_145d32f64(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 145d32fd4 FUN_145d32fd4 body=145 status=ok
// SIG undefined FUN_145d32fd4(void)

undefined4 * FUN_145d32fd4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  _Src = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy(*(void **)(param_1 + 6),_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)((longlong)param_1 + 0x2d) = *(undefined8 *)((longlong)param_2 + 0x2d);
  *(undefined8 *)(param_1 + 10) = uVar2;
  FUN_140dd90de(param_1 + 0xe,param_2 + 0xe);
  return param_1;
}



// FUNCTION 145d33066 FUN_145d33066 body=147 status=ok
// SIG undefined FUN_145d33066(void)

void FUN_145d33066(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145d330fa FUN_145d330fa body=189 status=ok
// SIG undefined FUN_145d330fa(void)

undefined8 * FUN_145d330fa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *param_1 = *param_2;
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
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 145d331b8 FUN_145d331b8 body=184 status=ok
// SIG undefined FUN_145d331b8(void)

longlong * FUN_145d331b8(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  longlong lVar3;
  
  plVar2 = (longlong *)*param_2;
  *param_1 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  param_1[2] = 0;
  iVar1 = (int)param_2[3];
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = (int)param_2[5];
  lVar3 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_145d33270(param_1 + 4,iVar1,0);
    FUN_14153c576(param_1[4],lVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 145d33270 FUN_145d33270 body=115 status=ok
// SIG undefined FUN_145d33270(void)

void FUN_145d33270(longlong param_1,int param_2,int param_3)

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



// FUNCTION 145d332e4 FUN_145d332e4 body=240 status=ok
// SIG undefined FUN_145d332e4(void)

undefined4 * FUN_145d332e4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  uVar2 = *(undefined8 *)(param_2 + 4);
  param_1[6] = iVar1;
  if (iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_145d333d4(param_1 + 4,iVar1,0);
    FUN_14153c61c(*(undefined8 *)(param_1 + 4),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  pvVar3 = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),pvVar3,(longlong)iVar1 * 2);
  }
  param_1[0xc] = param_2[0xc];
  *(undefined8 *)(param_1 + 0xe) = 0;
  iVar1 = param_2[0x10];
  pvVar3 = *(void **)(param_2 + 0xe);
  param_1[0x10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x11] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xe,iVar1,0);
    memcpy(*(void **)(param_1 + 0xe),pvVar3,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 145d333d4 FUN_145d333d4 body=98 status=ok
// SIG undefined FUN_145d333d4(void)

void FUN_145d333d4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 145d33436 FUN_145d33436 body=143 status=ok
// SIG undefined FUN_145d33436(void)

void FUN_145d33436(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145d334c6 FUN_145d334c6 body=143 status=ok
// SIG undefined FUN_145d334c6(void)

void FUN_145d334c6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145d33556 FUN_145d33556 body=396 status=ok
// SIG undefined FUN_145d33556(void)

/* WARNING: Removing unreachable block (ram,0x000145d336c5) */
/* WARNING: Removing unreachable block (ram,0x000145d336d4) */
/* WARNING: Removing unreachable block (ram,0x000145d336d8) */

undefined8 FUN_145d33556(longlong param_1,char *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined1 local_180 [256];
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_80 = 0;
  if (param_2 == (char *)0x0) {
    local_78 = 0;
    local_70 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    FUN_1446e6fe8(local_180,param_2,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(&local_198,local_78);
  local_188 = *param_3;
  local_48 = &PTR_FUN_14b47adf0;
  uStack_40 = local_198;
  uStack_38 = uStack_190;
  local_198 = 0;
  uStack_190 = 0;
  uStack_30 = local_188;
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = 0;
  puVar3[2] = &LAB_145b026ac;
  puVar3[4] = 0;
  local_58 = 0;
  *(undefined4 *)(puVar3 + 6) = (undefined4)local_48;
  *(undefined4 *)((longlong)puVar3 + 0x34) = local_48._4_4_;
  *(undefined4 *)(puVar3 + 7) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_40._4_4_;
  *(undefined4 *)(puVar3 + 8) = (undefined4)uStack_38;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_38._4_4_;
  *(undefined4 *)(puVar3 + 9) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_30._4_4_;
  local_68 = 0;
  uVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    UNLOCK();
    LOCK();
    uVar4 = *puVar1;
    *puVar1 = puVar3;
    UNLOCK();
  }
  if (local_198 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if (local_80 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 145d336e4 FUN_145d336e4 body=147 status=ok
// SIG undefined FUN_145d336e4(void)

void FUN_145d336e4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145d33778 FUN_145d33778 body=126 status=ok
// SIG undefined FUN_145d33778(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d33778(void)

{
  InitializeSRWLock((PSRWLOCK)&DAT_14c952a70);
  DAT_14c952a98 = 0;
  _DAT_14c952aa0 = 0;
  DAT_14c952a78 = 0;
  _DAT_14c952a80 = 0;
  _DAT_14c952aa4 = 0xffffffff00000080;
  _DAT_14c952aac = 0;
  DAT_14c952ab8 = 0;
  _DAT_14c952ac0 = 0;
  _DAT_14c952ac8 = 1;
  memset(&DAT_14c952ad0,0,0x10001);
  FUN_145d337f6(&DAT_14c952a70,0);
  return;
}



// FUNCTION 145d337f6 FUN_145d337f6 body=114 status=ok
// SIG undefined FUN_145d337f6(void)

longlong FUN_145d337f6(longlong param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  
  pcVar1 = (char *)(param_1 + 0x10060);
  LOCK();
  bVar4 = *(char *)(param_1 + 0x10060) == '\0';
  if (bVar4) {
    *(char *)(param_1 + 0x10060) = '\x01';
  }
  UNLOCK();
  if (!bVar4) {
    FUN_1447d2058();
  }
  lVar3 = *(longlong *)(param_1 + 0x60 + (longlong)param_2 * 8);
  if (lVar3 == 0) {
    lVar3 = FUN_14153c902(0x18000,4);
    *(longlong *)(param_1 + 0x60 + (longlong)param_2 * 8) = lVar3;
  }
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\x01') {
    *pcVar1 = '\0';
  }
  UNLOCK();
  if (cVar2 != '\x01') {
    FUN_14008cdb0(pcVar1);
  }
  return lVar3;
}



// FUNCTION 145d33868 FUN_145d33868 body=40 status=ok
// SIG undefined FUN_145d33868(void)

undefined8 FUN_145d33868(undefined8 param_1,int param_2)

{
  FUN_145d33890();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d33890 FUN_145d33890 body=216 status=ok
// SIG undefined FUN_145d33890(void)

void FUN_145d33890(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac07950;
  param_1[0x72] = &PTR_FUN_14ac08230;
  param_1[0xe9] = &PTR_FUN_14ac08290;
  FUN_145d33968(param_1[0xfb],*(undefined4 *)(param_1 + 0xfc));
  if (param_1[0xfb] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xfa];
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
  if (param_1[0xf7] != 0) {
    FUN_1400020a8();
  }
  FUN_14597ae89(param_1[0xed],*(undefined4 *)(param_1 + 0xee));
  if (param_1[0xed] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xeb] != 0) {
    FUN_1400020a8();
  }
  FUN_140cbb12a(param_1);
  return;
}



// FUNCTION 145d33968 FUN_145d33968 body=43 status=ok
// SIG undefined FUN_145d33968(void)

void FUN_145d33968(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_143851c62(param_1);
    param_1 = param_1 + 0x170;
  }
  return;
}



// FUNCTION 145d33994 FUN_145d33994 body=40 status=ok
// SIG undefined FUN_145d33994(void)

undefined8 FUN_145d33994(undefined8 param_1,int param_2)

{
  FUN_145d339bc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d339bc FUN_145d339bc body=52 status=ok
// SIG undefined FUN_145d339bc(void)

void FUN_145d339bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb5e990;
  FUN_145d339f0();
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1459787d0(param_1);
  return;
}



// FUNCTION 145d339f0 FUN_145d339f0 body=207 status=ok
// SIG undefined FUN_145d339f0(void)

void FUN_145d339f0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar6 = param_1 + 0x60;
  lVar4 = FUN_145c01f0e(lVar6);
  if (lVar4 == 0) {
    return;
  }
  lVar4 = FUN_145c01f0e(lVar6);
  if (*(longlong *)(lVar4 + 0x2f8) != 0) {
    FUN_140457ffc(*(longlong *)(lVar4 + 0x2f8) + 0x28,param_1);
  }
  lVar4 = FUN_145c01f0e(lVar6);
  FUN_140457ffc(lVar4 + 0x828,param_1);
  lVar4 = FUN_145c01f0e(lVar6);
  plVar2 = *(longlong **)(lVar4 + 0x360);
  plVar3 = *(longlong **)(lVar4 + 0x368);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (plVar2 != (longlong *)0x0) {
    uVar5 = (**(code **)(*plVar2 + 0x10))();
    FUN_140457ffc(uVar5,param_1);
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  lVar6 = FUN_145c01f0e(lVar6);
  FUN_140457ffc(lVar6 + 0x870,param_1);
  return;
}



// FUNCTION 145d33ac0 FUN_145d33ac0 body=257 status=ok
// SIG undefined FUN_145d33ac0(void)

void FUN_145d33ac0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a63f30();
  FUN_145d33bc2();
  _Src = DAT_14cc0d870;
  local_38 = (void *)0x0;
  lVar4 = (longlong)DAT_14cc0d878;
  local_30 = DAT_14cc0d878;
  if (lVar4 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,DAT_14cc0d878,0);
    memcpy(local_38,_Src,lVar4 * 2);
  }
  local_48 = *(undefined8 *)(param_1 + 0x28);
  local_40 = *(longlong **)(param_1 + 0x30);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  FUN_14153c93e(param_1 + 0xa0,&local_48,&local_38);
  plVar3 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d33bc2 FUN_145d33bc2 body=121 status=ok
// SIG undefined FUN_145d33bc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d33bc2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d880) {
    FUN_144b3d300(&DAT_14cc0d880);
    if (DAT_14cc0d880 == -1) {
      DAT_14cc0d870 = 0;
      _DAT_14cc0d878 = 0;
      FUN_14020fad6(&DAT_14cc0d870,L"SourceBlocks");
      atexit((_func_5014 *)&LAB_1444c5265);
      _Init_thread_footer(&DAT_14cc0d880);
      return;
    }
  }
  return;
}



// FUNCTION 145d33c3c FUN_145d33c3c body=611 status=ok
// SIG undefined FUN_145d33c3c(void)

void FUN_145d33c3c(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + -0x30;
  lVar3 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(lVar1);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_1400d6ce6();
    if (lVar3 != 0) {
      local_48 = FUN_1459409d2;
      local_40 = 0;
      FUN_145d33fa0(lVar3 + 400,local_38,lVar1,&local_48);
      local_48 = FUN_145972704;
      local_40 = 0;
      FUN_145d33ea0(lVar3 + 0x160,local_38,lVar1,&local_48);
      local_48 = (code *)&DAT_145972702;
      local_40 = 0;
      FUN_145d33ea0(lVar3 + 0x178,local_38,lVar1,&local_48);
    }
  }
  param_1 = param_1 + 0x18;
  cVar2 = FUN_144729dda(param_1);
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(param_1);
    local_48 = FUN_148e5c270;
    local_40 = 0;
    FUN_148e5c170(lVar3 + 0x2aa8,local_38,lVar1,&local_48);
    lVar3 = FUN_14479d2ce(param_1);
    local_48 = (code *)&LAB_148e5c2d0;
    local_40 = 0;
    FUN_145d33ea0(lVar3 + 0x2a18,local_38,lVar1,&local_48);
    lVar3 = FUN_14479d2ce(param_1);
    local_48 = (code *)&LAB_148e5c2d6;
    local_40 = 0;
    FUN_145d33ea0(lVar3 + 0x2a30,local_38,lVar1,&local_48);
    lVar3 = FUN_14479d2ce(param_1);
    local_48 = (code *)&LAB_148e5c2dc;
    local_40 = 0;
    FUN_145d33ea0(lVar3 + 0x2a48,local_38,lVar1,&local_48);
    lVar3 = FUN_14479d2ce(param_1);
    local_48 = FUN_148e5c2e2;
    local_40 = 0;
    FUN_145d33ea0(&DAT_00002a60 + lVar3,local_38,lVar1,&local_48);
    lVar3 = FUN_14479d2ce(param_1);
    local_48 = (code *)&DAT_148e5c3a8;
    local_40 = 0;
    FUN_145d33ea0(&DAT_00002a78 + lVar3,local_38,lVar1,&local_48);
    lVar3 = FUN_14479d2ce(param_1);
    local_48 = FUN_148e5c3aa;
    local_40 = 0;
    FUN_145d33ea0(lVar3 + 0x2a90,local_38,lVar1,&local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d33ea0 FUN_145d33ea0 body=254 status=ok
// SIG undefined FUN_145d33ea0(void)

undefined8
FUN_145d33ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b9e90;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d33fa0 FUN_145d33fa0 body=254 status=ok
// SIG undefined FUN_145d33fa0(void)

undefined8
FUN_145d33fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9a7080;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b9e20;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14127eb6a(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d340a8 FUN_145d340a8 body=331 status=ok
// SIG undefined FUN_145d340a8(void)

bool FUN_145d340a8(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((longlong)*(int *)(param_1 + 3) != 0) {
    plVar2 = (longlong *)param_1[2];
    lVar3 = (longlong)*(int *)(param_1 + 3) * 0x58;
    do {
      cVar1 = (**(code **)(*plVar2 + 8))(plVar2,param_2);
      if (cVar1 != '\0') {
        if (plVar2 != (longlong *)0x0) {
          return true;
        }
        break;
      }
      plVar2 = plVar2 + 0xb;
      lVar3 = lVar3 + -0x58;
    } while (lVar3 != 0);
  }
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    plVar2 = (longlong *)*param_1;
    lVar3 = (longlong)*(int *)(param_1 + 1) * 0x30;
    do {
      cVar1 = (**(code **)(*plVar2 + 8))(plVar2,param_2);
      if (cVar1 != '\0') {
        if (plVar2 != (longlong *)0x0) {
          return true;
        }
        break;
      }
      plVar2 = plVar2 + 6;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  if ((longlong)*(int *)(param_1 + 5) != 0) {
    plVar2 = (longlong *)param_1[4];
    lVar3 = (longlong)*(int *)(param_1 + 5) * 0x50;
    do {
      cVar1 = (**(code **)(*plVar2 + 8))(plVar2,param_2);
      if (cVar1 != '\0') {
        if (plVar2 != (longlong *)0x0) {
          return true;
        }
        break;
      }
      plVar2 = plVar2 + 10;
      lVar3 = lVar3 + -0x50;
    } while (lVar3 != 0);
  }
  if ((longlong)*(int *)(param_1 + 7) != 0) {
    plVar2 = (longlong *)param_1[6];
    lVar3 = (longlong)*(int *)(param_1 + 7) * 0x60;
    do {
      cVar1 = (**(code **)(*plVar2 + 8))(plVar2,param_2);
      if (cVar1 != '\0') {
        if (plVar2 != (longlong *)0x0) {
          return true;
        }
        break;
      }
      plVar2 = plVar2 + 0xc;
      lVar3 = lVar3 + -0x60;
    } while (lVar3 != 0);
  }
  if ((longlong)*(int *)(param_1 + 9) == 0) {
    bVar4 = false;
  }
  else {
    plVar2 = (longlong *)param_1[8];
    lVar3 = (longlong)*(int *)(param_1 + 9) * 0x58;
    do {
      cVar1 = (**(code **)(*plVar2 + 8))(plVar2,param_2);
      if (cVar1 != '\0') goto LAB_145d341b4;
      plVar2 = plVar2 + 0xb;
      lVar3 = lVar3 + -0x58;
    } while (lVar3 != 0);
    plVar2 = (longlong *)0x0;
LAB_145d341b4:
    bVar4 = plVar2 != (longlong *)0x0;
  }
  return bVar4;
}



// FUNCTION 145d341f4 FUN_145d341f4 body=454 status=ok
// SIG undefined FUN_145d341f4(void)

bool FUN_145d341f4(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_144a7484c(param_1 + 0x28,&local_88);
  dVar4 = param_2[2] - *(double *)(param_1 + 0x20);
  dVar7 = *param_2 - *(double *)(param_1 + 0x10);
  dVar8 = param_2[1] - *(double *)(param_1 + 0x18);
  dVar1 = -local_88;
  dStack_80 = -dStack_80;
  local_78 = local_78 * -1.0;
  dStack_70 = dStack_70 * 1.0;
  dVar6 = dVar7 * local_78 - dVar1 * dVar4;
  dVar5 = dVar8 * dVar1 - dStack_80 * dVar7;
  dVar2 = dVar4 * dStack_80 - local_78 * dVar8;
  dVar2 = dVar2 + dVar2;
  dVar6 = dVar6 + dVar6;
  dVar5 = dVar5 + dVar5;
  if (ABS((dVar5 * dStack_80 - dVar6 * local_78) + dStack_70 * dVar2 + dVar7) <=
      *(double *)(param_1 + 0x40) * 0.5) {
    if (ABS(local_88 * dVar5 + local_78 * dVar2 + dStack_70 * dVar6 + dVar8) <=
        *(double *)(param_1 + 0x48) * 0.5) {
      bVar3 = ABS(dVar4 + dStack_70 * dVar5 + (dVar6 * dVar1 - dVar2 * dStack_80)) <=
              *(double *)(param_1 + 0x50) * 0.5;
      goto LAB_145d3437c;
    }
  }
  bVar3 = false;
LAB_145d3437c:
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d343bc FUN_145d343bc body=54 status=ok
// SIG undefined FUN_145d343bc(void)

void FUN_145d343bc(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_147a3b9b8(param_1 + 0xa0);
  }
  FUN_145d343f2(param_1);
  return;
}



// FUNCTION 145d343f2 FUN_145d343f2 body=401 status=ok
// SIG undefined FUN_145d343f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d343f2(ulonglong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad4a58);
  uVar4 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  piVar5 = (int *)FUN_145c76e42(&DAT_14cad4a08,uVar4 >> 0x10 ^ uVar4,&local_58);
  *piVar5 = *piVar5 + 1;
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar2 = param_1 + 0x40;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar6 = 0;
  local_48 = lVar2;
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_1449c0562(&local_50);
    iVar6 = *(int *)(param_1 + 0x58);
  }
  local_68 = local_40;
  iStack_64 = iStack_3c;
  local_60 = local_38;
  local_5c = local_34;
  local_78 = local_50;
  local_70 = local_48;
  local_80 = plVar1;
  if ((iStack_3c != iVar6) || (local_48 != lVar2)) {
    do {
      puVar3 = *(undefined8 **)(*local_80 + 8 + (longlong)iStack_64 * 0x18);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (((iStack_64 != iVar6) || (local_70 != lVar2)) || (local_80 != plVar1));
  }
  FUN_145d34584(plVar1,0);
  *(undefined1 *)(param_1 + 0x98) = 0;
  _DAT_14c761478 = _DAT_14c761478 + 1;
  FUN_14150fbd6(&local_58);
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d34584 FUN_145d34584 body=107 status=ok
// SIG undefined FUN_145d34584(void)

void FUN_145d34584(longlong param_1,uint param_2)

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
LAB_145d345d3:
      FUN_1459da1e8(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_147a3a48a(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145d345d3;
  FUN_145d345f0(param_1);
  FUN_1459da1e8(param_1,param_2);
  return;
}



// FUNCTION 145d345f0 FUN_145d345f0 body=335 status=ok
// SIG undefined FUN_145d345f0(void)

void FUN_145d345f0(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 145d34740 FUN_145d34740 body=144 status=ok
// SIG undefined FUN_145d34740(void)

code * FUN_145d34740(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14153ccb2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"TileParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSubsurfaceTilePassVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x400000034f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462fe888;
}



// FUNCTION 145d347d0 FUN_145d347d0 body=226 status=ok
// SIG undefined FUN_145d347d0(void)

longlong * FUN_145d347d0(longlong *param_1)

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
  pcVar13 = FUN_1462fe91a;
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



// FUNCTION 145d348b4 FUN_145d348b4 body=136 status=ok
// SIG undefined FUN_145d348b4(void)

code * FUN_145d348b4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileType";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000046;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d349c6;
}



// FUNCTION 145d3493c FUN_145d3493c body=138 status=ok
// SIG undefined FUN_145d3493c(void)

code * FUN_145d3493c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472a0d8c;
}



// FUNCTION 145d349c6 FUN_145d349c6 body=138 status=ok
// SIG undefined FUN_145d349c6(void)

code * FUN_145d349c6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bRectPrimitive";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000045;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d3493c;
}



// FUNCTION 145d34a50 FUN_145d34a50 body=434 status=ok
// SIG undefined FUN_145d34a50(void)

void FUN_145d34a50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  longlong *local_58;
  code *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = FUN_145d34c2a();
  uVar5 = FUN_1406f625c(uVar5);
  plVar6 = (longlong *)FUN_14153cdbc(uVar5);
  if (plVar6 == (longlong *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  }
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  lVar8 = FUN_145d34c03(uVar5);
  if (lVar8 != 0) {
    uVar5 = *(undefined8 *)(lVar8 + 8);
    lVar8 = *(longlong *)(lVar8 + 0x10);
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    plVar6 = *(longlong **)(param_1 + 0x38);
    *(longlong *)(param_1 + 0x38) = lVar8;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
  }
  if ((((*(longlong *)(param_1 + 0x30) != 0) &&
       (plVar6 = *(longlong **)(param_1 + 0x38), plVar6 != (longlong *)0x0)) && (0 < (int)plVar6[1])
      ) && (*(longlong *)(param_1 + 0x40) != 0)) {
    iVar4 = (int)plVar6[1];
    lVar8 = 0;
    do {
      if (iVar4 == 0) goto LAB_145d34b1f;
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 0x30);
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
LAB_145d34b1f:
    FUN_145d34c44(param_1,local_60);
    local_50 = FUN_14104e4ac;
    local_48 = 0;
    FUN_145d34ca8(local_40,local_60);
    FUN_141180640(lVar8 + 0x18,&local_50,local_40);
    FUN_1449db362(local_40);
    *(code **)(param_1 + 0x48) = local_50;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_58 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_58 + 0x10))(local_58);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d34c03 FUN_145d34c03 body=39 status=ok
// SIG undefined FUN_145d34c03(void)

undefined8 FUN_145d34c03(longlong *param_1)

{
  longlong lVar1;
  
  if ((param_1 != (longlong *)0x0) && (lVar1 = (**(code **)(*param_1 + 0x2b8))(), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0xf8);
  }
  return 0;
}



// FUNCTION 145d34c2a FUN_145d34c2a body=25 status=ok
// SIG undefined FUN_145d34c2a(void)

void FUN_145d34c2a(void)

{
  FUN_1458fd8e2();
  FUN_14479d2ce(&DAT_14c9a40b0);
  return;
}



// FUNCTION 145d34c44 FUN_145d34c44 body=99 status=ok
// SIG undefined FUN_145d34c44(void)

undefined8 * FUN_145d34c44(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_145d34c86:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_145d34c86;
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
    *param_2 = *(undefined8 *)(param_1 + 8);
    param_2[1] = plVar3;
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



// FUNCTION 145d34ca8 FUN_145d34ca8 body=300 status=ok
// SIG undefined FUN_145d34ca8(void)

longlong * FUN_145d34ca8(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14b41e020;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b961890;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b41e020;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b961890;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  return param_1;
}



// FUNCTION 145d34dd4 FUN_145d34dd4 body=24 status=ok
// SIG undefined FUN_145d34dd4(void)

void FUN_145d34dd4(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145d34de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145d34dec FUN_145d34dec body=38 status=ok
// SIG undefined FUN_145d34dec(void)

undefined8 FUN_145d34dec(undefined8 param_1,int param_2)

{
  FUN_145d34e12();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d34e12 FUN_145d34e12 body=238 status=ok
// SIG undefined FUN_145d34e12(void)

void FUN_145d34e12(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149eefbd0;
  plVar3 = (longlong *)param_1[0x7f];
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
  plVar3 = (longlong *)param_1[0x7d];
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
  plVar3 = (longlong *)param_1[0x7b];
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
  plVar3 = (longlong *)param_1[0x79];
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
  plVar3 = (longlong *)param_1[0x77];
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
  FUN_1411160c2(param_1);
  return;
}



// FUNCTION 145d34f00 FUN_145d34f00 body=59 status=ok
// SIG undefined FUN_145d34f00(void)

void FUN_145d34f00(undefined8 param_1)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_145d34f3c(local_10,param_1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d34f3c FUN_145d34f3c body=239 status=ok
// SIG undefined FUN_145d34f3c(void)

undefined8 FUN_145d34f3c(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_FUN_14a1cc890;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_145ae4b54;
  FUN_14123f6f0(&DAT_14cb10980,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3502c FUN_145d3502c body=40 status=ok
// SIG undefined FUN_145d3502c(void)

undefined8 FUN_145d3502c(undefined8 param_1,int param_2)

{
  FUN_145d35054();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d35054 FUN_145d35054 body=110 status=ok
// SIG undefined FUN_145d35054(void)

void FUN_145d35054(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4b7010;
  param_1[0x1f] = &PTR_FUN_14a4b7380;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x22);
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_1404db908(param_1);
  return;
}



// FUNCTION 145d350c2 FUN_145d350c2 body=40 status=ok
// SIG undefined FUN_145d350c2(void)

undefined8 FUN_145d350c2(undefined8 param_1,int param_2)

{
  FUN_145d350ea();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d350ea FUN_145d350ea body=110 status=ok
// SIG undefined FUN_145d350ea(void)

void FUN_145d350ea(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aacf9c0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_140595ef6(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d35164 FUN_145d35164 body=139 status=ok
// SIG undefined FUN_145d35164(void)

undefined8 * FUN_145d35164(undefined8 *param_1)

{
  FUN_14480568a();
  *param_1 = &PTR_FUN_14abba240;
  param_1[5] = &PTR_FUN_14abbac40;
  param_1[6] = &PTR_LAB_14abbac80;
  param_1[0x55] = &PTR_FUN_14abbacd0;
  param_1[0x56] = &PTR_FUN_14abbad50;
  param_1[0x57] = &PTR_FUN_14abbad60;
  *(undefined1 *)((longlong)param_1 + 0x1fb) = 1;
  FUN_140078ec2(param_1 + 0x82,DAT_14cad0f30);
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 2;
  FUN_14127091c(param_1,0);
  return param_1;
}



// FUNCTION 145d351fa FUN_145d351fa body=139 status=ok
// SIG undefined FUN_145d351fa(void)

undefined8 * FUN_145d351fa(undefined8 *param_1)

{
  FUN_145907800();
  *param_1 = &PTR_FUN_14ac067c0;
  param_1[5] = &PTR_FUN_14ac071d0;
  param_1[6] = &PTR_LAB_14ac07210;
  param_1[0x55] = &PTR_FUN_14ac07260;
  param_1[0x56] = &PTR_FUN_14ac072e0;
  param_1[0x57] = &PTR_FUN_14ac072f0;
  FUN_1400b22c2(param_1 + 0xce,"GameplayDebug");
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 1;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  return param_1;
}



// FUNCTION 145d3528a FUN_145d3528a body=145 status=ok
// SIG undefined FUN_145d3528a(void)

void FUN_145d3528a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14ae57100;
  puVar1[8] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x37) = 0;
  *(undefined4 *)(puVar1 + 9) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x54) = 0x3f800000;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0x41c00000;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x7c) = 2;
  *(undefined1 *)((longlong)puVar1 + 0x7e) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0x3f800000;
  *(undefined4 *)(puVar1 + 0x11) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x8c) = 0;
  *(undefined4 *)(puVar1 + 0x12) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x94) = 0x3f800000;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  FUN_140ca8f8e(puVar1 + 0x1a);
  *(undefined4 *)(puVar1 + 0x30) = 0x3f800000;
  *(undefined1 *)((longlong)puVar1 + 0x184) = 1;
  return;
}



// FUNCTION 145d3531c FUN_145d3531c body=40 status=ok
// SIG undefined FUN_145d3531c(void)

undefined8 FUN_145d3531c(undefined8 param_1,int param_2)

{
  FUN_145d35344();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d35344 FUN_145d35344 body=110 status=ok
// SIG undefined FUN_145d35344(void)

void FUN_145d35344(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1dd970;
  param_1[0x73] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x76) = 0;
  if (*(int *)((longlong)param_1 + 0x3b4) != 0) {
    FUN_140115c12(param_1 + 0x75,0);
  }
  param_1[0x74] = 0;
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145d353b2 FUN_145d353b2 body=40 status=ok
// SIG undefined FUN_145d353b2(void)

undefined8 FUN_145d353b2(undefined8 param_1,int param_2)

{
  FUN_145d353da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d353da FUN_145d353da body=110 status=ok
// SIG undefined FUN_145d353da(void)

void FUN_145d353da(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2ab6b0;
  param_1[5] = &PTR_FUN_14b2abb30;
  param_1[6] = &PTR_LAB_14b2abb70;
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 145d35448 FUN_145d35448 body=88 status=ok
// SIG undefined FUN_145d35448(void)

void FUN_145d35448(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3fab40;
  if (param_1[0x4aa] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x229) = 0;
  if (param_1[0x228] != 0) {
    FUN_1400020a8();
  }
  FUN_145d354a0(param_1 + 1);
  FUN_140af926c(param_1);
  return;
}



// FUNCTION 145d354a0 FUN_145d354a0 body=62 status=ok
// SIG undefined FUN_145d354a0(void)

void FUN_145d354a0(longlong param_1)

{
  FUN_14045d860(param_1,0);
  if (*(longlong *)(param_1 + 0x1020) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1000) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d354ea FUN_145d354ea body=139 status=ok
// SIG undefined FUN_145d354ea(void)

undefined8 * FUN_145d354ea(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR_FUN_14b57dff0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_1446f8bcc(param_1 + 0x15,0);
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 145d3557e FUN_145d3557e body=292 status=ok
// SIG undefined FUN_145d3557e(void)

undefined8 * FUN_145d3557e(undefined8 *param_1)

{
  FUN_140fa737e();
  *param_1 = &PTR_FUN_14b831fc0;
  param_1[6] = &PTR_FUN_14b832280;
  param_1[7] = &PTR_LAB_14b832310;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 2;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 2;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  FUN_1447a97f4(param_1 + 0x1c,&DAT_14c9485f0);
  FUN_1447a97f4(param_1 + 0x21,&DAT_14c9485f0);
  *(undefined4 *)(param_1 + 0x26) = 0x3f000000;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined2 *)(param_1 + 0x38) = 0x19;
  *(undefined1 *)((longlong)param_1 + 0x1c2) = 0;
  return param_1;
}



// FUNCTION 145d356a2 FUN_145d356a2 body=144 status=ok
// SIG undefined FUN_145d356a2(void)

bool FUN_145d356a2(longlong param_1)

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
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
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



// FUNCTION 145d35742 FUN_145d35742 body=142 status=ok
// SIG undefined FUN_145d35742(void)

undefined8 * FUN_145d35742(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14ba69ec0;
  *(undefined2 *)(param_1 + 5) = 3;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  param_1[6] = &PTR_FUN_14b4c3b18;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_145ad316c(param_1 + 0xb);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 9999;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 2;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  return param_1;
}



// FUNCTION 145d357d0 FUN_145d357d0 body=116 status=ok
// SIG undefined FUN_145d357d0(void)

void FUN_145d357d0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = param_1 + -0x10;
  FUN_140457ffc(&DAT_14c872bf8,lVar1);
  FUN_140457ffc(&DAT_14c867518,lVar1);
  FUN_140457ffc(&DAT_14c8673d8,lVar1);
  FUN_145d35844(lVar1);
  FUN_145d3590e(lVar1);
  FUN_145d358a6(lVar1);
  plVar2 = (longlong *)FUN_1448c2e86();
                    /* WARNING: Could not recover jumptable at 0x000145d35841. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,DAT_14c99fa00,param_1,*(code **)(*plVar2 + 0x30));
  return;
}



// FUNCTION 145d35844 FUN_145d35844 body=97 status=ok
// SIG undefined FUN_145d35844(void)

void FUN_145d35844(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
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
    if ((*(longlong *)(param_1 + 0x28) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38) != 0)) {
      FUN_1498f31fe();
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
                    /* WARNING: Could not recover jumptable at 0x000145d3589a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d358a6 FUN_145d358a6 body=104 status=ok
// SIG undefined FUN_145d358a6(void)

void FUN_145d358a6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x10))();
    *(undefined8 *)(param_1 + 0xb0) = 0;
    plVar3 = *(longlong **)(param_1 + 0xb8);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xb8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145d3590a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145d3590e FUN_145d3590e body=134 status=ok
// SIG undefined FUN_145d3590e(void)

void FUN_145d3590e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x18))();
    FUN_14000f986(0x3dcccccd);
    *(undefined8 *)(param_1 + 0x18) = 0;
    plVar3 = *(longlong **)(param_1 + 0x20);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145d35990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145d35994 FUN_145d35994 body=194 status=ok
// SIG undefined FUN_145d35994(void)

undefined4 FUN_145d35994(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149e442f0;
  FUN_145927de8(plVar4 + 2,param_1);
  local_40 = plVar4 + 2;
  local_38 = plVar4;
  uVar3 = FUN_145d35a58(&local_40,param_2,param_3);
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d35a58 FUN_145d35a58 body=1990 status=ok
// SIG undefined FUN_145d35a58(void)

ulonglong FUN_145d35a58(undefined8 *param_1,longlong *param_2,char param_3)

{
  undefined8 **ppuVar1;
  int *piVar2;
  undefined8 **ppuVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_108 [47];
  char local_d9;
  undefined1 local_d8 [16];
  longlong local_c8;
  int local_c0;
  longlong local_b8;
  int local_b0;
  longlong *local_a8;
  undefined8 **local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  ppuVar3 = &local_98;
  local_98 = (undefined8 *)0x0;
  uStack_90 = 1;
  local_d9 = param_3;
  FUN_145928098(ppuVar3,0);
  *local_98 = *param_1;
  lVar16 = param_1[1];
  local_98[1] = lVar16;
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  iVar13 = (int)uStack_90;
  do {
    if (iVar13 < 1) {
      if (local_d9 == '\0') {
        uVar18 = CONCAT71((int7)((ulonglong)ppuVar3 >> 8),1);
      }
      else {
        uVar7 = (**(code **)(*param_2 + 8))(param_2);
        uVar18 = (ulonglong)uVar7;
        iVar13 = (int)uStack_90;
      }
      FUN_14592811d(local_98,iVar13);
      if (local_98 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
        return uVar18 & 0xffffffff;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    bVar19 = true;
    FUN_1413606e0(&local_98,&local_a8,1);
    uVar18 = uStack_90;
    if (*(char *)((longlong)local_a8 + 0x21) == '\x01') {
      bVar19 = false;
      iVar13 = 0;
      if ((int)local_a8[1] < 2) {
        if (0 < (longlong)(int)param_2[3]) {
          iVar13 = *(int *)(param_2[2] + -4 + (longlong)(int)param_2[3] * 4);
        }
        bVar19 = iVar13 != 6;
      }
    }
    plVar11 = (longlong *)local_a8[2];
    if ((int)plVar11[1] == 2) {
      if (bVar19) {
        FUN_14047e026(plVar11,&local_78);
        FUN_14683d42c(param_2,&local_78);
        lVar16 = local_78;
        goto LAB_145d35e42;
      }
      FUN_14047e026(plVar11,local_d8);
      FUN_145d36220(param_2,local_a8,local_d8);
    }
    else {
      switch((int)plVar11[1]) {
      case 1:
        if (bVar19) {
          FUN_14683db56(param_2,0);
        }
        else {
          FUN_14683dc76(param_2,local_a8,0);
        }
        break;
      default:
        FUN_140033559("Runtime\\Json\\Public\\Serialization/JsonSerializer.h",0x224,
                      L"Could not print Json Value, unrecognized type.");
        break;
      case 3:
        cVar6 = (**(code **)(*plVar11 + 0x88))();
        if (bVar19) {
          if (cVar6 == '\0') {
            uVar8 = FUN_141360850(local_a8[2]);
            FUN_14683cf22(param_2,uVar8);
          }
          else {
            FUN_14047e026(local_a8[2],&local_78);
            local_b8 = local_78;
            local_b0 = (int)uStack_70 + -1;
            if ((int)uStack_70 == 0) {
              local_b0 = 0;
            }
            FUN_14683ce06(param_2);
            lVar16 = local_78;
LAB_145d35e42:
            if (lVar16 != 0) {
              FUN_1400020a8();
            }
          }
        }
        else {
          if (cVar6 != '\0') {
            FUN_14047e026(local_a8[2],&local_c8);
            lVar16 = local_c8;
            iVar13 = local_c0 + -1;
            if (local_c0 == 0) {
              iVar13 = 0;
            }
            iVar15 = (int)local_a8[1] + -1;
            if ((int)local_a8[1] == 0) {
              iVar15 = 0;
            }
            local_78 = *local_a8;
            uStack_70 = CONCAT44(uStack_70._4_4_,iVar15);
            FUN_14683da58(param_2);
            local_88 = CONCAT62(local_88._2_6_,0x20);
            (**(code **)(*(longlong *)param_2[1] + 0x170))((longlong *)param_2[1],&local_88,2);
            local_88 = lVar16;
            uStack_80 = CONCAT44(uStack_80._4_4_,iVar13);
            FUN_145d3640c(param_2[1],&local_88);
            *(undefined4 *)(param_2 + 4) = 7;
            lVar16 = local_c8;
            goto LAB_145d35e42;
          }
          uVar8 = FUN_141360850(local_a8[2]);
          FUN_14683d038(param_2,local_a8,uVar8);
        }
        break;
      case 4:
        uVar8 = FUN_140b87404();
        if (bVar19) {
          FUN_14683d184(param_2,uVar8);
        }
        else {
          FUN_14683d2bc(param_2,local_a8,uVar8);
        }
        break;
      case 5:
        if ((char)local_a8[4] != '\x01') {
          *(undefined1 *)(local_a8 + 4) = 1;
          lVar16 = (longlong)(int)uStack_90;
          uVar7 = (int)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar7);
          if (uStack_90._4_4_ < uVar7) {
            FUN_145928098(&local_98,uVar18 & 0xffffffff);
          }
          local_98[lVar16 * 2] = local_a8;
          local_98[lVar16 * 2 + 1] = local_a0;
          if (local_a0 != (undefined8 **)0x0) {
            LOCK();
            *(int *)(local_a0 + 1) = *(int *)(local_a0 + 1) + 1;
            UNLOCK();
          }
          if (bVar19) {
            FUN_14683d618(param_2);
          }
          else {
            FUN_14683d734(param_2,local_a8);
          }
          puVar9 = (undefined8 *)FUN_140482996(local_a8[2]);
          local_78 = 0;
          iVar13 = *(int *)(puVar9 + 1);
          uVar5 = *puVar9;
          uStack_70 = CONCAT44(uStack_70._4_4_,iVar13);
          if (iVar13 == 0) {
            uStack_70 = 0;
            uVar18 = 0;
          }
          else {
            FUN_14047d15e(&local_78,iVar13,0);
            FUN_14047cdb6(local_78,uVar5,iVar13);
            uVar18 = (ulonglong)(int)uStack_70;
            if (0 < (longlong)uVar18) {
              uVar14 = uVar18 + 1;
              lVar16 = uVar18 << 4;
              do {
                lVar16 = lVar16 + -0x10;
                plVar11 = (longlong *)FUN_145927ea5(local_78 + lVar16);
                uVar18 = uStack_90;
                lVar12 = (longlong)(int)uStack_90;
                uVar7 = (int)uStack_90 + 1;
                uStack_90 = CONCAT44(uStack_90._4_4_,uVar7);
                if (uStack_90._4_4_ < uVar7) {
                  FUN_145928098(&local_98,uVar18 & 0xffffffff);
                }
                local_98[lVar12 * 2] = plVar11 + 2;
                local_98[lVar12 * 2 + 1] = plVar11;
                if (plVar11 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar10 = plVar11 + 1;
                  *(int *)plVar10 = (int)*plVar10 + -1;
                  UNLOCK();
                  if ((int)*plVar10 == 0) {
                    (**(code **)*plVar11)(plVar11);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar11 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar11 + 0x10))(plVar11);
                    }
                  }
                }
                uVar14 = uVar14 - 1;
              } while (1 < uVar14);
              uVar18 = uStack_70 & 0xffffffff;
            }
          }
          FUN_14047c710(local_78,uVar18 & 0xffffffff);
          lVar16 = local_78;
          goto LAB_145d35e42;
        }
        FUN_14683d522(param_2);
        break;
      case 6:
        if ((char)local_a8[4] == '\x01') {
          FUN_145d36462(param_2);
        }
        else {
          *(undefined1 *)(local_a8 + 4) = 1;
          lVar16 = (longlong)(int)uStack_90;
          uVar7 = (int)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar7);
          if (uStack_90._4_4_ < uVar7) {
            FUN_145928098(&local_98,uVar18 & 0xffffffff);
          }
          local_98[lVar16 * 2] = local_a8;
          local_98[lVar16 * 2 + 1] = local_a0;
          if (local_a0 != (undefined8 **)0x0) {
            LOCK();
            *(int *)(local_a0 + 1) = *(int *)(local_a0 + 1) + 1;
            UNLOCK();
          }
          if (bVar19) {
            FUN_145d36528(param_2);
          }
          else {
            FUN_14683d8ae(param_2,local_a8);
          }
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          puVar9 = (undefined8 *)(*(code *)**(undefined8 **)local_a8[2])();
          uVar5 = *puVar9;
          plVar11 = (longlong *)puVar9[1];
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          FUN_1459287d4(uVar5,&local_78);
          FUN_1459283f8(uVar5,&local_88);
          lVar16 = (longlong)(int)uStack_80;
          if (0 < lVar16) {
            uVar18 = lVar16 + 1;
            lVar16 = lVar16 << 4;
            do {
              lVar16 = lVar16 + -0x10;
              lVar12 = local_88 + lVar16;
              lVar17 = local_78 + lVar16;
              plVar10 = (longlong *)FUN_14001cc68(0x38,0x10);
              plVar10[1] = (longlong)&DAT_100000001;
              *plVar10 = (longlong)&PTR_FUN_149e442f0;
              FUN_145927f00(plVar10 + 2,lVar17,lVar12);
              uVar14 = uStack_90;
              lVar12 = (longlong)(int)uStack_90;
              uVar7 = (int)uStack_90 + 1;
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar7);
              if (uStack_90._4_4_ < uVar7) {
                FUN_145928098(&local_98,uVar14 & 0xffffffff);
              }
              local_98[lVar12 * 2] = plVar10 + 2;
              local_98[lVar12 * 2 + 1] = plVar10;
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
                UNLOCK();
                LOCK();
                plVar4 = plVar10 + 1;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)*plVar4 == 0) {
                  (**(code **)*plVar10)(plVar10);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar10 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar10 + 0x10))(plVar10);
                  }
                }
              }
              uVar18 = uVar18 - 1;
            } while (1 < uVar18);
          }
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar10 = plVar11 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          FUN_14047c710(local_88,uStack_80 & 0xffffffff);
          if (local_88 != 0) {
            FUN_1400020a8();
          }
          FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
          if (local_78 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
    ppuVar3 = local_a0;
    if (local_a0 != (undefined8 **)0x0) {
      LOCK();
      ppuVar1 = local_a0 + 1;
      *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
      UNLOCK();
      if (*(int *)ppuVar1 == 0) {
        (*(code *)**local_a0)(local_a0);
        LOCK();
        piVar2 = (int *)((longlong)ppuVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppuVar3)[2])(ppuVar3);
        }
      }
    }
    iVar13 = (int)uStack_90;
  } while( true );
}



// FUNCTION 145d36220 FUN_145d36220 body=349 status=ok
// SIG undefined FUN_145d36220(void)

void FUN_145d36220(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_78 [46];
  undefined2 local_4a;
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  }
  local_48 = &DAT_149e02010;
  local_40 = 2;
  FUN_145d3640c(param_1[1]);
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_48 = (undefined1 *)CONCAT62(local_48._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_48,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_48 = (undefined1 *)*param_2;
  local_40 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_40 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_48);
  local_4a = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_4a,2);
  local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  local_40 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    local_40 = 0;
  }
  local_48 = (undefined1 *)*param_3;
  (**(code **)(*param_1 + 0x18))(param_1,&local_48);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3637e FUN_145d3637e body=140 status=ok
// SIG undefined FUN_145d3637e(void)

void FUN_145d3637e(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2a = 0x22;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_2a,2);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_14153ce42(param_1);
  local_2a = 0x22;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_2a,2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3640c FUN_145d3640c body=86 status=ok
// SIG undefined FUN_145d3640c(void)

void FUN_145d3640c(longlong *param_1,undefined8 *param_2)

{
  wchar_t *_Str;
  uint uVar1;
  size_t sVar2;
  
  _Str = (wchar_t *)*param_2;
  if (_Str == (wchar_t *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 1);
    if ((int)uVar1 < 1) {
      if (uVar1 == 0xffffffff) {
        sVar2 = wcslen(_Str);
        uVar1 = (uint)sVar2;
      }
    }
    else if (_Str[uVar1 - 1] == L'\0') {
      uVar1 = uVar1 - 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145d3644b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x170))(param_1,_Str,(longlong)(int)uVar1 * 2);
  return;
}



// FUNCTION 145d36462 FUN_145d36462 body=196 status=ok
// SIG undefined FUN_145d36462(void)

void FUN_145d36462(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &DAT_149e02010;
  local_30 = 2;
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x24);
  iVar2 = iVar1 + -1;
  *(int *)(param_1 + 0x24) = iVar2;
  plVar3 = *(longlong **)(param_1 + 8);
  if (1 < iVar1) {
    do {
      local_38 = (undefined1 *)CONCAT62(local_38._2_6_,9);
      (**(code **)(*plVar3 + 0x170))(plVar3,&local_38,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar3 = *(longlong **)(param_1 + 8);
  }
  local_38 = (undefined1 *)CONCAT62(local_38._2_6_,0x7d);
  (**(code **)(*plVar3 + 0x170))(plVar3,&local_38,2);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  FUN_14047c610(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = 3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d36528 FUN_145d36528 body=283 status=ok
// SIG undefined FUN_145d36528(void)

void FUN_145d36528(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar3 = uVar2 >> 1 | (uint)((uVar2 & 1) != 0) << 0x1f;
  if ((2 < uVar3) && (uVar3 != 6)) {
    local_38 = (undefined1 *)CONCAT62(local_38._2_6_,0x2c);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_38,2);
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  if (uVar2 != 0) {
    local_38 = &DAT_149e02010;
    local_30 = 2;
    FUN_145d3640c(*(undefined8 *)(param_1 + 8));
    iVar4 = *(int *)(param_1 + 0x24);
    if (0 < iVar4) {
      plVar1 = *(longlong **)(param_1 + 8);
      do {
        local_38 = (undefined1 *)CONCAT62(local_38._2_6_,9);
        (**(code **)(*plVar1 + 0x170))(plVar1,&local_38,2);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  local_38 = (undefined1 *)CONCAT62(local_38._2_6_,0x7b);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_38,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar4 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar4 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar4);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar4 * 4) = 6;
  *(undefined4 *)(param_1 + 0x20) = 2;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d36644 FUN_145d36644 body=81 status=ok
// SIG undefined FUN_145d36644(void)

void FUN_145d36644(longlong param_1,int param_2)

{
  if ((param_2 == 0 && *(int *)(param_1 + 0xb78) != -1) && (*(longlong *)(param_1 + 0xb70) != 0)) {
    (**(code **)(*(longlong *)(param_1 + 0x8c0) + 0x18))(param_1 + 0x8c0);
  }
  FUN_140f0695c(param_1,param_2);
  return;
}



// FUNCTION 145d36696 FUN_145d36696 body=153 status=ok
// SIG undefined FUN_145d36696(void)

void FUN_145d36696(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (**(code **)(*param_1 + 0x20))();
  if (iVar3 == param_3) {
    if (((*(byte *)((longlong)param_1 + 0x3a1) & 1) != 0) && ((char)param_1[-0xe9] == '\x03')) {
      plVar1 = param_1 + -0x118;
      lVar4 = FUN_1447210f0(plVar1);
      if (lVar4 != 0) {
        lVar4 = FUN_1447210f0(plVar1);
        if ((*(byte *)(lVar4 + 0x155) & 0x20) == 0) {
          FUN_148d577aa(plVar1);
        }
      }
    }
    cVar2 = FUN_144904448(param_1 + 0x7a);
    if (cVar2 != '\0') {
      FUN_14072d42a(param_1 + 0x7a,0);
    }
    FUN_14153d186(param_1);
    *(byte *)((longlong)param_1 + 0x3a1) = *(byte *)((longlong)param_1 + 0x3a1) & 0xfe;
    *(undefined1 *)(param_1 + 0x79) = 0;
  }
  return;
}



// FUNCTION 145d36730 FUN_145d36730 body=267 status=ok
// SIG undefined FUN_145d36730(void)

void FUN_145d36730(longlong param_1,undefined4 param_2,longlong param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  undefined4 uStack_28;
  undefined2 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xf0);
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    else if (lVar2 == 0) goto LAB_145d36813;
    FUN_14153d286(param_1,param_3,param_2);
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 2);
    *pbVar1 = *pbVar1 | 1;
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 1000))();
    if (cVar4 != '\0') {
      local_30.s.LowPart._0_1_ = 1;
      local_30.s.HighPart = 0;
      uStack_28 = 0;
      local_24 = 0;
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0xf0);
      (**(code **)(*plVar3 + 0x2d8))
                (plVar3,*(undefined8 *)(param_3 + 0x90),*(undefined4 *)(param_3 + 0xa0));
    }
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 2);
    *pbVar1 = *pbVar1 & 0xfe;
    QueryPerformanceCounter(&local_30);
    *(double *)(param_1 + 0xe0) =
         (double)CONCAT44(local_30.s.HighPart,local_30.s.LowPart) * DAT_14c83f420 + 16777216.0;
  }
LAB_145d36813:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3683c FUN_145d3683c body=40 status=ok
// SIG undefined FUN_145d3683c(void)

undefined8 FUN_145d3683c(undefined8 param_1,int param_2)

{
  FUN_14153d3d4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d36864 FUN_145d36864 body=138 status=ok
// SIG undefined FUN_145d36864(void)

undefined1 * FUN_145d36864(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d368ee();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FGPUSkinVertexFactoryCommonShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x21d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cae2288;
  return &LAB_1461c56c4;
}



// FUNCTION 145d368ee FUN_145d368ee body=261 status=ok
// SIG undefined FUN_145d368ee(void)

void FUN_145d368ee(void)

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
              0x110) < DAT_14cae2308) {
    FUN_144b3d300(&DAT_14cae2308);
    if (DAT_14cae2308 == -1) {
      FUN_145d369f4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FGPUSkinVertexFactoryCommonShaderParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x20e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cae2288,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14351ab12);
      _Init_thread_footer(&DAT_14cae2308);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d369f4 FUN_145d369f4 body=226 status=ok
// SIG undefined FUN_145d369f4(void)

longlong * FUN_145d369f4(longlong *param_1)

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
  pcVar13 = FUN_1463d0ea6;
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



// FUNCTION 145d36adc FUN_145d36adc body=136 status=ok
// SIG undefined FUN_145d36adc(void)

code * FUN_145d36adc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MorphUpdatedFrameNumber";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000215;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147adec02;
}



// FUNCTION 145d36b64 FUN_145d36b64 body=138 status=ok
// SIG undefined FUN_145d36b64(void)

code * FUN_145d36b64(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumBoneInfluencesParam";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000212;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147aded16;
}



// FUNCTION 145d36bee FUN_145d36bee body=140 status=ok
// SIG undefined FUN_145d36bee(void)

undefined1 * FUN_145d36bee(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d36c7a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TonemappingParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"LumenVisualize::FTonemappingParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca06890;
  return &LAB_14722cbd8;
}



// FUNCTION 145d36c7a FUN_145d36c7a body=258 status=ok
// SIG undefined FUN_145d36c7a(void)

void FUN_145d36c7a(void)

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
              0x110) < DAT_14ca06910) {
    FUN_144b3d300(&DAT_14ca06910);
    if (DAT_14ca06910 == -1) {
      FUN_145d36d7e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_50 = 0x20;
      local_58 = 0x20;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FTonemappingParameters";
      local_38 = 0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06890,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3a7f);
      _Init_thread_footer(&DAT_14ca06910);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d36d7e FUN_145d36d7e body=226 status=ok
// SIG undefined FUN_145d36d7e(void)

longlong * FUN_145d36d7e(longlong *param_1)

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
  pcVar13 = FUN_1462ea292;
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



// FUNCTION 145d36e66 FUN_145d36e66 body=138 status=ok
// SIG undefined FUN_145d36e66(void)

code * FUN_145d36e66(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorGradingLUT";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d36ef0;
}



// FUNCTION 145d36ef0 FUN_145d36ef0 body=138 status=ok
// SIG undefined FUN_145d36ef0(void)

code * FUN_145d36ef0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EyeAdaptationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722cbdc;
}



// FUNCTION 145d36f7a FUN_145d36f7a body=205 status=ok
// SIG undefined FUN_145d36f7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d36f7a(void)

{
  if ((DAT_14c9c6ef7 & 2) == 0) {
    DAT_14c9c6ef7 = DAT_14c9c6ef7 | 2;
    _DAT_14c9c6e98 = L"FShadowObjectCullPS";
    _DAT_14c9c6eb0 = FUN_146826540;
    _DAT_14c9c6eb8 = FUN_146825d77;
    _DAT_14c9c6ec0 = FUN_146825fd6;
    _DAT_14c9c6ec8 = FUN_1407e02ea;
    _DAT_14c9c6ed0 = FUN_146826273;
    _DAT_14c9c6ea8 = FUN_14714f3ee;
    _DAT_14c9c6ee8 = 0xffffffff000000e0;
    _DAT_14c9c6ef0 = 8;
    DAT_14c9c6ef4 = 0;
    _DAT_14c9c6ed8 = &LAB_14714f418;
    FUN_145d37048();
    FUN_1407e00cc(&DAT_14c9c6e90);
    return;
  }
  return;
}



// FUNCTION 145d37048 FUN_145d37048 body=123 status=ok
// SIG undefined FUN_145d37048(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d37048(void)

{
  _DAT_14c9c9718 = L"BASE";
  DAT_14c9c9742 = 4;
  _DAT_14c9c9720 = FUN_140b35ae4();
  _DAT_14c9c9728 = DAT_14c9c6ea0;
  _DAT_14c9c9730 = &LAB_14682652b;
  DAT_14c9c6ea0 = &DAT_14c9c9718;
  DAT_14c9c6ef5 = DAT_14c9c6ef5 + '\x01';
  _DAT_14c9c9738 = 0x100000000;
  if (*(char *)(_DAT_14c9c9720 + 100) != '\0') {
    DAT_14c9c6ef6 = DAT_14c9c6ef6 + '\x01';
  }
  return;
}



// FUNCTION 145d370c4 FUN_145d370c4 body=226 status=ok
// SIG undefined FUN_145d370c4(void)

longlong * FUN_145d370c4(longlong *param_1)

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
  pcVar13 = FUN_1462c087c;
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



// FUNCTION 145d371ac FUN_145d371ac body=144 status=ok
// SIG undefined FUN_145d371ac(void)

code * FUN_145d371ac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d3723c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"LightTileIntersectionParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLightTileIntersectionParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x60000000ea;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145d37346;
}



// FUNCTION 145d3723c FUN_145d3723c body=265 status=ok
// SIG undefined FUN_145d3723c(void)

undefined * FUN_145d3723c(void)

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
              0x110) < DAT_14c9c9ab8) {
    FUN_144b3d300(&DAT_14c9c9ab8);
    if (DAT_14c9c9ab8 == -1) {
      FUN_145d373d6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLightTileIntersectionParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x75;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c9a38,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be7742);
      _Init_thread_footer(&DAT_14c9c9ab8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c9a38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d37346 FUN_145d37346 body=144 status=ok
// SIG undefined FUN_145d37346(void)

code * FUN_145d37346(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145a22220();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"CulledObjectBufferParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FDistanceFieldCulledObjectBufferParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x40000000e9;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462c0a14;
}



// FUNCTION 145d373d6 FUN_145d373d6 body=226 status=ok
// SIG undefined FUN_145d373d6(void)

longlong * FUN_145d373d6(longlong *param_1)

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
  pcVar13 = FUN_1462c0904;
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



// FUNCTION 145d374ba FUN_145d374ba body=138 status=ok
// SIG undefined FUN_145d374ba(void)

code * FUN_145d374ba(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowTileStartOffsets";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000007c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471533d4;
}



// FUNCTION 145d37544 FUN_145d37544 body=138 status=ok
// SIG undefined FUN_145d37544(void)

code * FUN_145d37544(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWNextStartOffset";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000078;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471534e8;
}



// FUNCTION 145d375ce FUN_145d375ce body=138 status=ok
// SIG undefined FUN_145d375ce(void)

code * FUN_145d375ce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NextStartOffset";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000007d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d374ba;
}



// FUNCTION 145d37658 FUN_145d37658 body=40 status=ok
// SIG undefined FUN_145d37658(void)

undefined8 FUN_145d37658(undefined8 param_1,int param_2)

{
  FUN_145d37680();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d37680 FUN_145d37680 body=958 status=ok
// SIG undefined FUN_145d37680(void)

void FUN_145d37680(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bcd4ab0;
  if (param_1[0xea] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe5) = 0;
  if (param_1[0xe4] != 0) {
    FUN_1400020a8();
  }
  FUN_145d37b5c(param_1 + 0xdc);
  *(undefined4 *)(param_1 + 0xdb) = 0;
  if (param_1[0xda] != 0) {
    FUN_1400020a8();
  }
  FUN_145d37b94(param_1 + 0xd2);
  FUN_145d37a3e(param_1 + 0xd1);
  FUN_145d37a3e(param_1 + 0xd0);
  param_1[0xce] = &PTR_FUN_14bcd51e8;
  if (param_1[0xcf] != 0) {
    thunk_FUN_1400020a8(param_1[0xcf],1);
  }
  FUN_145d37ab4(param_1 + 0xcc);
  plVar3 = (longlong *)param_1[0xcb];
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
  plVar3 = (longlong *)param_1[0xc9];
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
  FUN_145d37afc(param_1[0xc6],*(undefined4 *)(param_1 + 199));
  if (param_1[0xc6] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  if (param_1[0xc3] != 0) {
    FUN_1400020a8();
  }
  FUN_145d37a7c(param_1 + 0xbb);
  *(undefined4 *)(param_1 + 0xba) = 0;
  if (param_1[0xb9] != 0) {
    FUN_1400020a8();
  }
  FUN_145d37a7c(param_1 + 0xb1);
  *(undefined4 *)(param_1 + 0xaf) = 0;
  if (param_1[0xae] != 0) {
    FUN_1400020a8();
  }
  FUN_145d37b24(param_1 + 0xa6);
  *(undefined4 *)(param_1 + 0xa5) = 0;
  if (param_1[0xa4] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x9c);
  FUN_144760e21(param_1[0x95],*(undefined4 *)(param_1 + 0x96));
  if (param_1[0x95] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x92],*(undefined4 *)(param_1 + 0x93));
  if (param_1[0x92] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x8f],*(undefined4 *)(param_1 + 0x90));
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x8c],*(undefined4 *)(param_1 + 0x8d));
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x89],*(undefined4 *)(param_1 + 0x8a));
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x86],*(undefined4 *)(param_1 + 0x87));
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x83],*(undefined4 *)(param_1 + 0x84));
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x80],*(undefined4 *)(param_1 + 0x81));
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145d37a3e FUN_145d37a3e body=61 status=ok
// SIG undefined FUN_145d37a3e(void)

void FUN_145d37a3e(longlong *param_1)

{
  FUN_1412d55ee(0);
  if (*param_1 != 0) {
    *param_1 = 0;
    FUN_1412d55b0(param_1);
  }
  FUN_1412d5698(0);
  FUN_1412d55b0(param_1,*param_1);
  return;
}



// FUNCTION 145d37a7c FUN_145d37a7c body=55 status=ok
// SIG undefined FUN_145d37a7c(void)

void FUN_145d37a7c(longlong *param_1)

{
  FUN_145d37c1c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d37ab4 FUN_145d37ab4 body=34 status=ok
// SIG undefined FUN_145d37ab4(void)

void FUN_145d37ab4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = FUsdListener::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145d37ad2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145d37ad6 FUN_145d37ad6 body=38 status=ok
// SIG undefined FUN_145d37ad6(void)

undefined8 FUN_145d37ad6(undefined8 param_1,int param_2)

{
  FUN_145d37bcc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d37afc FUN_145d37afc body=40 status=ok
// SIG undefined FUN_145d37afc(void)

void FUN_145d37afc(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1490d6cf4(param_1);
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 145d37b24 FUN_145d37b24 body=55 status=ok
// SIG undefined FUN_145d37b24(void)

void FUN_145d37b24(longlong *param_1)

{
  FUN_145d37f10(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d37b5c FUN_145d37b5c body=55 status=ok
// SIG undefined FUN_145d37b5c(void)

void FUN_145d37b5c(longlong *param_1)

{
  FUN_145d37d98(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d37b94 FUN_145d37b94 body=55 status=ok
// SIG undefined FUN_145d37b94(void)

void FUN_145d37b94(longlong *param_1)

{
  FUN_145d38092(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d37bcc FUN_145d37bcc body=80 status=ok
// SIG undefined FUN_145d37bcc(void)

void FUN_145d37bcc(undefined8 *param_1)

{
  *param_1 = FUsdListenerImpl::vftable;
  FUN_14141661e(param_1 + 0x21);
  FUN_14141661e(param_1 + 0x19);
  FUN_14141661e(param_1 + 0x11);
  FUN_14141661e(param_1 + 9);
  FUN_14141661e(param_1 + 1);
  return;
}



// FUNCTION 145d37c1c FUN_145d37c1c body=378 status=ok
// SIG undefined FUN_145d37c1c(void)

void FUN_145d37c1c(longlong *param_1,int param_2)

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
      FUN_149450f98((longlong)iStack_54 * 0x28 + *local_70);
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
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 145d37d98 FUN_145d37d98 body=374 status=ok
// SIG undefined FUN_145d37d98(void)

void FUN_145d37d98(longlong *param_1,int param_2)

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
      FUN_149450eba((longlong)iStack_54 * 0x68 + *local_70);
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
    FUN_14059f004(param_1,param_2);
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



// FUNCTION 145d37f10 FUN_145d37f10 body=384 status=ok
// SIG undefined FUN_145d37f10(void)

void FUN_145d37f10(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
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
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 145d38092 FUN_145d38092 body=407 status=ok
// SIG undefined FUN_145d38092(void)

void FUN_145d38092(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
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
      plVar2 = (longlong *)(*local_78 + (longlong)iStack_5c * 0xa0);
      FUN_149450f00(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
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
    FUN_14152de66(param_1,param_2);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d3822a FUN_145d3822a body=407 status=ok
// SIG undefined FUN_145d3822a(void)

void FUN_145d3822a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_29;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14153d700(&local_40,local_20,local_28,local_29);
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d383c2 FUN_145d383c2 body=61 status=ok
// SIG undefined FUN_145d383c2(void)

void FUN_145d383c2(void)

{
  FUN_14153d836(&DAT_14c963ff8);
  if (DAT_14c964018 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c963ff8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d38400 FUN_145d38400 body=142 status=ok
// SIG undefined FUN_145d38400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145d38400(longlong *param_1,undefined1 (*param_2) [16],longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  *param_3 = 0;
  plVar1 = param_1;
  if ((_DAT_1499d77c0 != *param_2) && (_DAT_1499d77a0 != *param_2)) {
    if (_DAT_1499d7780 != *param_2) {
      return 0x80004002;
    }
    plVar1 = param_1 + 1;
  }
  *param_3 = (longlong)plVar1;
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0x80004002;
  }
  else {
    (**(code **)(*param_1 + 8))();
    uVar2 = 0x80004002;
    if (*param_3 != 0) {
      uVar2 = 0;
    }
  }
                    /* WARNING: Read-only address (ram,0x0001499d7780) is written */
                    /* WARNING: Read-only address (ram,0x0001499d77a0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d77c0) is written */
  return uVar2;
}



// FUNCTION 145d38498 FUN_145d38498 body=40 status=ok
// SIG undefined FUN_145d38498(void)

undefined8 FUN_145d38498(undefined8 param_1,int param_2)

{
  FUN_145d384c0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d384c0 FUN_145d384c0 body=111 status=ok
// SIG undefined FUN_145d384c0(void)

void FUN_145d384c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f92590;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145c53d04(param_1 + 0xd,0);
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149f91dc0;
  if (param_1[0xc] != 0) {
    FUN_140113f3a();
    param_1[0xc] = 0;
  }
  FUN_1458c70ee(param_1);
  return;
}



// FUNCTION 145d38530 FUN_145d38530 body=146 status=ok
// SIG undefined FUN_145d38530(void)

code * FUN_145d38530(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d385c2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightTileScatterParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenLightTileScatterParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000002c3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9fde70;
  return FUN_1456cadd8;
}



// FUNCTION 145d385c2 FUN_145d385c2 body=261 status=ok
// SIG undefined FUN_145d385c2(void)

void FUN_145d385c2(void)

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
              0x110) < DAT_14c9fdef0) {
    FUN_144b3d300(&DAT_14c9fdef0);
    if (DAT_14c9fdef0 == -1) {
      FUN_145d386c8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLumenLightTileScatterParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0xf7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fde70,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9932f);
      _Init_thread_footer(&DAT_14c9fdef0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d386c8 FUN_145d386c8 body=226 status=ok
// SIG undefined FUN_145d386c8(void)

longlong * FUN_145d386c8(longlong *param_1)

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
  pcVar13 = FUN_1462e252c;
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



// FUNCTION 145d387b0 FUN_145d387b0 body=130 status=ok
// SIG undefined FUN_145d387b0(void)

undefined1 * FUN_145d387b0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DrawIndirectArgs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145d387ac;
}



// FUNCTION 145d38832 FUN_145d38832 body=138 status=ok
// SIG undefined FUN_145d38832(void)

code * FUN_145d38832(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DispatchIndirectArgs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000f9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d387b0;
}



// FUNCTION 145d388bc FUN_145d388bc body=138 status=ok
// SIG undefined FUN_145d388bc(void)

undefined1 * FUN_145d388bc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d38946();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CloudParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FPathTracingCloudParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x43a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca21a30;
  return &LAB_1460192e8;
}



// FUNCTION 145d38946 FUN_145d38946 body=261 status=ok
// SIG undefined FUN_145d38946(void)

void FUN_145d38946(void)

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
              0x110) < DAT_14ca21ab0) {
    FUN_144b3d300(&DAT_14ca21ab0);
    if (DAT_14ca21ab0 == -1) {
      FUN_145d38a4c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FPathTracingCloudParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x426;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca21a30,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95c55);
      _Init_thread_footer(&DAT_14ca21ab0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d38a4c FUN_145d38a4c body=226 status=ok
// SIG undefined FUN_145d38a4c(void)

longlong * FUN_145d38a4c(longlong *param_1)

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
  pcVar13 = FUN_1462f5be8;
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



// FUNCTION 145d38b34 FUN_145d38b34 body=138 status=ok
// SIG undefined FUN_145d38b34(void)

code * FUN_145d38b34(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CloudClipDistKm";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4400000430;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d38bbe;
}



// FUNCTION 145d38bbe FUN_145d38bbe body=138 status=ok
// SIG undefined FUN_145d38bbe(void)

code * FUN_145d38bbe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CloudLayerTopKm";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000042f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727aed2;
}



// FUNCTION 145d38c48 FUN_145d38c48 body=62 status=ok
// SIG undefined FUN_145d38c48(void)

void FUN_145d38c48(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145d38c86(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 145d38c86 FUN_145d38c86 body=89 status=ok
// SIG undefined FUN_145d38c86(void)

ulonglong FUN_145d38c86(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 145d38ce0 FUN_145d38ce0 body=79 status=ok
// SIG undefined FUN_145d38ce0(void)

undefined8 * FUN_145d38ce0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4b40f0;
  param_1[0x1f] = &PTR_LAB_14a4b4460;
  FUN_145d38d30(param_1 + 0x20);
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d38d30 FUN_145d38d30 body=72 status=ok
// SIG undefined FUN_145d38d30(void)

void FUN_145d38d30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4ab2a0;
  FUN_141177934(param_1 + 0xe);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dbac8(param_1);
  return;
}



// FUNCTION 145d38d78 FUN_145d38d78 body=62 status=ok
// SIG undefined FUN_145d38d78(void)

void FUN_145d38d78(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145d38db6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 145d38db6 FUN_145d38db6 body=89 status=ok
// SIG undefined FUN_145d38db6(void)

ulonglong FUN_145d38db6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 145d38e10 FUN_145d38e10 body=62 status=ok
// SIG undefined FUN_145d38e10(void)

void FUN_145d38e10(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145d38e4e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 145d38e4e FUN_145d38e4e body=89 status=ok
// SIG undefined FUN_145d38e4e(void)

ulonglong FUN_145d38e4e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 145d38ea8 FUN_145d38ea8 body=65 status=ok
// SIG undefined FUN_145d38ea8(void)

undefined8 * FUN_145d38ea8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b1a90;
  FUN_144a2da94(param_1 + 0x28);
  FUN_145d38eea(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d38eea FUN_145d38eea body=86 status=ok
// SIG undefined FUN_145d38eea(void)

void FUN_145d38eea(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1b1b80;
  FUN_144a2da94(param_1 + 0x20);
  FUN_144a2da94(param_1 + 0x19);
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 145d38f40 FUN_145d38f40 body=73 status=ok
// SIG undefined FUN_145d38f40(void)

void FUN_145d38f40(void)

{
  FUN_14153d890(&DAT_14cb97fb0);
  FUN_1449db362(&DAT_14cb97f98);
  FUN_1449db362(&DAT_14cb97f88);
  FUN_1449db362(&DAT_14cb97f78);
  FUN_1449db362(&DAT_14cb97f68);
  return;
}



// FUNCTION 145d38f8a FUN_145d38f8a body=40 status=ok
// SIG undefined FUN_145d38f8a(void)

undefined8 FUN_145d38f8a(undefined8 param_1,int param_2)

{
  FUN_145d38fb2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d38fb2 FUN_145d38fb2 body=111 status=ok
// SIG undefined FUN_145d38fb2(void)

void FUN_145d38fb2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b56c970;
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
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d39022 FUN_145d39022 body=37 status=ok
// SIG undefined FUN_145d39022(void)

void FUN_145d39022(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1b0);
  FUN_145d39048(param_2);
  return;
}



// FUNCTION 145d39048 FUN_145d39048 body=265 status=ok
// SIG undefined FUN_145d39048(void)

undefined8 * FUN_145d39048(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b76b380;
  FUN_144a5dc74(param_1 + 4);
  FUN_144a5dc74(param_1 + 6);
  *(undefined4 *)(param_1 + 8) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x1e;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_1405c5f70(param_1 + 0x16);
  FUN_1405c5f70(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x1e) = 0x41200000;
  FUN_1405c5f70(param_1 + 0x1f);
  param_1[0x23] = 0x3200000014;
  param_1[0x24] = 0x4000000040000000;
  param_1[0x25] = 3;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x3e4ccccd;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  return param_1;
}



// FUNCTION 145d39152 FUN_145d39152 body=39 status=ok
// SIG undefined FUN_145d39152(void)

void FUN_145d39152(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145d3917a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145d3917a FUN_145d3917a body=84 status=ok
// SIG undefined FUN_145d3917a(void)

undefined8 FUN_145d3917a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140ade8e4();
  if (lVar1 != 0) {
    lVar2 = FUN_140ade7fe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = FUN_145d391ce(lVar1,*(undefined4 *)(param_1 + 0xe0));
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 145d391ce FUN_145d391ce body=28 status=ok
// SIG undefined FUN_145d391ce(void)

undefined4 FUN_145d391ce(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_140ade790();
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}



// FUNCTION 145d391ea FUN_145d391ea body=37 status=ok
// SIG undefined FUN_145d391ea(void)

void FUN_145d391ea(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145d39210();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145d39210 FUN_145d39210 body=72 status=ok
// SIG undefined FUN_145d39210(void)

ulonglong FUN_145d39210(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1400f6e0c(uVar1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xb8) != 0)) {
    uVar3 = FUN_145d39258(*(longlong *)(lVar2 + 0xb8),(int)param_1[0x1c]);
    return uVar3;
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),DAT_14cbcf408) & 0xffffffffffffff01;
}



// FUNCTION 145d39258 FUN_145d39258 body=42 status=ok
// SIG undefined FUN_145d39258(void)

uint FUN_145d39258(void)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_14588001a();
  uVar1 = DAT_14cbe45e0;
  if (lVar2 != 0) {
    uVar1 = (uint)*(byte *)(lVar2 + 0x10);
  }
  return uVar1 & 0xffffff01;
}



// FUNCTION 145d39282 FUN_145d39282 body=37 status=ok
// SIG undefined FUN_145d39282(void)

void FUN_145d39282(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145d392a8();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145d392a8 FUN_145d392a8 body=72 status=ok
// SIG undefined FUN_145d392a8(void)

ulonglong FUN_145d392a8(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1400f6e0c(uVar1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xb8) != 0)) {
    uVar3 = FUN_145d392f0(*(longlong *)(lVar2 + 0xb8),(int)param_1[0x1c]);
    return uVar3;
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),DAT_14cbcf409) & 0xffffffffffffff01;
}



// FUNCTION 145d392f0 FUN_145d392f0 body=42 status=ok
// SIG undefined FUN_145d392f0(void)

byte FUN_145d392f0(void)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_14588001a();
  bVar1 = DAT_14cbe45e0._1_1_;
  if (lVar2 != 0) {
    bVar1 = *(byte *)(lVar2 + 0x11);
  }
  return bVar1 & 1;
}



// FUNCTION 145d3931a FUN_145d3931a body=37 status=ok
// SIG undefined FUN_145d3931a(void)

void FUN_145d3931a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145d39340();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145d39340 FUN_145d39340 body=72 status=ok
// SIG undefined FUN_145d39340(void)

ulonglong FUN_145d39340(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1400f6e0c(uVar1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xb8) != 0)) {
    uVar3 = FUN_145d39388(*(longlong *)(lVar2 + 0xb8),(int)param_1[0x1c]);
    return uVar3;
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),DAT_14cbcf40a) & 0xffffffffffffff01;
}



// FUNCTION 145d39388 FUN_145d39388 body=42 status=ok
// SIG undefined FUN_145d39388(void)

byte FUN_145d39388(void)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_14588001a();
  bVar1 = DAT_14cbe45e0._2_1_;
  if (lVar2 != 0) {
    bVar1 = *(byte *)(lVar2 + 0x12);
  }
  return bVar1 & 1;
}



// FUNCTION 145d393b2 FUN_145d393b2 body=115 status=ok
// SIG undefined FUN_145d393b2(void)

void FUN_145d393b2(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_145d39426();
  if (lVar1 != 0) {
    lVar1 = FUN_141285870(lVar1);
    if (lVar1 != 0) {
      FUN_145d3948c(param_1,local_24);
      FUN_145d394e8(lVar1,&DAT_14cbcb570,local_24);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d39426 FUN_145d39426 body=101 status=ok
// SIG undefined FUN_145d39426(void)

longlong FUN_145d39426(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = FUN_144729dda(param_1 + 200);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 200);
    if ((*(longlong *)(lVar2 + 0x78) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x78) + 0x80), lVar2 != 0)) {
      lVar3 = FUN_144a79464();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 145d3948c FUN_145d3948c body=92 status=ok
// SIG undefined FUN_145d3948c(void)

undefined4 * FUN_145d3948c(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145d39426();
  if (((lVar1 == 0) || (*(longlong *)(lVar1 + 0x1e0) == 0)) ||
     (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x1e0) + 0x68), lVar1 == 0)) {
    *param_2 = 0xffff;
  }
  else {
    uVar2 = FUN_14479d2ce(param_1 + 200);
    FUN_1409845a0(lVar1,param_2,uVar2);
  }
  return param_2;
}



// FUNCTION 145d394e8 FUN_145d394e8 body=294 status=ok
// SIG undefined FUN_145d394e8(void)

undefined4 FUN_145d394e8(longlong param_1,uint *param_2,undefined8 param_3)

{
  ushort uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0xffff;
  lVar4 = FUN_140b9fe48(param_1,param_3);
  if (((lVar4 != 0) && (lVar2 = *(longlong *)(lVar4 + 0x38), lVar2 != 0)) &&
     (*(int *)(lVar2 + 0x60) != *(int *)(lVar2 + 0x8c))) {
    lVar5 = lVar2 + 0x90;
    if (*(longlong *)(lVar2 + 0x98) != 0) {
      lVar5 = *(longlong *)(lVar2 + 0x98);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar2 + 0xa0) - 1U & *param_2) * 4);
    if (iVar6 != -1) {
      do {
        lVar5 = *(longlong *)(lVar2 + 0x58) + (longlong)iVar6 * 0x38;
        if (*(uint *)(*(longlong *)(lVar2 + 0x58) + (longlong)iVar6 * 0x38) == *param_2) {
          if ((ushort *)(lVar5 + 0x28) == (ushort *)0x0 || lVar5 == 0) goto LAB_145d39532;
          uVar1 = *(ushort *)(lVar5 + 0x28);
          if (((short)uVar1 < 0) || (*(int *)(param_1 + 200) <= (int)(short)uVar1))
          goto LAB_145d39532;
          uVar3 = FUN_145a0da06(param_1,*(undefined8 *)
                                         (*(longlong *)(param_1 + 0xc0) + (ulonglong)uVar1 * 8),
                                &local_38,lVar4);
          break;
        }
        iVar6 = *(int *)(lVar5 + 0x30);
        uVar3 = 0;
      } while (iVar6 != -1);
      goto LAB_145d39534;
    }
  }
LAB_145d39532:
  uVar3 = 0;
LAB_145d39534:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 145d39610 FUN_145d39610 body=187 status=ok
// SIG undefined FUN_145d39610(void)

void FUN_145d39610(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14123bd7e();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_38 = FUN_148ec989e;
      local_30 = 0;
      local_48 = &local_38;
      FUN_145d396cc(param_1,param_2,&DAT_14cb92a88,param_1);
      local_38 = FUN_148ec9952;
      local_30 = 0;
      local_48 = &local_38;
      FUN_145d396cc(param_1,param_2,&DAT_14cb92bf0,param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d396cc FUN_145d396cc body=284 status=ok
// SIG undefined FUN_145d396cc(void)

void FUN_145d396cc(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_5 + 1);
  local_48 = (code *)*param_5;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_14153d8de(param_2,param_3,param_4);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_48 = (code *)*param_3;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  if (lVar4 != 0) {
    local_48 = FUN_140ed4b7e;
    local_40 = 0;
    local_58 = &local_48;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d397ea FUN_145d397ea body=40 status=ok
// SIG undefined FUN_145d397ea(void)

undefined8 FUN_145d397ea(undefined8 param_1,int param_2)

{
  FUN_145d39812();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d39812 FUN_145d39812 body=111 status=ok
// SIG undefined FUN_145d39812(void)

void FUN_145d39812(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc6e3a0;
  FUN_140fed6e2(param_1 + 0x32);
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed55c(param_1);
  return;
}



// FUNCTION 145d39882 FUN_145d39882 body=40 status=ok
// SIG undefined FUN_145d39882(void)

undefined8 FUN_145d39882(undefined8 param_1,int param_2)

{
  FUN_145d398aa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d398aa FUN_145d398aa body=111 status=ok
// SIG undefined FUN_145d398aa(void)

void FUN_145d398aa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd0b4c0;
  param_1[0x21] = &PTR_FUN_14bd0b7c0;
  param_1[0x22] = &PTR_FUN_14bd0b7f0;
  param_1[0x23] = &PTR_FUN_14bd0b808;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_141136054(param_1);
  return;
}



// FUNCTION 145d39922 FUN_145d39922 body=143 status=ok
// SIG undefined FUN_145d39922(void)

undefined8 * FUN_145d39922(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = FUN_14007ca06();
  FUN_140f8b11c(param_1,uVar2);
  *param_1 = &PTR_FUN_14bee8e80;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14beea0e0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80;
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar3) && (param_1[5] = puVar3, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 145d399b2 FUN_145d399b2 body=209 status=ok
// SIG undefined FUN_145d399b2(void)

void FUN_145d399b2(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x58);
    if (cVar1 != '\0') {
      uVar2 = FUN_14153d962(*(undefined8 *)(param_1 + 0x60));
      FUN_14485c47a(param_1 + 0x68,uVar2);
      plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x60) + 8))();
      if (plVar3 == (longlong *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (**(code **)(*plVar3 + 0x5d8))(plVar3);
      }
      FUN_14485c47a(param_1 + 0x70,uVar2);
    }
  }
  local_40 = &DAT_14592ea66;
  local_38 = 0;
  FUN_145d39b96(local_30,param_1);
  FUN_145d39a84(&local_40,local_30);
  FUN_1449db362(local_30);
  *(undefined **)(param_1 + 0x78) = local_40;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d39a84 FUN_145d39a84 body=233 status=ok
// SIG undefined FUN_145d39a84(void)

undefined8 * FUN_145d39a84(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14cbca7d0,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14cbca7d8;
      lVar6 = (longlong)(int)DAT_14cbca7d8;
      DAT_14cbca7d8 = DAT_14cbca7d8 + 1;
      if (DAT_14cbca7dc < DAT_14cbca7d8) {
        FUN_1447a71f6(&DAT_14cbca7d0,uVar3);
      }
      lVar2 = DAT_14cbca7d0;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cbca7d0 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d39b96 FUN_145d39b96 body=428 status=ok
// SIG undefined FUN_145d39b96(void)

longlong * FUN_145d39b96(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145d39c76:
    *puVar5 = &PTR_LAB_14b9a0470;
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
    *puVar5 = &PTR_FUN_14b9a0400;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145d39c76;
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
    *puVar5 = &PTR_LAB_14b9a0470;
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
    *puVar5 = &PTR_FUN_14b9a0400;
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



// FUNCTION 145d39d42 FUN_145d39d42 body=126 status=ok
// SIG undefined FUN_145d39d42(void)

void FUN_145d39d42(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_14001cc68(0x128,0x10);
    FUN_145d39dc0(lVar2,param_2);
    puVar1 = *(undefined8 **)(param_1 + 0xa98);
    *(longlong *)(param_1 + 0xa98) = lVar2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      lVar2 = *(longlong *)(param_1 + 0xa98);
    }
    FUN_1459a0a08(param_1 + 0x978,lVar2 + 0x118);
    return;
  }
  return;
}



// FUNCTION 145d39dc0 FUN_145d39dc0 body=243 status=ok
// SIG undefined FUN_145d39dc0(void)

undefined8 * FUN_145d39dc0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = &PTR_FUN_14b2fa080;
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  FUN_145951594(param_1 + 3,param_2 + 0x18);
  *param_1 = &PTR_FUN_14b92d9e0;
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  FUN_1412bd664(param_1 + 0xb,param_2 + 0x58);
  FUN_1412bd664(param_1 + 0x11,param_2 + 0x88);
  FUN_1412bd664(param_1 + 0x17,param_2 + 0xb8);
  FUN_1412bd664(param_1 + 0x1d,param_2 + 0xe8);
  param_1[0x23] = 0;
  iVar1 = *(int *)(param_2 + 0x120);
  uVar2 = *(undefined8 *)(param_2 + 0x118);
  *(int *)(param_1 + 0x24) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  }
  else {
    FUN_14141afca(param_1 + 0x23,iVar1,0);
    FUN_14115008a(param_1[0x23],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 145d39ebe FUN_145d39ebe body=539 status=ok
// SIG undefined FUN_145d39ebe(void)

undefined8 * FUN_145d39ebe(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b37ae40;
  FUN_144a63cba(param_1 + 0x72);
  *(undefined4 *)(param_1 + 0x16) = 0xa56a5e6c;
  param_1[0x17] = "avatar_selector";
  FUN_1400b22c2(local_68,"Avatar.Selectors");
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (ulonglong)local_48._4_4_ << 0x20;
  local_40 = 0;
  uStack_38 = 0;
  FUN_1446ddda2(&local_58,"parent",0);
  FUN_1404e49fa(param_1 + 0x72,&local_58);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145d3a0da();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_58,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = (undefined4)local_58;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = local_58._4_4_;
    *(undefined4 *)(param_1 + 0x5c) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_50._4_4_;
    if (param_1 + 0x5b == &local_58) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x5e) = (undefined4)local_40;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_40._4_4_;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d3a004;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145d3a004:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3a0da FUN_145d3a0da body=55 status=ok
// SIG undefined FUN_145d3a0da(void)

void FUN_145d3a0da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54e38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54e38 = FUN_140002ddd(FUN_1464af5d2,uVar1,L"AvatarSelectorDef");
  }
  return;
}



// FUNCTION 145d3a112 FUN_145d3a112 body=43 status=ok
// SIG undefined FUN_145d3a112(void)

undefined8 FUN_145d3a112(undefined8 param_1,int param_2)

{
  FUN_145d3a13e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x150);
  }
  return param_1;
}


