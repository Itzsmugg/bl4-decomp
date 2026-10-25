// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14583ca9c FUN_14583ca9c body=112 status=ok
// SIG undefined FUN_14583ca9c(void)

void FUN_14583ca9c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 14583cb0c FUN_14583cb0c body=37 status=ok
// SIG undefined FUN_14583cb0c(void)

void FUN_14583cb0c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14583cb32();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14583cb32 FUN_14583cb32 body=291 status=ok
// SIG undefined FUN_14583cb32(void)

ulonglong FUN_14583cb32(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar7 = *(longlong *)(param_1 + 0x2650);
  if (lVar7 == 0) {
    local_30 = *(longlong *)(param_1 + 0x2640);
    lVar7 = FUN_14050aea0();
    *(longlong *)(param_1 + 0x2650) = lVar7;
    if (lVar7 != 0) goto LAB_14583cb5b;
  }
  else {
LAB_14583cb5b:
    lVar3 = *(longlong *)(lVar7 + 0x50);
    uVar9 = 0;
    if ((lVar3 == 0) || (0xfffffffd < *(int *)(lVar7 + 0x58) - 1U)) goto LAB_14583cbde;
    uVar6 = FUN_1447210f0(param_1);
    FUN_1410d53f0(&local_30,uVar6);
    if (local_28 != (longlong *)0x0) {
      iVar5 = (int)local_28[1];
      do {
        if (iVar5 == 0) {
          plVar8 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)local_28[1];
        bVar10 = iVar5 == iVar4;
        if (bVar10) {
          *(int *)(local_28 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
        plVar8 = local_28;
      } while (!bVar10);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      if (plVar8 != (longlong *)0x0) {
        if (local_30 == 0) {
          uVar9 = 0;
        }
        else {
          FUN_14583cc56(local_30,&local_30);
          uVar9 = CONCAT71((int7)((ulonglong)&local_30 >> 8),local_30 == lVar3);
        }
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        goto LAB_14583cbde;
      }
    }
  }
  uVar9 = 0;
LAB_14583cbde:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 14583cc56 FUN_14583cc56 body=239 status=ok
// SIG undefined FUN_14583cc56(void)

undefined8 * FUN_14583cc56(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_58 [40];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_14479d2ce(param_1 + 8);
  lVar2 = FUN_140149a73(uVar1,0);
  if (lVar2 == 0) {
    *param_2 = 0;
  }
  else {
    local_68[0] = 0;
    local_64 = 0;
    local_5c = 0;
    FUN_144928b90(local_58,4);
    local_78 = DAT_14cbd3db8;
    local_70 = DAT_14cbd3dc0;
    FUN_1411efe9e(local_58);
    lVar2 = FUN_140149a73(uVar1,0);
    if (lVar2 != 0) {
      FUN_14039fc7b(local_58,local_68,lVar2,0);
    }
    FUN_1403a0728(local_68,param_2);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583cd4c FUN_14583cd4c body=63 status=ok
// SIG undefined FUN_14583cd4c(void)

undefined8 FUN_14583cd4c(undefined2 *param_1)

{
  undefined2 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  cVar2 = FUN_14019108b(uVar1);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    cVar2 = FUN_144880847(uVar1,0);
    uVar3 = 1;
    if (cVar2 == '\0') {
      uVar3 = FUN_142dc9966(*param_1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 14583cd8c FUN_14583cd8c body=45 status=ok
// SIG undefined FUN_14583cd8c(void)

undefined8 FUN_14583cd8c(undefined8 param_1,int param_2)

{
  FUN_14583cdba();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14583cdba FUN_14583cdba body=74 status=ok
// SIG undefined FUN_14583cdba(void)

void FUN_14583cdba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2a3fe0;
  param_1[4] = &DAT_14a176f00;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  param_1[4] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 5);
  return;
}



// FUNCTION 14583ce1e FUN_14583ce1e body=55 status=ok
// SIG undefined FUN_14583ce1e(void)

void FUN_14583ce1e(longlong *param_1)

{
  FUN_14583ceb6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14583ce56 FUN_14583ce56 body=96 status=ok
// SIG undefined FUN_14583ce56(void)

void FUN_14583ce56(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14583ceb6 FUN_14583ceb6 body=121 status=ok
// SIG undefined FUN_14583ceb6(void)

void FUN_14583ceb6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14583cf36 FUN_14583cf36 body=86 status=ok
// SIG undefined FUN_14583cf36(void)

void FUN_14583cf36(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140ea0e34(puVar1,param_1);
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  *(undefined1 *)(puVar1 + 0x2f) = 1;
  *puVar1 = &PTR_FUN_14a51ece0;
  puVar1[5] = &PTR_FUN_14a51f000;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  *(byte *)((longlong)puVar1 + 0xd9) = *(byte *)((longlong)puVar1 + 0xd9) & 0xfe;
  FUN_140e2f50a(puVar1,4);
  return;
}



// FUNCTION 14583cfc2 FUN_14583cfc2 body=125 status=ok
// SIG undefined FUN_14583cfc2(void)

void FUN_14583cfc2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b428430;
  param_1[4] = &PTR_FUN_14b428470;
  plVar3 = (longlong *)param_1[0x16];
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
  *param_1 = &PTR_FUN_14b428480;
  param_1[4] = &PTR_LAB_14b4284c0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1);
  return;
}



// FUNCTION 14583d03f FUN_14583d03f body=54 status=ok
// SIG undefined FUN_14583d03f(void)

void FUN_14583d03f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14583d076(puVar1);
  *puVar1 = &PTR_FUN_14b714280;
  puVar1[5] = &PTR_FUN_14b714890;
  puVar1[6] = &PTR_LAB_14b7148d0;
  return;
}



// FUNCTION 14583d076 FUN_14583d076 body=451 status=ok
// SIG undefined FUN_14583d076(void)

undefined8 * FUN_14583d076(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_14007ca06();
  FUN_1411f2486(param_1,uVar1);
  *param_1 = &PTR_FUN_14a562480;
  param_1[5] = &PTR_FUN_14a562a90;
  param_1[6] = &PTR_LAB_14a562ad0;
  param_1[0x186] = 0x41955c2941c71eb8;
  param_1[0x187] = 0;
  param_1[0x188] = 0x41c71eb83faa3d71;
  param_1[0x189] = 0x41955c29;
  param_1[0x18a] = 0x3faa3d7100000000;
  param_1[0x18b] = 0x4248000042480000;
  param_1[0x18c] = 0x4000000040000000;
  param_1[0x18d] = 0x3f80000041700000;
  *(undefined4 *)(param_1 + 0x18e) = 5;
  *(undefined1 *)(param_1 + 399) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc7c) = 0x47c35000;
  param_1[400] = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  param_1[0x193] = 0;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0;
  *(byte *)(param_1 + 0x199) = *(byte *)(param_1 + 0x199) & 0xfe;
  *(byte *)(param_1 + 0x198) = *(byte *)(param_1 + 0x198) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0xccc) = 0x41000000;
  *(undefined4 *)(param_1 + 0x19b) = 0;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a2] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1a8] = 0;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  *(byte *)((longlong)param_1 + 0x2d1) = *(byte *)((longlong)param_1 + 0x2d1) | 1;
  lVar2 = FUN_1411f23a0();
  lVar3 = *(longlong *)(lVar2 + 0x110);
  if (lVar3 == 0) {
    FUN_140aa6c08(lVar2);
    lVar3 = *(longlong *)(lVar2 + 0x110);
  }
  FUN_1411f22ae(lVar3 + 0x60,(longlong)param_1 + 0xc44);
  FUN_1411f22ae(lVar3 + 0x60,param_1 + 0x186);
  FUN_1411f25b2(param_1,lVar3 + 0x38);
  FUN_14583d23a(param_1,lVar3 + 0x80);
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar3 + 0x4c);
  *(undefined4 *)((longlong)param_1 + 0xcdc) = *(undefined4 *)(lVar3 + 0x48);
  FUN_140c89136(param_1);
  *(undefined4 *)((longlong)param_1 + 0xcec) = DAT_14c75b140;
  *(byte *)(param_1 + 0x19d) = *(byte *)(param_1 + 0x19d) & 0xfe;
  return param_1;
}



// FUNCTION 14583d23a FUN_14583d23a body=240 status=ok
// SIG undefined FUN_14583d23a(void)

void FUN_14583d23a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar3 = FUN_1411f23a0();
  lVar4 = *(longlong *)(lVar3 + 0x110);
  if (lVar4 == 0) {
    FUN_140aa6c08(lVar3);
    lVar4 = *(longlong *)(lVar3 + 0x110);
  }
  if ((longlong)*(int *)(lVar4 + 0x98) < 1) {
    return;
  }
  iVar2 = (int)param_2[1];
  lVar3 = 0;
LAB_14583d283:
  plVar1 = (longlong *)(*(longlong *)(lVar4 + 0x90) + lVar3 * 0x18);
  if ((int)plVar1[1] == iVar2) {
    if (1 < iVar2) {
      lVar9 = 0;
      do {
        uVar7 = *(ushort *)(*plVar1 + lVar9);
        uVar8 = (ulonglong)uVar7;
        uVar5 = *(ushort *)(*param_2 + lVar9);
        if (uVar7 == uVar5) {
          if (uVar7 == 0) break;
        }
        else {
          if (0x7f < (uVar5 | uVar7)) goto LAB_14583d2db;
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar6 = (ulonglong)uVar5;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar6]) goto LAB_14583d2db;
        }
        lVar9 = lVar9 + 2;
      } while( true );
    }
    goto LAB_14583d2e3;
  }
  if ((int)plVar1[1] + iVar2 == 1) goto LAB_14583d2e3;
  goto LAB_14583d31c;
LAB_14583d2db:
  if (uVar7 == uVar5) {
LAB_14583d2e3:
    *(int *)(param_1 + 0xcd8) = (int)plVar1[2];
    return;
  }
LAB_14583d31c:
  lVar3 = lVar3 + 1;
  if (lVar3 == *(int *)(lVar4 + 0x98)) {
    return;
  }
  goto LAB_14583d283;
}



// FUNCTION 14583d32a FUN_14583d32a body=40 status=ok
// SIG undefined FUN_14583d32a(void)

undefined8 FUN_14583d32a(undefined8 param_1,int param_2)

{
  FUN_1411f306c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583d352 FUN_14583d352 body=25 status=ok
// SIG undefined FUN_14583d352(void)

undefined8 FUN_14583d352(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14583d36c FUN_14583d36c body=33 status=ok
// SIG undefined FUN_14583d36c(void)

void FUN_14583d36c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xb0))();
  FUN_1411f311e(uVar1,param_2);
  return;
}



// FUNCTION 14583d396 FUN_14583d396 body=24 status=ok
// SIG undefined FUN_14583d396(void)

