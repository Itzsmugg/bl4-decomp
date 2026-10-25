// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146f07444 FUN_146f07444 body=59 status=ok
// SIG undefined FUN_146f07444(void)

undefined8 FUN_146f07444(longlong *param_1)

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



// FUNCTION 146f0748a FUN_146f0748a body=32 status=ok
// SIG undefined FUN_146f0748a(void)

void FUN_146f0748a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f074f8 FUN_146f074f8 body=43 status=ok
// SIG undefined FUN_146f074f8(void)

undefined8 FUN_146f074f8(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f075b4 FUN_146f075b4 body=59 status=ok
// SIG undefined FUN_146f075b4(void)

undefined8 FUN_146f075b4(longlong *param_1)

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



// FUNCTION 146f075fa FUN_146f075fa body=32 status=ok
// SIG undefined FUN_146f075fa(void)

void FUN_146f075fa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f07668 FUN_146f07668 body=43 status=ok
// SIG undefined FUN_146f07668(void)

undefined8 FUN_146f07668(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f076e4 FUN_146f076e4 body=103 status=ok
// SIG undefined FUN_146f076e4(void)

undefined1 FUN_146f076e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0x10;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined4 *)(param_2 + -8 + lVar3) = *(undefined4 *)(param_3 + -8 + lVar3);
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146f07774 FUN_146f07774 body=59 status=ok
// SIG undefined FUN_146f07774(void)

undefined8 FUN_146f07774(longlong *param_1)

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



// FUNCTION 146f077ba FUN_146f077ba body=32 status=ok
// SIG undefined FUN_146f077ba(void)

void FUN_146f077ba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 146f07828 FUN_146f07828 body=43 status=ok
// SIG undefined FUN_146f07828(void)

undefined8 FUN_146f07828(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 146f07854 FUN_146f07854 body=82 status=ok
// SIG undefined FUN_146f07854(void)

void FUN_146f07854(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_1400020a8();
  }
  FUN_146f078a6(param_1 + 400);
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f078a6 FUN_146f078a6 body=54 status=ok
// SIG undefined FUN_146f078a6(void)

void FUN_146f078a6(longlong *param_1)

{
  FUN_146f078dc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f078dc FUN_146f078dc body=128 status=ok
// SIG undefined FUN_146f078dc(void)

void FUN_146f078dc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
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



// FUNCTION 146f079c6 FUN_146f079c6 body=117 status=ok
// SIG undefined FUN_146f079c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_146f079c6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998e10) {
    FUN_144b3d300(&DAT_14c998e10);
    if (DAT_14c998e10 == -1) {
      DAT_14c998df8 = 0;
      _DAT_14c998e00 = 0;
      _DAT_14c998e08 = 2;
      atexit(FUN_142a6e228);
      _Init_thread_footer(&DAT_14c998e10);
    }
  }
  return &DAT_14c998df8;
}



// FUNCTION 146f07a44 FUN_146f07a44 body=108 status=ok
// SIG undefined FUN_146f07a44(void)

int FUN_146f07a44(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  iVar1 = *(int *)(lVar2 + 0x110);
  if ((longlong)iVar1 == 0) {
    iVar6 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x108);
    lVar2 = *(longlong *)(lVar2 + 0x118);
    iVar6 = 0;
    lVar7 = 0;
    do {
      if (*(char *)(lVar2 + lVar7) != '\x01') {
        plVar4 = *(longlong **)(lVar3 + lVar7 * 8);
        iVar5 = (**(code **)(*plVar4 + 0x2a0))(plVar4,param_2);
        if (iVar6 != 2) {
          iVar6 = iVar5;
        }
      }
      lVar7 = lVar7 + 1;
    } while (iVar1 != lVar7);
  }
  return iVar6;
}



// FUNCTION 146f07ab0 FUN_146f07ab0 body=80 status=ok
// SIG undefined FUN_146f07ab0(void)

void FUN_146f07ab0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  iVar1 = *(int *)(lVar2 + 0x110);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x108);
    lVar2 = *(longlong *)(lVar2 + 0x118);
    lVar4 = 0;
    do {
      if (*(char *)(lVar2 + lVar4) != '\x01') {
        (**(code **)(**(longlong **)(lVar3 + lVar4 * 8) + 0x2b0))();
      }
      lVar4 = lVar4 + 1;
    } while (iVar1 != lVar4);
  }
  return;
}



// FUNCTION 146f07b0a FUN_146f07b0a body=1220 status=ok
// SIG undefined FUN_146f07b0a(void)

ulonglong FUN_146f07b0a(longlong param_1,void *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_6d8 [44];
  uint local_6ac;
  void *local_6a8;
  ulonglong local_6a0;
  uint *local_698;
  undefined8 *local_690;
  longlong local_688;
  undefined4 *local_680;
  longlong local_678;
  undefined8 local_670;
  undefined1 local_668 [32];
  undefined1 local_648 [12];
  int local_63c;
  int local_638;
  int local_630;
  longlong local_628;
  undefined1 *local_620;
  void *local_618;
  undefined8 local_610;
  undefined1 local_608 [8];
  longlong local_600;
  undefined8 local_530;
  undefined1 *local_528;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined4 *local_4a0;
  undefined8 local_498;
  uint local_490;
  undefined1 local_488 [256];
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_6d8;
  uVar10 = *(uint *)(param_1 + 0x110);
  uVar11 = 0;
  if ((0 < (int)uVar10) &&
     ((ulonglong)(uint)(*(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x13c)) !=
      (longlong)*(int *)(param_1 + 0x150))) {
    FUN_146f26b66(param_1);
    uVar11 = 0;
    local_620 = local_488;
    local_388 = 0;
    local_380 = 0x2000000000;
    local_2f8 = 0;
    local_2f0 = 0x2000000000;
    local_e8 = 0;
    local_e0 = 0x2000000000;
    local_58 = 0;
    local_50 = 0x2000000000;
    local_628 = param_1 + 0x68;
    local_610 = *(undefined8 *)((longlong)param_2 + 0xf8);
    *(longlong **)((longlong)param_2 + 0xf8) = &local_628;
    local_4a0 = (undefined4 *)0x0;
    local_498 = 0x800000000;
    local_618 = param_2;
    FUN_146f0823c(&local_4e0,(ulonglong)uVar10);
    local_680 = local_4a0;
    if (local_4a0 == (undefined4 *)0x0) {
      local_680 = &local_4e0;
    }
    FUN_146f5b35a(*(undefined8 *)((longlong)param_2 + 0xe0),local_648,0xffffffff);
    FUN_146f5435e(local_648,0,5);
    FUN_146f5435e(local_648,0,uVar10);
    if (local_630 == 0) {
      local_698 = (uint *)(param_1 + 0x138);
      local_678 = *(longlong *)(param_1 + 0x108);
      lVar1 = *(longlong *)(param_1 + 0x118);
      uVar9 = 1;
      local_6a0 = 0;
      local_6ac = 0;
      uVar11 = 0;
      local_6a8 = param_2;
      local_690 = param_3;
      local_688 = param_1;
      do {
        if (*(char *)(lVar1 + uVar11) != '\x01') {
          plVar2 = *(longlong **)(local_678 + uVar11 * 8);
          FUN_146f5b35a(local_648,local_668,0xffffffff);
          memcpy(local_608,local_6a8,0x128);
          local_530 = 0;
          local_670 = 0;
          local_528 = local_668;
          uVar6 = (**(code **)(*plVar2 + 0x2a8))(plVar2,local_608,&local_670);
          if ((uVar6 == 0) || (local_600 != 0)) {
            FUN_146f5b442(local_648,local_668);
            if (local_600 != 0) {
              FUN_146f5b47e(local_6a8);
              FUN_146f5b28c(local_668);
              break;
            }
          }
          else {
            local_6ac = local_6ac | uVar9;
            FUN_146f5b3a6(local_648,local_668);
            *(undefined8 *)(local_680 + uVar11 * 2) = local_670;
            iVar7 = (int)local_6a0;
            local_6a0 = local_6a0 & 0xffffffff;
            if (iVar7 != 2) {
              local_6a0 = (ulonglong)uVar6;
            }
          }
          FUN_146f5b28c(local_668);
        }
        uVar11 = uVar11 + 1;
        uVar9 = uVar9 * 2;
      } while (uVar10 != uVar11);
      uVar11 = local_6a0;
      if ((int)local_6a0 == 0) {
        FUN_146f5b442(*(undefined8 *)((longlong)local_6a8 + 0xe0),local_648);
        uVar11 = 0;
      }
      else {
        FUN_146f5b2fa(local_648,0);
        FUN_146f5435e(local_648,uVar10 - 1,5);
        uVar9 = local_6ac;
        FUN_146f5435e(local_648,local_6ac,uVar10);
        FUN_146f5b2fa(local_648,local_638 - local_63c);
        FUN_146f5b3a6(*(undefined8 *)((longlong)local_6a8 + 0xe0),local_648);
        lVar1 = local_688;
        puVar5 = local_698;
        local_490 = uVar9;
        uVar10 = *(uint *)(local_688 + 0x138);
        uVar8 = (ulonglong)(uVar10 - *(int *)(local_688 + 0x13c));
        if ((ulonglong)(longlong)*(int *)(local_688 + 0x150) <= uVar8) {
          FUN_145ef5d5e(local_698,uVar8 + 1);
          uVar10 = *puVar5;
        }
        *(uint *)(lVar1 + 0x138) = uVar10 + 1;
        uVar8 = (ulonglong)(uVar10 & *(uint *)(lVar1 + 0x140));
        lVar3 = *(longlong *)(lVar1 + 0x148);
        puVar4 = *(undefined4 **)(lVar3 + uVar8 * 8);
        if (puVar4 != &local_4e0) {
          if (local_4a0 == (undefined4 *)0x0) {
            *(undefined8 *)(puVar4 + 0xc) = local_4b0;
            *(undefined8 *)(puVar4 + 0xe) = uStack_4a8;
            *(undefined8 *)(puVar4 + 8) = local_4c0;
            *(undefined8 *)(puVar4 + 10) = uStack_4b8;
            *(undefined8 *)(puVar4 + 4) = local_4d0;
            *(undefined8 *)(puVar4 + 6) = uStack_4c8;
            *puVar4 = local_4e0;
            puVar4[1] = uStack_4dc;
            puVar4[2] = uStack_4d8;
            puVar4[3] = uStack_4d4;
          }
          if (*(longlong *)(puVar4 + 0x10) != 0) {
            FUN_1400020a8();
          }
          *(undefined4 **)(puVar4 + 0x10) = local_4a0;
          local_4a0 = (undefined4 *)0x0;
          puVar4[0x12] = (undefined4)local_498;
          puVar4[0x13] = local_498._4_4_;
          local_498 = 0x800000000;
        }
        puVar4[0x14] = local_490;
        *local_690 = *(undefined8 *)(lVar3 + uVar8 * 8);
        FUN_146f26b7a(lVar1,&local_628);
        FUN_146f26c72(lVar1);
      }
    }
    else {
      FUN_146f5b442(*(undefined8 *)((longlong)param_2 + 0xe0),local_648);
    }
    FUN_146f5b28c(local_648);
    if (local_4a0 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    *(undefined8 *)((longlong)local_618 + 0xf8) = local_610;
    FUN_146f082ac(local_488);
  }
  if ((local_48 ^ (ulonglong)auStack_6d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 146f07fda FUN_146f07fda body=194 status=ok
// SIG undefined FUN_146f07fda(void)

void FUN_146f07fda(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar1 = *(undefined8 *)(param_2 + 0xd8);
  uVar5 = FUN_146f546d2(uVar1,5);
  uVar7 = uVar5 + 1;
  uVar6 = FUN_146f546d2(uVar1,uVar7);
  uVar1 = DAT_14c99c010;
  if ((uVar6 == 0) || (*(uint *)(param_1 + 0x110) < uVar7)) {
    FUN_146f5b89e(param_2);
    FUN_146f5b47e(param_2,uVar1);
    return;
  }
  if (uVar7 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x108);
    uVar7 = 1;
    lVar8 = 0;
    do {
      if ((uVar7 & uVar6) != 0) {
        plVar3 = *(longlong **)(lVar2 + lVar8 * 8);
        (**(code **)(*plVar3 + 0x2b8))(plVar3,param_2);
        if (*(longlong *)(param_2 + 8) != 0) {
          return;
        }
        cVar4 = FUN_146f5b7ac(param_2);
        if (cVar4 != '\0') {
          return;
        }
      }
      lVar8 = lVar8 + 1;
      uVar7 = uVar7 * 2;
    } while ((ulonglong)uVar5 + 1 != lVar8);
  }
  return;
}



// FUNCTION 146f080a6 FUN_146f080a6 body=171 status=ok
// SIG undefined FUN_146f080a6(void)

void FUN_146f080a6(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar3 = *(longlong *)
           (*(longlong *)(param_1 + 0x148) +
           (ulonglong)(*(uint *)(param_1 + 0x140) & *(uint *)(param_1 + 0x13c)) * 8);
  FUN_146f26f12(param_1);
  iVar1 = *(int *)(param_1 + 0x110);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(lVar3 + 0x50);
    lVar4 = *(longlong *)(param_1 + 0x108);
    uVar7 = 1;
    lVar8 = 0;
    do {
      if ((uVar7 & uVar2) != 0) {
        lVar6 = *(longlong *)(lVar3 + 0x40);
        if (*(longlong *)(lVar3 + 0x40) == 0) {
          lVar6 = lVar3;
        }
        plVar5 = *(longlong **)(lVar4 + lVar8 * 8);
        (**(code **)(*plVar5 + 0x2c0))
                  (plVar5,param_2,*(undefined8 *)(lVar6 + (longlong)(int)lVar8 * 8));
      }
      uVar7 = uVar7 * 2;
      lVar8 = lVar8 + 1;
    } while (iVar1 != (int)lVar8);
  }
  if (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x13c)) {
    *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
  }
  return;
}



// FUNCTION 146f0815c FUN_146f0815c body=127 status=ok
// SIG undefined FUN_146f0815c(void)

ulonglong FUN_146f0815c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x110);
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x108);
    lVar7 = 0;
    bVar4 = DAT_14c950c29;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar7);
      if ((plVar3 != (longlong *)0x0 & bVar4) == 1) {
        FUN_1456cec3c(plVar3);
LAB_146f081a0:
        cVar5 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
        bVar4 = DAT_14c950c29;
        if (cVar5 == '\0') {
          uVar6 = 0;
          break;
        }
      }
      else if (plVar3 != (longlong *)0x0) goto LAB_146f081a0;
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 146f081dc FUN_146f081dc body=90 status=ok
// SIG undefined FUN_146f081dc(void)

longlong FUN_146f081dc(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x110);
  if (lVar2 != 0) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x108);
    lVar2 = lVar2 << 3;
    do {
      lVar1 = *plVar3;
      if (param_2 == *(int *)(lVar1 + 0x18)) {
        if (plVar3 == (longlong *)0x0) {
          return 0;
        }
        if (lVar1 != 0) {
          if (DAT_14c950c29 != '\0') {
            FUN_1456cec3c(lVar1);
            return lVar1;
          }
          return lVar1;
        }
        return 0;
      }
      plVar3 = plVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 146f08236 FUN_146f08236 body=5 status=ok
// SIG undefined FUN_146f08236(void)

undefined8 FUN_146f08236(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// FUNCTION 146f0823c FUN_146f0823c body=112 status=ok
// SIG undefined FUN_146f0823c(void)

void FUN_146f0823c(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x48) = param_2;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f10088(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 8),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 0x48) = param_2;
  FUN_146f1017c(param_1);
  return;
}



// FUNCTION 146f082ac FUN_146f082ac body=88 status=ok
// SIG undefined FUN_146f082ac(void)

void FUN_146f082ac(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x430) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f08304 FUN_146f08304 body=118 status=ok
// SIG undefined FUN_146f08304(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f08304(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998e48) {
    FUN_144b3d300(&DAT_14c998e48);
    if (DAT_14c998e48 == -1) {
      _DAT_14c998e38 = 0;
      DAT_14c998e30 = &PTR_LAB_149f97480;
      _DAT_14c998e40 = &DAT_14c99a680;
      _Init_thread_footer(&DAT_14c998e48);
      return;
    }
  }
  return;
}



// FUNCTION 146f0837a FUN_146f0837a body=118 status=ok
// SIG undefined FUN_146f0837a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f0837a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998e68) {
    FUN_144b3d300(&DAT_14c998e68);
    if (DAT_14c998e68 == -1) {
      _DAT_14c998e58 = 0;
      DAT_14c998e50 = &PTR_LAB_149f974b0;
      _DAT_14c998e60 = &DAT_14c99a718;
      _Init_thread_footer(&DAT_14c998e68);
      return;
    }
  }
  return;
}



// FUNCTION 146f083f0 FUN_146f083f0 body=118 status=ok
// SIG undefined FUN_146f083f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f083f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998e88) {
    FUN_144b3d300(&DAT_14c998e88);
    if (DAT_14c998e88 == -1) {
      _DAT_14c998e78 = 0;
      DAT_14c998e70 = &PTR_LAB_149f974e0;
      _DAT_14c998e80 = &DAT_14c99aee8;
      _Init_thread_footer(&DAT_14c998e88);
      return;
    }
  }
  return;
}



