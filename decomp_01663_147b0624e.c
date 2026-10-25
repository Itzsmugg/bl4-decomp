// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147b0624e FUN_147b0624e body=11 status=ok
// SIG undefined FUN_147b0624e(void)

undefined8 * FUN_147b0624e(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x38);
  return param_2;
}



// FUNCTION 147b0625a FUN_147b0625a body=130 status=ok
// SIG undefined FUN_147b0625a(void)

void FUN_147b0625a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  local_28 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  FUN_147b4b278(param_1 + 0x90,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147b062d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b062de FUN_147b062de body=55 status=ok
// SIG undefined FUN_147b062de(void)

void FUN_147b062de(longlong param_1)

{
  FUN_1446e0b6e();
  FUN_1460d31fa(*(undefined8 *)(param_1 + 0x28),1);
  if (DAT_14c968098 != 0) {
    FUN_142860246(DAT_14c968098,0);
    return;
  }
  return;
}



// FUNCTION 147b06316 FUN_147b06316 body=234 status=ok
// SIG undefined FUN_147b06316(void)

undefined4 FUN_147b06316(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = switchD_143c3d4dc::caseD_34();
  if (((char)uVar1 != '\0') && ((*(uint *)(param_1 + 8) & 0x10) == 0)) {
    uVar2 = FUN_146067e0c();
    FUN_1467ceac2(uVar2,*(undefined8 *)(param_1 + 0x38));
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
    FUN_1401031ac(param_1,0,&local_38);
    puVar3 = local_38;
    if ((int)uStack_30 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_28,puVar3,1);
    *(undefined8 *)(param_1 + 0x38) = local_28;
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar2 = FUN_146067e0c();
    local_48 = *(undefined8 *)(param_1 + 0x28);
    local_40 = *(longlong *)(param_1 + 0x30);
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    FUN_1467ce9de(uVar2,*(undefined8 *)(param_1 + 0x38),&local_48);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 147b06406 FUN_147b06406 body=149 status=ok
// SIG undefined FUN_147b06406(void)

void FUN_147b06406(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  FUN_1446e0b6e();
  iVar2 = *(int *)(param_1 + 0x30);
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      uVar6 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x18 + lVar4 * 0x30);
      if (0 < (longlong)uVar6) {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x28) + lVar4 * 0x30 + 0x10);
        lVar7 = uVar6 * 0x38;
        do {
          lVar7 = lVar7 + -0x38;
          lVar3 = FUN_147b0649c(*plVar5 + lVar7);
          if (lVar3 == 0) {
            FUN_147b4f932(plVar5,(int)uVar6 + -1);
            FUN_147b4f98a(plVar5);
          }
          bVar1 = 1 < uVar6;
          uVar6 = uVar6 - 1;
        } while (bVar1);
        iVar2 = *(int *)(param_1 + 0x30);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  return;
}



// FUNCTION 147b0649c FUN_147b0649c body=99 status=ok
// SIG undefined FUN_147b0649c(void)

longlong FUN_147b0649c(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    uVar2 = FUN_14121bf02();
    cVar1 = FUN_144a7ca96(param_1,uVar2);
    lVar4 = *param_1;
    if (cVar1 == '\0') {
      if (lVar4 != 0) {
        uVar2 = FUN_1458f0da8();
        cVar1 = FUN_144a7ca96(param_1,uVar2);
        if (cVar1 != '\0') {
          lVar4 = *param_1;
          goto LAB_147b064ee;
        }
      }
    }
    else if (lVar4 != 0) {
      return lVar4 + 0x28;
    }
  }
  lVar4 = 0;
LAB_147b064ee:
  lVar3 = lVar4 + 0x28;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 147b065f4 FUN_147b065f4 body=110 status=ok
// SIG undefined FUN_147b065f4(void)

longlong * FUN_147b065f4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = (longlong)&PTR_FUN_14a92ae70;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(byte *)((longlong)param_1 + 0x1b) = (*(byte *)((longlong)param_1 + 0x1b) & 0xf8) + 1;
  FUN_144805afa(param_1 + 5);
  lVar1 = FUN_1458bb75c();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  (**(code **)(*param_1 + 8))(param_1,lVar2,1);
  return param_1;
}



// FUNCTION 147b06662 FUN_147b06662 body=144 status=ok
// SIG undefined FUN_147b06662(void)

longlong * FUN_147b06662(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = (longlong)&PTR_FUN_14a92ae70;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(byte *)((longlong)param_1 + 0x1b) = (*(byte *)((longlong)param_1 + 0x1b) & 0xf8) + 1;
  FUN_144805afa(param_1 + 5);
  *param_1 = (longlong)&PTR_FUN_14a92ae90;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  lVar1 = FUN_1458bb75c();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  (**(code **)(*param_1 + 8))(param_1,lVar2,1);
  return param_1;
}



// FUNCTION 147b066f2 FUN_147b066f2 body=61 status=ok
// SIG undefined FUN_147b066f2(void)

longlong FUN_147b066f2(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_1406d0862();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147b06730 FUN_147b06730 body=79 status=ok
// SIG undefined FUN_147b06730(void)

void FUN_147b06730(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a92ae90;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a92ae70;
  FUN_144760d56(param_1 + 5);
  return;
}



// FUNCTION 147b06780 FUN_147b06780 body=172 status=ok
// SIG undefined FUN_147b06780(void)

longlong * FUN_147b06780(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = (longlong)&PTR_FUN_14a92ae70;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(byte *)((longlong)param_1 + 0x1b) = (*(byte *)((longlong)param_1 + 0x1b) & 0xf8) + 1;
  FUN_144805afa(param_1 + 5);
  *param_1 = (longlong)&PTR_FUN_14a92aeb0;
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
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  lVar1 = FUN_1458bb75c();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  (**(code **)(*param_1 + 8))(param_1,lVar2,1);
  return param_1;
}



// FUNCTION 147b0682c FUN_147b0682c body=149 status=ok
// SIG undefined FUN_147b0682c(void)

void FUN_147b0682c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a92aeb0;
  FUN_14063df0f(param_1[0x48],*(undefined4 *)(param_1 + 0x49));
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_1406c2f92(param_1[0x41],*(undefined4 *)(param_1 + 0x42));
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a92ae70;
  FUN_144760d56(param_1 + 5);
  return;
}



// FUNCTION 147b068c2 FUN_147b068c2 body=191 status=ok
// SIG undefined FUN_147b068c2(void)

void FUN_147b068c2(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x660);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0x1e0) = lVar1;
  FUN_140c99494(param_1 + 0x1e8,param_2 + 0x620);
  lVar1 = *(longlong *)(param_2 + 0x630);
  if (DAT_14c950c29 == 1) {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x630);
    }
  }
  *(longlong *)(param_1 + 0x1f8) = lVar1;
  FUN_147876444(param_1 + 0x200,param_2 + 0x390);
  FUN_147b06a36(param_1,param_2,param_3);
  return;
}



// FUNCTION 147b06982 FUN_147b06982 body=178 status=ok
// SIG undefined FUN_147b06982(void)

undefined4 FUN_147b06982(longlong param_1)

{
  undefined1 auStack_e8 [40];
  longlong local_c0 [18];
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_147b075a8();
  FUN_141711404(local_c0,*(undefined4 *)(param_1 + 8),0);
  (**(code **)(local_c0[0] + 0x138))(local_c0,param_1 + 0x1e0);
  FUN_147b4fb58(local_c0,param_1 + 0x1e8);
  (**(code **)(local_c0[0] + 0x138))(local_c0,param_1 + 0x1f8);
  FUN_147b4fcea(local_c0,param_1 + 0x200);
  *(undefined4 *)(param_1 + 8) = local_30;
  FUN_144a7fc42(local_c0);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b06a36 FUN_147b06a36 body=1185 status=ok
// SIG undefined FUN_147b06a36(void)

void FUN_147b06a36(longlong param_1,longlong *param_2,char param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  double dVar12;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(byte *)(param_1 + 0x1cd) = *(byte *)(param_1 + 0x1cd) & 0xbf;
  lVar2 = FUN_144a80466();
  lVar3 = param_2[2];
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
     (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar3);
    }
    *(longlong *)(param_1 + 0x10) = lVar3;
  }
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)((longlong)param_2 + 0x1fb);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x3a3);
  uVar1 = FUN_1448e5c9e(param_2);
  *(undefined1 *)(param_1 + 0x1a) = uVar1;
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)((longlong)param_2 + 0x2ec);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x334);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x331);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x2e9);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x332);
  *(int *)(param_1 + 0x1bc) = (int)*(char *)((longlong)param_2 + 0x3a1);
  *(int *)(param_1 + 0x1c0) = (int)param_2[0x71];
  *(int *)(param_1 + 0x1c4) = (int)param_2[0xd0];
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)((longlong)param_2 + 0x33c);
  bVar4 = *(byte *)((longlong)param_2 + 0x2d6) >> 1 & 1;
  bVar11 = *(byte *)(param_1 + 0x1cc);
  *(byte *)(param_1 + 0x1cc) = bVar11 & 0xfe | bVar4;
  bVar5 = *(byte *)((longlong)param_2 + 0x2d6) >> 1 & 2;
  *(byte *)(param_1 + 0x1cc) = bVar11 & 0xfc | bVar4 | bVar5;
  bVar6 = *(byte *)((longlong)param_2 + 0x2d6) >> 4 & 8;
  *(byte *)(param_1 + 0x1cc) = bVar11 & 0xf4 | bVar4 | bVar5 | bVar6;
  bVar7 = *(byte *)((longlong)param_2 + 0x2d6) >> 4 & 4;
  *(byte *)(param_1 + 0x1cc) = bVar11 & 0xf0 | bVar4 | bVar5 | bVar6 | bVar7;
  bVar8 = (*(byte *)((longlong)param_2 + 0x2dc) & 2) << 3;
  *(byte *)(param_1 + 0x1cc) = bVar11 & 0xe0 | bVar4 | bVar5 | bVar6 | bVar7 | bVar8;
  bVar9 = *(byte *)((longlong)param_2 + 0x2dc) >> 2 & 0x20;
  *(byte *)(param_1 + 0x1cc) = bVar11 & 0xc0 | bVar4 | bVar5 | bVar6 | bVar7 | bVar8 | bVar9;
  bVar10 = *(byte *)((longlong)param_2 + 0x2dc) & 0x40;
  *(byte *)(param_1 + 0x1cc) =
       bVar11 & 0x80 | bVar4 | bVar5 | bVar6 | bVar7 | bVar8 | bVar9 | bVar10;
  *(byte *)(param_1 + 0x1cc) =
       bVar4 | bVar5 | bVar6 | bVar7 | bVar8 | bVar9 | bVar10 |
       (*(byte *)((longlong)param_2 + 0x2d6) & 8) << 4;
  bVar4 = *(byte *)((longlong)param_2 + 0x2d6) >> 4 & 1;
  bVar11 = *(byte *)(param_1 + 0x1cd);
  *(byte *)(param_1 + 0x1cd) = bVar11 & 0xfe | bVar4;
  bVar5 = *(byte *)((longlong)param_2 + 0x2d6) >> 4 & 2;
  *(byte *)(param_1 + 0x1cd) = bVar11 & 0xfc | bVar4 | bVar5;
  bVar6 = *(byte *)((longlong)param_2 + 0x2d4) >> 4 & 4;
  *(byte *)(param_1 + 0x1cd) = bVar11 & 0xf8 | bVar4 | bVar5 | bVar6;
  bVar7 = *(char *)((longlong)param_2 + 0x675) * '\x02' & 8;
  *(byte *)(param_1 + 0x1cd) = bVar11 & 0xf0 | bVar4 | bVar5 | bVar6 | bVar7;
  bVar8 = *(byte *)((longlong)param_2 + 0x2d5) & 0x10;
  *(byte *)(param_1 + 0x1cd) = bVar11 & 0xe0 | bVar4 | bVar5 | bVar6 | bVar7 | bVar8;
  *(byte *)(param_1 + 0x1cd) =
       bVar11 & 0x60 | bVar4 | bVar5 | bVar6 | bVar7 | bVar8 |
       *(char *)((longlong)param_2 + 0x2de) * '\x02' & 0x80U;
  bVar11 = *(byte *)(param_1 + 0x1ce);
  bVar4 = *(byte *)((longlong)param_2 + 0x1f9) >> 2 & 2;
  *(byte *)(param_1 + 0x1ce) = bVar11 & 0xfd | bVar4;
  bVar5 = *(char *)((longlong)param_2 + 0x9f) * '\x02' & 4;
  *(byte *)(param_1 + 0x1ce) = bVar11 & 0xf9 | bVar4 | bVar5;
  bVar6 = *(byte *)(param_2 + 0x3f) >> 2 & 8;
  *(byte *)(param_1 + 0x1ce) = bVar11 & 0xf1 | bVar4 | bVar5 | bVar6;
  bVar7 = *(byte *)((longlong)param_2 + 0x2d4) >> 3 & 1;
  *(byte *)(param_1 + 0x1ce) = bVar11 & 0xf0 | bVar4 | bVar5 | bVar6 | bVar7;
  *(byte *)(param_1 + 0x1ce) =
       bVar11 & 0xe0 | bVar4 | bVar5 | bVar6 | bVar7 | *(byte *)((longlong)param_2 + 0x66c) & 0x10;
  *(int *)(param_1 + 0x1d0) = (int)param_2[0xcd];
  *(undefined1 *)(param_1 + 0x1d4) = *(undefined1 *)((longlong)param_2 + 0x2d1);
  *(undefined1 *)(param_1 + 0x1d5) = *(undefined1 *)((longlong)param_2 + 0x1fc);
  (**(code **)(*param_2 + 0x7a8))(param_2,local_a8);
  dVar12 = (double)FUN_144a91046(local_a8);
  bVar5 = ((dVar12 < 0.0 ^ *(byte *)((longlong)param_2 + 0x676)) & 1) << 5;
  bVar11 = *(byte *)(param_1 + 0x1ce);
  bVar4 = *(byte *)(param_1 + 0x1cf);
  *(byte *)(param_1 + 0x1ce) = bVar11 & 0xdf | bVar5;
  *(byte *)(param_1 + 0x1ce) =
       bVar11 & 0x5f | bVar5 | *(char *)((longlong)param_2 + 0x675) * '\x02' & 0x80U;
  bVar11 = *(byte *)((longlong)param_2 + 0x2d3) >> 3 & 1;
  *(byte *)(param_1 + 0x1cf) = bVar4 & 0xfe | bVar11;
  bVar5 = *(byte *)((longlong)param_2 + 0x674) >> 5 & 2;
  *(byte *)(param_1 + 0x1cf) = bVar4 & 0xfc | bVar11 | bVar5;
  bVar6 = *(byte *)((longlong)param_2 + 0x674) >> 5 & 4;
  *(byte *)(param_1 + 0x1cf) = bVar4 & 0xf8 | bVar11 | bVar5 | bVar6;
  *(byte *)(param_1 + 0x1cf) =
       bVar4 & 0xf0 | bVar11 | bVar5 | bVar6 | (*(byte *)((longlong)param_2 + 0x2de) & 2) << 2;
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_144a80466();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)((longlong)param_2 + 0x7cc);
      *(int *)(param_1 + 0x1b4) = (int)param_2[0xfa];
      *(byte *)(param_1 + 0x1ce) =
           *(byte *)(param_1 + 0x1ce) & 0xbf | (*(byte *)((longlong)param_2 + 0x7d4) & 1) << 6;
      lVar3 = FUN_1458bb75c();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        *(byte *)(param_1 + 0x1cd) =
             *(byte *)(param_1 + 0x1cd) & 0xdf | (*(byte *)(param_2 + 0x17b) & 1) << 5;
        *(int *)(param_1 + 0x1b8) = (int)param_2[0xf9];
      }
    }
  }
  if (param_3 != '\0') {
    FUN_1400f437c(param_1 + 0x28,param_2 + 0x82);
  }
  *(int *)(param_1 + 0x1d8) = (int)param_2[0xce];
  bVar11 = *(byte *)(param_1 + 0x1cf);
  bVar4 = (*(byte *)((longlong)param_2 + 0x66c) & 2) << 3;
  *(byte *)(param_1 + 0x1cf) = bVar11 & 0xef | bVar4;
  *(byte *)(param_1 + 0x1cf) = bVar11 & 0xcf | bVar4 | (*(byte *)(param_2 + 0x5b) & 1) << 5;
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b06ed8 FUN_147b06ed8 body=1742 status=ok
// SIG undefined FUN_147b06ed8(void)

/* WARNING: Removing unreachable block (ram,0x000147b07237) */
/* WARNING: Removing unreachable block (ram,0x000147b07537) */

void FUN_147b06ed8(longlong param_1,longlong param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_d8 [39];
  undefined1 local_b1;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = *(longlong *)(param_2 + 0x660);
  local_b1 = param_3;
  local_b0 = param_2;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
LAB_147b06f35:
    FUN_1400bbfae(&local_a8,lVar5);
    *(undefined4 *)(param_1 + 0x1e8) = (undefined4)local_a8;
    *(undefined4 *)(param_1 + 0x1ec) = local_a8._4_4_;
    *(undefined4 *)(param_1 + 0x1f0) = (undefined4)uStack_a0;
    *(undefined4 *)(param_1 + 500) = uStack_a0._4_4_;
    if ((undefined8 *)(param_1 + 0x1e8) == &local_a8) {
      if (local_98 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x1f8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x1f8) = local_98;
      local_98 = 0;
      *(undefined4 *)(param_1 + 0x200) = (undefined4)uStack_90;
      *(undefined4 *)(param_1 + 0x204) = uStack_90._4_4_;
    }
    cVar7 = (*(code *)PTR_FUN_14c758760)();
    if (cVar7 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      if ((*(uint *)(lVar8 + 8) & 0x8400000) != 0) {
        *(undefined8 *)(param_1 + 0x1e0) = 0;
        goto LAB_147b0704f;
      }
    }
    FUN_14485c47a(param_1 + 0x1e0,lVar5);
  }
  else {
    if (lVar5 != 0) goto LAB_147b06f35;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 0x200) = 0;
    if (*(int *)(param_1 + 0x204) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x1f8),0);
    }
    puVar6 = *(undefined2 **)(param_1 + 0x1f8);
    if (puVar6 != (undefined2 *)0x0) {
      *puVar6 = 0;
    }
  }
LAB_147b0704f:
  iVar3 = *(int *)(local_b0 + 0x628);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(local_b0 + 0x620);
    lVar8 = 0;
    do {
      lVar10 = *(longlong *)(lVar5 + lVar8);
      if ((lVar10 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar10);
      }
      if ((lVar10 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar10);
LAB_147b0713e:
        local_88 = 0;
        uStack_90 = 0;
        local_98 = 0;
        uStack_a0 = 0;
        local_a8 = 0;
        FUN_1400bbfae(&local_80,lVar10);
        uStack_a0 = CONCAT44(uStack_7c,local_80);
        local_98 = CONCAT44(uStack_74,uStack_78);
        if (uStack_90 != 0) {
          FUN_1400020a8();
        }
        uStack_90 = CONCAT44(uStack_6c,local_70);
        local_88 = CONCAT44(uStack_64,uStack_68);
        cVar7 = (*(code *)PTR_FUN_14c758760)();
        if (cVar7 != '\0') {
          uVar2 = *(uint *)(lVar10 + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          if ((*(uint *)(lVar9 + 8) & 0x8400000) != 0) {
            local_a8 = 0;
            goto LAB_147b071ce;
          }
        }
        FUN_14485c47a(&local_a8,lVar10);
      }
      else {
        uStack_90 = 0;
        local_88 = 0;
        if (lVar10 != 0) goto LAB_147b0713e;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
      }
LAB_147b071ce:
      iVar4 = *(int *)(param_1 + 0x210);
      lVar10 = (longlong)iVar4;
      *(uint *)(param_1 + 0x210) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x214) < iVar4 + 1U) {
        FUN_147b4fa30((longlong *)(param_1 + 0x208),iVar4);
      }
      lVar9 = *(longlong *)(param_1 + 0x208);
      *(undefined8 *)(lVar9 + lVar10 * 0x28) = local_a8;
      puVar1 = (undefined4 *)(lVar9 + 8 + lVar10 * 0x28);
      *puVar1 = (undefined4)uStack_a0;
      puVar1[1] = uStack_a0._4_4_;
      puVar1[2] = (undefined4)local_98;
      puVar1[3] = local_98._4_4_;
      *(longlong *)(lVar9 + 0x18 + lVar10 * 0x28) = uStack_90;
      uStack_90 = 0;
      *(undefined4 *)(lVar9 + 0x20 + lVar10 * 0x28) = (undefined4)local_88;
      *(undefined4 *)(lVar9 + 0x24 + lVar10 * 0x28) = local_88._4_4_;
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar3 * 8 != lVar8);
  }
  lVar5 = *(longlong *)(local_b0 + 0x630);
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  else if (lVar5 == 0) {
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x228) = 0;
    *(undefined4 *)(param_1 + 0x238) = 0;
    if (*(int *)(param_1 + 0x23c) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x230),0);
    }
    puVar6 = *(undefined2 **)(param_1 + 0x230);
    if (puVar6 != (undefined2 *)0x0) {
      *puVar6 = 0;
    }
    goto LAB_147b0737f;
  }
  FUN_1400bbfae(&local_a8,lVar5);
  *(undefined4 *)(param_1 + 0x220) = (undefined4)local_a8;
  *(undefined4 *)(param_1 + 0x224) = local_a8._4_4_;
  *(undefined4 *)(param_1 + 0x228) = (undefined4)uStack_a0;
  *(undefined4 *)(param_1 + 0x22c) = uStack_a0._4_4_;
  if ((undefined8 *)(param_1 + 0x220) == &local_a8) {
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x230) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x230) = local_98;
    local_98 = 0;
    *(undefined4 *)(param_1 + 0x238) = (undefined4)uStack_90;
    *(undefined4 *)(param_1 + 0x23c) = uStack_90._4_4_;
  }
  cVar7 = (*(code *)PTR_FUN_14c758760)();
  if (cVar7 != '\0') {
    uVar2 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    if ((*(uint *)(lVar8 + 8) & 0x8400000) != 0) {
      *(undefined8 *)(param_1 + 0x218) = 0;
      goto LAB_147b0737f;
    }
  }
  FUN_14485c47a(param_1 + 0x218,lVar5);
LAB_147b0737f:
  iVar3 = *(int *)(local_b0 + 0x398);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(local_b0 + 0x390);
    lVar8 = 0;
    do {
      lVar10 = *(longlong *)(lVar5 + lVar8);
      if ((lVar10 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar10);
      }
      if ((lVar10 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar10);
LAB_147b0743e:
        local_88 = 0;
        uStack_90 = 0;
        local_98 = 0;
        uStack_a0 = 0;
        local_a8 = 0;
        FUN_1400bbfae(&local_80,lVar10);
        uStack_a0 = CONCAT44(uStack_7c,local_80);
        local_98 = CONCAT44(uStack_74,uStack_78);
        if (uStack_90 != 0) {
          FUN_1400020a8();
        }
        uStack_90 = CONCAT44(uStack_6c,local_70);
        local_88 = CONCAT44(uStack_64,uStack_68);
        cVar7 = (*(code *)PTR_FUN_14c758760)();
        if (cVar7 != '\0') {
          uVar2 = *(uint *)(lVar10 + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          if ((*(uint *)(lVar9 + 8) & 0x8400000) != 0) {
            local_a8 = 0;
            goto LAB_147b074ce;
          }
        }
        FUN_14485c47a(&local_a8,lVar10);
      }
      else {
        uStack_90 = 0;
        local_88 = 0;
        if (lVar10 != 0) goto LAB_147b0743e;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
      }
LAB_147b074ce:
      iVar4 = *(int *)(param_1 + 0x248);
      lVar10 = (longlong)iVar4;
      *(uint *)(param_1 + 0x248) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x24c) < iVar4 + 1U) {
        FUN_147b4fac4((longlong *)(param_1 + 0x240),iVar4);
      }
      lVar9 = *(longlong *)(param_1 + 0x240);
      *(undefined8 *)(lVar9 + lVar10 * 0x28) = local_a8;
      puVar1 = (undefined4 *)(lVar9 + 8 + lVar10 * 0x28);
      *puVar1 = (undefined4)uStack_a0;
      puVar1[1] = uStack_a0._4_4_;
      puVar1[2] = (undefined4)local_98;
      puVar1[3] = local_98._4_4_;
      *(longlong *)(lVar9 + 0x18 + lVar10 * 0x28) = uStack_90;
      uStack_90 = 0;
      *(undefined4 *)(lVar9 + 0x20 + lVar10 * 0x28) = (undefined4)local_88;
      *(undefined4 *)(lVar9 + 0x24 + lVar10 * 0x28) = local_88._4_4_;
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar3 * 8 != lVar8);
  }
  FUN_147b06a36(param_1,local_b0,local_b1);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b075a8 FUN_147b075a8 body=176 status=ok
// SIG undefined FUN_147b075a8(void)

undefined4 FUN_147b075a8(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [144];
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_141711404(local_c0,0,0);
  *(undefined4 *)(param_1 + 8) = 0;
  if (DAT_14cae5188 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cae5188 = FUN_140002ddd(FUN_1463d385d,uVar1,L"ISMComponentDescriptorBase");
  }
  FUN_14047320e(DAT_14cae5188,local_c0,param_1,0);
  *(undefined4 *)(param_1 + 8) = local_30;
  FUN_144a7fc42(local_c0);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0765a FUN_147b0765a body=178 status=ok
// SIG undefined FUN_147b0765a(void)

undefined4 FUN_147b0765a(longlong param_1)

{
  undefined1 auStack_e8 [40];
  longlong local_c0 [18];
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_147b075a8();
  FUN_141711404(local_c0,*(undefined4 *)(param_1 + 8),0);
  (**(code **)(local_c0[0] + 0x130))(local_c0,param_1 + 0x1e0);
  FUN_147b4ff10(local_c0,param_1 + 0x208);
  (**(code **)(local_c0[0] + 0x130))(local_c0,param_1 + 0x218);
  FUN_147b501aa(local_c0,param_1 + 0x240);
  *(undefined4 *)(param_1 + 8) = local_30;
  FUN_144a7fc42(local_c0);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0770e FUN_147b0770e body=1049 status=ok
// SIG undefined FUN_147b0770e(void)

void FUN_147b0770e(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ulonglong uVar9;
  
  *(undefined1 *)((longlong)param_2 + 0x1fb) = *(undefined1 *)(param_1 + 0x18);
  *(undefined1 *)((longlong)param_2 + 0x3a3) = *(undefined1 *)(param_1 + 0x19);
  FUN_1479ed6d8(param_2,*(undefined1 *)(param_1 + 0x1a));
  *(undefined1 *)((longlong)param_2 + 0x2ec) = *(undefined1 *)(param_1 + 0x1b);
  *(undefined4 *)((longlong)param_2 + 0x334) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined1 *)((longlong)param_2 + 0x331) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)((longlong)param_2 + 0x2e9) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)((longlong)param_2 + 0x332) = *(undefined1 *)(param_1 + 0x22);
  lVar2 = param_1 + 0x28;
  FUN_1400f437c(param_2 + 0x82,lVar2);
  *(undefined4 *)((longlong)param_2 + 0x7cc) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)(param_2 + 0xfa) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined1 *)((longlong)param_2 + 0x3a1) = *(undefined1 *)(param_1 + 0x1bc);
  *(undefined4 *)(param_2 + 0x71) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)((longlong)param_2 + 0x33c) = *(undefined4 *)(param_1 + 0x1c8);
  bVar1 = *(byte *)((longlong)param_2 + 0x2d6);
  bVar3 = *(char *)(param_1 + 0x1cc) * '\x02' & 2;
  *(byte *)((longlong)param_2 + 0x2d6) = bVar1 & 0xfd | bVar3;
  bVar4 = *(char *)(param_1 + 0x1cc) * '\x02' & 4;
  *(byte *)((longlong)param_2 + 0x2d6) = bVar1 & 0xf9 | bVar3 | bVar4;
  bVar5 = (*(byte *)(param_1 + 0x1cc) & 8) << 4;
  *(byte *)((longlong)param_2 + 0x2d6) = bVar1 & 0x79 | bVar3 | bVar4 | bVar5;
  bVar6 = (*(byte *)(param_1 + 0x1cc) & 4) << 4;
  *(byte *)((longlong)param_2 + 0x2d6) = bVar1 & 0x39 | bVar3 | bVar4 | bVar5 | bVar6;
  uVar9 = CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)((longlong)param_2 + 0x2dc)) &
          0xfffffffffffffffd;
  bVar8 = (byte)uVar9 | *(byte *)(param_1 + 0x1cc) >> 3 & 2;
  *(byte *)((longlong)param_2 + 0x2dc) = bVar8;
  uVar9 = CONCAT71((int7)(uVar9 >> 8),bVar8) & 0xffffffffffffff7f;
  bVar8 = (byte)uVar9 | (*(byte *)(param_1 + 0x1cc) & 0x20) << 2;
  *(byte *)((longlong)param_2 + 0x2dc) = bVar8;
  uVar9 = CONCAT71((int7)(uVar9 >> 8),bVar8) & 0xffffffffffffffbf;
  *(byte *)((longlong)param_2 + 0x2dc) = (byte)uVar9 | *(byte *)(param_1 + 0x1cc) & 0x40;
  bVar8 = *(byte *)(param_1 + 0x1cc) >> 4 & 8;
  *(byte *)((longlong)param_2 + 0x2d6) = bVar1 & 0x31 | bVar3 | bVar4 | bVar5 | bVar6 | bVar8;
  bVar7 = (*(byte *)(param_1 + 0x1cd) & 1) << 4;
  *(byte *)((longlong)param_2 + 0x2d6) =
       bVar1 & 0x21 | bVar3 | bVar4 | bVar5 | bVar6 | bVar8 | bVar7;
  *(byte *)((longlong)param_2 + 0x2d6) =
       bVar1 & 1 | bVar3 | bVar4 | bVar5 | bVar6 | bVar8 | bVar7 |
       (*(byte *)(param_1 + 0x1cd) & 2) << 4;
  *(byte *)((longlong)param_2 + 0x2d4) =
       *(byte *)((longlong)param_2 + 0x2d4) & 0xbf | (*(byte *)(param_1 + 0x1cd) & 4) << 4;
  *(byte *)((longlong)param_2 + 0x675) =
       *(byte *)((longlong)param_2 + 0x675) & 0xfb | *(byte *)(param_1 + 0x1cd) >> 1 & 4;
  *(byte *)((longlong)param_2 + 0x2d5) =
       *(byte *)((longlong)param_2 + 0x2d5) & 0xef | *(byte *)(param_1 + 0x1cd) & 0x10;
  *(byte *)((longlong)param_2 + 0x2de) =
       *(byte *)((longlong)param_2 + 0x2de) & 0xbf | *(byte *)(param_1 + 0x1cd) >> 1 & 0x40;
  *(byte *)((longlong)param_2 + 0x1f9) =
       *(byte *)((longlong)param_2 + 0x1f9) & 0xf7 | (*(byte *)(param_1 + 0x1ce) & 2) << 2;
  *(byte *)((longlong)param_2 + 0x9f) =
       *(byte *)((longlong)param_2 + 0x9f) & 0xfd | *(byte *)(param_1 + 0x1ce) >> 1 & 2;
  uVar9 = CONCAT71((int7)(uVar9 >> 8),*(undefined1 *)(param_1 + 0x1ce)) & 0xffffffffffffff08;
  FUN_14581d7fa(param_2,CONCAT71((int7)(uVar9 >> 8),(byte)uVar9 >> 3));
  *(byte *)((longlong)param_2 + 0x2d4) =
       *(byte *)((longlong)param_2 + 0x2d4) & 0xf7 | (*(byte *)(param_1 + 0x1ce) & 1) << 3;
  *(byte *)((longlong)param_2 + 0x66c) =
       *(byte *)((longlong)param_2 + 0x66c) & 0xef | *(byte *)(param_1 + 0x1ce) & 0x10;
  *(byte *)((longlong)param_2 + 0x676) =
       *(byte *)((longlong)param_2 + 0x676) & 0xfe | *(byte *)(param_1 + 0x1ce) >> 5 & 1;
  *(byte *)((longlong)param_2 + 0x7d4) =
       *(byte *)((longlong)param_2 + 0x7d4) & 0xfe | *(byte *)(param_1 + 0x1ce) >> 6 & 1;
  *(byte *)((longlong)param_2 + 0x675) =
       *(byte *)((longlong)param_2 + 0x675) & 0xbf | *(byte *)(param_1 + 0x1ce) >> 1 & 0x40;
  bVar1 = *(byte *)(param_1 + 0x1cf);
  if ((((*(byte *)((longlong)param_2 + 0x2d3) & 8) == 0 ^ bVar1) & 1) == 0) {
    *(byte *)((longlong)param_2 + 0x2d3) =
         *(byte *)((longlong)param_2 + 0x2d3) & 0xf7 | (bVar1 & 1) << 3;
    (**(code **)(*param_2 + 0x958))(param_2);
    bVar1 = *(byte *)(param_1 + 0x1cf);
  }
  bVar3 = *(byte *)((longlong)param_2 + 0x674);
  bVar1 = (bVar1 & 2) << 5;
  *(byte *)((longlong)param_2 + 0x674) = bVar3 & 0xbf | bVar1;
  *(byte *)((longlong)param_2 + 0x674) =
       bVar3 & 0x3f | bVar1 | (*(byte *)(param_1 + 0x1cf) & 4) << 5;
  *(byte *)((longlong)param_2 + 0x2de) =
       *(byte *)((longlong)param_2 + 0x2de) & 0xfd | *(byte *)(param_1 + 0x1cf) >> 2 & 2;
  *(undefined4 *)(param_2 + 0xcd) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined1 *)((longlong)param_2 + 0x2d1) = *(undefined1 *)(param_1 + 0x1d4);
  *(undefined1 *)((longlong)param_2 + 0x1fc) = *(undefined1 *)(param_1 + 0x1d5);
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_1458bb75c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      *(uint *)(param_2 + 0x17b) =
           *(uint *)(param_2 + 0x17b) & 0xfffffffe | *(byte *)(param_1 + 0x1cd) >> 5 & 1;
      *(undefined4 *)(param_2 + 0xf9) = *(undefined4 *)(param_1 + 0x1b8);
    }
  }
  *(undefined4 *)(param_2 + 0xce) = *(undefined4 *)(param_1 + 0x1d8);
  *(byte *)((longlong)param_2 + 0x66c) =
       *(byte *)((longlong)param_2 + 0x66c) & 0xfd | *(byte *)(param_1 + 0x1cf) >> 3 & 2;
  *(uint *)(param_2 + 0x5b) =
       *(uint *)(param_2 + 0x5b) & 0xfffffffe | *(byte *)(param_1 + 0x1cf) >> 5 & 1;
  return;
}



