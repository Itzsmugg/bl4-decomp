// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1457e1a6a FUN_1457e1a6a body=69 status=ok
// SIG undefined FUN_1457e1a6a(void)

longlong FUN_1457e1a6a(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400b465c();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 != 0)) {
    lVar2 = FUN_140b6d0be();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1457e1ab0 FUN_1457e1ab0 body=50 status=ok
// SIG undefined FUN_1457e1ab0(void)

undefined8 FUN_1457e1ab0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14101d5a6();
  if (cVar1 != '\0') {
    cVar1 = FUN_1457e1ae2(param_1);
    if (cVar1 != '\0') {
      uVar2 = FUN_1457e1bea(param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1457e1ae2 FUN_1457e1ae2 body=262 status=ok
// SIG undefined FUN_1457e1ae2(void)

ulonglong FUN_1457e1ae2(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)(param_1 + 0x138);
  local_30 = param_1 + 0x148;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (*(int *)(param_1 + 0x160) != 0) {
    FUN_1449c0562(&local_38);
  }
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_58 = local_38;
  local_50 = local_30;
  local_60 = plVar2;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      cVar1 = *(char *)(*(longlong *)(*local_60 + 0x10 + (longlong)iStack_44 * 0x28) + 0x100);
      plVar2 = (longlong *)CONCAT71((int7)((ulonglong)plVar2 >> 8),cVar1);
      if (cVar1 != '\0') break;
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  else {
    plVar2 = (longlong *)0x0;
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar2 & 0xffffffff;
}



// FUNCTION 1457e1bea FUN_1457e1bea body=326 status=ok
// SIG undefined FUN_1457e1bea(void)

ulonglong FUN_1457e1bea(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = (**(code **)(*param_1 + 0x180))();
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  uVar3 = local_68;
  if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x1f0) != 0)) {
    lVar6 = FUN_141030f66();
    uVar3 = local_68;
    if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0)) {
      plVar1 = param_1 + 9;
      plVar2 = param_1 + 0xb;
      local_58 = 0x100000000;
      local_48 = 0xffffffff;
      uStack_40 = 0;
      uStack_50 = plVar2;
      if ((int)param_1[0xe] == 0) {
        iVar7 = 0;
      }
      else {
        FUN_1449c0562(&local_58);
        iVar7 = (int)param_1[0xe];
      }
      uStack_60 = CONCAT44(uStack_3c,uStack_40);
      local_68 = local_48;
      uVar3 = local_68;
      local_78 = (undefined4)local_58;
      uStack_74 = local_58._4_4_;
      uStack_70 = (undefined4)uStack_50;
      uStack_6c = uStack_50._4_4_;
      local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
      local_80 = plVar1;
      if ((local_68._4_4_ != iVar7) || (uStack_50 != plVar2)) {
        iVar5 = local_68._4_4_;
        local_68 = uVar3;
        do {
          cVar4 = FUN_1457e1d32(lVar6,*(undefined4 *)(*local_80 + (longlong)iVar5 * 0xc));
          if (cVar4 == '\0') {
            uVar8 = 0;
            uVar3 = local_68;
            break;
          }
          local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
          FUN_1449c0562(&local_78);
          iVar5 = local_68._4_4_;
        } while (((local_68._4_4_ != iVar7) || ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar2)
                 ) || (uVar3 = local_68, local_80 != plVar1));
      }
    }
  }
  local_68 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e1d32 FUN_1457e1d32 body=120 status=ok
// SIG undefined FUN_1457e1d32(void)

undefined1 FUN_1457e1d32(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x1b0) != *(int *)(param_1 + 0x1dc)) {
    lVar2 = param_1 + 0x1e0;
    if (*(longlong *)(param_1 + 0x1e8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x1e8);
    }
    uVar3 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x1f0) - 1U & param_2) * 4);
    if (uVar3 != 0xffffffff) {
      while (puVar1 = (uint *)(*(longlong *)(param_1 + 0x1a8) + (longlong)(int)uVar3 * 0x14),
            *puVar1 != param_2) {
        uVar3 = puVar1[3];
        if (uVar3 == 0xffffffff) {
          return 0;
        }
      }
      if (puVar1 == (uint *)0x0) {
        return 0;
      }
      if (puVar1 == (uint *)0xfffffffffffffffc) {
        return 0;
      }
      return (char)puVar1[2];
    }
  }
  return 0;
}



// FUNCTION 1457e1daa FUN_1457e1daa body=48 status=ok
// SIG undefined FUN_1457e1daa(void)

void FUN_1457e1daa(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  if ((undefined8 *)(param_1 + 0x198) != param_2) {
    if (*(char *)(param_2 + 1) == '\x01') {
      *(undefined8 *)(param_1 + 0x198) = *param_2;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x1a0) != '\x01') {
        return;
      }
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x1a0) = uVar1;
  }
  return;
}



// FUNCTION 1457e1dda FUN_1457e1dda body=48 status=ok
// SIG undefined FUN_1457e1dda(void)

void FUN_1457e1dda(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  if ((undefined8 *)(param_1 + 0x1a8) != param_2) {
    if (*(char *)(param_2 + 1) == '\x01') {
      *(undefined8 *)(param_1 + 0x1a8) = *param_2;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x1b0) != '\x01') {
        return;
      }
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x1b0) = uVar1;
  }
  return;
}



// FUNCTION 1457e1e0a FUN_1457e1e0a body=56 status=ok
// SIG undefined FUN_1457e1e0a(void)

ulonglong FUN_1457e1e0a(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  cVar2 = FUN_1410209b8((ulonglong)uVar1);
  if ((cVar2 == '\0') ||
     (lVar3 = (ulonglong)uVar1 * 0x3c, (*(byte *)((longlong)&DAT_14ca814c8 + lVar3 + 2) & 0x40) == 0
     )) {
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),
                     *(undefined1 *)((longlong)&DAT_14ca814d0 + lVar3 + 7)) & 0xffffffffffffff01;
  }
  return uVar4;
}



// FUNCTION 1457e1e50 FUN_1457e1e50 body=21 status=ok
// SIG undefined FUN_1457e1e50(void)

undefined8 FUN_1457e1e50(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1457e1e8e FUN_1457e1e8e body=44 status=ok
// SIG undefined FUN_1457e1e8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457e1e8e(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cbc8b1c = _DAT_14cbc8b1c + -1;
  *param_1 = DAT_14cbc8b10;
  DAT_14cbc8b10 = param_1;
  return;
}



// FUNCTION 1457e1ec6 FUN_1457e1ec6 body=48 status=ok
// SIG undefined FUN_1457e1ec6(void)

void FUN_1457e1ec6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x490);
  FUN_141021b94(param_2);
  *param_2 = &PTR_FUN_14b693d30;
  return;
}



// FUNCTION 1457e1ef6 FUN_1457e1ef6 body=84 status=ok
// SIG undefined FUN_1457e1ef6(void)

void FUN_1457e1ef6(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_4 + 0x58))(param_4,param_3);
  if (lVar1 == 0) {
    lVar1 = FUN_140312a30(param_4,param_3);
  }
  FUN_141022b78(param_1 + 0xd8,param_2,param_3,lVar1);
  return;
}



// FUNCTION 1457e1f4a FUN_1457e1f4a body=260 status=ok
// SIG undefined FUN_1457e1f4a(void)

undefined4
FUN_1457e1f4a(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_4 != 0) {
    local_70 = param_7;
    local_78 = param_6;
    FUN_1457e2052(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  }
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*param_1 + 8))(0,local_68);
  if ((local_5c & 2) == 0) {
    local_58 = FUN_140938dea();
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  }
  local_70 = param_7;
  local_78 = param_6;
  uVar1 = FUN_1457e2052(param_3,param_2,&local_58,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_68);
  if ((local_5c & 4) != 0) {
    FUN_141022d94(&local_58);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e2052 FUN_1457e2052 body=3 status=ok
// SIG undefined FUN_1457e2052(void)

undefined8 FUN_1457e2052(void)

{
  return 0;
}



// FUNCTION 1457e2056 FUN_1457e2056 body=54 status=ok
// SIG undefined FUN_1457e2056(void)

undefined1 FUN_1457e2056(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141026712(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 1457e208c FUN_1457e208c body=76 status=ok
// SIG undefined FUN_1457e208c(void)

void FUN_1457e208c(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1401f3db8(param_1,param_2);
    param_1 = param_1 + 3;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1457e20d8 FUN_1457e20d8 body=117 status=ok
// SIG undefined FUN_1457e20d8(void)

void FUN_1457e20d8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
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



// FUNCTION 1457e214d FUN_1457e214d body=76 status=ok
// SIG undefined FUN_1457e214d(void)

void FUN_1457e214d(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1401f3db8(param_1,param_2);
    param_1 = param_1 + 3;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1457e219a FUN_1457e219a body=115 status=ok
// SIG undefined FUN_1457e219a(void)

void FUN_1457e219a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1457e2218 FUN_1457e2218 body=167 status=ok
// SIG undefined FUN_1457e2218(void)

undefined8 * FUN_1457e2218(undefined8 *param_1)

{
  FUN_144805d84();
  *param_1 = &PTR_FUN_14b9456f0;
  param_1[5] = &PTR_LAB_14b945b70;
  param_1[6] = &PTR_LAB_14b945bb0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 2;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x131) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0xbf80000000000002;
  FUN_1457e22c0(param_1 + 0x2d);
  param_1[0x4c] = 0;
  FUN_1457e233e(param_1 + 0x4d);
  FUN_140b967fa(param_1,1);
  return param_1;
}



// FUNCTION 1457e22c0 FUN_1457e22c0 body=126 status=ok
// SIG undefined FUN_1457e22c0(void)

void FUN_1457e22c0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0xff;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  return;
}



// FUNCTION 1457e233e FUN_1457e233e body=269 status=ok
// SIG undefined FUN_1457e233e(void)

longlong FUN_1457e233e(longlong param_1)

{
  FUN_141028572();
  FUN_141028572(param_1 + 0xc);
  FUN_141028572(param_1 + 0x18);
  FUN_141028572(param_1 + 0x24);
  FUN_141028572(param_1 + 0x30);
  FUN_141028572(param_1 + 0x3c);
  FUN_141028572(param_1 + 0x48);
  FUN_141028572(param_1 + 0x54);
  FUN_141028572(param_1 + 0x60);
  FUN_141028572(param_1 + 0x6c);
  FUN_141028572(param_1 + 0x78);
  FUN_141028572(param_1 + 0x84);
  FUN_141028572(param_1 + 0x90);
  FUN_1413e94bc(param_1 + 0x9c,0x3f800000);
  FUN_1412df474(param_1 + 0xa8);
  FUN_141028572(param_1 + 0xb4);
  FUN_141028572(param_1 + 0xc0);
  FUN_141028572(param_1 + 0xcc);
  FUN_141028572(param_1 + 0xd8);
  FUN_141028572(param_1 + 0xe4);
  FUN_1413f3c00(param_1 + 0xf0,1);
  FUN_141028572(param_1 + 0xfc);
  FUN_141028572(param_1 + 0x108);
  return param_1;
}



// FUNCTION 1457e2462 FUN_1457e2462 body=29 status=ok
// SIG undefined FUN_1457e2462(void)

undefined8 FUN_1457e2462(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457e2480 FUN_1457e2480 body=40 status=ok
// SIG undefined FUN_1457e2480(void)

undefined8 FUN_1457e2480(undefined8 param_1,int param_2)

{
  FUN_1457e24a8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457e24a8 FUN_1457e24a8 body=64 status=ok
// SIG undefined FUN_1457e24a8(void)

void FUN_1457e24a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7fc570;
  FUN_1447a1747(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1457e24ea FUN_1457e24ea body=65 status=ok
// SIG undefined FUN_1457e24ea(void)

undefined8 * FUN_1457e24ea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a759b40;
  FUN_1457e252c(param_1 + 0x14);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457e252c FUN_1457e252c body=92 status=ok
// SIG undefined FUN_1457e252c(void)

void FUN_1457e252c(longlong param_1)

{
  FUN_1457e2588(param_1 + 0xd8);
  FUN_14102a02c(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457e2588 FUN_1457e2588 body=75 status=ok
// SIG undefined FUN_1457e2588(void)

void FUN_1457e2588(longlong *param_1)

{
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



// FUNCTION 1457e25d4 FUN_1457e25d4 body=179 status=ok
// SIG undefined FUN_1457e25d4(void)

void FUN_1457e25d4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_2;
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x2e8);
    if (lVar1 == 0) {
      local_48 = DAT_14cb7ca00;
      local_50 = DAT_14cb7c9f8;
      FUN_1448075d0(local_40);
      lVar1 = FUN_140e01592(param_1,local_40,0);
      *(longlong *)(param_1 + 0x2e8) = lVar1;
      if (local_28 != 0) {
        FUN_1400020a8(local_28);
        lVar1 = *(longlong *)(param_1 + 0x2e8);
      }
    }
    FUN_14102a034(lVar1 + 0x10,&local_58);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e2696 FUN_1457e2696 body=40 status=ok
// SIG undefined FUN_1457e2696(void)

undefined8 FUN_1457e2696(undefined8 param_1,int param_2)

{
  FUN_140f4522c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457e26cc FUN_1457e26cc body=40 status=ok
// SIG undefined FUN_1457e26cc(void)

undefined8 FUN_1457e26cc(undefined8 param_1,int param_2)

{
  FUN_140f71356();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457e2702 FUN_1457e2702 body=40 status=ok
// SIG undefined FUN_1457e2702(void)

undefined8 FUN_1457e2702(undefined8 param_1,int param_2)

{
  FUN_1407f60da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457e272a FUN_1457e272a body=107 status=ok
// SIG undefined FUN_1457e272a(void)

void FUN_1457e272a(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8);
  }
  plVar1 = (longlong *)FUN_144a7b9cd();
  uVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,param_2,uVar2);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(longlong *)(param_1 + 0x20) = param_1;
  if (DAT_14cb03498 != 0) {
    *(longlong *)(DAT_14cb03498 + 8) = param_1 + 0x10;
  }
  *(longlong *)(param_1 + 0x10) = DAT_14cb03498;
  *(longlong **)(param_1 + 0x18) = &DAT_14cb03498;
  DAT_14cb03498 = param_1 + 0x10;
  return;
}



// FUNCTION 1457e2796 FUN_1457e2796 body=83 status=ok
// SIG undefined FUN_1457e2796(void)

void FUN_1457e2796(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_141030f22();
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) & 0x10) == 0)) {
    plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x398) + 0x20))(param_1 + 0x398);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001457e27e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x30))(plVar1,param_2,*(code **)(*plVar1 + 0x30));
      return;
    }
  }
  return;
}



// FUNCTION 1457e27ea FUN_1457e27ea body=525 status=ok
// SIG undefined FUN_1457e27ea(void)