// FUNCTION 146f08466 FUN_146f08466 body=118 status=ok
// SIG undefined FUN_146f08466(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f08466(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998ea8) {
    FUN_144b3d300(&DAT_14c998ea8);
    if (DAT_14c998ea8 == -1) {
      _DAT_14c998e98 = 0;
      DAT_14c998e90 = &PTR_LAB_149f97510;
      _DAT_14c998ea0 = &DAT_14c99a848;
      _Init_thread_footer(&DAT_14c998ea8);
      return;
    }
  }
  return;
}



// FUNCTION 146f084dc FUN_146f084dc body=118 status=ok
// SIG undefined FUN_146f084dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f084dc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998ec8) {
    FUN_144b3d300(&DAT_14c998ec8);
    if (DAT_14c998ec8 == -1) {
      _DAT_14c998eb8 = 0;
      DAT_14c998eb0 = &PTR_LAB_149f97540;
      _DAT_14c998ec0 = &DAT_14c99b9c0;
      _Init_thread_footer(&DAT_14c998ec8);
      return;
    }
  }
  return;
}



// FUNCTION 146f08552 FUN_146f08552 body=118 status=ok
// SIG undefined FUN_146f08552(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f08552(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998ee8) {
    FUN_144b3d300(&DAT_14c998ee8);
    if (DAT_14c998ee8 == -1) {
      _DAT_14c998ed8 = 0;
      DAT_14c998ed0 = &PTR_LAB_149f97570;
      _DAT_14c998ee0 = &DAT_14c99af78;
      _Init_thread_footer(&DAT_14c998ee8);
      return;
    }
  }
  return;
}



// FUNCTION 146f085c8 FUN_146f085c8 body=118 status=ok
// SIG undefined FUN_146f085c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f085c8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998f08) {
    FUN_144b3d300(&DAT_14c998f08);
    if (DAT_14c998f08 == -1) {
      _DAT_14c998ef8 = 0;
      DAT_14c998ef0 = &PTR_LAB_149f975a0;
      _DAT_14c998f00 = &DAT_14c99baf0;
      _Init_thread_footer(&DAT_14c998f08);
      return;
    }
  }
  return;
}



// FUNCTION 146f0863e FUN_146f0863e body=118 status=ok
// SIG undefined FUN_146f0863e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f0863e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998f28) {
    FUN_144b3d300(&DAT_14c998f28);
    if (DAT_14c998f28 == -1) {
      _DAT_14c998f18 = 0;
      DAT_14c998f10 = &PTR_LAB_149f975d0;
      _DAT_14c998f20 = &DAT_14c99a218;
      _Init_thread_footer(&DAT_14c998f28);
      return;
    }
  }
  return;
}



// FUNCTION 146f086b4 FUN_146f086b4 body=118 status=ok
// SIG undefined FUN_146f086b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f086b4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998f48) {
    FUN_144b3d300(&DAT_14c998f48);
    if (DAT_14c998f48 == -1) {
      _DAT_14c998f38 = 0;
      DAT_14c998f30 = &PTR_LAB_149f97600;
      _DAT_14c998f40 = &DAT_14c99a2a8;
      _Init_thread_footer(&DAT_14c998f48);
      return;
    }
  }
  return;
}



// FUNCTION 146f0872a FUN_146f0872a body=118 status=ok
// SIG undefined FUN_146f0872a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f0872a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998f78) {
    FUN_144b3d300(&DAT_14c998f78);
    if (DAT_14c998f78 == -1) {
      _DAT_14c998f68 = 0;
      DAT_14c998f60 = &PTR_LAB_149f97630;
      _DAT_14c998f70 = &DAT_14c99a4e8;
      _Init_thread_footer(&DAT_14c998f78);
      return;
    }
  }
  return;
}



// FUNCTION 146f087a0 FUN_146f087a0 body=118 status=ok
// SIG undefined FUN_146f087a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f087a0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998f98) {
    FUN_144b3d300(&DAT_14c998f98);
    if (DAT_14c998f98 == -1) {
      _DAT_14c998f88 = 0;
      DAT_14c998f80 = &PTR_LAB_149f97660;
      _DAT_14c998f90 = &DAT_14c99a568;
      _Init_thread_footer(&DAT_14c998f98);
      return;
    }
  }
  return;
}



// FUNCTION 146f08816 FUN_146f08816 body=118 status=ok
// SIG undefined FUN_146f08816(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f08816(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998fb8) {
    FUN_144b3d300(&DAT_14c998fb8);
    if (DAT_14c998fb8 == -1) {
      _DAT_14c998fa8 = 0;
      DAT_14c998fa0 = &PTR_LAB_149f97690;
      _DAT_14c998fb0 = &DAT_14c99b628;
      _Init_thread_footer(&DAT_14c998fb8);
      return;
    }
  }
  return;
}



// FUNCTION 146f0888c FUN_146f0888c body=118 status=ok
// SIG undefined FUN_146f0888c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f0888c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998fd8) {
    FUN_144b3d300(&DAT_14c998fd8);
    if (DAT_14c998fd8 == -1) {
      _DAT_14c998fc8 = 0;
      DAT_14c998fc0 = &PTR_LAB_149f976c0;
      _DAT_14c998fd0 = &DAT_14c99a120;
      _Init_thread_footer(&DAT_14c998fd8);
      return;
    }
  }
  return;
}



// FUNCTION 146f08902 FUN_146f08902 body=132 status=ok
// SIG undefined FUN_146f08902(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f08902(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999000) {
    FUN_144b3d300(&DAT_14c999000);
    if (DAT_14c999000 == -1) {
      _DAT_14c998ff0 = &DAT_14c99b6b8;
      DAT_14c998fe0 = &PTR_LAB_149f970a0;
      _DAT_14c998ff8 = 0;
      _DAT_14c998fe8 = DAT_14c998f50;
      _Init_thread_footer(&DAT_14c999000);
      return;
    }
  }
  return;
}



// FUNCTION 146f08986 FUN_146f08986 body=132 status=ok
// SIG undefined FUN_146f08986(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f08986(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999028) {
    FUN_144b3d300(&DAT_14c999028);
    if (DAT_14c999028 == -1) {
      _DAT_14c999018 = &DAT_14c99b738;
      DAT_14c999008 = &PTR_LAB_149f970a0;
      _DAT_14c999020 = 0;
      _DAT_14c999010 = DAT_14c998f58;
      _Init_thread_footer(&DAT_14c999028);
      return;
    }
  }
  return;
}



// FUNCTION 146f08a0a FUN_146f08a0a body=118 status=ok
// SIG undefined FUN_146f08a0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f08a0a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999048) {
    FUN_144b3d300(&DAT_14c999048);
    if (DAT_14c999048 == -1) {
      _DAT_14c999038 = 0;
      DAT_14c999030 = &PTR_LAB_149f976f0;
      _DAT_14c999040 = &DAT_14c99b860;
      _Init_thread_footer(&DAT_14c999048);
      return;
    }
  }
  return;
}



// FUNCTION 146f08a80 FUN_146f08a80 body=118 status=ok
// SIG undefined FUN_146f08a80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f08a80(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999068) {
    FUN_144b3d300(&DAT_14c999068);
    if (DAT_14c999068 == -1) {
      _DAT_14c999058 = 0;
      DAT_14c999050 = &PTR_LAB_149f97720;
      _DAT_14c999060 = &DAT_14c99aad8;
      _Init_thread_footer(&DAT_14c999068);
      return;
    }
  }
  return;
}



// FUNCTION 146f08af6 FUN_146f08af6 body=132 status=ok
// SIG undefined FUN_146f08af6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f08af6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999098) {
    FUN_144b3d300(&DAT_14c999098);
    if (DAT_14c999098 == -1) {
      _DAT_14c999088 = &DAT_14c99a328;
      DAT_14c999078 = &PTR_LAB_149f970a0;
      _DAT_14c999090 = 0;
      _DAT_14c999080 = DAT_14c999070;
      _Init_thread_footer(&DAT_14c999098);
      return;
    }
  }
  return;
}



// FUNCTION 146f08b7a FUN_146f08b7a body=159 status=ok
// SIG undefined FUN_146f08b7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f08b7a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9990c0) {
    FUN_144b3d300(&DAT_14c9990c0);
    if (DAT_14c9990c0 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      _DAT_14c9990a8 = (ulonglong)DAT_14c892c2c;
      _DAT_14c9990b0 = &DAT_14c99abd8;
      DAT_14c9990a0 = &PTR_LAB_149f970a0;
      _DAT_14c9990b8 = 0;
      _Init_thread_footer(&DAT_14c9990c0);
      return;
    }
  }
  return;
}



// FUNCTION 146f08c19 FUN_146f08c19 body=159 status=ok
// SIG undefined FUN_146f08c19(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f08c19(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9990e8) {
    FUN_144b3d300(&DAT_14c9990e8);
    if (DAT_14c9990e8 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      _DAT_14c9990d0 = (ulonglong)DAT_14c892c60;
      _DAT_14c9990d8 = &DAT_14c99bd90;
      DAT_14c9990c8 = &PTR_LAB_149f970a0;
      _DAT_14c9990e0 = 0;
      _Init_thread_footer(&DAT_14c9990e8);
      return;
    }
  }
  return;
}



// FUNCTION 146f08cb8 FUN_146f08cb8 body=159 status=ok
// SIG undefined FUN_146f08cb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f08cb8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999110) {
    FUN_144b3d300(&DAT_14c999110);
    if (DAT_14c999110 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      _DAT_14c9990f8 = (ulonglong)DAT_14c892c64;
      _DAT_14c999100 = &DAT_14c99be20;
      DAT_14c9990f0 = &PTR_LAB_149f970a0;
      _DAT_14c999108 = 0;
      _Init_thread_footer(&DAT_14c999110);
      return;
    }
  }
  return;
}



// FUNCTION 146f08d57 FUN_146f08d57 body=159 status=ok
// SIG undefined FUN_146f08d57(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f08d57(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999138) {
    FUN_144b3d300(&DAT_14c999138);
    if (DAT_14c999138 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      _DAT_14c999120 = (ulonglong)DAT_14c892c30;
      _DAT_14c999128 = &DAT_14c99ac58;
      DAT_14c999118 = &PTR_LAB_149f970a0;
      _DAT_14c999130 = 0;
      _Init_thread_footer(&DAT_14c999138);
      return;
    }
  }
  return;
}



// FUNCTION 146f08df6 FUN_146f08df6 body=159 status=ok
// SIG undefined FUN_146f08df6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f08df6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999160) {
    FUN_144b3d300(&DAT_14c999160);
    if (DAT_14c999160 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      _DAT_14c999148 = (ulonglong)DAT_14c892ca0;
      _DAT_14c999150 = &DAT_14c99b500;
      DAT_14c999140 = &PTR_LAB_149f970a0;
      _DAT_14c999158 = 0;
      _Init_thread_footer(&DAT_14c999160);
      return;
    }
  }
  return;
}



// FUNCTION 146f08e95 FUN_146f08e95 body=159 status=ok
// SIG undefined FUN_146f08e95(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f08e95(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999188) {
    FUN_144b3d300(&DAT_14c999188);
    if (DAT_14c999188 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      _DAT_14c999170 = (ulonglong)DAT_14c892ca4;
      _DAT_14c999178 = &DAT_14c99b590;
      DAT_14c999168 = &PTR_LAB_149f970a0;
      _DAT_14c999180 = 0;
      _Init_thread_footer(&DAT_14c999188);
      return;
    }
  }
  return;
}



// FUNCTION 146f08f34 FUN_146f08f34 body=159 status=ok
// SIG undefined FUN_146f08f34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f08f34(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9991b0) {
    FUN_144b3d300(&DAT_14c9991b0);
    if (DAT_14c9991b0 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      _DAT_14c999198 = (ulonglong)DAT_14c892c54;
      _DAT_14c9991a0 = &DAT_14c99b220;
      DAT_14c999190 = &PTR_LAB_149f970a0;
      _DAT_14c9991a8 = 0;
      _Init_thread_footer(&DAT_14c9991b0);
      return;
    }
  }
  return;
}



// FUNCTION 146f08fd3 FUN_146f08fd3 body=159 status=ok
// SIG undefined FUN_146f08fd3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f08fd3(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9991d8) {
    FUN_144b3d300(&DAT_14c9991d8);
    if (DAT_14c9991d8 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      _DAT_14c9991c0 = (ulonglong)DAT_14c892c78;
      _DAT_14c9991c8 = &DAT_14c99b2b0;
      DAT_14c9991b8 = &PTR_LAB_149f970a0;
      _DAT_14c9991d0 = 0;
      _Init_thread_footer(&DAT_14c9991d8);
      return;
    }
  }
  return;
}



// FUNCTION 146f09072 FUN_146f09072 body=159 status=ok
// SIG undefined FUN_146f09072(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f09072(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999200) {
    FUN_144b3d300(&DAT_14c999200);
    if (DAT_14c999200 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      _DAT_14c9991e8 = (ulonglong)DAT_14c892c7c;
      _DAT_14c9991f0 = &DAT_14c99b340;
      DAT_14c9991e0 = &PTR_LAB_149f970a0;
      _DAT_14c9991f8 = 0;
      _Init_thread_footer(&DAT_14c999200);
      return;
    }
  }
  return;
}



// FUNCTION 146f09111 FUN_146f09111 body=132 status=ok
// SIG undefined FUN_146f09111(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f09111(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999250) {
    FUN_144b3d300(&DAT_14c999250);
    if (DAT_14c999250 == -1) {
      _DAT_14c999240 = &DAT_14c99b0f8;
      DAT_14c999230 = &PTR_LAB_149f970a0;
      _DAT_14c999248 = 0;
      _DAT_14c999238 = DAT_14c999208;
      _Init_thread_footer(&DAT_14c999250);
      return;
    }
  }
  return;
}



// FUNCTION 146f09195 FUN_146f09195 body=132 status=ok
// SIG undefined FUN_146f09195(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f09195(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999278) {
    FUN_144b3d300(&DAT_14c999278);
    if (DAT_14c999278 == -1) {
      _DAT_14c999268 = &DAT_14c99b078;
      DAT_14c999258 = &PTR_LAB_149f970a0;
      _DAT_14c999270 = 0;
      _DAT_14c999260 = DAT_14c999210;
      _Init_thread_footer(&DAT_14c999278);
      return;
    }
  }
  return;
}



// FUNCTION 146f09219 FUN_146f09219 body=132 status=ok
// SIG undefined FUN_146f09219(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f09219(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9992a0) {
    FUN_144b3d300(&DAT_14c9992a0);
    if (DAT_14c9992a0 == -1) {
      _DAT_14c999290 = &DAT_14c99aff8;
      DAT_14c999280 = &PTR_LAB_149f970a0;
      _DAT_14c999298 = 0;
      _DAT_14c999288 = DAT_14c999218;
      _Init_thread_footer(&DAT_14c9992a0);
      return;
    }
  }
  return;
}



// FUNCTION 146f0929d FUN_146f0929d body=132 status=ok
// SIG undefined FUN_146f0929d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f0929d(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9992c8) {
    FUN_144b3d300(&DAT_14c9992c8);
    if (DAT_14c9992c8 == -1) {
      _DAT_14c9992b8 = &DAT_14c99b188;
      DAT_14c9992a8 = &PTR_LAB_149f970a0;
      _DAT_14c9992c0 = 0;
      _DAT_14c9992b0 = DAT_14c999220;
      _Init_thread_footer(&DAT_14c9992c8);
      return;
    }
  }
  return;
}



// FUNCTION 146f09321 FUN_146f09321 body=132 status=ok
// SIG undefined FUN_146f09321(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f09321(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9992f0) {
    FUN_144b3d300(&DAT_14c9992f0);
    if (DAT_14c9992f0 == -1) {
      _DAT_14c9992e0 = &DAT_14c999ca0;
      DAT_14c9992d0 = &PTR_LAB_149f970a0;
      _DAT_14c9992e8 = 0;
      _DAT_14c9992d8 = DAT_14c999228;
      _Init_thread_footer(&DAT_14c9992f0);
      return;
    }
  }
  return;
}



// FUNCTION 146f093a5 FUN_146f093a5 body=104 status=ok
// SIG undefined FUN_146f093a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f093a5(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999308) {
    FUN_144b3d300(&DAT_14c999308);
    if (DAT_14c999308 == -1) {
      _DAT_14c999300 = 0;
      DAT_14c9992f8 = &PTR_LAB_149f970d0;
      _Init_thread_footer(&DAT_14c999308);
      return;
    }
  }
  return;
}



// FUNCTION 146f0940d FUN_146f0940d body=104 status=ok
// SIG undefined FUN_146f0940d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f0940d(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999320) {
    FUN_144b3d300(&DAT_14c999320);
    if (DAT_14c999320 == -1) {
      _DAT_14c999318 = 0;
      DAT_14c999310 = &PTR_LAB_149f97100;
      _Init_thread_footer(&DAT_14c999320);
      return;
    }
  }
  return;
}



// FUNCTION 146f09475 FUN_146f09475 body=104 status=ok
// SIG undefined FUN_146f09475(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f09475(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999338) {
    FUN_144b3d300(&DAT_14c999338);
    if (DAT_14c999338 == -1) {
      _DAT_14c999330 = 0;
      DAT_14c999328 = &PTR_LAB_149f97130;
      _Init_thread_footer(&DAT_14c999338);
      return;
    }
  }
  return;
}



// FUNCTION 146f094dd FUN_146f094dd body=104 status=ok
// SIG undefined FUN_146f094dd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f094dd(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999350) {
    FUN_144b3d300(&DAT_14c999350);
    if (DAT_14c999350 == -1) {
      _DAT_14c999348 = 0;
      DAT_14c999340 = &PTR_LAB_149f97160;
      _Init_thread_footer(&DAT_14c999350);
      return;
    }
  }
  return;
}



