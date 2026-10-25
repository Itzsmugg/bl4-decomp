// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147d679b2 FUN_147d679b2 body=99 status=ok
// SIG undefined FUN_147d679b2(void)

undefined8 FUN_147d679b2(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147d6794c(param_1,local_30);
  lVar1 = FUN_1479735a4(local_30);
  FUN_14051bf10(local_30);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1477bfa34(lVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d67a16 FUN_147d67a16 body=85 status=ok
// SIG undefined FUN_147d67a16(void)

undefined8 FUN_147d67a16(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147d6794c(param_1,local_30);
  uVar1 = FUN_1479735a4(local_30);
  FUN_14051bf10(local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d67a6c FUN_147d67a6c body=99 status=ok
// SIG undefined FUN_147d67a6c(void)

undefined8 FUN_147d67a6c(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147d6794c(param_1,local_30);
  lVar1 = FUN_1479735a4(local_30);
  FUN_14051bf10(local_30);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1477bfa3c(lVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d67ad0 FUN_147d67ad0 body=85 status=ok
// SIG undefined FUN_147d67ad0(void)

undefined8 FUN_147d67ad0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147d6794c(param_1,local_30);
  uVar1 = FUN_1479735a4(local_30);
  FUN_14051bf10(local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d67b3a FUN_147d67b3a body=261 status=ok
// SIG undefined FUN_147d67b3a(void)

void FUN_147d67b3a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_147d67c40(local_20,&local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d67c40 FUN_147d67c40 body=189 status=ok
// SIG undefined FUN_147d67c40(void)

undefined8 FUN_147d67c40(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,0);
    if (lVar2 != 0) {
      FUN_14051bf56(lVar2,local_30);
      cVar1 = FUN_140e510c6(local_30);
      if (cVar1 == '\0') {
        uVar3 = 0;
      }
      else {
        local_38 = *param_2;
        if ((local_38 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        uVar3 = FUN_147d695ba(local_28 + 0x218,&local_38);
      }
      FUN_14051bf10(local_30);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d67cfe FUN_147d67cfe body=185 status=ok
// SIG undefined FUN_147d67cfe(void)

void FUN_147d67cfe(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
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
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_147d67db8(&local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d67db8 FUN_147d67db8 body=104 status=ok
// SIG undefined FUN_147d67db8(void)

void FUN_147d67db8(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  lVar1 = DAT_14cb0d2b0;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  if ((local_18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_14785689c(lVar1 + 0x1160,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d67e22 FUN_147d67e22 body=261 status=ok
// SIG undefined FUN_147d67e22(void)

void FUN_147d67e22(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_147d67f28(local_20,&local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d67f28 FUN_147d67f28 body=154 status=ok
// SIG undefined FUN_147d67f28(void)

undefined8 FUN_147d67f28(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    uVar2 = 0;
    lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,0);
    if (lVar1 == 0) goto LAB_147d67f6c;
    lVar1 = *(longlong *)(lVar1 + 0x1f0);
    if (lVar1 != 0) {
      local_20 = *param_2;
      if ((local_20 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      uVar2 = FUN_1478568e8(lVar1 + 0x100,&local_20);
      goto LAB_147d67f6c;
    }
  }
  uVar2 = 0;
LAB_147d67f6c:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d67fc4 FUN_147d67fc4 body=261 status=ok
// SIG undefined FUN_147d67fc4(void)

void FUN_147d67fc4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_1457f6bfa(local_20,&local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d680ca FUN_147d680ca body=261 status=ok
// SIG undefined FUN_147d680ca(void)

void FUN_147d680ca(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_147d681d0(local_20,&local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d681d0 FUN_147d681d0 body=183 status=ok
// SIG undefined FUN_147d681d0(void)

undefined8 FUN_147d681d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x430) != 0)) {
    lVar3 = FUN_1449db7f2();
    lVar1 = *(longlong *)(param_1 + 0x430);
    if (lVar1 != 0) {
      uVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_147d68237;
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        local_20 = *param_2;
        if ((local_20 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        uVar4 = FUN_1457f6d4c(lVar1 + 0x138,&local_20);
        goto LAB_147d68237;
      }
    }
  }
  uVar4 = 0;
LAB_147d68237:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6828c FUN_147d6828c body=749 status=ok
// SIG undefined FUN_147d6828c(void)

void FUN_147d6828c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong **pplVar10;
  undefined1 auStack_d8 [32];
  longlong **local_b8;
  undefined2 *local_a8;
  int local_a0;
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  int iStack_7c;
  undefined8 uStack_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar3 = (longlong *)param_2[2];
  local_70 = param_2;
  if (plVar3 != (longlong *)0x0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(plVar3);
  }
  plVar1 = (longlong *)(param_1 + 8);
  local_98 = plVar3;
  if ((plVar3 != (longlong *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(plVar3);
  }
  FUN_147d6c318(plVar1,&local_68,&local_98);
  if ((DAT_14c950c29 == 1) && (*(longlong *)(*plVar1 + 8 + (longlong)(int)local_68 * 0x18) != 0)) {
    FUN_1456cec3c();
  }
  FUN_147d6c388(plVar1,(int)local_68);
  lVar4 = param_2[2];
  plVar3 = (longlong *)(param_1 + 0x58);
  lVar2 = param_1 + 0x68;
  local_68 = (longlong **)&DAT_100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x80) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar9 = *(int *)(param_1 + 0x80);
  }
  uStack_78 = CONCAT44(uStack_4c,uStack_50);
  local_80 = local_58;
  iStack_7c = iStack_54;
  local_90 = (int)local_68;
  uStack_8c = local_68._4_4_;
  uStack_88 = (int)uStack_60;
  uStack_84 = uStack_60._4_4_;
  local_98 = plVar3;
  if ((iStack_54 != iVar9) || (uStack_60 != lVar2)) {
    do {
      plVar1 = (longlong *)(*local_98 + (longlong)iStack_7c * 0x18);
      lVar7 = *plVar1;
      lVar6 = FUN_144a8d392();
      if ((lVar6 == 0) ||
         ((*(int *)(lVar7 + 0x38) < *(int *)(lVar6 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
           lVar6 + 0x30)))) {
        lVar7 = *plVar1;
        if ((lVar7 != 0) &&
           ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar4 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
             lVar7 + 0x30)))) goto LAB_147d683e3;
      }
      else {
        cVar5 = FUN_144a7ff9e(lVar4,*plVar1);
        if (cVar5 != '\0') {
LAB_147d683e3:
          lVar7 = plVar1[1];
          if (*(char *)(lVar7 + 0x10) == '\x01') {
            FUN_14010318a(*plVar1,&local_68,0);
            pplVar10 = (longlong **)&DAT_149dfb77a;
            if ((int)uStack_60 != 0) {
              pplVar10 = local_68;
            }
            FUN_14010318a(local_70,&local_a8,0);
            puVar8 = &DAT_149dfb77a;
            if (local_a0 != 0) {
              puVar8 = local_a8;
            }
            local_b8 = pplVar10;
            FUN_140033559(".\\Runtime/Engine/Private/Subsystems/SubsystemCollection.cpp",0x15b,
                          L"Attempted to deinitialize subsystem %s while iterating subsystems of type %s"
                          ,puVar8);
            if (local_a8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_68 != (longlong **)0x0) {
              FUN_1400020a8();
            }
            lVar7 = plVar1[1];
          }
          local_68 = &local_70;
          FUN_147d6c3e0(lVar7);
        }
      }
      local_80 = local_80 & ~uStack_8c;
      FUN_1449c0562(&local_90);
      param_2 = local_70;
    } while (local_98 != plVar3 || (CONCAT44(uStack_84,uStack_88) != lVar2 || iStack_7c != iVar9));
  }
  (**(code **)(*param_2 + 0x2b0))(param_2);
  local_70[5] = 0;
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d6857a FUN_147d6857a body=104 status=ok
// SIG undefined FUN_147d6857a(void)

void FUN_147d6857a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = DAT_14cb0ad98;
  lVar3 = (longlong)DAT_14cb0ada0;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar2 + lVar4) + 0xa8);
      if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(param_1 + 0x38))) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
          lVar1 + 0x30)) {
        FUN_143729cb8(*(longlong *)(lVar2 + lVar4),param_1);
      }
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 != lVar4);
  }
  return;
}



// FUNCTION 147d685e2 FUN_147d685e2 body=155 status=ok
// SIG undefined FUN_147d685e2(void)

void FUN_147d685e2(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  FUN_14123d74c(0,&local_38,1,0x10);
  lVar1 = local_38;
  lVar3 = (longlong)(int)uStack_30;
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar1 + lVar2) + 0x28) != 0) {
        FUN_147d6828c();
      }
      lVar2 = lVar2 + 8;
    } while (lVar3 * 8 != lVar2);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d6867e FUN_147d6867e body=284 status=ok
// SIG undefined FUN_147d6867e(void)

void FUN_147d6867e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined *puVar8;
  longlong lVar9;
  
  if (DAT_14cb0adb0 != DAT_14cb0addc) {
    lVar6 = *param_1;
    uVar3 = (uint)((ulonglong)lVar6 >> 0x10);
    uVar7 = (uint)lVar6 & 0xffff;
    puVar8 = &DAT_14cb0ade0;
    if (DAT_14cb0ade8 != (undefined *)0x0) {
      puVar8 = DAT_14cb0ade8;
    }
    iVar1 = *(int *)(puVar8 + (ulonglong)
                              (DAT_14cb0adf0 - 1U &
                              (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar7) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    while (iVar1 != -1) {
      lVar9 = DAT_14cb0ada8 + (longlong)iVar1 * 0x20;
      if (*(longlong *)(DAT_14cb0ada8 + (longlong)iVar1 * 0x20) == lVar6) {
        if ((lVar9 + 8U & 0xfffffffffffffff7) == 0) {
          return;
        }
        iVar1 = *(int *)(lVar9 + 0x10);
        if ((longlong)iVar1 != 0) {
          lVar6 = *(longlong *)(lVar9 + 8);
          lVar9 = 0;
          do {
            lVar2 = *(longlong *)(lVar6 + lVar9);
            if ((((lVar2 == 0) || (lVar4 = FUN_14027776c(), lVar4 == 0)) ||
                (*(int *)(lVar2 + 0x38) < *(int *)(lVar4 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
                lVar4 + 0x30)) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined8 *)(lVar6 + lVar9);
            }
            FUN_147d685e2(uVar5);
            lVar9 = lVar9 + 8;
          } while ((longlong)iVar1 * 8 != lVar9);
          lVar6 = *param_1;
        }
        FUN_147d6c692(lVar6);
        return;
      }
      iVar1 = *(int *)(lVar9 + 0x18);
    }
  }
  return;
}



// FUNCTION 147d687a2 FUN_147d687a2 body=56 status=ok
// SIG undefined FUN_147d687a2(void)

void FUN_147d687a2(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_14143efda();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d687cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147d687da FUN_147d687da body=9 status=ok
// SIG undefined FUN_147d687da(void)

void FUN_147d687da(longlong param_1)

{
  FUN_147d6c978(param_1 + 0x18);
  return;
}



// FUNCTION 147d687e4 FUN_147d687e4 body=97 status=ok
// SIG undefined FUN_147d687e4(void)

undefined4 *
FUN_147d687e4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
             undefined1 param_5,longlong *param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  *(undefined1 *)((longlong)param_1 + 9) = param_5;
  *(undefined8 *)(param_1 + 4) = 0;
  *(longlong *)(param_1 + 4) = *param_6;
  *param_6 = 0;
  param_1[6] = (int)param_6[1];
  param_1[7] = *(undefined4 *)((longlong)param_6 + 0xc);
  param_6[1] = 0;
  FUN_1458791db(*param_6,0);
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 147d68846 FUN_147d68846 body=59 status=ok
// SIG undefined FUN_147d68846(void)

int FUN_147d68846(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147a759b8(param_1,iVar1);
  }
  FUN_147d6ce6a((longlong)iVar1 * 0x18 + *param_1);
  return iVar1;
}



// FUNCTION 147d68882 FUN_147d68882 body=128 status=ok
// SIG undefined FUN_147d68882(void)

undefined8 * FUN_147d68882(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 != 0) && ((longlong)*(int *)(param_2 + 0x18) != 0)) {
    lVar5 = *(longlong *)(param_2 + 0x10);
    lVar4 = (longlong)*(int *)(param_2 + 0x18) * 0x18;
    do {
      cVar2 = FUN_144a7c5f6(lVar5);
      if (cVar2 == '\0') {
        if (1 < *(int *)(param_1 + 1)) {
          FUN_140002184(param_1,10);
        }
        puVar3 = (undefined8 *)FUN_1447a1f4a(lVar5);
        iVar1 = *(int *)(puVar3 + 1) + -1;
        if (*(int *)(puVar3 + 1) == 0) {
          iVar1 = 0;
        }
        FUN_1400020e8(param_1,*puVar3,iVar1);
      }
      lVar5 = lVar5 + 0x18;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
  }
  return param_1;
}



// FUNCTION 147d68902 FUN_147d68902 body=255 status=ok
// SIG undefined FUN_147d68902(void)

void FUN_147d68902(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))(*(longlong **)(param_1 + 0x58),&local_38);
  iVar3 = local_38 / 10;
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))(*(longlong **)(param_1 + 0x58),&local_38);
  iVar1 = (int)((ulonglong)((longlong)local_34 * -0x66666667) >> 0x20);
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))(*(longlong **)(param_1 + 0x58),&local_38);
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))(*(longlong **)(param_1 + 0x58),&local_38);
  local_34 = ((iVar1 >> 2) - (iVar1 >> 0x1f)) + local_34;
  iVar1 = *param_2;
  iVar2 = param_2[2];
  iVar5 = iVar3 - iVar1;
  iVar4 = iVar2 - (local_38 - iVar3);
  if (iVar4 != 0 && local_38 - iVar3 <= iVar2 || iVar5 != 0 && iVar1 <= iVar3) {
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    *param_2 = iVar1 + iVar5;
    param_2[2] = iVar2 - iVar5;
  }
  if (local_34 < param_2[3]) {
    param_2[3] = local_34;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d68a02 FUN_147d68a02 body=809 status=ok
// SIG undefined FUN_147d68a02(void)

void FUN_147d68a02(longlong *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  longlong **local_90;
  undefined1 local_82;
  undefined1 local_81;
  undefined4 local_80;
  undefined4 uStack_7c;
  longlong *local_70;
  undefined4 local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) goto LAB_147d68a26;
  local_70 = (longlong *)0x0;
  FUN_14485c47a(&local_70);
  local_58 = local_70;
  uVar3 = FUN_144a78877();
  plVar5 = (longlong *)FUN_147d6ceb0(param_1 + 0xe,uVar3,&local_58);
  *plVar5 = 0;
  plVar7 = (longlong *)plVar5[1];
  if (plVar7 != (longlong *)0x0) {
    plVar5[1] = 0;
    LOCK();
    plVar10 = plVar7 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((longlong)(int)param_3[1] < 1) {
    if ((longlong)(int)param_1[1] != 0) {
      lVar8 = 0;
      do {
        if ((*(int *)(*param_1 + 8 + lVar8) != 0) && (*(longlong *)(*param_1 + lVar8) != 0)) {
          uVar6 = FUN_140e82300();
          FUN_140498822(param_1,uVar6);
          break;
        }
        lVar8 = lVar8 + 0x10;
      } while ((longlong)(int)param_1[1] * 0x10 != lVar8);
    }
    goto LAB_147d68a26;
  }
  local_58 = (longlong *)0x0;
  uStack_50 = 0;
  lVar8 = *param_3;
  lVar11 = (longlong)(int)param_3[1] * 0x10 + lVar8;
  do {
    FUN_144a5dc74(&local_70);
    local_60 = 0;
    FUN_140009b9a(&local_80,lVar8);
    FUN_140008f88(&local_70);
    if ((longlong *)CONCAT44(uStack_7c,local_80) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_7c,local_80) + 0x10))();
    }
    if ((longlong)(int)param_1[1] != 0) {
      lVar9 = 0;
      do {
        if ((*(int *)(*param_1 + 8 + lVar9) != 0) && (*(longlong *)(*param_1 + lVar9) != 0)) {
          FUN_140498822(param_1,&local_70);
          break;
        }
        lVar9 = lVar9 + 0x10;
      } while ((longlong)(int)param_1[1] * 0x10 != lVar9);
    }
    uVar2 = uStack_50;
    lVar9 = (longlong)(int)uStack_50;
    uVar4 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
    if (uStack_50._4_4_ < uVar4) {
      FUN_147a759b8(&local_58,uVar2 & 0xffffffff);
    }
    plVar7 = local_58;
    local_58[lVar9 * 3] = (longlong)local_70;
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*local_70 + 8))();
    }
    *(undefined4 *)(plVar7 + lVar9 * 3 + 1) = local_68;
    *(undefined4 *)(plVar7 + lVar9 * 3 + 2) = local_60;
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*local_70 + 0x10))();
    }
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != lVar11);
  local_70 = (longlong *)((ulonglong)local_70 & 0xffffffff00000000);
  local_80 = 0x3f800000;
  local_81 = 1;
  local_82 = 0;
  plVar7 = (longlong *)FUN_14001cc68(0x30,0x10);
  local_90 = &local_58;
  local_98 = &local_82;
  FUN_147d6d47c(plVar7,&local_70,&local_80,&local_81);
  if (plVar7 == (longlong *)0x0) {
    *plVar5 = 0x10;
    plVar10 = (longlong *)plVar5[1];
    if (plVar10 != (longlong *)0x0) {
      plVar5[1] = 0;
LAB_147d68c8d:
      LOCK();
      plVar5 = plVar10 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      if (plVar7 != (longlong *)0x0) goto LAB_147d68ce9;
    }
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *plVar5 = (longlong)(plVar7 + 2);
    plVar10 = (longlong *)plVar5[1];
    if (plVar7 == plVar10) {
      LOCK();
      plVar5 = plVar7 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    else {
      plVar5[1] = (longlong)plVar7;
      if (plVar10 != (longlong *)0x0) goto LAB_147d68c8d;
    }
LAB_147d68ce9:
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_1458791db(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_147d68a26:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d68d4a FUN_147d68d4a body=38 status=ok
// SIG undefined FUN_147d68d4a(void)

undefined8 FUN_147d68d4a(undefined8 param_1,int param_2)

{
  FUN_147d6593c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d68d70 FUN_147d68d70 body=38 status=ok
// SIG undefined FUN_147d68d70(void)

undefined8 FUN_147d68d70(undefined8 param_1,int param_2)

{
  FUN_1458128aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d68d96 FUN_147d68d96 body=38 status=ok
// SIG undefined FUN_147d68d96(void)

undefined8 FUN_147d68d96(undefined8 param_1,int param_2)

{
  FUN_147d64a02();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d68dbc FUN_147d68dbc body=38 status=ok
// SIG undefined FUN_147d68dbc(void)

undefined8 FUN_147d68dbc(undefined8 param_1,int param_2)

{
  FUN_147d64d0e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d68de2 FUN_147d68de2 body=68 status=ok
// SIG undefined FUN_147d68de2(void)

undefined8 * FUN_147d68de2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aac2e30;
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_1402594a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d68e26 FUN_147d68e26 body=38 status=ok
// SIG undefined FUN_147d68e26(void)

undefined8 FUN_147d68e26(undefined8 param_1,int param_2)

{
  FUN_147d6d87e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d68e4c FUN_147d68e4c body=38 status=ok
// SIG undefined FUN_147d68e4c(void)

undefined8 FUN_147d68e4c(undefined8 param_1,int param_2)

{
  FUN_147d6d87e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d68e72 FUN_147d68e72 body=38 status=ok
// SIG undefined FUN_147d68e72(void)

undefined8 FUN_147d68e72(undefined8 param_1,int param_2)

{
  FUN_147d6d87e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d68e98 FUN_147d68e98 body=38 status=ok
// SIG undefined FUN_147d68e98(void)

undefined8 FUN_147d68e98(undefined8 param_1,int param_2)

{
  FUN_147d6d87e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d68ebe FUN_147d68ebe body=38 status=ok
// SIG undefined FUN_147d68ebe(void)

undefined8 FUN_147d68ebe(undefined8 param_1,int param_2)

{
  FUN_140259454();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d68ee4 FUN_147d68ee4 body=38 status=ok
// SIG undefined FUN_147d68ee4(void)

undefined8 FUN_147d68ee4(undefined8 param_1,int param_2)

{
  FUN_140259454();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d68f0a FUN_147d68f0a body=38 status=ok
// SIG undefined FUN_147d68f0a(void)

undefined8 FUN_147d68f0a(undefined8 param_1,int param_2)

{
  FUN_140259454();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d68f30 FUN_147d68f30 body=38 status=ok
// SIG undefined FUN_147d68f30(void)

undefined8 FUN_147d68f30(undefined8 param_1,int param_2)

{
  FUN_1402594a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d68f56 FUN_147d68f56 body=38 status=ok
// SIG undefined FUN_147d68f56(void)

undefined8 FUN_147d68f56(undefined8 param_1,int param_2)

{
  FUN_1402594a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d68f7c FUN_147d68f7c body=38 status=ok
// SIG undefined FUN_147d68f7c(void)

undefined8 FUN_147d68f7c(undefined8 param_1,int param_2)

{
  FUN_1402594a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d68faa FUN_147d68faa body=42 status=ok
// SIG undefined FUN_147d68faa(void)

undefined8 FUN_147d68faa(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/TextureAllMipDataProviderFactory.h",0x30,
                L"Pure virtual not implemented (%s)",
                L"UTextureAllMipDataProviderFactory::GetInitialMipData");
  return 0;
}



// FUNCTION 147d68fd4 FUN_147d68fd4 body=55 status=ok
// SIG undefined FUN_147d68fd4(void)

undefined8 * FUN_147d68fd4(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/TextureAllMipDataProviderFactory.h",0x36,
                L"Pure virtual not implemented (%s)",
                L"UTextureAllMipDataProviderFactory::GetResourcePostInitState");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 147d69012 FUN_147d69012 body=38 status=ok
// SIG undefined FUN_147d69012(void)

undefined8 FUN_147d69012(undefined8 param_1,int param_2)

{
  FUN_14079057a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d69042 FUN_147d69042 body=38 status=ok
// SIG undefined FUN_147d69042(void)

undefined8 FUN_147d69042(undefined8 param_1,int param_2)

{
  FUN_146406e8c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d69068 FUN_147d69068 body=289 status=ok
// SIG undefined FUN_147d69068(void)

undefined4 * FUN_147d69068(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147d6918a(param_1,local_40);
  FUN_147d69278(param_3,local_38);
  *(undefined4 *)(local_38 + 0xb) = 0xffffffff;
  uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar5 = 1;
  if (3 < uVar3) {
    uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar5 = 1 << ((byte)lVar4 & 0x1f);
  }
  uVar1 = *local_38;
  if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
    uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar6 = (uint)uVar1 & 0xffff;
    uVar3 = *(int *)(param_1 + 0x48) - 1U &
            (uVar6 >> 4) +
            ((uint)uVar1 << 0x10 | uVar6) + (int)((ulonglong)uVar1 >> 0x20) +
            (uVar3 << 0x13 | uVar3 & 0xffff);
    *(uint *)((longlong)local_38 + 0x5c) = uVar3;
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = param_1 + 0x38;
    }
    *(undefined4 *)(local_38 + 0xb) =
         *(undefined4 *)
          (lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         local_40[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar5;
    FUN_147d693dc(param_1);
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6918a FUN_147d6918a body=238 status=ok
// SIG undefined FUN_147d6918a(void)

int * FUN_147d6918a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14488f93c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 147d69278 FUN_147d69278 body=160 status=ok
// SIG undefined FUN_147d69278(void)

undefined8 * FUN_147d69278(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_144a5dc74();
  FUN_144a5dc74(&uStack_50);
  FUN_144a5dc74(&local_38);
  *param_2 = *(undefined8 *)*param_1;
  FUN_147d69368(param_2 + 1,&local_78);
  FUN_147d6931a(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6931a FUN_147d6931a body=78 status=ok
// SIG undefined FUN_147d6931a(void)

void FUN_147d6931a(longlong *param_1)

{
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d69368 FUN_147d69368 body=116 status=ok
// SIG undefined FUN_147d69368(void)

undefined8 * FUN_147d69368(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = param_2[2];
  FUN_14023423e(param_1 + 3,param_2 + 3);
  FUN_14023423e(param_1 + 5,param_2 + 5);
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  *(undefined1 *)((longlong)param_1 + 0x3a) = *(undefined1 *)((longlong)param_2 + 0x3a);
  FUN_14023423e(param_1 + 8,param_2 + 8);
  return param_1;
}



// FUNCTION 147d693dc FUN_147d693dc body=477 status=ok
// SIG undefined FUN_147d693dc(void)

void FUN_147d693dc(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 147d695ba FUN_147d695ba body=76 status=ok
// SIG undefined FUN_147d695ba(void)

void FUN_147d695ba(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1459586ea();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_147d695ce;
    }
  }
  lVar2 = 0;
LAB_147d695ce:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 147d6965c FUN_147d6965c body=54 status=ok
// SIG undefined FUN_147d6965c(void)

undefined1 FUN_147d6965c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147d697d8(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 147d696ba FUN_147d696ba body=59 status=ok
// SIG undefined FUN_147d696ba(void)

undefined8 FUN_147d696ba(longlong *param_1)

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



// FUNCTION 147d69700 FUN_147d69700 body=34 status=ok
// SIG undefined FUN_147d69700(void)

void FUN_147d69700(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_147d69770(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147d69770 FUN_147d69770 body=103 status=ok
// SIG undefined FUN_147d69770(void)

void FUN_147d69770(longlong *param_1)

{
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



// FUNCTION 147d697d8 FUN_147d697d8 body=95 status=ok
// SIG undefined FUN_147d697d8(void)

longlong FUN_147d697d8(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  return param_1;
}



// FUNCTION 147d69850 FUN_147d69850 body=47 status=ok
// SIG undefined FUN_147d69850(void)

void FUN_147d69850(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d69896 FUN_147d69896 body=67 status=ok
// SIG undefined FUN_147d69896(void)

undefined1 FUN_147d69896(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 147d69902 FUN_147d69902 body=59 status=ok
// SIG undefined FUN_147d69902(void)

undefined8 FUN_147d69902(longlong *param_1)

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



// FUNCTION 147d699a0 FUN_147d699a0 body=51 status=ok
// SIG undefined FUN_147d699a0(void)

void FUN_147d699a0(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 147d69a1e FUN_147d69a1e body=86 status=ok
// SIG undefined FUN_147d69a1e(void)

undefined1 FUN_147d69a1e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x20);
    FUN_147d69b9c(param_2 + 0x28,param_3 + 0x28);
    param_2 = param_2 + 0x38;
    param_3 = param_3 + 0x38;
  }
  return 1;
}



// FUNCTION 147d69a9c FUN_147d69a9c body=59 status=ok
// SIG undefined FUN_147d69a9c(void)

undefined8 FUN_147d69a9c(longlong *param_1)

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



// FUNCTION 147d69ae2 FUN_147d69ae2 body=34 status=ok
// SIG undefined FUN_147d69ae2(void)

void FUN_147d69ae2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_147d69b52(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147d69b52 FUN_147d69b52 body=73 status=ok
// SIG undefined FUN_147d69b52(void)

void FUN_147d69b52(longlong *param_1)

{
  FUN_1459c5a44(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
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



// FUNCTION 147d69b9c FUN_147d69b9c body=95 status=ok
// SIG undefined FUN_147d69b9c(void)

undefined8 * FUN_147d69b9c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459c5a44(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147d69bfc(param_1,iVar1);
      FUN_147d69c5e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147d69bfc FUN_147d69bfc body=98 status=ok
// SIG undefined FUN_147d69bfc(void)

void FUN_147d69bfc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147d69c5e FUN_147d69c5e body=52 status=ok
// SIG undefined FUN_147d69c5e(void)

void FUN_147d69c5e(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147d69c92(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 147d69c92 FUN_147d69c92 body=156 status=ok
// SIG undefined FUN_147d69c92(void)

undefined8 * FUN_147d69c92(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 147d69d66 FUN_147d69d66 body=87 status=ok
// SIG undefined FUN_147d69d66(void)

undefined1 FUN_147d69d66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_147d69b9c(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 147d69de6 FUN_147d69de6 body=59 status=ok
// SIG undefined FUN_147d69de6(void)

undefined8 FUN_147d69de6(longlong *param_1)

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



// FUNCTION 147d69e2c FUN_147d69e2c body=34 status=ok
// SIG undefined FUN_147d69e2c(void)

void FUN_147d69e2c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1459c5a08(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 147d69edc FUN_147d69edc body=63 status=ok
// SIG undefined FUN_147d69edc(void)

undefined1 FUN_147d69edc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147d6a006(param_2,param_3);
    param_3 = param_3 + 0x150;
    param_2 = param_2 + 0x150;
  }
  return 1;
}



// FUNCTION 147d69f44 FUN_147d69f44 body=59 status=ok
// SIG undefined FUN_147d69f44(void)

undefined8 FUN_147d69f44(longlong *param_1)

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



// FUNCTION 147d69f90 FUN_147d69f90 body=40 status=ok
// SIG undefined FUN_147d69f90(void)

void FUN_147d69f90(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x150) == '\x01') {
    FUN_1459c596a(param_2);
    *(undefined1 *)(param_2 + 0x150) = 0;
  }
  return;
}



// FUNCTION 147d6a006 FUN_147d6a006 body=342 status=ok
// SIG undefined FUN_147d6a006(void)

longlong FUN_147d6a006(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_147d69b9c(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_147d69b9c(param_1 + 0x30,param_2 + 0x30);
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  FUN_147d69b9c(param_1 + 0x50,param_2 + 0x50);
  FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
  FUN_147d69b9c(param_1 + 0x70,param_2 + 0x70);
  FUN_144a787a6(param_1 + 0x80,param_2 + 0x80);
  FUN_147d69b9c(param_1 + 0x90,param_2 + 0x90);
  FUN_144a787a6(param_1 + 0xa0,param_2 + 0xa0);
  FUN_147d69b9c(param_1 + 0xb0,param_2 + 0xb0);
  FUN_144a787a6(param_1 + 0xc0,param_2 + 0xc0);
  FUN_147d69b9c(param_1 + 0xd0,param_2 + 0xd0);
  FUN_144a787a6(param_1 + 0xe0,param_2 + 0xe0);
  FUN_147d69b9c(param_1 + 0xf0,param_2 + 0xf0);
  FUN_144a787a6(param_1 + 0x100,param_2 + 0x100);
  FUN_147d69b9c(param_1 + 0x110,param_2 + 0x110);
  FUN_144a787a6(param_1 + 0x120,param_2 + 0x120);
  FUN_147d69b9c(param_1 + 0x130,param_2 + 0x130);
  FUN_147d6a15c(param_1 + 0x140,param_2 + 0x140);
  return param_1;
}



// FUNCTION 147d6a15c FUN_147d6a15c body=95 status=ok
// SIG undefined FUN_147d6a15c(void)

undefined8 * FUN_147d6a15c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459c5a83(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147d6a1bc(param_1,iVar1);
      FUN_147d6a21e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147d6a1bc FUN_147d6a1bc body=98 status=ok
// SIG undefined FUN_147d6a1bc(void)

void FUN_147d6a1bc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147d6a21e FUN_147d6a21e body=52 status=ok
// SIG undefined FUN_147d6a21e(void)

void FUN_147d6a21e(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147d6a252(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 147d6a252 FUN_147d6a252 body=151 status=ok
// SIG undefined FUN_147d6a252(void)

undefined8 * FUN_147d6a252(undefined8 *param_1,undefined8 *param_2)

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
    FUN_147d69bfc(param_1 + 2,iVar1,0);
    FUN_147d69c5e(param_1[2],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 147d6a340 FUN_147d6a340 body=54 status=ok
// SIG undefined FUN_147d6a340(void)

undefined1 FUN_147d6a340(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147d6a454(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 147d6a39e FUN_147d6a39e body=59 status=ok
// SIG undefined FUN_147d6a39e(void)

undefined8 FUN_147d6a39e(longlong *param_1)

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



// FUNCTION 147d6a3e4 FUN_147d6a3e4 body=34 status=ok
// SIG undefined FUN_147d6a3e4(void)

void FUN_147d6a3e4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1459c58fa(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147d6a454 FUN_147d6a454 body=95 status=ok
// SIG undefined FUN_147d6a454(void)

longlong FUN_147d6a454(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  return param_1;
}



// FUNCTION 147d6a4cc FUN_147d6a4cc body=47 status=ok
// SIG undefined FUN_147d6a4cc(void)

void FUN_147d6a4cc(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d6a512 FUN_147d6a512 body=67 status=ok
// SIG undefined FUN_147d6a512(void)

undefined1 FUN_147d6a512(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 147d6a57e FUN_147d6a57e body=59 status=ok
// SIG undefined FUN_147d6a57e(void)

undefined8 FUN_147d6a57e(longlong *param_1)

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



// FUNCTION 147d6a61c FUN_147d6a61c body=51 status=ok
// SIG undefined FUN_147d6a61c(void)

void FUN_147d6a61c(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 147d6a68e FUN_147d6a68e body=80 status=ok
// SIG undefined FUN_147d6a68e(void)

undefined1 FUN_147d6a68e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    FUN_144a787a6(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 147d6a706 FUN_147d6a706 body=59 status=ok
// SIG undefined FUN_147d6a706(void)

undefined8 FUN_147d6a706(longlong *param_1)

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



// FUNCTION 147d6a74c FUN_147d6a74c body=34 status=ok
// SIG undefined FUN_147d6a74c(void)

void FUN_147d6a74c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1459c57d0(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147d6a7f2 FUN_147d6a7f2 body=54 status=ok
// SIG undefined FUN_147d6a7f2(void)

undefined1 FUN_147d6a7f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147d6a850 FUN_147d6a850 body=59 status=ok
// SIG undefined FUN_147d6a850(void)

undefined8 FUN_147d6a850(longlong *param_1)

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



// FUNCTION 147d6a896 FUN_147d6a896 body=37 status=ok
// SIG undefined FUN_147d6a896(void)

void FUN_147d6a896(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147d6a94a FUN_147d6a94a body=80 status=ok
// SIG undefined FUN_147d6a94a(void)

undefined1 FUN_147d6a94a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    FUN_144a787a6(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 147d6a9c2 FUN_147d6a9c2 body=59 status=ok
// SIG undefined FUN_147d6a9c2(void)

undefined8 FUN_147d6a9c2(longlong *param_1)

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



// FUNCTION 147d6aa08 FUN_147d6aa08 body=34 status=ok
// SIG undefined FUN_147d6aa08(void)

void FUN_147d6aa08(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1459c584c(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147d6aab8 FUN_147d6aab8 body=63 status=ok
// SIG undefined FUN_147d6aab8(void)

undefined1 FUN_147d6aab8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147d6abe2(param_2,param_3);
    param_3 = param_3 + 0x1f0;
    param_2 = param_2 + 0x1f0;
  }
  return 1;
}



// FUNCTION 147d6ab20 FUN_147d6ab20 body=59 status=ok
// SIG undefined FUN_147d6ab20(void)

undefined8 FUN_147d6ab20(longlong *param_1)

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



// FUNCTION 147d6ab6c FUN_147d6ab6c body=40 status=ok
// SIG undefined FUN_147d6ab6c(void)

void FUN_147d6ab6c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1f0) == '\x01') {
    FUN_1459c588c(param_2);
    *(undefined1 *)(param_2 + 0x1f0) = 0;
  }
  return;
}



// FUNCTION 147d6abe2 FUN_147d6abe2 body=111 status=ok
// SIG undefined FUN_147d6abe2(void)

longlong FUN_147d6abe2(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_147d6a006(param_1 + 0x10,param_2 + 0x10);
  FUN_147d6a454(param_1 + 0x160,param_2 + 0x160);
  FUN_144a787a6(param_1 + 0x1c0,param_2 + 0x1c0);
  FUN_144a787a6(param_1 + 0x1d0,param_2 + 0x1d0);
  FUN_144a787a6(param_1 + 0x1e0,param_2 + 0x1e0);
  return param_1;
}



// FUNCTION 147d6ac9c FUN_147d6ac9c body=96 status=ok
// SIG undefined FUN_147d6ac9c(void)

undefined8 FUN_147d6ac9c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
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
      lVar2 = param_2 + 0x10 + lVar6;
      *(undefined4 *)(lVar2 + -0x10) = *puVar1;
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 4);
      *(undefined4 *)(lVar2 + 0x10) = puVar1[8];
      lVar6 = lVar6 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147d6ad24 FUN_147d6ad24 body=59 status=ok
// SIG undefined FUN_147d6ad24(void)

undefined8 FUN_147d6ad24(longlong *param_1)

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



// FUNCTION 147d6ad6a FUN_147d6ad6a body=38 status=ok
// SIG undefined FUN_147d6ad6a(void)

void FUN_147d6ad6a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147d6adf8 FUN_147d6adf8 body=47 status=ok
// SIG undefined FUN_147d6adf8(void)

void FUN_147d6adf8(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d6ae3e FUN_147d6ae3e body=67 status=ok
// SIG undefined FUN_147d6ae3e(void)

undefined1 FUN_147d6ae3e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 147d6aeaa FUN_147d6aeaa body=59 status=ok
// SIG undefined FUN_147d6aeaa(void)

undefined8 FUN_147d6aeaa(longlong *param_1)

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



// FUNCTION 147d6af48 FUN_147d6af48 body=51 status=ok
// SIG undefined FUN_147d6af48(void)

void FUN_147d6af48(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 147d6af7c FUN_147d6af7c body=136 status=ok
// SIG undefined FUN_147d6af7c(void)

void FUN_147d6af7c(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x2d8);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0xf;
    if (0xf < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0xf < *(uint *)(param_1 + 0x2dc)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x30,0);
      iVar4 = (int)(uVar3 / 0x30);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x2dc) = iVar5;
    FUN_147d6b006(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147d6b006 FUN_147d6b006 body=148 status=ok
// SIG undefined FUN_147d6b006(void)

void FUN_147d6b006(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x2d0);
  if ((uint)param_3 < 0x10) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x30);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x2d0,0,param_3,0x30);
    memmove(*(void **)((longlong)param_1 + 0x2d0),param_1,(longlong)param_2 * 0x30);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x2d0,param_2,param_3,0x30);
  return;
}



// FUNCTION 147d6b09a FUN_147d6b09a body=119 status=ok
// SIG undefined FUN_147d6b09a(void)

void FUN_147d6b09a(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x80);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0xf;
    if (0xf < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0xf < *(uint *)(param_1 + 0x84)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x84) = iVar5;
    FUN_147d6b112(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147d6b112 FUN_147d6b112 body=131 status=ok
// SIG undefined FUN_147d6b112(void)

void FUN_147d6b112(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x78);
  if ((uint)param_3 < 0x10) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x78,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x78),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x78,param_2,param_3,8);
  return;
}



// FUNCTION 147d6b196 FUN_147d6b196 body=119 status=ok
// SIG undefined FUN_147d6b196(void)

void FUN_147d6b196(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x80);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0xf;
    if (0xf < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0xf < *(uint *)(param_1 + 0x84)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x84) = iVar5;
    FUN_147d6b20e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147d6b20e FUN_147d6b20e body=131 status=ok
// SIG undefined FUN_147d6b20e(void)

void FUN_147d6b20e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x78);
  if ((uint)param_3 < 0x10) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x78,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x78),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x78,param_2,param_3,8);
  return;
}



// FUNCTION 147d6b292 FUN_147d6b292 body=84 status=ok
// SIG undefined FUN_147d6b292(void)

void FUN_147d6b292(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
    if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x78),
              (longlong)*(int *)((longlong)param_1 + 0x80) << 3);
      FUN_1446efa72((longlong)param_1 + 0x78,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 147d6b2e6 FUN_147d6b2e6 body=110 status=ok
// SIG undefined FUN_147d6b2e6(void)

void FUN_147d6b2e6(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0xf;
    if (0xf < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0xf < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_147d6b356(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147d6b356 FUN_147d6b356 body=132 status=ok
// SIG undefined FUN_147d6b356(void)

void FUN_147d6b356(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 0x10) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,4);
  return;
}



// FUNCTION 147d6b3da FUN_147d6b3da body=75 status=ok
// SIG undefined FUN_147d6b3da(void)

void FUN_147d6b3da(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x40),
              (longlong)*(int *)((longlong)param_1 + 0x48) << 2);
      FUN_1446efa72((longlong)param_1 + 0x40,0,0,4);
      return;
    }
  }
  return;
}



// FUNCTION 147d6b426 FUN_147d6b426 body=119 status=ok
// SIG undefined FUN_147d6b426(void)

void FUN_147d6b426(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xf8);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0xf;
    if (0xf < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0xf < *(uint *)(param_1 + 0xfc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xfc) = iVar5;
    FUN_147d6b49e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147d6b49e FUN_147d6b49e body=140 status=ok
// SIG undefined FUN_147d6b49e(void)

void FUN_147d6b49e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xf0);
  if ((uint)param_3 < 0x10) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xf0,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0xf0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xf0,param_2,param_3,0x10);
  return;
}



// FUNCTION 147d6b52a FUN_147d6b52a body=119 status=ok
// SIG undefined FUN_147d6b52a(void)

void FUN_147d6b52a(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xf8);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0xf;
    if (0xf < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0xf < *(uint *)(param_1 + 0xfc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xfc) = iVar5;
    FUN_147d6b5a2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147d6b5a2 FUN_147d6b5a2 body=141 status=ok
// SIG undefined FUN_147d6b5a2(void)

void FUN_147d6b5a2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xf0);
  if ((uint)param_3 < 0x10) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xf0,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0xf0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xf0,param_2,param_3,0x10);
  return;
}



// FUNCTION 147d6b630 FUN_147d6b630 body=52 status=ok
// SIG undefined FUN_147d6b630(void)

void FUN_147d6b630(longlong *param_1)

{
  FUN_1411476e8(param_1 + 2);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d6b65a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147d6b664 FUN_147d6b664 body=230 status=ok
// SIG undefined FUN_147d6b664(void)

int * FUN_147d6b664(longlong *param_1,int *param_2)

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
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 147d6b74a FUN_147d6b74a body=128 status=ok
// SIG undefined FUN_147d6b74a(void)

undefined8 FUN_147d6b74a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147d6b7ca((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d6b7ca FUN_147d6b7ca body=114 status=ok
// SIG undefined FUN_147d6b7ca(void)

void FUN_147d6b7ca(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 147d6b83c FUN_147d6b83c body=474 status=ok
// SIG undefined FUN_147d6b83c(void)

void FUN_147d6b83c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d6ba18 FUN_147d6ba18 body=132 status=ok
// SIG undefined FUN_147d6ba18(void)

void FUN_147d6ba18(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_147d6ba9c(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147d6ba9c FUN_147d6ba9c body=87 status=ok
// SIG undefined FUN_147d6ba9c(void)

void FUN_147d6ba9c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_147d6b7ca();
  return;
}



// FUNCTION 147d6baf4 FUN_147d6baf4 body=108 status=ok
// SIG undefined FUN_147d6baf4(void)

void FUN_147d6baf4(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *param_1;
  puVar3 = *(undefined8 **)(lVar2 + (longlong)(int)param_2 * 8);
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  iVar4 = (int)param_1[1];
  iVar5 = ~param_2 + iVar4;
  if (iVar5 != 0) {
    iVar6 = 1;
    if (iVar5 < 1) {
      iVar6 = iVar5;
    }
    memmove((void *)(lVar2 + (longlong)(int)param_2 * 8),
            (void *)(lVar2 + (longlong)(iVar4 - iVar6) * 8),(longlong)iVar6 << 3);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 147d6bb60 FUN_147d6bb60 body=62 status=ok
// SIG undefined FUN_147d6bb60(void)

void FUN_147d6bb60(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d6bb9e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147d6bb9e FUN_147d6bb9e body=93 status=ok
// SIG undefined FUN_147d6bb9e(void)

ulonglong FUN_147d6bb9e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 147d6bbfc FUN_147d6bbfc body=108 status=ok
// SIG undefined FUN_147d6bbfc(void)

void FUN_147d6bbfc(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *param_1;
  puVar3 = *(undefined8 **)(lVar2 + (longlong)(int)param_2 * 8);
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  iVar4 = (int)param_1[1];
  iVar5 = ~param_2 + iVar4;
  if (iVar5 != 0) {
    iVar6 = 1;
    if (iVar5 < 1) {
      iVar6 = iVar5;
    }
    memmove((void *)(lVar2 + (longlong)(int)param_2 * 8),
            (void *)(lVar2 + (longlong)(iVar4 - iVar6) * 8),(longlong)iVar6 << 3);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 147d6bc68 FUN_147d6bc68 body=62 status=ok
// SIG undefined FUN_147d6bc68(void)

void FUN_147d6bc68(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d6bca6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147d6bca6 FUN_147d6bca6 body=93 status=ok
// SIG undefined FUN_147d6bca6(void)

ulonglong FUN_147d6bca6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 147d6bd04 FUN_147d6bd04 body=114 status=ok
// SIG undefined FUN_147d6bd04(void)

void FUN_147d6bd04(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x150,0x10);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0xc30c30c30c30c31),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x150,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147d6bd76 FUN_147d6bd76 body=147 status=ok
// SIG undefined FUN_147d6bd76(void)

void FUN_147d6bd76(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d6be0a FUN_147d6be0a body=52 status=ok
// SIG undefined FUN_147d6be0a(void)

void FUN_147d6be0a(longlong *param_1)

{
  FUN_147d65fd2(param_1 + 2);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d6be34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147d6be3e FUN_147d6be3e body=52 status=ok
// SIG undefined FUN_147d6be3e(void)

void FUN_147d6be3e(longlong *param_1)

{
  FUN_147d65fd2(param_1 + 2);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d6be68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147d6be72 FUN_147d6be72 body=38 status=ok
// SIG undefined FUN_147d6be72(void)

undefined8 FUN_147d6be72(undefined8 param_1,int param_2)

{
  FUN_147d6be98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d6be98 FUN_147d6be98 body=110 status=ok
// SIG undefined FUN_147d6be98(void)

void FUN_147d6be98(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14aacf130;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)puVar2 + 100);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (((*piVar1 == 0) && (*(int *)(puVar2 + 0xc) == 0)) && (*(int *)(puVar2 + 0xb) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = IQueuedWork::vftable;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147d6bee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 147d6bf06 FUN_147d6bf06 body=48 status=ok
// SIG undefined FUN_147d6bf06(void)

void FUN_147d6bf06(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147d6bf36 FUN_147d6bf36 body=132 status=ok
// SIG undefined FUN_147d6bf36(void)

void FUN_147d6bf36(longlong param_1,int param_2)

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



// FUNCTION 147d6bfbc FUN_147d6bfbc body=62 status=ok
// SIG undefined FUN_147d6bfbc(void)

void FUN_147d6bfbc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d6bffa(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147d6bffa FUN_147d6bffa body=93 status=ok
// SIG undefined FUN_147d6bffa(void)

ulonglong FUN_147d6bffa(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 147d6c058 FUN_147d6c058 body=289 status=ok
// SIG undefined FUN_147d6c058(void)

undefined4 * FUN_147d6c058(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147d6918a(param_1,local_40);
  FUN_147d6c17a(param_3,local_38);
  *(undefined4 *)(local_38 + 0xb) = 0xffffffff;
  uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar5 = 1;
  if (3 < uVar3) {
    uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar5 = 1 << ((byte)lVar4 & 0x1f);
  }
  uVar1 = *local_38;
  if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
    uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar6 = (uint)uVar1 & 0xffff;
    uVar3 = *(int *)(param_1 + 0x48) - 1U &
            (uVar6 >> 4) +
            ((uint)uVar1 << 0x10 | uVar6) + (int)((ulonglong)uVar1 >> 0x20) +
            (uVar3 << 0x13 | uVar3 & 0xffff);
    *(uint *)((longlong)local_38 + 0x5c) = uVar3;
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = param_1 + 0x38;
    }
    *(undefined4 *)(local_38 + 0xb) =
         *(undefined4 *)
          (lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         local_40[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar5;
    FUN_147d693dc(param_1);
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6c17a FUN_147d6c17a body=160 status=ok
// SIG undefined FUN_147d6c17a(void)

undefined8 * FUN_147d6c17a(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_144a5dc74();
  FUN_144a5dc74(&uStack_50);
  FUN_144a5dc74(&local_38);
  *param_2 = *(undefined8 *)*param_1;
  FUN_147d69368(param_2 + 1,&local_78);
  FUN_147d6931a(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6c21c FUN_147d6c21c body=138 status=ok
// SIG undefined FUN_147d6c21c(void)

void FUN_147d6c21c(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147d6c2a6 FUN_147d6c2a6 body=114 status=ok
// SIG undefined FUN_147d6c2a6(void)

void FUN_147d6c2a6(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 147d6c318 FUN_147d6c318 body=112 status=ok
// SIG undefined FUN_147d6c318(void)

undefined4 * FUN_147d6c318(undefined8 param_1,undefined4 *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_3;
  if ((uVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar1);
  }
  uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar3 = FUN_14373120e(param_1,uVar2 >> 0x10 ^ uVar2,param_3);
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 147d6c388 FUN_147d6c388 body=87 status=ok
// SIG undefined FUN_147d6c388(void)

void FUN_147d6c388(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_147d6c2a6();
  return;
}



// FUNCTION 147d6c3e0 FUN_147d6c3e0 body=201 status=ok
// SIG undefined FUN_147d6c3e0(void)

void FUN_147d6c3e0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar5 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar3 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar3;
        if (lVar4 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar2[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar5 != iVar7) {
          memmove(plVar2 + iVar5,plVar2 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar5 = iVar5 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar4);
    *(int *)(param_1 + 1) = iVar5;
  }
  return;
}



// FUNCTION 147d6c4aa FUN_147d6c4aa body=128 status=ok
// SIG undefined FUN_147d6c4aa(void)

void FUN_147d6c4aa(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb0ada8;
  if (DAT_14cb0addc != 0) {
    *(int *)(DAT_14cb0ada8 + (longlong)DAT_14cb0add8 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb0addc) {
    iVar4 = DAT_14cb0add8;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14cb0addc = DAT_14cb0addc + 1;
  puVar3 = &DAT_14cb0adb8;
  if (DAT_14cb0adc8 != (undefined4 *)0x0) {
    puVar3 = DAT_14cb0adc8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb0add8 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 147d6c52a FUN_147d6c52a body=358 status=ok
// SIG undefined FUN_147d6c52a(void)

undefined4 * FUN_147d6c52a(undefined4 *param_1,undefined8 *param_2)

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
  FUN_145a2d888(local_40);
  puVar1 = (undefined8 *)param_2[1];
  *local_38 = *(undefined8 *)*param_2;
  local_38[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_38 + 2) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_38 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar2 = *local_38;
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_145a2d7d8(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb0adb0 - DAT_14cb0addc;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb0adf0)) {
      uVar10 = DAT_14cb0adf0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x1c) = uVar10;
      puVar7 = DAT_14cb0ade8;
      if (DAT_14cb0ade8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb0ade0;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb0adf0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb0ade8;
      if (DAT_14cb0ade8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb0ade0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb0adf0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb0adf0 = iVar9;
      FUN_14146da40();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6c692 FUN_147d6c692 body=242 status=ok
// SIG undefined FUN_147d6c692(void)

void FUN_147d6c692(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  longlong lVar7;
  
  if (DAT_14cb0adb0 != DAT_14cb0addc) {
    uVar2 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb0ade0;
    if (DAT_14cb0ade8 != (undefined *)0x0) {
      puVar6 = DAT_14cb0ade8;
    }
    for (iVar1 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb0adf0 - 1U) * 4); iVar1 != -1;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + DAT_14cb0ada8 + 0x18)) {
      if (*(longlong *)(DAT_14cb0ada8 + (longlong)iVar1 * 0x20) == param_1) {
        puVar6 = &DAT_14cb0ade0;
        if (DAT_14cb0ade8 != (undefined *)0x0) {
          puVar6 = DAT_14cb0ade8;
        }
        lVar7 = (longlong)*(int *)(DAT_14cb0ada8 + 0x1c + (longlong)iVar1 * 0x20);
        iVar5 = *(int *)(puVar6 + lVar7 * 4);
        if (iVar5 == iVar1) {
          puVar3 = (undefined4 *)(puVar6 + lVar7 * 4);
        }
        else {
          do {
            lVar7 = (longlong)iVar5;
            iVar5 = *(int *)(DAT_14cb0ada8 + 0x18 + lVar7 * 0x20);
          } while (iVar5 != iVar1);
          puVar3 = (undefined4 *)(DAT_14cb0ada8 + lVar7 * 0x20 + 0x18);
        }
        *puVar3 = *(undefined4 *)(DAT_14cb0ada8 + (longlong)iVar1 * 0x20 + 0x18);
        FUN_147d6c784();
        return;
      }
    }
  }
  return;
}



// FUNCTION 147d6c784 FUN_147d6c784 body=48 status=ok
// SIG undefined FUN_147d6c784(void)

void FUN_147d6c784(int param_1)

{
  if (*(longlong *)(DAT_14cb0ada8 + 8 + (longlong)param_1 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_147d6c4aa(param_1);
  return;
}



// FUNCTION 147d6c7b4 FUN_147d6c7b4 body=451 status=ok
// SIG undefined FUN_147d6c7b4(void)

void FUN_147d6c7b4(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x30;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 147d6c978 FUN_147d6c978 body=128 status=ok
// SIG undefined FUN_147d6c978(void)

undefined8 FUN_147d6c978(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x30) == param_2) {
          FUN_147d6c9f8(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x30 + *param_1 + 0x28);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d6c9f8 FUN_147d6c9f8 body=95 status=ok
// SIG undefined FUN_147d6c9f8(void)

void FUN_147d6c9f8(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x2c + (longlong)param_2 * 0x30);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x28 + lVar5 * 0x30);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x30 + 0x28);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x30 + 0x28);
  FUN_147d6ca58();
  return;
}



// FUNCTION 147d6ca58 FUN_147d6ca58 body=77 status=ok
// SIG undefined FUN_147d6ca58(void)

void FUN_147d6ca58(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x30;
  FUN_1458791db(*(undefined8 *)(lVar1 + 0x18 + lVar2),*(undefined4 *)(lVar1 + 0x20 + lVar2));
  if (*(longlong *)(lVar1 + 0x18 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_147d6caa6(param_1,param_2);
  return;
}



// FUNCTION 147d6caa6 FUN_147d6caa6 body=122 status=ok
// SIG undefined FUN_147d6caa6(void)

void FUN_147d6caa6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 147d6cb20 FUN_147d6cb20 body=347 status=ok
// SIG undefined FUN_147d6cb20(void)

undefined4 * FUN_147d6cb20(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147d6cc7c(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = *puVar1;
  *(undefined2 *)(local_40 + 2) = *(undefined2 *)(puVar1 + 1);
  local_40[3] = puVar1[2];
  puVar1[2] = 0;
  *(undefined4 *)(local_40 + 4) = *(undefined4 *)(puVar1 + 3);
  *(undefined4 *)((longlong)local_40 + 0x24) = *(undefined4 *)((longlong)puVar1 + 0x1c);
  puVar1[3] = 0;
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (int)((ulonglong)*local_40 >> 0x20) * 0x17 + (int)*local_40;
  cVar3 = FUN_147d6cd6a(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x2c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147d6c7b4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6cc7c FUN_147d6cc7c body=238 status=ok
// SIG undefined FUN_147d6cc7c(void)

int * FUN_147d6cc7c(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140044672(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 147d6cd6a FUN_147d6cd6a body=187 status=ok
// SIG undefined FUN_147d6cd6a(void)

undefined8 FUN_147d6cd6a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x30);
        if (*(longlong *)(*param_1 + (longlong)iVar11 * 0x30) == *param_3) {
          FUN_1458791db(*(undefined8 *)(puVar1 + 6),puVar1[8]);
          if (*(longlong *)(puVar1 + 6) != 0) {
            FUN_1400020a8();
          }
          lVar6 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar8 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar9 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(longlong *)(puVar1 + 8) = param_3[4];
          puVar1[4] = (int)lVar8;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar9;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar6;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar7;
          puVar1[3] = uVar3;
          FUN_147d6caa6(param_1,*param_4);
          *param_4 = iVar11;
          return 1;
        }
        iVar11 = puVar1[10];
      } while (iVar11 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d6ce26 FUN_147d6ce26 body=68 status=ok
// SIG undefined FUN_147d6ce26(void)

void FUN_147d6ce26(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_147d6c7b4(param_1);
  return;
}



// FUNCTION 147d6ce6a FUN_147d6ce6a body=26 status=ok
// SIG undefined FUN_147d6ce6a(void)

void FUN_147d6ce6a(longlong param_1)

{
  FUN_144a5dc74();
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 147d6ce84 FUN_147d6ce84 body=43 status=ok
// SIG undefined FUN_147d6ce84(void)

void FUN_147d6ce84(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 147d6ceb0 FUN_147d6ceb0 body=120 status=ok
// SIG undefined FUN_147d6ceb0(void)

longlong FUN_147d6ceb0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_147d6cf2a();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_147d6cf84(param_1,&local_24,param_2);
    lVar1 = (longlong)local_24 * 0x20 + *param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 147d6cf2a FUN_147d6cf2a body=90 status=ok
// SIG undefined FUN_147d6cf2a(void)

longlong FUN_147d6cf2a(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x20;
        if ((*(int *)(lVar1 + lVar4) == *param_3) && (*(int *)(lVar1 + 4 + lVar4) == param_3[1])) {
          return lVar1 + lVar4;
        }
        iVar2 = *(int *)(lVar1 + lVar4 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d6cf84 FUN_147d6cf84 body=277 status=ok
// SIG undefined FUN_147d6cf84(void)

undefined4 * FUN_147d6cf84(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147d6d09a(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_147d6d180(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147d6d2ba(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6d09a FUN_147d6d09a body=229 status=ok
// SIG undefined FUN_147d6d09a(void)

int * FUN_147d6d09a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 147d6d180 FUN_147d6d180 body=199 status=ok
// SIG undefined FUN_147d6d180(void)

undefined8 FUN_147d6d180(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      lVar4 = *param_1;
      do {
        lVar11 = (longlong)iVar10 * 0x20;
        piVar3 = (int *)(lVar4 + lVar11);
        if ((*(int *)(lVar4 + lVar11) == *param_3) && (*(int *)(lVar4 + 4 + lVar11) == param_3[1]))
        {
          plVar9 = *(longlong **)(piVar3 + 4);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar9 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          iVar5 = *param_3;
          iVar6 = param_3[1];
          iVar7 = param_3[2];
          iVar8 = param_3[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar3 = iVar5;
          piVar3[1] = iVar6;
          piVar3[2] = iVar7;
          piVar3[3] = iVar8;
          FUN_147d6d248(param_1,*param_4);
          *param_4 = iVar10;
          return 1;
        }
        iVar10 = piVar3[6];
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d6d248 FUN_147d6d248 body=114 status=ok
// SIG undefined FUN_147d6d248(void)

void FUN_147d6d248(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 147d6d2ba FUN_147d6d2ba body=449 status=ok
// SIG undefined FUN_147d6d2ba(void)

void FUN_147d6d2ba(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x20;
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar10),*(undefined4 *)(lVar3 + 4 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d6d47c FUN_147d6d47c body=227 status=ok
// SIG undefined FUN_147d6d47c(void)

undefined8 *
FUN_147d6d47c(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined1 *param_4,
             undefined1 *param_5,undefined8 *param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14aacf370;
  local_58 = 0;
  iVar1 = *(int *)(param_6 + 1);
  uVar2 = *param_6;
  local_50 = iVar1;
  if (iVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1479d7102(&local_58,iVar1,0);
    FUN_1479d7175(local_58,uVar2,iVar1);
  }
  local_68 = *param_5;
  local_60 = &local_58;
  FUN_147d687e4(param_1 + 2,*param_2,*param_3,*param_4);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6d560 FUN_147d6d560 body=46 status=ok
// SIG undefined FUN_147d6d560(void)

void FUN_147d6d560(longlong param_1)

{
  FUN_1458791db(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d6d58e FUN_147d6d58e body=29 status=ok
// SIG undefined FUN_147d6d58e(void)

undefined8 FUN_147d6d58e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d6d5ac FUN_147d6d5ac body=31 status=ok
// SIG undefined FUN_147d6d5ac(void)

undefined8 FUN_147d6d5ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d6d5f4 FUN_147d6d5f4 body=93 status=ok
// SIG undefined FUN_147d6d5f4(void)

void FUN_147d6d5f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aacf400;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aacf390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147d6d652 FUN_147d6d652 body=93 status=ok
// SIG undefined FUN_147d6d652(void)

void FUN_147d6d652(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aacf400;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aacf390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147d6d6b0 FUN_147d6d6b0 body=126 status=ok
// SIG undefined FUN_147d6d6b0(void)

void FUN_147d6d6b0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aacf400;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aacf390;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d6d71f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d6d72e FUN_147d6d72e body=21 status=ok
// SIG undefined FUN_147d6d72e(void)

undefined8 FUN_147d6d72e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147d6d746 FUN_147d6d746 body=31 status=ok
// SIG undefined FUN_147d6d746(void)

undefined8 FUN_147d6d746(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d6d782 FUN_147d6d782 body=101 status=ok
// SIG undefined FUN_147d6d782(void)

void FUN_147d6d782(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aacf480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147d6d7e8 FUN_147d6d7e8 body=134 status=ok
// SIG undefined FUN_147d6d7e8(void)

void FUN_147d6d7e8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aacf480;
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
                    /* WARNING: Could not recover jumptable at 0x000147d6d85f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d6d87e FUN_147d6d87e body=77 status=ok
// SIG undefined FUN_147d6d87e(void)

void FUN_147d6d87e(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14aac2e70;
  lVar1 = param_1[0x50];
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  *param_1 = &PTR_FUN_14aac2e30;
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_1402594a4(param_1);
  return;
}



// FUNCTION 147d6d8d0 FUN_147d6d8d0 body=128 status=ok
// SIG undefined FUN_147d6d8d0(void)

void FUN_147d6d8d0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20(param_1,local_190);
  FUN_144aa02de(local_198,param_1 + 0x94);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6d952 FUN_147d6d952 body=41 status=ok
// SIG undefined FUN_147d6d952(void)

void FUN_147d6d952(longlong param_1,undefined8 *param_2)

{
  switchD_143c3d4dc::caseD_20();
  FUN_144aa02de(*param_2,param_1 + 0x94);
  return;
}



// FUNCTION 147d6d99e FUN_147d6d99e body=41 status=ok
// SIG undefined FUN_147d6d99e(void)

void FUN_147d6d99e(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x308))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147d6d9c8 FUN_147d6d9c8 body=46 status=ok
// SIG undefined FUN_147d6d9c8(void)

void FUN_147d6d9c8(longlong *param_1,longlong param_2,ulonglong *param_3)

{
  uint uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x398))(param_1,0);
  *param_3 = (ulonglong)uVar1;
  return;
}



// FUNCTION 147d6d9f6 FUN_147d6d9f6 body=274 status=ok
// SIG undefined FUN_147d6d9f6(void)

void FUN_147d6d9f6(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = &local_28;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar2 = 0;
  *puVar1 = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6db10 FUN_147d6db10 body=220 status=ok
// SIG undefined FUN_147d6db10(void)

void FUN_147d6db10(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(plVar1 + 1) = 0;
  if (*(int *)((longlong)plVar1 + 0xc) < 0) {
    FUN_1446f8c06(plVar1,0);
  }
  if ((undefined2 *)*plVar1 != (undefined2 *)0x0) {
    *(undefined2 *)*plVar1 = 0;
  }
  *param_3 = 0;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6dc36 FUN_147d6dc36 body=155 status=ok
// SIG undefined FUN_147d6dc36(void)

void FUN_147d6dc36(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar1 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cc78);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = plVar1;
  switchD_143c3d4dc::caseD_20(param_1);
  FUN_140562eea(&local_1a8,plVar1,0,&DAT_14c896044);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6dcd8 FUN_147d6dcd8 body=106 status=ok
// SIG undefined FUN_147d6dcd8(void)

undefined8 FUN_147d6dcd8(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  lVar1 = DAT_14cb0b458;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar4 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar2 ^ 1);
  }
  if (*(int *)(lVar1 + uVar4 * 4) == 0) {
LAB_147d6dd39:
    uVar5 = 0;
  }
  else {
    if (param_1 != (longlong *)0x0) {
      cVar3 = (**(code **)(*param_1 + 0xb8))(param_1,0x16);
      if (cVar3 == '\0') goto LAB_147d6dd39;
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 147d6dd48 FUN_147d6dd48 body=86 status=ok
// SIG undefined FUN_147d6dd48(void)

void FUN_147d6dd48(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147d70930();
  local_20 = *param_2;
  *(int *)(local_20 + 0x94) = *(int *)(local_20 + 0x94) + 1;
  FUN_1468be722(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6dda0 FUN_147d6dda0 body=70 status=ok
// SIG undefined FUN_147d6dda0(void)

undefined8 FUN_147d6dda0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x340))();
  if ((((plVar2 != (longlong *)0x0) && (lVar1 = *plVar2, lVar1 != 0)) && (-1 < (int)param_2)) &&
     ((int)param_2 < *(int *)(lVar1 + 0x20))) {
    uVar3 = FUN_1411c4210(*(longlong *)(*(longlong *)(lVar1 + 0x18) + (ulonglong)param_2 * 8) + 0x38
                         );
    return uVar3;
  }
  return 0;
}



// FUNCTION 147d6dde6 FUN_147d6dde6 body=70 status=ok
// SIG undefined FUN_147d6dde6(void)

undefined8 FUN_147d6dde6(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x340))();
  if ((((plVar2 != (longlong *)0x0) && (lVar1 = *plVar2, lVar1 != 0)) && (-1 < (int)param_2)) &&
     ((int)param_2 < *(int *)(lVar1 + 0x20))) {
    uVar3 = FUN_146888846(*(longlong *)(*(longlong *)(lVar1 + 0x18) + (ulonglong)param_2 * 8) + 0x20
                         );
    return uVar3;
  }
  return 0;
}



// FUNCTION 147d6de2c FUN_147d6de2c body=99 status=ok
// SIG undefined FUN_147d6de2c(void)

uint FUN_147d6de2c(undefined8 param_1)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = FUN_1448463c0();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_1448463c0(param_1);
    uVar2 = -(uint)((DAT_14ca964d4 - *(float *)(lVar1 + 0x38)) * *(float *)(lVar1 + 0x3c) < 1.0 &&
                   1e-08 < ABS(*(float *)(lVar1 + 0x34)));
  }
  return uVar2 & 0xffffff01;
}



// FUNCTION 147d6de90 FUN_147d6de90 body=57 status=ok
// SIG undefined FUN_147d6de90(void)

void FUN_147d6de90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1447b4020();
  if (lVar1 != 0) {
    lVar1 = FUN_1447b4020(param_1);
    *(undefined8 *)(lVar1 + 0x28) = 0xc7efffffe0000000;
  }
  FUN_14742fb90(*(undefined8 *)(param_1 + 0x128));
  return;
}



// FUNCTION 147d6ded4 FUN_147d6ded4 body=29 status=ok
// SIG undefined FUN_147d6ded4(void)

wchar_t * FUN_147d6ded4(int param_1)

{
  if (param_1 - 1U < 0x48) {
    return (wchar_t *)(&PTR_u_TEXTUREGROUP_WorldNormalMap_14aad5818)[param_1 - 1U];
  }
  return L"TEXTUREGROUP_World";
}



// FUNCTION 147d6def2 FUN_147d6def2 body=251 status=ok
// SIG undefined FUN_147d6def2(void)

void FUN_147d6def2(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    local_38 = *(longlong *)(param_2 + 0x10);
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    lVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_38);
    if (lVar2 != 0) {
      local_40 = lVar2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
      local_30 = &local_40;
      FUN_1474be378(param_1 + 8);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = (int)param_1[9];
    *(uint *)(param_1 + 9) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x4c) < iVar1 + 1U) {
      FUN_140730f78(param_1 + 8,iVar1);
    }
    *(longlong *)(param_1[8] + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6dfee FUN_147d6dfee body=256 status=ok
// SIG undefined FUN_147d6dfee(void)

void FUN_147d6dfee(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x48);
  if (0 < iVar3) {
    lVar6 = 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + lVar6 * 8);
      if (lVar1 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_147d6e03b:
          lVar4 = FUN_144ae113c();
          if (((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30)) goto LAB_147d6e05d;
        }
        else {
          if (lVar5 != 0) goto LAB_147d6e03b;
LAB_147d6e05d:
          lVar5 = 0;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38)) {
          iVar3 = *(int *)(param_1 + 0x48);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x48);
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            if (iVar3 != (int)lVar6) {
              memmove((void *)(*(longlong *)(param_1 + 0x40) + lVar6 * 8 + -8),
                      (void *)(*(longlong *)(param_1 + 0x40) + lVar6 * 8),
                      (longlong)(iVar3 - (int)lVar6) << 3);
              iVar3 = *(int *)(param_1 + 0x48);
            }
            *(int *)(param_1 + 0x48) = iVar3 + -1;
            FUN_1474be4b6((longlong *)(param_1 + 0x40));
            return;
          }
        }
      }
      bVar2 = lVar6 < iVar3;
      lVar6 = lVar6 + 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 147d6e0f4 FUN_147d6e0f4 body=18 status=ok
// SIG undefined FUN_147d6e0f4(void)

undefined8 * FUN_147d6e0f4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 147d6e106 FUN_147d6e106 body=20 status=ok
// SIG undefined FUN_147d6e106(void)

void FUN_147d6e106(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14287fa46();
  FUN_146987ac9(uVar1);
  return;
}



// FUNCTION 147d6e11a FUN_147d6e11a body=6 status=ok
// SIG undefined FUN_147d6e11a(void)

undefined8 FUN_147d6e11a(void)

{
  return 0x4000;
}



// FUNCTION 147d6e120 FUN_147d6e120 body=154 status=ok
// SIG undefined FUN_147d6e120(void)

void FUN_147d6e120(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d6e1d0(param_1,&local_20);
  puVar2 = (undefined8 *)*param_3;
  *param_3 = local_20;
  local_20 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    if (local_20 != 0) {
      LOCK();
      piVar1 = (int *)(local_20 + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6e1d0 FUN_147d6e1d0 body=93 status=ok
// SIG undefined FUN_147d6e1d0(void)

longlong * FUN_147d6e1d0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  if ((((*(char *)(param_1 + 0xfd) == '\x01') &&
       (lVar2 = *(longlong *)(param_1 + 0x148), lVar2 != 0)) &&
      ((*(byte *)(lVar2 + 0xb) & 0x20) != 0)) && (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0))
  {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    puVar3 = (undefined8 *)*param_2;
    *param_2 = lVar2;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 147d6e292 FUN_147d6e292 body=76 status=ok
// SIG undefined FUN_147d6e292(void)

void FUN_147d6e292(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1402c0228(param_1);
    lVar1 = *(longlong *)(param_1 + 0x148);
    if (lVar1 != 0) {
      FUN_1400ea27c(lVar1);
      FUN_1400020a8(lVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x148) = param_2;
  return;
}



// FUNCTION 147d6e2de FUN_147d6e2de body=40 status=ok
// SIG undefined FUN_147d6e2de(void)

undefined8 FUN_147d6e2de(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x148);
  if (lVar1 != 0) {
    puVar2 = (undefined1 *)(*(longlong *)(lVar1 + 0x28) + 0x20 + (ulonglong)param_2);
    if (*(longlong *)(lVar1 + 0x28) == 0) {
      puVar2 = (undefined1 *)(lVar1 + 0xc);
    }
    return CONCAT71((int7)((ulonglong)(lVar1 + 0xc) >> 8),*puVar2);
  }
  return 0;
}



// FUNCTION 147d6e31a FUN_147d6e31a body=89 status=ok
// SIG undefined FUN_147d6e31a(void)

void FUN_147d6e31a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_2;
  *(int *)(lVar1 + 0x94) = *(int *)(lVar1 + 0x94) + 1;
  FUN_147d70930();
  *(int *)(lVar1 + 0x94) = *(int *)(lVar1 + 0x94) + 1;
  local_20 = lVar1;
  FUN_1468be722(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6e37a FUN_147d6e37a body=616 status=ok
// SIG undefined FUN_147d6e37a(void)

void FUN_147d6e37a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  void *_Src;
  uint uVar2;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  byte *pbVar4;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140002266(&local_40,L"%dx%d",*(ulonglong *)(param_1 + 0x140),
                *(ulonglong *)(param_1 + 0x140) >> 0x20);
  FUN_1446ddc76(&local_68,"Dimensions",1);
  _Src = local_40;
  local_60 = local_68;
  local_58 = (void *)0x0;
  local_50 = local_38;
  if ((longlong)local_38 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_38,0);
    memcpy(local_58,_Src,(longlong)local_38 * 2);
  }
  local_48 = 3;
  FUN_1407c67d8(param_2);
  if (*(longlong *)(param_1 + 0x148) == 0) {
    pwVar5 = L"False";
  }
  else {
    uVar3 = FUN_14322495c(*(undefined1 *)(*(longlong *)(param_1 + 0x148) + 0xc));
    pwVar5 = L"True";
    if ((uVar3 & 8) == 0) {
      pwVar5 = L"False";
    }
  }
  FUN_140056680(&local_98,pwVar5);
  FUN_1446ddc76(&local_a0,"HasAlphaChannel",1);
  local_88 = local_a0;
  local_80 = local_98;
  uStack_78 = uStack_90;
  local_98 = 0;
  uStack_90 = 0;
  local_70 = 1;
  FUN_1407c67d8(param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  lVar1 = *(longlong *)(param_1 + 0x148);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    pbVar4 = (byte *)(lVar1 + 0xc);
    if (*(longlong *)(lVar1 + 0x28) != 0) {
      pbVar4 = (byte *)(*(longlong *)(lVar1 + 0x28) + 0x20);
    }
    uVar2 = (uint)*pbVar4;
  }
  FUN_140056680(&local_98,*(undefined8 *)((longlong)&DAT_14c873410 + (ulonglong)(uVar2 * 0x30)));
  FUN_1446ddc76(&local_c8,"Format",1);
  local_c0 = local_c8;
  local_b8 = local_98;
  uStack_b0 = uStack_90;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 1;
  FUN_1407c67d8(param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1427dc336(local_d0,param_2);
  switchD_143c3d4dc::caseD_3d(param_1,local_d0);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6e5e4 FUN_147d6e5e4 body=270 status=ok
// SIG undefined FUN_147d6e5e4(void)

undefined8 FUN_147d6e5e4(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  undefined8 *puVar4;
  int iVar5;
  byte *pbVar6;
  wchar_t *pwVar7;
  int iVar8;
  
  iVar5 = 0;
  cVar3 = '\0';
  if (param_1[0x29] != 0) {
    cVar3 = (**(code **)(*param_1 + 0x330))(param_1);
    if (cVar3 == '\0') {
      cVar3 = (char)*(undefined4 *)(param_1[0x29] + 0x20);
    }
    else {
      cVar3 = (char)*(undefined4 *)(*(longlong *)(param_1[0x29] + 0x28) + 4);
    }
  }
  cVar2 = FUN_147d6e6f2(param_1);
  piVar1 = (int *)param_1[0x29];
  if (piVar1 == (int *)0x0) {
    puVar4 = &DAT_14c873410;
    iVar8 = 0;
  }
  else {
    pbVar6 = (byte *)(*(longlong *)(piVar1 + 10) + 0x20);
    if (*(longlong *)(piVar1 + 10) == 0) {
      pbVar6 = (byte *)(piVar1 + 3);
    }
    puVar4 = (undefined8 *)((longlong)&DAT_14c873410 + (ulonglong)((uint)*pbVar6 * 0x30));
    iVar8 = *piVar1;
    iVar5 = piVar1[1];
  }
  if ((*(byte *)((longlong)param_1 + 0xfe) & 4) == 0) {
    pwVar7 = L"NeverStreamed";
    if ((*(byte *)((longlong)param_1 + 0xbc) & 1) == 0) {
      pwVar7 = L"Streamed";
    }
  }
  else {
    pwVar7 = L"Virtual";
  }
  iVar8 = iVar8 >> (cVar3 - cVar2 & 0x1fU);
  if (iVar8 < 2) {
    iVar8 = 1;
  }
  iVar5 = iVar5 >> (cVar3 - cVar2 & 0x1fU);
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  FUN_140002266(param_2,L"%s %dx%d [%s]",pwVar7,iVar8,iVar5,*puVar4);
  return param_2;
}



// FUNCTION 147d6e6f2 FUN_147d6e6f2 body=154 status=ok
// SIG undefined FUN_147d6e6f2(void)

int FUN_147d6e6f2(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar5 = 0;
  if (param_1[0x29] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      iVar5 = *(int *)(param_1[0x29] + 0x20);
    }
    else {
      iVar5 = *(int *)(*(longlong *)(param_1[0x29] + 0x28) + 4);
    }
  }
  lVar3 = FUN_140032b16(0);
  iVar2 = FUN_1417f411e(*(undefined8 *)(lVar3 + 0x78),param_1,0);
  if (param_1[0x29] != 0) {
    iVar6 = *(int *)(param_1[0x29] + 0x14);
  }
  iVar4 = iVar5 - iVar2;
  if (DAT_14ca84d90 <= iVar5 - iVar2) {
    iVar4 = DAT_14ca84d90;
  }
  iVar2 = DAT_14c761df0;
  if (DAT_14c761df0 < iVar6) {
    iVar2 = iVar6;
  }
  if (iVar4 <= iVar2) {
    iVar4 = iVar2;
  }
  iVar6 = 1;
  if (1 < iVar4) {
    iVar6 = iVar4;
  }
  if (iVar5 <= iVar2) {
    iVar6 = iVar5;
  }
  return iVar6;
}



// FUNCTION 147d6e78c FUN_147d6e78c body=127 status=ok
// SIG undefined FUN_147d6e78c(void)

undefined8 FUN_147d6e78c(longlong *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x330))();
  if (cVar1 == '\0') {
    if (param_2 == 0) {
      uVar2 = FUN_1417f3e5c(param_1);
    }
    else if (param_2 == 2) {
      uVar2 = FUN_147d6e6f2(param_1);
    }
    else if (param_1[0x29] == 0) {
      uVar2 = 0;
    }
    else {
      cVar1 = (**(code **)(*param_1 + 0x330))(param_1);
      if (cVar1 == '\0') {
        uVar2 = *(undefined4 *)(param_1[0x29] + 0x20);
      }
      else {
        uVar2 = *(undefined4 *)(*(longlong *)(param_1[0x29] + 0x28) + 4);
      }
    }
    uVar3 = FUN_14014d0f4(param_1,uVar2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 147d6e80c FUN_147d6e80c body=119 status=ok
// SIG undefined FUN_147d6e80c(void)

void FUN_147d6e80c(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  switchD_143c3d4dc::caseD_38();
  cVar1 = (**(code **)(*param_1 + 0x330))(param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_144b2c284(*(undefined8 *)(param_1[0x29] + 0x28));
    FUN_140347a44(param_2,uVar2);
    return;
  }
  iVar3 = FUN_14278f0ba(param_2);
  if (iVar3 == 0) {
    uVar2 = FUN_1417f3e5c();
  }
  else {
    uVar2 = FUN_147d6e6f2(param_1);
  }
  iVar3 = FUN_14014d0f4(param_1,uVar2);
  FUN_146820164(param_2,(longlong)iVar3);
  return;
}



// FUNCTION 147d6e884 FUN_147d6e884 body=28 status=ok
// SIG undefined FUN_147d6e884(void)

void FUN_147d6e884(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 5) = 0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



// FUNCTION 147d6e8a0 FUN_147d6e8a0 body=111 status=ok
// SIG undefined FUN_147d6e8a0(void)

void FUN_147d6e8a0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xd) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xc7efffffe0000000;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f) = 0;
  param_1[9] = 0;
  *param_1 = &PTR_FUN_14aad2b50;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = (undefined1)DAT_14c760db4;
  *(undefined1 *)((longlong)param_1 + 0x72) = 4;
  return;
}



// FUNCTION 147d6e910 thunk_FUN_1401c04d8 body=5 status=ok
// SIG undefined thunk_FUN_1401c04d8(void)

void thunk_FUN_1401c04d8(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3cb4f0;
  if (param_1[9] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[9] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1401c051c(param_1);
  return;
}



// FUNCTION 147d6e916 FUN_147d6e916 body=222 status=ok
// SIG undefined FUN_147d6e916(void)

void FUN_147d6e916(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40;
  byte local_3f;
  undefined1 local_3e;
  undefined8 local_3d;
  undefined8 uStack_35;
  undefined8 local_2d;
  undefined1 uStack_25;
  undefined7 uStack_24;
  undefined1 uStack_1d;
  undefined8 uStack_1c;
  char local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[0x10] == 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_3e = 0xff;
    local_3d = 0;
    uStack_35 = 0;
    local_2d = 0;
    uStack_25 = 0;
    uStack_24 = 0;
    uStack_1d = 0;
    uStack_1c = 0;
    local_40 = 2;
    uVar1 = (**(code **)(*param_1 + 0xd0))();
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar1);
    uVar1 = (**(code **)(*param_1 + 0xd8))(param_1);
    uStack_50 = CONCAT44(uVar1,(undefined4)uStack_50);
    local_3f = (**(code **)(*param_1 + 200))(param_1);
    local_14 = *(char *)((longlong)param_1 + 0x71) * '\x02';
    if (local_3f != 0) {
      lVar3 = param_1[0x11];
      uVar4 = 0;
      do {
        *(int *)((longlong)&local_3d + uVar4 * 4 + 1) = (int)lVar3;
        *(char *)((longlong)&uStack_1c + uVar4) = (char)uVar4;
        uVar4 = uVar4 + 1;
      } while ((uint)local_3f != uVar4);
    }
    uVar2 = FUN_144a7b9cd();
    lVar3 = FUN_147429f4a(uVar2,&local_58);
    param_1[0x10] = lVar3;
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6ea26 FUN_147d6ea26 body=47 status=ok
// SIG undefined FUN_147d6ea26(void)

undefined4 * FUN_147d6ea26(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x80);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_3);
  }
  *param_2 = uVar2;
  param_2[1] = uVar2;
  return param_2;
}



// FUNCTION 147d6ea72 FUN_147d6ea72 body=116 status=ok
// SIG undefined FUN_147d6ea72(void)

void FUN_147d6ea72(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x128) + 0x10);
  if (lVar3 != 0) {
    (**(code **)(*DAT_14ca83900 + 0x178))(DAT_14ca83900,&DAT_14ca85100,lVar3,0);
  }
  FUN_14047a8f2(param_1);
  lVar3 = *(longlong *)(param_1 + 0x58);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 147d6eae6 FUN_147d6eae6 body=103 status=ok
// SIG undefined FUN_147d6eae6(void)

void FUN_147d6eae6(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)puVar1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)puVar1 + 0xe) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0xc7efffffe0000000;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3f) = 0;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_14aad3130;
  puVar1[10] = param_1;
  puVar1[0xb] = 0;
  return;
}



// FUNCTION 147d6eb61 FUN_147d6eb61 body=217 status=ok
// SIG undefined FUN_147d6eb61(void)

undefined8
FUN_147d6eb61(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1458f1420();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6ec3c FUN_147d6ec3c body=231 status=ok
// SIG undefined FUN_147d6ec3c(void)

undefined8 * FUN_147d6ec3c(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  FUN_144a7f8ec();
  *param_1 = &PTR_FUN_14aad31d0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar5 = (ulonglong)*(uint *)(param_2 + 0x38);
  if ((int)*(uint *)(param_2 + 0x38) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar5);
  }
  if (uVar5 != 0) {
    plVar1 = param_1 + 2;
    lVar3 = *(longlong *)(param_2 + 0x30);
    FUN_147d709e6(plVar1,uVar5);
    lVar6 = 0;
    do {
      lVar7 = *(longlong *)(lVar3 + lVar6);
      if ((lVar7 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar7);
      }
      else if (lVar7 == 0) {
        lVar7 = *(longlong *)(DAT_14cb0d2b0 + 0x368);
      }
      uVar4 = FUN_1447b4020(lVar7);
      iVar2 = *(int *)(param_1 + 3);
      *(uint *)(param_1 + 3) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
        FUN_147d70a3c(plVar1,iVar2);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar4;
      lVar6 = lVar6 + 8;
    } while (uVar5 << 3 != lVar6);
  }
  return param_1;
}



// FUNCTION 147d6ed24 FUN_147d6ed24 body=68 status=ok
// SIG undefined FUN_147d6ed24(void)

void FUN_147d6ed24(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_147d70ac1(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147d70b04(param_1,param_2);
  return;
}



// FUNCTION 147d6ed6c FUN_147d6ed6c body=58 status=ok
// SIG undefined FUN_147d6ed6c(void)

void FUN_147d6ed6c(longlong param_1)

{
  longlong lVar1;
  
  FUN_1446e0b6e();
  lVar1 = param_1;
  while( true ) {
    if (lVar1 == 0) {
      FUN_143734e7a(param_1);
      return;
    }
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) break;
    lVar1 = *(longlong *)(lVar1 + 0x20);
  }
  return;
}



// FUNCTION 147d6eda6 FUN_147d6eda6 body=170 status=ok
// SIG undefined FUN_147d6eda6(void)

undefined8 FUN_147d6eda6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar5 = 0x40;
  if ((((*(int *)(lVar3 + 0xc60) != 0x40000002) && (cVar4 = FUN_144a61b4f(), cVar4 == '\0')) &&
      (puVar1 = (uint *)(lVar3 + 0xc60), *puVar1 != 4)) &&
     (cVar4 = (*(code *)PTR_FUN_14c758760)(), cVar4 == '\0')) {
    uVar2 = *puVar1;
    if (DAT_14c86a9fc == 0) {
      lVar5 = 0x48;
      if (((0x20 < uVar2) || ((0x100010004U >> ((ulonglong)uVar2 & 0x3f) & 1) == 0)) &&
         (uVar2 != 0x40000010)) {
        return 0;
      }
    }
    else {
      lVar5 = 0x48;
      if (uVar2 != 0x20 && (uVar2 - 0x10 & 0xbfffffef) != 0) {
        return 0;
      }
    }
  }
  return *(undefined8 *)(param_1 + lVar5);
}



// FUNCTION 147d6ee66 FUN_147d6ee66 body=421 status=ok
// SIG undefined FUN_147d6ee66(void)

void FUN_147d6ee66(longlong param_1,undefined8 param_2)

{
  void *_Src;
  uint uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140002266(&local_40,L"%dx%d",0,0);
  FUN_1446ddc76(&local_68,"Dimensions",1);
  _Src = local_40;
  local_60 = local_68;
  local_58 = (void *)0x0;
  local_50 = local_38;
  if ((longlong)local_38 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_38,0);
    memcpy(local_58,_Src,(longlong)local_38 * 2);
  }
  local_48 = 3;
  FUN_1407c67d8(param_2);
  if (*(longlong *)(param_1 + 0x138) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)*(byte *)(*(longlong *)(param_1 + 0x138) + 0xc);
  }
  FUN_140056680(&local_98,*(undefined8 *)((longlong)&DAT_14c873410 + (ulonglong)(uVar1 * 0x30)));
  FUN_1446ddc76(&local_a0,"Format",1);
  local_88 = local_a0;
  local_80 = local_98;
  uStack_78 = uStack_90;
  local_98 = 0;
  uStack_90 = 0;
  local_70 = 1;
  FUN_1407c67d8(param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1427dc336(local_a8,param_2);
  switchD_143c3d4dc::caseD_3d(param_1,local_a8);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6f00c FUN_147d6f00c body=95 status=ok
// SIG undefined FUN_147d6f00c(void)

undefined8 FUN_147d6f00c(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x138);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = &DAT_14c873410;
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)
             ((longlong)&DAT_14c873410 + (ulonglong)((uint)*(byte *)(puVar1 + 3) * 0x30));
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
  }
  FUN_140002266(param_2,L"Cube: %dx%d [%s]",uVar3,uVar4,*puVar2);
  return param_2;
}



// FUNCTION 147d6f06c FUN_147d6f06c body=324 status=ok
// SIG undefined FUN_147d6f06c(void)

int FUN_147d6f06c(longlong param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_e8 [40];
  int local_c0 [2];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8f;
  undefined1 local_8b;
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2f;
  undefined1 local_2b;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar2 = *(uint **)(param_1 + 0x138);
  iVar4 = 0;
  if (puVar2 != (uint *)0x0) {
    iVar4 = puVar2[8] - param_2;
    if ((int)(puVar2[8] - param_2) < 1) {
      iVar4 = 0;
    }
    uVar1 = *(uint *)((longlong)&DAT_14c87341c + (ulonglong)((uint)(byte)puVar2[3] * 0x30));
    uVar5 = *puVar2 >> ((byte)iVar4 & 0x1f);
    if (uVar5 < uVar1) {
      uVar5 = uVar1;
    }
    FUN_145c221da(local_c0,L"Temp",uVar5);
    local_90 = 1;
    if (1 < param_2) {
      local_90 = (undefined1)param_2;
    }
    local_a0 = *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x10);
    local_3c = local_9c;
    local_34 = local_94;
    local_2f = local_8f;
    local_48 = local_a8;
    local_58 = local_b8;
    uStack_54 = uStack_b4;
    uStack_50 = uStack_b0;
    uStack_4c = uStack_ac;
    local_2b = local_8b;
    local_44 = local_a4;
    local_40 = local_a0;
    local_30 = local_90;
    cVar3 = FUN_14490ad04(local_60,&DAT_149dfb77a,0);
    iVar4 = 0;
    if (cVar3 != '\0') {
      (**(code **)(*DAT_14ca83900 + 0x180))(DAT_14ca83900,local_c0,local_60,0);
      iVar4 = local_c0[0];
    }
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6f1b2 FUN_147d6f1b2 body=19 status=ok
// SIG undefined FUN_147d6f1b2(void)

undefined4 FUN_147d6f1b2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x138) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x20);
  }
  return 0;
}



// FUNCTION 147d6f1c6 FUN_147d6f1c6 body=74 status=ok
// SIG undefined FUN_147d6f1c6(void)

void FUN_147d6f1c6(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = param_1[0x27];
  iVar3 = 0;
  iVar2 = 0;
  if ((param_2 & 0xfffffffd) == 0) {
    if (lVar1 != 0) {
      iVar3 = *(int *)(lVar1 + 0x20);
    }
    iVar2 = (**(code **)(*param_1 + 0x2e8))(param_1);
    iVar2 = iVar3 - iVar2;
  }
  else if (lVar1 != 0) {
    iVar2 = *(int *)(lVar1 + 0x20);
  }
  FUN_147d6f06c(param_1,iVar2);
  return;
}



// FUNCTION 147d6f210 FUN_147d6f210 body=62 status=ok
// SIG undefined FUN_147d6f210(void)

void FUN_147d6f210(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  switchD_143c3d4dc::caseD_38();
  iVar1 = FUN_14278f0ba(param_2);
  uVar2 = (**(code **)(*param_1 + 0x398))(param_1,(iVar1 != 0) * '\x02');
  FUN_146820164(param_2,uVar2);
  return;
}



// FUNCTION 147d6f24e FUN_147d6f24e body=263 status=ok
// SIG undefined FUN_147d6f24e(void)

ulonglong FUN_147d6f24e(longlong param_1,longlong *param_2)

{
  undefined8 unaff_RDI;
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (*(char *)(param_1 + 0xf0) == '\x0e') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb0b5b0) && (FUN_144b3d300(&DAT_14cb0b5b0), DAT_14cb0b5b0 == -1)) {
      FUN_1446f470e(&DAT_14cb0b5a8,L"EncodedHDR");
      _Init_thread_footer(&DAT_14cb0b5b0);
    }
    plVar1 = &local_28;
    local_28 = 0;
    uStack_20 = 0;
    (**(code **)(*param_2 + 0xd8))(param_2,plVar1);
    if ((longlong)(int)uStack_20 == 0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      lVar2 = 0;
      do {
        bVar3 = *(longlong *)(local_28 + lVar2) == DAT_14cb0b5a8;
        plVar1 = (longlong *)CONCAT71((int7)((ulonglong)plVar1 >> 8),bVar3);
        if (bVar3) break;
        bVar3 = (longlong)(int)uStack_20 * 8 + -8 != lVar2;
        lVar2 = lVar2 + 8;
      } while (bVar3);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar1 & 0xffffffff;
}



// FUNCTION 147d6f374 FUN_147d6f374 body=347 status=ok
// SIG undefined FUN_147d6f374(void)

int FUN_147d6f374(longlong param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_e8 [32];
  byte local_c8;
  int local_c0 [2];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8f;
  undefined1 local_8b;
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2f;
  undefined1 local_2b;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar2 = *(uint **)(param_1 + 0x138);
  iVar4 = 0;
  if (puVar2 != (uint *)0x0) {
    local_c8 = (byte)puVar2[3];
    iVar4 = puVar2[8] - param_2;
    if ((int)(puVar2[8] - param_2) < 1) {
      iVar4 = 0;
    }
    uVar1 = *(uint *)((longlong)&DAT_14c87341c + (ulonglong)((uint)local_c8 * 0x30));
    uVar5 = *puVar2 >> ((byte)iVar4 & 0x1f);
    if (uVar5 < uVar1) {
      uVar5 = uVar1;
    }
    FUN_146310496(local_c0,L"Temp",uVar5,(ulonglong)(puVar2[2] & 0x1ffffffe) / 6);
    local_90 = 1;
    if (1 < param_2) {
      local_90 = (undefined1)param_2;
    }
    local_a0 = *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x10);
    local_3c = local_9c;
    local_34 = local_94;
    local_2f = local_8f;
    local_48 = local_a8;
    local_58 = local_b8;
    uStack_54 = uStack_b4;
    uStack_50 = uStack_b0;
    uStack_4c = uStack_ac;
    local_2b = local_8b;
    local_44 = local_a4;
    local_40 = local_a0;
    local_30 = local_90;
    cVar3 = FUN_14490ad04(local_60,&DAT_149dfb77a,0);
    iVar4 = 0;
    if (cVar3 != '\0') {
      (**(code **)(*DAT_14ca83900 + 0x180))(DAT_14ca83900,local_c0,local_60,0);
      iVar4 = local_c0[0];
    }
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6f4d0 FUN_147d6f4d0 body=74 status=ok
// SIG undefined FUN_147d6f4d0(void)

void FUN_147d6f4d0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = param_1[0x27];
  iVar3 = 0;
  iVar2 = 0;
  if ((param_2 & 0xfffffffd) == 0) {
    if (lVar1 != 0) {
      iVar3 = *(int *)(lVar1 + 0x20);
    }
    iVar2 = (**(code **)(*param_1 + 0x2e8))(param_1);
    iVar2 = iVar3 - iVar2;
  }
  else if (lVar1 != 0) {
    iVar2 = *(int *)(lVar1 + 0x20);
  }
  FUN_147d6f374(param_1,iVar2);
  return;
}



// FUNCTION 147d6f526 FUN_147d6f526 body=441 status=ok
// SIG undefined FUN_147d6f526(void)

void FUN_147d6f526(longlong param_1,undefined8 param_2)

{
  void *_Src;
  uint uVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  FUN_140002266(&local_40,L"%dx%d*%d",0,0);
  FUN_1446ddc76(&local_68,"Dimensions",1);
  _Src = local_40;
  local_60 = local_68;
  local_58 = (void *)0x0;
  local_50 = local_38;
  if ((longlong)local_38 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_38,0);
    memcpy(local_58,_Src,(longlong)local_38 * 2);
  }
  local_48 = 3;
  FUN_1407c67d8(param_2);
  if (*(longlong *)(param_1 + 0x138) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)*(byte *)(*(longlong *)(param_1 + 0x138) + 0xc);
  }
  FUN_140056680(&local_98,*(undefined8 *)((longlong)&DAT_14c873410 + (ulonglong)(uVar1 * 0x30)));
  FUN_1446ddc76(&local_a0,"Format",1);
  local_88 = local_a0;
  local_80 = local_98;
  uStack_78 = uStack_90;
  local_98 = 0;
  uStack_90 = 0;
  local_70 = 1;
  FUN_1407c67d8(param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1427dc336(local_a8,param_2);
  switchD_143c3d4dc::caseD_3d(param_1,local_a8);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6f6e0 FUN_147d6f6e0 body=120 status=ok
// SIG undefined FUN_147d6f6e0(void)

undefined8 FUN_147d6f6e0(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 0x138);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = &DAT_14c873410;
    uVar5 = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    puVar2 = (undefined8 *)
             ((longlong)&DAT_14c873410 + (ulonglong)((uint)*(byte *)(puVar1 + 3) * 0x30));
    uVar3 = (puVar1[2] & 0x1ffffffe) / 6;
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
  }
  FUN_140002266(param_2,L"CubeArray: %dx%d*%d [%s]",uVar4,uVar5,uVar3,*puVar2);
  return param_2;
}



// FUNCTION 147d6f758 FUN_147d6f758 body=47 status=ok
// SIG undefined FUN_147d6f758(void)

void FUN_147d6f758(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  switchD_143c3d4dc::caseD_38();
  uVar1 = (**(code **)(*param_1 + 0x398))(param_1,0);
  FUN_140347a44(param_2,uVar1);
  return;
}



// FUNCTION 147d6f788 FUN_147d6f788 body=105 status=ok
// SIG undefined FUN_147d6f788(void)

void FUN_147d6f788(longlong *param_1,int param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(int *)(param_1[0x29] + 0x20) - param_2;
  local_18 = 0;
  local_10 = 0;
  local_28 = param_3;
  (**(code **)(*param_1 + 0x3a0))(param_1,param_2,&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6f7fa FUN_147d6f7fa body=42 status=ok
// SIG undefined FUN_147d6f7fa(void)

undefined8 FUN_147d6f7fa(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/Texture.h",0x68d,
                L"Pure virtual not implemented (%s)",L"UTexture::GetTextureClass");
  return 0;
}



// FUNCTION 147d6f824 FUN_147d6f824 body=42 status=ok
// SIG undefined FUN_147d6f824(void)

undefined8 FUN_147d6f824(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/Texture.h",0x69c,
                L"Pure virtual not implemented (%s)",L"UTexture::CreateResource");
  return 0;
}



// FUNCTION 147d6f84e FUN_147d6f84e body=45 status=ok
// SIG undefined FUN_147d6f84e(void)

undefined8 FUN_147d6f84e(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/Texture.h",0x6b6,
                L"Pure virtual not implemented (%s)",L"UTexture::GetMaterialType");
  return 0x31f0;
}



// FUNCTION 147d6f87c FUN_147d6f87c body=43 status=ok
// SIG undefined FUN_147d6f87c(void)

undefined8 FUN_147d6f87c(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/Texture.h",0x788,
                L"Pure virtual not implemented (%s)",L"UTexture::GetSurfaceWidth");
  return 0;
}



// FUNCTION 147d6f8a8 FUN_147d6f8a8 body=43 status=ok
// SIG undefined FUN_147d6f8a8(void)

undefined8 FUN_147d6f8a8(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/Texture.h",0x78b,
                L"Pure virtual not implemented (%s)",L"UTexture::GetSurfaceHeight");
  return 0;
}



// FUNCTION 147d6f8d4 FUN_147d6f8d4 body=43 status=ok
// SIG undefined FUN_147d6f8d4(void)

undefined8 FUN_147d6f8d4(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/Texture.h",0x78e,
                L"Pure virtual not implemented (%s)",L"UTexture::GetSurfaceDepth");
  return 0;
}



// FUNCTION 147d6f900 FUN_147d6f900 body=42 status=ok
// SIG undefined FUN_147d6f900(void)

undefined8 FUN_147d6f900(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/Texture.h",0x791,
                L"Pure virtual not implemented (%s)",L"UTexture::GetSurfaceArraySize");
  return 0;
}



// FUNCTION 147d6f92e FUN_147d6f92e body=48 status=ok
// SIG undefined FUN_147d6f92e(void)

longlong FUN_147d6f92e(longlong param_1,int param_2)

{
  param_1 = param_1 + -200;
  FUN_140216160(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d6f95e FUN_147d6f95e body=48 status=ok
// SIG undefined FUN_147d6f95e(void)

longlong FUN_147d6f95e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xd0;
  FUN_140216160(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d6f98e FUN_147d6f98e body=48 status=ok
// SIG undefined FUN_147d6f98e(void)

longlong FUN_147d6f98e(longlong param_1,int param_2)

{
  param_1 = param_1 + -200;
  FUN_140216160(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d6f9be FUN_147d6f9be body=48 status=ok
// SIG undefined FUN_147d6f9be(void)

longlong FUN_147d6f9be(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xd0;
  FUN_140216160(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d6fa04 FUN_147d6fa04 body=48 status=ok
// SIG undefined FUN_147d6fa04(void)

longlong FUN_147d6fa04(longlong param_1,int param_2)

{
  param_1 = param_1 + -200;
  FUN_140216160(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}