void FUN_1457e27ea(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x180))();
  lVar2 = FUN_141030f3a(uVar1);
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x1a0) == 0)) {
    local_40 = FUN_148ef7f9e;
    local_38 = 0;
    FUN_1457e2a84(lVar2 + 0x20,&local_48,param_1);
    *(undefined8 *)(param_1 + 0x1a0) = local_48;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x180))();
  lVar2 = FUN_141165984(uVar1);
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x1a8) == 0)) {
    local_40 = FUN_148ef7fbc;
    local_38 = 0;
    FUN_1457e2b84(lVar2 + 0x40,&local_48,param_1);
    *(undefined8 *)(param_1 + 0x1a8) = local_48;
  }
  local_40 = (code *)0x14b9da0aa;
  local_38 = 0x11;
  FUN_1446e940c(&local_48,&local_40);
  local_40 = (code *)0x14b9da0ce;
  local_38 = 0x17;
  FUN_1446e940c(local_4c,&local_40);
  FUN_140208bae(&local_40,local_4c,&local_48,&DAT_149e1d734);
  FUN_14101dbe4(param_1,&local_40);
  if (local_40 != (code *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  local_40 = (code *)0x14b9da0fe;
  local_38 = 0x10;
  FUN_1446e940c(&local_48,&local_40);
  local_40 = (code *)0x14b9da0ce;
  local_38 = 0x17;
  FUN_1446e940c(local_4c,&local_40);
  FUN_140208bae(&local_40,local_4c,&local_48,&DAT_149e060ac);
  FUN_14101d98e(param_1,&local_40);
  if (local_40 != (code *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  FUN_1457e29f8(param_1,&local_40);
  FUN_14101dc7e(param_1,(byte)local_40 & local_40._1_1_);
  FUN_14101e326(param_1);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e29f8 FUN_1457e29f8 body=138 status=ok
// SIG undefined FUN_1457e29f8(void)

undefined1 * FUN_1457e29f8(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [46];
  undefined1 local_1a;
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2[1] = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x180))();
  lVar2 = FUN_140e5f200(uVar1);
  if (lVar2 != 0) {
    FUN_140e3515a(lVar2,&local_1a,*(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0xe0));
    if ((&local_1a != param_2) && ((local_19 & 1) != 0)) {
      *param_2 = local_1a;
      param_2[1] = 1;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e2a84 FUN_1457e2a84 body=254 status=ok
// SIG undefined FUN_1457e2a84(void)

undefined8
FUN_1457e2a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b438ba0;
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
  *local_48 = &PTR_FUN_14b9dbd70;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145ce3550(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e2b84 FUN_1457e2b84 body=254 status=ok
// SIG undefined FUN_1457e2b84(void)

undefined8
FUN_1457e2b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b4edcd0;
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
  *local_48 = &PTR_FUN_14b9dbde0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145caf794(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e2c8e FUN_1457e2c8e body=45 status=ok
// SIG undefined FUN_1457e2c8e(void)

void FUN_1457e2c8e(longlong param_1)

{
  FUN_141033307(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457e2cbc FUN_1457e2cbc body=43 status=ok
// SIG undefined FUN_1457e2cbc(void)

undefined8 * FUN_1457e2cbc(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_149ee37a0;
  param_1[5] = &PTR_FUN_149ee3a40;
  return param_1;
}



// FUNCTION 1457e2ce8 FUN_1457e2ce8 body=12 status=ok
// SIG undefined FUN_1457e2ce8(void)

void FUN_1457e2ce8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001457e2cf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1457e2cf4 FUN_1457e2cf4 body=31 status=ok
// SIG undefined FUN_1457e2cf4(void)

undefined8 FUN_1457e2cf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457e2d22 FUN_1457e2d22 body=158 status=ok
// SIG undefined FUN_1457e2d22(void)

LPCRITICAL_SECTION FUN_1457e2d22(LPCRITICAL_SECTION param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[0x9a].LockSemaphore = (HANDLE)0x0;
  param_1[0x9a].SpinCount = 0x10000000000;
  param_1[0x9b].SpinCount = 0;
  *(undefined4 *)&param_1[0x9c].DebugInfo = 0;
  *(undefined4 *)((longlong)&param_1[0x9c].DebugInfo + 4) = 0x100;
  param_1[0x9c].LockCount = -1;
  param_1[0x9c].RecursionCount = 0;
  param_1[0xa9].LockCount = 0;
  param_1[0xa9].RecursionCount = 0;
  *(undefined4 *)&param_1[0xa9].OwningThread = 0;
  *(undefined1 *)&param_1[0xa9].LockSemaphore = 0;
  FUN_1457e2dc2(local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e2dc2 FUN_1457e2dc2 body=223 status=ok
// SIG undefined FUN_1457e2dc2(void)

undefined8 FUN_1457e2dc2(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_149e020b0;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_149e16dd0;
  local_30[3] = param_2;
  local_30[4] = FUN_14275b5e0;
  FUN_1448b6402(&DAT_14c86aa00,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e2eb0 FUN_1457e2eb0 body=40 status=ok
// SIG undefined FUN_1457e2eb0(void)

undefined8 FUN_1457e2eb0(undefined8 param_1,int param_2)

{
  FUN_140febf64();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457e2ed8 FUN_1457e2ed8 body=26 status=ok
// SIG undefined FUN_1457e2ed8(void)

void FUN_1457e2ed8(undefined8 param_1)

{
  FUN_1415b18c8();
  FUN_1457e2ef2(param_1);
  return;
}



// FUNCTION 1457e2ef2 FUN_1457e2ef2 body=154 status=ok
// SIG undefined FUN_1457e2ef2(void)

void FUN_1457e2ef2(longlong param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x398) != *(int *)(param_1 + 0x3c4)) {
    FUN_148dd26ac(param_1 + 0x390);
    FUN_148dd27f0(param_1 + 0x390);
  }
  local_38 = &local_48;
  local_30 = &local_40;
  local_40 = FUN_1442182c8;
  local_20 = &local_30;
  local_28 = FUN_14103ac9a;
  local_48 = param_1;
  FUN_14103a8e8(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e2fa4 FUN_1457e2fa4 body=42 status=ok
// SIG undefined FUN_1457e2fa4(void)

void FUN_1457e2fa4(longlong param_1)

{
  FUN_1447cd2ec(param_1 + 0x15b8,0);
  FUN_1447f69b6(param_1 + 0x15c8);
  return;
}



// FUNCTION 1457e2fce FUN_1457e2fce body=21 status=ok
// SIG undefined FUN_1457e2fce(void)

undefined8 FUN_1457e2fce(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1457e2fe4 FUN_1457e2fe4 body=98 status=ok
// SIG undefined FUN_1457e2fe4(void)

void FUN_1457e2fe4(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    return;
  }
  cVar1 = FUN_144729dda(param_1 + 8);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 8);
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x360);
      goto LAB_1457e301e;
    }
  }
  lVar2 = 0;
LAB_1457e301e:
  lVar3 = FUN_1447210f0(param_2);
  if (lVar3 != lVar2) {
    return;
  }
  FUN_1457e3046(param_1);
  return;
}



// FUNCTION 1457e3046 FUN_1457e3046 body=449 status=ok
// SIG undefined FUN_1457e3046(void)

void FUN_1457e3046(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined8 local_e0;
  longlong *local_d0;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88 [2];
  undefined1 local_78 [24];
  int local_60;
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar2 = FUN_144729dda(param_1 + 8);
  if (cVar2 != '\0') {
    FUN_1457e3208(local_88,param_1 + 0x10);
    local_38 = *(undefined8 *)(param_1 + 0x60);
    FUN_1457e3286(param_1);
    lVar4 = FUN_14479d2ce(param_1 + 8);
    if (((*(longlong *)(lVar4 + 0x30) == 0) ||
        (*(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x360) == 0)) ||
       (iVar3 = FUN_14490d72a(), uVar1 = local_b8, iVar3 != 3)) {
      local_a8 = 0x100000000;
      local_98 = 0xffffffff;
      uStack_90 = 0;
      uStack_a0 = local_78;
      if (local_60 == 0) {
        local_60 = 0;
      }
      else {
        FUN_1449c0562(&local_a8);
      }
      local_c8 = (undefined4)local_a8;
      uStack_c4 = local_a8._4_4_;
      uStack_c0 = (undefined4)uStack_a0;
      uStack_bc = uStack_a0._4_4_;
      uStack_b0 = CONCAT44(uStack_8c,uStack_90);
      local_b8 = local_98;
      uVar1 = local_b8;
      local_b8._4_4_ = (int)((ulonglong)local_98 >> 0x20);
      local_d0 = local_88;
      if ((local_b8._4_4_ != local_60) || (uStack_a0 != local_78)) {
        iVar3 = local_b8._4_4_;
        local_b8 = uVar1;
        do {
          do {
            lVar4 = *local_d0 + (longlong)iVar3 * 0x68;
            local_e0 = 0;
            local_e8 = 0;
            FUN_145781ba8(param_1,lVar4 + 0x10,*(undefined1 *)(lVar4 + 0x38),
                          *(undefined1 *)(lVar4 + 0x40));
            local_b8 = CONCAT44(local_b8._4_4_,(uint)local_b8 & ~uStack_c4);
            FUN_1449c0562(&local_c8);
            iVar3 = local_b8._4_4_;
          } while (local_b8._4_4_ != local_60);
        } while (((undefined1 *)CONCAT44(uStack_bc,uStack_c0) != local_78) ||
                (uVar1 = local_b8, local_d0 != local_88));
      }
    }
    local_b8 = uVar1;
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_14103c068(local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457e3208 FUN_1457e3208 body=125 status=ok
// SIG undefined FUN_1457e3208(void)

undefined8 * FUN_1457e3208(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1457e3332();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1457e3286 FUN_1457e3286 body=170 status=ok
// SIG undefined FUN_1457e3286(void)

void FUN_1457e3286(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144729dda(param_1 + 8);
  if (cVar1 != '\0') {
    lVar3 = FUN_14479d2ce(param_1 + 8);
    if ((*(longlong *)(lVar3 + 0x30) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x360), lVar3 != 0)) {
      lVar4 = FUN_14103c0a0(lVar3);
      if (lVar4 != 0) {
        iVar2 = FUN_14490d72a(lVar3);
        if (iVar2 != 3) {
          local_28 = &local_40;
          local_30 = FUN_143d24752;
          local_40 = param_1;
          local_38 = lVar4;
          FUN_140bc66fe(lVar4);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e3332 FUN_1457e3332 body=436 status=ok
// SIG undefined FUN_1457e3332(void)

longlong * FUN_1457e3332(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        do {
          local_60 = uVar5;
          FUN_148834d4c(*local_78 + (longlong)iVar6 * 0x68 + 0x10);
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
          FUN_1449c0562(&local_70);
          iVar6 = local_60._4_4_;
          uVar5 = local_60;
        } while (local_60._4_4_ != iVar7);
      } while ((local_68 != plVar1) || (local_78 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1457e34e8 FUN_1457e34e8 body=182 status=ok
// SIG undefined FUN_1457e34e8(void)

void FUN_1457e34e8(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  (**(code **)(*(longlong *)(param_1 + 0x3c50) + 0x18))(param_1 + 0x3c50);
  lVar4 = FUN_1447210f0(param_1);
  if ((lVar4 != 0) && (lVar1 = *(longlong *)(param_1 + 0x83a0), lVar1 != 0)) {
    if (*(longlong *)(lVar4 + 0x1f0) == 0) {
      puVar5 = (undefined8 *)(lVar4 + 0x458);
    }
    else {
      puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar5;
    lVar4 = FUN_144a61814(uVar2,(undefined8 *)(param_1 + 0x83a0));
    if (lVar4 != 0) {
      FUN_1405a424c(uVar2,lVar1);
    }
    *(undefined8 *)(param_1 + 0x83a0) = 0;
  }
  FUN_1457e359e(param_1);
  cVar3 = FUN_144a783a6(param_1);
  *(byte *)(param_1 + 0x41a5) = *(byte *)(param_1 + 0x41a5) & 0xfd | cVar3 * '\x02';
  FUN_14030d586(param_1,0);
  return;
}



// FUNCTION 1457e359e FUN_1457e359e body=89 status=ok
// SIG undefined FUN_1457e359e(void)

void FUN_1457e359e(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_1457e35f8(param_1,*(undefined8 *)(param_1 + 0x3c0));
  if ((*(longlong *)(param_1 + 0x3c0) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x3c0) + 0x420) & 2) != 0)) {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 0x868) + 0x30))(param_1 + 0x868);
    uVar1 = FUN_1408a1fe2(uVar1);
    FUN_140d526ba(uVar1,0);
  }
  FUN_1457e3636(param_1);
  return;
}



// FUNCTION 1457e35f8 FUN_1457e35f8 body=62 status=ok
// SIG undefined FUN_1457e35f8(void)

void FUN_1457e35f8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x420) & 2) != 0)) {
    lVar1 = FUN_144a782da(param_1 + 0x1808,&DAT_14cb72620);
    if (lVar1 != 0) {
      FUN_140c82872(lVar1,5);
      return;
    }
  }
  return;
}



// FUNCTION 1457e3636 FUN_1457e3636 body=92 status=ok
// SIG undefined FUN_1457e3636(void)

void FUN_1457e3636(longlong *param_1)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x708))();
  FUN_1457e3692(param_1);
  lVar3 = FUN_1447210f0(param_1);
  if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x155) & 0x20) == 0)) {
    cVar2 = (**(code **)(*param_1 + 0x708))(param_1);
    if (cVar1 != cVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001457e368b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x8d8))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1457e3692 FUN_1457e3692 body=82 status=ok
// SIG undefined FUN_1457e3692(void)

void FUN_1457e3692(longlong param_1)

{
  longlong lVar1;
  
  FUN_1457e36e4();
  lVar1 = *(longlong *)(param_1 + 0x430);
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(lVar1 + 0x1e8) + 0x48))(lVar1 + 0x1e8);
                    /* WARNING: Could not recover jumptable at 0x0001457e36d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x430) + 0x1e8) + 0x50))
              (*(longlong *)(param_1 + 0x430) + 0x1e8);
    return;
  }
  return;
}



// FUNCTION 1457e36e4 FUN_1457e36e4 body=202 status=ok
// SIG undefined FUN_1457e36e4(void)

void FUN_1457e36e4(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1[0x78];
  (**(code **)(*param_1 + 0x578))();
  FUN_1410ccde4(param_1,0);
  (**(code **)(*param_1 + 0x440))(param_1,0);
  param_1[0x78] = 0;
  FUN_1405f18a8(param_1);
  (**(code **)(*param_1 + 0x758))(param_1);
  if (lVar1 != 0) {
    local_38[0] = lVar1;
    uVar2 = FUN_14477b072(param_1,DAT_14caf6498);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,local_38);
  }
  (**(code **)(*param_1 + 0x6e0))(param_1);
  (**(code **)(*param_1 + 0x770))(param_1,local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e37b0 FUN_1457e37b0 body=48 status=ok
// SIG undefined FUN_1457e37b0(void)

void FUN_1457e37b0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x188);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x420))(plVar1,0);
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  return;
}



// FUNCTION 1457e37e0 FUN_1457e37e0 body=153 status=ok
// SIG undefined FUN_1457e37e0(void)

undefined8 * FUN_1457e37e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f3a9a0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  param_1[6] = 0;
  param_1[8] = &PTR_LAB_149f3aac0;
  param_1[9] = &LAB_146bee8fa;
  param_1[4] = &LAB_146beded0;
  param_1[0xc] = 0x3e45798ee2308c3a;
  FUN_141040b84(param_1 + 0xd);
  FUN_141040be6(param_1 + 0x10);
  FUN_141040be6(param_1 + 0x13);
  FUN_141040b84(param_1 + 0x16);
  param_1[0x19] = 0xffffffffffffffff;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1457e3890 FUN_1457e3890 body=391 status=ok
// SIG undefined FUN_1457e3890(void)

void FUN_1457e3890(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  byte *pbVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x168) = 0;
  local_88 = param_3;
  if (*(int *)(param_1 + 0x16c) != 0) {
    FUN_1446dda88(plVar2,0);
  }
  local_78 = DAT_14cb7d070;
  local_80 = DAT_14cb7d068;
  FUN_1448075d0(&local_70);
  puVar7 = (undefined8 *)FUN_144a06846(param_2,&local_70);
  pbVar4 = (byte *)*puVar7;
  plVar5 = (longlong *)puVar7[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  plVar8 = &DAT_14c9a1270;
  if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 2) != 0)) {
    plVar8 = *(longlong **)(pbVar4 + 8);
  }
  if ((longlong)(int)plVar8[2] != 0) {
    lVar10 = *plVar8;
    lVar9 = (longlong)(int)plVar8[2] << 4;
    do {
      FUN_14068d188(lVar10,&local_70,0);
      iVar3 = *(int *)(param_1 + 0x168);
      *(uint *)(param_1 + 0x168) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x16c) < iVar3 + 1U) {
        FUN_1446dd912(plVar2,iVar3);
      }
      lVar6 = *plVar2;
      *(undefined4 *)(lVar6 + 8 + (longlong)iVar3 * 0xc) = local_68;
      *(undefined8 *)(lVar6 + (longlong)iVar3 * 0xc) = local_70;
      lVar10 = lVar10 + 0x10;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
  }
  FUN_141041ab8(param_1,param_2,local_88);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e3a18 FUN_1457e3a18 body=102 status=ok
// SIG undefined FUN_1457e3a18(void)

longlong FUN_1457e3a18(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    FUN_1457e3a7e(param_1);
    FUN_14596e4d8(param_1 + 0x18,param_2 + 0x18);
    if (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40)) {
      FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    }
    FUN_1407b25f0(param_1 + 0x50,param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  }
  return param_1;
}



// FUNCTION 1457e3a7e FUN_1457e3a7e body=93 status=ok
// SIG undefined FUN_1457e3a7e(void)

undefined8 * FUN_1457e3a7e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141045c07(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1457e3b18(param_1,iVar1);
      FUN_1457e3adb(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1457e3adb FUN_1457e3adb body=60 status=ok
// SIG undefined FUN_1457e3adb(void)

void FUN_1457e3adb(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1457e3b7c(param_1,param_2);
    param_1 = param_1 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return;
}



// FUNCTION 1457e3b18 FUN_1457e3b18 body=100 status=ok
// SIG undefined FUN_1457e3b18(void)

void FUN_1457e3b18(longlong param_1,int param_2,int param_3)

{
  int extraout_var;
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_144a3809e((longlong)param_2 << 8,8);
    iVar1 = 0x7fffffff;
    if (param_2 <= extraout_var) {
      iVar1 = extraout_var;
    }
  }
  if (param_3 < iVar1) {
    FUN_1446f8d3c(param_1,0,iVar1,0x100,8);
    param_3 = iVar1;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1457e3b7c FUN_1457e3b7c body=420 status=ok
// SIG undefined FUN_1457e3b7c(void)

longlong FUN_1457e3b7c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  FUN_1457e3d20();
  FUN_1457e3d20(param_1 + 0x18,param_2 + 0x18);
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(param_2 + 0x30);
  FUN_1457e3dd4(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  plVar2 = *(longlong **)(param_2 + 0x58);
  *(longlong **)(param_1 + 0x58) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  plVar2 = *(longlong **)(param_2 + 0x70);
  *(longlong **)(param_1 + 0x70) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  uVar4 = *(undefined4 *)(param_2 + 0x84);
  uVar5 = *(undefined4 *)(param_2 + 0x88);
  uVar6 = *(undefined4 *)(param_2 + 0x8c);
  uVar7 = *(undefined4 *)(param_2 + 0x90);
  uVar8 = *(undefined4 *)(param_2 + 0x94);
  uVar9 = *(undefined4 *)(param_2 + 0x98);
  uVar10 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = uVar4;
  *(undefined4 *)(param_1 + 0x88) = uVar5;
  *(undefined4 *)(param_1 + 0x8c) = uVar6;
  *(undefined4 *)(param_1 + 0x90) = uVar7;
  *(undefined4 *)(param_1 + 0x94) = uVar8;
  *(undefined4 *)(param_1 + 0x98) = uVar9;
  *(undefined4 *)(param_1 + 0x9c) = uVar10;
  plVar2 = *(longlong **)(param_2 + 0xa0);
  *(longlong **)(param_1 + 0xa0) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  iVar1 = *(int *)(param_2 + 0xb8);
  pvVar3 = *(void **)(param_2 + 0xb0);
  *(int *)(param_1 + 0xb8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0xb0),iVar1,0);
    memcpy(*(void **)(param_1 + 0xb0),pvVar3,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  iVar1 = *(int *)(param_2 + 200);
  pvVar3 = *(void **)(param_2 + 0xc0);
  *(int *)(param_1 + 200) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0xc0),iVar1,0);
    memcpy(*(void **)(param_1 + 0xc0),pvVar3,(longlong)iVar1 * 2);
  }
  FUN_1457e3d7a(param_1 + 0xd0,param_2 + 0xd0);
  FUN_1457e3d7a(param_1 + 0xe8,param_2 + 0xe8);
  return param_1;
}



// FUNCTION 1457e3d20 FUN_1457e3d20 body=90 status=ok
// SIG undefined FUN_1457e3d20(void)

undefined8 * FUN_1457e3d20(undefined8 *param_1,undefined8 *param_2)

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
    FUN_148e23dfa(param_1,iVar1,0);
    FUN_148e23e69(*param_1,uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 1457e3d7a FUN_1457e3d7a body=90 status=ok
// SIG undefined FUN_1457e3d7a(void)

undefined8 * FUN_1457e3d7a(undefined8 *param_1,undefined8 *param_2)

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
    FUN_148e23f28(param_1,iVar1,0);
    FUN_148e23f9e(*param_1,uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 1457e3dd4 FUN_1457e3dd4 body=71 status=ok
// SIG undefined FUN_1457e3dd4(void)

undefined8 * FUN_1457e3dd4(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1457e3e1c FUN_1457e3e1c body=46 status=ok
// SIG undefined FUN_1457e3e1c(void)

void FUN_1457e3e1c(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x9d) != '\x01') {
    *(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) | 0x10;
    FUN_1402d2c26();
    return;
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_1457e3e4a(param_1,*(undefined4 *)
                           (*(longlong *)(param_1 + 0x10) + (longlong)(int)param_2 * 4));
    return;
  }
  if (*(char *)(param_1 + 0x9d) == '\x01') {
    uVar3 = *(uint *)(param_1 + 8);
    if (uVar3 == 0) {
      uVar3 = *(uint *)(param_1 + 0x20);
    }
    if ((int)uVar3 <= (int)param_2) {
      uVar3 = param_2;
    }
    iVar2 = uVar3 + 0xe;
    if (-1 < (int)(uVar3 + 7)) {
      iVar2 = uVar3 + 7;
    }
    if (*(int *)(param_1 + 0x30) < iVar2 >> 3) {
      FUN_1402d2c96(param_1 + 0x28,iVar2 >> 3,1);
    }
    *(uint *)(param_1 + 0x58) = uVar3;
    uVar3 = *(uint *)(param_1 + 0x60);
    if ((int)param_2 <= (int)*(uint *)(param_1 + 0x60)) {
      uVar3 = param_2;
    }
    *(uint *)(param_1 + 0x60) = uVar3;
    uVar3 = *(uint *)(param_1 + 100);
    if ((int)*(uint *)(param_1 + 100) < (int)param_2) {
      uVar3 = param_2;
    }
    *(uint *)(param_1 + 100) = uVar3;
    uVar3 = param_2 + 7;
    if (-1 < (int)param_2) {
      uVar3 = param_2;
    }
    uVar4 = (param_2 - (uVar3 & 0xfffffff8)) * 4;
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)((int)uVar3 >> 3) * 4);
    if ((uVar1 >> (uVar4 & 0x1f) & 1) == 0) {
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    }
    *(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)((int)uVar3 >> 3) * 4) =
         uVar1 | 1 << ((byte)uVar4 & 0x1f);
  }
  else {
    if (*(char *)(param_1 + 0x9d) == '\x02') {
      return;
    }
    *(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) | 0x10;
  }
  FUN_1402d2c26(param_1);
  return;
}



// FUNCTION 1457e3e4a FUN_1457e3e4a body=196 status=ok
// SIG undefined FUN_1457e3e4a(void)

void FUN_1457e3e4a(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x9d) == '\x01') {
    uVar3 = *(uint *)(param_1 + 8);
    if (uVar3 == 0) {
      uVar3 = *(uint *)(param_1 + 0x20);
    }
    if ((int)uVar3 <= (int)param_2) {
      uVar3 = param_2;
    }
    iVar2 = uVar3 + 0xe;
    if (-1 < (int)(uVar3 + 7)) {
      iVar2 = uVar3 + 7;
    }
    if (*(int *)(param_1 + 0x30) < iVar2 >> 3) {
      FUN_1402d2c96(param_1 + 0x28,iVar2 >> 3,1);
    }
    *(uint *)(param_1 + 0x58) = uVar3;
    uVar3 = *(uint *)(param_1 + 0x60);
    if ((int)param_2 <= (int)*(uint *)(param_1 + 0x60)) {
      uVar3 = param_2;
    }
    *(uint *)(param_1 + 0x60) = uVar3;
    uVar3 = *(uint *)(param_1 + 100);
    if ((int)*(uint *)(param_1 + 100) < (int)param_2) {
      uVar3 = param_2;
    }
    *(uint *)(param_1 + 100) = uVar3;
    uVar3 = param_2 + 7;
    if (-1 < (int)param_2) {
      uVar3 = param_2;
    }
    uVar4 = (param_2 - (uVar3 & 0xfffffff8)) * 4;
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)((int)uVar3 >> 3) * 4);
    if ((uVar1 >> (uVar4 & 0x1f) & 1) == 0) {
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    }
    *(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)((int)uVar3 >> 3) * 4) =
         uVar1 | 1 << ((byte)uVar4 & 0x1f);
  }
  else {
    if (*(char *)(param_1 + 0x9d) == '\x02') {
      return;
    }
    *(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) | 0x10;
  }
  FUN_1402d2c26(param_1);
  return;
}



// FUNCTION 1457e3f2a FUN_1457e3f2a body=40 status=ok
// SIG undefined FUN_1457e3f2a(void)

undefined8 FUN_1457e3f2a(undefined8 param_1,int param_2)

{
  FUN_1457e3f52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457e3f52 FUN_1457e3f52 body=59 status=ok
// SIG undefined FUN_1457e3f52(void)

void FUN_1457e3f52(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b80de70;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1457e3f8e FUN_1457e3f8e body=25 status=ok
// SIG undefined FUN_1457e3f8e(void)

void FUN_1457e3f8e(void)

{
  FUN_1458fd8e2();
  FUN_14479d2ce(&DAT_14c9a40b8);
  return;
}



// FUNCTION 1457e3fb2 FUN_1457e3fb2 body=56 status=ok
// SIG undefined FUN_1457e3fb2(void)

undefined8 * FUN_1457e3fb2(undefined8 *param_1)

{
  FUN_14094d83e();
  *param_1 = &PTR_FUN_14b296760;
  param_1[0x4a] = &PTR_FUN_14b296b60;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  return param_1;
}



// FUNCTION 1457e4003 FUN_1457e4003 body=124 status=ok
// SIG undefined FUN_1457e4003(void)

undefined8 * FUN_1457e4003(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x110,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14a4c7da0;
  plVar2 = (longlong *)FUN_14009d2a0();
  lVar3 = FUN_14038fb82();
  FUN_1457e41e0(puVar1 + 2,(longlong)*(int *)(lVar3 + 0x8c) * 0x58 + *plVar2);
  puVar1[2] = &PTR_FUN_14a4ad510;
  puVar1[0x1d] = &PTR_FUN_14a4ad558;
  return puVar1;
}



// FUNCTION 1457e4080 FUN_1457e4080 body=162 status=ok
// SIG undefined FUN_1457e4080(void)

void FUN_1457e4080(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1457e40bf;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1457e40bf;
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
LAB_1457e40bf:
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
                    /* WARNING: Could not recover jumptable at 0x0001457e411e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1457e4122 FUN_1457e4122 body=188 status=ok
// SIG undefined FUN_1457e4122(void)

void FUN_1457e4122(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e41e0 FUN_1457e41e0 body=241 status=ok
// SIG undefined FUN_1457e41e0(void)

undefined8 * FUN_1457e41e0(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a4c6d80;
  param_1[0x1b] = &PTR_FUN_14a4c6dc8;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 0x1c) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar1;
  *(int *)(param_1 + 0x1d) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_30);
    *(undefined4 *)(param_1 + 0x1e) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0x1f) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e430e FUN_1457e430e body=132 status=ok
// SIG undefined FUN_1457e430e(void)

void FUN_1457e430e(longlong param_1,int param_2)

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



// FUNCTION 1457e4394 FUN_1457e4394 body=41 status=ok
// SIG undefined FUN_1457e4394(void)

undefined8 FUN_1457e4394(undefined2 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_140de9106(*param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_141051ab2(*param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1457e43d2 FUN_1457e43d2 body=57 status=ok
// SIG undefined FUN_1457e43d2(void)

void FUN_1457e43d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22a78 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22a78 = FUN_140002ddd(FUN_14643aaa6,uVar1,L"GpsGenerator_Line");
  }
  return;
}



// FUNCTION 1457e4412 FUN_1457e4412 body=57 status=ok
// SIG undefined FUN_1457e4412(void)

void FUN_1457e4412(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23380 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23380 = FUN_140002ddd(FUN_14643d805,uVar1,L"GpsTest_GameplayTags");
  }
  return;
}



// FUNCTION 1457e444c FUN_1457e444c body=310 status=ok
// SIG undefined FUN_1457e444c(void)

void FUN_1457e444c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [4];
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = *(uint *)(param_2 + 1);
  plVar1 = (longlong *)(param_1 + 0xe8);
  if (uVar2 == *(uint *)(param_1 + 0xf0)) {
    if ((int)uVar2 < 1) goto LAB_1457e4512;
    lVar4 = 0;
    bVar5 = false;
    do {
      if (*(int *)(*param_2 + lVar4) == *(int *)(*plVar1 + lVar4)) {
        bVar6 = *(int *)(*param_2 + 8 + lVar4) != *(int *)(*plVar1 + 8 + lVar4);
      }
      else {
        bVar6 = true;
      }
      bVar5 = (bool)(bVar5 | bVar6);
      lVar4 = lVar4 + 0xc;
    } while ((ulonglong)uVar2 * 0xc != lVar4);
    if (!bVar5) goto LAB_1457e4512;
  }
  FUN_140d7e6a6(plVar1);
  cVar3 = FUN_140daa3ac(param_1);
  if (cVar3 == '\0') {
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_b4 = 0;
    uStack_ac = 0;
    local_a4 = 0;
    local_40 = DAT_14cb7bd68;
    local_38 = DAT_14cb7bd70;
    local_34 = DAT_14cb7bd80;
    local_2c = DAT_14cb7bd88;
    local_28 = 0;
    local_20 = 0;
    local_b8[0] = 5;
    FUN_140d7e6a6(&local_50,plVar1);
    FUN_140daa376(param_1,local_b8);
    FUN_14105a12a(local_b8);
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
LAB_1457e4512:
  if ((local_18 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457e4584 FUN_1457e4584 body=394 status=ok
// SIG undefined FUN_1457e4584(void)

void FUN_1457e4584(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  longlong *plVar5;
  int iVar6;
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
  plVar1 = (longlong *)(param_1 + 0x20);
  plVar2 = (longlong *)(param_1 + 0x30);
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar6 = 0;
  local_50 = plVar2;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_1449c0562(&local_58);
    iVar6 = *(int *)(param_1 + 0x48);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar6) || (local_50 != plVar2)) {
    do {
      local_58 = *(undefined8 *)(*local_80 + 0x10 + (longlong)iStack_64 * 0x28);
      plVar5 = *(longlong **)(*local_80 + 0x18 + (longlong)iStack_64 * 0x28);
      local_50 = plVar5;
      if (plVar5 == (longlong *)0x0) {
        FUN_14107f182(&local_58);
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        FUN_14107f182();
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar5 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar4 = (int *)((longlong)plVar5 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (((iStack_64 != iVar6) || (local_70 != plVar2)) || (local_80 != plVar1));
  }
  FUN_1457ec212(plVar1);
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined2 *)(param_1 + 0xf8) = 0x101;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457e4710 FUN_1457e4710 body=147 status=ok
// SIG undefined FUN_1457e4710(void)

void FUN_1457e4710(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457e47a4 FUN_1457e47a4 body=2232 status=ok
// SIG undefined FUN_1457e47a4(void)

void FUN_1457e47a4(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong *plVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  int local_140;
  int local_13c;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined1 local_10f;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  longlong *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong *plStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong local_78;
  ulonglong uStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*param_1 != 0) goto LAB_1457e4a9c;
  puVar9 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar9[4] = 0;
  *(undefined4 *)(puVar9 + 5) = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined8 *)((longlong)puVar9 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar9 + 0x34) = 0;
  puVar9[8] = 0;
  *(undefined4 *)(puVar9 + 9) = 0;
  plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_149f02110;
  plVar10[2] = (longlong)puVar9;
  *param_1 = (longlong)puVar9;
  plVar12 = (longlong *)param_1[1];
  if (plVar10 == plVar12) {
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar10 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
        plVar12 = plVar10;
        goto joined_r0x0001457e4ef8;
      }
    }
  }
  else {
    param_1[1] = (longlong)plVar10;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar12 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
joined_r0x0001457e4ef8:
        if (iVar8 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  local_78 = 0;
  uStack_70 = 0;
  local_148 = &DAT_14c872a98;
  FUN_14105aa76(DAT_14c872ce0,L"ProjectDefinedChords",L"ProjectDefinedChords",&local_78);
  FUN_1457e5076(param_1,&local_78,1);
  local_148 = &DAT_14c872a78;
  iVar8 = FUN_14105aa76(DAT_14c872ce0,L"UserDefinedChords",L"UserDefinedChords",&local_78);
  if (iVar8 < 1) {
    local_148 = &DAT_14c872a78;
    iVar8 = FUN_14105aa76(DAT_14c872ce0,L"UserDefinedGestures",L"UserDefinedGestures",&local_78);
    if (0 < iVar8) goto LAB_1457e4aca;
    local_88 = (longlong *)0x0;
    plStack_80 = (longlong *)0x0;
    local_98 = 0;
    uStack_90 = 0;
    local_148 = &DAT_14c872a78;
    iVar8 = FUN_14105aa76(DAT_14c872ce0,L"UserDefinedChords",L"Content",&local_78);
    if (iVar8 < 1) {
      local_148 = &DAT_14c872a78;
      FUN_14105aa76(DAT_14c872ce0,L"UserDefinedGestures",L"Content",&local_78);
    }
    else {
      FUN_14681a016(&local_f0,&local_98);
      FUN_1467ad138(&local_f0,0);
      local_c0 = local_f0;
      iStack_b8 = (int)uStack_e8;
      uStack_b4 = uStack_e8._4_4_;
      FUN_14047afda(&local_f0);
      FUN_14047b282(local_f0,&local_88,0);
      plVar12 = uStack_e8;
      if (uStack_e8 != (longlong *)0x0) {
        LOCK();
        plVar10 = uStack_e8 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*uStack_e8)(uStack_e8);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      if (local_c0 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_88 == (longlong *)0x0) {
      plVar10 = (longlong *)FUN_14054d1d4();
      puVar9 = (undefined8 *)FUN_14047ac8c();
      local_c0 = (longlong *)0x0;
      local_148 = (undefined8 *)CONCAT44(local_148._4_4_,(*(int *)(puVar9 + 1) == 0) + 0x22);
      FUN_14125bce8(&local_c0,*puVar9,*(int *)(puVar9 + 1),0);
      FUN_1401aebe8(&local_c0,L"Preferences/EditorKeyBindings.txt",0x21);
      plVar12 = local_c0;
      if (iStack_b8 == 0) {
        plVar12 = (longlong *)&DAT_149dfb77a;
      }
      lVar11 = (**(code **)(*plVar10 + 0x18))(plVar10,plVar12,0);
      plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar12[1] = (longlong)&DAT_100000001;
      *plVar12 = (longlong)&PTR_FUN_149f02130;
      plVar12[2] = lVar11;
      if (local_c0 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (lVar11 != 0) {
        FUN_1469e7f8c(&local_c0,lVar11);
        FUN_1469e80e4(local_c0,&local_88);
        plVar10 = (longlong *)CONCAT44(uStack_b4,iStack_b8);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar10 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar12 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      plVar12 = local_a8;
      if (local_88 != (longlong *)0x0) goto LAB_1457e4adf;
    }
    else {
LAB_1457e4adf:
      plVar10 = local_88;
      local_130 = local_88 + 2;
      local_f0 = (longlong *)&DAT_100000000;
      local_e0 = (longlong *)&DAT_ffffffff;
      uStack_d8 = (longlong *)((ulonglong)uStack_d8 & 0xffffffff00000000);
      uStack_e8 = local_130;
      if ((int)local_88[5] == 0) {
        local_140 = 0;
      }
      else {
        FUN_1449c0562(&local_f0);
        local_140 = (int)plVar10[5];
      }
      iStack_b8 = (int)local_f0;
      uStack_b4 = local_f0._4_4_;
      uStack_b0 = (int)uStack_e8;
      uStack_ac = uStack_e8._4_4_;
      plStack_a0 = uStack_d8;
      local_a8 = local_e0;
      plVar12 = local_a8;
      local_c0 = plVar10;
      local_a8._4_4_ = (int)((ulonglong)local_e0 >> 0x20);
      if ((local_a8._4_4_ != local_140) || (uStack_e8 != local_130)) {
        iVar8 = local_a8._4_4_;
        local_a8 = plVar12;
        do {
          puVar9 = (undefined8 *)(*local_c0 + (longlong)iVar8 * 0x28);
          puVar13 = &DAT_149dfb77a;
          if (*(int *)(puVar9 + 1) != 0) {
            puVar13 = (undefined2 *)*puVar9;
          }
          FUN_1446f470e(&local_c8,puVar13,1);
          puVar9 = (undefined8 *)(*(code *)**(undefined8 **)puVar9[2])();
          plVar12 = (longlong *)*puVar9;
          local_138 = (longlong *)puVar9[1];
          if (local_138 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_138 + 1) = (int)local_138[1] + 1;
            UNLOCK();
          }
          local_128 = plVar12 + 2;
          local_68 = (longlong *)&DAT_100000000;
          local_58 = (longlong *)&DAT_ffffffff;
          uStack_50 = 0;
          plStack_60 = local_128;
          if ((int)plVar12[5] == 0) {
            local_13c = 0;
          }
          else {
            FUN_1449c0562(&local_68);
            local_13c = (int)plVar12[5];
          }
          uStack_d0 = CONCAT44(uStack_4c,uStack_50);
          uStack_d8 = local_58;
          plVar6 = uStack_d8;
          uStack_e8 = local_68;
          local_e0 = plStack_60;
          uStack_d8._4_4_ = (int)((ulonglong)local_58 >> 0x20);
          iVar8 = uStack_d8._4_4_;
          local_f0 = plVar12;
          if ((uStack_d8._4_4_ != local_13c) || (uStack_d8 = plVar6, plStack_60 != local_128)) {
            do {
              uStack_d8 = plVar6;
              puVar9 = (undefined8 *)(*local_f0 + (longlong)iVar8 * 0x28);
              puVar13 = &DAT_149dfb77a;
              if (*(int *)(puVar9 + 1) != 0) {
                puVar13 = (undefined2 *)*puVar9;
              }
              FUN_1446f470e(&local_f8,puVar13,1);
              puVar9 = (undefined8 *)(*(code *)**(undefined8 **)puVar9[2])();
              local_108 = *puVar9;
              local_100 = (longlong *)puVar9[1];
              if (local_100 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_100 + 1) = (int)local_100[1] + 1;
                UNLOCK();
              }
              uVar7 = 0;
              bVar5 = true;
              do {
                bVar14 = bVar5;
                local_120 = local_c8;
                local_118 = local_f8;
                local_10f = 0;
                local_110 = uVar7;
                FUN_1469e7838(*param_1,&local_120);
                lVar11 = *param_1;
                FUN_1469b922c(&local_68,&local_108);
                uVar3 = (uint)((ulonglong)local_120 >> 0x10);
                uVar15 = (uint)local_120 & 0xffff;
                uVar4 = (uint)((ulonglong)local_118 >> 0x10);
                uVar16 = (uint)local_118 & 0xffff;
                FUN_1469e7a24(lVar11,((uint)local_118 << 0x10 | uVar16) +
                                     (int)((ulonglong)local_118 >> 0x20) +
                                     (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar16 >> 4) ^
                                     ((uint)local_120 << 0x10 | uVar15) +
                                     (int)((ulonglong)local_120 >> 0x20) +
                                     (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar15 >> 4),&local_120,
                              &local_68);
                plVar6 = local_58;
                if (local_58 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = local_58 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*local_58)(local_58);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar6 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar6 + 0x10))(plVar6);
                    }
                  }
                }
                plVar6 = local_100;
                uVar7 = 1;
                bVar5 = false;
              } while (bVar14);
              if (local_100 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_100 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_100)(local_100);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar6 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar6 + 0x10))(plVar6);
                  }
                }
              }
              uStack_d8 = (longlong *)CONCAT44(uStack_d8._4_4_,(uint)uStack_d8 & ~uStack_e8._4_4_);
              FUN_1449c0562(&uStack_e8);
              iVar8 = uStack_d8._4_4_;
              plVar6 = uStack_d8;
            } while (local_f0 != plVar12 || (local_e0 != local_128 || uStack_d8._4_4_ != local_13c))
            ;
          }
          plVar12 = local_138;
          if (local_138 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_138 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*local_138)(local_138);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_138 + 0x10))();
              }
            }
          }
          local_a8 = (longlong *)CONCAT44(local_a8._4_4_,(uint)local_a8 & ~uStack_b4);
          FUN_1449c0562(&iStack_b8);
          iVar8 = local_a8._4_4_;
          plVar12 = local_a8;
        } while (local_c0 != plVar10 ||
                 ((longlong *)CONCAT44(uStack_ac,uStack_b0) != local_130 ||
                 local_a8._4_4_ != local_140));
      }
    }
    local_a8 = plVar12;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    plVar12 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar10 = plStack_80 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
LAB_1457e4aca:
    FUN_1457e5076(param_1,&local_78,0);
  }
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_1457e4a9c:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e505e FUN_1457e505e body=24 status=ok
// SIG undefined FUN_1457e505e(void)

void FUN_1457e505e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001457e5073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,1);
  return;
}



// FUNCTION 1457e5076 FUN_1457e5076 body=574 status=ok
// SIG undefined FUN_1457e5076(void)

void FUN_1457e5076(undefined8 *param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong *local_c0;
  undefined1 local_b0 [17];
  undefined1 local_9f;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((longlong)(int)param_2[1] != 0) {
    lVar5 = *param_2;
    lVar8 = (longlong)(int)param_2[1] << 4;
    do {
      FUN_14681a016(&local_d0,lVar5);
      FUN_1467ad138(&local_d0,0);
      local_70 = local_d0;
      uStack_6c = uStack_cc;
      uStack_68 = uStack_c8;
      uStack_64 = uStack_c4;
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      FUN_14047afda(&local_98,&local_70);
      cVar4 = FUN_14047b282(local_98,&local_88,0);
      if (cVar4 != '\0') {
        FUN_1469b8f2c(local_b0,&local_88);
        local_9f = param_3;
        FUN_1469e7838(*param_1,local_b0);
        local_d8 = *param_1;
        FUN_1469b922c(&local_d0,&local_88);
        uVar6 = (uint)local_b0._0_8_ & 0xffff;
        uVar7 = (uint)local_b0._8_8_ & 0xffff;
        FUN_1469e7a24(local_d8,((uint)local_b0._8_8_ << 0x10 | uVar7) + SUB84(local_b0._8_8_,4) +
                               (SUB84(local_b0._8_8_,2) << 0x13 | SUB84(local_b0._8_8_,2) & 0xffff)
                               + (uVar7 >> 4) ^
                               ((uint)local_b0._0_8_ << 0x10 | uVar6) + SUB84(local_b0._0_8_,4) +
                               (SUB84(local_b0._0_8_,2) << 0x13 | SUB84(local_b0._0_8_,2) & 0xffff)
                               + (uVar6 >> 4),local_b0,&local_d0);
        plVar3 = local_c0;
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_c0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_c0)(local_c0);
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
      plVar3 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_90 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar3 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_80 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (CONCAT44(uStack_6c,local_70) != 0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 0x10;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457e52c4 FUN_1457e52c4 body=147 status=ok
// SIG undefined FUN_1457e52c4(void)

void FUN_1457e52c4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457e5360 FUN_1457e5360 body=59 status=ok
// SIG undefined FUN_1457e5360(void)

undefined8 * FUN_1457e5360(undefined8 *param_1)

{
  FUN_140f196c2();
  *param_1 = &PTR_FUN_14b2bf860;
  param_1[6] = &PTR_FUN_14b2bfb50;
  if (param_1[0xc] != 0) {
    *(undefined1 *)(param_1[0xc] + 0x200) = 0;
  }
  return param_1;
}



// FUNCTION 1457e539c FUN_1457e539c body=329 status=ok
// SIG undefined FUN_1457e539c(void)

undefined8 FUN_1457e539c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(longlong **)(param_2 + 8) == (longlong *)0x0) {
    return 0;
  }
  lVar4 = (**(code **)(**(longlong **)(param_2 + 8) + 0x10))();
  if (lVar4 == 0) {
    return 0;
  }
  lVar7 = *(longlong *)(param_1 + 0x28);
  if (lVar7 == 0) {
    uVar5 = FUN_140c52150();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x28) = lVar7;
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  lVar6 = *(longlong *)(param_1 + 0x30);
  if (lVar6 == 0) {
    if (lVar7 == 0) {
      return 0;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      return 0;
    }
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,plVar1);
    *(longlong *)(param_1 + 0x30) = lVar6;
    if (lVar6 == 0) {
      return 0;
    }
    lVar7 = *(longlong *)(param_1 + 0x28);
  }
  if (lVar7 == 0) {
    uVar5 = FUN_140c52150();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x28) = lVar7;
    lVar6 = *(longlong *)(param_1 + 0x30);
    if (((lVar6 == 0) && (lVar6 = 0, lVar7 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar5,plVar1);
      }
      *(longlong *)(param_1 + 0x30) = lVar6;
    }
  }
  cVar3 = FUN_14105c016(lVar4,lVar6 + 0x18);
  if (cVar3 == '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 1457e54e6 FUN_1457e54e6 body=40 status=ok
// SIG undefined FUN_1457e54e6(void)

undefined8 FUN_1457e54e6(undefined8 param_1,int param_2)

{
  FUN_1457e550e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457e550e FUN_1457e550e body=92 status=ok
// SIG undefined FUN_1457e550e(void)

void FUN_1457e550e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac2bae0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_144a2da94(param_1 + 0xf);
  FUN_144a2da94(param_1 + 8);
  FUN_14105c493(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1457e556a FUN_1457e556a body=284 status=ok
// SIG undefined FUN_1457e556a(void)

undefined4 *
FUN_1457e556a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1457e57d0(param_1,local_58);
  FUN_1457e5688(param_4,local_50);
  *(undefined4 *)(local_50 + 0x20) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_1457e570c(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_50 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0x20) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14106199a(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e5688 FUN_1457e5688 body=131 status=ok
// SIG undefined FUN_1457e5688(void)

undefined8 * FUN_1457e5688(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 2;
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 2;
  FUN_14019d794(param_2 + 1,&local_38);
  FUN_144760e21(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e570c FUN_1457e570c body=196 status=ok
// SIG undefined FUN_1457e570c(void)

void FUN_1457e570c(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong *plVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        plVar9 = (longlong *)(*param_1 + (longlong)iVar10 * 0x28);
        if (*plVar9 == *param_3) {
          FUN_144760e21(plVar9[1],(int)plVar9[2]);
          if (plVar9[1] != 0) {
            FUN_1400020a8();
          }
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar9 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar9 + 0x14) = uVar3;
          *(int *)(plVar9 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar9 + 0x1c) = uVar4;
          *(int *)plVar9 = (int)lVar5;
          *(undefined4 *)((longlong)plVar9 + 4) = uVar1;
          *(int *)(plVar9 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar9 + 0xc) = uVar2;
          FUN_14898a41e(param_1,*param_4);
          *param_4 = iVar10;
          uVar8 = 1;
          goto LAB_1457e577e;
        }
        iVar10 = (int)plVar9[4];
      } while (iVar10 != -1);
    }
  }
  uVar8 = 0;
LAB_1457e577e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  return;
}



// FUNCTION 1457e57d0 FUN_1457e57d0 body=231 status=ok
// SIG undefined FUN_1457e57d0(void)

int * FUN_1457e57d0(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1457e58f6 FUN_1457e58f6 body=155 status=ok
// SIG undefined FUN_1457e58f6(void)

void FUN_1457e58f6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  code *local_48;
  longlong *local_40;
  code **local_38;
  code *local_30;
  undefined8 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_148a0822e(param_2,0);
  }
  local_40 = &local_58;
  local_38 = &local_48;
  local_48 = FUN_143ebe7b0;
  local_28 = &local_38;
  local_30 = FUN_1410633d4;
  local_58 = param_2;
  local_50 = param_3;
  FUN_141062ffe(param_1,&local_30,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e5992 FUN_1457e5992 body=48 status=ok
// SIG undefined FUN_1457e5992(void)

void FUN_1457e5992(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x138,8);
  }
  return;
}



// FUNCTION 1457e59c2 FUN_1457e59c2 body=147 status=ok
// SIG undefined FUN_1457e59c2(void)

void FUN_1457e59c2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457e5a56 FUN_1457e5a56 body=68 status=ok
// SIG undefined FUN_1457e5a56(void)

void FUN_1457e5a56(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  FUN_141067610(param_2);
  *param_2 = &PTR_FUN_14b3588b0;
  param_2[5] = 0;
  param_2[6] = 0;
  return;
}



// FUNCTION 1457e5a9a FUN_1457e5a9a body=40 status=ok
// SIG undefined FUN_1457e5a9a(void)

undefined8 FUN_1457e5a9a(undefined8 param_1,int param_2)

{
  FUN_1457e5ac2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457e5ac2 FUN_1457e5ac2 body=137 status=ok
// SIG undefined FUN_1457e5ac2(void)

void FUN_1457e5ac2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14bd99550;
  param_1[5] = &PTR_FUN_14bd99900;
  param_1[0x13] = &PTR_FUN_14bd99920;
  puVar3 = (undefined8 *)param_1[0x33];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  FUN_1457e5b52(param_1 + 0x18);
  plVar4 = (longlong *)param_1[0x17];
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
  thunk_FUN_1411412f4(param_1);
  return;
}



// FUNCTION 1457e5b4c thunk_FUN_1411412f4 body=5 status=ok
// SIG undefined thunk_FUN_1411412f4(void)

void thunk_FUN_1411412f4(void)

{
  thunk_FUN_1411412f4();
  return;
}



// FUNCTION 1457e5b52 FUN_1457e5b52 body=187 status=ok
// SIG undefined FUN_1457e5b52(void)

void FUN_1457e5b52(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_149f3a9a0;
  FUN_141082b5c(param_1 + 0x17,0);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x14,0);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x11,0);
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_141082b5c(param_1 + 0xe,0);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
                    /* WARNING: Could not recover jumptable at 0x0001457e5be7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1457e5c1a FUN_1457e5c1a body=31 status=ok
// SIG undefined FUN_1457e5c1a(void)

undefined8 FUN_1457e5c1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457e5c46 FUN_1457e5c46 body=31 status=ok
// SIG undefined FUN_1457e5c46(void)

undefined8 FUN_1457e5c46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457e5c74 FUN_1457e5c74 body=40 status=ok
// SIG undefined FUN_1457e5c74(void)

undefined8 FUN_1457e5c74(undefined8 param_1,int param_2)

{
  FUN_1457e5c9c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457e5c9c FUN_1457e5c9c body=56 status=ok
// SIG undefined FUN_1457e5c9c(void)

void FUN_1457e5c9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6d6590;
  FUN_141067f06(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457e5cdc FUN_1457e5cdc body=283 status=ok
// SIG undefined FUN_1457e5cdc(void)

undefined8 * FUN_1457e5cdc(undefined8 *param_1)

{
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14b32a980;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  FUN_141067f4a(param_1 + 0x81);
  param_1[0x81] = &PTR_FUN_14b32b5a0;
  *(byte *)((longlong)param_1 + 0x412) = *(byte *)((longlong)param_1 + 0x412) | 6;
  *(undefined1 *)(param_1 + 0x82) = 6;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x89));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x89),4000);
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 6;
  *(undefined1 *)(param_1 + 7) = 4;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 8;
  FUN_141067f36(param_1,0);
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  FUN_1403121a6(param_1,0);
  *(undefined4 *)(param_1 + 0x34) = 0x41200000;
  FUN_1405e4918(param_1,0x41f00000);
  FUN_141067f40(param_1,0x41f00000);
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  return param_1;
}



// FUNCTION 1457e5df8 FUN_1457e5df8 body=124 status=ok
// SIG undefined FUN_1457e5df8(void)

longlong * FUN_1457e5df8(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b5f87b0;
  FUN_141067f7a(plVar3 + 2,0);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
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



// FUNCTION 1457e5e74 FUN_1457e5e74 body=40 status=ok
// SIG undefined FUN_1457e5e74(void)

undefined8 FUN_1457e5e74(undefined8 param_1,int param_2)

{
  FUN_1457e5e9c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457e5e9c FUN_1457e5e9c body=953 status=ok
// SIG undefined FUN_1457e5e9c(void)

void FUN_1457e5e9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7e1620;
  param_1[0xd3] = &PTR_FUN_14b7e1e90;
  param_1[0xd4] = &PTR_FUN_14b7e1eb0;
  FUN_144760e21(param_1[0x267],*(undefined4 *)(param_1 + 0x268));
  if (param_1[0x267] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e62c0(param_1 + 0x262);
  FUN_1457e628e(param_1[0x260],*(undefined4 *)(param_1 + 0x261));
  if (param_1[0x260] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25c] != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(param_1 + 0x23a);
  if (param_1[0x238] != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(param_1 + 0x216);
  if (param_1[0x214] != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(param_1 + 0x1f2);
  if (param_1[0x1eb] != 0) {
    FUN_1400020a8();
  }
  FUN_14036924e(param_1[0x1e6],*(undefined4 *)(param_1 + 0x1e7));
  if (param_1[0x1e6] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e6452(param_1 + 0x1c2);
  FUN_144760e21(param_1[0x1ba],*(undefined4 *)(param_1 + 0x1bb));
  if (param_1[0x1ba] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1b3) = 0;
  if (param_1[0x1b2] != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 0x1aa);
  if (param_1[0x1a8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1a2],*(undefined4 *)(param_1 + 0x1a3));
  if (param_1[0x1a2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a0] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x19b) = 0;
  if (param_1[0x19a] != 0) {
    FUN_1400020a8();
  }
  FUN_141149b74(param_1 + 0x192);
  FUN_1457e6316(param_1 + 0x166);
  FUN_1457e6256(param_1 + 0x140);
  FUN_1457e6316(param_1 + 0x114);
  FUN_1457e6256(param_1 + 0xee);
  FUN_144760e21(param_1[0xea],*(undefined4 *)(param_1 + 0xeb));
  if (param_1[0xea] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe5] != 0) {
    FUN_1400020a8();
  }
  FUN_140368c45(param_1[0xe3],*(undefined4 *)(param_1 + 0xe4));
  if (param_1[0xe3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xdf],*(undefined4 *)(param_1 + 0xe0));
  if (param_1[0xdf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xdb],*(undefined4 *)(param_1 + 0xdc));
  if (param_1[0xdb] != 0) {
    FUN_1400020a8();
  }
  FUN_1410681fd(param_1[0xd9],*(undefined4 *)(param_1 + 0xda));
  if (param_1[0xd9] != 0) {
    FUN_1400020a8();
  }
  FUN_1410681fd(param_1[0xd7],*(undefined4 *)(param_1 + 0xd8));
  if (param_1[0xd7] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e6522(param_1);
  return;
}



// FUNCTION 1457e6256 FUN_1457e6256 body=56 status=ok
// SIG undefined FUN_1457e6256(void)

void FUN_1457e6256(longlong param_1)

{
  FUN_14106822e(*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x120));
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(param_1);
  return;
}



// FUNCTION 1457e628e FUN_1457e628e body=49 status=ok
// SIG undefined FUN_1457e628e(void)

void FUN_1457e628e(longlong param_1,int param_2)

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



// FUNCTION 1457e62c0 FUN_1457e62c0 body=59 status=ok
// SIG undefined FUN_1457e62c0(void)

void FUN_1457e62c0(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e62fb(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457e62fb FUN_1457e62fb body=27 status=ok
// SIG undefined FUN_1457e62fb(void)

void FUN_1457e62fb(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x60);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      pcVar1 = pcVar1 + 0x78;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1457e6316 FUN_1457e6316 body=259 status=ok
// SIG undefined FUN_1457e6316(void)

void FUN_1457e6316(longlong *param_1)

{
  longlong *plVar1;
  
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e641a(param_1 + 0x1d);
  FUN_14474dad8(param_1[0x1b],(int)param_1[0x1c]);
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1449e6b18(param_1 + 0x12);
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_144760e21(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457e641a FUN_1457e641a body=55 status=ok
// SIG undefined FUN_1457e641a(void)

void FUN_1457e641a(longlong *param_1)

{
  FUN_141068288(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457e6452 FUN_1457e6452 body=159 status=ok
// SIG undefined FUN_1457e6452(void)

void FUN_1457e6452(longlong *param_1)

{
  FUN_144760e21(param_1[0x18],(int)param_1[0x19]);
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 3);
  FUN_1457e64f1(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457e64f1 FUN_1457e64f1 body=49 status=ok
// SIG undefined FUN_1457e64f1(void)

void FUN_1457e64f1(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1457e6522 FUN_1457e6522 body=441 status=ok
// SIG undefined FUN_1457e6522(void)

void FUN_1457e6522(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1e6ca0;
  plVar3 = (longlong *)param_1[0xd2];
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
  FUN_1457e678a(param_1 + 0xbe);
  FUN_1457e678a(param_1 + 0xab);
  if (param_1[0xa8] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xa5];
  if (plVar3 != (longlong *)0x0) {
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  param_1[0x9d] = &PTR_FUN_14a5af930;
  if (param_1[0xa1] != 0) {
    FUN_1400020a8();
  }
  param_1[0x9d] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 0xa0)])(param_1 + 0x9e);
  plVar3 = (longlong *)param_1[0x97];
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
  plVar3 = (longlong *)param_1[0x95];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_144760e21(param_1[0x8d],*(undefined4 *)(param_1 + 0x8e));
  if (param_1[0x8d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x8a],*(undefined4 *)(param_1 + 0x8b));
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e66dc(param_1);
  return;
}



// FUNCTION 1457e66dc FUN_1457e66dc body=174 status=ok
// SIG undefined FUN_1457e66dc(void)

void FUN_1457e66dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa501d0;
  if (param_1[0x87] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x85] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x74] = &PTR_FUN_14a5af930;
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  param_1[0x74] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 0x77)])(param_1 + 0x75);
  thunk_FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 1457e678a FUN_1457e678a body=494 status=ok
// SIG undefined FUN_1457e678a(void)

void FUN_1457e678a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x38);
  lVar2 = param_1 + 0x48;
  local_78 = 0x100000000;
  local_68 = 0xffffffff;
  iStack_64 = 0;
  local_60 = 0;
  iVar5 = 0;
  local_70 = lVar2;
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_1449c0562(&local_78);
    iVar5 = *(int *)(param_1 + 0x60);
  }
  local_88 = local_68;
  iStack_84 = iStack_64;
  local_80 = local_60;
  local_7c = uStack_5c;
  local_98 = local_78;
  local_90 = local_70;
  local_a0 = plVar1;
  if ((iStack_64 != iVar5) || (local_70 != lVar2)) {
    do {
      lVar3 = *local_a0;
      lVar4 = (longlong)iStack_84;
      FUN_1447a97f4(&local_78,lVar3 + lVar4 * 0x38);
      local_50 = *(longlong *)(lVar3 + 0x28 + lVar4 * 0x38);
      if (local_50 != 0) {
        FUN_141068530(param_1);
        lVar3 = local_50;
        if (local_50 != 0) {
          FUN_1457e69f6(local_50);
          FUN_1400020a8(lVar3);
        }
        local_50 = 0;
      }
      if (CONCAT44(uStack_5c,local_60) != 0) {
        FUN_1400020a8();
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (((iStack_84 != iVar5) || (local_90 != lVar2)) || (local_a0 != plVar1));
  }
  FUN_1457e69b2(plVar1);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1457e697a(plVar1);
  FUN_144760e21(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e697a FUN_1457e697a body=55 status=ok
// SIG undefined FUN_1457e697a(void)

void FUN_1457e697a(longlong *param_1)

{
  FUN_1410683b6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457e69b2 FUN_1457e69b2 body=67 status=ok
// SIG undefined FUN_1457e69b2(void)

void FUN_1457e69b2(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1457e6aaa(param_1);
    FUN_1410683b6(param_1,0);
    return;
  }
  FUN_1410683b6(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14120df66(param_1);
  return;
}



// FUNCTION 1457e69f6 FUN_1457e69f6 body=179 status=ok
// SIG undefined FUN_1457e69f6(void)

void FUN_1457e69f6(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_141068304(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_1402d9776(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_141068304(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457e6aaa FUN_1457e6aaa body=327 status=ok
// SIG undefined FUN_1457e6aaa(void)

void FUN_1457e6aaa(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
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



// FUNCTION 1457e6bf2 FUN_1457e6bf2 body=67 status=ok
// SIG undefined FUN_1457e6bf2(void)

void FUN_1457e6bf2(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14106833c(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14120db24(param_1);
    return;
  }
  FUN_1457e6c36(param_1);
  FUN_14106833c(param_1,0);
  return;
}



// FUNCTION 1457e6c36 FUN_1457e6c36 body=325 status=ok
// SIG undefined FUN_1457e6c36(void)

void FUN_1457e6c36(longlong *param_1)

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



// FUNCTION 1457e6d7c FUN_1457e6d7c body=147 status=ok
// SIG undefined FUN_1457e6d7c(void)

void FUN_1457e6d7c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457e6e1c FUN_1457e6e1c body=194 status=ok
// SIG undefined FUN_1457e6e1c(void)

undefined8 * FUN_1457e6e1c(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14a867090;
  param_1[5] = &PTR_FUN_14a867670;
  param_1[6] = &PTR_LAB_14a8676b0;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
  param_1[0x5b] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x5c) = 1;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2fd) = 0;
  *(undefined2 *)(param_1 + 0x62) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e1) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 2;
  FUN_144a78564(param_1 + 0x66);
  param_1[0x67] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fb) = 1;
  return param_1;
}



// FUNCTION 1457e6eec FUN_1457e6eec body=45 status=ok
// SIG undefined FUN_1457e6eec(void)

undefined8 * FUN_1457e6eec(undefined8 *param_1)

{
  FUN_141069aea();
  *param_1 = &PTR_FUN_14a9f49d0;
  FUN_144757f48(param_1,0x1000000);
  return param_1;
}



// FUNCTION 1457e6f1a FUN_1457e6f1a body=270 status=ok
// SIG undefined FUN_1457e6f1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457e6f1a(void)

{
  _DAT_14caa0af0 = L"BaseIndex";
  DAT_14caa0b1a = FUN_140850cc5();
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
  _DAT_14caa0af8 = &DAT_14ca84cb0;
  _DAT_14caa0b08 = &LAB_14682652b;
  _DAT_14caa0b10 = 0x100000000;
  _DAT_14caa0b18 = 0;
  _DAT_14caa0b00 = DAT_14ca9ef48;
  DAT_14ca9ef48 = &DAT_14caa0af0;
  return;
}



// FUNCTION 1457e702e FUN_1457e702e body=57 status=ok
// SIG undefined FUN_1457e702e(void)

void FUN_1457e702e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55990 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55990 = FUN_140002ddd(FUN_1464b3f9a,uVar1,L"CameraModeBehavior_Look");
  }
  return;
}



// FUNCTION 1457e7067 FUN_1457e7067 body=45 status=ok
// SIG undefined FUN_1457e7067(void)

void FUN_1457e7067(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1457e7094 FUN_1457e7094 body=98 status=ok
// SIG undefined FUN_1457e7094(void)

void FUN_1457e7094(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1457e70f6 FUN_1457e70f6 body=132 status=ok
// SIG undefined FUN_1457e70f6(void)

void FUN_1457e70f6(longlong param_1,int param_2)

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



// FUNCTION 1457e7186 FUN_1457e7186 body=115 status=ok
// SIG undefined FUN_1457e7186(void)

void FUN_1457e7186(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1405a76a4(param_1,&local_20);
  if (local_20 != 0) {
    FUN_1457e71fa();
  }
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e71fa FUN_1457e71fa body=82 status=ok
// SIG undefined FUN_1457e71fa(void)

void FUN_1457e71fa(longlong *param_1)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 *puVar3;
  
  cVar2 = (**(code **)(*param_1 + 0x58))();
  if (cVar2 != '\0') {
    *(undefined2 *)(param_1 + 7) = 0;
    if ((longlong)(int)param_1[0xb] != 0) {
      puVar3 = (undefined2 *)param_1[10];
      puVar1 = puVar3 + (longlong)(int)param_1[0xb] * 0xc;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 0xc;
      } while (puVar3 != puVar1);
    }
    FUN_14106d3d2(param_1);
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  return;
}



// FUNCTION 1457e724c FUN_1457e724c body=109 status=ok
// SIG undefined FUN_1457e724c(void)

void FUN_1457e724c(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b4300e0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = &PTR_FUN_14b430d90;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = *param_2;
  lVar1 = param_2[1];
  param_1[9] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[2] = &PTR_FUN_14b430100;
  return;
}



// FUNCTION 1457e72ba FUN_1457e72ba body=162 status=ok
// SIG undefined FUN_1457e72ba(void)

void FUN_1457e72ba(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1457e72f9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1457e72f9;
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
LAB_1457e72f9:
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
                    /* WARNING: Could not recover jumptable at 0x0001457e7358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1457e735c FUN_1457e735c body=143 status=ok
// SIG undefined FUN_1457e735c(void)

void FUN_1457e735c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457e73fa FUN_1457e73fa body=40 status=ok
// SIG undefined FUN_1457e73fa(void)

undefined8 FUN_1457e73fa(undefined8 param_1,int param_2)

{
  FUN_1457e7422();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457e7422 FUN_1457e7422 body=56 status=ok
// SIG undefined FUN_1457e7422(void)

void FUN_1457e7422(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b261fa0;
  FUN_1457e745a(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457e745a FUN_1457e745a body=47 status=ok
// SIG undefined FUN_1457e745a(void)

void FUN_1457e745a(longlong param_1,int param_2)

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



// FUNCTION 1457e748a FUN_1457e748a body=288 status=ok
// SIG undefined FUN_1457e748a(void)

undefined4 FUN_1457e748a(uint param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_108 [32];
  uint *local_e8;
  undefined4 local_e0;
  longlong local_d8 [2];
  uint local_c8;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1410720c4();
  local_c8 = param_1 | param_3 | 0x20000;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_b4 = param_2[2];
  local_58 = 0;
  local_50 = 0;
  local_94 = 0;
  uStack_8c = 0;
  local_84 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  local_c4._0_4_ = (undefined4)uVar1;
  local_c4._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_bc._0_4_ = (undefined4)uVar2;
  uStack_bc._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_ac = (undefined4)local_c4;
  uStack_a8 = local_c4._4_4_;
  uStack_a4 = (undefined4)uStack_bc;
  uStack_a0 = uStack_bc._4_4_;
  local_c4 = uVar1;
  uStack_bc = uVar2;
  local_9c = local_b4;
  FUN_140056680(local_d8,L"AddKnownMissing");
  local_e0 = 1;
  local_e8 = &local_c8;
  uVar3 = FUN_141071fba(&local_e8,local_d8);
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_78);
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e75f2 FUN_1457e75f2 body=92 status=ok
// SIG undefined FUN_1457e75f2(void)

longlong * FUN_1457e75f2(longlong *param_1)

{
  FUN_140e48d86();
  *param_1 = (longlong)&PTR_FUN_14b603b20;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_140440628(param_1 + 0x11,&DAT_14cbca8f0,0);
  *(undefined2 *)(param_1 + 0x18) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0xc2) = 0;
  (**(code **)(*param_1 + 0x90))(param_1);
  return param_1;
}



// FUNCTION 1457e764e FUN_1457e764e body=24 status=ok
// SIG undefined FUN_1457e764e(void)

void FUN_1457e764e(longlong param_1)

{
  *(undefined2 *)(param_1 + 0x78) = 1;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)(param_1 + 0x7b) = *(undefined1 *)(param_1 + 0xc2);
  *(undefined1 *)(param_1 + 0x7c) = 0;
  return;
}



// FUNCTION 1457e766e FUN_1457e766e body=59 status=ok
// SIG undefined FUN_1457e766e(void)

void FUN_1457e766e(longlong param_1)

{
  FUN_141076822(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457e76aa FUN_1457e76aa body=103 status=ok
// SIG undefined FUN_1457e76aa(void)

void FUN_1457e76aa(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x8c + (longlong)param_2 * 0x90);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x90 + 0x88);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x90 + 0x88);
  FUN_1457e7712();
  return;
}



// FUNCTION 1457e7712 FUN_1457e7712 body=122 status=ok
// SIG undefined FUN_1457e7712(void)

void FUN_1457e7712(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x90) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90 + 4) = uVar4;
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



// FUNCTION 1457e778c FUN_1457e778c body=1127 status=ok
// SIG undefined FUN_1457e778c(void)

void FUN_1457e778c(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  longlong *plVar12;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  undefined8 ***local_e8;
  undefined8 ***local_e0 [3];
  ushort local_c8;
  byte local_c0;
  undefined1 local_b8 [56];
  undefined8 ***local_80 [3];
  ushort local_68;
  undefined2 local_60;
  char local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((param_2 == 0) || (param_3 == 0)) goto LAB_1457e7978;
  local_e8 = (undefined8 ****)0x0;
  FUN_14485c47a(&local_e8);
  local_80[0] = local_e8;
  iVar4 = FUN_1409a82f2((longlong *)(param_1 + 0x58),
                        (uint)((ulonglong)local_e8 >> 0x20) ^ (uint)local_e8);
  if (iVar4 == -1) goto LAB_1457e7978;
  lVar10 = *(longlong *)(param_1 + 0x58);
  lVar9 = lVar10 + (longlong)iVar4 * 0x90;
  if ((lVar9 == 0) || (lVar10 = lVar10 + (longlong)iVar4 * 0x90 + 8, lVar10 == 0))
  goto LAB_1457e7978;
  lVar1 = lVar9 + 0x2c;
  cVar3 = FUN_144729dda(lVar1);
  if (cVar3 == '\0') goto LAB_1457e7978;
  if (((*(longlong *)(lVar9 + 0x68) != 0) && (cVar3 = FUN_144729dda(lVar9 + 0x60), cVar3 != '\0'))
     && (*(longlong **)(lVar9 + 0x68) != (longlong *)0x0)) {
    uVar5 = (**(code **)(**(longlong **)(lVar9 + 0x68) + 0x28))();
    local_68 = 8;
    local_80[0] = (undefined8 ****)0x0;
    FUN_14485c47a(local_80,*(undefined8 *)(param_3 + 0xa8));
    local_60 = CONCAT11(local_60._1_1_,7);
    FUN_1402b90a2(uVar5,&DAT_14cb716c8,local_80);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_60 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar11 = local_80;
      if (0x18 < local_68) {
        ppppuVar11 = (undefined8 ****)local_80[0];
      }
      (*pcVar2)(ppppuVar11);
    }
    if (0x18 < local_68) {
      FUN_1400020a8(local_80[0]);
    }
  }
  plVar6 = (longlong *)FUN_14479d2ce(lVar1);
  lVar7 = (**(code **)(*plVar6 + 0x9f8))(plVar6);
  if (lVar7 != param_3) goto LAB_1457e7978;
  FUN_14485c47a(lVar1,param_3);
  plVar6 = (longlong *)FUN_14479d2ce(lVar1);
  if (plVar6 == (longlong *)0x0) goto LAB_1457e7978;
  if (((*(longlong *)(lVar9 + 0x58) != 0) && (cVar3 = FUN_144729dda(lVar9 + 0x50), cVar3 != '\0'))
     && (*(longlong **)(lVar9 + 0x58) != (longlong *)0x0)) {
    uVar5 = (**(code **)(**(longlong **)(lVar9 + 0x58) + 0x10))();
    FUN_1456f058e(plVar6,uVar5);
  }
  cVar3 = FUN_141077012(plVar6);
  if ((cVar3 != '\0') || (cVar3 = FUN_1457e7bf4(plVar6), cVar3 == '\0')) {
    if ((*(char *)(lVar9 + 0xb) == '\x01') && (*(char *)((longlong)plVar6 + 0xd22) == '\x01')) {
      FUN_1456f1280(lVar10,plVar6[0x15]);
    }
    goto LAB_1457e7978;
  }
  plVar8 = (longlong *)(**(code **)(*plVar6 + 0x9f8))(plVar6);
  if (plVar8 != (longlong *)0x0) {
    plVar12 = plVar6;
    if (*(char *)((longlong)plVar8 + 0xf9d) != '\0') {
      plVar12 = plVar8;
    }
    local_f0 = (longlong *)FUN_144860928();
    local_80[0] = (undefined8 ****)0x0;
    local_60 = 0;
    local_58 = '\0';
    local_50 = 0;
    if (((*(longlong *)(lVar9 + 0x68) != 0) && (cVar3 = FUN_144729dda(lVar9 + 0x60), cVar3 != '\0'))
       && (*(longlong **)(lVar9 + 0x68) != (longlong *)0x0)) {
      uVar5 = (**(code **)(**(longlong **)(lVar9 + 0x68) + 0x28))();
      FUN_140680162(uVar5,local_e0,&DAT_14cb7e450);
      FUN_140cc7bf8(local_b8,local_e0);
      FUN_1403719a4(local_80,local_b8);
      FUN_144a2da94(local_b8);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
      if (pcVar2 != (code *)0x0) {
        ppppuVar11 = local_e0;
        if (0x18 < local_c8) {
          ppppuVar11 = (undefined8 ****)local_e0[0];
        }
        (*pcVar2)(ppppuVar11);
      }
      if (0x18 < local_c8) {
        FUN_1400020a8(local_e0[0]);
      }
    }
    cVar3 = FUN_1402b90fa(plVar8);
    if (((cVar3 == '\0') || (cVar3 = FUN_1402b90fa(plVar6), cVar3 == '\0')) ||
       (*(char *)((longlong)plVar12 + 0xed9) != '\x01')) {
      cVar3 = FUN_1402b90e8(plVar8);
      if (((cVar3 != '\0') && (cVar3 = FUN_1402b90e8(plVar6), cVar3 != '\0')) &&
         (*(char *)((longlong)plVar8 + 0xe01) == '\x01')) {
        if (local_58 == '\0') {
          plVar6 = local_f0 + 0x14;
          goto LAB_1457e7ad4;
        }
        goto LAB_1457e7ad9;
      }
      FUN_1456f1280(lVar10,plVar12[0x15]);
    }
    else {
      if (local_58 == '\0') {
        if (((char)plVar12[0x1db] == '\x01') && ((char)plVar12[0x1d9] != '\0')) {
          plVar6 = plVar12 + 0x1d4;
          local_f0 = plVar6;
        }
        else {
          plVar6 = local_f0 + 0x1b;
          local_f0 = plVar6;
        }
LAB_1457e7ad4:
        FUN_144983130(local_80,plVar6);
      }
LAB_1457e7ad9:
      FUN_1487cc2ba(lVar10,local_80,plVar12);
    }
    FUN_144a2da94(local_80);
  }
  cVar3 = FUN_1402b9118(lVar10);
  if (cVar3 != '\0') {
    FUN_145a2b17e(param_1,lVar10);
  }
LAB_1457e7978:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457e7bf4 FUN_1457e7bf4 body=104 status=ok
// SIG undefined FUN_1457e7bf4(void)

undefined8 FUN_1457e7bf4(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x9f8))();
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x6f1) == '\x01')) {
    cVar1 = FUN_1402b90e8(param_1);
    if ((cVar1 != '\0') && (cVar1 = FUN_1402b90e8(lVar2), cVar1 != '\0')) {
      return 1;
    }
    cVar1 = FUN_1402b90fa(param_1);
    if ((cVar1 != '\0') && (cVar1 = FUN_1402b90fa(lVar2), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1457e7c5c FUN_1457e7c5c body=2929 status=ok
// SIG undefined FUN_1457e7c5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457e7c5c(longlong param_1,longlong param_2,longlong param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  float fVar12;
  double dVar13;
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar20;
  undefined1 auVar19 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_378 [32];
  undefined8 local_358;
  undefined8 *local_350;
  undefined8 *local_348;
  double local_338;
  double dStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  longlong *local_2a0;
  undefined4 local_298;
  longlong *local_290;
  undefined4 local_288;
  longlong local_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  local_280 = param_1;
  if ((param_1 != 0) && (param_3 != 0)) {
    FUN_1457e87ce(&local_158,param_1);
    FUN_141078840();
    local_288 = 1;
    local_290 = &local_280;
    cVar6 = FUN_140b263aa(&local_1d8);
    if (cVar6 == '\0') {
      FUN_1448635f4(&local_158);
    }
    else {
      local_298 = 1;
      local_2a0 = &local_280;
      fVar12 = (float)FUN_140b2620e(&local_1d8);
      FUN_1448635f4(&local_158);
      if (1e-08 <= fVar12) {
        *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_3 + 0x40);
        uVar3 = *(undefined8 *)(param_3 + 0x38);
        *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_3 + 0x30);
        *(undefined8 *)(param_2 + 0x70) = uVar3;
        lVar10 = param_2;
        uVar7 = FUN_140b26490(param_2,&local_308,0);
        dVar18 = local_308 * 0.0 - dStack_300;
        dVar25 = local_2f8 + local_308 * -0.0;
        dVar21 = dStack_300 * 0.0;
        dVar27 = local_2f8 * -0.0 + dVar21;
        dVar18 = dVar18 + dVar18;
        dVar25 = dVar25 + dVar25;
        dVar27 = dVar27 + dVar27;
        *(double *)(param_2 + 0x80) =
             (dStack_300 * dVar18 - dVar25 * local_2f8) + dStack_2f0 * dVar27 + 1.0;
        *(double *)(param_2 + 0x88) =
             (local_2f8 * dVar27 - dVar18 * local_308) + dStack_2f0 * dVar25 + 0.0;
        *(double *)(param_2 + 0x90) =
             (local_308 * dVar25 - dVar27 * dStack_300) + dStack_2f0 * dVar18 + 0.0;
        dVar27 = local_2f8 * 0.0 + local_308 * -0.0;
        dVar27 = dVar27 + dVar27;
        dVar25 = (dVar21 - local_2f8) + (dVar21 - local_2f8);
        dVar18 = (local_308 - dVar21) + (local_308 - dVar21);
        *(double *)(param_2 + 0x98) =
             (dStack_300 * dVar18 - dVar27 * local_2f8) + dStack_2f0 * dVar25 + 0.0;
        *(double *)(param_2 + 0xa0) =
             (local_2f8 * dVar25 - dVar18 * local_308) + dStack_2f0 * dVar27 + 1.0;
        *(double *)(param_2 + 0xa8) =
             (local_308 * dVar27 - dVar25 * dStack_300) + dStack_2f0 * dVar18 + 0.0;
        auVar22 = *(undefined1 (*) [16])(param_4 + 8);
        dVar18 = auVar22._0_8_;
        dVar20 = auVar22._8_8_;
        dVar21 = SUB168(*(undefined1 (*) [16])(param_4 + 10),0);
        dVar25 = local_2c8._0_8_;
        dVar26 = local_2c8._8_8_;
        dVar27 = local_2b8._0_8_;
        auVar22 = minpd(local_2c8,auVar22);
        auVar17._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
        auVar17._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
        iVar8 = movmskpd(uVar7,auVar17);
        auVar22 = minpd(local_2b8,*(undefined1 (*) [16])(param_4 + 10));
        auVar23._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
        auVar23._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
        uVar9 = movmskpd((int)lVar10,auVar23);
        if ((uVar9 & 0x3fffffff) == 0 && iVar8 == 0) {
          dVar31 = *param_4;
          dVar1 = param_4[1];
          dVar2 = param_4[2];
          dVar30 = param_4[3];
          dVar26 = param_4[3];
          dVar13 = param_4[1];
          dVar16 = param_4[1];
          dVar29 = param_4[2];
          dVar28 = param_4[2];
          dVar25 = dStack_300 * dVar29 * -1.0 +
                   local_2f8 * dVar13 + dStack_2f0 * *param_4 * 1.0 + local_308 * dVar30;
          dVar27 = local_308 * dVar28 * 1.0 +
                   dStack_2f0 * dVar16 + local_2f8 * *param_4 * -1.0 + dStack_300 * dVar26;
          auVar22._0_8_ =
               dStack_2f0 * dVar29 * 1.0 +
               ((*param_4 * dStack_300 * 1.0 + local_2f8 * dVar30) - local_308 * dVar13);
          auVar22._8_8_ =
               local_2f8 * dVar28 * -1.0 +
               ((*param_4 * local_308 * -1.0 + dStack_2f0 * dVar26) - dStack_300 * dVar16);
          dVar18 = dVar18 * local_2e8;
          dVar20 = dVar20 * dStack_2e0;
          dVar21 = dVar21 * local_2d8;
          dVar13 = dVar20 * dVar31 - dVar1 * dVar18;
          dVar16 = dVar21 * dVar1 - dVar2 * dVar20;
          dVar29 = dVar18 * dVar2 - dVar31 * dVar21;
          dVar16 = dVar16 + dVar16;
          dVar29 = dVar29 + dVar29;
          dVar13 = dVar13 + dVar13;
          local_f8 = (dVar13 * dVar1 - dVar2 * dVar29) + dVar30 * dVar16 + dVar18 + param_4[4];
          dStack_f0 = (dVar16 * dVar2 - dVar13 * dVar31) + dVar26 * dVar29 + dVar20 + param_4[5];
          local_e8 = (dVar29 * dVar31 - dVar1 * dVar16) + dVar30 * dVar13 + dVar21 + param_4[6];
        }
        else {
          dVar1 = *param_4;
          dVar2 = param_4[1];
          dVar30 = param_4[2];
          dVar32 = dVar2 + dVar2;
          dVar16 = dVar30 + dVar30;
          dVar13 = dVar1 * (dVar1 + dVar1);
          dVar29 = dVar2 * dVar32;
          local_338 = 1.0 - (dVar13 + dVar29);
          dStack_330 = 0.0 - (dVar13 + dVar29);
          local_1d8 = (1.0 - (dVar30 * dVar16 + dVar29)) * dVar18;
          dVar31 = (1.0 - (dVar30 * dVar16 + dVar13)) * dVar20;
          dVar30 = param_4[3];
          dVar29 = dVar16 * dVar30;
          dVar28 = (dVar1 + dVar1) * param_4[3];
          dVar30 = dVar32 * dVar30;
          dVar13 = (dVar16 * dVar2 - dVar28) * dVar21;
          dStack_1d0 = (dVar32 * dVar1 + dVar29) * dVar18;
          local_1a8 = (dVar16 * dVar2 + dVar28) * dVar20;
          local_188 = local_338 * dVar21;
          local_1c8 = (*param_4 * dVar16 - dVar30) * dVar18;
          uStack_1c0 = 0;
          local_1b8._8_4_ = SUB84(dVar31,0);
          local_1b8._0_8_ = (dVar32 * dVar1 - dVar29) * dVar20;
          local_1b8._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
          uStack_1a0 = 0;
          local_198._8_4_ = SUB84(dVar13,0);
          local_198._0_8_ = (dVar30 + *param_4 * dVar16) * dVar21;
          local_198._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
          uStack_180 = 0;
          local_178 = param_4[4];
          dStack_170 = param_4[5];
          local_168 = *(undefined4 *)(param_4 + 6);
          uStack_164 = *(undefined4 *)((longlong)param_4 + 0x34);
          uStack_160 = 0;
          uStack_15c = 0x3ff00000;
          dVar16 = dStack_300 + dStack_300;
          dVar29 = local_2f8 + local_2f8;
          dVar31 = local_308 * (local_308 + local_308);
          dVar28 = (local_308 + local_308) * dStack_2f0;
          dVar13 = (dVar29 * dStack_300 - dVar28) * dVar27;
          local_258 = (1.0 - (local_2f8 * dVar29 + dStack_300 * dVar16)) * dVar25;
          dVar30 = (1.0 - (local_2f8 * dVar29 + dVar31)) * dVar26;
          dStack_250 = (dVar16 * local_308 + dVar29 * dStack_2f0) * dVar25;
          local_228 = (dVar29 * dStack_300 + dVar28) * dVar26;
          local_248 = (local_308 * dVar29 - dVar16 * dStack_2f0) * dVar25;
          uStack_240 = 0;
          local_238._8_4_ = SUB84(dVar30,0);
          local_238._0_8_ = (dVar16 * local_308 - dVar29 * dStack_2f0) * dVar26;
          local_238._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
          uStack_220 = 0;
          local_218._8_4_ = SUB84(dVar13,0);
          local_218._0_8_ = (dVar16 * dStack_2f0 + local_308 * dVar29) * dVar27;
          local_218._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
          local_208 = (1.0 - (dVar31 + dStack_300 * dVar16)) * dVar27;
          uStack_200 = 0;
          local_1f8 = local_2e8;
          dStack_1f0 = dStack_2e0;
          local_1e8 = local_2d8;
          uStack_1e0 = 0x3ff0000000000000;
          FUN_1447fea8d(&local_158);
          FUN_144a1c686(&local_158,0x3e45798ee0000000);
          auVar22 = _DAT_149934d80;
          auVar14._8_8_ = -(ulonglong)(0.0 <= dVar20 * dVar26);
          auVar14._0_8_ = -(ulonglong)(0.0 <= dVar18 * dVar25);
          auVar17 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar14);
          uVar11 = -(ulonglong)(0.0 <= dVar21 * dVar27);
          dVar18 = (double)(~uVar11 & 0xbff0000000000000 | uVar11 & 0x3ff0000000000000);
          dVar21 = auVar17._0_8_;
          local_148 = local_148 * dVar21;
          local_150 = local_150 * dVar21;
          local_158 = local_158 * dVar21;
          dVar21 = auVar17._8_8_;
          local_128 = local_128 * dVar21;
          local_130 = local_130 * dVar21;
          local_138 = dVar21 * local_138;
          local_108 = local_108 * dVar18;
          local_110 = local_110 * dVar18;
          local_118 = dVar18 * local_118;
          FUN_14481fd10(&local_278,&local_158);
          dVar18 = local_268 * local_268 + local_278 * local_278;
          dVar21 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
          auVar19._0_8_ = dVar18 + dVar21;
          auVar19._8_8_ = dVar18 + dVar21;
          auVar15._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_);
          auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_);
          auVar17 = sqrtpd(auVar19,auVar19);
          auVar22 = divpd(auVar22,auVar17);
          auVar24._0_8_ = auVar22._0_8_ * local_268;
          auVar24._8_8_ = auVar22._8_8_ * dStack_260;
          dVar25 = (double)((ulonglong)(local_278 * auVar22._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_));
          dVar27 = (double)((ulonglong)(dStack_270 * auVar22._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_));
          auVar22 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar24,auVar15);
        }
        *(double *)(param_2 + 0xb0) = local_f8;
        *(double *)(param_2 + 0xb8) = dStack_f0;
        *(double *)(param_2 + 0xc0) = local_e8;
        dVar13 = dVar25 * 0.0 - dVar27;
        dVar26 = auVar22._0_8_;
        dVar21 = dVar26 + dVar25 * -0.0;
        dVar20 = dVar27 * 0.0;
        dVar18 = dVar26 * -0.0 + dVar20;
        dVar13 = dVar13 + dVar13;
        dVar21 = dVar21 + dVar21;
        dVar18 = dVar18 + dVar18;
        dVar30 = auVar22._8_8_;
        *(double *)(param_2 + 200) = (dVar27 * dVar13 - dVar21 * dVar26) + dVar30 * dVar18 + 1.0;
        *(double *)(param_2 + 0xd0) = (dVar26 * dVar18 - dVar13 * dVar25) + dVar30 * dVar21 + 0.0;
        *(double *)(param_2 + 0xd8) = (dVar25 * dVar21 - dVar18 * dVar27) + dVar30 * dVar13 + 0.0;
        dVar18 = dVar26 * 0.0 + dVar25 * -0.0;
        dVar13 = (dVar25 - dVar20) + (dVar25 - dVar20);
        dVar18 = dVar18 + dVar18;
        dVar21 = (dVar20 - dVar26) + (dVar20 - dVar26);
        *(double *)(param_2 + 0xe0) = (dVar27 * dVar13 - dVar18 * dVar26) + dVar30 * dVar21 + 0.0;
        *(double *)(param_2 + 0xe8) = (dVar26 * dVar21 - dVar13 * dVar25) + dVar30 * dVar18 + 1.0;
        *(double *)(param_2 + 0xf0) = (dVar25 * dVar18 - dVar21 * dVar27) + dVar30 * dVar13 + 0.0;
        uVar3 = *(undefined8 *)(param_3 + 0x48);
        uVar4 = *(undefined8 *)(param_3 + 0x50);
        uVar5 = *(undefined8 *)(param_3 + 0x5c);
        *(undefined8 *)(param_2 + 0x14c) = *(undefined8 *)(param_3 + 0x54);
        *(undefined8 *)(param_2 + 0x154) = uVar5;
        *(undefined8 *)(param_2 + 0x140) = uVar3;
        *(undefined8 *)(param_2 + 0x148) = uVar4;
        uVar3 = *(undefined8 *)(param_3 + 100);
        uVar4 = *(undefined8 *)(param_3 + 0x6c);
        uVar5 = *(undefined8 *)(param_3 + 0x7c);
        *(undefined8 *)(param_2 + 0x16c) = *(undefined8 *)(param_3 + 0x74);
        *(undefined8 *)(param_2 + 0x174) = uVar5;
        *(undefined8 *)(param_2 + 0x15c) = uVar3;
        *(undefined8 *)(param_2 + 0x164) = uVar4;
        uVar3 = *(undefined8 *)(param_3 + 0x84);
        uVar4 = *(undefined8 *)(param_3 + 0x8c);
        uVar5 = *(undefined8 *)(param_3 + 0x98);
        *(undefined8 *)(param_2 + 0x188) = *(undefined8 *)(param_3 + 0x90);
        *(undefined8 *)(param_2 + 400) = uVar5;
        *(undefined8 *)(param_2 + 0x17c) = uVar3;
        *(undefined8 *)(param_2 + 0x184) = uVar4;
        local_348 = &local_318;
        local_318 = 0;
        uStack_310 = 0;
        local_350 = &local_328;
        local_328 = 0;
        uStack_320 = 0;
        local_358 = 0;
        FUN_140aa2f88(param_2,local_280,0,0x3f800000);
      }
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e87ce FUN_1457e87ce body=39 status=ok
// SIG undefined FUN_1457e87ce(void)

undefined8 FUN_1457e87ce(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1457e87f6(param_2);
  FUN_144a78570(param_1,uVar1,0);
  return param_1;
}



// FUNCTION 1457e87f6 FUN_1457e87f6 body=30 status=ok
// SIG undefined FUN_1457e87f6(void)

undefined8 FUN_1457e87f6(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1457e8814();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x260);
  }
  return uVar2;
}



// FUNCTION 1457e8814 FUN_1457e8814 body=21 status=ok
// SIG undefined FUN_1457e8814(void)

undefined8 FUN_1457e8814(longlong *param_1)

{
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    return *(undefined8 *)(*param_1 + 8);
  }
  return 0;
}



// FUNCTION 1457e882a FUN_1457e882a body=167 status=ok
// SIG undefined FUN_1457e882a(void)

void FUN_1457e882a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_2 + 0x3c8;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  FUN_140d3c3be(param_1,lVar1);
  FUN_140d3c0aa(param_1);
  local_38 = 0;
  FUN_14485c47a(&local_38,param_2);
  local_30 = &local_38;
  FUN_141078b1e(param_1 + 0x208);
  if (param_2 != 0) {
    lVar1 = FUN_14479d2ce(param_1 + 0x228);
    if (lVar1 == param_2) {
      FUN_143c29c0c(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e88d2 FUN_1457e88d2 body=40 status=ok
// SIG undefined FUN_1457e88d2(void)

undefined8 FUN_1457e88d2(undefined8 param_1,int param_2)

{
  FUN_1457e88fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457e88fa FUN_1457e88fa body=118 status=ok
// SIG undefined FUN_1457e88fa(void)

void FUN_1457e88fa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b45b030;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  if (param_1[0x11b] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e89a6(param_1 + 0x113);
  *(undefined4 *)(param_1 + 0x112) = 0;
  if (param_1[0x111] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e8970(param_1 + 0x109);
  FUN_1457e8cd6(param_1);
  return;
}



// FUNCTION 1457e8970 FUN_1457e8970 body=53 status=ok
// SIG undefined FUN_1457e8970(void)

void FUN_1457e8970(longlong *param_1)

{
  FUN_1457e89dc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457e89a6 FUN_1457e89a6 body=53 status=ok
// SIG undefined FUN_1457e89a6(void)

void FUN_1457e89a6(longlong *param_1)

{
  FUN_1457e8b5a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457e89dc FUN_1457e89dc body=309 status=ok
// SIG undefined FUN_1457e89dc(void)

void FUN_1457e89dc(longlong *param_1)

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
      FUN_1457e8b12((longlong)iStack_4c * 0x30 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e8b12 FUN_1457e8b12 body=72 status=ok
// SIG undefined FUN_1457e8b12(void)

void FUN_1457e8b12(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x0001457e8b56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1457e8b5a FUN_1457e8b5a body=378 status=ok
// SIG undefined FUN_1457e8b5a(void)

void FUN_1457e8b5a(longlong *param_1)

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



// FUNCTION 1457e8cd6 FUN_1457e8cd6 body=600 status=ok
// SIG undefined FUN_1457e8cd6(void)

void FUN_1457e8cd6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acd1580;
  *(undefined4 *)(param_1 + 0x105) = 0;
  if (param_1[0x104] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e8f2e(param_1 + 0xfc);
  if (param_1[0xfa] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf9) = 0;
  if (param_1[0xf8] != 0) {
    FUN_1400020a8();
  }
  FUN_141078d96(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xef) = 0;
  if (param_1[0xee] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e8f66(param_1 + 0xe6);
  *(undefined4 *)(param_1 + 0xe5) = 0;
  if (param_1[0xe4] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e8f9c(param_1 + 0xdc);
  *(undefined4 *)(param_1 + 0xdb) = 0;
  if (param_1[0xda] != 0) {
    FUN_1400020a8();
  }
  FUN_141078d96(param_1 + 0xd2);
  *(undefined4 *)(param_1 + 0xd1) = 0;
  if (param_1[0xd0] != 0) {
    FUN_1400020a8();
  }
  FUN_141078d96(param_1 + 200);
  *(undefined4 *)(param_1 + 199) = 0;
  if (param_1[0xc6] != 0) {
    FUN_1400020a8();
  }
  FUN_141078d96(param_1 + 0xbe);
  *(undefined4 *)(param_1 + 0xbd) = 0;
  if (param_1[0xbc] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e903e(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xb3) = 0;
  if (param_1[0xb2] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e8fd2(param_1 + 0xaa);
  FUN_140dde623(param_1[0xa8],*(undefined4 *)(param_1 + 0xa9));
  if (param_1[0xa8] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa7) = 0;
  if (param_1[0xa6] != 0) {
    FUN_1400020a8();
  }
  FUN_141078e0c(param_1 + 0x9e);
  *(undefined4 *)(param_1 + 0x9d) = 0;
  if (param_1[0x9c] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e9008(param_1 + 0x94);
  FUN_1457e9076(param_1);
  return;
}



// FUNCTION 1457e8f2e FUN_1457e8f2e body=55 status=ok
// SIG undefined FUN_1457e8f2e(void)

void FUN_1457e8f2e(longlong *param_1)

{
  FUN_141291674(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457e8f66 FUN_1457e8f66 body=53 status=ok
// SIG undefined FUN_1457e8f66(void)

void FUN_1457e8f66(longlong *param_1)

{
  FUN_1457e9900();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457e8f9c FUN_1457e8f9c body=53 status=ok
// SIG undefined FUN_1457e8f9c(void)

void FUN_1457e8f9c(longlong *param_1)

{
  FUN_1457e9bde();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457e8fd2 FUN_1457e8fd2 body=53 status=ok
// SIG undefined FUN_1457e8fd2(void)

void FUN_1457e8fd2(longlong *param_1)

{
  FUN_14107939a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457e9008 FUN_1457e9008 body=53 status=ok
// SIG undefined FUN_1457e9008(void)

void FUN_1457e9008(longlong *param_1)

{
  FUN_1457e9a6c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457e903e FUN_1457e903e body=55 status=ok
// SIG undefined FUN_1457e903e(void)

void FUN_1457e903e(longlong *param_1)

{
  FUN_141079584(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457e9076 FUN_1457e9076 body=521 status=ok
// SIG undefined FUN_1457e9076(void)

void FUN_1457e9076(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aaeffb0;
  if (param_1[0x90] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (param_1[0x6f] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e931a(param_1 + 0x67);
  *(undefined4 *)(param_1 + 0x65) = 0;
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e9428(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5b) = 0;
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e9350(param_1 + 0x52);
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e9386(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x47) = 0;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e93bc(param_1 + 0x3e);
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e927f(param_1[0x3a],*(undefined4 *)(param_1 + 0x3b));
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e92cc(param_1[0x38],*(undefined4 *)(param_1 + 0x39));
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_141078ebe(param_1[0x34],*(undefined4 *)(param_1 + 0x35));
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e93f2(param_1 + 0x26);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1457e927f FUN_1457e927f body=77 status=ok
// SIG undefined FUN_1457e927f(void)

void FUN_1457e927f(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x20);
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
      plVar4 = plVar4 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1457e92cc FUN_1457e92cc body=77 status=ok
// SIG undefined FUN_1457e92cc(void)

void FUN_1457e92cc(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x20);
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
      plVar4 = plVar4 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1457e931a FUN_1457e931a body=53 status=ok
// SIG undefined FUN_1457e931a(void)

void FUN_1457e931a(longlong *param_1)

{
  FUN_1457e9784();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457e9350 FUN_1457e9350 body=53 status=ok
// SIG undefined FUN_1457e9350(void)

void FUN_1457e9350(longlong *param_1)

{
  FUN_1457e9612();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457e9386 FUN_1457e9386 body=53 status=ok
// SIG undefined FUN_1457e9386(void)

void FUN_1457e9386(longlong *param_1)

{
  FUN_1457e94ba();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457e93bc FUN_1457e93bc body=53 status=ok
// SIG undefined FUN_1457e93bc(void)

void FUN_1457e93bc(longlong *param_1)

{
  FUN_141078f18();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457e93f2 FUN_1457e93f2 body=53 status=ok
// SIG undefined FUN_1457e93f2(void)

void FUN_1457e93f2(longlong *param_1)

{
  FUN_1457e9460();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457e9428 FUN_1457e9428 body=55 status=ok
// SIG undefined FUN_1457e9428(void)

void FUN_1457e9428(longlong *param_1)

{
  FUN_141079110(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457e9460 FUN_1457e9460 body=90 status=ok
// SIG undefined FUN_1457e9460(void)

void FUN_1457e9460(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
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



// FUNCTION 1457e94ba FUN_1457e94ba body=343 status=ok
// SIG undefined FUN_1457e94ba(void)

void FUN_1457e94ba(longlong *param_1)

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
      FUN_147d9cc50(*local_68 + (longlong)iStack_4c * 0x40 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
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



// FUNCTION 1457e9612 FUN_1457e9612 body=369 status=ok
// SIG undefined FUN_1457e9612(void)

void FUN_1457e9612(longlong *param_1)

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
      FUN_1457e927f(*(undefined8 *)(lVar2 + 8 + lVar3 * 0x28),
                    *(undefined4 *)(lVar2 + 0x10 + lVar3 * 0x28));
      if (*(longlong *)(lVar2 + 8 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457e9784 FUN_1457e9784 body=378 status=ok
// SIG undefined FUN_1457e9784(void)

void FUN_1457e9784(longlong *param_1)

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



// FUNCTION 1457e9900 FUN_1457e9900 body=363 status=ok
// SIG undefined FUN_1457e9900(void)

void FUN_1457e9900(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_14570ecf1(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457e9a6c FUN_1457e9a6c body=369 status=ok
// SIG undefined FUN_1457e9a6c(void)

void FUN_1457e9a6c(longlong *param_1)

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
      FUN_144a65a1e(*(undefined8 *)(lVar2 + 8 + lVar3 * 0x28),
                    *(undefined4 *)(lVar2 + 0x10 + lVar3 * 0x28));
      if (*(longlong *)(lVar2 + 8 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457e9bde FUN_1457e9bde body=371 status=ok
// SIG undefined FUN_1457e9bde(void)

void FUN_1457e9bde(longlong *param_1)

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
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457e9d52 FUN_1457e9d52 body=564 status=ok
// SIG undefined FUN_1457e9d52(void)

ulonglong FUN_1457e9d52(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = FUN_140f42f34(*param_1);
  if (lVar6 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_140f430f8(lVar6);
  }
  local_58 = (longlong *)0x0;
  uStack_50 = 0;
  FUN_1457ea17c(param_1,iVar4);
  if ((longlong)(int)uStack_50 != 0) {
    plVar1 = local_58 + (int)uStack_50;
    plVar11 = local_58;
    do {
      lVar6 = *plVar11;
      FUN_1457ea040(lVar6,0);
      iVar5 = (int)param_1[2];
      if ((longlong)iVar5 != 0) {
        lVar12 = param_1[1];
        lVar7 = (longlong)iVar5 * 8;
        lVar9 = 0;
        lVar10 = 0;
        do {
          if (*(longlong *)(lVar12 + lVar9 * 8) == lVar6) {
            if ((uint)lVar9 != 0xffffffff) {
              memmove((void *)(lVar12 + (lVar10 >> 0x20) * 8),
                      (void *)(lVar12 + (lVar10 >> 0x20) * 8 + 8),
                      (longlong)(int)(~(uint)lVar9 + iVar5) << 3);
              *(int *)(param_1 + 2) = (int)param_1[2] + -1;
            }
            break;
          }
          lVar10 = lVar10 + 0x100000000;
          lVar9 = lVar9 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar1);
  }
  iVar4 = iVar4 + 1;
  lVar6 = *param_1;
  iVar5 = *(int *)(*(longlong *)(lVar6 + 0xa0) + 0x30);
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  if (iVar4 < iVar5) {
    local_60 = param_1 + 1;
    do {
      FUN_14890e164(lVar6,iVar4);
      bVar13 = (longlong)uStack_50 < 0;
      uStack_50 = uStack_50 & 0xffffffff00000000;
      if (bVar13) {
        FUN_1489175d4(&local_58);
      }
      FUN_14890e950(param_1,iVar4,&local_58);
      plVar1 = local_58;
      lVar6 = (longlong)(int)uStack_50;
      if (lVar6 != 0) {
        lVar7 = 0;
        do {
          uVar2 = *(undefined8 *)((longlong)plVar1 + lVar7);
          FUN_1457ea040(uVar2,1);
          iVar5 = (int)param_1[2];
          *(uint *)(param_1 + 2) = iVar5 + 1U;
          if (*(uint *)((longlong)param_1 + 0x14) < iVar5 + 1U) {
            FUN_140f54fb6(local_60,iVar5);
          }
          *(undefined8 *)(*local_60 + (longlong)iVar5 * 8) = uVar2;
          lVar7 = lVar7 + 8;
        } while (lVar6 * 8 != lVar7);
      }
      lVar6 = param_1[2];
      if ((longlong)(int)lVar6 != 0) {
        lVar7 = param_1[1];
        lVar12 = 0;
        do {
          cVar3 = FUN_141079d80(*(undefined8 *)(lVar7 + lVar12));
          if (cVar3 != '\0') {
            uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
            goto LAB_1457e9e50;
          }
          lVar12 = lVar12 + 8;
        } while ((longlong)(int)lVar6 * 8 != lVar12);
      }
      iVar4 = iVar4 + 1;
      lVar6 = *param_1;
      iVar5 = *(int *)(*(longlong *)(lVar6 + 0xa0) + 0x30);
      if (iVar5 < 2) {
        iVar5 = 1;
      }
    } while (iVar4 < iVar5);
  }
  uVar8 = 0;
  FUN_1457e9f88(lVar6,0);
LAB_1457e9e50:
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1457e9f88 FUN_1457e9f88 body=85 status=ok
// SIG undefined FUN_1457e9f88(void)

void FUN_1457e9f88(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_140f42f34();
  if (lVar2 != 0) {
    cVar1 = FUN_1405f61f4(lVar2);
    if (cVar1 == '\x06') {
      return;
    }
  }
  lVar2 = FUN_140f42f34(param_1);
  if (lVar2 != 0) {
    FUN_1457e9fde(lVar2,param_2);
  }
  FUN_140f13ae4(param_1,6,1);
  return;
}



// FUNCTION 1457e9fde FUN_1457e9fde body=96 status=ok
// SIG undefined FUN_1457e9fde(void)

void FUN_1457e9fde(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_28[0] = 0;
  local_24 = 0;
  local_1c = 0;
  FUN_144976b9c(local_28);
  FUN_1457ea0aa(uVar1,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ea040 FUN_1457ea040 body=105 status=ok
// SIG undefined FUN_1457ea040(void)

void FUN_1457ea040(longlong param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = FUN_140dcc81c();
  if (param_2 != '\0') {
    if ((lVar3 != 0) && (cVar2 = FUN_141042fba(lVar3), cVar2 != '\0')) {
      return;
    }
    FUN_140dcc746(param_1,1);
    return;
  }
  if ((lVar3 != 0) && (bVar1 = FUN_141042fba(lVar3), 5 < bVar1)) {
    return;
  }
  FUN_143df0722(param_1,*(char *)(*(longlong *)(param_1 + 0x40) + 0x3aa) * '\x02' + '\x01');
  return;
}



// FUNCTION 1457ea0aa FUN_1457ea0aa body=208 status=ok
// SIG undefined FUN_1457ea0aa(void)

void FUN_1457ea0aa(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x150) == '\x03') goto LAB_1457ea0fb;
  lVar5 = *(longlong *)(param_1 + 0x68);
  if (lVar5 == 0) {
    FUN_1403a0728(param_2,&local_28);
    lVar5 = *(longlong *)(param_1 + 0x68);
    if (local_28 != 0) {
      if (lVar5 != 0) goto LAB_1457ea11f;
      local_38 = 0;
      lVar5 = FUN_1403a1b12(*(undefined8 *)(param_1 + 8),param_1,&DAT_14cb88880,0);
      *(longlong *)(param_1 + 0x68) = lVar5;
    }
    if (lVar5 == 0) goto LAB_1457ea0fb;
  }
LAB_1457ea11f:
  cVar4 = FUN_1403218c0((undefined4 *)(lVar5 + 0x38),param_2);
  if (cVar4 == '\0') {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(lVar5 + 0x38) = *param_2;
    *(undefined4 *)(lVar5 + 0x3c) = uVar1;
    *(undefined4 *)(lVar5 + 0x40) = uVar2;
    *(undefined4 *)(lVar5 + 0x44) = uVar3;
    *(undefined8 *)(lVar5 + 0x58) = 0;
    FUN_140bde2c8(*(undefined8 *)(lVar5 + 0x30),lVar5,0);
  }
LAB_1457ea0fb:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ea17c FUN_1457ea17c body=237 status=ok
// SIG undefined FUN_1457ea17c(void)

void FUN_1457ea17c(longlong *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (-1 < param_2) {
    FUN_140d83844();
    lVar2 = (longlong)*(int *)(*(longlong *)(*param_1 + 0xa0) + 0x40);
    if (lVar2 != 0) {
      lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0xa0) + 0x38) + 0x10;
      lVar5 = 0;
      do {
        if (*(int *)(lVar4 + lVar5) == param_2) {
          lVar3 = lVar5 + lVar4;
          local_60 = *(undefined4 *)(lVar3 + -8);
          local_68 = *(undefined8 *)(lVar3 + -0x10);
          local_58 = local_68;
          local_50 = local_60;
          lVar3 = FUN_140f54c6c(*param_1,&local_58);
          if (lVar3 != 0) {
            iVar1 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
              FUN_140f54fb6(param_3,iVar1);
            }
            *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar3;
          }
        }
        lVar5 = lVar5 + 0x14;
      } while (lVar2 * 0x14 != lVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457ea278 FUN_1457ea278 body=40 status=ok
// SIG undefined FUN_1457ea278(void)

undefined8 FUN_1457ea278(undefined8 param_1,int param_2)

{
  FUN_140ffd6b6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ea2a0 FUN_1457ea2a0 body=40 status=ok
// SIG undefined FUN_1457ea2a0(void)

undefined8 FUN_1457ea2a0(undefined8 param_1,int param_2)

{
  thunk_FUN_1402d9b92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ea2c8 FUN_1457ea2c8 body=40 status=ok
// SIG undefined FUN_1457ea2c8(void)

undefined8 FUN_1457ea2c8(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ea2f0 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457ea304 FUN_1457ea304 body=40 status=ok
// SIG undefined FUN_1457ea304(void)

undefined8 FUN_1457ea304(undefined8 param_1,int param_2)

{
  FUN_1403d767a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ea348 FUN_1457ea348 body=54 status=ok
// SIG undefined FUN_1457ea348(void)

undefined1 FUN_1457ea348(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14107c4d6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1457ea37e FUN_1457ea37e body=126 status=ok
// SIG undefined FUN_1457ea37e(void)

undefined8 * FUN_1457ea37e(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = FUN_14479d2ce(param_1 + 0x1a8);
  lVar3 = FUN_1457ea3fc(uVar2);
  if (lVar3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar4 = FUN_14479d2ce(param_1 + 0x1a8);
    if ((lVar4 != 0) && (iVar1 = FUN_14490d72a(lVar4), iVar1 == 3)) {
      FUN_1457ea61e(lVar3,param_2,param_3);
      return param_2;
    }
    FUN_1457ea518(lVar3,param_2,param_3);
  }
  return param_2;
}



// FUNCTION 1457ea3fc FUN_1457ea3fc body=42 status=ok
// SIG undefined FUN_1457ea3fc(void)

undefined8 FUN_1457ea3fc(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_140115352();
    if (lVar1 != 0) {
      uVar2 = FUN_1457ea426(lVar1,*(undefined8 *)(lVar1 + 0x20));
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1457ea426 FUN_1457ea426 body=241 status=ok
// SIG undefined FUN_1457ea426(void)

undefined8 FUN_1457ea426(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined1 local_a8 [48];
  undefined1 local_78;
  byte local_76;
  byte local_74;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x178) == 0) {
    lVar2 = FUN_144a126be(param_1);
    if (lVar2 != 0) {
      iVar1 = FUN_14490d72a(lVar2);
      if (iVar1 == 3) goto LAB_1457ea44f;
    }
    FUN_1411371f6(local_a8);
    local_78 = 1;
    local_74 = local_74 | 0x40;
    local_76 = local_76 | 8;
    uVar3 = FUN_14598387e();
    local_b8 = local_a8;
    lVar2 = FUN_141137228(param_2,uVar3,0,0);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x178) = lVar2;
    if (local_68 != 0) {
      if (local_58 == (longlong *)0x0) {
        local_58 = local_48;
      }
      (**(code **)(*local_58 + 0x10))();
    }
  }
LAB_1457ea44f:
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return *(undefined8 *)(param_1 + 0x178);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ea518 FUN_1457ea518 body=260 status=ok
// SIG undefined FUN_1457ea518(void)

undefined4 * FUN_1457ea518(undefined8 param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457ea61e();
  if ((*(longlong *)(param_2 + 2) != 0) && (cVar2 = FUN_144729dda(param_2), cVar2 != '\0'))
  goto LAB_1457ea551;
  lVar4 = param_3[1];
  if (lVar4 == 0) {
    uVar3 = FUN_14043db3a();
    lVar4 = FUN_14477b664(uVar3);
    param_3[1] = lVar4;
  }
  if (param_3[2] == 0) {
    if ((lVar4 == 0) || (*param_3 == 0)) goto LAB_1457ea551;
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      param_3[2] = 0;
      goto LAB_1457ea551;
    }
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar4 = FUN_144aff482(uVar3,param_3);
    param_3[2] = lVar4;
    if (lVar4 == 0) goto LAB_1457ea551;
  }
  local_48 = 0;
  FUN_1457ea838(param_1,&local_38,param_3,0);
  *param_2 = local_38;
  param_2[1] = uStack_34;
  param_2[2] = uStack_30;
  param_2[3] = uStack_2c;
LAB_1457ea551:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1457ea61e FUN_1457ea61e body=377 status=ok
// SIG undefined FUN_1457ea61e(void)

undefined8 * FUN_1457ea61e(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  
  lVar10 = param_3[1];
  if (lVar10 == 0) {
    uVar9 = FUN_14043db3a();
    lVar10 = FUN_14477b664(uVar9);
    param_3[1] = lVar10;
  }
  if (param_3[2] == 0) {
    if ((lVar10 == 0) || (*param_3 == 0)) goto LAB_1457ea78c;
    plVar2 = *(longlong **)(lVar10 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      param_3[2] = 0;
      goto LAB_1457ea78c;
    }
    uVar9 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar10 = FUN_144aff482(uVar9,param_3);
    param_3[2] = lVar10;
    if (lVar10 == 0) goto LAB_1457ea78c;
    lVar10 = param_3[1];
  }
  if (lVar10 == 0) {
    lVar10 = FUN_14043db3a();
  }
  lVar1 = *param_3;
  uVar8 = FUN_14477b664(lVar10);
  uVar4 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = (uint)((ulonglong)lVar1 >> 0x10);
  uVar11 = (uint)lVar1 & 0xffff;
  uVar6 = FUN_144a78877(((uint)lVar1 << 0x10 | uVar11) + (int)((ulonglong)lVar1 >> 0x20) +
                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4),uVar5 >> 0x10 ^ uVar5);
  iVar7 = FUN_14107d5ea((longlong *)(param_1 + 0x3a8),uVar6,param_3);
  if (iVar7 != -1) {
    lVar10 = *(longlong *)(param_1 + 0x3a8);
    if ((lVar10 + (longlong)iVar7 * 0x28 != 0) && (lVar10 + (longlong)iVar7 * 0x28 != -0x18)) {
      FUN_1457ea798(param_2);
      return param_2;
    }
  }
LAB_1457ea78c:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1457ea798 FUN_1457ea798 body=158 status=ok
// SIG undefined FUN_1457ea798(void)

undefined8 * FUN_1457ea798(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar1 = FUN_1447f7908();
    lVar2 = FUN_144718840(lVar2,uVar1);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      lVar2 = *param_2;
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar2);
      }
      local_28 = 0;
      FUN_14485c47a(&local_28,lVar2);
      *param_1 = local_28;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ea838 FUN_1457ea838 body=499 status=ok
// SIG undefined FUN_1457ea838(void)

undefined8
FUN_1457ea838(longlong param_1,undefined8 param_2,code *param_3,undefined4 param_4,longlong param_5)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong local_60;
  code *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = FUN_1457eaacb();
  local_60 = lVar4;
  if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar4 == 0) goto LAB_1457ea98a;
  }
  else {
    FUN_1456cec3c(lVar4);
  }
  lVar6 = *(longlong *)(param_3 + 8);
  if (lVar6 == 0) {
    uVar5 = FUN_14043db3a();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_3 + 8) = lVar6;
  }
  if (*(longlong *)(param_3 + 0x10) == 0) {
    if ((*(longlong *)param_3 != 0) && (lVar6 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(longlong *)(param_3 + 0x10) = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar5,param_3);
        *(longlong *)(param_3 + 0x10) = lVar6;
        if (lVar6 != 0) goto LAB_1457ea8b4;
      }
    }
    iVar1 = *(int *)(param_1 + 0x400);
    *(uint *)(param_1 + 0x400) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x404) < iVar1 + 1U) {
      FUN_1457eaf50((longlong *)(param_1 + 0x3f8),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x3f8) + (longlong)iVar1 * 8) = lVar4;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar4);
    }
  }
  else {
LAB_1457ea8b4:
    local_50 = &local_60;
    local_58 = param_3;
    FUN_1457eafec(param_1 + 0x3a8,local_68);
    lVar4 = local_60;
  }
  if (param_5 == 0) {
    FUN_1457eac5c(lVar4,param_3,param_4);
    param_5 = (**(code **)(*(longlong *)(local_60 + 0x28) + 0x10))(local_60 + 0x28);
    if (param_5 == 0) goto LAB_1457ea98a;
  }
  else {
    FUN_1457eaeb4(lVar4,param_5);
  }
  local_58 = FUN_14152a45c;
  local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
  FUN_1457eadb4(param_5 + 0x30,local_68,param_1);
LAB_1457ea98a:
  FUN_1457eaa2c(param_2,&local_60);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1457eaa2c FUN_1457eaa2c body=158 status=ok
// SIG undefined FUN_1457eaa2c(void)

undefined8 * FUN_1457eaa2c(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar1 = FUN_1447f7908();
    lVar2 = FUN_144718840(lVar2,uVar1);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      lVar2 = *param_2;
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar2);
      }
      local_28 = 0;
      FUN_14485c47a(&local_28,lVar2);
      *param_1 = local_28;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457eaacb FUN_1457eaacb body=177 status=ok
// SIG undefined FUN_1457eaacb(void)

undefined8 FUN_1457eaacb(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1457eab7e();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457eab7e FUN_1457eab7e body=221 status=ok
// SIG undefined FUN_1457eab7e(void)

longlong FUN_1457eab7e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6edf0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1487a0ee7;
    local_40 = FUN_14653e724;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxPureEchoSpeaker",&DAT_14cb6edf0,&DAT_1487a0ee6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6edf0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457eac5c FUN_1457eac5c body=104 status=ok
// SIG undefined FUN_1457eac5c(void)

void FUN_1457eac5c(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1411aa7cb(*(undefined8 *)(param_1 + 0x20));
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0x38) = lVar1;
  *(uint *)(lVar1 + 0x18c) = param_3 & 0xff | 2;
  FUN_1411aa87e(*(undefined8 *)(param_1 + 0x38),param_1 + 0x28,param_2);
  FUN_1457eacc4(param_1);
  return;
}



// FUNCTION 1457eacc4 FUN_1457eacc4 body=239 status=ok
// SIG undefined FUN_1457eacc4(void)

void FUN_1457eacc4(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = (**(code **)(*param_1 + 0x180))();
  local_40 = 0;
  local_38 = 0xaaad1010;
  local_30 = 0;
  local_48 = 1;
  FUN_14078bff4(&local_28,&local_40,param_1 + 6,uVar4);
  plVar2 = local_20;
  if (param_1 + 8 != &local_28) {
    param_1[8] = local_28;
    local_28 = 0;
    plVar3 = (longlong *)param_1[9];
    if (local_20 != plVar3) {
      local_20 = (longlong *)0x0;
      param_1[9] = (longlong)plVar2;
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
    }
  }
  plVar2 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457eadb4 FUN_1457eadb4 body=254 status=ok
// SIG undefined FUN_1457eadb4(void)

undefined8
FUN_1457eadb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b3e79d0;
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
  *local_48 = &PTR_FUN_14b406f10;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14107d878(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457eaeb4 FUN_1457eaeb4 body=154 status=ok
// SIG undefined FUN_1457eaeb4(void)

void FUN_1457eaeb4(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x38) = param_2;
    if (param_2 == 0) goto LAB_1457eaf10;
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x38) = param_2;
  }
  FUN_1407abeca(&local_30,param_1 + 0x28);
  *(undefined4 *)(param_2 + 0x178) = local_30;
  *(undefined4 *)(param_2 + 0x17c) = uStack_2c;
  *(undefined4 *)(param_2 + 0x180) = uStack_28;
  *(undefined4 *)(param_2 + 0x184) = uStack_24;
  if (*(char *)(param_2 + 0x189) != *(char *)(param_2 + 0x188)) {
    FUN_140cc5d3a(param_2);
  }
LAB_1457eaf10:
  FUN_1457eacc4(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457eaf50 FUN_1457eaf50 body=132 status=ok
// SIG undefined FUN_1457eaf50(void)

void FUN_1457eaf50(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457eafd4 FUN_1457eafd4 body=24 status=ok
// SIG undefined FUN_1457eafd4(void)

bool FUN_1457eafd4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1457eafec FUN_1457eafec body=406 status=ok
// SIG undefined FUN_1457eafec(void)

undefined4 * FUN_1457eafec(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457eb222(param_1,local_48);
  FUN_1457eb184(param_3,local_40);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  lVar7 = local_40[1];
  if (lVar7 == 0) {
    lVar7 = FUN_14043db3a();
  }
  uVar1 = *local_40;
  uVar6 = FUN_14477b664(lVar7);
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar9 = (uint)uVar1 & 0xffff;
  uVar4 = FUN_144a78877(((uint)uVar1 << 0x10 | uVar9) + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4),uVar5 >> 0x10 ^ uVar5);
  cVar3 = FUN_1457eb1c4(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x24) = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14107da40(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457eb184 FUN_1457eb184 body=64 status=ok
// SIG undefined FUN_1457eb184(void)

longlong FUN_1457eb184(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)param_1[1];
  FUN_14107d9f8(param_2,*param_1);
  lVar2 = *plVar1;
  *(longlong *)(param_2 + 0x18) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_2;
}



// FUNCTION 1457eb1c4 FUN_1457eb1c4 body=93 status=ok
// SIG undefined FUN_1457eb1c4(void)

undefined8 FUN_1457eb1c4(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar10 = FUN_14107d5ea(), iVar10 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    puVar1 = (undefined4 *)(lVar2 + 0x10 + (longlong)iVar10 * 0x28);
    *puVar1 = param_3[4];
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar10 * 0x28);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_14887e7f8(param_1,*param_4);
    *param_4 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 1457eb222 FUN_1457eb222 body=231 status=ok
// SIG undefined FUN_1457eb222(void)

int * FUN_1457eb222(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1457eb309 FUN_1457eb309 body=68 status=ok
// SIG undefined FUN_1457eb309(void)

longlong FUN_1457eb309(void)

{
  longlong lVar1;
  
  if (DAT_14c952530 == 0) {
    FUN_145a2282e();
    lVar1 = FUN_141235584();
    FUN_140aa7318(lVar1,1);
    FUN_140010366(lVar1,0);
    DAT_14c952530 = lVar1;
  }
  return DAT_14c952530;
}



// FUNCTION 1457eb35c FUN_1457eb35c body=40 status=ok
// SIG undefined FUN_1457eb35c(void)

undefined8 FUN_1457eb35c(undefined8 param_1,int param_2)

{
  FUN_1457eb384();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457eb384 FUN_1457eb384 body=73 status=ok
// SIG undefined FUN_1457eb384(void)

void FUN_1457eb384(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1e5bf0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1457eb3ce FUN_1457eb3ce body=359 status=ok
// SIG undefined FUN_1457eb3ce(void)

void FUN_1457eb3ce(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
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
  FUN_1457eb536();
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_1457ebc04(*(longlong *)(param_1 + 0x178),param_2);
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1457eb6c4();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_14107e8dc(*(longlong *)(param_1 + 0x188),param_2);
  }
  plVar1 = (longlong *)(param_1 + 0x1a0);
  lVar2 = param_1 + 0x1b0;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar4 = 0;
  local_48 = lVar2;
  if (*(int *)(param_1 + 0x1c8) != 0) {
    FUN_1449c0562(&local_50);
    iVar4 = *(int *)(param_1 + 0x1c8);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = plVar1;
  if ((iStack_3c != iVar4) || (local_48 != lVar2)) {
    do {
      plVar3 = *(longlong **)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x350))(plVar3,param_2);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (((iStack_5c != iVar4) || (local_68 != lVar2)) || (local_78 != plVar1));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457eb536 FUN_1457eb536 body=102 status=ok
// SIG undefined FUN_1457eb536(void)

void FUN_1457eb536(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined ***pppuVar3;
  undefined8 unaff_RDI;
  undefined1 auStack_78 [32];
  undefined1 *apuStack_58 [2];
  longlong *plStack_48;
  undefined8 uStack_40;
  undefined **ppuStack_38;
  longlong lStack_30;
  
  if (DAT_14cb0d2b0 != 0) {
    uStack_40 = 0x1457eb550;
    lVar1 = FUN_144a78654();
    if (lVar1 != 0) {
      uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),*(undefined1 *)(lVar1 + 0x88));
      goto LAB_1457eb55c;
    }
  }
  uVar2 = 0;
LAB_1457eb55c:
  if (*(longlong *)(param_1 + 0x148) != 0) {
    uStack_40 = 0x1457eb56f;
    FUN_1457ec5b6(*(longlong *)(param_1 + 0x148),uVar2 & 0xffffffff);
  }
  lStack_30 = *(longlong *)(param_1 + 0x158);
  if (lStack_30 == 0) {
    return;
  }
  if ((char)uVar2 != '\0') {
    return;
  }
  uVar2 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plStack_48 = (longlong *)0x0;
  ppuStack_38 = &PTR_LAB_14b3f2690;
  apuStack_58[0] = &LAB_143cdb9a4;
  FUN_1457eb61a(lStack_30,apuStack_58);
  if (apuStack_58[0] != (undefined1 *)0x0) {
    pppuVar3 = (undefined ***)plStack_48;
    if (plStack_48 == (longlong *)0x0) {
      pppuVar3 = &ppuStack_38;
    }
    (**(code **)((longlong)*pppuVar3 + 0x10))();
  }
  if ((uVar2 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457eb59e FUN_1457eb59e body=122 status=ok
// SIG undefined FUN_1457eb59e(void)

void FUN_1457eb59e(undefined8 param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14b3f2690;
  local_58[0] = &LAB_143cdb9a4;
  local_30 = param_1;
  FUN_1457eb61a(param_1,local_58);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457eb61a FUN_1457eb61a body=169 status=ok
// SIG undefined FUN_1457eb61a(void)

void FUN_1457eb61a(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)(param_1 + 0x28);
  plVar4 = plVar6;
  if (0 < (longlong)*(int *)(param_1 + 0x78)) {
    lVar3 = param_1 + 0x30;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x70);
    }
    plVar4 = (longlong *)(lVar3 + (longlong)*(int *)(param_1 + 0x78) * 0x10 + -0x10);
  }
  lVar3 = *plVar4;
  pcVar1 = (code *)*param_2;
  plVar4 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_2[2];
  }
  uVar2 = (**(code **)(*plVar4 + 8))(plVar4);
  (*pcVar1)(uVar2);
  if (0 < (longlong)*(int *)(param_1 + 0x78)) {
    lVar5 = param_1 + 0x30;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x70);
    }
    plVar6 = (longlong *)(lVar5 + (longlong)*(int *)(param_1 + 0x78) * 0x10 + -0x10);
  }
  if (*plVar6 == lVar3) {
    return;
  }
  FUN_14131bae0(param_1 + 0x10);
  return;
}



// FUNCTION 1457eb6c4 FUN_1457eb6c4 body=403 status=ok
// SIG undefined FUN_1457eb6c4(void)

void FUN_1457eb6c4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
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
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  FUN_1457eb8fb(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_148839d12(param_1 + 0x88);
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar2 = param_1 + 0x40;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar3 = 0;
  local_48 = lVar2;
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0x58);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = plVar1;
  if ((iStack_3c != iVar3) || (local_48 != lVar2)) {
    do {
      do {
        (**(code **)(**(longlong **)(*local_78 + 8 + (longlong)iStack_5c * 0x20) + 0x10))();
        local_60 = local_60 & ~local_70._4_4_;
        FUN_1449c0562(&local_70);
      } while (iStack_5c != iVar3);
    } while ((local_68 != lVar2) || (local_78 != plVar1));
  }
  FUN_1457eb8bc(plVar1);
  FUN_1457eb858(param_1);
  FUN_14122dc7c(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_14584b848(param_1 + 0x20);
  }
  FUN_14584b878(param_1);
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457eb858 FUN_1457eb858 body=99 status=ok
// SIG undefined FUN_1457eb858(void)

void FUN_1457eb858(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  
  if (*param_1 != 0) {
    cVar3 = FUN_144729dda(param_1 + 2);
    if (cVar3 != '\0') {
      lVar2 = FUN_14479d2ce(param_1 + 2);
      uVar1 = *(undefined8 *)(lVar2 + 0xf0);
      lVar2 = FUN_144a61814(uVar1,param_1);
      if (lVar2 != 0) {
        FUN_1405a424c(uVar1,*param_1);
      }
    }
    *param_1 = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



// FUNCTION 1457eb8bc FUN_1457eb8bc body=63 status=ok
// SIG undefined FUN_1457eb8bc(void)

void FUN_1457eb8bc(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1457ebabc(param_1);
    FUN_1457eb948(param_1);
    return;
  }
  FUN_1457eb948(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_145c6dba4(param_1);
  return;
}



// FUNCTION 1457eb8fb FUN_1457eb8fb body=77 status=ok
// SIG undefined FUN_1457eb8fb(void)

void FUN_1457eb8fb(longlong param_1,int param_2)

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



// FUNCTION 1457eb948 FUN_1457eb948 body=371 status=ok
// SIG undefined FUN_1457eb948(void)

void FUN_1457eb948(longlong *param_1)

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



// FUNCTION 1457ebabc FUN_1457ebabc body=327 status=ok
// SIG undefined FUN_1457ebabc(void)

void FUN_1457ebabc(longlong *param_1)

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



// FUNCTION 1457ebc04 FUN_1457ebc04 body=744 status=ok
// SIG undefined FUN_1457ebc04(void)

void FUN_1457ebc04(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar5 = (**(code **)(*param_1 + 0x38))();
  if (cVar5 != '\0') {
    FUN_14107e8f0(param_1 + 4,param_2);
    lVar7 = FUN_14479d2ce(param_1 + 0xc);
    local_68 = *(undefined8 *)(lVar7 + 0xf0);
    local_60 = *(undefined4 *)(lVar7 + 0xf8);
    plVar8 = (longlong *)FUN_14479d2ce(param_1 + 0xc);
    if (plVar8 != (longlong *)0x0) {
      lVar7 = (**(code **)(*plVar8 + 0x2b8))(plVar8);
      if (lVar7 != 0) {
        FUN_1457ebff8(lVar7);
      }
    }
    if (param_2 != 0) {
      plVar8 = param_1 + 0x38;
      plVar1 = param_1 + 0x3a;
      local_58 = 0x100000000;
      local_48 = 0xffffffff;
      local_40 = 0;
      iVar9 = 0;
      local_50 = plVar1;
      if ((int)param_1[0x3d] != 0) {
        FUN_1449c0562(&local_58);
        iVar9 = (int)param_1[0x3d];
      }
      local_78 = local_48;
      uVar4 = local_78;
      local_70 = local_40;
      local_6c = local_3c;
      local_88 = local_58;
      local_80 = local_50;
      local_78._4_4_ = (int)((ulonglong)local_48 >> 0x20);
      local_90 = plVar8;
      if ((local_78._4_4_ != iVar9) || (local_50 != plVar1)) {
        iVar6 = local_78._4_4_;
        local_78 = uVar4;
        do {
          do {
            plVar3 = *(longlong **)(*local_90 + 8 + (longlong)iVar6 * 0x18);
            (**(code **)(*plVar3 + 0x40))(plVar3,param_2);
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
            FUN_1449c0562(&local_88);
            iVar6 = local_78._4_4_;
          } while (local_78._4_4_ != iVar9);
        } while ((local_80 != plVar1) || (uVar4 = local_78, local_90 != plVar8));
      }
      local_78 = uVar4;
      lVar7 = param_1[0x27];
      if (lVar7 != 0) {
        lVar2 = *(longlong *)(param_2 + 0x18);
        local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(lVar7 + 0x34));
        local_90 = *(longlong **)(lVar7 + 0x2c);
        FUN_140e3418c(&local_90,&local_98,1);
        if (lVar2 == local_98) {
          FUN_14107e992(param_1[0x27],&local_68);
          FUN_14107e8e8(param_1[0x27],param_2);
        }
      }
    }
    plVar8 = (longlong *)param_1[0x25];
    if ((plVar8 != (longlong *)0x0) && (*(char *)((longlong)plVar8 + 0x2a) == '\x01')) {
      (**(code **)(*plVar8 + 0x40))(plVar8,1,0);
    }
    plVar8 = (longlong *)param_1[0x24];
    if ((plVar8 != (longlong *)0x0) && (*(char *)((longlong)plVar8 + 0x2a) == '\x01')) {
      (**(code **)(*plVar8 + 0x40))(plVar8,1,0);
    }
    plVar8 = (longlong *)param_1[0x23];
    if ((plVar8 != (longlong *)0x0) && (*(char *)((longlong)plVar8 + 0x2a) == '\x01')) {
      (**(code **)(*plVar8 + 0x40))(plVar8,1,0);
    }
    plVar8 = (longlong *)param_1[0x22];
    if ((plVar8 != (longlong *)0x0) && (*(char *)((longlong)plVar8 + 0x2a) == '\x01')) {
      (**(code **)(*plVar8 + 0x40))(plVar8,1,0);
    }
    if (param_1[0x26] != 0) {
      FUN_1457ebfac();
    }
    if ((param_2 != 0) && (plVar8 = (longlong *)param_1[0x29], plVar8 != (longlong *)0x0)) {
      (**(code **)(*plVar8 + 0xd8))(plVar8,1);
    }
    if ((param_2 != 0) && (param_1[0x28] != 0)) {
      FUN_1457ebeee(param_1[0x28],&local_68);
      (**(code **)(*(longlong *)param_1[0x28] + 0xc0))((longlong *)param_1[0x28],param_2);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457ebeee FUN_1457ebeee body=79 status=ok
// SIG undefined FUN_1457ebeee(void)

void FUN_1457ebeee(longlong param_1,int *param_2)

{
  if ((*param_2 != *(int *)(param_1 + 0xd8)) || (param_2[2] != *(int *)(param_1 + 0xe0))) {
    FUN_14107eeec(param_1);
    FUN_1457ebf3e(param_1);
    *(int *)(param_1 + 0xe0) = param_2[2];
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)param_2;
  }
  return;
}



// FUNCTION 1457ebf3e FUN_1457ebf3e body=108 status=ok
// SIG undefined FUN_1457ebf3e(void)

void FUN_1457ebf3e(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_140daa3ac();
  if (cVar1 == '\0') {
    local_28 = 0;
    uStack_20 = 0;
    FUN_141081152(param_1,&local_28);
    FUN_14105732d(local_28,uStack_20 & 0xffffffff);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ebfac FUN_1457ebfac body=75 status=ok
// SIG undefined FUN_1457ebfac(void)

void FUN_1457ebfac(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_144729dda(param_1 + 8);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 8);
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x360);
      goto LAB_1457ebfdd;
    }
  }
  uVar3 = 0;
LAB_1457ebfdd:
  FUN_1457ec0b4(param_1,uVar3);
  FUN_1410804a2(param_1);
  return;
}



// FUNCTION 1457ebff8 FUN_1457ebff8 body=123 status=ok
// SIG undefined FUN_1457ebff8(void)

void FUN_1457ebff8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1[0x1c] != 0) {
    FUN_141080a62();
  }
  if (param_1[0x1f] != 0) {
    *(undefined1 *)(param_1[0x1f] + 0xc0) = 0;
  }
  lVar2 = param_1[0x22];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = param_1[0x21];
    lVar3 = 0;
    do {
      *(undefined1 *)(*(longlong *)(lVar1 + lVar3) + 0xc0) = 0;
      lVar3 = lVar3 + 0x10;
    } while ((longlong)(int)lVar2 * 0x10 != lVar3);
  }
  if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1d] + 0x18))();
  }
                    /* WARNING: Could not recover jumptable at 0x0001457ec06f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}



// FUNCTION 1457ec074 FUN_1457ec074 body=63 status=ok
// SIG undefined FUN_1457ec074(void)

void FUN_1457ec074(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14585c4a4(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_140bc6df0(param_1);
    return;
  }
  FUN_1457ec3ee(param_1);
  FUN_14585c4a4(param_1);
  return;
}



// FUNCTION 1457ec0b4 FUN_1457ec0b4 body=348 status=ok
// SIG undefined FUN_1457ec0b4(void)

void FUN_1457ec0b4(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) &&
     (((bVar2 = *(byte *)(param_2 + 0x152), bVar2 == 1 ||
       ((bVar2 < 7 && ((0x68U >> (bVar2 & 0x1f) & 1) != 0)))) &&
      (cVar4 = FUN_1407579fa(param_2), cVar4 == '\0')))) {
    cVar4 = FUN_144729dda(param_1 + 8);
    if (cVar4 != '\0') {
      lVar5 = FUN_14479d2ce(param_1 + 8);
      if (*(longlong *)(lVar5 + 0x30) == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x360);
      }
      if (lVar5 != param_2) goto LAB_1457ec174;
    }
    FUN_140457ffc(param_2 + 0x570,param_1);
    lVar5 = FUN_14103c0a0(param_2);
    if (lVar5 != 0) {
      FUN_140457ffc(lVar5 + 0xf0,param_1);
      FUN_140457ffc(lVar5 + 0x38,param_1);
    }
    if (((*(longlong *)(param_1 + 0x68) != 0) && (*(longlong *)(param_1 + 0x70) != 0)) &&
       (0 < *(int *)(*(longlong *)(param_1 + 0x70) + 8))) {
      FUN_1401cb356();
      local_30 = *(undefined8 *)(param_1 + 0x68);
      local_28 = *(longlong *)(param_1 + 0x70);
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
        UNLOCK();
      }
      FUN_140d61352(&local_30);
      plVar3 = *(longlong **)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
LAB_1457ec174:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457ec212 FUN_1457ec212 body=63 status=ok
// SIG undefined FUN_1457ec212(void)

void FUN_1457ec212(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1457ec29e(param_1);
    FUN_141080254(param_1);
    return;
  }
  FUN_141080254(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_141059e56(param_1);
  return;
}



// FUNCTION 1457ec251 FUN_1457ec251 body=77 status=ok
// SIG undefined FUN_1457ec251(void)

void FUN_1457ec251(longlong param_1,int param_2)

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



// FUNCTION 1457ec29e FUN_1457ec29e body=335 status=ok
// SIG undefined FUN_1457ec29e(void)

void FUN_1457ec29e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 1457ec3ee FUN_1457ec3ee body=335 status=ok
// SIG undefined FUN_1457ec3ee(void)

void FUN_1457ec3ee(longlong *param_1)

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



// FUNCTION 1457ec53e FUN_1457ec53e body=120 status=ok
// SIG undefined FUN_1457ec53e(void)

longlong FUN_1457ec53e(longlong param_1,longlong param_2)

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
    FUN_141080906(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1457ec5b6 FUN_1457ec5b6 body=1157 status=ok
// SIG undefined FUN_1457ec5b6(void)

void FUN_1457ec5b6(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_148 [40];
  longlong *local_120;
  longlong *local_118;
  undefined8 uStack_110;
  longlong *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  uint local_e8;
  int iStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  longlong *plStack_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8 [4];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar12 = param_1 + 0xa8;
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_1457eca74(local_b8,lVar12);
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    FUN_1488a5486(lVar12);
    FUN_1488a55ce(lVar12);
  }
  plVar1 = local_b8 + 2;
  local_d8 = 0x100000000;
  local_c8 = 0xffffffff;
  iStack_c4 = 0;
  local_c0 = 0;
  iVar9 = 0;
  plStack_d0 = plVar1;
  if (local_90 != 0) {
    FUN_1449c0562(&local_d8);
    iVar9 = local_90;
  }
  local_e8 = local_c8;
  iStack_e4 = iStack_c4;
  local_e0 = local_c0;
  local_dc = local_bc;
  local_f8 = local_d8;
  local_f0 = plStack_d0;
  local_100 = local_b8;
  if ((iStack_c4 != iVar9) || (plStack_d0 != plVar1)) {
    do {
      lVar12 = (longlong)*(int *)(*local_100 + 0x40 + (longlong)iStack_e4 * 0x50);
      if (lVar12 != 0) {
        lVar10 = *(longlong *)(*local_100 + 0x38 + (longlong)iStack_e4 * 0x50);
        local_120 = (longlong *)(lVar10 + lVar12 * 0x28);
        plVar7 = (longlong *)(lVar10 + 0x10);
        do {
          local_d8 = 0;
          plStack_d0 = (longlong *)0x0;
          if ((((int)plVar7[1] != 0) && (plVar5 = (longlong *)*plVar7, plVar5 != (longlong *)0x0))
             && ((**(code **)(*plVar5 + 0x60))(plVar5,(int)plVar7[-2],&local_d8),
                plVar5 = plStack_d0, plStack_d0 != (longlong *)0x0)) {
            LOCK();
            plVar2 = plStack_d0 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_d0)(plStack_d0);
              LOCK();
              piVar3 = (int *)((longlong)plVar5 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          plVar5 = plVar7 + 3;
          plVar7 = plVar7 + 5;
        } while (plVar5 != local_120);
      }
      local_e8 = local_e8 & ~local_f8._4_4_;
      FUN_1449c0562(&local_f8);
    } while (((iStack_e4 != iVar9) || (local_f0 != plVar1)) || (local_100 != local_b8));
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  local_118 = (longlong *)0x0;
  uStack_110 = 0;
  lVar12 = param_1 + 0x40;
  local_d8 = 0x100000000;
  local_c8 = 0xffffffff;
  iStack_c4 = 0;
  local_c0 = 0;
  iVar9 = 0;
  plStack_d0 = (longlong *)lVar12;
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_1449c0562(&local_d8);
    iVar9 = *(int *)(param_1 + 0x58);
  }
  local_e8 = local_c8;
  iStack_e4 = iStack_c4;
  local_e0 = local_c0;
  local_dc = local_bc;
  local_f8 = local_d8;
  local_f0 = plStack_d0;
  local_100 = plVar1;
  if ((iStack_c4 == iVar9) && (plStack_d0 == (longlong *)lVar12)) {
    plVar7 = (longlong *)0x0;
  }
  else {
    do {
      lVar10 = *local_100;
      lVar8 = (longlong)iStack_e4;
      plVar7 = *(longlong **)(lVar10 + 8 + lVar8 * 0x20);
      local_120 = (longlong *)CONCAT71(local_120._1_7_,param_2);
      if ((param_2 == '\0') ||
         ((lVar11 = plVar7[8], lVar11 == 0 || (*(char *)(lVar11 + 0x110) == '\x01')))) {
        (**(code **)(*plVar7 + 0x68))();
        uVar6 = uStack_110;
        lVar11 = (longlong)(int)uStack_110;
        uVar4 = (int)uStack_110 + 1;
        uStack_110 = CONCAT44(uStack_110._4_4_,uVar4);
        if (uStack_110._4_4_ < uVar4) {
          FUN_1457ecd54(&local_118,uVar6 & 0xffffffff);
        }
        lVar10 = lVar10 + lVar8 * 0x20;
        local_118[lVar11 * 2] = *(longlong *)(lVar10 + 8);
        lVar10 = *(longlong *)(lVar10 + 0x10);
        local_118[lVar11 * 2 + 1] = lVar10;
        if (lVar10 != 0) {
          LOCK();
          *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
          UNLOCK();
        }
      }
      local_e8 = local_e8 & ~local_f8._4_4_;
      FUN_1449c0562(&local_f8);
      param_2 = (char)local_120;
    } while (((iStack_e4 != iVar9) || (local_f0 != (longlong *)lVar12)) || (local_100 != plVar1));
    plVar7 = local_118;
    if ((longlong)(int)uStack_110 != 0) {
      lVar12 = (longlong)(int)uStack_110 << 4;
      do {
        local_100 = (longlong *)CONCAT44(local_100._4_4_,*(undefined4 *)(*plVar7 + 0x184));
        FUN_14574e5b6(plVar1,&local_100);
        local_100 = plVar7;
        FUN_14574e856(param_1 + 0x90,&local_100);
        plVar7 = plVar7 + 2;
        lVar12 = lVar12 + -0x10;
      } while (lVar12 != 0);
      uVar6 = uStack_110 & 0xffffffff;
      plVar7 = local_118;
      goto LAB_1457ec76b;
    }
  }
  uVar6 = 0;
LAB_1457ec76b:
  FUN_140854700(plVar7,uVar6);
  if (local_118 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1457eca3c(local_b8);
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