// FUNCTION 146f09545 FUN_146f09545 body=2001 status=ok
// SIG undefined FUN_146f09545(void)

void FUN_146f09545(void)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146f08304();
  local_30 = (*(code *)*DAT_14c998e30)(&DAT_14c998e30);
  local_28 = &DAT_14c998e30;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f0837a();
  local_30 = (*(code *)*DAT_14c998e50)(&DAT_14c998e50);
  local_28 = &DAT_14c998e50;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f083f0();
  local_30 = (*(code *)*DAT_14c998e70)(&DAT_14c998e70);
  local_28 = &DAT_14c998e70;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f08466();
  local_30 = (*(code *)*DAT_14c998e90)(&DAT_14c998e90);
  local_28 = &DAT_14c998e90;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f093a5();
  local_30 = (*(code *)*DAT_14c9992f8)(&DAT_14c9992f8);
  local_28 = &DAT_14c9992f8;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f084dc();
  local_30 = (*(code *)*DAT_14c998eb0)(&DAT_14c998eb0);
  local_28 = &DAT_14c998eb0;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f08552();
  local_30 = (*(code *)*DAT_14c998ed0)(&DAT_14c998ed0);
  local_28 = &DAT_14c998ed0;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f085c8();
  local_30 = (*(code *)*DAT_14c998ef0)(&DAT_14c998ef0);
  local_28 = &DAT_14c998ef0;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f09d69();
  local_30 = (*(code *)*DAT_14c999360)(&DAT_14c999360);
  local_28 = &DAT_14c999360;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f09dd1();
  local_30 = (*(code *)*DAT_14c999390)(&DAT_14c999390);
  local_28 = &DAT_14c999390;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f09ea9();
  local_30 = (*(code *)*DAT_14c999378)(&DAT_14c999378);
  local_28 = &DAT_14c999378;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f0863e();
  local_30 = (*(code *)*DAT_14c998f10)(&DAT_14c998f10);
  local_28 = &DAT_14c998f10;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f086b4();
  local_30 = (*(code *)*DAT_14c998f30)(&DAT_14c998f30);
  local_28 = &DAT_14c998f30;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f0872a();
  local_30 = (*(code *)*DAT_14c998f60)(&DAT_14c998f60);
  local_28 = &DAT_14c998f60;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f087a0();
  local_30 = (*(code *)*DAT_14c998f80)(&DAT_14c998f80);
  local_28 = &DAT_14c998f80;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f094dd();
  local_30 = (*(code *)*DAT_14c999340)(&DAT_14c999340);
  local_28 = &DAT_14c999340;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f08816();
  local_30 = (*(code *)*DAT_14c998fa0)(&DAT_14c998fa0);
  local_28 = &DAT_14c998fa0;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f0888c();
  local_30 = (*(code *)*DAT_14c998fc0)(&DAT_14c998fc0);
  local_28 = &DAT_14c998fc0;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f08902();
  local_30 = (*(code *)*DAT_14c998fe0)(&DAT_14c998fe0);
  local_28 = &DAT_14c998fe0;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f08986();
  local_30 = (*(code *)*DAT_14c999008)(&DAT_14c999008);
  local_28 = &DAT_14c999008;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f08a80();
  local_30 = (*(code *)*DAT_14c999050)(&DAT_14c999050);
  local_28 = &DAT_14c999050;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f08a0a();
  local_30 = (*(code *)*DAT_14c999030)(&DAT_14c999030);
  local_28 = &DAT_14c999030;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f0940d();
  local_30 = (*(code *)*DAT_14c999310)(&DAT_14c999310);
  local_28 = &DAT_14c999310;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f09475();
  local_30 = (*(code *)*DAT_14c999328)(&DAT_14c999328);
  local_28 = &DAT_14c999328;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f08af6();
  local_30 = (*(code *)*DAT_14c999078)(&DAT_14c999078);
  local_28 = &DAT_14c999078;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f08b7a();
  local_30 = (*(code *)*DAT_14c9990a0)(&DAT_14c9990a0);
  local_28 = &DAT_14c9990a0;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f08c19();
  local_30 = (*(code *)*DAT_14c9990c8)(&DAT_14c9990c8);
  local_28 = &DAT_14c9990c8;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f08cb8();
  local_30 = (*(code *)*DAT_14c9990f0)(&DAT_14c9990f0);
  local_28 = &DAT_14c9990f0;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f08d57();
  local_30 = (*(code *)*DAT_14c999118)(&DAT_14c999118);
  local_28 = &DAT_14c999118;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f08df6();
  local_30 = (*(code *)*DAT_14c999140)(&DAT_14c999140);
  local_28 = &DAT_14c999140;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f08e95();
  local_30 = (*(code *)*DAT_14c999168)(&DAT_14c999168);
  local_28 = &DAT_14c999168;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f08f34();
  local_30 = (*(code *)*DAT_14c999190)(&DAT_14c999190);
  local_28 = &DAT_14c999190;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f08fd3();
  local_30 = (*(code *)*DAT_14c9991b8)(&DAT_14c9991b8);
  local_28 = &DAT_14c9991b8;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f09072();
  local_30 = (*(code *)*DAT_14c9991e0)(&DAT_14c9991e0);
  local_28 = &DAT_14c9991e0;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f09111();
  local_30 = (*(code *)*DAT_14c999230)(&DAT_14c999230);
  local_28 = &DAT_14c999230;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f09195();
  local_30 = (*(code *)*DAT_14c999258)(&DAT_14c999258);
  local_28 = &DAT_14c999258;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f09219();
  local_30 = (*(code *)*DAT_14c999280)(&DAT_14c999280);
  local_28 = &DAT_14c999280;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f0929d();
  local_30 = (*(code *)*DAT_14c9992a8)(&DAT_14c9992a8);
  local_28 = &DAT_14c9992a8;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  FUN_146f09321();
  local_30 = (*(code *)*DAT_14c9992d0)(&DAT_14c9992d0);
  local_28 = &DAT_14c9992d0;
  FUN_146f10d60(&local_30);
  DAT_14c999408 = 1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f09d18 FUN_146f09d18 body=80 status=ok
// SIG undefined FUN_146f09d18(void)

void FUN_146f09d18(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (**(code **)*param_1)();
  local_18 = param_1;
  FUN_146f10d60();
  DAT_14c999408 = 1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f09d69 FUN_146f09d69 body=104 status=ok
// SIG undefined FUN_146f09d69(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f09d69(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999370) {
    FUN_144b3d300(&DAT_14c999370);
    if (DAT_14c999370 == -1) {
      _DAT_14c999368 = 0;
      DAT_14c999360 = &PTR_LAB_149f97190;
      _Init_thread_footer(&DAT_14c999370);
      return;
    }
  }
  return;
}



// FUNCTION 146f09dd1 FUN_146f09dd1 body=216 status=ok
// SIG undefined FUN_146f09dd1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f09dd1(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9993e0) {
    FUN_144b3d300(&DAT_14c9993e0);
    if (DAT_14c9993e0 == -1) {
      _DAT_14c999398 = 0;
      DAT_14c999390 = &PTR_LAB_149f971f0;
      _DAT_14c9993a0 = &DAT_14c999f20;
      _DAT_14c9993a8 = &DAT_14c999fa0;
      _DAT_14c9993b0 = &DAT_14c99a020;
      _DAT_14c9993b8 = &DAT_14c99a0a0;
      _DAT_14c9993c0 = &DAT_14c999d20;
      _DAT_14c9993c8 = &DAT_14c999da0;
      _DAT_14c9993d0 = &DAT_14c999e20;
      _DAT_14c9993d8 = &DAT_14c999ea0;
      _Init_thread_footer(&DAT_14c9993e0);
      return;
    }
  }
  return;
}



// FUNCTION 146f09ea9 FUN_146f09ea9 body=104 status=ok
// SIG undefined FUN_146f09ea9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f09ea9(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999388) {
    FUN_144b3d300(&DAT_14c999388);
    if (DAT_14c999388 == -1) {
      _DAT_14c999380 = 0;
      DAT_14c999378 = &PTR_LAB_149f971c0;
      _Init_thread_footer(&DAT_14c999388);
      return;
    }
  }
  return;
}



// FUNCTION 146f09f11 FUN_146f09f11 body=217 status=ok
// SIG undefined FUN_146f09f11(void)

void FUN_146f09f11(undefined4 *param_1,longlong param_2)