// FUNCTION 147b07b28 FUN_147b07b28 body=404 status=ok
// SIG undefined FUN_147b07b28(void)

void FUN_147b07b28(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0xa78))(param_2,*(undefined8 *)(param_1 + 0x1e0));
  iVar2 = *(int *)(param_1 + 0x1f0);
  local_50 = param_2;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  plVar1 = param_2 + 0xc4;
  *(undefined4 *)(param_2 + 0xc5) = 0;
  if (*(int *)((longlong)param_2 + 0x62c) != iVar2) {
    FUN_1474ba72a(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0x1f0);
  local_58 = param_1;
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1e8);
    lVar5 = 0;
    do {
      lVar6 = FUN_14353f346(&local_50,*(undefined8 *)(lVar4 + lVar5));
      if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar6);
      }
      iVar3 = (int)param_2[0xc5];
      *(uint *)(param_2 + 0xc5) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0x62c) < iVar3 + 1U) {
        FUN_140655806(plVar1,iVar3);
      }
      *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = lVar6;
      if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar6);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar2 * 8 != lVar5);
  }
  lVar4 = local_58;
  lVar5 = FUN_14353f346(&local_50,*(undefined8 *)(local_58 + 0x1f8));
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  param_2[0xc6] = lVar5;
  FUN_147876444(param_2 + 0x72,lVar4 + 0x200);
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_147b0770e(lVar4,param_2);
  return;
}



// FUNCTION 147b07cbe FUN_147b07cbe body=572 status=ok
// SIG undefined FUN_147b07cbe(void)

void FUN_147b07cbe(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_147b066f2(param_1 + 0x1e0);
  (**(code **)(*param_2 + 0xa78))(param_2,uVar2);
  iVar5 = *(int *)(param_1 + 0x210);
  local_50 = param_2;
  if (-1 < iVar5) {
    plVar1 = param_2 + 0xc4;
    *(undefined4 *)(param_2 + 0xc5) = 0;
    if (*(int *)((longlong)param_2 + 0x62c) != iVar5) {
      FUN_1474ba72a(plVar1);
    }
    if ((longlong)*(int *)(param_1 + 0x210) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x208);
      lVar6 = (longlong)*(int *)(param_1 + 0x210) * 0x28;
      do {
        lVar4 = FUN_14353f5ea(&local_50,lVar3);
        if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar4);
        }
        iVar5 = (int)param_2[0xc5];
        *(uint *)(param_2 + 0xc5) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0x62c) < iVar5 + 1U) {
          FUN_140655806(plVar1,iVar5);
        }
        *(longlong *)(*plVar1 + (longlong)iVar5 * 8) = lVar4;
        if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar4);
        }
        lVar3 = lVar3 + 0x28;
        lVar6 = lVar6 + -0x28;
      } while (lVar6 != 0);
    }
    lVar3 = FUN_14353f5ea(&local_50,param_1 + 0x218);
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    param_2[0xc6] = lVar3;
    iVar5 = *(int *)(param_1 + 0x248);
    if (-1 < iVar5) {
      plVar1 = param_2 + 0x72;
      *(undefined4 *)(param_2 + 0x73) = 0;
      if (*(int *)((longlong)param_2 + 0x39c) != iVar5) {
        FUN_147b50444(plVar1);
      }
      if ((longlong)*(int *)(param_1 + 0x248) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x240);
        lVar6 = (longlong)*(int *)(param_1 + 0x248) * 0x28;
        do {
          lVar4 = FUN_147b07efc(lVar3);
          if (lVar4 != 0) {
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar4);
            }
            iVar5 = (int)param_2[0x73];
            *(uint *)(param_2 + 0x73) = iVar5 + 1U;
            if (*(uint *)((longlong)param_2 + 0x39c) < iVar5 + 1U) {
              FUN_147b4fe8a(plVar1,iVar5);
            }
            *(longlong *)(*plVar1 + (longlong)iVar5 * 8) = lVar4;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar4);
            }
          }
          lVar3 = lVar3 + 0x28;
          lVar6 = lVar6 + -0x28;
        } while (lVar6 != 0);
      }
      if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      FUN_147b0770e(param_1,param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar5);
}



// FUNCTION 147b07efc FUN_147b07efc body=61 status=ok
// SIG undefined FUN_147b07efc(void)

longlong FUN_147b07efc(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_141108188();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147b07f3e FUN_147b07f3e body=25 status=ok
// SIG undefined FUN_147b07f3e(void)

undefined8 FUN_147b07f3e(undefined8 param_1,undefined8 param_2)

{
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 147b07f58 FUN_147b07f58 body=25 status=ok
// SIG undefined FUN_147b07f58(void)

undefined8 FUN_147b07f58(undefined8 param_1,undefined8 param_2)

{
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 147b07f8a FUN_147b07f8a body=64 status=ok
// SIG undefined FUN_147b07f8a(void)

void FUN_147b07f8a(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (*(code *)*param_3)(param_3[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0800e FUN_147b0800e body=390 status=ok
// SIG undefined FUN_147b0800e(void)

void FUN_147b0800e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58 [3];
  longlong local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
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
  plVar1 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_40;
  if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_147b08196(plVar2,&local_60,plVar1);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b08196 FUN_147b08196 body=232 status=ok
// SIG undefined FUN_147b08196(void)

void FUN_147b08196(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    FUN_140c5c1ec(param_3,0);
  }
  if (0 < (int)param_1[1]) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(*param_1 + lVar5 * 8);
      if (lVar2 != 0) {
        lVar4 = *param_2;
        if ((lVar4 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar4);
LAB_147b081f6:
          lVar3 = FUN_144a6c4d8();
          if (((lVar3 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
              lVar3 + 0x30)) goto LAB_147b08218;
        }
        else {
          if (lVar4 != 0) goto LAB_147b081f6;
LAB_147b08218:
          lVar4 = 0;
        }
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_1447d05f2(param_3,iVar1);
          }
          *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar2;
        }
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 147b08284 FUN_147b08284 body=345 status=ok
// SIG undefined FUN_147b08284(void)

void FUN_147b08284(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 local_3d;
  int local_3c;
  longlong local_38 [2];
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar1 = local_3c;
  local_3d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = &local_21;
  FUN_147b0abe0(plVar2,iVar1 != 0,local_3d,&local_22);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b083e4 FUN_147b083e4 body=345 status=ok
// SIG undefined FUN_147b083e4(void)

void FUN_147b083e4(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 local_3d;
  int local_3c;
  longlong local_38 [2];
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar1 = local_3c;
  local_3d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = &local_21;
  FUN_147b0ac5d(plVar2,iVar1 != 0,local_3d,&local_22);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b08544 FUN_147b08544 body=345 status=ok
// SIG undefined FUN_147b08544(void)

void FUN_147b08544(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 local_3d;
  int local_3c;
  longlong local_38 [2];
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar1 = local_3c;
  local_3d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = &local_21;
  FUN_147b0ac35(plVar2,iVar1 != 0,local_3d,&local_22);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b086a4 FUN_147b086a4 body=345 status=ok
// SIG undefined FUN_147b086a4(void)

void FUN_147b086a4(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 local_3d;
  int local_3c;
  longlong local_38 [2];
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar1 = local_3c;
  local_3d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = &local_21;
  FUN_147b0ac08(plVar2,iVar1 != 0,local_3d,&local_22);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0880a FUN_147b0880a body=412 status=ok
// SIG undefined FUN_147b0880a(void)

void FUN_147b0880a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  int local_40;
  int local_3c;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar3 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar2 = local_3c;
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  iVar1 = local_40;
  local_41 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b089a8(plVar3,iVar2 != 0,iVar1 != 0,local_41);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b089a8 FUN_147b089a8 body=3527 status=ok
// SIG undefined FUN_147b089a8(void)

void FUN_147b089a8(longlong *param_1,char param_2,char param_3,char param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  bool bVar23;
  float fVar24;
  undefined1 auStack_3b8 [39];
  char local_391;
  longlong *local_390;
  uint local_384;
  int *local_380;
  uint local_374;
  int *local_370;
  longlong local_368;
  ulonglong local_360;
  longlong local_358;
  ulonglong local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  uVar16 = *(uint *)(param_1 + 1);
  uVar22 = (ulonglong)uVar16;
  local_391 = param_3;
  if (param_2 == '\0') {
    if (param_4 == '\0') {
      if (1 < (int)uVar16) {
        lVar11 = *param_1;
        memset(local_338,0,0x2f0);
        local_340 = lVar11 + uVar22 * 8 + -8;
        local_348 = lVar11;
        fVar24 = logf((float)(int)uVar16);
        cVar8 = local_391;
        local_338[0] = (int)(longlong)(fVar24 + fVar24);
        plVar7 = &local_348;
        do {
          piVar12 = (int *)*plVar7;
          piVar10 = (int *)plVar7[1];
          uVar16 = *(uint *)(plVar7 + 2);
          iVar2 = (int)((ulonglong)((longlong)piVar10 - (longlong)piVar12) >> 3);
          uVar20 = iVar2 + 1;
          piVar14 = piVar12;
          piVar15 = piVar12;
          piVar17 = piVar10;
          local_390 = plVar7;
          if (uVar16 != 0) {
LAB_147b093b1:
            if (8 < (int)uVar20) {
              uVar1 = *(undefined8 *)(piVar15 + (ulonglong)(uVar20 >> 1) * 2);
              *(undefined8 *)(piVar15 + (ulonglong)(uVar20 >> 1) * 2) = *(undefined8 *)piVar15;
              *(undefined8 *)piVar15 = uVar1;
              piVar19 = piVar17 + 2;
              piVar12 = piVar15;
              local_384 = uVar16;
              local_380 = piVar10;
              local_370 = piVar14;
              do {
                piVar10 = piVar12 + 2;
                piVar14 = piVar12 + 2;
                do {
                  piVar12 = piVar14;
                  piVar6 = piVar10;
                  if (piVar17 < piVar12) break;
                  if (cVar8 == '\0') {
                    iVar2 = *piVar15 - *piVar12;
                    if (*piVar15 - *piVar12 == 0) {
                      iVar2 = piVar15[1] - piVar12[1];
                    }
                  }
                  else {
                    iVar2 = FUN_144a78538(piVar15,piVar12);
                  }
                  piVar10 = piVar6 + 2;
                  piVar14 = piVar12 + 2;
                } while (-1 < iVar2);
                piVar14 = piVar19 + -4;
                do {
                  piVar18 = piVar19;
                  piVar10 = piVar14;
                  piVar19 = piVar18 + -2;
                  if (piVar19 <= piVar15) break;
                  if (cVar8 == '\0') {
                    iVar2 = *piVar19 - *piVar15;
                    if (*piVar19 - *piVar15 == 0) {
                      iVar2 = piVar18[-1] - piVar15[1];
                    }
                  }
                  else {
                    iVar2 = FUN_144a78538(piVar19,piVar15);
                  }
                  piVar14 = piVar10 + -2;
                } while (-1 < iVar2);
                if (piVar19 < piVar12) goto LAB_147b09482;
                uVar1 = *(undefined8 *)piVar12;
                *(undefined8 *)piVar12 = *(undefined8 *)piVar19;
                *(undefined8 *)piVar19 = uVar1;
              } while( true );
            }
            for (; plVar7 = local_390, piVar10 = piVar15, piVar12 = piVar15, piVar15 < piVar17;
                piVar17 = piVar17 + -2) {
              while (piVar14 = piVar10, piVar12 = piVar12 + 2, piVar12 <= piVar17) {
                if (cVar8 == '\0') {
                  iVar2 = *piVar14 - *piVar12;
                  if (*piVar14 - *piVar12 == 0) {
                    iVar2 = piVar14[1] - piVar12[1];
                  }
                }
                else {
                  iVar2 = FUN_144a78538(piVar14,piVar12);
                }
                piVar10 = piVar12;
                if (-1 < iVar2) {
                  piVar10 = piVar14;
                }
              }
              uVar1 = *(undefined8 *)piVar14;
              *(undefined8 *)piVar14 = *(undefined8 *)piVar17;
              *(undefined8 *)piVar17 = uVar1;
            }
            goto LAB_147b09759;
          }
LAB_147b0953c:
          plVar7 = local_390;
          if (uVar20 != 0) {
            iVar2 = (iVar2 - (iVar2 + -1 >> 0x1f)) + -1 >> 1;
            iVar9 = iVar2;
joined_r0x000147b09561:
            do {
              iVar21 = iVar2 * 2 + 1;
              if (iVar21 < (int)uVar20) {
                iVar3 = iVar2 * 2 + 2;
                if (iVar3 < (int)uVar20) {
                  if (cVar8 == '\0') {
                    iVar4 = piVar12[(longlong)iVar3 * 2] - piVar12[(longlong)iVar21 * 2];
                    if (iVar4 == 0) {
                      iVar4 = (piVar12 + (longlong)iVar3 * 2)[1] -
                              (piVar12 + (longlong)iVar21 * 2)[1];
                    }
                  }
                  else {
                    iVar4 = FUN_144a78538();
                  }
                  if (-1 < iVar4) {
                    iVar21 = iVar3;
                  }
                }
                piVar17 = piVar12 + (longlong)iVar2 * 2;
                piVar10 = piVar12 + (longlong)iVar21 * 2;
                if (cVar8 == '\0') {
                  iVar2 = *piVar17 - *piVar10;
                  if (*piVar17 - *piVar10 == 0) {
                    iVar2 = piVar17[1] - piVar10[1];
                  }
                }
                else {
                  iVar2 = FUN_144a78538(piVar17,piVar10);
                }
                if (iVar2 < 0) {
                  uVar1 = *(undefined8 *)piVar17;
                  *(undefined8 *)piVar17 = *(undefined8 *)piVar10;
                  *(undefined8 *)piVar10 = uVar1;
                  iVar2 = iVar21;
                  goto joined_r0x000147b09561;
                }
              }
              bVar23 = iVar9 != 0;
              iVar2 = iVar9 + -1;
              iVar9 = iVar2;
            } while (bVar23);
            plVar7 = local_390;
            if (1 < (int)uVar20) {
              uVar22 = (ulonglong)uVar20;
              uVar1 = *(undefined8 *)piVar12;
              *(undefined8 *)piVar12 = *(undefined8 *)(piVar12 + uVar22 * 2 + -2);
              *(undefined8 *)(piVar12 + uVar22 * 2 + -2) = uVar1;
              if (uVar20 != 2) {
                do {
                  uVar22 = uVar22 - 1;
                  iVar2 = 0;
                  iVar21 = 1;
                  iVar9 = 0;
                  do {
                    iVar2 = iVar2 + 2;
                    iVar3 = iVar21;
                    if ((longlong)iVar2 < (longlong)uVar22) {
                      if (cVar8 == '\0') {
                        iVar4 = piVar12[(longlong)iVar2 * 2] - piVar12[(longlong)iVar21 * 2];
                        if (iVar4 == 0) {
                          iVar4 = (piVar12 + (longlong)iVar2 * 2)[1] -
                                  (piVar12 + (longlong)iVar21 * 2)[1];
                        }
                      }
                      else {
                        iVar4 = FUN_144a78538();
                      }
                      if (-1 < iVar4) {
                        iVar3 = iVar2;
                      }
                    }
                    piVar17 = piVar12 + (longlong)iVar9 * 2;
                    piVar10 = piVar12 + (longlong)iVar3 * 2;
                    if (cVar8 == '\0') {
                      iVar2 = *piVar17 - *piVar10;
                      if (*piVar17 - *piVar10 == 0) {
                        iVar2 = piVar17[1] - piVar10[1];
                      }
                    }
                    else {
                      iVar2 = FUN_144a78538(piVar17,piVar10);
                    }
                    if (-1 < iVar2) break;
                    uVar1 = *(undefined8 *)piVar17;
                    *(undefined8 *)piVar17 = *(undefined8 *)piVar10;
                    *(undefined8 *)piVar10 = uVar1;
                    iVar2 = iVar3 * 2;
                    iVar21 = iVar3 * 2 + 1;
                    iVar9 = iVar3;
                  } while ((longlong)iVar21 < (longlong)uVar22);
                  uVar1 = *(undefined8 *)piVar12;
                  *(undefined8 *)piVar12 = *(undefined8 *)(piVar12 + uVar22 * 2 + -2);
                  *(undefined8 *)(piVar12 + uVar22 * 2 + -2) = uVar1;
                  plVar7 = local_390;
                } while (2 < uVar22);
              }
            }
          }
LAB_147b09759:
          plVar7 = plVar7 + -3;
        } while (&local_348 <= plVar7);
      }
    }
    else if (1 < (int)uVar16) {
      lVar11 = *param_1;
      memset(local_338,0,0x2f0);
      local_340 = lVar11 + uVar22 * 8 + -8;
      local_348 = lVar11;
      fVar24 = logf((float)(int)uVar16);
      cVar8 = local_391;
      local_338[0] = (int)(longlong)(fVar24 + fVar24);
      plVar7 = &local_348;
      do {
        piVar12 = (int *)*plVar7;
        piVar10 = (int *)plVar7[1];
        uVar16 = *(uint *)(plVar7 + 2);
        iVar2 = (int)((ulonglong)((longlong)piVar10 - (longlong)piVar12) >> 3);
        uVar20 = iVar2 + 1;
        piVar14 = piVar12;
        piVar15 = piVar12;
        piVar17 = piVar10;
        local_390 = plVar7;
        if (uVar16 != 0) {
LAB_147b08ce2:
          if (8 < (int)uVar20) {
            uVar1 = *(undefined8 *)(piVar15 + (ulonglong)(uVar20 >> 1) * 2);
            *(undefined8 *)(piVar15 + (ulonglong)(uVar20 >> 1) * 2) = *(undefined8 *)piVar15;
            *(undefined8 *)piVar15 = uVar1;
            piVar19 = piVar17 + 2;
            piVar12 = piVar15;
            local_384 = uVar16;
            local_380 = piVar10;
            local_370 = piVar14;
            do {
              piVar10 = piVar12 + 2;
              piVar14 = piVar12 + 2;
              do {
                piVar12 = piVar14;
                piVar6 = piVar10;
                if (piVar17 < piVar12) break;
                if (cVar8 == '\0') {
                  iVar2 = *piVar12 - *piVar15;
                  if (*piVar12 - *piVar15 == 0) {
                    iVar2 = piVar12[1] - piVar15[1];
                  }
                }
                else {
                  iVar2 = FUN_144a78538(piVar12,piVar15);
                }
                piVar10 = piVar6 + 2;
                piVar14 = piVar12 + 2;
              } while (-1 < iVar2);
              piVar14 = piVar19 + -4;
              do {
                piVar18 = piVar19;
                piVar10 = piVar14;
                piVar19 = piVar18 + -2;
                if (piVar19 <= piVar15) break;
                if (cVar8 == '\0') {
                  iVar2 = *piVar15 - *piVar19;
                  if (*piVar15 - *piVar19 == 0) {
                    iVar2 = piVar15[1] - piVar18[-1];
                  }
                }
                else {
                  iVar2 = FUN_144a78538(piVar15,piVar19);
                }
                piVar14 = piVar10 + -2;
              } while (-1 < iVar2);
              if (piVar19 < piVar12) goto LAB_147b08db3;
              uVar1 = *(undefined8 *)piVar12;
              *(undefined8 *)piVar12 = *(undefined8 *)piVar19;
              *(undefined8 *)piVar19 = uVar1;
            } while( true );
          }
          for (; plVar7 = local_390, piVar10 = piVar15, piVar12 = piVar15, piVar15 < piVar17;
              piVar17 = piVar17 + -2) {
            while (piVar14 = piVar10, piVar12 = piVar12 + 2, piVar12 <= piVar17) {
              if (cVar8 == '\0') {
                iVar2 = *piVar12 - *piVar14;
                if (*piVar12 - *piVar14 == 0) {
                  iVar2 = piVar12[1] - piVar14[1];
                }
              }
              else {
                iVar2 = FUN_144a78538(piVar12,piVar14);
              }
              piVar10 = piVar12;
              if (-1 < iVar2) {
                piVar10 = piVar14;
              }
            }
            uVar1 = *(undefined8 *)piVar14;
            *(undefined8 *)piVar14 = *(undefined8 *)piVar17;
            *(undefined8 *)piVar17 = uVar1;
          }
          goto LAB_147b0908a;
        }
LAB_147b08e6d:
        plVar7 = local_390;
        if (uVar20 != 0) {
          iVar2 = (iVar2 - (iVar2 + -1 >> 0x1f)) + -1 >> 1;
          iVar9 = iVar2;
joined_r0x000147b08e92:
          do {
            iVar21 = iVar2 * 2 + 1;
            if (iVar21 < (int)uVar20) {
              iVar3 = iVar2 * 2 + 2;
              if (iVar3 < (int)uVar20) {
                if (cVar8 == '\0') {
                  iVar4 = piVar12[(longlong)iVar21 * 2] - piVar12[(longlong)iVar3 * 2];
                  if (iVar4 == 0) {
                    iVar4 = (piVar12 + (longlong)iVar21 * 2)[1] - (piVar12 + (longlong)iVar3 * 2)[1]
                    ;
                  }
                }
                else {
                  iVar4 = FUN_144a78538();
                }
                if (-1 < iVar4) {
                  iVar21 = iVar3;
                }
              }
              piVar17 = piVar12 + (longlong)iVar2 * 2;
              piVar10 = piVar12 + (longlong)iVar21 * 2;
              if (cVar8 == '\0') {
                iVar2 = *piVar10 - *piVar17;
                if (*piVar10 - *piVar17 == 0) {
                  iVar2 = piVar10[1] - piVar17[1];
                }
              }
              else {
                iVar2 = FUN_144a78538(piVar10,piVar17);
              }
              if (iVar2 < 0) {
                uVar1 = *(undefined8 *)piVar17;
                *(undefined8 *)piVar17 = *(undefined8 *)piVar10;
                *(undefined8 *)piVar10 = uVar1;
                iVar2 = iVar21;
                goto joined_r0x000147b08e92;
              }
            }
            bVar23 = iVar9 != 0;
            iVar2 = iVar9 + -1;
            iVar9 = iVar2;
          } while (bVar23);
          plVar7 = local_390;
          if (1 < (int)uVar20) {
            uVar22 = (ulonglong)uVar20;
            uVar1 = *(undefined8 *)piVar12;
            *(undefined8 *)piVar12 = *(undefined8 *)(piVar12 + uVar22 * 2 + -2);
            *(undefined8 *)(piVar12 + uVar22 * 2 + -2) = uVar1;
            if (uVar20 != 2) {
              do {
                uVar22 = uVar22 - 1;
                iVar2 = 0;
                iVar21 = 1;
                iVar9 = 0;
                do {
                  iVar2 = iVar2 + 2;
                  iVar3 = iVar21;
                  if ((longlong)iVar2 < (longlong)uVar22) {
                    if (cVar8 == '\0') {
                      iVar4 = piVar12[(longlong)iVar21 * 2] - piVar12[(longlong)iVar2 * 2];
                      if (iVar4 == 0) {
                        iVar4 = (piVar12 + (longlong)iVar21 * 2)[1] -
                                (piVar12 + (longlong)iVar2 * 2)[1];
                      }
                    }
                    else {
                      iVar4 = FUN_144a78538();
                    }
                    if (-1 < iVar4) {
                      iVar3 = iVar2;
                    }
                  }
                  piVar17 = piVar12 + (longlong)iVar9 * 2;
                  piVar10 = piVar12 + (longlong)iVar3 * 2;
                  if (cVar8 == '\0') {
                    iVar2 = *piVar10 - *piVar17;
                    if (*piVar10 - *piVar17 == 0) {
                      iVar2 = piVar10[1] - piVar17[1];
                    }
                  }
                  else {
                    iVar2 = FUN_144a78538(piVar10,piVar17);
                  }
                  if (-1 < iVar2) break;
                  uVar1 = *(undefined8 *)piVar17;
                  *(undefined8 *)piVar17 = *(undefined8 *)piVar10;
                  *(undefined8 *)piVar10 = uVar1;
                  iVar2 = iVar3 * 2;
                  iVar21 = iVar3 * 2 + 1;
                  iVar9 = iVar3;
                } while ((longlong)iVar21 < (longlong)uVar22);
                uVar1 = *(undefined8 *)piVar12;
                *(undefined8 *)piVar12 = *(undefined8 *)(piVar12 + uVar22 * 2 + -2);
                *(undefined8 *)(piVar12 + uVar22 * 2 + -2) = uVar1;
                plVar7 = local_390;
              } while (2 < uVar22);
            }
          }
        }
LAB_147b0908a:
        plVar7 = plVar7 + -3;
      } while (&local_348 <= plVar7);
    }
  }
  else {
    lVar11 = *param_1;
    local_368 = lVar11;
    local_350 = uVar22;
    if (param_4 == '\0') {
      if (0 < (int)uVar16) {
        lVar13 = 0;
        do {
          if (lVar13 + 1U < uVar22) {
            if (param_3 == '\0') {
              iVar2 = *(int *)(local_368 + 8 + lVar13 * 8) - *(int *)(local_368 + lVar13 * 8);
              if (iVar2 == 0) {
                iVar2 = *(int *)(local_368 + 0xc + lVar13 * 8) -
                        *(int *)(local_368 + 4 + lVar13 * 8);
              }
            }
            else {
              iVar2 = FUN_144a78538(lVar11 + 8);
            }
            if (iVar2 < 0) {
              uVar1 = *(undefined8 *)(local_368 + lVar13 * 8);
              *(undefined8 *)(local_368 + lVar13 * 8) = *(undefined8 *)(local_368 + 8 + lVar13 * 8);
              *(undefined8 *)(local_368 + 8 + lVar13 * 8) = uVar1;
            }
          }
          lVar13 = lVar13 + 2;
          lVar11 = lVar11 + 0x10;
        } while ((int)lVar13 < (int)uVar16);
        if (2 < (int)uVar16) {
          uVar5 = 2;
          do {
            local_374 = (int)uVar5 * 2;
            local_358 = (longlong)(int)local_374;
            plVar7 = (longlong *)0x0;
            cVar8 = local_391;
            local_360 = uVar5;
            do {
              uVar16 = (int)uVar22 - (int)plVar7;
              if ((int)local_374 <= (int)uVar16) {
                uVar16 = local_374;
              }
              local_370 = (int *)CONCAT44(local_370._4_4_,uVar16);
              local_390 = plVar7;
              if ((int)local_360 < (int)uVar16 && 0 < (int)local_360) {
                local_380 = (int *)(local_368 + (longlong)plVar7 * 8);
                iVar2 = 0;
                uVar22 = local_360 & 0xffffffff;
                while( true ) {
                  piVar12 = local_380;
                  local_384 = (uint)uVar22;
                  piVar17 = local_380 + (longlong)(int)local_384 * 2;
                  iVar9 = 0;
                  if (local_384 - iVar2 != 0 && iVar2 <= (int)local_384) {
                    iVar9 = 0;
                    uVar16 = local_384 - iVar2;
                    do {
                      iVar21 = iVar9 + (uVar16 >> 1);
                      if (cVar8 == '\0') {
                        iVar3 = *piVar17 - piVar12[(longlong)iVar2 * 2 + (longlong)iVar21 * 2];
                        if (iVar3 == 0) {
                          iVar3 = piVar17[1] -
                                  (piVar12 + (longlong)iVar2 * 2 + (longlong)iVar21 * 2)[1];
                        }
                      }
                      else {
                        iVar3 = FUN_144a78538(piVar17);
                      }
                      if (-1 < iVar3) {
                        iVar9 = iVar21 + (uVar16 & 1);
                      }
                      bVar23 = 1 < uVar16;
                      uVar16 = uVar16 >> 1;
                    } while (bVar23);
                  }
                  iVar9 = iVar9 + iVar2;
                  uVar22 = (ulonglong)local_384;
                  iVar2 = local_384 - iVar9;
                  if (iVar2 == 0 || (int)local_384 < iVar9) break;
                  uVar16 = (int)local_370 - local_384;
                  if (uVar16 == 0 || (int)local_370 < (int)local_384) {
                    iVar21 = 0;
                  }
                  else {
                    piVar12 = local_380 + (longlong)iVar9 * 2;
                    iVar21 = 0;
                    uVar22 = (ulonglong)uVar16;
                    do {
                      uVar22 = uVar22 >> 1;
                      uVar20 = iVar21 + (uint)uVar22;
                      piVar10 = piVar17 + (ulonglong)uVar20 * 2;
                      if (local_391 == '\0') {
                        iVar3 = *piVar10 - *piVar12;
                        if (*piVar10 - *piVar12 == 0) {
                          iVar3 = piVar10[1] - piVar12[1];
                        }
                      }
                      else {
                        iVar3 = FUN_144a78538(piVar10,piVar12);
                      }
                      if (iVar3 < 0) {
                        iVar21 = uVar20 + (uVar16 & 1);
                      }
                      bVar23 = 1 < uVar16;
                      uVar16 = (uint)uVar22;
                    } while (bVar23);
                    uVar22 = (ulonglong)(local_384 + iVar21);
                    cVar8 = local_391;
                    if (0 < iVar21) {
                      piVar17 = piVar12 + (longlong)(int)((local_384 + iVar21) - iVar9) * 2;
                      piVar10 = piVar12 + (longlong)iVar2 * 2;
                      piVar15 = piVar12 + (longlong)iVar2 * 2;
                      do {
                        while( true ) {
                          piVar14 = piVar10 + 2;
                          uVar1 = *(undefined8 *)piVar12;
                          *(undefined8 *)piVar12 = *(undefined8 *)piVar10;
                          piVar12 = piVar12 + 2;
                          *(undefined8 *)piVar10 = uVar1;
                          if (piVar14 == piVar17) break;
                          piVar10 = piVar14;
                          if (piVar12 == piVar15) {
                            piVar15 = piVar14;
                          }
                        }
                        piVar10 = piVar15;
                      } while (piVar12 != piVar15);
                    }
                  }
                  if (((int)local_370 <= (int)uVar22) ||
                     (iVar2 = iVar9 + iVar21 + 1, (int)uVar22 <= iVar2)) break;
                }
              }
              plVar7 = (longlong *)((longlong)local_390 + local_358);
              uVar22 = local_350;
            } while ((longlong)plVar7 < (longlong)local_350);
            uVar5 = (ulonglong)local_374;
          } while ((int)local_374 < (int)local_350);
        }
      }
    }
    else if (0 < (int)uVar16) {
      lVar13 = 0;
      do {
        if (lVar13 + 1U < uVar22) {
          if (param_3 == '\0') {
            iVar2 = *(int *)(local_368 + lVar13 * 8) - *(int *)(local_368 + 8 + lVar13 * 8);
            if (iVar2 == 0) {
              iVar2 = *(int *)(local_368 + 4 + lVar13 * 8) - *(int *)(local_368 + 0xc + lVar13 * 8);
            }
          }
          else {
            iVar2 = FUN_144a78538(lVar11);
          }
          if (iVar2 < 0) {
            uVar1 = *(undefined8 *)(local_368 + lVar13 * 8);
            *(undefined8 *)(local_368 + lVar13 * 8) = *(undefined8 *)(local_368 + 8 + lVar13 * 8);
            *(undefined8 *)(local_368 + 8 + lVar13 * 8) = uVar1;
          }
        }
        lVar13 = lVar13 + 2;
        lVar11 = lVar11 + 0x10;
      } while ((int)lVar13 < (int)uVar16);
      if (2 < (int)uVar16) {
        uVar5 = 2;
        do {
          local_374 = (int)uVar5 * 2;
          local_358 = (longlong)(int)local_374;
          plVar7 = (longlong *)0x0;
          local_360 = uVar5;
          do {
            uVar16 = (int)uVar22 - (int)plVar7;
            if ((int)local_374 <= (int)uVar16) {
              uVar16 = local_374;
            }
            local_370 = (int *)CONCAT44(local_370._4_4_,uVar16);
            local_390 = plVar7;
            if ((int)local_360 < (int)uVar16 && 0 < (int)local_360) {
              local_380 = (int *)(local_368 + (longlong)plVar7 * 8);
              iVar2 = 0;
              uVar22 = local_360 & 0xffffffff;
              while( true ) {
                piVar12 = local_380;
                cVar8 = local_391;
                local_384 = (uint)uVar22;
                piVar17 = local_380 + (longlong)(int)local_384 * 2;
                iVar9 = 0;
                if (local_384 - iVar2 != 0 && iVar2 <= (int)local_384) {
                  iVar9 = 0;
                  uVar16 = local_384 - iVar2;
                  do {
                    iVar21 = (uVar16 >> 1) + iVar9;
                    piVar10 = piVar12 + (longlong)iVar2 * 2 + (longlong)iVar21 * 2;
                    if (cVar8 == '\0') {
                      iVar3 = *piVar10 - *piVar17;
                      if (*piVar10 - *piVar17 == 0) {
                        iVar3 = piVar10[1] - piVar17[1];
                      }
                    }
                    else {
                      iVar3 = FUN_144a78538(piVar10,piVar17);
                    }
                    if (-1 < iVar3) {
                      iVar9 = iVar21 + (uVar16 & 1);
                    }
                    bVar23 = 1 < uVar16;
                    uVar16 = uVar16 >> 1;
                  } while (bVar23);
                }
                iVar9 = iVar9 + iVar2;
                uVar22 = (ulonglong)local_384;
                iVar2 = local_384 - iVar9;
                if (iVar2 == 0 || (int)local_384 < iVar9) break;
                uVar16 = (int)local_370 - local_384;
                if (uVar16 == 0 || (int)local_370 < (int)local_384) {
                  iVar21 = 0;
                }
                else {
                  piVar12 = local_380 + (longlong)iVar9 * 2;
                  iVar21 = 0;
                  uVar22 = (ulonglong)uVar16;
                  do {
                    uVar22 = uVar22 >> 1;
                    uVar20 = (uint)uVar22 + iVar21;
                    if (local_391 == '\0') {
                      iVar3 = *piVar12 - piVar17[(ulonglong)uVar20 * 2];
                      if (iVar3 == 0) {
                        iVar3 = piVar12[1] - (piVar17 + (ulonglong)uVar20 * 2)[1];
                      }
                    }
                    else {
                      iVar3 = FUN_144a78538(piVar12);
                    }
                    if (iVar3 < 0) {
                      iVar21 = uVar20 + (uVar16 & 1);
                    }
                    bVar23 = 1 < uVar16;
                    uVar16 = (uint)uVar22;
                  } while (bVar23);
                  uVar22 = (ulonglong)(local_384 + iVar21);
                  if (0 < iVar21) {
                    piVar17 = piVar12 + (longlong)(int)((local_384 + iVar21) - iVar9) * 2;
                    piVar10 = piVar12 + (longlong)iVar2 * 2;
                    piVar15 = piVar12 + (longlong)iVar2 * 2;
                    do {
                      while( true ) {
                        piVar14 = piVar10 + 2;
                        uVar1 = *(undefined8 *)piVar12;
                        *(undefined8 *)piVar12 = *(undefined8 *)piVar10;
                        piVar12 = piVar12 + 2;
                        *(undefined8 *)piVar10 = uVar1;
                        if (piVar14 == piVar17) break;
                        piVar10 = piVar14;
                        if (piVar12 == piVar15) {
                          piVar15 = piVar14;
                        }
                      }
                      piVar10 = piVar15;
                    } while (piVar12 != piVar15);
                  }
                }
                if (((int)local_370 <= (int)uVar22) ||
                   (iVar2 = iVar9 + iVar21 + 1, (int)uVar22 <= iVar2)) break;
              }
            }
            plVar7 = (longlong *)((longlong)local_390 + local_358);
            uVar22 = local_350;
          } while ((longlong)plVar7 < (longlong)local_350);
          uVar5 = (ulonglong)local_374;
        } while ((int)local_374 < (int)local_350);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147b09482:
  uVar1 = *(undefined8 *)piVar15;
  *(undefined8 *)piVar15 = *(undefined8 *)piVar19;
  *(undefined8 *)piVar19 = uVar1;
  uVar16 = local_384 - 1;
  piVar18 = piVar18 + -4;
  if ((longlong)piVar10 - (longlong)local_370 < (longlong)local_380 - (longlong)piVar6) {
    plVar7 = local_390;
    if (piVar12 < piVar17) {
      *local_390 = (longlong)piVar12;
      local_390[1] = (longlong)piVar17;
      *(uint *)(local_390 + 2) = uVar16;
      plVar7 = local_390 + 3;
    }
    piVar12 = piVar15;
    if (piVar19 <= piVar15 + 2) goto LAB_147b09759;
  }
  else {
    if (piVar15 + 2 < piVar19) {
      *local_390 = (longlong)piVar15;
      local_390[1] = (longlong)piVar18;
      *(uint *)(local_390 + 2) = uVar16;
      local_390 = local_390 + 3;
    }
    plVar7 = local_390;
    piVar10 = piVar17;
    piVar15 = piVar6;
    piVar18 = piVar17;
    if (piVar17 <= piVar12) goto LAB_147b09759;
  }
  local_390 = plVar7;
  iVar2 = (int)((ulonglong)((longlong)piVar10 - (longlong)piVar15) >> 3);
  uVar20 = iVar2 + 1;
  piVar14 = piVar15;
  piVar15 = piVar12;
  piVar17 = piVar18;
  if (uVar16 == 0) goto LAB_147b0953c;
  goto LAB_147b093b1;
LAB_147b08db3:
  uVar1 = *(undefined8 *)piVar15;
  *(undefined8 *)piVar15 = *(undefined8 *)piVar19;
  *(undefined8 *)piVar19 = uVar1;
  uVar16 = local_384 - 1;
  piVar18 = piVar18 + -4;
  if ((longlong)piVar10 - (longlong)local_370 < (longlong)local_380 - (longlong)piVar6) {
    plVar7 = local_390;
    if (piVar12 < piVar17) {
      *local_390 = (longlong)piVar12;
      local_390[1] = (longlong)piVar17;
      *(uint *)(local_390 + 2) = uVar16;
      plVar7 = local_390 + 3;
    }
    piVar12 = piVar15;
    if (piVar19 <= piVar15 + 2) goto LAB_147b0908a;
  }
  else {
    if (piVar15 + 2 < piVar19) {
      *local_390 = (longlong)piVar15;
      local_390[1] = (longlong)piVar18;
      *(uint *)(local_390 + 2) = uVar16;
      local_390 = local_390 + 3;
    }
    plVar7 = local_390;
    piVar10 = piVar17;
    piVar15 = piVar6;
    piVar18 = piVar17;
    if (piVar17 <= piVar12) goto LAB_147b0908a;
  }
  local_390 = plVar7;
  iVar2 = (int)((ulonglong)((longlong)piVar10 - (longlong)piVar15) >> 3);
  uVar20 = iVar2 + 1;
  piVar14 = piVar15;
  piVar15 = piVar12;
  piVar17 = piVar18;
  if (uVar16 == 0) goto LAB_147b08e6d;
  goto LAB_147b08ce2;
}



// FUNCTION 147b09776 FUN_147b09776 body=359 status=ok
// SIG undefined FUN_147b09776(void)

void FUN_147b09776(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 local_3d;
  int local_3c;
  longlong local_38;
  ulonglong uStack_30;
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar2 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar1 = local_3c;
  local_3d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = &local_21;
  FUN_147b0abb3(plVar2,iVar1 != 0,local_3d,&local_22);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b098de FUN_147b098de body=451 status=ok
// SIG undefined FUN_147b098de(void)

void FUN_147b098de(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar7 = *(longlong *)(lVar1 + 8);
    lVar4 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar8 = lVar7 != 0;
      if (lVar7 != lVar4 && bVar8) {
        do {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          bVar8 = lVar7 != 0;
          if (lVar7 == lVar4) break;
        } while (lVar7 != 0);
      }
      if (!bVar8) goto LAB_147b09993;
    }
    else if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) goto LAB_147b09993;
    *(undefined8 *)(param_2 + 0x30) = 0;
    FUN_1446e6bbc();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      FUN_144a5ded6(param_2,0);
    }
    else {
      FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
    }
    lVar7 = *(longlong *)(param_2 + 0x30);
    if (lVar7 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      lVar4 = *(longlong *)(lVar7 + 8);
      lVar5 = FUN_1446e6bbc();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar8 = lVar4 != 0;
        if (lVar4 != lVar5 && bVar8) {
          do {
            lVar4 = *(longlong *)(lVar4 + 0x30);
            bVar8 = lVar4 != 0;
            if (lVar4 == lVar5) break;
          } while (lVar4 != 0);
        }
        if (bVar8) goto LAB_147b09a4f;
      }
      else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_147b09a4f:
        *(ulonglong *)(param_2 + 0x20) =
             (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
        if ((*(byte *)(lVar1 + 0x38) & 0x20) != 0) {
          uVar6 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x280))();
          FUN_144a62f0c(*(undefined8 *)(param_2 + 0x18),uVar6,*(undefined2 *)(lVar1 + 0x40));
        }
        FUN_147b0adf0(uVar2,lVar1,uVar3,lVar7);
        return;
      }
    }
  }
LAB_147b09993:
  *(undefined1 *)(param_2 + 0xa0) = 1;
  return;
}



// FUNCTION 147b09aa2 FUN_147b09aa2 body=414 status=ok
// SIG undefined FUN_147b09aa2(void)

void FUN_147b09aa2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar7 = *(longlong *)(lVar1 + 8);
    lVar5 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar8 = lVar7 != 0;
      if (lVar7 != lVar5 && bVar8) {
        do {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          bVar8 = lVar7 != 0;
          if (lVar7 == lVar5) break;
        } while (lVar7 != 0);
      }
      if (!bVar8) goto LAB_147b09b5b;
    }
    else if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) goto LAB_147b09b5b;
    *(undefined8 *)(param_2 + 0x30) = 0;
    FUN_1446e6bbc();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      FUN_144a5ded6(param_2,0);
    }
    else {
      FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
    }
    lVar7 = *(longlong *)(param_2 + 0x30);
    if (lVar7 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      lVar5 = *(longlong *)(lVar7 + 8);
      lVar6 = FUN_1446e6bbc();
      if (*(ulonglong *)(lVar6 + 8) == 0) {
        bVar8 = lVar5 != 0;
        if (lVar5 != lVar6 && bVar8) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar8 = lVar5 != 0;
            if (lVar5 == lVar6) break;
          } while (lVar5 != 0);
        }
        if (bVar8) goto LAB_147b09c18;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar6 + 8)) != 0) {
LAB_147b09c18:
        *(ulonglong *)(param_2 + 0x20) =
             (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
        uVar4 = FUN_147b0ac86(uVar2,lVar1,uVar3,lVar7);
        *param_3 = uVar4;
        return;
      }
    }
  }