undefined8 FUN_14583d396(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  longlong lStack_18;
  ulonglong uStack_10;
  
  if ((param_1 == 0) || (lVar1 = *(longlong *)(param_1 + 0x1f0), lVar1 == 0)) {
    return 0;
  }
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lStack_18 = FUN_1411f324a();
  if ((lStack_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lStack_18);
  }
  uVar2 = FUN_14583d418(lVar1 + 0x100,&lStack_18);
  if ((uStack_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583d3ae FUN_14583d3ae body=105 status=ok
// SIG undefined FUN_14583d3ae(void)

void FUN_14583d3ae(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1411f324a();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14583d418(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583d418 FUN_14583d418 body=76 status=ok
// SIG undefined FUN_14583d418(void)

void FUN_14583d418(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1411f324a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14583d455;
    }
  }
  lVar2 = 0;
LAB_14583d455:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 14583d464 FUN_14583d464 body=489 status=ok
// SIG undefined FUN_14583d464(void)

void FUN_14583d464(longlong param_1,undefined4 *param_2,undefined8 *param_3,longlong param_4,
                  undefined8 *param_5,undefined4 param_6,undefined1 param_7)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0xffffffffffffffff;
  local_70 = 0;
  local_68 = 0;
  local_c8 = param_6;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_c0 = *param_2;
  uStack_bc = param_2[1];
  uStack_b8 = param_2[2];
  uStack_b4 = param_2[3];
  local_b0 = *param_3;
  uVar8 = FUN_14477b664(param_3[1]);
  local_a8 = FUN_14477b664(uVar8);
  local_a0 = param_3[2];
  FUN_1401f3db8(&local_98,param_4);
  FUN_1411f346e(&uStack_80,param_5);
  local_70 = param_5[2];
  local_68 = param_7;
  iVar5 = *(int *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x8c) < iVar5 + 1U) {
    FUN_14583d736((longlong *)(param_1 + 0x80),iVar5);
  }
  lVar6 = *(longlong *)(param_1 + 0x80);
  lVar9 = (longlong)iVar5 * 0x68;
  puVar3 = (undefined4 *)(lVar9 + lVar6);
  *(ulonglong *)(puVar3 + 4) = CONCAT44(uStack_b4,uStack_b8);
  *puVar3 = local_c8;
  puVar3[1] = uStack_c4;
  puVar3[2] = uStack_c0;
  puVar3[3] = uStack_bc;
  FUN_14583d692(puVar3 + 6,&local_b0);
  lVar4 = lVar9 + lVar6;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  FUN_1401f3db8((undefined8 *)(lVar4 + 0x30),&local_98);
  lVar9 = lVar9 + lVar6;
  FUN_140665542(lVar9 + 0x48,&uStack_80);
  *(undefined8 *)(lVar9 + 0x58) = local_70;
  *(undefined1 *)(lVar9 + 0x60) = local_68;
  FUN_14583d6da(param_1 + -0x28,1);
  FUN_14583d64e(&local_c8);
  plVar7 = *(longlong **)(param_4 + 8);
  if (plVar7 != (longlong *)0x0) {
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
  *param_5 = 0;
  param_5[1] = 0xffffffffffffffff;
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583d64e FUN_14583d64e body=67 status=ok
// SIG undefined FUN_14583d64e(void)

void FUN_14583d64e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_144a7b030(param_1 + 0x48);
  plVar3 = *(longlong **)(param_1 + 0x38);
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
                    /* WARNING: Could not recover jumptable at 0x00014583d68d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14583d692 FUN_14583d692 body=71 status=ok
// SIG undefined FUN_14583d692(void)

undefined8 * FUN_14583d692(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 14583d6da FUN_14583d6da body=92 status=ok
// SIG undefined FUN_14583d6da(void)

void FUN_14583d6da(longlong param_1,undefined4 param_2)

{
  if ((longlong)*(int *)(param_1 + 0xb0) < 1) {
    return;
  }
  if (((*(int *)(param_1 + 0x98) != 0) &&
      (*(int *)(param_1 + 0x98) !=
       *(int *)(*(longlong *)(param_1 + 0xa8) + -0x68 + (longlong)*(int *)(param_1 + 0xb0) * 0x68)))
     && (FUN_1412d7d86(param_1,0), *(int *)(param_1 + 0xb0) < 1)) {
    return;
  }
  FUN_1411f3480(param_1,param_2);
  return;
}



// FUNCTION 14583d736 FUN_14583d736 body=143 status=ok
// SIG undefined FUN_14583d736(void)

void FUN_14583d736(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14583d7c6 FUN_14583d7c6 body=226 status=ok
// SIG undefined FUN_14583d7c6(void)

longlong * FUN_14583d7c6(longlong *param_1)

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
  pcVar13 = FUN_146194b00;
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



// FUNCTION 14583d8ae FUN_14583d8ae body=138 status=ok
// SIG undefined FUN_14583d8ae(void)

undefined1 * FUN_14583d8ae(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x585;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14583d8aa;
}



// FUNCTION 14583d938 FUN_14583d938 body=40 status=ok
// SIG undefined FUN_14583d938(void)

undefined8 FUN_14583d938(undefined8 param_1,int param_2)

{
  FUN_14583d960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583d960 FUN_14583d960 body=76 status=ok
// SIG undefined FUN_14583d960(void)

void FUN_14583d960(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b6bf3b0;
  plVar3 = (longlong *)param_1[0x74];
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
  FUN_14583d9ac(param_1);
  return;
}



// FUNCTION 14583d9ac FUN_14583d9ac body=40 status=ok
// SIG undefined FUN_14583d9ac(void)

void FUN_14583d9ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b06aab0;
  FUN_1411f36fa(param_1 + 8);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 14583d9d4 FUN_14583d9d4 body=40 status=ok
// SIG undefined FUN_14583d9d4(void)

undefined8 FUN_14583d9d4(undefined8 param_1,int param_2)

{
  FUN_14583d9fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583d9fc FUN_14583d9fc body=97 status=ok
// SIG undefined FUN_14583d9fc(void)

void FUN_14583d9fc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b470310;
  plVar3 = (longlong *)param_1[9];
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
  FUN_1411f3761(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14583da5e FUN_14583da5e body=162 status=ok
// SIG undefined FUN_14583da5e(void)

void FUN_14583da5e(longlong param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446e0b6e();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    local_28 = (undefined2 *)0x0;
    uStack_20 = 0;
    FUN_1401031ac(param_1,0,&local_28);
    puVar1 = local_28;
    if ((int)uStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_30,puVar1,1);
    *(undefined8 *)(param_1 + 0x50) = local_30;
    FUN_14583db02(param_1 + 0x30,param_1);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14583db02 FUN_14583db02 body=129 status=ok
// SIG undefined FUN_14583db02(void)

void FUN_14583db02(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1[2] == 0) {
    param_1[3] = (longlong)&DAT_14cb78c88;
    param_1[2] = param_2;
    lVar3 = DAT_14cb78cb8;
    while( true ) {
      *param_1 = lVar3;
      LOCK();
      lVar2 = *(longlong *)(param_1[3] + 0x30);
      bVar4 = lVar3 == lVar2;
      if (bVar4) {
        *(longlong *)(param_1[3] + 0x30) = (longlong)param_1;
        lVar2 = lVar3;
      }
      UNLOCK();
      if (bVar4) break;
      *param_1 = lVar2;
      lVar3 = *(longlong *)(param_1[3] + 0x30);
    }
    if (*param_1 != 0) {
      *(longlong **)(*param_1 + 8) = param_1;
    }
    plVar1 = (longlong *)param_1[3];
    if ((longlong)(int)plVar1[1] != 0) {
      lVar3 = 0;
      do {
        if ((*(int *)(*plVar1 + 8 + lVar3) != 0) && (*(longlong *)(*plVar1 + lVar3) != 0)) {
          FUN_1411f616c(plVar1,param_1[2]);
          return;
        }
        lVar3 = lVar3 + 0x10;
      } while ((longlong)(int)plVar1[1] * 0x10 != lVar3);
    }
  }
  return;
}



// FUNCTION 14583db8c FUN_14583db8c body=61 status=ok
// SIG undefined FUN_14583db8c(void)

void FUN_14583db8c(longlong *param_1)

{
  FUN_1412dd7ac(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014583dbbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14583dbca FUN_14583dbca body=40 status=ok
// SIG undefined FUN_14583dbca(void)

undefined8 FUN_14583dbca(undefined8 param_1,int param_2)

{
  FUN_14583dbf2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583dbf2 FUN_14583dbf2 body=101 status=ok
// SIG undefined FUN_14583dbf2(void)

void FUN_14583dbf2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a85dcb0;
  param_1[5] = &PTR_FUN_14a85e290;
  param_1[6] = &PTR_LAB_14a85e2d0;
  param_1[0x55] = &PTR_FUN_14a85e320;
  if (param_1[0x16c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15b] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 14583dc58 FUN_14583dc58 body=37 status=ok
// SIG undefined FUN_14583dc58(void)

void FUN_14583dc58(undefined8 param_1,void *param_2)

{
  memset(param_2,0,400);
  FUN_14583dc7e(param_2);
  return;
}



// FUNCTION 14583dc7e FUN_14583dc7e body=81 status=ok
// SIG undefined FUN_14583dc7e(void)

undefined8 * FUN_14583dc7e(undefined8 *param_1)

{
  FUN_140e48d86();
  *param_1 = &PTR_FUN_14b0d11c0;
  FUN_140785382(param_1 + 0x10,10);
  FUN_140785382(param_1 + 0x17,10);
  *(undefined2 *)(param_1 + 0x1e) = 0x100;
  FUN_1412ed500(param_1 + 0x1f);
  return param_1;
}



// FUNCTION 14583dcd0 FUN_14583dcd0 body=199 status=ok
// SIG undefined FUN_14583dcd0(void)

void FUN_14583dcd0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  FUN_1457d8d86();
  uVar4 = FUN_1411f6360();
  *(undefined8 *)(param_1 + 8) = uVar4;
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b9667c0;
  plVar6[2] = (longlong)puVar5;
  *(undefined8 **)(param_1 + 0x10) = puVar5;
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar6 == plVar3) {
    if (plVar6 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) {
      return;
    }
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar6;
  }
  else {
    *(longlong **)(param_1 + 0x18) = plVar6;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) {
      return;
    }
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return;
}



// FUNCTION 14583dd98 FUN_14583dd98 body=109 status=ok
// SIG undefined FUN_14583dd98(void)

void FUN_14583dd98(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14583defc(param_1,iVar1);
    }
    FUN_1411f6b8a((longlong)iVar1 * 8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148adde32(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14583de06 FUN_14583de06 body=113 status=ok
// SIG undefined FUN_14583de06(void)

void FUN_14583de06(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14583df80(param_1,iVar1);
    }
    FUN_1411f6ba6((longlong)iVar1 * 0x88 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148addd7e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14583de78 FUN_14583de78 body=132 status=ok
// SIG undefined FUN_14583de78(void)

void FUN_14583de78(longlong param_1,int param_2)

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



// FUNCTION 14583defc FUN_14583defc body=132 status=ok
// SIG undefined FUN_14583defc(void)

void FUN_14583defc(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14583df80 FUN_14583df80 body=150 status=ok
// SIG undefined FUN_14583df80(void)

void FUN_14583df80(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x88,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x88)) {
      uVar5 = uVar4 / 0x88 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x88,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14583e016 FUN_14583e016 body=335 status=ok
// SIG undefined FUN_14583e016(void)

void FUN_14583e016(longlong *param_1)

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



// FUNCTION 14583e166 FUN_14583e166 body=67 status=ok
// SIG undefined FUN_14583e166(void)

undefined8 * FUN_14583e166(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acc6950;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583e1aa thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 14583e1b0 FUN_14583e1b0 body=111 status=ok
// SIG undefined FUN_14583e1b0(void)

void FUN_14583e1b0(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 * 0xe8,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x8d3dcb08d3dcb09),8);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0xe8,8);
  }
  return;
}



// FUNCTION 14583e220 FUN_14583e220 body=55 status=ok
// SIG undefined FUN_14583e220(void)

void FUN_14583e220(void)

{
  undefined8 uVar1;
  
  if (DAT_14caba8e0 == 0) {
    uVar1 = FUN_1411fd1ec();
    DAT_14caba8e0 = FUN_140002ddd(FUN_14635e6ec,uVar1,L"CameraLookatTrackingSettings");
  }
  return;
}



// FUNCTION 14583e258 FUN_14583e258 body=152 status=ok
// SIG undefined FUN_14583e258(void)

void FUN_14583e258(longlong param_1)

{
  FUN_1411fd21e(param_1 + 3000);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa38));
  FUN_1411fd21e(param_1 + 0x9b0);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x830));
  FUN_1411fd21e(param_1 + 0x7a8);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x628));
  FUN_1411fd21e(param_1 + 0x5a0);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x420));
  FUN_1411fd21e(param_1 + 0x398);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x218));
  FUN_1411fd21e(param_1 + 400);
                    /* WARNING: Could not recover jumptable at 0x00014583e2ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 14583e2f0 FUN_14583e2f0 body=55 status=ok
// SIG undefined FUN_14583e2f0(void)

void FUN_14583e2f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb46558 == 0) {
    uVar1 = FUN_1411fd326();
    DAT_14cb46558 = FUN_140002ddd(FUN_146484f2b,uVar1,L"BrushEffectBlurring");
  }
  return;
}



// FUNCTION 14583e332 FUN_14583e332 body=320 status=ok
// SIG undefined FUN_14583e332(void)

longlong * FUN_14583e332(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145c930a8();
  *param_1 = (longlong)&PTR_FUN_14a9beb10;
  param_1[0x72] = (longlong)&PTR_FUN_14a9bf1e0;
  param_1[0x89] = (longlong)&PTR_FUN_14a9bf220;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  FUN_1446f470e(&local_28,L"ISMComponent0",1);
  uVar1 = FUN_144a80466();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_28,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x8f] = lVar2;
  *(byte *)(lVar2 + 0x7d4) = *(byte *)(lVar2 + 0x7d4) | 8;
  FUN_14092e51e(param_1,param_1[0x8f]);
  FUN_141200de6(param_1,param_1[0x8f]);
  lVar2 = FUN_1401ca522(param_1 + 0x8a);
  if (lVar2 != 0) {
    FUN_147b9fcc0(param_1);
  }
  (**(code **)(*param_1 + 0x6c0))(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583e474 FUN_14583e474 body=249 status=ok
// SIG undefined FUN_14583e474(void)

void FUN_14583e474(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(&local_20,L"LightWeightInstancedStaticMeshPhysics",1);
  (**(code **)(**(longlong **)(param_1 + 0x478) + 0x728))
            (*(longlong **)(param_1 + 0x478),local_20,1);
  *(undefined1 *)(*(longlong *)(param_1 + 0x478) + 0x2eb) = 2;
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x478) + 0x2d6);
  *pbVar1 = *pbVar1 | 2;
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x478) + 0x2d6);
  *pbVar1 = *pbVar1 | 0x40;
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x478) + 0x2d6);
  *pbVar1 = *pbVar1 | 0x80;
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x478) + 0x4a);
  *pbVar1 = *pbVar1 & 0xfd;
  *(undefined1 *)(*(longlong *)(param_1 + 0x478) + 0x1fb) = 2;
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x478) + 0x2d6);
  *pbVar1 = *pbVar1 | 1;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x478) + 0x7a4);
  while (iVar2 == 0) {
    iVar2 = rand();
    *(int *)(*(longlong *)(param_1 + 0x478) + 0x7a4) = iVar2;
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x478) + 0x7a4);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583e57c FUN_14583e57c body=40 status=ok
// SIG undefined FUN_14583e57c(void)

undefined8 FUN_14583e57c(undefined8 param_1,int param_2)

{
  FUN_14583e5a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583e5a4 FUN_14583e5a4 body=85 status=ok
// SIG undefined FUN_14583e5a4(void)

void FUN_14583e5a4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b277b00;
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
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14583e5fa FUN_14583e5fa body=107 status=ok
// SIG undefined FUN_14583e5fa(void)

void FUN_14583e5fa(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if ((*(byte *)(param_1 + -0x144) & 2) != 0) {
    plVar1 = param_1 + -0x1c8;
    cVar2 = (**(code **)(*plVar1 + 0x6c8))(plVar1);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_1 + 0x28))(param_1);
      *(char *)(param_1 + 0x49b) = cVar2;
      if (cVar2 == '\0') {
        (**(code **)(*param_1 + 0x48))(param_1);
      }
      if ((char)param_1[-0x199] != '\x03') {
        FUN_14583e666(plVar1,(char)param_1[0x49b]);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14583e666 FUN_14583e666 body=91 status=ok
// SIG undefined FUN_14583e666(void)

void FUN_14583e666(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbadc88);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583e6c2 FUN_14583e6c2 body=208 status=ok
// SIG undefined FUN_14583e6c2(void)

void FUN_14583e6c2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = param_1[0x141];
  if (lVar1 == param_2) {
    return;
  }
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x141] = param_2;
    if (param_2 != 0) goto LAB_14583e6fd;
  }
  else {
    FUN_1456cec3c(param_2);
    param_1[0x141] = param_2;
LAB_14583e6fd:
    lVar3 = FUN_144a78b9e();
    lVar4 = param_1[0x141];
    if (lVar4 != 0) {
      if ((((lVar3 != 0) && (lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 != 0)) &&
          (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        thunk_FUN_14140e650(lVar4);
        lVar4 = param_1[0x141];
      }
      goto LAB_14583e742;
    }
  }
  lVar4 = 0;
LAB_14583e742:
  (**(code **)(*param_1 + 0xff0))(param_1,lVar1,lVar4);
  FUN_14583e798(param_1 + 0x138,param_1,lVar1,param_1[0x141]);
  return;
}



// FUNCTION 14583e792 thunk_FUN_14140e650 body=5 status=ok
// SIG undefined thunk_FUN_14140e650(void)

void thunk_FUN_14140e650(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_58 [40];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)((longlong)param_1 + 0x65) & 2) != 0) goto LAB_14140e714;
  pcVar2 = *(code **)(*param_1 + 0x5e8);
  if (pcVar2 == FUN_140972dde) {
    if (param_1[0x76] == 0) {
      pcVar2 = *(code **)(*param_1 + 0x5f8);
      if (pcVar2 == FUN_144784df4) {
        if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
          if (((((*(int *)((longlong)param_1 + 0x75b4) == 0) ||
                (uVar1 = *(uint *)(param_1 + 0xeb6), (int)uVar1 < 0)) ||
               (DAT_14c9647dc <= (int)uVar1)) ||
              ((plVar6 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)((longlong)param_1 + 0x75b4))
               ))) || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) goto LAB_14140e714;
          if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
            lVar3 = *plVar6;
          }
          else {
            lVar3 = 0;
          }
          lVar3 = lVar3 + 0x110;
        }
        else {
          lVar3 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
        }
        if (lVar3 == 0) goto LAB_14140e714;
        lVar3 = *(longlong *)(lVar3 + 0x20);
      }
      else {
        lVar3 = (*pcVar2)(param_1);
      }
      if (lVar3 == 0) goto LAB_14140e714;
      lVar3 = *(longlong *)(lVar3 + 0x3b0);
      goto LAB_14140e761;
    }
  }
  else {
    lVar3 = (*pcVar2)(param_1);
LAB_14140e761:
    if (lVar3 == 0) goto LAB_14140e714;
  }
  lVar3 = FUN_1447210f0(param_1);
  if (lVar3 != 0) {
    lVar3 = FUN_1400f6f32(lVar3);
    if (((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x68), lVar3 != 0)) && (param_1[0x76] != 0))
    {
      lVar4 = FUN_140082f10();
      if ((((param_1[0x76] != 0) && (lVar4 != 0)) &&
          (lVar5 = *(longlong *)(param_1[0x76] + 0x10), lVar5 != 0)) &&
         ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)))) {
        FUN_14042af24(lVar3,&uStack_2c);
        if (-1 < (short)uStack_2c) {
          lVar4 = param_1[0x78];
          if (lVar4 != 0) {
            lVar5 = FUN_1449f3324();
            if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
               (*(longlong **)(lVar4 + 0xa08) != param_1)) goto LAB_14140e714;
          }
          FUN_14140eaa2(lVar3,&uStack_30,&uStack_2c,param_1);
          uStack_2c = uStack_30;
          FUN_14140e896(lVar3,&uStack_30,&uStack_2c,param_1[0x27f]);
        }
      }
    }
  }
LAB_14140e714:
  if ((uStack_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583e798 FUN_14583e798 body=187 status=ok
// SIG undefined FUN_14583e798(void)

void FUN_14583e798(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14583e83b;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14583e83b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14583e854 FUN_14583e854 body=122 status=ok
// SIG undefined FUN_14583e854(void)

undefined8 * FUN_14583e854(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 2;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 2;
  FUN_14583e8ce(param_1 + 0xc);
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  FUN_14485c47a(param_1 + 0x3b,param_2);
  return param_1;
}



// FUNCTION 14583e8ce FUN_14583e8ce body=176 status=ok
// SIG undefined FUN_14583e8ce(void)

longlong FUN_14583e8ce(longlong param_1)

{
  *(undefined8 *)(param_1 + 4) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  memset((void *)(param_1 + 0x10),0,0x90);
  *(undefined4 *)(param_1 + 0xbc) = 0x80;
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0xf;
  *(undefined2 *)(param_1 + 0x110) = 1;
  *(undefined8 *)(param_1 + 0x114) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  FUN_144a63cba(param_1 + 0x138);
  FUN_145e36b1e(param_1);
  return param_1;
}



// FUNCTION 14583ea82 FUN_14583ea82 body=57 status=ok
// SIG undefined FUN_14583ea82(void)

void FUN_14583ea82(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x3c20) + 0x18))(param_1 + 0x3c20);
  if (lVar1 != 0) {
    FUN_14583eabc(lVar1,param_2);
  }
  FUN_14030ec08(param_1);
  return;
}



// FUNCTION 14583eabc FUN_14583eabc body=7 status=ok
// SIG undefined FUN_14583eabc(void)

void FUN_14583eabc(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x148) = param_2;
  return;
}



// FUNCTION 14583eac4 FUN_14583eac4 body=101 status=ok
// SIG undefined FUN_14583eac4(void)

void FUN_14583eac4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  **(undefined1 **)(param_1 + 0x10) = 1;
  uVar3 = *(undefined8 *)(param_1 + 0x24);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined1 *)(param_2 + 0x60) = 1;
  iVar2 = *(int *)(param_2 + 0x58);
  lVar6 = (longlong)iVar2;
  *(uint *)(param_2 + 0x58) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
    FUN_14579eadc(param_2,iVar2);
  }
  lVar5 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar5 = param_2;
  }
  *(undefined8 *)(lVar5 + lVar6 * 0x14) = uVar4;
  *(undefined4 *)(lVar5 + 8 + lVar6 * 0x14) = uVar1;
  *(undefined8 *)(lVar5 + 0xc + lVar6 * 0x14) = uVar3;
  return;
}



// FUNCTION 14583eb2a FUN_14583eb2a body=97 status=ok
// SIG undefined FUN_14583eb2a(void)

void FUN_14583eb2a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  **(undefined1 **)(param_1 + 0x10) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x24);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_2 + 0x58);
  lVar6 = (longlong)iVar2;
  *(uint *)(param_2 + 0x58) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
    FUN_14579eadc(param_2,iVar2);
  }
  lVar5 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar5 = param_2;
  }
  *(undefined8 *)(lVar5 + lVar6 * 0x14) = uVar4;
  *(undefined4 *)(lVar5 + 8 + lVar6 * 0x14) = uVar1;
  *(undefined8 *)(lVar5 + 0xc + lVar6 * 0x14) = uVar3;
  return;
}



// FUNCTION 14583eb8c FUN_14583eb8c body=139 status=ok
// SIG undefined FUN_14583eb8c(void)

void FUN_14583eb8c(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    cVar2 = FUN_144729dda((undefined4 *)(param_1 + 0x38));
    if ((cVar2 != '\0') && (plVar1 = *(longlong **)(param_1 + 0x40), plVar1 != (longlong *)0x0)) {
      FUN_1407be368(&local_38,plVar1);
      *(undefined4 *)(param_1 + 0x38) = local_38;
      *(undefined4 *)(param_1 + 0x3c) = uStack_34;
      *(undefined4 *)(param_1 + 0x40) = uStack_30;
      *(undefined4 *)(param_1 + 0x44) = uStack_2c;
      uVar4 = FUN_14479d2ce(param_1 + 0x2c);
      uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,uVar4);
      *(undefined1 *)(param_1 + 9) = uVar3;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583ec18 FUN_14583ec18 body=40 status=ok
// SIG undefined FUN_14583ec18(void)

undefined8 FUN_14583ec18(undefined8 param_1,int param_2)

{
  FUN_14583ec40();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583ec40 FUN_14583ec40 body=43 status=ok
// SIG undefined FUN_14583ec40(void)

void FUN_14583ec40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6a4a70;
  FUN_14583ec6c(param_1 + 0x3c);
  FUN_140bc97f4(param_1);
  return;
}



// FUNCTION 14583ec6c FUN_14583ec6c body=80 status=ok
// SIG undefined FUN_14583ec6c(void)

void FUN_14583ec6c(longlong *param_1)

{
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014583ecb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14583ecc2 FUN_14583ecc2 body=66 status=ok
// SIG undefined FUN_14583ecc2(void)

void FUN_14583ecc2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000028;
  
  (**(code **)(*param_1 + 0x18))();
  plVar3 = *(longlong **)(in_stack_00000028 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014583ed00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14583ed04 FUN_14583ed04 body=87 status=ok
// SIG undefined FUN_14583ed04(void)

void FUN_14583ed04(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a6c4d8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = FUN_1447210f0(param_2);
      if (lVar1 != 0) {
        FUN_1412f3774(lVar1,param_2,0,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14583ed5c FUN_14583ed5c body=63 status=ok
// SIG undefined FUN_14583ed5c(void)

longlong FUN_14583ed5c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_141207d28(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x48 + *param_1;
  FUN_141207d05(lVar2);
  return lVar2;
}



// FUNCTION 14583ed9c FUN_14583ed9c body=155 status=ok
// SIG undefined FUN_14583ed9c(void)

undefined4 * FUN_14583ed9c(undefined4 *param_1,undefined4 *param_2)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  uVar13 = param_2[0xd];
  uVar14 = param_2[0xe];
  uVar15 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar13;
  param_1[0xe] = uVar14;
  param_1[0xf] = uVar15;
  param_1[8] = uVar9;
  param_1[9] = uVar10;
  param_1[10] = uVar11;
  param_1[0xb] = uVar12;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_14583ee38(param_1 + 0x10,param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  lVar16 = *(longlong *)(param_2 + 0x18);
  if (lVar16 == 0) {
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
    lVar16 = *(longlong *)(param_2 + 0x18);
  }
  *(longlong *)(param_1 + 0x18) = lVar16;
  *(undefined8 *)(param_2 + 0x18) = 0;
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  *(undefined8 *)(param_2 + 0x1a) = 0x200000000;
  return param_1;
}



// FUNCTION 14583ee38 FUN_14583ee38 body=17 status=ok
// SIG undefined FUN_14583ee38(void)

void FUN_14583ee38(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  return;
}



// FUNCTION 14583ee4a FUN_14583ee4a body=65 status=ok
// SIG undefined FUN_14583ee4a(void)

void FUN_14583ee4a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar3) + 8))();
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



// FUNCTION 14583ee92 FUN_14583ee92 body=37 status=ok
// SIG undefined FUN_14583ee92(void)

void FUN_14583ee92(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb8);
  FUN_14583eeb8(param_2);
  return;
}



// FUNCTION 14583eeb8 FUN_14583eeb8 body=103 status=ok
// SIG undefined FUN_14583eeb8(void)

undefined8 * FUN_14583eeb8(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  FUN_1412e3d1e((longlong)param_1 + 0xc);
  *(undefined8 *)((longlong)param_1 + 0x29) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 14583ef20 FUN_14583ef20 body=171 status=ok
// SIG undefined FUN_14583ef20(void)

undefined4 * FUN_14583ef20(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_168 [32];
  undefined1 local_148 [24];
  longlong local_130;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446dcdd4(local_148,param_3);
  lVar1 = FUN_1412095fe(local_148);
  if (local_130 != 0) {
    FUN_1400020a8();
  }
  if (lVar1 == 0) {
    *param_2 = 0xffffffff;
  }
  else {
    FUN_141209dde(local_148,lVar1);
    FUN_14120969a(param_1,param_2,local_148);
    FUN_140989dc4(local_148);
  }
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583efcc FUN_14583efcc body=284 status=ok
// SIG undefined FUN_14583efcc(void)

undefined4 *
FUN_14583efcc(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
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
  FUN_14583f284(param_1,local_58);
  FUN_14583f0ea(param_4,local_50);
  *(undefined4 *)(local_50 + 0x20) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_14583f1c0(param_1,param_3,local_50,local_58);
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
      FUN_14120a76a(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583f0ea FUN_14583f0ea body=122 status=ok
// SIG undefined FUN_14583f0ea(void)

undefined8 * FUN_14583f0ea(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  *param_2 = *(undefined8 *)*param_1;
  FUN_14583f166(param_2 + 1,&local_38);
  FUN_140989cc7(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583f166 FUN_14583f166 body=90 status=ok
// SIG undefined FUN_14583f166(void)

undefined8 * FUN_14583f166(undefined8 *param_1,undefined8 *param_2)

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
    FUN_148e233d2(param_1,iVar1,0);
    FUN_140989cf2(*param_1,uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 14583f1c0 FUN_14583f1c0 body=196 status=ok
// SIG undefined FUN_14583f1c0(void)

void FUN_14583f1c0(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_140989cc7(plVar9[1],(int)plVar9[2]);
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
          FUN_148e23446(param_1,*param_4);
          *param_4 = iVar10;
          uVar8 = 1;
          goto LAB_14583f232;
        }
        iVar10 = (int)plVar9[4];
      } while (iVar10 != -1);
    }
  }
  uVar8 = 0;
LAB_14583f232:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  return;
}



// FUNCTION 14583f284 FUN_14583f284 body=243 status=ok
// SIG undefined FUN_14583f284(void)

int * FUN_14583f284(longlong *param_1,int *param_2)

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



// FUNCTION 14583f378 FUN_14583f378 body=54 status=ok
// SIG undefined FUN_14583f378(void)

void FUN_14583f378(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  code *pcStack_18;
  ulonglong uStack_10;
  
  pcVar2 = *(char **)(*param_1 + 0x10);
  *(char **)(*param_1 + 0x10) = pcVar2 + 1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x02') {
    uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
    pcStack_18 = FUN_1438f41ac;
    FUN_144a29c16();
    FUN_1457655f4(param_1);
    FUN_14074ef86(param_1);
    if ((uStack_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
      FUN_1457655f4(param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (cVar1 == '\x03') {
    uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
    pcStack_18 = FUN_14803c4c6;
    FUN_144a29c16();
    FUN_14074ef86(param_1);
    FUN_14074ef86(param_1);
    if ((uStack_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
      FUN_1457655f4(param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (cVar1 == '\x01') {
    uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
    pcStack_18 = FUN_14803c434;
    FUN_144a29c16();
    FUN_14074ef86(param_1);
    FUN_1457655f4(param_1);
    if ((uStack_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
      FUN_1457655f4(param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (cVar1 != '\0') {
    return;
  }
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pcStack_18 = FUN_14803c3d0;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((uStack_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583f3ae FUN_14583f3ae body=94 status=ok
// SIG undefined FUN_14583f3ae(void)

void FUN_14583f3ae(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1438f41ac;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583f426 FUN_14583f426 body=173 status=ok
// SIG undefined FUN_14583f426(void)

void FUN_14583f426(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14583f4bd;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14583f4bd:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14583f4dc FUN_14583f4dc body=81 status=ok
// SIG undefined FUN_14583f4dc(void)

void FUN_14583f4dc(longlong *param_1)

{
  FUN_14583f52e(param_1 + 6);
  FUN_14583f56b(param_1[4],(int)param_1[5]);
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



// FUNCTION 14583f52e FUN_14583f52e body=61 status=ok
// SIG undefined FUN_14583f52e(void)

void FUN_14583f52e(longlong param_1)

{
  FUN_140e81e1c(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14583f56b FUN_14583f56b body=38 status=ok
// SIG undefined FUN_14583f56b(void)

void FUN_14583f56b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14583f52e(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 14583f592 FUN_14583f592 body=93 status=ok
// SIG undefined FUN_14583f592(void)

void FUN_14583f592(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x00014583f5eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014583f5ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 14583f5f8 FUN_14583f5f8 body=58 status=ok
// SIG undefined FUN_14583f5f8(void)

void FUN_14583f5f8(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  FUN_14583f632(param_2);
  *param_2 = &PTR_FUN_14b28f9c0;
  *(undefined1 *)(param_2 + 6) = 0;
  return;
}



// FUNCTION 14583f632 FUN_14583f632 body=109 status=ok
// SIG undefined FUN_14583f632(void)

undefined8 * FUN_14583f632(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14b291110;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_28.Data1 = 0;
  local_28.Data2 = 0;
  local_28.Data3 = 0;
  local_28.Data4[0] = '\0';
  local_28.Data4[1] = '\0';
  local_28.Data4[2] = '\0';
  local_28.Data4[3] = '\0';
  local_28.Data4[4] = '\0';
  local_28.Data4[5] = '\0';
  local_28.Data4[6] = '\0';
  local_28.Data4[7] = '\0';
  CoCreateGuid(&local_28);
  *(ulong *)(param_1 + 4) = local_28.Data1;
  *(undefined4 *)((longlong)param_1 + 0x24) = local_28._4_4_;
  *(undefined4 *)(param_1 + 5) = local_28.Data4._0_4_;
  *(undefined4 *)((longlong)param_1 + 0x2c) = local_28.Data4._4_4_;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583f6a0 FUN_14583f6a0 body=124 status=ok
// SIG undefined FUN_14583f6a0(void)

void FUN_14583f6a0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 != 0) {
    lVar1 = FUN_1400f6f32(lVar1);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
      plVar2 = (longlong *)FUN_140d71416(*(longlong *)(lVar1 + 0x68),param_2 + 0x18);
      if (plVar2 != (longlong *)0x0) {
        lVar1 = (**(code **)(*plVar2 + 0x7e0))(plVar2,param_1 + 0x20);
        if (lVar1 != 0) {
          FUN_14120bff4(lVar1,param_4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14583f71c FUN_14583f71c body=184 status=ok
// SIG undefined FUN_14583f71c(void)

void FUN_14583f71c(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[9] = 0x8000000000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 14583f7d4 FUN_14583f7d4 body=96 status=ok
// SIG undefined FUN_14583f7d4(void)

void FUN_14583f7d4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14583f834 FUN_14583f834 body=281 status=ok
// SIG undefined FUN_14583f834(void)

undefined4 * FUN_14583f834(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14583f9fc(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  FUN_1447a97f4(local_40,*param_3);
  *(undefined8 *)(local_40 + 10) = *puVar1;
  local_40[0xc] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_14583f94e(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[0xd] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0xc] =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14120df66(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583f94e FUN_14583f94e body=173 status=ok
// SIG undefined FUN_14583f94e(void)

undefined8 FUN_14583f94e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar14 * 0x38);
        if (*(int *)(*param_1 + (longlong)iVar14 * 0x38) == *param_3) {
          if (*(longlong *)(piVar1 + 6) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[9];
          iVar11 = param_3[10];
          iVar12 = param_3[0xb];
          piVar1[8] = param_3[8];
          piVar1[9] = iVar10;
          piVar1[10] = iVar11;
          piVar1[0xb] = iVar12;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1489b1dbe(param_1,*param_4);
          *param_4 = iVar14;
          return 1;
        }
        iVar14 = piVar1[0xc];
      } while (iVar14 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14583f9fc FUN_14583f9fc body=227 status=ok
// SIG undefined FUN_14583f9fc(void)

int * FUN_14583f9fc(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 14583fae0 FUN_14583fae0 body=95 status=ok
// SIG undefined FUN_14583fae0(void)

void FUN_14583fae0(longlong param_1,uint param_2)

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



// FUNCTION 14583fb40 FUN_14583fb40 body=63 status=ok
// SIG undefined FUN_14583fb40(void)

undefined1 FUN_14583fb40(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14583fb80(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 14583fb80 FUN_14583fb80 body=194 status=ok
// SIG undefined FUN_14583fb80(void)

longlong FUN_14583fb80(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
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
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  FUN_14583fcd8();
  FUN_14583fc80(param_1 + 0x10,param_2 + 0x10);
  FUN_1406fa324(param_1 + 0x20,param_2 + 0x20);
  FUN_1403fbf4e(param_1 + 0x30,param_2 + 0x30);
  uVar5 = *(undefined4 *)(param_2 + 0x44);
  uVar6 = *(undefined4 *)(param_2 + 0x48);
  uVar7 = *(undefined4 *)(param_2 + 0x4c);
  uVar8 = *(undefined4 *)(param_2 + 0x50);
  uVar9 = *(undefined4 *)(param_2 + 0x54);
  uVar10 = *(undefined4 *)(param_2 + 0x58);
  uVar11 = *(undefined4 *)(param_2 + 0x5c);
  uVar12 = *(undefined4 *)(param_2 + 0x60);
  uVar13 = *(undefined4 *)(param_2 + 100);
  uVar14 = *(undefined4 *)(param_2 + 0x68);
  uVar15 = *(undefined4 *)(param_2 + 0x6c);
  uVar16 = *(undefined4 *)(param_2 + 0x69);
  uVar17 = *(undefined4 *)(param_2 + 0x6d);
  uVar18 = *(undefined4 *)(param_2 + 0x71);
  uVar19 = *(undefined4 *)(param_2 + 0x75);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  *(undefined4 *)(param_1 + 0x48) = uVar6;
  *(undefined4 *)(param_1 + 0x4c) = uVar7;
  *(undefined4 *)(param_1 + 0x50) = uVar8;
  *(undefined4 *)(param_1 + 0x54) = uVar9;
  *(undefined4 *)(param_1 + 0x58) = uVar10;
  *(undefined4 *)(param_1 + 0x5c) = uVar11;
  *(undefined4 *)(param_1 + 0x60) = uVar12;
  *(undefined4 *)(param_1 + 100) = uVar13;
  *(undefined4 *)(param_1 + 0x68) = uVar14;
  *(undefined4 *)(param_1 + 0x6c) = uVar15;
  *(undefined4 *)(param_1 + 0x69) = uVar16;
  *(undefined4 *)(param_1 + 0x6d) = uVar17;
  *(undefined4 *)(param_1 + 0x71) = uVar18;
  *(undefined4 *)(param_1 + 0x75) = uVar19;
  FUN_14583fc42(param_1 + 0x88,param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  lVar3 = *(longlong *)(param_2 + 0xa0);
  lVar4 = *(longlong *)(param_1 + 0xa0);
  if (lVar4 != lVar3) {
    *(longlong *)(param_1 + 0xa0) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  return param_1;
}



// FUNCTION 14583fc42 FUN_14583fc42 body=61 status=ok
// SIG undefined FUN_14583fc42(void)

ulonglong * FUN_14583fc42(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *param_2;
    uVar2 = ((longlong)uVar1 >> 0x18) + (longlong)param_2;
    if ((uVar1 & 1) == 0) {
      uVar2 = uVar1;
    }
    FUN_14583fd36(param_1,uVar2,(int)param_2[1],*(undefined4 *)((longlong)param_1 + 0xc));
  }
  return param_1;
}



// FUNCTION 14583fc80 FUN_14583fc80 body=88 status=ok
// SIG undefined FUN_14583fc80(void)

undefined8 * FUN_14583fc80(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1417b095e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14583fcd8 FUN_14583fcd8 body=93 status=ok
// SIG undefined FUN_14583fcd8(void)

undefined8 * FUN_14583fcd8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1401be7ff(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1417b087a(param_1,iVar1);
      FUN_1407c2c22(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14583fd36 FUN_14583fd36 body=106 status=ok
// SIG undefined FUN_14583fd36(void)

void FUN_14583fd36(ulonglong *param_1,void *param_2,int param_3,int param_4)

{
  void *pvVar1;
  void *_Dst;
  
  *(int *)(param_1 + 1) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1417b0a42(param_1,param_3,param_4);
    if (param_3 != 0) {
      pvVar1 = (void *)*param_1;
      _Dst = (void *)(((longlong)pvVar1 >> 0x18) + (longlong)param_1);
      if (((ulonglong)pvVar1 & 1) == 0) {
        _Dst = pvVar1;
      }
      memcpy(_Dst,param_2,(longlong)param_3 * 0x14);
      return;
    }
  }
  return;
}



// FUNCTION 14583fda6 FUN_14583fda6 body=57 status=ok
// SIG undefined FUN_14583fda6(void)

void FUN_14583fda6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a998 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a998 = FUN_140002ddd(FUN_1464cb612,uVar1,L"GbxBrainAspect_CharacterSound");
  }
  return;
}



// FUNCTION 14583fde0 FUN_14583fde0 body=116 status=ok
// SIG undefined FUN_14583fde0(void)

void FUN_14583fde0(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 14583fe5c FUN_14583fe5c body=63 status=ok
// SIG undefined FUN_14583fe5c(void)

undefined8 * FUN_14583fe5c(undefined8 *param_1)

{
  FUN_1409e6ae2();
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  *param_1 = &PTR_FUN_14b9a3a50;
  *(undefined1 *)(param_1 + 0x8b) = 1;
  return param_1;
}



// FUNCTION 14583fe9b FUN_14583fe9b body=39 status=ok
// SIG undefined FUN_14583fe9b(void)

void FUN_14583fe9b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14583fec2(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba136a0;
  *(undefined1 *)(puVar1 + 5) = 0;
  return;
}



// FUNCTION 14583fec2 FUN_14583fec2 body=32 status=ok
// SIG undefined FUN_14583fec2(void)

undefined8 * FUN_14583fec2(undefined8 *param_1)

{
  FUN_140e6d9f4();
  *param_1 = &PTR_FUN_14aef5300;
  return param_1;
}



// FUNCTION 14583fee2 FUN_14583fee2 body=53 status=ok
// SIG undefined FUN_14583fee2(void)

void FUN_14583fee2(longlong *param_1)

{
  FUN_14583ff18();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14583ff18 FUN_14583ff18 body=306 status=ok
// SIG undefined FUN_14583ff18(void)

void FUN_14583ff18(longlong *param_1)

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
      FUN_14584004c((longlong)iStack_4c * 0x20 + *local_68);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584004c FUN_14584004c body=61 status=ok
// SIG undefined FUN_14584004c(void)

void FUN_14584004c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    FUN_14120f0ba(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14584008a FUN_14584008a body=240 status=ok
// SIG undefined FUN_14584008a(void)

void FUN_14584008a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
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
  (**(code **)(*param_1 + 0x2c8))(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584017c FUN_14584017c body=116 status=ok
// SIG undefined FUN_14584017c(void)

void FUN_14584017c(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_1458401f2();
  if (lVar1 != 0) {
    local_28 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_38 = param_1;
    local_2c = param_2;
    FUN_14120f542(lVar1,&local_58,&local_2c,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458401f2 FUN_1458401f2 body=92 status=ok
// SIG undefined FUN_1458401f2(void)

undefined8 FUN_1458401f2(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = FUN_140f5697c();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140f5697c();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145840242. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 145840254 FUN_145840254 body=271 status=ok
// SIG undefined FUN_145840254(void)

undefined8 * FUN_145840254(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 == '\x01') {
    lVar1 = param_1 + 0xd8;
    FUN_145840364(param_2,lVar1);
    iVar2 = *(int *)(param_1 + 0xe4);
    FUN_14147ef9c(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0));
    *(undefined4 *)(param_1 + 0xe0) = 0;
    if (-1 < iVar2) {
      return param_2;
    }
    iVar2 = *(int *)(param_1 + 0xe4);
  }
  else if (param_3 == '\x02') {
    lVar1 = param_1 + 0xe8;
    FUN_145840364(param_2,lVar1);
    iVar2 = *(int *)(param_1 + 0xf4);
    FUN_14147ef9c(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
    *(undefined4 *)(param_1 + 0xf0) = 0;
    if (-1 < iVar2) {
      return param_2;
    }
    iVar2 = *(int *)(param_1 + 0xf4);
  }
  else {
    if (param_3 != '\x04') {
      return param_2;
    }
    lVar1 = param_1 + 0xf8;
    FUN_145840364(param_2,lVar1);
    iVar2 = *(int *)(param_1 + 0x104);
    FUN_14147ef9c(*(undefined8 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x100));
    *(undefined4 *)(param_1 + 0x100) = 0;
    if (-1 < iVar2) {
      return param_2;
    }
    iVar2 = *(int *)(param_1 + 0x104);
  }
  if (iVar2 != 0) {
    FUN_148e23820(lVar1,0);
  }
  return param_2;
}



// FUNCTION 145840364 FUN_145840364 body=93 status=ok
// SIG undefined FUN_145840364(void)

undefined8 * FUN_145840364(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14147ef9c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1458403ee(param_1,iVar1);
      FUN_1458403c1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1458403c1 FUN_1458403c1 body=45 status=ok
// SIG undefined FUN_1458403c1(void)

void FUN_1458403c1(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1458403ee FUN_1458403ee body=98 status=ok
// SIG undefined FUN_1458403ee(void)

void FUN_1458403ee(longlong param_1,int param_2,int param_3)

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



// FUNCTION 145840450 FUN_145840450 body=102 status=ok
// SIG undefined FUN_145840450(void)

void FUN_145840450(longlong *param_1,longlong param_2)

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
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1458404b6(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1458404b6 FUN_1458404b6 body=85 status=ok
// SIG undefined FUN_1458404b6(void)

void FUN_1458404b6(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_14584050c();
  return;
}



// FUNCTION 14584050c FUN_14584050c body=116 status=ok
// SIG undefined FUN_14584050c(void)

void FUN_14584050c(longlong *param_1,int param_2)

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
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145840580 FUN_145840580 body=148 status=ok
// SIG undefined FUN_145840580(void)

bool FUN_145840580(longlong param_1)

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



// FUNCTION 145840616 FUN_145840616 body=288 status=ok
// SIG undefined FUN_145840616(void)

void FUN_145840616(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = FUN_140059518(param_1 + 0x44);
  if (lVar6 == 0) {
LAB_145840708:
    if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar6 = FUN_14120f7e6(lVar6);
  if (lVar6 == 0) goto LAB_145840708;
  FUN_1402815f4(param_1,&local_40);
  lVar3 = *(longlong *)(local_40 + 0x360);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x20));
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  cVar4 = FUN_14584074c(lVar6);
  if (cVar4 == '\0') {
    bVar5 = false;
  }
  else {
    bVar5 = *(longlong *)(param_1 + 0xc0) == DAT_14cbd7ba0 ||
            *(longlong *)(param_1 + 0xc0) == DAT_14cbd7b98;
  }
  if (bVar5 == (bool)*(char *)(lVar3 + 8)) {
    if (*(int *)(lVar3 + 0xc) != 0) goto LAB_1458406b4;
    iVar7 = 1;
  }
  else {
    iVar7 = *(int *)(lVar3 + 0xc) + 1;
  }
  *(bool *)(lVar3 + 8) = bVar5;
  *(int *)(lVar3 + 0xc) = iVar7;
LAB_1458406b4:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 14584074c FUN_14584074c body=7 status=ok
// SIG undefined FUN_14584074c(void)

undefined1 FUN_14584074c(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x180);
}



// FUNCTION 145840754 FUN_145840754 body=511 status=ok
// SIG undefined FUN_145840754(void)

void FUN_145840754(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [40];
  undefined8 local_98;
  undefined1 local_90 [40];
  undefined8 local_68;
  undefined1 local_60 [24];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_68 = param_2;
  FUN_1447a97f4(local_60,param_3);
  local_98 = local_68;
  FUN_1447a97f4(local_90,local_60);
  plVar3 = (longlong *)FUN_14120f9a0(param_1 + 0x270,&local_98);
  if (plVar3 == (longlong *)0x0) {
    local_c8 = local_68;
    FUN_1447a97f4(local_c0,local_60);
    plVar3 = (longlong *)FUN_14120f9a0(param_1 + 0x260,&local_c8);
    if (plVar3 != (longlong *)0x0) goto LAB_14584093c;
  }
  else {
LAB_14584093c:
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) goto LAB_14584089a;
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  iVar1 = *(int *)(param_1 + 0x25c);
  *(int *)(param_1 + 0x25c) = iVar1 + 1;
  *puVar4 = &PTR_FUN_14b433f68;
  *(int *)(puVar4 + 1) = iVar1;
  *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
  FUN_14485c47a((longlong)puVar4 + 0xc,param_2);
  FUN_1447a97f4(puVar4 + 3,param_3);
  *(undefined1 *)(puVar4 + 8) = 2;
  *puVar4 = &PTR_FUN_14b434000;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 2;
  iVar1 = *(int *)(param_1 + 0x268);
  *(uint *)(param_1 + 0x268) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x26c) < iVar1 + 1U) {
    FUN_145840b16((longlong *)(param_1 + 0x260),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x260) + (longlong)iVar1 * 8) = puVar4;
LAB_14584089a:
  if ((((int)param_4[1] != 0) && ((longlong *)*param_4 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*(longlong *)*param_4 + 0x30))(), cVar2 != '\0')) {
    local_d8 = 0;
    local_d0 = 0;
    FUN_145840954(&local_d8,param_4);
    FUN_145840a30(puVar4 + 9,local_e0,&local_d8);
    FUN_1449db362(&local_d8);
  }
  FUN_140f1049c(param_1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145840954 FUN_145840954 body=124 status=ok
// SIG undefined FUN_145840954(void)

void FUN_145840954(longlong *param_1,longlong *param_2)

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



// FUNCTION 1458409d2 FUN_1458409d2 body=93 status=ok
// SIG undefined FUN_1458409d2(void)

void FUN_1458409d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b434d90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4344c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 145840a30 FUN_145840a30 body=216 status=ok
// SIG undefined FUN_145840a30(void)

undefined8 * FUN_145840a30(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145840b16 FUN_145840b16 body=132 status=ok
// SIG undefined FUN_145840b16(void)

void FUN_145840b16(longlong param_1,int param_2)

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



// FUNCTION 145840b9c FUN_145840b9c body=93 status=ok
// SIG undefined FUN_145840b9c(void)

undefined8 * FUN_145840b9c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d59bf5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14120fb36(param_1,iVar1);
      FUN_14120faf4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145840bfa FUN_145840bfa body=92 status=ok
// SIG undefined FUN_145840bfa(void)

void FUN_145840bfa(longlong param_1)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0x2de0)) {
    FUN_14788cab4(param_1 + 0x2dd8,0,0);
    return;
  }
  if (DAT_14cb0d2b0 != 0) {
    lVar1 = FUN_1447210f0();
    if (lVar1 != 0) {
      lVar1 = FUN_144a7b302(lVar1);
      if (lVar1 != 0) {
        FUN_1434080aa(lVar1,0x3f800000);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145840c56 FUN_145840c56 body=63 status=ok
// SIG undefined FUN_145840c56(void)

void FUN_145840c56(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145840c96(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 145840c96 FUN_145840c96 body=97 status=ok
// SIG undefined FUN_145840c96(void)

ulonglong FUN_145840c96(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x38) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x38,8);
      uVar1 = uVar1 / 0x38;
    }
  }
  return uVar1;
}



// FUNCTION 145840cf8 FUN_145840cf8 body=110 status=ok
// SIG undefined FUN_145840cf8(void)

void FUN_145840cf8(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x38 + lVar1);
  FUN_14120fc71(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x38),(longlong)iVar3 * 0x38);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 145840d66 FUN_145840d66 body=84 status=ok
// SIG undefined FUN_145840d66(void)

void FUN_145840d66(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_145840dbc(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145840dbc FUN_145840dbc body=79 status=ok
// SIG undefined FUN_145840dbc(void)

void FUN_145840dbc(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[4]);
  FUN_140dba9e6(*param_1,param_2[0x10]);
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
    return;
  }
  return;
}



// FUNCTION 145840e0c FUN_145840e0c body=137 status=ok
// SIG undefined FUN_145840e0c(void)

undefined8 FUN_145840e0c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145840e96((ulonglong)((uint)*(ushort *)(param_1 + 0x2ae) * 0x18) +
                *(longlong *)(DAT_14cb86da8 + 0x340),&local_28);
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
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145840e96 FUN_145840e96 body=83 status=ok
// SIG undefined FUN_145840e96(void)

longlong * FUN_145840e96(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_145840eea();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 145840eea FUN_145840eea body=57 status=ok
// SIG undefined FUN_145840eea(void)

void FUN_145840eea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf528 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf528 = FUN_140002ddd(FUN_14661223a,uVar1,L"ObjectiveTypeSettings_OakBoss");
  }
  return;
}



// FUNCTION 145840f4e FUN_145840f4e body=40 status=ok
// SIG undefined FUN_145840f4e(void)

undefined8 FUN_145840f4e(undefined8 param_1,int param_2)

{
  FUN_145840f76();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145840f76 FUN_145840f76 body=101 status=ok
// SIG undefined FUN_145840f76(void)

void FUN_145840f76(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6cb230;
  FUN_140bcae4d(param_1[0x34],*(undefined4 *)(param_1 + 0x35));
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_140bcae4d(param_1[0x32],*(undefined4 *)(param_1 + 0x33));
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_1412110d4(param_1);
  return;
}



// FUNCTION 145840fdc FUN_145840fdc body=36 status=ok
// SIG undefined FUN_145840fdc(void)

void FUN_145840fdc(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_145841000();
  if (cVar1 == '\0') {
    return;
  }
  FUN_1401d6558(param_1);
  return;
}



// FUNCTION 145841000 FUN_145841000 body=101 status=ok
// SIG undefined FUN_145841000(void)

bool FUN_145841000(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  cVar1 = *(char *)(param_1 + 0x4d);
  *(undefined1 *)(param_1 + 0x4d) = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar4 = FUN_144a2f878();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         == lVar4 + 0x30)) && (*(longlong *)(lVar2 + 0x1b0) != 0)) {
      if (lVar2 == *(longlong *)(lVar2 + 0x1b0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_1449ce79a();
      }
      *(undefined1 *)(param_1 + 0x4d) = uVar3;
    }
  }
  return cVar1 != *(char *)(param_1 + 0x4d);
}



// FUNCTION 145841066 FUN_145841066 body=10 status=ok
// SIG undefined FUN_145841066(void)

void FUN_145841066(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014584106d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



// FUNCTION 1458410a0 FUN_1458410a0 body=118 status=ok
// SIG undefined FUN_1458410a0(void)

undefined8 * FUN_1458410a0(undefined8 *param_1)

{
  FUN_144a0768c();
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *param_1 = &PTR_FUN_14a7708f0;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)((longlong)param_1 + 0x91) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0x8d) = 0xffffffff;
  param_1[0x13] = DAT_14c845dbc;
  *(undefined4 *)(param_1 + 0x14) = DAT_14c845dc4;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 145841116 FUN_145841116 body=59 status=ok
// SIG undefined FUN_145841116(void)

void FUN_145841116(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa51e00;
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_1412117b0(param_1 + 2);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 145841152 FUN_145841152 body=38 status=ok
// SIG undefined FUN_145841152(void)

undefined8 FUN_145841152(undefined8 param_1,int param_2)

{
  FUN_145841178();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145841178 FUN_145841178 body=148 status=ok
// SIG undefined FUN_145841178(void)

void FUN_145841178(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aaafd50;
  if (param_1[0x16] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x16] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x15] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x15] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x14] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x14] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14584120c FUN_14584120c body=40 status=ok
// SIG undefined FUN_14584120c(void)

undefined8 FUN_14584120c(undefined8 param_1,int param_2)

{
  FUN_1412118c6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145841234 FUN_145841234 body=40 status=ok
// SIG undefined FUN_145841234(void)

undefined8 FUN_145841234(undefined8 param_1,int param_2)

{
  thunk_FUN_14006e5d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584126a FUN_14584126a body=45 status=ok
// SIG undefined FUN_14584126a(void)

undefined8 FUN_14584126a(undefined8 param_1,int param_2)

{
  FUN_145841298();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 145841298 FUN_145841298 body=85 status=ok
// SIG undefined FUN_145841298(void)

void FUN_145841298(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b29b990;
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
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1458412fc FUN_1458412fc body=31 status=ok
// SIG undefined FUN_1458412fc(void)

undefined8 FUN_1458412fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584132c FUN_14584132c body=44 status=ok
// SIG undefined FUN_14584132c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14584132c(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb75c2c = _DAT_14cb75c2c + -1;
  *param_1 = DAT_14cb75c20;
  DAT_14cb75c20 = param_1;
  return;
}



// FUNCTION 145841358 FUN_145841358 body=9 status=ok
// SIG undefined FUN_145841358(void)

void FUN_145841358(longlong param_1)

{
  FUN_141211910(param_1 + 0x10);
  return;
}



// FUNCTION 14584136e FUN_14584136e body=40 status=ok
// SIG undefined FUN_14584136e(void)

undefined8 FUN_14584136e(undefined8 param_1,int param_2)

{
  thunk_FUN_14110b6d4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145841396 thunk_FUN_14110b6d4 body=5 status=ok
// SIG undefined thunk_FUN_14110b6d4(void)

void thunk_FUN_14110b6d4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4fe9e0;
  param_1[5] = &PTR_FUN_14a4fed00;
  plVar3 = (longlong *)param_1[0x60];
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
  param_1[0x38] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x4c];
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
  FUN_140f861ce(param_1);
  return;
}



// FUNCTION 14584139c FUN_14584139c body=336 status=ok
// SIG undefined FUN_14584139c(void)

void FUN_14584139c(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1405f1eac();
  lVar3 = FUN_1447210f0(param_1);
  FUN_14490d72a(lVar3);
  if ((lVar3 == 0) || (iVar2 = FUN_14490d72a(lVar3), iVar2 != 3)) {
    *(byte *)((longlong)param_1 + 0x3bc) = *(byte *)((longlong)param_1 + 0x3bc) | 3;
  }
  else {
    bVar1 = FUN_14020697c(lVar3);
    *(uint *)((longlong)param_1 + 0x3bc) =
         (*(uint *)((longlong)param_1 + 0x3bc) & 0xfffffffc) + (uint)bVar1 + 2;
    if (bVar1 == 0) goto LAB_145841400;
  }
  FUN_140e1f5ec(param_1);
  (**(code **)(*param_1 + 0x400))(param_1,1);
LAB_145841400:
  if (0 < (int)param_1[0x76]) {
    lVar3 = 0;
    do {
      FUN_1402c961e(param_1,*(undefined8 *)(param_1[0x75] + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[0x76]);
  }
  *(undefined4 *)(param_1 + 0x76) = 0;
  if (*(int *)((longlong)param_1 + 0x3b4) != 0) {
    FUN_148b7ca52(param_1 + 0x75);
  }
  local_38 = FUN_148b79aca;
  local_30 = 0;
  FUN_1458414ee(local_28,param_1,&local_38);
  local_38 = FUN_145c9db34;
  local_30 = 0;
  FUN_1458415e8(local_28,param_1,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458414ee FUN_1458414ee body=248 status=ok
// SIG undefined FUN_1458414ee(void)

undefined8 FUN_1458414ee(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1e1a40;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b5b73a0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_141211c46(&DAT_14cb0d340,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458415e8 FUN_1458415e8 body=248 status=ok
// SIG undefined FUN_1458415e8(void)

undefined8 FUN_1458415e8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a8bcd00;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b5b7410;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_141211dc4(&DAT_14cadbec8,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458416e2 FUN_1458416e2 body=40 status=ok
// SIG undefined FUN_1458416e2(void)

undefined8 FUN_1458416e2(undefined8 param_1,int param_2)

{
  thunk_FUN_14071fe68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584170a thunk_FUN_14071fe68 body=5 status=ok
// SIG undefined thunk_FUN_14071fe68(void)

void thunk_FUN_14071fe68(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1ad920;
  param_1[5] = &PTR_FUN_14a1adbd0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[7];
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



// FUNCTION 145841710 FUN_145841710 body=25 status=ok
// SIG undefined FUN_145841710(void)

undefined8 FUN_145841710(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145841732 FUN_145841732 body=254 status=ok
// SIG undefined FUN_145841732(void)

undefined8
FUN_145841732(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14ac8b4c0;
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
  *local_48 = &PTR_FUN_14b3e8ff0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140e0aeb0(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145841832 FUN_145841832 body=1800 status=ok
// SIG undefined FUN_145841832(void)

void FUN_145841832(undefined4 *param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined4 uVar3;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined8 **local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 != 0) {
    local_98[0] = 0;
    local_70 = 0;
    FUN_1456bb102(local_98);
    FUN_1447c3578(param_3 + 0x9a8,local_68,local_98);
    uVar3 = FUN_144a7b41a(local_68,*param_1);
    *param_1 = uVar3;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar2 = local_68;
      if (0x18 < local_50) {
        pppuVar2 = (undefined8 ***)local_68[0];
      }
      (*pcVar1)(pppuVar2);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    FUN_144a5ac3a(local_98);
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_3 + 0x9e0);
    local_98[0] = 0;
    local_70 = 0;
    FUN_1456bb102(local_98,param_2);
    FUN_1447c3578(param_3 + 0x9e8,local_68,local_98);
    uVar3 = FUN_144a7b41a(local_68,param_1[1]);
    param_1[1] = uVar3;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar2 = local_68;
      if (0x18 < local_50) {
        pppuVar2 = (undefined8 ***)local_68[0];
      }
      (*pcVar1)(pppuVar2);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    FUN_144a5ac3a(local_98);
    local_98[0] = 0;
    local_70 = 0;
    FUN_1456bb102(local_98,param_2);
    FUN_1447c3578(param_3 + 0xa58,local_68,local_98);
    FUN_141213494(local_68,&local_a0,param_1 + 5);
    *(undefined8 *)(param_1 + 5) = local_a0;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar2 = local_68;
      if (0x18 < local_50) {
        pppuVar2 = (undefined8 ***)local_68[0];
      }
      (*pcVar1)(pppuVar2);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    FUN_144a5ac3a(local_98);
    local_98[0] = 0;
    local_70 = 0;
    FUN_1456bb102(local_98,param_2);
    FUN_1447c3578(param_3 + 0xa20,local_68,local_98);
    FUN_141213494(local_68,&local_a0,param_1 + 3);
    *(undefined8 *)(param_1 + 3) = local_a0;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar2 = local_68;
      if (0x18 < local_50) {
        pppuVar2 = (undefined8 ***)local_68[0];
      }
      (*pcVar1)(pppuVar2);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    FUN_144a5ac3a(local_98);
    local_98[0] = 0;
    local_70 = 0;
    FUN_1456bb102(local_98,param_2);
    FUN_1447c3578(param_3 + 0xa90,local_68,local_98);
    uVar3 = FUN_144a7b41a(local_68,param_1[7]);
    param_1[7] = uVar3;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar2 = local_68;
      if (0x18 < local_50) {
        pppuVar2 = (undefined8 ***)local_68[0];
      }
      (*pcVar1)(pppuVar2);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    FUN_144a5ac3a(local_98);
    local_98[0] = 0;
    local_70 = 0;
    FUN_1456bb102(local_98,param_2);
    FUN_1447c3578(param_3 + 0xac8,local_68,local_98);
    uVar3 = FUN_144a7b41a(local_68,param_1[8]);
    param_1[8] = uVar3;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar2 = local_68;
      if (0x18 < local_50) {
        pppuVar2 = (undefined8 ***)local_68[0];
      }
      (*pcVar1)(pppuVar2);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    FUN_144a5ac3a(local_98);
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_3 + 0xb00);
    *(undefined1 *)((longlong)param_1 + 0x25) = *(undefined1 *)(param_3 + 0xb01);
    *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)(param_3 + 0xb80);
    local_98[0] = 0;
    local_70 = 0;
    FUN_1456bb102(local_98,param_2);
    FUN_1447c3578(param_3 + 0xb08,local_68,local_98);
    uVar3 = FUN_144a7b41a(local_68,param_1[10]);
    param_1[10] = uVar3;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar2 = local_68;
      if (0x18 < local_50) {
        pppuVar2 = (undefined8 ***)local_68[0];
      }
      (*pcVar1)(pppuVar2);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    FUN_144a5ac3a(local_98);
    local_98[0] = 0;
    local_70 = 0;
    FUN_1456bb102(local_98,param_2);
    FUN_1447c3578(param_3 + 0xb88,local_68,local_98);
    uVar3 = FUN_144a7b41a(local_68,param_1[0xb]);
    param_1[0xb] = uVar3;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar2 = local_68;
      if (0x18 < local_50) {
        pppuVar2 = (undefined8 ***)local_68[0];
      }
      (*pcVar1)(pppuVar2);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    FUN_144a5ac3a(local_98);
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_3 + 0xb40);
    *(undefined1 *)((longlong)param_1 + 0x31) = *(undefined1 *)(param_3 + 0xbc0);
    local_98[0] = 0;
    local_70 = 0;
    FUN_1456bb102(local_98,param_2);
    FUN_1447c3578(param_3 + 0xb48,local_68,local_98);
    uVar3 = FUN_144a7b41a(local_68,param_1[0xd]);
    param_1[0xd] = uVar3;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar2 = local_68;
      if (0x18 < local_50) {
        pppuVar2 = (undefined8 ***)local_68[0];
      }
      (*pcVar1)(pppuVar2);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    FUN_144a5ac3a(local_98);
    local_98[0] = 0;
    local_70 = 0;
    FUN_1456bb102(local_98,param_2);
    FUN_1447c3578(param_3 + 0xbc8,local_68,local_98);
    uVar3 = FUN_144a7b41a(local_68,param_1[0xe]);
    param_1[0xe] = uVar3;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar2 = local_68;
      if (0x18 < local_50) {
        pppuVar2 = (undefined8 ***)local_68[0];
      }
      (*pcVar1)(pppuVar2);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    FUN_144a5ac3a(local_98);
    FUN_145841f3c(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145841f3c FUN_145841f3c body=171 status=ok
// SIG undefined FUN_145841f3c(void)

void FUN_145841f3c(longlong param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  
  *(undefined1 *)(param_1 + 0x40) = 0;
  cVar1 = *(char *)(param_1 + 0x24);
  if (cVar1 == '\x02') {
    uVar2 = rand();
    fVar4 = (float)(uVar2 & 0x7fff) / 32767.0;
    iVar3 = (uint)(0 < (int)(fVar4 + fVar4)) * 2 + -1;
  }
  else {
    iVar3 = 1;
    if (cVar1 != '\0') {
      if (cVar1 != '\x01') goto LAB_145841f81;
      iVar3 = -1;
    }
  }
  *(int *)(param_1 + 0x3c) = iVar3;
LAB_145841f81:
  if (*(char *)(param_1 + 0x25) == '\x01') {
    fVar4 = *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x18);
  }
  else {
    fVar4 = (float)FUN_14085b07e(param_1 + 0x14);
  }
  *(float *)(param_1 + 0x68) = fVar4;
  if (*(char *)(param_1 + 0x26) == '\x01') {
    fVar4 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x10);
  }
  else {
    fVar4 = (float)FUN_14085b07e(param_1 + 0xc);
  }
  *(float *)(param_1 + 0x60) = fVar4;
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}



// FUNCTION 145841fe8 FUN_145841fe8 body=124 status=ok
// SIG undefined FUN_145841fe8(void)

longlong * FUN_145841fe8(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b92bd90;
  FUN_145842064(plVar3 + 2,0);
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



// FUNCTION 145842064 FUN_145842064 body=91 status=ok
// SIG undefined FUN_145842064(void)

undefined8 * FUN_145842064(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_2 == 0) || (lVar1 = FUN_141215884(), lVar1 == 0)) ||
      (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    param_2 = FUN_141215884();
  }
  FUN_141067fd6(param_1,param_2);
  *param_1 = &PTR_FUN_14b9a3bb0;
  return param_1;
}



// FUNCTION 1458420c0 FUN_1458420c0 body=113 status=ok
// SIG undefined FUN_1458420c0(void)

undefined8 FUN_1458420c0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = param_1[0x841];
  if (lVar1 != 0) {
    uVar3 = (**(code **)(*(longlong *)(lVar1 + 0x3b38) + 0x18))(lVar1 + 0x3b38);
    cVar2 = FUN_140226b70(uVar3);
    if (cVar2 == '\0') {
      cVar2 = FUN_1412159ee(param_1);
      if ((cVar2 == '\0') && ((char)param_1[0x87e] == '\0')) {
        if (*(char *)((longlong)param_1 + 0x41dc) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000145842128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*param_1 + 0xec8))();
          return uVar3;
        }
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 14584213e FUN_14584213e body=110 status=ok
// SIG undefined FUN_14584213e(void)

undefined8 * FUN_14584213e(undefined8 *param_1)

{
  FUN_1405ba846();
  *param_1 = &PTR_FUN_14b1c74a0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3cc) = 1;
  FUN_140785382(param_1 + 0x7a,7);
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined1 *)(param_1 + 0x83) = 1;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xfc | 2;
  FUN_140cbebe8(param_1 + 6,0);
  return param_1;
}



// FUNCTION 1458421ac FUN_1458421ac body=40 status=ok
// SIG undefined FUN_1458421ac(void)

undefined8 FUN_1458421ac(undefined8 param_1,int param_2)

{
  FUN_1458421d4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458421d4 FUN_1458421d4 body=81 status=ok
// SIG undefined FUN_1458421d4(void)

void FUN_1458421d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1c74a0;
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x81] != 0) {
    FUN_1400020a8();
  }
  FUN_144a2da94(param_1 + 0x7a);
  thunk_FUN_1402d9b92(param_1);
  return;
}



// FUNCTION 145842226 FUN_145842226 body=229 status=ok
// SIG undefined FUN_145842226(void)

void FUN_145842226(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x30))(param_2,&local_30);
  plVar6 = (longlong *)(param_1 + 0x78);
  puVar4 = local_30;
  if (local_28 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_28 + -1;
  if (local_28 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_145842592(plVar6,uVar1,&local_30);
  if (iVar2 != -1) {
    puVar4 = local_30;
    if (local_28 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    uVar5 = 0;
    uVar3 = (ulonglong)(local_28 - 1);
    if (local_28 == 0) {
      uVar3 = uVar5;
    }
    uVar1 = FUN_144a49b4a(uVar3,puVar4);
    iVar2 = FUN_145842592(plVar6,uVar1,&local_30);
    if (iVar2 != -1) {
      uVar5 = (longlong)iVar2 * 0x28 + *plVar6;
    }
    FUN_14584230c(param_3,uVar5 + 0x10);
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14584230c FUN_14584230c body=93 status=ok
// SIG undefined FUN_14584230c(void)

undefined8 * FUN_14584230c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145842369(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14584240a(param_1,iVar1);
      FUN_1458423d5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145842369 FUN_145842369 body=38 status=ok
// SIG undefined FUN_145842369(void)

void FUN_145842369(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145842390(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 145842390 FUN_145842390 body=69 status=ok
// SIG undefined FUN_145842390(void)

void FUN_145842390(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b438d60;
  FUN_141215b22(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458423d5 FUN_1458423d5 body=52 status=ok
// SIG undefined FUN_1458423d5(void)

void FUN_1458423d5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14584247e(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 14584240a FUN_14584240a body=115 status=ok
// SIG undefined FUN_14584240a(void)

void FUN_14584240a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14584247e FUN_14584247e body=177 status=ok
// SIG undefined FUN_14584247e(void)

undefined8 * FUN_14584247e(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14b438d60;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0x18);
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_145842530(param_1 + 4,iVar1,0);
    FUN_141215bae(param_1[4],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 145842530 FUN_145842530 body=98 status=ok
// SIG undefined FUN_145842530(void)

void FUN_145842530(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145842592 FUN_145842592 body=197 status=ok
// SIG undefined FUN_145842592(void)

int FUN_145842592(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1458425d8:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x28) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_145842630;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_145842630;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_145842641;
    }
  }
  return -1;
LAB_145842630:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_145842641:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1458425d8;
}



// FUNCTION 145842658 FUN_145842658 body=32 status=ok
// SIG undefined FUN_145842658(void)

undefined8 FUN_145842658(longlong param_1,undefined8 param_2)

{
  FUN_145842678(param_2,param_1 + 0x300);
  return param_2;
}



// FUNCTION 145842678 FUN_145842678 body=71 status=ok
// SIG undefined FUN_145842678(void)

undefined8 * FUN_145842678(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1458426ca FUN_1458426ca body=76 status=ok
// SIG undefined FUN_1458426ca(void)

undefined8 * FUN_1458426ca(undefined8 *param_1)

{
  FUN_144a0768c();
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) & 0xfc;
  *param_1 = &PTR_FUN_14abcbda0;
  FUN_141215e22(param_1 + 6);
  FUN_141215e22(param_1 + 8);
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) & 0xfd;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  return param_1;
}



// FUNCTION 145842716 FUN_145842716 body=2242 status=ok
// SIG undefined FUN_145842716(void)

void FUN_145842716(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_141216c00();
  FUN_1446f470e(&local_68,L"ExperienceState",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"MusicThreat",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"CriticalMusicThreat",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"bMinibossCombat",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"MusicCombatZone",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"bDrivingVehicle",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"GenericProperties",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"TravelStatus",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"BuddyIndex",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"AmmoNeeds",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"CurrentCharacterSelectPhase",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"BlackMarketCooldownTimestamp",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"bBlackMarketMachineDiscovered",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"PlayerDifficulty",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"DiscoveryPinningState",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"ChallengeObjectiveStates",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"bIsBusyInMenu",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"bInZoneTransition",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"HighestUnlockedMayhemLevel",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  local_58 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 2;
  FUN_1446f470e(&local_70,L"ReplicatedLostLootSlots",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_70);
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"BackpackItems",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_68 = 2;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_58 = FUN_145842fda();
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"BankItems",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_68 = 2;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_58 = FUN_145842fda();
  FUN_140f1fa23(uVar1,param_2,&local_68);
  local_58 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 2;
  FUN_1446f470e(&local_70,L"BackpackContainer",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_70);
  FUN_140f1fa23(uVar1,param_2,&local_68);
  local_58 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 2;
  FUN_1446f470e(&local_70,L"BankContainer",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_70);
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"ReplicatedChallengeCompletion",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_68 = 3;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_58 = FUN_1459548e4();
  FUN_140f1fa23(uVar1,param_2,&local_68);
  local_58 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 3;
  FUN_1446f470e(&local_70,L"bInNoSignal_NoTravelZone",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_70);
  FUN_140f1fa23(uVar1,param_2,&local_68);
  local_58 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 3;
  FUN_1446f470e(&local_70,L"bInNoSignal_WorldSettings_NoTravelZone",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_70);
  FUN_140f1fa23(uVar1,param_2,&local_68);
  local_58 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 3;
  FUN_1446f470e(&local_70,L"RestrictPlayerNamesZone",1);
  uVar1 = FUN_144a7b4ca();
  FUN_144a7b4ca();
  uVar1 = FUN_140f1fabf(uVar1,local_70);
  FUN_140f1fa23(uVar1,param_2,&local_68);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145842fda FUN_145842fda body=3 status=ok
// SIG undefined FUN_145842fda(void)

undefined8 FUN_145842fda(void)

{
  return 0;
}



// FUNCTION 145842fde FUN_145842fde body=560 status=ok
// SIG undefined FUN_145842fde(void)

void FUN_145842fde(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c2c6fa();
  local_28 = 0;
  local_38 = 0;
  local_30 = 1;
  local_48 = L"Score";
  local_40 = &DAT_10000000b;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"bIsSpectator";
  local_40 = (undefined1 *)0x10000000e;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"bOnlySpectator";
  local_40 = &DAT_10000000f;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"bFromPreviousLevel";
  local_40 = (undefined1 *)0x100000012;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"StartTime";
  local_40 = (undefined1 *)0x100000013;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"PlayerNamePrivate";
  local_40 = (undefined1 *)0x100000015;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_38._0_4_ = 3;
  local_48 = L"CompressedPing";
  local_40 = (undefined1 *)0x10000000d;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_38 = CONCAT44(local_38._4_4_,1);
  local_48 = L"PlayerId";
  local_40 = &DAT_10000000c;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"bIsABot";
  local_40 = &DAT_100000010;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"bIsInactive";
  local_40 = (undefined1 *)0x100000011;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"UniqueId";
  local_40 = &DAT_100000014;
  FUN_140c2c993(&local_48,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145843210 FUN_145843210 body=148 status=ok
// SIG undefined FUN_145843210(void)

void FUN_145843210(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    FUN_1458432a4(lVar1);
    FUN_1400020a8(lVar1);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    FUN_1458432a4(lVar1);
    FUN_1400020a8(lVar1);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    FUN_1458432a4(lVar1);
    FUN_1400020a8(lVar1);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    FUN_1458432a4(lVar1);
    FUN_1400020a8(lVar1);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1458432a4 FUN_1458432a4 body=83 status=ok
// SIG undefined FUN_1458432a4(void)

void FUN_1458432a4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  if (0 < (longlong)(int)lVar1) {
    lVar2 = 0;
    do {
      FUN_14011fb0c(*(longlong *)(*param_1 + lVar2 * 8) + 8);
      lVar2 = lVar2 + 1;
    } while ((int)lVar1 != lVar2);
  }
  FUN_1458432f8(param_1);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1458432f8 FUN_1458432f8 body=97 status=ok
// SIG undefined FUN_1458432f8(void)

void FUN_1458432f8(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar1 + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 145843368 FUN_145843368 body=59 status=ok
// SIG undefined FUN_145843368(void)

undefined8 * FUN_145843368(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1458433a4 FUN_1458433a4 body=53 status=ok
// SIG undefined FUN_1458433a4(void)

void FUN_1458433a4(longlong param_1,longlong *param_2)

{
  if ((longlong *)(param_1 + 0x158) != param_2) {
    FUN_14034a368((longlong *)(param_1 + 0x158),param_2);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1458433da FUN_1458433da body=106 status=ok
// SIG undefined FUN_1458433da(void)

void FUN_1458433da(longlong param_1,longlong param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x68) == '\0') {
      param_1 = param_1 + 0xe0;
LAB_1458433fa:
      FUN_1412171de(param_1,param_2,param_3);
      return;
    }
    if (((*(char *)(param_2 + 0x68) == '\x01') && (*(longlong *)(param_1 + 0x88) != 0)) &&
       (*(longlong **)(param_1 + 0x90) != (longlong *)0x0)) {
      param_1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))();
      if (param_1 != 0) {
        param_1 = param_1 + 0x1a8;
        goto LAB_1458433fa;
      }
    }
  }
  return;
}



// FUNCTION 14584344a FUN_14584344a body=62 status=ok
// SIG undefined FUN_14584344a(void)

undefined8 FUN_14584344a(undefined2 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    cVar1 = FUN_140653b22();
    if (cVar1 != '\0') {
      cVar1 = FUN_144a7c9c3();
      if (cVar1 == '\0') goto LAB_145843479;
    }
    return 0;
  }
LAB_145843479:
  uVar2 = FUN_144880847(*param_1,0);
  return uVar2;
}



// FUNCTION 145843488 FUN_145843488 body=48 status=ok
// SIG undefined FUN_145843488(void)

void FUN_145843488(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xe0);
  FUN_1458434b8(param_2);
  *param_2 = &PTR_FUN_14b236230;
  return;
}



// FUNCTION 1458434b8 FUN_1458434b8 body=161 status=ok
// SIG undefined FUN_1458434b8(void)

undefined8 * FUN_1458434b8(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1412171fe();
  *param_1 = &PTR_FUN_14b2360a0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_1446ddc76(&local_20,"CtrlMv",1);
  param_1[1] = local_20;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584355a FUN_14584355a body=591 status=ok
// SIG undefined FUN_14584355a(void)

void FUN_14584355a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_2 + 0x40) == 0) {
    uVar4 = FUN_141218768();
    uVar4 = FUN_14477b664(uVar4);
    *(undefined8 *)(param_2 + 0x40) = uVar4;
  }
  lVar5 = FUN_141218768();
  uVar4 = FUN_141218768();
  FUN_1402d1bfa(&local_60,uVar4,param_3);
  if (*(longlong *)(param_2 + 0x38) != local_60) {
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  *(longlong *)(param_2 + 0x38) = local_60;
  lVar6 = FUN_141218768();
  if (lVar5 == 0) {
LAB_1458435fc:
    lVar6 = lVar5;
  }
  else if (lVar6 == 0) {
    lVar6 = 0;
  }
  else if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30)) goto LAB_1458435fc;
  if (*(longlong *)(param_2 + 0x40) != lVar6) {
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  uVar4 = FUN_14477b664(lVar6);
  lVar5 = FUN_14477b664(uVar4);
  *(longlong *)(param_2 + 0x40) = lVar5;
  if ((lVar5 != 0) && (*(longlong *)(param_2 + 0x38) != 0)) {
    *(undefined8 *)(param_2 + 0x48) = param_3;
  }
  lVar5 = FUN_14144d9c6(param_3);
  if (lVar5 == 0) goto LAB_14584375a;
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(lVar5 + 0x38);
  plVar1 = *(longlong **)(lVar5 + 0x18);
  plVar2 = *(longlong **)(param_2 + 0x58);
  if (plVar2 != plVar1) {
    *(longlong **)(param_2 + 0x58) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(lVar5 + 0x20);
  FUN_144a787a6(param_2 + 0xc0,lVar5 + 0x80);
  local_58 = 0;
  uStack_50 = 0;
  uVar4 = FUN_141218768();
  lVar6 = FUN_14477b664(uVar4);
  lVar7 = FUN_141218768();
  uVar4 = FUN_141218768();
  FUN_1402d1bfa(&local_48,uVar4,param_3);
  if (local_48 != 0) {
    uStack_50 = 0;
  }
  local_60 = local_48;
  lVar8 = FUN_141218768();
  if (lVar7 == 0) {
LAB_14584370c:
    lVar8 = lVar7;
  }
  else if (lVar8 == 0) {
    lVar8 = 0;
  }
  else if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
           lVar8 + 0x30)) goto LAB_14584370c;
  if (lVar6 != lVar8) {
    uStack_50 = 0;
  }
  uVar4 = FUN_14477b664(lVar8);
  local_58 = FUN_14477b664(uVar4);
  if ((local_48 != 0) && (local_58 != 0)) {
    uStack_50 = param_3;
  }
  uVar3 = FUN_1412188d6(param_1,&local_60);
  *(undefined1 *)(param_2 + 0x30) = uVar3;
  uVar3 = FUN_1412187a2(param_1,lVar5);
  *(undefined1 *)(param_2 + 0x31) = uVar3;
LAB_14584375a:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458437b2 FUN_1458437b2 body=508 status=ok
// SIG undefined FUN_1458437b2(void)

undefined8 * FUN_1458437b2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  memset(param_1,0,0x90);
  FUN_1404e2388(param_1);
  *param_1 = &PTR_FUN_14b5eb5b0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  uVar1 = DAT_14c846500;
  param_1[0x16] = DAT_14c8464f8;
  param_1[0x17] = uVar1;
  param_1[0x18] = DAT_14c846508;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1c] = DAT_14c8464e0;
  param_1[0x1d] = uVar1;
  param_1[0x1e] = DAT_14c8464f0;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  uVar1 = DAT_14c846500;
  param_1[0x20] = DAT_14c8464f8;
  param_1[0x21] = uVar1;
  param_1[0x22] = DAT_14c846508;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12a) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined2 *)((longlong)param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x43480000;
  *(undefined2 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x28] = 0x3f0000003d4ccccd;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x3f80000000000000;
  *(undefined2 *)(param_1 + 0x2b) = 3;
  *(undefined8 *)((longlong)param_1 + 0x163) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  FUN_141218d3c(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0xf00000d0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  return param_1;
}



// FUNCTION 1458439ae FUN_1458439ae body=96 status=ok
// SIG undefined FUN_1458439ae(void)

ulonglong FUN_1458439ae(longlong param_1)

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
LAB_1458439f1:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1458439f1;
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



// FUNCTION 145843a22 FUN_145843a22 body=40 status=ok
// SIG undefined FUN_145843a22(void)

undefined8 FUN_145843a22(undefined8 param_1,int param_2)

{
  FUN_145843a4a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145843a4a FUN_145843a4a body=93 status=ok
// SIG undefined FUN_145843a4a(void)

void FUN_145843a4a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b14adb0;
  param_1[6] = &DAT_14a176f00;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  param_1[6] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 7);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145843aa8 FUN_145843aa8 body=156 status=ok
// SIG undefined FUN_145843aa8(void)

bool FUN_145843aa8(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145843b46 FUN_145843b46 body=202 status=ok
// SIG undefined FUN_145843b46(void)

void FUN_145843b46(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1449027d0(param_1,&local_40);
  lVar3 = *(longlong *)(local_40 + 0x410);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b0));
  *(int *)(lVar3 + 0x1a8) = *(int *)(lVar3 + 0x1a8) + 1;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  *(bool *)(lVar3 + 0x119) = param_2 == '\x02';
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b0));
  if (param_2 == '\x02') {
    FUN_14625d764(param_1);
    FUN_145843c12(param_1);
    FUN_141125d64(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145843c12 FUN_145843c12 body=680 status=ok
// SIG undefined FUN_145843c12(void)

void FUN_145843c12(longlong param_1)

{
  code ***pppcVar1;
  int *piVar2;
  code ***pppcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  code *local_80;
  longlong *local_78;
  longlong local_70 [2];
  code **local_60;
  code *local_58;
  code ***pppcStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar4 = (longlong *)FUN_1400d7050(param_1 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = FUN_144a5dd5e();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      lVar5 = (**(code **)(*plVar4 + 0x1098))(plVar4);
      if (lVar5 != 0) {
        lVar5 = FUN_141169abc(param_1);
        if (lVar5 != 0) {
          local_58 = (code *)0x0;
          pppcStack_50 = (code ***)0x0;
          local_48 = 0;
          local_40 = 0;
          uStack_38 = 0;
          FUN_1446ddda2(&local_58,"DiscoveryCategory_Collectible",0);
          if (DAT_14cb77ec0 != 0) {
            FUN_144837462(DAT_14cb77ec0,&local_58);
          }
          if (local_40 != 0) {
            FUN_1400020a8();
          }
          local_58 = (code *)0x0;
          pppcStack_50 = (code ***)0x0;
          local_48 = 0;
          local_40 = 0;
          uStack_38 = 0;
          FUN_1446ddda2(&local_58,"DiscoveryCategory_Activity",0);
          if (DAT_14cb77ec0 != 0) {
            FUN_144837462(DAT_14cb77ec0,&local_58);
          }
          if (local_40 != 0) {
            FUN_1400020a8();
          }
          local_58 = (code *)0x0;
          pppcStack_50 = (code ***)0x0;
          local_48 = 0;
          local_40 = 0;
          uStack_38 = 0;
          FUN_1446ddda2(&local_58,"DiscoveryCategory_PoA",0);
          if (DAT_14cb77ec0 != 0) {
            FUN_144837462(DAT_14cb77ec0,&local_58);
          }
          if (local_40 != 0) {
            FUN_1400020a8();
          }
          FUN_141219424(lVar5,local_70);
          FUN_1449027d0(param_1,&local_58);
          lVar5 = *(longlong *)(local_58 + 0x410);
          AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x1b0));
          pppcVar3 = pppcStack_50;
          *(int *)(lVar5 + 0x1a8) = *(int *)(lVar5 + 0x1a8) + 1;
          if (pppcStack_50 != (code ***)0x0) {
            LOCK();
            pppcVar1 = pppcStack_50 + 1;
            *(int *)pppcVar1 = *(int *)pppcVar1 + -1;
            UNLOCK();
            if (*(int *)pppcVar1 == 0) {
              (***pppcStack_50)(pppcStack_50);
              LOCK();
              piVar2 = (int *)((longlong)pppcVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(*pppcVar3)[2])(pppcVar3);
              }
            }
          }
          if (*(int *)(lVar5 + 200) != *(int *)(lVar5 + 0xf4)) {
            FUN_148e2c0bc(lVar5 + 0xc0);
            FUN_148e2c204(lVar5 + 0xc0);
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x1b0));
          if (DAT_14cb78540 != 0) {
            local_78 = &local_88;
            local_60 = &local_80;
            local_80 = FUN_14425d736;
            pppcStack_50 = &local_60;
            local_58 = FUN_1400460c0;
            local_88 = param_1;
            FUN_140045d3e(DAT_14cb78540,&local_58,0);
          }
          if (local_70[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145843ebc FUN_145843ebc body=112 status=ok
// SIG undefined FUN_145843ebc(void)

void FUN_145843ebc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 145843f34 FUN_145843f34 body=210 status=ok
// SIG undefined FUN_145843f34(void)

undefined8 * FUN_145843f34(undefined8 *param_1)

{
  FUN_145844006();
  *param_1 = &PTR_FUN_14b841860;
  param_1[6] = &PTR_FUN_14b841b20;
  param_1[7] = &PTR_LAB_14b841bb0;
  param_1[9] = &PTR_FUN_14b841c00;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0xff;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc4) = 0xff;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 0xff;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffffffffffff;
  param_1[0x28] = 0;
  return param_1;
}



// FUNCTION 145844006 FUN_145844006 body=78 status=ok
// SIG undefined FUN_145844006(void)

undefined8 * FUN_145844006(undefined8 *param_1)

{
  FUN_145844054();
  param_1[6] = &PTR_LAB_14b80e960;
  FUN_1409e1656(param_1 + 7);
  *param_1 = &PTR_FUN_14b80c7f0;
  param_1[6] = &PTR_LAB_14b80cab0;
  param_1[7] = &PTR_LAB_14b80cb40;
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 145844054 FUN_145844054 body=32 status=ok
// SIG undefined FUN_145844054(void)

undefined8 * FUN_145844054(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14b8f1470;
  return param_1;
}



// FUNCTION 145844074 FUN_145844074 body=60 status=ok
// SIG undefined FUN_145844074(void)

void FUN_145844074(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458440b0(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ae425a0;
  puVar1[5] = &PTR_FUN_14ae428f0;
  *(undefined1 *)(puVar1 + 0x44) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x22c) = 0;
  return;
}



// FUNCTION 1458440b0 FUN_1458440b0 body=160 status=ok
// SIG undefined FUN_1458440b0(void)

undefined8 * FUN_1458440b0(undefined8 *param_1)

{
  FUN_145844150();
  *param_1 = &PTR_FUN_14ae43210;
  param_1[5] = &PTR_FUN_14ae43560;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1d9) = 6;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)((longlong)param_1 + 0x217) = 0;
  return param_1;
}



// FUNCTION 145844150 FUN_145844150 body=70 status=ok
// SIG undefined FUN_145844150(void)

undefined8 * FUN_145844150(undefined8 *param_1)

{
  FUN_141219ba0();
  *param_1 = &PTR_FUN_14a5475d0;
  param_1[5] = &PTR_FUN_14a547900;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) | 1;
  FUN_140e2f50a(param_1,4);
  return param_1;
}



// FUNCTION 145844196 FUN_145844196 body=148 status=ok
// SIG undefined FUN_145844196(void)

void FUN_145844196(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  FUN_145844234();
  FUN_145844274(param_1 + 0x50);
  FUN_1458442b4(param_1 + 0xa0);
  FUN_1458442f4(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0x140) = 0;
  plVar3 = *(longlong **)(param_1 + 0x148);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x148) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145844226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14584422a FUN_14584422a body=9 status=ok
// SIG undefined FUN_14584422a(void)

void FUN_14584422a(longlong param_1)

{
  FUN_1458446b6(param_1 + 0x10);
  return;
}



// FUNCTION 145844234 FUN_145844234 body=63 status=ok
// SIG undefined FUN_145844234(void)

void FUN_145844234(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1458449f6(param_1);
    FUN_14121a0ca(param_1);
    return;
  }
  FUN_14121a0ca(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1415ab44e(param_1);
  return;
}



// FUNCTION 145844274 FUN_145844274 body=63 status=ok
// SIG undefined FUN_145844274(void)

void FUN_145844274(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145844b3e(param_1);
    FUN_141219bdc(param_1);
    return;
  }
  FUN_141219bdc(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_141538a9e(param_1);
  return;
}



// FUNCTION 1458442b4 FUN_1458442b4 body=63 status=ok
// SIG undefined FUN_1458442b4(void)

void FUN_1458442b4(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145844766(param_1);
    FUN_1458444b8(param_1);
    return;
  }
  FUN_1458444b8(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_145d2e4c8(param_1);
  return;
}



// FUNCTION 1458442f4 FUN_1458442f4 body=63 status=ok
// SIG undefined FUN_1458442f4(void)

void FUN_1458442f4(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1458448ae(param_1);
    FUN_145844334(param_1);
    return;
  }
  FUN_145844334(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14579e852(param_1);
  return;
}



// FUNCTION 145844334 FUN_145844334 body=376 status=ok
// SIG undefined FUN_145844334(void)

void FUN_145844334(longlong *param_1)

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



// FUNCTION 1458444ae FUN_1458444ae body=9 status=ok
// SIG undefined FUN_1458444ae(void)

void FUN_1458444ae(longlong param_1)

{
  FUN_145844646(param_1 + 0x10);
  return;
}



// FUNCTION 1458444b8 FUN_1458444b8 body=376 status=ok
// SIG undefined FUN_1458444b8(void)

void FUN_1458444b8(longlong *param_1)

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



// FUNCTION 145844632 FUN_145844632 body=9 status=ok
// SIG undefined FUN_145844632(void)

void FUN_145844632(longlong param_1)

{
  FUN_1458446b6(param_1 + 0x10);
  return;
}



// FUNCTION 14584463c FUN_14584463c body=9 status=ok
// SIG undefined FUN_14584463c(void)

void FUN_14584463c(longlong param_1)

{
  FUN_1458446b6(param_1 + 0x10);
  return;
}



// FUNCTION 145844646 FUN_145844646 body=111 status=ok
// SIG undefined FUN_145844646(void)

void FUN_145844646(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14afdfef0;
  FUN_144760e21(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x11];
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
  FUN_1458446b6(param_1);
  return;
}



// FUNCTION 1458446b6 FUN_1458446b6 body=176 status=ok
// SIG undefined FUN_1458446b6(void)

void FUN_1458446b6(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14afdfd90;
  FUN_1404fd004(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x60;
  do {
    FUN_14093d487(*(undefined8 *)((longlong)param_1 + lVar1),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 8));
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x40);
  lVar1 = 0x40;
  do {
    FUN_14093d487(*(undefined8 *)((longlong)param_1 + lVar1),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 8));
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x20);
  FUN_144760e21(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145844766 FUN_145844766 body=327 status=ok
// SIG undefined FUN_145844766(void)

void FUN_145844766(longlong *param_1)

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



// FUNCTION 1458448ae FUN_1458448ae body=327 status=ok
// SIG undefined FUN_1458448ae(void)

void FUN_1458448ae(longlong *param_1)

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



// FUNCTION 1458449f6 FUN_1458449f6 body=327 status=ok
// SIG undefined FUN_1458449f6(void)

void FUN_1458449f6(longlong *param_1)

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



// FUNCTION 145844b3e FUN_145844b3e body=327 status=ok
// SIG undefined FUN_145844b3e(void)

void FUN_145844b3e(longlong *param_1)

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



// FUNCTION 145844c94 FUN_145844c94 body=72 status=ok
// SIG undefined FUN_145844c94(void)

undefined8 * FUN_145844c94(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6778f0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_14097122c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145844cdc FUN_145844cdc body=78 status=ok
// SIG undefined FUN_145844cdc(void)

undefined8 FUN_145844cdc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b41e200);
  iVar1 = FUN_1448332aa(param_2,&DAT_14b41e200);
  if (-1 < iVar1) {
    uVar2 = FUN_14121a488(param_1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 145844d2a FUN_145844d2a body=93 status=ok
// SIG undefined FUN_145844d2a(void)

undefined8 * FUN_145844d2a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14121ab67(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145844d88(param_1,iVar1);
      FUN_14121ad66(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145844d88 FUN_145844d88 body=118 status=ok
// SIG undefined FUN_145844d88(void)

void FUN_145844d88(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x308,8);
    iVar2 = (int)(uVar1 / 0x308);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x308,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145844e26 FUN_145844e26 body=40 status=ok
// SIG undefined FUN_145844e26(void)

undefined8 FUN_145844e26(undefined8 param_1,int param_2)

{
  FUN_145844e4e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145844e4e FUN_145844e4e body=118 status=ok
// SIG undefined FUN_145844e4e(void)

void FUN_145844e4e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd0d3d0;
  param_1[0x21] = &PTR_FUN_14bd0d6e0;
  param_1[0x22] = &PTR_FUN_14bd0d710;
  param_1[0x23] = &PTR_FUN_14bd0d730;
  param_1[0x24] = &PTR_FUN_14bd0d748;
  FUN_14121c54c(param_1 + 0x2e);
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_141136054(param_1);
  return;
}



// FUNCTION 145844ec4 FUN_145844ec4 body=188 status=ok
// SIG undefined FUN_145844ec4(void)

void FUN_145844ec4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_141546c72();
  if (param_1[8] != 0) {
    FUN_14480f766(uVar4);
  }
  param_1[6] = 0;
  plVar3 = (longlong *)param_1[7];
  if (plVar3 != (longlong *)0x0) {
    param_1[7] = 0;
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
    plVar3 = (longlong *)param_1[7];
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
  FUN_145844f89(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145844f80 FUN_145844f80 body=9 status=ok
// SIG undefined FUN_145844f80(void)

void FUN_145844f80(longlong param_1)

{
  FUN_145844fc2(param_1 + 0x10);
  return;
}



// FUNCTION 145844f89 FUN_145844f89 body=57 status=ok
// SIG undefined FUN_145844f89(void)

void FUN_145844f89(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 145844fc2 FUN_145844fc2 body=116 status=ok
// SIG undefined FUN_145844fc2(void)

void FUN_145844fc2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_145845036(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145845032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145845036 FUN_145845036 body=38 status=ok
// SIG undefined FUN_145845036(void)

void FUN_145845036(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14584505c(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 14584505c FUN_14584505c body=84 status=ok
// SIG undefined FUN_14584505c(void)

void FUN_14584505c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14121cb76(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x0001458450ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458450b0 FUN_1458450b0 body=24 status=ok
// SIG undefined FUN_1458450b0(void)

void FUN_1458450b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001458450c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1458450c8 FUN_1458450c8 body=38 status=ok
// SIG undefined FUN_1458450c8(void)

undefined8 FUN_1458450c8(undefined8 param_1,int param_2)

{
  FUN_1458450ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458450ee FUN_1458450ee body=328 status=ok
// SIG undefined FUN_1458450ee(void)

void FUN_1458450ee(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14b4ef930;
  param_1[7] = 0;
  plVar3 = (longlong *)param_1[8];
  if (plVar3 != (longlong *)0x0) {
    param_1[8] = 0;
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
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
    FUN_1446f470e(local_20,L"WINDOWS",1);
    plVar3 = (longlong *)FUN_140272950(local_20);
    (**(code **)(*plVar3 + 0x38))(plVar3,param_1[9]);
    param_1[9] = 0;
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
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
  plVar3 = (longlong *)param_1[8];
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
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145845238 FUN_145845238 body=24 status=ok
// SIG undefined FUN_145845238(void)

void FUN_145845238(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014584524c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145845250 FUN_145845250 body=38 status=ok
// SIG undefined FUN_145845250(void)

undefined8 FUN_145845250(undefined8 param_1,int param_2)

{
  FUN_145845276();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