{
  undefined1 *_Dst;
  undefined8 uVar1;
  uint uVar2;
  uint *_Dst_00;
  undefined1 auStack_68 [40];
  uint *local_40;
  uint local_38;
  uint local_34 [4];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  _Dst = local_24;
  if (*(ushort *)(param_2 + 0x86) != 0) {
    _Dst = (undefined1 *)((ulonglong)*(uint *)(param_2 + 0x88) + (longlong)param_1);
  }
  uVar1 = 0;
  memset(_Dst,0,(ulonglong)(*(ushort *)(param_2 + 0x86) + 0x1f >> 3 & 0xfffffffc));
  if ((*(byte *)(param_2 + 0xb8) & 2) != 0) {
    uVar2 = *(ushort *)(param_2 + 0x86) + 0x1f;
    _Dst_00 = (uint *)((longlong)param_1 +
                      (ulonglong)((uVar2 >> 3 & 0xfffffffc) + *(int *)(param_2 + 0x88)));
    uVar2 = uVar2 >> 5;
    local_34[0] = (uint)*(ushort *)(param_2 + 0x86);
    if (local_34[0] == 0) {
      _Dst_00 = local_34;
    }
    local_40 = _Dst_00;
    local_38 = uVar2;
    memset(_Dst_00,(int)CONCAT71((int7)((ulonglong)uVar1 >> 8),0xff),(ulonglong)(uVar2 * 4));
    if (local_34[0] != 0) {
      _Dst_00[uVar2 - 1] =
           (_Dst_00[uVar2 - 1] << (-(char)local_34[0] & 0x1fU)) >> (-(char)local_34[0] & 0x1fU);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f09feb FUN_146f09feb body=105 status=ok
// SIG undefined FUN_146f09feb(void)

void FUN_146f09feb(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((ulonglong)*(ushort *)(param_3 + 0x86) != 0) {
    uVar2 = *(uint *)(param_3 + 0x88);
    uVar5 = (ulonglong)*(ushort *)(param_3 + 0x86) + 0x1f;
    uVar3 = uVar5 >> 5;
    uVar4 = 0;
    do {
      puVar1 = (uint *)(param_1 + (ulonglong)uVar2 + uVar4 * 4);
      *puVar1 = *puVar1 | *(uint *)(param_2 + (ulonglong)uVar2 + uVar4 * 4);
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
    if ((*(byte *)(param_3 + 0xb8) & 2) != 0) {
      uVar4 = (ulonglong)(uVar2 + ((uint)uVar5 >> 5) * 4);
      uVar5 = 0;
      do {
        puVar1 = (uint *)(param_1 + uVar4 + uVar5 * 4);
        *puVar1 = *puVar1 | *(uint *)(param_2 + uVar4 + uVar5 * 4);
        uVar5 = uVar5 + 1;
      } while (uVar3 != uVar5);
    }
  }
  return;
}



// FUNCTION 146f0a054 FUN_146f0a054 body=136 status=ok
// SIG undefined FUN_146f0a054(void)

void FUN_146f0a054(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  FUN_146f09f11();
  uVar1 = *(ushort *)((longlong)param_2 + 0x7c);
  if (uVar1 != 0) {
    lVar2 = *param_2;
    lVar3 = param_2[7];
    lVar4 = param_2[8];
    lVar6 = 0;
    do {
      if (*(short *)(lVar4 + 8 + lVar6 * 2) == 0) {
        plVar5 = *(longlong **)(lVar3 + lVar6);
        if ((*(byte *)((longlong)plVar5 + 0x39) & 2) == 0) {
          (**(code **)(*plVar5 + 0x160))();
        }
        else {
          memset((void *)((ulonglong)*(uint *)(lVar2 + lVar6) + param_1),0,
                 (longlong)(int)plVar5[6] * (longlong)*(int *)((longlong)plVar5 + 0x34));
        }
      }
      lVar6 = lVar6 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar6);
  }
  return;
}



// FUNCTION 146f0a0dc FUN_146f0a0dc body=113 status=ok
// SIG undefined FUN_146f0a0dc(void)

void FUN_146f0a0dc(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (((*(byte *)((longlong)param_2 + 0xb9) & 1) == 0) &&
     (uVar1 = *(ushort *)((longlong)param_2 + 0x7c), uVar1 != 0)) {
    lVar2 = *param_2;
    lVar3 = param_2[7];
    lVar4 = param_2[8];
    lVar6 = 0;
    do {
      if ((*(short *)(lVar4 + 8 + lVar6 * 2) == 0) &&
         (plVar5 = *(longlong **)(lVar3 + lVar6), (*(byte *)((longlong)plVar5 + 0x3c) & 0x10) == 0))
      {
        (**(code **)(*plVar5 + 0x148))(plVar5,(ulonglong)*(uint *)(lVar2 + lVar6) + param_1);
      }
      lVar6 = lVar6 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar6);
  }
  return;
}



// FUNCTION 146f0a14d FUN_146f0a14d body=236 status=ok
// SIG undefined FUN_146f0a14d(void)

void FUN_146f0a14d(longlong param_1,longlong param_2,longlong *param_3)

{
  void *_Src;
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  void *_Dst;
  longlong lVar7;
  uint uVar8;
  
  if (*(ushort *)((longlong)param_3 + 0x86) != 0) {
    uVar2 = *(uint *)(param_3 + 0x11);
    uVar8 = *(ushort *)((longlong)param_3 + 0x86) + 0x1f >> 3 & 0xfffffffc;
    memcpy((void *)(param_1 + (ulonglong)uVar2),(void *)(param_2 + (ulonglong)uVar2),
           (ulonglong)uVar8);
    if ((*(byte *)(param_3 + 0x17) & 2) != 0) {
      memcpy((void *)(param_1 + (ulonglong)(uVar8 + uVar2)),
             (void *)((ulonglong)(uVar8 + uVar2) + param_2),(ulonglong)uVar8);
    }
  }
  uVar1 = *(ushort *)((longlong)param_3 + 0x7c);
  if (uVar1 != 0) {
    lVar3 = *param_3;
    lVar4 = param_3[7];
    lVar5 = param_3[8];
    lVar7 = 0;
    do {
      if ((*(short *)(lVar5 + 8 + lVar7 * 2) == 0) && (param_1 != param_2)) {
        _Src = (void *)(param_2 + (ulonglong)*(uint *)(lVar3 + lVar7));
        _Dst = (void *)((ulonglong)*(uint *)(lVar3 + lVar7) + param_1);
        plVar6 = *(longlong **)(lVar4 + lVar7);
        if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
          (**(code **)(*plVar6 + 0x100))(plVar6,_Dst,_Src,(int)plVar6[6]);
        }
        else {
          memcpy(_Dst,_Src,(longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
        }
      }
      lVar7 = lVar7 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar7);
  }
  return;
}



// FUNCTION 146f0a239 FUN_146f0a239 body=336 status=ok
// SIG undefined FUN_146f0a239(void)

void FUN_146f0a239(longlong param_1,longlong param_2,longlong *param_3)

{
  void *_Src;
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  ulonglong uVar8;
  void *_Dst;
  ulonglong uVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  uint *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146f09feb();
  local_60 = *param_3;
  lVar4 = param_3[7];
  lVar5 = param_3[8];
  local_58 = (uint *)((ulonglong)*(uint *)(param_3 + 0x11) + param_2);
  local_50 = *(ushort *)((longlong)param_3 + 0x86) + 0x1f >> 5;
  local_4c = (uint)*(ushort *)((longlong)param_3 + 0x86);
  if (local_4c == 0) {
    local_58 = &local_4c;
  }
  uVar1 = *(ushort *)((longlong)param_3 + 0x7c);
  if (uVar1 != 0) {
    uVar3 = *(uint *)(param_3 + 0x17);
    uVar9 = 0;
    do {
      if ((uVar3 & 1) == 0) {
        uVar2 = *(ushort *)(param_3[1] + uVar9 * 2);
        if (*(short *)(param_3[1] + 2 + uVar9 * 2) == 1) {
          if ((local_58[uVar2 >> 5] >> (uVar2 & 0x1f) & 1) != 0) goto LAB_146f0a2ef;
        }
        else {
          cVar7 = FUN_146f0ff32(local_58,local_4c);
          if (cVar7 != '\0') goto LAB_146f0a2ef;
        }
      }
      else {
LAB_146f0a2ef:
        if ((*(short *)(lVar5 + 8 + uVar9 * 8) == 0) && (param_1 != param_2)) {
          uVar8 = (ulonglong)*(uint *)(local_60 + uVar9 * 4);
          _Src = (void *)(param_2 + uVar8);
          _Dst = (void *)(uVar8 + param_1);
          plVar6 = *(longlong **)(lVar4 + uVar9 * 4);
          if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar6 + 0x100))(plVar6,_Dst,_Src,(int)plVar6[6]);
          }
          else {
            memcpy(_Dst,_Src,(longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34))
            ;
          }
        }
      }
      uVar9 = uVar9 + 2;
    } while ((uint)uVar1 * 2 != uVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f0a38a FUN_146f0a38a body=518 status=ok
// SIG undefined FUN_146f0a38a(void)

void FUN_146f0a38a(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 local_158 [26];
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar2 = *(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 0x10;
  puVar1 = *(undefined **)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 0x10);
  local_170 = param_3;
  local_168 = param_4;
  if ((puVar1[4] & 0x10) != 0) {
    local_158[0] = 0;
    local_158[1] = 0;
    lVar3 = 0x18;
    do {
      *(undefined8 *)((longlong)local_158 + lVar3) = 0;
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != 0xd8);
    local_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0xffffffff00000000;
    local_38 = local_38 & 0xfc;
    local_178 = 0;
    local_180 = 0;
    local_188 = *(longlong *)(lVar2 + 8);
    local_160 = 0;
    (**(code **)(puVar1 + 0x38))();
LAB_146f0a527:
    if ((local_28 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (puVar1 == &DAT_14c99c038) {
    if ((*(byte *)(*(longlong *)(*(longlong *)(lVar2 + 8) + 0x10) + 0xb9) & 2) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_1a8);
    }
  }
  else if (puVar1 == &DAT_14c99bf88) {
    local_188 = *(longlong *)(lVar2 + 8);
    if ((*(byte *)(*(longlong *)(local_188 + 0x38) + 0xb9) & 2) == 0) {
      local_158[0] = 0;
      local_158[1] = 0;
      lVar2 = 0x18;
      do {
        *(undefined8 *)((longlong)local_158 + lVar2) = 0;
        lVar2 = lVar2 + 0x18;
      } while (lVar2 != 0xd8);
      local_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0xffffffff00000000;
      local_38 = local_38 & 0xfc;
      local_178 = 0;
      local_180 = 0;
      local_160 = 0;
      (*DAT_14c99bfc0)();
      goto LAB_146f0a527;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_1a8);
}



// FUNCTION 146f0a5c9 FUN_146f0a5c9 body=387 status=ok
// SIG undefined FUN_146f0a5c9(void)

ulonglong FUN_146f0a5c9(undefined8 *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  longlong lVar2;
  uint *puVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong unaff_RBP;
  longlong lVar8;
  ushort *puVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  longlong local_190;
  longlong local_188;
  undefined1 local_180;
  undefined8 local_178 [26];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar2 = param_1[7];
  lVar8 = param_1[8];
  uVar6 = 0;
  if ((*(byte *)((longlong)param_1 + 0xba) & 1) != 0) {
    puVar3 = (uint *)*param_1;
    plVar4 = (longlong *)param_1[2];
    local_178[0] = 0;
    local_178[1] = 0;
    lVar7 = 0x18;
    do {
      *(undefined8 *)((longlong)local_178 + lVar7) = 0;
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != 0xd8);
    unaff_RBP = 0;
    local_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0xffffffff00000000;
    local_58 = local_58 & 0xfc;
    local_198 = 0;
    local_1a0 = 0;
    local_1a8 = plVar4[1];
    local_190 = (ulonglong)*puVar3 + param_2;
    local_188 = (ulonglong)*puVar3 + param_3;
    local_180 = 0;
    cVar5 = (**(code **)(*plVar4 + 0x38))();
    uVar6 = 1;
    if (cVar5 == '\0') goto LAB_146f0a71d;
  }
  uVar1 = *(ushort *)((longlong)param_1 + 0x7c);
  unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
  if (uVar6 < uVar1) {
    uVar10 = (ulonglong)uVar6;
    puVar9 = (ushort *)(lVar8 + (ulonglong)(uVar6 << 4) + 8);
    do {
      lVar8 = *(longlong *)(lVar2 + uVar10 * 8);
      lVar8 = (ulonglong)*puVar9 * (longlong)*(int *)(lVar8 + 0x34) +
              (longlong)*(int *)(lVar8 + 0x44);
      uVar6 = FUN_146f0a38a(param_1,uVar10 & 0xffffffff,lVar8 + param_2,param_3 + lVar8);
      unaff_RBP = (ulonglong)uVar6;
      bVar11 = (ulonglong)uVar1 - 1 != uVar10;
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 8;
    } while (((byte)uVar6 & bVar11) != 0);
  }
LAB_146f0a71d:
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 146f0a74d FUN_146f0a74d body=383 status=ok
// SIG undefined FUN_146f0a74d(void)

void FUN_146f0a74d(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  ushort *puVar6;
  ulonglong uVar7;
  undefined1 auStack_1b8 [40];
  longlong local_190;
  undefined8 local_188;
  undefined4 local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168 [26];
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar5 = 0;
  if ((*(byte *)(param_1 + 0xba) & 1) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x10);
    lVar2 = *plVar3;
    if ((*(byte *)(lVar2 + 4) & 0x20) == 0) {
      uVar5 = 1;
      FUN_1449b16b6(*(undefined8 *)(param_1 + 0x58),param_2,param_3,1);
    }
    else {
      local_168[0] = 0;
      local_168[1] = 0;
      lVar4 = 0x18;
      do {
        *(undefined8 *)((longlong)local_168 + lVar4) = 0;
        lVar4 = lVar4 + 0x18;
      } while (lVar4 != 0xd8);
      local_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0xffffffff00000000;
      local_48 = local_48 & 0xfc;
      local_180 = 0;
      local_188 = 0;
      local_190 = plVar3[1];
      local_178 = param_3;
      local_170 = param_2;
      (**(code **)(lVar2 + 0x60))();
      uVar5 = 1;
    }
  }
  uVar1 = *(ushort *)(param_1 + 0x7c);
  if (uVar5 < uVar1) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    uVar7 = (ulonglong)uVar5;
    puVar6 = (ushort *)((ulonglong)(uVar5 << 4) + *(longlong *)(param_1 + 0x40) + 8);
    do {
      lVar4 = *(longlong *)(lVar2 + uVar7 * 8);
      lVar4 = (ulonglong)*puVar6 * (longlong)*(int *)(lVar4 + 0x34) +
              (longlong)*(int *)(lVar4 + 0x44);
      FUN_146f0a8cd(param_1,uVar7 & 0xffffffff,lVar4 + param_2,param_3 + lVar4);
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 8;
    } while (uVar1 != uVar7);
  }
  if ((local_40 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f0a8cd FUN_146f0a8cd body=1351 status=ok
// SIG undefined FUN_146f0a8cd(void)

void FUN_146f0a8cd(longlong param_1,ulonglong param_2,ulonglong *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_208 [39];
  byte local_1e1;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  ulonglong *local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  byte local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  ulonglong *local_198;
  ulonglong *local_190;
  undefined8 local_188 [26];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar12 = (param_2 & 0xffffffff) * 0x10;
  lVar11 = *(longlong *)(param_1 + 0x10) + lVar12;
  puVar5 = *(undefined **)(*(longlong *)(param_1 + 0x10) + lVar12);
  if ((puVar5[4] & 0x20) != 0) {
    local_188[0] = 0;
    local_188[1] = 0;
    lVar12 = 0x18;
    do {
      *(undefined8 *)((longlong)local_188 + lVar12) = 0;
      lVar12 = lVar12 + 0x18;
    } while (lVar12 != 0xd8);
    local_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0xffffffff00000000;
    local_68 = local_68 & 0xfc;
    local_1a0 = 0;
    local_1a8 = 0;
    local_1b0 = *(longlong *)(lVar11 + 8);
    local_198 = param_4;
    local_190 = param_3;
    (**(code **)(puVar5 + 0x60))();
    goto LAB_146f0aa37;
  }
  if (puVar5 == &DAT_14c99c038) {
    if ((*(byte *)(*(longlong *)(*(longlong *)(lVar11 + 8) + 0x10) + 0xb9) & 2) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_208);
    }
  }
  else if (puVar5 == &DAT_14c99bf88) {
    lVar11 = *(longlong *)(lVar11 + 8);
    plVar6 = *(longlong **)(*(longlong *)(lVar11 + 0x38) + 0x10);
    uVar3 = *(uint *)((undefined *)*plVar6 + 4);
    if ((undefined *)*plVar6 == &DAT_14c99c038) {
      bVar15 = (*(byte *)(*(longlong *)(lVar11 + 0x38) + 0xb9) & 2) == 0;
    }
    else {
      bVar15 = false;
    }
    if (((uVar3 & 0x20) != 0) || (bVar15)) {
      local_1d8 = *(undefined8 *)(plVar6[1] + 0x10);
      plVar1 = (longlong *)(lVar11 + 0x18);
      lVar12 = FUN_1446e6bbc();
      if (((*(longlong *)(lVar11 + 0x18) == 0) ||
          (cVar8 = FUN_144729dda(lVar11 + 0x20), cVar8 == '\0')) && (*(int *)(lVar11 + 0x30) != 0))
      {
        lVar9 = FUN_14007daa4(plVar1,0,0);
        if (lVar9 == 0) {
LAB_146f0abba:
          if (*plVar1 != 0) {
            *plVar1 = 0;
            *(undefined8 *)(lVar11 + 0x20) = 0;
          }
        }
        else {
          lVar10 = *(longlong *)(lVar9 + 8);
          if (*(ulonglong *)(lVar12 + 8) == 0) {
            bVar15 = lVar10 != 0;
            if (lVar10 != lVar12 && bVar15) {
              do {
                lVar10 = *(longlong *)(lVar10 + 0x30);
                bVar15 = lVar10 != 0;
                if (lVar10 == lVar12) break;
              } while (lVar10 != 0);
            }
            if (!bVar15) goto LAB_146f0abba;
          }
          else if ((*(ulonglong *)(lVar10 + 0x18) & *(ulonglong *)(lVar12 + 8)) == 0)
          goto LAB_146f0abba;
          *plVar1 = lVar9;
        }
      }
      lVar12 = *plVar1;
      local_1e1 = *(byte *)(lVar12 + 0x70);
      (**(code **)(**(longlong **)(lVar12 + 0x78) + 0x178))();
      local_1e0 = (longlong)*(int *)(*(longlong *)(lVar12 + 0x78) + 0x34);
      lVar12 = FUN_1446e6bbc();
      if (((*plVar1 == 0) || (cVar8 = FUN_144729dda(lVar11 + 0x20), cVar8 == '\0')) &&
         (*(int *)(lVar11 + 0x30) != 0)) {
        lVar9 = FUN_14007daa4(plVar1,0,0);
        if (lVar9 == 0) {
LAB_146f0ac65:
          if (*plVar1 != 0) {
            *plVar1 = 0;
            *(undefined8 *)(lVar11 + 0x20) = 0;
          }
        }
        else {
          lVar10 = *(longlong *)(lVar9 + 8);
          if (*(ulonglong *)(lVar12 + 8) == 0) {
            bVar15 = lVar10 != 0;
            if (lVar10 != lVar12 && bVar15) {
              do {
                lVar10 = *(longlong *)(lVar10 + 0x30);
                bVar15 = lVar10 != 0;
                if (lVar10 == lVar12) break;
              } while (lVar10 != 0);
            }
            if (!bVar15) goto LAB_146f0ac65;
          }
          else if ((*(ulonglong *)(lVar10 + 0x18) & *(ulonglong *)(lVar12 + 8)) == 0)
          goto LAB_146f0ac65;
          *plVar1 = lVar9;
        }
      }
      lVar11 = *plVar1;
      bVar2 = *(byte *)(lVar11 + 0x70);
      local_1bc = (**(code **)(**(longlong **)(lVar11 + 0x78) + 0x178))();
      local_1d0 = *(longlong *)(lVar11 + 0x78);
      local_1c0 = *(int *)(local_1d0 + 0x34);
      iVar4 = (int)param_4[1];
      local_1c8 = param_3;
      local_1b8 = bVar2;
      FUN_144a8a902();
      uVar7 = local_1d8;
      if ((uVar3 & 0x20) == 0) {
        if (iVar4 != 0) {
          iVar13 = 0;
          do {
            if ((int)param_4[1] == 0) {
              lVar11 = 0;
            }
            else {
              if ((local_1e1 & 1) == 0) {
                uVar14 = *param_4;
              }
              else {
                uVar14 = *param_4;
                if ((uVar14 & 1) != 0) {
                  uVar14 = ((longlong)uVar14 >> 0x18) + (longlong)param_4;
                }
              }
              lVar11 = iVar13 * local_1e0 + uVar14;
            }
            if ((int)local_1c8[1] == 0) {
              lVar12 = 0;
            }
            else {
              if ((local_1b8 & 1) == 0) {
                uVar14 = *local_1c8;
              }
              else {
                uVar14 = *local_1c8;
                if ((uVar14 & 1) != 0) {
                  uVar14 = (longlong)local_1c8 + ((longlong)uVar14 >> 0x18);
                }
              }
              lVar12 = (longlong)local_1c0 * (longlong)iVar13 + uVar14;
            }
            FUN_146f0a74d(uVar7,lVar12,lVar11);
            iVar13 = iVar13 + 1;
          } while (iVar4 != iVar13);
        }
      }
      else if (iVar4 != 0) {
        iVar13 = 0;
        do {
          if ((int)param_4[1] == 0) {
            local_198 = (ulonglong *)0x0;
          }
          else {
            if ((local_1e1 & 1) == 0) {
              uVar14 = *param_4;
            }
            else {
              uVar14 = *param_4;
              if ((uVar14 & 1) != 0) {
                uVar14 = ((longlong)uVar14 >> 0x18) + (longlong)param_4;
              }
            }
            local_198 = (ulonglong *)(iVar13 * local_1e0 + uVar14);
          }
          if ((int)local_1c8[1] == 0) {
            local_190 = (ulonglong *)0x0;
          }
          else {
            if ((local_1b8 & 1) == 0) {
              uVar14 = *local_1c8;
            }
            else {
              uVar14 = *local_1c8;
              if ((uVar14 & 1) != 0) {
                uVar14 = (longlong)local_1c8 + ((longlong)uVar14 >> 0x18);
              }
            }
            local_190 = (ulonglong *)((longlong)local_1c0 * (longlong)iVar13 + uVar14);
          }
          local_188[0] = 0;
          local_188[1] = 0;
          lVar11 = 0x18;
          do {
            *(undefined8 *)((longlong)local_188 + lVar11) = 0;
            lVar11 = lVar11 + 0x18;
          } while (lVar11 != 0xd8);
          local_b8 = 0;
          local_80 = 0;
          uStack_78 = 0;
          local_90 = 0;
          uStack_88 = 0;
          local_a0 = 0;
          uStack_98 = 0;
          local_b0 = 0;
          uStack_a8 = 0;
          local_70 = 0xffffffff00000000;
          local_68 = local_68 & 0xfc;
          local_1a0 = 0;
          local_1a8 = 0;
          local_1b0 = plVar6[1];
          (**(code **)(*plVar6 + 0x60))(local_188);
          iVar13 = iVar13 + 1;
        } while (iVar13 != iVar4);
      }
      goto LAB_146f0aa37;
    }
  }
  if (param_3 != param_4) {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + (param_2 & 0xffffffff) * 8) + 0x3b)
        & 0x40) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_208);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_208);
  }
LAB_146f0aa37:
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f0ae97 FUN_146f0ae97 body=165 status=ok
// SIG undefined FUN_146f0ae97(void)

void FUN_146f0ae97(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  ulonglong uVar5;
  bool bVar6;
  
  bVar6 = (*(byte *)(param_1 + 0xba) & 1) != 0;
  if (bVar6) {
    FUN_1449b16b6(*(undefined8 *)(param_1 + 0x58),param_2,param_3,1);
  }
  uVar1 = *(ushort *)(param_1 + 0x7c);
  if ((uint)bVar6 < (uint)uVar1) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    uVar5 = (ulonglong)(uint)bVar6;
    puVar4 = (ushort *)((ulonglong)bVar6 * 0x10 + *(longlong *)(param_1 + 0x40) + 8);
    do {
      lVar3 = *(longlong *)(lVar2 + uVar5 * 8);
      lVar3 = (ulonglong)*puVar4 * (longlong)*(int *)(lVar3 + 0x34) +
              (longlong)*(int *)(lVar3 + 0x44);
      FUN_146f0af3c(param_1,uVar5 & 0xffffffff,lVar3 + param_2,param_3 + lVar3);
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 8;
    } while (uVar1 != uVar5);
  }
  return;
}



// FUNCTION 146f0af3c FUN_146f0af3c body=798 status=ok
// SIG undefined FUN_146f0af3c(void)

void FUN_146f0af3c(longlong param_1,ulonglong param_2,ulonglong *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong *local_60;
  int local_58;
  undefined4 local_54;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar14 = (param_2 & 0xffffffff) * 0x10;
  lVar13 = *(longlong *)(param_1 + 0x10) + lVar14;
  puVar6 = *(undefined **)(*(longlong *)(param_1 + 0x10) + lVar14);
  if (puVar6 == &DAT_14c99c038) {
    if ((*(byte *)(*(longlong *)(*(longlong *)(lVar13 + 8) + 0x10) + 0xb9) & 2) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
  }
  else if (puVar6 == &DAT_14c99bf88) {
    lVar13 = *(longlong *)(lVar13 + 8);
    puVar7 = *(undefined8 **)(*(longlong *)(lVar13 + 0x38) + 0x10);
    if (((undefined *)*puVar7 == &DAT_14c99c038) &&
       ((*(byte *)(*(longlong *)(lVar13 + 0x38) + 0xb9) & 2) == 0)) {
      uVar8 = *(undefined8 *)(puVar7[1] + 0x10);
      plVar1 = (longlong *)(lVar13 + 0x18);
      lVar14 = FUN_1446e6bbc();
      if (((*(longlong *)(lVar13 + 0x18) == 0) ||
          (cVar9 = FUN_144729dda(lVar13 + 0x20), cVar9 == '\0')) && (*(int *)(lVar13 + 0x30) != 0))
      {
        lVar10 = FUN_14007daa4(plVar1,0,0);
        if (lVar10 == 0) {
LAB_146f0b11d:
          if (*plVar1 != 0) {
            *plVar1 = 0;
            *(undefined8 *)(lVar13 + 0x20) = 0;
          }
        }
        else {
          lVar11 = *(longlong *)(lVar10 + 8);
          if (*(ulonglong *)(lVar14 + 8) == 0) {
            bVar16 = lVar11 != 0;
            if (lVar11 != lVar14 && bVar16) {
              do {
                lVar11 = *(longlong *)(lVar11 + 0x30);
                bVar16 = lVar11 != 0;
                if (lVar11 == lVar14) break;
              } while (lVar11 != 0);
            }
            if (!bVar16) goto LAB_146f0b11d;
          }
          else if ((*(ulonglong *)(lVar11 + 0x18) & *(ulonglong *)(lVar14 + 8)) == 0)
          goto LAB_146f0b11d;
          *plVar1 = lVar10;
        }
      }
      lVar14 = *plVar1;
      bVar2 = *(byte *)(lVar14 + 0x70);
      (**(code **)(**(longlong **)(lVar14 + 0x78) + 0x178))();
      iVar4 = *(int *)(*(longlong *)(lVar14 + 0x78) + 0x34);
      lVar14 = FUN_1446e6bbc();
      if (((*plVar1 == 0) || (cVar9 = FUN_144729dda(lVar13 + 0x20), cVar9 == '\0')) &&
         (*(int *)(lVar13 + 0x30) != 0)) {
        lVar10 = FUN_14007daa4(plVar1,0,0);
        if (lVar10 == 0) {
LAB_146f0b1c0:
          if (*plVar1 != 0) {
            *plVar1 = 0;
            *(undefined8 *)(lVar13 + 0x20) = 0;
          }
        }
        else {
          lVar11 = *(longlong *)(lVar10 + 8);
          if (*(ulonglong *)(lVar14 + 8) == 0) {
            bVar16 = lVar11 != 0;
            if (lVar11 != lVar14 && bVar16) {
              do {
                lVar11 = *(longlong *)(lVar11 + 0x30);
                bVar16 = lVar11 != 0;
                if (lVar11 == lVar14) break;
              } while (lVar11 != 0);
            }
            if (!bVar16) goto LAB_146f0b1c0;
          }
          else if ((*(ulonglong *)(lVar11 + 0x18) & *(ulonglong *)(lVar14 + 8)) == 0)
          goto LAB_146f0b1c0;
          *plVar1 = lVar10;
        }
      }
      lVar13 = *plVar1;
      bVar3 = *(byte *)(lVar13 + 0x70);
      local_54 = (**(code **)(**(longlong **)(lVar13 + 0x78) + 0x178))();
      local_68 = *(longlong *)(lVar13 + 0x78);
      local_58 = *(int *)(local_68 + 0x34);
      iVar5 = (int)param_4[1];
      local_60 = param_3;
      local_50 = bVar3;
      FUN_144a8a902(&local_68,iVar5);
      if (iVar5 != 0) {
        iVar15 = 0;
        do {
          if ((int)param_4[1] == 0) {
            lVar13 = 0;
          }
          else {
            if ((bVar2 & 1) == 0) {
              uVar12 = *param_4;
            }
            else {
              uVar12 = *param_4;
              if ((uVar12 & 1) != 0) {
                uVar12 = ((longlong)uVar12 >> 0x18) + (longlong)param_4;
              }
            }
            lVar13 = (longlong)iVar15 * (longlong)iVar4 + uVar12;
          }
          if ((int)local_60[1] == 0) {
            lVar14 = 0;
          }
          else {
            if ((local_50 & 1) == 0) {
              uVar12 = *local_60;
            }
            else {
              uVar12 = *local_60;
              if ((uVar12 & 1) != 0) {
                uVar12 = (longlong)local_60 + ((longlong)uVar12 >> 0x18);
              }
            }
            lVar14 = (longlong)local_58 * (longlong)iVar15 + uVar12;
          }
          FUN_146f0ae97(uVar8,lVar14,lVar13);
          iVar15 = iVar15 + 1;
        } while (iVar5 != iVar15);
      }
      goto LAB_146f0b294;
    }
  }
  if (param_3 != param_4) {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + (param_2 & 0xffffffff) * 8) + 0x3b)
        & 0x40) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
LAB_146f0b294:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f0b2bc FUN_146f0b2bc body=938 status=ok
// SIG undefined FUN_146f0b2bc(void)

ulonglong FUN_146f0b2bc(longlong param_1,ulonglong param_2,ulonglong *param_3,ulonglong *param_4,
                       longlong *param_5)

{
  longlong *plVar1;
  uint *puVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 auStack_a8 [47];
  byte local_79;
  ulonglong *local_78;
  longlong local_70;
  longlong local_68;
  ulonglong *local_60;
  int local_58;
  undefined4 local_54;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar21 = *(longlong *)(param_1 + 8);
  param_2 = param_2 & 0xffffffff;
  lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8 + param_2 * 0x10);
  plVar1 = (longlong *)(lVar20 + 0x18);
  local_78 = param_4;
  lVar10 = FUN_1446e6bbc();
  if (((*(longlong *)(lVar20 + 0x18) == 0) || (cVar8 = FUN_144729dda(lVar20 + 0x20), cVar8 == '\0'))
     && (*(int *)(lVar20 + 0x30) != 0)) {
    lVar11 = FUN_14007daa4(plVar1,0,0);
    if (lVar11 == 0) {
LAB_146f0b378:
      if (*plVar1 != 0) {
        *plVar1 = 0;
        *(undefined8 *)(lVar20 + 0x20) = 0;
      }
    }
    else {
      lVar13 = *(longlong *)(lVar11 + 8);
      if (*(ulonglong *)(lVar10 + 8) == 0) {
        bVar22 = lVar13 != 0;
        if (lVar13 != lVar10 && bVar22) {
          do {
            lVar13 = *(longlong *)(lVar13 + 0x30);
            bVar22 = lVar13 != 0;
            if (lVar13 == lVar10) break;
          } while (lVar13 != 0);
        }
        if (!bVar22) goto LAB_146f0b378;
      }
      else if ((*(ulonglong *)(lVar13 + 0x18) & *(ulonglong *)(lVar10 + 8)) == 0)
      goto LAB_146f0b378;
      *plVar1 = lVar11;
    }
  }
  lVar10 = *plVar1;
  local_79 = *(byte *)(lVar10 + 0x70);
  (**(code **)(**(longlong **)(lVar10 + 0x78) + 0x178))();
  local_70 = (longlong)*(int *)(*(longlong *)(lVar10 + 0x78) + 0x34);
  lVar10 = FUN_1446e6bbc();
  if (((*plVar1 != 0) && (cVar8 = FUN_144729dda(lVar20 + 0x20), cVar8 != '\0')) ||
     (*(int *)(lVar20 + 0x30) == 0)) goto LAB_146f0b42d;
  lVar11 = FUN_14007daa4(plVar1,0,0);
  if (lVar11 == 0) {
LAB_146f0b421:
    if (*plVar1 != 0) {
      *plVar1 = 0;
      *(undefined8 *)(lVar20 + 0x20) = 0;
    }
  }
  else {
    lVar13 = *(longlong *)(lVar11 + 8);
    if (*(ulonglong *)(lVar10 + 8) == 0) {
      bVar22 = lVar13 != 0;
      if (lVar13 != lVar10 && bVar22) {
        do {
          lVar13 = *(longlong *)(lVar13 + 0x30);
          bVar22 = lVar13 != 0;
          if (lVar13 == lVar10) break;
        } while (lVar13 != 0);
      }
      if (!bVar22) goto LAB_146f0b421;
    }
    else if ((*(ulonglong *)(lVar13 + 0x18) & *(ulonglong *)(lVar10 + 8)) == 0) goto LAB_146f0b421;
    *plVar1 = lVar11;
  }
LAB_146f0b42d:
  lVar10 = *plVar1;
  bVar3 = *(byte *)(lVar10 + 0x70);
  local_54 = (**(code **)(**(longlong **)(lVar10 + 0x78) + 0x178))();
  local_68 = *(longlong *)(lVar10 + 0x78);
  local_58 = *(int *)(local_68 + 0x34);
  uVar5 = (uint)local_78[1];
  uVar6 = (uint)param_3[1];
  uVar16 = CONCAT71((int7)((ulonglong)param_3 >> 8),uVar5 == uVar6);
  local_60 = param_3;
  local_50 = bVar3;
  if ((uVar5 != uVar6) && (FUN_144a8a902(&local_68,uVar5), uVar5 < uVar6)) {
    uVar17 = (uint)*(ushort *)(lVar21 + 2 + param_2 * 4);
    if (uVar5 + 1 < uVar17) {
      uVar9 = uVar5 + 1 + (uint)*(ushort *)(lVar21 + param_2 * 4);
      uVar14 = (ulonglong)*(uint *)((longlong)param_5 + 0xc) - 1;
      uVar15 = ((ulonglong)(uVar17 + ~uVar5) + (ulonglong)uVar9) - 1;
      if (uVar15 < uVar14) {
        uVar14 = uVar15;
      }
      uVar15 = uVar14 >> 5 & 0x7ffffff;
      uVar17 = (uint)uVar15;
      if (uVar9 >> 5 <= uVar17) {
        lVar10 = *param_5;
        uVar18 = -1 << ((byte)uVar9 & 0x1f);
        uVar12 = (ulonglong)(uVar9 >> 5);
        do {
          uVar19 = 0xffffffff;
          if (uVar15 == uVar12) {
            uVar19 = 0xffffffff >> (~(byte)uVar14 & 0x1f);
          }
          puVar2 = (uint *)(lVar10 + uVar12 * 4);
          *puVar2 = *puVar2 & ~(uVar19 & uVar18);
          uVar12 = uVar12 + 1;
          uVar18 = 0xffffffff;
        } while (uVar17 + ((uVar9 >> 5) - (uVar9 >> 5)) + 1 != uVar12);
      }
    }
  }
  if (uVar5 != 0) {
    uVar7 = *(undefined8 *)(lVar20 + 0x38);
    uVar4 = *(ushort *)(lVar21 + param_2 * 4);
    uVar17 = 0;
    do {
      if ((int)local_78[1] == 0) {
        lVar21 = 0;
      }
      else {
        if ((local_79 & 1) == 0) {
          uVar14 = *local_78;
        }
        else {
          uVar14 = *local_78;
          if ((uVar14 & 1) != 0) {
            uVar14 = ((longlong)uVar14 >> 0x18) + (longlong)local_78;
          }
        }
        lVar21 = (int)uVar17 * local_70 + uVar14;
      }
      if ((int)local_60[1] == 0) {
        lVar20 = 0;
      }
      else {
        if ((local_50 & 1) == 0) {
          uVar14 = *local_60;
        }
        else {
          uVar14 = *local_60;
          if ((uVar14 & 1) != 0) {
            uVar14 = (longlong)local_60 + ((longlong)uVar14 >> 0x18);
          }
        }
        lVar20 = (longlong)local_58 * (longlong)(int)uVar17 + uVar14;
      }
      if ((uVar6 <= uVar17) || (cVar8 = FUN_146f0a5c9(uVar7,lVar20,lVar21), cVar8 == '\0')) {
        uVar9 = (uVar17 / 0x3f) * -0x3f + uVar4 + 1 + uVar17;
        puVar2 = (uint *)(*param_5 + (ulonglong)(uVar9 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar9 & 0x1f);
        FUN_146f0ae97(uVar7,lVar20,lVar21);
        uVar16 = 0;
      }
      uVar17 = uVar17 + 1;
    } while (uVar5 != uVar17);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffffff;
}



// FUNCTION 146f0b668 FUN_146f0b668 body=46 status=ok
// SIG undefined FUN_146f0b668(void)

longlong FUN_146f0b668(longlong param_1)

{
  FUN_140f23ff6();
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  return param_1;
}



// FUNCTION 146f0b696 FUN_146f0b696 body=145 status=ok
// SIG undefined FUN_146f0b696(void)

longlong FUN_146f0b696(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 != param_2) {
    FUN_140cae46a(param_1);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    FUN_140cae504(param_1 + 0x58,param_2 + 0x58);
    FUN_140cae59e(param_1 + 0xa8,param_2 + 0xa8);
    uVar1 = *(undefined8 *)(param_2 + 0x100);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
    *(undefined8 *)(param_1 + 0x100) = uVar1;
    *(undefined8 *)(param_1 + 0x105) = *(undefined8 *)(param_2 + 0x105);
    if ((*(uint *)(param_1 + 0x110) & 0x3fffffff) != 0) {
      if ((*(byte *)(param_1 + 0x114) & 1) == 0) {
        *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x80000000;
      }
      *(undefined8 *)(param_1 + 0x114) = 0xffffffffffffffff;
    }
  }
  return param_1;
}



// FUNCTION 146f0b728 FUN_146f0b728 body=1119 status=ok
// SIG undefined FUN_146f0b728(void)

void FUN_146f0b728(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  longlong lVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  iVar16 = DAT_14c999400;
  lVar3 = DAT_14c9993f8;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (DAT_14c999408 == '\x01') {
    lVar10 = (longlong)DAT_14c999400;
    if (1 < lVar10) {
      memset(local_348,0,0x2f0);
      local_358 = lVar3;
      local_350 = lVar10 * 0x10 + lVar3 + -0x10;
      fVar25 = logf((float)iVar16);
      local_348[0] = (int)(longlong)(fVar25 + fVar25);
      plVar6 = &local_358;
      do {
        puVar11 = (ulonglong *)*plVar6;
        puVar9 = (ulonglong *)plVar6[1];
        iVar16 = (int)plVar6[2];
        iVar12 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar11) >> 4);
        uVar13 = (ulonglong)(iVar12 + 1);
        puVar8 = puVar11;
        puVar7 = puVar11;
        puVar14 = puVar9;
        if (iVar16 != 0) {
LAB_146f0b7e1:
          if (8 < (int)(uint)uVar13) {
            uVar20 = (ulonglong)((uint)uVar13 >> 1);
            uVar13 = puVar8[uVar20 * 2];
            uVar1 = (puVar8 + uVar20 * 2)[1];
            uVar2 = puVar8[1];
            puVar8[uVar20 * 2] = *puVar8;
            (puVar8 + uVar20 * 2)[1] = uVar2;
            *puVar8 = uVar13;
            puVar8[1] = uVar1;
            puVar21 = puVar14 + 2;
            puVar7 = puVar8;
            do {
              puVar5 = puVar7 + 2;
              puVar15 = puVar7 + 2;
              do {
                puVar7 = puVar15;
                puVar23 = puVar5;
                if (puVar14 < puVar7) break;
                puVar5 = puVar23 + 2;
                puVar15 = puVar7 + 2;
              } while (*puVar7 <= *puVar8);
              puVar5 = puVar21 + -4;
              do {
                puVar15 = puVar21;
                puVar22 = puVar5;
                puVar21 = puVar15 + -2;
                if (puVar21 <= puVar8) break;
                puVar5 = puVar22 + -2;
              } while (*puVar8 <= *puVar21);
              if (puVar21 < puVar7) goto LAB_146f0b88b;
              uVar13 = *puVar7;
              uVar1 = puVar7[1];
              uVar2 = puVar15[-1];
              *puVar7 = *puVar21;
              puVar7[1] = uVar2;
              *puVar21 = uVar13;
              puVar15[-1] = uVar1;
            } while( true );
          }
          if (puVar8 < puVar14) {
            do {
              puVar11 = puVar8;
              if (puVar8 + 2 <= puVar14) {
                uVar13 = *puVar8;
                puVar9 = puVar8 + 2;
                do {
                  if (uVar13 < *puVar9) {
                    puVar11 = puVar9;
                    uVar13 = *puVar9;
                  }
                  puVar9 = puVar9 + 2;
                } while (puVar9 <= puVar14);
              }
              local_58 = *puVar11;
              uStack_50 = puVar11[1];
              uVar1 = local_58;
              uVar2 = uStack_50;
              uVar13 = puVar14[1];
              *puVar11 = *puVar14;
              puVar11[1] = uVar13;
              local_58._4_4_ = (undefined4)(local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)(uStack_50 >> 0x20);
              *(undefined4 *)puVar14 = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar14 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_50._4_4_;
              puVar14 = puVar14 + -2;
              local_58 = uVar1;
              uStack_50 = uVar2;
            } while (puVar8 < puVar14);
          }
          goto LAB_146f0bb47;
        }
LAB_146f0b935:
        iVar16 = (int)uVar13;
        if (iVar16 != 0) {
          iVar12 = (iVar12 - (iVar12 + -1 >> 0x1f)) + -1 >> 1;
          iVar19 = iVar12;
joined_r0x000146f0b95c:
          do {
            iVar18 = iVar12 * 2 + 1;
            if (iVar18 < iVar16) {
              iVar17 = iVar12 * 2 + 2;
              if ((iVar17 < iVar16) &&
                 (puVar7[(longlong)iVar18 * 2] <= puVar7[(longlong)iVar17 * 2])) {
                iVar18 = iVar17;
              }
              if (puVar7[(longlong)iVar12 * 2] < puVar7[(longlong)iVar18 * 2]) {
                puVar14 = puVar7 + (longlong)iVar12 * 2;
                puVar11 = puVar7 + (longlong)iVar18 * 2;
                local_58 = *puVar14;
                uStack_50 = puVar14[1];
                uVar2 = local_58;
                uVar20 = uStack_50;
                uVar1 = puVar11[1];
                *puVar14 = *puVar11;
                puVar14[1] = uVar1;
                local_58._4_4_ = (undefined4)(local_58 >> 0x20);
                uStack_50._4_4_ = (undefined4)(uStack_50 >> 0x20);
                *(undefined4 *)puVar11 = (undefined4)local_58;
                *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
                *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
                *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
                local_58 = uVar2;
                uStack_50 = uVar20;
                iVar12 = iVar18;
                goto joined_r0x000146f0b95c;
              }
            }
            bVar24 = iVar19 != 0;
            iVar12 = iVar19 + -1;
            iVar19 = iVar12;
          } while (bVar24);
          if (1 < iVar16) {
            uVar13 = uVar13 - 1;
            local_58 = *puVar7;
            uStack_50 = puVar7[1];
            uVar2 = local_58;
            uVar20 = uStack_50;
            uVar1 = (puVar7 + uVar13 * 2)[1];
            *puVar7 = puVar7[uVar13 * 2];
            puVar7[1] = uVar1;
            local_58._4_4_ = (undefined4)(local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)(uStack_50 >> 0x20);
            puVar14 = puVar7 + uVar13 * 2;
            *(undefined4 *)puVar14 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar14 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_50._4_4_;
            local_58 = uVar2;
            uStack_50 = uVar20;
            if (iVar16 != 2) {
              do {
                iVar16 = 0;
                iVar19 = 1;
                iVar12 = 0;
                do {
                  iVar16 = iVar16 + 2;
                  iVar18 = iVar19;
                  if (((longlong)iVar16 < (longlong)uVar13) &&
                     (puVar7[(longlong)iVar19 * 2] <= puVar7[(longlong)iVar16 * 2])) {
                    iVar18 = iVar16;
                  }
                  if (puVar7[(longlong)iVar18 * 2] <= puVar7[(longlong)iVar12 * 2]) break;
                  puVar14 = puVar7 + (longlong)iVar12 * 2;
                  puVar11 = puVar7 + (longlong)iVar18 * 2;
                  uVar1 = *puVar14;
                  uVar2 = puVar14[1];
                  uVar20 = puVar11[1];
                  *puVar14 = *puVar11;
                  puVar14[1] = uVar20;
                  *puVar11 = uVar1;
                  puVar11[1] = uVar2;
                  iVar16 = iVar18 * 2;
                  iVar19 = iVar18 * 2 + 1;
                  iVar12 = iVar18;
                } while ((longlong)iVar19 < (longlong)uVar13);
                uVar1 = uVar13 - 1;
                local_58 = *puVar7;
                uStack_50 = puVar7[1];
                uVar20 = local_58;
                uVar4 = uStack_50;
                uVar2 = (puVar7 + uVar1 * 2)[1];
                *puVar7 = puVar7[uVar1 * 2];
                puVar7[1] = uVar2;
                local_58._4_4_ = (undefined4)(local_58 >> 0x20);
                uStack_50._4_4_ = (undefined4)(uStack_50 >> 0x20);
                puVar14 = puVar7 + uVar1 * 2;
                *(undefined4 *)puVar14 = (undefined4)local_58;
                *(undefined4 *)((longlong)puVar14 + 4) = local_58._4_4_;
                *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_50;
                *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_50._4_4_;
                bVar24 = 2 < uVar13;
                uVar13 = uVar1;
                local_58 = uVar20;
                uStack_50 = uVar4;
              } while (bVar24);
            }
          }
        }
LAB_146f0bb47:
        plVar6 = plVar6 + -3;
      } while (&local_358 <= plVar6);
    }
    DAT_14c999408 = '\0';
  }
  if ((local_40 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_146f0b88b:
  local_58 = *puVar8;
  uStack_50 = puVar8[1];
  uVar1 = local_58;
  uVar2 = uStack_50;
  uVar13 = puVar15[-1];
  *puVar8 = *puVar21;
  puVar8[1] = uVar13;
  local_58._4_4_ = (undefined4)(local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)(uStack_50 >> 0x20);
  *(undefined4 *)puVar21 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar15 + -0xc) = local_58._4_4_;
  *(undefined4 *)(puVar15 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar15 + -4) = uStack_50._4_4_;
  iVar16 = iVar16 + -1;
  puVar15 = puVar15 + -4;
  local_58 = uVar1;
  uStack_50 = uVar2;
  if ((longlong)puVar22 - (longlong)puVar11 < (longlong)puVar9 - (longlong)puVar23) {
    if (puVar7 < puVar14) {
      *plVar6 = (longlong)puVar7;
      plVar6[1] = (longlong)puVar14;
      *(int *)(plVar6 + 2) = iVar16;
      plVar6 = plVar6 + 3;
    }
    puVar7 = puVar8;
    puVar9 = puVar22;
    if (puVar21 <= puVar8 + 2) goto LAB_146f0bb47;
  }
  else {
    if (puVar8 + 2 < puVar21) {
      *plVar6 = (longlong)puVar8;
      plVar6[1] = (longlong)puVar15;
      *(int *)(plVar6 + 2) = iVar16;
      plVar6 = plVar6 + 3;
    }
    puVar8 = puVar23;
    puVar15 = puVar14;
    puVar9 = puVar14;
    if (puVar14 <= puVar7) goto LAB_146f0bb47;
  }
  iVar12 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar8) >> 4);
  uVar13 = (ulonglong)(iVar12 + 1);
  puVar11 = puVar8;
  puVar8 = puVar7;
  puVar14 = puVar15;
  if (iVar16 == 0) goto LAB_146f0b935;
  goto LAB_146f0b7e1;
}



// FUNCTION 146f0bb88 FUN_146f0bb88 body=104 status=ok
// SIG undefined FUN_146f0bb88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f0bb88(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999420) {
    FUN_144b3d300(&DAT_14c999420);
    if (DAT_14c999420 == -1) {
      _DAT_14c999418 = 0;
      _DAT_14c999410 = &PTR_LAB_149f97250;
      _Init_thread_footer(&DAT_14c999420);
      return;
    }
  }
  return;
}