LAB_147b09b5b:
  *(undefined1 *)(param_2 + 0xa0) = 1;
  return;
}



// FUNCTION 147b09c40 FUN_147b09c40 body=669 status=ok
// SIG undefined FUN_147b09c40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_147b09c40(undefined8 param_1,longlong param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  size_t _Size;
  longlong lVar11;
  undefined1 *_Dst;
  bool bVar12;
  undefined1 auStack_48 [4];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)&stack0xffffffffffffffc8;
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar2 = *(longlong *)(param_2 + 0x30);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    lVar11 = *(longlong *)(lVar2 + 8);
    lVar8 = FUN_1446e6bbc();
    puVar10 = auStack_48;
    if (*(ulonglong *)(lVar8 + 8) == 0) {
      bVar12 = lVar11 != 0;
      if (lVar11 != lVar8 && bVar12) {
        do {
          lVar11 = *(longlong *)(lVar11 + 0x30);
          bVar12 = lVar11 != 0;
          if (lVar11 == lVar8) break;
        } while (lVar11 != 0);
      }
      if (bVar12) goto LAB_147b09d51;
    }
    else if ((*(ulonglong *)(lVar11 + 0x18) & *(ulonglong *)(lVar8 + 8)) != 0) {
LAB_147b09d51:
      plVar4 = *(longlong **)(lVar2 + 0x78);
      _Size = (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34);
      if ((int)_Size == 0) {
        _Dst = (undefined1 *)0x0;
      }
      else {
        lVar11 = -(_Size + 0x1e & 0xfffffffffffffff0);
        puVar10 = auStack_48 + lVar11;
        _Dst = auStack_48 + lVar11;
      }
      if ((*(byte *)((longlong)plVar4 + 0x39) & 2) == 0) {
        pcVar5 = *(code **)(*plVar4 + 0x160);
        *(undefined8 *)(puVar10 + -0x28) = 0x147b09d9c;
        (*pcVar5)(plVar4,_Dst);
      }
      else {
        *(undefined8 *)(puVar10 + -0x28) = 0x147b09dac;
        memset(_Dst,0,_Size);
      }
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(puVar10 + -0x28) = 0x147b09dc1;
      FUN_1446ddbd2();
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
        *(undefined8 *)(puVar10 + -0x28) = 0x147b09ded;
        FUN_144a5ded6(param_2,_Dst);
      }
      else {
        uVar6 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(puVar10 + -0x28) = 0x147b09e02;
        FUN_14470e992(param_2,uVar6,_Dst);
      }
      local_44 = 0;
      *(undefined8 *)(puVar10 + -0x28) = 0x147b09e16;
      FUN_144a7452c();
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
        *(undefined8 *)(puVar10 + -0x28) = 0x147b09e43;
        FUN_144a5ded6(param_2,&local_44);
      }
      else {
        uVar6 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(puVar10 + -0x28) = 0x147b09e59;
        FUN_14470e992(param_2,uVar6,&local_44);
      }
      *(ulonglong *)(param_2 + 0x20) =
           (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
      if ((*(byte *)(lVar2 + 0x38) & 0x20) != 0) {
        pcVar5 = *(code **)(**(longlong **)(param_2 + 0x18) + 0x280);
        *(undefined8 *)(puVar10 + -0x28) = 0x147b09e84;
        uVar9 = (*pcVar5)();
        uVar1 = *(undefined2 *)(lVar2 + 0x40);
        uVar6 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(puVar10 + -0x28) = 0x147b09e9d;
        FUN_144a62f0c(uVar6,uVar9,uVar1);
      }
      uVar7 = local_44;
      *(undefined8 *)(puVar10 + -0x28) = 0x147b09eb7;
      FUN_147b0b006(uVar3,lVar2,_Dst,uVar7);
      if ((*(byte *)((longlong)plVar4 + 0x3c) & 0x10) == 0) {
        pcVar5 = *(code **)(*plVar4 + 0x148);
        *(undefined8 *)(puVar10 + -0x28) = 0x147b09ed9;
        (*pcVar5)(plVar4,_Dst);
      }
      goto LAB_147b09ccf;
    }
  }
  puVar10 = auStack_48;
  *(undefined1 *)(param_2 + 0xa0) = 1;
LAB_147b09ccf:
  if ((local_40 ^ (ulonglong)&stack0xffffffffffffffc8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar10 + -0x28) = &UNK_147b09cf6;
  FUN_144d8e3a0();
}



// FUNCTION 147b09ee2 FUN_147b09ee2 body=384 status=ok
// SIG undefined FUN_147b09ee2(void)

void FUN_147b09ee2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 == 0) {
LAB_147b0a00f:
    *(undefined1 *)(param_2 + 0xa0) = 1;
    goto LAB_147b0a016;
  }
  lVar2 = *(longlong *)(param_2 + 0x38);
  lVar5 = *(longlong *)(lVar1 + 8);
  lVar4 = FUN_1446e6bbc();
  if (*(ulonglong *)(lVar4 + 8) == 0) {
    bVar6 = lVar5 != 0;
    if (lVar5 != lVar4 && bVar6) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar6 = lVar5 != 0;
        if (lVar5 == lVar4) break;
      } while (lVar5 != 0);
    }
    if (!bVar6) goto LAB_147b0a00f;
  }
  else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) goto LAB_147b0a00f;
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar3 = local_34;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (lVar2 == 0) {
LAB_147b0a039:
    bVar6 = false;
  }
  else {
    (**(code **)(**(longlong **)(lVar1 + 0x78) + 0x178))();
    if (iVar3 < 0) goto LAB_147b0a039;
    bVar6 = iVar3 < *(int *)(lVar2 + 8);
  }
  *(bool *)param_3 = bVar6;
LAB_147b0a016:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0a064 FUN_147b0a064 body=237 status=ok
// SIG undefined FUN_147b0a064(void)

void FUN_147b0a064(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 == 0) {
LAB_147b0a137:
    *(undefined1 *)(param_2 + 0xa0) = 1;
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x38);
    lVar5 = *(longlong *)(lVar1 + 8);
    lVar4 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar6 = lVar5 != 0;
      if (lVar5 != lVar4 && bVar6) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar6 = lVar5 != 0;
          if (lVar5 == lVar4) break;
        } while (lVar5 != 0);
      }
      if (!bVar6) goto LAB_147b0a137;
    }
    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) goto LAB_147b0a137;
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    if (lVar2 == 0) {
      iVar3 = -1;
    }
    else {
      (**(code **)(**(longlong **)(lVar1 + 0x78) + 0x178))();
      iVar3 = *(int *)(lVar2 + 8) + -1;
    }
    *param_3 = iVar3;
  }
  return;
}



// FUNCTION 147b0a152 FUN_147b0a152 body=430 status=ok
// SIG undefined FUN_147b0a152(void)

void FUN_147b0a152(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar6 = *(longlong *)(lVar1 + 8);
    lVar5 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar7 = lVar6 != 0;
      if (lVar6 != lVar5 && bVar7) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar7 = lVar6 != 0;
          if (lVar6 == lVar5) break;
        } while (lVar6 != 0);
      }
      if (bVar7) goto LAB_147b0a206;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_147b0a206:
      *(undefined8 *)(param_2 + 0x30) = 0;
      FUN_1446ddbd2();
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
        FUN_144a5ded6(param_2,0);
      }
      else {
        FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
      }
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x30) = 0;
      FUN_1446ddbd2();
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
        FUN_144a5ded6(param_2,0);
      }
      else {
        FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
      }
      uVar4 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x30) = 0;
      FUN_1446ddbd2();
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
        FUN_144a5ded6(param_2,0);
      }
      else {
        FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
      }
      *(ulonglong *)(param_2 + 0x20) =
           (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
      FUN_147b0b614(uVar2,lVar1,uVar3,uVar4,*(undefined8 *)(param_2 + 0x38));
      return;
    }
  }
  *(undefined1 *)(param_2 + 0xa0) = 1;
  return;
}



// FUNCTION 147b0a300 FUN_147b0a300 body=383 status=ok
// SIG undefined FUN_147b0a300(void)

void FUN_147b0a300(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 == 0) {
LAB_147b0a434:
    *(undefined1 *)(param_2 + 0xa0) = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar5 = *(longlong *)(lVar1 + 8);
    lVar3 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar6 = lVar5 != 0;
      if (lVar5 != lVar3 && bVar6) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar6 = lVar5 != 0;
          if (lVar5 == lVar3) break;
        } while (lVar5 != 0);
      }
      if (!bVar6) goto LAB_147b0a434;
    }
    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_147b0a434;
    local_2c = 0;
    FUN_144a7452c();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      FUN_144a5ded6(param_2,&local_2c);
    }
    else {
      FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
    }
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    if ((*(byte *)(lVar1 + 0x38) & 0x20) != 0) {
      uVar4 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x280))();
      FUN_144a62f0c(*(undefined8 *)(param_2 + 0x18),uVar4,*(undefined2 *)(lVar1 + 0x40));
    }
    FUN_140eff2d0(uVar2,lVar1,local_2c);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0a480 FUN_147b0a480 body=356 status=ok
// SIG undefined FUN_147b0a480(void)

void FUN_147b0a480(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar5 = *(longlong *)(lVar1 + 8);
    lVar3 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar6 = lVar5 != 0;
      if (lVar5 != lVar3 && bVar6) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar6 = lVar5 != 0;
          if (lVar5 == lVar3) break;
        } while (lVar5 != 0);
      }
      if (bVar6) goto LAB_147b0a556;
    }
    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_147b0a556:
      local_2c = 0;
      FUN_144a7452c();
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
        FUN_144a5ded6(param_2,&local_2c);
      }
      else {
        FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
      }
      *(ulonglong *)(param_2 + 0x20) =
           (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
      if ((*(byte *)(lVar1 + 0x38) & 0x20) != 0) {
        uVar4 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x280))();
        FUN_144a62f0c(*(undefined8 *)(param_2 + 0x18),uVar4,*(undefined2 *)(lVar1 + 0x40));
      }
      FUN_147b0b2b0(uVar2,lVar1,local_2c);
      goto LAB_147b0a4ea;
    }
  }
  *(undefined1 *)(param_2 + 0xa0) = 1;
LAB_147b0a4ea:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0a5e6 FUN_147b0a5e6 body=212 status=ok
// SIG undefined FUN_147b0a5e6(void)

void FUN_147b0a5e6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar3 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar3 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar3) break;
        } while (lVar4 != 0);
      }
      if (bVar5) goto LAB_147b0a696;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_147b0a696:
      *(ulonglong *)(param_2 + 0x20) =
           (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
      FUN_147b0b3be(uVar2,lVar1);
      return;
    }
  }
  *(undefined1 *)(param_2 + 0xa0) = 1;
  return;
}



// FUNCTION 147b0a6ba FUN_147b0a6ba body=320 status=ok
// SIG undefined FUN_147b0a6ba(void)

void FUN_147b0a6ba(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar6 = *(longlong *)(lVar1 + 8);
    lVar4 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar7 = lVar6 != 0;
      if (lVar6 != lVar4 && bVar7) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar7 = lVar6 != 0;
          if (lVar6 == lVar4) break;
        } while (lVar6 != 0);
      }
      if (bVar7) goto LAB_147b0a76a;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) {
LAB_147b0a76a:
      *(undefined8 *)(param_2 + 0x30) = 0;
      FUN_1446ddbd2();
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
        FUN_144a5ded6(param_2,0);
      }
      else {
        FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
      }
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      *(ulonglong *)(param_2 + 0x20) =
           (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
      if ((*(byte *)(lVar1 + 0x38) & 0x20) != 0) {
        uVar5 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x280))();
        FUN_144a62f0c(*(undefined8 *)(param_2 + 0x18),uVar5,*(undefined2 *)(lVar1 + 0x40));
      }
      FUN_147b0b1aa(uVar2,lVar1,uVar3);
      return;
    }
  }
  *(undefined1 *)(param_2 + 0xa0) = 1;
  return;
}



// FUNCTION 147b0a7fa FUN_147b0a7fa body=431 status=ok
// SIG undefined FUN_147b0a7fa(void)

void FUN_147b0a7fa(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar5 = *(longlong *)(lVar1 + 8);
    lVar3 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar6 = lVar5 != 0;
      if (lVar5 != lVar3 && bVar6) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar6 = lVar5 != 0;
          if (lVar5 == lVar3) break;
        } while (lVar5 != 0);
      }
      if (bVar6) goto LAB_147b0a8d0;
    }
    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_147b0a8d0:
      local_2c = 0;
      FUN_144a7452c();
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
        FUN_144a5ded6(param_2,&local_2c);
      }
      else {
        FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
      }
      local_30 = 0;
      FUN_144a7452c();
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
        FUN_144a5ded6(param_2,&local_30);
      }
      else {
        FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
      }
      *(ulonglong *)(param_2 + 0x20) =
           (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
      if ((*(byte *)(lVar1 + 0x38) & 0x20) != 0) {
        uVar4 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x280))();
        FUN_144a62f0c(*(undefined8 *)(param_2 + 0x18),uVar4,*(undefined2 *)(lVar1 + 0x40));
      }
      FUN_147b0b474(uVar2,lVar1,local_2c,local_30);
      goto LAB_147b0a864;
    }
  }
  *(undefined1 *)(param_2 + 0xa0) = 1;
LAB_147b0a864:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0a9aa FUN_147b0a9aa body=517 status=ok
// SIG undefined FUN_147b0a9aa(void)

void FUN_147b0a9aa(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  if (*(longlong *)(param_2 + 0x30) == 0) {
LAB_147b0ab8a:
    *(undefined1 *)(param_2 + 0xa0) = 1;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar2 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar6 = lVar5 != 0;
      if (lVar5 != lVar2 && bVar6) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar6 = lVar5 != 0;
          if (lVar5 == lVar2) break;
        } while (lVar5 != 0);
      }
      if (!bVar6) goto LAB_147b0ab8a;
    }
    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_147b0ab8a;
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    if ((*(byte *)(*(longlong *)(param_2 + 0x30) + 0x38) & 0x20) != 0) {
      uVar3 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x280))();
      FUN_144a62f0c(*(undefined8 *)(param_2 + 0x18),uVar3,
                    *(undefined2 *)(*(longlong *)(param_2 + 0x30) + 0x40));
    }
    lVar5 = local_28;
    if (local_28 != 0) {
      plVar4 = (longlong *)FUN_147a69726(*(undefined8 *)(local_28 + 0x10),local_30,3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x100))(plVar4,lVar5 + *(int *)((longlong)plVar4 + 0x44),uVar1,1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0abb3 FUN_147b0abb3 body=45 status=ok
// SIG undefined FUN_147b0abb3(void)

void FUN_147b0abb3(longlong *param_1,char param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined2 *puVar22;
  undefined2 *puVar23;
  ulonglong uVar24;
  float fVar25;
  undefined1 auStack_388 [32];
  longlong *plStack_368;
  undefined8 uStack_360;
  longlong lStack_358;
  longlong lStack_350;
  undefined4 auStack_348 [170];
  undefined *puStack_a0;
  undefined1 auStack_98 [44];
  uint uStack_6c;
  longlong lStack_68;
  ulonglong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  
  uVar16 = *(uint *)(param_1 + 1);
  uVar11 = (ulonglong)uVar16;
  lStack_68 = *param_1;
  if (param_2 != '\0') {
    if ((char)param_3 != '\0') {
      FUN_147b50875();
      return;
    }
    uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
    if (0 < (int)uVar16) {
      uVar24 = (ulonglong)uVar16;
      uVar7 = 0;
      do {
        if ((uVar7 | 1) < uVar24) {
          lVar15 = uVar7 * 0x10;
          puVar22 = &DAT_149dfb77a;
          if (*(int *)(lStack_68 + 8 + lVar15) != 0) {
            puVar22 = *(undefined2 **)(lStack_68 + lVar15);
          }
          lVar18 = (uVar7 | 1) * 0x10;
          puVar23 = &DAT_149dfb77a;
          if (*(int *)(lStack_68 + 8 + lVar18) != 0) {
            puVar23 = *(undefined2 **)(lStack_68 + lVar18);
          }
          puVar21 = (undefined8 *)(lVar15 + lStack_68);
          puVar19 = (undefined8 *)(lVar18 + lStack_68);
          lVar15 = 0;
          while( true ) {
            uVar1 = *(ushort *)((longlong)puVar23 + lVar15);
            uVar13 = (uint)uVar1;
            uVar2 = *(ushort *)((longlong)puVar22 + lVar15);
            uVar17 = (uint)uVar2;
            if (uVar1 != uVar2) break;
            if (uVar1 == 0) goto LAB_147b5057d;
LAB_147b5053d:
            lVar15 = lVar15 + 2;
          }
          if ((uVar2 | uVar1) < 0x80) {
            uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147b5053d;
          }
          if ((int)(uVar13 - uVar17) < 0) {
            uVar3 = *puVar21;
            uVar4 = puVar21[1];
            uVar5 = puVar19[1];
            *puVar21 = *puVar19;
            puVar21[1] = uVar5;
            uStack_58._0_4_ = (undefined4)uVar3;
            uStack_58._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar4;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            *(undefined4 *)puVar19 = (undefined4)uStack_58;
            *(undefined4 *)((longlong)puVar19 + 4) = uStack_58._4_4_;
            *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_50._4_4_;
            uStack_58 = uVar3;
            uStack_50 = uVar4;
          }
        }
LAB_147b5057d:
        uVar7 = uVar7 + 2;
      } while ((int)uVar7 < (int)uVar16);
      uStack_60 = uVar24;
      if (2 < (int)uVar16) {
        uVar13 = 2;
        uStack_6c = uVar16;
        do {
          uVar16 = uVar13 * 2;
          lVar18 = 0;
          lVar15 = lStack_68;
          do {
            iVar20 = (int)uVar11;
            if ((int)uVar16 <= iVar20) {
              uVar11 = (ulonglong)uVar16;
            }
            puStack_a0 = (undefined *)0x147b505cc;
            FUN_147b5060c(lVar15,uVar13,uVar11);
            lVar18 = lVar18 + (int)uVar16;
            lVar15 = lVar15 + (longlong)(int)uVar16 * 0x10;
            uVar11 = (ulonglong)(iVar20 + uVar13 * -2);
          } while (lVar18 < (longlong)uVar24);
          uVar11 = (ulonglong)uStack_6c;
          uVar13 = uVar16;
        } while ((int)uVar16 < (int)uStack_6c);
      }
    }
    if ((uStack_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      puStack_a0 = &UNK_147b5060b;
      FUN_144d8e3a0();
    }
    return;
  }
  if ((char)param_3 != '\0') {
    FUN_142b124d7(lStack_68,uVar11,param_3,param_5);
    return;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  uStack_360 = param_4;
  if (1 < (int)uVar16) {
    memset(auStack_348,0,0x2f0);
    lStack_350 = uVar11 * 0x10 + lStack_68 + -0x10;
    lStack_358 = lStack_68;
    fVar25 = logf((float)(int)uVar16);
    auStack_348[0] = (int)(longlong)(fVar25 + fVar25);
    plVar10 = &lStack_358;
    do {
      puVar21 = (undefined8 *)*plVar10;
      puVar19 = (undefined8 *)plVar10[1];
      iVar20 = (int)plVar10[2];
      iVar14 = (int)((ulonglong)((longlong)puVar19 - (longlong)puVar21) >> 4);
      plStack_368 = plVar10;
      if (iVar20 != 0) {
LAB_1467d85f3:
        if (8 < (int)(iVar14 + 1U)) {
          uVar11 = (ulonglong)(iVar14 + 1U >> 1);
          uVar3 = puVar21[uVar11 * 2];
          uVar4 = (puVar21 + uVar11 * 2)[1];
          uVar5 = puVar21[1];
          puVar21[uVar11 * 2] = *puVar21;
          (puVar21 + uVar11 * 2)[1] = uVar5;
          *puVar21 = uVar3;
          puVar21[1] = uVar4;
          puVar12 = puVar19 + 2;
          puVar9 = puVar21;
LAB_1467d862b:
          do {
            puVar8 = puVar9;
            puVar9 = puVar8 + 2;
            if (puVar19 < puVar9) break;
            puVar22 = &DAT_149dfb77a;
            if (*(int *)(puVar8 + 3) != 0) {
              puVar22 = (undefined2 *)puVar8[2];
            }
            puVar23 = &DAT_149dfb77a;
            if (*(int *)(puVar21 + 1) != 0) {
              puVar23 = (undefined2 *)*puVar21;
            }
            lVar15 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)puVar23 + lVar15);
              uVar13 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)puVar22 + lVar15);
              uVar16 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1467d8668;
                }
                iVar14 = uVar13 - uVar16;
                goto LAB_1467d8692;
              }
              if (uVar1 == 0) break;
LAB_1467d8668:
              lVar15 = lVar15 + 2;
            }
            iVar14 = 0;
LAB_1467d8692:
          } while (-1 < iVar14);
LAB_1467d8697:
          puVar6 = puVar12;
          puVar12 = puVar6 + -2;
          if (puVar21 < puVar12) {
            puVar22 = &DAT_149dfb77a;
            if (*(int *)(puVar21 + 1) != 0) {
              puVar22 = (undefined2 *)*puVar21;
            }
            puVar23 = &DAT_149dfb77a;
            if (*(int *)(puVar6 + -1) != 0) {
              puVar23 = (undefined2 *)puVar6[-2];
            }
            lVar15 = 0;
            do {
              uVar1 = *(ushort *)((longlong)puVar23 + lVar15);
              uVar2 = *(ushort *)((longlong)puVar22 + lVar15);
              if (uVar1 == uVar2) {
                if (uVar1 == 0) goto LAB_1467d8700;
              }
              else {
                if (0x7f < (uVar2 | uVar1)) {
                  iVar14 = (uint)uVar1 - (uint)uVar2;
                  goto LAB_1467d8702;
                }
                if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
                  iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
                  goto LAB_1467d8702;
                }
              }
              lVar15 = lVar15 + 2;
            } while( true );
          }
          goto LAB_1467d8706;
        }
        for (; puVar12 = puVar21, puVar9 = puVar21, puVar21 < puVar19; puVar19 = puVar19 + -2) {
joined_r0x0001467d87fd:
          puVar8 = puVar9 + 2;
          if (puVar8 <= puVar19) {
            puVar22 = &DAT_149dfb77a;
            if (*(int *)(puVar9 + 3) != 0) {
              puVar22 = (undefined2 *)puVar9[2];
            }
            puVar23 = &DAT_149dfb77a;
            if (*(int *)(puVar12 + 1) != 0) {
              puVar23 = (undefined2 *)*puVar12;
            }
            lVar15 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)puVar23 + lVar15);
              uVar13 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)puVar22 + lVar15);
              uVar16 = (uint)uVar2;
              puVar9 = puVar8;
              if (uVar1 != uVar2) break;
              if (uVar1 == 0) goto joined_r0x0001467d87fd;