// FUNCTION 146f0bbf0 FUN_146f0bbf0 body=104 status=ok
// SIG undefined FUN_146f0bbf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f0bbf0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999438) {
    FUN_144b3d300(&DAT_14c999438);
    if (DAT_14c999438 == -1) {
      _DAT_14c999430 = 0;
      DAT_14c999428 = &PTR_LAB_149f97280;
      _Init_thread_footer(&DAT_14c999438);
      return;
    }
  }
  return;
}



// FUNCTION 146f0bc6e FUN_146f0bc6e body=57 status=ok
// SIG undefined FUN_146f0bc6e(void)

undefined8 * FUN_146f0bc6e(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  param_2[1] = 0;
  *param_2 = &PTR_FUN_149f8abd0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  FUN_146f5a79e(param_2,param_3);
  return param_2;
}



// FUNCTION 146f0bca7 FUN_146f0bca7 body=104 status=ok
// SIG undefined FUN_146f0bca7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f0bca7(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999450) {
    FUN_144b3d300(&DAT_14c999450);
    if (DAT_14c999450 == -1) {
      _DAT_14c999448 = 0;
      _DAT_14c999440 = &PTR_LAB_149f972b0;
      _Init_thread_footer(&DAT_14c999450);
      return;
    }
  }
  return;
}



// FUNCTION 146f0bd26 FUN_146f0bd26 body=471 status=ok
// SIG undefined FUN_146f0bd26(void)

longlong * FUN_146f0bd26(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  bool bVar9;
  
  FUN_146f0b728();
  if ((longlong)DAT_14c999400 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    iVar4 = 0;
    plVar7 = DAT_14c9993f8;
    do {
      lVar2 = *plVar7;
      if (*(ulonglong *)(lVar2 + 8) == 0) {
        lVar5 = lVar3;
        bVar9 = lVar3 != 0;
        if (lVar3 != lVar2 && lVar3 != 0) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar9 = lVar5 != 0;
            if (lVar5 == lVar2) break;
          } while (lVar5 != 0);
        }
        if (bVar9) goto LAB_146f0bdbf;
      }
      else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_146f0bdbf:
        iVar6 = (int)((ulonglong)((longlong)plVar7 - (longlong)DAT_14c9993f8) >> 4);
        if ((iVar6 != -1) && (iVar6 < DAT_14c999400)) {
          lVar3 = DAT_14c9993f8[(longlong)iVar6 * 2];
          lVar2 = (longlong)iVar4;
          uVar8 = lVar2 << 4 | 8;
          goto LAB_146f0bdea;
        }
        break;
      }
      plVar7 = plVar7 + 2;
      iVar4 = iVar4 + 1;
    } while (plVar7 != DAT_14c9993f8 + (longlong)DAT_14c999400 * 2);
  }
  goto LAB_146f0be23;
  while( true ) {
    plVar7 = *(longlong **)((longlong)DAT_14c9993f8 + uVar8);
    cVar1 = (**(code **)(*plVar7 + 8))(plVar7,param_1);
    if (cVar1 != '\0') {
      return plVar7;
    }
    lVar2 = lVar2 + 1;
    uVar8 = uVar8 + 0x10;
    if (DAT_14c999400 <= lVar2) break;
LAB_146f0bdea:
    if (*(longlong *)((longlong)DAT_14c9993f8 + (uVar8 - 8)) != lVar3) break;
  }
LAB_146f0be23:
  lVar2 = FUN_1446dcc8c();
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar9 = lVar3 != 0;
    if (lVar3 != lVar2 && bVar9) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar9 = lVar3 != 0;
        if (lVar3 == lVar2) break;
      } while (lVar3 != 0);
    }
    if (bVar9) {
LAB_146f0beab:
      FUN_146f0bb88();
      return (longlong *)&DAT_14c999410;
    }
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) goto LAB_146f0beab;
  lVar2 = FUN_1446e6bbc();
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar9 = lVar3 != 0;
    if (lVar3 != lVar2 && bVar9) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar9 = lVar3 != 0;
        if (lVar3 == lVar2) break;
      } while (lVar3 != 0);
    }
    if (!bVar9) goto LAB_146f0becd;
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_146f0becd;
  FUN_146f0bbf0();
  cVar1 = (**(code **)(DAT_14c999428 + 8))(&DAT_14c999428,param_1);
  if (cVar1 != '\0') {
    return &DAT_14c999428;
  }
LAB_146f0becd:
  FUN_146f0bca7();
  return (longlong *)&DAT_14c999440;
}



// FUNCTION 146f0befe FUN_146f0befe body=139 status=ok
// SIG undefined FUN_146f0befe(void)