LAB_1467d883d:
              lVar15 = lVar15 + 2;
            }
            if ((uVar2 | uVar1) < 0x80) {
              uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1467d883d;
            }
            if ((int)(uVar13 - uVar16) < 0) {
              puVar12 = puVar8;
            }
            goto joined_r0x0001467d87fd;
          }
          uStack_58 = *puVar12;
          uStack_50 = puVar12[1];
          uVar4 = uStack_58;
          uVar5 = uStack_50;
          uVar3 = puVar19[1];
          *puVar12 = *puVar19;
          puVar12[1] = uVar3;
          uStack_58._4_4_ = (undefined4)((ulonglong)uStack_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar19 = (undefined4)uStack_58;
          *(undefined4 *)((longlong)puVar19 + 4) = uStack_58._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_50._4_4_;
          uStack_58 = uVar4;
          uStack_50 = uVar5;
        }
        goto LAB_1467d88a0;
      }
LAB_1467d87db:
      FUN_1467d88ed(puVar21);
LAB_1467d88a0:
      plVar10 = plStack_368 + -3;
    } while (&lStack_358 <= plVar10);
  }
  if ((uStack_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1467d8700:
  iVar14 = 0;
LAB_1467d8702:
  if (iVar14 < 0) goto LAB_1467d8706;
  goto LAB_1467d8697;
LAB_1467d8706:
  if (puVar9 <= puVar12) {
    uVar3 = *puVar9;
    uVar4 = puVar8[3];
    uVar5 = puVar6[-1];
    *puVar9 = *puVar12;
    puVar8[3] = uVar5;
    *puVar12 = uVar3;
    puVar6[-1] = uVar4;
    goto LAB_1467d862b;
  }
  uStack_58 = *puVar21;
  uStack_50 = puVar21[1];
  uVar4 = uStack_58;
  uVar5 = uStack_50;
  uVar3 = puVar6[-1];
  *puVar21 = *puVar12;
  puVar21[1] = uVar3;
  uStack_58._4_4_ = (undefined4)((ulonglong)uStack_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar12 = (undefined4)uStack_58;
  *(undefined4 *)((longlong)puVar6 + -0xc) = uStack_58._4_4_;
  *(undefined4 *)(puVar6 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar6 + -4) = uStack_50._4_4_;
  iVar20 = iVar20 + -1;
  puVar6 = puVar6 + -4;
  uStack_58 = uVar4;
  uStack_50 = uVar5;
  if ((longlong)puVar6 - (longlong)puVar21 < (longlong)puVar19 - (longlong)puVar9) {
    if (puVar9 < puVar19) {
      *plStack_368 = (longlong)puVar9;
      plStack_368[1] = (longlong)puVar19;
      *(int *)(plStack_368 + 2) = iVar20;
      plStack_368 = plStack_368 + 3;
    }
    if (puVar12 <= puVar21 + 2) goto LAB_1467d88a0;
  }
  else {
    if (puVar21 + 2 < puVar12) {
      *plStack_368 = (longlong)puVar21;
      plStack_368[1] = (longlong)puVar6;
      *(int *)(plStack_368 + 2) = iVar20;
      plStack_368 = plStack_368 + 3;
    }
    puVar6 = puVar19;
    puVar21 = puVar9;
    if (puVar19 <= puVar9) goto LAB_1467d88a0;
  }
  iVar14 = (int)((ulonglong)((longlong)puVar6 - (longlong)puVar21) >> 4);
  puVar19 = puVar6;
  if (iVar20 == 0) goto LAB_1467d87db;
  goto LAB_1467d85f3;
}



// FUNCTION 147b0abe0 FUN_147b0abe0 body=40 status=ok
// SIG undefined FUN_147b0abe0(void)

void FUN_147b0abe0(longlong *param_1,char param_2,char param_3)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  longlong *plVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte bVar18;
  int iVar19;
  byte *pbVar20;
  longlong lVar21;
  uint uVar22;
  byte *pbVar23;
  ulonglong uVar24;
  byte *pbVar25;
  bool bVar26;
  float fVar27;
  undefined1 auStack_368 [32];
  longlong lStack_348;
  longlong lStack_340;
  undefined4 auStack_338 [178];
  undefined8 uStack_70;
  
  uVar11 = *(uint *)(param_1 + 1);
  lVar2 = *param_1;
  if (param_2 != '\0') {
    if (param_3 == '\0') {
      if (0 < (int)uVar11) {
        uVar24 = (ulonglong)uVar11;
        uVar6 = 1;
        do {
          if (uVar6 < uVar24) {
            bVar18 = *(byte *)(lVar2 + -1 + uVar6);
            if (*(byte *)(lVar2 + uVar6) < bVar18) {
              *(byte *)(lVar2 + -1 + uVar6) = *(byte *)(lVar2 + uVar6);
              *(byte *)(lVar2 + uVar6) = bVar18;
            }
          }
          uVar8 = uVar6 + 1;
          uVar6 = uVar6 + 2;
        } while (uVar8 < uVar24);
        if (2 < (int)uVar11) {
          uVar13 = 2;
          do {
            uVar4 = uVar13 * 2;
            lVar21 = 0;
            uVar22 = uVar11;
            do {
              uVar3 = uVar22;
              if ((int)uVar4 <= (int)uVar22) {
                uVar3 = uVar4;
              }
              uStack_70 = 0x147b51330;
              FUN_147b51352(lVar2 + lVar21,uVar13,uVar3);
              lVar21 = lVar21 + (int)uVar4;
              uVar22 = uVar22 + uVar13 * -2;
            } while (lVar21 < (longlong)uVar24);
            uVar13 = uVar4;
          } while ((int)uVar4 < (int)uVar11);
        }
      }
      return;
    }
    FUN_147b5148e();
    return;
  }
  if (param_3 != '\0') {
    FUN_147b50f82();
    return;
  }
  uVar6 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)uVar11) {
    memset(auStack_338,0,0x2f0);
    lStack_340 = (ulonglong)uVar11 + lVar2 + -1;
    lStack_348 = lVar2;
    fVar27 = logf((float)(int)uVar11);
    auStack_338[0] = (int)(longlong)(fVar27 + fVar27);
    plVar15 = &lStack_348;
    do {
      pbVar7 = (byte *)*plVar15;
      pbVar16 = (byte *)plVar15[1];
      iVar19 = (int)plVar15[2];
      iVar10 = (int)pbVar16 - (int)pbVar7;
      pbVar12 = pbVar16;
      pbVar20 = pbVar7;
      if (iVar19 != 0) {
LAB_147b50d00:
        if (8 < (int)(iVar10 + 1U)) {
          uVar11 = iVar10 + 1U >> 1;
          bVar18 = pbVar7[uVar11];
          pbVar7[uVar11] = *pbVar7;
          *pbVar7 = bVar18;
          pbVar25 = pbVar16 + 1;
          pbVar9 = pbVar7;
          do {
            pbVar5 = pbVar9 + 1;
            pbVar17 = pbVar9 + 1;
            do {
              pbVar9 = pbVar17;
              pbVar14 = pbVar5;
              if (pbVar16 < pbVar9) break;
              pbVar5 = pbVar14 + 1;
              pbVar17 = pbVar9 + 1;
            } while (*pbVar9 <= *pbVar7);
            pbVar5 = pbVar25 + -2;
            do {
              pbVar17 = pbVar25;
              pbVar23 = pbVar5;
              pbVar25 = pbVar17 + -1;
              if (pbVar25 <= pbVar7) break;
              pbVar5 = pbVar23 + -1;
            } while (*pbVar7 <= *pbVar25);
            if (pbVar25 < pbVar9) goto LAB_147b50d77;
            bVar18 = *pbVar9;
            *pbVar9 = *pbVar25;
            *pbVar25 = bVar18;
          } while( true );
        }
        if (pbVar7 < pbVar16) {
          do {
            pbVar12 = pbVar7;
            if (pbVar7 + 1 <= pbVar16) {
              bVar18 = *pbVar7;
              pbVar20 = pbVar7 + 1;
              do {
                bVar1 = *pbVar20;
                bVar26 = bVar18 < bVar1;
                if (bVar18 <= bVar1) {
                  bVar18 = bVar1;
                }
                if (bVar26) {
                  pbVar12 = pbVar20;
                }
                pbVar20 = pbVar20 + 1;
              } while (pbVar20 <= pbVar16);
            }
            bVar18 = *pbVar12;
            *pbVar12 = *pbVar16;
            *pbVar16 = bVar18;
            pbVar16 = pbVar16 + -1;
          } while (pbVar7 < pbVar16);
        }
        goto LAB_147b50e49;
      }
LAB_147b50e5e:
      FUN_147b50e6b(pbVar7);
LAB_147b50e49:
      plVar15 = plVar15 + -3;
    } while (&lStack_348 <= plVar15);
  }
  if ((uVar6 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147b50d77:
  bVar18 = *pbVar7;
  *pbVar7 = *pbVar25;
  *pbVar25 = bVar18;
  iVar19 = iVar19 + -1;
  pbVar17 = pbVar17 + -2;
  if ((longlong)pbVar23 - (longlong)pbVar20 < (longlong)pbVar12 - (longlong)pbVar14) {
    if (pbVar9 < pbVar16) {
      *plVar15 = (longlong)pbVar9;
      plVar15[1] = (longlong)pbVar16;
      *(int *)(plVar15 + 2) = iVar19;
      plVar15 = plVar15 + 3;
    }
    pbVar14 = pbVar7;
    if (pbVar25 <= pbVar7 + 1) goto LAB_147b50e49;
  }
  else {
    if (pbVar7 + 1 < pbVar25) {
      *plVar15 = (longlong)pbVar7;
      plVar15[1] = (longlong)pbVar17;
      *(int *)(plVar15 + 2) = iVar19;
      plVar15 = plVar15 + 3;
    }
    pbVar7 = pbVar9;
    pbVar17 = pbVar16;
    pbVar23 = pbVar16;
    if (pbVar16 <= pbVar9) goto LAB_147b50e49;
  }
  iVar10 = (int)pbVar23 - (int)pbVar14;
  pbVar16 = pbVar17;
  pbVar12 = pbVar23;
  pbVar20 = pbVar14;
  if (iVar19 == 0) goto LAB_147b50e5e;
  goto LAB_147b50d00;
}



// FUNCTION 147b0ac08 FUN_147b0ac08 body=45 status=ok
// SIG undefined FUN_147b0ac08(void)

void FUN_147b0ac08(longlong *param_1,char param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  ulonglong uVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  longlong lVar21;
  float fVar22;
  undefined1 auStack_368 [32];
  longlong lStack_348;
  longlong lStack_340;
  undefined4 auStack_338 [174];
  undefined8 uStack_80;
  uint uStack_4c;
  longlong lStack_48;
  
  uVar8 = *(uint *)(param_1 + 1);
  uVar2 = (ulonglong)uVar8;
  lStack_48 = *param_1;
  if (param_2 != '\0') {
    if ((char)param_3 == '\0') {
      if (0 < (int)uVar8) {
        uVar4 = 1;
        do {
          if (uVar4 < uVar2) {
            iVar16 = *(int *)(lStack_48 + -4 + uVar4 * 4);
            iVar7 = *(int *)(lStack_48 + uVar4 * 4);
            if (iVar7 < iVar16) {
              *(int *)(lStack_48 + -4 + uVar4 * 4) = iVar7;
              *(int *)(lStack_48 + uVar4 * 4) = iVar16;
            }
          }
          uVar5 = uVar4 + 1;
          uVar4 = uVar4 + 2;
        } while (uVar5 < uVar2);
        if (2 < (int)uVar8) {
          uVar4 = uVar2;
          uVar11 = 2;
          uStack_4c = uVar8;
          do {
            uVar8 = uVar11 * 2;
            lVar12 = 0;
            lVar21 = lStack_48;
            do {
              iVar16 = (int)uVar4;
              if ((int)uVar8 <= iVar16) {
                uVar4 = (ulonglong)uVar8;
              }
              uStack_80 = 0x147b51a27;
              FUN_147b51a55(lVar21,uVar11,uVar4);
              lVar12 = lVar12 + (int)uVar8;
              lVar21 = lVar21 + (longlong)(int)uVar8 * 4;
              uVar4 = (ulonglong)(iVar16 + uVar11 * -2);
            } while (lVar12 < (longlong)uVar2);
            uVar4 = (ulonglong)uStack_4c;
            uVar11 = uVar8;
          } while ((int)uVar8 < (int)uStack_4c);
        }
      }
      return;
    }
    FUN_147b51b88();
    return;
  }
  if ((char)param_3 != '\0') {
    FUN_144a521da(lStack_48,uVar2,param_3,param_5);
    return;
  }
  uVar2 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)uVar8) {
    memset(auStack_338,0,0x2f0);
    lStack_340 = lStack_48 + (ulonglong)uVar8 * 4 + -4;
    lStack_348 = lStack_48;
    fVar22 = logf((float)(int)uVar8);
    auStack_338[0] = (int)(longlong)(fVar22 + fVar22);
    plVar13 = &lStack_348;
    do {
      piVar3 = (int *)*plVar13;
      piVar14 = (int *)plVar13[1];
      iVar16 = (int)plVar13[2];
      iVar7 = (int)((ulonglong)((longlong)piVar14 - (longlong)piVar3) >> 2);
      piVar10 = piVar3;
      piVar18 = piVar14;
      if (iVar16 != 0) {
LAB_147b5171f:
        if (8 < (int)(iVar7 + 1U)) {
          uVar8 = iVar7 + 1U >> 1;
          iVar7 = piVar3[uVar8];
          piVar3[uVar8] = *piVar3;
          *piVar3 = iVar7;
          piVar9 = piVar14 + 1;
          piVar6 = piVar3;
          do {
            piVar1 = piVar6 + 1;
            piVar15 = piVar6 + 1;
            do {
              piVar6 = piVar15;
              piVar19 = piVar1;
              if (piVar14 < piVar6) break;
              piVar1 = piVar19 + 1;
              piVar15 = piVar6 + 1;
            } while (*piVar6 <= *piVar3);
            piVar1 = piVar9 + -2;
            do {
              piVar15 = piVar9;
              piVar20 = piVar1;
              piVar9 = piVar15 + -1;
              if (piVar9 <= piVar3) break;
              piVar1 = piVar20 + -1;
            } while (*piVar3 <= *piVar9);
            if (piVar9 < piVar6) goto LAB_147b51795;
            iVar7 = *piVar6;
            *piVar6 = *piVar9;
            *piVar9 = iVar7;
          } while( true );
        }
        if (piVar3 < piVar14) {
          do {
            piVar10 = piVar3;
            if (piVar3 + 1 <= piVar14) {
              piVar18 = piVar3 + 1;
              iVar16 = *piVar3;
              do {
                iVar7 = *piVar18;
                iVar17 = iVar16;
                if (iVar16 <= iVar7) {
                  iVar17 = iVar7;
                }
                if (iVar16 < iVar7) {
                  piVar10 = piVar18;
                }
                piVar18 = piVar18 + 1;
                iVar16 = iVar17;
              } while (piVar18 <= piVar14);
            }
            iVar16 = *piVar10;
            *piVar10 = *piVar14;
            *piVar14 = iVar16;
            piVar14 = piVar14 + -1;
          } while (piVar3 < piVar14);
        }
        goto LAB_147b51867;
      }
LAB_147b5187c:
      FUN_147b51889(piVar3);
LAB_147b51867:
      plVar13 = plVar13 + -3;
    } while (&lStack_348 <= plVar13);
  }
  if ((uVar2 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147b51795:
  iVar7 = *piVar3;
  *piVar3 = *piVar9;
  *piVar9 = iVar7;
  iVar16 = iVar16 + -1;
  piVar15 = piVar15 + -2;
  if ((longlong)piVar20 - (longlong)piVar10 < (longlong)piVar18 - (longlong)piVar19) {
    if (piVar6 < piVar14) {
      *plVar13 = (longlong)piVar6;
      plVar13[1] = (longlong)piVar14;
      *(int *)(plVar13 + 2) = iVar16;
      plVar13 = plVar13 + 3;
    }
    piVar19 = piVar3;
    if (piVar9 <= piVar3 + 1) goto LAB_147b51867;
  }
  else {
    if (piVar3 + 1 < piVar9) {
      *plVar13 = (longlong)piVar3;
      plVar13[1] = (longlong)piVar15;
      *(int *)(plVar13 + 2) = iVar16;
      plVar13 = plVar13 + 3;
    }
    piVar3 = piVar6;
    piVar15 = piVar14;
    piVar20 = piVar14;
    if (piVar14 <= piVar6) goto LAB_147b51867;
  }
  iVar7 = (int)((ulonglong)((longlong)piVar20 - (longlong)piVar19) >> 2);
  piVar10 = piVar19;
  piVar14 = piVar15;
  piVar18 = piVar20;
  if (iVar16 == 0) goto LAB_147b5187c;
  goto LAB_147b5171f;
}



// FUNCTION 147b0ac35 FUN_147b0ac35 body=40 status=ok
// SIG undefined FUN_147b0ac35(void)

void FUN_147b0ac35(longlong *param_1,char param_2,char param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  float fVar24;
  undefined1 auStack_368 [32];
  longlong lStack_348;
  longlong lStack_340;
  undefined4 auStack_338 [174];
  undefined8 uStack_80;
  uint uStack_4c;
  longlong lStack_48;
  
  uVar7 = *(uint *)(param_1 + 1);
  lVar22 = *param_1;
  if (param_2 != '\0') {
    if (param_3 == '\0') {
      if (0 < (int)uVar7) {
        uVar23 = (ulonglong)uVar7;
        uVar2 = 1;
        do {
          if (uVar2 < uVar23) {
            lVar11 = *(longlong *)(lVar22 + -8 + uVar2 * 8);
            lVar18 = *(longlong *)(lVar22 + uVar2 * 8);
            if (lVar18 < lVar11) {
              *(longlong *)(lVar22 + -8 + uVar2 * 8) = lVar18;
              *(longlong *)(lVar22 + uVar2 * 8) = lVar11;
            }
          }
          uVar4 = uVar2 + 1;
          uVar2 = uVar2 + 2;
        } while (uVar4 < uVar23);
        if (2 < (int)uVar7) {
          uVar10 = 2;
          uStack_4c = uVar7;
          lStack_48 = lVar22;
          do {
            uVar7 = uVar10 * 2;
            lVar11 = 0;
            lVar22 = lStack_48;
            uVar13 = uStack_4c;
            do {
              uVar14 = uVar13;
              if ((int)uVar7 <= (int)uVar13) {
                uVar14 = uVar7;
              }
              uStack_80 = 0x147b52499;
              FUN_147b524c7(lVar22,uVar10,uVar14);
              lVar11 = lVar11 + (int)uVar7;
              lVar22 = lVar22 + (longlong)(int)uVar7 * 8;
              uVar13 = uVar13 + uVar10 * -2;
            } while (lVar11 < (longlong)uVar23);
            uVar10 = uVar7;
          } while ((int)uVar7 < (int)uStack_4c);
        }
      }
      return;
    }
    FUN_147b525fc();
    return;
  }
  if (param_3 != '\0') {
    FUN_147b520c1();
    return;
  }
  uVar2 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)uVar7) {
    memset(auStack_338,0,0x2f0);
    lStack_340 = lVar22 + (ulonglong)uVar7 * 8 + -8;
    lStack_348 = lVar22;
    fVar24 = logf((float)(int)uVar7);
    auStack_338[0] = (int)(longlong)(fVar24 + fVar24);
    plVar12 = &lStack_348;
    do {
      plVar3 = (longlong *)*plVar12;
      plVar15 = (longlong *)plVar12[1];
      iVar17 = (int)plVar12[2];
      iVar6 = (int)((ulonglong)((longlong)plVar15 - (longlong)plVar3) >> 3);
      plVar9 = plVar3;
      plVar19 = plVar15;
      if (iVar17 != 0) {
LAB_147b51e33:
        if (8 < (int)(iVar6 + 1U)) {
          uVar7 = iVar6 + 1U >> 1;
          lVar22 = plVar3[uVar7];
          plVar3[uVar7] = *plVar3;
          *plVar3 = lVar22;
          plVar8 = plVar15 + 1;
          plVar5 = plVar3;
          do {
            plVar1 = plVar5 + 1;
            plVar16 = plVar5 + 1;
            do {
              plVar5 = plVar16;
              plVar20 = plVar1;
              if (plVar15 < plVar5) break;
              plVar1 = plVar20 + 1;
              plVar16 = plVar5 + 1;
            } while (*plVar5 <= *plVar3);
            plVar1 = plVar8 + -2;
            do {
              plVar16 = plVar8;
              plVar21 = plVar1;
              plVar8 = plVar16 + -1;
              if (plVar8 <= plVar3) break;
              plVar1 = plVar21 + -1;
            } while (*plVar3 <= *plVar8);
            if (plVar8 < plVar5) goto LAB_147b51eb1;
            lVar22 = *plVar5;
            *plVar5 = *plVar8;
            *plVar8 = lVar22;
          } while( true );
        }
        if (plVar3 < plVar15) {
          do {
            plVar9 = plVar3;
            if (plVar3 + 1 <= plVar15) {
              lVar22 = *plVar3;
              plVar19 = plVar3 + 1;
              do {
                lVar11 = *plVar19;
                lVar18 = lVar22;
                if (lVar22 <= lVar11) {
                  lVar18 = lVar11;
                }
                if (lVar22 < lVar11) {
                  plVar9 = plVar19;
                }
                plVar19 = plVar19 + 1;
                lVar22 = lVar18;
              } while (plVar19 <= plVar15);
            }
            lVar22 = *plVar9;
            *plVar9 = *plVar15;
            *plVar15 = lVar22;
            plVar15 = plVar15 + -1;
          } while (plVar3 < plVar15);
        }
        goto LAB_147b51f84;
      }
LAB_147b51f99:
      FUN_147b51fa6(plVar3);
LAB_147b51f84:
      plVar12 = plVar12 + -3;
    } while (&lStack_348 <= plVar12);
  }
  if ((uVar2 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147b51eb1:
  lVar22 = *plVar3;
  *plVar3 = *plVar8;
  *plVar8 = lVar22;
  iVar17 = iVar17 + -1;
  plVar16 = plVar16 + -2;
  if ((longlong)plVar21 - (longlong)plVar9 < (longlong)plVar19 - (longlong)plVar20) {
    if (plVar5 < plVar15) {
      *plVar12 = (longlong)plVar5;
      plVar12[1] = (longlong)plVar15;
      *(int *)(plVar12 + 2) = iVar17;
      plVar12 = plVar12 + 3;
    }
    plVar20 = plVar3;
    if (plVar8 <= plVar3 + 1) goto LAB_147b51f84;
  }
  else {
    if (plVar3 + 1 < plVar8) {
      *plVar12 = (longlong)plVar3;
      plVar12[1] = (longlong)plVar16;
      *(int *)(plVar12 + 2) = iVar17;
      plVar12 = plVar12 + 3;
    }
    plVar3 = plVar5;
    plVar16 = plVar15;
    plVar21 = plVar15;
    if (plVar15 <= plVar5) goto LAB_147b51f84;
  }
  iVar6 = (int)((ulonglong)((longlong)plVar21 - (longlong)plVar20) >> 3);
  plVar9 = plVar20;
  plVar15 = plVar16;
  plVar19 = plVar21;
  if (iVar17 == 0) goto LAB_147b51f99;
  goto LAB_147b51e33;
}



// FUNCTION 147b0ac5d FUN_147b0ac5d body=40 status=ok
// SIG undefined FUN_147b0ac5d(void)

void FUN_147b0ac5d(longlong *param_1,char param_2,char param_3)

{
  double dVar1;
  double *pdVar2;
  ulonglong uVar3;
  double *pdVar4;
  ulonglong uVar5;
  double *pdVar6;
  int iVar7;
  uint uVar8;
  double *pdVar9;
  double *pdVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  double *pdVar16;
  double *pdVar17;
  int iVar18;
  double *pdVar19;
  double *pdVar20;
  double *pdVar21;
  longlong lVar22;
  ulonglong uVar23;
  float fVar24;
  double dVar25;
  undefined1 auStack_358 [32];
  longlong lStack_338;
  longlong lStack_330;
  undefined4 auStack_328 [170];
  undefined8 uStack_80;
  uint uStack_4c;
  longlong lStack_48;
  
  uVar8 = *(uint *)(param_1 + 1);
  lVar22 = *param_1;
  if (param_2 != '\0') {
    if (param_3 != '\0') {
      FUN_147b53105();
      return;
    }
    if (0 < (int)uVar8) {
      uVar23 = (ulonglong)uVar8;
      uVar3 = 1;
      do {
        if (uVar3 < uVar23) {
          dVar25 = *(double *)(lVar22 + -8 + uVar3 * 8);
          dVar1 = *(double *)(lVar22 + uVar3 * 8);
          if (dVar1 < dVar25) {
            *(double *)(lVar22 + -8 + uVar3 * 8) = dVar1;
            *(double *)(lVar22 + uVar3 * 8) = dVar25;
          }
        }
        uVar5 = uVar3 + 1;
        uVar3 = uVar3 + 2;
      } while (uVar5 < uVar23);
      if (2 < (int)uVar8) {
        uVar11 = 2;
        uStack_4c = uVar8;
        lStack_48 = lVar22;
        do {
          uVar8 = uVar11 * 2;
          lVar12 = 0;
          lVar22 = lStack_48;
          uVar14 = uStack_4c;
          do {
            uVar15 = uVar14;
            if ((int)uVar8 <= (int)uVar14) {
              uVar15 = uVar8;
            }
            uStack_80 = 0x147b52f98;
            FUN_147b52fc6(lVar22,uVar11,uVar15);
            lVar12 = lVar12 + (int)uVar8;
            lVar22 = lVar22 + (longlong)(int)uVar8 * 8;
            uVar14 = uVar14 + uVar11 * -2;
          } while (lVar12 < (longlong)uVar23);
          uVar11 = uVar8;
        } while ((int)uVar8 < (int)uStack_4c);
      }
    }
    return;
  }
  if (param_3 != '\0') {
    FUN_147b52b77();
    return;
  }
  uVar3 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if (1 < (int)uVar8) {
    memset(auStack_328,0,0x2f0);
    lStack_330 = lVar22 + (ulonglong)uVar8 * 8 + -8;
    lStack_338 = lVar22;
    fVar24 = logf((float)(int)uVar8);
    auStack_328[0] = (int)(longlong)(fVar24 + fVar24);
    plVar13 = &lStack_338;
    do {
      pdVar4 = (double *)*plVar13;
      pdVar16 = (double *)plVar13[1];
      iVar18 = (int)plVar13[2];
      iVar7 = (int)((ulonglong)((longlong)pdVar16 - (longlong)pdVar4) >> 3);
      pdVar10 = pdVar4;
      pdVar19 = pdVar16;
      if (iVar18 != 0) {
LAB_147b528a5:
        if (8 < (int)(iVar7 + 1U)) {
          uVar8 = iVar7 + 1U >> 1;
          dVar25 = pdVar4[uVar8];
          pdVar4[uVar8] = *pdVar4;
          *pdVar4 = dVar25;
          pdVar9 = pdVar16 + 1;
          pdVar6 = pdVar4;
          do {
            pdVar2 = pdVar6 + 1;
            pdVar17 = pdVar6 + 1;
            do {
              pdVar6 = pdVar17;
              pdVar20 = pdVar2;
              if (pdVar16 < pdVar6) break;
              pdVar2 = pdVar20 + 1;
              pdVar17 = pdVar6 + 1;
            } while (*pdVar6 < *pdVar4 || *pdVar6 == *pdVar4);
            pdVar2 = pdVar9 + -2;
            do {
              pdVar17 = pdVar9;
              pdVar21 = pdVar2;
              pdVar9 = pdVar17 + -1;
              if (pdVar9 <= pdVar4) break;
              pdVar2 = pdVar21 + -1;
            } while (*pdVar4 < *pdVar9 || *pdVar4 == *pdVar9);
            if (pdVar9 < pdVar6) goto LAB_147b5292f;
            dVar25 = *pdVar6;
            *pdVar6 = *pdVar9;
            *pdVar9 = dVar25;
          } while( true );
        }
        if (pdVar4 < pdVar16) {
          do {
            pdVar10 = pdVar4;
            if (pdVar4 + 1 <= pdVar16) {
              dVar25 = *pdVar4;
              pdVar19 = pdVar4 + 1;
              do {
                dVar1 = *pdVar19;
                pdVar9 = pdVar19;
                if (*pdVar19 <= dVar25) {
                  dVar1 = dVar25;
                  pdVar9 = pdVar10;
                }
                pdVar10 = pdVar9;
                dVar25 = dVar1;
                pdVar19 = pdVar19 + 1;
              } while (pdVar19 <= pdVar16);
            }
            dVar25 = *pdVar10;
            *pdVar10 = *pdVar16;
            *pdVar16 = dVar25;
            pdVar16 = pdVar16 + -1;
          } while (pdVar4 < pdVar16);
        }
        goto LAB_147b52a13;
      }
LAB_147b52a28:
      FUN_147b52a35(pdVar4);
LAB_147b52a13:
      plVar13 = plVar13 + -3;
    } while (&lStack_338 <= plVar13);
  }
  if ((uVar3 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_147b5292f:
  dVar25 = *pdVar4;
  *pdVar4 = *pdVar9;
  *pdVar9 = dVar25;
  iVar18 = iVar18 + -1;
  pdVar17 = pdVar17 + -2;
  if ((longlong)pdVar21 - (longlong)pdVar10 < (longlong)pdVar19 - (longlong)pdVar20) {
    if (pdVar6 < pdVar16) {
      *plVar13 = (longlong)pdVar6;
      plVar13[1] = (longlong)pdVar16;
      *(int *)(plVar13 + 2) = iVar18;
      plVar13 = plVar13 + 3;
    }
    pdVar20 = pdVar4;
    if (pdVar9 <= pdVar4 + 1) goto LAB_147b52a13;
  }
  else {
    if (pdVar4 + 1 < pdVar9) {
      *plVar13 = (longlong)pdVar4;
      plVar13[1] = (longlong)pdVar17;
      *(int *)(plVar13 + 2) = iVar18;
      plVar13 = plVar13 + 3;
    }
    pdVar4 = pdVar6;
    pdVar17 = pdVar16;
    pdVar21 = pdVar16;
    if (pdVar16 <= pdVar6) goto LAB_147b52a13;
  }
  iVar7 = (int)((ulonglong)((longlong)pdVar21 - (longlong)pdVar20) >> 3);
  pdVar10 = pdVar20;
  pdVar16 = pdVar17;
  pdVar19 = pdVar21;
  if (iVar18 == 0) goto LAB_147b52a28;
  goto LAB_147b528a5;
}



// FUNCTION 147b0ac86 FUN_147b0ac86 body=362 status=ok
// SIG undefined FUN_147b0ac86(void)

ulonglong FUN_147b0ac86(ulonglong *param_1,longlong param_2,ulonglong *param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 unaff_RBP;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  
  if (param_3 != (ulonglong *)0x0 && param_1 != (ulonglong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x78);
    cVar7 = (**(code **)(*plVar6 + 0x1b0))(plVar6,*(undefined8 *)(param_4 + 0x78));
    if (cVar7 != '\0') {
      bVar1 = *(byte *)(param_2 + 0x70);
      (**(code **)(**(longlong **)(param_2 + 0x78) + 0x178))();
      iVar3 = *(int *)(*(longlong *)(param_2 + 0x78) + 0x34);
      bVar2 = *(byte *)(param_4 + 0x70);
      (**(code **)(**(longlong **)(param_4 + 0x78) + 0x178))();
      uVar4 = (uint)param_1[1];
      if (uVar4 == (uint)param_3[1]) {
        if ((int)uVar4 < 1) {
          uVar10 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
        }
        else {
          iVar5 = *(int *)(*(longlong *)(param_4 + 0x78) + 0x34);
          lVar14 = 0;
          lVar12 = 0;
          uVar10 = 0;
          uVar13 = 1;
          do {
            if ((int)param_3[1] == 0) {
              lVar11 = 0;
            }
            else {
              if ((bVar2 & 1) == 0) {
                uVar9 = *param_3;
              }
              else {
                uVar9 = *param_3;
                if ((uVar9 & 1) != 0) {
                  uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)param_3;
                }
              }
              lVar11 = uVar9 + lVar14;
            }
            if ((int)param_1[1] == 0) {
              lVar8 = 0;
            }
            else {
              if ((bVar1 & 1) == 0) {
                uVar9 = *param_1;
              }
              else {
                uVar9 = *param_1;
                if ((uVar9 & 1) != 0) {
                  uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)param_1;
                }
              }
              lVar8 = uVar9 + lVar12;
            }
            cVar7 = (**(code **)(*plVar6 + 200))(plVar6,lVar8,lVar11,0);
            if (cVar7 == '\0') break;
            uVar10 = (ulonglong)(uVar4 <= uVar13);
            lVar12 = lVar12 + iVar3;
            lVar14 = lVar14 + iVar5;
            bVar15 = uVar13 != uVar4;
            uVar13 = uVar13 + 1;
          } while (bVar15);
        }
        goto LAB_147b0add4;
      }
    }
  }
  uVar10 = 0;
LAB_147b0add4:
  return uVar10 & 0xffffff01;
}



// FUNCTION 147b0adf0 FUN_147b0adf0 body=533 status=ok
// SIG undefined FUN_147b0adf0(void)

void FUN_147b0adf0(ulonglong *param_1,longlong param_2,ulonglong *param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined2 *puVar15;
  longlong lVar16;
  undefined1 auStack_b8 [44];
  uint local_8c;
  undefined2 *local_88;
  int local_80;
  longlong local_78;
  ulonglong *local_70;
  int local_68;
  undefined4 local_64;
  byte local_60;
  longlong *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 != (ulonglong *)0x0 && param_1 != (ulonglong *)0x0) {
    bVar1 = *(byte *)(param_2 + 0x70);
    local_64 = (**(code **)(**(longlong **)(param_2 + 0x78) + 0x178))();
    local_78 = *(longlong *)(param_2 + 0x78);
    local_68 = *(int *)(local_78 + 0x34);
    bVar2 = *(byte *)(param_4 + 0x70);
    local_70 = param_1;
    local_60 = bVar1;
    (**(code **)(**(longlong **)(param_4 + 0x78) + 0x178))();
    uVar6 = (uint)param_3[1];
    if (0 < (int)uVar6) {
      uVar8 = 0x7ffffffe;
      if (0 < (int)(uint)param_1[1]) {
        uVar8 = (uint)param_1[1] ^ 0x7fffffff;
      }
      uVar10 = uVar8;
      if (uVar6 < uVar8) {
        uVar10 = uVar6;
      }
      uVar12 = (ulonglong)uVar10;
      if (uVar8 != 0) {
        iVar3 = *(int *)(*(longlong *)(param_4 + 0x78) + 0x34);
        plVar13 = *(longlong **)(param_2 + 0x78);
        local_58 = &local_78;
        local_50 = uVar10;
        iVar5 = FUN_144a482cc(&local_78);
        FUN_144ae1314(&local_78,iVar5,uVar12);
        lVar16 = (longlong)iVar5;
        lVar11 = 0;
        local_8c = uVar10;
        do {
          if ((int)param_3[1] == 0) {
            lVar14 = 0;
          }
          else {
            if ((bVar2 & 1) == 0) {
              uVar7 = *param_3;
            }
            else {
              uVar7 = *param_3;
              if ((uVar7 & 1) != 0) {
                uVar7 = ((longlong)uVar7 >> 0x18) + (longlong)param_3;
              }
            }
            lVar14 = uVar7 + lVar11;
          }
          if ((int)local_70[1] == 0) {
            lVar9 = 0;
          }
          else {
            if ((local_60 & 1) == 0) {
              uVar7 = *local_70;
            }
            else {
              uVar7 = *local_70;
              if ((uVar7 & 1) != 0) {
                uVar7 = (longlong)local_70 + ((longlong)uVar7 >> 0x18);
              }
            }
            lVar9 = local_68 * lVar16 + uVar7;
          }
          (**(code **)(*plVar13 + 0x110))(plVar13,lVar9,lVar14);
          lVar16 = lVar16 + 1;
          lVar11 = lVar11 + iVar3;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        uVar6 = (uint)param_3[1];
        uVar10 = local_8c;
      }
      uVar4 = DAT_14cae7098;
      if ((int)uVar10 < (int)uVar6) {
        FUN_1400021e4(param_2 + 0x20,&local_88);
        puVar15 = &DAT_149dfb77a;
        if (local_80 != 0) {
          puVar15 = local_88;
        }
        FUN_140002266(&local_58,
                      L"Attempted append to array \'%s\' beyond the maximum supported capacity!",
                      puVar15);
        plVar13 = (longlong *)&DAT_149dfb77a;
        if (local_50 != 0) {
          plVar13 = local_58;
        }
        FUN_1415b7ec4(plVar13,3,uVar4);
        if (local_58 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b0b006 FUN_147b0b006 body=419 status=ok
// SIG undefined FUN_147b0b006(void)

void FUN_147b0b006(ulonglong *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong **pplVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined2 *local_78;
  int local_70;
  longlong *local_68;
  ulonglong *local_60;
  int local_58;
  undefined4 local_54;
  byte local_50;
  longlong **local_48;
  uint local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != (ulonglong *)0x0) {
    bVar1 = *(byte *)(param_2 + 0x70);
    local_54 = (**(code **)(**(longlong **)(param_2 + 0x78) + 0x178))();
    uVar4 = DAT_14cae5338;
    plVar3 = *(longlong **)(param_2 + 0x78);
    local_58 = *(int *)((longlong)plVar3 + 0x34);
    iVar2 = (int)param_1[1];
    local_68 = plVar3;
    local_60 = param_1;
    local_50 = bVar1;
    if (iVar2 < (int)param_4 || (int)param_4 < 0) {
      iVar8 = 0;
      if (0 < iVar2) {
        iVar8 = iVar2 + -1;
      }
      FUN_1400021e4(param_2 + 0x20,&local_78);
      puVar9 = &DAT_149dfb77a;
      if (local_70 != 0) {
        puVar9 = local_78;
      }
      local_88 = iVar8;
      FUN_140002266(&local_48,L"Attempted to insert an item into array %s out of bounds [%d/%d]!",
                    puVar9,param_4);
      pplVar7 = (longlong **)&DAT_149dfb77a;
      if (local_40 != 0) {
        pplVar7 = local_48;
      }
      FUN_1415b7ec4(pplVar7,3,uVar4);
      if (local_48 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      local_3c = 1;
      local_48 = &local_68;
      local_40 = param_4;
      FUN_147b4c6b4(&local_68);
      FUN_144ae1314(&local_68,param_4,1);
      if ((int)local_60[1] == 0) {
        lVar6 = 0;
      }
      else {
        if ((local_50 & 1) == 0) {
          uVar5 = *local_60;
        }
        else {
          uVar5 = *local_60;
          if ((uVar5 & 1) != 0) {
            uVar5 = (longlong)local_60 + ((longlong)uVar5 >> 0x18);
          }
        }
        lVar6 = (longlong)local_58 * (ulonglong)param_4 + uVar5;
      }
      (**(code **)(*plVar3 + 0x110))(plVar3,lVar6,param_3);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b0b1aa FUN_147b0b1aa body=261 status=ok
// SIG undefined FUN_147b0b1aa(void)

void FUN_147b0b1aa(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  longlong *local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 != 0 && param_1 != 0) {
    uVar1 = *(undefined1 *)(param_2 + 0x70);
    local_5c = (**(code **)(**(longlong **)(param_2 + 0x78) + 0x178))();
    local_70 = *(longlong *)(param_2 + 0x78);
    local_60 = *(undefined4 *)(local_70 + 0x34);
    iVar4 = *(int *)(param_1 + 8);
    local_68 = param_1;
    local_58 = uVar1;
    if (0 < iVar4) {
      iVar5 = 0;
      do {
        uVar2 = *(int *)(param_3 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(param_3 + 4) = uVar2;
        iVar3 = (int)((float)iVar4 * ((float)(uVar2 >> 9 | 0x3f800000) + -1.0));
        if (iVar3 != 0) {
          local_44 = iVar3 + iVar5;
          local_50 = &local_70;
          local_48 = iVar5;
          FUN_145de6008(&local_70,&local_50);
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b0b2b0 FUN_147b0b2b0 body=268 status=ok
// SIG undefined FUN_147b0b2b0(void)

void FUN_147b0b2b0(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  ulonglong local_30;
  
  uVar2 = DAT_14cae5348;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    if (param_3 < 0) {
      FUN_1400021e4(param_2 + 0x20,&local_60);
      puVar3 = &DAT_149dfb77a;
      if (local_58 != 0) {
        puVar3 = local_60;
      }
      FUN_140002266(&local_50,
                    L"Attempted to resize an array using negative size: Array = %s, Size = %d!",
                    puVar3,param_3);
      puVar3 = &DAT_149dfb77a;
      if ((int)local_48 != 0) {
        puVar3 = local_50;
      }
      FUN_1415b7ec4(puVar3,3,uVar2);
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      uVar1 = *(undefined1 *)(param_2 + 0x70);
      local_3c = (**(code **)(**(longlong **)(param_2 + 0x78) + 0x178))();
      local_50 = *(undefined2 **)(param_2 + 0x78);
      local_40 = *(undefined4 *)(local_50 + 0x1a);
      local_48 = param_1;
      local_38 = uVar1;
      FUN_144a8a902(&local_50,param_3);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0b3be FUN_147b0b3be body=181 status=ok
// SIG undefined FUN_147b0b3be(void)

void FUN_147b0b3be(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  longlong *local_40;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_2 + 0x70);
    local_4c = (**(code **)(**(longlong **)(param_2 + 0x78) + 0x178))();
    local_60 = *(longlong *)(param_2 + 0x78);
    local_50 = *(undefined4 *)(local_60 + 0x34);
    iVar2 = *(int *)(param_1 + 8);
    local_58 = param_1;
    local_48 = uVar1;
    if (1 < iVar2) {
      iVar3 = iVar2 / 2;
      iVar4 = 0;
      do {
        iVar2 = iVar2 + -1;
        local_40 = &local_60;
        local_38 = iVar4;
        local_34 = iVar2;
        FUN_145de6008(&local_60,&local_40);
        iVar4 = iVar4 + 1;
      } while (iVar3 != iVar4);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0b474 FUN_147b0b474 body=415 status=ok
// SIG undefined FUN_147b0b474(void)

void FUN_147b0b474(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  longlong *local_48;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_2 + 0x70);
    local_54 = (**(code **)(**(longlong **)(param_2 + 0x78) + 0x178))();
    uVar3 = DAT_14cae5350;
    local_68 = *(longlong *)(param_2 + 0x78);
    local_58 = *(undefined4 *)(local_68 + 0x34);
    uVar2 = *(uint *)(param_1 + 8);
    local_60 = param_1;
    local_50 = uVar1;
    if (((((int)param_3 < 0) || (uVar2 <= param_4)) || ((int)param_4 < 0)) ||
       ((int)uVar2 <= (int)param_3)) {
      if (uVar2 == 0) {
        FUN_1400021e4(param_2 + 0x20,&local_78);
        puVar5 = &DAT_149dfb77a;
        if (local_70 != 0) {
          puVar5 = local_78;
        }
        FUN_140002266(&local_48,L"Attempted to swap elements in empty array %s!",puVar5);
        plVar4 = (longlong *)&DAT_149dfb77a;
        if (local_40 != 0) {
          plVar4 = local_48;
        }
      }
      else {
        FUN_1400021e4(param_2 + 0x20,&local_78);
        local_88 = &DAT_149dfb77a;
        if (local_70 != 0) {
          local_88 = local_78;
        }
        local_80 = uVar2 - 1;
        FUN_140002266(&local_48,
                      L"Attempted to swap elements [%d] and [%d] in array %s. Available index range: [0 %d)!"
                      ,param_3,param_4);
        plVar4 = (longlong *)&DAT_149dfb77a;
        if (local_40 != 0) {
          plVar4 = local_48;
        }
      }
      FUN_1415b7ec4(plVar4,3,uVar3);
      if (local_48 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (param_3 != param_4) {
      local_48 = &local_68;
      local_40 = param_3;
      local_3c = param_4;
      FUN_145de6008();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b0b614 FUN_147b0b614 body=399 status=ok
// SIG undefined FUN_147b0b614(void)

void FUN_147b0b614(ulonglong *param_1,longlong param_2,longlong param_3,void *param_4,int *param_5)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_5 = -1;
  if (param_3 != 0 && param_1 != (ulonglong *)0x0) {
    bVar1 = *(byte *)(param_2 + 0x70);
    (**(code **)(**(longlong **)(param_2 + 0x78) + 0x178))();
    uVar4 = DAT_14cae5358;
    plVar3 = *(longlong **)(param_2 + 0x78);
    uVar7 = param_1[1];
    if ((int)uVar7 < 1) {
      FUN_140002266(&local_50,L"Attempted to access random index from empty array!");
      puVar5 = local_50;
      if (local_48 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      FUN_1415b7ec4(puVar5,3,uVar4);
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if ((*(byte *)((longlong)plVar3 + 0x39) & 2) == 0) {
        (**(code **)(*plVar3 + 0x160))(plVar3,param_4);
      }
      else {
        memset(param_4,0,(longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
      }
    }
    else {
      iVar2 = *(int *)((longlong)plVar3 + 0x34);
      uVar6 = *(int *)(param_3 + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_3 + 4) = uVar6;
      iVar8 = (int)((float)(int)uVar7 * ((float)(uVar6 >> 9 | 0x3f800000) + -1.0));
      if ((int)param_1[1] == 0) {
        lVar9 = 0;
      }
      else {
        if ((bVar1 & 1) == 0) {
          uVar7 = *param_1;
        }
        else {
          uVar7 = *param_1;
          if ((uVar7 & 1) != 0) {
            uVar7 = (longlong)param_1 + ((longlong)uVar7 >> 0x18);
          }
        }
        lVar9 = (longlong)iVar8 * (longlong)iVar2 + uVar7;
      }
      (**(code **)(*plVar3 + 0x110))(plVar3,param_4,lVar9);
      *param_5 = iVar8;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b0b7a4 FUN_147b0b7a4 body=243 status=ok
// SIG undefined FUN_147b0b7a4(void)

void FUN_147b0b7a4(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = 0;
  uStack_30 = 0;
  FUN_1407c869a(puVar1,&local_38,0);
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
    *(undefined4 *)(param_3 + 1) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_30._4_4_;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0b89e FUN_147b0b89e body=303 status=ok
// SIG undefined FUN_147b0b89e(void)

void FUN_147b0b89e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined1 auStack_68 [32];
  int local_48 [4];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  piVar2 = *(int **)(param_2 + 0x38);
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  piVar1 = (int *)&local_38;
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2;
  }
  piVar2 = local_48;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar2 = *(int **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 =
       piVar1[3] == piVar2[3] &&
       (piVar1[2] == piVar2[2] && (piVar1[1] == piVar2[1] && *piVar1 == *piVar2));
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0b9ce FUN_147b0b9ce body=158 status=ok
// SIG undefined FUN_147b0b9ce(void)

void FUN_147b0b9ce(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar1 = 0;
  puVar1[1] = 0;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0ba74 FUN_147b0ba74 body=171 status=ok
// SIG undefined FUN_147b0ba74(void)

void FUN_147b0ba74(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  int local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  piVar1 = local_28;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar1 = *(int **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = ((piVar1[1] != 0 || *piVar1 != 0) || piVar1[2] != 0) || piVar1[3] != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0bb20 FUN_147b0bb20 body=88 status=ok
// SIG undefined FUN_147b0bb20(void)

void FUN_147b0bb20(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1412e3d1e(&local_28);
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0bb80 FUN_147b0bb80 body=303 status=ok
// SIG undefined FUN_147b0bb80(void)

void FUN_147b0bb80(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined1 auStack_68 [32];
  int local_48 [4];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  piVar2 = *(int **)(param_2 + 0x38);
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  piVar1 = (int *)&local_38;
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2;
  }
  piVar2 = local_48;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar2 = *(int **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 =
       piVar1[3] != piVar2[3] ||
       (piVar1[2] != piVar2[2] || (piVar1[1] != piVar2[1] || *piVar1 != *piVar2));
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0bcb6 FUN_147b0bcb6 body=366 status=ok
// SIG undefined FUN_147b0bcb6(void)

void FUN_147b0bcb6(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar2 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_140b10a34(local_38,puVar3);
  *puVar2 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0be28 FUN_147b0be28 body=70 status=ok
// SIG undefined FUN_147b0be28(void)

void FUN_147b0be28(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = DAT_14cb0d2b0;
  lVar1 = DAT_14cb0d2b0 + 0x28;
  uVar3 = FUN_144a82cde();
                    /* WARNING: Could not recover jumptable at 0x000147b0be6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar2 + 0x28) + 8))(lVar1,0,L"CALIBRATEMOTION",uVar3);
  return;
}



// FUNCTION 147b0be74 FUN_147b0be74 body=417 status=ok
// SIG undefined FUN_147b0be74(void)

void FUN_147b0be74(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined1 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_146075062(&local_38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_146075062(&local_58);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_58;
  uStack_70 = uStack_50;
  local_68 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  local_60 = local_40;
  local_98 = local_38;
  uStack_94 = uStack_34;
  uStack_90 = uStack_30;
  uStack_8c = uStack_2c;
  local_88 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_80 = local_20;
  uVar3 = FUN_147b0c016(&local_98,&local_78);
  *param_3 = uVar3;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
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
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0c016 FUN_147b0c016 body=124 status=ok
// SIG undefined FUN_147b0c016(void)

ulonglong FUN_147b0c016(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  
  if ((*param_1 == *param_2) && (((*(uint *)(param_2 + 3) ^ *(uint *)(param_1 + 3)) & 7) == 0)) {
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),
                     ((*(uint *)(param_2 + 3) ^ *(uint *)(param_1 + 3)) & 8) == 0);
  }
  else {
    uVar4 = 0;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_2[2];
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
  return uVar4 & 0xffffffff;
}



// FUNCTION 147b0c098 FUN_147b0c098 body=404 status=ok
// SIG undefined FUN_147b0c098(void)

void FUN_147b0c098(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_58;
  uStack_68 = uStack_50;
  local_60 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  local_88 = (undefined4)local_38;
  uStack_84 = local_38._4_4_;
  uStack_80 = (undefined4)uStack_30;
  uStack_7c = uStack_30._4_4_;
  local_78 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_147b0c22e(&local_88,&local_70);
  plVar3 = local_48;
  *param_3 = uVar4;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
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
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0c22e FUN_147b0c22e body=110 status=ok
// SIG undefined FUN_147b0c22e(void)

bool FUN_147b0c22e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = *param_2;
  lVar4 = *param_1;
  plVar5 = (longlong *)param_1[2];
  if (plVar5 != (longlong *)0x0) {
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
  }
  plVar5 = (longlong *)param_2[2];
  if (plVar5 != (longlong *)0x0) {
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
  }
  return lVar4 == lVar3;
}



// FUNCTION 147b0c29c FUN_147b0c29c body=269 status=ok
// SIG undefined FUN_147b0c29c(void)

void FUN_147b0c29c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_54;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_56 = 0;
  local_54 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_28 = 0;
  local_60 = &PTR_FUN_149eda6f0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  plVar3 = plStack_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_60;
  }
  *param_3 = *(undefined4 *)(pppuVar4 + 8);
  local_60 = &PTR_FUN_149eda6d0;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0c3aa FUN_147b0c3aa body=346 status=ok
// SIG undefined FUN_147b0c3aa(void)

void FUN_147b0c3aa(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  int *piVar2;
  longlong *plVar3;
  undefined **ppuVar4;
  longlong *plVar5;
  undefined ***pppuVar6;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined **local_70;
  undefined **local_68;
  undefined **local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_54;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong *local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_56 = 0;
  local_54 = 0;
  local_48 = 0;
  local_60 = &PTR_FUN_149eda6d0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = (longlong *)0x0;
  uStack_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  pppuVar6 = &local_60;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar6 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = pppuVar6[4];
  local_70 = pppuVar6[5];
  local_68 = pppuVar6[6];
  if (local_68 != (undefined **)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = *(int *)(local_68 + 1) + 1;
    UNLOCK();
  }
  FUN_1413a4742(param_3,&local_78);
  ppuVar4 = local_68;
  if (local_68 != (undefined **)0x0) {
    LOCK();
    ppuVar1 = local_68 + 1;
    *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
    UNLOCK();
    if (*(int *)ppuVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)ppuVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*ppuVar4 + 0x10))(ppuVar4);
      }
    }
  }
  plVar5 = local_30;
  local_60 = &PTR_FUN_149eda6d0;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0c506 FUN_147b0c506 body=86 status=ok
// SIG undefined FUN_147b0c506(void)

void FUN_147b0c506(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b0c55e(&local_19);
  *param_3 = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0c55e FUN_147b0c55e body=132 status=ok
// SIG undefined FUN_147b0c55e(void)

byte * FUN_147b0c55e(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auStack_48 [46];
  ushort local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c98e618 == 0) {
    bVar1 = 0;
  }
  else {
    FUN_1428f1d2c(DAT_14c98e618,&local_1a);
    bVar3 = (local_1a & 0xc) != 0;
    bVar1 = bVar3 + 2;
    if ((local_1a & 0x30) == 0) {
      bVar1 = bVar3;
    }
    bVar2 = bVar1 + 4;
    if ((local_1a & 3) == 0) {
      bVar2 = bVar1;
    }
    bVar1 = bVar2 | 8;
    if ((local_1a & 0xc0) == 0) {
      bVar1 = bVar2;
    }
  }
  *param_1 = bVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0c5e4 FUN_147b0c5e4 body=248 status=ok
// SIG undefined FUN_147b0c5e4(void)

void FUN_147b0c5e4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_54;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong *local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_56 = 0;
  local_54 = 0;
  local_48 = 0;
  local_60 = &PTR_FUN_149eda6d0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = (longlong *)0x0;
  uStack_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  plVar3 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_60;
  }
  *param_3 = *(undefined4 *)((longlong)pppuVar4 + 0xc);
  local_60 = &PTR_FUN_149eda6d0;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0c6de FUN_147b0c6de body=252 status=ok
// SIG undefined FUN_147b0c6de(void)

void FUN_147b0c6de(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [40];
  longlong *local_50 [2];
  undefined1 local_40 [16];
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146075062(local_40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar3 = local_40;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1469b9dd4(puVar3,local_50,1);
  FUN_140008f88(param_3,local_50);
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0c7e2 FUN_147b0c7e2 body=209 status=ok
// SIG undefined FUN_147b0c7e2(void)

void FUN_147b0c7e2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_2c;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &PTR_FUN_149eda670;
  local_30 = 0;
  local_2e = 0;
  local_2c = 0xffffffff00000000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar1 = &local_38;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  *(bool *)param_3 = ((ulonglong)pppuVar1[1] & 0x30) != 0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0c8ba FUN_147b0c8ba body=209 status=ok
// SIG undefined FUN_147b0c8ba(void)

void FUN_147b0c8ba(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_2c;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &PTR_FUN_149eda670;
  local_30 = 0;
  local_2e = 0;
  local_2c = 0xffffffff00000000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar1 = &local_38;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  *(bool *)param_3 = ((ulonglong)pppuVar1[1] & 0xc0) != 0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0c992 FUN_147b0c992 body=209 status=ok
// SIG undefined FUN_147b0c992(void)

void FUN_147b0c992(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_2c;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &PTR_FUN_149eda670;
  local_30 = 0;
  local_2e = 0;
  local_2c = 0xffffffff00000000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar1 = &local_38;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  *(bool *)param_3 = ((ulonglong)pppuVar1[1] & 0xc) != 0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0ca6a FUN_147b0ca6a body=210 status=ok
// SIG undefined FUN_147b0ca6a(void)

void FUN_147b0ca6a(undefined8 param_1,longlong param_2,byte *param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_2c;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &PTR_FUN_149eda670;
  local_30 = 0;
  local_2e = 0;
  local_2c = 0xffffffff00000000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar1 = &local_38;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  *param_3 = *(byte *)(pppuVar1 + 1) >> 4 & 1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0cb44 FUN_147b0cb44 body=210 status=ok
// SIG undefined FUN_147b0cb44(void)

void FUN_147b0cb44(undefined8 param_1,longlong param_2,byte *param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_2c;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &PTR_FUN_149eda670;
  local_30 = 0;
  local_2e = 0;
  local_2c = 0xffffffff00000000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar1 = &local_38;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  *param_3 = *(byte *)(pppuVar1 + 1) >> 6 & 1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0cc1e FUN_147b0cc1e body=210 status=ok
// SIG undefined FUN_147b0cc1e(void)

void FUN_147b0cc1e(undefined8 param_1,longlong param_2,byte *param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_2c;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &PTR_FUN_149eda670;
  local_30 = 0;
  local_2e = 0;
  local_2c = 0xffffffff00000000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar1 = &local_38;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  *param_3 = *(byte *)(pppuVar1 + 1) >> 2 & 1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0ccf8 FUN_147b0ccf8 body=207 status=ok
// SIG undefined FUN_147b0ccf8(void)

void FUN_147b0ccf8(undefined8 param_1,longlong param_2,byte *param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_2c;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &PTR_FUN_149eda670;
  local_30 = 0;
  local_2e = 0;
  local_2c = 0xffffffff00000000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  pppuVar1 = &local_38;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = *(byte *)(pppuVar1 + 1) & 1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0cdce FUN_147b0cdce body=205 status=ok
// SIG undefined FUN_147b0cdce(void)

void FUN_147b0cdce(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_2c;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &PTR_FUN_149eda670;
  local_30 = 0;
  local_2e = 0;
  local_2c = 0xffffffff00000000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar1 = &local_38;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  *param_3 = *(undefined1 *)((longlong)pppuVar1 + 10);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0cea2 FUN_147b0cea2 body=210 status=ok
// SIG undefined FUN_147b0cea2(void)

void FUN_147b0cea2(undefined8 param_1,longlong param_2,byte *param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_2c;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &PTR_FUN_149eda670;
  local_30 = 0;
  local_2e = 0;
  local_2c = 0xffffffff00000000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar1 = &local_38;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  *param_3 = *(byte *)(pppuVar1 + 1) >> 5 & 1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0cf7c FUN_147b0cf7c body=208 status=ok
// SIG undefined FUN_147b0cf7c(void)

void FUN_147b0cf7c(undefined8 param_1,longlong param_2,byte *param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_2c;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &PTR_FUN_149eda670;
  local_30 = 0;
  local_2e = 0;
  local_2c = 0xffffffff00000000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  pppuVar1 = &local_38;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = *(byte *)(pppuVar1 + 1) >> 7;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0d054 FUN_147b0d054 body=210 status=ok
// SIG undefined FUN_147b0d054(void)

void FUN_147b0d054(undefined8 param_1,longlong param_2,byte *param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_2c;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &PTR_FUN_149eda670;
  local_30 = 0;
  local_2e = 0;
  local_2c = 0xffffffff00000000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar1 = &local_38;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  *param_3 = *(byte *)(pppuVar1 + 1) >> 3 & 1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0d12e FUN_147b0d12e body=209 status=ok
// SIG undefined FUN_147b0d12e(void)

void FUN_147b0d12e(undefined8 param_1,longlong param_2,byte *param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_2c;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &PTR_FUN_149eda670;
  local_30 = 0;
  local_2e = 0;
  local_2c = 0xffffffff00000000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar1 = &local_38;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  *param_3 = *(byte *)(pppuVar1 + 1) >> 1 & 1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0d206 FUN_147b0d206 body=209 status=ok
// SIG undefined FUN_147b0d206(void)

void FUN_147b0d206(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_2c;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &PTR_FUN_149eda670;
  local_30 = 0;
  local_2e = 0;
  local_2c = 0xffffffff00000000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar1 = &local_38;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  *(bool *)param_3 = ((ulonglong)pppuVar1[1] & 3) != 0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0d2de FUN_147b0d2de body=341 status=ok
// SIG undefined FUN_147b0d2de(void)

void FUN_147b0d2de(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [40];
  longlong *local_50 [2];
  int local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1459c4454(puVar4,local_50,local_3c != 0);
  FUN_140008f88(param_3,local_50);
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0d434 FUN_147b0d434 body=243 status=ok
// SIG undefined FUN_147b0d434(void)

void FUN_147b0d434(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (DAT_14c98e618 == (longlong *)0x0) {
    uVar4 = 3;
  }
  else {
    puVar5 = &local_38;
    if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(param_2 + 0x38);
    }
    uVar4 = (**(code **)(*DAT_14c98e618 + 0xb8))(DAT_14c98e618,puVar5);
  }
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0d528 FUN_147b0d528 body=281 status=ok
// SIG undefined FUN_147b0d528(void)

void FUN_147b0d528(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined ***pppuVar5;
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_54;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong *local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_56 = 0;
  local_54 = 0;
  local_48 = 0;
  local_60 = &PTR_FUN_149eda6d0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = (longlong *)0x0;
  uStack_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (DAT_14c98e618 == (longlong *)0x0) {
    uVar4 = 3;
  }
  else {
    pppuVar5 = &local_60;
    if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
      pppuVar5 = *(undefined ****)(param_2 + 0x38);
    }
    uVar4 = (**(code **)(*DAT_14c98e618 + 0xb0))(DAT_14c98e618,pppuVar5);
  }
  plVar3 = local_30;
  *param_3 = uVar4;
  local_60 = &PTR_FUN_149eda6d0;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0d642 FUN_147b0d642 body=294 status=ok
// SIG undefined FUN_147b0d642(void)

void FUN_147b0d642(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined ***pppuVar5;
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_54;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_56 = 0;
  local_54 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_28 = 0;
  local_60 = &PTR_FUN_149eda6f0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (DAT_14c98e618 == (longlong *)0x0) {
    uVar4 = 7;
  }
  else {
    pppuVar5 = &local_60;
    if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
      pppuVar5 = *(undefined ****)(param_2 + 0x38);
    }
    uVar4 = (**(code **)(*DAT_14c98e618 + 0xa8))(DAT_14c98e618,pppuVar5);
  }
  plVar3 = plStack_30;
  *param_3 = uVar4;
  local_60 = &PTR_FUN_149eda6d0;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0d76a FUN_147b0d76a body=281 status=ok
// SIG undefined FUN_147b0d76a(void)

void FUN_147b0d76a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined ***pppuVar5;
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_54;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong *local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_56 = 0;
  local_54 = 0;
  local_48 = 0;
  local_60 = &PTR_FUN_149eda6d0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = (longlong *)0x0;
  uStack_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (DAT_14c98e618 == (longlong *)0x0) {
    uVar4 = 7;
  }
  else {
    pppuVar5 = &local_60;
    if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
      pppuVar5 = *(undefined ****)(param_2 + 0x38);
    }
    uVar4 = (**(code **)(*DAT_14c98e618 + 0xa0))(DAT_14c98e618,pppuVar5);
  }
  plVar3 = local_30;
  *param_3 = uVar4;
  local_60 = &PTR_FUN_149eda6d0;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0d88a FUN_147b0d88a body=216 status=ok
// SIG undefined FUN_147b0d88a(void)

void FUN_147b0d88a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1449448d4(puVar5);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0d96a FUN_147b0d96a body=216 status=ok
// SIG undefined FUN_147b0d96a(void)

void FUN_147b0d96a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_140f47498(puVar5);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0da4a FUN_147b0da4a body=216 status=ok
// SIG undefined FUN_147b0da4a(void)

void FUN_147b0da4a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_144a8fce0(puVar5);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0db2a FUN_147b0db2a body=216 status=ok
// SIG undefined FUN_147b0db2a(void)

void FUN_147b0db2a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_144aa26b8(puVar5);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0dc0a FUN_147b0dc0a body=216 status=ok
// SIG undefined FUN_147b0dc0a(void)

void FUN_147b0dc0a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_14068e214(puVar5);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0dcea FUN_147b0dcea body=216 status=ok
// SIG undefined FUN_147b0dcea(void)

void FUN_147b0dcea(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_14171cd44(puVar5);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0ddca FUN_147b0ddca body=216 status=ok
// SIG undefined FUN_147b0ddca(void)

void FUN_147b0ddca(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_140230656(puVar5);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0deaa FUN_147b0deaa body=213 status=ok
// SIG undefined FUN_147b0deaa(void)

void FUN_147b0deaa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_147b0df80(puVar5);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0df80 FUN_147b0df80 body=49 status=ok
// SIG undefined FUN_147b0df80(void)

ulonglong FUN_147b0df80(undefined8 param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = FUN_1469125fa();
  if ((cVar1 != '\0') && (cVar1 = FUN_140230656(param_1), cVar1 == '\0')) {
    uVar2 = FUN_14171cc3c(param_1);
    return uVar2 ^ 1;
  }
  return 0;
}



// FUNCTION 147b0dfb8 FUN_147b0dfb8 body=216 status=ok
// SIG undefined FUN_147b0dfb8(void)

void FUN_147b0dfb8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_14171cb38(puVar5);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0e098 FUN_147b0e098 body=216 status=ok
// SIG undefined FUN_147b0e098(void)

void FUN_147b0e098(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_14171cc3c(puVar5);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0e178 FUN_147b0e178 body=216 status=ok
// SIG undefined FUN_147b0e178(void)

void FUN_147b0e178(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1403e7f2a(puVar5);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0e258 FUN_147b0e258 body=240 status=ok
// SIG undefined FUN_147b0e258(void)

void FUN_147b0e258(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar6 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar4 = FUN_144a8fce0(puVar6);
  uVar5 = 1;
  if (cVar4 == '\0') {
    uVar5 = FUN_144aa26b8(puVar6);
  }
  plVar3 = local_28;
  *param_3 = uVar5;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0e350 FUN_147b0e350 body=165 status=ok
// SIG undefined FUN_147b0e350(void)

void FUN_147b0e350(undefined8 param_1,longlong param_2,byte *param_3)

{
  byte *pbVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  pbVar1 = &local_19;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar1 = *(byte **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = *pbVar1 >> 1 & 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0e3fc FUN_147b0e3fc body=166 status=ok
// SIG undefined FUN_147b0e3fc(void)

void FUN_147b0e3fc(undefined8 param_1,longlong param_2,byte *param_3)

{
  byte *pbVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  pbVar1 = &local_19;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar1 = *(byte **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = *pbVar1 >> 3 & 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0e4aa FUN_147b0e4aa body=163 status=ok
// SIG undefined FUN_147b0e4aa(void)

void FUN_147b0e4aa(undefined8 param_1,longlong param_2,byte *param_3)

{
  byte *pbVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  pbVar1 = &local_19;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar1 = *(byte **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = *pbVar1 & 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0e554 FUN_147b0e554 body=166 status=ok
// SIG undefined FUN_147b0e554(void)

void FUN_147b0e554(undefined8 param_1,longlong param_2,byte *param_3)

{
  byte *pbVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  pbVar1 = &local_19;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar1 = *(byte **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = *pbVar1 >> 2 & 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0e5fc FUN_147b0e5fc body=349 status=ok
// SIG undefined FUN_147b0e5fc(void)

void FUN_147b0e5fc(undefined8 param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong *plVar4;
  undefined ***pppuVar5;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined7 local_30;
  undefined4 uStack_29;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = 0;
  local_8e = 0;
  local_8c = 0xffffffff00000000;
  local_80 = 0;
  local_98 = &PTR_FUN_149eda650;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = &DAT_14c96b1e8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  local_38 = 0x3f800000;
  local_34 = 0;
  local_30 = 0;
  uStack_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  plVar4 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar5 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar5 = &local_98;
  }
  fVar3 = *(float *)((longlong)pppuVar5 + 0x34);
  *param_3 = (double)*(float *)(pppuVar5 + 6);
  param_3[1] = (double)fVar3;
  local_98 = &PTR_FUN_149eda650;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0e75a FUN_147b0e75a body=429 status=ok
// SIG undefined FUN_147b0e75a(void)

void FUN_147b0e75a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  int *piVar2;
  longlong *plVar3;
  undefined **ppuVar4;
  longlong *plVar5;
  undefined ***pppuVar6;
  undefined1 auStack_d8 [40];
  undefined **local_b0;
  undefined **local_a8;
  undefined **local_a0;
  undefined **local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined7 local_30;
  undefined4 uStack_29;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_90 = 0;
  local_8e = 0;
  local_8c = 0xffffffff00000000;
  local_80 = 0;
  local_98 = &PTR_FUN_149eda650;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = &DAT_14c96b1e8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  local_38 = 0x3f800000;
  local_34 = 0;
  local_30 = 0;
  uStack_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  pppuVar6 = &local_98;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar6 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b0 = pppuVar6[8];
  local_a8 = pppuVar6[9];
  local_a0 = pppuVar6[10];
  if (local_a0 != (undefined **)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = *(int *)(local_a0 + 1) + 1;
    UNLOCK();
  }
  FUN_1413a4742(param_3,&local_b0);
  ppuVar4 = local_a0;
  if (local_a0 != (undefined **)0x0) {
    LOCK();
    ppuVar1 = local_a0 + 1;
    *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
    UNLOCK();
    if (*(int *)ppuVar1 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)ppuVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*ppuVar4 + 0x10))(ppuVar4);
      }
    }
  }
  plVar5 = local_48;
  local_98 = &PTR_FUN_149eda650;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0e908 FUN_147b0e908 body=349 status=ok
// SIG undefined FUN_147b0e908(void)

void FUN_147b0e908(undefined8 param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong *plVar4;
  undefined ***pppuVar5;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined7 local_30;
  undefined4 uStack_29;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = 0;
  local_8e = 0;
  local_8c = 0xffffffff00000000;
  local_80 = 0;
  local_98 = &PTR_FUN_149eda650;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = &DAT_14c96b1e8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  local_38 = 0x3f800000;
  local_34 = 0;
  local_30 = 0;
  uStack_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  plVar4 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar5 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar5 = &local_98;
  }
  fVar3 = *(float *)((longlong)pppuVar5 + 0x6c);
  *param_3 = (double)*(float *)(pppuVar5 + 0xd);
  param_3[1] = (double)fVar3;
  local_98 = &PTR_FUN_149eda650;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0ea66 FUN_147b0ea66 body=341 status=ok
// SIG undefined FUN_147b0ea66(void)

void FUN_147b0ea66(undefined8 param_1,longlong param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  byte bVar5;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined7 local_30;
  undefined4 uStack_29;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = 0;
  local_8e = 0;
  local_8c = 0xffffffff00000000;
  local_80 = 0;
  local_98 = &PTR_FUN_149eda650;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = &DAT_14c96b1e8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  local_38 = 0x3f800000;
  local_34 = 0;
  local_30 = 0;
  uStack_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  plVar3 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_98;
  }
  bVar5 = 0;
  if (*(byte *)((longlong)pppuVar4 + 0x65) < 6) {
    bVar5 = *(byte *)((longlong)pppuVar4 + 0x65);
  }
  *param_3 = bVar5;
  local_98 = &PTR_FUN_149eda650;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0ebbc FUN_147b0ebbc body=349 status=ok
// SIG undefined FUN_147b0ebbc(void)

void FUN_147b0ebbc(undefined8 param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong *plVar4;
  undefined ***pppuVar5;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined7 local_30;
  undefined4 uStack_29;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = 0;
  local_8e = 0;
  local_8c = 0xffffffff00000000;
  local_80 = 0;
  local_98 = &PTR_FUN_149eda650;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = &DAT_14c96b1e8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  local_38 = 0x3f800000;
  local_34 = 0;
  local_30 = 0;
  uStack_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  plVar4 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar5 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar5 = &local_98;
  }
  fVar3 = *(float *)((longlong)pppuVar5 + 0x2c);
  *param_3 = (double)*(float *)(pppuVar5 + 5);
  param_3[1] = (double)fVar3;
  local_98 = &PTR_FUN_149eda650;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0ed1a FUN_147b0ed1a body=332 status=ok
// SIG undefined FUN_147b0ed1a(void)

void FUN_147b0ed1a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined7 local_30;
  undefined4 uStack_29;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = 0;
  local_8e = 0;
  local_8c = 0xffffffff00000000;
  local_80 = 0;
  local_98 = &PTR_FUN_149eda650;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = &DAT_14c96b1e8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  local_38 = 0x3f800000;
  local_34 = 0;
  local_30 = 0;
  uStack_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  plVar3 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_98;
  }
  *param_3 = *(undefined4 *)(pppuVar4 + 0xb);
  local_98 = &PTR_FUN_149eda650;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0ee68 FUN_147b0ee68 body=349 status=ok
// SIG undefined FUN_147b0ee68(void)

void FUN_147b0ee68(undefined8 param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong *plVar4;
  undefined ***pppuVar5;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined7 local_30;
  undefined4 uStack_29;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = 0;
  local_8e = 0;
  local_8c = 0xffffffff00000000;
  local_80 = 0;
  local_98 = &PTR_FUN_149eda650;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = &DAT_14c96b1e8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  local_38 = 0x3f800000;
  local_34 = 0;
  local_30 = 0;
  uStack_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  plVar4 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar5 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar5 = &local_98;
  }
  fVar3 = *(float *)((longlong)pppuVar5 + 0x24);
  *param_3 = (double)*(float *)(pppuVar5 + 4);
  param_3[1] = (double)fVar3;
  local_98 = &PTR_FUN_149eda650;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0efc6 FUN_147b0efc6 body=332 status=ok
// SIG undefined FUN_147b0efc6(void)

void FUN_147b0efc6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined7 local_30;
  undefined4 uStack_29;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = 0;
  local_8e = 0;
  local_8c = 0xffffffff00000000;
  local_80 = 0;
  local_98 = &PTR_FUN_149eda650;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = &DAT_14c96b1e8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  local_38 = 0x3f800000;
  local_34 = 0;
  local_30 = 0;
  uStack_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  plVar3 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_98;
  }
  *param_3 = *(undefined4 *)((longlong)pppuVar4 + 0x5c);
  local_98 = &PTR_FUN_149eda650;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0f114 FUN_147b0f114 body=332 status=ok
// SIG undefined FUN_147b0f114(void)

void FUN_147b0f114(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined7 local_30;
  undefined4 uStack_29;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = 0;
  local_8e = 0;
  local_8c = 0xffffffff00000000;
  local_80 = 0;
  local_98 = &PTR_FUN_149eda650;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = &DAT_14c96b1e8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  local_38 = 0x3f800000;
  local_34 = 0;
  local_30 = 0;
  uStack_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  plVar3 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_98;
  }
  *param_3 = *(undefined4 *)((longlong)pppuVar4 + 0xc);
  local_98 = &PTR_FUN_149eda650;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0f262 FUN_147b0f262 body=336 status=ok
// SIG undefined FUN_147b0f262(void)

void FUN_147b0f262(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined7 local_30;
  undefined4 uStack_29;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = 0;
  local_8e = 0;
  local_8c = 0xffffffff00000000;
  local_80 = 0;
  local_98 = &PTR_FUN_149eda650;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = &DAT_14c96b1e8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  local_38 = 0x3f800000;
  local_34 = 0;
  local_30 = 0;
  uStack_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  plVar3 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_98;
  }
  *param_3 = *(undefined4 *)((longlong)pppuVar4 + 0x6c);
  local_98 = &PTR_FUN_149eda650;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0f3bc FUN_147b0f3bc body=504 status=ok
// SIG undefined FUN_147b0f3bc(void)

void FUN_147b0f3bc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined ***pppuVar5;
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined **local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_94;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined7 local_38;
  undefined4 uStack_31;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = 0;
  local_96 = 0;
  local_94 = 0xffffffff00000000;
  local_88 = 0;
  local_a0 = &PTR_FUN_149eda650;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = &DAT_14c96b1e8;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (longlong *)0x0;
  uStack_48 = 0;
  local_40 = 0x3f800000;
  local_3c = 0;
  local_38 = 0;
  uStack_31 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  pppuVar5 = &local_a0;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar5 = *(undefined ****)(param_2 + 0x38);
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_d0 = (undefined4)local_b8;
  uStack_cc = local_b8._4_4_;
  uStack_c8 = (undefined4)uStack_b0;
  uStack_c4 = uStack_b0._4_4_;
  local_c0 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_147b0f5b6(pppuVar5,&local_d0);
  plVar3 = local_a8;
  *param_3 = uVar4;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_50;
  local_a0 = &PTR_FUN_149eda650;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0f5b6 FUN_147b0f5b6 body=140 status=ok
// SIG undefined FUN_147b0f5b6(void)

undefined4 FUN_147b0f5b6(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_28 = param_2[1];
  local_20 = param_2[2];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar4 = FUN_1407c9dec(param_1,&local_30);
  plVar3 = (longlong *)param_2[2];
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
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0f64a FUN_147b0f64a body=332 status=ok
// SIG undefined FUN_147b0f64a(void)

void FUN_147b0f64a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined7 local_30;
  undefined4 uStack_29;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = 0;
  local_8e = 0;
  local_8c = 0xffffffff00000000;
  local_80 = 0;
  local_98 = &PTR_FUN_149eda650;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = &DAT_14c96b1e8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  local_38 = 0x3f800000;
  local_34 = 0;
  local_30 = 0;
  uStack_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  plVar3 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_98;
  }
  *param_3 = *(undefined1 *)((longlong)pppuVar4 + 100);
  local_98 = &PTR_FUN_149eda650;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0f7a0 FUN_147b0f7a0 body=226 status=ok
// SIG undefined FUN_147b0f7a0(void)

void FUN_147b0f7a0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_147b0f884(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0f884 FUN_147b0f884 body=131 status=ok
// SIG undefined FUN_147b0f884(void)

void FUN_147b0f884(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  uVar1 = FUN_140d5712e();
  FUN_1467ca2e2(uVar1,&local_20);
  if (param_2 != '\0') {
    FUN_14622b954(DAT_14c872ce0,L"Internationalization.AssetGroupCultures",local_20,&DAT_14c872b08);
    FUN_140d6d8de(DAT_14c872ce0,0,&DAT_14c872b08);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0f90e FUN_147b0f90e body=320 status=ok
// SIG undefined FUN_147b0f90e(void)

void FUN_147b0f90e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b0fa50(&local_40,local_28,local_2c != 0);
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
    local_40 = 0;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0fa50 FUN_147b0fa50 body=269 status=ok
// SIG undefined FUN_147b0fa50(void)

undefined8 * FUN_147b0fa50(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  void *_Dst;
  void *_Src;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = FUN_140d5712e();
  FUN_14588f6b4(uVar4,&local_38,param_2);
  if (local_38 == 0) {
    *param_1 = 0;
    iVar3 = *(int *)(param_2 + 1);
    lVar6 = (longlong)iVar3;
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar3;
    if (lVar6 == 0) goto LAB_147b0fb55;
    FUN_1446dd670(param_1,iVar3,0);
    _Dst = (void *)*param_1;
  }
  else {
    if (param_3 == '\0') {
      puVar5 = (undefined8 *)FUN_1467c506e();
    }
    else {
      puVar5 = (undefined8 *)FUN_1467c5068();
    }
    *param_1 = 0;
    iVar3 = *(int *)(puVar5 + 1);
    lVar6 = (longlong)iVar3;
    _Src = (void *)*puVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (lVar6 == 0) {
LAB_147b0fb55:
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      goto LAB_147b0fb0a;
    }
    FUN_1446dd670(param_1,iVar3,0);
    _Dst = (void *)*param_1;
  }
  memcpy(_Dst,_Src,lVar6 * 2);
LAB_147b0fb0a:
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
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0fb5e FUN_147b0fb5e body=218 status=ok
// SIG undefined FUN_147b0fb5e(void)

void FUN_147b0fb5e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b0fc3a(&local_30,local_20);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0fc3a FUN_147b0fc3a body=198 status=ok
// SIG undefined FUN_147b0fc3a(void)

undefined8 * FUN_147b0fc3a(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  uVar4 = FUN_140d5712e();
  FUN_140d570d8(uVar4,&local_38,&local_28);
  puVar5 = (undefined8 *)FUN_14142d806(local_38);
  *param_1 = 0;
  iVar3 = *(int *)(puVar5 + 1);
  _Src = (void *)*puVar5;
  *(int *)(param_1 + 1) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar3,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar3 * 2);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0fd02 FUN_147b0fd02 body=139 status=ok
// SIG undefined FUN_147b0fd02(void)

void FUN_147b0fd02(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b0fd8e(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0fd8e FUN_147b0fd8e body=147 status=ok
// SIG undefined FUN_147b0fd8e(void)

undefined8 * FUN_147b0fd8e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  void *_Src;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar6 = FUN_140d5712e();
  uVar4 = *(undefined8 *)(lVar6 + 0x28);
  plVar5 = *(longlong **)(lVar6 + 0x30);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)FUN_14142d806(uVar4);
  *param_1 = 0;
  iVar3 = *(int *)(puVar7 + 1);
  _Src = (void *)*puVar7;
  *(int *)(param_1 + 1) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar3,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar3 * 2);
  }
  if (plVar5 != (longlong *)0x0) {
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
  }
  return param_1;
}



// FUNCTION 147b0fe22 FUN_147b0fe22 body=139 status=ok
// SIG undefined FUN_147b0fe22(void)

void FUN_147b0fe22(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b0feae(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0feae FUN_147b0feae body=147 status=ok
// SIG undefined FUN_147b0feae(void)

undefined8 * FUN_147b0feae(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  void *_Src;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar6 = FUN_140d5712e();
  uVar4 = *(undefined8 *)(lVar6 + 0x28);
  plVar5 = *(longlong **)(lVar6 + 0x30);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)FUN_14142d806(uVar4);
  *param_1 = 0;
  iVar3 = *(int *)(puVar7 + 1);
  _Src = (void *)*puVar7;
  *(int *)(param_1 + 1) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar3,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar3 * 2);
  }
  if (plVar5 != (longlong *)0x0) {
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
  }
  return param_1;
}



// FUNCTION 147b0ff42 FUN_147b0ff42 body=139 status=ok
// SIG undefined FUN_147b0ff42(void)

void FUN_147b0ff42(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b0ffce(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b0ffce FUN_147b0ffce body=147 status=ok
// SIG undefined FUN_147b0ffce(void)

undefined8 * FUN_147b0ffce(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  void *_Src;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar6 = FUN_140d5712e();
  uVar4 = *(undefined8 *)(lVar6 + 0x38);
  plVar5 = *(longlong **)(lVar6 + 0x40);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)FUN_14142d806(uVar4);
  *param_1 = 0;
  iVar3 = *(int *)(puVar7 + 1);
  _Src = (void *)*puVar7;
  *(int *)(param_1 + 1) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar3,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar3 * 2);
  }
  if (plVar5 != (longlong *)0x0) {
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
  }
  return param_1;
}



// FUNCTION 147b10078 FUN_147b10078 body=501 status=ok
// SIG undefined FUN_147b10078(void)

void FUN_147b10078(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar3 = local_34;
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  iVar2 = local_38;
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar1 = local_3c;
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  bVar5 = local_40 != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_140008f10();
  FUN_140e825f0(uVar4,&local_50,
                bVar5 << 4 | (iVar1 != 0) * '\x02' | (iVar2 != 0) << 3 | (iVar3 != 0) << 2);
  FUN_1410e5bda(param_3,&local_50);
  FUN_1447a1747(local_50,local_48);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1026e FUN_147b1026e body=233 status=ok
// SIG undefined FUN_147b1026e(void)

void FUN_147b1026e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_21);
  uVar1 = FUN_140008f10();
  FUN_1467e7aa4(uVar1,&local_38,uVar2 & 0xffffffff);
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



// FUNCTION 147b10358 FUN_147b10358 body=454 status=ok
// SIG undefined FUN_147b10358(void)

void FUN_147b10358(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[4] = 0;
  local_58[5] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 4);
  }
  plVar1 = local_58 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b10520(&local_68,plVar1,local_58 + 2,local_58);
  if (&local_68 == param_3) {
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_68;
    local_68 = 0;
    *(undefined4 *)(param_3 + 1) = local_60;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_5c;
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_58[4],local_58[5] & 0xffffffff);
  if (local_58[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b10520 FUN_147b10520 body=289 status=ok
// SIG undefined FUN_147b10520(void)

undefined8 *
FUN_147b10520(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  void *_Dst;
  void *_Src;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_140d5712e();
  FUN_1406db95e(uVar3,&local_40,param_3);
  if ((longlong)local_38 != 0) {
    lVar5 = (longlong)local_38 << 4;
    puVar4 = local_40;
    do {
      cVar2 = FUN_144a23846(param_2,puVar4);
      if (cVar2 != '\0') {
        *param_1 = 0;
        iVar1 = *(int *)(puVar4 + 1);
        lVar5 = (longlong)iVar1;
        _Src = (void *)*puVar4;
        *(int *)(param_1 + 1) = iVar1;
        if (lVar5 == 0) goto LAB_147b10639;
        FUN_1446dd670(param_1,iVar1,0);
        _Dst = (void *)*param_1;
        goto LAB_147b105c0;
      }
      puVar4 = puVar4 + 2;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  *param_1 = 0;
  iVar1 = *(int *)(param_4 + 1);
  lVar5 = (longlong)iVar1;
  _Src = (void *)*param_4;
  *(int *)(param_1 + 1) = iVar1;
  if (lVar5 == 0) {
LAB_147b10639:
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    _Dst = (void *)*param_1;
LAB_147b105c0:
    memcpy(_Dst,_Src,lVar5 * 2);
  }
  FUN_1447a1747(local_40,local_38);
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b10648 FUN_147b10648 body=170 status=ok
// SIG undefined FUN_147b10648(void)

void FUN_147b10648(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147b106f4(local_28);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b106f4 FUN_147b106f4 body=137 status=ok
// SIG undefined FUN_147b106f4(void)

undefined4 FUN_147b106f4(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = FUN_140d5712e();
  FUN_14588f6b4(uVar4,&local_28,param_1);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1467c5074();
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1078a FUN_147b1078a body=325 status=ok
// SIG undefined FUN_147b1078a(void)

void FUN_147b1078a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [44];
  int local_3c;
  longlong local_38 [3];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147b108d0(local_20,local_38,local_3c != 0);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b108d0 FUN_147b108d0 body=184 status=ok
// SIG undefined FUN_147b108d0(void)

undefined4 FUN_147b108d0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_1;
  uVar2 = FUN_140d5712e();
  uVar1 = FUN_1461bef36(uVar2,&local_30,param_2);
  if ((param_3 & (byte)uVar1) == 1) {
    FUN_14622b954(DAT_14c872ce0,L"Internationalization.AssetGroupCultures",local_30,&DAT_14c872b08);
    local_38 = &DAT_14c872b08;
    FUN_140d68b26(DAT_14c872ce0,L"Internationalization.AssetGroupCultures",local_30,param_2);
    FUN_140d6d8de(DAT_14c872ce0,0,&DAT_14c872b08);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b10996 FUN_147b10996 body=248 status=ok
// SIG undefined FUN_147b10996(void)

void FUN_147b10996(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147b10a90(local_28,local_2c != 0);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b10a90 FUN_147b10a90 body=144 status=ok
// SIG undefined FUN_147b10a90(void)

undefined4 FUN_147b10a90(undefined8 *param_1,byte param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  
  uVar2 = FUN_140d5712e();
  uVar1 = FUN_1467c9f6a(uVar2,param_1);
  if ((param_2 & (byte)uVar1) == 1) {
    if (*(int *)(param_1 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_1;
    }
    FUN_1410abc14(DAT_14c872ce0,L"Internationalization",L"Culture",puVar3,&DAT_14c872b08);
    FUN_145ff2c7c(DAT_14c872ce0,L"Internationalization.AssetGroupCultures",&DAT_14c872b08);
    FUN_140d6d8de(DAT_14c872ce0,0,&DAT_14c872b08);
  }
  return uVar1;
}



// FUNCTION 147b10b2c FUN_147b10b2c body=248 status=ok
// SIG undefined FUN_147b10b2c(void)

void FUN_147b10b2c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147b10c26(local_28,local_2c != 0);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b10c26 FUN_147b10c26 body=122 status=ok
// SIG undefined FUN_147b10c26(void)

undefined4 FUN_147b10c26(undefined8 *param_1,byte param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  
  uVar2 = FUN_140d5712e();
  uVar1 = FUN_1467ca0f8(uVar2,param_1);
  if ((param_2 & (byte)uVar1) == 1) {
    if (*(int *)(param_1 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_1;
    }
    FUN_1410abc14(DAT_14c872ce0,L"Internationalization",L"Language",puVar3,&DAT_14c872b08);
    FUN_140d6d8de(DAT_14c872ce0,0,&DAT_14c872b08);
  }
  return uVar1;
}



// FUNCTION 147b10cac FUN_147b10cac body=248 status=ok
// SIG undefined FUN_147b10cac(void)

void FUN_147b10cac(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147b10da6(local_28,local_2c != 0);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b10da6 FUN_147b10da6 body=173 status=ok
// SIG undefined FUN_147b10da6(void)

undefined4 FUN_147b10da6(undefined8 *param_1,byte param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  uVar2 = FUN_140d5712e();
  uVar1 = FUN_14611b2e6(uVar2,param_1);
  if ((param_2 & (byte)uVar1) == 1) {
    puVar4 = &DAT_149dfb77a;
    puVar3 = &DAT_149dfb77a;
    if (*(int *)(param_1 + 1) != 0) {
      puVar3 = (undefined2 *)*param_1;
    }
    FUN_1410abc14(DAT_14c872ce0,L"Internationalization",L"Language",puVar3,&DAT_14c872b08);
    if (*(int *)(param_1 + 1) != 0) {
      puVar4 = (undefined2 *)*param_1;
    }
    FUN_1410abc14(DAT_14c872ce0,L"Internationalization",L"Locale",puVar4,&DAT_14c872b08);
    FUN_140d6d8de(DAT_14c872ce0,0,&DAT_14c872b08);
  }
  return uVar1;
}



// FUNCTION 147b10e60 FUN_147b10e60 body=248 status=ok
// SIG undefined FUN_147b10e60(void)

void FUN_147b10e60(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147b10f5a(local_28,local_2c != 0);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b10f5a FUN_147b10f5a body=122 status=ok
// SIG undefined FUN_147b10f5a(void)

undefined4 FUN_147b10f5a(undefined8 *param_1,byte param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  
  uVar2 = FUN_140d5712e();
  uVar1 = FUN_1467ca202(uVar2,param_1);
  if ((param_2 & (byte)uVar1) == 1) {
    if (*(int *)(param_1 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_1;
    }
    FUN_1410abc14(DAT_14c872ce0,L"Internationalization",L"Locale",puVar3,&DAT_14c872b08);
    FUN_140d6d8de(DAT_14c872ce0,0,&DAT_14c872b08);
  }
  return uVar1;
}



// FUNCTION 147b10fd8 FUN_147b10fd8 body=408 status=ok
// SIG undefined FUN_147b10fd8(void)

void FUN_147b10fd8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
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
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1411403ca(local_20,local_28,local_30,local_31);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b11172 FUN_147b11172 body=319 status=ok
// SIG undefined FUN_147b11172(void)

void FUN_147b11172(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b112b2(&local_40,local_20,local_28,local_30);
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b112b2 FUN_147b112b2 body=1523 status=ok
// SIG undefined FUN_147b112b2(void)

undefined4 *
FUN_147b112b2(undefined4 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_1d8 [40];
  undefined1 local_1b0 [4];
  undefined1 local_1ac [4];
  longlong *local_1a8 [2];
  undefined1 local_198 [16];
  longlong *local_188 [2];
  wchar_t *local_178;
  longlong *local_170;
  longlong *local_168 [2];
  undefined8 local_158;
  longlong *local_150;
  undefined8 local_148;
  longlong *local_140;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  longlong *local_130 [2];
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong *local_108;
  longlong *local_100 [2];
  undefined1 local_f0 [8];
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined8 local_90;
  wchar_t *local_88;
  longlong *local_80;
  undefined4 local_78 [4];
  longlong *local_68;
  undefined4 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3f800000;
  local_90 = param_4;
  if (param_3 != 0) {
    lVar5 = FUN_1402ad3be(DAT_14cb0d2b0,param_2,1);
    if (lVar5 != 0) {
      lVar5 = FUN_1448e494c(lVar5,param_3);
      cVar4 = FUN_147bc80bc(lVar5,param_4,param_1);
      if ((cVar4 == '\0') && (*(char *)(lVar5 + 0x28) == '\0')) {
        local_a8 = 0;
        uStack_a0 = 0;
        FUN_145715fae(&local_88,&local_90);
        local_78[0] = 4;
        FUN_14023423e(&local_68,&local_88);
        FUN_140056680(&local_b8,L"ParamName");
        FUN_140233eec(&local_a8,&local_b8,local_78);
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        if (local_68 != (longlong *)0x0) {
          (**(code **)(*local_68 + 0x10))();
          local_68 = (longlong *)0x0;
          local_60 = 0;
        }
        if (local_88 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_88 + 0x10))();
        }
        FUN_1446ddc76(local_f0,&DAT_14a492018,1);
        FUN_14276766e(local_78,local_f0);
        FUN_144a5dc74(local_100);
        FUN_1427679d4(local_78,&local_e8,local_100);
        local_88 = L"GetVectorParamOn";
        local_80._0_4_ = 0x10;
        FUN_1446e940c(local_134,&local_88);
        local_88 = L"KismetMaterialLibrary";
        local_80._0_4_ = 0x15;
        FUN_1446e940c(local_138,&local_88);
        FUN_140208bae(local_130,local_138,local_134,L"GetVectorParameterValue called on");
        FUN_1467eb2e4(&local_120,local_130,1);
        local_110 = local_120;
        local_108 = local_118;
        if (local_118 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_118 + 1) = (int)local_118[1] + 1;
          UNLOCK();
        }
        FUN_1467eb24e(local_e8,&local_d8,&local_110);
        FUN_144a5dc74(local_168);
        FUN_1468756a4(&local_158,param_3,local_168);
        local_148 = local_158;
        local_140 = local_150;
        if (local_150 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_150 + 1) = (int)local_150[1] + 1;
          UNLOCK();
        }
        FUN_1467eb24e(local_d8,&local_b8,&local_148);
        local_88 = L"WithInvalidParam";
        local_80._0_4_ = 0x10;
        FUN_1446e940c(local_1ac,&local_88);
        local_88 = L"KismetMaterialLibrary";
        local_80 = (longlong *)CONCAT44(local_80._4_4_,0x15);
        FUN_1446e940c(local_1b0,&local_88);
        FUN_140208bae(local_1a8,local_1b0,local_1ac,
                      L"with invalid ParameterName \'{ParamName}\'. This is likely due to a Blueprint error."
                     );
        FUN_14023409e(local_198,local_1a8,1);
        FUN_140233c04(local_188,local_198,&local_a8);
        FUN_1467eb2e4(&local_178,local_188,1);
        local_88 = local_178;
        local_80 = local_170;
        if (local_170 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_170 + 1) = (int)local_170[1] + 1;
          UNLOCK();
        }
        FUN_1467eb24e(local_b8,local_c8,&local_88);
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_c0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar2 = (int *)((longlong)local_c0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_c0 + 0x10))(local_c0);
            }
          }
        }
        plVar1 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_80 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_170 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_170 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_170)(local_170);
            LOCK();
            piVar2 = (int *)((longlong)local_170 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_170 + 0x10))(local_170);
            }
          }
        }
        if (local_188[0] != (longlong *)0x0) {
          (**(code **)(*local_188[0] + 0x10))();
        }
        if (local_1a8[0] != (longlong *)0x0) {
          (**(code **)(*local_1a8[0] + 0x10))();
        }
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_b0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar2 = (int *)((longlong)local_b0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_b0 + 0x10))(local_b0);
            }
          }
        }
        plVar1 = local_140;
        if (local_140 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_140 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_140)(local_140);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_150 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_150 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_150)(local_150);
            LOCK();
            piVar2 = (int *)((longlong)local_150 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_150 + 0x10))(local_150);
            }
          }
        }
        if (local_168[0] != (longlong *)0x0) {
          (**(code **)(*local_168[0] + 0x10))();
        }
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_d0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar2 = (int *)((longlong)local_d0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_d0 + 0x10))(local_d0);
            }
          }
        }
        plVar1 = local_108;
        if (local_108 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_108 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_108)(local_108);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_118 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar2 = (int *)((longlong)local_118 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_118 + 0x10))(local_118);
            }
          }
        }
        if (local_130[0] != (longlong *)0x0) {
          (**(code **)(*local_130[0] + 0x10))();
        }
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_e0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_e0)(local_e0);
            LOCK();
            piVar2 = (int *)((longlong)local_e0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_e0 + 0x10))(local_e0);
            }
          }
        }
        if (local_100[0] != (longlong *)0x0) {
          (**(code **)(*local_100[0] + 0x10))();
        }
        FUN_1427678c0(local_78);
        *(undefined1 *)(lVar5 + 0x28) = 1;
        FUN_14010f8af(local_a8,uStack_a0 & 0xffffffff);
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b118a6 FUN_147b118a6 body=380 status=ok
// SIG undefined FUN_147b118a6(void)

void FUN_147b118a6(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_147b11a24(local_18,local_20,local_28,puVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b11a24 FUN_147b11a24 body=1505 status=ok
// SIG undefined FUN_147b11a24(void)

void FUN_147b11a24(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_1c8 [40];
  undefined1 local_1a0 [4];
  undefined1 local_19c [4];
  longlong *local_198 [2];
  undefined1 local_188 [16];
  longlong *local_178 [2];
  wchar_t *local_168;
  longlong *local_160;
  longlong *local_158 [2];
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  longlong *local_120 [2];
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong *local_f8;
  longlong *local_f0 [2];
  undefined1 local_e0 [8];
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  wchar_t *local_80;
  longlong *local_78;
  undefined4 local_70 [4];
  longlong *local_60;
  undefined4 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_88 = param_3;
  if (param_2 != 0) {
    lVar5 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (lVar5 != 0) {
      lVar5 = FUN_1448e494c(lVar5,param_2);
      cVar4 = FUN_144938f46(lVar5,param_3,param_4);
      if ((cVar4 == '\0') && (*(char *)(lVar5 + 0x28) == '\0')) {
        local_98 = 0;
        uStack_90 = 0;
        FUN_145715fae(&local_80,&local_88);
        local_70[0] = 4;
        FUN_14023423e(&local_60,&local_80);
        FUN_140056680(&local_a8,L"ParamName");
        FUN_140233eec(&local_98,&local_a8,local_70);
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
        if (local_60 != (longlong *)0x0) {
          (**(code **)(*local_60 + 0x10))();
          local_60 = (longlong *)0x0;
          local_58 = 0;
        }
        if (local_80 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_80 + 0x10))();
        }
        FUN_1446ddc76(local_e0,&DAT_14a492018,1);
        FUN_14276766e(local_70,local_e0);
        FUN_144a5dc74(local_f0);
        FUN_1427679d4(local_70,&local_d8,local_f0);
        local_80 = L"SetVectorParamOn";
        local_78._0_4_ = 0x10;
        FUN_1446e940c(local_124,&local_80);
        local_80 = L"KismetMaterialLibrary";
        local_78._0_4_ = 0x15;
        FUN_1446e940c(local_128,&local_80);
        FUN_140208bae(local_120,local_128,local_124,L"SetVectorParameterValue called on");
        FUN_1467eb2e4(&local_110,local_120,1);
        local_100 = local_110;
        local_f8 = local_108;
        if (local_108 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_108 + 1) = (int)local_108[1] + 1;
          UNLOCK();
        }
        FUN_1467eb24e(local_d8,&local_c8,&local_100);
        FUN_144a5dc74(local_158);
        FUN_1468756a4(&local_148,param_2,local_158);
        local_138 = local_148;
        local_130 = local_140;
        if (local_140 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_140 + 1) = (int)local_140[1] + 1;
          UNLOCK();
        }
        FUN_1467eb24e(local_c8,&local_a8,&local_138);
        local_80 = L"WithInvalidParam";
        local_78._0_4_ = 0x10;
        FUN_1446e940c(local_19c,&local_80);
        local_80 = L"KismetMaterialLibrary";
        local_78 = (longlong *)CONCAT44(local_78._4_4_,0x15);
        FUN_1446e940c(local_1a0,&local_80);
        FUN_140208bae(local_198,local_1a0,local_19c,
                      L"with invalid ParameterName \'{ParamName}\'. This is likely due to a Blueprint error."
                     );
        FUN_14023409e(local_188,local_198,1);
        FUN_140233c04(local_178,local_188,&local_98);
        FUN_1467eb2e4(&local_168,local_178,1);
        local_80 = local_168;
        local_78 = local_160;
        if (local_160 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_160 + 1) = (int)local_160[1] + 1;
          UNLOCK();
        }
        FUN_1467eb24e(local_a8,local_b8,&local_80);
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_b0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar2 = (int *)((longlong)local_b0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_b0 + 0x10))(local_b0);
            }
          }
        }
        plVar1 = local_78;
        if (local_78 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_78 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_78)(local_78);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_160 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_160 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_160)(local_160);
            LOCK();
            piVar2 = (int *)((longlong)local_160 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_160 + 0x10))(local_160);
            }
          }
        }
        if (local_178[0] != (longlong *)0x0) {
          (**(code **)(*local_178[0] + 0x10))();
        }
        if (local_198[0] != (longlong *)0x0) {
          (**(code **)(*local_198[0] + 0x10))();
        }
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_a0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar2 = (int *)((longlong)local_a0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_a0 + 0x10))(local_a0);
            }
          }
        }
        plVar1 = local_130;
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_130 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_140 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_140 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_140)(local_140);
            LOCK();
            piVar2 = (int *)((longlong)local_140 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_140 + 0x10))(local_140);
            }
          }
        }
        if (local_158[0] != (longlong *)0x0) {
          (**(code **)(*local_158[0] + 0x10))();
        }
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_c0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar2 = (int *)((longlong)local_c0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_c0 + 0x10))(local_c0);
            }
          }
        }
        plVar1 = local_f8;
        if (local_f8 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_f8 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_f8)(local_f8);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_108 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_108 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_108)(local_108);
            LOCK();
            piVar2 = (int *)((longlong)local_108 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_108 + 0x10))(local_108);
            }
          }
        }
        if (local_120[0] != (longlong *)0x0) {
          (**(code **)(*local_120[0] + 0x10))();
        }
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_d0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar2 = (int *)((longlong)local_d0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_d0 + 0x10))(local_d0);
            }
          }
        }
        if (local_f0[0] != (longlong *)0x0) {
          (**(code **)(*local_f0[0] + 0x10))();
        }
        FUN_1427678c0(local_70);
        *(undefined1 *)(lVar5 + 0x28) = 1;
        FUN_14010f8af(local_98,uStack_90 & 0xffffffff);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b12009 FUN_147b12009 body=55 status=ok
// SIG undefined FUN_147b12009(void)

void FUN_147b12009(void)

{
  undefined8 uVar1;
  
  if (DAT_14cae56a0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cae56a0 = FUN_14171c317(FUN_1463d5671,uVar1,L"EEasingFunc");
  }
  return;
}



// FUNCTION 147b12040 FUN_147b12040 body=155 status=ok
// SIG undefined FUN_147b12040(void)

void FUN_147b12040(undefined8 param_1,longlong param_2,int *param_3)

{
  int iVar1;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = -local_1c;
  if (-local_1c < 0) {
    iVar1 = local_1c;
  }
  *param_3 = iVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b120dc FUN_147b120dc body=161 status=ok
// SIG undefined FUN_147b120dc(void)

void FUN_147b120dc(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = -local_20;
  if (-local_20 < 0) {
    lVar1 = local_20;
  }
  *param_3 = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1217e FUN_147b1217e body=198 status=ok
// SIG undefined FUN_147b1217e(void)

void FUN_147b1217e(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = local_20;
  if (1.0 <= local_20) {
    dVar1 = 1.0;
  }
  dVar1 = acos((double)(~-(ulonglong)(local_20 < -1.0) & (ulonglong)dVar1 |
                       -(ulonglong)(local_20 < -1.0) & 0xbff0000000000000));
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b12246 FUN_147b12246 body=216 status=ok
// SIG undefined FUN_147b12246(void)

void FUN_147b12246(undefined8 param_1,longlong param_2,char *param_3)

{
  undefined1 auStack_48 [46];
  char local_1a;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = '\0';
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_1a = '\0';
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_19 + local_1a;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b12320 FUN_147b12320 body=230 status=ok
// SIG undefined FUN_147b12320(void)

void FUN_147b12320(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20 + local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b12408 FUN_147b12408 body=230 status=ok
// SIG undefined FUN_147b12408(void)

void FUN_147b12408(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20 + local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b124f0 FUN_147b124f0 body=230 status=ok
// SIG undefined FUN_147b124f0(void)

void FUN_147b124f0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20 + local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b125d8 FUN_147b125d8 body=242 status=ok
// SIG undefined FUN_147b125d8(void)

void FUN_147b125d8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = CONCAT44(local_20._4_4_ + local_24,local_20._0_4_ + local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b126cc FUN_147b126cc body=250 status=ok
// SIG undefined FUN_147b126cc(void)

void FUN_147b126cc(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (ulonglong)(uint)((int)local_28 + (int)local_20) |
             (local_28 & 0xffffffff00000000) + local_20 & 0xffffffff00000000;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b127c8 FUN_147b127c8 body=277 status=ok
// SIG undefined FUN_147b127c8(void)

void FUN_147b127c8(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined1 auStack_58 [32];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_38 + local_28;
  param_3[1] = local_34 + local_24;
  param_3[2] = local_30 + local_20;
  param_3[3] = local_2c + local_1c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b128de FUN_147b128de body=391 status=ok
// SIG undefined FUN_147b128de(void)

void FUN_147b128de(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  double *pdVar4;
  undefined1 auStack_1c8 [8];
  double adStack_1c0 [19];
  undefined1 local_128 [128];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar3 = local_a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  puVar1 = local_128;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = 0x18;
  do {
    *(double *)((longlong)adStack_1c0 + lVar2) =
         *(double *)(puVar3 + lVar2 + -0x18) + *(double *)(puVar1 + lVar2 + -0x18);
    *(double *)((longlong)adStack_1c0 + lVar2 + 8) =
         *(double *)(puVar3 + lVar2 + -0x10) + *(double *)(puVar1 + lVar2 + -0x10);
    *(double *)((longlong)adStack_1c0 + lVar2 + 0x10) =
         *(double *)(puVar3 + lVar2 + -8) + *(double *)(puVar1 + lVar2 + -8);
    *(double *)((longlong)adStack_1c0 + lVar2 + 0x18) =
         *(double *)(puVar3 + lVar2) + *(double *)(puVar1 + lVar2);
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x98);
  pdVar4 = adStack_1c0 + 3;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *param_3 = *pdVar4;
    pdVar4 = pdVar4 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_28 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b12a66 FUN_147b12a66 body=285 status=ok
// SIG undefined FUN_147b12a66(void)

void FUN_147b12a66(undefined8 param_1,longlong param_2,undefined1 (*param_3) [16])

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double *pdVar6;
  double *pdVar7;
  undefined1 auStack_88 [32];
  double local_68 [4];
  double local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  pdVar7 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  pdVar6 = local_48;
  if (pdVar7 != (double *)0x0) {
    pdVar6 = pdVar7;
  }
  pdVar7 = local_68;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar7 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar4 = pdVar6[2];
  dVar5 = pdVar6[3];
  dVar1 = pdVar7[2];
  dVar2 = pdVar7[3];
  auVar3._8_4_ = SUB84(pdVar6[1] + pdVar7[1],0);
  auVar3._0_8_ = *pdVar6 + *pdVar7;
  auVar3._12_4_ = (int)((ulonglong)(pdVar6[1] + pdVar7[1]) >> 0x20);
  *param_3 = auVar3;
  *(double *)param_3[1] = dVar4 + dVar1;
  *(double *)(param_3[1] + 8) = dVar5 + dVar2;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b12b84 FUN_147b12b84 body=230 status=ok
// SIG undefined FUN_147b12b84(void)

void FUN_147b12b84(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20 + local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b12c6c FUN_147b12c6c body=250 status=ok
// SIG undefined FUN_147b12c6c(void)

void FUN_147b12c6c(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_30 + local_28;
  param_3[1] = local_20 + local_30;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b12d68 FUN_147b12d68 body=243 status=ok
// SIG undefined FUN_147b12d68(void)

void FUN_147b12d68(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_38 + local_28;
  param_3[1] = local_30 + local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b12e5c FUN_147b12e5c body=369 status=ok
// SIG undefined FUN_147b12e5c(void)

void FUN_147b12e5c(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double *pdVar8;
  undefined1 auStack_98 [32];
  double local_78 [9];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[4] = 0.0;
  local_78[5] = 0.0;
  local_78[6] = 0.0;
  local_78[7] = 1.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 4);
  }
  pdVar8 = *(double **)(param_2 + 0x38);
  local_78[0] = 0.0;
  local_78[1] = 0.0;
  local_78[2] = 0.0;
  local_78[3] = 1.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  pdVar7 = local_78 + 4;
  if (pdVar8 != (double *)0x0) {
    pdVar7 = pdVar8;
  }
  pdVar8 = local_78;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar8 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar7[3];
  dVar2 = pdVar8[3];
  dVar3 = pdVar7[2];
  dVar4 = pdVar8[2];
  dVar5 = pdVar7[1];
  dVar6 = pdVar8[1];
  *param_3 = *pdVar7 + *pdVar8;
  param_3[1] = dVar5 + dVar6;
  param_3[2] = dVar3 + dVar4;
  param_3[3] = dVar1 + dVar2;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b12fce FUN_147b12fce body=265 status=ok
// SIG undefined FUN_147b12fce(void)

void FUN_147b12fce(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_38 + local_30;
  param_3[1] = local_28 + local_38;
  param_3[2] = local_20 + local_38;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b130d8 FUN_147b130d8 body=268 status=ok
// SIG undefined FUN_147b130d8(void)

void FUN_147b130d8(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_58 [36];
  int local_34;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = (double)local_34;
  *param_3 = dVar1 + local_30;
  param_3[1] = local_28 + dVar1;
  param_3[2] = local_20 + dVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b131e6 FUN_147b131e6 body=230 status=ok
// SIG undefined FUN_147b131e6(void)

void FUN_147b131e6(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20 & local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b132ce FUN_147b132ce body=222 status=ok
// SIG undefined FUN_147b132ce(void)

void FUN_147b132ce(undefined8 param_1,longlong param_2,uint *param_3)

{
  undefined1 auStack_48 [40];
  uint local_20;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_1c & local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b133ae FUN_147b133ae body=198 status=ok
// SIG undefined FUN_147b133ae(void)

void FUN_147b133ae(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = local_20;
  if (1.0 <= local_20) {
    dVar1 = 1.0;
  }
  dVar1 = asin((double)(~-(ulonglong)(local_20 < -1.0) & (ulonglong)dVar1 |
                       -(ulonglong)(local_20 < -1.0) & 0xbff0000000000000));
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b13476 FUN_147b13476 body=158 status=ok
// SIG undefined FUN_147b13476(void)

void FUN_147b13476(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = atan(local_20);
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b13516 FUN_147b13516 body=277 status=ok
// SIG undefined FUN_147b13516(void)

void FUN_147b13516(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = 0.0;
  if ((((local_28 != 0.0) || (NAN(local_28))) || (local_20 != 0.0)) || (NAN(local_20))) {
    dVar1 = atan2(local_20,local_28);
  }
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1362c FUN_147b1362c body=359 status=ok
// SIG undefined FUN_147b1362c(void)

void FUN_147b1362c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  float fVar7;
  undefined1 auStack_78 [44];
  float local_4c;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar5 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar5 = local_48;
  }
  local_4c = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  pfVar2 = &local_4c;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar2 = *(float **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *pfVar2 = 0.0;
  plVar6 = local_48;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  iVar3 = (int)plVar6[1];
  fVar7 = 0.0;
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      fVar7 = fVar7 + (float)*(int *)(*plVar5 + lVar4 * 4);
      *pfVar2 = fVar7;
      lVar4 = lVar4 + 1;
      iVar3 = (int)plVar6[1];
    } while (lVar4 < iVar3);
  }
  *pfVar2 = fVar7 / (float)iVar3;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b13794 FUN_147b13794 body=229 status=ok
// SIG undefined FUN_147b13794(void)

void FUN_147b13794(undefined8 param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  undefined1 auStack_48 [46];
  byte local_1a;
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_1a = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  bVar1 = local_19;
  if (local_19 < local_1a) {
    bVar1 = local_1a;
  }
  *param_3 = bVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1387a FUN_147b1387a body=229 status=ok
// SIG undefined FUN_147b1387a(void)

void FUN_147b1387a(undefined8 param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  undefined1 auStack_48 [46];
  byte local_1a;
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_1a = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  bVar1 = local_1a;
  if (local_19 < local_1a) {
    bVar1 = local_19;
  }
  *param_3 = bVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b13980 FUN_147b13980 body=241 status=ok
// SIG undefined FUN_147b13980(void)

void FUN_147b13980(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
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
  *(bool *)param_3 = local_28 == 0 || iVar1 == 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b13aa2 FUN_147b13aa2 body=241 status=ok
// SIG undefined FUN_147b13aa2(void)

void FUN_147b13aa2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
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
  *(bool *)param_3 = (local_28 != 0) != (iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b13b94 FUN_147b13b94 body=460 status=ok
// SIG undefined FUN_147b13b94(void)

void FUN_147b13b94(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  undefined1 auStack_b8 [32];
  double local_98 [3];
  double local_80 [3];
  double local_68 [6];
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  pdVar13 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  pdVar12 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  pdVar11 = local_80;
  if (pdVar12 != (double *)0x0) {
    pdVar11 = pdVar12;
  }
  pdVar12 = local_68;
  if (pdVar13 != (double *)0x0) {
    pdVar12 = pdVar13;
  }
  pdVar13 = local_98;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar13 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar12[5];
  dVar2 = pdVar13[2];
  dVar3 = pdVar12[4];
  dVar4 = pdVar13[1];
  dVar5 = pdVar12[3];
  dVar6 = *pdVar13;
  dVar7 = pdVar12[2];
  dVar8 = pdVar11[2];
  dVar9 = pdVar12[1];
  dVar10 = pdVar11[1];
  *param_3 = *pdVar12 - *pdVar11;
  param_3[1] = dVar9 - dVar10;
  param_3[2] = dVar7 - dVar8;
  param_3[3] = dVar5 + dVar6;
  param_3[4] = dVar3 + dVar4;
  param_3[5] = dVar1 + dVar2;
  *(undefined1 *)(param_3 + 6) = 1;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b13d62 FUN_147b13d62 body=439 status=ok
// SIG undefined FUN_147b13d62(void)

void FUN_147b13d62(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  double dVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_a8 [32];
  double local_88 [3];
  double local_70 [6];
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  pdVar2 = *(double **)(param_2 + 0x38);
  pdVar4 = pdVar2;
  if (pdVar2 == (double *)0x0) {
    pdVar4 = local_70;
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  pdVar3 = local_88;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar3 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = *pdVar3;
  dVar7 = pdVar3[1];
  dVar8 = *pdVar4;
  uVar5 = SUB84(dVar8,0);
  uVar6 = (undefined4)((ulonglong)dVar8 >> 0x20);
  if (dVar8 <= dVar1) {
    pdVar4 = pdVar2;
    if (pdVar2 == (double *)0x0) {
      pdVar4 = local_70;
    }
    dVar8 = pdVar4[3];
    uVar5 = SUB84(dVar1,0);
    uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
    if (dVar8 < dVar1) {
      uVar5 = SUB84(dVar8,0);
      uVar6 = (undefined4)((ulonglong)dVar8 >> 0x20);
    }
  }
  pdVar4 = pdVar2;
  if (pdVar2 == (double *)0x0) {
    pdVar4 = local_70;
  }
  dVar1 = pdVar3[2];
  dVar8 = pdVar4[1];
  if (pdVar4[1] <= dVar7) {
    pdVar4 = pdVar2;
    if (pdVar2 == (double *)0x0) {
      pdVar4 = local_70;
    }
    dVar8 = dVar7;
    if (pdVar4[4] < dVar7) {
      dVar8 = pdVar4[4];
    }
  }
  pdVar4 = pdVar2;
  if (pdVar2 == (double *)0x0) {
    pdVar4 = local_70;
  }
  dVar7 = pdVar4[2];
  if (pdVar4[2] <= dVar1) {
    pdVar4 = local_70;
    if (pdVar2 != (double *)0x0) {
      pdVar4 = pdVar2;
    }
    dVar7 = dVar1;
    if (pdVar4[5] < dVar1) {
      dVar7 = pdVar4[5];
    }
  }
  *param_3 = CONCAT44(uVar6,uVar5);
  param_3[1] = dVar8;
  param_3[2] = dVar7;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b13f20 FUN_147b13f20 body=274 status=ok
// SIG undefined FUN_147b13f20(void)

void FUN_147b13f20(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [48];
  undefined1 local_68;
  undefined1 local_60 [48];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_68 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar2 = local_60;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147b14034(puVar2,puVar3);
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b14034 FUN_147b14034 body=77 status=ok
// SIG undefined FUN_147b14034(void)

undefined8 FUN_147b14034(double *param_1,double *param_2)

{
  undefined8 uVar1;
  
  if ((((param_2[3] <= *param_1 && *param_1 != param_2[3]) ||
       (param_1[3] <= *param_2 && *param_2 != param_1[3])) ||
      (param_2[4] <= param_1[1] && param_1[1] != param_2[4])) ||
     (((param_1[4] <= param_2[1] && param_2[1] != param_1[4] ||
       (param_2[5] <= param_1[2] && param_1[2] != param_2[5])) ||
      (param_1[5] <= param_2[2] && param_2[2] != param_1[5])))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 147b14088 FUN_147b14088 body=274 status=ok
// SIG undefined FUN_147b14088(void)

void FUN_147b14088(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [48];
  undefined1 local_68;
  undefined1 local_60 [48];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_68 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar2 = local_60;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147b1419c(puVar2,puVar3);
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1419c FUN_147b1419c body=157 status=ok
// SIG undefined FUN_147b1419c(void)

bool FUN_147b1419c(double *param_1,double *param_2)

{
  if ((*param_2 < *param_1) && (*param_1 < param_2[3])) {
    if ((param_2[1] < param_1[1]) && (param_1[1] < param_2[4])) {
      if ((param_2[2] < param_1[2]) && (param_1[2] < param_2[5])) {
        if (param_1[3] <= *param_2) {
          return false;
        }
        if (param_2[3] <= param_1[3]) {
          return false;
        }
        if (param_1[4] <= param_2[1]) {
          return false;
        }
        if (param_2[4] <= param_1[4]) {
          return false;
        }
        if (param_2[2] < param_1[5]) {
          return param_1[5] < param_2[5];
        }
      }
    }
  }
  return false;
}



// FUNCTION 147b14240 FUN_147b14240 body=274 status=ok
// SIG undefined FUN_147b14240(void)

void FUN_147b14240(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [48];
  undefined1 local_68;
  undefined1 local_60 [48];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_68 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar2 = local_60;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147b14354(puVar2,puVar3);
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b14354 FUN_147b14354 body=157 status=ok
// SIG undefined FUN_147b14354(void)

bool FUN_147b14354(double *param_1,double *param_2)

{
  if ((*param_2 <= *param_1) && (*param_1 <= param_2[3])) {
    if ((param_2[1] <= param_1[1]) && (param_1[1] <= param_2[4])) {
      if ((param_2[2] <= param_1[2]) && (param_1[2] <= param_2[5])) {
        if (param_1[3] < *param_2) {
          return false;
        }
        if (param_2[3] < param_1[3]) {
          return false;
        }
        if (param_1[4] < param_2[1]) {
          return false;
        }
        if (param_2[4] < param_1[4]) {
          return false;
        }
        if (param_2[2] <= param_1[5]) {
          return param_1[5] <= param_2[5];
        }
      }
    }
  }
  return false;
}



// FUNCTION 147b143f8 FUN_147b143f8 body=426 status=ok
// SIG undefined FUN_147b143f8(void)

void FUN_147b143f8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  double dVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  bool bVar5;
  double *pdVar6;
  undefined1 auStack_a8 [32];
  double local_88 [3];
  double local_70 [6];
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  pdVar2 = *(double **)(param_2 + 0x38);
  pdVar3 = pdVar2;
  if (pdVar2 == (double *)0x0) {
    pdVar3 = local_70;
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  pdVar4 = *(double **)(param_2 + 0x38);
  pdVar6 = pdVar4;
  if (pdVar4 == (double *)0x0) {
    pdVar6 = local_88;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = *pdVar6;
  pdVar6 = pdVar2;
  if (pdVar2 == (double *)0x0) {
    pdVar6 = local_70;
  }
  bVar5 = false;
  if ((*pdVar3 <= dVar1 && dVar1 != *pdVar3) && (dVar1 < pdVar6[3])) {
    pdVar3 = pdVar4;
    if (pdVar4 == (double *)0x0) {
      pdVar3 = local_88;
    }
    dVar1 = pdVar3[1];
    pdVar3 = pdVar2;
    if (pdVar2 == (double *)0x0) {
      pdVar3 = local_70;
    }
    bVar5 = false;
    if ((pdVar3[1] <= dVar1 && dVar1 != pdVar3[1]) && (bVar5 = false, dVar1 < pdVar3[4])) {
      pdVar3 = local_88;
      if (pdVar4 != (double *)0x0) {
        pdVar3 = pdVar4;
      }
      pdVar4 = pdVar2;
      if (pdVar2 == (double *)0x0) {
        pdVar4 = local_70;
      }
      dVar1 = pdVar3[2];
      if (dVar1 < pdVar4[2] || dVar1 == pdVar4[2]) {
        bVar5 = false;
      }
      else {
        pdVar3 = local_70;
        if (pdVar2 != (double *)0x0) {
          pdVar3 = pdVar2;
        }
        bVar5 = dVar1 < pdVar3[5];
      }
    }
  }
  *(bool *)param_3 = bVar5;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b145a4 FUN_147b145a4 body=322 status=ok
// SIG undefined FUN_147b145a4(void)

void FUN_147b145a4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined1 local_98 [48];
  undefined1 local_68;
  undefined1 local_60 [48];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_68 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar1 = local_60;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14730eb50(puVar1,&local_d0,puVar2);
  *(undefined8 *)(param_3 + 0xc) = local_a0;
  param_3[8] = local_b0;
  param_3[9] = uStack_ac;
  param_3[10] = uStack_a8;
  param_3[0xb] = uStack_a4;
  param_3[4] = local_c0;
  param_3[5] = uStack_bc;
  param_3[6] = uStack_b8;
  param_3[7] = uStack_b4;
  *param_3 = local_d0;
  param_3[1] = uStack_cc;
  param_3[2] = uStack_c8;
  param_3[3] = uStack_c4;
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b146e8 FUN_147b146e8 body=490 status=ok
// SIG undefined FUN_147b146e8(void)

void FUN_147b146e8(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float *pfVar6;
  undefined1 auStack_c8 [44];
  float local_9c;
  undefined8 local_98 [3];
  undefined8 local_80 [3];
  undefined8 local_68 [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar3 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *puVar3 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  *puVar3 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  local_9c = 0.0;
  *puVar3 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  puVar3 = local_98;
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = puVar4;
  }
  puVar4 = local_80;
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = puVar5;
  }
  puVar5 = local_68;
  if (puVar1 != (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  pfVar6 = &local_9c;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar6 = *(float **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4[2] = puVar5[2];
  uVar2 = puVar5[1];
  *puVar4 = *puVar5;
  puVar4[1] = uVar2;
  puVar3[2] = puVar5[5];
  uVar2 = puVar5[4];
  *puVar3 = puVar5[3];
  puVar3[1] = uVar2;
  *pfVar6 = (float)(double)puVar5[6];
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b148d4 FUN_147b148d4 body=570 status=ok
// SIG undefined FUN_147b148d4(void)

void FUN_147b148d4(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar5 = *(undefined4 **)(param_2 + 0x38);
  local_48 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  local_4c = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  local_50 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar2 = &local_4c;
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = &local_48;
  if (puVar4 != (undefined4 *)0x0) {
    puVar3 = puVar4;
  }
  puVar4 = &local_44;
  if (puVar5 != (undefined4 *)0x0) {
    puVar4 = puVar5;
  }
  puVar5 = &local_50;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar4 = local_40;
  *puVar3 = local_3c;
  *puVar2 = local_38;
  *puVar5 = local_34;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b14b10 FUN_147b14b10 body=804 status=ok
// SIG undefined FUN_147b14b10(void)

void FUN_147b14b10(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  undefined4 *local_80;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_58 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar5 = *(undefined4 **)(param_2 + 0x38);
  local_5c = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  puVar6 = *(undefined4 **)(param_2 + 0x38);
  local_60 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  puVar7 = *(undefined4 **)(param_2 + 0x38);
  local_64 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  local_68 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  local_6c = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_88 = &local_68;
  if (puVar4 != (undefined4 *)0x0) {
    local_88 = puVar4;
  }
  local_90 = &local_64;
  if (puVar3 != (undefined4 *)0x0) {
    local_90 = puVar3;
  }
  local_98 = &local_60;
  if (puVar7 != (undefined4 *)0x0) {
    local_98 = puVar7;
  }
  puVar7 = &local_5c;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = puVar6;
  }
  puVar6 = &local_58;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = puVar5;
  }
  puVar5 = &local_54;
  if (puVar2 != (undefined4 *)0x0) {
    puVar5 = puVar2;
  }
  local_80 = &local_6c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_80 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b14e36(local_50,puVar5,puVar6,puVar7);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b14e36 FUN_147b14e36 body=443 status=ok
// SIG undefined FUN_147b14e36(void)

void FUN_147b14e36(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  int *param_5,int *param_6,int *param_7,int *param_8)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_1;
  uVar3 = FUN_145c31f02(&local_50);
  *param_2 = uVar3;
  local_50 = param_1;
  uVar3 = FUN_1458c553e(&local_50);
  *param_3 = uVar3;
  local_50 = param_1;
  uVar3 = FUN_145c31eb8(&local_50);
  *param_4 = uVar3;
  uVar2 = (uint)((ulonglong)((param_1 / 36000000000) * 0x2aaaaaab) >> 0x20);
  *param_5 = (int)(param_1 / 36000000000) + ((uVar2 >> 2) - ((int)uVar2 >> 0x1f)) * -0x18;
  auVar1 = SEXT816(param_1 / 600000000) * ZEXT816(0x8888888888888889);
  *param_6 = (int)(param_1 / 600000000) +
             ((int)(auVar1._8_8_ >> 5) - (auVar1._12_4_ >> 0x1f)) * -0x3c;
  lVar4 = param_1 / 10000000 - param_1 / -0x6769800000000000;
  auVar1 = SEXT816(lVar4) * ZEXT816(0x8888888888888889);
  *param_7 = (int)lVar4 + ((int)(auVar1._8_8_ >> 5) - (auVar1._12_4_ >> 0x1f)) * -0x3c;
  auVar1 = SEXT816(param_1 / 10000) * SEXT816(0x20c49ba5e353f7cf);
  *param_8 = (int)(param_1 / 10000) + ((int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f)) * -1000;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b14ff2 FUN_147b14ff2 body=379 status=ok
// SIG undefined FUN_147b14ff2(void)

void FUN_147b14ff2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0x10000ea60;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = &local_34;
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = puVar4;
  }
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  puVar4 = &local_38;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar2 = *(undefined4 *)puVar3;
  *puVar4 = *(undefined4 *)((longlong)puVar3 + 4);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1516e FUN_147b1516e body=494 status=ok
// SIG undefined FUN_147b1516e(void)

void FUN_147b1516e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined1 *puStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  puStack_38 = &DAT_100000018;
  puVar2 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_44 = 0;
  *puVar2 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar5 = *(undefined4 **)(param_2 + 0x38);
  local_4c = 0x10000ea60;
  *puVar2 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  local_50 = 0;
  *puVar2 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar2 = &local_4c;
  if (puVar4 != (undefined8 *)0x0) {
    puVar2 = puVar4;
  }
  puVar3 = &local_44;
  if (puVar5 != (undefined4 *)0x0) {
    puVar3 = puVar5;
  }
  puVar4 = &local_40;
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = puVar1;
  }
  puVar5 = &local_50;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar3 = *(undefined4 *)puVar4;
  *puVar5 = *(undefined4 *)((longlong)puVar4 + 4);
  *puVar2 = puVar4[1];
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1535e FUN_147b1535e body=602 status=ok
// SIG undefined FUN_147b1535e(void)

void FUN_147b1535e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  double *pdVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  double *pdVar6;
  float *pfVar7;
  undefined1 auStack_88 [32];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  double local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  pdVar2 = *(double **)(param_2 + 0x38);
  local_5c = 0.0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  pfVar7 = *(float **)(param_2 + 0x38);
  local_60 = 0.0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  pfVar5 = *(float **)(param_2 + 0x38);
  local_64 = 0.0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  pfVar4 = *(float **)(param_2 + 0x38);
  local_68 = 0.0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  pfVar3 = &local_64;
  if (pfVar4 != (float *)0x0) {
    pfVar3 = pfVar4;
  }
  pfVar4 = &local_60;
  if (pfVar5 != (float *)0x0) {
    pfVar4 = pfVar5;
  }
  pfVar5 = &local_5c;
  if (pfVar7 != (float *)0x0) {
    pfVar5 = pfVar7;
  }
  pdVar6 = local_58;
  if (pdVar2 != (double *)0x0) {
    pdVar6 = pdVar2;
  }
  pfVar7 = &local_68;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar7 = *(float **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *pfVar5 = (float)*pdVar6;
  *pfVar4 = (float)pdVar6[1];
  *pfVar3 = (float)pdVar6[2];
  *pfVar7 = (float)pdVar6[3];
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b155ba FUN_147b155ba body=269 status=ok
// SIG undefined FUN_147b155ba(void)

void FUN_147b155ba(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = &local_2c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar3 = *(undefined4 *)puVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b156c8 FUN_147b156c8 body=918 status=ok
// SIG undefined FUN_147b156c8(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147b156c8(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined1 auStack_78 [36];
  int local_54 [5];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_54[4] = 0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_54 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_54 + 4);
  }
  piVar10 = *(int **)(param_2 + 0x38);
  local_54[3] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_54 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_54 + 3);
  }
  piVar11 = *(int **)(param_2 + 0x38);
  local_54[2] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_54 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_54 + 2);
  }
  piVar7 = *(int **)(param_2 + 0x38);
  local_54[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_54 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_54 + 1);
  }
  piVar5 = *(int **)(param_2 + 0x38);
  local_54[0] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_54);
  }
  lVar4 = local_40;
  piVar9 = local_54 + 1;
  if (piVar5 != (int *)0x0) {
    piVar9 = piVar5;
  }
  piVar5 = local_54 + 2;
  if (piVar7 != (int *)0x0) {
    piVar5 = piVar7;
  }
  piVar7 = local_54 + 3;
  if (piVar11 != (int *)0x0) {
    piVar7 = piVar11;
  }
  piVar11 = local_54 + 4;
  if (piVar10 != (int *)0x0) {
    piVar11 = piVar10;
  }
  piVar10 = local_54;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar10 = *(int **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *piVar11 = ((int)(local_40 / 864000000000) + (int)(local_40 >> 0x3f)) -
             (SUB164(SEXT816(local_40) * ZEXT816(0xa2e3ff1de20581e3),0xc) >> 0x1f);
  uVar2 = (uint)((ulonglong)((lVar4 / 36000000000) * 0x2aaaaaab) >> 0x20);
  *piVar7 = (int)(lVar4 / 36000000000) + ((uVar2 >> 2) - ((int)uVar2 >> 0x1f)) * -0x18;
  auVar3 = SEXT816(lVar4 / 600000000) * ZEXT816(0x8888888888888889);
  *piVar5 = (int)(lVar4 / 600000000) + ((int)(auVar3._8_8_ >> 5) - (auVar3._12_4_ >> 0x1f)) * -0x3c;
  lVar8 = lVar4 / 10000000 - lVar4 / -0x6769800000000000;
  auVar3 = SEXT816(lVar8) * ZEXT816(0x8888888888888889);
  iVar6 = (int)lVar8;
  *piVar9 = iVar6 + ((int)(auVar3._8_8_ >> 5) - (auVar3._12_4_ >> 0x1f)) * -0x3c;
  *piVar10 = ((int)lVar4 + iVar6 * -10000000) / 10000;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b15a60 FUN_147b15a60 body=897 status=ok
// SIG undefined FUN_147b15a60(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147b15a60(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined1 auStack_78 [36];
  int local_54 [5];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_54[4] = 0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_54 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_54 + 4);
  }
  piVar10 = *(int **)(param_2 + 0x38);
  local_54[3] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_54 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_54 + 3);
  }
  piVar7 = *(int **)(param_2 + 0x38);
  local_54[2] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_54 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_54 + 2);
  }
  piVar11 = *(int **)(param_2 + 0x38);
  local_54[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_54 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_54 + 1);
  }
  piVar5 = *(int **)(param_2 + 0x38);
  local_54[0] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_54);
  }
  lVar4 = local_40;
  piVar9 = local_54 + 1;
  if (piVar5 != (int *)0x0) {
    piVar9 = piVar5;
  }
  piVar5 = local_54 + 2;
  if (piVar11 != (int *)0x0) {
    piVar5 = piVar11;
  }
  piVar11 = local_54 + 3;
  if (piVar7 != (int *)0x0) {
    piVar11 = piVar7;
  }
  piVar7 = local_54 + 4;
  if (piVar10 != (int *)0x0) {
    piVar7 = piVar10;
  }
  piVar10 = local_54;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar10 = *(int **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *piVar7 = ((int)(local_40 / 864000000000) + (int)(local_40 >> 0x3f)) -
            (SUB164(SEXT816(local_40) * ZEXT816(0xa2e3ff1de20581e3),0xc) >> 0x1f);
  uVar2 = (uint)((ulonglong)((lVar4 / 36000000000) * 0x2aaaaaab) >> 0x20);
  auVar3 = SEXT816(lVar4 / 600000000) * ZEXT816(0x8888888888888889);
  *piVar11 = (int)(lVar4 / 36000000000) + ((uVar2 >> 2) - ((int)uVar2 >> 0x1f)) * -0x18;
  *piVar5 = (int)(lVar4 / 600000000) + ((int)(auVar3._8_8_ >> 5) - (auVar3._12_4_ >> 0x1f)) * -0x3c;
  lVar8 = lVar4 / 10000000 - lVar4 / -0x6769800000000000;
  auVar3 = SEXT816(lVar8) * ZEXT816(0x8888888888888889);
  iVar6 = (int)lVar8;
  *piVar9 = iVar6 + ((int)(auVar3._8_8_ >> 5) - (auVar3._12_4_ >> 0x1f)) * -0x3c;
  *piVar10 = ((int)lVar4 + iVar6 * -10000000) * 100;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b15de2 FUN_147b15de2 body=356 status=ok
// SIG undefined FUN_147b15de2(void)

void FUN_147b15de2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = &local_38;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar1 = local_30;
  *puVar2 = local_28;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b15f48 FUN_147b15f48 body=623 status=ok
// SIG undefined FUN_147b15f48(void)

void FUN_147b15f48(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0x3ff0000000000000;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  local_60 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  local_68 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_70 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_78 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = &local_70;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_68;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = &local_60;
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = puVar4;
  }
  puVar4 = &local_58;
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = puVar5;
  }
  puVar5 = &local_78;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar3 = *puVar4;
  *puVar2 = puVar4[1];
  *puVar1 = puVar4[2];
  *puVar5 = puVar4[3];
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b161b8 FUN_147b161b8 body=465 status=ok
// SIG undefined FUN_147b161b8(void)

void FUN_147b161b8(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar1 = &local_50;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_48;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar2 = local_40;
  *puVar1 = local_38;
  *puVar3 = local_30;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1638a FUN_147b1638a body=465 status=ok
// SIG undefined FUN_147b1638a(void)

void FUN_147b1638a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar1 = &local_50;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_48;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar2 = local_40;
  *puVar1 = local_38;
  *puVar3 = local_30;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1655c FUN_147b1655c body=465 status=ok
// SIG undefined FUN_147b1655c(void)

void FUN_147b1655c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar1 = &local_50;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_48;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar2 = local_40;
  *puVar1 = local_38;
  *puVar3 = local_30;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1672e FUN_147b1672e body=465 status=ok
// SIG undefined FUN_147b1672e(void)

void FUN_147b1672e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar1 = &local_50;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_48;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar2 = local_40;
  *puVar1 = local_38;
  *puVar3 = local_30;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b16900 FUN_147b16900 body=449 status=ok
// SIG undefined FUN_147b16900(void)

void FUN_147b16900(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  uStack_60 = uStack_30;
  local_78 = local_28;
  uStack_74 = uStack_24;
  uStack_70 = uStack_20;
  uStack_6c = uStack_1c;
  local_88 = local_40;
  FUN_1467f8c28(&local_50,&local_78,&local_68,local_3c);
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b16ac2 FUN_147b16ac2 body=765 status=ok
// SIG undefined FUN_147b16ac2(void)

void FUN_147b16ac2(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_90 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_98 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  dVar3 = local_88;
  dVar2 = local_90;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = (double)FUN_144719204(local_98 - local_90,0x4076800000000000);
  dVar1 = (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0)) * 0.5;
  dVar2 = (double)FUN_144719204(dVar2 + dVar1,0x4076800000000000);
  dVar4 = (double)(~-(ulonglong)(dVar2 < 0.0) & (ulonglong)dVar2 |
                  (ulonglong)(dVar2 + 360.0) & -(ulonglong)(dVar2 < 0.0));
  dVar2 = (double)FUN_144719204(dVar3 - dVar4,0x4076800000000000);
  dVar2 = (double)(~-(ulonglong)(dVar2 < 0.0) & (ulonglong)dVar2 |
                  (ulonglong)(dVar2 + 360.0) & -(ulonglong)(dVar2 < 0.0));
  dVar2 = (double)(~-(ulonglong)(180.0 < dVar2) & (ulonglong)dVar2 |
                  (ulonglong)(dVar2 + -360.0) & -(ulonglong)(180.0 < dVar2));
  if (dVar2 <= dVar1) {
    if (dVar2 < -dVar1) {
      dVar3 = dVar4 - dVar1;
    }
  }
  else {
    dVar3 = dVar1 + dVar4;
  }
  dVar3 = (double)FUN_144719204(dVar3);
  dVar3 = (double)(~-(ulonglong)(dVar3 < 0.0) & (ulonglong)dVar3 |
                  (ulonglong)(dVar3 + 360.0) & -(ulonglong)(dVar3 < 0.0));
  *param_3 = ~-(ulonglong)(180.0 < dVar3) & (ulonglong)dVar3 |
             (ulonglong)(dVar3 + -360.0) & -(ulonglong)(180.0 < dVar3);
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b16dc0 FUN_147b16dc0 body=346 status=ok
// SIG undefined FUN_147b16dc0(void)

void FUN_147b16dc0(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_38 <= local_20) {
    local_20 = local_38;
  }
  if (local_20 <= local_30) {
    local_20 = local_30;
  }
  if (local_38 <= local_28) {
    local_28 = local_38;
  }
  if (local_28 <= local_30) {
    local_28 = local_30;
  }
  *param_3 = local_28;
  param_3[1] = local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b16f1c FUN_147b16f1c body=338 status=ok
// SIG undefined FUN_147b16f1c(void)

void FUN_147b16f1c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = local_30;
  if (local_20 < local_30) {
    lVar1 = local_20;
  }
  if (lVar1 < local_28) {
    lVar1 = local_28;
  }
  *param_3 = lVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b17070 FUN_147b17070 body=467 status=ok
// SIG undefined FUN_147b17070(void)

void FUN_147b17070(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar4 = SQRT(local_38 * local_38 + local_48 * local_48 + local_40 * local_40);
  dVar1 = DAT_14c8464e8;
  dVar2 = DAT_14c8464e0;
  dVar3 = DAT_14c8464f0;
  if (9.99999993922529e-09 < dVar4) {
    dVar3 = 1.0 / dVar4;
    dVar1 = local_40 * dVar3;
    dVar2 = local_48 * dVar3;
    dVar3 = local_38 * dVar3;
  }
  if (local_58 <= dVar4) {
    dVar4 = local_58;
  }
  if (dVar4 <= local_50) {
    dVar4 = local_50;
  }
  *param_3 = dVar4 * dVar2;
  param_3[1] = dVar1 * dVar4;
  param_3[2] = dVar3 * dVar4;
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b1724a FUN_147b1724a body=299 status=ok
// SIG undefined FUN_147b1724a(void)

void FUN_147b1724a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
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
  if (local_28 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c();
  }
  local_38 = local_20;
  if ((local_20 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_147b17376(&local_38,&local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b17376 FUN_147b17376 body=249 status=ok
// SIG undefined FUN_147b17376(void)

undefined8 FUN_147b17376(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (((((((lVar3 != 0) && (lVar1 = FUN_1446f8646(), lVar1 != 0)) &&
         (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
        ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
          lVar1 + 0x30 && (*param_2 != 0)))) &&
       ((lVar3 = *param_1, lVar3 != 0 &&
        ((lVar1 = FUN_1446f8646(), lVar1 != 0 && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38)))
        )))) && (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
                 == lVar1 + 0x30)) && (lVar3 = *param_1, lVar3 != 0)) {
    lVar1 = FUN_1446f8646();
    if (((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) {
      lVar3 = 0;
    }
    else {
      lVar3 = *param_1;
    }
    lVar1 = *param_2;
    if ((((lVar1 != 0) && (lVar2 = FUN_1446f8646(), lVar2 != 0)) &&
        ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
         ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
           lVar2 + 0x30 && (lVar1 = *param_2, lVar1 != 0)))))) &&
       (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) {
      return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                      *(longlong *)
                       (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
                      lVar1 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 147b17470 FUN_147b17470 body=456 status=ok
// SIG undefined FUN_147b17470(void)

void FUN_147b17470(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_198 [32];
  undefined8 local_178 [12];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  puVar2 = &local_b8;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = &local_118;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b1763a(local_178,puVar2,puVar3);
  puVar3 = local_178;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_50 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1763a FUN_147b1763a body=1796 status=ok
// SIG undefined FUN_147b1763a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_147b1763a(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  int iVar30;
  uint uVar31;
  ulonglong uVar32;
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auStack_288 [32];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  auVar12 = _DAT_149934d80;
  auVar35 = *(undefined1 (*) [16])(param_3 + 8);
  dVar6 = auVar35._0_8_;
  dVar10 = auVar35._8_8_;
  auVar3 = *(undefined1 (*) [16])(param_3 + 10);
  dVar7 = auVar3._0_8_;
  auVar44 = *(undefined1 (*) [16])(param_2 + 8);
  dVar8 = auVar44._0_8_;
  dVar11 = auVar44._8_8_;
  auVar4 = *(undefined1 (*) [16])(param_2 + 10);
  dVar9 = auVar4._0_8_;
  auVar35 = minpd(auVar44,auVar35);
  auVar39 = minpd(auVar4,auVar3);
  auVar44._8_8_ = -(ulonglong)(auVar35._8_8_ < 0.0);
  auVar44._0_8_ = -(ulonglong)(auVar35._0_8_ < 0.0);
  iVar30 = movmskpd((int)local_c0,auVar44);
  auVar35._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
  auVar35._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
  uVar31 = movmskpd((int)param_1,auVar35);
  if ((uVar31 & 0x3fffffff) == 0 && iVar30 == 0) {
    dVar22 = *param_2;
    dVar23 = param_2[1];
    dVar24 = param_2[2];
    dVar25 = param_2[3];
    dVar26 = *param_3;
    dVar27 = param_3[1];
    dVar28 = param_3[2];
    dVar29 = param_3[3];
    dVar38 = param_3[3];
    dVar34 = param_3[3];
    dVar1 = *param_3;
    dVar16 = *param_3;
    dVar2 = param_3[1];
    dVar40 = param_3[1];
    dVar41 = param_3[2];
    dVar37 = param_3[2];
    dVar17 = param_2[4] * dVar6;
    dVar43 = param_2[5] * dVar10;
    dVar18 = param_2[6] * dVar7;
    dVar19 = param_2[7] * auVar3._8_8_;
    dVar13 = dVar43 * dVar26 - dVar27 * dVar17;
    dVar14 = dVar18 * dVar27 - dVar28 * dVar43;
    dVar20 = dVar17 * dVar28 - dVar26 * dVar18;
    dVar21 = dVar19 * dVar29 - dVar29 * dVar19;
    dVar14 = dVar14 + dVar14;
    dVar20 = dVar20 + dVar20;
    dVar13 = dVar13 + dVar13;
    dVar21 = dVar21 + dVar21;
    dVar42 = param_3[4];
    dVar15 = (dVar14 * dVar28 - dVar13 * dVar26) + dVar34 * dVar20 + dVar43 + param_3[5];
    dVar43 = param_3[6];
    dVar5 = param_3[7];
    *param_1 = dVar23 * dVar41 * -1.0 + dVar24 * dVar2 + dVar25 * dVar1 * 1.0 + dVar22 * dVar38;
    param_1[1] = dVar22 * dVar37 * 1.0 + dVar25 * dVar40 + dVar24 * dVar16 * -1.0 + dVar23 * dVar34;
    param_1[2] = dVar25 * dVar41 * 1.0 + ((dVar1 * dVar23 * 1.0 + dVar24 * dVar38) - dVar22 * dVar2)
    ;
    param_1[3] = dVar24 * dVar37 * -1.0 +
                 ((dVar16 * dVar22 * -1.0 + dVar25 * dVar34) - dVar23 * dVar40);
    auVar12._8_4_ = SUB84(dVar15,0);
    auVar12._0_8_ = (dVar13 * dVar27 - dVar28 * dVar20) + dVar38 * dVar14 + dVar17 + dVar42;
    auVar12._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 4) = auVar12;
    param_1[6] = (dVar20 * dVar26 - dVar27 * dVar14) + dVar38 * dVar13 + dVar18 + dVar43;
    param_1[7] = (dVar21 * dVar29 - dVar21 * dVar29) + dVar34 * dVar21 + dVar19 + dVar5;
  }
  else {
    dVar1 = *param_3;
    dVar2 = param_3[1];
    dVar40 = param_3[2];
    dVar37 = dVar2 + dVar2;
    dVar41 = dVar40 + dVar40;
    dVar38 = dVar1 * (dVar1 + dVar1);
    local_178 = (1.0 - (dVar38 + dVar2 * dVar37)) * dVar7;
    dVar34 = param_3[3];
    dVar42 = dVar41 * dVar34;
    dVar43 = (dVar1 + dVar1) * param_3[3];
    dVar34 = dVar37 * dVar34;
    local_188 = (dVar34 + *param_3 * dVar41) * dVar7;
    dVar38 = (DAT_149934d80._8_8_ - (dVar40 * dVar41 + dVar38)) * dVar10;
    dVar16 = (dVar37 * dVar1 + dVar42) * dVar6;
    local_198 = (dVar41 * dVar2 + dVar43) * dVar10;
    dStack_180 = (dVar41 * dVar2 - dVar43) * dVar7;
    local_1b8 = (*param_3 * dVar41 - dVar34) * dVar6;
    local_1c8._8_4_ = SUB84(dVar16,0);
    local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar40 * dVar41 + dVar2 * dVar37)) * dVar6;
    local_1c8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar38,0);
    local_1a8._0_8_ = (dVar37 * dVar1 - dVar42) * dVar10;
    local_1a8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = param_3[4];
    dStack_160 = param_3[5];
    local_158 = param_3[6];
    uStack_150 = 0x3ff0000000000000;
    dVar16 = *param_2;
    dVar1 = param_2[1];
    dVar2 = param_2[2];
    dVar40 = dVar1 + dVar1;
    dVar37 = dVar2 + dVar2;
    dVar38 = dVar16 * (dVar16 + dVar16);
    local_1f8 = (1.0 - (dVar38 + dVar1 * dVar40)) * dVar9;
    dVar34 = param_2[3];
    dVar41 = dVar37 * dVar34;
    dVar42 = (dVar16 + dVar16) * param_2[3];
    dVar34 = dVar40 * dVar34;
    local_208 = (dVar34 + *param_2 * dVar37) * dVar9;
    dStack_200 = (dVar37 * dVar1 - dVar42) * dVar9;
    local_248 = ((double)DAT_149934d80 - (dVar2 * dVar37 + dVar1 * dVar40)) * dVar8;
    dVar38 = (DAT_149934d80._8_8_ - (dVar2 * dVar37 + dVar38)) * dVar11;
    dStack_240 = (dVar40 * dVar16 + dVar41) * dVar8;
    local_218 = (dVar37 * dVar1 + dVar42) * dVar11;
    local_238 = (*param_2 * dVar37 - dVar34) * dVar8;
    uStack_230 = 0;
    local_228._8_4_ = SUB84(dVar38,0);
    local_228._0_8_ = (dVar40 * dVar16 - dVar41) * dVar11;
    local_228._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = param_2[4];
    dStack_1e0 = param_2[5];
    local_1d8 = param_2[6];
    uStack_1d0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_148,&local_248,local_1c8);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar39._8_8_ = -(ulonglong)(0.0 <= dVar10 * dVar11);
    auVar39._0_8_ = -(ulonglong)(0.0 <= dVar6 * dVar8);
    auVar35 = blendvpd(_DAT_149936790,auVar12,auVar39);
    uVar32 = -(ulonglong)(0.0 <= dVar7 * dVar9);
    dVar34 = (double)(~uVar32 & 0xbff0000000000000 | uVar32 & 0x3ff0000000000000);
    dVar38 = auVar35._0_8_;
    local_138 = local_138 * dVar38;
    local_140 = local_140 * dVar38;
    local_148 = local_148 * dVar38;
    dVar38 = auVar35._8_8_;
    local_118 = local_118 * dVar38;
    local_120 = local_120 * dVar38;
    local_128 = dVar38 * local_128;
    local_f8 = local_f8 * dVar34;
    local_100 = local_100 * dVar34;
    local_108 = dVar34 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar34 = local_258 * local_258 + local_268 * local_268;
    dVar38 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar36._0_8_ = dVar34 + dVar38;
    auVar36._8_8_ = dVar34 + dVar38;
    auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
    auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
    auVar35 = sqrtpd(auVar36,auVar36);
    auVar44 = divpd(auVar12,auVar35);
    auVar45._0_8_ = auVar44._0_8_ * local_258;
    auVar45._8_8_ = auVar44._8_8_ * dStack_250;
    auVar35 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar45,auVar33);
    *param_1 = (double)((ulonglong)(local_268 * auVar44._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
    param_1[1] = (double)((ulonglong)(dStack_260 * auVar44._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
    *(undefined1 (*) [16])(param_1 + 2) = auVar35;
    param_1[4] = local_e8;
    param_1[5] = dStack_e0;
    param_1[6] = local_d8;
    param_1[7] = 0.0;
  }
  dVar34 = auVar3._8_8_ * auVar4._8_8_;
  auVar4._8_4_ = SUB84(dVar10 * dVar11,0);
  auVar4._0_8_ = dVar6 * dVar8;
  auVar4._12_4_ = (int)((ulonglong)(dVar10 * dVar11) >> 0x20);
  *(undefined1 (*) [16])(param_1 + 8) = auVar4;
  auVar3._8_4_ = SUB84(dVar34,0);
  auVar3._0_8_ = dVar7 * dVar9;
  auVar3._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 10) = auVar3;
  if ((local_c0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b17d44 FUN_147b17d44 body=150 status=ok
// SIG undefined FUN_147b17d44(void)

void FUN_147b17d44(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  *(bool *)param_3 = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b17de4 FUN_147b17de4 body=154 status=ok
// SIG undefined FUN_147b17de4(void)

void FUN_147b17de4(undefined8 param_1,longlong param_2,uint *param_3)

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
  *param_3 = (uint)(local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b17e80 FUN_147b17e80 body=152 status=ok
// SIG undefined FUN_147b17e80(void)

void FUN_147b17e80(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (double)local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b17f1a FUN_147b17f1a body=147 status=ok
// SIG undefined FUN_147b17f1a(void)

void FUN_147b17f1a(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (ulonglong)local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b17fae FUN_147b17fae body=234 status=ok
// SIG undefined FUN_147b17fae(void)

void FUN_147b17fae(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (&DAT_14c758c60)[local_1c >> 8 & 0xff];
  uVar2 = (&DAT_14c758c60)[local_1c & 0xff];
  *param_3 = *(undefined4 *)((longlong)&DAT_14c758c60 + (ulonglong)(local_1c >> 0xe & 0x3fc));
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = (float)(local_1c >> 0x18) * 0.003921569;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1809a FUN_147b1809a body=153 status=ok
// SIG undefined FUN_147b1809a(void)

void FUN_147b1809a(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (float)local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b18134 FUN_147b18134 body=153 status=ok
// SIG undefined FUN_147b18134(void)

void FUN_147b18134(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (longlong)local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b181ce FUN_147b181ce body=170 status=ok
// SIG undefined FUN_147b181ce(void)

void FUN_147b181ce(undefined8 param_1,longlong param_2,float *param_3)

{
  float fVar1;
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = (float)local_20;
  *param_3 = fVar1;
  param_3[1] = fVar1;
  param_3[2] = fVar1;
  param_3[3] = 1.0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1827a FUN_147b1827a body=158 status=ok
// SIG undefined FUN_147b1827a(void)

void FUN_147b1827a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20;
  param_3[1] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1831a FUN_147b1831a body=152 status=ok
// SIG undefined FUN_147b1831a(void)

void FUN_147b1831a(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (double)local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b183b4 FUN_147b183b4 body=149 status=ok
// SIG undefined FUN_147b183b4(void)

void FUN_147b183b4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (undefined1)local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1844a FUN_147b1844a body=154 status=ok
// SIG undefined FUN_147b1844a(void)

void FUN_147b1844a(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (double)local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b184e6 FUN_147b184e6 body=149 status=ok
// SIG undefined FUN_147b184e6(void)

void FUN_147b184e6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (undefined4)local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1857c FUN_147b1857c body=160 status=ok
// SIG undefined FUN_147b1857c(void)

void FUN_147b1857c(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (double)local_20._0_4_;
  param_3[1] = (double)local_20._4_4_;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b18624 FUN_147b18624 body=150 status=ok
// SIG undefined FUN_147b18624(void)

void FUN_147b18624(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b186bc FUN_147b186bc body=148 status=ok
// SIG undefined FUN_147b186bc(void)

void FUN_147b186bc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (undefined1)local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b18752 FUN_147b18752 body=150 status=ok
// SIG undefined FUN_147b18752(void)

void FUN_147b18752(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (longlong)local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b187ea FUN_147b187ea body=154 status=ok
// SIG undefined FUN_147b187ea(void)

void FUN_147b187ea(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_1c;
  param_3[1] = local_1c;
  param_3[2] = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b18886 FUN_147b18886 body=166 status=ok
// SIG undefined FUN_147b18886(void)

void FUN_147b18886(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = (double)local_1c;
  *param_3 = dVar1;
  param_3[1] = dVar1;
  param_3[2] = dVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1892e FUN_147b1892e body=183 status=ok
// SIG undefined FUN_147b1892e(void)

void FUN_147b1892e(undefined8 param_1,longlong param_2,double *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_48 [36];
  int local_24 [3];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_24);
  }
  piVar3 = local_24;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar3 = *(int **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = piVar3[1];
  iVar2 = piVar3[2];
  *param_3 = (double)*piVar3;
  param_3[1] = (double)iVar1;
  param_3[2] = (double)iVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b189ec FUN_147b189ec body=410 status=ok
// SIG undefined FUN_147b189ec(void)

void FUN_147b189ec(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [32];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined4 local_30;
  int local_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  fStack_44 = fStack_24;
  fStack_40 = fStack_20;
  fStack_3c = fStack_1c;
  if (local_2c == 0) {
    if (fStack_1c <= 0.0) {
      fStack_1c = 0.0;
    }
    if (1.0 <= fStack_1c) {
      fStack_1c = 1.0;
    }
    if (fStack_20 <= 0.0) {
      fStack_20 = 0.0;
    }
    if (1.0 <= fStack_20) {
      fStack_20 = 1.0;
    }
    if (fStack_24 <= 0.0) {
      fStack_24 = 0.0;
    }
    if (1.0 <= fStack_24) {
      fStack_24 = 1.0;
    }
    if (local_28 <= 0.0) {
      local_28 = 0.0;
    }
    if (1.0 <= local_28) {
      local_28 = 1.0;
    }
    local_30 = CONCAT13((char)(int)(fStack_1c * 255.0 + 0.5),
                        CONCAT12((char)(int)(local_28 * 255.0 + 0.5),
                                 CONCAT11((char)(int)(fStack_24 * 255.0 + 0.5),
                                          (char)(int)(fStack_20 * 255.0 + 0.5))));
  }
  else {
    FUN_1411ab38a(&local_48,&local_30);
  }
  *param_3 = local_30;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b18b88 FUN_147b18b88 body=166 status=ok
// SIG undefined FUN_147b18b88(void)

void FUN_147b18b88(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (double)local_28;
  param_3[1] = (double)local_24;
  param_3[2] = (double)local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b18c30 FUN_147b18c30 body=191 status=ok
// SIG undefined FUN_147b18c30(void)

void FUN_147b18c30(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar1 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144a90b9e(puVar1,&local_b0);
  *(undefined8 *)(param_3 + 4) = local_a0;
  *param_3 = local_b0;
  param_3[1] = uStack_ac;
  param_3[2] = uStack_a8;
  param_3[3] = uStack_a4;
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b18cf0 FUN_147b18cf0 body=194 status=ok
// SIG undefined FUN_147b18cf0(void)

void FUN_147b18cf0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8 [12];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar2 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1448ac920(local_f8,puVar2);
  puVar3 = local_f8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b18db4 FUN_147b18db4 body=198 status=ok
// SIG undefined FUN_147b18db4(void)

void FUN_147b18db4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_30;
  uStack_74 = uStack_2c;
  uStack_70 = uStack_28;
  uStack_6c = uStack_24;
  local_68 = local_20;
  FUN_144a7484c(&local_78,&local_58);
  param_3[4] = local_48;
  param_3[5] = uStack_44;
  param_3[6] = uStack_40;
  param_3[7] = uStack_3c;
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b18e7c FUN_147b18e7c body=220 status=ok
// SIG undefined FUN_147b18e7c(void)

void FUN_147b18e7c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar1 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144a7484c(puVar1,&local_38);
  *param_3 = local_38;
  param_3[1] = uStack_30;
  *(undefined4 *)(param_3 + 2) = local_28;
  *(undefined4 *)((longlong)param_3 + 0x14) = uStack_24;
  *(undefined4 *)(param_3 + 3) = uStack_20;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_1c;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0x3ff0000000000000;
  param_3[9] = 0x3ff0000000000000;
  param_3[10] = 0x3ff0000000000000;
  param_3[0xb] = 0;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b18f5a FUN_147b18f5a body=183 status=ok
// SIG undefined FUN_147b18f5a(void)

void FUN_147b18f5a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_30;
  uStack_64 = uStack_2c;
  uStack_60 = uStack_28;
  uStack_5c = uStack_24;
  local_58 = local_20;
  FUN_144a76660(&local_68,&local_48);
  *(undefined8 *)(param_3 + 4) = local_38;
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b19012 FUN_147b19012 body=639 status=ok
// SIG undefined FUN_147b19012(void)

void FUN_147b19012(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double *pdVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_118 [32];
  double local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8[0] = 0.0;
  local_f8[1] = 0.0;
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0x3ff00000;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0x3ff0000000000000;
  local_a8 = 0x3ff0000000000000;
  uStack_a0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  pdVar17 = local_f8;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar17 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar5 = *pdVar17;
  dVar6 = pdVar17[1];
  dVar7 = pdVar17[2];
  uVar8 = *(undefined4 *)(pdVar17 + 4);
  uVar9 = *(undefined4 *)((longlong)pdVar17 + 0x24);
  uVar10 = *(undefined4 *)(pdVar17 + 5);
  uVar11 = *(undefined4 *)((longlong)pdVar17 + 0x2c);
  uVar15 = *(undefined4 *)(pdVar17 + 6);
  uVar16 = *(undefined4 *)((longlong)pdVar17 + 0x34);
  dVar22 = dVar6 + dVar6;
  dVar18 = dVar7 + dVar7;
  dVar4 = dVar5 * (dVar5 + dVar5);
  dVar12 = pdVar17[8];
  dVar13 = pdVar17[9];
  dVar3 = (1.0 - (dVar7 * dVar18 + dVar4)) * dVar13;
  dVar14 = pdVar17[10];
  dVar1 = *pdVar17;
  dVar21 = pdVar17[3];
  dVar19 = dVar18 * dVar21;
  dVar20 = (dVar5 + dVar5) * pdVar17[3];
  dVar21 = dVar22 * dVar21;
  *param_3 = (1.0 - (dVar7 * dVar18 + dVar6 * dVar22)) * dVar12;
  param_3[1] = (dVar22 * dVar5 + dVar19) * dVar12;
  param_3[2] = (dVar1 * dVar18 - dVar21) * dVar12;
  param_3[3] = 0.0;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (dVar22 * dVar5 - dVar19) * dVar13;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(param_3 + 4) = auVar2;
  param_3[6] = (dVar18 * dVar6 + dVar20) * dVar13;
  param_3[7] = 0.0;
  param_3[8] = (dVar21 + dVar1 * dVar18) * dVar14;
  param_3[9] = (dVar18 * dVar6 - dVar20) * dVar14;
  param_3[10] = (1.0 - (dVar4 + dVar6 * dVar22)) * dVar14;
  param_3[0xb] = 0.0;
  *(undefined4 *)(param_3 + 0xc) = uVar8;
  *(undefined4 *)((longlong)param_3 + 100) = uVar9;
  *(undefined4 *)(param_3 + 0xd) = uVar10;
  *(undefined4 *)((longlong)param_3 + 0x6c) = uVar11;
  *(undefined4 *)(param_3 + 0xe) = uVar15;
  *(undefined4 *)((longlong)param_3 + 0x74) = uVar16;
  *(undefined4 *)(param_3 + 0xf) = 0;
  *(undefined4 *)((longlong)param_3 + 0x7c) = 0x3ff00000;
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