longlong FUN_146f0befe(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  FUN_146f0b728();
  lVar1 = FUN_1446dcc8c();
  if ((longlong)DAT_14c999400 == 0) {
    return 0;
  }
  lVar5 = 0;
  iVar4 = 0;
  while (*(longlong *)(DAT_14c9993f8 + lVar5) != lVar1) {
    iVar4 = iVar4 + 1;
    lVar5 = lVar5 + 0x10;
    if ((longlong)DAT_14c999400 << 4 == lVar5) {
      return 0;
    }
  }
  iVar2 = DAT_14c999400 - iVar4;
  if ((iVar2 != 0 && iVar4 <= DAT_14c999400) && iVar4 != -1) {
    plVar3 = (longlong *)(DAT_14c9993f8 + (longlong)iVar4 * 0x10 + 8);
    do {
      if (plVar3[-1] != lVar1) {
        return 0;
      }
      if (*(longlong *)(*plVar3 + 8) == param_1) {
        return *plVar3;
      }
      plVar3 = plVar3 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}



// FUNCTION 146f0bf89 FUN_146f0bf89 body=162 status=ok
// SIG undefined FUN_146f0bf89(void)

void FUN_146f0bf89(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((char)((uVar1 & 2) >> 1) == '\0' && (param_2 & 0x40) != 0) {
    FUN_140033559(".\\Runtime/Experimental/Iris/Core/Private/Iris/ReplicationState/PropertyNetSerializerInfoRegistry.cpp"
                  ,0xd1,
                  L"FNetSerializer: %s is using serializer(s) that HasDynamicState without setting trait: static constexpr bool bHasDynamicState = true; in the serializer declaration."
                  ,*(undefined8 *)(param_1 + 0x78));
  }
  if ((char)((uVar1 & 8) >> 3) == '\0' && (param_2 & 4) != 0) {
    FUN_140033559(".\\Runtime/Experimental/Iris/Core/Private/Iris/ReplicationState/PropertyNetSerializerInfoRegistry.cpp"
                  ,0xd5,
                  L"FNetSerializer: %s is using serializer(s) that has trait HasCustomNetReference without setting trait: static constexpr bool bHasCustomNetReference = true; in the serializer declaration."
                  ,*(undefined8 *)(param_1 + 0x78));
  }
  if ((char)((uVar1 & 4) >> 2) == '\0' && (param_2 >> 0xc & 1) != 0) {
    FUN_140033559(".\\Runtime/Experimental/Iris/Core/Private/Iris/ReplicationState/PropertyNetSerializerInfoRegistry.cpp"
                  ,0xd9,
                  L"FNetSerializer: %s is using serializer(s) that has HasConnectionSpecificSerialization without setting trait: static constexpr bool bHasConnectionSpecificSerialization = true; in the serializer declaration."
                  ,*(undefined8 *)(param_1 + 0x78));
  }
  return;
}



// FUNCTION 146f0c0be FUN_146f0c0be body=59 status=ok
// SIG undefined FUN_146f0c0be(void)

undefined8 FUN_146f0c0be(longlong *param_1)

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



// FUNCTION 146f0c1e0 FUN_146f0c1e0 body=59 status=ok
// SIG undefined FUN_146f0c1e0(void)

undefined8 FUN_146f0c1e0(longlong *param_1)

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



// FUNCTION 146f0c302 FUN_146f0c302 body=59 status=ok
// SIG undefined FUN_146f0c302(void)

undefined8 FUN_146f0c302(longlong *param_1)

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



// FUNCTION 146f0c428 FUN_146f0c428 body=59 status=ok
// SIG undefined FUN_146f0c428(void)

undefined8 FUN_146f0c428(longlong *param_1)

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



// FUNCTION 146f0c54e FUN_146f0c54e body=59 status=ok
// SIG undefined FUN_146f0c54e(void)

undefined8 FUN_146f0c54e(longlong *param_1)

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



// FUNCTION 146f0c670 FUN_146f0c670 body=59 status=ok
// SIG undefined FUN_146f0c670(void)

undefined8 FUN_146f0c670(longlong *param_1)

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



// FUNCTION 146f0c7a2 FUN_146f0c7a2 body=59 status=ok
// SIG undefined FUN_146f0c7a2(void)

undefined8 FUN_146f0c7a2(longlong *param_1)

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



// FUNCTION 146f0c7e8 FUN_146f0c7e8 body=32 status=ok
// SIG undefined FUN_146f0c7e8(void)

void FUN_146f0c7e8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0c856 FUN_146f0c856 body=43 status=ok
// SIG undefined FUN_146f0c856(void)

undefined8 FUN_146f0c856(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0c912 FUN_146f0c912 body=59 status=ok
// SIG undefined FUN_146f0c912(void)

undefined8 FUN_146f0c912(longlong *param_1)

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



// FUNCTION 146f0c958 FUN_146f0c958 body=32 status=ok
// SIG undefined FUN_146f0c958(void)

void FUN_146f0c958(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0c9c6 FUN_146f0c9c6 body=43 status=ok
// SIG undefined FUN_146f0c9c6(void)

undefined8 FUN_146f0c9c6(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0ca82 FUN_146f0ca82 body=59 status=ok
// SIG undefined FUN_146f0ca82(void)

undefined8 FUN_146f0ca82(longlong *param_1)

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



// FUNCTION 146f0cac8 FUN_146f0cac8 body=32 status=ok
// SIG undefined FUN_146f0cac8(void)

void FUN_146f0cac8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0cb36 FUN_146f0cb36 body=43 status=ok
// SIG undefined FUN_146f0cb36(void)

undefined8 FUN_146f0cb36(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0cbf2 FUN_146f0cbf2 body=59 status=ok
// SIG undefined FUN_146f0cbf2(void)

undefined8 FUN_146f0cbf2(longlong *param_1)

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



// FUNCTION 146f0cc38 FUN_146f0cc38 body=32 status=ok
// SIG undefined FUN_146f0cc38(void)

void FUN_146f0cc38(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0cca6 FUN_146f0cca6 body=43 status=ok
// SIG undefined FUN_146f0cca6(void)

undefined8 FUN_146f0cca6(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0cd62 FUN_146f0cd62 body=59 status=ok
// SIG undefined FUN_146f0cd62(void)

undefined8 FUN_146f0cd62(longlong *param_1)

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



// FUNCTION 146f0cda8 FUN_146f0cda8 body=32 status=ok
// SIG undefined FUN_146f0cda8(void)

void FUN_146f0cda8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0ce16 FUN_146f0ce16 body=43 status=ok
// SIG undefined FUN_146f0ce16(void)

undefined8 FUN_146f0ce16(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0ced2 FUN_146f0ced2 body=59 status=ok
// SIG undefined FUN_146f0ced2(void)

undefined8 FUN_146f0ced2(longlong *param_1)

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



// FUNCTION 146f0cf18 FUN_146f0cf18 body=32 status=ok
// SIG undefined FUN_146f0cf18(void)

void FUN_146f0cf18(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0cf86 FUN_146f0cf86 body=43 status=ok
// SIG undefined FUN_146f0cf86(void)

undefined8 FUN_146f0cf86(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0d042 FUN_146f0d042 body=59 status=ok
// SIG undefined FUN_146f0d042(void)

undefined8 FUN_146f0d042(longlong *param_1)

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



// FUNCTION 146f0d088 FUN_146f0d088 body=32 status=ok
// SIG undefined FUN_146f0d088(void)

void FUN_146f0d088(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0d0f6 FUN_146f0d0f6 body=43 status=ok
// SIG undefined FUN_146f0d0f6(void)

undefined8 FUN_146f0d0f6(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0d1b2 FUN_146f0d1b2 body=59 status=ok
// SIG undefined FUN_146f0d1b2(void)

undefined8 FUN_146f0d1b2(longlong *param_1)

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



// FUNCTION 146f0d1f8 FUN_146f0d1f8 body=32 status=ok
// SIG undefined FUN_146f0d1f8(void)

void FUN_146f0d1f8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0d266 FUN_146f0d266 body=43 status=ok
// SIG undefined FUN_146f0d266(void)

undefined8 FUN_146f0d266(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0d2f2 FUN_146f0d2f2 body=74 status=ok
// SIG undefined FUN_146f0d2f2(void)

undefined8 FUN_146f0d2f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_146f0d446(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146f0d364 FUN_146f0d364 body=59 status=ok
// SIG undefined FUN_146f0d364(void)

undefined8 FUN_146f0d364(longlong *param_1)

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



// FUNCTION 146f0d3aa FUN_146f0d3aa body=34 status=ok
// SIG undefined FUN_146f0d3aa(void)

void FUN_146f0d3aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_145a37f7c(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146f0d41a FUN_146f0d41a body=43 status=ok
// SIG undefined FUN_146f0d41a(void)

undefined8 FUN_146f0d41a(undefined8 param_1,int param_2)

{
  FUN_145a37f7c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146f0d446 FUN_146f0d446 body=95 status=ok
// SIG undefined FUN_146f0d446(void)

undefined8 * FUN_146f0d446(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145a37fb9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146f0d4a6(param_1,iVar1);
      FUN_146f0d508(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146f0d4a6 FUN_146f0d4a6 body=98 status=ok
// SIG undefined FUN_146f0d4a6(void)

void FUN_146f0d4a6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 146f0d508 FUN_146f0d508 body=72 status=ok
// SIG undefined FUN_146f0d508(void)

void FUN_146f0d508(longlong param_1,longlong param_2,int param_3)

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
        FUN_146f1190e();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146f0d5a6 FUN_146f0d5a6 body=74 status=ok
// SIG undefined FUN_146f0d5a6(void)

undefined8 FUN_146f0d5a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_146f0d446(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146f0d618 FUN_146f0d618 body=59 status=ok
// SIG undefined FUN_146f0d618(void)

undefined8 FUN_146f0d618(longlong *param_1)

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



// FUNCTION 146f0d65e FUN_146f0d65e body=34 status=ok
// SIG undefined FUN_146f0d65e(void)

void FUN_146f0d65e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_145a37f7c(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146f0d6ce FUN_146f0d6ce body=43 status=ok
// SIG undefined FUN_146f0d6ce(void)

undefined8 FUN_146f0d6ce(undefined8 param_1,int param_2)

{
  FUN_145a37f7c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146f0d78a FUN_146f0d78a body=59 status=ok
// SIG undefined FUN_146f0d78a(void)

undefined8 FUN_146f0d78a(longlong *param_1)

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



// FUNCTION 146f0d7d0 FUN_146f0d7d0 body=32 status=ok
// SIG undefined FUN_146f0d7d0(void)

void FUN_146f0d7d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0d83e FUN_146f0d83e body=43 status=ok
// SIG undefined FUN_146f0d83e(void)

undefined8 FUN_146f0d83e(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0d8fa FUN_146f0d8fa body=59 status=ok
// SIG undefined FUN_146f0d8fa(void)

undefined8 FUN_146f0d8fa(longlong *param_1)

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



// FUNCTION 146f0d940 FUN_146f0d940 body=32 status=ok
// SIG undefined FUN_146f0d940(void)

void FUN_146f0d940(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0d9ae FUN_146f0d9ae body=43 status=ok
// SIG undefined FUN_146f0d9ae(void)

undefined8 FUN_146f0d9ae(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0da6a FUN_146f0da6a body=59 status=ok
// SIG undefined FUN_146f0da6a(void)

undefined8 FUN_146f0da6a(longlong *param_1)

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



// FUNCTION 146f0dab0 FUN_146f0dab0 body=32 status=ok
// SIG undefined FUN_146f0dab0(void)

void FUN_146f0dab0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0db1e FUN_146f0db1e body=43 status=ok
// SIG undefined FUN_146f0db1e(void)

undefined8 FUN_146f0db1e(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0dbca FUN_146f0dbca body=59 status=ok
// SIG undefined FUN_146f0dbca(void)

undefined8 FUN_146f0dbca(longlong *param_1)

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



// FUNCTION 146f0dcfc FUN_146f0dcfc body=59 status=ok
// SIG undefined FUN_146f0dcfc(void)

undefined8 FUN_146f0dcfc(longlong *param_1)

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



// FUNCTION 146f0dd42 FUN_146f0dd42 body=32 status=ok
// SIG undefined FUN_146f0dd42(void)

void FUN_146f0dd42(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0ddb0 FUN_146f0ddb0 body=43 status=ok
// SIG undefined FUN_146f0ddb0(void)

undefined8 FUN_146f0ddb0(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0de6c FUN_146f0de6c body=59 status=ok
// SIG undefined FUN_146f0de6c(void)

undefined8 FUN_146f0de6c(longlong *param_1)

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



// FUNCTION 146f0deb2 FUN_146f0deb2 body=32 status=ok
// SIG undefined FUN_146f0deb2(void)

void FUN_146f0deb2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0df20 FUN_146f0df20 body=43 status=ok
// SIG undefined FUN_146f0df20(void)

undefined8 FUN_146f0df20(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0dfdc FUN_146f0dfdc body=59 status=ok
// SIG undefined FUN_146f0dfdc(void)

undefined8 FUN_146f0dfdc(longlong *param_1)

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



// FUNCTION 146f0e022 FUN_146f0e022 body=32 status=ok
// SIG undefined FUN_146f0e022(void)

void FUN_146f0e022(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0e090 FUN_146f0e090 body=43 status=ok
// SIG undefined FUN_146f0e090(void)

undefined8 FUN_146f0e090(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0e14c FUN_146f0e14c body=59 status=ok
// SIG undefined FUN_146f0e14c(void)

undefined8 FUN_146f0e14c(longlong *param_1)

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



// FUNCTION 146f0e192 FUN_146f0e192 body=32 status=ok
// SIG undefined FUN_146f0e192(void)

void FUN_146f0e192(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0e200 FUN_146f0e200 body=43 status=ok
// SIG undefined FUN_146f0e200(void)

undefined8 FUN_146f0e200(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0e2bc FUN_146f0e2bc body=59 status=ok
// SIG undefined FUN_146f0e2bc(void)

undefined8 FUN_146f0e2bc(longlong *param_1)

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



// FUNCTION 146f0e302 FUN_146f0e302 body=32 status=ok
// SIG undefined FUN_146f0e302(void)

void FUN_146f0e302(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0e370 FUN_146f0e370 body=43 status=ok
// SIG undefined FUN_146f0e370(void)

undefined8 FUN_146f0e370(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0e42c FUN_146f0e42c body=59 status=ok
// SIG undefined FUN_146f0e42c(void)

undefined8 FUN_146f0e42c(longlong *param_1)

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



// FUNCTION 146f0e472 FUN_146f0e472 body=32 status=ok
// SIG undefined FUN_146f0e472(void)

void FUN_146f0e472(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0e4e0 FUN_146f0e4e0 body=43 status=ok
// SIG undefined FUN_146f0e4e0(void)

undefined8 FUN_146f0e4e0(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0e59c FUN_146f0e59c body=59 status=ok
// SIG undefined FUN_146f0e59c(void)

undefined8 FUN_146f0e59c(longlong *param_1)

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



// FUNCTION 146f0e5e2 FUN_146f0e5e2 body=32 status=ok
// SIG undefined FUN_146f0e5e2(void)

void FUN_146f0e5e2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0e650 FUN_146f0e650 body=43 status=ok
// SIG undefined FUN_146f0e650(void)

undefined8 FUN_146f0e650(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0e70c FUN_146f0e70c body=59 status=ok
// SIG undefined FUN_146f0e70c(void)

undefined8 FUN_146f0e70c(longlong *param_1)

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



// FUNCTION 146f0e752 FUN_146f0e752 body=32 status=ok
// SIG undefined FUN_146f0e752(void)

void FUN_146f0e752(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0e7c0 FUN_146f0e7c0 body=43 status=ok
// SIG undefined FUN_146f0e7c0(void)

undefined8 FUN_146f0e7c0(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0e87c FUN_146f0e87c body=59 status=ok
// SIG undefined FUN_146f0e87c(void)

undefined8 FUN_146f0e87c(longlong *param_1)

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



// FUNCTION 146f0e8c2 FUN_146f0e8c2 body=32 status=ok
// SIG undefined FUN_146f0e8c2(void)

void FUN_146f0e8c2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0e930 FUN_146f0e930 body=43 status=ok
// SIG undefined FUN_146f0e930(void)

undefined8 FUN_146f0e930(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0e9ec FUN_146f0e9ec body=59 status=ok
// SIG undefined FUN_146f0e9ec(void)

undefined8 FUN_146f0e9ec(longlong *param_1)

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



// FUNCTION 146f0ea32 FUN_146f0ea32 body=32 status=ok
// SIG undefined FUN_146f0ea32(void)

void FUN_146f0ea32(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0eaa0 FUN_146f0eaa0 body=43 status=ok
// SIG undefined FUN_146f0eaa0(void)

undefined8 FUN_146f0eaa0(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0eb5c FUN_146f0eb5c body=59 status=ok
// SIG undefined FUN_146f0eb5c(void)

undefined8 FUN_146f0eb5c(longlong *param_1)

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



// FUNCTION 146f0eba2 FUN_146f0eba2 body=32 status=ok
// SIG undefined FUN_146f0eba2(void)

void FUN_146f0eba2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0ec10 FUN_146f0ec10 body=43 status=ok
// SIG undefined FUN_146f0ec10(void)

undefined8 FUN_146f0ec10(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0ecda FUN_146f0ecda body=59 status=ok
// SIG undefined FUN_146f0ecda(void)

undefined8 FUN_146f0ecda(longlong *param_1)

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



// FUNCTION 146f0ed20 FUN_146f0ed20 body=32 status=ok
// SIG undefined FUN_146f0ed20(void)

void FUN_146f0ed20(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 146f0ed8e FUN_146f0ed8e body=43 status=ok
// SIG undefined FUN_146f0ed8e(void)

undefined8 FUN_146f0ed8e(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 146f0ee66 FUN_146f0ee66 body=59 status=ok
// SIG undefined FUN_146f0ee66(void)

undefined8 FUN_146f0ee66(longlong *param_1)

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



// FUNCTION 146f0eeac FUN_146f0eeac body=32 status=ok
// SIG undefined FUN_146f0eeac(void)

void FUN_146f0eeac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 146f0ef1a FUN_146f0ef1a body=43 status=ok
// SIG undefined FUN_146f0ef1a(void)

undefined8 FUN_146f0ef1a(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 146f0efec FUN_146f0efec body=59 status=ok
// SIG undefined FUN_146f0efec(void)

undefined8 FUN_146f0efec(longlong *param_1)

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



// FUNCTION 146f0f032 FUN_146f0f032 body=32 status=ok
// SIG undefined FUN_146f0f032(void)

void FUN_146f0f032(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 146f0f0a0 FUN_146f0f0a0 body=43 status=ok
// SIG undefined FUN_146f0f0a0(void)

undefined8 FUN_146f0f0a0(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 146f0f186 FUN_146f0f186 body=59 status=ok
// SIG undefined FUN_146f0f186(void)

undefined8 FUN_146f0f186(longlong *param_1)

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



// FUNCTION 146f0f1cc FUN_146f0f1cc body=32 status=ok
// SIG undefined FUN_146f0f1cc(void)

void FUN_146f0f1cc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 146f0f23a FUN_146f0f23a body=43 status=ok
// SIG undefined FUN_146f0f23a(void)

undefined8 FUN_146f0f23a(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 146f0f320 FUN_146f0f320 body=59 status=ok
// SIG undefined FUN_146f0f320(void)

undefined8 FUN_146f0f320(longlong *param_1)

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



// FUNCTION 146f0f366 FUN_146f0f366 body=32 status=ok
// SIG undefined FUN_146f0f366(void)

void FUN_146f0f366(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146f0f3d4 FUN_146f0f3d4 body=43 status=ok
// SIG undefined FUN_146f0f3d4(void)

undefined8 FUN_146f0f3d4(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146f0f490 FUN_146f0f490 body=59 status=ok
// SIG undefined FUN_146f0f490(void)

undefined8 FUN_146f0f490(longlong *param_1)

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



// FUNCTION 146f0f4d6 FUN_146f0f4d6 body=32 status=ok
// SIG undefined FUN_146f0f4d6(void)

void FUN_146f0f4d6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0f544 FUN_146f0f544 body=43 status=ok
// SIG undefined FUN_146f0f544(void)

undefined8 FUN_146f0f544(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0f600 FUN_146f0f600 body=59 status=ok
// SIG undefined FUN_146f0f600(void)

undefined8 FUN_146f0f600(longlong *param_1)

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



// FUNCTION 146f0f646 FUN_146f0f646 body=32 status=ok
// SIG undefined FUN_146f0f646(void)

void FUN_146f0f646(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0f6b4 FUN_146f0f6b4 body=43 status=ok
// SIG undefined FUN_146f0f6b4(void)

undefined8 FUN_146f0f6b4(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0f770 FUN_146f0f770 body=59 status=ok
// SIG undefined FUN_146f0f770(void)

undefined8 FUN_146f0f770(longlong *param_1)

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



// FUNCTION 146f0f7b6 FUN_146f0f7b6 body=32 status=ok
// SIG undefined FUN_146f0f7b6(void)

void FUN_146f0f7b6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0f824 FUN_146f0f824 body=43 status=ok
// SIG undefined FUN_146f0f824(void)

undefined8 FUN_146f0f824(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0f89a FUN_146f0f89a body=27 status=ok
// SIG undefined FUN_146f0f89a(void)

bool FUN_146f0f89a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0x1f0))(param_2);
  return lVar1 == 0;
}



// FUNCTION 146f0f8f6 FUN_146f0f8f6 body=45 status=ok
// SIG undefined FUN_146f0f8f6(void)

undefined8 * FUN_146f0f8f6(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_149f8a900;
  FUN_146f55ab1(param_2,param_3);
  return param_2;
}



// FUNCTION 146f0f936 FUN_146f0f936 body=74 status=ok
// SIG undefined FUN_146f0f936(void)

undefined8 * FUN_146f0f936(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_149f8c8c0;
  lVar1 = *(longlong *)(param_3 + 0x70);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_3 + 0x70);
    }
  }
  param_2[2] = lVar1;
  return param_2;
}



// FUNCTION 146f0f986 FUN_146f0f986 body=48 status=ok
// SIG undefined FUN_146f0f986(void)

bool FUN_146f0f986(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  cVar1 = FUN_142a6e510(param_2);
  if (cVar1 == '\0') {
    lVar2 = (**(code **)(*param_2 + 0x1f0))(param_2);
    bVar3 = lVar2 != 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



// FUNCTION 146f0f9c2 FUN_146f0f9c2 body=54 status=ok
// SIG undefined FUN_146f0f9c2(void)

undefined8 * FUN_146f0f9c2(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_149f89ef0;
  param_2[3] = 0;
  FUN_146f5879b(param_2,*(undefined8 *)(param_3 + 0x70));
  return param_2;
}



// FUNCTION 146f0fa12 FUN_146f0fa12 body=60 status=ok
// SIG undefined FUN_146f0fa12(void)

undefined8 * FUN_146f0fa12(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *param_2 = &PTR_FUN_149f8ad40;
  param_2[2] = 0;
  *(undefined8 *)((longlong)param_2 + 0x15) = 0;
  FUN_146f5b626(param_2,*(undefined8 *)(param_3 + 0x70));
  return param_2;
}



// FUNCTION 146f0fa54 FUN_146f0fa54 body=23 status=ok
// SIG undefined FUN_146f0fa54(void)

bool FUN_146f0fa54(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_146f0fc36(*(undefined8 *)(param_2 + 0x70));
  return -1 < iVar1;
}



// FUNCTION 146f0fa6c FUN_146f0fa6c body=30 status=ok
// SIG undefined FUN_146f0fa6c(void)

undefined8 FUN_146f0fa6c(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_146f0fc36(*(undefined8 *)(param_2 + 0x70));
  return *(undefined8 *)(param_1 + 0x10 + (longlong)iVar1 * 8);
}



// FUNCTION 146f0fa8e FUN_146f0fa8e body=424 status=ok
// SIG undefined FUN_146f0fa8e(void)

undefined8 * FUN_146f0fa8e(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_146f0fc36(*(undefined8 *)(param_3 + 0x70));
  switch(uVar1) {
  case 0:
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = &PTR_FUN_149f89ef0;
    param_2[3] = 0;
    FUN_146f5879b(param_2,*(undefined8 *)(param_3 + 0x78));
    break;
  case 1:
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = &PTR_FUN_149f8a060;
    param_2[3] = 0;
    FUN_146f5882d(param_2,*(undefined8 *)(param_3 + 0x78));
    break;
  case 2:
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    *param_2 = &PTR_FUN_149f8a1d0;
    param_2[2] = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    FUN_146f588c2(param_2,*(undefined8 *)(param_3 + 0x78));
    break;
  case 3:
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = &PTR_FUN_149f8a340;
    param_2[5] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *(undefined1 *)(param_2 + 4) = 0;
    FUN_146f5894c(param_2,*(undefined8 *)(param_3 + 0x78));
    break;
  case 4:
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = &PTR_FUN_149f89930;
    param_2[3] = 0;
    FUN_146f58576(param_2,*(undefined8 *)(param_3 + 0x78));
    break;
  case 5:
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = &PTR_FUN_149f89aa0;
    param_2[3] = 0;
    FUN_146f58604(param_2,*(undefined8 *)(param_3 + 0x78));
    break;
  case 6:
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    *param_2 = &PTR_FUN_149f89c10;
    param_2[2] = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    FUN_146f58694(param_2,*(undefined8 *)(param_3 + 0x78));
    break;
  case 7:
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = &PTR_FUN_149f89d80;
    param_2[5] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *(undefined1 *)(param_2 + 4) = 0;
    FUN_146f58721(param_2,*(undefined8 *)(param_3 + 0x78));
    break;
  default:
    param_2 = (undefined8 *)0x0;
  }
  return param_2;
}



// FUNCTION 146f0fc36 FUN_146f0fc36 body=763 status=ok
// SIG undefined FUN_146f0fc36(void)

uint FUN_146f0fc36(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  lVar1 = FUN_14475a8dc();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar3 = lVar2 != 0;
    if (lVar2 != lVar1 && bVar3) {
      do {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        bVar3 = lVar2 != 0;
        if (lVar2 == lVar1) break;
      } while (lVar2 != 0);
    }
    if (!bVar3) goto LAB_146f0fc99;
  }
  else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
LAB_146f0fc99:
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = FUN_140e98e1a();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return 1;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return 1;
    }
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = FUN_144a8cc30();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return 2;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return 2;
    }
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = FUN_144aa1f9a();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return 3;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return 3;
    }
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = FUN_14093f012();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return 4;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return 4;
    }
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = FUN_14093f0c0();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return 5;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return 5;
    }
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = FUN_144a7452c();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return 6;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return 6;
    }
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = FUN_144a83f76();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
    }
    else {
      bVar3 = (*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0;
    }
    return bVar3 - 1 | 7;
  }
  return 0;
}



// FUNCTION 146f0ff32 FUN_146f0ff32 body=150 status=ok
// SIG undefined FUN_146f0ff32(void)

undefined4 FUN_146f0ff32(longlong param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  
  if (param_3 < param_2 && param_4 != 0) {
    uVar4 = ((ulonglong)param_4 + (ulonglong)param_3) - 1;
    uVar5 = (ulonglong)param_2 - 1;
    if (uVar4 < (ulonglong)param_2 - 1) {
      uVar5 = uVar4;
    }
    uVar4 = uVar5 >> 5 & 0x7ffffff;
    uVar2 = (uint)uVar4;
    if (param_3 >> 5 <= uVar2) {
      uVar7 = -1 << ((byte)param_3 & 0x1f);
      uVar6 = (ulonglong)(param_3 >> 5);
      while( true ) {
        uVar3 = 0xffffffff;
        if (uVar4 == uVar6) {
          uVar3 = 0xffffffff >> (~(byte)uVar5 & 0x1f);
        }
        uVar3 = uVar3 & uVar7;
        uVar7 = 0xffffffff;
        bVar8 = (*(uint *)(param_1 + uVar6 * 4) & uVar3) != 0;
        uVar1 = CONCAT31((int3)(uVar3 >> 8),bVar8);
        if (bVar8) break;
        bVar8 = (ulonglong)(((param_3 >> 5) - (param_3 >> 5)) + uVar2 + 1) - 1 == uVar6;
        uVar6 = uVar6 + 1;
        if (bVar8) {
          return uVar1;
        }
      }
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 146f10000 FUN_146f10000 body=24 status=ok
// SIG undefined FUN_146f10000(void)

bool FUN_146f10000(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_146f0bd26(*(undefined8 *)(param_2 + 0x78));
  return lVar1 != 0;
}



// FUNCTION 146f10028 FUN_146f10028 body=48 status=ok
// SIG undefined FUN_146f10028(void)

void FUN_146f10028(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 146f10058 FUN_146f10058 body=48 status=ok
// SIG undefined FUN_146f10058(void)

void FUN_146f10058(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,1,1);
  }
  return;
}



// FUNCTION 146f10088 FUN_146f10088 body=110 status=ok
// SIG undefined FUN_146f10088(void)

void FUN_146f10088(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_146f100f8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f100f8 FUN_146f100f8 body=132 status=ok
// SIG undefined FUN_146f100f8(void)

void FUN_146f100f8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 146f1017c FUN_146f1017c body=52 status=ok
// SIG undefined FUN_146f1017c(void)

void FUN_146f1017c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f101b0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  if (iVar1 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  FUN_146f100f8(param_1,*(undefined4 *)(param_1 + 0x48),iVar1);
  return;
}



// FUNCTION 146f101b0 FUN_146f101b0 body=108 status=ok
// SIG undefined FUN_146f101b0(void)

ulonglong FUN_146f101b0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146f1021c FUN_146f1021c body=95 status=ok
// SIG undefined FUN_146f1021c(void)

void FUN_146f1021c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146f1027c FUN_146f1027c body=89 status=ok
// SIG undefined FUN_146f1027c(void)

void FUN_146f1027c(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x58 + *param_1);
  FUN_141422a29(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x58 + (longlong)_Dst),(longlong)iVar2 * 0x58);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146f102d6 FUN_146f102d6 body=62 status=ok
// SIG undefined FUN_146f102d6(void)

void FUN_146f102d6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f10314(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x58,8);
  }
  return;
}



// FUNCTION 146f10314 FUN_146f10314 body=104 status=ok
// SIG undefined FUN_146f10314(void)

ulonglong FUN_146f10314(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x58) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146f1034a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x58,8);
      param_2 = param_2 / 0x58;
    }
  }
LAB_146f1034a:
  return param_2 & 0xffffffff;
}



// FUNCTION 146f1037c FUN_146f1037c body=41 status=ok
// SIG undefined FUN_146f1037c(void)

void FUN_146f1037c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_149f97350;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}



// FUNCTION 146f103a6 FUN_146f103a6 body=36 status=ok
// SIG undefined FUN_146f103a6(void)

undefined8 FUN_146f103a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146f103e6 FUN_146f103e6 body=93 status=ok
// SIG undefined FUN_146f103e6(void)

void FUN_146f103e6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f972e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146f10444 FUN_146f10444 body=126 status=ok
// SIG undefined FUN_146f10444(void)

void FUN_146f10444(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f972e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146f104b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146f104ce FUN_146f104ce body=21 status=ok
// SIG undefined FUN_146f104ce(void)

undefined8 FUN_146f104ce(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146f104e4 FUN_146f104e4 body=34 status=ok
// SIG undefined FUN_146f104e4(void)

undefined8 FUN_146f104e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 146f10506 FUN_146f10506 body=243 status=ok
// SIG undefined FUN_146f10506(void)

void FUN_146f10506(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  int local_60 [14];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446ddc76(&local_68,"NetCore",1);
  uVar2 = FUN_144a52528();
  FUN_14493e38c(uVar2,local_68);
  FUN_146f1063c(local_60,param_1);
  local_60[0] = 0;
  uVar2 = FUN_14118da1c();
  cVar1 = FUN_141369f9a(uVar2,L"UseIrisReplication=",local_60);
  if (cVar1 != '\0') {
    DAT_14c998e28 = (uint)(0 < local_60[0]);
  }
  FUN_146f1071e();
  FUN_146f22b76();
  lVar3 = FUN_144a52528();
  FUN_146f10922(local_60,param_1);
  FUN_145a0ed9c(lVar3 + 0x310,&local_70,local_60);
  FUN_1401cb1ee(local_60);
  *(undefined8 *)(param_1 + 8) = local_70;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f105fa FUN_146f105fa body=61 status=ok
// SIG undefined FUN_146f105fa(void)

void FUN_146f105fa(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = FUN_144a52528();
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_141092d32(lVar1 + 0x310);
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  FUN_146f22f24();
  return;
}



// FUNCTION 146f1063c FUN_146f1063c body=186 status=ok
// SIG undefined FUN_146f1063c(void)

undefined8 FUN_146f1063c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  *local_38 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149f973a0;
  puVar1[3] = param_2;
  puVar1[4] = FUN_146f106f8;
  FUN_1448b6402(&DAT_14c867390,param_1,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f106f8 FUN_146f106f8 body=37 status=ok
// SIG undefined FUN_146f106f8(void)

void FUN_146f106f8(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  FUN_146f58a64();
  FUN_140457ffc(&DAT_14c867390,param_1);
  return;
}



// FUNCTION 146f1071e FUN_146f1071e body=60 status=ok
// SIG undefined FUN_146f1071e(void)

void FUN_146f1071e(void)

{
  DAT_14c999400 = 0;
  if (DAT_14c999404 != 0) {
    FUN_146f10e76();
  }
  DAT_14c999408 = 0;
  FUN_146f58a18();
  FUN_146f09545();
  FUN_146f0b728();
  FUN_146f58a3e();
  return;
}



// FUNCTION 146f1075a FUN_146f1075a body=45 status=ok
// SIG undefined FUN_146f1075a(void)

void FUN_146f1075a(longlong param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_146f58a18();
    FUN_146f58a3e();
    if (*(char *)(param_1 + 0x10) == '\x01') {
      FUN_146f58a64();
      return;
    }
  }
  return;
}



// FUNCTION 146f10788 FUN_146f10788 body=34 status=ok
// SIG undefined FUN_146f10788(void)

undefined8 FUN_146f10788(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146f107c6 FUN_146f107c6 body=93 status=ok
// SIG undefined FUN_146f107c6(void)

void FUN_146f107c6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f973a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146f10824 FUN_146f10824 body=93 status=ok
// SIG undefined FUN_146f10824(void)

void FUN_146f10824(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f973a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146f10882 FUN_146f10882 body=126 status=ok
// SIG undefined FUN_146f10882(void)

void FUN_146f10882(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f973a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146f108f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146f1090c FUN_146f1090c body=21 status=ok
// SIG undefined FUN_146f1090c(void)

undefined8 FUN_146f1090c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146f10922 FUN_146f10922 body=164 status=ok
// SIG undefined FUN_146f10922(void)

LPCRITICAL_SECTION FUN_146f10922(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e41ba0;
  p_Var2 = (_LIST_ENTRY *)FUN_144a3f946();
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  *(undefined ***)p_Var1 = &PTR_FUN_149f97410;
  (p_Var1->ProcessLocksList).Blink = param_2;
  *(code **)&p_Var1->EntryCount = FUN_146f1075a;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 146f109c6 FUN_146f109c6 body=34 status=ok
// SIG undefined FUN_146f109c6(void)

undefined8 FUN_146f109c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146f10a04 FUN_146f10a04 body=93 status=ok
// SIG undefined FUN_146f10a04(void)

void FUN_146f10a04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e41ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f97410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146f10a62 FUN_146f10a62 body=93 status=ok
// SIG undefined FUN_146f10a62(void)

void FUN_146f10a62(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e41ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f97410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146f10ac0 FUN_146f10ac0 body=126 status=ok
// SIG undefined FUN_146f10ac0(void)

void FUN_146f10ac0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e41ba0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f97410;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146f10b2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146f10b4c FUN_146f10b4c body=21 status=ok
// SIG undefined FUN_146f10b4c(void)

undefined8 FUN_146f10b4c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146f10d60 FUN_146f10d60 body=136 status=ok
// SIG undefined FUN_146f10d60(void)

void FUN_146f10d60(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = (longlong)(int)DAT_14c999400 * 0x10;
  if ((longlong)(int)DAT_14c999400 != 0) {
    uVar3 = 0;
    do {
      if ((*(longlong *)(DAT_14c9993f8 + uVar3) == *param_1) &&
         (*(longlong *)(DAT_14c9993f8 + 8 + uVar3) == param_1[1])) {
        if ((int)(~uVar3 >> 4) != 0) {
          return;
        }
        break;
      }
      lVar1 = DAT_14c9993f8 + uVar3;
      uVar3 = uVar3 + 0x10;
    } while (lVar1 + 0x10 != DAT_14c9993f8 + lVar4);
  }
  DAT_14c999400 = DAT_14c999400 + 1;
  if (DAT_14c999404 < DAT_14c999400) {
    FUN_146f10de8();
  }
  lVar1 = param_1[1];
  plVar2 = (longlong *)(DAT_14c9993f8 + lVar4);
  *plVar2 = *param_1;
  plVar2[1] = lVar1;
  return;
}



// FUNCTION 146f10de8 FUN_146f10de8 body=140 status=ok
// SIG undefined FUN_146f10de8(void)

void FUN_146f10de8(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14c999400;
  if (param_1 <= (int)DAT_14c999400) {
    if (DAT_14c999404 == 0) {
      uVar2 = 4;
      if (4 < DAT_14c999400) {
        uVar2 = DAT_14c999400;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14c999400 + ((ulonglong)((longlong)(int)DAT_14c999400 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    DAT_14c999404 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14c9993f8,param_1,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f10e76 FUN_146f10e76 body=64 status=ok
// SIG undefined FUN_146f10e76(void)

void FUN_146f10e76(void)

{
  if (DAT_14c999404 != 0) {
    DAT_14c999404 = 0;
    FUN_1446f8d3c(&DAT_14c9993f8,DAT_14c999400,0,0x10,8);
  }
  return;
}



// FUNCTION 146f10eb6 FUN_146f10eb6 body=105 status=ok
// SIG undefined FUN_146f10eb6(void)

longlong * FUN_146f10eb6(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  *param_1 = param_2;
  if ((param_2 == 0) || ((*(byte *)(param_2 + 0xb8) & 8) == 0)) {
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
  }
  else {
    LOCK();
    *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + 1;
    UNLOCK();
    lVar1 = *param_1;
    param_1[1] = 0;
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
    if (lVar1 != param_2) {
      *param_1 = param_2;
      if ((*(byte *)(param_2 + 0xb8) & 8) != 0) {
        LOCK();
        *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + 1;
        UNLOCK();
      }
      if (lVar1 != 0) {
        FUN_146f11920();
      }
    }
  }
  param_1[1] = param_3;
  return param_1;
}



// FUNCTION 146f10f20 FUN_146f10f20 body=113 status=ok
// SIG undefined FUN_146f10f20(void)

longlong * FUN_146f10f20(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  void *_Dst;
  
  *param_1 = param_2;
  if (param_2 == 0) {
    param_2 = 0;
  }
  else if ((*(byte *)(param_2 + 0xb8) & 8) != 0) {
    LOCK();
    *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + 1;
    UNLOCK();
    param_2 = *param_1;
  }
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
  _Dst = (void *)FUN_14001cc68(*(undefined4 *)(param_2 + 0x70));
  param_1[1] = (longlong)_Dst;
  lVar1 = *param_1;
  memset(_Dst,0,(ulonglong)*(uint *)(lVar1 + 0x70));
  FUN_146f0a054(_Dst,lVar1);
  return param_1;
}



// FUNCTION 146f10f92 FUN_146f10f92 body=77 status=ok
// SIG undefined FUN_146f10f92(void)

longlong * FUN_146f10f92(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(byte *)(*param_1 + 0xb9) & 8) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(*param_1 + 0x88) - 4;
  }
  if ((*(uint *)(param_1[1] + lVar1) & 0x3fffffff) == 0) {
    FUN_146f0a14d(param_1[1],*(undefined8 *)(param_2 + 8));
  }
  else {
    FUN_146f10fe0(param_1);
  }
  return param_1;
}



// FUNCTION 146f10fe0 FUN_146f10fe0 body=97 status=ok
// SIG undefined FUN_146f10fe0(void)

void FUN_146f10fe0(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (((param_1[1] != 0) &&
      (plVar2 = (longlong *)*param_1, param_1 != param_2 && plVar2 != (longlong *)0x0)) &&
     (uVar1 = *(ushort *)((longlong)plVar2 + 0x7c), (ulonglong)uVar1 != 0)) {
    lVar3 = *plVar2;
    lVar4 = param_2[1];
    uVar5 = 0;
    do {
      FUN_146f1109e(param_1,uVar5 & 0xffffffff,(ulonglong)*(uint *)(lVar3 + uVar5 * 8) + lVar4);
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  return;
}



// FUNCTION 146f11042 FUN_146f11042 body=37 status=ok
// SIG undefined FUN_146f11042(void)

void FUN_146f11042(longlong *param_1)

{
  FUN_146f11068();
  if (*param_1 == 0) {
    return;
  }
  FUN_146f11920();
  return;
}



// FUNCTION 146f11068 FUN_146f11068 body=54 status=ok
// SIG undefined FUN_146f11068(void)

void FUN_146f11068(undefined8 *param_1)

{
  if (((*(byte *)(param_1 + 2) & 1) != 0) && (param_1[1] != 0)) {
    FUN_146f0a0dc(param_1[1],*param_1);
    FUN_1400020a8(param_1[1]);
    param_1[1] = 0;
  }
  return;
}


